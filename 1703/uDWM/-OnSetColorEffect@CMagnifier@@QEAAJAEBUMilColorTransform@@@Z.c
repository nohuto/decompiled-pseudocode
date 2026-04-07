/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18007D52C
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18007D700 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x18004DE84 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  char *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v3 = 0;
  if ( !memcmp_0(&gMilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 776LL))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
           0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xBAu);
      return v3;
    }
    *(_OWORD *)((char *)this + 76) = gMilColorTransfIdentity;
    *(_OWORD *)((char *)this + 92) = xmmword_1800C06E0;
    *(_OWORD *)((char *)this + 108) = xmmword_1800C06F0;
    *(_OWORD *)((char *)this + 124) = xmmword_1800C0700;
    *(_OWORD *)((char *)this + 140) = xmmword_1800C0710;
    *(_OWORD *)((char *)this + 156) = xmmword_1800C0720;
    v6 = dword_1800C0730;
    goto LABEL_15;
  }
  if ( memcmp_0((char *)this + 76, a2, 0x64uLL) )
  {
    v7 = (char *)this + 48;
    if ( *((_QWORD *)this + 6)
      || (v8 = CResource::Create(6u, *((_QWORD *)this + 2), (CBaseObject **)this + 6), v3 = v8, v8 >= 0) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**(_QWORD **)(*(_QWORD *)v7 + 16LL)
                                                                                       + 320LL))(
             *(_QWORD *)(*(_QWORD *)v7 + 16LL),
             *(unsigned int *)(*(_QWORD *)v7 + 24LL),
             a2);
      v3 = v9;
      if ( v9 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 776LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
                *(unsigned int *)(*(_QWORD *)v7 + 24LL));
        v3 = v10;
        if ( v10 >= 0 )
        {
          *(_OWORD *)((char *)this + 76) = *(_OWORD *)a2;
          *(_OWORD *)((char *)this + 92) = *((_OWORD *)a2 + 1);
          *(_OWORD *)((char *)this + 108) = *((_OWORD *)a2 + 2);
          *(_OWORD *)((char *)this + 124) = *((_OWORD *)a2 + 3);
          *(_OWORD *)((char *)this + 140) = *((_OWORD *)a2 + 4);
          *(_OWORD *)((char *)this + 156) = *((_OWORD *)a2 + 5);
          v6 = *((_DWORD *)a2 + 24);
LABEL_15:
          *((_DWORD *)this + 43) = v6;
          return v3;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xD2u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xCEu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC9u);
    }
  }
  return v3;
}
