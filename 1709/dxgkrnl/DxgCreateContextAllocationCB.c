/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C00BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C000350C (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DxgAdapter; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int ContextAllocation; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _BYTE v17[8]; // [rsp+80h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v17);
  if ( KeGetCurrentIrql() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v14 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v7 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( !*(_QWORD *)(DxgAdapter + 2312) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v15[5] = 0LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    v15[3] = 275LL;
    v15[4] = 7LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 104)) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
      v16[3] = 275LL;
      v16[4] = 4LL;
      v16[5] = v8;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    ContextAllocation = VIDMM_EXPORT::VidMmCreateContextAllocation(
                          *(VIDMM_EXPORT **)(*(_QWORD *)(v7 + 2312) + 528LL),
                          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 2312) + 536LL),
                          *(_DWORD *)(a1 + 80),
                          *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
                          (struct DXGDEVICE *)v8,
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
  if ( v17[0] )
    KeUnstackDetachProcess(&ApcState);
  return ContextAllocation;
}
