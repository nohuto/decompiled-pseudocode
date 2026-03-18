/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C008D264
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0007AF4 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C0048860 (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C008B25C (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C009FA5C (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A09B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A55B0 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C00068D8 (WPP_RECORDER_SF_dqLD.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0007BAC (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0007D24 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C0056DF0 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C008B124 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C008B1E0 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008B758 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C008BD78 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C008CB54 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C008CD98 (PnpiGrowResourceList.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C008D828 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C008D978 (PnpiClearAllocatedMemory.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A253C (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00A2CE4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00A2D48 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00A2EA0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00A2EFC (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int **a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  PVOID v9; // r15
  unsigned int v10; // r12d
  unsigned __int8 v11; // cl
  int v12; // edx
  int v13; // esi
  int v14; // r9d
  __int16 v15; // ax
  unsigned int v16; // edi
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // r9d
  int v22; // edx
  unsigned int v23; // edi
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int *PoolWithTag; // rax
  int v28; // edx
  int v29; // edx
  unsigned int *v30; // rsi
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  char *v34; // rsi
  unsigned int j; // r14d
  __int64 result; // rax
  unsigned __int16 v37; // di
  unsigned __int16 v38; // si
  __int16 i; // r12
  int v40; // r9d
  char v41; // al
  int v42; // eax
  unsigned __int8 v43; // di
  unsigned __int8 v44; // si
  unsigned int v45; // edi
  int v46; // r8d
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rbx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // edx
  char v56; // di
  int v57; // eax
  unsigned __int8 v58; // r12
  unsigned __int8 v59; // r8
  unsigned __int8 v60; // al
  unsigned __int8 v61; // si
  int DeviceExtension; // edi
  int v63; // r9d
  int v64; // [rsp+20h] [rbp-60h]
  char v65; // [rsp+28h] [rbp-58h]
  unsigned __int8 v66; // [rsp+50h] [rbp-30h]
  unsigned int v67; // [rsp+54h] [rbp-2Ch]
  char v68[4]; // [rsp+58h] [rbp-28h] BYREF
  int v69; // [rsp+5Ch] [rbp-24h] BYREF
  int v70; // [rsp+60h] [rbp-20h]
  unsigned __int16 v71; // [rsp+64h] [rbp-1Ch]
  int v72; // [rsp+68h] [rbp-18h]
  unsigned int v73; // [rsp+6Ch] [rbp-14h]
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF

  P[0] = 0LL;
  v69 = 0;
  v67 = 0;
  v5 = 0;
  v73 = 0;
  v68[0] = 0;
  v72 = 0;
  v70 = 0;
  v6 = PnpiGrowResourceList(P, &v69, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      13,
      33,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
      v6);
    return (unsigned int)v8;
  }
  v9 = P[0];
  v10 = 32;
  while ( 1 )
  {
    v11 = *(_BYTE *)a2;
    v66 = *(_BYTE *)a2;
    v12 = 1;
    v13 = v5;
    if ( *(char *)a2 < 0 )
    {
      v14 = 35;
      v15 = *(_WORD *)(a2 + 1) + 3;
    }
    else
    {
      v14 = 34;
      v15 = (v11 & 7) + 1;
      v11 &= 0x78u;
      v66 = v11;
    }
    v71 = v15;
    v16 = v11;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      14,
      v14,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
      v11,
      v15);
    if ( v66 == 120 )
      break;
    v19 = 1;
    ++v72;
    if ( v16 <= 0x84 )
    {
      switch ( v16 )
      {
        case 0x84u:
          v8 = 0;
          if ( a1 )
          {
            v54 = PnpiBiosVendorToNtIoDescriptor(a1, a2, v18, (_DWORD)v9, v67, a3, (__int64)v68);
            if ( v54 < 0 || !v68[0] )
              ++v70;
            LOBYTE(v55) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v55,
              14,
              53,
              (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
              v54);
          }
          else
          {
            ++v70;
          }
          goto LABEL_17;
        case 0x20u:
          v37 = *(_WORD *)(a2 + 1);
          v38 = 0;
          for ( i = 0; v37; v37 >>= 1 )
          {
            if ( v8 < 0 )
              break;
            if ( (v37 & 1) != 0 )
            {
              v42 = PnpiBiosIrqToIoDescriptor((_BYTE *)a2, v38, (__int64)v9, v67, i);
              v19 = 1;
              v8 = v42;
              ++i;
            }
            ++v38;
          }
          v40 = 37;
          goto LABEL_45;
        case 0x28u:
          v43 = *(_BYTE *)(a2 + 1);
          v44 = 0;
          for ( i = 0; v43; v43 >>= 1 )
          {
            if ( v8 < 0 )
              break;
            if ( (v43 & 1) != 0 )
            {
              v52 = PnpiBiosDmaToIoDescriptor(a2, v44, (__int64)v9, v67, i);
              v19 = 1;
              v8 = v52;
              ++i;
            }
            ++v44;
          }
          v40 = 39;
LABEL_45:
          v41 = i;
          goto LABEL_46;
        case 0x30u:
          v45 = v73 + 1;
          v73 = v45;
          v67 = v45;
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            14,
            41,
            (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
            v45);
          if ( v45 != v69 )
            goto LABEL_16;
          v53 = PnpiGrowResourceList(P, &v69, v46);
          v9 = P[0];
          break;
        case 0x38u:
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            14,
            42,
            (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
            v67);
          v67 = 0;
          goto LABEL_16;
        case 0x40u:
          v20 = PnpiBiosPortToIoDescriptor(a2, v9, v67, a3);
          v8 = v20;
          v21 = 43;
          goto LABEL_14;
        case 0x48u:
          v20 = PnpiBiosPortFixedToIoDescriptor(a2, (__int64)v9, v67, a3);
          v8 = v20;
          v21 = 44;
          goto LABEL_14;
        case 0x50u:
          v20 = PnpiBiosDmaToIoDescriptorV3(a2, v9, v67);
          v8 = v20;
          v21 = 40;
          goto LABEL_14;
        case 0x70u:
          ++v70;
          v8 = 0;
          goto LABEL_17;
        case 0x81u:
LABEL_38:
          v20 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v67);
          v8 = v20;
          v21 = 45;
          goto LABEL_14;
        default:
LABEL_78:
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            13,
            54,
            (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
            v16);
          v53 = 0;
          v72 = v13;
          break;
      }
      v8 = v53;
      goto LABEL_16;
    }
    if ( v16 <= 0x86 )
      goto LABEL_38;
    switch ( v16 )
    {
      case 0x87u:
        v20 = PnpiBiosAddressDoubleToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v67, a3);
        v8 = v20;
        v21 = 47;
        goto LABEL_14;
      case 0x88u:
        v20 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v67, a3);
        v8 = v20;
        v21 = 46;
        goto LABEL_14;
      case 0x89u:
        v58 = *(_BYTE *)(a2 + 4);
        v59 = *(_BYTE *)(a2 + 1) + 3;
        v60 = 4 * v58 + 5;
        v61 = 0;
        if ( AcpiInterruptCombiningSupported == 1 && v59 > v60 )
        {
          if ( !a1 )
          {
            v8 = -1073741637;
LABEL_117:
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v19, 13, 56);
LABEL_36:
            PnpiClearAllocatedMemory(v9);
            return (unsigned int)v8;
          }
          v8 = PnpiBiosInterruptCombineToIoDescriptor(a1, a2, v59 - v60 - 1, (int)v9, v67, a3);
          goto LABEL_47;
        }
        DeviceExtension = 0;
        if ( gAcpiHonorBiosPolarities && a1 )
          DeviceExtension = ACPIInternalGetDeviceExtension(a1);
        if ( v58 )
        {
          do
          {
            if ( v8 < 0 )
              break;
            LOBYTE(v18) = v61++;
            v8 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, a2, v18, (_DWORD)v9, v67);
          }
          while ( v61 < v58 );
        }
        v41 = v61;
        v40 = 38;
LABEL_46:
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_LL(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          14,
          v40,
          (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
          v41,
          v8);
LABEL_47:
        v10 = 32;
        goto LABEL_16;
      case 0x8Au:
        v20 = PnpiBiosAddressQuadToIoDescriptor(a2);
        v8 = v20;
        v21 = 48;
        goto LABEL_14;
      case 0x8Bu:
        v20 = PnpiBiosAddressExtendedToIoDescriptor(a2);
        v8 = v20;
        v21 = 49;
LABEL_14:
        v65 = v20;
LABEL_15:
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          14,
          v21,
          (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
          v65);
        goto LABEL_16;
    }
    if ( v16 != 140 )
    {
      if ( v16 == 142 )
      {
        if ( a1 )
          v8 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, a2, v18, (_DWORD)v9, v67, a3);
        else
          v8 = -1073741637;
        v21 = 52;
        v65 = v8;
        goto LABEL_15;
      }
      goto LABEL_78;
    }
    v56 = 0;
    if ( a1 )
    {
      do
      {
        if ( v8 < 0 )
          break;
        v57 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, a2, v18, (_DWORD)v9, v67, a3);
        v19 = 1;
        v8 = v57;
        ++v56;
      }
      while ( !v56 );
      v10 = 32;
    }
    else
    {
      v8 = -1073741637;
    }
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      14,
      51,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
      v56,
      v8);
LABEL_16:
    if ( v8 < 0 )
      goto LABEL_117;
LABEL_17:
    v5 = v72;
    a2 += v71;
  }
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v17,
    14,
    36,
    (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
  if ( !v72 || v70 == v72 )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      14,
      55,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
    PnpiClearAllocatedMemory(v9);
    *a4 = 0LL;
    return (unsigned int)v8;
  }
  if ( *(_QWORD *)v9 )
    v23 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
  else
    v23 = 0;
  v24 = v73;
  v25 = 1;
  if ( v73 )
  {
    while ( 1 )
    {
      v47 = *((_QWORD *)v9 + v25);
      if ( !v47 )
        break;
      v48 = *(_DWORD *)(v47 + 4);
      if ( v48 )
      {
        v10 += 32 * (v23 + v48) + 8;
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v22, 14, 58);
      }
      if ( ++v25 > v24 )
        goto LABEL_27;
    }
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      13,
      57,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
      v25);
  }
  else
  {
LABEL_27:
    if ( v24 )
      goto LABEL_31;
    if ( *(_QWORD *)v9 && (v26 = *(_DWORD *)(*(_QWORD *)v9 + 4LL)) != 0 )
    {
      v10 += 32 * v26 + 8;
LABEL_31:
      if ( v10 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x52706341u);
        *a4 = PoolWithTag;
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          14,
          61,
          (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
          (char)PoolWithTag,
          v10);
        v30 = *a4;
        if ( *a4 )
        {
          memset(v30, 0, v10);
          v8 = 0;
          *(_QWORD *)(v30 + 1) = 15LL;
          *v30 = v10;
          v34 = (char *)(v30 + 8);
          for ( j = 1; j <= v24; ++j )
          {
            v49 = *((_QWORD *)v9 + j);
            v50 = *(_DWORD *)(v49 + 4);
            if ( v50 )
            {
              v51 = (unsigned int)(32 * v50 + 8);
              *(_DWORD *)(v49 + 4) = v23 + v50;
              WPP_RECORDER_SF_dqLD(
                WPP_GLOBAL_Control->DeviceExtension,
                v31,
                v32,
                v33,
                v64,
                j,
                (char)v34,
                32 * v50 + 8,
                *(_DWORD *)(*((_QWORD *)v9 + j) + 4LL));
              memmove(v34, *((const void **)v9 + j), (unsigned int)v51);
              v34 += v51;
              v8 = 0;
              if ( v23 )
              {
                memmove(v34, (const void *)(*(_QWORD *)v9 + 8LL), 32LL * v23);
                v34 += 32 * v23;
                v8 = 0;
              }
              ++(*a4)[7];
            }
          }
          if ( !v24 )
          {
            memmove(v34, *(const void **)v9, 32 * v23 + 8);
            ++(*a4)[7];
          }
        }
        else
        {
          LOBYTE(v29) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v29,
            13,
            62,
            (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
          v8 = -1073741670;
        }
        goto LABEL_36;
      }
      v63 = 60;
    }
    else
    {
      v63 = 59;
    }
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      13,
      v63,
      (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids);
  }
  PnpiClearAllocatedMemory(v9);
  result = 3221225473LL;
  *a4 = 0LL;
  return result;
}
