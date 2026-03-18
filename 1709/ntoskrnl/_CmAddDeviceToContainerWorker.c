/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x14054E500
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14054E3A8 (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14052DA0C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x140530B64 (_PnpCtxRegCreateKey.c)
 *     _CmCreateDeviceContainer @ 0x14054E6DC (_CmCreateDeviceContainer.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 *     _CmDeleteDeviceContainer @ 0x140780918 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int DeviceContainer; // eax
  __int64 v11; // r9
  HANDLE v12; // r15
  int Key; // ebx
  __int64 v14; // r9
  int Value; // eax
  __int64 v17; // r8
  __int64 v18; // r8
  _BYTE v19[4]; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+44h] [rbp-2Ch] BYREF
  int v21; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v24; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v24 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  *a5 = 0;
  v19[0] = 0;
  v21 = 0;
  v20 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, a3, (unsigned int)&v24, (__int64)v19);
  v12 = v24;
  Key = DeviceContainer;
  if ( DeviceContainer >= 0 )
  {
    Key = PnpCtxRegCreateKey(a1, (__int64)v24, (__int64)L"BaseContainers", v11, 4u, 0LL, (__int64)&v23, (__int64)&v21);
    if ( Key >= 0 )
    {
      Key = PnpCtxRegCreateKey(a1, (__int64)v23, a3, v14, 3u, 0LL, (__int64)&Handle, (__int64)&v20);
      if ( Key >= 0 )
      {
        if ( v20 == 2 )
        {
          LODWORD(a5) = 0;
          Value = RegRtlQueryValue(Handle, a4, 0LL, 0LL, (unsigned int *)&a5);
          Key = Value;
          if ( Value == -1073741772 || Value == -1073741444 )
          {
            Key = 0;
          }
          else if ( !Value )
          {
            *v5 = 1;
            goto LABEL_9;
          }
        }
        if ( Key >= 0 && !*v5 )
        {
          Key = RegRtlSetValue(Handle, 0);
          if ( Key >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, (__int64)a4, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
        }
      }
    }
  }
  if ( Key == -1073741444 )
    Key = -1073741772;
  if ( Key < 0 )
  {
    if ( v20 == 1 )
    {
      if ( a1 && *(_QWORD *)a1 )
        v17 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      else
        v17 = 0LL;
      RegRtlDeleteKeyTransacted(Handle, 0LL, v17);
    }
    if ( v21 == 1 )
    {
      if ( a1 && *(_QWORD *)a1 )
        v18 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      else
        v18 = 0LL;
      RegRtlDeleteKeyTransacted(v23, 0LL, v18);
    }
    if ( v19[0] == 1 )
      CmDeleteDeviceContainer(a1, a2);
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)Key;
}
