/*
 * XREFs of sub_180030914 @ 0x180030914
 * Callers:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_1800306B8 @ 0x1800306B8 (sub_1800306B8.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 */

__int64 __fastcall sub_180030914(signed __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  bool v5; // si
  char *v9; // rbp
  char *v10; // rbx
  NTSTATUS v11; // eax
  __int64 VirtualAddress; // rax
  DWORD Size; // r12d
  int v14; // edi
  char *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  v17 = 0LL;
  v5 = 1;
  v9 = (char *)BaseOfImage;
  v10 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v9 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = (BaseOfImage & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1u, v9, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
LABEL_34:
    if ( v11 >= 0 )
    {
      Size = (unsigned int)OutHeaders;
      goto LABEL_10;
    }
    goto LABEL_26;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
  {
    v11 = sub_1800E9728(v9, OutHeaders, (__int64)&v17);
    v10 = (char *)v17;
    goto LABEL_34;
  }
  if ( OutHeaders->OptionalHeader.Magic != 523 )
  {
    v11 = -1073741811;
    goto LABEL_34;
  }
  if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_26:
    Size = (unsigned int)OutHeaders;
LABEL_27:
    v10 = 0LL;
    goto LABEL_10;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( v5 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v10 = &v9[VirtualAddress];
    goto LABEL_10;
  }
  v10 = (char *)RtlAddressInSectionTable(OutHeaders, v9, VirtualAddress);
  if ( !v10 )
    goto LABEL_27;
LABEL_10:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        671,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v14 = sub_1800306B8(
            a2,
            -1,
            (_BYTE *)BaseOfImage,
            *((_DWORD *)v10 + 6),
            BaseOfImage + *((unsigned int *)v10 + 8),
            BaseOfImage + *((unsigned int *)v10 + 9));
    if ( v14 >= 0 )
      goto LABEL_15;
    return 3221225594LL;
  }
  if ( (dword_180155A10 & 5) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      689,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v14 = a3 - *((_DWORD *)v10 + 4);
LABEL_15:
  if ( (unsigned int)v14 >= *((_DWORD *)v10 + 5) )
    return (unsigned int)(a2 != 0LL) - 1073741512;
  v15 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v10 + 7) + 4LL * v14));
  *a4 = v15;
  if ( v15 < v10 || v15 >= &v10[Size] )
    return 0LL;
  else
    return 3221226029LL;
}
