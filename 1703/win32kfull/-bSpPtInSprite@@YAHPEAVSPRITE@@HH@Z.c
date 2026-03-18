/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C025B8CC
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C02581F4 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F688 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, LONG a3)
{
  unsigned int v3; // edi
  __int64 *v8; // rbx
  struct _SURFOBJ *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *pvScan0; // r14
  struct _POINTL v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  struct _SPRITESTATE *v21[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v22; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v20 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v20);
  v9 = (struct _SURFOBJ *)v8[129];
  v10 = *((_QWORD *)a1 + 2);
  v22.right = a2 + 1;
  v22.bottom = a3 + 1;
  v22.left = a2;
  v22.top = a3;
  v11 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v10 + 40)) + 128);
  if ( (*(_DWORD *)(v11 + 24) & 2) != 0 )
    v14 = **(_DWORD **)(v11 + 120) | *(_DWORD *)(*(_QWORD *)(v11 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v11 + 120) + 8LL);
  else
    v14 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v22, v12, v13) )
  {
    v19.x = -a2;
    pvScan0 = v9->pvScan0;
    v19.y = -a3;
    *pvScan0 = 0;
    vSpComposite(a1, &v19, v9, &v22);
    if ( (v14 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v19, v9, &v22);
      LOBYTE(v3) = (*pvScan0 & v14) != v14;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v15, v16, v17);
  return v3;
}
