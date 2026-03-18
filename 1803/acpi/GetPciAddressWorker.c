/*
 * XREFs of GetPciAddressWorker @ 0x1C0030F70
 * Callers:
 *     GetPciAddress @ 0x1C0030EAC (GetPciAddress.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     CacheBBNResult @ 0x1C0030B5C (CacheBBNResult.c)
 *     GetCachedBBNResult @ 0x1C0030C40 (GetCachedBBNResult.c)
 *     GetPciAddress @ 0x1C0030EAC (GetPciAddress.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall GetPciAddressWorker(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rsi
  unsigned int CachedBBNResult; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int PciAddress; // eax
  ULONG BusDataByOffset; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  _BYTE Buffer[64]; // [rsp+50h] [rbp-88h] BYREF

  v5 = 0LL;
  CachedBBNResult = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 48));
  if ( a2 < 0 )
    goto LABEL_43;
  v8 = *(_DWORD *)(a4 + 32);
  if ( (v8 & 8) == 0 )
  {
    v9 = *(_QWORD *)a4;
    *(_DWORD *)(a4 + 32) = v8 | 8;
    v10 = ACPIGet(v9, 0x5244415Fu, -1543240702, 0LL, 0, (__int64)GetPciAddressWorker, a4, a4 + 36, 0LL);
    CachedBBNResult = v10;
    if ( v10 == 259 )
      return CachedBBNResult;
    if ( v10 < 0 )
      goto LABEL_43;
  }
  if ( (*(_DWORD *)(a4 + 32) & 0x100) == 0 )
  {
    **(_DWORD **)(a4 + 16) ^= (**(_DWORD **)(a4 + 16) ^ (32 * *(_DWORD *)(a4 + 36))) & 0xE0;
    **(_DWORD **)(a4 + 16) ^= (**(_DWORD **)(a4 + 16) ^ *(unsigned __int16 *)(a4 + 38)) & 0x1F;
    *(_DWORD *)(a4 + 32) |= 0x100u;
  }
  **(_DWORD **)(a4 + 8) = 0;
  v5 = *(volatile signed __int32 **)a4;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  if ( (unsigned __int8)AMLIIsNamedChildPresent(v5, 1145653343LL) )
    goto LABEL_53;
  AMLIDereferenceHandleEx(v5);
  v11 = AMLIGetParent(*(_QWORD *)a4);
  v5 = (volatile signed __int32 *)v11;
  if ( !v11 )
  {
    CachedBBNResult = -1073741661;
LABEL_43:
    if ( *(_DWORD *)(a4 + 48) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a4 + 56))(
        a1,
        CachedBBNResult,
        0LL,
        *(_QWORD *)(a4 + 64));
    if ( *(_QWORD *)a4 )
    {
      AMLIDereferenceHandleEx(*(volatile signed __int32 **)a4);
      *(_QWORD *)a4 = 0LL;
    }
    ExFreePoolWithTag((PVOID)a4, 0);
    goto LABEL_48;
  }
  if ( (unsigned __int8)AMLIIsNamedChildPresent(v11, 1145653343LL) )
  {
LABEL_53:
    if ( (unsigned __int8)AMLIIsNamedChildPresent(v5, 1312965215LL) )
    {
      v16 = *(_DWORD *)(a4 + 32);
      if ( (v16 & 0x2000) == 0 )
      {
        *(_DWORD *)(a4 + 32) = v16 | 0x2000;
        CachedBBNResult = GetCachedBBNResult((__int64)v5, (_DWORD *)(a4 + 44));
        if ( CachedBBNResult != 0x40000000 )
          CachedBBNResult = ACPIGet(
                              (__int64)v5,
                              0x4E42425Fu,
                              604241922,
                              0LL,
                              0,
                              (__int64)GetPciAddressWorker,
                              a4,
                              a4 + 44,
                              0LL);
        if ( CachedBBNResult == 259 )
          goto LABEL_48;
        if ( (CachedBBNResult & 0x80000000) != 0 )
          goto LABEL_43;
      }
      if ( CachedBBNResult != 0x40000000 )
        CacheBBNResult((__int64)v5, *(_DWORD *)(a4 + 44));
      if ( (AcpiOverrideAttributes & 0x1000) == 0 && (unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
      {
        v17 = *(_DWORD *)(a4 + 32);
        if ( (v17 & 0x4000) == 0 )
        {
          *(_DWORD *)(a4 + 32) = v17 | 0x4000;
          v18 = ACPIGet((__int64)v5, 0x4745535Fu, 604241922, 0LL, 0, (__int64)GetPciAddressWorker, a4, a4 + 40, 0LL);
          CachedBBNResult = v18;
          if ( v18 == 259 )
            goto LABEL_48;
          if ( v18 < 0 )
            goto LABEL_43;
        }
        *(_DWORD *)(a4 + 44) |= (unsigned __int16)*(_DWORD *)(a4 + 40) << 8;
      }
      (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(*(unsigned int *)(a4 + 44));
      CachedBBNResult = 0;
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a4 + 44);
      v19 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
      if ( v19 )
      {
        _InterlockedOr64((volatile signed __int64 *)(v19 + 8), 0x2000000uLL);
        _InterlockedOr((volatile signed __int32 *)(v19 + 184), 1u);
      }
      goto LABEL_43;
    }
    if ( (AcpiOverrideAttributes & 0x1000) == 0 && (unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
    {
      v20 = *(_DWORD *)(a4 + 32);
      if ( (v20 & 0x4000) == 0 )
      {
        *(_DWORD *)(a4 + 32) = v20 | 0x4000;
        v21 = ACPIGet((__int64)v5, 0x4745535Fu, 604241922, 0LL, 0, (__int64)GetPciAddressWorker, a4, a4 + 40, 0LL);
        CachedBBNResult = v21;
        if ( v21 == 259 )
          goto LABEL_48;
        if ( v21 < 0 )
          goto LABEL_43;
      }
      **(_DWORD **)(a4 + 8) = (unsigned __int16)*(_DWORD *)(a4 + 40) << 8;
    }
LABEL_42:
    CachedBBNResult = 0;
    goto LABEL_43;
  }
  v12 = *(_DWORD *)(a4 + 32);
  if ( (v12 & 0x20) != 0 )
  {
LABEL_16:
    BusDataByOffset = HalGetBusDataByOffset(
                        PCIConfiguration,
                        *(_DWORD *)(a4 + 24),
                        *(_DWORD *)(a4 + 28),
                        Buffer,
                        0,
                        0x1Au);
    v15 = *(_DWORD *)(a4 + 24) & 0xFFFF00;
    if ( BusDataByOffset && (Buffer[14] & 0x7Fu) - 1 <= 1 )
    {
      **(_DWORD **)(a4 + 8) = Buffer[25] | v15;
      (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(**(unsigned int **)(a4 + 8));
    }
    else
    {
      **(_DWORD **)(a4 + 8) = v15;
    }
    goto LABEL_42;
  }
  *(_DWORD *)(a4 + 32) = v12 | 0x20;
  PciAddress = GetPciAddress((__int64)v5, (__int64)GetPciAddressWorker, a4, a4 + 24, a4 + 28);
  CachedBBNResult = PciAddress;
  if ( PciAddress != 259 )
  {
    if ( PciAddress < 0 )
      goto LABEL_43;
    goto LABEL_16;
  }
LABEL_48:
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  return CachedBBNResult;
}
