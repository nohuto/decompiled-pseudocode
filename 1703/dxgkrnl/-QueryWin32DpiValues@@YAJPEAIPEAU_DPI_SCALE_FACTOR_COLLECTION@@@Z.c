/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00A5188
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01BC220 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(unsigned int *a1, struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  int v4; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64 *); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(__int64 *); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  unsigned int *v20; // [rsp+28h] [rbp-10h]

  v4 = -1073741275;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v6 = *((_QWORD *)Current + 9);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 368);
    if ( v7 )
    {
      v19 = 0LL;
      v20 = 0LL;
      if ( a1 && (v19 = 0x400000000LL, v20 = a1, v4 = v7(&v19), v4 < 0) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
        *(_QWORD *)(v18 + 24) = 1634LL;
      }
      else
      {
        if ( !a2 )
          return (unsigned int)v4;
        v12 = *(__int64 (__fastcall **)(__int64 *))(v6 + 368);
        v19 = 0x2000000001LL;
        v20 = (unsigned int *)a2;
        v4 = v12(&v19);
        if ( v4 >= 0 )
          return (unsigned int)v4;
        v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = 1647LL;
      }
      WdLogEvent5_WdAssertion(v18);
    }
  }
  return (unsigned int)v4;
}
