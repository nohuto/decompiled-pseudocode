/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C0011F40
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0009A60 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIReserveDependencies @ 0x1C0012138 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0012FD8 (WPP_RECORDER_SF_sL.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  unsigned int v7; // r14d
  __int64 i; // rdi
  __int64 v9; // rbp
  int v10; // eax
  int v11; // edx
  int v12; // r9d

  v3 = 0;
  v4 = 0;
  v7 = **(_DWORD **)(a3 + 32);
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v9 = *(_QWORD *)(a3 + 32);
      v10 = AMLIGetNameSpaceObject(*(void **)(i + v9 + 40));
      v3 = v10;
      if ( v10 < 0 )
        break;
      v10 = ACPIReserveDependencies(a1);
      v3 = v10;
      if ( v10 < 0 )
      {
        v12 = 22;
        goto LABEL_9;
      }
      if ( ++v4 >= v7 )
        return v3;
    }
    v12 = 21;
LABEL_9:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      21,
      v12,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      *(_QWORD *)(i + v9 + 40),
      v10);
  }
  return v3;
}
