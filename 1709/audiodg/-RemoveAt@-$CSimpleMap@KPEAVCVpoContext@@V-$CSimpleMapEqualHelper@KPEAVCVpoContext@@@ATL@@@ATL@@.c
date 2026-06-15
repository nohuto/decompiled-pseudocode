/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140045998
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140044EF4 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x1400387A8 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s_0 @ 0x140038CFC (memmove_s_0.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_14008A2A8;
  if ( (int)v2 >= (int)qword_14008A2A8 )
    return 0LL;
  if ( (_DWORD)v2 != (_DWORD)qword_14008A2A8 - 1 )
  {
    v4 = memmove_s_0(
           (char *)CVpoContext::s_mapVpoContext + 4 * v2,
           4LL * ((int)qword_14008A2A8 - (int)v2),
           (char *)CVpoContext::s_mapVpoContext + 4 * v2 + 4,
           4LL * ((int)qword_14008A2A8 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s_0(
           (char *)qword_14008A2A0 + 8 * v2,
           8LL * ((int)qword_14008A2A8 - (int)v2),
           (char *)qword_14008A2A0 + 8 * v2 + 8,
           8LL * ((int)qword_14008A2A8 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = qword_14008A2A8;
  }
  v6 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4LL);
  if ( v6 || (_DWORD)qword_14008A2A8 == 1 )
    CVpoContext::s_mapVpoContext = v6;
  v7 = (void *)_o__recalloc(qword_14008A2A0, (int)qword_14008A2A8 - 1, 8LL);
  if ( v7 || (_DWORD)qword_14008A2A8 == 1 )
    qword_14008A2A0 = v7;
  result = 1LL;
  LODWORD(qword_14008A2A8) = qword_14008A2A8 - 1;
  return result;
}
