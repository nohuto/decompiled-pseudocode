/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE@gsl@@@Z @ 0x18001DD7C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003CFD0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005DCA0 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005DCD0 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, CDrawingContext *a2, int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CDrawingContext *, __int128 *); // rax
  int v13; // eax
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 (__fastcall *v19)(CDrawingContext *, __int128 *, __int64); // rax
  int v20; // eax
  __int64 v21; // rdx
  struct CGeometry *v22; // r8
  struct CLegacyMilBrush *v23; // rdx
  int (*v24)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *); // rax
  int v25; // eax
  struct CResource *v26; // rdx
  __int64 (__fastcall *v27)(CDrawingContext *__hidden, struct CResource *); // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // r8
  __int64 v34; // rdx
  __int128 v35; // xmm0
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 (__fastcall *v38)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD); // rax
  int v39; // r9d
  __int64 v40; // r11
  __int64 v42; // rdx
  unsigned int v43; // [rsp+20h] [rbp-30h]
  __int128 v44; // [rsp+30h] [rbp-20h] BYREF

  v4 = 0;
  v6 = a3 - 373;
  if ( !v6 )
  {
    v26 = *(struct CResource **)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*a4 + 4));
    v27 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CResource *))(*(_QWORD *)a2 + 48LL);
    if ( v27 == CDrawingContext::DrawBitmap )
      v28 = CDrawingContext::DrawBitmap(a2, v26);
    else
      v28 = v27(a2, v26);
    v4 = v28;
    if ( v28 < 0 )
    {
      v43 = 659;
      goto LABEL_42;
    }
    return v4;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          v11 = *(_QWORD *)a2;
          v44 = *(_OWORD *)(*a4 + 4);
          v12 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *))(v11 + 96);
          if ( (char *)v12 == (char *)COcclusionContext::DrawOcclusionRectangle )
            v13 = COcclusionContext::DrawOcclusionRectangle(a2, &v44);
          else
            v13 = v12(a2, &v44);
          v4 = v13;
          if ( v13 >= 0 )
            return v4;
          v43 = 604;
          goto LABEL_42;
        }
        v15 = v10 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v17 = *a4 + 20;
            v18 = *(_QWORD *)a2;
            v44 = *(_OWORD *)(*a4 + 4);
            v19 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, __int64))(v18 + 16);
            if ( (char *)v19 == (char *)COcclusionContext::DrawSolidRectangle )
              v20 = COcclusionContext::DrawSolidRectangle(a2, &v44, v17);
            else
              v20 = v19(a2, &v44, v17);
            v4 = v20;
            if ( v20 < 0 )
            {
              v43 = 612;
LABEL_42:
              v39 = v4;
              goto LABEL_43;
            }
            return v4;
          }
          v32 = v16 - 1;
          if ( v32 )
          {
            if ( v32 == 1 )
              (*(void (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)a2 + 88LL))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*a4 + 4)));
            else
              return (unsigned int)-2003303421;
            return v4;
          }
          v33 = *a4;
          v34 = *(_QWORD *)(a1 + 104);
          v35 = *(_OWORD *)(*a4 + 8);
          v36 = *(unsigned int *)(*a4 + 4);
          v37 = *a4 + 28;
          v38 = *(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD))(*(_QWORD *)a2 + 40LL);
          v44 = v35;
          v29 = v38(a2, *(_QWORD *)(v34 + 8 * v36), &v44, v37, *(_DWORD *)(v33 + 24));
          v4 = v29;
          if ( v29 >= 0 )
            return v4;
          v43 = 649;
        }
        else
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*a4 + 4));
          v31 = *(_QWORD *)a2;
          v44 = *(_OWORD *)(*a4 + 8);
          v29 = (*(__int64 (__fastcall **)(CDrawingContext *, __int128 *, __int64, _QWORD))(v31 + 8))(
                  a2,
                  &v44,
                  v30,
                  0LL);
          v4 = v29;
          if ( v29 >= 0 )
            return v4;
          v43 = 621;
        }
      }
      else
      {
        v40 = *(_QWORD *)(a1 + 104);
        v42 = *(_QWORD *)(v40 + 8LL * *(unsigned int *)(*a4 + 8));
        v29 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64))(*(_QWORD *)a2 + 80LL))(
                a2,
                *(_QWORD *)(v40 + 8LL * *(unsigned int *)(*a4 + 4)),
                (v42 - 16) & -(__int64)(v42 != 0));
        v4 = v29;
        if ( v29 >= 0 )
          return v4;
        v43 = 669;
      }
    }
    else
    {
      v29 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*a4 + 4)),
              *a4 + 8,
              0LL);
      v4 = v29;
      if ( v29 >= 0 )
        return v4;
      v43 = 640;
    }
    v39 = v29;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, v43);
    return v4;
  }
  v21 = *(_QWORD *)(a1 + 104);
  v22 = *(struct CGeometry **)(v21 + 8LL * *(unsigned int *)(*a4 + 8));
  v23 = *(struct CLegacyMilBrush **)(v21 + 8LL * *(unsigned int *)(*a4 + 4));
  v24 = *(int (**)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *))(*(_QWORD *)a2 + 24LL);
  if ( v24 == COcclusionContext::DrawGeometry )
    v25 = COcclusionContext::DrawGeometry(a2, v23, v22);
  else
    v25 = ((__int64 (__fastcall *)(CDrawingContext *, struct CLegacyMilBrush *, struct CGeometry *))v24)(a2, v23, v22);
  v4 = v25;
  if ( v25 < 0 )
  {
    v43 = 631;
    goto LABEL_42;
  }
  return v4;
}
