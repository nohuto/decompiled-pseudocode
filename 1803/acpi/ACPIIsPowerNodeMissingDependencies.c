/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C001F3EC
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001D28C (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0012FD8 (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // bl
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // r12
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  int v11; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+78h] [rbp+10h]

  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = **(_DWORD **)(v2 + 32);
  if ( v5 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v7 = *(_QWORD *)(v2 + 32);
      v8 = AMLIGetNameSpaceObject(*(void **)(v7 + i + 40));
      if ( v8 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v12, 0LL, v10, &v11);
      AMLIDereferenceHandleEx(v12);
      if ( v11 != 3 )
        return 1;
      if ( ++v4 >= v5 )
        return v3;
    }
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      21,
      43,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      *(_QWORD *)(v7 + i + 40),
      v8);
  }
  return v3;
}
