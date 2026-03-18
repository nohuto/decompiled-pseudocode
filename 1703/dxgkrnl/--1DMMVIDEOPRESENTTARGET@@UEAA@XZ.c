/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01DBD0C
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C00451E0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0008530 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0045344 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00453C8 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00A44B0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  __int64 v8; // rax
  char *v9; // rax
  __int64 *v10; // rcx
  DMMVIDEOPRESENTTARGET *v11; // rcx
  DMMVIDEOPRESENTTARGET *v12; // rcx
  DXGADAPTER *v13; // rcx
  struct _IO_WORKITEM *v14; // rcx
  void *v15; // rcx

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 13);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v4 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v7, v4, a3, a4);
  }
  v9 = (char *)this + 488;
  if ( *((_QWORD *)this + 61) )
  {
    a2 = *(_QWORD *)v9;
    v10 = (__int64 *)*((_QWORD *)this + 62);
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (char *)*v10 != v9 )
      __fastfail(3u);
    *v10 = a2;
    *(_QWORD *)(a2 + 8) = v10;
  }
  v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 56);
  if ( v11 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v11, this);
  v12 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 63);
  if ( v12 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v12, this);
  if ( *((_QWORD *)this + 64) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this, a2, a3, a4);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), -1) != 5 )
    {
      v13 = (DXGADAPTER *)**((_QWORD **)this + 64);
      if ( v13 )
        DXGADAPTER::ReleaseReferenceNoTracking(v13);
      v14 = *(struct _IO_WORKITEM **)(*((_QWORD *)this + 64) + 160LL);
      if ( v14 )
        IoFreeWorkItem(v14);
      v15 = (void *)*((_QWORD *)this + 64);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64), a2);
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
}
