/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005B25C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A1A4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00731B0 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *v8; // rbx
  int started; // eax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 i; // rbp
  _QWORD *j; // r14
  __int64 v15; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  void *v19; // rcx
  __int64 v20; // rax
  _BYTE v21[24]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[80]; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *v23; // [rsp+A8h] [rbp+10h]
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  v24 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, a2 + 7);
  v8 = a2[6];
  v24 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v24, (struct _RTL_BALANCED_NODE *)v8);
    if ( started < 0 )
    {
      v8 = *(struct _KTHREAD **)v8;
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = (struct _KTHREAD *)*((_QWORD *)v8 + 1);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) != 0 && !a5 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v10);
      v17[3] = a2;
      v17[4] = a3;
      v17[5] = 18988LL;
      WdLogEvent5_WdWarning(v17);
    }
    else
    {
      v11 = *((_QWORD *)v8 + 3);
      v12 = *((_QWORD *)v8 + 4) - v11;
      v23 = a2[11];
      if ( *((_QWORD *)this + 5115) )
      {
        v18 = operator new[](0x20uLL, 0x32356956u, PagedPool);
        if ( v18 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
          *((_QWORD *)this + 5118) = KeGetCurrentThread();
          if ( *((_DWORD *)this + 10232) == dword_1C004033C )
            *((_DWORD *)this + 10232) = 0;
          v19 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
          if ( v19 )
            operator delete(v19);
          *v18 = *(_QWORD *)v23;
          v18[1] = *((_QWORD *)v23 + 4);
          v18[2] = v11;
          v18[3] = v12;
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v18;
          *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 15;
          *((_QWORD *)this + 5118) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
      {
        for ( j = (_QWORD *)*((_QWORD *)v8 + 3 * i + 12); j != (_QWORD *)((char *)v8 + 24 * i + 96); j = (_QWORD *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a2,
            (struct VIDMM_MAPPED_VA_RANGE *)(j - 1),
            1,
            0LL);
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, a2 + 7);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8, v15);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    }
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = a3;
    WdLogEvent5_WdWarning(v20);
    return 3221225485LL;
  }
}
