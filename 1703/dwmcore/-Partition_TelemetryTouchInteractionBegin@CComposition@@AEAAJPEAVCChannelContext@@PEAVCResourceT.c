/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180004974
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180002938 (-VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4,
        _WORD *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  char *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( a6 - 32 > 0xA8 )
  {
    v14 = 1619;
LABEL_15:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v14);
    return v6;
  }
  if ( !TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    v14 = 1624;
    goto LABEL_15;
  }
  if ( !a5 )
  {
    v14 = 1631;
    goto LABEL_15;
  }
  v8 = operator new(saturated_mul((unsigned __int16)a5[13] + 1LL, 2uLL));
  v9 = v8;
  v10 = 0LL;
  if ( v8 )
  {
    v11 = (unsigned __int16)a5[13];
    v10 = 2 * v11 + 2;
    if ( a5[12] )
      v12 = (char *)a5 + (unsigned __int16)a5[12];
    else
      v12 = 0LL;
    memcpy_0(v8, v12, 2 * v11 + 2);
  }
  (*(void (__fastcall **)(_QWORD, _WORD *, __int64, void *))(**((_QWORD **)this + 70) + 8LL))(
    *((_QWORD *)this + 70),
    a5,
    v10,
    v9);
  if ( v9 )
    WPF::ProcessHeapImpl::Free(v9);
  return v6;
}
