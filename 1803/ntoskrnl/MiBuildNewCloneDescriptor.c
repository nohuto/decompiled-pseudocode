/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x1405BF59C
 * Callers:
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x1400CEA8C (MiUnlockPagedAddress.c)
 *     MiGetVmPartition @ 0x1400D2E10 (MiGetVmPartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  _QWORD *PoolWithTag; // rdi
  char *v8; // rax
  char *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  unsigned __int64 v12; // rbx
  __int64 VmPartition; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)a1, v6) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
    if ( PoolWithTag )
    {
      v8 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v6, 0x6C436D4Du);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x20uLL);
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x68436D4Du);
        v11 = v10;
        if ( v10 )
        {
          memset(v10, 0, 0x20uLL);
          v12 = 0LL;
          if ( !v6 )
          {
LABEL_8:
            VmPartition = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
            *v11 = a2;
            v11[1] = 1LL;
            v11[2] = v9;
            PoolWithTag[6] = 0LL;
            PoolWithTag[4] = &v9[v4 - 32];
            PoolWithTag[12] = a3;
            PoolWithTag[3] = v9;
            PoolWithTag[5] = a2;
            PoolWithTag[7] = v11;
            PoolWithTag[8] = v6;
            _InterlockedIncrement64((volatile signed __int64 *)(VmPartition + 1304));
            v11[3] = VmPartition;
            return PoolWithTag;
          }
          while ( (unsigned int)MiLockPagedAddress((ULONG_PTR)&v9[v12]) )
          {
            v12 += 4096LL;
            if ( v12 >= v6 )
              goto LABEL_8;
          }
          while ( v12 )
          {
            v12 -= 4096LL;
            MiUnlockPagedAddress((unsigned __int64)&v9[v12]);
          }
          ExFreePoolWithTag(v11, 0);
        }
        ExFreePoolWithTag(v9, 0);
      }
      PsReturnProcessNonPagedPoolQuota(a1, v6);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      PsReturnProcessNonPagedPoolQuota(a1, v6);
    }
  }
  return 0LL;
}
