/*
 * XREFs of PspInitializeProcessSecurity @ 0x14048C3A8
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     ObInitializeFastReference @ 0x14048C56C (ObInitializeFastReference.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x1405F09B8 (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x140717048 (PspIdentityBasedJobBreakaway.c)
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
  int v15; // r12d
  PACCESS_TOKEN v19; // r14
  _DWORD *v20; // r15
  int SessionId; // eax
  int v22; // r9d
  int v23; // r10d
  _DWORD v25[4]; // [rsp+60h] [rbp-20h] BYREF
  PEPROCESS v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a14;
  v15 = 0;
  v19 = 0LL;
  v20 = a14 + 1;
  *a14 = 0;
  *v20 = 0;
  if ( Process )
  {
    v25[0] = a5;
    v25[1] = a12;
    v25[2] = a6;
    v25[3] = a7;
    v27 = a13;
    v26 = Process;
    SessionId = MmGetSessionId(a2);
    v15 = SeSubProcessToken(
            a2,
            v23,
            (unsigned int)&v28,
            v22 != 0 ? 1 : 3,
            SessionId,
            (__int64)v25,
            a8,
            a9,
            a10,
            a11,
            (__int64)&a14);
    if ( v15 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v28);
      if ( a4 || (_BYTE)a14 )
        *v14 = 1;
      if ( BYTE1(a14) )
        *v20 = 1;
      if ( !*v20 && BYTE2(a14) )
      {
        v19 = PsReferencePrimaryToken(Process);
        v15 = PspIdentityBasedJobBreakaway(v19, v28, v20);
      }
    }
    if ( *v14 )
      *(_QWORD *)(a2 + 2104) = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      *(_QWORD *)(a2 + 2104) = *(_QWORD *)&Process[2].Spare2[7];
  }
  else
  {
    *(_QWORD *)(a2 + 856) = 0LL;
    SeAssignPrimaryToken(a2, a3);
  }
  if ( v19 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v19);
  return (unsigned int)v15;
}
