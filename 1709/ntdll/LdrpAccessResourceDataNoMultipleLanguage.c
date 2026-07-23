/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800219CC (LdrpFindMessageInAlternateModule.c)
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1800299D0 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpGetImageSize @ 0x180029E30 (LdrpGetImageSize.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        ULONG *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  char *v8; // r14
  unsigned int ImageSize; // esi
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

  v5 = BaseOfImage;
  v6 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)&v26);
  v7 = v26;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v26 = v7;
  if ( !v7 )
    return 3221225609LL;
  v24 = 0LL;
  ImageSize = LdrpGetImageSize(v5, &v24);
  v25 = ImageSize;
  if ( ImageSize == -1073741701 )
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
    v15 = RtlSectionTableFromVirtualAddress(OutHeaders, v13, VirtualAddress);
    if ( !v15 )
      return 3221225609LL;
    v18 = *a2;
    if ( *a2 > v15->Misc.PhysicalAddress )
    {
      LODWORD(v24) = v15->VirtualAddress;
      v20 = (_IMAGE_NT_HEADERS64 *)RtlSectionTableFromVirtualAddress(v17, v16, v18);
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
    return ImageSize;
  }
}
