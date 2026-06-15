/*
 * XREFs of ??0CAtlException@ATL@@QEAA@J@Z @ 0x180010134
 * Callers:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 * Callees:
 *     <none>
 */

ATL::CAtlException *__fastcall ATL::CAtlException::CAtlException(ATL::CAtlException *this, int a2)
{
  *(_DWORD *)this = a2;
  return this;
}
