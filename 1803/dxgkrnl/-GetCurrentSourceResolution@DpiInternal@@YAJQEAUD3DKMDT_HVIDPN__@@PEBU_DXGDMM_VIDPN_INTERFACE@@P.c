/*
 * XREFs of ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00C6E5C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentSourceResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 (__fastcall *v4)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  void (__fastcall *v23)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+58h] [rbp-8h]
  __int64 v26; // [rsp+88h] [rbp+28h] BYREF
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v7 = *(unsigned int *)a3;
  v20 = 0LL;
  v27 = 0LL;
  v21[0] = 0;
  v9 = v4(this, v7, &v27, &v20);
  v11 = v9;
  if ( v9 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v16 + 24) = v11;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v11;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v21,
    v27,
    *((_QWORD *)a2 + 2),
    (__int64)this);
  v26 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v20 + 24))(v27, &v26);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v14 = *(_DWORD *)(v26 + 4);
    if ( v14 == 1 || v14 > 2 && v14 <= 4 )
    {
      if ( *(_DWORD *)(v26 + 8) && *(_DWORD *)(v26 + 12) )
      {
        *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v26 + 8);
LABEL_7:
        (*(void (__fastcall **)(__int64))(v20 + 32))(v27);
        goto LABEL_8;
      }
      v19 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v19 + 24) = v26;
      WdLogEvent5_WdAssertion(v19);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v18 + 24) = *(int *)(v26 + 4);
      WdLogEvent5_WdError(v18);
    }
    LODWORD(v11) = -1073741823;
    goto LABEL_7;
  }
  v17 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v17 + 24) = v11;
  WdLogEvent5_WdError(v17);
LABEL_8:
  if ( v21[0] )
    v23(v24, v22);
  return (unsigned int)v11;
}
