/*
 * XREFs of ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004B1E4
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004BE70 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18004E218 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicatio.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Initialize(
        CApplicationFrameWrapper *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  int v5; // esi
  HWND v6; // rcx

  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 112,
         a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v5 >= 0 )
  {
    v6 = (HWND)*((_QWORD *)this + 6);
    *((_DWORD *)this + 34) = a3;
    SetPropW(v6, L"LastSetGlomIdForReconstitution", (HANDLE)a3);
  }
  return (unsigned int)v5;
}
