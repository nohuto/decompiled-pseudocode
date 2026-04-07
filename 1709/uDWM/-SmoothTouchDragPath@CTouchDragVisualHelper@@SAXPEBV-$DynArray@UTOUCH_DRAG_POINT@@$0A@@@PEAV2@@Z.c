/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x180085C80
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180087268 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x180085AAC (-AddMultipleAndSet@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x180085B48 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180085BD4 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  unsigned int i; // ebx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 *v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  _OWORD *v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int64 v24; // r8
  __int128 *v25; // rdx
  int v26; // eax
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  int v29; // eax
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // r8
  __int128 *MidPoint; // rax
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // xmm1_8
  float v41; // xmm12_4
  float v42; // xmm13_4
  float v43; // xmm11_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm4_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm6_4
  float v55; // xmm7_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  unsigned int v61; // r8d
  _BYTE v62[24]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v63; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-A8h]
  __int128 v66; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+78h] [rbp-90h]
  int v68; // [rsp+80h] [rbp-88h]
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int128 v70; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp-48h]
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-30h] BYREF
  int v75; // [rsp+E0h] [rbp-28h]
  __int128 v76; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-10h]
  int v78; // [rsp+100h] [rbp-8h]

  v2 = a1[6];
  *(_DWORD *)(a2 + 24) = 0;
  result = DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  for ( i = 0; i < v2; i += 2 )
  {
    if ( i + 4 <= v2 )
    {
      if ( i )
      {
        MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(
                                 (__int64)v62,
                                 *(_QWORD *)a1 + 28LL * i,
                                 28LL * (i + 1) + *(_QWORD *)a1);
        v34 = *(_QWORD *)a1;
        v36 = *(_QWORD *)(v35 + *(_QWORD *)a1 + 16);
        v69 = *MidPoint;
        v37 = *(_OWORD *)(v35 + v34);
        v25 = (__int128 *)(v34 + 28LL * (i + 2));
        v68 = *(_DWORD *)(v35 + v34 + 24);
        v67 = v36;
        v30 = *((_QWORD *)v25 + 2);
        v66 = v37;
        v31 = *v25;
        v29 = *((_DWORD *)v25 + 6);
        v32 = v34 + 28LL * (i + 3);
      }
      else
      {
        v24 = *(_QWORD *)a1;
        v25 = &v70;
        v26 = *(_DWORD *)(*(_QWORD *)a1 + 52LL);
        v27 = *(_QWORD *)(*(_QWORD *)a1 + 44LL);
        v69 = *(_OWORD *)*(_QWORD *)a1;
        v68 = v26;
        v28 = *(_OWORD *)(v24 + 28);
        v29 = *(_DWORD *)(v24 + 80);
        v67 = v27;
        v30 = *(_QWORD *)(v24 + 72);
        v66 = v28;
        v31 = *(_OWORD *)(v24 + 56);
        v32 = v24 + 84;
      }
      v71 = v30;
      v70 = v31;
      v72 = v29;
      v38 = CTouchDragVisualHelper::GetMidPoint((__int64)v62, (__int64)v25, v32);
      v39 = *(_OWORD *)v38;
      v40 = *(_QWORD *)(v38 + 16);
      LODWORD(v38) = *(_DWORD *)(v38 + 24);
      v63 = v39;
      v65 = v38;
      v64 = v40;
    }
    else
    {
      if ( i )
      {
        v10 = CTouchDragVisualHelper::GetMidPoint(
                (__int64)v62,
                *(_QWORD *)a1 + 28LL * i,
                *(_QWORD *)a1 + 28LL * (i + 1));
        v11 = *(_OWORD *)v10;
        v12 = *(_QWORD *)(v10 + 16);
        v78 = *(_DWORD *)(v10 + 24);
        v9 = &v76;
        v76 = v11;
        v77 = v12;
      }
      else
      {
        v7 = *(_OWORD *)*(_QWORD *)a1;
        v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v75 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
        v9 = &v73;
        v73 = v7;
        v74 = v8;
      }
      v13 = *(_OWORD **)a1;
      v14 = i + 1;
      v69 = *v9;
      v15 = *(_OWORD *)((char *)v13 + 28 * v14);
      v16 = *(_QWORD *)((char *)v13 + 28 * v14 + 16);
      v68 = *((_DWORD *)v13 + 7 * v14 + 6);
      v67 = v16;
      v66 = v15;
      if ( i + 3 <= v2 )
        v17 = (_OWORD *)((char *)v13 + 28 * i + 56);
      else
        v17 = &v66;
      v18 = *v17;
      v19 = *((_QWORD *)v17 + 2);
      v20 = *((_DWORD *)v17 + 6);
      v63 = v18;
      v65 = v20;
      v64 = v19;
      v21 = CTouchDragVisualHelper::GetMidPoint((__int64)v62, (__int64)&v66, (__int64)&v63);
      i = v2;
      v22 = *(_OWORD *)v21;
      v23 = *(_QWORD *)(v21 + 16);
      LODWORD(v21) = *(_DWORD *)(v21 + 24);
      v70 = v22;
      v72 = v21;
      v71 = v23;
    }
    v41 = 0.0;
    v42 = (float)(v69 - v63);
    do
    {
      v43 = 1.0 - v41;
      HIDWORD(v73) = 1056964608;
      v44 = (float)(1.0 - v41) * 3.0;
      v45 = v43 * (float)(v43 * v43);
      v46 = *((float *)&v69 + 2) * v45;
      v47 = *((float *)&v69 + 1) * v45;
      v48 = (float)((float)(1.0 - v41) * v44) * v41;
      v49 = (float)(v44 * v41) * v41;
      v50 = *((float *)&v66 + 1) * v48;
      v51 = *((float *)&v66 + 2) * v48;
      v52 = (float)(v41 * v41) * v41;
      *((float *)&v73 + 1) = (float)(*((float *)&v63 + 1) * v52)
                           + (float)((float)(*((float *)&v70 + 1) * v49) + (float)(v50 + v47));
      *((float *)&v73 + 2) = (float)(*((float *)&v63 + 2) * v52)
                           + (float)((float)(v46 + v51) + (float)(*((float *)&v70 + 2) * v49));
      v53 = (float)((float)(v41 - 1.0) * 3.0) * (float)(1.0 - v41);
      v54 = *((float *)&v69 + 1) * v53;
      v55 = *((float *)&v69 + 2) * v53;
      v56 = (float)((float)((float)((float)(v41 - 1.0) + (float)(v41 - 1.0)) * v41) + (float)(v43 * v43)) * 3.0;
      v57 = (float)((float)((float)((float)(1.0 - v41) + (float)(1.0 - v41)) * v41) - (float)(v41 * v41)) * 3.0;
      v58 = *((float *)&v70 + 1) * v57;
      v59 = *((float *)&v70 + 2) * v57;
      v60 = (float)(v41 * 3.0) * v41;
      v75 = 0;
      LODWORD(v74) = COERCE_UNSIGNED_INT(
                       (float)(*((float *)&v63 + 2) * v60)
                     + (float)((float)((float)(*((float *)&v66 + 2) * v56) + v55) + v59)) ^ _xmm;
      *((float *)&v74 + 1) = (float)((float)((float)(*((float *)&v66 + 1) * v56) + v54) + v58)
                           + (float)(*((float *)&v63 + 1) * v60);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v74);
      LODWORD(v73) = v63 + (int)(float)(v42 * (float)(1.0 - v41));
      result = DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(a2, (__int64)&v73, v61);
      v41 = v41 + 0.2;
    }
    while ( v41 < 1.0 );
  }
  return result;
}
