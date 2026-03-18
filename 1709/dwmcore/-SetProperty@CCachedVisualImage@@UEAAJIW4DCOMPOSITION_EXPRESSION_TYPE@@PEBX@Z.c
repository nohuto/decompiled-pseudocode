/*
 * XREFs of ?SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801597D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z @ 0x180159A78 (-SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z.c)
 *     ?SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z @ 0x180159ABC (-SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z.c)
 *     ?SetViewboxRight@CCachedVisualImage@@AEAAJM@Z @ 0x180159B00 (-SetViewboxRight@CCachedVisualImage@@AEAAJM@Z.c)
 *     ?SetViewboxTop@CCachedVisualImage@@AEAAJM@Z @ 0x180159B44 (-SetViewboxTop@CCachedVisualImage@@AEAAJM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  signed int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v5 = a2 - 2;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
            v4 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x69Eu);
            return v4;
          }
          v8 = CCachedVisualImage::SetViewboxBottom((CCachedVisualImage *)(a1 - 16), *a4);
          v4 = v8;
          if ( v8 >= 0 )
            return v4;
          v10 = 1689;
        }
        else
        {
          v8 = CCachedVisualImage::SetViewboxRight((CCachedVisualImage *)(a1 - 16), *a4);
          v4 = v8;
          if ( v8 >= 0 )
            return v4;
          v10 = 1685;
        }
      }
      else
      {
        v8 = CCachedVisualImage::SetViewboxTop((CCachedVisualImage *)(a1 - 16), *a4);
        v4 = v8;
        if ( v8 >= 0 )
          return v4;
        v10 = 1681;
      }
    }
    else
    {
      v8 = CCachedVisualImage::SetViewboxLeft((CCachedVisualImage *)(a1 - 16), *a4);
      v4 = v8;
      if ( v8 >= 0 )
        return v4;
      v10 = 1677;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v10);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6A4u);
  return v4;
}
