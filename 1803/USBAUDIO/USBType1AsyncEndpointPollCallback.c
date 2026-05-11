/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x1C0003790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDddd @ 0x1C0002FA8 (WPP_RECORDER_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  KIRQL v8; // r13
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // edx
  PKSGATE i; // rax
  int v17; // [rsp+20h] [rbp-68h]

  Context = a3->Context;
  v6 = Context[19];
  v7 = *(_QWORD *)(v6 + 864);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( *(_DWORD *)(v6 + 908) )
    *(_DWORD *)(v6 + 908) = *(_DWORD *)(v6 + 900) + 16;
  *(_BYTE *)(v6 + 917) = 0;
  KeSetEvent((PRKEVENT)(v6 + 920), 0, 0);
  if ( *(int *)(a2 + 48) >= 0 && *(int *)(v7 + 4) >= 0 && *(_DWORD *)(v7 + 36) == 3 )
  {
    v9 = *(_DWORD *)(v6 + 856);
    v10 = (*(unsigned __int8 *)(v6 + 977) >> 6) | (4 * *(unsigned __int8 *)(v6 + 978));
    v11 = 1000 * (*(_WORD *)(v6 + 976) & 0x3FFF);
    v12 = (v11 >> 14) + 1000 * v10;
    if ( v9 <= v12 )
      v13 = v12 - v9;
    else
      v13 = v9 - v12;
    v14 = v9 / 0xA;
    if ( (unsigned int)v13 > v9 / 0xA )
    {
      if ( v9 <= v12 )
        v12 = v14 + v9;
      else
        v12 = v9 - v14;
      v10 = v12 / 0x3E8;
      v11 = (v12 % 0x3E8) << 14;
    }
    if ( v12 != *((_DWORD *)Context + 26) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v11 / 0x3E8,
          v13,
          *(unsigned __int8 *)(v6 + 977),
          v17);
      *((_DWORD *)Context + 26) = v12;
      *(_DWORD *)(v6 + 116) = v10;
      *(_DWORD *)(v6 + 120) = v11;
    }
  }
  if ( *((_BYTE *)Context + 44) )
  {
    *((_BYTE *)Context + 44) = 0;
    for ( i = KsPinGetAndGate(a3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    if ( !*(_BYTE *)(v6 + 100) )
      goto LABEL_27;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 100) )
  {
LABEL_27:
    *(_BYTE *)(v6 + 916) = 0;
    goto LABEL_28;
  }
  *(_DWORD *)(v6 + 896) += *(_DWORD *)(v6 + 900);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 968), USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_28:
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}
