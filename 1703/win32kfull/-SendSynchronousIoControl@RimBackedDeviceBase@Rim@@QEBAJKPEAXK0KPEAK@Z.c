/*
 * XREFs of ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0209F04
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C0209B90 (--1DeviceObjectPointer@Io@@QEAA@XZ.c)
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C0209C20 (-GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z.c)
 *     SendSynchronousIoControl @ 0x1C020A008 (SendSynchronousIoControl.c)
 */

__int64 __fastcall Rim::RimBackedDeviceBase::SendSynchronousIoControl(
        Rim::RimBackedDeviceBase *this,
        __int64 a2,
        __int64 a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7)
{
  bool v7; // zf
  struct _UNICODE_STRING *v9; // rax
  ULONG v10; // ebp
  struct _UNICODE_STRING *v11; // rcx
  int v12; // ebx
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v15 = 0LL;
  v7 = *((_BYTE *)this + 12) == 0;
  v14 = 0LL;
  v9 = (struct _UNICODE_STRING *)*((_QWORD *)this + 2);
  v10 = a2;
  if ( !v7
    || (!v9 ? (v11 = 0LL) : (v11 = v9 + 17),
        v12 = Io::DeviceObjectPointer::GetByObjectName(v11, a2, a3, (void **)&v14),
        v12 >= 0) )
  {
    v12 = SendSynchronousIoControl(v10, a4, a5, a6, (__int64)a7);
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)&v14);
  return (unsigned int)v12;
}
