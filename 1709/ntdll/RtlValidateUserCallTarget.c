/*
 * XREFs of RtlValidateUserCallTarget @ 0x1800014D4
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     CfgAddressToBitState @ 0x180001558 (CfgAddressToBitState.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(__int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  int v11; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, LdrSystemDllInitBlock.CfgBitMap);
  v7 = 0;
  if ( !v4 )
    goto LABEL_8;
  v8 = v4 - 1;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v6, v5, 0LL) )
      {
        *a2 = 16;
        return v7;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v7;
  }
  v9 = v3 & 0xF;
  *a2 = ((unsigned int)v9 != 0LL) + 1;
  LOBYTE(v7) = v9 == 0;
  return v7;
}
