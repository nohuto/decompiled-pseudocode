/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00C0690
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00B1AD0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rdi
  DXGCONTEXT *v4; // rbx
  __int64 result; // rax

  v2 = (DXGDEVICE *)((char *)this + 344);
  v4 = (DXGCONTEXT *)*((_QWORD *)this + 43);
  result = 0LL;
  while ( v4 != v2 )
  {
    if ( !v4 )
      break;
    result = DXGCONTEXT::SetSchedulingPriority(v4, (unsigned int)(a2 + *((_DWORD *)v4 + 89)), 1u);
    if ( (int)result < 0 )
      break;
    *((_DWORD *)v4 + 88) = a2;
    v4 = *(DXGCONTEXT **)v4;
  }
  return result;
}
