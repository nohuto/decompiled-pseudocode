/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800797CC
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x18006F574 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x180046754 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetColorTransform(CVisual *this, const struct MilColorTransform *a2)
{
  unsigned int *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  CBaseObject *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  if ( !memcmp_0(&gMilColorTransfIdentity, a2, 0x64uLL) )
  {
    v8 = 0LL;
  }
  else
  {
    v5 = CResource::Create(6u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x29Cu);
      v2 = (unsigned int *)v11;
      goto LABEL_10;
    }
    v2 = (unsigned int *)v11;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**((_QWORD **)v11 + 2) + 320LL))(
           *((_QWORD *)v11 + 2),
           *((unsigned int *)v11 + 6),
           a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2A0u);
      goto LABEL_10;
    }
    v8 = v2[6];
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 448LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         v8);
  v6 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2A8u);
LABEL_10:
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v6;
}
