/*
 * XREFs of ConnectHwpInterrupt @ 0x1C0006970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 && (*(_DWORD *)(v1 + 4) & 0x1000) != 0 )
  {
    __writemsr(0x773u, __readmsr(0x773u) & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = __readmsr(0x777u) & 0xFFFFFFFFFFFFFFFAuLL;
    v2 = HIDWORD(v7);
    __writemsr(0x777u, v7);
    v3 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      return 0;
    }
    else
    {
      v6 = v3;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_7f33b4b4f34e3b452a14a8b9740d146e_Traceguids,
        v6);
    }
  }
  else
  {
    v4 = -1073741637;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xDu,
      (__int64)&WPP_7f33b4b4f34e3b452a14a8b9740d146e_Traceguids);
  }
  return v4;
}
