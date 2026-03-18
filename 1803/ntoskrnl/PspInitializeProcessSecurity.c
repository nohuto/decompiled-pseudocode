/*
 * XREFs of PspInitializeProcessSecurity @ 0x1404F019C
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     ObInitializeFastReference @ 0x1404F0348 (ObInitializeFastReference.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     SeAssignPrimaryToken @ 0x140640A5C (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x14077AFF0 (PspIdentityBasedJobBreakaway.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // rsi
  PACCESS_TOKEN v15; // r14
  int *v20; // r15
  int SessionId; // eax
  int v22; // r9d
  int v23; // r12d
  int v24; // eax
  _DWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF
  PEPROCESS v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  __int64 v29; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a14;
  v15 = 0LL;
  *a14 = 0;
  v20 = v14 + 1;
  v14[1] = 0;
  if ( Process )
  {
    v26[0] = a5;
    v26[1] = a12;
    v26[2] = a6;
    v26[3] = a7;
    v27 = Process;
    v28 = a13;
    SessionId = MmGetSessionId(a2);
    v23 = SeSubProcessToken(
            a2,
            a3,
            (unsigned int)&v29,
            v22 != 0 ? 1 : 3,
            SessionId,
            (__int64)v26,
            a8,
            a9,
            a10,
            a11,
            (__int64)&a14);
    if ( v23 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v29);
      if ( a4 || (_BYTE)a14 )
        *v14 = 1;
      if ( BYTE1(a14) )
      {
        *v20 = 1;
        v24 = 1;
      }
      else
      {
        v24 = *v20;
      }
      if ( !v24 && BYTE2(a14) )
      {
        v15 = PsReferencePrimaryToken(Process);
        v23 = PspIdentityBasedJobBreakaway(v15, v29, v14 + 1);
      }
    }
    if ( *v14 )
      *(_QWORD *)(a2 + 2104) = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      *(_QWORD *)(a2 + 2104) = *(_QWORD *)&Process[2].Spare2[7];
  }
  else
  {
    ObInitializeFastReference(a2 + 856, 0LL);
    SeAssignPrimaryToken(a2, a3);
    v23 = 0;
  }
  if ( v15 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v15);
  return (unsigned int)v23;
}
