/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C84AC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x1800C8568 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800C86D0 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CMILCOMBase *v5; // rax
  CInputManager *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  int pvData; // [rsp+68h] [rbp+20h] BYREF

  v4 = (CInputManager *)WPF::ProcessHeapImpl::AllocClear(0x128uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CInputManager::CInputManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CInputManager::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x28u);
      CMILCOMBase::InternalRelease(v6);
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
        *((_BYTE *)v6 + 216) = pvData != 0;
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u);
  }
  return v8;
}
