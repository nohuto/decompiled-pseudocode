/*
 * XREFs of CiTaskIndexReference @ 0x1C00023C4
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A40 (CiDispatchCreateTaskIndexClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTaskIndexReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
