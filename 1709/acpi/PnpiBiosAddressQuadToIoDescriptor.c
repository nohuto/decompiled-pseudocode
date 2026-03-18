/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A557C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0011FA0 (PnpiBiosValidateMemoryMapAttribute.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C0056E78 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_x @ 0x1C0057BB8 (WPP_RECORDER_SF_x.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C008EC08 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C008F680 (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C008F6FC (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C009DD30 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  int v4; // r14d
  unsigned __int8 v5; // dl
  ULONGLONG v7; // rsi
  int result; // eax
  char v9; // dl
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdi
  int v14; // edx
  int v15; // r8d
  struct _IO_RESOURCE_DESCRIPTOR *v16; // rdi
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  ULONGLONG v19; // r12
  ULONGLONG v20; // r13
  ULONG_PTR v21; // r8
  ULONGLONG v22; // rdx
  ULONGLONG v23; // r15
  unsigned __int8 v24; // cl
  ULONG_PTR v25; // r13
  int v26; // edx
  ULONGLONG v27; // rax
  int Type; // eax
  NTSTATUS v29; // eax
  ULONGLONG MaximumAddress; // [rsp+40h] [rbp-10h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v31; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR Length; // [rsp+90h] [rbp+40h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h]
  unsigned int v34; // [rsp+A0h] [rbp+50h]

  v34 = a3;
  v33 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  MaximumAddress = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      *(_BYTE *)(v10 + 3),
      v9,
      *(_BYTE *)(v10 + 5),
      *(_QWORD *)(v10 + 6),
      *(_QWORD *)(v10 + 14),
      *(_QWORD *)(v10 + 22),
      *(_QWORD *)(v10 + 30),
      *(_QWORD *)(v10 + 38));
    return 0;
  }
  if ( !*(_QWORD *)(v10 + 38) )
    return 0;
  v13 = v12 + 8LL * v11;
  result = PnpiUpdateResourceList(v13, &v31, v11);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v16 = v31;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &MaximumAddress, v15);
      if ( result < 0 )
        return result;
      v7 = MaximumAddress;
      *(_BYTE *)(MaximumAddress + 1) = -127;
      v16 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
    }
    v17 = *(_WORD *)(BugCheckParameter2 + 1);
    if ( v17 < 0x2Bu )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        19,
        (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids,
        v17);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v18 = *(_QWORD *)(BugCheckParameter2 + 30);
    v19 = *(_QWORD *)(BugCheckParameter2 + 14);
    v20 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
    v21 = *(_QWORD *)(BugCheckParameter2 + 38);
    v22 = *(_QWORD *)(BugCheckParameter2 + 22);
    Length = v21;
    v31 = (struct _IO_RESOURCE_DESCRIPTOR *)v20;
    v23 = v19 + v18;
    MaximumAddress = v22;
    if ( v18 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v19, v22, v18);
      v21 = Length;
      v22 = MaximumAddress;
    }
    v24 = BugCheckParameter2[4];
    if ( (v24 & 4) != 0 && (v24 & 8) != 0 )
    {
      v25 = v22 - v19 + 1;
      if ( v25 != v21 )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          13,
          20,
          (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids);
        v21 = v25;
        Length = v25;
      }
      if ( (v19 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          13,
          21,
          (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids);
        v21 = Length;
        v20 = 1LL;
      }
      else
      {
        v20 = (ULONGLONG)v31;
      }
    }
    if ( v21 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      WPP_RECORDER_SF_x(
        WPP_GLOBAL_Control->DeviceExtension,
        v22,
        13,
        22,
        (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids,
        v21);
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || v19 < 0xFFFFFFFF )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
      v21 = Length;
    }
    v26 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v16->u.Port.Alignment = v20;
        v16->u.Port.Length = Length;
        v27 = MaximumAddress;
        v16->u.Port.MinimumAddress.QuadPart = v19;
        v16->u.Port.MaximumAddress.QuadPart = v27;
        v16->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_QWORD *)(v7 + 12) = v23;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v16->Flags |= 0x20u;
        v16->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v16->Type = 6;
        v16->u.Port.Length = Length;
        v16->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
        v16->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
      }
      else
      {
        LOBYTE(v26) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          13,
          23,
          (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v16, 3u, v21, v20, v19, MaximumAddress);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        Type = 1;
      else
        Type = v16->Type;
      *(_DWORD *)(v7 + 8) = Type;
      *(_QWORD *)(v7 + 12) = v23;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v16);
    }
    v29 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v33, v34, v16);
    if ( v29 < 0 )
      return v29;
    return v4;
  }
  return result;
}
