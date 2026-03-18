/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009ED10 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C001CAB0 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0044878 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0044D98 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0044E0C (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0045610 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0046B50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C009F4E0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     bConstructGET @ 0x1C009F900 (bConstructGET.c)
 *     vAdvanceAETEdges @ 0x1C009FC00 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C00A02D0 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C00A0400 (vMoveNewEdges.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  unsigned int v7; // edi
  __m128i *v8; // rcx
  _DWORD *v9; // r9
  char *v10; // r14
  int v11; // r15d
  unsigned __int64 v12; // rdx
  __m128i *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 Object; // rax
  unsigned int v20; // edi
  _QWORD *v21; // rax
  int v22; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // r9
  _QWORD *v29; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+34h] [rbp-CCh]
  int v31; // [rsp+38h] [rbp-C8h]
  _QWORD v32[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v33; // [rsp+90h] [rbp-70h] BYREF

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
    v10 = (char *)PALLOCMEM2((unsigned int)v12, 1734632775LL, 0);
    if ( !v10 )
      return;
    v11 = 1;
  }
  else
  {
    v10 = &v33;
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
  v17 = (int)v16 - (__int64)(int)v14;
  if ( v17 <= 0 )
    v17 = 0LL;
  v18 = 32 * (v17 >> 4) + 536;
  if ( v18 > 0x7FFFFFFF )
    goto LABEL_53;
  Object = AllocateObject((unsigned int)v18);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_53;
  *(_DWORD *)(Object + 24) = v18;
  v20 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v21 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v21[1] = v21;
  *v21 = v21;
  v22 = bConstructGET(a2, v32, v10, a4);
  if ( !v22 )
    goto LABEL_52;
  CurrentThread = KeGetCurrentThread();
  v31 = 0;
  v29 = &v29;
  v30 = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( v29 != &v29 )
    {
      vAdvanceAETEdges(&v29);
      if ( v29 != &v29 )
      {
        if ( (_QWORD **)*v29 != &v29 )
          vXSortAETEdges(&v29);
LABEL_40:
        v24 = v32[0];
        goto LABEL_41;
      }
    }
    v24 = v32[0];
    if ( (_QWORD *)v32[0] == v32 )
      goto LABEL_46;
    v25 = v20;
    v20 = *(_DWORD *)(v32[0] + 16LL);
    if ( v20 != v25 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v25, v20) )
        goto LABEL_52;
      goto LABEL_40;
    }
LABEL_41:
    if ( *(_DWORD *)(v24 + 16) == v20 )
      vMoveNewEdges(v32, &v29, v20);
    v26 = RGNMEMOBJ::bAddScans(this, v20++, (struct EDGE *)&v29, a3);
    v22 = v26;
    if ( !v26 )
      goto LABEL_52;
  }
  v22 = 0;
LABEL_46:
  if ( !v22
    || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v20, 0x7FFFFFFF)
    || (RGNOBJ::vTighten(this),
        v27 = *(_DWORD **)this,
        (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0)
    || (((v27[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v27[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v27[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
LABEL_52:
    RGNOBJ::vDeleteRGNOBJ(this);
  }
LABEL_53:
  if ( v11 )
    Win32FreePool((__int64)v10);
}
