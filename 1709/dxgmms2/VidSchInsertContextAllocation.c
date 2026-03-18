/*
 * XREFs of VidSchInsertContextAllocation @ 0x1C0072CCC
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v16; // rax

  v9 = operator new[](0x20uLL, 0x68536956u, PagedPool);
  v11 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x20uLL);
    v11[3] = a4;
    if ( (*(_DWORD *)(**(_QWORD **)a4 + 76LL) & 0x10000000) != 0 )
    {
      v12 = a2 + 608;
      v13 = a2 + 632;
    }
    else
    {
      v12 = a3 + 272;
      v13 = a3 + 296;
    }
    v11[2] = v12;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
    v14 = *(_QWORD **)(v13 + 8);
    if ( *v14 != v13 )
      __fastfail(3u);
    *v11 = v13;
    v11[1] = v14;
    *v14 = v11;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 52) = 1;
    *a5 = v11;
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v10);
    WdLogEvent5_WdWarning(v16);
    *a5 = 0LL;
    return 3221225495LL;
  }
}
