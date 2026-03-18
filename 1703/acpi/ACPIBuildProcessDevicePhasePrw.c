/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIGpeValidIndex @ 0x1C00202D8 (ACPIGpeValidIndex.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0044D3C (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r15
  bool v7; // si
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8
  __int64 v16; // rbx
  unsigned __int16 v17; // cx
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ebx
  char v24; // cl
  __int64 v25; // rbx
  int v26; // esi
  __int64 v27; // rbx
  int v28; // r8d
  unsigned __int8 v29; // r8
  __int64 v30; // rdx
  const char *v31; // rax
  const char *v32; // r8
  _QWORD v33[16]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v7 = 0;
  v8 = 0;
  if ( *(_QWORD *)(v4 + 408) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C00776F8 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v9 = AMLIGetNamedChild(*(_QWORD *)(v4 + 712), 1465074783LL, a3, a4);
    if ( v9 )
      *(_DWORD *)(v4 + 552) |= 0x40u;
    else
      v9 = AMLIGetNamedChild(*(_QWORD *)(v4 + 712), 1465077855LL, v10, v11);
    *(_QWORD *)(v4 + 408) = v9;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*(_DWORD *)(v4 + 552) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v7 = (*(_QWORD *)(v4 + 8) & 0x800000000LL) == 0;
      if ( *(_WORD *)(v5 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v8 = ACPIBuildDevicePowerNodes(v4, *(_QWORD *)(a1 + 56));
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v16 = *(_QWORD *)(v5 + 32);
      v17 = *(_WORD *)(v16 + 10);
      if ( v17 != 1 )
      {
        if ( v17 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v4, *(_QWORD *)(a1 + 56), v17);
        v8 = ACPIBuildWakeEventDeviceContext(v4, v16 + 8);
        if ( v8 < 0 )
        {
          v30 = *(_QWORD *)(v4 + 8);
          v31 = (const char *)&unk_1C0066CD0;
          v32 = (const char *)&unk_1C0066CD0;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v31 = *(const char **)(v4 + 560);
            if ( (v30 & 0x400000000000LL) != 0 )
              v32 = *(const char **)(v4 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xAu,
            0x2Bu,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            v8,
            v4,
            v31,
            v32);
          KeBugCheckEx(0xA5u, 6uLL, v4, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v16 + 10));
        }
      }
      v18 = *(_QWORD *)(v5 + 32);
      v19 = *(_WORD *)(v18 + 50);
      if ( v19 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v4, *(_QWORD *)(a1 + 56), v19);
      if ( !v7 )
      {
        *(_DWORD *)(v4 + 456) = *(_DWORD *)(v16 + 24);
        v20 = *(_QWORD *)(v18 + 64);
        if ( v20 >= 6 )
          v21 = 0;
        else
          v21 = SystemPowerStateTranslation[v20];
        *(_DWORD *)(v4 + 488) = v21;
        _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 0x100000000uLL);
        }
        else
        {
          v22 = *(_QWORD *)(v4 + 952);
          if ( (v22 & 0x800000000LL) != 0 )
          {
            if ( (v22 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v4, 0LL, 0LL);
            if ( *(_QWORD *)(v16 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v4, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v4 + 952) & 0x100000000LL) == 0
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v16 + 24)) )
      {
        v23 = *(unsigned __int8 *)(v16 + 24);
        v24 = v23 & 7;
        v25 = v23 >> 3;
        v26 = 1 << v24;
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        if ( ((unsigned __int8)v26 & *((_BYTE *)GpeEnable + v25)) != 0 )
        {
          if ( (*(_QWORD *)(v4 + 8) & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v25) |= v26;
            v29 = *((_BYTE *)GpeWakeHandler + v25);
            if ( (v29 & (unsigned __int8)v26) != 0 )
              *((_BYTE *)GpeWakeHandler + v25) = v29 & ~(_BYTE)v26;
          }
          else if ( ((unsigned __int8)v26 & *((_BYTE *)GpeSpecialHandler + v25)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v25) |= v26;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(v5, 1LL);
    v27 = *(_QWORD *)(v4 + 408);
    if ( v27 )
    {
      memset(v33, 0, 0x78uLL);
      v28 = *(_DWORD *)(v4 + 552) & 0x40;
      WORD1(v33[0]) = 1;
      v33[2] = 0LL;
      WORD1(v33[5]) = 1;
      v33[7] = 0LL;
      WORD1(v33[10]) = 1;
      v33[12] = 0LL;
      AMLIAsyncEvalObject(v27, 0LL, (v28 | 0x20u) >> 5, v33, 0LL, 0LL);
    }
  }
LABEL_6:
  v12 = *(_QWORD *)(v4 + 8);
  v13 = (const char *)&unk_1C0066CD0;
  v14 = (const char *)&unk_1C0066CD0;
  if ( (v12 & 0x200000000000LL) != 0 )
  {
    v13 = *(const char **)(v4 + 560);
    if ( (v12 & 0x400000000000LL) != 0 )
      v14 = *(const char **)(v4 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Cu,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v8,
    v4,
    v13,
    v14);
  ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v8;
}
