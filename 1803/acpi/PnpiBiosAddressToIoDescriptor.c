/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C008503C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C0037154 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0038810 (PnpiBiosValidateMemoryMapAttribute.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0072AC0 (AcpiDiagTraceMemoryReserved.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0084A78 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0084BE4 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // dl
  __int64 v7; // rbp
  __int64 result; // rax
  char v9; // dl
  unsigned __int16 v10; // cx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  unsigned __int16 v15; // ax
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r12
  unsigned int v19; // r13d
  int v20; // r15d
  unsigned __int16 v21; // cx
  unsigned __int8 v22; // al
  int v23; // r15d
  int v24; // edx
  unsigned __int8 v25; // al
  NTSTATUS v26; // eax
  unsigned __int16 v27; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v9,
      BugCheckParameter2[5],
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((unsigned __int16 *)BugCheckParameter2 + 4),
      *((unsigned __int16 *)BugCheckParameter2 + 5),
      *((unsigned __int16 *)BugCheckParameter2 + 6),
      v10);
    return 0LL;
  }
  if ( !v10 )
    return 0LL;
  v13 = v12 + 8LL * v11;
  result = PnpiUpdateResourceList(v13, &v28);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v14 = v28;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v29);
      if ( (int)result < 0 )
        return result;
      v7 = v29;
      *(_BYTE *)(v29 + 1) = -127;
      v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    v15 = *(_WORD *)(BugCheckParameter2 + 1);
    v16 = 13;
    if ( v15 < 0xDu )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        13,
        11,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v15);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *((_WORD *)BugCheckParameter2 + 6);
    v18 = *((_WORD *)BugCheckParameter2 + 4);
    v19 = *((unsigned __int16 *)BugCheckParameter2 + 7);
    v20 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
    LODWORD(v28) = v20;
    v27 = v17 + v18;
    v21 = *((_WORD *)BugCheckParameter2 + 5);
    LOWORD(v29) = v21;
    if ( v17 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v18, v21, v17);
      v21 = v29;
      v16 = 13;
    }
    v22 = BugCheckParameter2[4];
    if ( (v22 & 4) != 0 && (v22 & 8) != 0 )
    {
      v23 = v21 - v18 + 1;
      if ( v23 != v19 )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          13,
          12,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        v19 = v23;
      }
      if ( (v18 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          13,
          13,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        v20 = 1;
      }
      else
      {
        v20 = (int)v28;
      }
    }
    v24 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v14->u.Port.Alignment = v20;
        v14->u.Port.Length = v19;
        v14->u.Port.MinimumAddress.LowPart = v18;
        v14->u.Port.MaximumAddress.LowPart = (unsigned __int16)v29;
        v14->u.Port.MaximumAddress.HighPart = 0;
        v14->u.Port.MinimumAddress.HighPart = 0;
        v14->Type = 1;
        v25 = BugCheckParameter2[5];
        if ( (v25 & 0x20) != 0 )
        {
          *(_WORD *)(v7 + 4) |= 1u;
          v25 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v7 + 8) = (v25 & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v27;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v14->Flags |= 0x20u;
        v14->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v14->Type = 6;
        v14->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
        v14->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
        v14->u.Port.Length = v19;
      }
      else
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          13,
          14,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v14->u.Port.Alignment = v20;
      v14->u.Port.Length = v19;
      v14->u.Port.MinimumAddress.LowPart = v18;
      v14->u.Port.MaximumAddress.LowPart = (unsigned __int16)v29;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v27;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
      v14->u.Port.Alignment = 1;
    }
    v26 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v30, v31, v14);
    if ( v26 < 0 )
      return (unsigned int)v26;
    return v4;
  }
  return result;
}
