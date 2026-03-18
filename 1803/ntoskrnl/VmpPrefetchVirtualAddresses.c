/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x1402AC55C
 * Callers:
 *     VmpPrefetchWorker @ 0x1407A0FF0 (VmpPrefetchWorker.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VmpFillGpnRanges @ 0x1402ABDD0 (VmpFillGpnRanges.c)
 *     VmpProcessContextLockShared @ 0x1402AC860 (VmpProcessContextLockShared.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall VmpPrefetchVirtualAddresses(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  PVOID PoolWithTag; // r15
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+30h] [rbp-30h]
  int (__fastcall **ExtensionTable)(PVOID, unsigned __int64, __int64, __int64); // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  unsigned __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v3 = *((_QWORD *)SpinLock + 9);
  if ( v3 != -1 )
  {
    ExtensionTable = (int (__fastcall **)(PVOID, unsigned __int64, __int64, __int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
    if ( ExtensionTable )
    {
      v18 = 0LL;
      v7 = 0LL;
      v8 = a3;
      if ( a3 >= 0x2000 )
        v8 = 0x2000LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v8, 0x72506D56u);
      if ( PoolWithTag )
      {
        v10 = &a2[2 * a3];
        v19 = 0LL;
        v13 = VmpProcessContextLockShared(SpinLock);
        while ( a2 < v10 )
        {
          v11 = *a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
          v16 = *a2 >> 12;
          v17 = (v11 >> 12) - v16;
          while ( v17 )
          {
            VmpFillGpnRanges((__int64)SpinLock, &v16, (__int64)PoolWithTag, (__int64 *)&v18, v8, &v19);
            v7 = v18;
            if ( v18 >= v8 )
            {
              v15 = *((_QWORD *)SpinLock + 5);
              ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
              __writecr8(v13);
              if ( (*ExtensionTable)(PoolWithTag, v7, v3, 1LL) < 0 )
                goto LABEL_18;
              v7 = 0LL;
              v18 = 0LL;
              v13 = VmpProcessContextLockShared(SpinLock);
              v12 = v19;
              if ( v15 != *((_QWORD *)SpinLock + 5) )
                v12 = 0LL;
              v19 = v12;
            }
          }
          a2 += 2;
        }
        ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
        __writecr8(v13);
        if ( v7 )
          (*ExtensionTable)(PoolWithTag, v7, v3, 1LL);
      }
LABEL_18:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(VmpExtensionHost + 64));
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
