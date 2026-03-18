/*
 * XREFs of IncDec @ 0x1C001CC40
 * Callers:
 *     <none>
 * Callees:
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushPost(a1, (unsigned int)ProcessIncDec, *(_DWORD *)(a2[7] + 8LL), a2[10], a2[11]);
  if ( !(_DWORD)result )
    return ReadObject(a1, a2[10], a2[11]);
  return result;
}
