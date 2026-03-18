/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0007DF0 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C0056288 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C008CE3C (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C008D8B4 (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C008D930 (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C009AD40 (AcpiDiagTraceMemoryReserved.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // dl
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 result; // rax
  int v14; // edx
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // r14
  unsigned int v21; // r12d
  unsigned __int8 v22; // al
  unsigned int v23; // r15d
  int v24; // edx
  unsigned int v25; // eax
  NTSTATUS v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  char v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v33; // [rsp+48h] [rbp-40h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]

  v36 = a3;
  v35 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v28 = *(_DWORD *)(v9 + 22);
    v29 = *(_DWORD *)(v9 + 18);
    v30 = *(_DWORD *)(BugCheckParameter2 + 14);
    v31 = v29;
    LOBYTE(v29) = BugCheckParameter2[3];
    LOBYTE(v30) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v29,
      v8,
      v30,
      *(_DWORD *)(BugCheckParameter2 + 6),
      *(_DWORD *)(BugCheckParameter2 + 10),
      *(_DWORD *)(BugCheckParameter2 + 14),
      v31,
      v28);
    return 0LL;
  }
  if ( !*(_DWORD *)(v9 + 22) )
    return 0LL;
  v12 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v12, &v33);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v15 = v33;
  }
  else
  {
    result = PnpiUpdateResourceList(v12, &v34);
    if ( (int)result < 0 )
      return result;
    v7 = v34;
    *(_BYTE *)(v34 + 1) = -127;
    v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
    *(_WORD *)(v7 + 4) = 24576;
    *(_DWORD *)(v7 + 16) = 0;
  }
  v16 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v16 < 0x17u )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      13,
      15,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
      v16);
    KeBugCheckEx(
      0xA5u,
      0xFuLL,
      (ULONG_PTR)BugCheckParameter2,
      *BugCheckParameter2,
      *(unsigned __int16 *)(BugCheckParameter2 + 1));
  }
  v17 = *(unsigned int *)(BugCheckParameter2 + 18);
  v18 = *(unsigned int *)(BugCheckParameter2 + 14);
  v19 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
  v20 = *(unsigned int *)(BugCheckParameter2 + 10);
  v21 = *(_DWORD *)(BugCheckParameter2 + 22);
  LODWORD(v33) = v19;
  LODWORD(v34) = v18;
  v32 = v20 + v17;
  if ( (_DWORD)v17 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v20, v18, v17);
    LODWORD(v18) = v34;
  }
  v22 = BugCheckParameter2[4];
  if ( (v22 & 4) != 0 && (v22 & 8) != 0 )
  {
    v23 = v18 - v20 + 1;
    if ( v23 != v21 )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        13,
        16,
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
      v21 = v23;
    }
    if ( ((unsigned int)v20 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        13,
        17,
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
      v19 = 1;
    }
    else
    {
      v19 = (int)v33;
    }
  }
  v24 = BugCheckParameter2[3];
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v27 = v34;
      v15->u.Port.Alignment = v19;
      v15->u.Port.Length = v21;
      v15->u.Port.MinimumAddress.LowPart = v20;
      v15->u.Port.MaximumAddress.QuadPart = v27;
      v15->u.Port.MinimumAddress.HighPart = 0;
      v15->Type = 1;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_WORD *)(v7 + 4) |= 1u;
      *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
      *(_DWORD *)(v7 + 12) = v32;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v15->Flags |= 0x20u;
      v15->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v15->Type = 6;
      v15->u.Port.Length = v21;
      v15->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
      v15->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
    }
    else
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v24,
        13,
        18,
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    v25 = v34;
    v15->u.Port.Alignment = v19;
    v15->u.Port.Length = v21;
    v15->u.Port.MinimumAddress.LowPart = v20;
    v15->u.Port.MaximumAddress.LowPart = v25;
    v15->u.Port.MaximumAddress.HighPart = 0;
    v15->u.Port.MinimumAddress.HighPart = 0;
    v15->Type = 3;
    *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v7 + 12) = v32;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v15, 1LL);
    v15->u.Port.Alignment = 1;
  }
  v26 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v35, v36, v15);
  if ( v26 < 0 )
    return (unsigned int)v26;
  return v4;
}
