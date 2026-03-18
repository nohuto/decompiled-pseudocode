/*
 * XREFs of ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0211DD8
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 */

void __fastcall BltMe4Times(struct tagOEMBITMAPINFO *a1, __int64 a2, __int64 a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  int v7; // r15d
  int v8; // ebx
  int v9; // r12d
  HBRUSH v10; // r8
  _DWORD *v11; // rdi
  int v12; // r13d
  LONG v13; // r14d
  LONG v14; // ebx
  LONG v15; // edx
  int v16; // r14d
  int v17; // esi
  __int64 v18; // rbx
  int v19; // [rsp+50h] [rbp-58h]
  _DWORD *v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  RECT v22; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+30h]

  v7 = a3;
  v8 = a2;
  v9 = 1;
  FixHDCBITSBmpEx(0LL, a2, a3, (__int64)a4);
  v24 = a6 & 0x10;
  if ( v24 )
    v10 = *(HBRUSH *)(gpsi + 4840LL);
  else
    v10 = *(HBRUSH *)(gpsi + 4696LL);
  v21 = 2LL;
  v11 = (_DWORD *)((char *)a1 + 8);
  v19 = (v8 - v7) / 2;
  v20 = v11;
  do
  {
    v12 = 8913094;
    v13 = *(v11 - 1);
    v14 = *(v11 - 2);
    v15 = v14 + *v11;
    v22.bottom = v13 + v11[1];
    v22.right = v15;
    v22.left = v14;
    v22.top = v13;
    FillRect(*(HDC *)(gpDispInfo + 56LL), &v22, v10);
    v16 = v19 + v13;
    v17 = v14 + v19;
    v18 = 2LL;
    do
    {
      BltIcon(*(HDC *)(gpDispInfo + 56LL), v17 + 1, v16, v7, v7, a4, (__int64)a5, (v9 ^ 1) + 1, v12);
      v9 ^= 1u;
      v12 = 6684742;
      --v18;
    }
    while ( v18 );
    v11 = v20 + 4;
    v20 += 4;
    if ( v24 )
      v10 = *(HBRUSH *)(gpsi + 4800LL);
    else
      v10 = *(HBRUSH *)(gpsi + 4704LL);
    --v21;
  }
  while ( v21 );
}
