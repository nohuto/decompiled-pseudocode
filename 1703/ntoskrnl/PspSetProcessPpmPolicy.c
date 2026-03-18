/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1406DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  __int64 result; // rax
  signed __int32 v6; // ett

  v2 = 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return result;
      v2 = 2;
    }
    else
    {
      v2 = 1;
    }
  }
  v4 = v2 << 6;
  _m_prefetchw((const void *)(a1 + 440));
  do
  {
    v6 = *(_DWORD *)(a1 + 440);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v4 | v6 & 0xFFFFFF3F, v6);
  }
  while ( v6 != (_DWORD)result );
  return result;
}
