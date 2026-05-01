/*
 * XREFs of ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180008E94
 * Callers:
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180008DBC (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementIsHostAllowedToInSwap(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  unsigned int v2; // ebx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  unsigned int *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( (*((_BYTE *)a1 + 1464) & 0x40) != 0 || !*((_DWORD *)a2 + 6) || (v2 = 0, (*((_BYTE *)a1 + 1152) & 0x20) != 0) )
    v2 = 1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v11 = *(_QWORD *)(v4 + 32);
    v13 = &v11;
    v15 = &v7;
    v8 = *(_DWORD *)(v5 + 24);
    v17 = &v8;
    v9 = *(_DWORD *)(v4 + 1464);
    v19 = &v9;
    v10 = *(_DWORD *)(v4 + 1156);
    v21 = &v10;
    v14 = 8LL;
    v7 = v2;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    TlgWrite(v3, &unk_18007ED0B, 0LL, 0LL, 7u, &pData);
  }
  return v2;
}
