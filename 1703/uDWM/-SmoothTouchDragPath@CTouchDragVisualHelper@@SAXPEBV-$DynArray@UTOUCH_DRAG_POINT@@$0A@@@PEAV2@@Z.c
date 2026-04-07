/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004B068
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004B4EC (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x18008C29C (-AddMultipleAndSet@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x18008C338 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x18008C3C4 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  unsigned int i; // ebx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 *v9; // rax
  _OWORD *v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int128 *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  float v21; // xmm12_4
  float v22; // xmm13_4
  float v23; // xmm11_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm8_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm0_4
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int64 v43; // xmm1_8
  __int128 *MidPoint; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r10
  __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // xmm1_8
  __int128 *v54; // rdx
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int64 v57; // xmm1_8
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // xmm1_8
  __int128 v61; // xmm0
  _BYTE v62[32]; // [rsp+28h] [rbp-E0h] BYREF
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
                                 v62,
                                 *(_QWORD *)a1 + 28LL * i,
                                 28LL * (i + 1) + *(_QWORD *)a1);
        v45 = *(_QWORD *)a1;
        v46 = 28LL * (i + 2);
        v48 = *(_QWORD *)(v47 + *(_QWORD *)a1 + 16);
        v69 = *MidPoint;
        v49 = *(_OWORD *)(v47 + v45);
        v68 = *(_DWORD *)(v47 + v45 + 24);
        v66 = v49;
        v50 = *(_OWORD *)(v46 + v45);
        v51 = *(_DWORD *)(v46 + v45 + 24);
        v52 = v45 + 28LL * (i + 3);
        v67 = v48;
        v53 = *(_QWORD *)(v46 + v45 + 16);
        v54 = (__int128 *)(v45 + v46);
      }
      else
      {
        v58 = *(_QWORD *)a1;
        v54 = &v70;
        v59 = *(_DWORD *)(*(_QWORD *)a1 + 52LL);
        v60 = *(_QWORD *)(*(_QWORD *)a1 + 44LL);
        v69 = *(_OWORD *)*(_QWORD *)a1;
        v68 = v59;
        v61 = *(_OWORD *)(v58 + 28);
        v51 = *(_DWORD *)(v58 + 80);
        v67 = v60;
        v53 = *(_QWORD *)(v58 + 72);
        v66 = v61;
        v50 = *(_OWORD *)(v58 + 56);
        v52 = v58 + 84;
      }
      v71 = v53;
      v70 = v50;
      v72 = v51;
      v55 = CTouchDragVisualHelper::GetMidPoint(v62, v54, v52);
      v56 = *(_OWORD *)v55;
      v57 = *(_QWORD *)(v55 + 16);
      LODWORD(v55) = *(_DWORD *)(v55 + 24);
      v63 = v56;
      v65 = v55;
      v64 = v57;
    }
    else
    {
      if ( i )
      {
        v41 = CTouchDragVisualHelper::GetMidPoint(v62, *(_QWORD *)a1 + 28LL * i, *(_QWORD *)a1 + 28LL * (i + 1));
        v42 = *(_OWORD *)v41;
        v43 = *(_QWORD *)(v41 + 16);
        v78 = *(_DWORD *)(v41 + 24);
        v9 = &v76;
        v76 = v42;
        v77 = v43;
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
      v10 = *(_OWORD **)a1;
      v11 = i + 1;
      v69 = *v9;
      v12 = *(_OWORD *)((char *)v10 + 28 * v11);
      v13 = *(_QWORD *)((char *)v10 + 28 * v11 + 16);
      v68 = *((_DWORD *)v10 + 7 * v11 + 6);
      v67 = v13;
      v66 = v12;
      if ( i + 3 > v2 )
        v14 = &v66;
      else
        v14 = (_OWORD *)((char *)v10 + 28 * i + 56);
      v15 = *v14;
      v16 = *((_QWORD *)v14 + 2);
      v17 = *((_DWORD *)v14 + 6);
      v63 = v15;
      v65 = v17;
      v64 = v16;
      v18 = CTouchDragVisualHelper::GetMidPoint(v62, &v66, &v63);
      i = v2;
      v19 = *(_OWORD *)v18;
      v20 = *(_QWORD *)(v18 + 16);
      LODWORD(v18) = *(_DWORD *)(v18 + 24);
      v70 = v19;
      v72 = v18;
      v71 = v20;
    }
    v21 = 0.0;
    v22 = (float)(v69 - v63);
    do
    {
      v23 = 1.0 - v21;
      HIDWORD(v73) = 1056964608;
      v24 = (float)(1.0 - v21) * 3.0;
      v25 = v23 * (float)(v23 * v23);
      v26 = *((float *)&v69 + 1) * v25;
      v27 = *((float *)&v69 + 2) * v25;
      v28 = (float)((float)(1.0 - v21) * v24) * v21;
      v29 = (float)(v24 * v21) * v21;
      v30 = (float)(*((float *)&v66 + 1) * v28) + v26;
      v31 = (float)(*((float *)&v66 + 2) * v28) + v27;
      v32 = (float)(v21 * v21) * v21;
      *((float *)&v73 + 1) = (float)(v30 + (float)(*((float *)&v70 + 1) * v29)) + (float)(*((float *)&v63 + 1) * v32);
      *((float *)&v73 + 2) = (float)(v31 + (float)(*((float *)&v70 + 2) * v29)) + (float)(*((float *)&v63 + 2) * v32);
      v33 = (float)((float)(v21 - 1.0) * 3.0) * (float)(1.0 - v21);
      v34 = *((float *)&v69 + 1) * v33;
      v35 = *((float *)&v69 + 2) * v33;
      v36 = (float)((float)((float)((float)(v21 - 1.0) + (float)(v21 - 1.0)) * v21) + (float)(v23 * v23)) * 3.0;
      v37 = (float)((float)((float)((float)(1.0 - v21) + (float)(1.0 - v21)) * v21) - (float)(v21 * v21)) * 3.0;
      v38 = *((float *)&v70 + 1) * v37;
      v39 = *((float *)&v70 + 2) * v37;
      v40 = (float)(v21 * 3.0) * v21;
      v75 = 0;
      LODWORD(v74) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)&v66 + 2) * v36) + v35) + v39)
                     + (float)(*((float *)&v63 + 2) * v40)) ^ _xmm;
      *((float *)&v74 + 1) = (float)((float)((float)(*((float *)&v66 + 1) * v36) + v34) + v38)
                           + (float)(*((float *)&v63 + 1) * v40);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v74);
      LODWORD(v73) = v63 + (int)(float)(v22 * (float)(1.0 - v21));
      result = DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(a2, &v73);
      v21 = v21 + 0.2;
    }
    while ( v21 < 1.0 );
  }
  return result;
}
