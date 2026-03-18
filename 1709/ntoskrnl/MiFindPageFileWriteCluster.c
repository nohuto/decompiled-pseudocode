/*
 * XREFs of MiFindPageFileWriteCluster @ 0x140225658
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140224FAC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140226C68 (MiRefPageFileSpaceBitmaps.c)
 *     MiSetPageFileAllocationBits @ 0x140226D20 (MiSetPageFileAllocationBits.c)
 *     RtlFindLongestRunClearCapped @ 0x140252780 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 PageFilePte; // rax
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rdx
  int FreePageFileSpace; // esi
  __int64 v12; // r8
  unsigned int PteTimeStamp; // r14d
  int v14; // r15d
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  _BYTE *v17; // r13
  unsigned int v18; // eax
  int *v19; // rcx
  unsigned int LongestRunClearCapped; // eax
  _DWORD *v21; // rax
  unsigned int *result; // rax
  int v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  _BYTE v25[8]; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int *v28; // [rsp+B8h] [rbp+50h]
  _DWORD *v29; // [rsp+C0h] [rbp+58h]
  unsigned int v30; // [rsp+C8h] [rbp+60h] BYREF

  v29 = a3;
  v28 = a2;
  v4 = *a3;
  PageFilePte = MiMakePageFilePte(*a2);
  v8 = *(_QWORD *)(a1 + 256);
  v27 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v8, &v27, v4, v9 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    PteTimeStamp = MiGetPteTimeStamp(v27, v10, v12);
  }
  else
  {
    if ( a4 )
    {
      v19 = &v23;
      v17 = *(_BYTE **)(a1 + 112);
      v14 = 0;
      v23 = *(_DWORD *)a1;
      v15 = v4;
      v24 = *((_QWORD *)v17 + 2);
      v18 = *v28;
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 128);
      v15 = *(_DWORD *)(a1 + 124);
      if ( v15 < dword_140400120 && *(_DWORD *)(a1 + 132) != v14 )
      {
        if ( v15 >= (unsigned int)dword_140400120 >> 3 )
        {
          v16 = v15 + (v15 >> 1);
          v15 = dword_140400120;
          if ( v16 < dword_140400120 )
            v15 = v16;
        }
        else
        {
          v15 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v15;
      }
      v17 = v25;
      if ( v4 < v15 )
        v15 = v4;
      MiRefPageFileSpaceBitmaps(a1, v25);
      v18 = *(_DWORD *)(a1 + 120);
      v19 = (int *)&v26;
    }
    v30 = v18;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v19, v15, &v30);
    PteTimeStamp = v30;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v30, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v15 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v14;
        }
        *(_DWORD *)(a1 + 120) = PteTimeStamp + LongestRunClearCapped;
      }
      v21 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v17, 0);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
  }
  *v29 = FreePageFileSpace;
  result = v28;
  *v28 = PteTimeStamp;
  return result;
}
