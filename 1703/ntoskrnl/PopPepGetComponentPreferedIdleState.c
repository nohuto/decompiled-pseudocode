/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x14006AF44
 * Callers:
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x14022E24C (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  unsigned int v4; // ebx
  unsigned int *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // eax
  bool v10; // cl
  int v11; // eax

  v1 = a1[41];
  LODWORD(v2) = 0;
  if ( a1[47] - 1 < v1 )
    v1 = a1[47] - 1;
  v4 = v1;
  if ( v1 )
  {
    v6 = a1 + 38;
    v7 = 6LL;
    do
    {
      v8 = *v6;
      v9 = v2 + 1;
      ++v6;
      if ( v8 < v4 )
        v4 = v8;
      if ( v8 != v1 )
        v9 = v2;
      v2 = v9;
      --v7;
    }
    while ( v7 );
    v10 = 0;
    if ( v9 == 5 )
      v10 = a1[40] < v1;
    v11 = a1[1];
    if ( (v11 & 4) == 0 && v10 )
    {
      a1[1] = v11 | 4;
      if ( _InterlockedIncrement(&PopPepPoweredIdleComponentCount) == 1 )
        PopPepArmIdleTimer(0LL, a1, v11 & 4, v2);
    }
    else if ( (v11 & 4) != 0 && !v10 )
    {
      a1[1] = v11 & 0xFFFFFFFB;
      _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
    }
  }
  return v4;
}
