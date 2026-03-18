/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1406F4540
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14046CE14 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x14057F874 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, char a2)
{
  int v2; // esi
  int v3; // edi
  PVOID v4; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v7; // [rsp+48h] [rbp-40h] BYREF

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
             1935107664,
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v7);
        }
        PfSnBeginAppLaunch((__int64)v4, 0LL, 9);
        v3 = 0;
        if ( v2 )
          KiUnstackDetachProcess(&v7, 0LL);
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
