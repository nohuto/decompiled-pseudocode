/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C0014940
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIGpeValidIndex @ 0x1C0010588 (ACPIGpeValidIndex.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0014E10 (ACPIBuildDevicePowerNodes.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00446FC (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r15
  bool v4; // si
  int v5; // r12d
  __int64 *v6; // rax
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // r8
  __int64 v11; // rbx
  unsigned __int16 v12; // cx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // esi
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // r8d
  unsigned __int8 v23; // r8
  __int64 v24; // rdx
  const char *v25; // rax
  const char *v26; // r8
  _QWORD v27[16]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 408) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C00797B8 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1u);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1465074783);
    if ( v6 )
      *(_DWORD *)(v1 + 552) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1465077855);
    *(_QWORD *)(v1 + 408) = v6;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*(_DWORD *)(v1 + 552) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v4 = (*(_QWORD *)(v1 + 8) & 0x800000000LL) == 0;
      if ( *(_WORD *)(v2 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v5 = ACPIBuildDevicePowerNodes(v1, *(_QWORD *)(a1 + 56));
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v11 = *(_QWORD *)(v2 + 32);
      v12 = *(_WORD *)(v11 + 10);
      if ( v12 != 1 )
      {
        if ( v12 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v12);
        v5 = ACPIBuildWakeEventDeviceContext(v1, v11 + 8);
        if ( v5 < 0 )
        {
          v24 = *(_QWORD *)(v1 + 8);
          v25 = (const char *)&unk_1C0067B08;
          v26 = (const char *)&unk_1C0067B08;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v25 = *(const char **)(v1 + 560);
            if ( (v24 & 0x400000000000LL) != 0 )
              v26 = *(const char **)(v1 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xAu,
            0x2Bu,
            (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
            v5,
            v1,
            v25,
            v26);
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v11 + 10));
        }
      }
      v13 = *(_QWORD *)(v2 + 32);
      v14 = *(_WORD *)(v13 + 50);
      if ( v14 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v14);
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 456) = *(_DWORD *)(v11 + 24);
        v15 = *(_QWORD *)(v13 + 64);
        if ( v15 >= 6 )
          v16 = 0;
        else
          v16 = SystemPowerStateTranslation[v15];
        *(_DWORD *)(v1 + 488) = v16;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x100000000uLL);
        }
        else
        {
          v17 = *(_QWORD *)(v1 + 952);
          if ( (v17 & 0x800000000LL) != 0 )
          {
            if ( (v17 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v11 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v1 + 952) & 0x100000000LL) == 0
        && ACPIGpeValidIndex(*(_DWORD *)(v11 + 24)) )
      {
        v18 = *(unsigned __int8 *)(v11 + 24);
        v19 = 1 << (v18 & 7);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v20 = (unsigned __int64)v18 >> 3;
        if ( ((unsigned __int8)v19 & *((_BYTE *)GpeEnable + v20)) != 0 )
        {
          if ( (*(_QWORD *)(v1 + 8) & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v20) |= v19;
            v23 = *((_BYTE *)GpeWakeHandler + v20);
            if ( (v23 & (unsigned __int8)v19) != 0 )
              *((_BYTE *)GpeWakeHandler + v20) = v23 & ~(_BYTE)v19;
          }
          else if ( ((unsigned __int8)v19 & *((_BYTE *)GpeSpecialHandler + v20)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v20) |= v19;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C00797B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
    v21 = *(_QWORD *)(v1 + 408);
    if ( v21 )
    {
      memset(v27, 0, 0x78uLL);
      v22 = *(_DWORD *)(v1 + 552) & 0x40;
      WORD1(v27[0]) = 1;
      v27[2] = 0LL;
      WORD1(v27[5]) = 1;
      v27[7] = 0LL;
      WORD1(v27[10]) = 1;
      v27[12] = 0LL;
      AMLIAsyncEvalObject(v21, 0LL, (v22 | 0x20u) >> 5, v27);
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(v1 + 8);
  v8 = (const char *)&unk_1C0067B08;
  v9 = (const char *)&unk_1C0067B08;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Cu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v5,
    v1,
    v8,
    v9);
  ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v5;
}
