/*
 * XREFs of ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C01DB1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C01DDAC8 (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignMultisamplingMethodSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        unsigned __int64 a3,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  DMMVIDPNSOURCE *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  _QWORD *v23; // rax

  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7047);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9 = v6;
  v8[3] = a4;
  v8[4] = a3;
  v8[5] = v6;
  v8[6] = this;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v10 )
  {
    v16 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v10 + 304), v6);
    if ( v16 )
    {
      v20 = DMMVIDPNSOURCE::SetMultisamplingMethodSet(v16, a3, a4);
      v6 = v20;
      if ( v20 >= 0 )
      {
        LODWORD(v6) = 0;
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v21, v15, v22);
        v23[3] = v9;
        v23[4] = this;
        v23[5] = v6;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdError(v19);
      LODWORD(v6) = -1071774972;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    LODWORD(v6) = -1071774973;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7047);
  return (unsigned int)v6;
}
