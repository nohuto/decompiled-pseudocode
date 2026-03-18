/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C008D290
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C008D364 (WPP_RECORDER_SF_s.c)
 *     RIMFindConfigDeviceForInput @ 0x1C008D440 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // esi
  int v7; // edx
  int v8; // ebx
  const char *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v4 = a2;
  v6 = 3;
  if ( (*(_DWORD *)(a2 + 184) & 0x40) == 0 )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      61,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
  }
  v8 = RIMFindConfigDeviceForInput(a1, a3, v4, &v12);
  v9 = "found config device";
  if ( !v8 )
    v9 = "NO config device found";
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    19,
    62,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    (__int64)v9);
  if ( !v8
    || ((v11 = v12, *(_WORD *)(a3 + 40) != 4)
      ? (*(_DWORD *)(v12 + 184) |= 0x800u)
      : (*(_DWORD *)(v12 + 184) |= 0x400u, v6 = 2),
        result = RIMDeliverConfigRequest(v11, *(_QWORD *)(v11 + 456), 0x52u, v6),
        *(_DWORD *)(*(_QWORD *)(v4 + 472) + 260LL) &= ~0x4000u,
        (int)result < 0) )
  {
    result = *(_QWORD *)(v4 + 472);
    *(_DWORD *)(result + 260) |= 0x4000u;
  }
  return result;
}
