/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00AC844
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGADAPTER *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v15; // rax

  v5 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a3 || !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 5893LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 20) )
  {
    v10 = this[14];
    v11 = -1073741275;
    v12 = 3760 * v5;
    v13 = *((_DWORD *)v10 + 940 * v5 + 276);
    if ( v13 != -1 && *(_DWORD *)((char *)v10 + v12 + 1108) != -1 )
    {
      *a3 = v13 == 1;
      v11 = 0;
      *a4 = *(_DWORD *)((char *)this[14] + v12 + 1108) == 1;
    }
    return v11;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}
