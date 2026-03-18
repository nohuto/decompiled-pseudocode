/*
 * XREFs of MiUpdateVadBits @ 0x14045EA90
 * Callers:
 *     MiExpandVadBitMap @ 0x14045E94C (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1406E4B9C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiLocateLowestConflictingVad @ 0x140014590 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x1406E4C98 (MiSetVadBits.c)
 */

__int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 >= a1 )
    v2 = a2;
  result = MiLocateLowestConflictingVad();
  v4 = result;
  if ( result )
  {
    do
    {
      MiSetVadBits(v4);
      result = *(_QWORD *)(v4 + 8);
      v5 = v4;
      if ( result )
      {
        do
        {
          v4 = result;
          result = *(_QWORD *)result;
        }
        while ( result );
      }
      else
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v4 || *(_QWORD *)v4 == v5 )
            break;
          v5 = v4;
        }
      }
      if ( !v4 )
        break;
      result = *(unsigned int *)(v4 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 < v2 );
  }
  return result;
}
