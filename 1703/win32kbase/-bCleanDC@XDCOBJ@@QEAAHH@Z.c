/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreCleanDC @ 0x1C0042380 (GreCleanDC.c)
 * Callees:
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C003DB10 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreSelectPalette @ 0x1C0042400 (GreSelectPalette.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0058284 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00582A8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00771F0 (GreDCSelectBrush.c)
 *     hbmSelectBitmap @ 0x1C007E7E0 (hbmSelectBitmap.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, unsigned int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  int v8; // esi
  DC *v9; // rcx
  HPALETTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int128 *v15; // rcx
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rbx
  DC *v19; // rax
  __int64 v20; // rcx
  DC *v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  DC *v24; // rcx
  __int64 v25; // rax
  DC *v26; // rcx
  int v27; // eax
  __int64 v29; // [rsp+40h] [rbp+8h] BYREF
  char v30; // [rsp+50h] [rbp+18h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 10);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 16));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 10) + 308LL) != 1 || (v8 = 0, (*((_DWORD *)v7 + 66) & 1) != 0) )
    v8 = 1;
  if ( *((int *)v7 + 29) > 1 )
    GreRestoreDCInternal(*(HDC *)v7);
  if ( (PVOID)*((_QWORD *)*this + 12) != WPP_MAIN_CB.Reserved )
    GreSelectPalette(*(HDC *)*this, dclevelDefault, 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    hbmSelectBitmap(*(_QWORD *)*this, gahStockObjects[21], 1LL, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1260) = -1;
  if ( *((_QWORD *)*this + 28) )
  {
    v29 = *((_QWORD *)*this + 28);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    *((_QWORD *)*this + 28) = 0LL;
  }
  if ( *((_QWORD *)*this + 29) )
  {
    v29 = *((_QWORD *)*this + 29);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    *((_QWORD *)*this + 29) = 0LL;
  }
  DC::hpath(*this, 0LL);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 20));
  DEC_SHARE_REF_CNT(*((_QWORD *)*this + 13));
  v9 = (DC *)*((_QWORD *)*this + 39);
  if ( v9 && v9 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool(v9);
    *((_QWORD *)*this + 39) = 0LL;
  }
  v10 = &dclevelDefault;
  v11 = 3LL;
  v12 = (__int64)*this + 88;
  v13 = 3LL;
  do
  {
    v12 += 128LL;
    v14 = *(_OWORD *)v10;
    v10 += 16;
    *(_OWORD *)(v12 - 128) = v14;
    *(_OWORD *)(v12 - 112) = *((_OWORD *)v10 - 7);
    *(_OWORD *)(v12 - 96) = *((_OWORD *)v10 - 6);
    *(_OWORD *)(v12 - 80) = *((_OWORD *)v10 - 5);
    *(_OWORD *)(v12 - 64) = *((_OWORD *)v10 - 4);
    *(_OWORD *)(v12 - 48) = *((_OWORD *)v10 - 3);
    *(_OWORD *)(v12 - 32) = *((_OWORD *)v10 - 2);
    *(_OWORD *)(v12 - 16) = *((_OWORD *)v10 - 1);
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v12 = *(_OWORD *)v10;
  *(_OWORD *)(v12 + 16) = *((_OWORD *)v10 + 1);
  *(_QWORD *)(v12 + 32) = v10[4];
  v15 = (__int128 *)*((_QWORD *)*this + 10);
  v16 = (__int128 *)&DcAttrDefault;
  do
  {
    v15 += 8;
    v17 = *v16;
    v16 += 8;
    *(v15 - 8) = v17;
    *(v15 - 7) = *(v16 - 7);
    *(v15 - 6) = *(v16 - 6);
    *(v15 - 5) = *(v16 - 5);
    *(v15 - 4) = *(v16 - 4);
    *(v15 - 3) = *(v16 - 3);
    *(v15 - 2) = *(v16 - 2);
    *(v15 - 1) = *(v16 - 1);
    --v11;
  }
  while ( v11 );
  *v15 = *v16;
  v15[1] = v16[1];
  *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x12001Fu;
  INC_SHARE_REF_CNT(*((struct _BASEOBJECT **)*this + 18));
  INC_SHARE_REF_CNT(*((struct _BASEOBJECT **)*this + 19));
  v18 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v18 + 32) & 1);
  if ( *((_QWORD *)*this + 6) == *((_QWORD *)gpDispInfo + 4) )
    *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x10000u;
  v19 = *this;
  if ( v8 )
    *((_DWORD *)v19 + 66) |= 1u;
  else
    *((_DWORD *)v19 + 66) &= ~1u;
  INC_SHARE_REF_CNT(*((struct _BASEOBJECT **)*this + 13));
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v30, *((struct RFONT **)*this + 274));
  v20 = 1436LL;
  *((_QWORD *)*this + 274) = 0LL;
  v21 = *this;
  if ( (*((_BYTE *)*this + 40) & 1) != 0 )
    v20 = 1444LL;
  v22 = 1432LL;
  if ( (*((_BYTE *)*this + 40) & 1) != 0 )
    v22 = 1440LL;
  v23 = *(_DWORD *)((char *)v21 + v20);
  *((_DWORD *)v21 + 398) = *(_DWORD *)((char *)v21 + v22);
  *((_DWORD *)v21 + 399) = v23;
  v24 = *this;
  *((_DWORD *)v24 + 9) |= 0x10u;
  v25 = HmgPentryFromPobj(v24);
  *(_BYTE *)(v25 + 15) |= 4u;
  v26 = *this;
  v27 = *((_DWORD *)*this + 134);
  if ( (v27 & 1) != 0 && (v27 & 2) == 0 && (v27 & 1) != 0 )
  {
    *(_QWORD *)((char *)v26 + 548) = 0LL;
    *((_DWORD *)v26 + 9) |= 0x10u;
    *(_QWORD *)((char *)v26 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v26 + 134) = v27 & 0xFFFFFFF8 | 4;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
  return 1LL;
}
