/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C001DC08
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C001D4AC (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000148C (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     GetProcessorEfficiencyClass @ 0x1C001E6F4 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  int v3; // eax
  unsigned int i; // ecx
  unsigned int v5; // r10d
  __int64 v7[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF

  qword_1C0019B58 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v7);
  ResetEnumerationContext(v7);
  v0 = &qword_1C0019B58;
  if ( (unsigned int)EnumerateNextDevice((__int64)v7, &v9) )
  {
LABEL_6:
    v3 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v0 )
        break;
      ++v3;
      v0 = (__int64 *)((char *)v0 + 4);
    }
    dword_1C0019B54 = v3;
    return 0;
  }
  while ( 1 )
  {
    v1 = v9;
    if ( (*(_QWORD *)(v9 + 264) & 0x2000000000LL) != 0 )
      break;
LABEL_5:
    if ( (unsigned int)EnumerateNextDevice((__int64)v7, &v9) )
      goto LABEL_6;
  }
  if ( (int)GetProcessorEfficiencyClass(v9, &v8) >= 0 )
  {
    v2 = v8;
    *(_BYTE *)(v1 + 352) = v8;
    ++*((_DWORD *)&qword_1C0019B58 + v2);
    goto LABEL_5;
  }
  InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v7);
  ResetEnumerationContext(v7);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v7, &v9) )
  {
    if ( (*(_QWORD *)(v9 + 264) & 0x2000000000LL) != 0 )
      *(_BYTE *)(v9 + 352) = 0;
  }
  dword_1C0019B54 = 1;
  qword_1C0019B58 = 0LL;
  LODWORD(qword_1C0019B58) = dword_1C00195D4;
  return v5;
}
