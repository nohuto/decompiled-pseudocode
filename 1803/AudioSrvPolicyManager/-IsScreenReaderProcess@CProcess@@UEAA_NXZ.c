/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180016310
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x1800269DC (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

bool __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  return (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 51), *((_DWORD *)this + 50), 0LL) != 0;
}
