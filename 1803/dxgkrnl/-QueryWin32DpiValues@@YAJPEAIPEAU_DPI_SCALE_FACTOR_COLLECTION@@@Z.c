/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00C75FC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01DD4A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(unsigned int *a1, struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  int v4; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64 *); // rax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64 *); // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  unsigned int *v14; // [rsp+28h] [rbp-10h]

  v4 = -1073741275;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v6 = *((_QWORD *)Current + 13);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 360);
    if ( v7 )
    {
      v13 = 0LL;
      v14 = 0LL;
      if ( a1 && (v13 = 0x400000000LL, v14 = a1, v4 = v7(&v13), v4 < 0) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v12 + 24) = 1434LL;
      }
      else
      {
        if ( !a2 )
          return (unsigned int)v4;
        v9 = *(__int64 (__fastcall **)(__int64 *))(v6 + 360);
        v13 = 0x2000000001LL;
        v14 = (unsigned int *)a2;
        v4 = v9(&v13);
        if ( v4 >= 0 )
          return (unsigned int)v4;
        v12 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v12 + 24) = 1447LL;
      }
      WdLogEvent5_WdAssertion(v12);
    }
  }
  return (unsigned int)v4;
}
