/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C0023208
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C00230C0 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x1C0044A64 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0044F3C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  unsigned int v8; // r14d
  __int64 i; // rdi
  __int64 v11; // rbp
  int v12; // eax
  int v13; // edx
  int v14; // r9d
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  v15 = 0LL;
  v8 = **(_DWORD **)(a3 + 32);
  if ( v8 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v11 = *(_QWORD *)(a3 + 32);
      v12 = AMLIGetNameSpaceObject(*(_BYTE **)(i + v11 + 40), a2, &v15, 0);
      v3 = v12;
      if ( v12 < 0 )
        break;
      v12 = ACPIReserveDependencies(a1);
      v3 = v12;
      if ( v12 < 0 )
      {
        v14 = 22;
        goto LABEL_10;
      }
      if ( ++v4 >= v8 )
        return v3;
    }
    v14 = 21;
LABEL_10:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      21,
      v14,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      *(_QWORD *)(i + v11 + 40),
      v12);
  }
  return v3;
}
