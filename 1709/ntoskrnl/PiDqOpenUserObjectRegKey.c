/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140447AF4
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140447A84 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140447D78 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpValidateObjectName @ 0x14045A188 (_PnpValidateObjectName.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     PnpConcatPWSTR @ 0x14051B1D4 (PnpConcatPWSTR.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        unsigned int a8)
{
  PVOID v9; // r14
  NTSTATUS RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  bool v12; // zf
  struct _SECURITY_SUBJECT_CONTEXT *v13; // rax
  PACCESS_TOKEN PrimaryToken; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int Tree; // eax
  char v20; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  int v29[2]; // [rsp+80h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)v29 = a1;
  v9 = 0LL;
  *a6 = 0LL;
  TokenInformation = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v20 = 0;
  v25 = a2;
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
      v20 = 1;
    }
    v12 = p_SubjectContext->ClientToken == 0LL;
    v13 = &SubjectContext;
    if ( v12 )
    {
      if ( a5 )
        v13 = a5;
      PrimaryToken = v13->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v13 = a5;
      PrimaryToken = v13->ClientToken;
    }
    v15 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v9 = TokenInformation;
    RelativeObjectRegPath = v15;
    if ( v15 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_23;
      }
      goto LABEL_10;
    }
    if ( v15 == -1073741821 )
    {
LABEL_10:
      SeQueryUserSidToken(PrimaryToken, Sid, 68LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath >= 0 )
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v16 = **(_QWORD **)&PiPnpRtlCtx;
          else
            LODWORD(v16) = 0;
          RelativeObjectRegPath = SysCtxRegOpenKey(v16, 0, v26, 0, 4, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v29[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(
                         PiPnpRtlCtx,
                         (_DWORD)Handle,
                         (_DWORD)P,
                         0,
                         a3,
                         0LL,
                         (__int64)a6,
                         (__int64)&v22);
              }
              else
              {
                v22 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v17 = **(_QWORD **)&PiPnpRtlCtx;
                else
                  LODWORD(v17) = 0;
                Tree = SysCtxRegOpenKey(v17, (_DWORD)Handle, (_DWORD)P, 0, a3, (__int64)a6);
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
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v20 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)RelativeObjectRegPath;
}
