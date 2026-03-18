/*
 * XREFs of PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678
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
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressExtendedToIoDescriptor(
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
  __int64 v28; // rax
  int v29; // eax
  ULONGLONG MaximumAddress; // [rsp+40h] [rbp-10h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v31; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR Length; // [rsp+90h] [rbp+40h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h]
  unsigned int v34; // [rsp+A0h] [rbp+50h]

  v34 = a3;
  v33 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v31 = 0LL;
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
      *((_QWORD *)BugCheckParameter2 + 1),
      *((_QWORD *)BugCheckParameter2 + 2),
      *((_QWORD *)BugCheckParameter2 + 3),
      *((_QWORD *)BugCheckParameter2 + 4),
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
    if ( v16 < 0x35u )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        24,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v16);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *((_QWORD *)BugCheckParameter2 + 4);
    v18 = *((_QWORD *)BugCheckParameter2 + 2);
    v19 = *((_QWORD *)BugCheckParameter2 + 1) + 1LL;
    v20 = *((_QWORD *)BugCheckParameter2 + 5);
    v21 = *((_QWORD *)BugCheckParameter2 + 3);
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
          25,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        v20 = v24;
        Length = v24;
      }
      if ( (v18 & *((_QWORD *)BugCheckParameter2 + 1)) != 0 )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          13,
          26,
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
        27,
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
        v15->u.Port.Alignment = *((_DWORD *)BugCheckParameter2 + 4);
        v15->u.Port.MinimumAddress.LowPart = *((_DWORD *)BugCheckParameter2 + 6);
      }
      else
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          13,
          28,
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
        *(_DWORD *)(v7 + 8) = 1;
      else
        *(_DWORD *)(v7 + 8) = v15->Type;
      *(_QWORD *)(v7 + 12) = v22;
      v28 = *((_QWORD *)BugCheckParameter2 + 6);
      if ( (v28 & 0xC) != 0 )
      {
        v15->Flags |= 0x20u;
        v28 = *((_QWORD *)BugCheckParameter2 + 6);
      }
      if ( (v28 & 2) != 0 )
      {
        v15->Flags |= 8u;
        v28 = *((_QWORD *)BugCheckParameter2 + 6);
      }
      if ( (v28 & 6) != 0 )
        v15->Flags |= 4u;
      if ( (BugCheckParameter2[5] & 1) == 0 )
        v15->Flags |= 1u;
    }
    v29 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v33, v34, v15);
    if ( v29 < 0 )
      return v29;
    return v4;
  }
  return result;
}
