/*
 * XREFs of sub_180086714 @ 0x180086714
 * Callers:
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_1800869C8 @ 0x1800869C8 (sub_1800869C8.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180086714(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  DWORD v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      363,
      (unsigned int)"LdrpRelocateImage",
      3,
      "DLL name: %wZ\n",
      a4);
  if ( (*(_BYTE *)(a3 + 22) & 1) == 0 )
  {
    v8 = sub_180032C0C((unsigned __int64)BaseOfImage, 1, 5u, &v15, (char **)v14);
    v9 = v14[0];
    if ( v8 < 0 )
      v9 = 0LL;
    if ( !v9 || !v15 )
      goto LABEL_7;
  }
  v12 = sub_180032C0C((unsigned __int64)BaseOfImage, 1, 0xEu, &v15, (char **)v14);
  v13 = v14[0];
  if ( v12 < 0 )
    v13 = 0LL;
  if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
  {
    sub_1800869C8(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
    v10 = sub_1800867F4(BaseOfImage);
  }
  else
  {
LABEL_7:
    v10 = 0;
  }
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      403,
      (unsigned int)"LdrpRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v10);
  return v10;
}
