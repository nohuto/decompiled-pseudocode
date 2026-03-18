/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A4B08
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(VIDMM_GLOBAL *this)
{
  unsigned int v1; // r8d
  int v2; // esi
  __int64 v3; // rdx
  VIDMM_GLOBAL *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 i; // rdi
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 926);
  v2 = 0;
  v16 = 0LL;
  v3 = 0LL;
  v4 = this;
  v5 = 255;
  if ( !v1 )
    goto LABEL_5;
  v6 = *((_QWORD *)this + 464);
  while ( 1 )
  {
    this = *(VIDMM_GLOBAL **)(v6 + 8 * v3);
    if ( (*((_DWORD *)this + 20) & 1) == 0 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v1 )
      goto LABEL_5;
  }
  v5 = v3;
  if ( (_DWORD)v3 == 255 )
  {
LABEL_5:
    v7 = WdLogNewEntry5_WdWarning(this, v3);
    WdLogEvent5_WdWarning(v7);
  }
  else
  {
    v10 = (unsigned int)v3;
    v2 = (*(__int64 (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64 *, __int64 *))(*(_QWORD *)this + 168LL))(
           this,
           1LL,
           &v16,
           &v17);
    if ( v2 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(v4, v11, v13);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 926); i = (unsigned int)(i + 1) )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v4 + 464) + 8 * i) + 128LL))(
               *(_QWORD *)(*((_QWORD *)v4 + 464) + 8 * i),
               *(_QWORD *)(*((_QWORD *)v4 + 464) + 8 * v10),
               v17);
        if ( v2 < 0 )
          break;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11);
      WdLogEvent5_WdWarning(v14);
      v2 = -1073741801;
    }
  }
  if ( v16 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)v4 + 464) + 8LL * v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8);
  }
  return (unsigned int)v2;
}
