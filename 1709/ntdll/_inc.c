/*
 * XREFs of _inc @ 0x180099FD8
 * Callers:
 *     ReadString @ 0x180099CD0 (ReadString.c)
 *     _input_l @ 0x18009A000 (_input_l.c)
 * Callees:
 *     _filbuf_s @ 0x18009AA50 (_filbuf_s.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
