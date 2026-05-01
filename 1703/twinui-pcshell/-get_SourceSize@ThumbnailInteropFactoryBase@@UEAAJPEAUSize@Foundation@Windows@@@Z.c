/*
 * XREFs of ?get_SourceSize@ThumbnailInteropFactoryBase@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180167800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ThumbnailInteropFactoryBase::get_SourceSize(
        ThumbnailInteropFactoryBase *this,
        struct Windows::Foundation::Size *a2)
{
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    *(_QWORD *)a2 = 0LL;
    v7 = 0LL;
    v3 = DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 4), 0LL, &v7);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
        (const char *)(unsigned int)v3);
    *(float *)a2 = (float)(int)v7;
    *((float *)a2 + 1) = (float)SHIDWORD(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
                           v4);
  }
  return result;
}
