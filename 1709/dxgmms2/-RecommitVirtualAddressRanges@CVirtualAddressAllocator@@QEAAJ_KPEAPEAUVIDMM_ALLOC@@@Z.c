/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00752EC
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0074EA4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00728B4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  char v3; // r13
  CVirtualAddressAllocator *i; // rsi
  __int64 v6; // rdi
  char *v7; // r15
  char *v8; // rax
  struct _MDL *FullMDL; // r8
  int v10; // r14d
  int v11; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD *v20; // rax
  __int64 v21; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v21 = a2;
  v3 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v21;
    v3 = 1;
  }
  for ( i = this[3]; ; i = *(CVirtualAddressAllocator **)i )
  {
    if ( i == (CVirtualAddressAllocator *)(this + 3) )
      goto LABEL_19;
    v6 = 0LL;
    if ( *((_DWORD *)this[10] + 1604) )
      break;
LABEL_9:
    ;
  }
  while ( 1 )
  {
    if ( _bittest64(&a2, (unsigned int)v6) )
    {
      v7 = (char *)*((_QWORD *)i + 3 * v6 + 7);
      if ( v7 != (char *)i + 16 * v6 + 8 * v6 + 56 )
        break;
    }
LABEL_8:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)this[10] + 1604) )
      goto LABEL_9;
  }
  v8 = (char *)i + 16 * v6 + 8 * v6 + 56;
  while ( 1 )
  {
    FullMDL = 0LL;
    v23 = 0LL;
    v10 = 0;
    v11 = (int)(*((_DWORD *)v7 + 14) << 28) >> 28;
    if ( v11 != 1 )
    {
      if ( v11 == 2 )
      {
        FullMDL = (struct _MDL *)**((_QWORD **)v7 + 6);
        goto LABEL_15;
      }
      if ( v11 <= 2 )
        goto LABEL_17;
      if ( v11 > 5 )
        break;
    }
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v11, *((_QWORD *)v7 + 6));
    if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 128) != (_DWORD)FullMDL )
    {
      v13 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
      v14 = *(_DWORD *)(v13 + 80);
      if ( (v14 & 0x1001) != 0 )
      {
        FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
      }
      else
      {
        if ( (v14 & 0x1000) == 0 )
          v10 = *(_DWORD *)(v13 + 16) + 1;
        v23 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
      }
      goto LABEL_15;
    }
LABEL_16:
    v8 = (char *)i + 16 * v6 + 8 * v6 + 56;
LABEL_17:
    v7 = *(char **)v7;
    if ( v7 == v8 )
    {
      a2 = v21;
      goto LABEL_8;
    }
  }
  if ( v11 != 6 )
    goto LABEL_17;
  v10 = -2;
LABEL_15:
  v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          (CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 8),
          v6,
          v10,
          *((_QWORD *)v7 + 8) + v23,
          FullMDL,
          0,
          a3);
  v18 = v15;
  if ( v15 >= 0 )
    goto LABEL_16;
  v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
  v20[3] = v18;
  v20[4] = *((_QWORD *)v7 + 11);
  v20[5] = *((_QWORD *)v7 + 12);
  v20[6] = (unsigned int)v6;
  WdLogEvent5_WdAssertion(v20);
LABEL_19:
  if ( v3 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
