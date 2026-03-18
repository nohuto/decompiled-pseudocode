/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006F354
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006EF28 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  char v3; // r13
  CVirtualAddressAllocator *i; // rdi
  __int64 v6; // rsi
  char *v7; // r15
  char *v8; // rax
  struct _MDL *FullMDL; // r9
  int v10; // r14d
  int v11; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v21; // rax
  __int64 v22; // [rsp+98h] [rbp+10h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

  v22 = a2;
  v3 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v22;
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
    v24 = 0LL;
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
    v13 = VidMmGlobalAllocFromOwner;
    if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 128) != (_DWORD)FullMDL )
    {
      v14 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
      v15 = *(_DWORD *)(v14 + 80);
      if ( (v15 & 0x1001) != 0 )
      {
        FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL);
      }
      else
      {
        if ( (v15 & 0x1000) == 0 )
          v10 = *(_DWORD *)(v14 + 16) + 1;
        v24 = *(_QWORD *)(v13 + 144);
      }
      goto LABEL_15;
    }
LABEL_16:
    v8 = (char *)i + 16 * v6 + 8 * v6 + 56;
LABEL_17:
    v7 = *(char **)v7;
    if ( v7 == v8 )
    {
      a2 = v22;
      goto LABEL_8;
    }
  }
  if ( v11 != 6 )
    goto LABEL_17;
  v10 = -2;
LABEL_15:
  v16 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          (CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 8),
          v6,
          v10,
          *((_QWORD *)v7 + 8) + v24,
          FullMDL,
          0,
          a3);
  v19 = v16;
  if ( v16 >= 0 )
    goto LABEL_16;
  v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17);
  v21[3] = v19;
  v21[4] = *((_QWORD *)v7 + 11);
  v21[5] = *((_QWORD *)v7 + 12);
  v21[6] = (unsigned int)v6;
  WdLogEvent5_WdAssertion(v21);
LABEL_19:
  if ( v3 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
