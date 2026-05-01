/*
 * XREFs of ??$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x1800A8058
 * Callers:
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A41F8 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CortanaProactiveTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(int *a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v4 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    v5 = *a1;
    v11 = 0;
    v14 = 0;
    v7 = v5;
    v9 = &v7;
    v10 = 4;
    v12 = a2;
    v13 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_18025A579, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
