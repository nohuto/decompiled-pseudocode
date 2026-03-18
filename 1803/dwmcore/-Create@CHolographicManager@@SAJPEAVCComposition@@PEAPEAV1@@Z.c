/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C6C24
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1800C6CB0 (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  struct CHolographicManager *v6; // rdi
  HANDLE Event; // rax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)WPF::ProcessHeapImpl::AllocClear(0xE8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v6 + 27) = Event;
    v8 = Event == 0LL ? 0x80004005 : 0;
    if ( Event )
    {
      *a2 = v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1Du);
      CMILRefCountBase::Release(v6);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v8;
}
