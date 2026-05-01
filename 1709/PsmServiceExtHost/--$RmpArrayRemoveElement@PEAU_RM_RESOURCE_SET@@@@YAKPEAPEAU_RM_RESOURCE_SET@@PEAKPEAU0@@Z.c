/*
 * XREFs of ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x18000179C
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpArrayRemoveElement<_RM_RESOURCE_SET *>(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = 0LL;
  v5 = *a2;
  if ( !*a2 )
    return 0LL;
  do
  {
    if ( *(_QWORD *)(a1 + 8 * v4) == a3 )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < v5 );
  if ( (unsigned int)v4 >= v5 )
    return 0LL;
  v6 = v5 - 1;
  result = 1LL;
  *a2 = v6;
  *(_QWORD *)(a1 + 8 * v4) = *(_QWORD *)(a1 + 8LL * v6);
  return result;
}
