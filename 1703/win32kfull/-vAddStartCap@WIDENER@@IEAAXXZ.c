/*
 * XREFs of ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C011FA30
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C011F858 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF50 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0120290 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C02AA9A4 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02AAF50 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02AB030 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddStartCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rax
  int v5; // r9d
  struct EVECTORFX *v6; // r8
  WIDEPATHOBJ *v7; // rdi
  struct _POINTFIX *v8; // rbx
  struct LINEDATA *v9; // rdx
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // rax
  int v13; // ebx
  int *v14; // rax
  int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+58h] [rbp+28h] BYREF
  char v19; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 329);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = (__int64 *)WIDENER::vecOutPerp(this, &v17);
      v5 = 1;
      v6 = (struct EVECTORFX *)&v17;
      v17 = *v4;
    }
    else
    {
      v9 = (struct LINEDATA *)*((_QWORD *)this + 89);
      if ( (*(_DWORD *)v9 & 2) == 0 )
        WIDENER::vVecSquareCompute(this, v9);
      v10 = -*(_DWORD *)(*((_QWORD *)this + 89) + 56LL);
      v11 = -HIDWORD(*(_QWORD *)(*((_QWORD *)this + 89) + 56LL));
      LODWORD(v17) = -(int)*(_QWORD *)(*((_QWORD *)this + 89) + 56LL);
      HIDWORD(v17) = v11;
      v18 = v17;
      v12 = (_DWORD *)WIDENER::vecOutPerp(this, &v19);
      v13 = v12[1] + v11;
      LODWORD(v17) = *v12 + v10;
      HIDWORD(v17) = v13;
      v14 = (int *)WIDENER::vecOutPerp(this, &v19);
      v6 = (struct EVECTORFX *)&v18;
      v15 = *v14;
      HIDWORD(v18) -= v14[1];
      LODWORD(v18) = v18 - v15;
      v5 = 0;
    }
    v7 = (WIDENER *)((char *)this + 1152);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1152), (struct _POINTFIX *)((char *)this + 692), v6, v5);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v16 = (__int64 *)WIDENER::vecOutDraw(this, &v17);
    else
      v16 = (__int64 *)WIDENER::vecOutPerp(this, &v17);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    v17 = *v16;
    v7 = (WIDENER *)((char *)this + 1152);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1152),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v17,
      1);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 89),
      1,
      *((_DWORD *)this + 10) & 0x10);
  }
  WIDEPATHOBJ::vAddPoint(v7, v8, (struct EVECTORFX *)&v17, 0);
}
