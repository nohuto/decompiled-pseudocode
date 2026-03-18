/*
 * XREFs of MiInitializeWowPeb @ 0x1405BDD10
 * Callers:
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x140592AA8 (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1405BE128 (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 result; // rax
  _WORD *v11; // rax
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int16 v20; // cx
  bool v21; // al
  int v22; // ecx
  ULONG Size; // [rsp+24h] [rbp-44h] BYREF
  unsigned int *v24; // [rsp+28h] [rbp-40h]
  __int64 v25[7]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN MappedAsImage; // [rsp+80h] [rbp+18h] BYREF

  v8 = *(_QWORD *)(a3 + 1064);
  if ( v8 )
  {
    v9 = *(_WORD *)(v8 + 8);
    if ( v9 == 332 || v9 == 452 )
    {
      result = MmCheckImageMapping(a3, &MappedAsImage);
      if ( (int)result < 0 )
        return result;
      v11 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 960), MappedAsImage, 0xAu, &Size);
      v12 = v11;
      v24 = (unsigned int *)v11;
      if ( v11 )
      {
        if ( ((unsigned __int8)v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = v24[12];
        if ( ((unsigned int)v13 & (unsigned __int64)qword_14044C5D8[*(unsigned __int16 *)(a4 + 8)]) != v13 )
          v13 = 0LL;
        *(_QWORD *)a4 = v13;
        v12 = v24;
      }
      *(_DWORD *)a1 = *(unsigned __int16 *)(a2 + 92);
      *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 72);
      *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(a2 + 74);
      v14 = *(_DWORD *)(a2 + 76);
      if ( v14 )
      {
        if ( v12 )
        {
          v15 = v12[26];
          if ( v15 )
          {
            *(_WORD *)(a1 + 26) = v15;
            v14 = *(_DWORD *)(a2 + 76);
          }
        }
        *(_DWORD *)(a1 + 12) = (unsigned __int8)v14;
        *(_DWORD *)(a1 + 16) = BYTE1(v14);
        *(_WORD *)(a1 + 24) = HIWORD(v14);
        *(_DWORD *)(a1 + 20) = (v14 ^ 0xBFFFFFFF) >> 30;
      }
    }
  }
  result = MiCreatePebOrTeb(8, 0LL, v25);
  if ( (int)result >= 0 )
  {
    v16 = v25[0];
    **(_QWORD **)(a3 + 1064) = v25[0];
    v17 = *(_QWORD *)(a1 + 32);
    if ( v17 > 0x40000000 )
    {
      v17 = 0x100000LL;
      *(_QWORD *)(a1 + 32) = 0x100000LL;
    }
    v18 = *(_QWORD *)(a1 + 40);
    if ( v18 > v17 )
      v18 = 0x2000LL;
    *(_QWORD *)(a1 + 40) = v18;
    *(_QWORD *)(a1 + 72) = v16 + 1136;
    *(_DWORD *)(a1 + 56) = 730;
    v19 = *(_QWORD *)(a3 + 1064);
    v21 = 0;
    if ( v19 )
    {
      v20 = *(_WORD *)(v19 + 8);
      if ( v20 == 332 || v20 == 452 )
        v21 = 1;
    }
    v22 = *(_DWORD *)(a1 + 12);
    if ( v21 )
    {
      *(_DWORD *)(v16 + 164) = v22;
      *(_DWORD *)(v16 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v16 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v16 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v16 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v16 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v16 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v16 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v16 + 104) = NtGlobalFlag;
      *(_QWORD *)(v16 + 112) = qword_1403CB658;
      *(_DWORD *)(v16 + 520) = dword_14044B18C;
      *(_DWORD *)(v16 + 144) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v16 + 128) = qword_14044B1A0;
      *(_DWORD *)(v16 + 132) = qword_14044B198;
      *(_DWORD *)(v16 + 140) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v16 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v16 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v16 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v16 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v16 = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v16 + 3) = *(_BYTE *)(a1 + 105);
      *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(v16 + 8) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v16 + 88) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v16 + 92) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v16 + 96) = *(_DWORD *)(a1 + 144);
    }
    else
    {
      *(_DWORD *)(v16 + 280) = v22;
      *(_DWORD *)(v16 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v16 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v16 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v16 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v16 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v16 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v16 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v16 + 188) = NtGlobalFlag;
      *(_QWORD *)(v16 + 192) = qword_1403CB658;
      *(_QWORD *)(v16 + 792) = (unsigned int)dword_14044B18C;
      *(_QWORD *)(v16 + 240) = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(v16 + 216) = qword_14044B1A0;
      *(_QWORD *)(v16 + 224) = qword_14044B198;
      *(_DWORD *)(v16 + 236) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v16 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v16 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v16 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v16 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v16 = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v16 + 3) = *(_BYTE *)(a1 + 105);
      *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(v16 + 16) = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v16 + 160) = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(v16 + 168) = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(v16 + 176) = *(_QWORD *)(a1 + 144);
    }
    return 0LL;
  }
  return result;
}
