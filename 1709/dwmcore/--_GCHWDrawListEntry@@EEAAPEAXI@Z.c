/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B3C40 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B5F00 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ??_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800BDB30 (--_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  __int64 (__fastcall ***v6)(void *); // rcx
  __int64 (__fastcall *v7)(void *); // rax
  __int64 v8; // rcx
  int Current; // eax
  struct CThreadContext *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v13; // [rsp+30h] [rbp+8h] BYREF

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v5();
  }
  v6 = (__int64 (__fastcall ***)(void *))*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = **v6;
    if ( v7 == PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(v6);
    }
    else if ( v7 == PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(v6);
    }
    else if ( (char *)v7 == (char *)PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor' )
    {
      PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        (PrimitiveStorage::CDynamicInlineStorage *)v6,
        1u);
    }
    else
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(void *), __int64))v7)(v6, 1LL);
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
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
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
