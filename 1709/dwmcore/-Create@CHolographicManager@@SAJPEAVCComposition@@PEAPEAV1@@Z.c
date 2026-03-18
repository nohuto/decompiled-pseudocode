/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BFF6C
 * Callers:
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1801BF8EC (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  struct CHolographicManager *v6; // rdi
  DWORD v7; // ebx
  HANDLE Event; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)WPF::ProcessHeapImpl::AllocClear(0xC8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v6 + 23) = Event;
    v7 = Event == 0LL ? 0x80004005 : 0;
    if ( Event )
    {
      *a2 = v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1Du);
      CMILRefCountBase::Release(v6);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x19u);
  }
  return v7;
}
