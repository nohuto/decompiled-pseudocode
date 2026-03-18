/*
 * XREFs of ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180202240
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180201E50 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180084388 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180202BA4 (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixelsHelper(
        CFormatConverter *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int8 *a11)
{
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v20; // [rsp+70h] [rbp+8h]

  v13 = HrCheckBufferSize(*((_DWORD *)this + 18), a6, a4, a5, a7);
  v14 = 0;
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x91u);
  }
  else
  {
    v16 = HrCheckBufferSize(*((_DWORD *)this + 21), a9, a4, a5, a10);
    v20 = v16;
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x97u);
    }
    else if ( a5 )
    {
      do
      {
        CScanPipeline::Run((CFormatConverter *)((char *)this + 112), a11, a8, a4, a2, v14 + a3);
        a11 += a9;
        a8 += a6;
        ++v14;
      }
      while ( v14 < a5 );
      return v20;
    }
  }
  return v15;
}
