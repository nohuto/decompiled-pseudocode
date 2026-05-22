/*
 * XREFs of ?OnDeviceRemoval@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180037E40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceRemoval(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _DWORD v5[24]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( !v2 )
    return 0LL;
  memset_0(v5, 0, sizeof(v5));
  v5[1] = **((_DWORD **)this + 4);
  v5[0] = 0x4000;
  v5[6] = 96;
  v5[10] = 2;
  result = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v2 + 24LL))(v2, v5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
