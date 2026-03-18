/*
 * XREFs of ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C00A7138
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputDest::GetDpiAwarenessContext(CInputDest *this)
{
  __int64 result; // rax

  result = 18LL;
  if ( *((_DWORD *)this + 23) == 2 )
    return *(unsigned int *)(*((_QWORD *)this + 10) + 368LL);
  return result;
}
