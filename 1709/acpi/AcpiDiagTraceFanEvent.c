/*
 * XREFs of AcpiDiagTraceFanEvent @ 0x1C004189C
 * Callers:
 *     AcpiDiagTraceFanRundown @ 0x1C004197C (AcpiDiagTraceFanRundown.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0041A2C (AcpiDiagTraceFanStatusChange.c)
 *     ACPIFanPowerCallback @ 0x1C004DEE0 (ACPIFanPowerCallback.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceFanEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        ULONG a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rax
  __int16 v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v11[2]; // [rsp+38h] [rbp-20h] BYREF

  RtlInitUnicodeString(v11, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, a2)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(__int64 **)(a1 + 712), (__int64)v11, 1) >= 0 )
  {
    a4->Reserved = 0;
    Length = v11[0].Length;
    a4->Ptr = (unsigned __int64)&v10;
    Buffer = v11[0].Buffer;
    a4->Size = 2;
    a4[1].Reserved = 0;
    a4[1].Ptr = (unsigned __int64)Buffer;
    v10 = Length >> 1;
    a4[1].Size = 2 * (Length >> 1);
    EtwWrite(AcpiDiagHandle, a2, 0LL, a3, a4);
  }
  if ( v11[0].Buffer )
    ExFreePoolWithTag(v11[0].Buffer, 0);
}
