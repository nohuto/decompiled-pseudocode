/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x140123A94
 * Callers:
 *     PopPepUpdateIdleState @ 0x140123A34 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x14000C2FC (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // r8d
  int v2; // r9d
  unsigned int v4; // ebx
  unsigned int *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  int v9; // eax
  bool v10; // cl
  int v11; // eax

  v1 = a1[41];
  v2 = 0;
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
    if ( (v11 & 4) != 0 )
    {
      if ( !v10 )
      {
        a1[1] = v11 & 0xFFFFFFFB;
        _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
      }
    }
    else if ( v10 )
    {
      a1[1] = v11 | 4;
      if ( _InterlockedIncrement(&PopPepPoweredIdleComponentCount) == 1 )
        PopPepArmIdleTimer(0);
    }
  }
  return v4;
}
