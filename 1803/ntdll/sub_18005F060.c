/*
 * XREFs of sub_18005F060 @ 0x18005F060
 * Callers:
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_18005F008 @ 0x18005F008 (sub_18005F008.c)
 *     sub_180105B24 @ 0x180105B24 (sub_180105B24.c)
 * Callees:
 *     ZwAllocateVirtualMemoryEx @ 0x18009B930 (ZwAllocateVirtualMemoryEx.c)
 */

NTSTATUS __fastcall sub_18005F060(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG v8; // r9d
  ULONG ExtendedParameterCount; // r10d
  __int64 v10; // rax
  unsigned int v11; // eax
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  _QWORD v14[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v15[5]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  ExtendedParameterCount = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v10 = 0LL;
    v14[2] = a3;
    v14[1] = 0LL;
    ExtendedParameterCount = 1;
    v15[1] = v14;
    v15[0] = 1LL;
    if ( (v8 & 0x40000) != 0 )
      v10 = 0x100000000LL;
    v14[0] = v10;
    v11 = v8 & 0xFFFBFFFF;
    if ( (v8 & 0x40000) == 0 )
      v11 = v8;
    v8 = v11;
    if ( a8 )
    {
      v15[3] = a8;
      v15[2] = 3LL;
      ExtendedParameterCount = 2;
    }
  }
  ExtendedParameters = (MEM_EXTENDED_PARAMETER *)v15;
  if ( !ExtendedParameterCount )
    ExtendedParameters = 0LL;
  return ZwAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           RegionSize,
           v8,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount);
}
