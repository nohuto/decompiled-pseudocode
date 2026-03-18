/*
 * XREFs of ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C020B934
 * Callers:
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C020B9C0 (-GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C020BC94 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Io::DeviceObjectPointer::~DeviceObjectPointer(Io::DeviceObjectPointer *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    ZwClose(*(HANDLE *)this);
}
