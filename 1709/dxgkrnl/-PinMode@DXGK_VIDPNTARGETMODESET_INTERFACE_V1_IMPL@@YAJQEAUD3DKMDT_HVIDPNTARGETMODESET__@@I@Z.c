/*
 * XREFs of ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C01F4250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00A3448 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // rax

  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7015);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v6 = v4;
  *(_QWORD *)(v5 + 24) = v4;
  *(_QWORD *)(v5 + 32) = this;
  v7 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( v7 )
  {
    v12 = DMMVIDPNTARGETMODESET::PinMode(v7, v4);
    if ( v12 >= 0 )
    {
      v12 = 0;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = v6;
      *(_QWORD *)(v13 + 32) = this;
      WdLogEvent5_WdError(v13);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    v12 = -1071774967;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 7015);
  return (unsigned int)v12;
}
