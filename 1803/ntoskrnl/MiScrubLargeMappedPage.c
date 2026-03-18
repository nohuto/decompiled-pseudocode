/*
 * XREFs of MiScrubLargeMappedPage @ 0x1402703B8
 * Callers:
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int8 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  int v14; // r10d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rbx
  ULONG_PTR v26; // r13
  ULONG_PTR i; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r15
  __int64 v33; // r8
  unsigned __int8 v34; // [rsp+20h] [rbp-168h]
  char v35; // [rsp+21h] [rbp-167h]
  unsigned __int64 v36; // [rsp+28h] [rbp-160h]
  __int64 v37; // [rsp+28h] [rbp-160h]
  int v38; // [rsp+30h] [rbp-158h]
  BOOL v39; // [rsp+34h] [rbp-154h]
  __int64 v40; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-140h]
  unsigned __int64 v43; // [rsp+50h] [rbp-138h]
  unsigned __int64 valid; // [rsp+58h] [rbp-130h]
  __int64 v45; // [rsp+60h] [rbp-128h]
  unsigned __int64 v46; // [rsp+68h] [rbp-120h]
  __int64 v47; // [rsp+70h] [rbp-118h]
  __int64 v48; // [rsp+80h] [rbp-108h]
  int v49; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v50; // [rsp+94h] [rbp-F4h]
  int v51; // [rsp+98h] [rbp-F0h]
  int v52; // [rsp+9Ch] [rbp-ECh]
  __int64 v53; // [rsp+A0h] [rbp-E8h]
  __int64 v54; // [rsp+A8h] [rbp-E0h]

  v45 = a2;
  v48 = a2;
  v4 = 1;
  v52 = 0;
  v49 = 1;
  v50 = 0;
  v53 = 0LL;
  v51 = 20;
  v54 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v5 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v6 = ((((unsigned __int64)*(unsigned int *)(a1 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v42 = v6;
  v7 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v43 = v7;
  v8 = a3 + 1280;
  v47 = a3 + 1280;
  v10 = MiLockWorkingSetShared(a3 + 1280);
  v34 = v10;
  while ( v6 <= v7 )
  {
    v41 = (_QWORD *)v6;
    valid = MiLockLowestValidPageTable(v8, v6, (unsigned __int64 *)&v41);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v41);
    v40 = v11;
    if ( (v11 & 1) != 0 && (v11 & 0x80u) != 0LL )
    {
      v46 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFLL;
      v14 = 1;
      v15 = 512LL;
      v16 = (__int64)(v13 << 25) >> 16 << 25 >> 16;
      while ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v16 = (__int64)(v16 << 25) >> 16;
        v15 <<= 9;
        ++v14;
      }
      *(_QWORD *)v13 = ZeroPte;
      v39 = MiPteInShadowRange(v13);
      if ( v39 )
        MiWritePteShadow(v18, v17, v19);
      MiInsertTbFlushEntry((__int64)&v49, (__int64)(v6 << 25) >> 16 << 25 >> 16, 1LL, v20);
      MiFlushTbList((__int64)&v49, v21, v22);
      v24 = v36 & -(__int64)(v36 < v15);
      v37 = v24;
      v38 = 0;
      v25 = 48 * v46 - 0x58000000000LL;
      v26 = v25 + 48 * v15;
      for ( i = 48 * v24 + v25; i < v26; i += 48LL )
      {
        v37 = ++v24;
        if ( *(_WORD *)(i + 32) == 2 )
        {
          if ( (int)MiScrubPage(v45, *(_QWORD *)(v45 + 152), i, 0LL) < 0 )
          {
            MiLockPageAtDpcInline(i);
            MiMakePageBad(i, 0);
            _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( (unsigned int)MiWorkingSetIsContended(v8)
            || (unsigned int)MiPageTableLockIsContended(v28, valid)
            || KeShouldYieldProcessor() )
          {
            v38 = 1;
            break;
          }
          if ( *(_DWORD *)(a4 + 4) )
          {
            v35 = 1;
            break;
          }
          v24 = v37;
        }
      }
      v29 = v40 | 0x20;
      v40 = v29;
      v30 = v41;
      *v41 = v29;
      if ( v39 )
        MiWritePteShadow((__int64)v30, v29, v23);
      MiUnlockPageTableInternal(v8, valid);
      if ( i == v26 )
      {
        v6 += 8 * (v15 >> 9);
        v42 = v6;
      }
      v31 = 0LL;
      if ( i != v26 )
        v31 = v37;
      v36 = v31;
      v10 = v34;
      if ( v35 == 1 )
      {
        v4 = 0;
        break;
      }
      if ( v38 )
      {
        MiUnlockWorkingSetShared(v8, v34, v9);
        MiLockWorkingSetShared(v8);
      }
      v7 = v43;
      v4 = 1;
    }
    else
    {
      MiUnlockPageTableInternal(v8, v12);
      MiUnlockWorkingSetShared(v8, v10, v33);
      v7 = v43;
      v4 = 1;
      MiLockWorkingSetShared(v8);
    }
  }
  MiUnlockWorkingSetShared(v8, v10, v9);
  return v4;
}
