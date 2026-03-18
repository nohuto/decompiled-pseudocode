/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C02843EC
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C0287050 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(WCRUN *Src, int a2, unsigned int a3, __int64 a4)
{
  WCRUN *v6; // rcx
  __int64 phg_high; // r12
  int v8; // r15d
  ULONG phg; // ecx
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  char v13; // si
  unsigned __int64 v14; // rdx
  ULONG v15; // eax
  unsigned int *v16; // r10
  unsigned int v17; // r8d
  unsigned int v18; // r14d
  unsigned __int64 *v19; // r11
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // [rsp+28h] [rbp-70h]
  ULONG v24; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v25; // [rsp+34h] [rbp-64h]
  unsigned int *v26; // [rsp+40h] [rbp-58h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = Src + 1;
    if ( (unsigned __int64)v6 > MmUserProbeAddress || v6 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  phg_high = HIDWORD(Src->phg);
  if ( (unsigned int)phg_high > (a3 - 16) >> 4 )
    return 0LL;
  v8 = 16 * phg_high + 16;
  phg = (ULONG)Src->phg;
  v24 = phg;
  if ( phg > (a3 - v8) >> 2 )
    return 0LL;
  v10 = v8 + 4 * phg;
  if ( v10 > 0x2710000 )
    return 0LL;
  v11 = (unsigned int *)PALLOCMEM2(v10, 1886221639LL, 1);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = 0;
  v23 = 0;
  memmove(v11, Src, 16 * phg_high + 16);
  *v12 = v10;
  if ( v12[3] == (_DWORD)phg_high )
  {
    v15 = v24;
    if ( v12[2] == v24 )
    {
      v16 = &v12[4 * phg_high + 4];
      v26 = v16;
      v17 = 0;
      v18 = 0;
      v19 = (unsigned __int64 *)MmUserProbeAddress;
      while ( v18 < (unsigned int)phg_high )
      {
        v20 = HIWORD(v12[4 * v18 + 4]);
        v14 = v23;
        if ( v15 - v23 < v20 )
          goto LABEL_36;
        v21 = LOWORD(v12[4 * v18 + 4]);
        if ( v21 < v17 )
          goto LABEL_36;
        v17 = v21 + v20;
        v25 = v21 + v20;
        v23 += v20;
        v14 = *(_QWORD *)&v12[4 * v18 + 6];
        if ( v14 )
        {
          v14 -= a4;
          v22 = 4 * v20;
          if ( v14 < (unsigned __int64)Src
            || v14 - (unsigned __int64)Src > a3
            || (unsigned int)v22 > (unsigned __int64)Src + a3 - v14 )
          {
            goto LABEL_36;
          }
          if ( !a2 && (_DWORD)v22 )
          {
            if ( (v14 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v22 + v14 > *v19 || v22 + v14 < v14 )
              *(_BYTE *)*v19 = 0;
          }
          memmove(v16, (const void *)v14, (unsigned int)v22);
          *(_QWORD *)&v12[4 * v18 + 6] = v26;
          v16 = &v26[HIWORD(v12[4 * v18 + 4])];
          v26 = v16;
          v17 = v25;
          v19 = (unsigned __int64 *)MmUserProbeAddress;
        }
        ++v18;
        v15 = v24;
      }
      v13 = 1;
    }
  }
LABEL_36:
  if ( !v13 )
  {
    Win32FreePool(v12, v14);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v12;
}
