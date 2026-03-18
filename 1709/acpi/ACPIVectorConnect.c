/*
 * XREFs of ACPIVectorConnect @ 0x1C0059800
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0059980 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C00A0EC8 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIGpeValidIndex @ 0x1C0010588 (ACPIGpeValidIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00138C0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIVectorInstall @ 0x1C0059DC8 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v9; // esi
  unsigned int v10; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  KIRQL v14; // r15

  v9 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    14,
    11,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids);
  v10 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(v9) )
    return 3221225712LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x20uLL);
  v13[1] = a5;
  v13[2] = a6;
  *(_DWORD *)v13 = v9;
  *((_DWORD *)v13 + 7) = a3;
  *((_BYTE *)v13 + 24) = a4;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  if ( ACPIGpeInstallRemoveIndex(v9, a3 == 0, 0, (_BYTE *)v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(v9, v13) )
    {
      *a7 = v13;
      goto LABEL_11;
    }
    ACPIGpeInstallRemoveIndex(v9, 2, 0, (_BYTE *)v13 + 25);
  }
  ExFreePoolWithTag(v13, 0);
  v10 = -1073741823;
LABEL_11:
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
