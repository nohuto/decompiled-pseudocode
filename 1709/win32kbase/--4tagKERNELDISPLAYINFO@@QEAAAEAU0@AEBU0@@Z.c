/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEBU0@@Z @ 0x1C00E5040
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00E5164 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::operator=(__int64 a1)
{
  _DWORD **v1; // rdx
  int v3; // ecx

  v1 = (_DWORD **)gpDispInfo;
  *(_QWORD *)a1 = *(_QWORD *)gpDispInfo;
  *(_QWORD *)(a1 + 8) = v1[1];
  *(_QWORD *)(a1 + 16) = v1[2];
  *(_QWORD *)(a1 + 24) = v1[3];
  *(_QWORD *)(a1 + 32) = v1[4];
  *(_QWORD *)(a1 + 40) = v1[5];
  *(_QWORD *)(a1 + 48) = v1[6];
  *(_QWORD *)(a1 + 56) = v1[7];
  *(_QWORD *)(a1 + 64) = v1[8];
  *(_QWORD *)(a1 + 72) = v1[9];
  *(_DWORD *)(a1 + 80) = *((_DWORD *)v1 + 20);
  *(_DWORD *)(a1 + 84) = *((_DWORD *)v1 + 21);
  *(_QWORD *)(a1 + 88) = v1[11];
  *(_QWORD *)(a1 + 96) = v1[12];
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = (*v1)[6];
  *(_DWORD *)(*(_QWORD *)a1 + 28LL) = (*v1)[7];
  *(_DWORD *)(*(_QWORD *)a1 + 32LL) = (*v1)[8];
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = (*v1)[9];
  v3 = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a1 + 112) = v1[14];
  *(_WORD *)(a1 + 120) = *((_WORD *)v1 + 60);
  *(_DWORD *)(a1 + 124) ^= (*((_DWORD *)v1 + 31) ^ v3) & 1;
  *(_DWORD *)(a1 + 124) ^= ((unsigned __int8)*(_DWORD *)(a1 + 124) ^ (unsigned __int8)*((_DWORD *)v1 + 31)) & 2;
  *(_DWORD *)(a1 + 128) = *((_DWORD *)v1 + 32);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(v1 + 17);
  *(_WORD *)(a1 + 152) = *((_WORD *)v1 + 76);
  *(_WORD *)(a1 + 154) = *((_WORD *)v1 + 77);
  **(_DWORD **)a1 = **v1;
  return a1;
}
