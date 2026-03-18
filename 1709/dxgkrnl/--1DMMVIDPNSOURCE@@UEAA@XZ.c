/*
 * XREFs of ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C000AB48
 * Callers:
 *     ??_GDMMVIDPNSOURCE@@UEAAPEAXI@Z @ 0x1C000AB10 (--_GDMMVIDPNSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C000B5DC (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPNSOURCE::~DMMVIDPNSOURCE(DMMVIDPNSOURCE *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( (unsigned __int64)*(int *)(v2 + 96) > 1 )
    {
      v6 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 13);
      *(_QWORD *)(v6 + 32) = this;
      WdLogEvent5_WdError(v6);
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v7);
  }
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>((char *)this + 128);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 88));
  *((_QWORD *)this + 15) = 0LL;
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
