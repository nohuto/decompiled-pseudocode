/*
 * XREFs of ACPIInitStartDevice @ 0x1C0007104
 * Callers:
 *     ACPIEcStartDevice @ 0x1C004C8B0 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C008B5D0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C008BFD0 (ACPIFilterIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C00946C4 (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C0094780 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00A1350 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00077D8 (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008B3C0 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r13d
  _QWORD *DeviceExtension; // rax
  __int64 v9; // r8
  __int64 *v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // rbx
  _DWORD *v13; // r13
  _DWORD *v14; // rsi
  void *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  void *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // ebx
  int v26; // esi
  unsigned int v27; // esi
  PVOID v28; // rax
  void *v29; // r12
  char v30; // si
  _OWORD *v31; // rax
  _QWORD *v32; // r13
  KIRQL v33; // al
  void *v34; // rcx
  KIRQL v35; // di
  void *v36; // rcx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  _BYTE *v39; // rcx
  size_t v40; // r15
  PVOID PoolWithTag; // rax
  PVOID v42; // r14
  __int64 v43; // rax
  void *v44; // rdx
  void *v45; // rcx
  __int64 v46; // rax
  void *v47; // rdx
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rcx
  int v51; // edx
  void *v52; // rax
  __int64 v53; // rax
  int v54; // edx
  void *v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  void *v58; // rcx
  __int64 v59; // rax
  int v60; // edx
  void *v61; // rcx
  __int64 v62; // rax
  int v63; // edx
  void *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // [rsp+30h] [rbp-50h]
  __int64 v67; // [rsp+38h] [rbp-48h]
  void *v68; // [rsp+50h] [rbp-30h]
  __int128 v69; // [rsp+58h] [rbp-28h] BYREF
  __int128 v70; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+78h] [rbp-8h]
  size_t Size; // [rsp+C8h] [rbp+48h]
  size_t Sizea; // [rsp+C8h] [rbp+48h]

  v5 = a4;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v10 = 0LL;
  v11 = 0LL;
  v12 = DeviceExtension;
  Size = DeviceExtension[89];
  if ( a2 )
  {
    v13 = *(_DWORD **)(a2 + 8);
    v14 = *(_DWORD **)(a2 + 16);
    v68 = v13;
    if ( !v13 || *v13 != 1 )
      goto LABEL_11;
    v15 = &unk_1C0066CD0;
    v16 = 0x200000000000LL;
    if ( v14 && *v14 == 1 && (DeviceExtension[119] & 0x100000000LL) != 0 )
    {
      v37 = v14[4];
      v38 = 0;
      if ( v37 )
      {
        v39 = v14 + 5;
        while ( *v39 != 2 || (v39[2] & 0x20) == 0 )
        {
          ++v38;
          v39 += 20;
          if ( v38 >= v37 )
            goto LABEL_45;
        }
        v40 = 20 * (v37 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v40, 0x53706341u);
        v42 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v14, v40);
          v49 = (void *)v12[79];
          if ( v49 )
            ExFreePoolWithTag(v49, 0);
          v12[79] = v42;
        }
        else
        {
          v43 = v12[1];
          v44 = &unk_1C0066CD0;
          v45 = &unk_1C0066CD0;
          if ( (v43 & 0x200000000000LL) != 0 )
          {
            v44 = (void *)v12[70];
            if ( (v43 & 0x400000000000LL) != 0 )
              v45 = (void *)v12[71];
          }
          v67 = (__int64)v44;
          LOBYTE(v44) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v44,
            1,
            21,
            (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
            v40,
            (char)v12,
            v67,
            (__int64)v45);
        }
      }
      else
      {
LABEL_45:
        v46 = DeviceExtension[1];
        v47 = &unk_1C0066CD0;
        v48 = &unk_1C0066CD0;
        if ( (v46 & 0x200000000000LL) != 0 )
        {
          v47 = (void *)v12[70];
          if ( (v46 & 0x400000000000LL) != 0 )
            v48 = (void *)v12[71];
        }
        v66 = (__int64)v47;
        LOBYTE(v47) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v47,
          17,
          20,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          (char)v12,
          v66,
          (__int64)v48);
        _InterlockedAnd64(v12 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v10 = (__int64 *)AMLIGetNamedChild(Size, 1397900127LL, v9, v16);
    v19 = AMLIGetNamedChild(Size, 1397904223LL, v17, v18);
    v11 = v19;
    if ( v10 && v19 )
    {
      v26 = AMLIEvalNameSpaceObject(v10, &v69, 0, 0LL);
      if ( v26 < 0 )
      {
        v50 = v12[1];
        v51 = 0;
        v52 = &unk_1C0066CD0;
        if ( (v50 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v51 = 0;
          if ( (v50 & 0x400000000000LL) != 0 )
            v52 = (void *)v12[71];
        }
        LOBYTE(v51) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v51,
          1,
          23,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          v26,
          (char)v12,
          (__int64)v15,
          (__int64)v52);
        goto LABEL_75;
      }
      if ( WORD1(v69) != 3 || !DWORD2(v70) || !Src )
      {
        v62 = v12[1];
        v63 = 0;
        v64 = &unk_1C0066CD0;
        if ( (v62 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v63 = 0;
          if ( (v62 & 0x400000000000LL) != 0 )
            v64 = (void *)v12[71];
        }
        LOBYTE(v63) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v63,
          1,
          24,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          SBYTE2(v69),
          (char)v12,
          (__int64)v15,
          (__int64)v64);
        dword_1C00776F8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v69, 1LL);
        v26 = -1073741823;
        goto LABEL_75;
      }
      v27 = 20 * (v13[4] + 1);
      Sizea = v27;
      v28 = ExAllocatePoolWithTag(PagedPool, v27, 0x53706341u);
      v29 = v28;
      if ( v28 )
      {
        memmove(v28, v13, v27);
        v30 = BYTE8(v70) + 40;
        v31 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v70) + 40), 0x4F706341u);
        v32 = v31;
        if ( v31 )
        {
          *v31 = v69;
          v31[1] = v70;
          *((_QWORD *)v31 + 4) = (char *)v31 + 40;
          memmove((char *)v31 + 40, Src, DWORD2(v70));
          dword_1C00776F8 = 0;
          pszDest = 0;
          FreeDataBuffs(&v69, 1LL);
          v26 = PnpCmResourcesToBiosResources(v12, v29, v32[4], *((unsigned int *)v32 + 6));
          if ( v26 < 0 )
          {
            v59 = v12[1];
            v60 = 0;
            v61 = &unk_1C0066CD0;
            if ( (v59 & 0x200000000000LL) != 0 )
            {
              v15 = (void *)v12[70];
              v60 = 0;
              if ( (v59 & 0x400000000000LL) != 0 )
                v61 = (void *)v12[71];
            }
            LOBYTE(v60) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v60,
              1,
              27,
              (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
              v26,
              (char)v12,
              (__int64)v15,
              (__int64)v61);
            ExFreePoolWithTag(v29, 0);
            ExFreePoolWithTag(v32, 0);
            goto LABEL_75;
          }
          memmove(v29, v68, Sizea);
          v33 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v34 = (void *)v12[80];
          v35 = v33;
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          v12[80] = v32;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v35);
          v36 = (void *)v12[78];
          if ( v36 )
            ExFreePoolWithTag(v36, 0);
          v12[78] = v29;
          goto LABEL_10;
        }
        v56 = v12[1];
        v57 = 0;
        v58 = &unk_1C0066CD0;
        if ( (v56 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v57 = 0;
          if ( (v56 & 0x400000000000LL) != 0 )
            v58 = (void *)v12[71];
        }
        LOBYTE(v57) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v57,
          1,
          26,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          v30,
          (char)v12,
          (__int64)v15,
          (__int64)v58);
        dword_1C00776F8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v69, 1LL);
        ExFreePoolWithTag(v29, 0);
      }
      else
      {
        v53 = v12[1];
        v54 = 0;
        v55 = &unk_1C0066CD0;
        if ( (v53 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v54 = 0;
          if ( (v53 & 0x400000000000LL) != 0 )
            v55 = (void *)v12[71];
        }
        LOBYTE(v54) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v54,
          1,
          25,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          v27,
          (char)v12,
          (__int64)v15,
          (__int64)v55);
        dword_1C00776F8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v69, 1LL);
      }
      v26 = -1073741670;
LABEL_75:
      a3(v12, a4, (unsigned int)v26);
      if ( v10 )
        AMLIDereferenceHandleEx(v10, v65);
      if ( v11 )
        AMLIDereferenceHandleEx(v11, v65);
      return (unsigned int)v26;
    }
    v20 = v12[1];
    v21 = 0;
    v22 = &unk_1C0066CD0;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v15 = (void *)v12[70];
      v21 = 0;
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = (void *)v12[71];
    }
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      1,
      22,
      (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
      (char)v12,
      (__int64)v15,
      (__int64)v22);
LABEL_10:
    v5 = a4;
LABEL_11:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v12);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v12[119] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v12 + 84) == 1 )
  {
    v26 = 0;
    goto LABEL_75;
  }
  v24 = ACPIDeviceInternalDeviceRequest((_DWORD)v12, 1, v6, v5, 4);
  if ( v24 == -1073741802 )
    v24 = 259;
  if ( v10 )
    AMLIDereferenceHandleEx(v10, v23);
  if ( v11 )
    AMLIDereferenceHandleEx(v11, v23);
  return v24;
}
