/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180022D10
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  _DWORD *v7; // r8
  unsigned int v8; // eax

  if ( *((_QWORD *)a1 + 14) == -1LL )
    return 0;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *((_QWORD *)a1 + 45);
  if ( v5 - 1 <= 0xFFE )
    return 0;
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 - 1 <= 0xFFE || v3 < v6 || v6 < v4 || v4 < v5 )
  {
    return 0;
  }
  else
  {
    v2 = 0;
    v7 = (_DWORD *)((char *)a1 + 80);
    v8 = 0;
    while ( *v7 == v8 )
    {
      ++v8;
      v7 += 6;
      if ( v8 >= 3 )
      {
        if ( *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 8)
          && (*((_BYTE *)a1 + 40) & 9) != 9
          && ((*((_BYTE *)a1 + 42) & 7u) - 2 > 2 || (*((_BYTE *)a1 + 40) & 3) != 0)
          && ((*((_BYTE *)a1 + 44) & 0x20) == 0 || (*((_BYTE *)a1 + 40) & 0x20) != 0) )
        {
          return 1;
        }
        return v2;
      }
    }
  }
  return v2;
}
