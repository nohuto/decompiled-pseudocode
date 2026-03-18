/*
 * XREFs of ?Construct@AdapterInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x180076C38
 * Callers:
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180076AF8 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::AdapterInfo::Construct(
        CSurfaceManager::AdapterInfo *this,
        struct CDXGIAdapterLimited *a2,
        struct CD3DDeviceManager *a3)
{
  struct CD3DDeviceLevel1 *v3; // rbx
  _QWORD *v4; // r14
  __int64 v6; // rax
  signed int v8; // eax
  unsigned int v9; // edi
  signed int v10; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (_QWORD *)((char *)this + 8);
  v13 = 0LL;
  v6 = *((_QWORD *)a2 + 42);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = v6;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))a2 + 3))(
         *((_QWORD *)a2 + 3),
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         (char *)this + 8);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x264u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v4 + 24LL))(*v4, (char *)this + 16);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x266u);
      return v9;
    }
    ExistingDevice = CD3DDeviceManager::GetExistingDevice(a3, *(struct _LUID *)this, &v13);
    v3 = v13;
    if ( ExistingDevice >= 0 )
    {
      *((_QWORD *)this + 3) = *((_QWORD *)v13 + 77);
      *((_QWORD *)this + 4) = *((_QWORD *)v3 + 78);
    }
  }
  if ( v3 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v3 + 472));
  return v9;
}
