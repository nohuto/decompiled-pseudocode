/*
 * XREFs of sub_18002FC7C @ 0x18002FC7C
 * Callers:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     sub_18003802C @ 0x18003802C (sub_18003802C.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18002FC40 (RtlImageRvaToSection.c)
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_18002FC7C(PVOID BaseOfImage, ULONG *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  char *v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  void *v13; // rdx
  ULONG VirtualAddress; // r8d
  PIMAGE_SECTION_HEADER v15; // rax
  void *v16; // rdx
  _IMAGE_NT_HEADERS64 *v17; // r11
  ULONG v18; // r8d
  char *v19; // rcx
  _IMAGE_NT_HEADERS64 *v20; // rax
  _IMAGE_NT_HEADERS64 *v21; // r11
  PVOID v22; // rax
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-38h] BYREF

  v5 = (unsigned __int64)BaseOfImage;
  v6 = sub_180032C0C(BaseOfImage, (__int64)&v26);
  v7 = v26;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v26 = v7;
  if ( !v7 )
    return 3221225609LL;
  v24 = 0LL;
  v9 = sub_18002FEC4(v5, &v24);
  v25 = v9;
  if ( v9 == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v24;
  if ( v24 )
  {
    if ( (unsigned __int64)a2 >= v10 + v24 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)v5, 0LL, &OutHeaders);
    if ( !OutHeaders )
      return 3221225609LL;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v8 = (char *)(v5 + VirtualAddress - v7);
    v15 = RtlImageRvaToSection(OutHeaders, v13, VirtualAddress);
    if ( !v15 )
      return 3221225609LL;
    v18 = *a2;
    if ( *a2 > v15->Misc.PhysicalAddress )
    {
      LODWORD(v24) = v15->VirtualAddress;
      v20 = (_IMAGE_NT_HEADERS64 *)RtlImageRvaToSection(v17, v16, v18);
      OutHeaders = v20;
      if ( !v20 )
        return 3221225609LL;
      v22 = RtlAddressInSectionTable(v21, (PVOID)v5, v20->FileHeader.PointerToSymbolTable);
      v8 += v7 + OutHeaders->FileHeader.PointerToSymbolTable - (unsigned __int64)(unsigned int)v24 - (_QWORD)v22;
    }
  }
  if ( a3
    && ((v19 = (char *)(v5 + *a2 - (_QWORD)v8), *a3 = v19, (unsigned __int64)v19 <= v10)
     || v11 && (unsigned __int64)v19 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return v9;
  }
}
