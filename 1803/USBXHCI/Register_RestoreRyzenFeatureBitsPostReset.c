/*
 * XREFs of Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0002380
 * Callers:
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_RestoreRyzenFeatureBitsPostReset(__int64 a1)
{
  int Ulong; // eax
  int v3; // eax
  int v4; // eax
  __int64 result; // rax
  int v6; // eax
  int v7; // eax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_i8[0] < 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      Debug_FreAssertMsg(
        "MMIO Offset 0xC100 is unexpectedly out of range",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2530LL);
    }
    else
    {
      Ulong = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, Ulong & 0xFF0FFFFF);
    }
  }
  if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_u64[0] & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC110u )
    {
      Debug_FreAssertMsg(
        "MMIO Offset 0xC10C is unexpectedly out of range",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2570LL);
    }
    else
    {
      v3 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v3 & 0xFF0FFFFF);
      v4 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL, v4 & 0xFBFFFFFF);
    }
  }
  result = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_u64[0];
  if ( (result & 0x200) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      return Debug_FreAssertMsg(
               "MMIO Offset 0xC100 is unexpectedly out of range",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
               2619LL);
    }
    else
    {
      v6 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v6 | 0xF00000u);
      Interval.QuadPart = -200LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v7 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      return XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v7 & 0xFF0FFFFF);
    }
  }
  return result;
}
