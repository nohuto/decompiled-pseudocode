/*
 * XREFs of MiLockStealSystemVm @ 0x14003F754
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x1400CD0D0 (MiSmallVaStillMapsFrame.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiVaIsPageFileHash @ 0x14026C000 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // r15
  int SystemRegionType; // ebp
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r12d
  char v15; // cl
  _BYTE *AnyMultiplexedVm; // r14
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 SessionVm; // rax
  int v22; // edx
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  v8 = (__int64)(a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v8);
  v12 = v11;
  v13 = 1LL;
  if ( v8 < v12 || (v14 = 1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    v14 = 0;
  if ( SystemRegionType == 5 )
  {
    v15 = *(_BYTE *)(a1 + 35);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    if ( (v15 & 0x10) == 0 )
    {
      *(_DWORD *)(v10 + 8) |= 0x20u;
      AnyMultiplexedVm = &unk_1403CCC10;
      goto LABEL_7;
    }
    return 0LL;
  }
  if ( SystemRegionType == 1 )
  {
    LOBYTE(v13) = a2;
    v25 = MiAttachToOwningSession(a1, v13, v10 + 72);
    *(_QWORD *)(a4 + 56) = v25;
    if ( !v25 )
    {
LABEL_28:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(a2);
      return 0LL;
    }
    SessionVm = MiGetSessionVm(v27, v26, v28);
    *(_DWORD *)(a4 + 8) |= 0x80u;
LABEL_20:
    AnyMultiplexedVm = (_BYTE *)SessionVm;
    goto LABEL_7;
  }
  if ( (unsigned int)(SystemRegionType - 6) <= 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    SessionVm = MiGetAnyMultiplexedVm(2LL);
    *(_DWORD *)(v24 + 8) |= 0x10u;
    goto LABEL_20;
  }
  if ( SystemRegionType == 12 || SystemRegionType == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    SessionVm = MiGetAnyMultiplexedVm(1LL);
    *(_DWORD *)(v23 + 48) = v22;
    goto LABEL_20;
  }
  if ( SystemRegionType != 9
    || !MiVaIsPageFileHash(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), v8) )
  {
    goto LABEL_28;
  }
  AnyMultiplexedVm = (_BYTE *)MiGetAnyMultiplexedVm(3LL);
  *(_DWORD *)(a4 + 48) = 2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
LABEL_7:
  v17 = 0;
  if ( (unsigned int)MiSynchronizeSystemVa((__int64)AnyMultiplexedVm, v8, SystemRegionType, v14, a4) )
  {
    if ( v14 )
    {
      if ( (unsigned int)MiSmallVaStillMapsFrame(v8, (a1 + 0x58000000000LL) / 48) )
      {
LABEL_11:
        if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1 || (*(_DWORD *)a1 & 1) != 0
                                                            && (*(_BYTE *)(a1 + 35) & 8) == 0)
          && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
          && (unsigned int)MiIsPfnFileOnly(a1) != 1 )
        {
          return 1LL;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v29 = MI_READ_PTE_LOCK_FREE(a3);
      if ( (v29 & 1) != 0 )
      {
        v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
        if ( ((v18 >> 12) & 0xFFFFFFFFFLL) == v19 )
          goto LABEL_11;
      }
    }
    v17 = 2;
  }
LABEL_13:
  MiUnlockStealVm(a4);
  if ( (AnyMultiplexedVm[184] & 7) == 3 )
    return 0;
  return v17;
}
