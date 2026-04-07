/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180075E18
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D70C (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18006FE80 (-Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  CVisual **v2; // rsi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v9; // r15
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 i; // rax
  float v14; // xmm3_4
  unsigned int v15; // eax
  __m128i v16; // xmm0
  int v17; // eax
  float v18; // xmm0_4
  char *v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  volatile signed __int32 *v27; // rsi
  int v28; // eax
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v33; // [rsp+90h] [rbp-9h] BYREF
  double v34; // [rsp+98h] [rbp-1h] BYREF
  double v35; // [rsp+A0h] [rbp+7h]
  __int128 v36; // [rsp+A8h] [rbp+Fh] BYREF
  __int128 v37; // [rsp+B8h] [rbp+1Fh] BYREF

  v2 = this + 46;
  v34 = 0.0;
  v33 = 0LL;
  v35 = 0.0;
  if ( !this[46] )
  {
    v5 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 46);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x564u);
      goto LABEL_44;
    }
    CVisual::SetInterpolationMode(*v2, 0);
  }
  if ( !this[47] )
  {
    v7 = CRenderDataVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 47);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x56Au);
      goto LABEL_44;
    }
  }
  if ( !this[44] )
  {
    v8 = CResource::Create(0x1Au, *((_QWORD *)this[2] + 2), this + 44);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x56Fu);
      goto LABEL_44;
    }
  }
  v9 = (char *)(this + 45);
  if ( !this[45] )
  {
    v10 = CGaussianBlurEffect::Create(*((struct IDwmChannel **)this[2] + 2), this + 45);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x575u);
      goto LABEL_44;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD **)(*(_QWORD *)v9 + 16LL) + 1096LL))(
      *(_QWORD *)(*(_QWORD *)v9 + 16LL),
      *(unsigned int *)(*(_QWORD *)v9 + 24LL),
      v11,
      0LL,
      1);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 376LL))(
            *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
            *(unsigned int *)(*(_QWORD *)v9 + 24LL));
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x57Eu);
      goto LABEL_44;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v36 + i) = (float)*(&a2->left + i);
  v14 = *((float *)this + 80);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v15 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v15 = a2->bottom - a2->top;
    v16 = _mm_cvtsi32_si128(v15);
    v17 = 0;
    LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v17 = a2->right - a2->left;
    v35 = (float)(v18 * v14);
    v34 = (float)((float)v17 * v14);
  }
  v19 = (char *)(this + 41);
  if ( !this[41] )
  {
    v20 = CResource::Create(5u, *((_QWORD *)this[2] + 2), this + 41);
    v6 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x590u);
      goto LABEL_44;
    }
  }
  v21 = *((_QWORD *)*v2 + 2);
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 24);
  else
    v22 = 0;
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, double *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(*(_QWORD *)v19 + 16LL) + 992LL))(
          *(_QWORD *)(*(_QWORD *)v19 + 16LL),
          *(unsigned int *)(*(_QWORD *)v19 + 24LL),
          &v36,
          &v34,
          0,
          0,
          v22,
          0);
  v6 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x59Au);
    goto LABEL_44;
  }
  if ( !this[42] )
  {
    v25 = CCachedVisualImageBrushResource::Create(v24, *((_QWORD *)this[2] + 2), &v33);
    v6 = v25;
    if ( v25 >= 0 )
    {
      v26 = *(_QWORD *)v19;
      v27 = (volatile signed __int32 *)v33;
      v37 = _xmm;
      v36 = _xmm;
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v33 + 2) + 1192LL))(
              *((_QWORD *)v33 + 2),
              *((unsigned int *)v33 + 6),
              *((_QWORD *)v33 + 2),
              &v37,
              &v36,
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
              *(_DWORD *)(v26 + 24));
      v6 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x5BBu);
        goto LABEL_42;
      }
      v29 = this[42];
      if ( v29 )
        CBaseObject::Release(v29);
      this[42] = (struct CVisual *)v27;
      _InterlockedIncrement(v27 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x59Eu);
    }
    v27 = (volatile signed __int32 *)v33;
LABEL_42:
    if ( v27 )
      CBaseObject::Release((CBaseObject *)v27);
  }
LABEL_44:
  if ( v6 < 0 )
  {
    v30 = this[41];
    if ( v30 )
    {
      CBaseObject::Release(v30);
      this[41] = 0LL;
    }
    v31 = this[42];
    if ( v31 )
    {
      CBaseObject::Release(v31);
      this[42] = 0LL;
    }
  }
  return (unsigned int)v6;
}
