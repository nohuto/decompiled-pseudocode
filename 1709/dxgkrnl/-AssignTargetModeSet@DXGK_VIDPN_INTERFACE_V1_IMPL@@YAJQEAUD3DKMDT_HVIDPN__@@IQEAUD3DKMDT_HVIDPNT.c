/*
 * XREFs of ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00D49B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0004E68 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  DMMVIDPNTARGETMODESET *v11; // rdi
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
  DMMVIDPNTARGETMODESET *v27; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7051);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v8 = v5;
  v7[3] = v4;
  v7[4] = v5;
  v7[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v11 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v11 )
    {
      v13 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), v5);
      v15 = v13;
      if ( v13 )
      {
        v26 = 0LL;
        v27 = v11;
        v16 = DMMVIDPNTARGET::SetCofuncModeSet(v13, &v27);
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
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v23 + 24) = v8;
        WdLogEvent5_WdError(v23);
        LODWORD(v4) = -1071774971;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      LODWORD(v4) = -1071774967;
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
    McTemplateK0q(v18, &EventProfilerExit, v19, 7051);
  return (unsigned int)v4;
}
