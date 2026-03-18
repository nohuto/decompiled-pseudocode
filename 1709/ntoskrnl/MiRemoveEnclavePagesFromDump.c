/*
 * XREFs of MiRemoveEnclavePagesFromDump @ 0x140229990
 * Callers:
 *     MmGetDumpRange @ 0x14021AFE8 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromDump(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx

  result = (_QWORD *)qword_1403885E8;
  v3 = 0LL;
  while ( result )
  {
    v3 = result;
    result = (_QWORD *)*result;
  }
  while ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(a1 + 8))(a1, v3[3], v3[4], 2LL);
    v4 = (_QWORD *)v3[1];
    result = v3;
    if ( v4 )
    {
      result = (_QWORD *)*v4;
      v3 = (_QWORD *)v3[1];
      while ( result )
      {
        v3 = result;
        result = (_QWORD *)*result;
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == result )
          break;
        result = v3;
      }
    }
  }
  return result;
}
