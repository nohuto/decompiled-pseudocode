/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x14075CA90
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14048E1F0 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PfSnBeginAppLaunch @ 0x14050E34C (PfSnBeginAppLaunch.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, char a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v3 = ObpReferenceObjectByHandleWithTag(
             *(_QWORD *)(a1 + 8),
             8,
             (__int64)PsProcessType,
             a2,
             0x73576650u,
             &Object,
             0LL,
             0LL);
      if ( v3 < 0 )
      {
        v4 = Object;
      }
      else
      {
        v4 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v2 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v7);
        }
        PfSnBeginAppLaunch(v4, 0LL, 9);
        v3 = 0;
        if ( v2 )
          KiUnstackDetachProcess((__int64)v7, 0LL);
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v3;
}
