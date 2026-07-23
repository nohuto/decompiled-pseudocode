/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140720908
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  LONGLONG QuadPart; // r14
  __int64 (__fastcall *v8)(); // rax
  NTSTATUS v9; // ecx
  __int64 (__fastcall *v10)(); // rax
  LONGLONG v12; // [rsp+30h] [rbp-28h] BYREF
  LONGLONG v13[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)PerformanceOrAuxiliaryCounterValue & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&PerformanceOrAuxiliaryCounterValue[1] > 0x7FFFFFFF0000LL
      || &PerformanceOrAuxiliaryCounterValue[1] < PerformanceOrAuxiliaryCounterValue )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    QuadPart = PerformanceOrAuxiliaryCounterValue->QuadPart;
    ProbeForWrite(ConvertedValue, 8uLL, 4u);
    if ( ConversionError )
      ProbeForWrite(ConversionError, 8uLL, 4u);
    v8 = off_14033B638[0];
    if ( !ConvertAuxiliaryToPerformanceCounter )
      v8 = off_14033B630[0];
    v9 = ((__int64 (__fastcall *)(LONGLONG, LONGLONG *, LONGLONG *))v8)(QuadPart, &v12, v13);
    if ( v9 >= 0 )
    {
      ConvertedValue->QuadPart = v12;
      if ( ConversionError )
        *ConversionError = (LARGE_INTEGER)v13[0];
    }
  }
  else
  {
    v10 = off_14033B638[0];
    if ( !ConvertAuxiliaryToPerformanceCounter )
      v10 = off_14033B630[0];
    return ((__int64 (__fastcall *)(LONGLONG, PLARGE_INTEGER, PLARGE_INTEGER))v10)(
             PerformanceOrAuxiliaryCounterValue->QuadPart,
             ConvertedValue,
             ConversionError);
  }
  return v9;
}
