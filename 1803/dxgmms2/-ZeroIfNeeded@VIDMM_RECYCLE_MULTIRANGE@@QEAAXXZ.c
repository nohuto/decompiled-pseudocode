/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006F7E0
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C006AE50 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C006D3E0 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FEE0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0070090 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2, __int64 a3)
{
  struct VIDMM_RECYCLE_RANGE *i; // rax
  unsigned int *j; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  _QWORD *v8; // rax

  if ( dword_1C0047370 )
  {
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
          *((_DWORD *)i + 21) != 3;
          i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
        goto LABEL_5;
    }
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
LABEL_5:
    for ( j = (unsigned int *)*((_QWORD *)this + 8);
          ;
          j = (unsigned int *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)j) )
    {
      v6 = j[21];
      if ( (_DWORD)v6 != 2 )
      {
        if ( (_DWORD)v6 )
        {
          v7 = v6 - 1;
          if ( !v7 || v7 == 2 )
            j[21] = 2;
        }
        else if ( g_IsInternalRelease )
        {
          v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3);
          v8[3] = 270LL;
          v8[4] = 9LL;
          v8[5] = 0LL;
          v8[6] = 0LL;
          v8[7] = 0LL;
          WdLogEvent5_WdCriticalError(v8);
        }
      }
      if ( j == *((unsigned int **)this + 9) )
        break;
    }
  }
}
