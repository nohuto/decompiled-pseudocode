/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVolumeStrip@@PEAV312@1@Z @ 0x180039E3C
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180039CBC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180025998 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax
  __int64 v7; // rdx
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  _QWORD *i; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v8 + 16 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8); --v9 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v7 = *result;
  if ( result )
    result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v7;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
