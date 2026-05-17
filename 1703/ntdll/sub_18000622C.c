/*
 * XREFs of sub_18000622C @ 0x18000622C
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000622C(__int64 *a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *a1;
  v4 = a1[1];
  v2 <<= 12;
  v5 = v4 << 12;
  v6 = a1[14];
  *(_QWORD *)(a2 + 128) = v4 << 12;
  *(_QWORD *)(a2 + 120) = v2;
  *(_QWORD *)(a2 + 136) = a1[14];
  v7 = ((v4 - 2 * v6) << 12) - 4096;
  *(_QWORD *)(a2 + 144) = v7;
  *(_QWORD *)(a2 + 152) = a1[9] << 12;
  *(_QWORD *)(a2 + 160) = a1[10] << 12;
  *(_QWORD *)(a2 + 80) = v7;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 20) = 2;
  *(_DWORD *)(a2 + 24) = *((unsigned __int16 *)a1 + 18);
  LODWORD(v7) = NtCurrentPeb()->NumberOfHeaps - 1;
  *(_QWORD *)(a2 + 40) = v2;
  *(_DWORD *)(a2 + 28) = v7;
  *(_QWORD *)(a2 + 48) = v5;
  result = *(unsigned int *)(a2 + 152);
  *(_DWORD *)(a2 + 100) = 0;
  *(_DWORD *)(a2 + 104) = result;
  return result;
}
