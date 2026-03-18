/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C0110F00
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C0110CC0 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001A118 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0038794 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(struct DXGFASTMUTEX **this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r11
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( !this[4] )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 493LL;
    WdLogEvent5_WdAssertion(v4);
  }
  this[4] = 0LL;
  *((_BYTE *)this + 24) = 0;
  while ( 1 )
  {
    v3 = (char *)(this + 5);
    if ( this[8] == (struct DXGFASTMUTEX *)(this + 8) )
      break;
    v6 = (_QWORD *)Set<DXGTARGETENTRY>::FindByValue((__int64)v3);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           v5 + 8,
           (__int64)v6) )
    {
      v10 = v6 + 1;
      v11 = v6[1];
      if ( *(_QWORD **)(v11 + 8) != v6 + 1 || (v12 = (_QWORD *)v6[2], (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      v6[2] = 0LL;
      --*(_QWORD *)(v8 + 40);
    }
    else
    {
      v6 = 0LL;
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 501LL;
      WdLogEvent5_WdAssertion(v9);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
      (const struct DXGTARGETENTRY *)v6,
      0LL,
      (struct DXGDISPLAYMANAGEROBJECT *)this,
      0);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v6)(v6, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  }
  (*((void (__fastcall **)(char *))this[5] + 3))(v3);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)(this + 12));
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
