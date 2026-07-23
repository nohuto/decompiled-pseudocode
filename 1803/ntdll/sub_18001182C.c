/*
 * XREFs of sub_18001182C @ 0x18001182C
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18005EF74 @ 0x18005EF74 (sub_18005EF74.c)
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 * Callees:
 *     sub_18005E47C @ 0x18005E47C (sub_18005E47C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemoryEx @ 0x18009B930 (ZwAllocateVirtualMemoryEx.c)
 *     sub_180102438 @ 0x180102438 (sub_180102438.c)
 */

__int64 __fastcall sub_18001182C(
        PVOID *BaseAddress,
        ULONG_PTR *a2,
        int a3,
        int a4,
        ULONG PageProtection,
        __int128 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v8; // edi
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r8
  ULONG ExtendedParameterCount; // ecx
  ULONG v14; // r9d
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  NTSTATUS v16; // ebx
  ULONG_PTR v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h]
  __int64 v23; // [rsp+50h] [rbp-31h]
  __int128 v24; // [rsp+58h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-9h] BYREF
  int v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+84h] [rbp+3h]

  RegionSize = 0x100000001000LL;
  v7 = *a6;
  v26 = 0x200000;
  v27 = 0x40000000;
  v8 = a4 & 0xFEFFFFFF;
  v24 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v11 = *a2;
    if ( (a4 & 0x2000) != 0 )
    {
      v20 = *((unsigned int *)&RegionSize + BYTE1(v24));
      v12 = v20 - ((v11 + v20 - 1) & (unsigned int)(v20 - 1)) + v11 - 1;
    }
    else
    {
      v12 = v11 - ((v11 - 1) & 0xFFF) + 4095;
    }
    RegionSize = v12;
    if ( (a4 & 0x1000) != 0 && BYTE1(v24) >= 2u )
    {
      *a2 = v12;
      goto LABEL_12;
    }
    if ( (a4 & 0x2000) != 0 && (v24 & 8) != 0 )
      v8 = a4 & 0xFEFBFFFF | 0x40000;
    ExtendedParameterCount = 0;
    v14 = v8 & 0xBFFFFFFF;
    if ( (v8 & 0x2000) != 0 )
    {
      v23 = 0LL;
      *(_QWORD *)&v24 = 1LL;
      v21 = 0LL;
      v22 = 0LL;
      ExtendedParameterCount = 1;
      *((_QWORD *)&v24 + 1) = &v21;
      if ( (v8 & 0x40000) != 0 )
      {
        v14 = v8 & 0xBFFBFFFF;
        v21 = 0x100000000LL;
      }
    }
    ExtendedParameters = (MEM_EXTENDED_PARAMETER *)&v24;
    if ( !ExtendedParameterCount )
      ExtendedParameters = 0LL;
    v16 = ZwAllocateVirtualMemoryEx(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            &RegionSize,
            v14,
            PageProtection,
            ExtendedParameters,
            ExtendedParameterCount);
    if ( v16 >= 0 )
    {
      *a2 = RegionSize;
LABEL_12:
      v16 = 0;
    }
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    if ( BYTE3(v24) )
      LODWORD(v21) = BYTE3(v24) - 1;
    else
      LODWORD(v21) = -1;
    HIDWORD(v21) = BYTE1(v24);
    LODWORD(v22) = BYTE2(v24);
    if ( (v24 & 8) != 0 )
      HIDWORD(v22) |= 1u;
    v18 = *a2;
    v23 = *((_QWORD *)&v24 + 1);
    RegionSize = v18 - ((v18 - 1) & 0xFFFFF) + 0xFFFFF;
    v19 = (void *)sub_18005E47C((unsigned int)&unk_18015D880, (unsigned int)&RegionSize, a3, (unsigned int)&v21, a7);
    if ( v19 )
    {
      *a2 = RegionSize;
      *BaseAddress = v19;
      goto LABEL_12;
    }
    v16 = -1073741670;
  }
  if ( (byte_18015D028 & 8) != 0 )
    sub_180102438(v8, *a2, *BaseAddress, (unsigned int)v16);
  return (unsigned int)v16;
}
