/*
 * XREFs of ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18001317C
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 * Callees:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180013378 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasImageSource::Update(__int64 a1, __int128 *a2, char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1 + 32;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v10 = *a2;
    CAtlasTexture::UpdateGradientStrip(v7, v5, &v10);
    *(_BYTE *)(a1 + 56) = a3;
    *(_BYTE *)(a1 + 57) = 1;
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2Cu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xACu);
  }
  return v6;
}
