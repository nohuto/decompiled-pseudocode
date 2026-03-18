/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C00830B8
 * Callers:
 *     TranslateBindMutexResources @ 0x1C0019828 (TranslateBindMutexResources.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0038550 (PnpDeviceBiosResourcesToNtResources.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007DE98 (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     TranslateEjectInterface @ 0x1C008B084 (TranslateEjectInterface.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C003865C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0038858 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C0038A70 (WPP_RECORDER_SF_dqLD.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008503C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00853B4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C008547C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00854E0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C0085634 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C0085690 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C008574C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0085850 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C00858CC (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C008595C (PnpiBiosVendorToNtIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C0085A3C (PnpiClearAllocatedMemory.c)
 *     PnpiGrowResourceList @ 0x1C0085B80 (PnpiGrowResourceList.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int **a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  PVOID v9; // r15
  unsigned int v10; // r12d
  unsigned __int8 v11; // r8
  int v12; // esi
  int v13; // edx
  __int16 v14; // r9
  unsigned int v15; // edi
  char v16; // al
  int v17; // r9d
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // edi
  unsigned __int8 v25; // di
  char v26; // si
  __int16 j; // r12
  int v28; // eax
  int v29; // r9d
  unsigned __int16 v30; // di
  unsigned __int16 v31; // si
  int v32; // eax
  char v33; // al
  int v34; // eax
  int v35; // edx
  char v36; // di
  int v37; // eax
  unsigned __int8 v38; // di
  unsigned __int8 v39; // si
  unsigned __int8 v40; // al
  unsigned __int8 v41; // r8
  int DeviceExtension; // r12d
  int v43; // edx
  unsigned int v44; // edi
  unsigned int v45; // r13d
  unsigned int v46; // ebx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // r9d
  __int64 result; // rax
  unsigned int *PoolWithTag; // rax
  int v53; // edx
  int v54; // edx
  unsigned int *v55; // rsi
  int v56; // edx
  int v57; // r8d
  int v58; // r9d
  char *v59; // rsi
  unsigned int i; // r14d
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rbx
  int v64; // [rsp+20h] [rbp-60h]
  int v65; // [rsp+20h] [rbp-60h]
  int v66; // [rsp+20h] [rbp-60h]
  char v67; // [rsp+28h] [rbp-58h]
  char v68; // [rsp+50h] [rbp-30h]
  unsigned int v69; // [rsp+54h] [rbp-2Ch]
  char v70[4]; // [rsp+58h] [rbp-28h] BYREF
  int v71; // [rsp+5Ch] [rbp-24h] BYREF
  int v72; // [rsp+60h] [rbp-20h]
  unsigned __int16 v73; // [rsp+64h] [rbp-1Ch]
  int v74; // [rsp+68h] [rbp-18h]
  unsigned int v75; // [rsp+6Ch] [rbp-14h]
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF

  P[0] = 0LL;
  v71 = 0;
  v69 = 0;
  v5 = 0;
  v75 = 0;
  v70[0] = 0;
  v74 = 0;
  v72 = 0;
  v6 = PnpiGrowResourceList(P, &v71);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      13,
      33,
      (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
      v6);
    return (unsigned int)v8;
  }
  v9 = P[0];
  v10 = 32;
  while ( 1 )
  {
    v11 = *(_BYTE *)a2;
    v68 = *(_BYTE *)a2;
    v12 = v5;
    if ( *(char *)a2 < 0 )
    {
      v13 = 35;
      v14 = *(_WORD *)(a2 + 1) + 3;
    }
    else
    {
      v13 = 34;
      v14 = (v11 & 7) + 1;
      v11 &= 0x78u;
      v68 = v11;
    }
    v73 = v14;
    v15 = v11;
    v16 = v14;
    v17 = (unsigned __int16)v13;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      14,
      v17,
      (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
      v11,
      v16);
    if ( v68 == 120 )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        14,
        36,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
      if ( !v74 || v72 == v74 )
      {
        LOBYTE(v43) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v43,
          14,
          55,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
        PnpiClearAllocatedMemory(v9);
        *a4 = 0LL;
        return (unsigned int)v8;
      }
      if ( *(_QWORD *)v9 )
        v44 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
      else
        v44 = 0;
      v45 = v75;
      v46 = 1;
      if ( v75 )
      {
        while ( 1 )
        {
          v47 = *((_QWORD *)v9 + v46);
          if ( !v47 )
            break;
          v48 = *(_DWORD *)(v47 + 4);
          if ( v48 )
          {
            v10 += 32 * (v44 + v48) + 8;
            LOBYTE(v43) = 4;
            WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v43, 14, 58, v65, v46, v10);
          }
          if ( ++v46 > v45 )
            goto LABEL_98;
        }
        LOBYTE(v43) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v43,
          13,
          57,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          v46);
        goto LABEL_105;
      }
LABEL_98:
      if ( !v45 )
      {
        if ( !*(_QWORD *)v9 || (v49 = *(_DWORD *)(*(_QWORD *)v9 + 4LL)) == 0 )
        {
          v50 = 59;
LABEL_107:
          LOBYTE(v43) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v43,
            13,
            v50,
            (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
LABEL_105:
          PnpiClearAllocatedMemory(v9);
          result = 3221225473LL;
          *a4 = 0LL;
          return result;
        }
        v10 += 32 * v49 + 8;
      }
      if ( v10 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x52706341u);
        *a4 = PoolWithTag;
        LOBYTE(v53) = 4;
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v53,
          14,
          61,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          (char)PoolWithTag,
          v10);
        v55 = *a4;
        if ( *a4 )
        {
          memset(v55, 0, v10);
          v8 = 0;
          *(_QWORD *)(v55 + 1) = 15LL;
          *v55 = v10;
          v59 = (char *)(v55 + 8);
          for ( i = 1; i <= v45; ++i )
          {
            v61 = *((_QWORD *)v9 + i);
            v62 = *(_DWORD *)(v61 + 4);
            if ( v62 )
            {
              v63 = (unsigned int)(32 * v62 + 8);
              *(_DWORD *)(v61 + 4) = v44 + v62;
              WPP_RECORDER_SF_dqLD(
                WPP_GLOBAL_Control->DeviceExtension,
                v56,
                v57,
                v58,
                v66,
                i,
                (char)v59,
                32 * v62 + 8,
                *(_DWORD *)(*((_QWORD *)v9 + i) + 4LL));
              memmove(v59, *((const void **)v9 + i), (unsigned int)v63);
              v59 += v63;
              v8 = 0;
              if ( v44 )
              {
                memmove(v59, (const void *)(*(_QWORD *)v9 + 8LL), 32LL * v44);
                v59 += 32 * v44;
                v8 = 0;
              }
              ++(*a4)[7];
            }
          }
          if ( !v45 )
          {
            memmove(v59, *(const void **)v9, 32 * v44 + 8);
            ++(*a4)[7];
          }
        }
        else
        {
          LOBYTE(v54) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v54,
            13,
            62,
            (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids);
          v8 = -1073741670;
        }
        goto LABEL_118;
      }
      v50 = 60;
      goto LABEL_107;
    }
    v20 = 1;
    ++v74;
    if ( v15 <= 0x84 )
    {
      if ( v15 == 132 )
      {
        v8 = 0;
        if ( a1 )
        {
          v34 = PnpiBiosVendorToNtIoDescriptor(a1, a2, v19, (_DWORD)v9, v69, a3, (__int64)v70);
          if ( v34 < 0 || !v70[0] )
            ++v72;
          LOBYTE(v35) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v35,
            14,
            53,
            (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
            v34);
        }
        else
        {
          ++v72;
        }
        goto LABEL_22;
      }
      if ( v15 == 32 )
      {
        v30 = *(_WORD *)(a2 + 1);
        v31 = 0;
        for ( j = 0; v30; v30 >>= 1 )
        {
          if ( v8 < 0 )
            break;
          if ( (v30 & 1) != 0 )
          {
            v32 = PnpiBiosIrqToIoDescriptor(a2, v31, (_DWORD)v9, v69, j);
            v20 = 1;
            v8 = v32;
            ++j;
          }
          ++v31;
        }
        v29 = 37;
      }
      else
      {
        if ( v15 != 40 )
        {
          if ( v15 == 48 )
          {
            v24 = v75 + 1;
            v75 = v24;
            v69 = v24;
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              14,
              41,
              (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
              v24);
            if ( v24 == v71 )
            {
              v21 = PnpiGrowResourceList(P, &v71);
              v9 = P[0];
              goto LABEL_20;
            }
          }
          else
          {
            if ( v15 != 56 )
            {
              switch ( v15 )
              {
                case 0x40u:
                  v22 = PnpiBiosPortToIoDescriptor(a2, v9, v69, a3);
                  v8 = v22;
                  v23 = 43;
                  break;
                case 0x48u:
                  v22 = PnpiBiosPortFixedToIoDescriptor(a2, v9, v69, a3);
                  v8 = v22;
                  v23 = 44;
                  break;
                case 0x50u:
                  v22 = PnpiBiosDmaToIoDescriptorV3(a2, v9, v69);
                  v8 = v22;
                  v23 = 40;
                  break;
                case 0x70u:
                  ++v72;
                  v8 = 0;
                  goto LABEL_22;
                case 0x81u:
LABEL_85:
                  v22 = PnpiBiosMemoryToIoDescriptor(a2, v9, v69);
                  v8 = v22;
                  v23 = 45;
                  break;
                default:
LABEL_19:
                  LOBYTE(v20) = 4;
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v20,
                    13,
                    54,
                    (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
                    v15);
                  v21 = 0;
                  v74 = v12;
LABEL_20:
                  v8 = v21;
                  goto LABEL_21;
              }
              goto LABEL_25;
            }
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              14,
              42,
              (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
              v69);
            v69 = 0;
          }
          goto LABEL_21;
        }
        v25 = *(_BYTE *)(a2 + 1);
        v26 = 0;
        for ( j = 0; v25; v25 >>= 1 )
        {
          if ( v8 < 0 )
            break;
          if ( (v25 & 1) != 0 )
          {
            LOBYTE(v20) = v26;
            v28 = PnpiBiosDmaToIoDescriptor(a2, v20, (_DWORD)v9, v69, j);
            v20 = 1;
            v8 = v28;
            ++j;
          }
          ++v26;
        }
        v29 = 39;
      }
      v33 = j;
LABEL_45:
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        14,
        v29,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v33,
        v8);
      v10 = 32;
      goto LABEL_21;
    }
    if ( v15 <= 0x86 )
      goto LABEL_85;
    if ( v15 == 135 )
    {
      v22 = PnpiBiosAddressDoubleToIoDescriptor(a2);
      v8 = v22;
      v23 = 47;
      goto LABEL_25;
    }
    if ( v15 == 136 )
    {
      v22 = PnpiBiosAddressToIoDescriptor(a2);
      v8 = v22;
      v23 = 46;
      goto LABEL_25;
    }
    if ( v15 == 137 )
      break;
    if ( v15 == 138 )
    {
      v22 = PnpiBiosAddressQuadToIoDescriptor(a2);
      v8 = v22;
      v23 = 48;
LABEL_25:
      v67 = v22;
LABEL_26:
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        14,
        v23,
        (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
        v67);
      goto LABEL_21;
    }
    if ( v15 == 139 )
    {
      v22 = PnpiBiosAddressExtendedToIoDescriptor(a2);
      v8 = v22;
      v23 = 49;
      goto LABEL_25;
    }
    if ( v15 != 140 )
    {
      if ( v15 != 142 )
        goto LABEL_19;
      if ( a1 )
        v8 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, a2, v19, (_DWORD)v9, v69, a3);
      else
        v8 = -1073741637;
      v23 = 52;
      v67 = v8;
      goto LABEL_26;
    }
    v36 = 0;
    if ( a1 )
    {
      do
      {
        if ( v8 < 0 )
          break;
        v37 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, a2, v19, (_DWORD)v9, v69, a3);
        v20 = 1;
        v8 = v37;
        ++v36;
      }
      while ( !v36 );
      v10 = 32;
    }
    else
    {
      v8 = -1073741637;
    }
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      14,
      51,
      (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
      v36,
      v8);
LABEL_21:
    if ( v8 < 0 )
      goto LABEL_87;
LABEL_22:
    v5 = v74;
    a2 += v73;
  }
  v38 = *(_BYTE *)(a2 + 4);
  v39 = 0;
  v40 = 4 * v38 + 5;
  if ( AcpiInterruptCombiningSupported != 1 || (v41 = *(_BYTE *)(a2 + 1) + 3, v41 <= v40) )
  {
    DeviceExtension = 0;
    if ( gAcpiHonorBiosPolarities && a1 )
      DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    if ( v38 )
    {
      do
      {
        if ( v8 < 0 )
          break;
        LOBYTE(v19) = v39++;
        v8 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, a2, v19, (_DWORD)v9, v69);
      }
      while ( v39 < v38 );
    }
    v33 = v39;
    v29 = 38;
    goto LABEL_45;
  }
  if ( a1 )
  {
    v21 = PnpiBiosInterruptCombineToIoDescriptor(a1, a2, v41 - v40 - 1, (int)v9, v69, a3);
    goto LABEL_20;
  }
  v8 = -1073741637;
LABEL_87:
  LOBYTE(v20) = 2;
  WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v20, 13, 56, v64, v68, v8);
LABEL_118:
  PnpiClearAllocatedMemory(v9);
  return (unsigned int)v8;
}
