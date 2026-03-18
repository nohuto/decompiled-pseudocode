/*
 * XREFs of GetDeviceParent @ 0x1C01B64D8
 * Callers:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00DBFBC (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C00DC0CC (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C00DC188 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v5; // rsi
  int PointerDevicePDO; // eax
  PVOID v7; // r12
  HANDLE v8; // r13
  unsigned int v9; // ebx
  struct _DEVICE_OBJECT *v11; // r15
  void *Data; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  PVOID v15; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT Pdo[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF

  v5 = 0LL;
  PointerDevicePDO = 0;
  Object = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0;
  Pdo[0] = 0LL;
  RequiredSize = 0;
  if ( *(_QWORD *)(a2 + 328) )
  {
    return 1;
  }
  else
  {
    if ( a1 )
    {
      v11 = a1;
    }
    else
    {
      if ( (int)GetDeviceObjectPointer(
                  (struct _UNICODE_STRING *)(a2 + 208),
                  0,
                  a3,
                  &Handle,
                  &v15,
                  (PDEVICE_OBJECT *)&Object) < 0 )
        return 0LL;
      v5 = (struct _DEVICE_OBJECT *)Object;
      ObfReferenceObject(Object);
      PointerDevicePDO = GetPointerDevicePDO(v5, Pdo);
      v7 = v15;
      v8 = Handle;
      v11 = Pdo[0];
    }
    if ( PointerDevicePDO >= 0
      && IoGetDevicePropertyData(v11, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1885893461LL);
      *(_QWORD *)(a2 + 328) = Data;
      if ( Data )
      {
        if ( IoGetDevicePropertyData(v11, &DEVPKEY_Device_Parent, 0, 0, RequiredSize, Data, &RequiredSize, &Type) >= 0 )
        {
          v9 = 1;
          *(_DWORD *)(a2 + 336) = RequiredSize;
        }
        else
        {
          Win32FreePool(*(_QWORD *)(a2 + 328), v13, v14);
          *(_QWORD *)(a2 + 328) = 0LL;
        }
      }
    }
    if ( !a1 )
    {
      ObfDereferenceObject(v11);
      ZwClose(v8);
      ObfDereferenceObject(v7);
      ObfDereferenceObject(v5);
    }
  }
  return v9;
}
