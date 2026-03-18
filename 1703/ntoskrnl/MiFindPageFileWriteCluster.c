/*
 * XREFs of MiFindPageFileWriteCluster @ 0x14007E698
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiDerefPageFileSpaceBitmaps @ 0x1400321DC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14003224C (MiRefPageFileSpaceBitmaps.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14007E9A0 (MiSetPageFileAllocationBits.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     RtlFindLongestRunClearCapped @ 0x14023CD50 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 PageFilePte; // rax
  __int64 v8; // rcx
  int v9; // r9d
  int FreePageFileSpace; // esi
  unsigned int PteTimeStamp; // r14d
  int v12; // r15d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  _BYTE *v15; // r13
  unsigned int v16; // eax
  int *v17; // rcx
  unsigned int LongestRunClearCapped; // eax
  _DWORD *v19; // rax
  unsigned int *result; // rax
  int v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  _BYTE v23[8]; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int *v26; // [rsp+B8h] [rbp+50h]
  _DWORD *v27; // [rsp+C0h] [rbp+58h]
  unsigned int v28; // [rsp+C8h] [rbp+60h] BYREF

  v27 = a3;
  v26 = a2;
  v4 = *a3;
  PageFilePte = MiMakePageFilePte(*a2);
  v8 = *(_QWORD *)(a1 + 256);
  v25 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v8, &v25, v4, v9 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    PteTimeStamp = MiGetPteTimeStamp(v25);
  }
  else
  {
    if ( a4 )
    {
      v17 = &v21;
      v15 = *(_BYTE **)(a1 + 112);
      v12 = 0;
      v21 = *(_DWORD *)a1;
      v13 = v4;
      v22 = *((_QWORD *)v15 + 2);
      v16 = *v26;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 128);
      v13 = *(_DWORD *)(a1 + 124);
      if ( v13 < dword_1403E3124 && *(_DWORD *)(a1 + 132) != v12 )
      {
        if ( v13 >= (unsigned int)dword_1403E3124 >> 3 )
        {
          v14 = v13 + (v13 >> 1);
          v13 = dword_1403E3124;
          if ( v14 < dword_1403E3124 )
            v13 = v14;
        }
        else
        {
          v13 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v13;
      }
      v15 = v23;
      if ( v4 < v13 )
        v13 = v4;
      MiRefPageFileSpaceBitmaps(a1, (__int64)v23);
      v16 = *(_DWORD *)(a1 + 120);
      v17 = (int *)&v24;
    }
    v28 = v16;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v17, v13, &v28);
    PteTimeStamp = v28;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v28, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v13 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v12;
        }
        *(_DWORD *)(a1 + 120) = PteTimeStamp + LongestRunClearCapped;
      }
      v19 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v15, 0);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
  }
  *v27 = FreePageFileSpace;
  result = v26;
  *v26 = PteTimeStamp;
  return result;
}
