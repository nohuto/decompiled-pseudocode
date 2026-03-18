/*
 * XREFs of ScsiInquiryRequest @ 0x1C00084D0
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     FormInquiryStandardData @ 0x1C0007B20 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C0007DE4 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008074 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryBlockLimitsData @ 0x1C00082D0 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C00083D4 (FormInquiryBlockProvisioningData.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v8; // r15
  _DWORD *v9; // r14
  void *v10; // rcx
  unsigned int *v11; // rax
  unsigned int v12; // ebx
  size_t v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    v8 = (_DWORD *)(a2 + 16);
    v9 = (_DWORD *)(a2 + 60);
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v10 = *(void **)(a2 + 64);
      v11 = (unsigned int *)(a2 + 60);
    }
    else
    {
      v10 = *(void **)(a2 + 24);
      v11 = (unsigned int *)(a2 + 16);
    }
    v12 = 0;
    if ( v10 )
    {
      v13 = *v11;
      if ( (_DWORD)v13 )
      {
        if ( (v13 & 3) != 0 )
        {
          memset(v10, 0, v13);
        }
        else
        {
          v14 = (unsigned int)v13 >> 2;
          if ( v14 )
            memset(v10, 0, 4LL * v14);
        }
      }
    }
    if ( *(_BYTE *)(a3 + 2) )
    {
      switch ( *(unsigned __int8 *)(a3 + 2) )
      {
        case 0x80u:
          return (unsigned int)FormInquirySerialNumberData(a1, v5, a3);
        case 0x83u:
          return (unsigned int)FormInquiryDeviceIdentifiersData(a1, v5);
        case 0xB0u:
          return (unsigned int)FormInquiryBlockLimitsData(a1, v5, a3, a4);
      }
      if ( *(unsigned __int8 *)(a3 + 2) != 177 )
      {
        if ( *(unsigned __int8 *)(a3 + 2) == 178 )
          return (unsigned int)FormInquiryBlockProvisioningData(a1, v5, a3, a4);
LABEL_33:
        LOBYTE(a4) = 36;
        LOBYTE(a2) = 6;
        NVMeSetSenseData(v5, a2, a3, a4);
        return (unsigned int)-1056964602;
      }
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v15 = *(_QWORD *)(v5 + 64);
        v16 = 60LL;
      }
      else
      {
        v15 = *(_QWORD *)(v5 + 24);
        v16 = 16LL;
      }
      if ( *(_DWORD *)(v16 + v5) < 8u )
        goto LABEL_33;
      *(_BYTE *)(v15 + 7) &= 0xF0u;
      *(_WORD *)v15 = -20224;
      *(_WORD *)(v15 + 3) = 60;
      *(_BYTE *)(v15 + 5) = 1;
    }
    else
    {
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v17 = *(_QWORD *)(v5 + 64);
      }
      else
      {
        v17 = *(_QWORD *)(v5 + 24);
        v9 = v8;
      }
      if ( *v9 < 0xBu )
        goto LABEL_33;
      *(_WORD *)v17 = 0;
      *(_DWORD *)(v17 + 3) = -2088763386;
      *(_WORD *)(v17 + 7) = -20048;
      *(_BYTE *)(v17 + 9) = -78;
      *v9 = 11;
    }
    *(_BYTE *)(v5 + 3) = 1;
    return v12;
  }
  if ( *(_BYTE *)(a3 + 2) )
    goto LABEL_33;
  return (unsigned int)FormInquiryStandardData(a1, a2);
}
