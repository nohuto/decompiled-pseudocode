/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180079978
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x1800162C0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180009EC4 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisual *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  float v7; // xmm0_4
  __int64 v8; // rax
  int v9; // eax
  double v11[6]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v12[16]; // [rsp+68h] [rbp+7h] BYREF

  v1 = (char *)this + 104;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 13);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3D7u);
      return v4;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 368LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*(_QWORD *)v1 + 24LL));
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3DAu);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v12);
  *((_BYTE *)this + 84) &= ~2u;
  v7 = *(float *)v12;
  *((_BYTE *)this + 84) |= 2 * CurrentTransform;
  v8 = *(_QWORD *)v1;
  v11[0] = v7;
  v11[1] = *(float *)&v12[1];
  v11[2] = *(float *)&v12[4];
  v11[3] = *(float *)&v12[5];
  v11[4] = *(float *)&v12[12];
  v11[5] = *(float *)&v12[13];
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v8 + 16) + 1152LL))(
         *(_QWORD *)(v8 + 16),
         *(unsigned int *)(v8 + 24),
         v11);
  v4 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3EAu);
  return v4;
}
