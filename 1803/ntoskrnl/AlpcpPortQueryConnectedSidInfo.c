/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x140551F78
 * Callers:
 *     NtAlpcQueryInformation @ 0x140551C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     AlpcpReferenceConnectedPort @ 0x1404CF2BC (AlpcpReferenceConnectedPort.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // r13
  signed __int64 *v11; // r14
  PACCESS_TOKEN v12; // rbx
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v16; // [rsp+48h] [rbp-A0h]
  PSID v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v18 = a1;
  v17 = a2;
  Sid1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid((char *)a2, a5, a3, (__int64)a4, v14, 1, &Sid1);
  v16 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v8 = 0LL;
    v9 = AlpcpReferenceConnectedPort(a1);
    v10 = (_QWORD *)v9;
    if ( v9 )
    {
      v11 = (signed __int64 *)(v9 + 352);
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
      if ( (v10[3] & 1) == 0 )
        v8 = (struct _KPROCESS *)v10[3];
      if ( v8 )
        ObfReferenceObjectWithTag(v8, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      ObfDereferenceObject(v10);
    }
    if ( v8 )
    {
      v12 = PsReferencePrimaryToken(v8);
      SeQueryUserSidToken((__int64)v12, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5], (unsigned __int64)v12);
      LOBYTE(v12) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v8, 0x63706C41u);
      v13 = (_BYTE)v12 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v13 = -1073741769;
    }
    if ( Sid1 != a2 )
      SeReleaseSid(Sid1, a5, 1);
    return v13;
  }
  return result;
}
