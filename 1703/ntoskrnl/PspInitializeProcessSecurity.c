/*
 * XREFs of PspInitializeProcessSecurity @ 0x1404A1020
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObInitializeFastReference @ 0x1404A11D4 (ObInitializeFastReference.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x1405D4698 (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x1406E0D48 (PspIdentityBasedJobBreakaway.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        _DWORD *a12)
{
  _DWORD *v12; // rsi
  int v13; // r12d
  PACCESS_TOKEN v17; // r14
  _DWORD *v18; // r15
  int SessionId; // eax
  int v20; // r9d
  int v21; // r10d
  _DWORD v23[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF

  v12 = a12;
  v13 = 0;
  v17 = 0LL;
  *a12 = 0;
  v18 = v12 + 1;
  v12[1] = 0;
  if ( Process )
  {
    v23[0] = a5;
    v23[1] = a11;
    v23[2] = a6;
    v23[3] = (HIDWORD(Process[2].ActiveProcessors.Bitmap[0]) >> 19) & 1;
    SessionId = MmGetSessionId((struct _KPROCESS *)a2);
    v13 = SeSubProcessToken(
            a2,
            v21,
            (unsigned int)&v24,
            v20 != 0 ? 1 : 3,
            SessionId,
            (__int64)v23,
            a7,
            a8,
            a9,
            a10,
            (__int64)&a12);
    if ( v13 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v24);
      if ( a4 || (_BYTE)a12 )
        *v12 = 1;
      if ( BYTE1(a12) )
        *v18 = 1;
      if ( !*v18 && BYTE2(a12) )
      {
        v17 = PsReferencePrimaryToken(Process);
        v13 = PspIdentityBasedJobBreakaway(v17, v24, v12 + 1);
      }
    }
    if ( *v12 )
      *(_QWORD *)(a2 + 2072) = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)&Process[2].FreezeCount;
  }
  else
  {
    *(_QWORD *)(a2 + 856) = 0LL;
    SeAssignPrimaryToken(a2, a3);
  }
  if ( v17 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v17);
  return (unsigned int)v13;
}
