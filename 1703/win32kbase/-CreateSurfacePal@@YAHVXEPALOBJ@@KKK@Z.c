/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FD7E0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D51F0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // edx
  unsigned int *v6; // r9
  unsigned int v8; // r8d
  unsigned int Palette; // esi
  unsigned int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  int v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  v25 = a1;
  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(unsigned int **)(a1 + 120);
  v8 = *(_DWORD *)(a1 + 28);
  v24 = 0;
  v23 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, v4 & 0x1F, v8, v6, 0, 0, 0, 0x800u, 1);
  if ( Palette )
  {
    v11 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v12 = v23, a4 > *(_DWORD *)(v23 + 28)) )
    {
      Palette = 0;
    }
    else
    {
      v13 = 0;
      Palette = 1;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(a1 + 60) = a3;
      *(_DWORD *)(v12 + 60) = a3;
      if ( v11 )
      {
        v14 = 0LL;
        do
        {
          v15 = *(_QWORD *)(v12 + 120);
          v26 = *(_DWORD *)(v15 + v14);
          HIBYTE(v26) = 48;
          *(_DWORD *)(v15 + v14) = v26;
          v16 = *(_QWORD *)(v12 + 120);
          v14 += 4LL;
          v17 = v13 - v11;
          ++v13;
          v18 = a4 + v17;
          v26 = *(_DWORD *)(v16 + 4 * v18);
          HIBYTE(v26) = 48;
          *(_DWORD *)(v16 + 4LL * (unsigned int)v18) = v26;
        }
        while ( v13 < v11 );
      }
      v19 = *(_DWORD *)(a1 + 28);
      if ( *(_DWORD *)(v12 + 28) < v19 )
        v19 = *(_DWORD *)(v12 + 28);
      memmove(*(void **)(a1 + 120), *(const void **)(v12 + 120), 4LL * v19);
      *(_QWORD *)(a1 + 48) = v12;
      v20 = XEPALOBJ::ulTime((XEPALOBJ *)&v25);
      *(_DWORD *)(v12 + 32) = v20;
      v21 = *(_QWORD *)(v12 + 128);
      if ( v21 != v12 )
        *(_DWORD *)(v21 + 32) = v20;
      v23 = 0LL;
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
  return Palette;
}
