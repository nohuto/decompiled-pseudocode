/*
 * XREFs of ACPIEcQueueEcIrp @ 0x1C004C510
 * Callers:
 *     ACPIEcOpRegionHandler @ 0x1C004C480 (ACPIEcOpRegionHandler.c)
 *     ACPIEcReadWrite @ 0x1C009DE54 (ACPIEcReadWrite.c)
 * Callees:
 *     ACPIEcServiceDevice @ 0x1C00023E0 (ACPIEcServiceDevice.c)
 *     ACPIEcLogAction @ 0x1C002B6B0 (ACPIEcLogAction.c)
 */

__int64 __fastcall ACPIEcQueueEcIrp(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int16 v7; // r14
  char v8; // bl
  KSPIN_LOCK *v11; // rsi
  KIRQL v12; // bp
  unsigned int v13; // ebx
  _BYTE *PoolWithTag; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rbx

  v7 = a4;
  v8 = a3;
  if ( a3 > 0xFF || (unsigned int)(a3 + a4) > 0x100 )
    return 3221225489LL;
  v11 = (KSPIN_LOCK *)(a1 + 88);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  if ( *(_BYTE *)(a1 + 121) > 1u )
  {
    v13 = -1073741810;
LABEL_7:
    KeReleaseSpinLock(v11, v12);
    return v13;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x45706341u);
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
    goto LABEL_7;
  }
  PoolWithTag[16] = a2;
  *((_QWORD *)PoolWithTag + 4) = a6;
  *((_QWORD *)PoolWithTag + 5) = a7;
  *((_QWORD *)PoolWithTag + 3) = a5;
  PoolWithTag[17] = v8;
  *((_WORD *)PoolWithTag + 9) = v7;
  v16 = *(_QWORD **)(a1 + 472);
  if ( *v16 != a1 + 464 )
    __fastfail(3u);
  *((_QWORD *)PoolWithTag + 1) = v16;
  *(_QWORD *)PoolWithTag = a1 + 464;
  *v16 = PoolWithTag;
  *(_QWORD *)(a1 + 472) = PoolWithTag;
  v17 = *(_QWORD *)(a1 + 480);
  ACPIEcLogAction(a1, 0x90u, v17 == 0);
  KeReleaseSpinLock(v11, v12);
  if ( !v17 )
    ACPIEcServiceDevice(a1);
  return 0LL;
}
