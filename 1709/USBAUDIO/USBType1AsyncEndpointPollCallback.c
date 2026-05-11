/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x1C0003570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDddd @ 0x1C0002D58 (WPP_RECORDER_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  KIRQL v8; // r13
  __int64 v9; // r8
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  PKSGATE i; // rax
  int v17; // [rsp+20h] [rbp-68h]

  Context = a3->Context;
  v6 = Context[17];
  v7 = *(_QWORD *)(v6 + 848);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 12);
  if ( *(_DWORD *)(v6 + 892) )
    *(_DWORD *)(v6 + 892) = *(_DWORD *)(v6 + 884) + 16;
  *(_BYTE *)(v6 + 901) = 0;
  KeSetEvent((PRKEVENT)(v6 + 904), 0, 0);
  if ( *(int *)(a2 + 48) >= 0 && *(int *)(v7 + 4) >= 0 && *(_DWORD *)(v7 + 36) == 3 )
  {
    v9 = *(unsigned int *)(v6 + 840);
    v10 = (*(unsigned __int8 *)(v6 + 961) >> 6) | (4 * *(unsigned __int8 *)(v6 + 962));
    v11 = 1000 * (*(_WORD *)(v6 + 960) & 0x3FFF);
    v12 = (v11 >> 14) + 1000 * v10;
    if ( (unsigned int)v9 <= v12 )
      v13 = v12 - v9;
    else
      v13 = v9 - v12;
    v14 = (unsigned int)v9 / 0xA;
    if ( v13 > (unsigned int)v9 / 0xA )
    {
      v12 = v9 - v14;
      if ( (unsigned int)v9 <= ((1000 * (*(_WORD *)(v6 + 960) & 0x3FFFu)) >> 14) + 1000 * v10 )
        v12 = v9 + v14;
      v10 = v12 / 0x3E8;
      v11 = (v12 % 0x3E8) << 14;
    }
    if ( v12 != *((_DWORD *)Context + 22) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v11 / 0x3E8,
          v9,
          *(unsigned __int8 *)(v6 + 961),
          v17);
      *((_DWORD *)Context + 22) = v12;
      *(_DWORD *)(v6 + 100) = v10;
      *(_DWORD *)(v6 + 104) = v11;
    }
  }
  if ( *((_BYTE *)Context + 36) )
  {
    *((_BYTE *)Context + 36) = 0;
    for ( i = KsPinGetAndGate(a3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    if ( !*(_BYTE *)(v6 + 84) )
      goto LABEL_26;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 84) )
  {
LABEL_26:
    *(_BYTE *)(v6 + 900) = 0;
    goto LABEL_27;
  }
  *(_DWORD *)(v6 + 880) += *(_DWORD *)(v6 + 884);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 952), USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_27:
  KeReleaseSpinLock(Context + 12, v8);
  return 3221225494LL;
}
