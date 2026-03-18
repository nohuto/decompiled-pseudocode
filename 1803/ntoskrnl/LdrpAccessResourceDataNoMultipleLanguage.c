/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x1405BB8F0
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x14013D318 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetRcConfig @ 0x14013DB50 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetImageSize @ 0x14013D584 (LdrpGetImageSize.c)
 *     RtlAddressInSectionTable @ 0x14013D744 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14013D7A0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        PVOID BaseAddress,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rsi
  unsigned __int64 v6; // rbx
  unsigned int ImageSize; // r14d
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  BOOL v10; // eax
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int16 Magic; // ax
  unsigned int v14; // r8d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+40h] [rbp-38h]

  v4 = a4;
  v6 = (unsigned __int64)BaseAddress;
  v24 = (char *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 2u, (PULONG)&v22);
  if ( !v24 )
    return 3221225609LL;
  v22 = 0LL;
  ImageSize = LdrpGetImageSize(v6, &v22);
  v23 = ImageSize;
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v6 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v9 = v22;
  if ( v22 )
  {
    if ( (unsigned __int64)a2 >= v8 + v22 )
      return 3221225595LL;
  }
  v10 = 0;
  if ( (v6 & 3) != 0 )
  {
    v10 = (v6 & 1) != 0;
    v6 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v10 )
  {
    v11 = RtlImageNtHeader((PVOID)v6);
    v12 = (unsigned __int64)v11;
    if ( !v11 )
      return 3221225609LL;
    Magic = v11->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v14 = *(_DWORD *)(v12 + 136);
    }
    else if ( Magic == 523 )
    {
      v14 = *(_DWORD *)(v12 + 152);
    }
    else
    {
      v14 = 0;
    }
    if ( !v14 )
      return 3221225609LL;
    v15 = v6 + v14 - (_QWORD)v24;
    v16 = RtlSectionTableFromVirtualAddress(v12, v6, v14);
    if ( !v16 )
      return 3221225609LL;
    v17 = *a2;
    if ( *a2 > *(_DWORD *)(v16 + 8) )
    {
      LODWORD(v22) = *(_DWORD *)(v16 + 12);
      v19 = RtlSectionTableFromVirtualAddress(v12, v6, v17);
      v25 = v19;
      if ( !v19 )
        return 3221225609LL;
      v20 = RtlAddressInSectionTable(v12, v6, *(_DWORD *)(v19 + 12));
      v15 += (unsigned __int64)&v24[*(unsigned int *)(v25 + 12) - (unsigned __int64)(unsigned int)v22 - v20];
    }
    v4 = a4;
  }
  else
  {
    v15 = 0LL;
  }
  if ( a3 && ((v18 = v6 + *a2 - v15, *a3 = v18, v18 <= v8) || v9 && v18 >= v8 + v9) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( v4 )
      *v4 = a2[1];
    return ImageSize;
  }
}
