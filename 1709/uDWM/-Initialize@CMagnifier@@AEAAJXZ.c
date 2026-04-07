/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x180072644
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180072570 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180072DEC (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::Initialize(CMagnifier *this)
{
  char *v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  char *v8; // rsi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  _OWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (char *)this + 32;
  v3 = CResource::Create(0x18u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( v5 )
      v6 = *(unsigned int *)(v5 + 24);
    else
      v6 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)v1 + 16LL) + 720LL))(
           *(_QWORD *)(*(_QWORD *)v1 + 16LL),
           *(unsigned int *)(*(_QWORD *)v1 + 24LL),
           v6);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = (char *)this + 40;
      if ( *((_QWORD *)this + 5)
        || (v9 = CResource::Create(0x15u, *((_QWORD *)this + 2), (CBaseObject **)this + 5), v4 = v9, v9 >= 0) )
      {
        v10 = *(_QWORD *)v8;
        v14[0] = _xmm;
        v14[1] = _xmm;
        v14[2] = 0LL;
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v10 + 16) + 1152LL))(
                *(_QWORD *)(v10 + 16),
                *(unsigned int *)(v10 + 24),
                v14);
        v4 = v11;
        if ( v11 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 16LL) + 768LL))(
                  *(_QWORD *)(*(_QWORD *)v1 + 16LL),
                  *(unsigned int *)(*(_QWORD *)v1 + 24LL),
                  *(unsigned int *)(*(_QWORD *)v8 + 24LL));
          v4 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Bu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x97u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x86u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x82u);
  }
  return v4;
}
