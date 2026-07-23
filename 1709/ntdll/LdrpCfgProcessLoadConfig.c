/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x18002B994
 * Callers:
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrpMakePermanentImageCommit @ 0x180079934 (LdrpMakePermanentImageCommit.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18007F364 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007F564 (LdrpIsModuleUnderSystem32.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v6; // r9d
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  __int64 (__fastcall **v17)(); // rdi
  unsigned __int64 v18; // rcx
  int v19; // edi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  ULONG NewProtect; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+58h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v6 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v7 & v6) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32() )
  {
    if ( a1 == LdrpImageEntry )
      v19 = v7 | 0x200;
    else
      v19 = v7 | 0x100;
    *(_DWORD *)(a1 + 280) = v19;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 0xDu, &v24, &v22);
      v9 = v22;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)a2 + a2[10] + 24;
        v11 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            ++v11;
            v10 += 40LL;
            if ( v11 >= a2[3] )
              goto LABEL_14;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v10 + 12));
          RegionSize = *(unsigned int *)(v10 + 8);
          LdrpMakePermanentImageCommit();
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
        }
      }
    }
  }
LABEL_14:
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 && ((a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0) )
    LdrpLogCFGModuleInfoTelemetry(a1, a2);
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( !v13 || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0;
  v14 = *(_QWORD **)(a3 + 112);
  if ( v14
    && (v15 = *(_QWORD *)(a1 + 48), (unsigned __int64)v14 >= v15)
    && (unsigned __int64)v14 < *(unsigned int *)(a1 + 64) + v15 - 8
    && *v14 )
  {
    BaseAddress = *(PVOID *)(a3 + 112);
    RegionSize = 8LL;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    *v14 = (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0
         ? LdrpValidateUserCallTargetES
         : LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
  }
  else
  {
    v14 = 0LL;
  }
  v17 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v17
    || (v18 = *(_QWORD *)(a1 + 48), (unsigned __int64)v17 < v18)
    || (unsigned __int64)v17 >= *(unsigned int *)(a1 + 64) + v18 - 8
    || !*v17 )
  {
    v17 = 0LL;
    goto LABEL_35;
  }
  BaseAddress = *(PVOID *)(a3 + 120);
  RegionSize = 8LL;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  if ( result >= 0 )
  {
    *v17 = (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0
         ? LdrpDispatchUserCallTargetES
         : LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result >= 0 )
    {
LABEL_35:
      if ( !v14
        || (__int64 (__fastcall *)(_QWORD))*v14 != LdrpValidateUserCallTarget
        && (__int64 (__fastcall *)(_QWORD))*v14 != LdrpValidateUserCallTargetES
        || v17 && *v17 != LdrpDispatchUserCallTarget && *v17 != LdrpDispatchUserCallTargetES )
      {
        return -1073741762;
      }
      return 0;
    }
  }
  return result;
}
