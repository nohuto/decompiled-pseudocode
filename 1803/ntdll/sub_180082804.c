/*
 * XREFs of sub_180082804 @ 0x180082804
 * Callers:
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     sub_180082AA8 @ 0x180082AA8 (sub_180082AA8.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_180082804(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  DWORD v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      351,
      (unsigned int)"LdrpRelocateImage",
      3,
      "DLL name: %wZ\n",
      a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_11;
  v9 = sub_18001014C((unsigned __int64)BaseOfImage, 1, 5u, &v15, (char **)v14);
  v10 = v14[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v15 )
  {
LABEL_11:
    v12 = sub_18001014C((unsigned __int64)BaseOfImage, 1, 0xEu, &v15, (char **)v14);
    v13 = v14[0];
    if ( v12 < 0 )
      v13 = 0LL;
    if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
    {
      sub_180082AA8(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v8 = sub_1800828E0(BaseOfImage);
    }
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      391,
      (unsigned int)"LdrpRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v8);
  return v8;
}
