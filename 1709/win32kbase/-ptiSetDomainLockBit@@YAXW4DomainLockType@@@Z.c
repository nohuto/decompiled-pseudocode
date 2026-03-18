/*
 * XREFs of ?ptiSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C0043C40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ptiSetDomainLockBit(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( !a1 )
    *(_BYTE *)(result + 1440) |= 1u;
  if ( a1 == 3 )
    *(_BYTE *)(result + 1440) |= 2u;
  if ( a1 == 4 )
    *(_BYTE *)(result + 1440) |= 4u;
  if ( a1 == 5 )
    *(_BYTE *)(result + 1440) |= 8u;
  if ( a1 == 7 )
    *(_BYTE *)(result + 1440) |= 0x20u;
  if ( a1 == 6 )
    *(_BYTE *)(result + 1440) |= 0x10u;
  return result;
}
