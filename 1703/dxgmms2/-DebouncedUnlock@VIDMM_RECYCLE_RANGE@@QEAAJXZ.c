/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0068D24
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00645F0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0067D2C (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067F38 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004880C (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064B90 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EA4 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0068964 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  VIDMM_RECYCLE_HEAP_MGR **v13; // rcx
  _QWORD *v14; // rax

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 3);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3);
      v14[7] = 0LL;
      v14[3] = 270LL;
      v14[4] = 52LL;
      v14[5] = 6LL;
      v14[6] = v3;
      WdLogEvent5_WdCriticalError(v14);
      return 0LL;
    }
    if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v5, &EventProfilerEnter, a3, 8001);
    v8 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v8 >= 0 )
    {
      v13 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v13 - 3) <= 3 )
      {
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v13, this);
        v9 = 0LL;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v13[1], this);
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
          *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
          this);
        v9 = 5LL;
      }
LABEL_5:
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, v9);
      if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v10, &EventProfilerExit, v11, 8001);
      return 0LL;
    }
  }
  else
  {
    if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v5, &EventProfilerEnter, a3, 8001);
    v8 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v8 >= 0 )
    {
      v9 = 1LL;
      goto LABEL_5;
    }
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 8001);
  return (unsigned int)v8;
}
