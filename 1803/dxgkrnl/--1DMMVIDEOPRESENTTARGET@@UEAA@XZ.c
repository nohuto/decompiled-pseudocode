/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0220F74
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C0045F20 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004674 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00460E4 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0046168 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00B8F10 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C022168C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  __int64 v9; // rax
  ReferenceCounted *v10; // rcx
  char *v11; // rcx
  __int64 v12; // rax
  char **v13; // rdx
  DMMVIDEOPRESENTTARGET *v14; // rcx
  DMMVIDEOPRESENTTARGET *v15; // rcx
  DXGADAPTER **v16; // rcx

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 13);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 5);
    if ( !v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
      v6 = *((_QWORD *)this + 5);
    }
    v8 = *(VIDPN_MGR **)(v6 + 88);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v9);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v8, v4, a3, a4);
  }
  v10 = (ReferenceCounted *)*((_QWORD *)this + 66);
  if ( v10 )
  {
    ReferenceCounted::Release(v10);
    *((_QWORD *)this + 66) = 0LL;
  }
  v11 = (char *)this + 488;
  v12 = *((_QWORD *)this + 61);
  if ( v12 )
  {
    if ( *(char **)(v12 + 8) != v11 || (v13 = (char **)*((_QWORD *)this + 62), *v13 != v11) )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
  v14 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 56);
  if ( v14 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v14, this);
  v15 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 63);
  if ( v15 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v15, this);
  if ( *((_QWORD *)this + 64) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), -1) != 5 )
    {
      v16 = (DXGADAPTER **)*((_QWORD *)this + 64);
      if ( *v16 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v16);
        v16 = (DXGADAPTER **)*((_QWORD *)this + 64);
      }
      if ( v16[20] )
      {
        IoFreeWorkItem(v16[20]);
        v16 = (DXGADAPTER **)*((_QWORD *)this + 64);
      }
      operator delete(v16);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
