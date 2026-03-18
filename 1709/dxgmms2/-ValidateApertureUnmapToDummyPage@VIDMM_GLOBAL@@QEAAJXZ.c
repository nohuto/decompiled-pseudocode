/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AD058
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(VIDMM_GLOBAL *this)
{
  int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // ebp
  unsigned int v5; // edx
  _DWORD *v6; // r10
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 i; // rdi
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v16 = 0LL;
  v3 = 0LL;
  v4 = 255;
  v5 = *((_DWORD *)this + 926);
  if ( !v5 )
    goto LABEL_4;
  while ( 1 )
  {
    v6 = *(_DWORD **)(*((_QWORD *)this + 464) + 8 * v3);
    v7 = (unsigned int)v3;
    if ( (v6[20] & 1) == 0 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v5 )
      goto LABEL_4;
  }
  v4 = v3;
  if ( (_DWORD)v3 == 255 )
  {
LABEL_4:
    v8 = WdLogNewEntry5_WdWarning(v3);
    WdLogEvent5_WdWarning(v8);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *, __int64 *))(*(_QWORD *)v6 + 184LL))(
           v6,
           1LL,
           &v16,
           &v17);
    if ( v2 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v11, v13);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 464) + 8 * i) + 144LL))(
               *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i),
               *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v7),
               v17);
        if ( v2 < 0 )
          break;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v12);
      WdLogEvent5_WdWarning(v14);
      v2 = -1073741801;
    }
  }
  if ( v16 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 192LL))(v9);
  }
  return (unsigned int)v2;
}
