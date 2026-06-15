/*
 * XREFs of ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x1400512B4
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140053514 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x14004692C (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

ATL::CRegParser::CParseBuffer *__fastcall ATL::CRegParser::CParseBuffer::CParseBuffer(
        ATL::CRegParser::CParseBuffer *this,
        int a2)
{
  unsigned int v2; // eax
  _WORD *v4; // rax
  SIZE_T cb; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1000;
  *(_DWORD *)this = 0;
  LODWORD(cb) = 0;
  if ( a2 >= 100 )
    v2 = a2;
  *((_DWORD *)this + 1) = v2;
  if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v2, 2u) >= 0 )
    v4 = CoTaskMemAlloc((unsigned int)cb);
  else
    v4 = 0LL;
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
    *v4 = 0;
  return this;
}
