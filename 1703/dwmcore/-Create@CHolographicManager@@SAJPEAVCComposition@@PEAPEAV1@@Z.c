/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A5E40
 * Callers:
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1801A5A10 (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  struct CHolographicManager *v6; // rdi
  unsigned int v7; // ebx
  HANDLE Event; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)WPF::ProcessHeapImpl::AllocClear(0xB8uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v6 + 22) = Event;
    v7 = Event == 0LL ? 0x80004005 : 0;
    if ( Event )
    {
      *a2 = v6;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1Du);
      CMILRefCountBase::Release(v6);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v7;
}
