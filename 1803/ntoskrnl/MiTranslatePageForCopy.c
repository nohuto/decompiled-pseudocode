/*
 * XREFs of MiTranslatePageForCopy @ 0x14015B6C0
 * Callers:
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiVaIsUltra @ 0x14007FBA4 (MiVaIsUltra.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(unsigned __int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 *v6; // r14
  __int64 *v9; // r15
  __int64 v10; // rdi
  int v11; // ebx
  unsigned __int16 *v13; // rbx
  char v14; // al
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  int SystemRegionType; // eax
  int v18; // ecx
  __int64 SessionVm; // rax
  int v20; // r8d
  __int128 v21; // xmm0
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // al
  ULONG_PTR v33; // r8
  __int64 v34; // rdx
  unsigned __int64 PrototypePteDirect; // r15
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r14
  ULONG_PTR v44; // rcx
  char v45; // al
  int PagingFileOffset; // eax
  unsigned __int64 v47; // xmm1_8
  __int64 v48; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v50[16]; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v51[8]; // [rsp+C0h] [rbp+Fh] BYREF
  int v52; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 *v53; // [rsp+120h] [rbp+6Fh]
  int v54; // [rsp+128h] [rbp+77h] BYREF

  v53 = a3;
  v6 = a3;
  memset((void *)a2, 0, 0x80uLL);
  v9 = a5;
  v10 = -1LL;
  v11 = 0;
  *v6 = -1LL;
  *a4 = 0LL;
  *v9 = 0LL;
  memset(v50, 0, 0x78uLL);
  MiFillPteHierarchy(a1, &v50[3]);
  v50[1] = 0LL;
  v50[0] = a1;
  LOBYTE(v50[10]) = 0;
  v50[2] = 0LL;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= MmPfnDatabase && a1 < MmPfnDatabase + 48 * (qword_1403CB780 + 1)
    || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_1403CD100 || a1 > qword_1403CBB70 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 8 )
    {
      v18 = 0;
    }
    else
    {
      if ( SystemRegionType == 1 )
      {
        SessionVm = MiGetSessionVm();
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_27;
      }
      if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      {
        v18 = 2;
      }
      else if ( SystemRegionType == 9 )
      {
        v18 = 3;
      }
      else if ( SystemRegionType == 3 || SystemRegionType == 12 )
      {
        v18 = 1;
      }
      else
      {
        v18 = 5;
      }
    }
    SessionVm = (__int64)MiGetAnyMultiplexedVm(v18);
LABEL_27:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v20, 0, a2) )
      return 3221225632LL;
    v21 = *(_OWORD *)(a2 + 24);
    v22 = *(int *)(a2 + 16);
    v50[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v50[7] = v21;
    if ( (_DWORD)v22 )
    {
      v48 = MI_READ_PTE_LOCK_FREE(v50[v22 + 3]);
      v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
      v25 = 1LL;
      v10 = (v23 >> 12) & 0xFFFFFFFFFLL;
      v26 = a1 >> 12;
      do
      {
        v27 = v26;
        v26 >>= 9;
        v28 = v25 * (v27 & 0x1FF);
        v25 <<= 9;
        v10 += v28;
        --v24;
      }
      while ( v24 );
      if ( MiIsPfnInline(v10) )
        MiLockPageAtDpcInline(48 * v10 - 0x58000000000LL);
      else
        v11 = -1073741503;
      goto LABEL_81;
    }
    v15 = v50[3];
    goto LABEL_36;
  }
  v13 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v50[7] = (unsigned __int64)v13;
  v14 = MiLockWorkingSetShared((__int64)v13);
  v15 = v50[3];
  LOBYTE(v50[8]) = v14;
  v50[9] = MiLockLowestValidPageTable((__int64)v13, v50[3], &v49);
  if ( v50[9] != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v49) != 0 ? -1073741608 : -1073741819;
    goto LABEL_80;
  }
  v11 = 0;
LABEL_36:
  LOBYTE(a5) = 17;
  v29 = MI_READ_PTE_LOCK_FREE(v15);
  v48 = v29;
  v30 = v29;
  if ( (v29 & 1) != 0 )
  {
LABEL_44:
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL;
    if ( MiIsPfnInline(v10) )
      MiLockPageAtDpcInline(48 * v10 - 0x58000000000LL);
    else
      v11 = -1073741503;
    goto LABEL_80;
  }
  v16 = v29;
  while ( 1 )
  {
    if ( (v16 & 0x400) != 0 )
    {
      if ( (v16 & 2) != 0 )
      {
        if ( !MiGetPrototypePteDirect(v30) )
          v34 &= ~0x400uLL;
        v16 = v34 & 0xFFFFFFFFFFFFFFFDuLL;
        *v9 = v16;
        goto LABEL_56;
      }
      PrototypePteDirect = MiGetPrototypePteDirect(v30);
      if ( (unsigned int)MiIsPrototypePteVadLookup(v36) )
      {
        PrototypePteDirect = MiCheckVirtualAddress(a1, &v54, v51);
        if ( !PrototypePteDirect )
          goto LABEL_59;
      }
      v37 = MiLockProtoPoolPage(PrototypePteDirect, (unsigned __int8 *)&a5);
      if ( !v37 )
        goto LABEL_61;
      v38 = MiLockLeafPage(PrototypePteDirect, 0);
      v39 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v48 = v39;
      if ( (v39 & 1) != 0 )
      {
        v43 = v38 + 0x58000000000LL;
LABEL_64:
        *a4 = v37;
        v16 = (unsigned __int128)(v43 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v10 = v43 / 48;
        goto LABEL_80;
      }
      if ( !v39 )
      {
        LOBYTE(v40) = (_BYTE)a5;
        MiUnlockProtoPoolPage(v37, v40, v41, v42);
LABEL_59:
        v11 = -1073741819;
        goto LABEL_80;
      }
      if ( (v39 & 0x400) != 0 )
      {
        v44 = v37;
      }
      else
      {
        if ( (v39 & 0x800) == 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v48);
          LOBYTE(v40) = (_BYTE)a5;
          v44 = v37;
          if ( !PagingFileOffset )
          {
            MiUnlockProtoPoolPage(v37, v40, v41, v42);
LABEL_56:
            v11 = 273;
            goto LABEL_80;
          }
          goto LABEL_70;
        }
        v45 = *(_BYTE *)(v38 + 34);
        if ( (v45 & 0x20) == 0 )
        {
          v43 = v38 + 0x58000000000LL;
          goto LABEL_64;
        }
        v44 = v37;
        if ( (v45 & 8) == 0 )
        {
          MiObtainProtoReference(v37, 1);
          v33 = v37;
          v16 = v38;
          goto LABEL_75;
        }
      }
      LOBYTE(v40) = (_BYTE)a5;
LABEL_70:
      MiUnlockProtoPoolPage(v44, v40, v41, v42);
      goto LABEL_61;
    }
    if ( (v16 & 0x3E0) == 0x300 || (v16 & 0x3E0) == 0 )
      goto LABEL_59;
    if ( (v16 & 0x800) == 0 )
      break;
    v31 = MiLockTransitionLeafPage(v15, &a5);
    v16 = v31;
    if ( v31 )
    {
      v32 = *(_BYTE *)(v31 + 34);
      if ( (v32 & 0x20) == 0 )
      {
        v16 = (unsigned __int128)((v16 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v10 = ((unsigned __int64)v16 >> 63) + (v16 >> 3);
        goto LABEL_80;
      }
      if ( (v32 & 8) != 0 )
        goto LABEL_61;
      v33 = 0LL;
LABEL_75:
      v52 = 1;
      MiWaitForCollidedFaultComplete(v50, v16, v33, (unsigned __int8)a5, &v52);
      goto LABEL_61;
    }
    v48 = MI_READ_PTE_LOCK_FREE(v15);
    v30 = v48;
    v16 = v48;
    if ( (v48 & 1) != 0 )
      goto LABEL_44;
  }
  if ( !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v48) )
    goto LABEL_56;
LABEL_61:
  v11 = -1073741608;
LABEL_80:
  v6 = v53;
LABEL_81:
  v47 = v50[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v50[7];
  *(_QWORD *)(a2 + 40) = v47;
  if ( v11 < 0 )
    MiUnlockSystemVa(a2, v16);
  else
    *v6 = v10;
  return (unsigned int)v11;
}
