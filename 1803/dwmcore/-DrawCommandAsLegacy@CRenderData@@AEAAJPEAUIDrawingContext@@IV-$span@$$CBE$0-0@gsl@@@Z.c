/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800566A8
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18006C6F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A9470 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A9910 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x1800A9A20 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, CDrawingContext *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 (__fastcall *v13)(CDrawingContext *, __int128 *); // rax
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct CGeometry *v18; // r8
  struct CLegacyMilBrush *v19; // rdx
  int (*v20)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *); // rax
  int v21; // eax
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 (__fastcall *v28)(CDrawingContext *, __int128 *, __int64, _QWORD); // rax
  int v29; // eax
  struct CResource *v30; // rdx
  __int64 (__fastcall *v31)(CDrawingContext *__hidden, struct CResource *); // rax
  int v32; // eax
  int v33; // eax
  int v34; // r8d
  int v35; // r8d
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD); // rax
  __int64 v40; // r8
  __int64 (__fastcall *v41)(CDrawingContext *, __int128 *, __int64); // rax
  int v42; // r9d
  unsigned int v43; // [rsp+20h] [rbp-30h]
  __int128 v44; // [rsp+30h] [rbp-20h] BYREF

  v4 = 0;
  v7 = a3 - 434;
  if ( !v7 )
  {
    v30 = *(struct CResource **)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 4LL));
    v31 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CResource *))(*(_QWORD *)a2 + 48LL);
    if ( v31 == CDrawingContext::DrawBitmap )
      v32 = CDrawingContext::DrawBitmap(a2, v30);
    else
      v32 = v31(a2, v30);
    v4 = v32;
    if ( v32 < 0 )
    {
      v43 = 819;
      goto LABEL_42;
    }
    return v4;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        if ( !(_DWORD)v11 )
        {
          v12 = *(_QWORD *)a2;
          v44 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 4LL);
          v13 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *))(v12 + 96);
          if ( (char *)v13 == (char *)COcclusionContext::DrawOcclusionRectangle )
            v14 = COcclusionContext::DrawOcclusionRectangle(a2, &v44, v11);
          else
            v14 = v13(a2, &v44);
          v4 = v14;
          if ( v14 >= 0 )
            return v4;
          v43 = 764;
          goto LABEL_42;
        }
        v22 = v11 - 1;
        if ( !v22 )
        {
          v23 = *(_QWORD *)(a4 + 8);
          v24 = *(unsigned int *)(v23 + 4);
          v25 = *(_OWORD *)(v23 + 8);
          v26 = *(_QWORD *)(a1 + 104);
          v44 = v25;
          v27 = *(_QWORD *)(v26 + 8 * v24);
          v28 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, __int64, _QWORD))(*(_QWORD *)a2 + 8LL);
          if ( (char *)v28 == (char *)COcclusionContext::DrawRectangle )
            v29 = COcclusionContext::DrawRectangle(a2, &v44, v27, 0LL);
          else
            v29 = v28(a2, &v44, v27, 0LL);
          v4 = v29;
          if ( v29 < 0 )
          {
            v43 = 781;
            goto LABEL_42;
          }
          return v4;
        }
        v34 = v22 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 == 1 )
              (*(void (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)a2 + 88LL))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 4LL)));
            else
              return (unsigned int)-2003303421;
            return v4;
          }
          v36 = *(_QWORD *)(a4 + 8);
          v37 = *(_QWORD *)(a1 + 104);
          v38 = *(unsigned int *)(v36 + 4);
          v39 = *(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD))(*(_QWORD *)a2 + 40LL);
          v44 = *(_OWORD *)(v36 + 8);
          v33 = v39(a2, *(_QWORD *)(v37 + 8 * v38), &v44, v36 + 28, *(_DWORD *)(v36 + 24));
          v4 = v33;
          if ( v33 >= 0 )
            return v4;
          v43 = 809;
        }
        else
        {
          v40 = *(_QWORD *)(a4 + 8);
          v41 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, __int64))(*(_QWORD *)a2 + 16LL);
          v44 = *(_OWORD *)(v40 + 4);
          v33 = v41(a2, &v44, v40 + 20);
          v4 = v33;
          if ( v33 >= 0 )
            return v4;
          v43 = 772;
        }
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64))(*(_QWORD *)a2 + 80LL))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 4LL)),
                (*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 8LL)) - 16LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 8LL)) != 0LL));
        v4 = v33;
        if ( v33 >= 0 )
          return v4;
        v43 = 829;
      }
    }
    else
    {
      v33 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 8) + 4LL)),
              *(_QWORD *)(a4 + 8) + 8LL,
              0LL);
      v4 = v33;
      if ( v33 >= 0 )
        return v4;
      v43 = 800;
    }
    v42 = v33;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, v43);
    return v4;
  }
  v16 = *(_QWORD *)(a4 + 8);
  v17 = *(_QWORD *)(a1 + 104);
  v18 = *(struct CGeometry **)(v17 + 8LL * *(unsigned int *)(v16 + 8));
  v19 = *(struct CLegacyMilBrush **)(v17 + 8LL * *(unsigned int *)(v16 + 4));
  v20 = *(int (**)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *))(*(_QWORD *)a2 + 24LL);
  if ( v20 == COcclusionContext::DrawGeometry )
    v21 = COcclusionContext::DrawGeometry(a2, v19, v18);
  else
    v21 = ((__int64 (__fastcall *)(CDrawingContext *, struct CLegacyMilBrush *, struct CGeometry *))v20)(a2, v19, v18);
  v4 = v21;
  if ( v21 < 0 )
  {
    v43 = 791;
LABEL_42:
    v42 = v4;
    goto LABEL_43;
  }
  return v4;
}
