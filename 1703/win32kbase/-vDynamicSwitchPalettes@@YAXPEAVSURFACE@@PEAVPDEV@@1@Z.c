/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0
 * Callers:
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     vMatchAPal @ 0x1C00EAE90 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(struct SURFACE *a1, struct PDEV *a2, struct PDEV *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  HPALETTE v7; // rdx
  int v8; // r14d
  int *v9; // rdi
  unsigned int *v10; // r9
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+58h] [rbp-8h]
  int *v17; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a1 + 16);
  v5 = *((_QWORD *)a2 + 228);
  if ( v3 )
  {
    if ( v3 == v5 )
    {
      v14 = *((_DWORD *)a1 + 28);
      if ( (v14 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v14 & 0xF7FFFFFF;
    }
  }
  else
  {
    *((_DWORD *)a1 + 28) |= 0x20000000u;
    if ( (*((_DWORD *)a2 + 547) & 0x100) != 0 )
    {
      v7 = (HPALETTE)*((_QWORD *)a1 + 22);
      v8 = 0;
      if ( !v7 )
        goto LABEL_12;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v17, v7);
      v9 = v17;
      if ( !v17 )
        goto LABEL_12;
      if ( (v17[6] & 0x100) != 0 && v17 != WPP_MAIN_CB.Reserved && *((_QWORD *)v17 + 9) )
      {
        v10 = *(unsigned int **)(v5 + 120);
        v16 = 0;
        v15 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v15, 1, 0x100u, v10, 0, 0, 0, 0x400u, 1) )
        {
          v11 = *(_DWORD *)(v5 + 60);
          v12 = v15;
          v13 = v15;
          v8 = 1;
          *(_DWORD *)(v15 + 60) = v11;
          vMatchAPal(0LL, v13, (__int64)v9, &v18, &v17);
          v15 = 0LL;
          v16 = 1;
          *((_QWORD *)a1 + 16) = v12;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v15);
      }
      HmgDecrementShareReferenceCount((__int64)v9);
      if ( !v8 )
      {
LABEL_12:
        HmgIncrementShareReferenceCount(ppalDefaultSurface8bpp);
        *((_QWORD *)a1 + 16) = ppalDefaultSurface8bpp;
      }
    }
    else
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v5);
      *((_QWORD *)a1 + 16) = v5;
    }
  }
  if ( (*((_DWORD *)a3 + 547) & 0x100) != 0 && (*((_DWORD *)a1 + 28) & 0x20000000) != 0 )
  {
    v17 = (int *)*((_QWORD *)a1 + 16);
    XEPALOBJ::vUnrefPalette(&v17);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
