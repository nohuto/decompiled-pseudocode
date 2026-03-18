/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C00FE4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C000DC78 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 DxgAdapter; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int ContextAllocation; // ebx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v20[8]; // [rsp+80h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
  if ( KeGetCurrentIrql() )
  {
    v17 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v17 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v10 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( !*(_QWORD *)(DxgAdapter + 2288) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
    v18[5] = 0LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    v18[3] = 275LL;
    v18[4] = 7LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    if ( !*(_DWORD *)(v11 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v11 + 104)) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
      v19[3] = 275LL;
      v19[4] = 4LL;
      v19[5] = v11;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    ContextAllocation = VIDMM_EXPORT::VidMmCreateContextAllocation(
                          *(VIDMM_EXPORT **)(*(_QWORD *)(v10 + 2288) + 432LL),
                          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v10 + 2288) + 440LL),
                          *(_DWORD *)(a1 + 80),
                          *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
                          (struct DXGDEVICE *)v11,
                          *(struct DXGCONTEXT **)(a1 + 24),
                          *(void **)(a1 + 32),
                          *(_QWORD *)(a1 + 40),
                          *(_DWORD *)(a1 + 48),
                          *(_DWORD *)(a1 + 52),
                          *(_DWORD *)(a1 + 56),
                          *(struct _D3DDDI_SEGMENTPREFERENCE *)(a1 + 60),
                          *(struct _DXGK_SEGMENTBANKPREFERENCE *)(a1 + 64),
                          *(struct _DXGK_ALLOCATIONINFOFLAGS *)(a1 + 68),
                          (struct _VIDMM_CONTEXT_ALLOC **)(a1 + 72));
  }
  else
  {
LABEL_14:
    ContextAllocation = -1073741811;
  }
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  return ContextAllocation;
}
