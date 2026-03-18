/*
 * XREFs of DpiGetPartitionedInterfaceContextPointer @ 0x1C01E49C8
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C01E3EA0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C01E4190 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C01E4300 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPartitionedInterfaceContextPointer(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r10
  bool v6; // zf
  __int64 result; // rax

  v2 = *a2 >> 1;
  v4 = 0;
  if ( !v2 )
    return a1 + 5104;
  v5 = *((_QWORD *)a2 + 1);
  do
  {
    if ( !*(_WORD *)(v5 + 2LL * v4) )
      break;
    ++v4;
  }
  while ( v4 < v2 );
  if ( v4 < 9 )
    return a1 + 5104;
  v6 = RtlCompareUnicodeStrings((PCWCH)(v5 + 2LL * (v4 - 9)), 9uLL, L"\\GPUPARAV", 9uLL, 1u) == 0;
  result = a1 + 5136;
  if ( !v6 )
    return a1 + 5104;
  return result;
}
