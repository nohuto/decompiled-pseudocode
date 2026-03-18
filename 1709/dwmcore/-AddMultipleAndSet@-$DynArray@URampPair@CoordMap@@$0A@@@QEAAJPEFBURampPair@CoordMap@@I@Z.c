/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x1801A521C
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x180155A08 (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 *     ?ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE@@@Z @ 0x180157E5C (-ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIO.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180198F14 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A513C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  DWORD v7; // ebx
  __int64 v8; // xmm0_8
  __int64 v9; // rdx
  __int64 v10; // rcx
  signed int v11; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v6 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v7 = v6 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xCu, 1, a2);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v8 = *a2;
    v9 = 3 * v4;
    v10 = *(_QWORD *)a1;
    *(_QWORD *)(v10 + 4 * v9) = v8;
    *(_DWORD *)(v10 + 4 * v9 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v7;
}
