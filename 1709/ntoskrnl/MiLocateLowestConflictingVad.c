/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140014590
 * Callers:
 *     MiUpdateVadBits @ 0x14045EA90 (MiUpdateVadBits.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x1400A5440 (MiCheckForConflictingVad.c)
 */

__int64 MiLocateLowestConflictingVad()
{
  __int64 result; // rax
  unsigned __int64 v1; // r11
  unsigned __int64 *v2; // r10
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rax
  unsigned __int64 i; // rax
  unsigned __int64 j; // rdx

  result = MiCheckForConflictingVad();
  v2 = (unsigned __int64 *)result;
  if ( result )
  {
    while ( 1 )
    {
      v3 = *v2;
      v4 = v2;
      if ( *v2 )
      {
        for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
          v3 = i;
      }
      else
      {
        for ( j = v2[2]; ; j = *(_QWORD *)(v3 + 16) )
        {
          v3 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v3 || *(unsigned __int64 **)(v3 + 8) == v4 )
            break;
          v4 = (unsigned __int64 *)v3;
        }
      }
      if ( !v3
        || (((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF) < v1 )
      {
        break;
      }
      v2 = (unsigned __int64 *)v3;
    }
    return (__int64)v2;
  }
  return result;
}
