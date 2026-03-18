/*
 * XREFs of ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180046B40
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@WNI@EAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE350 (-NotifyRenderedRect@CHwDisplayRenderTarget@@WNI@EAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyRenderedRect(CHwFullScreenRenderTarget *this, float *a2)
{
  __int64 v3; // rcx
  int v4; // r14d
  char (__fastcall *v5)(CHwDisplayRenderTarget *); // rax
  char IsValid; // al
  __int64 v7; // rax
  int v8; // r12d
  int v9; // r13d
  int v10; // r14d
  int v11; // eax
  char (__fastcall *v12)(CHwDisplayRenderTarget *); // rax
  char v13; // al
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // edx
  float v18; // xmm0_4
  int v19; // ecx
  int v20; // r9d
  int v21; // r8d
  int v22; // eax
  int v23; // edx
  char v24; // al
  __int64 (__fastcall *v25)(CHwFullScreenRenderTarget *__hidden, const struct CRegion *); // rax
  int v26; // eax
  int v28; // [rsp+30h] [rbp-49h]
  float v29; // [rsp+30h] [rbp-49h]
  int v30; // [rsp+34h] [rbp-45h]
  unsigned int v31; // [rsp+38h] [rbp-41h]
  void *lpMem; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v34[3]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v35[2]; // [rsp+64h] [rbp-15h] BYREF
  _DWORD v36[3]; // [rsp+6Ch] [rbp-Dh] BYREF
  _DWORD v37[10]; // [rsp+78h] [rbp-1h] BYREF

  v31 = 0;
  v3 = *((_QWORD *)this + 28);
  v28 = -2003304307;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 888);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v4, 0x36Au);
    }
    else
    {
      v5 = *(char (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL);
      if ( v5 == CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, char (__fastcall *)(CHwDisplayRenderTarget *)))v5)(
                    this,
                    CHwDisplayRenderTarget::IsValid);
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        return v31;
      }
    }
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)this + 28);
    v8 = 0;
    v30 = 0;
    v9 = 0;
    v10 = 0;
    if ( v7 )
    {
      v11 = *(_DWORD *)(v7 + 888);
      v28 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v11, 0x36Au);
      }
      else
      {
        v12 = *(char (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL);
        if ( v12 == CHwDisplayRenderTarget::IsValid )
          v13 = CHwDisplayRenderTarget::IsValid(this);
        else
          v13 = v12(this);
        if ( !v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
          goto LABEL_50;
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
    }
    if ( v28 < 0 )
    {
LABEL_50:
      v21 = v30;
      v24 = 0;
LABEL_31:
      if ( v24 )
      {
        lpMem = v34;
        if ( v8 >= v9 || v10 >= v21 )
        {
          v34[0] = 0;
        }
        else
        {
          v34[0] = 2;
          v34[1] = v8;
          v34[2] = v9;
          v35[0] = v10;
          v35[1] = (unsigned int)v37 + 1 - 5 - (unsigned int)v35;
          v36[2] = v8;
          v37[0] = v9;
          v36[1] = (unsigned int)v37 + 1 - 5 - (unsigned int)v36 + 8;
          v36[0] = v21;
        }
        v25 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, const struct CRegion *))(*(_QWORD *)this + 288LL);
        if ( v25 == CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion )
          v26 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(this, (const struct CRegion *)&lpMem);
        else
          v26 = v25(this, (const struct CRegion *)&lpMem);
        v31 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x21Eu);
        if ( v34 != lpMem )
          operator delete(lpMem);
      }
      return v31;
    }
    if ( a2 )
    {
      v14 = *a2 + 6291456.25;
      v15 = (int)(LODWORD(v14) << 10) >> 11;
      v8 = v15;
      v16 = a2[2] + 6291456.25;
      v17 = (int)(LODWORD(v16) << 10) >> 11;
      v9 = v17;
      v18 = a2[1] + 6291456.25;
      v19 = *((_DWORD *)this + 21);
      v10 = (int)(LODWORD(v18) << 10) >> 11;
      v29 = a2[3] + 6291456.25;
      v20 = (int)(LODWORD(v29) << 10) >> 11;
      v21 = v20;
      if ( v19 <= v15 )
        v19 = v15;
      else
        v8 = *((_DWORD *)this + 21);
      v22 = *((_DWORD *)this + 23);
      if ( *((_DWORD *)this + 22) > v10 )
        v10 = *((_DWORD *)this + 22);
      if ( v22 >= v17 )
        v22 = v17;
      else
        v9 = *((_DWORD *)this + 23);
      v23 = *((_DWORD *)this + 24);
      if ( v23 < v20 )
        v21 = *((_DWORD *)this + 24);
      v30 = v21;
      if ( v22 > v19 )
      {
        if ( v23 >= v20 )
          v23 = (int)(LODWORD(v29) << 10) >> 11;
        if ( v23 > v10 )
        {
LABEL_28:
          if ( v9 > v8 && v21 > v10 )
          {
            v24 = 1;
            goto LABEL_31;
          }
          goto LABEL_50;
        }
      }
      v21 = 0;
      v9 = 0;
      v10 = 0;
      v8 = 0;
    }
    else
    {
      v21 = HIDWORD(*(_OWORD *)((char *)this + 84));
      v9 = *(_QWORD *)((char *)this + 92);
      v10 = HIDWORD(*(_QWORD *)((char *)this + 84));
      v8 = *(_OWORD *)((char *)this + 84);
    }
    v30 = v21;
    goto LABEL_28;
  }
  return v31;
}
