/*
 * XREFs of ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01D9BE4
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C01DA300 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C002D310 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        struct DXGFASTMUTEX **this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-40h] BYREF
  void **v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h]
  struct _LUID v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+50h] [rbp-10h]
  LONG HighPart; // [rsp+8Ch] [rbp+2Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, this[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( this[4] )
  {
    v19 = a2;
    v20 = v4;
    v17 = &SetElement::`vftable';
    v18 = 0LL;
    v9 = (_QWORD *)Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5), (__int64)&v17);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           (__int64)v9) )
    {
      v11 = v9 + 1;
      v12 = v9[1];
      if ( *(_QWORD **)(v12 + 8) != v9 + 1 || (v13 = (_QWORD *)v9[2], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      v9[2] = 0LL;
      this[10] = (struct DXGFASTMUTEX *)((char *)this[10] - 1);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        (const struct DXGTARGETENTRY *)v9,
        0LL,
        (struct DXGDISPLAYMANAGEROBJECT *)this);
      (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
      v8 = 0;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v14[4] = HighPart;
      v14[5] = a2.LowPart;
      v14[3] = v4;
      WdLogEvent5_WdError(v14);
      v8 = -1073741275;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 149LL;
    WdLogEvent5_WdError(v7);
    v8 = -2147483611;
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v8;
}
