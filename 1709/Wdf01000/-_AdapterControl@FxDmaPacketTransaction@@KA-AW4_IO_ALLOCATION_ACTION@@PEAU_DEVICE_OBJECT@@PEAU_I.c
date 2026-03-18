/*
 * XREFs of ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0069FC0
 * Callers:
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0068B60 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C006A5D8 (WPP_IFR_SF_qqqDd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_AdapterControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        void *MapRegisterBase,
        unsigned __int64 Context)
{
  _FX_DRIVER_GLOBALS *v4; // rsi
  unsigned int v7; // ebp
  const void *_a1; // rcx
  void (__fastcall *v9)(unsigned __int64, _QWORD); // rax
  __int16 v10; // dx
  unsigned __int64 v11; // rcx
  int id; // eax
  unsigned __int16 v13; // r9
  int v14; // edi
  __int64 flags; // r8
  const void *level; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v4 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, _IRP *))(*(_QWORD *)Context + 136LL))(Context, Irp);
  if ( !*(_BYTE *)(Context + 272) )
  {
    *(_QWORD *)(Context + 264) = MapRegisterBase;
    *(_BYTE *)(Context + 272) = 1;
  }
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
  {
    _a1 = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Context + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qq(v4, 5u, 0xFu, 0x18u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, MapRegisterBase);
  }
  if ( *(_DWORD *)(Context + 120) == 2 )
  {
    v9 = *(void (__fastcall **)(unsigned __int64, _QWORD))(Context + 152);
    v10 = *(_WORD *)(Context + 10);
    *(_QWORD *)(Context + 152) = 0LL;
    if ( v9 )
    {
      v11 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v10 )
        v11 = 0LL;
      v9(v11, *(_QWORD *)(Context + 160));
    }
  }
  else
  {
    id = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)Context + 80LL))(Context);
    v14 = id;
    if ( id < 0 )
    {
      flags = 3 - (unsigned int)(id != -1073741536);
      if ( v4->FxVerifierOn && v4->FxVerboseOn )
      {
        level = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(Context + 10) )
          level = 0LL;
        WPP_IFR_SF_qqqDd(
          v4,
          (unsigned __int8)level,
          flags,
          v13,
          traceGuid,
          *(const void **)(Context + 328),
          *(const void **)(Context + 336),
          level,
          flags,
          id);
      }
      (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)Context + 168LL))(
        Context,
        3 - (unsigned int)(v14 != -1073741536),
        flags);
    }
  }
  return v7;
}
