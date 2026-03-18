/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180194C10
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180194930 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetMitConfig@@YAKXZ @ 0x180194E84 (-GetMitConfig@@YAKXZ.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CMILCOMBase *v5; // rax
  CInputManager *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  int pvData; // [rsp+68h] [rbp+20h] BYREF

  dword_18027278C = GetMitConfig();
  v4 = (CInputManager *)WPF::ProcessHeapImpl::AllocClear(0x120uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CInputManager::CInputManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v8 = CInputManager::Initialize(v6);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x51u);
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
        *((_BYTE *)v6 + 208) = pvData != 0;
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x4Eu);
  }
  return v7;
}
