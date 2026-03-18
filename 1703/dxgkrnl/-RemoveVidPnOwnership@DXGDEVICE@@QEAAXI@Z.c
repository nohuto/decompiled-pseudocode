/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00BFB98
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 453);
  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 > v2 )
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = v4;
    *(_QWORD *)(v5 + 32) = *((unsigned int *)this + 453);
    WdLogEvent5_WdError(v5);
    *((_DWORD *)this + 453) = 0;
  }
  else
  {
    *((_DWORD *)this + 453) = v2 - a2;
  }
}
