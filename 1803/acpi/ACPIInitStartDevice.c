/*
 * XREFs of ACPIInitStartDevice @ 0x1C0028FBC
 * Callers:
 *     ACPIEcStartDevice @ 0x1C0021FB0 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C0078610 (ACPIBusIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C0078E7C (ACPICMButtonStart.c)
 *     ACPIFilterIrpStartDevice @ 0x1C007C120 (ACPIFilterIrpStartDevice.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C007C950 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C0081AB0 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001A984 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00862DC (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, _QWORD); // r13
  _QWORD *DeviceExtension; // rax
  __int64 *v9; // r15
  volatile signed __int32 *v10; // r14
  _QWORD *v11; // rbx
  _DWORD *v12; // r13
  _DWORD *v13; // rsi
  const char *v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  _BYTE *v17; // rcx
  __int64 v18; // rax
  const char *v19; // rdx
  const char *v20; // rcx
  __int64 *v21; // rax
  int v22; // esi
  __int64 v23; // rcx
  const char *v24; // rax
  size_t v25; // r15
  PVOID PoolWithTag; // rax
  PVOID v27; // r14
  __int64 v28; // rax
  const char *v29; // rdx
  const char *v30; // rcx
  void *v31; // rcx
  unsigned int v32; // esi
  PVOID v33; // rax
  void *v34; // r12
  __int64 v35; // rax
  const char *v36; // rcx
  char v37; // si
  _OWORD *v38; // rax
  _QWORD *v39; // r13
  __int64 v40; // rax
  const char *v41; // rcx
  __int64 v42; // rax
  const char *v43; // rcx
  KIRQL v44; // al
  void *v45; // rcx
  KIRQL v46; // di
  void *v47; // rcx
  __int64 v48; // rax
  const char *v49; // rcx
  __int64 v50; // rcx
  const char *v51; // rax
  unsigned int v53; // ebx
  void *v54; // [rsp+50h] [rbp-30h]
  __int128 v55; // [rsp+58h] [rbp-28h] BYREF
  __int128 v56; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+78h] [rbp-8h]
  _QWORD *Size; // [rsp+C8h] [rbp+48h]
  size_t Sizea; // [rsp+C8h] [rbp+48h]

  v5 = a4;
  v6 = a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  Size = (_QWORD *)DeviceExtension[89];
  if ( a2 )
  {
    v12 = *(_DWORD **)(a2 + 8);
    v13 = *(_DWORD **)(a2 + 16);
    v54 = v12;
    if ( v12 && *v12 == 1 )
    {
      v14 = (const char *)&unk_1C005B1F0;
      if ( v13 && *v13 == 1 && (DeviceExtension[119] & 0x100000000LL) != 0 )
      {
        v15 = v13[4];
        v16 = 0;
        if ( v15 )
        {
          v17 = v13 + 5;
          while ( *v17 != 2 || (v17[2] & 0x20) == 0 )
          {
            ++v16;
            v17 += 20;
            if ( v16 >= v15 )
              goto LABEL_12;
          }
          v25 = 20 * (v15 + 1);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v25, 0x53706341u);
          v27 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, v13, v25);
            v31 = (void *)v11[79];
            if ( v31 )
              ExFreePoolWithTag(v31, 0);
            v11[79] = v27;
          }
          else
          {
            v28 = v11[1];
            v29 = (const char *)&unk_1C005B1F0;
            v30 = (const char *)&unk_1C005B1F0;
            if ( (v28 & 0x200000000000LL) != 0 )
            {
              v29 = (const char *)v11[70];
              if ( (v28 & 0x400000000000LL) != 0 )
                v30 = (const char *)v11[71];
            }
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x15u,
              (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
              v25,
              (char)v11,
              v29,
              v30);
          }
        }
        else
        {
LABEL_12:
          v18 = DeviceExtension[1];
          v19 = (const char *)&unk_1C005B1F0;
          v20 = (const char *)&unk_1C005B1F0;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v19 = (const char *)v11[70];
            if ( (v18 & 0x400000000000LL) != 0 )
              v20 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0x14u,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            (char)v11,
            v19,
            v20);
          _InterlockedAnd64(v11 + 1, 0xFFFFFFFFFFFEFFFFuLL);
          _InterlockedAnd64(v11 + 119, 0xFFFFFFFEFFFFFFFFuLL);
          _InterlockedAnd64(v11 + 119, 0xFFFFFFFFFFEFFFFFuLL);
        }
      }
      v9 = AMLIGetNamedChild(Size, 1397900127);
      v21 = AMLIGetNamedChild(Size, 1397904223);
      v10 = (volatile signed __int32 *)v21;
      if ( v9 && v21 )
      {
        v22 = AMLIEvalNameSpaceObject(v9, &v55, 0, 0LL);
        if ( v22 < 0 )
        {
          v23 = v11[1];
          v24 = (const char *)&unk_1C005B1F0;
          if ( (v23 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v11[70];
            if ( (v23 & 0x400000000000LL) != 0 )
              v24 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x17u,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            v22,
            (char)v11,
            v14,
            v24);
          goto LABEL_68;
        }
        if ( WORD1(v55) != 3 || !DWORD2(v56) || !Src )
        {
          v48 = v11[1];
          v49 = (const char *)&unk_1C005B1F0;
          if ( (v48 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v11[70];
            if ( (v48 & 0x400000000000LL) != 0 )
              v49 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x18u,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            SBYTE2(v55),
            (char)v11,
            v14,
            v49);
          dword_1C00677B8 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
          v22 = -1073741823;
          goto LABEL_68;
        }
        v32 = 20 * (v12[4] + 1);
        Sizea = v32;
        v33 = ExAllocatePoolWithTag(PagedPool, v32, 0x53706341u);
        v34 = v33;
        if ( !v33 )
        {
          v35 = v11[1];
          v36 = (const char *)&unk_1C005B1F0;
          if ( (v35 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v11[70];
            if ( (v35 & 0x400000000000LL) != 0 )
              v36 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x19u,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            v32,
            (char)v11,
            v14,
            v36);
          dword_1C00677B8 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
LABEL_39:
          v22 = -1073741670;
LABEL_68:
          a3((__int64)v11, a4, (unsigned int)v22);
          if ( v9 )
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
          if ( v10 )
            AMLIDereferenceHandleEx(v10);
          return (unsigned int)v22;
        }
        memmove(v33, v12, v32);
        v37 = BYTE8(v56) + 40;
        v38 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v56) + 40), 0x4F706341u);
        v39 = v38;
        if ( !v38 )
        {
          v40 = v11[1];
          v41 = (const char *)&unk_1C005B1F0;
          if ( (v40 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v11[70];
            if ( (v40 & 0x400000000000LL) != 0 )
              v41 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Au,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            v37,
            (char)v11,
            v14,
            v41);
          dword_1C00677B8 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
          ExFreePoolWithTag(v34, 0);
          goto LABEL_39;
        }
        *v38 = v55;
        v38[1] = v56;
        *((_QWORD *)v38 + 4) = (char *)v38 + 40;
        memmove((char *)v38 + 40, Src, DWORD2(v56));
        dword_1C00677B8 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v55, 1u);
        v22 = PnpCmResourcesToBiosResources(v11, v34, v39[4], *((unsigned int *)v39 + 6));
        if ( v22 < 0 )
        {
          v42 = v11[1];
          v43 = (const char *)&unk_1C005B1F0;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v11[70];
            if ( (v42 & 0x400000000000LL) != 0 )
              v43 = (const char *)v11[71];
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Bu,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            v22,
            (char)v11,
            v14,
            v43);
          ExFreePoolWithTag(v34, 0);
          ExFreePoolWithTag(v39, 0);
          goto LABEL_68;
        }
        memmove(v34, v54, Sizea);
        v44 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v45 = (void *)v11[80];
        v46 = v44;
        if ( v45 )
          ExFreePoolWithTag(v45, 0);
        v11[80] = v39;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v46);
        v47 = (void *)v11[78];
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        v11[78] = v34;
      }
      else
      {
        v50 = v11[1];
        v51 = (const char *)&unk_1C005B1F0;
        if ( (v50 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v11[70];
          if ( (v50 & 0x400000000000LL) != 0 )
            v51 = (const char *)v11[71];
        }
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x16u,
          (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
          (char)v11,
          v14,
          v51);
      }
      v5 = a4;
    }
    v6 = a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v11[119] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v11 + 84) == 1 )
  {
    v22 = 0;
    goto LABEL_68;
  }
  v53 = ACPIDeviceInternalDeviceRequest(v11, 1LL, v6, v5, 4u);
  if ( v53 == -1073741802 )
    v53 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v53;
}
