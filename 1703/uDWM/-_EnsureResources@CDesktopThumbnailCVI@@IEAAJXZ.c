/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009E4BC
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x18009D2B4 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x18009D6C0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  unsigned int v1; // edi
  CBaseObject **v2; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // rax
  float v11; // xmm0_4
  int v12; // ecx
  __m128i v13; // xmm1
  CBaseObject *v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // [rsp+58h] [rbp+17h] BYREF
  _DWORD v21[4]; // [rsp+60h] [rbp+1Fh] BYREF
  float v22[4]; // [rsp+70h] [rbp+2Fh] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp+3Fh] BYREF

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
    return v1;
  v4 = CResource::Create(5u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x230u);
    goto LABEL_15;
  }
  v5 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v21);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x233u);
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v20);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x236u);
    goto LABEL_15;
  }
  v7 = v21[0];
  v8 = v21[1];
  v9 = HIDWORD(v20);
  *((_DWORD *)this + 12) = v21[2];
  *((_DWORD *)this + 13) = v21[3];
  v10 = v20;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 11) = v8;
  *((_QWORD *)this + 7) = v10;
  if ( !(_DWORD)v10 || !v9 )
  {
    *((_DWORD *)this + 14) = *((_DWORD *)this + 12) - v7;
    *((_DWORD *)this + 15) = *((_DWORD *)this + 13) - v8;
  }
  v11 = (float)(*((_DWORD *)this + 12) - v7);
  v12 = *((_DWORD *)this + 13) - v8;
  v22[0] = (float)v7;
  v22[2] = v11 + (float)v7;
  v13 = _mm_cvtsi32_si128(v9);
  v14 = *v2;
  v22[1] = (float)v8;
  v22[3] = (float)v12 + (float)v8;
  v15 = _mm_cvtsi32_si128(v10);
  v16 = *((_QWORD *)this + 3);
  v23[1] = *(_OWORD *)&_mm_cvtepi32_pd(v13);
  v23[0] = *(_OWORD *)&_mm_cvtepi32_pd(v15);
  v17 = *(_QWORD *)(v16 + 16);
  if ( v17 )
    LODWORD(v17) = *(_DWORD *)(v17 + 24);
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v14 + 2) + 992LL))(
          *((_QWORD *)v14 + 2),
          *((unsigned int *)v14 + 6),
          v22,
          v23,
          0,
          0,
          v17,
          0);
  v1 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x257u);
LABEL_15:
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return v1;
}
