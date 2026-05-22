/*
 * XREFs of ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18007F198
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  __int64 v4; // r13
  int v5; // r14d
  int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rsi

  v2 = *a2;
  v3 = 0;
  v4 = a2[1];
  v5 = 0;
  v6 = 0;
  if ( *a2 == v4 )
  {
LABEL_19:
    v5 = 1;
    goto LABEL_20;
  }
  while ( 2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
    v8 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    while ( v7 != v8 )
    {
      v9 = v7 + 8;
      if ( v7 == -8
        || (*(_QWORD *)(v7 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
        || (unsigned int)__std_type_info_compare((*(_QWORD *)(v7 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8, &qword_1801348F8) )
      {
        v9 = 0LL;
      }
      if ( v9 )
      {
        if ( !v5 )
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 24LL))(*(_QWORD *)v9 + 8LL);
        if ( !v6 )
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 32LL))(*(_QWORD *)v9 + 8LL);
        if ( v5 && v6 )
          goto LABEL_18;
        break;
      }
      v7 += 72LL;
    }
    v2 += 8LL;
    if ( v2 != v4 )
      continue;
    break;
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_19;
LABEL_20:
  if ( !v6 )
    v6 = 2;
  if ( v5 == 1 )
    LOBYTE(v3) = v6 == 1;
  else
    return 3 - (unsigned int)(v6 != 1);
  return v3;
}
