/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005FB74
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00581E0 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0059C30 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005EA18 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct _RTL_BALANCED_NODE *a3,
        struct _RTL_BALANCED_NODE *a4,
        unsigned __int8 a5)
{
  struct _RTL_BALANCED_NODE *v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _RTL_BALANCED_NODE *v12; // r12
  __int64 v13; // rbp
  __int64 i; // rbp
  __int64 *j; // r14
  __int64 v16; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  unsigned int v20; // ecx
  void *v21; // rcx
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[80]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp+10h]
  struct _RTL_BALANCED_NODE *v26; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v23,
    (struct CVirtualAddressAllocator *)((char *)a2 + 56));
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 + 6);
  v26 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v26, v8);
    if ( started < 0 )
    {
      v8 = v8->Children[0];
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = v8->Children[1];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( v8 )
  {
    if ( ((__int64)v8[3].Children[0] & 0x800) == 0 || a5 )
    {
      v12 = v8[1].Children[0];
      v13 = (char *)v8[1].Children[1] - (char *)v12;
      v25 = (_QWORD *)*((_QWORD *)a2 + 11);
      if ( *((_QWORD *)this + 5187) )
      {
        v19 = operator new[](0x20uLL, 0x32356956u, PagedPool);
        if ( v19 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 41512, 0LL);
          *((_QWORD *)this + 5190) = KeGetCurrentThread();
          v20 = *((_DWORD *)this + 10376);
          if ( v20 == dword_1C004733C )
          {
            *((_DWORD *)this + 10376) = 0;
            v20 = 0;
          }
          v21 = *(void **)(*((_QWORD *)this + 5187) + 24LL * v20 + 16);
          if ( v21 )
            operator delete(v21);
          *v19 = *v25;
          v19[1] = v25[4];
          v19[2] = v12;
          v19[3] = v13;
          *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376) + 16) = v19;
          *(_DWORD *)(*((_QWORD *)this + 5187) + 24LL * (unsigned int)(*((_DWORD *)this + 10376))++ + 8) = 15;
          *((_QWORD *)this + 5190) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 41512, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1748); i = (unsigned int)(i + 1) )
      {
        for ( j = (__int64 *)v8[i + 4].Children[0]; j != (__int64 *)&v8[i + 4]; j = (__int64 *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(j - 1), 1, 0LL);
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, (struct _KTHREAD **)a2 + 7);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(a2, (struct VIDMM_VAD *)v8, v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
      v18[3] = a2;
      v18[4] = a3;
      v18[5] = 19169LL;
      WdLogEvent5_WdWarning(v18);
    }
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = a3;
    WdLogEvent5_WdWarning(v22);
    return 3221225485LL;
  }
}
