/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D54C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D733C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int8 *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  DMMVIDPNTARGETMODE *v11; // rbp
  __int64 v12; // r11
  int v13; // eax
  unsigned __int8 v14; // dl
  int IsSupportedByMonitor; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _D3DKMDT_MODE_PRUNING_REASON v23[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v24; // [rsp+60h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6017);
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v19);
    LODWORD(v7) = -1073741811;
    goto LABEL_10;
  }
  if ( !a4 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = a3;
    goto LABEL_18;
  }
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v7);
  if ( v8 )
  {
    v11 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v8 + 24, v6);
    if ( v11 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 112) + 96LL) + 84LL);
      v14 = v13 >= 15 && v13 <= 16;
      v23[0] = D3DKMDT_MPR_UNINITIALIZED;
      v24 = 0;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v11, v14, &v24, v23);
      v7 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        v22 = WdLogNewEntry5_WdDmmEvent(v16);
        *(_QWORD *)(v22 + 24) = v11;
        *(_QWORD *)(v22 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v22);
      }
      else
      {
        LODWORD(v7) = 0;
        *a3 = v24;
        *(_D3DKMDT_MODE_PRUNING_REASON *)a4 = v23[0];
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v21 + 24) = v6;
      *(_QWORD *)(v21 + 32) = v7;
      WdLogEvent5_WdError(v21);
      LODWORD(v7) = -1071774959;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    LODWORD(v7) = -1071774967;
  }
LABEL_10:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 6017);
  return (unsigned int)v7;
}
