/*
 * XREFs of MiFindPageFileWriteCluster @ 0x14009C6F0
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14009D510 (MiSetPageFileAllocationBits.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1400CCD28 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400CD060 (MiDerefPageFileSpaceBitmaps.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 *     RtlFindLongestRunClearCapped @ 0x140288060 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiFindPageFileWriteCluster(int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 PageFilePte; // rax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int FreePageFileSpace; // edi
  unsigned int PteTimeStamp; // esi
  int v13; // r15d
  unsigned int v14; // edi
  unsigned int v15; // ecx
  char *v16; // r13
  int *v17; // rcx
  unsigned int *v18; // rax
  unsigned int LongestRunClearCapped; // eax
  bool v20; // zf
  void *v21; // rax
  unsigned int *result; // rax
  int v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h]
  char v25[8]; // [rsp+30h] [rbp-30h] BYREF
  char v26; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v28; // [rsp+B0h] [rbp+50h]
  unsigned int v29; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a3;
  v4 = *a3;
  PageFilePte = MiMakePageFilePte(*a2);
  v9 = *((_QWORD *)a1 + 32);
  v27 = ((unsigned __int64)(a1[51] & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v27, v4, v10 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    PteTimeStamp = MiGetPteTimeStamp(v27);
  }
  else
  {
    if ( a4 )
    {
      v17 = &v23;
      v16 = (char *)*((_QWORD *)a1 + 14);
      v13 = 0;
      v23 = *a1;
      v24 = *((_QWORD *)v16 + 2);
      v18 = a2;
    }
    else
    {
      v13 = a1[32];
      v14 = a1[31];
      if ( v14 < dword_14044B180 && a1[33] != v13 )
      {
        if ( v14 >= (unsigned int)dword_14044B180 >> 3 )
        {
          v15 = v14 + (v14 >> 1);
          v14 = dword_14044B180;
          if ( v15 < dword_14044B180 )
            v14 = v15;
        }
        else
        {
          v14 *= 2;
        }
        a1[31] = v14;
      }
      v16 = v25;
      MiRefPageFileSpaceBitmaps(a1, v25);
      v17 = (int *)&v26;
      v18 = (unsigned int *)(a1 + 30);
      if ( v4 >= v14 )
        v4 = v14;
    }
    v29 = *v18;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v17, v4, &v29);
    v20 = a4 == 0;
    FreePageFileSpace = LongestRunClearCapped;
    PteTimeStamp = v29;
    if ( v20 )
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v4 )
        {
          a1[31] = LongestRunClearCapped;
          a1[33] = v13;
        }
        a1[30] = PteTimeStamp + LongestRunClearCapped;
      }
      v21 = (void *)MiDerefPageFileSpaceBitmaps(a1, v16, 0LL);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
    else
    {
      MiSetPageFileAllocationBits(a1, v29, LongestRunClearCapped);
    }
  }
  result = v28;
  *a2 = PteTimeStamp;
  *result = FreePageFileSpace;
  return result;
}
