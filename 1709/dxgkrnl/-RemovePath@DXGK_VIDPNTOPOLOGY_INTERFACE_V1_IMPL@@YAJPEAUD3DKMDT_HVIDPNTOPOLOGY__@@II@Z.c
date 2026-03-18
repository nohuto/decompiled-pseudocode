/*
 * XREFs of ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C01F4330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rax
  DMMVIDPNTOPOLOGY *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  _QWORD *v14; // rax

  v3 = (__int64)this;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7058);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = v5;
  v6[4] = v4;
  v6[5] = v3;
  v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v9 = v7;
  if ( v7 )
  {
    v13 = DMMVIDPNTOPOLOGY::RemovePath(v7, v5, v4, 0LL);
    v3 = v13;
    if ( v13 >= 0 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
      v14[3] = v5;
      v14[4] = v4;
      v14[5] = v9;
      v14[6] = v3;
      WdLogEvent5_WdDmmEvent(v14);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v3;
    WdLogEvent5_WdError(v10);
    LODWORD(v3) = -1071774976;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 7058);
  return (unsigned int)v3;
}
