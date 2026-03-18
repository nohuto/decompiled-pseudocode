/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D99B4
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C01D97E0 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C002D17C (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C002D310 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(struct DXGFASTMUTEX **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  DXGDISPLAYMANAGEROBJECT *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( !this[4] )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 442LL;
    WdLogEvent5_WdAssertion(v3);
  }
  this[4] = 0LL;
  *((_BYTE *)this + 24) = 0;
  while ( this[8] != (struct DXGFASTMUTEX *)(this + 8) )
  {
    v4 = 0LL;
    v5 = this[8];
    if ( v5 != (DXGDISPLAYMANAGEROBJECT *)(this + 8) )
      v4 = (__int64)v5 - 8;
    v6 = (_QWORD *)Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5), v4);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           (__int64)v6) )
    {
      v9 = v6 + 1;
      v10 = v6[1];
      if ( *(_QWORD **)(v10 + 8) != v6 + 1 || (v11 = (_QWORD *)v6[2], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
      v6[2] = 0LL;
      this[10] = (struct DXGFASTMUTEX *)((char *)this[10] - 1);
    }
    else
    {
      v6 = 0LL;
      v8 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v8 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
      (const struct DXGTARGETENTRY *)v6,
      0LL,
      (struct DXGDISPLAYMANAGEROBJECT *)this);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v6)(v6, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  }
  (*((void (__fastcall **)(char *))this[5] + 3))((char *)this + 40);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)(this + 12));
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
