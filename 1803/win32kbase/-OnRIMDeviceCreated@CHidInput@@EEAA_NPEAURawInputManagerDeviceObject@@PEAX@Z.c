/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01275D0
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C00B0FE0 (HMCreateHandleForObject.c)
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C0126F6C (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(CHidInput *this, struct RawInputManagerDeviceObject *a2, void *a3)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // r10

  v5 = 1;
  if ( (*((_DWORD *)a2 + 70) & 0x80u) != 0 )
  {
    v7 = HMCreateHandleForObject(*((_QWORD *)a2 + 70), 22);
    if ( v7 )
    {
      v8 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)a3);
      if ( *(_DWORD *)(v8 + 8) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( *(_QWORD *)(v7 + 696) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6);
      *(_QWORD *)(v7 + 696) = a3;
      v9 = *(_DWORD *)(v7 + 680);
      if ( (int)IsEditionRegAddRemovePointerDeviceSystemMetricKeySupported() >= 0 )
        EditionRegAddRemovePointerDeviceSystemMetricKey(v9);
      if ( (*(_DWORD *)(v7 + 276) & 0x20) == 0 )
      {
        v10 = *((_QWORD *)a2 + 70);
        CHidInput::LogDeviceArrivedEvent(
          (CHidInput *)(v10 + 280),
          *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 40LL),
          *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 110LL),
          *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 112LL),
          *(_DWORD *)(v10 + 24),
          *(_DWORD *)(v10 + 680),
          *(_DWORD *)(v10 + 24) == 6,
          (struct _UNICODE_STRING *)(v10 + 280),
          (struct _UNICODE_STRING *)(v10 + 808));
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
