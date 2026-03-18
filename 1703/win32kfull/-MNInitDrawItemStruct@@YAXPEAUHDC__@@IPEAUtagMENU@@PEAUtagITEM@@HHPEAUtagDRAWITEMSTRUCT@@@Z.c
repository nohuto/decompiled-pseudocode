/*
 * XREFs of ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C000E078
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C000DEB4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C000E1AC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 */

void __fastcall MNInitDrawItemStruct(
        HDC a1,
        int a2,
        struct tagMENU *a3,
        struct tagITEM *a4,
        int a5,
        int a6,
        struct tagDRAWITEMSTRUCT *a7)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r11d
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // eax

  *((_DWORD *)a7 + 1) = 0;
  *(_DWORD *)a7 = 1;
  v10 = *((_DWORD *)a4 + 2);
  *((_DWORD *)a7 + 3) = a2;
  *((_DWORD *)a7 + 2) = v10;
  v11 = *((_DWORD *)a4 + 1);
  v12 = MNDrawHilite(a3, a4);
  *((_DWORD *)a7 + 4) = v11 & 8 | (2 * (v11 & 1)) | (8 * (v13 & 0x10)) | ((v11 & 3) != 0 ? 4 : 0) | ~(v13 << 6) & 0x100 | ((v11 & 0x100 | (v11 >> 5) & 0x80) >> 2) | (v12 != 0);
  *((_QWORD *)a7 + 3) = *(_QWORD *)a3;
  *((_QWORD *)a7 + 4) = a1;
  v14 = *((_DWORD *)a4 + 19);
  if ( a5 )
    v14 = (unsigned int)(*((_DWORD *)a4 + 21) - *((_DWORD *)a4 + 29)) >> 1;
  *((_DWORD *)a7 + 10) = a6 + *((_DWORD *)a4 + 18);
  *((_DWORD *)a7 + 11) = v14;
  if ( a5 )
    v15 = *((_DWORD *)a4 + 28);
  else
    v15 = *((_DWORD *)a4 + 20);
  *((_DWORD *)a7 + 12) = a6 + v15 + *((_DWORD *)a4 + 18);
  if ( a5 )
    v16 = *((_DWORD *)a4 + 29);
  else
    v16 = *((_DWORD *)a4 + 21);
  *((_DWORD *)a7 + 13) = v14 + v16;
  *((_QWORD *)a7 + 7) = *((_QWORD *)a4 + 8);
}
