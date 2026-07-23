/*
 * XREFs of LdrpRelocateImage @ 0x180084884
 * Callers:
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180084B38 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      351,
      (unsigned int)"LdrpRelocateImage",
      3,
      "DLL name: %wZ\n",
      a4);
  if ( (*(_BYTE *)(a3 + 22) & 1) == 0 )
  {
    v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 5u, &v15, v14);
    v9 = v14[0];
    if ( v8 < 0 )
      v9 = 0LL;
    if ( !v9 || !v15 )
      goto LABEL_7;
  }
  v12 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0xEu, &v15, v14);
  v13 = v14[0];
  if ( v12 < 0 )
    v13 = 0LL;
  if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
  {
    LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
    v10 = LdrpProtectAndRelocateImage(BaseOfImage);
  }
  else
  {
LABEL_7:
    v10 = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      391,
      (unsigned int)"LdrpRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v10);
  return v10;
}
