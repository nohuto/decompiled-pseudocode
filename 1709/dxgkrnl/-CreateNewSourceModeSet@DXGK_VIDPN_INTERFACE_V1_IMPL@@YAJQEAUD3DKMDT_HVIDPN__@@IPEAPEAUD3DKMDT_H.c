/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00D3460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000AE18 (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v11; // r15
  DMMVIDPNSOURCE *v12; // rax
  __int64 v13; // rcx
  DMMVIDPNSOURCE *v14; // rbp
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v27; // [rsp+60h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7045);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v8[3] = v7;
  v8[4] = a3;
  v8[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v7);
    if ( v10 )
    {
      v11 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v10 + 48) + 384LL);
      v12 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v10 + 304), v6);
      v14 = v12;
      if ( v12 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v15 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v12, &v27);
        v7 = v15;
        if ( v15 < 0 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent(v16);
          *(_QWORD *)(v25 + 24) = *((unsigned int *)v14 + 6);
          *(_QWORD *)(v25 + 32) = v7;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else
        {
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v26, (__int64)v27);
          v17 = v26;
          v18 = -(__int64)(v26 != -137);
          v26 = 0LL;
          *a3 = v17 & v18;
          LODWORD(v7) = 0;
          *a4 = v11;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v26, 0LL);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v24 + 24) = v6;
        WdLogEvent5_WdError(v24);
        LODWORD(v7) = -1071774972;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v23 + 24) = v7;
      WdLogEvent5_WdError(v23);
      LODWORD(v7) = -1071774973;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v7;
    WdLogEvent5_WdError(v22);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, 7045);
  return (unsigned int)v7;
}
