/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C008B758
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

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
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
  __int64 v14; // rdi
  unsigned __int16 v15; // ax
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r15
  int v19; // r13d
  int v20; // r12d
  unsigned __int16 v21; // cx
  unsigned __int8 v22; // al
  int v23; // r12d
  int v24; // edx
  int v25; // eax
  __int16 v26; // ax
  int v27; // ecx
  int v28; // r8d
  char v29; // [rsp+30h] [rbp-58h]
  unsigned __int16 v30; // [rsp+40h] [rbp-48h]
  _QWORD v31[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h]
  unsigned int v34; // [rsp+A0h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v32 = 0LL;
  v31[0] = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v26 = *(_WORD *)(v9 + 14);
    v27 = *(unsigned __int16 *)(v9 + 12);
    v28 = *((unsigned __int16 *)BugCheckParameter2 + 5);
    v29 = v27;
    LOBYTE(v27) = BugCheckParameter2[3];
    LOBYTE(v28) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v27,
      v8,
      v28,
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((_WORD *)BugCheckParameter2 + 4),
      *((_WORD *)BugCheckParameter2 + 5),
      v29,
      v26);
    return 0LL;
  }
  if ( !*(_WORD *)(v9 + 14) )
    return 0LL;
  v12 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v12, v31);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] <= 1u )
  {
    result = PnpiUpdateResourceList(v12, &v32);
    if ( (int)result < 0 )
      return result;
    v7 = v32;
    *(_BYTE *)(v32 + 1) = -127;
    v14 = v7 - 32;
    *(_WORD *)(v7 + 4) = 24576;
    *(_DWORD *)(v7 + 16) = 0;
  }
  else
  {
    v14 = v31[0];
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
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
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
  LODWORD(v31[0]) = v20;
  v30 = v17 + v18;
  v21 = *((_WORD *)BugCheckParameter2 + 5);
  LOWORD(v32) = v21;
  if ( v17 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v18, v21, v17);
    v21 = v32;
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
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
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
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
      v20 = 1;
    }
    else
    {
      v20 = v31[0];
    }
  }
  v24 = BugCheckParameter2[3];
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      *(_DWORD *)(v14 + 12) = v20;
      *(_DWORD *)(v14 + 8) = v19;
      *(_DWORD *)(v14 + 16) = v18;
      *(_DWORD *)(v14 + 24) = (unsigned __int16)v32;
      *(_DWORD *)(v14 + 28) = 0;
      *(_DWORD *)(v14 + 20) = 0;
      *(_BYTE *)(v14 + 1) = 1;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_WORD *)(v7 + 4) |= 1u;
      *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
      *(_DWORD *)(v7 + 12) = v30;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        *(_WORD *)(v14 + 4) |= 0x20u;
      *(_DWORD *)(v14 + 12) = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      *(_BYTE *)(v14 + 1) = 6;
      *(_DWORD *)(v14 + 12) = *((unsigned __int16 *)BugCheckParameter2 + 4);
      *(_DWORD *)(v14 + 16) = *((unsigned __int16 *)BugCheckParameter2 + 5);
      *(_DWORD *)(v14 + 8) = v19;
    }
    else
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v24,
        13,
        14,
        (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    *(_DWORD *)(v14 + 12) = v20;
    *(_DWORD *)(v14 + 8) = v19;
    *(_DWORD *)(v14 + 16) = v18;
    *(_DWORD *)(v14 + 24) = (unsigned __int16)v32;
    *(_DWORD *)(v14 + 28) = 0;
    *(_DWORD *)(v14 + 20) = 0;
    *(_BYTE *)(v14 + 1) = 3;
    *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v7 + 12) = v30;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v14, 1LL);
    *(_DWORD *)(v14 + 12) = 1;
  }
  v25 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v33, v34, v14);
  if ( v25 < 0 )
    return (unsigned int)v25;
  return v4;
}
