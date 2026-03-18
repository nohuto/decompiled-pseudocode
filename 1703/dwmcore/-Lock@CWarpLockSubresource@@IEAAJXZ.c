/*
 * XREFs of ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x180026AB8
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180026970 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Lock(CWarpLockSubresource *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]

  v7[0] = 13;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), 2013265920LL);
  v2 = *((_DWORD *)this + 8);
  v3 = *((_QWORD *)this + 2);
  v7[3] = 0;
  *(_QWORD *)&v8 = 0LL;
  DWORD2(v8) = 0;
  v7[1] = v2;
  v7[2] = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 24LL))(v3, v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA0u);
  else
    *(_OWORD *)((char *)this + 40) = v8;
  return v5;
}
