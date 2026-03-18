/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180013C4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180014F6C (-VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014A1A4 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  __int64 v7; // r9
  void *v8; // rax
  void *v9; // rbp
  __int64 v10; // rsi
  char *v11; // rdx

  if ( a6 - 32 > 0xA8 )
  {
    CComposition::FailFastOnMalformedPacket(this, 4160689699LL, 0LL, a4);
    JUMPOUT(0x18012D2C0LL);
  }
  if ( !TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    CComposition::FailFastOnMalformedPacket(this, 4160689699LL, 0LL, v7);
    __debugbreak();
  }
  if ( !a5 )
  {
    CComposition::FailFastOnMalformedPacket(this, 4160689699LL, 0LL, v7);
    __debugbreak();
  }
  v8 = operator new(saturated_mul((unsigned int)a5[13] + 1, 2uLL));
  v9 = v8;
  v10 = 0LL;
  if ( v8 )
  {
    v10 = 2LL * ((unsigned int)a5[13] + 1);
    if ( a5[12] )
      v11 = (char *)a5 + a5[12];
    else
      v11 = 0LL;
    memcpy_0(v8, v11, 2LL * ((unsigned int)a5[13] + 1));
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int16 *, __int64, void *))(**((_QWORD **)this + 69) + 8LL))(
    *((_QWORD *)this + 69),
    a5,
    v10,
    v9);
  if ( v9 )
    operator delete(v9);
  return 0LL;
}
