/*
 * XREFs of ?LoadD3DModule@CD3DModuleLoaderInternal@@AEAAJXZ @ 0x180191D98
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::LoadD3DModule(CD3DModuleLoaderInternal *this)
{
  signed int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    qword_1802722F0 = 0;
  }
  else
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xF5u);
    OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
    qword_1802722F0 = v1;
    if ( hLibModule )
    {
      FreeLibrary(hLibModule);
      hLibModule = 0LL;
    }
  }
  return (unsigned int)v1;
}
