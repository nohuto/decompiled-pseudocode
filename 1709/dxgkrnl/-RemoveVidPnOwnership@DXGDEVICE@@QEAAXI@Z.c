/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00929FC
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 421);
  v4 = a2;
  if ( a2 > v2 )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = v4;
    *(_QWORD *)(v5 + 32) = *((unsigned int *)this + 421);
    WdLogEvent5_WdError(v5);
    *((_DWORD *)this + 421) = 0;
  }
  else
  {
    *((_DWORD *)this + 421) = v2 - a2;
  }
}
