/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18007B120 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800AECC0 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v3; // rcx
  void (*v5)(void); // rax
  struct CDrawListPrimitive8 *(__fastcall ***v6)(struct CDrawListPrimitive8 *, char); // rcx
  struct CDrawListPrimitive8 *(__fastcall *v7)(struct CDrawListPrimitive8 *, char); // rax
  __int64 v8; // rcx
  int Current; // eax
  struct CThreadContext *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v13; // [rsp+30h] [rbp+8h] BYREF

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v3);
    else
      v5();
  }
  v6 = (struct CDrawListPrimitive8 *(__fastcall ***)(struct CDrawListPrimitive8 *, char))*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = **v6;
    if ( (char *)v7 == (char *)PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(v6);
    }
    else if ( v7 == PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        (struct CDrawListPrimitive8 *)v6,
        1);
    }
    else
    {
      v7((struct CDrawListPrimitive8 *)v6, 1);
    }
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    Current = CThreadContext::GetCurrent(&v13);
    if ( Current < 0 )
    {
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      __debugbreak();
    }
    v10 = v13;
    if ( *((_DWORD *)v13 + 7) >= *((_DWORD *)v13 + 6) )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)v13 + 4);
      ++*((_DWORD *)v10 + 7);
      *((_QWORD *)v10 + 4) = this;
    }
  }
  return this;
}
