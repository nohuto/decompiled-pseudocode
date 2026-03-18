/*
 * XREFs of MiAddRangeToCrashDump @ 0x140256F18
 * Callers:
 *     MiAddRangeToCrashDump @ 0x140256F18 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140257390 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     KdCheckForDebugBreak @ 0x14014F22C (KdCheckForDebugBreak.c)
 *     MiIsPageSecured @ 0x14015B694 (MiIsPageSecured.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiAddRangeToCrashDump @ 0x140256F18 (MiAddRangeToCrashDump.c)
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
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int SystemRegionType; // eax
  BOOL IsPfnInline; // eax
  __int64 v16; // r8
  __int64 v17; // r10
  char v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // r10
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  __int64 v31; // r11
  unsigned __int64 v32; // rcx
  int v33; // eax
  __int64 v36; // [rsp+58h] [rbp+10h] BYREF
  __int64 v37; // [rsp+68h] [rbp+20h]

  v37 = a4;
  v5 = a5;
  v6 = 0;
  v7 = a2;
  v8 = a3;
  if ( a2 < *(_QWORD *)(a4 + 16LL * (int)a5) )
    v7 = *(_QWORD *)(a4 + 16LL * (int)a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * (int)a5 + 8) )
    v8 = *(_QWORD *)(a4 + 16LL * (int)a5 + 8);
  while ( v7 <= v8 )
  {
    if ( (_DWORD)v5 == 3 )
      KdCheckForDebugBreak();
    v36 = MI_READ_PTE_LOCK_FREE(v7);
    v9 = v36;
    v10 = v36 & 1;
    if ( (v36 & 1) != 0 )
    {
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL;
      if ( v11 == MiState[(int)v5 + 621] || v11 == MiState[(int)v5 + 617] )
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
      SystemRegionType = MiGetSystemRegionType(v12);
      if ( (*(_DWORD *)(v37 + 80) != 1 || SystemRegionType != 1) && SystemRegionType != 8 )
      {
LABEL_21:
        if ( (_DWORD)v5 )
        {
          IsPfnInline = MiIsPfnInline(v11);
          if ( v18 < 0 )
          {
            if ( !IsPfnInline )
              goto LABEL_55;
            v19 = v16 << 25;
            v20 = (__int64)((v7 << 25) - (v16 << 25)) >> 16;
            v21 = (__int64)((v7 << 25) - (v16 << 25) + 0x10000000) >> 16;
            if ( (int)v5 > 0 )
            {
              v22 = v5;
              do
              {
                v20 = (__int64)((v20 << 25) - v19) >> 16;
                v21 = ((v21 << 25) - v19) >> 16;
                --v22;
              }
              while ( v22 );
            }
            v23 = 1LL;
            if ( v20 < *(_QWORD *)(v37 + 64) )
              v20 = *(_QWORD *)(v37 + 64);
            v24 = (v21 - v20) >> 12;
            goto LABEL_52;
          }
          if ( IsPfnInline )
          {
            v25 = (*a1)(a1, v17, 1LL);
            if ( v25 < 0 && v6 >= 0 )
              v6 = v25;
          }
          v26 = MiAddRangeToCrashDump(
                  (_DWORD)a1,
                  (__int64)(v7 << 25) >> 16,
                  (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                  v37,
                  (int)v5 - 1);
          if ( v26 < 0 && v6 >= 0 )
            v6 = v26;
        }
        else
        {
          if ( !v10 )
          {
            if ( (v9 & 0x400) != 0 || (v9 & 0x800) == 0 )
              goto LABEL_55;
            v11 = (MiReverseSwizzleInvalidPte(v9) >> 12) & 0xFFFFFFFFFLL;
          }
          if ( MiIsPfnInline(v11) && !MiIsPageSecured(48 * v27 - 0x58000000000LL) )
          {
            if ( (unsigned int)MiGetSystemRegionType((__int64)(v7 << 25) >> 16) != 9
              || (v32 = *(_QWORD *)(v29 + 8) | 0x8000000000000000uLL, v32 > v28 + 0x3FFFFFFF78LL)
              || v32 < v28
              || (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
              && (*(_BYTE *)(v29 + 34) & 7) == 6
              && (v31 & *(_QWORD *)(v29 + 40)) == 0xFFFFFFFFDLL
              || v30 == qword_1403CBE50 )
            {
              v23 = 3842LL;
              v24 = 1LL;
              v20 = v30;
LABEL_52:
              v33 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, __int64, __int64))*a1)(
                      a1,
                      v20,
                      v24,
                      v23);
              if ( v33 < 0 && v6 >= 0 )
                v6 = v33;
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
