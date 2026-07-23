/*
 * XREFs of MiSnapDriverRange @ 0x1404B1FD8
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x140220570 (MiCheckForDiscardableLongJumpTable.c)
 *     MiFreeDriverInitialization @ 0x1404B1608 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x1404B1880 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1404B3378 (MiHandleDriverNonPagedSections.c)
 *     MiBackSingleImageWithPagefile @ 0x14058571C (MiBackSingleImageWithPagefile.c)
 *     MiEnablePagingOfDriver @ 0x1405A21C0 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x140825DE0 (MmDiscardDriverSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmImageSectionPagable @ 0x1404B240C (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v10; // edi
  void *v11; // r14
  PIMAGE_NT_HEADERS v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 SectionAlignment; // r10
  unsigned int NumberOfSections; // r8d
  unsigned __int64 v16; // r13
  __int64 SizeOfOptionalHeader; // r11
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v19; // r15
  _DWORD *v20; // rbx
  unsigned int v21; // r14d
  int v22; // edx
  void *v23; // r14
  __int64 v24; // rcx
  __int16 v25; // dx
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v30; // rax
  void *v31; // [rsp+20h] [rbp-B8h]
  unsigned int v32; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+30h] [rbp-A8h]
  __int64 v34; // [rsp+40h] [rbp-98h]
  _IMAGE_NT_HEADERS64 *v37; // [rsp+68h] [rbp-70h]
  _DWORD v38[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v38, 0, sizeof(v38));
  v10 = 0;
  *a5 = 0LL;
  *a6 = 0LL;
  v11 = *(void **)(a1 + 48);
  v31 = v11;
  v12 = RtlImageNtHeader(v11);
  v37 = v12;
  v13 = a4 - (_QWORD)v11;
  SectionAlignment = v12->OptionalHeader.SectionAlignment;
  NumberOfSections = v12->FileHeader.NumberOfSections;
  v16 = (unsigned int)SectionAlignment;
  v33 = a4 - (_QWORD)v11;
  if ( SectionAlignment > 0x1000 )
    v16 = 4096LL;
  v32 = v12->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v12->FileHeader.SizeOfOptionalHeader;
  v34 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v38[9] = 0x40000000;
  v19 = 0LL;
  v38[4] = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v12 + 24 - (_DWORD)v11;
  v38[2] = v38[4];
  while ( 1 )
  {
    if ( a2 )
      v20 = (_DWORD *)((char *)&v12->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v20 = v38;
    v21 = v20[2];
    if ( v20[4] >= v21 )
      v21 = v20[4];
    if ( a4 )
      break;
    if ( (a3 & 8) != 0 )
    {
      v22 = (v20[9] & 0xE0000000) != 0;
      goto LABEL_22;
    }
    if ( (a3 & 1) != 0 )
    {
      v22 = MmImageSectionPagable(v20);
      goto LABEL_21;
    }
    if ( (a3 & 4) != 0 )
    {
      v22 = (v20[9] & 0xE0000000) != 0 && (unsigned int)MmImageSectionPagable(v20) == 0;
LABEL_21:
      NumberOfSections = v32;
      v13 = v33;
      SizeOfOptionalHeader = v34;
      goto LABEL_22;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v22 = v20[9] & 0x20000000;
      goto LABEL_22;
    }
    if ( (a3 & 0x20) == 0 )
    {
      if ( !*v20 && v20 != v38 )
        return 0LL;
      v22 = v20[9] & 0x2000000;
      if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *v20 == 1414090313 )
        v22 = 0;
LABEL_22:
      if ( !v22 )
        goto LABEL_23;
      goto LABEL_27;
    }
    if ( *(_BYTE *)v20 != 80
      || *((_BYTE *)v20 + 1) != 65
      || *((_BYTE *)v20 + 2) != 71
      || *((_BYTE *)v20 + 3) != 69
      || *((_BYTE *)v20 + 4) != 75
      || *((_BYTE *)v20 + 5) != 68 )
    {
      goto LABEL_23;
    }
LABEL_27:
    if ( !PteAddress )
      PteAddress = MiGetPteAddress(((unsigned __int64)v31 + (unsigned int)v20[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v24 = v21;
    v23 = v31;
    v19 = MiGetPteAddress(~(v16 - 1) & ((unsigned __int64)v31 + v16 + (unsigned int)v20[3] + v24 - 1));
    if ( (v25 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v16 >= 0x1000 )
      v19 -= 8LL;
    if ( v26 > 0x1000 )
      goto LABEL_24;
LABEL_25:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v27 = (unsigned int)v20[2];
        if ( v20[4] >= (unsigned int)v27 )
          v27 = (unsigned int)v20[4];
        v28 = MiGetPteAddress(((~(v16 - 1) & ((unsigned __int64)v23 + v16 + (unsigned int)v20[3] + v27 - 1)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v28 )
        {
          *a5 = PteAddress;
          *a6 = v28;
        }
      }
      return 0LL;
    }
    v12 = v37;
  }
  v30 = (unsigned int)v20[3];
  if ( v13 >= v30 && v13 < v21 + (unsigned int)v30 )
    goto LABEL_27;
LABEL_23:
  v23 = v31;
LABEL_24:
  if ( !PteAddress )
    goto LABEL_25;
  if ( PteAddress > v19 )
  {
    PteAddress = 0LL;
    goto LABEL_25;
  }
  *a5 = PteAddress;
  *a6 = v19;
  if ( a2 + 1 <= NumberOfSections )
    return a2 + 1;
  return v10;
}
