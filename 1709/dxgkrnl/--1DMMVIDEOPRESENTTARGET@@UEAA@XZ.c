/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01F460C
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C0036010 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000504C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0036144 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00361C8 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00A9AB0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00B0874 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this)
{
  struct HDXGMONITOR__ *v1; // rsi
  __int64 v3; // rax
  VIDPN_MGR *v4; // rdi
  __int64 v5; // rax
  ReferenceCounted *v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  char **v9; // rcx
  DMMVIDEOPRESENTTARGET *v10; // rcx
  DMMVIDEOPRESENTTARGET *v11; // rcx
  DXGADAPTER *v12; // rcx
  struct _IO_WORKITEM *v13; // rcx
  void *v14; // rcx

  v1 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 13);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v1 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      v3 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v3);
    }
    v4 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v4 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v5);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v4, v1);
  }
  v6 = (ReferenceCounted *)*((_QWORD *)this + 66);
  if ( v6 )
  {
    ReferenceCounted::Release(v6);
    *((_QWORD *)this + 66) = 0LL;
  }
  v7 = (char *)this + 488;
  if ( *((_QWORD *)this + 61) )
  {
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (char **)*((_QWORD *)this + 62), *v9 != v7) )
      __fastfail(3u);
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  v10 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 56);
  if ( v10 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v10, this);
  v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 63);
  if ( v11 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v11, this);
  if ( *((_QWORD *)this + 64) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), -1) != 5 )
    {
      v12 = (DXGADAPTER *)**((_QWORD **)this + 64);
      if ( v12 )
        DXGADAPTER::ReleaseReferenceNoTracking(v12);
      v13 = *(struct _IO_WORKITEM **)(*((_QWORD *)this + 64) + 160LL);
      if ( v13 )
        IoFreeWorkItem(v13);
      v14 = (void *)*((_QWORD *)this + 64);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
