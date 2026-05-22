/*
 * XREFs of ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x1800716E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18006F23C (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendDeviceUpdate(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCControllerDeviceInfo *a3,
        unsigned int *a4)
{
  struct DeviceInfo *v5; // rbx
  _OWORD *v7; // r11
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  unsigned int v11; // edi
  _DWORD *v12; // rcx
  RawInputProvidersTracing *v13; // rcx
  struct RIMDevice *v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v15 = 0LL;
  if ( (int)RIMDeviceCollection::FindDeviceId((SpatialRimDeviceCollection *)((char *)this - 2760), a2, &v15, a4) >= 0
    && (v5 = (struct DeviceInfo *)*((_QWORD *)v15 + 4)) != 0LL )
  {
    v8 = 7LL;
    v9 = (_OWORD *)((char *)v5 + 56);
    do
    {
      *v9 = *v7;
      v9[1] = v7[1];
      v9[2] = v7[2];
      v9[3] = v7[3];
      v9[4] = v7[4];
      v9[5] = v7[5];
      v9[6] = v7[6];
      v9 += 8;
      v10 = v7[7];
      v7 += 8;
      *(v9 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *v9 = *v7;
    v9[1] = v7[1];
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this - 343) + 48LL))(
            *((_QWORD *)this - 343),
            v5);
  }
  else
  {
    v11 = -2147483638;
  }
  v12 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v12 && *v12 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::ControllerDeviceUpdate_(v13, v11, a2, v5);
  }
  return v11;
}
