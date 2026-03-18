/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x1404DB004
 * Callers:
 *     _CmAddDeviceToContainer @ 0x1404DA8FC (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _CmCreateDeviceContainer @ 0x1404DAA54 (_CmCreateDeviceContainer.c)
 *     _PnpCtxRegCreateKey @ 0x1404DB470 (_PnpCtxRegCreateKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DE868 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceContainer @ 0x14073C1F8 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int v7; // r12d
  int v10; // eax
  int v11; // r9d
  HANDLE v12; // r15
  int Key; // ebx
  int v14; // r9d
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
  v7 = a3;
  *a5 = 0;
  v19[0] = 0;
  v21 = 0;
  v20 = 0;
  v10 = CmCreateDeviceContainer(a1, a2, a3, &v24, v19);
  v12 = v24;
  Key = v10;
  if ( v10 >= 0 )
  {
    Key = PnpCtxRegCreateKey(
            a1,
            (_DWORD)v24,
            (unsigned int)L"BaseContainers",
            v11,
            4,
            0LL,
            (__int64)&v23,
            (__int64)&v21);
    if ( Key >= 0 )
    {
      Key = PnpCtxRegCreateKey(a1, (_DWORD)v23, v7, v14, 3, 0LL, (__int64)&Handle, (__int64)&v20);
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
          Key = RegRtlSetValue(Handle, a4, 0, 0LL, 0);
          if ( Key >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, (_DWORD)a4, 1, 0, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
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
