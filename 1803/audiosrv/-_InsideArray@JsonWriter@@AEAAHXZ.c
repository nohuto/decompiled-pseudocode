/*
 * XREFs of ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x180116568
 * Callers:
 *     ?Commit@JsonWriter@@QEAAJXZ @ 0x180116144 (-Commit@JsonWriter@@QEAAJXZ.c)
 *     ?EndArray@JsonWriter@@QEAAJXZ @ 0x180116190 (-EndArray@JsonWriter@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JsonWriter::_InsideArray(JsonWriter *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 34);
  if ( v1 <= 0 )
    return 0LL;
  v2 = v1 - 1;
  result = 1LL;
  if ( *((_DWORD *)this + v2 + 2) != 1 )
    return 0LL;
  return result;
}
