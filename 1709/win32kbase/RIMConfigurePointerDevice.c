/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C000B1CC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00A5FA0 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C0009180 (RIMFindConfigDeviceForInput.c)
 *     WPP_RECORDER_SF_s @ 0x1C00091F4 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // esi
  __int64 v7; // rdx
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
      60,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  }
  v8 = RIMFindConfigDeviceForInput(a1, a3, v4, &v12);
  v9 = "found config device";
  if ( !v8 )
    v9 = "NO config device found";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0x13u,
    0x3Du,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    v9);
  if ( !v8
    || ((v11 = v12, *(_WORD *)(a3 + 40) != 4)
      ? (*(_DWORD *)(v12 + 184) |= 0x800u)
      : (*(_DWORD *)(v12 + 184) |= 0x400u, v6 = 2),
        result = RIMDeliverConfigRequest(v11, *(_QWORD *)(v11 + 456), 82, v6),
        *(_DWORD *)(*(_QWORD *)(v4 + 472) + 276LL) &= ~0x4000u,
        (int)result < 0) )
  {
    result = *(_QWORD *)(v4 + 472);
    *(_DWORD *)(result + 276) |= 0x4000u;
  }
  return result;
}
