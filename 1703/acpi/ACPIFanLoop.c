/*
 * XREFs of ACPIFanLoop @ 0x1C004DF94
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C004D9D0 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C004DB90 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C004DC50 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C004E270 (ACPIFanPowerCallback.c)
 *     ACPIFanStopDevice @ 0x1C004E39C (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIFanCompletePendingIrps @ 0x1C004D784 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanFSTCallback @ 0x1C004DC50 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  int v6; // edi
  __int64 v7; // rdx
  KIRQL v8; // bp
  bool v9; // sf
  int v10; // ecx
  char v11; // r14
  int v12; // ecx
  bool v13; // cl
  int v14; // eax
  KIRQL v15; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 *v19; // rcx
  int v20; // eax
  int v21; // eax
  volatile signed __int32 *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v6 = ~a2;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = (v6 & (a3 | *(_DWORD *)(a1 + 192))) < 0;
  v10 = v6 & (a3 | *(_DWORD *)(a1 + 192));
  v11 = 1;
  *(_DWORD *)(a1 + 192) = v10;
  if ( v9 )
    goto LABEL_30;
  *(_DWORD *)(a1 + 192) = v10 | 0x80000000;
  while ( 1 )
  {
    if ( !v11 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc(v3);
      v11 = 1;
    }
    v12 = *(_DWORD *)(a1 + 192);
    if ( (v12 & 0x40000000) != 0 )
      break;
    if ( (v12 & 0x20000000) != 0 )
    {
      v13 = 0;
    }
    else
    {
      v13 = (v12 & 0x10000000) == 0;
      *(_DWORD *)(a1 + 192) |= 0x10000000u;
    }
    if ( v13 )
    {
      v22 = *(volatile signed __int32 **)(a1 + 232);
      if ( v22 )
      {
        AMLIDereferenceHandleEx(v22, v7);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      KeReleaseSpinLock(v3, v8);
      v11 = 0;
      if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
        v23 = *(_QWORD *)(a1 + 200);
        v24 = *(_QWORD **)(a1 + 208);
        if ( *(_QWORD *)(v23 + 8) != a1 + 200 || *v24 != a1 + 200 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        KeReleaseSpinLock(&AcpiFanLock, v8);
      }
      ACPIFanCompletePendingIrps(a1, 1);
      KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
      break;
    }
    v14 = *(_DWORD *)(a1 + 192);
    if ( (v14 & 4) != 0 )
    {
      if ( (v14 & 1) != 0 || (v18 = v14 | 1, *(_DWORD *)(a1 + 192) = v18, !*(_QWORD *)(a1 + 232)) )
      {
        v21 = *(_DWORD *)(a1 + 192);
        if ( (v21 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 288);
          *(_DWORD *)(a1 + 192) = v21 | 2;
        }
        KeReleaseSpinLock(v3, v8);
        v11 = 0;
        if ( !ACPIFanCompletePendingIrps(a1, 0) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v18 | 0x40000000;
        KeReleaseSpinLock(v3, v8);
        v11 = 0;
        memset((void *)(a1 + 240), 0, 0x28uLL);
        v19 = *(__int64 **)(a1 + 232);
        *(_WORD *)(a1 + 242) = 0;
        v20 = AMLIAsyncEvalObject(v19, (_SLIST_ENTRY *)(a1 + 240), 0, 0LL, ACPIFanFSTCallback, a1);
        if ( v20 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 232), v20, a1 + 240, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v14 | 4;
      KeReleaseSpinLock(v3, v8);
      v11 = 0;
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v16 = (_QWORD *)qword_1C0076E58;
      v8 = v15;
      v17 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C0076E58 != &AcpiFanList )
        __fastfail(3u);
      *(_QWORD *)(a1 + 208) = qword_1C0076E58;
      *v17 = &AcpiFanList;
      *v16 = v17;
      qword_1C0076E58 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v8);
    }
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v11 )
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v8);
}
