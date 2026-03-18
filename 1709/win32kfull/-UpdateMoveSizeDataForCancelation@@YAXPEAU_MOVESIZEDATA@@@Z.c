/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D93BC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax

  *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)((char *)a1 + 136);
  v2 = *((_QWORD *)a1 + 27);
  v3 = *((_DWORD *)a1 + 49);
  *((_QWORD *)a1 + 26) = v2;
  if ( ((v3 ^ (v3 >> 5)) & 0x300) != 0 || *((_DWORD *)a1 + 60) != *((_DWORD *)a1 + 56) )
    v4 = 0x80000;
  else
    v4 = 0;
  *((_QWORD *)a1 + 29) = v2;
  *((_DWORD *)a1 + 60) = *((_DWORD *)a1 + 56);
  v5 = (((unsigned __int16)(v4 | v3) | 0x1000) ^ (unsigned __int16)((v4 | v3 & 0xFFF7FFFF | 0x1000) >> 5)) & 0x100 ^ (v4 | v3 & 0xFFF7FFFF | 0x1000);
  v6 = *((_DWORD *)a1 + 70);
  *((_DWORD *)a1 + 49) = (((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 5)) & 0x200 ^ v5) & 0xFFEFFFFF;
  *((_DWORD *)a1 + 70) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * v6)) & 2;
}
