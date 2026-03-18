/*
 * XREFs of ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x1C001D700
 * Callers:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0173190 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGGLOBAL::CSAccountingInProgress(DXGGLOBAL *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 366) )
    return *((_DWORD *)this + 367) != 0;
  return result;
}
