/*
 * XREFs of ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00451EC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetExtraInfoForHook(CMouseProcessor::CMouseEvent *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 88LL) & 0x20) != 0 && ((*(_DWORD *)(v1 + 80) - 4) & 0xFFFFFFFB) == 0 )
    return (unsigned __int8)*(_DWORD *)(v1 + 32) | 0xFF515700LL;
  else
    return *(_QWORD *)(v1 + 32);
}
