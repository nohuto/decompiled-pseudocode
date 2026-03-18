/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140146D00
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1401469D0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  __int64 v2; // rax
  int v3; // ebx
  _OWORD *v5; // [rsp+20h] [rbp-38h] BYREF
  DEVPROPGUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  DEVPROPID pid; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  pid = DEVPKEY_Device_ClassGuid.pid;
  v2 = *(_QWORD *)this;
  fmtid = DEVPKEY_Device_ClassGuid.fmtid;
  v3 = (*(__int64 (__fastcall **)(SC_DEVICE *, DEVPROPGUID *, _OWORD **))(v2 + 24))(this, &fmtid, &v5);
  if ( v3 >= 0 )
  {
    *(_OWORD *)((char *)this + 8) = *v5;
    PspQueueApcSpecialApc();
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
