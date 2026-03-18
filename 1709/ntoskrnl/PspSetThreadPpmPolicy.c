/*
 * XREFs of PspSetThreadPpmPolicy @ 0x140716200
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetThreadPpmPolicy(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // edx
  __int64 result; // rax
  signed __int32 v6; // ett

  v2 = 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return result;
        v2 = 3;
      }
      else
      {
        v2 = 2;
      }
    }
    else
    {
      v2 = 1;
    }
  }
  do
  {
    v6 = *(_DWORD *)(a1 + 1508);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1508), v2 | v6 & 0xFFFFFFFC, v6);
  }
  while ( v6 != (_DWORD)result );
  return result;
}
