/*
 * XREFs of PoFxRegisterDevice @ 0x140614990
 * Callers:
 *     <none>
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopFxConvertV1Components @ 0x1406147D8 (PopFxConvertV1Components.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxRegisterDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // edx
  unsigned int v10; // ebx
  _QWORD v12[8]; // [rsp+40h] [rbp-40h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  memset(v12, 0, sizeof(v12));
  if ( *(_DWORD *)a2 == 1 )
  {
    PopPrintEx(1u, (__int64)"Device using PO_FX_VERSION_V1: devobj 0x%p", DeviceObject);
    PopPrintEx(1u, (__int64)" - Driver: \"%wZ\"", &DeviceObject->DriverObject->DriverName);
    PopPrintEx(1u, (__int64)"\n");
    v7 = 0LL;
    v8 = *(_QWORD *)(a2 + 56);
    v9 = *(_DWORD *)(a2 + 4);
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 24);
    v12[3] = *(_QWORD *)(a2 + 32);
    v12[4] = *(_QWORD *)(a2 + 40);
    v12[5] = *(_QWORD *)(a2 + 48);
    v3 = PopFxConvertV1Components(a2 + 64, v9);
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      v10 = -1073741811;
      goto LABEL_5;
    }
    v3 = (char *)(a2 + 80);
    v4 = a2;
    v8 = *(_QWORD *)(a2 + 64);
    v7 = *(_QWORD *)(a2 + 8);
    v12[0] = *(_QWORD *)(a2 + 16);
    v12[1] = *(_QWORD *)(a2 + 24);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[3] = *(_QWORD *)(a2 + 40);
    v12[4] = *(_QWORD *)(a2 + 48);
    v12[5] = *(_QWORD *)(a2 + 56);
  }
  v10 = PopFxRegisterDevice(DeviceObject, v8, v7, a3);
LABEL_5:
  if ( v3 && !v4 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v10;
}
