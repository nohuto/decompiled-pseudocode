/*
 * XREFs of ??1DMMVIDPNTARGET@@UEAA@XZ @ 0x1C0004BF4
 * Callers:
 *     ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0004EC0 (--_EDMMVIDPNTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPNTARGET::~DMMVIDPNTARGET(DMMVIDPNTARGET *this)
{
  __int64 v2; // rax
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( (unsigned __int64)*(int *)(v2 + 96) > 1 )
    {
      v10 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 13);
      *(_QWORD *)(v10 + 32) = this;
      WdLogEvent5_WdError(v10);
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v11);
  }
  v3 = (void (__fastcall ***)(_QWORD, __int64))(*((_QWORD *)this + 12) + 64LL);
  v4 = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL));
  if ( v4 )
  {
    if ( v4 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v12 + 24) = v4;
      WdLogEvent5_WdError(v12);
    }
  }
  else if ( v3 )
  {
    (**v3)(v3, 1LL);
  }
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  *((_QWORD *)this + 14) = 0LL;
  v7 = *((_QWORD *)this + 13);
  if ( v7 )
  {
    v8 = v7 + 88;
    v9 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 8));
    if ( v9 )
    {
      if ( v9 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v13 + 24) = v9;
        WdLogEvent5_WdError(v13);
      }
    }
    else if ( v8 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
    }
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
