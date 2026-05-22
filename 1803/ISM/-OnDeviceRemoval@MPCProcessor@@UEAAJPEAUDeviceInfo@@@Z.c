/*
 * XREFs of ?OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180045550
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z @ 0x180046C5C (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCProcessor::OnDeviceRemoval(MPCProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  struct IMPCInputTarget *v5; // rbx
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+30h] [rbp-6E8h] BYREF
  int v13; // [rsp+48h] [rbp-6D0h]
  struct IMPCInputTarget *v14; // [rsp+720h] [rbp+8h] BYREF
  __int64 v15; // [rsp+730h] [rbp+18h]

  v4 = *((_QWORD *)this + 283);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 283));
  v15 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    (**(void (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v4)(
      v4,
      &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
      &v14);
    v5 = v14;
  }
  else
  {
    v5 = 0LL;
    v14 = 0LL;
  }
  memset_0(v12, 0, 0x6C8uLL);
  v13 = 1736;
  v6 = (_OWORD *)((char *)this + 464);
  v7 = v12;
  v8 = 13LL;
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    *(v6 - 1) = v7[7];
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *v6 = *v7;
  v6[1] = v7[1];
  v6[2] = v7[2];
  v6[3] = v7[3];
  *((_QWORD *)v6 + 8) = *((_QWORD *)v7 + 8);
  MPCProcessor::ProcessSourceDetectedAndLostForAllHands(this, v5, 0LL);
  v9 = *((_QWORD *)this + 283);
  if ( v9 )
  {
    *((_QWORD *)this + 283) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = MPCInputProviderBase::OnDeviceRemoval(this, a2);
  if ( v14 )
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
