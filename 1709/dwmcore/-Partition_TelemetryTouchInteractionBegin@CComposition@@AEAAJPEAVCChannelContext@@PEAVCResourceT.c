/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180128C40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180129038 (-VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  void *v7; // rax
  void *v8; // rbp
  __int64 v9; // rsi
  char *v10; // rdx

  if ( a6 - 32 > 0xA8 )
    CComposition::FailFastOnMalformedPacket((__int64)this, -134277597, 0LL);
  if ( !TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(a5, a6) )
    CComposition::FailFastOnMalformedPacket((__int64)this, -134277597, 0LL);
  if ( !a5 )
    CComposition::FailFastOnMalformedPacket((__int64)this, -134277597, 0LL);
  v7 = operator new(saturated_mul((unsigned int)a5[13] + 1, 2uLL));
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    v9 = 2LL * ((unsigned int)a5[13] + 1);
    if ( a5[12] )
      v10 = (char *)a5 + a5[12];
    else
      v10 = 0LL;
    memcpy_0(v7, v10, 2LL * ((unsigned int)a5[13] + 1));
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int16 *, __int64, void *))(**((_QWORD **)this + 66) + 8LL))(
    *((_QWORD *)this + 66),
    a5,
    v9,
    v8);
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  return 0LL;
}
