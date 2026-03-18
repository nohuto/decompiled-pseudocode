/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00FE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int64 a2)
{
  struct DXGADAPTER *DxgAdapter; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  _BYTE v19[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
  Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
  if ( *((_BYTE *)Global + 1114)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (struct DXGGLOBAL *)((char *)Global + 1108),
         DxgAdapter) )
  {
    v12 = -1073741637;
  }
  else
  {
    v10 = (_QWORD *)a2;
    v11 = *((_QWORD *)DxgAdapter + 286);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL) + 40LL) + 28LL) <= 0x5003u )
    {
      v14 = *(_DWORD *)(a2 + 16);
      v10 = v15;
      v18 = 0LL;
      v17 = 0LL;
      v16 = v14;
      v15[0] = *(_QWORD *)a2;
      v15[1] = *(_QWORD *)(a2 + 8);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v11 + 432) + 8LL) + 824LL))(
            *(_QWORD *)(v11 + 440),
            v10);
    *(_QWORD *)(a2 + 24) = v10[3];
  }
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v12;
}
