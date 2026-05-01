/*
 * XREFs of ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B97C
 * Callers:
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B8A4 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementIsHostAllowedToInSwap(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  unsigned int v2; // ebx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edx
  unsigned int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  unsigned int *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  int *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  int *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  int *v23; // [rsp+B0h] [rbp+37h]
  __int64 v24; // [rsp+B8h] [rbp+3Fh]

  if ( (*((_BYTE *)a1 + 1320) & 0x40) != 0 || !*((_DWORD *)a2 + 10) || (v2 = 0, (*((_BYTE *)a1 + 1008) & 0x20) != 0) )
    v2 = 1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v7 = *(_DWORD *)(v5 + 1012);
    v13 = *(_QWORD *)(v5 + 24);
    v15 = &v13;
    v17 = &v9;
    v10 = *(_DWORD *)(v6 + 40);
    v19 = &v10;
    v11 = *(_DWORD *)(v5 + 1320);
    v21 = &v11;
    v23 = &v12;
    v16 = 8LL;
    v9 = v2;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v12 = v7;
    v24 = 4LL;
    TlgWrite(v3, &unk_1800589CB, v4, (LPCGUID)v5, 7u, &pData);
  }
  return v2;
}
