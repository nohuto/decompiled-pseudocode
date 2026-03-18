/*
 * XREFs of VidSchInsertContextAllocation @ 0x1C0056648
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v17; // rax

  v9 = operator new[](0x20uLL, 0x68536956u, PagedPool);
  v12 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x20uLL);
    v12[3] = a4;
    if ( (*(_DWORD *)(**(_QWORD **)a4 + 76LL) & 0x10000000) != 0 )
    {
      v13 = a2 + 624;
      v14 = a2 + 648;
    }
    else
    {
      v13 = a3 + 272;
      v14 = a3 + 296;
    }
    v12[2] = v13;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
      __fastfail(3u);
    *v12 = v14;
    v12[1] = v15;
    *v15 = v12;
    *(_QWORD *)(v14 + 8) = v12;
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 52) = 1;
    *a5 = v12;
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v11, v10);
    WdLogEvent5_WdWarning(v17);
    *a5 = 0LL;
    return 3221225495LL;
  }
}
