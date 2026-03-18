/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C00178B0
 * Callers:
 *     PciConfigInternal @ 0x1C0016588 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C00177A0 (PciConfigSpaceHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     GetOpRegionScope @ 0x1C0016474 (GetOpRegionScope.c)
 *     GetPciAddressWorker @ 0x1C0017E10 (GetPciAddressWorker.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     RtlStringCchPrintfW @ 0x1C0027094 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0053A40 (WPP_RECORDER_SF_ss.c)
 *     FreeObjectHandle @ 0x1C005ECC0 (FreeObjectHandle.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG BusDataByOffset; // ebp
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  char v11; // al
  int PciAddressWorker; // eax
  int v14; // r14d
  unsigned __int8 CurrentIrql; // di
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  const char *v22; // rax
  const char *v23; // rdx
  const char *v24; // rcx
  ULONG v25; // r12d
  __int64 v26; // rax
  ULONG v27; // r13d
  ULONG Length; // r13d
  int v29; // eax
  __int64 v30; // rcx
  int OpRegionScope; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  int v37; // [rsp+50h] [rbp-A8h]
  int v38; // [rsp+54h] [rbp-A4h]
  const char *v39; // [rsp+58h] [rbp-A0h]
  _QWORD v40[2]; // [rsp+60h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-88h] BYREF
  char v42; // [rsp+74h] [rbp-84h]
  int v43; // [rsp+78h] [rbp-80h] BYREF
  char v44; // [rsp+7Ch] [rbp-7Ch]
  __int64 v45; // [rsp+80h] [rbp-78h] BYREF
  wchar_t v46; // [rsp+88h] [rbp-70h]
  wchar_t pszDest[16]; // [rsp+90h] [rbp-68h] BYREF

  BusDataByOffset = 0;
  v45 = *(_QWORD *)L"ACPI";
  v5 = (unsigned int *)a4;
  v46 = aAcpi_0[4];
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  if ( (int)a2 < 0 )
  {
    v14 = 0;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a4 + 56) )
  {
    v29 = *(_DWORD *)(a4 + 76);
    if ( (v29 & 0x1000) != 0 )
      goto LABEL_68;
    v30 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v29 | 0x1000;
    OpRegionScope = GetOpRegionScope(v30, a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v14 = 0;
      goto LABEL_16;
    }
    v32 = *((_QWORD *)v5 + 1);
    if ( v32 )
    {
      *(_QWORD *)(*(_QWORD *)v32 + 104LL) = *((_QWORD *)v5 + 7);
      v33 = *((_QWORD *)v5 + 7);
      dword_1C00797B8 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
    }
  }
  a3 = *(_QWORD *)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a3 )
  {
    v14 = 0;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
LABEL_13:
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *v5 )
    {
      if ( *v5 == 1 )
      {
        LODWORD(a4) = v5[4];
        v24 = "+";
        LODWORD(a2) = 0;
        v37 = 0;
        v39 = "+";
        LODWORD(a3) = 0;
        v38 = 0;
        v25 = a4;
        v26 = 0LL;
        do
        {
          v27 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v26);
          if ( v25 < v27 )
          {
            Length = v27 - v25;
            if ( (unsigned int)a4 + v5[5] - v25 <= Length )
              Length = a4 + v5[5] - v25;
            if ( v6 )
            {
              if ( CurrentIrql < 2u )
                CurrentIrql = KfRaiseIrql(2u);
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                                   *(_QWORD *)(v6 + 8),
                                   0LL,
                                   *((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)v5[4]),
                                   v25);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v5[22],
                                   v5[21],
                                   (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)(unsigned int)a4)),
                                   v25,
                                   Length);
            }
            v24 = v39;
            LODWORD(a3) = Length + v38;
            LODWORD(a2) = v37;
            v38 += Length;
          }
          LODWORD(a4) = v5[4];
          v25 = *(unsigned __int16 *)v24 + 1;
          if ( (unsigned int)a4 > v25 )
            v25 = v5[4];
          if ( v25 >= (unsigned int)a4 + v5[5] )
            break;
          a2 = (unsigned int)(a2 + 1);
          v37 = a2;
          v26 = 4 * a2;
          v24 = (char *)&PciConfigDisallowedRanges + 4 * a2 + 2;
          v39 = v24;
        }
        while ( *(_WORD *)v24 );
        if ( !(_DWORD)a3 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x");
          v40[0] = &v45;
          v40[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v40, 2LL);
        }
      }
      else
      {
        v14 = -1073741822;
      }
    }
    else if ( v6 )
    {
      if ( CurrentIrql < 2u )
        CurrentIrql = KfRaiseIrql(2u);
      Offset = v5[5];
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 56))(
                          *(_QWORD *)(v6 + 8),
                          0LL,
                          *((_QWORD *)v5 + 3),
                          v5[4]);
      if ( CurrentIrql < 2u )
        KeLowerIrql(CurrentIrql);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
    }
    goto LABEL_16;
  }
  LODWORD(a2) = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 184), 0, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 88), 0, 0) & 2) != 0 || (a2 & 1) != 0 )
    goto LABEL_6;
  v19 = AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v19 )
  {
LABEL_68:
    v14 = -1073741772;
    goto LABEL_16;
  }
  v20 = *(_QWORD *)(*(_QWORD *)v19 + 104LL);
  AMLIDereferenceHandleEx(v19);
  if ( !v20 )
  {
    v14 = -1073741772;
    goto LABEL_16;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 184), 0, 0) & 1) == 0 )
  {
    v21 = *(_QWORD *)(v20 + 8);
    v22 = (const char *)&unk_1C0067B08;
    v23 = (const char *)&unk_1C0067B08;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v22 = *(const char **)(v20 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v23 = *(const char **)(v20 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_a7cfc44ef7fe3d6eb8e4d5c01bae5db1_Traceguids,
      1,
      v20,
      v22,
      v23);
  }
LABEL_6:
  v7 = v5[19];
  if ( (v7 & 0x100) != 0 )
    goto LABEL_13;
  v8 = *((_QWORD *)v5 + 7);
  v5[19] = v7 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    v11 = gdwfAMLI;
    *v10 = v8;
    dword_1C00797B8 = 0;
    ::pszDest = 0;
    if ( (v11 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v10[8] = v5;
    v10[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)v10 + 12) = -1;
    v10[1] = v5 + 22;
    v10[2] = v5 + 21;
    PciAddressWorker = GetPciAddressWorker(v8, 0LL, 0LL, v10);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v14 = 0;
LABEL_16:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v16)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v14,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v16(*((_QWORD *)v5 + 6));
  }
  if ( v14 < 0 )
  {
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    v34 = *((_QWORD *)v5 + 1);
    if ( v34 )
    {
      dword_1C0079638 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_1C007963C = 0;
      v43 = dword_1C0079638;
    }
    v35 = *((_QWORD *)v5 + 7);
    if ( v35 )
    {
      dword_1C0079638 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_1C007963C = 0;
      v41 = dword_1C0079638;
    }
    WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Offset, (__int64)&v43, (__int64)&v41);
  }
  v17 = *((_QWORD *)v5 + 1);
  if ( v17 )
  {
    dword_1C00797B8 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
      FreeObjectHandle(v17);
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v18 = *((_QWORD *)v5 + 7);
  if ( v18 )
  {
    dword_1C00797B8 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
      FreeObjectHandle(v18);
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v14;
}
