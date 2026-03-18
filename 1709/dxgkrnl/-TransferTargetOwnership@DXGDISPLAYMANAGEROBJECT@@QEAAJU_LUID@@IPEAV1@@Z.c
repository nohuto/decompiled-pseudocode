/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01D9D3C
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C01DA300 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C002D0F8 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C002D2F4 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C002D310 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        struct DXGFASTMUTEX **this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGFASTMUTEX **a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _BYTE v18[16]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-40h] BYREF
  void **v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+48h] [rbp-28h]
  struct _LUID v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+60h] [rbp-10h]
  LONG HighPart; // [rsp+ACh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v9 = 0;
  if ( this[4] )
  {
    v22 = a2;
    v23 = v5;
    v20 = &SetElement::`vftable';
    v21 = 0LL;
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
      goto LABEL_7;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
                (const struct DXGTARGETENTRY *)&v20,
                (struct DXGDISPLAYMANAGEROBJECT *)a4,
                (struct DXGDISPLAYMANAGEROBJECT *)this) < 0 )
      goto LABEL_3;
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v13[3] = v5;
      v13[4] = HighPart;
      v13[5] = a2.LowPart;
      WdLogEvent5_WdError(v13);
      v9 = -1073741275;
      goto LABEL_3;
    }
    v14 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5), (__int64)&v20);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v14) )
    {
      v15 = (_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)(v14 + 8);
      if ( *(_QWORD *)(v16 + 8) != v14 + 8 || (v17 = *(_QWORD **)(v14 + 16), (_QWORD *)*v17 != v15) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      this[10] = (struct DXGFASTMUTEX *)((char *)this[10] - 1);
    }
    else
    {
      v14 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, a4[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)(a4 + 5), v14) && v14 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 181LL;
    WdLogEvent5_WdError(v10);
    v9 = -2147483611;
  }
LABEL_3:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  return v9;
}
