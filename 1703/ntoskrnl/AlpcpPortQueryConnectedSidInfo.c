/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x140426B6C
 * Callers:
 *     NtAlpcQueryInformation @ 0x1404268B0 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     AlpcpReferenceConnectedPort @ 0x14047ECE0 (AlpcpReferenceConnectedPort.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  unsigned int v7; // edi
  __int64 result; // rax
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r15
  signed __int64 *v14; // rbx
  PACCESS_TOKEN v15; // rbx
  int v16; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v18; // [rsp+48h] [rbp-A0h]
  PSID v19; // [rsp+50h] [rbp-98h]
  __int64 v20; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v20 = a1;
  v19 = a2;
  v7 = 0;
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
  result = SeCaptureSid(a2, v16, 1, (__int64)&Sid1);
  v18 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v9 = 0LL;
    v10 = AlpcpReferenceConnectedPort(a1);
    v13 = (_QWORD *)v10;
    if ( v10 )
    {
      v14 = (signed __int64 *)(v10 + 352);
      ExAcquirePushLockSharedEx(v10 + 352, 0LL);
      v9 = (struct _KPROCESS *)v13[3];
      if ( ((unsigned __int8)v9 & 1) != 0 )
        v9 = 0LL;
      if ( v9 )
        ObfReferenceObjectWithTag(v9, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      ObfDereferenceObject(v13);
    }
    if ( v9 )
    {
      v15 = PsReferencePrimaryToken(v9);
      SeQueryUserSidToken(v15, Sid2, 68LL);
      ObFastDereferenceObject((signed __int64 *)&v9[1].Affinity.Bitmap[5], (unsigned __int64)v15);
      if ( !RtlEqualSid(Sid1, Sid2) )
        v7 = -1073741152;
      ObfDereferenceObjectWithTag(v9, 0x63706C41u);
    }
    else
    {
      v7 = -1073741769;
    }
    if ( Sid1 != a2 )
    {
      LOBYTE(v12) = 1;
      LOBYTE(v11) = a5;
      SeReleaseSid(Sid1, v11, v12);
    }
    return v7;
  }
  return result;
}
