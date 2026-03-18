/*
 * XREFs of MiApplyDriverHotPatch @ 0x14074C3B8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     VslApplyHotPatch @ 0x14022F550 (VslApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiCompressImportList @ 0x1405F8B18 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x1405F9A88 (MiAllocateImportList.c)
 *     MiAllocateHotPatchPageBitMap @ 0x14074C328 (MiAllocateHotPatchPageBitMap.c)
 *     MiPrepareHotPatchBaseImageList @ 0x14074CABC (MiPrepareHotPatchBaseImageList.c)
 *     MiPrepareImageForHotPatch @ 0x14074CC30 (MiPrepareImageForHotPatch.c)
 *     MiUnlockHotPatchPages @ 0x14074CD58 (MiUnlockHotPatchPages.c)
 *     RtlFindHotPatchInformation @ 0x14078B13C (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(unsigned __int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 *v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  char v10; // bp
  unsigned __int64 *ImportList; // rax
  int HotPatchPageBitMap; // esi
  unsigned __int64 *v13; // rcx
  unsigned int v14; // ebp
  __int64 *v15; // rax
  __int64 **v16; // rdx
  char *v17; // rbx
  __int64 v18; // rbp
  __int64 HotPatchInformation; // [rsp+30h] [rbp-58h]
  _QWORD v20[10]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  result = MiPrepareHotPatchBaseImageList((_DWORD)a2, a3, HotPatchInformation, (unsigned int)&P, (__int64)&v21);
  if ( (int)result < 0 )
    return result;
  v20[3] = 0LL;
  v8 = a2[17];
  v20[0] = a1;
  if ( v8 == 1 )
    goto LABEL_14;
  if ( v8 == -2LL )
  {
    v9 = 0LL;
    v10 = -2;
  }
  else
  {
    v10 = v8;
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
      v13 = ImportList + 1;
      if ( (v10 & 1) != 0 )
        *v13 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        memmove(v13, (const void *)(v8 + 8), 8 * v9);
    }
    v6[v9 + 1] = a1;
    v6 = MiCompressImportList(v6);
LABEL_14:
    HotPatchPageBitMap = MiAllocateHotPatchPageBitMap(v20);
    if ( HotPatchPageBitMap >= 0 )
    {
      v14 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          HotPatchPageBitMap = MiPrepareImageForHotPatch((char *)P + 32 * v14, v20, HotPatchInformation);
          if ( HotPatchPageBitMap < 0 )
            break;
          if ( ++v14 >= v21 )
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
          *(_QWORD *)(a1 + 272) = a2;
          *(_DWORD *)(a1 + 296) = *(_DWORD *)(HotPatchInformation + 8);
          v15 = (__int64 *)(a1 + 280);
          v16 = (__int64 **)a2[36];
          if ( *v16 != a2 + 35 )
            __fastfail(3u);
          *v15 = (__int64)(a2 + 35);
          *(_QWORD *)(a1 + 288) = v16;
          *v16 = v15;
          a2[36] = (__int64)v15;
        }
      }
    }
    goto LABEL_27;
  }
  HotPatchPageBitMap = -1073741670;
LABEL_27:
  if ( v21 )
  {
    v17 = (char *)P;
    v18 = v21;
    do
    {
      MiUnlockHotPatchPages(v17);
      v17 += 32;
      --v18;
    }
    while ( v18 );
  }
  MiUnlockHotPatchPages(v20);
  ExFreePoolWithTag(P, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)HotPatchPageBitMap;
}
