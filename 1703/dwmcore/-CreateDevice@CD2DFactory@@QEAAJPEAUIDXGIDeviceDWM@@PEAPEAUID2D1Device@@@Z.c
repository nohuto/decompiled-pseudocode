/*
 * XREFs of ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x18004C210
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateDevice(
        CD2DFactory *this,
        __int64 (__fastcall ***a2)(struct IDXGIDeviceDWM *, GUID *, __int64 *),
        struct ID2D1Device **a3)
{
  __int64 (__fastcall **v3)(struct IDXGIDeviceDWM *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0LL;
  v6 = (*v3)((struct IDXGIDeviceDWM *)a2, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE6u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Device **))(**((_QWORD **)this + 3) + 136LL))(
           *((_QWORD *)this + 3),
           v10,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEBu);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v10);
  return v7;
}
