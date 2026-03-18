/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEBU0@@Z @ 0x1C00B1690
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00B1884 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::operator=(__int64 a1)
{
  _DWORD **v1; // rdx
  int v3; // ecx

  v1 = (_DWORD **)gpDispInfo;
  *(_OWORD *)a1 = *(_OWORD *)gpDispInfo;
  *(_QWORD *)(a1 + 16) = v1[2];
  *(_QWORD *)(a1 + 24) = v1[3];
  *(_QWORD *)(a1 + 32) = v1[4];
  *(_QWORD *)(a1 + 40) = v1[5];
  *(_QWORD *)(a1 + 48) = v1[6];
  *(_QWORD *)(a1 + 56) = v1[7];
  *(_QWORD *)(a1 + 64) = v1[8];
  *(_QWORD *)(a1 + 72) = v1[9];
  *(_QWORD *)(a1 + 80) = v1[10];
  *(_DWORD *)(a1 + 88) = *((_DWORD *)v1 + 22);
  *(_DWORD *)(a1 + 92) = *((_DWORD *)v1 + 23);
  *(_QWORD *)(a1 + 96) = v1[12];
  *(_QWORD *)(a1 + 104) = v1[13];
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = (*v1)[6];
  *(_DWORD *)(*(_QWORD *)a1 + 28LL) = (*v1)[7];
  *(_DWORD *)(*(_QWORD *)a1 + 32LL) = (*v1)[8];
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = (*v1)[9];
  v3 = *(_DWORD *)(a1 + 132);
  *(_QWORD *)(a1 + 120) = v1[15];
  *(_WORD *)(a1 + 128) = *((_WORD *)v1 + 64);
  *(_DWORD *)(a1 + 132) ^= (*((_DWORD *)v1 + 33) ^ v3) & 1;
  *(_DWORD *)(a1 + 132) ^= (*((_DWORD *)v1 + 33) ^ *(_DWORD *)(a1 + 132)) & 2;
  *(_DWORD *)(a1 + 136) = *((_DWORD *)v1 + 34);
  *(_OWORD *)(a1 + 144) = *((_OWORD *)v1 + 9);
  *(_WORD *)(a1 + 160) = *((_WORD *)v1 + 80);
  *(_WORD *)(a1 + 162) = *((_WORD *)v1 + 81);
  **(_DWORD **)a1 = **v1;
  return a1;
}
