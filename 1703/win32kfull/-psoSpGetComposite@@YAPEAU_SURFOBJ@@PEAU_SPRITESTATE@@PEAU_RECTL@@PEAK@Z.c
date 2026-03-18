/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E7C0
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00A87C0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010B384 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  SURFOBJ *v6; // rbx
  signed int ClearBits; // eax
  __int64 v8; // rdi
  __int64 v9; // r11
  int v10; // r10d
  signed int v11; // r8d
  signed int v12; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  struct _SURFOBJ *Surface; // rax
  char v18; // [rsp+60h] [rbp+8h] BYREF

  *a3 = -1;
  v6 = 0LL;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _SPRITESTATE *)((char *)a1 + 696));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)a1 + 42, 1u, 0);
  v8 = ClearBits;
  if ( ClearBits != -1 )
  {
    v6 = (SURFOBJ *)*((_QWORD *)a1 + ClearBits + 20);
    if ( v6 )
    {
      if ( v6->sizlBitmap.cx >= a2->right - a2->left && v6->sizlBitmap.cy >= a2->bottom - a2->top )
      {
LABEL_20:
        if ( (_DWORD)v8 != -1 )
        {
          *a3 = v8;
          RtlSetBits((PRTL_BITMAP)a1 + 42, v8, 1u);
        }
        goto LABEL_22;
      }
    }
  }
  vSpDeleteSurface(v6);
  if ( (_DWORD)v8 != -1 )
    *((_QWORD *)a1 + v8 + 20) = 0LL;
  v9 = *((_QWORD *)a1 + 2);
  v10 = -1;
  v11 = -1;
  v12 = -1;
  while ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 92) - *(_DWORD *)(v9 + 84);
    v14 = *(_DWORD *)(v9 + 88) - *(_DWORD *)(v9 + 80);
    v9 = *(_QWORD *)(v9 + 24);
    v15 = v14 * v13;
    if ( v14 <= v11 )
      v14 = v11;
    v11 = v14;
    if ( v13 <= v12 )
      v13 = v12;
    v12 = v13;
    if ( v15 <= v10 )
      v15 = v10;
    v10 = v15;
  }
  Surface = psoSpCreateSurface(a1, 0, v11, v12);
  v6 = Surface;
  if ( Surface )
  {
    if ( (_DWORD)v8 != -1 )
      *((_QWORD *)a1 + v8 + 20) = Surface;
    Surface->fjBitmap |= 4u;
    goto LABEL_20;
  }
LABEL_22:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v18);
  return v6;
}
