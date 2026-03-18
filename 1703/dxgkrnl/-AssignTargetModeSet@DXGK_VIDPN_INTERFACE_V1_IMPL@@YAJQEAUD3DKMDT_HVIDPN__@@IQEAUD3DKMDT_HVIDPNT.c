/*
 * XREFs of ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00F4750
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000834C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DMMVIDPNTARGETMODESET *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDPNTARGETMODESET *v33; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7051);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = v5;
  v7[3] = v4;
  v7[4] = v5;
  v7[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v13 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v13 )
    {
      v15 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 312), v5);
      v18 = v15;
      if ( v15 )
      {
        v32 = 0LL;
        v33 = v13;
        v19 = DMMVIDPNTARGET::SetCofuncModeSet(v15, &v33);
        v4 = v19;
        if ( v19 < 0 )
        {
          if ( v19 != -1071774958 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
            WdLogEvent5_WdAssertion(v30);
          }
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
          v31[3] = v13;
          v31[4] = *(unsigned int *)(v18 + 24);
          v31[5] = v4;
          WdLogEvent5_WdError(v31);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL);
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v29 + 24) = v8;
        WdLogEvent5_WdError(v29);
        LODWORD(v4) = -1071774971;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v28 + 24) = v4;
      WdLogEvent5_WdError(v28);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    LODWORD(v4) = -1071774973;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 7051);
  return (unsigned int)v4;
}
