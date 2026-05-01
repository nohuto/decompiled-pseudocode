/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180010C5C
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800108C4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180062E2C (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  DWORD v3; // esi
  __int64 v5; // rbp
  _QWORD *Value; // rbx
  bool v7; // bl
  _QWORD *v8; // rax
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v5 + 304);
  v7 = (*(_DWORD *)(v5 + 332) & 2) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v8 & 0x40) == 0 )
      __int2c();
    if ( v8[7]-- == 1LL )
      *v8 &= ~0x40uLL;
  }
  RtlReleaseSRWLockShared(v5 + 304);
  if ( v7 )
  {
    *a2 = 1;
  }
  else
  {
    v11 = 0;
    result = RmHamHostActOnProcesses(
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
               0x400u,
               0,
               (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostQueryProcessDebuggedCallback,
               &v11);
    if ( (int)result < 0 )
      return result;
    *a2 = v11;
  }
  return 0LL;
}
