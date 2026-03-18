/*
 * XREFs of MiLockHotPatchPages @ 0x140211784
 * Callers:
 *     MiPrepareImageForHotPatch @ 0x1406B5C20 (MiPrepareImageForHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiReferenceDriverPage @ 0x14020D294 (MiReferenceDriverPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     RtlDetermineHotPatchExtent @ 0x1406EEFB8 (RtlDetermineHotPatchExtent.c)
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
  unsigned int v12; // edi
  ULONG_PTR v13; // r14
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  unsigned __int8 v18; // r15
  LONG *v19; // rbx
  KIRQL v20; // al
  unsigned int v21; // r9d
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  LONG *v24; // rax
  bool v25; // zf
  unsigned int v27; // [rsp+30h] [rbp-B1h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-ADh] BYREF
  int v29; // [rsp+38h] [rbp-A9h]
  unsigned int v30; // [rsp+3Ch] [rbp-A5h]
  __int64 *v31; // [rsp+40h] [rbp-A1h]
  unsigned int *v32; // [rsp+48h] [rbp-99h]
  unsigned __int64 v33; // [rsp+50h] [rbp-91h]
  __int64 v34; // [rsp+58h] [rbp-89h]
  unsigned __int64 v35; // [rsp+60h] [rbp-81h]
  __int128 v36; // [rsp+68h] [rbp-79h]
  char v37[8]; // [rsp+80h] [rbp-61h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-59h]
  __int128 v39; // [rsp+90h] [rbp-51h]
  void *retaddr; // [rsp+138h] [rbp+57h]

  v4 = *a1;
  v5 = a4;
  *((_QWORD *)&v36 + 1) = 0LL;
  v30 = a4;
  v6 = *(_QWORD *)(v4 + 48);
  v29 = a3;
  v31 = a1;
  v35 = v6;
  v34 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( v10 )
  {
    v11 = (unsigned int *)(v7 + 4 * v8);
    v32 = v11;
    while ( 1 )
    {
      RtlDetermineHotPatchExtent(v5, *v11, &v28, &v27);
      v12 = v28;
      v13 = v6 + ((unsigned __int64)v28 << 12);
      v15 = v14 + 8LL * v28;
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v17 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v18 = v17;
      if ( v12 <= v27 )
        break;
LABEL_19:
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
      v24 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
      else
        *v24 = 0;
      __writecr8(v18);
      v11 += 2;
      v25 = v29-- == 1;
      v32 = v11;
      if ( v25 )
        return 0LL;
      v6 = v35;
      v5 = v30;
    }
    while ( 1 )
    {
      if ( (MI_READ_PTE_LOCK_FREE(v15) & 1) != 0 )
      {
        v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v15) >> 12) & 0xFFFFFFFFFLL;
        v23 = 48 * v22 - 0x58000000000LL;
        if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0 )
        {
          v33 = v12;
          if ( !_bittest64((const signed __int64 *)v31[3], v12) )
          {
            MiLockPageAtDpcInline(48 * v22 - 0x58000000000LL);
            MiReferenceDriverPage(48 * v22 - 0x58000000000LL);
            if ( ((*(_QWORD *)(v23 + 40) >> 54) & 7) != 3 )
            {
              *(_QWORD *)&v36 = v13;
              v38 = v22;
              v39 = v36;
              VslpEnterIumSecureMode(1, 229LL, 0LL, (__int64)v37);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v12 = v28;
            v21 = v27;
            _bittestandset64((signed __int64 *)v31[3], v33);
          }
          ++v12;
          v15 += 8LL;
          v28 = v12;
          v13 += 4096LL;
          goto LABEL_17;
        }
        if ( *(__int64 *)(v23 + 8) < 0 )
          MiMakeDriverPagesPrivate(*v31, v15, v15 + 8LL * (v21 - v12), v18, 0);
        else
          MiCopyOnWriteEx(v13, v15, 0xFFFFFFFFFFFFFFFFuLL, v18, 0);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
        if ( (int)MmAccessFault(0LL, v13, 0, 0LL) < 0 )
          return 3221225595LL;
        v19 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v20 = ExAcquireSpinLockExclusive(v19);
        v19[1] = 0;
        v18 = v20;
      }
      v21 = v27;
LABEL_17:
      if ( v12 > v21 )
      {
        v11 = v32;
        goto LABEL_19;
      }
    }
  }
  return 0LL;
}
