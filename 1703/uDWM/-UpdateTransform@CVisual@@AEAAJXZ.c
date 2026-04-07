/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180081EA8
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180020260 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C648 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisual *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rax
  int v10; // eax
  double v12[6]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v13[16]; // [rsp+68h] [rbp+7h] BYREF

  v1 = (char *)this + 104;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 13);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x3C3u);
      return v4;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 368LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*(_QWORD *)v1 + 24LL));
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x3C6u);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v13);
  *((_BYTE *)this + 84) &= ~2u;
  v7 = *(float *)v13;
  v8 = *(float *)&v13[1];
  *((_BYTE *)this + 84) |= 2 * (CurrentTransform & 1);
  v9 = *(_QWORD *)v1;
  v12[0] = v7;
  v12[1] = v8;
  v12[2] = *(float *)&v13[4];
  v12[3] = *(float *)&v13[5];
  v12[4] = *(float *)&v13[12];
  v12[5] = *(float *)&v13[13];
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v9 + 16) + 1152LL))(
          *(_QWORD *)(v9 + 16),
          *(unsigned int *)(v9 + 24),
          v12);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x3D6u);
  return v4;
}
