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

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 (__fastcall **v15)(); // rdi
  unsigned __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+50h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  v5 = a1;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v6 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v7 & v6) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32() )
  {
    if ( v5 == LdrpImageEntry )
      v17 = v7 | 0x200;
    else
      v17 = v7 | 0x100;
    *(_DWORD *)(v5 + 280) = v17;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(v5 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v5 + 48), 1, 0xDu, &v22, &v20);
      v9 = v20;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)a2 + a2[10] + 24;
        a1 = 0LL;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            a1 = (unsigned int)(a1 + 1);
            v10 += 40LL;
            if ( (unsigned int)a1 >= a2[3] )
              goto LABEL_14;
          }
          v19 = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v10 + 12);
          v18 = *(unsigned int *)(v10 + 8);
          LdrpMakePermanentImageCommit();
          ZwProtectVirtualMemory(-1LL, &v19, &v18, 2LL, &v21);
        }
      }
    }
  }
LABEL_14:
  if ( (unsigned int)LdrControlFlowGuardEnforced(a1) )
  {
    LOBYTE(v11) = (a2[47] & 0x4000) != 0;
    if ( ((unsigned __int8)v11 & ((*(_DWORD *)(a3 + 144) & 0x100) != 0)) == 0 )
      LdrpLogCFGModuleInfoTelemetry(v5, a2);
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced(v11) || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0LL;
  v12 = *(_QWORD **)(a3 + 112);
  if ( v12
    && (v13 = *(_QWORD *)(v5 + 48), (unsigned __int64)v12 >= v13)
    && (unsigned __int64)v12 < *(unsigned int *)(v5 + 64) + v13 - 8
    && *v12 )
  {
    v19 = *(_QWORD *)(a3 + 112);
    v18 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v19, &v18, 4LL, &v21);
    if ( (int)result < 0 )
      return result;
    *v12 = (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0
         ? LdrpValidateUserCallTargetES
         : LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v19, &v18, v21, &v21);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
  }
  v15 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v15
    || (v16 = *(_QWORD *)(v5 + 48), (unsigned __int64)v15 < v16)
    || (unsigned __int64)v15 >= *(unsigned int *)(v5 + 64) + v16 - 8
    || !*v15 )
  {
    v15 = 0LL;
    goto LABEL_35;
  }
  v19 = *(_QWORD *)(a3 + 120);
  v18 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v19, &v18, 4LL, &v21);
  if ( (int)result >= 0 )
  {
    *v15 = (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0
         ? LdrpDispatchUserCallTargetES
         : LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v19, &v18, v21, &v21);
    if ( (int)result >= 0 )
    {
LABEL_35:
      if ( !v12
        || (__int64 (__fastcall *)(_QWORD))*v12 != LdrpValidateUserCallTarget
        && (__int64 (__fastcall *)(_QWORD))*v12 != LdrpValidateUserCallTargetES
        || v15 && *v15 != LdrpDispatchUserCallTarget && *v15 != LdrpDispatchUserCallTargetES )
      {
        return 3221225534LL;
      }
      return 0LL;
    }
  }
  return result;
}
