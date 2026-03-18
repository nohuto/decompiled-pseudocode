/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x14051A080
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x14051C2CC (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     PiDqGetRelativeObjectRegPath @ 0x14051A334 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x14051A428 (PnpConcatPWSTR.c)
 *     _PnpValidateObjectName @ 0x14051C15C (_PnpValidateObjectName.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        unsigned int a8)
{
  PVOID v8; // r13
  bool v9; // di
  int RelativeObjectRegPath; // ebx
  bool v11; // zf
  bool v12; // si
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v14; // rax
  PACCESS_TOKEN PrimaryToken; // r14
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int Tree; // eax
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  PVOID TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  int v31[2]; // [rsp+90h] [rbp-70h]
  int *v32; // [rsp+98h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[80]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = 0LL;
  v26 = a2;
  *(_QWORD *)v31 = a1;
  v9 = 0;
  v32 = a7;
  Handle = 0LL;
  *a6 = 0LL;
  v29 = a6;
  TokenInformation = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(a6, a1, a2, a8);
  if ( RelativeObjectRegPath >= 0 )
  {
    v11 = a5 == 0LL;
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v11 = 1;
    }
    v12 = v11;
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    v11 = p_SubjectContext->ClientToken == 0LL;
    v14 = &SubjectContext;
    if ( v11 )
    {
      if ( a5 )
        v14 = a5;
      PrimaryToken = v14->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v14 = a5;
      PrimaryToken = v14->ClientToken;
    }
    v16 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v8 = TokenInformation;
    RelativeObjectRegPath = v16;
    if ( v16 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        v9 = v12;
        goto LABEL_25;
      }
      goto LABEL_12;
    }
    v9 = v12;
    if ( v16 == -1073741821 )
    {
LABEL_12:
      SeQueryUserSidToken((__int64)PrimaryToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      v9 = v12;
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath >= 0 )
        {
          v17 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
          RelativeObjectRegPath = SysCtxRegOpenKey(v17, 0LL, v27, 0, 4u, (__int64)&Handle);
          v9 = v12;
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v31[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(PiPnpRtlCtx, (_DWORD)Handle, v24, 0, a3, 0LL, (__int64)v29, (__int64)&v23);
              }
              else
              {
                v23 = 2;
                v18 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
                Tree = SysCtxRegOpenKey(v18, (__int64)Handle, v24, 0, a3, (__int64)v29);
              }
              RelativeObjectRegPath = Tree;
              v9 = v12;
              if ( Tree >= 0 )
              {
                v9 = v12;
                if ( v32 )
                  *v32 = v23;
              }
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RelativeObjectRegPath;
}
