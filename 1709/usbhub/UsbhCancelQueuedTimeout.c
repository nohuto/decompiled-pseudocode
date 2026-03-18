/*
 * XREFs of UsbhCancelQueuedTimeout @ 0x1C00279CC
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C0008D14 (UsbhFreePortChangeQueueObject.c)
 *     Log @ 0x1C00155F0 (Log.c)
 */

char __fastcall UsbhCancelQueuedTimeout(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  KIRQL v6; // al
  __int64 v7; // r11
  KIRQL v8; // r14
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(_QWORD *)(a2 + 464);
  v8 = v6;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v7 != a2 + 456 )
  {
    Log(*(_QWORD *)(a2 + 16), 4, 1668379697, v7 - 16, *(unsigned __int16 *)(a2 + 4));
    v12 = *(_QWORD *)(a2 + 16);
    v16 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v11 + 8) == 0x10000 )
    {
      Log(v12, 4, 1668768050, v10, v16);
      v14 = *(_QWORD *)(v13 + 16);
      if ( *(_QWORD *)(v14 + 8) != v13 + 16 || (v15 = *(_QWORD **)(v13 + 24), *v15 != v13 + 16) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      UsbhFreePortChangeQueueObject(a1, a2, v13, 0);
      *(_DWORD *)(a2 + 696) = 0;
      v4 = 1;
      break;
    }
    Log(v12, 4, 1668768051, v10, v16);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v8);
  return v4;
}
