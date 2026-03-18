/*
 * XREFs of MiRemoveEnclavePagesFromMirror @ 0x140485B88
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x14015767C (MiMirrorOmitPagesFromCopy.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromMirror(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  result = (_QWORD *)qword_1403CB788;
  v6 = 0LL;
  while ( result )
  {
    v6 = result;
    result = (_QWORD *)*result;
  }
  while ( v6 )
  {
    MiMirrorOmitPagesFromCopy(a1, v6[3], v6[4], a4);
    v7 = (_QWORD *)v6[1];
    result = v6;
    if ( v7 )
    {
      v6 = (_QWORD *)v6[1];
      v8 = (_QWORD *)*v7;
      if ( v8 )
      {
        do
        {
          result = (_QWORD *)*v8;
          v6 = v8;
          v8 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == result )
          break;
        result = v6;
      }
    }
  }
  return result;
}
