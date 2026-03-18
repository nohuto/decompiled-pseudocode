/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00BFC20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int64 a2)
{
  struct DXGADAPTER *DxgAdapter; // rbx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v11; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+30h] [rbp-68h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v16);
  DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
  Global = DXGGLOBAL::GetGlobal(v5);
  if ( *((_BYTE *)Global + 1114)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (struct DXGGLOBAL *)((char *)Global + 1108),
         DxgAdapter) )
  {
    v9 = -1073741637;
  }
  else
  {
    v7 = (_QWORD *)a2;
    v8 = *((_QWORD *)DxgAdapter + 289);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL) + 40LL) + 28LL) <= 0x5003u )
    {
      v11 = *(_DWORD *)(a2 + 16);
      v7 = v12;
      v15 = 0LL;
      v14 = 0LL;
      v13 = v11;
      v12[0] = *(_QWORD *)a2;
      v12[1] = *(_QWORD *)(a2 + 8);
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL) + 824LL))(
           *(_QWORD *)(v8 + 536),
           v7);
    *(_QWORD *)(a2 + 24) = v7[3];
  }
  if ( v16[0] )
    KeUnstackDetachProcess(&ApcState);
  return v9;
}
