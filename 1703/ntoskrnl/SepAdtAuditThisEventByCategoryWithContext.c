/*
 * XREFs of SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14003E070 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140247590 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406F44D0 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditThisEventByCategoryWithContext(
        unsigned int a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v3; // rbp
  char v5; // di
  int v6; // eax
  char v7; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v11; // edx
  __int16 v12; // r13
  __int16 v13; // r12
  unsigned __int16 *v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  int v17; // r9d
  unsigned int i; // r11d
  char v19; // cl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1;
  v5 = a2;
  v6 = SeAuditingStateByCategory[a1];
  if ( !v6 )
    return 0;
  if ( (v6 & a2) != 0 )
    return 1;
  v7 = 0;
  if ( SepTokenPolicyCounterByCategory[a1] )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[118] == 2 )
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        if ( (_DWORD)v3 )
        {
          v14 = AdtpPerCategoryCount;
          v15 = v3;
          do
          {
            v16 = *v14++;
            v11 += v16;
            --v15;
          }
          while ( v15 );
        }
        v17 = AdtpPerCategoryCount[v3];
        for ( i = v11 + v17; v11 < i; ++v11 )
        {
          v19 = 4 * (v11 & 1);
          if ( (((unsigned __int8)ClientToken[((unsigned __int64)v11 >> 1) + 88] >> v19) & 1) != 0 )
          {
            if ( (v5 & 2) != 0 )
              goto LABEL_29;
            ++v12;
          }
          if ( (((unsigned __int8)ClientToken[((unsigned __int64)v11 >> 1) + 88] >> v19) & 4) != 0 )
          {
            if ( (v5 & 0x20) != 0 )
              goto LABEL_29;
            ++v13;
          }
        }
        if ( (v5 & 1) != 0 && v12 == (_WORD)v17 || (v5 & 0x10) != 0 && v13 == (_WORD)v17 )
LABEL_29:
          v7 = 1;
      }
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  return v7;
}
