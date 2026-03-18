/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00E71A0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGADAPTER *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v17 + 24) = 5291LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a3 || !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v18 + 24) = 5293LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 20) )
  {
    v12 = this[14];
    v13 = -1073741275;
    v14 = 3208 * v5;
    v15 = *((_DWORD *)v12 + 802 * v5 + 266);
    if ( v15 != -1 && *(_DWORD *)((char *)v12 + v14 + 1068) != -1 )
    {
      *a3 = v15 == 1;
      v13 = 0;
      *a4 = *(_DWORD *)((char *)this[14] + v14 + 1068) == 1;
    }
    return v13;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v19 + 24) = v5;
    *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
