/*
 * XREFs of ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A7BE8
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00EA5D0 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EA7C8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 */

__int64 __fastcall bBrushPathN_8x8(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *pvRbrush; // rax
  void (*v8)(struct _RECTL *, unsigned int, void *); // r9
  void (*v9)(int, struct _ROW *, unsigned int, void *); // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  v12 = *((_QWORD *)a1 + 10);
  v14 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v8 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath8_8x8Enum;
  v13 = pvRbrush[4];
  v15 = a5->x & 7;
  v16 = a5->y & 7;
  v9 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath8_8x8EnumRow;
  if ( a6 != 3 )
  {
    v9 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath4_8x8EnumRow;
    v8 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath4_8x8Enum;
  }
  return bEngFastFillEnum((struct EPATHOBJ *)a2, a3, a7, v8, v9, v11);
}
