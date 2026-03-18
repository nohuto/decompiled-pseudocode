/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F5210
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F911C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DMMVIDPNTARGETMODE *v13; // rbp
  __int64 v14; // r11
  int v15; // eax
  unsigned __int8 v16; // dl
  int IsSupportedByMonitor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  enum _D3DKMDT_MODE_PRUNING_REASON v27[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v28; // [rsp+60h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6017);
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v23 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v23);
    LODWORD(v7) = -1073741811;
    goto LABEL_10;
  }
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v23 + 24) = a3;
    goto LABEL_18;
  }
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v7);
  if ( v8 )
  {
    v13 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDPNTARGETMODE>::FindById(v8 + 24, v6);
    if ( v13 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 112) + 96LL) + 84LL);
      v16 = v15 >= 15 && v15 <= 16;
      v27[0] = D3DKMDT_MPR_UNINITIALIZED;
      v28 = 0;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v13, v16, &v28, v27);
      v7 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        v26 = WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
        *(_QWORD *)(v26 + 24) = v13;
        *(_QWORD *)(v26 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v26);
      }
      else
      {
        LODWORD(v7) = 0;
        *a3 = v28;
        *(enum _D3DKMDT_MODE_PRUNING_REASON *)a4 = v27[0];
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v25 + 24) = v6;
      *(_QWORD *)(v25 + 32) = v7;
      WdLogEvent5_WdError(v25);
      LODWORD(v7) = -1071774959;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v24 + 24) = v7;
    WdLogEvent5_WdError(v24);
    LODWORD(v7) = -1071774967;
  }
LABEL_10:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 6017);
  return (unsigned int)v7;
}
