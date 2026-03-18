/*
 * XREFs of ExpSetTimer2 @ 0x1400E2540
 * Callers:
 *     NtSetTimer2 @ 0x1400E2514 (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x14012FE04 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x14013224C (NtSetIRTimer.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExpTimerSetParametersAreValid @ 0x1400E270C (ExpTimerSetParametersAreValid.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, void **a2, unsigned __int64 a3)
{
  HANDLE v3; // r10
  char v4; // r15
  KPROCESSOR_MODE PreviousMode; // r9
  void *v6; // rbx
  __int128 *v7; // rdi
  __int64 v8; // rbx
  NTSTATUS result; // eax
  NTSTATUS v10; // r14d
  _QWORD *v11; // rsi
  PVOID Object[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = Handle;
  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a2;
      v6 = *(void **)v8;
      Object[1] = v6;
      if ( a3 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 16 > 0x7FFFFFFF0000LL || a3 + 16 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v13 = *(_OWORD *)a3;
        v7 = &v13;
      }
      else
      {
        v7 = 0LL;
      }
    }
    else
    {
      v6 = *a2;
      if ( a3 )
      {
        v13 = *(_OWORD *)a3;
        v7 = &v13;
      }
    }
    v4 = 1;
  }
  if ( v7 && !(unsigned __int8)ExpTimerSetParametersAreValid(v7, a2, a3) )
    return -1073741583;
  result = ObReferenceObjectByHandle(v3, 2u, ExpIRTimerObjectType, PreviousMode, Object, 0LL);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = Object[0];
    *((_QWORD *)Object[0] + 18) = v6;
    v11[19] = 0LL;
    if ( v7 )
      v11[19] = *((_QWORD *)v7 + 1);
    if ( v4 )
      KeSetTimer2((__int64)v11, (__int64)v6, 0LL, (__int64)v7);
    else
      KeCancelTimer2(v11, 0LL);
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    return v10;
  }
  return result;
}
