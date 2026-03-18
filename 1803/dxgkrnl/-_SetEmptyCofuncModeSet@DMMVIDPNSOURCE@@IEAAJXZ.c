/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0003C38
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00036F0 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0005C88 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this)
{
  DMMVIDPNSOURCEMODESET *PoolWithTag; // rax
  DMMVIDPNSOURCEMODESET *v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  PoolWithTag = (DMMVIDPNSOURCEMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
  if ( PoolWithTag )
    v3 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(PoolWithTag, this);
  else
    v3 = 0LL;
  v4 = *((_QWORD *)this + 13);
  if ( v4 && v3 != (DMMVIDPNSOURCEMODESET *)v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  *((_QWORD *)this + 13) = v3;
  if ( v3 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v3 + 3))((__int64)v3 + 24) )
    {
      return 0LL;
    }
    else
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v6);
    return 3221225495LL;
  }
}
