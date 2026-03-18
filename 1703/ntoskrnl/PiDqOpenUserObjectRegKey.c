/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1404BE304
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x1404BE0FC (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _PnpValidateObjectName @ 0x1404BE190 (_PnpValidateObjectName.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404BE590 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        int a8)
{
  PVOID v8; // r15
  int RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  bool v11; // zf
  struct _SECURITY_SUBJECT_CONTEXT *v12; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int Tree; // eax
  char v19; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  PVOID TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  int v28[2]; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  *a6 = 0LL;
  v8 = 0LL;
  *(_QWORD *)v28 = a1;
  TokenInformation = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  v19 = 0;
  v24 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(0LL, a1, a2, a8);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( a5 )
    {
      p_SubjectContext = a5;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      v19 = 1;
    }
    v11 = p_SubjectContext->ClientToken == 0LL;
    v12 = &SubjectContext;
    if ( v11 )
    {
      if ( a5 )
        v12 = a5;
      PrimaryToken = v12->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v12 = a5;
      PrimaryToken = v12->ClientToken;
    }
    v14 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v8 = TokenInformation;
    RelativeObjectRegPath = v14;
    if ( v14 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_23;
      }
      goto LABEL_10;
    }
    if ( v14 == -1073741821 )
    {
LABEL_10:
      SeQueryUserSidToken(PrimaryToken, Sid, 68LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath >= 0 )
        {
          v15 = *(_QWORD *)&PiPnpRtlCtx ? **(_QWORD **)&PiPnpRtlCtx : 0LL;
          RelativeObjectRegPath = SysCtxRegOpenKey(v15, 0LL, v25, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v28[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(*(__int64 **)&PiPnpRtlCtx, (__int64)Handle, 0LL, 0LL, a3, 0LL);
              }
              else
              {
                v22 = 2;
                v16 = *(_QWORD *)&PiPnpRtlCtx ? **(_QWORD **)&PiPnpRtlCtx : 0LL;
                Tree = SysCtxRegOpenKey(v16, (__int64)Handle, 0LL, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
              if ( Tree >= 0 )
              {
                if ( a7 )
                  *a7 = v22;
              }
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v19 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RelativeObjectRegPath;
}
