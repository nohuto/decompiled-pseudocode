/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0058168
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0050350 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057320 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct _KTHREAD **a2,
        struct _RTL_BALANCED_NODE *a3,
        struct _RTL_BALANCED_NODE *a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 i; // rbp
  _QWORD *j; // r14
  __int64 v16; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  void *v20; // rcx
  __int64 v21; // rax
  _BYTE v22[24]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[80]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+10h]
  struct _RTL_BALANCED_NODE *v25; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, a2 + 7);
  v8 = a2[6];
  v25 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v25, (struct _RTL_BALANCED_NODE *)v8);
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) != 0 && !a5 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
      v18[3] = a2;
      v18[4] = a3;
      v18[5] = 18445LL;
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
      v12 = *((_QWORD *)v8 + 3);
      v13 = *((_QWORD *)v8 + 4) - v12;
      v24 = *(_QWORD *)a2[11];
      if ( *((_QWORD *)this + 5115) )
      {
        v19 = operator new[](0x18uLL, 0x32356956u, PagedPool);
        if ( v19 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
          *((_QWORD *)this + 5118) = KeGetCurrentThread();
          if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
            *((_DWORD *)this + 10232) = 0;
          v20 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
          if ( v20 )
            operator delete(v20);
          *v19 = v24;
          v19[1] = v12;
          v19[2] = v13;
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v19;
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
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, a2 + 7);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8, v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    }
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = a3;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
}
