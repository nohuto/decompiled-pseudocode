/*
 * XREFs of _inc @ 0x1401720E8
 * Callers:
 *     ReadString @ 0x140171DE8 (ReadString.c)
 *     _input_s @ 0x140172114 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x140173864 (_filbuf_s.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf_s(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
