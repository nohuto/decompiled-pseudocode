/*
 * XREFs of MiAddRangeToCrashDump @ 0x140212C24
 * Callers:
 *     MiAddRangeToCrashDump @ 0x140212C24 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402130DC (MmAddRangeToCrashDump.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MiIsPageSecured @ 0x14021057C (MiIsPageSecured.c)
 *     MiAddRangeToCrashDump @ 0x140212C24 (MiAddRangeToCrashDump.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int16 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  BOOL IsPfnInline; // eax
  __int64 v15; // r8
  __int64 v16; // r10
  char v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  __int64 v26; // r10
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  int v31; // eax
  __int64 v34; // [rsp+58h] [rbp+10h] BYREF
  __int64 v35; // [rsp+68h] [rbp+20h]

  v35 = a4;
  v5 = a5;
  v6 = 0;
  v7 = a2;
  v8 = a3;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v7 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    v8 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  while ( v7 <= v8 )
  {
    if ( (_DWORD)v5 == 3 )
      KdCheckForDebugBreak();
    v34 = MI_READ_PTE_LOCK_FREE(v7);
    v9 = v34;
    v10 = v34 & 1;
    if ( (v34 & 1) != 0 )
    {
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v34) >> 12) & 0xFFFFFFFFFLL;
      if ( v11 == MiState[v5 + 581] || v11 == MiState[v5 + 577] )
        goto LABEL_55;
    }
    else
    {
      if ( (_DWORD)v5 )
        goto LABEL_55;
      v11 = 0LL;
    }
    if ( (_DWORD)v5 != 3 )
      goto LABEL_21;
    if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
    {
      v12 = v7;
      v13 = 4LL;
      do
      {
        v12 = (__int64)(v12 << 25) >> 16;
        --v13;
      }
      while ( v13 );
      if ( (*(_DWORD *)(v35 + 80) != 1 || (unsigned int)MiGetSystemRegionType(v12) != 1)
        && (unsigned int)MiGetSystemRegionType(v12) != 8 )
      {
LABEL_21:
        if ( (_DWORD)v5 )
        {
          IsPfnInline = MiIsPfnInline(v11);
          if ( v17 < 0 )
          {
            if ( !IsPfnInline )
              goto LABEL_55;
            v18 = v15 << 25;
            v19 = (__int64)((v7 << 25) - (v15 << 25)) >> 16;
            v20 = (__int64)((v7 << 25) - (v15 << 25) + 0x10000000) >> 16;
            v21 = v5;
            do
            {
              v19 = (__int64)((v19 << 25) - v18) >> 16;
              v20 = ((v20 << 25) - v18) >> 16;
              --v21;
            }
            while ( v21 );
            v22 = 1LL;
            if ( v19 < *(_QWORD *)(v35 + 64) )
              v19 = *(_QWORD *)(v35 + 64);
            v23 = (v20 - v19) >> 12;
            goto LABEL_52;
          }
          if ( IsPfnInline )
          {
            v24 = (*a1)(a1, v16, 1LL);
            if ( v24 < 0 && v6 >= 0 )
              v6 = v24;
          }
          v25 = MiAddRangeToCrashDump(
                  (_DWORD)a1,
                  (__int64)(v7 << 25) >> 16,
                  (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                  v35,
                  (int)v5 - 1);
          if ( v25 < 0 && v6 >= 0 )
            v6 = v25;
        }
        else
        {
          if ( !v10 )
          {
            if ( (v9 & 0x400) != 0 || (v9 & 0x800) == 0 )
              goto LABEL_55;
            v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v34);
          }
          if ( MiIsPfnInline(v11) && !MiIsPageSecured(48 * v26 - 0x58000000000LL) )
          {
            if ( (unsigned int)MiGetSystemRegionType((__int64)(v7 << 25) >> 16) != 9
              || (v30 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL, v30 > v27 + 0x3FFFFFFF78LL)
              || v30 < v27
              || (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
              && (*(_BYTE *)(v28 + 34) & 7) == 6
              && (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
              || v29 == qword_14036C9C0 )
            {
              v22 = 3842LL;
              v23 = 1LL;
              v19 = v29;
LABEL_52:
              v31 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, __int64, __int64))*a1)(
                      a1,
                      v19,
                      v23,
                      v22);
              if ( v31 < 0 && v6 >= 0 )
                v6 = v31;
            }
          }
        }
      }
    }
LABEL_55:
    v7 += 8LL;
  }
  return (unsigned int)v6;
}
