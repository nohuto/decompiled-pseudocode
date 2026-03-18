/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C00321A0
 * Callers:
 *     PciConfigInternal @ 0x1C0031FCC (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0032090 (PciConfigSpaceHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C000997C (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     GetOpRegionScope @ 0x1C0030CC8 (GetOpRegionScope.c)
 *     GetPciAddress @ 0x1C0030EAC (GetPciAddress.c)
 *     WPP_RECORDER_SF_ss @ 0x1C00326F8 (WPP_RECORDER_SF_ss.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int *v4; // rbx
  ULONG BusDataByOffset; // eax
  int v6; // edi
  __int64 *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int OpRegionScope; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  volatile signed __int32 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  const char *v18; // rax
  const char *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int PciAddress; // eax
  unsigned __int8 CurrentIrql; // si
  ULONG v24; // r14d
  __int64 v25; // rax
  ULONG v26; // edi
  int v27; // r10d
  int v28; // r12d
  unsigned int v29; // ecx
  ULONG v30; // r15d
  ULONG Length; // r15d
  KIRQL v32; // al
  void (__fastcall *v33)(_QWORD); // rax
  __int64 v34; // rax
  __int64 v35; // rax
  volatile signed __int32 *v36; // rcx
  volatile signed __int32 *v37; // rcx
  ULONG Offset; // [rsp+20h] [rbp-79h]
  ULONG v39; // [rsp+50h] [rbp-49h]
  int v40; // [rsp+54h] [rbp-45h]
  const char *v41; // [rsp+60h] [rbp-39h]
  __int16 *v42[2]; // [rsp+68h] [rbp-31h] BYREF
  int v43; // [rsp+78h] [rbp-21h] BYREF
  char v44; // [rsp+7Ch] [rbp-1Dh]
  int v45; // [rsp+80h] [rbp-19h] BYREF
  char v46; // [rsp+84h] [rbp-15h]
  __int64 v47; // [rsp+88h] [rbp-11h] BYREF
  wchar_t v48; // [rsp+90h] [rbp-9h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-1h] BYREF

  v4 = (unsigned int *)a4;
  v48 = aAcpi_0[4];
  BusDataByOffset = 0;
  v47 = *(_QWORD *)L"ACPI";
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  if ( (int)a2 < 0 )
  {
    v6 = 0;
    goto LABEL_48;
  }
  v7 = (__int64 *)(a4 + 56);
  if ( !*(_QWORD *)(a4 + 56) )
  {
    v8 = *(_DWORD *)(a4 + 76);
    if ( (v8 & 0x1000) != 0 )
      goto LABEL_28;
    v9 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v8 | 0x1000;
    OpRegionScope = GetOpRegionScope(v9, a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
      goto LABEL_8;
    v12 = *((_QWORD *)v4 + 1);
    if ( v12 )
    {
      *(_QWORD *)(*(_QWORD *)v12 + 104LL) = *v7;
      v13 = *v7;
      dword_1C00677B8 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    }
  }
  a3 = *(const char **)(*(_QWORD *)*v7 + 104LL);
  if ( !a3 )
  {
LABEL_8:
    v6 = 0;
    BusDataByOffset = 0;
    goto LABEL_48;
  }
  v14 = *((_QWORD *)a3 + 10);
  if ( v14 )
    goto LABEL_25;
  LODWORD(a2) = _InterlockedCompareExchange((volatile signed __int32 *)a3 + 46, 0, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a3 + 22, 0, 0) & 2) == 0 && (a2 & 1) == 0 )
  {
    v15 = (volatile signed __int32 *)AMLIGetParent(*v7);
    if ( v15 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)v15 + 104LL);
      AMLIDereferenceHandleEx(v15);
      if ( v16 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 184), 0, 0) & 1) == 0 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          v18 = (const char *)&unk_1C005B1F0;
          v19 = (const char *)&unk_1C005B1F0;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v18 = *(const char **)(v16 + 560);
            if ( (v17 & 0x400000000000LL) != 0 )
              v19 = *(const char **)(v16 + 568);
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xAu,
            (__int64)&WPP_81d8e93eb8cd366f72cf11447b36d96d_Traceguids,
            1,
            v16,
            v18,
            v19);
        }
        goto LABEL_22;
      }
    }
LABEL_28:
    v6 = -1073741772;
    goto LABEL_29;
  }
LABEL_22:
  v20 = v4[19];
  if ( (v20 & 0x100) == 0 )
  {
    v21 = *v7;
    v4[19] = v20 | 0x100;
    PciAddress = GetPciAddress(
                   v21,
                   (__int64)PciConfigSpaceHandlerWorker,
                   (__int64)v4,
                   (__int64)(v4 + 22),
                   (__int64)(v4 + 21));
    if ( PciAddress == 259 )
      return 259LL;
    if ( PciAddress < 0 )
      goto LABEL_8;
  }
LABEL_25:
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      v6 = -1073741822;
LABEL_29:
      BusDataByOffset = 0;
      goto LABEL_48;
    }
    v24 = v4[4];
    a3 = "+";
    LODWORD(a2) = v4[5];
    v25 = 0LL;
    v41 = "+";
    v26 = 0;
    v40 = 0;
    v27 = 0;
    v28 = 0;
    LODWORD(a4) = v24;
    v29 = v24;
    do
    {
      v30 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v25);
      if ( v24 < v30 )
      {
        Length = v30 - v24;
        if ( (unsigned int)a2 + (_DWORD)a4 - v24 <= Length )
          Length = a2 + a4 - v24;
        if ( v14 )
        {
          if ( CurrentIrql < 2u )
          {
            v32 = KfRaiseIrql(2u);
            LODWORD(a4) = v4[4];
            CurrentIrql = v32;
          }
          Offset = Length;
          v26 += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v14 + 48))(
                   *(_QWORD *)(v14 + 8),
                   0LL,
                   *((_QWORD *)v4 + 3) + 4 * (v24 - (unsigned __int64)(unsigned int)a4),
                   v24);
          if ( CurrentIrql < 2u )
            KeLowerIrql(CurrentIrql);
        }
        else
        {
          v26 += HalSetBusDataByOffset(
                   PCIConfiguration,
                   v4[22],
                   v4[21],
                   (PVOID)(*((_QWORD *)v4 + 3) + 4 * (v24 - (unsigned __int64)(unsigned int)a4)),
                   v24,
                   Length);
        }
        v29 = v4[4];
        a3 = v41;
        v28 += Length;
        v27 = v40;
      }
      v24 = v29;
      LODWORD(a2) = v4[5];
      LODWORD(a4) = v29;
      if ( v29 <= (unsigned int)*(unsigned __int16 *)a3 + 1 )
        v24 = *(unsigned __int16 *)a3 + 1;
      if ( v24 >= v29 + (unsigned int)a2 )
        break;
      v25 = 4LL * (unsigned int)++v27;
      a3 = (char *)&PciConfigDisallowedRanges + v25 + 2;
      v40 = v27;
      v41 = a3;
    }
    while ( *(_WORD *)a3 );
    v39 = v26;
    v6 = 0;
    if ( !v28 )
    {
      RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", v29);
      v42[0] = (__int16 *)&v47;
      v42[1] = (__int16 *)pszDest;
      ACPIWriteEventLogEntry(-1073414134, v42, 2u);
    }
    goto LABEL_47;
  }
  if ( v14 )
  {
    if ( CurrentIrql < 2u )
      CurrentIrql = KfRaiseIrql(2u);
    Offset = v4[5];
    BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 56))(
                        *(_QWORD *)(v14 + 8),
                        0LL,
                        *((_QWORD *)v4 + 3),
                        v4[4]);
    v39 = BusDataByOffset;
    if ( CurrentIrql >= 2u )
      goto LABEL_48;
    KeLowerIrql(CurrentIrql);
LABEL_47:
    BusDataByOffset = v39;
    goto LABEL_48;
  }
  BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v4[22], v4[21], *((PVOID *)v4 + 3), v4[4], v4[5]);
LABEL_48:
  if ( !*v4 && !BusDataByOffset )
    memset(*((void **)v4 + 3), 255, v4[5]);
  if ( v4[20] )
  {
    v33 = (void (__fastcall *)(_QWORD))*((_QWORD *)v4 + 5);
    if ( v4[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v33)(
        *((_QWORD *)v4 + 7),
        (unsigned int)v6,
        0LL,
        *((_QWORD *)v4 + 6));
    else
      v33(*((_QWORD *)v4 + 6));
  }
  if ( v6 < 0 )
  {
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v34 = *((_QWORD *)v4 + 1);
    if ( v34 )
    {
      dword_1C00678C0 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_1C00678C4 = 0;
      v45 = dword_1C00678C0;
    }
    v35 = *((_QWORD *)v4 + 7);
    if ( v35 )
    {
      dword_1C00678C0 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_1C00678C4 = 0;
      v43 = dword_1C00678C0;
    }
    WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, a2, (_DWORD)a3, a4, Offset, (__int64)&v45, (__int64)&v43);
  }
  v36 = (volatile signed __int32 *)*((_QWORD *)v4 + 1);
  if ( v36 )
  {
    AMLIDereferenceHandleEx(v36);
    *((_QWORD *)v4 + 1) = 0LL;
  }
  v37 = (volatile signed __int32 *)*((_QWORD *)v4 + 7);
  if ( v37 )
  {
    AMLIDereferenceHandleEx(v37);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  ExFreePoolWithTag(v4, 0x46706341u);
  return (unsigned int)v6;
}
