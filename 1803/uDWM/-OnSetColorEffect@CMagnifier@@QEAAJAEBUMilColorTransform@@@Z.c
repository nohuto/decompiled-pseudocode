/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180079488
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800796C4 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x18004B354 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  char *v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = 0;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
           0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xB8u);
      return v3;
    }
    *(_OWORD *)((char *)this + 76) = g_MilColorTransfIdentity;
    *(_OWORD *)((char *)this + 92) = xmmword_1800B9CF0;
    *(_OWORD *)((char *)this + 108) = xmmword_1800B9D00;
    *(_OWORD *)((char *)this + 124) = xmmword_1800B9D10;
    *(_OWORD *)((char *)this + 140) = xmmword_1800B9D20;
    *(_OWORD *)((char *)this + 156) = xmmword_1800B9D30;
    v6 = 1065353216;
    goto LABEL_16;
  }
  if ( memcmp_0((char *)this + 76, a2, 0x64uLL) )
  {
    v7 = (char *)this + 48;
    v8 = *((_QWORD *)this + 6);
    if ( !v8 )
    {
      v9 = CResource::Create(7u, *((_QWORD *)this + 2), (CBaseObject **)this + 6);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC7u);
        return v3;
      }
      v8 = *(_QWORD *)v7;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**(_QWORD **)(v8 + 16) + 328LL))(
            *(_QWORD *)(v8 + 16),
            *(unsigned int *)(v8 + 24),
            a2);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              *(unsigned int *)(*(_QWORD *)v7 + 24LL));
      v3 = v11;
      if ( v11 >= 0 )
      {
        *(_OWORD *)((char *)this + 76) = *(_OWORD *)a2;
        *(_OWORD *)((char *)this + 92) = *((_OWORD *)a2 + 1);
        *(_OWORD *)((char *)this + 108) = *((_OWORD *)a2 + 2);
        *(_OWORD *)((char *)this + 124) = *((_OWORD *)a2 + 3);
        *(_OWORD *)((char *)this + 140) = *((_OWORD *)a2 + 4);
        *(_OWORD *)((char *)this + 156) = *((_OWORD *)a2 + 5);
        v6 = *((_DWORD *)a2 + 24);
LABEL_16:
        *((_DWORD *)this + 43) = v6;
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xD0u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xCCu);
    }
  }
  return v3;
}
