/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C0037154 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0038810 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_x @ 0x1C0038B80 (WPP_RECORDER_SF_x.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0072AC0 (AcpiDiagTraceMemoryReserved.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0084A78 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0084BE4 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  int v4; // r14d
  unsigned __int8 v5; // dl
  ULONGLONG v7; // rsi
  NTSTATUS result; // eax
  char v9; // dl
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdi
  int v14; // edx
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  ULONGLONG v18; // r12
  ULONGLONG v19; // r13
  ULONG_PTR v20; // r8
  ULONGLONG v21; // rdx
  ULONGLONG v22; // r15
  unsigned __int8 v23; // cl
  ULONG_PTR v24; // r13
  int v25; // edx
  ULONGLONG v26; // rax
  unsigned __int8 v27; // al
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
      BugCheckParameter2[3],
      v9,
      BugCheckParameter2[5],
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      v10);
    return 0;
  }
  if ( !v10 )
    return 0;
  v13 = v12 + 8LL * v11;
  result = PnpiUpdateResourceList(v13, &v31);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v15 = v31;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &MaximumAddress);
      if ( result < 0 )
        return result;
      v7 = MaximumAddress;
      *(_BYTE *)(MaximumAddress + 1) = -127;
      v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
    }
    v16 = *(_WORD *)(BugCheckParameter2 + 1);
    if ( v16 < 0x2Bu )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        19,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v16);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *(_QWORD *)(BugCheckParameter2 + 30);
    v18 = *(_QWORD *)(BugCheckParameter2 + 14);
    v19 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
    v20 = *(_QWORD *)(BugCheckParameter2 + 38);
    v21 = *(_QWORD *)(BugCheckParameter2 + 22);
    Length = v20;
    v31 = (struct _IO_RESOURCE_DESCRIPTOR *)v19;
    v22 = v18 + v17;
    MaximumAddress = v21;
    if ( v17 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v18, v21, v17);
      v20 = Length;
      v21 = MaximumAddress;
    }
    v23 = BugCheckParameter2[4];
    if ( (v23 & 4) != 0 && (v23 & 8) != 0 )
    {
      v24 = v21 - v18 + 1;
      if ( v24 != v20 )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          13,
          20,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        v20 = v24;
        Length = v24;
      }
      if ( (v18 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          13,
          21,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        v20 = Length;
        v19 = 1LL;
      }
      else
      {
        v19 = (ULONGLONG)v31;
      }
    }
    if ( v20 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      WPP_RECORDER_SF_x(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        13,
        22,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v20);
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || v18 < 0xFFFFFFFF )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
      v20 = Length;
    }
    v25 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v15->u.Port.Alignment = v19;
        v15->u.Port.Length = Length;
        v26 = MaximumAddress;
        v15->u.Port.MinimumAddress.QuadPart = v18;
        v15->u.Port.MaximumAddress.QuadPart = v26;
        v15->Type = 1;
        v27 = BugCheckParameter2[5];
        if ( (v27 & 0x20) != 0 )
        {
          *(_WORD *)(v7 + 4) |= 1u;
          v27 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v7 + 8) = (v27 & 0x10 | 8u) >> 3;
        *(_QWORD *)(v7 + 12) = v22;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v15->Flags |= 0x20u;
        v15->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v15->Type = 6;
        v15->u.Port.Length = Length;
        v15->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
        v15->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
      }
      else
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          13,
          23,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v15, 3u, v20, v19, v18, MaximumAddress);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        Type = 1;
      else
        Type = v15->Type;
      *(_DWORD *)(v7 + 8) = Type;
      *(_QWORD *)(v7 + 12) = v22;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v15);
    }
    v29 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v33, v34, v15);
    if ( v29 < 0 )
      return v29;
    return v4;
  }
  return result;
}
