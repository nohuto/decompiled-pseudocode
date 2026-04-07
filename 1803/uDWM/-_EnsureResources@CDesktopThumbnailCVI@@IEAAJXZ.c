/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800A49D8
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x1800A3788 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800A3B30 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  int v1; // edi
  CBaseObject **v2; // rsi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // r9d
  int v7; // r8d
  __int64 v8; // rax
  int v9; // ecx
  __m128i v10; // xmm1
  CBaseObject *v11; // rdx
  float v12; // xmm0_4
  int v13; // ecx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+58h] [rbp+17h] BYREF
  _DWORD v19[4]; // [rsp+60h] [rbp+1Fh] BYREF
  float v20[4]; // [rsp+70h] [rbp+2Fh] BYREF
  _QWORD v21[2]; // [rsp+80h] [rbp+3Fh] BYREF

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
    return (unsigned int)v1;
  v1 = CResource::Create(5u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  if ( v1 < 0 )
  {
    v4 = 588;
    goto LABEL_15;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v19);
  if ( v1 < 0 )
  {
    v4 = 591;
    goto LABEL_15;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v18);
  if ( v1 < 0 )
  {
    v4 = 594;
    goto LABEL_15;
  }
  v5 = v19[0];
  v6 = v19[1];
  v7 = HIDWORD(v18);
  *((_DWORD *)this + 12) = v19[2];
  *((_DWORD *)this + 13) = v19[3];
  v8 = v18;
  *((_DWORD *)this + 10) = v5;
  *((_DWORD *)this + 11) = v6;
  *((_QWORD *)this + 7) = v8;
  if ( !(_DWORD)v8 || !v7 )
  {
    *((_DWORD *)this + 14) = *((_DWORD *)this + 12) - v5;
    *((_DWORD *)this + 15) = *((_DWORD *)this + 13) - v6;
  }
  v9 = *((_DWORD *)this + 12) - v5;
  v10 = _mm_cvtsi32_si128(v5);
  v11 = *v2;
  v12 = (float)v9;
  v13 = *((_DWORD *)this + 13) - v6;
  v20[0] = _mm_cvtepi32_ps(v10).m128_f32[0];
  v20[2] = v12 + v20[0];
  v20[1] = (float)v6;
  v20[3] = (float)v13 + (float)v6;
  v14 = _mm_cvtsi32_si128(v8);
  v15 = *((_QWORD *)this + 3);
  *(double *)&v21[1] = (double)v7;
  v21[0] = *(_OWORD *)&_mm_cvtepi32_pd(v14);
  v16 = *(_QWORD *)(v15 + 16);
  if ( v16 )
    LODWORD(v16) = *(_DWORD *)(v16 + 24);
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v11 + 2) + 1008LL))(
         *((_QWORD *)v11 + 2),
         *((unsigned int *)v11 + 6),
         v20,
         v21,
         0,
         0,
         v16,
         0);
  if ( v1 < 0 )
  {
    v4 = 627;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, v4);
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return (unsigned int)v1;
}
