/*
 * XREFs of ?FlushInteresting@ClickRecognizer@@UEAAXW4GestureType@@@Z @ 0x1800DD0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall ClickRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  __int16 result; // ax

  if ( (a2 & 2) != 0 )
  {
    result = -9;
    *(_WORD *)(a1 + 16) &= ~8u;
  }
  if ( (a2 & 1) != 0 )
  {
    result = -5;
    *(_WORD *)(a1 + 16) &= ~4u;
  }
  if ( (a2 & 8) != 0 )
  {
    result = -65;
    *(_WORD *)(a1 + 16) &= ~0x40u;
  }
  if ( (a2 & 0x200) != 0 )
  {
    result = -257;
    *(_WORD *)(a1 + 16) &= ~0x100u;
  }
  if ( (a2 & 4) != 0 )
  {
    result = *(_WORD *)(a1 + 16) & 0xFFCF;
    *(_WORD *)(a1 + 16) = result;
  }
  return result;
}
