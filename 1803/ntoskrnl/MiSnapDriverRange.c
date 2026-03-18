/*
 * XREFs of MiSnapDriverRange @ 0x1405F8770
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x140266E84 (MiCheckForDiscardableLongJumpTable.c)
 *     MiBackSingleImageWithPagefile @ 0x1405F65E0 (MiBackSingleImageWithPagefile.c)
 *     MiFreeDriverInitialization @ 0x1405F845C (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x1405F86D4 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 *     MiEnablePagingOfDriver @ 0x14061C480 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x1408E0DA4 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmImageSectionPagable @ 0x1405BB1AC (MmImageSectionPagable.c)
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
  void *v11; // r15
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // rdx
  unsigned __int64 v14; // r9
  unsigned int NumberOfSections; // r13d
  unsigned __int64 SectionAlignment; // r8
  __int64 SizeOfOptionalHeader; // r11
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v19; // r14
  _DWORD *v20; // rbx
  unsigned int v21; // r15d
  int v22; // edx
  void *v23; // r15
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  __int16 v28; // dx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // rax
  void *v33; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  PIMAGE_NT_HEADERS v39; // [rsp+68h] [rbp-70h]
  _DWORD v40[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v40, 0, sizeof(v40));
  v10 = 0;
  *a5 = 0LL;
  *a6 = 0LL;
  v11 = *(void **)(a1 + 48);
  v33 = v11;
  v12 = RtlImageNtHeader(v11);
  v39 = v12;
  v13 = v12;
  v14 = a4 - (_QWORD)v11;
  NumberOfSections = v12->FileHeader.NumberOfSections;
  SectionAlignment = v12->OptionalHeader.SectionAlignment;
  v35 = a4 - (_QWORD)v11;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v34 = SectionAlignment;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v12->FileHeader.SizeOfOptionalHeader;
  PteAddress = 0LL;
  v36 = SizeOfOptionalHeader;
  v40[9] = 0x40000000;
  v19 = 0LL;
  v40[4] = SizeOfOptionalHeader + (_DWORD)v12 + 40 * NumberOfSections - (_DWORD)v11 + 24;
  v40[2] = v40[4];
  while ( 1 )
  {
    if ( a2 )
      v20 = (_DWORD *)((char *)&v13->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v20 = v40;
    v21 = v20[4];
    if ( v21 < v20[2] )
      v21 = v20[2];
    if ( a4 )
      break;
    if ( (a3 & 8) != 0 )
    {
      v22 = (v20[9] & 0xE0000000) != 0;
      goto LABEL_22;
    }
    if ( (a3 & 1) != 0 )
    {
      v22 = MmImageSectionPagable((__int64)v20);
      goto LABEL_21;
    }
    if ( (a3 & 4) != 0 )
    {
      v22 = (v20[9] & 0xE0000000) != 0 && (unsigned int)MmImageSectionPagable((__int64)v20) == 0;
LABEL_21:
      SectionAlignment = v34;
      v14 = v35;
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
    if ( PteAddress )
      v24 = v20[3];
    else
      PteAddress = MiGetPteAddress(((unsigned __int64)v33 + (unsigned int)v20[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v25 = v21;
    v23 = v33;
    v26 = MiGetPteAddress(~(SectionAlignment - 1) & ((unsigned __int64)v33 + SectionAlignment + v25 + v24 - 1));
    v19 = v26;
    if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || SectionAlignment >= 0x1000 )
      v19 = v26 - 8;
    if ( v27 > 0x1000 )
      goto LABEL_24;
LABEL_25:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v29 = v20[4];
        if ( v29 < v20[2] )
          v29 = v20[2];
        v30 = MiGetPteAddress(((~(SectionAlignment - 1) & ((unsigned __int64)v23
                                                         + SectionAlignment
                                                         + v29
                                                         + (unsigned int)v20[3]
                                                         - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v30 )
        {
          *a5 = PteAddress;
          *a6 = v30;
        }
      }
      return 0LL;
    }
    v13 = v39;
  }
  v32 = (unsigned int)v20[3];
  if ( v14 >= v32 && v14 < v21 + (unsigned int)v32 )
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
