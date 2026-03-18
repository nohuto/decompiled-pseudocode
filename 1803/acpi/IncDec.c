/*
 * XREFs of IncDec @ 0x1C0050E00
 * Callers:
 *     <none>
 * Callees:
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     PushPost @ 0x1C00032BC (PushPost.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushPost(a1, (int)ProcessIncDec, *(unsigned int *)(a2[7] + 8LL), a2[10], a2[11]);
  if ( !(_DWORD)result )
    return ReadObject(a1, a2[10], a2[11]);
  return result;
}
