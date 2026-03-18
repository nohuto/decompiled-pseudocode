/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C00BFA90
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0006CE8 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DxgAdapter; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int ContextAllocation; // ebx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+80h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v13);
  if ( KeGetCurrentIrql() )
  {
    v10 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v10 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v5 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( !*(_QWORD *)(DxgAdapter + 2464) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 275LL;
    v11[4] = 7LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 104)) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
      v12[3] = 275LL;
      v12[4] = 4LL;
      v12[5] = v6;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    ContextAllocation = VIDMM_EXPORT::VidMmCreateContextAllocation(
                          *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 2464) + 544LL),
                          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 2464) + 552LL),
                          *(_DWORD *)(a1 + 80),
                          *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
                          (struct DXGDEVICE *)v6,
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
  if ( v13[0] )
    KeUnstackDetachProcess(&ApcState);
  return ContextAllocation;
}
