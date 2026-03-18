/*
 * XREFs of Bulk_EP_Disable @ 0x1C0025920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_EP_Disable(__int64 a1)
{
  __int64 result; // rax

  do
  {
    do
      result = *(unsigned int *)(a1 + 108);
    while ( (_DWORD)result == 3 );
  }
  while ( (_DWORD)result == 1 );
  if ( (_DWORD)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  return result;
}
