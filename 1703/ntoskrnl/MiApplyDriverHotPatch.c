/*
 * XREFs of MiApplyDriverHotPatch @ 0x1406B5468
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     VslApplyHotPatch @ 0x1401ECC48 (VslApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCompressImportList @ 0x140450610 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x140450710 (MiAllocateImportList.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1406B53D8 (MiAllocateHotPatchPageBitMap.c)
 *     MiPrepareHotPatchBaseImageList @ 0x1406B5AB0 (MiPrepareHotPatchBaseImageList.c)
 *     MiPrepareImageForHotPatch @ 0x1406B5C20 (MiPrepareImageForHotPatch.c)
 *     MiUnlockHotPatchPages @ 0x1406B5D94 (MiUnlockHotPatchPages.c)
 *     RtlFindHotPatchInformation @ 0x1406EF054 (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(unsigned __int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 *v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 *ImportList; // rax
  int HotPatchPageBitMap; // esi
  unsigned int v12; // ebp
  __int64 *v13; // rax
  __int64 **v14; // rdx
  char *v15; // rbx
  __int64 v16; // rbp
  __int64 HotPatchInformation; // [rsp+30h] [rbp-58h]
  _QWORD v18[10]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  result = MiPrepareHotPatchBaseImageList((_DWORD)a2, a3, HotPatchInformation, (unsigned int)&P, (__int64)&v19);
  if ( (int)result < 0 )
    return result;
  v18[3] = 0LL;
  v8 = a2[17];
  v18[0] = a1;
  if ( v8 == 1 )
    goto LABEL_14;
  if ( v8 == -2LL )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = 1LL;
    if ( (v8 & 1) == 0 )
      v9 = *(_QWORD *)v8;
  }
  ImportList = MiAllocateImportList(v9 + 1);
  v6 = ImportList;
  if ( ImportList )
  {
    if ( v9 )
    {
      if ( (v8 & 1) != 0 )
        ImportList[1] = v8 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        memmove(ImportList + 1, (const void *)(v8 + 8), 8 * v9);
    }
    v6[v9 + 1] = a1;
    v6 = MiCompressImportList(v6);
LABEL_14:
    HotPatchPageBitMap = MiAllocateHotPatchPageBitMap(v18);
    if ( HotPatchPageBitMap >= 0 )
    {
      v12 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          HotPatchPageBitMap = MiPrepareImageForHotPatch((char *)P + 32 * v12, v18, HotPatchInformation);
          if ( HotPatchPageBitMap < 0 )
            break;
          if ( ++v12 >= v19 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        HotPatchPageBitMap = VslApplyHotPatch(a2[6], *(_QWORD *)(a1 + 48));
        if ( HotPatchPageBitMap >= 0 )
        {
          if ( v6 )
          {
            a2[17] = (__int64)v6;
            if ( v8 != -2LL && (v8 & 1) == 0 )
              ExFreePoolWithTag((PVOID)v8, 0);
            v6 = 0LL;
          }
          *(_QWORD *)(a1 + 248) = a2;
          *(_DWORD *)(a1 + 272) = *(_DWORD *)(HotPatchInformation + 8);
          v13 = (__int64 *)(a1 + 256);
          v14 = (__int64 **)a2[33];
          if ( *v14 != a2 + 32 )
            __fastfail(3u);
          *v13 = (__int64)(a2 + 32);
          *(_QWORD *)(a1 + 264) = v14;
          *v14 = v13;
          a2[33] = (__int64)v13;
        }
      }
    }
    goto LABEL_27;
  }
  HotPatchPageBitMap = -1073741670;
LABEL_27:
  if ( v19 )
  {
    v15 = (char *)P;
    v16 = v19;
    do
    {
      MiUnlockHotPatchPages(v15);
      v15 += 32;
      --v16;
    }
    while ( v16 );
  }
  MiUnlockHotPatchPages(v18);
  ExFreePoolWithTag(P, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)HotPatchPageBitMap;
}
