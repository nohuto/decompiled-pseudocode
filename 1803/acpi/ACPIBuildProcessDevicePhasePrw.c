/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0011C80 (ACPIBuildWakeEventDeviceContext.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     ACPIGpeValidIndex @ 0x1C0027DE4 (ACPIGpeValidIndex.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r13
  bool v4; // r14
  int v5; // r15d
  __int64 *v6; // rax
  ULONG_PTR v7; // rdx
  __int64 v8; // rdi
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // edi
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // r8
  __int64 v22; // rdi
  int v23; // r8d
  __int64 v24; // rdx
  void *v25; // rax
  void *v26; // r8
  _QWORD v28[16]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 408) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C00677B8 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1u);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1465074783);
    if ( v6 )
      *(_DWORD *)(v1 + 552) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1465077855);
    *(_QWORD *)(v1 + 408) = v6;
    v7 = *(_QWORD *)(a1 + 56);
    if ( !v7 )
    {
      if ( (*(_DWORD *)(v1 + 552) & 0x40) == 0 )
        goto LABEL_48;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000000uLL);
      v7 = *(_QWORD *)(a1 + 56);
    }
    if ( v7 )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v4 = (*(_QWORD *)(v1 + 8) & 0x800000000LL) == 0;
      if ( *(_WORD *)(v2 + 2) != 4 )
      {
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
        v7 = *(_QWORD *)(a1 + 56);
      }
      v5 = ACPIBuildDevicePowerNodes(v1, v7, v2, 0);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v8 = *(_QWORD *)(v2 + 32);
      v9 = *(_WORD *)(v8 + 10);
      if ( v9 != 1 )
      {
        if ( v9 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v9);
        v5 = ACPIBuildWakeEventDeviceContext(v1, v8 + 8);
        if ( v5 < 0 )
        {
          v10 = *(_QWORD *)(v1 + 8);
          v11 = &unk_1C005B1F0;
          v12 = &unk_1C005B1F0;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v11 = *(void **)(v1 + 560);
            if ( (v10 & 0x400000000000LL) != 0 )
              v12 = *(void **)(v1 + 568);
          }
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            10,
            43,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v5,
            v1,
            (__int64)v11,
            (__int64)v12);
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v8 + 10));
        }
      }
      v13 = *(_QWORD *)(v2 + 32);
      v14 = *(_WORD *)(v13 + 50);
      if ( v14 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v14);
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 456) = *(_DWORD *)(v8 + 24);
        v15 = *(_QWORD *)(v13 + 64);
        if ( v15 < 6 )
          v16 = SystemPowerStateTranslation[v15];
        else
          v16 = 0;
        *(_DWORD *)(v1 + 488) = v16;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x100000000uLL);
        }
        else
        {
          v20 = *(_QWORD *)(v1 + 952);
          if ( (v20 & 0x800000000LL) != 0 )
          {
            if ( (v20 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v8 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133) && (*(_QWORD *)(v1 + 952) & 0x100000000LL) == 0 )
      {
        v17 = *(_DWORD *)(v8 + 24);
        if ( (unsigned __int8)ACPIGpeValidIndex(v17) )
        {
          v18 = 1 << (v17 & 7);
          KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
          v19 = (unsigned __int64)(unsigned __int8)v17 >> 3;
          if ( ((unsigned __int8)v18 & *((_BYTE *)GpeEnable + v19)) != 0 )
          {
            if ( (*(_QWORD *)(v1 + 8) & 0x800000000LL) != 0 )
            {
              *((_BYTE *)GpeSpecialHandler + v19) |= v18;
              v21 = *((_BYTE *)GpeWakeHandler + v19);
              if ( (v21 & (unsigned __int8)v18) != 0 )
                *((_BYTE *)GpeWakeHandler + v19) = v21 & ~(_BYTE)v18;
            }
            else if ( ((unsigned __int8)v18 & *((_BYTE *)GpeSpecialHandler + v19)) == 0 )
            {
              *((_BYTE *)GpeWakeHandler + v19) |= v18;
            }
          }
          KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
        }
      }
    }
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
    v22 = *(_QWORD *)(v1 + 408);
    if ( v22 )
    {
      memset(v28, 0, 0x78uLL);
      v23 = *(_DWORD *)(v1 + 552) & 0x40;
      WORD1(v28[0]) = 1;
      v28[2] = 0LL;
      WORD1(v28[5]) = 1;
      v28[7] = 0LL;
      WORD1(v28[10]) = 1;
      v28[12] = 0LL;
      AMLIAsyncEvalObject(v22, 0LL, (v23 | 0x20u) >> 5, v28, 0LL, 0LL);
    }
  }
LABEL_48:
  v24 = *(_QWORD *)(v1 + 8);
  v25 = &unk_1C005B1F0;
  v26 = &unk_1C005B1F0;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = *(void **)(v1 + 560);
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = *(void **)(v1 + 568);
  }
  LOBYTE(v24) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v24,
    6,
    44,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v5,
    v1,
    (__int64)v25,
    (__int64)v26);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
