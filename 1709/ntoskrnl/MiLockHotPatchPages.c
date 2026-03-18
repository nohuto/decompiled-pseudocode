/*
 * XREFs of MiLockHotPatchPages @ 0x140219014
 * Callers:
 *     MiPrepareImageForHotPatch @ 0x1406E1E84 (MiPrepareImageForHotPatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiReferenceDriverPage @ 0x1402142F4 (MiReferenceDriverPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     RtlDetermineHotPatchExtent @ 0x140727494 (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(__int64 *a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r10
  char *AnyMultiplexedVm; // r13
  int v10; // r8d
  unsigned int *v11; // r12
  unsigned int v12; // esi
  unsigned __int64 v13; // r15
  __int64 v14; // r11
  __int64 *v15; // rdi
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  unsigned int v18; // r9d
  unsigned __int8 v19; // r14
  __int64 v20; // rax
  LONG *v21; // rax
  LONG *v22; // rbx
  KIRQL v23; // al
  unsigned int v24; // r9d
  __int64 v25; // r12
  __int64 v26; // rbx
  LONG *v27; // rax
  bool v28; // zf
  unsigned int v30; // [rsp+30h] [rbp-B1h]
  unsigned int v31; // [rsp+34h] [rbp-ADh] BYREF
  unsigned int v32; // [rsp+38h] [rbp-A9h] BYREF
  int v33; // [rsp+3Ch] [rbp-A5h]
  unsigned int v34; // [rsp+40h] [rbp-A1h]
  __int64 *v35; // [rsp+48h] [rbp-99h]
  unsigned int *v36; // [rsp+50h] [rbp-91h]
  unsigned __int64 v37; // [rsp+58h] [rbp-89h]
  __int64 v38; // [rsp+60h] [rbp-81h]
  unsigned __int64 v39; // [rsp+68h] [rbp-79h]
  __int128 v40; // [rsp+70h] [rbp-71h]
  char v41[8]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v42; // [rsp+88h] [rbp-59h]
  __int128 v43; // [rsp+90h] [rbp-51h]
  void *retaddr; // [rsp+138h] [rbp+57h]

  v4 = *a1;
  v5 = a4;
  *((_QWORD *)&v40 + 1) = 0LL;
  v34 = a4;
  v6 = *(_QWORD *)(v4 + 48);
  v33 = a3;
  v35 = a1;
  v39 = v6;
  v38 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( v10 )
  {
    v11 = (unsigned int *)(v7 + 4 * v8);
    v36 = v11;
    while ( 1 )
    {
      RtlDetermineHotPatchExtent(v5, *v11, &v31, &v32);
      v12 = v31;
      v13 = v6 + ((unsigned __int64)v31 << 12);
      v15 = (__int64 *)(v14 + 8LL * v31);
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v17 = ExAcquireSpinLockExclusive(SharedVm);
      v18 = v32;
      v19 = v17;
      SharedVm[1] = 0;
      v30 = v18;
      if ( v12 <= v18 )
        break;
LABEL_25:
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
      v27 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
      else
        *v27 = 0;
      __writecr8(v19);
      v11 += 2;
      v28 = v33-- == 1;
      v36 = v11;
      if ( v28 )
        return 0LL;
      v6 = v39;
      v5 = v34;
    }
    while ( 1 )
    {
      v20 = *v15;
      if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v20) = MiReadPteShadow();
      if ( (v20 & 1) != 0 )
      {
        v25 = MI_GET_PAGE_FRAME_FROM_PTE(v15);
        v26 = 48 * v25 - 0x58000000000LL;
        if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) == 0 )
        {
          v37 = v12;
          if ( !_bittest64((const signed __int64 *)v35[3], v12) )
          {
            MiLockPageAtDpcInline(v26);
            MiReferenceDriverPage(v26);
            if ( ((*(_QWORD *)(v26 + 40) >> 54) & 7) != 3 )
            {
              *(_QWORD *)&v40 = v13;
              v42 = v25;
              v43 = v40;
              VslpEnterIumSecureMode(2u, 229LL, 0, (__int64)v41);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v24 = v32;
            v12 = v31;
            v30 = v32;
            _bittestandset64((signed __int64 *)v35[3], v37);
          }
          ++v12;
          ++v15;
          v31 = v12;
          v13 += 4096LL;
          goto LABEL_23;
        }
        if ( *(__int64 *)(v26 + 8) < 0 )
          MiMakeDriverPagesPrivate(*v35, (unsigned __int64)v15, (unsigned __int64)&v15[v24 - v12], v19, 0);
        else
          MiCopyOnWriteEx(v13, v15, -1LL, v19, 0);
      }
      else
      {
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
        v21 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
        else
          *v21 = 0;
        __writecr8(v19);
        if ( (int)MmAccessFault(0LL, v13, 0LL, 0LL) < 0 )
          return 3221225595LL;
        v22 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v23 = ExAcquireSpinLockExclusive(v22);
        v22[1] = 0;
        v19 = v23;
      }
      v24 = v30;
LABEL_23:
      if ( v12 > v24 )
      {
        v11 = v36;
        goto LABEL_25;
      }
    }
  }
  return 0LL;
}
