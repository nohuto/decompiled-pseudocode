/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x14057AB18
 * Callers:
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400A18B0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiGetVmPartition @ 0x140120738 (MiGetVmPartition.c)
 *     MiUnlockPagedAddress @ 0x14012BF78 (MiUnlockPagedAddress.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  _QWORD *PoolWithTag; // rdi
  char *v8; // rax
  char *v9; // rbp
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *result; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)a1, v6) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    if ( PoolWithTag )
    {
      v8 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v6, 0x6C436D4Du);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x20uLL);
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x68436D4Du);
        if ( v10 )
        {
          v11 = 0LL;
          if ( !v6 )
          {
LABEL_8:
            *v10 = a2;
            v10[1] = 1LL;
            v10[2] = v9;
            v10[3] = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
            PoolWithTag[3] = v9;
            PoolWithTag[6] = 0LL;
            PoolWithTag[4] = &v9[v4 - 32];
            PoolWithTag[9] = a3;
            result = PoolWithTag;
            PoolWithTag[5] = a2;
            PoolWithTag[7] = v10;
            PoolWithTag[8] = v6;
            return result;
          }
          while ( (unsigned int)MiLockPagedAddress((unsigned __int64)&v9[v11]) )
          {
            v11 += 4096LL;
            if ( v11 >= v6 )
              goto LABEL_8;
          }
          while ( v11 )
          {
            v11 -= 4096LL;
            MiUnlockPagedAddress((unsigned __int64)&v9[v11], v12, v13, v14);
          }
          ExFreePoolWithTag(v10, 0);
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
