/*
 * XREFs of PspSetProcessPpmPolicy @ 0x140590B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  signed __int32 v4; // ett

  v2 = a2 << 6;
  _m_prefetchw((const void *)(a1 + 440));
  do
  {
    v4 = *(_DWORD *)(a1 + 440);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v2 | v4 & 0xFFFFFE3F, v4);
  }
  while ( v4 != (_DWORD)result );
  return result;
}
