/*
 * XREFs of IsPumpingInputMsgs @ 0x1C004A150
 * Callers:
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPumpingInputMsgs(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  __int64 *v6; // rcx
  int v7; // edx
  int v8; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(v1 + 1040)
    || (unsigned int)(v4 - *(_DWORD *)(v1 + 1040)) <= gdwHungAppTimeout
    || (unsigned int)PsGetThreadFreezeCount(*(_QWORD *)v1) )
  {
    return 1;
  }
  v6 = *(__int64 **)(v1 + 1024);
  if ( v6 )
  {
    while ( v6[1] != a1 )
    {
      v7 = *((_DWORD *)v6 + 4);
      if ( !v7 || (unsigned int)(v4 - v7) <= gdwHungAppTimeout )
      {
        v6 = (__int64 *)*v6;
        if ( v6 )
          continue;
      }
      return v3;
    }
    v8 = *((_DWORD *)v6 + 4);
    if ( !v8 || (unsigned int)(v4 - v8) <= gdwHungAppTimeout )
      return 1;
  }
  return v3;
}
