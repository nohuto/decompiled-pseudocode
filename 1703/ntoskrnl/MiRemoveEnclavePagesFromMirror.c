/*
 * XREFs of MiRemoveEnclavePagesFromMirror @ 0x1404040E4
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     RtlInterlockedClearBitRunEx @ 0x14013E944 (RtlInterlockedClearBitRunEx.c)
 */

_QWORD *MiRemoveEnclavePagesFromMirror()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx

  result = (_QWORD *)qword_14036C298;
  v1 = 0LL;
  while ( result )
  {
    v1 = result;
    result = (_QWORD *)*result;
  }
  while ( v1 )
  {
    RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v1[3], v1[4]);
    v2 = (_QWORD *)v1[1];
    result = v1;
    if ( v2 )
    {
      result = (_QWORD *)*v2;
      v1 = (_QWORD *)v1[1];
      while ( result )
      {
        v1 = result;
        result = (_QWORD *)*result;
      }
    }
    else
    {
      while ( 1 )
      {
        v1 = (_QWORD *)(v1[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v1 || (_QWORD *)*v1 == result )
          break;
        result = v1;
      }
    }
  }
  return result;
}
