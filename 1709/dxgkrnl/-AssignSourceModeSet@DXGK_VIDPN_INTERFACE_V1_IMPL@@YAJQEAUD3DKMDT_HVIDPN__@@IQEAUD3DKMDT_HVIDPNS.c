/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00D3580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000AF08 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  DMMVIDPNSOURCEMODESET *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODESET *v27; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7046);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v8 = v5;
  v7[3] = v4;
  v7[4] = v5;
  v7[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v11 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v11 )
    {
      v13 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v12 + 304), v5);
      v15 = v13;
      if ( v13 )
      {
        v26 = 0LL;
        v27 = v11;
        v16 = DMMVIDPNSOURCE::SetCofuncModeSet(v13, &v27);
        v4 = v16;
        if ( v16 < 0 )
        {
          if ( v16 != -1071774958 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v17);
            WdLogEvent5_WdAssertion(v24);
          }
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v25[3] = v11;
          v25[4] = *(unsigned int *)(v15 + 24);
          v25[5] = v4;
          WdLogEvent5_WdError(v25);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v26, 0LL);
        }
        else
        {
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v26, 0LL);
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v23 + 24) = v8;
        WdLogEvent5_WdError(v23);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v4) = -1071774973;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, 7046);
  return (unsigned int)v4;
}
