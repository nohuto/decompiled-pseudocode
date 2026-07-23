/*
 * XREFs of MiSnapDriverRange @ 0x140516C14
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x14022B814 (MiCheckForDiscardableLongJumpTable.c)
 *     MiDisablePagingOfDriver @ 0x140542B58 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x140543D68 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x14058F310 (MiFreeDriverInitialization.c)
 *     MiEnablePagingOfDriver @ 0x1405B2C7C (MiEnablePagingOfDriver.c)
 *     MiBackSingleImageWithPagefile @ 0x1405C87A4 (MiBackSingleImageWithPagefile.c)
 *     MmDiscardDriverSection @ 0x140857448 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmImageSectionPagable @ 0x14051703C (MmImageSectionPagable.c)
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
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int16 v27; // dx
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // rax
  void *v33; // [rsp+20h] [rbp-B8h]
  unsigned int v34; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  _IMAGE_NT_HEADERS64 *v39; // [rsp+68h] [rbp-70h]
  _DWORD v40[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v40, 0, sizeof(v40));
  v10 = 0;
  *a5 = 0LL;
  *a6 = 0LL;
  v11 = *(void **)(a1 + 48);
  v33 = v11;
  v12 = RtlImageNtHeader(v11);
  v39 = v12;
  v13 = a4 - (_QWORD)v11;
  SectionAlignment = v12->OptionalHeader.SectionAlignment;
  NumberOfSections = v12->FileHeader.NumberOfSections;
  v16 = (unsigned int)SectionAlignment;
  v35 = a4 - (_QWORD)v11;
  if ( SectionAlignment > 0x1000 )
    v16 = 4096LL;
  v34 = v12->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v12->FileHeader.SizeOfOptionalHeader;
  v36 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v40[9] = 0x40000000;
  v19 = 0LL;
  v40[4] = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v12 + 24 - (_DWORD)v11;
  v40[2] = v40[4];
  while ( 1 )
  {
    if ( a2 )
      v20 = (_DWORD *)((char *)&v12->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v20 = v40;
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
      NumberOfSections = v34;
      v13 = v35;
      SizeOfOptionalHeader = v36;
      goto LABEL_22;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v22 = v20[9] & 0x20000000;
      goto LABEL_22;
    }
    if ( (a3 & 0x20) == 0 )
    {
      if ( !*v20 && v20 != v40 )
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
      PteAddress = MiGetPteAddress(((unsigned __int64)v33 + (unsigned int)v20[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v24 = v21;
    v23 = v33;
    v25 = MiGetPteAddress(~(v16 - 1) & ((unsigned __int64)v33 + v16 + (unsigned int)v20[3] + v24 - 1));
    v19 = v25;
    if ( (v27 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v16 >= 0x1000 )
      v19 = v25 - 8;
    if ( v26 > 0x1000 )
      goto LABEL_24;
LABEL_25:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v28 = v20[4];
        v29 = (unsigned int)v20[2];
        if ( v28 >= (unsigned int)v29 )
          v29 = v28;
        v30 = MiGetPteAddress(((~(v16 - 1) & ((unsigned __int64)v23 + v16 + (unsigned int)v20[3] + v29 - 1)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v30 )
        {
          *a5 = PteAddress;
          *a6 = v30;
        }
      }
      return 0LL;
    }
    v12 = v39;
  }
  v32 = (unsigned int)v20[3];
  if ( v13 >= v32 && v13 < v21 + (unsigned int)v32 )
    goto LABEL_27;
LABEL_23:
  v23 = v33;
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
