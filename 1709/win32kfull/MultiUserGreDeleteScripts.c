/*
 * XREFs of MultiUserGreDeleteScripts @ 0x1C0126720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultiUserGreDeleteScripts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( qword_1C0327438 )
    return Win32FreePool(qword_1C0327438 - 2LL * gdwOffset, a2, a3);
  return result;
}
