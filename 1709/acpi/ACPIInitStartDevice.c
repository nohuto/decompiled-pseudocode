/*
 * XREFs of ACPIInitStartDevice @ 0x1C0001AF4
 * Callers:
 *     ACPIEcStartDevice @ 0x1C004BCF0 (ACPIEcStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0085F50 (ACPIFilterIrpStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C0096B50 (ACPIBusIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C009759C (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C0097660 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00A3FA0 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0001E68 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0001F68 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E6A4 (PnpCmResourcesToBiosResources.c)
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
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rbx
  _DWORD *v12; // r13
  _DWORD *v13; // rsi
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  void *v18; // rax
  unsigned int v19; // ebx
  int v21; // esi
  unsigned int v22; // esi
  PVOID v23; // rax
  void *v24; // r12
  char v25; // si
  _OWORD *v26; // rax
  _QWORD *v27; // r13
  KIRQL v28; // al
  void *v29; // rcx
  KIRQL v30; // di
  void *v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // edx
  _BYTE *v34; // rcx
  size_t v35; // r15
  PVOID PoolWithTag; // rax
  PVOID v37; // r14
  __int64 v38; // rax
  void *v39; // rdx
  void *v40; // rcx
  __int64 v41; // rax
  void *v42; // rdx
  void *v43; // rcx
  void *v44; // rcx
  __int64 v45; // rcx
  int v46; // edx
  void *v47; // rax
  __int64 v48; // rax
  int v49; // edx
  void *v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  void *v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  void *v56; // rcx
  __int64 v57; // rax
  int v58; // edx
  void *v59; // rcx
  __int64 v60; // [rsp+30h] [rbp-50h]
  __int64 v61; // [rsp+38h] [rbp-48h]
  void *v62; // [rsp+50h] [rbp-30h]
  __int128 v63; // [rsp+58h] [rbp-28h] BYREF
  __int128 v64; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+78h] [rbp-8h]
  size_t Size; // [rsp+C8h] [rbp+48h]
  size_t Sizea; // [rsp+C8h] [rbp+48h]

  v5 = a4;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  Size = DeviceExtension[89];
  if ( a2 )
  {
    v12 = *(_DWORD **)(a2 + 8);
    v13 = *(_DWORD **)(a2 + 16);
    v62 = v12;
    if ( !v12 || *v12 != 1 )
      goto LABEL_11;
    v14 = &unk_1C0067B08;
    if ( v13 && *v13 == 1 && (DeviceExtension[119] & 0x100000000LL) != 0 )
    {
      v32 = v13[4];
      v33 = 0;
      if ( v32 )
      {
        v34 = v13 + 5;
        while ( *v34 != 2 || (v34[2] & 0x20) == 0 )
        {
          ++v33;
          v34 += 20;
          if ( v33 >= v32 )
            goto LABEL_45;
        }
        v35 = 20 * (v32 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v35, 0x53706341u);
        v37 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v13, v35);
          v44 = (void *)v11[79];
          if ( v44 )
            ExFreePoolWithTag(v44, 0);
          v11[79] = v37;
        }
        else
        {
          v38 = v11[1];
          v39 = &unk_1C0067B08;
          v40 = &unk_1C0067B08;
          if ( (v38 & 0x200000000000LL) != 0 )
          {
            v39 = (void *)v11[70];
            if ( (v38 & 0x400000000000LL) != 0 )
              v40 = (void *)v11[71];
          }
          v61 = (__int64)v39;
          LOBYTE(v39) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v39,
            1,
            21,
            (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
            v35,
            (char)v11,
            v61,
            (__int64)v40);
        }
      }
      else
      {
LABEL_45:
        v41 = DeviceExtension[1];
        v42 = &unk_1C0067B08;
        v43 = &unk_1C0067B08;
        if ( (v41 & 0x200000000000LL) != 0 )
        {
          v42 = (void *)v11[70];
          if ( (v41 & 0x400000000000LL) != 0 )
            v43 = (void *)v11[71];
        }
        v60 = (__int64)v42;
        LOBYTE(v42) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v42,
          17,
          20,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          (char)v11,
          v60,
          (__int64)v43);
        _InterlockedAnd64(v11 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v11 + 119, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v11 + 119, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v9 = AMLIGetNamedChild(Size, 1397900127LL);
    v15 = AMLIGetNamedChild(Size, 1397904223LL);
    v10 = v15;
    if ( v9 && v15 )
    {
      v21 = AMLIEvalNameSpaceObject(v9, &v63, 0LL, 0LL);
      if ( v21 < 0 )
      {
        v45 = v11[1];
        v46 = 0;
        v47 = &unk_1C0067B08;
        if ( (v45 & 0x200000000000LL) != 0 )
        {
          v14 = (void *)v11[70];
          v46 = 0;
          if ( (v45 & 0x400000000000LL) != 0 )
            v47 = (void *)v11[71];
        }
        LOBYTE(v46) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v46,
          1,
          23,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          v21,
          (char)v11,
          (__int64)v14,
          (__int64)v47);
        goto LABEL_75;
      }
      if ( WORD1(v63) != 3 || !DWORD2(v64) || !Src )
      {
        v57 = v11[1];
        v58 = 0;
        v59 = &unk_1C0067B08;
        if ( (v57 & 0x200000000000LL) != 0 )
        {
          v14 = (void *)v11[70];
          v58 = 0;
          if ( (v57 & 0x400000000000LL) != 0 )
            v59 = (void *)v11[71];
        }
        LOBYTE(v58) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v58,
          1,
          24,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          SBYTE2(v63),
          (char)v11,
          (__int64)v14,
          (__int64)v59);
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v63, 1LL);
        v21 = -1073741823;
        goto LABEL_75;
      }
      v22 = 20 * (v12[4] + 1);
      Sizea = v22;
      v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x53706341u);
      v24 = v23;
      if ( v23 )
      {
        memmove(v23, v12, v22);
        v25 = BYTE8(v64) + 40;
        v26 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v64) + 40), 0x4F706341u);
        v27 = v26;
        if ( v26 )
        {
          *v26 = v63;
          v26[1] = v64;
          *((_QWORD *)v26 + 4) = (char *)v26 + 40;
          memmove((char *)v26 + 40, Src, DWORD2(v64));
          dword_1C00797B8 = 0;
          pszDest = 0;
          FreeDataBuffs(&v63, 1LL);
          v21 = PnpCmResourcesToBiosResources(v11, v24, v27[4], *((unsigned int *)v27 + 6));
          if ( v21 < 0 )
          {
            v54 = v11[1];
            v55 = 0;
            v56 = &unk_1C0067B08;
            if ( (v54 & 0x200000000000LL) != 0 )
            {
              v14 = (void *)v11[70];
              v55 = 0;
              if ( (v54 & 0x400000000000LL) != 0 )
                v56 = (void *)v11[71];
            }
            LOBYTE(v55) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v55,
              1,
              27,
              (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
              v21,
              (char)v11,
              (__int64)v14,
              (__int64)v56);
            ExFreePoolWithTag(v24, 0);
            ExFreePoolWithTag(v27, 0);
            goto LABEL_75;
          }
          memmove(v24, v62, Sizea);
          v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v29 = (void *)v11[80];
          v30 = v28;
          if ( v29 )
            ExFreePoolWithTag(v29, 0);
          v11[80] = v27;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v30);
          v31 = (void *)v11[78];
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v11[78] = v24;
          goto LABEL_10;
        }
        v51 = v11[1];
        v52 = 0;
        v53 = &unk_1C0067B08;
        if ( (v51 & 0x200000000000LL) != 0 )
        {
          v14 = (void *)v11[70];
          v52 = 0;
          if ( (v51 & 0x400000000000LL) != 0 )
            v53 = (void *)v11[71];
        }
        LOBYTE(v52) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v52,
          1,
          26,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          v25,
          (char)v11,
          (__int64)v14,
          (__int64)v53);
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v63, 1LL);
        ExFreePoolWithTag(v24, 0);
      }
      else
      {
        v48 = v11[1];
        v49 = 0;
        v50 = &unk_1C0067B08;
        if ( (v48 & 0x200000000000LL) != 0 )
        {
          v14 = (void *)v11[70];
          v49 = 0;
          if ( (v48 & 0x400000000000LL) != 0 )
            v50 = (void *)v11[71];
        }
        LOBYTE(v49) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v49,
          1,
          25,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          v22,
          (char)v11,
          (__int64)v14,
          (__int64)v50);
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(&v63, 1LL);
      }
      v21 = -1073741670;
LABEL_75:
      a3(v11, a4, (unsigned int)v21);
      if ( v9 )
        AMLIDereferenceHandleEx(v9);
      if ( v10 )
        AMLIDereferenceHandleEx(v10);
      return (unsigned int)v21;
    }
    v16 = v11[1];
    v17 = 0;
    v18 = &unk_1C0067B08;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v14 = (void *)v11[70];
      v17 = 0;
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = (void *)v11[71];
    }
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      1,
      22,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      (char)v11,
      (__int64)v14,
      (__int64)v18);
LABEL_10:
    v5 = a4;
LABEL_11:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v11[119] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v11 + 84) == 1 )
  {
    v21 = 0;
    goto LABEL_75;
  }
  v19 = ACPIDeviceInternalDeviceRequest((_DWORD)v11, 1, v6, v5, 4);
  if ( v19 == -1073741802 )
    v19 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx(v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v19;
}
