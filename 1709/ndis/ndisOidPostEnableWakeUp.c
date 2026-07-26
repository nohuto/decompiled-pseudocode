/*
 * XREFs of ndisOidPostEnableWakeUp @ 0x1C0049760
 * Callers:
 *     <none>
 * Callees:
 *     ndisXlatePMParametersToWakeUpEnableOid @ 0x1C004A924 (ndisXlatePMParametersToWakeUpEnableOid.c)
 */

void __fastcall ndisOidPostEnableWakeUp(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int8 v3; // cl

  if ( !*((_DWORD *)a1 + 10) )
  {
    v1 = a1[4];
    if ( *(_DWORD *)(v1 + 4) == 1 && !a1[3] )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *(_BYTE *)(v2 + 32);
        if ( v3 > 6u || v3 == 6 && *(_BYTE *)(v2 + 33) >= 0x14u )
          ndisXlatePMParametersToWakeUpEnableOid(v1);
      }
    }
  }
}
