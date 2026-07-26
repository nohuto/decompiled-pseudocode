/*
 * XREFs of ndisWmiGetGuid @ 0x1C000930C
 * Callers:
 *     ndisWmiEnableEvents @ 0x1C00B60B8 (ndisWmiEnableEvents.c)
 *     ndisQueryGuidData @ 0x1C00B6788 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00B6A0C (ndisQueryGuidDataSize.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00C526C (ndisWmiQueryAllData.c)
 *     ndisWmiDisableEvents @ 0x1C00CA7BC (ndisWmiDisableEvents.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiGetGuid(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // edx
  unsigned int i; // edi
  __int64 v9; // rcx
  bool v10; // zf

  *a1 = 0LL;
  v5 = *(_QWORD *)(a2 + 1368);
  v6 = -1073741823;
  if ( v5 )
  {
    v7 = *(unsigned __int16 *)(a2 + 1386);
    for ( i = 0; i < v7; v5 += 28LL )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)v5 - *a3;
        if ( *(_QWORD *)v5 == *a3 )
          v9 = *(_QWORD *)(v5 + 8) - a3[1];
        v10 = v9 == 0;
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 24) & 2) == 0 )
          goto LABEL_8;
        v10 = *(_DWORD *)(v5 + 16) == a4;
      }
      if ( v10 )
      {
        *a1 = v5;
        return 0;
      }
LABEL_8:
      ++i;
    }
  }
  return v6;
}
