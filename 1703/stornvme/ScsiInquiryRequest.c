/*
 * XREFs of ScsiInquiryRequest @ 0x1C0007C5C
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 * Callees:
 *     FormInquiryStandardData @ 0x1C00073E0 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C0007694 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0007810 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryBlockLimitsData @ 0x1C0007A74 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0007B64 (FormInquiryBlockProvisioningData.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  void *v8; // rcx
  unsigned int *v9; // rax
  unsigned int v10; // ebx
  size_t v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rcx

  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v8 = *(void **)(a2 + 64);
      v9 = (unsigned int *)(a2 + 60);
    }
    else
    {
      v8 = *(void **)(a2 + 24);
      v9 = (unsigned int *)(a2 + 16);
    }
    v10 = 0;
    if ( v8 )
    {
      v11 = *v9;
      if ( (_DWORD)v11 )
      {
        if ( (v11 & 3) != 0 )
        {
          memset(v8, 0, v11);
        }
        else
        {
          v12 = (unsigned int)v11 >> 2;
          if ( v12 )
            memset(v8, 0, 4LL * v12);
        }
      }
    }
    if ( *(_BYTE *)(a3 + 2) )
    {
      switch ( *(unsigned __int8 *)(a3 + 2) )
      {
        case 0x80u:
          return (unsigned int)FormInquirySerialNumberData(a1, v5);
        case 0x83u:
          return (unsigned int)FormInquiryDeviceIdentifiersData(a1, v5);
        case 0xB0u:
          return (unsigned int)FormInquiryBlockLimitsData(a1, v5);
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
        v13 = *(_QWORD *)(v5 + 64);
        v14 = (_DWORD *)(v5 + 60);
      }
      else
      {
        v13 = *(_QWORD *)(v5 + 24);
        v14 = (_DWORD *)(v5 + 16);
      }
      if ( *v14 < 8u )
        goto LABEL_33;
      *(_BYTE *)(v13 + 7) &= 0xF0u;
      *(_WORD *)v13 = -20224;
      *(_WORD *)(v13 + 3) = 60;
      *(_BYTE *)(v13 + 5) = 1;
    }
    else
    {
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v15 = *(_QWORD *)(v5 + 64);
        v16 = (_DWORD *)(v5 + 60);
      }
      else
      {
        v15 = *(_QWORD *)(v5 + 24);
        v16 = (_DWORD *)(v5 + 16);
      }
      if ( *v16 < 0xBu )
        goto LABEL_33;
      *(_WORD *)v15 = 0;
      *(_DWORD *)(v15 + 3) = -2088763386;
      *(_WORD *)(v15 + 7) = -20048;
      *(_BYTE *)(v15 + 9) = -78;
      *v16 = 11;
    }
    *(_BYTE *)(v5 + 3) = 1;
    return v10;
  }
  if ( *(_BYTE *)(a3 + 2) )
    goto LABEL_33;
  return (unsigned int)FormInquiryStandardData(a1, a2);
}
