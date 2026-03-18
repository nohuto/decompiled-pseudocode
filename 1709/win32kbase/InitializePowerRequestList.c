/*
 * XREFs of InitializePowerRequestList @ 0x1C01DD080
 * Callers:
 *     NtUserInitialize @ 0x1C0005200 (NtUserInitialize.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C000510C (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  const unsigned __int16 *v2; // rcx
  unsigned int *v3; // rbx
  unsigned int i; // edi
  NTSTATUS result; // eax
  struct _FAST_MUTEX *v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-B9h] BYREF
  _DWORD InputBuffer[24]; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v9[32]; // [rsp+90h] [rbp-29h] BYREF
  unsigned __int8 OutputBuffer; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v11; // [rsp+130h] [rbp+77h] BYREF
  PVOID Object; // [rsp+138h] [rbp+7Fh] BYREF

  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v3 = (unsigned int *)&unk_1C0188CF0;
  gSystemIsAoAc = OutputBuffer;
  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned int)GetConfigUlong(v2, *((const unsigned __int16 **)v3 - 1), &v11) == 1 )
    {
      *v3 = v11;
    }
    else if ( gSystemIsAoAc != 1 )
    {
      goto LABEL_4;
    }
    v3 += 6;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  InputBuffer[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, &gpRequestQueueWatchdog, 8u);
  if ( result < 0 )
    return result;
  memset(v9, 0, 0x60uLL);
  v9[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, v9, 0x60u, &gpRequestWorkerWatchdog, 8u);
  if ( result < 0 )
    return result;
LABEL_4:
  qword_1C0192D18 = (__int64)&gPowerRequestList;
  gPowerRequestList.Flink = &gPowerRequestList;
  result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  gpEventPowerRequest = Object;
  if ( result >= 0 )
  {
    v6 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 0x6F707355u);
    gpPowerRequestMutex = v6;
    if ( v6 )
    {
      v6->Owner = 0LL;
      v6->Contention = 0;
      v6->Count = 1;
      KeInitializeEvent(&v6->Event, SynchronizationEvent, 0);
      gbPowerCalloutsReady = 1;
      _InterlockedOr(v7, 0);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
