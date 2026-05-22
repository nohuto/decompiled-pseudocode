/*
 * XREFs of ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x1800B358C
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::EdgyProcessorTarget(
        EdgyProcessorTarget *this,
        struct EdgyProcessor *a2)
{
  struct EdgyProcessor *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &EdgyProcessorTarget::`vftable'{for `IInputTarget'};
  *((_WORD *)this + 18) = 0;
  *((_QWORD *)this + 1) = &EdgyProcessorTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 2) = &EdgyProcessorTarget::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 12) = -1;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = -1;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v4 = (struct EdgyProcessor *)*((_QWORD *)this + 13);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct EdgyProcessor *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct EdgyProcessor *)*((_QWORD *)this + 13);
    }
    *((_QWORD *)this + 13) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct EdgyProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 38) = 0;
  return this;
}
