/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x1400798D4
 * Callers:
 *     PopPepUpdateIdleState @ 0x140079874 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x1402790BC (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned int *v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  bool v12; // cl
  int v13; // eax

  v1 = a1[41];
  LODWORD(v2) = 0;
  v4 = (unsigned int)(a1[47] - 1);
  if ( (unsigned int)v4 >= v1 )
    v4 = v1;
  v5 = v4;
  if ( (_DWORD)v4 )
  {
    v7 = a1 + 38;
    v8 = 6LL;
    do
    {
      v9 = *v7;
      v10 = *v7++;
      if ( v9 >= v5 )
        v10 = v5;
      v5 = v10;
      v11 = v2 + 1;
      if ( v9 != (_DWORD)v4 )
        v11 = v2;
      v2 = v11;
      --v8;
    }
    while ( v8 );
    v12 = 0;
    if ( v11 == 5 )
      v12 = a1[40] < (unsigned int)v4;
    v13 = a1[1];
    if ( (v13 & 4) != 0 )
    {
      if ( !v12 )
      {
        a1[1] = v13 & 0xFFFFFFFB;
        _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
      }
    }
    else if ( v12 )
    {
      a1[1] = v13 | 4;
      if ( _InterlockedIncrement(&PopPepPoweredIdleComponentCount) == 1 )
        PopPepArmIdleTimer(0LL, a1, v4, v2);
    }
  }
  return v5;
}
