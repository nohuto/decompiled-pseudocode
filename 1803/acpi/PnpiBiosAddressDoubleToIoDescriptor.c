/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334
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

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
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
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rdi
  unsigned __int16 v16; // ax
  int v17; // r15d
  unsigned int v18; // r14d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned __int8 v21; // al
  int v22; // r8d
  int v23; // edx
  unsigned __int8 v24; // al
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+44h] [rbp-44h]
  _QWORD v29[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v30 = 0LL;
  v29[0] = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v9,
      BugCheckParameter2[5],
      *(unsigned int *)(BugCheckParameter2 + 6),
      *(unsigned int *)(BugCheckParameter2 + 10),
      *(unsigned int *)(BugCheckParameter2 + 14),
      *(unsigned int *)(BugCheckParameter2 + 18),
      v10);
    return 0LL;
  }
  if ( !v10 )
    return 0LL;
  v13 = v12 + 8LL * v11;
  result = PnpiUpdateResourceList(v13, v29);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v15 = v29[0];
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v30);
      if ( (int)result < 0 )
        return result;
      v7 = v30;
      *(_BYTE *)(v30 + 1) = -127;
      v15 = v7 - 32;
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
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v16);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *(_DWORD *)(BugCheckParameter2 + 22);
    v18 = *(_DWORD *)(BugCheckParameter2 + 10);
    LODWORD(v30) = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v19 = *(_DWORD *)(BugCheckParameter2 + 18);
    v28 = v17;
    LODWORD(v29[0]) = v18 + v19;
    v20 = *(_DWORD *)(BugCheckParameter2 + 14);
    v27 = v20;
    if ( v19 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v18, v20, v19);
      v20 = v27;
    }
    v21 = BugCheckParameter2[4];
    if ( (v21 & 4) == 0 || (v21 & 8) == 0 )
      goto LABEL_24;
    v17 = v20 - v18 + 1;
    if ( v17 == v28 )
    {
      v17 = v28;
    }
    else
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        16,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
    }
    if ( (v18 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        17,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
      v22 = 1;
    }
    else
    {
LABEL_24:
      v22 = v30;
    }
    v23 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        *(_DWORD *)(v15 + 12) = v22;
        *(_DWORD *)(v15 + 8) = v17;
        *(_DWORD *)(v15 + 16) = v18;
        *(_QWORD *)(v15 + 24) = v27;
        *(_DWORD *)(v15 + 20) = 0;
        *(_BYTE *)(v15 + 1) = 1;
        v24 = BugCheckParameter2[5];
        if ( (v24 & 0x20) != 0 )
        {
          *(_WORD *)(v7 + 4) |= 1u;
          v24 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v7 + 8) = (v24 & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v29[0];
        if ( (BugCheckParameter2[4] & 2) == 0 )
          *(_WORD *)(v15 + 4) |= 0x20u;
        *(_DWORD *)(v15 + 12) = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        *(_BYTE *)(v15 + 1) = 6;
        *(_DWORD *)(v15 + 8) = v17;
        *(_DWORD *)(v15 + 12) = *(_DWORD *)(BugCheckParameter2 + 10);
        *(_DWORD *)(v15 + 16) = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else
      {
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          13,
          18,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      *(_DWORD *)(v15 + 12) = v22;
      *(_DWORD *)(v15 + 8) = v17;
      *(_DWORD *)(v15 + 16) = v18;
      *(_DWORD *)(v15 + 24) = v27;
      *(_DWORD *)(v15 + 28) = 0;
      *(_DWORD *)(v15 + 20) = 0;
      *(_BYTE *)(v15 + 1) = 3;
      v25 = v29[0];
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v25;
      PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v15);
      *(_DWORD *)(v15 + 12) = 1;
    }
    v26 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v31, v32, v15);
    if ( v26 < 0 )
      return (unsigned int)v26;
    return v4;
  }
  return result;
}
