/*
 * XREFs of KeCheckForTimer @ 0x140241F58
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402B8EBC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VerifierKeInitializeTimerEx @ 0x140826370 (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG v5; // r15d
  ULONG v6; // r13d
  __int64 *v7; // r12
  volatile signed __int32 *v8; // rbx
  _QWORD **v9; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // r9
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-48h]
  ULONG v17; // [rsp+90h] [rbp+18h]
  int v18; // [rsp+98h] [rbp+20h] BYREF

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v5 = 0;
    v6 = result;
    if ( result )
    {
      v7 = KiProcessorBlock;
      do
      {
        v17 = 0;
        v8 = (volatile signed __int32 *)(*v7 + 14464);
        v9 = (_QWORD **)(*v7 + 14472);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
            if ( !_interlockedbittestandset64(v8, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
            do
              KeYieldProcessorEx(&v18);
            while ( *(_QWORD *)v8 );
          }
          v11 = *v9;
          if ( *v9 != v9 )
          {
            v12 = BugCheckParameter3 - 64;
            do
            {
              v13 = (ULONG_PTR)(v11 - 4);
              v11 = (_QWORD *)*v11;
              if ( v13 > v12 && v13 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 0LL, v13, BugCheckParameter3, BugCheckParameter4);
              v14 = KiWaitAlways ^ _byteswap_uint64(v13 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v13 + 48), KiWaitNever));
              if ( v14 )
              {
                if ( v14 > v12 && v14 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 1uLL, v14, BugCheckParameter3, BugCheckParameter4);
                v15 = *(_QWORD *)(v14 + 24);
                if ( v15 >= BugCheckParameter3 && v15 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 2uLL, v15, BugCheckParameter3, BugCheckParameter4);
              }
            }
            while ( v11 != v9 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          __writecr8(CurrentIrql);
          v9 += 4;
          result = v17 + 1;
          v8 += 8;
          v17 = result;
        }
        while ( result < 0x100 );
        ++v5;
        ++v7;
      }
      while ( v5 < v6 );
    }
  }
  return result;
}
