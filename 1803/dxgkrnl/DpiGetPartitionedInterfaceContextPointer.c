/*
 * XREFs of DpiGetPartitionedInterfaceContextPointer @ 0x1C0202CC8
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02020B0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C0202490 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C0202600 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPartitionedInterfaceContextPointer(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // edx
  __int16 v7; // cx
  unsigned int v8; // eax
  bool v9; // zf
  __int64 result; // rax

  v2 = *a2 >> 1;
  v4 = 0;
  if ( !v2 )
    return a1 + 5176;
  v5 = *((_QWORD *)a2 + 1);
  do
  {
    v6 = v4;
    v7 = *(_WORD *)(v5 + 2LL * v4);
    if ( !v7 )
      break;
    ++v4;
  }
  while ( v4 < v2 );
  v8 = v6 + 1;
  if ( !v7 )
    v8 = v6;
  if ( v8 < 9 )
    return a1 + 5176;
  v9 = RtlCompareUnicodeStrings((PCWCH)(v5 + 2LL * (v8 - 9)), 9uLL, L"\\GPUPARAV", 9uLL, 1u) == 0;
  result = a1 + 5208;
  if ( !v9 )
    return a1 + 5176;
  return result;
}
