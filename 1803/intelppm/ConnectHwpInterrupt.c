/*
 * XREFs of ConnectHwpInterrupt @ 0x1C0006A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006E38 (IsHwpHighestInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  unsigned __int64 v8; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 && (*(_DWORD *)(v1 + 4) & 0x1000) != 0 )
  {
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpHighestInterruptSupported();
    __writemsr(0x773u, __readmsr(0x773u) & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = __readmsr(0x777u);
    LODWORD(v2) = v2 & 0xFFFFFFFA;
    v8 = v2;
    if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      LODWORD(v8) = v2 & 0xFFFFFFF7;
    v3 = HIDWORD(v8);
    __writemsr(0x777u, v8);
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      return 0;
    }
    else
    {
      v7 = v4;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_02a69d739eda39a7bc4d44b497fed4b0_Traceguids,
        v7);
    }
  }
  else
  {
    v5 = -1073741637;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xDu,
      (__int64)&WPP_02a69d739eda39a7bc4d44b497fed4b0_Traceguids);
  }
  return v5;
}
