/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C000A394
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009D14 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00099DC (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this)
{
  DMMVIDPNSOURCEMODESET *v2; // rax
  __int64 v3; // rdx
  DMMVIDPNSOURCEMODESET *v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
  if ( v2 )
    v4 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v2, this);
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 && v4 != (DMMVIDPNSOURCEMODESET *)v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88), v3);
  *((_QWORD *)this + 13) = v4;
  if ( v4 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v4 + 3))((__int64)v4 + 24) )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v8);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(0LL);
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
