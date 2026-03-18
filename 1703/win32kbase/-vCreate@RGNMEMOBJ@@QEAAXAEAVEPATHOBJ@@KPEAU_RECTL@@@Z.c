/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0
 * Callers:
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C00230D0 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C003B888 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C003BD7C (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C003BDF0 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C003C6B0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C003DB10 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     bConstructGET @ 0x1C0096DD0 (bConstructGET.c)
 *     vAdvanceAETEdges @ 0x1C00970D0 (vAdvanceAETEdges.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0097790 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     vXSortAETEdges @ 0x1C0097B00 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C0097C30 (vMoveNewEdges.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  unsigned int v7; // edi
  __m128i *v8; // rcx
  _DWORD *v9; // r9
  char *v10; // r14
  int v11; // r15d
  size_t v12; // rcx
  __m128i *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 Object; // rax
  unsigned int v21; // edi
  _QWORD *v22; // rax
  int v23; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v25; // rax
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // r9
  _QWORD *v30; // [rsp+28h] [rbp-D8h] BYREF
  int v31; // [rsp+34h] [rbp-CCh]
  int v32; // [rsp+38h] [rbp-C8h]
  _QWORD v33[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v34; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  *(_QWORD *)this = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 2 )
    return;
  if ( !a4
    || (v8 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v8[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v8[48LL], 8).m128i_i32[1] )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
    {
      RGNOBJ::vTighten(this);
      v9 = *(_DWORD **)this;
      if ( (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v9[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v9[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v9[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
      {
        RGNOBJ::vDeleteRGNOBJ(this);
      }
      return;
    }
  }
  if ( v7 >= 0x14 )
  {
    if ( v7 + 1 < v7 )
      return;
    v12 = 48LL * (v7 + 1);
    if ( v12 > 0xFFFFFFFF )
      return;
    v10 = (char *)PALLOCMEM2(v12);
    if ( !v10 )
      return;
    v11 = 1;
  }
  else
  {
    v10 = &v34;
    v11 = 0;
  }
  v13 = (__m128i *)*((_QWORD *)a2 + 1);
  v14 = HIDWORD(v13[3].m128i_i64[0]);
  v15 = _mm_srli_si128(v13[3], 8).m128i_u64[0];
  v16 = HIDWORD(v15);
  if ( SHIDWORD(v15) < (int)v14 )
    goto LABEL_53;
  if ( a4 )
  {
    if ( (int)v14 <= a4->top )
      LODWORD(v14) = a4->top;
    if ( SHIDWORD(v15) >= a4->bottom )
      LODWORD(v16) = a4->bottom;
  }
  v17 = 0LL;
  v18 = (int)v16 - (__int64)(int)v14;
  if ( v18 > 0 )
    v17 = v18;
  v19 = 32 * (v17 >> 4) + 536;
  if ( v19 > 0x7FFFFFFF )
    goto LABEL_53;
  Object = AllocateObject((unsigned int)v19);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_53;
  *(_DWORD *)(Object + 24) = v19;
  v21 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v22 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v22[1] = v22;
  *v22 = v22;
  v23 = bConstructGET(a2, v33, v10, a4);
  if ( !v23 )
    goto LABEL_52;
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  v30 = &v30;
  v31 = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( v30 != &v30 )
    {
      vAdvanceAETEdges(&v30);
      if ( v30 != &v30 )
      {
        if ( (_QWORD **)*v30 != &v30 )
          vXSortAETEdges(&v30);
LABEL_40:
        v25 = v33[0];
        goto LABEL_41;
      }
    }
    v25 = v33[0];
    if ( (_QWORD *)v33[0] == v33 )
      goto LABEL_46;
    v26 = v21;
    v21 = *(_DWORD *)(v33[0] + 16LL);
    if ( v21 != v26 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v26, v21) )
        goto LABEL_52;
      goto LABEL_40;
    }
LABEL_41:
    if ( *(_DWORD *)(v25 + 16) == v21 )
      vMoveNewEdges(v33, &v30, v21);
    v27 = RGNMEMOBJ::bAddScans(this, v21++, (struct EDGE *)&v30, a3);
    v23 = v27;
    if ( !v27 )
      goto LABEL_52;
  }
  v23 = 0;
LABEL_46:
  if ( !v23
    || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v21, 0x7FFFFFFF)
    || (RGNOBJ::vTighten(this),
        v28 = *(_DWORD **)this,
        (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0)
    || (((v28[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v28[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v28[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
LABEL_52:
    RGNOBJ::vDeleteRGNOBJ(this);
  }
LABEL_53:
  if ( v11 )
    Win32FreePool(v10);
}
