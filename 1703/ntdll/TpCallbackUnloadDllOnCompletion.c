/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x1800855B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackUnloadDllOnCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 )
    return sub_1801058B8(a1, a2, a3, a4);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a1 + 200) )
    return sub_1801058B8(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 200) = a2;
  *(_DWORD *)(a1 + 144) |= 0x80u;
  return result;
}
