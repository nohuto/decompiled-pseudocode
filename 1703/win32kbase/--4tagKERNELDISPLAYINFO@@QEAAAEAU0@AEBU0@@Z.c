/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEBU0@@Z @ 0x1C00E6044
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00E620C (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::operator=(__int64 a1)
{
  CCursorClip *v1; // rdx
  int v3; // ecx

  v1 = gpDispInfo;
  *(_QWORD *)a1 = *(_QWORD *)gpDispInfo;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(a1 + 24) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)v1 + 4);
  *(_QWORD *)(a1 + 40) = *((_QWORD *)v1 + 5);
  *(_QWORD *)(a1 + 48) = *((_QWORD *)v1 + 6);
  *(_QWORD *)(a1 + 56) = *((_QWORD *)v1 + 7);
  *(_QWORD *)(a1 + 64) = *((_QWORD *)v1 + 8);
  *(_QWORD *)(a1 + 72) = *((_QWORD *)v1 + 9);
  *(_DWORD *)(a1 + 80) = *((_DWORD *)v1 + 20);
  *(_DWORD *)(a1 + 84) = *((_DWORD *)v1 + 21);
  *(_QWORD *)(a1 + 88) = *((_QWORD *)v1 + 11);
  *(_QWORD *)(a1 + 96) = *((_QWORD *)v1 + 12);
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = *(_DWORD *)(*(_QWORD *)v1 + 24LL);
  *(_DWORD *)(*(_QWORD *)a1 + 28LL) = *(_DWORD *)(*(_QWORD *)v1 + 28LL);
  *(_DWORD *)(*(_QWORD *)a1 + 32LL) = *(_DWORD *)(*(_QWORD *)v1 + 32LL);
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *(_DWORD *)(*(_QWORD *)v1 + 36LL);
  *(_DWORD *)(*(_QWORD *)a1 + 40LL) = *(_DWORD *)(*(_QWORD *)v1 + 40LL);
  *(_DWORD *)(*(_QWORD *)a1 + 44LL) = *(_DWORD *)(*(_QWORD *)v1 + 44LL);
  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = *(_DWORD *)(*(_QWORD *)v1 + 48LL);
  *(_DWORD *)(*(_QWORD *)a1 + 52LL) = *(_DWORD *)(*(_QWORD *)v1 + 52LL);
  *(_DWORD *)(*(_QWORD *)a1 + 56LL) = *(_DWORD *)(*(_QWORD *)v1 + 56LL);
  *(_DWORD *)(*(_QWORD *)a1 + 60LL) = *(_DWORD *)(*(_QWORD *)v1 + 60LL);
  *(_DWORD *)(*(_QWORD *)a1 + 64LL) = *(_DWORD *)(*(_QWORD *)v1 + 64LL);
  *(_DWORD *)(*(_QWORD *)a1 + 68LL) = *(_DWORD *)(*(_QWORD *)v1 + 68LL);
  *(_QWORD *)(a1 + 120) = *((_QWORD *)v1 + 15);
  v3 = *(_DWORD *)(a1 + 148);
  *(_QWORD *)(a1 + 128) = *((_QWORD *)v1 + 16);
  *(_QWORD *)(a1 + 136) = *((_QWORD *)v1 + 17);
  *(_WORD *)(a1 + 144) = *((_WORD *)v1 + 72);
  *(_WORD *)(a1 + 146) = *((_WORD *)v1 + 73);
  *(_DWORD *)(a1 + 148) ^= (*((_DWORD *)v1 + 37) ^ v3) & 1;
  *(_DWORD *)(a1 + 148) ^= (*((_DWORD *)v1 + 37) ^ *(_DWORD *)(a1 + 148)) & 2;
  *(_DWORD *)(a1 + 152) = *((_DWORD *)v1 + 38);
  *(_OWORD *)(a1 + 160) = *((_OWORD *)v1 + 10);
  *(_WORD *)(a1 + 176) = *((_WORD *)v1 + 88);
  *(_WORD *)(a1 + 178) = *((_WORD *)v1 + 89);
  **(_DWORD **)a1 = **(_DWORD **)v1;
  return a1;
}
