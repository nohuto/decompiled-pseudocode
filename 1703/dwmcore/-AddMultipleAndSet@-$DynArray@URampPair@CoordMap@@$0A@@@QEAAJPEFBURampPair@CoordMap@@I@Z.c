/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x18018CA2C
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x18015F95C (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18018BAB4 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18019578C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v6 = v3 + 1;
  v7 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v7 = a3;
  v8 = v6 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(a1 + 20) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xCu, 1, a2);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    v9 = *a2;
    v10 = 3 * v3;
    v11 = *(_QWORD *)a1;
    *(_QWORD *)(v11 + 4 * v10) = v9;
    *(_DWORD *)(v11 + 4 * v10 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 24) = v7;
  }
  return v8;
}
