/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18000B32C
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000C9CC (-Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B34C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003C20C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  _QWORD *v2; // rsi
  char *v5; // r15
  __int64 i; // rcx
  float v7; // xmm3_4
  unsigned int v8; // eax
  __m128i v9; // xmm0
  int v10; // eax
  float v11; // xmm0_4
  char *v12; // r14
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  volatile signed __int32 *v28; // rsi
  int v29; // eax
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // [rsp+90h] [rbp-9h] BYREF
  __int128 v34; // [rsp+98h] [rbp-1h] BYREF
  double v35; // [rsp+A8h] [rbp+Fh] BYREF
  double v36; // [rsp+B0h] [rbp+17h]
  __int128 v37; // [rsp+B8h] [rbp+1Fh] BYREF

  v2 = this + 46;
  v35 = 0.0;
  v33 = 0LL;
  v36 = 0.0;
  if ( !this[46] )
  {
    v19 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 46);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x541u);
      goto LABEL_18;
    }
    CVisual::SetInterpolationMode(*v2, 0LL);
  }
  if ( !this[47] )
  {
    v20 = CRenderDataVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 47);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x547u);
      goto LABEL_18;
    }
  }
  if ( !this[44] )
  {
    v21 = CResource::Create(25LL, *((_QWORD *)this[2] + 2));
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x54Cu);
      goto LABEL_18;
    }
  }
  v5 = (char *)(this + 45);
  if ( !this[45] )
  {
    v22 = CGaussianBlurEffect::Create(*((struct IDwmChannel **)this[2] + 2), this + 45);
    v17 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x552u);
      goto LABEL_18;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD **)(*(_QWORD *)v5 + 16LL) + 1096LL))(
      *(_QWORD *)(*(_QWORD *)v5 + 16LL),
      *(unsigned int *)(*(_QWORD *)v5 + 24LL),
      v23,
      0LL,
      1);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*v2 + 16LL) + 16LL) + 376LL))(
            *(_QWORD *)(*(_QWORD *)(*v2 + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*v2 + 16LL) + 24LL),
            *(unsigned int *)(*(_QWORD *)v5 + 24LL));
    v17 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x55Bu);
      goto LABEL_18;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v34 + i) = (float)*(int *)((char *)&v34 + 4 * i + (char *)a2 - (char *)&v34);
  v7 = *((float *)this + 80);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v8 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v8 = a2->bottom - a2->top;
    v9 = _mm_cvtsi32_si128(v8);
    v10 = 0;
    LODWORD(v11) = _mm_cvtepi32_ps(v9).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v10 = a2->right - a2->left;
    v36 = (float)(v11 * v7);
    v35 = (float)((float)v10 * v7);
  }
  v12 = (char *)(this + 41);
  if ( !this[41] )
  {
    v25 = CResource::Create(5LL, *((_QWORD *)this[2] + 2));
    v17 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x56Du);
      goto LABEL_18;
    }
  }
  v13 = *(_QWORD *)(*v2 + 16LL);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 24);
  else
    v14 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, double *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(*(_QWORD *)v12 + 16LL) + 992LL))(
          *(_QWORD *)(*(_QWORD *)v12 + 16LL),
          *(unsigned int *)(*(_QWORD *)v12 + 24LL),
          &v34,
          &v35,
          0,
          0,
          v14,
          0);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x577u);
    goto LABEL_18;
  }
  if ( this[42] )
    goto LABEL_18;
  v26 = CCachedVisualImageBrushResource::Create(v16, *((_QWORD *)this[2] + 2), &v33);
  v17 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x57Bu);
LABEL_36:
    v28 = (volatile signed __int32 *)v33;
    goto LABEL_37;
  }
  v27 = *(_QWORD *)v12;
  v28 = (volatile signed __int32 *)v33;
  v37 = _xmm;
  v34 = _xmm;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v33 + 2) + 1192LL))(
          *((_QWORD *)v33 + 2),
          *((unsigned int *)v33 + 6),
          *((_QWORD *)v33 + 2),
          &v37,
          &v34,
          0,
          0,
          0,
          1,
          1,
          0,
          0,
          1,
          0,
          0,
          0,
          *(_DWORD *)(v27 + 24));
  v17 = v29;
  if ( v29 >= 0 )
  {
    v30 = this[42];
    if ( v30 )
      CBaseObject::Release(v30);
    this[42] = (struct CVisual *)v28;
    _InterlockedIncrement(v28 + 2);
    goto LABEL_36;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x598u);
LABEL_37:
  if ( v28 )
    CBaseObject::Release((CBaseObject *)v28);
LABEL_18:
  if ( v17 < 0 )
  {
    v31 = this[41];
    if ( v31 )
    {
      CBaseObject::Release(v31);
      this[41] = 0LL;
    }
    v32 = this[42];
    if ( v32 )
    {
      CBaseObject::Release(v32);
      this[42] = 0LL;
    }
  }
  return (unsigned int)v17;
}
