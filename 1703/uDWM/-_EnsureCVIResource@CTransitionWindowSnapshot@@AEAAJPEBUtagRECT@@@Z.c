/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18003C6B0
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000D7A0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180041660 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18003C8A4 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x18003CE10 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 v3; // rcx
  signed __int64 v5; // rdx
  float v6; // xmm1_4
  unsigned int v7; // eax
  CBaseObject **v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ecx
  float v16; // xmm1_4
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm0_4
  CVisual *v27; // rcx
  CBaseObject *v28; // rcx
  double v29; // [rsp+50h] [rbp-30h] BYREF
  double v30; // [rsp+58h] [rbp-28h]
  float v31[4]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0LL;
  v5 = (char *)a2 - (char *)v31;
  do
  {
    v31[v3] = (float)*(int *)((char *)&v31[v3] + v5);
    ++v3;
  }
  while ( v3 < 4 );
  v6 = *((float *)this + 88);
  v7 = 0;
  v29 = 0.0;
  v30 = 0.0;
  if ( v6 != 1.0 )
  {
    if ( a2->bottom - a2->top >= 0 )
      v7 = a2->bottom - a2->top;
    v24 = _mm_cvtsi32_si128(v7);
    v25 = 0;
    LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v25 = a2->right - a2->left;
    v27 = (CVisual *)*((_QWORD *)this + 39);
    v30 = (float)(v26 * v6);
    v29 = (float)((float)v25 * v6);
    CVisual::SetInterpolationMode(v27, 1);
  }
  v8 = (CBaseObject **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v9 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v9 = a2->bottom - a2->top;
    v10 = 0;
    if ( a2->right - a2->left >= 0 )
      v10 = a2->right - a2->left;
    if ( (int)CDesktopManager::GetCVIFromCache(v10, v9, (struct CResource **)this + 36) < 0 )
    {
      v11 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 36);
      v12 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x10Cu);
LABEL_33:
        if ( *v8 )
        {
          CBaseObject::Release(*v8);
          *v8 = 0LL;
        }
        v28 = (CBaseObject *)*((_QWORD *)this + 37);
        if ( v28 )
        {
          CBaseObject::Release(v28);
          *((_QWORD *)this + 37) = 0LL;
        }
        return v12;
      }
    }
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 39) + 16LL);
  if ( v13 )
    LODWORD(v13) = *(_DWORD *)(v13 + 24);
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, double *, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)*v8 + 2) + 992LL))(
          *((_QWORD *)*v8 + 2),
          *((unsigned int *)*v8 + 6),
          v31,
          &v29,
          0,
          0,
          v13,
          0);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x117u);
    goto LABEL_33;
  }
  v15 = a2->right - a2->left;
  v16 = *((float *)this + 88);
  v29 = NAN;
  v17 = 0;
  if ( v15 >= 0 )
    v17 = v15;
  v18 = a2->bottom - a2->top;
  LODWORD(v30) = (int)(float)((float)v17 * v16) - 32000;
  v19 = 0;
  if ( v18 >= 0 )
    v19 = v18;
  HIDWORD(v30) = (int)(float)((float)v19 * v16) - 32000;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**((_QWORD **)*v8 + 2) + 1008LL))(
          *((_QWORD *)*v8 + 2),
          *((unsigned int *)*v8 + 6),
          &v29);
  v12 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x128u);
    goto LABEL_33;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v21, &UdwmTransitionCVISnapshot_Info);
  v22 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x12Eu);
    goto LABEL_33;
  }
  return v12;
}
