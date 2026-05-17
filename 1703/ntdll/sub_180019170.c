/*
 * XREFs of sub_180019170 @ 0x180019170
 * Callers:
 *     sub_180018970 @ 0x180018970 (sub_180018970.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_180081F44 @ 0x180081F44 (sub_180081F44.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180019170(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  char v10; // bl

  result = *(_QWORD *)(a1 + 32);
  if ( *(int *)result < 0 )
    goto LABEL_27;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL) + 56LL) )
  {
    result = sub_180032DD0(a1);
    v5 = result;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x100000) != 0 )
    {
      v5 = sub_18005040C(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x200) != 0 )
        v6 = sub_180019768(a1);
      else
        v6 = sub_18004C234(a1);
      v5 = v6;
    }
    result = v5 + 0x80000000;
    if ( (int)result < 0 || v5 == -1073741267 )
      goto LABEL_27;
    result = (unsigned int)dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
        v8 += 72LL;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1612,
        (unsigned int)"LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        v8,
        v5);
      result = (unsigned int)dword_180155A10;
    }
    if ( (result & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      sub_180084734(3221225781LL, 25LL, 0LL, a1);
      sub_180083094(a1);
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        LODWORD(v7) = v7 + 72;
      sub_180081F44(a1, v7, -1073741515, (unsigned int)&unk_180113DC0, 0);
      result = *(_QWORD *)(a1 + 48);
      if ( (*(_BYTE *)(result + 104) & 0x20) != 0 )
        result = sub_18007D2A4(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_DWORD *)result = v5;
  }
LABEL_27:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&unk_18015B220);
    v9 = --dword_18015B248;
    if ( (__int64 *)qword_18015B250 != &qword_18015B250 || (v10 = 1, v9 != 1) )
      v10 = 0;
    result = RtlLeaveCriticalSection(&unk_18015B220);
    if ( v10 )
      return ZwSetEvent(qword_18015B200, 0LL);
  }
  return result;
}
