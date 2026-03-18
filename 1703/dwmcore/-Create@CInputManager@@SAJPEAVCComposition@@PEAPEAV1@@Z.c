/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA7F4
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ?GetMitConfig@@YAKXZ @ 0x1800CA914 (-GetMitConfig@@YAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  char *v4; // rax
  CInputManager *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  void *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF
  int pvData; // [rsp+78h] [rbp+20h] BYREF

  dword_18023E9D0 = GetMitConfig();
  v4 = (char *)WPF::ProcessHeapImpl::AllocClear(0xF0uLL);
  v5 = (CInputManager *)v4;
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 2) = a1;
  *(_QWORD *)v4 = &CInputManager::`vftable';
  *((_QWORD *)v4 + 3) = a1;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_DWORD *)v4 + 18) = 0;
  *((_DWORD *)v4 + 22) = 0;
  *(_QWORD *)(v4 + 60) = 0LL;
  *((_DWORD *)v4 + 9) = 0;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 17) = 0LL;
  *((_QWORD *)v4 + 19) = 0LL;
  *((_DWORD *)v4 + 36) = 0;
  *((_DWORD *)v4 + 40) = 0;
  *((_QWORD *)v4 + 21) = 0LL;
  *((_QWORD *)v4 + 23) = 0LL;
  *((_DWORD *)v4 + 44) = 0;
  *((_DWORD *)v4 + 48) = 0;
  v4[208] = 1;
  CInputManager::s_pInputManager = (struct CInputManager *)v4;
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v4);
  v6 = CInputManager::Initialize(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x53u);
    CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Shell\\CShellUseCoreShell",
            L"Enabled",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      *((_BYTE *)v5 + 208) = pvData != 0;
    *a2 = v5;
  }
  return v7;
}
