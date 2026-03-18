/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C004ABBC
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00078D8 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0045578 (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0050258 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v3; // rbp
  char v4; // bl
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 i; // rsi
  __int64 v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+78h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = 0;
  v6 = **(_DWORD **)(v3 + 32);
  if ( v6 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v8 = *(_QWORD *)(v3 + 32);
      v9 = AMLIGetNameSpaceObject(*(_BYTE **)(v8 + i + 40), *(_QWORD *)(a1 + 32), &v14);
      if ( v9 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v14, 0LL, v11, &v13);
      AMLIDereferenceHandleEx(v14, v12);
      if ( v13 != 3 )
        return 1;
      if ( ++v5 >= v6 )
        return v4;
    }
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      21,
      42,
      (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
      *(_QWORD *)(v8 + i + 40),
      v9);
  }
  return v4;
}
