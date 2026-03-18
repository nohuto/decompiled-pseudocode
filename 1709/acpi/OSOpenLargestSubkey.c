/*
 * XREFs of OSOpenLargestSubkey @ 0x1C00A4770
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A4004 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     OSOpenUnicodeHandle @ 0x1C008786C (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenLargestSubkey(HANDLE KeyHandle, _QWORD *a2, ULONG a3)
{
  ULONG v3; // r13d
  _QWORD *v4; // r12
  void *v6; // rdi
  ULONG v7; // r14d
  unsigned __int16 *PoolWithTag; // rsi
  NTSTATUS v10; // ebx
  int v11; // r12d
  ULONG ResultLength; // [rsp+34h] [rbp-1Ch] BYREF
  void *v13; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v13 = 0LL;
  Value = 0;
  v6 = 0LL;
  v7 = 0;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x4D706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x200u, &ResultLength);
  if ( v10 >= 0 )
  {
    v11 = 0;
    do
    {
      String.Length = PoolWithTag[6];
      String.MaximumLength = PoolWithTag[6];
      String.Buffer = PoolWithTag + 8;
      RtlUnicodeStringToInteger(&String, 0x10u, &Value);
      if ( (!v13 || Value > v7) && (int)OSOpenUnicodeHandle(&String, KeyHandle, &v13) >= 0 )
      {
        if ( v6 )
          ZwClose(v6);
        v6 = v13;
        v7 = Value;
      }
      v10 = ZwEnumerateKey(KeyHandle, ++v11, KeyBasicInformation, PoolWithTag, 0x200u, &ResultLength);
    }
    while ( v10 >= 0 );
    v4 = a2;
    v3 = a3;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v6 )
    return (unsigned int)v10;
  if ( v7 >= v3 )
  {
    *v4 = v6;
    return 0LL;
  }
  else
  {
    ZwClose(v6);
    return 3221225561LL;
  }
}
