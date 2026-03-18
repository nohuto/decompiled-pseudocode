/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x14041E1EC
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x140038DB8 (MiUnlockPagedAddress.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rbp
  _QWORD *PoolWithTag; // rbx
  char *v8; // rax
  char *v9; // rsi
  _QWORD *v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *result; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 24;
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
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68436D4Du);
        if ( v10 )
        {
          v11 = 0LL;
          while ( (unsigned int)MiLockPagedAddress((ULONG_PTR)&v9[v11]) )
          {
            v11 += 4096LL;
            if ( v11 >= v6 )
            {
              *v10 = a2;
              v10[1] = 1LL;
              v10[2] = v9;
              PoolWithTag[6] = 0LL;
              PoolWithTag[4] = &v9[v4 - 32];
              PoolWithTag[9] = a3;
              result = PoolWithTag;
              PoolWithTag[3] = v9;
              PoolWithTag[5] = a2;
              PoolWithTag[7] = v10;
              PoolWithTag[8] = v6;
              return result;
            }
          }
          while ( v11 )
          {
            v11 -= 4096LL;
            MiUnlockPagedAddress((unsigned __int64)&v9[v11]);
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
