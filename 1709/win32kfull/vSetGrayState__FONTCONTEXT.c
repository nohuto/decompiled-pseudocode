/*
 * XREFs of vSetGrayState__FONTCONTEXT @ 0x1C02331A4
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     bValidRangeGASP @ 0x1C0229BAC (bValidRangeGASP.c)
 *     bIsGaspFlagSet @ 0x1C0232048 (bIsGaspFlagSet.c)
 */

void __fastcall vSetGrayState__FONTCONTEXT(__int64 *a1)
{
  int v1; // edi
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r11
  void *v6; // r10
  unsigned __int16 v7; // ax
  __int16 v8; // ax
  signed int v9; // r8d
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int16 v13; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 10) |= 0x80000000;
  v1 = *((_DWORD *)a1 + 10);
  if ( (v1 & 0x10000) != 0 )
  {
    v3 = v1 & 0xFFFEFFFF;
    *((_DWORD *)a1 + 10) = v3;
    if ( (v3 & 0x80000) != 0 )
    {
      *((_DWORD *)a1 + 10) = v3 | 0x10000;
    }
    else
    {
      v4 = a1[24];
      v5 = a1[1];
      if ( *(_DWORD *)(v4 + 112)
        && bValidRangeGASP(*(unsigned int *)(v4 + 112) + *(_QWORD *)(v5 + 64), *(_DWORD *)(v4 + 116), &v13) )
      {
        v7 = v13;
      }
      else
      {
        v8 = *(_WORD *)(v5 + 404);
        if ( (v8 & 1) != 0 || (v8 & 0x20) == 0 )
        {
          v7 = 3;
          v6 = &unk_1C02ED020;
        }
        else
        {
          v6 = &unk_1C02ED010;
          v7 = 2;
        }
      }
      v9 = *((_DWORD *)a1 + 31);
      if ( v9 <= 0xFFFF && (unsigned int)bIsGaspFlagSet((__int64)v6, v7, v9, 2u) )
        *((_DWORD *)a1 + 10) = v3 | 0x10000;
    }
    v10 = *((_DWORD *)a1 + 10);
    if ( (v10 & 0x10000) == 0 )
    {
      v11 = *a1;
      v12 = v10 | 0x20000;
      *((_DWORD *)a1 + 10) = v12;
      *(_DWORD *)(v11 + 12) = v12;
    }
  }
}
