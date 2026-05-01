/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014E40
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int16 v5; // ax
  _BOOL8 result; // rax

  result = *((_QWORD *)a1 + 15) != -1LL
        && (v1 = *((_QWORD *)a1 + 9), v1 - 1 > 0xFFE)
        && (v2 = *((_QWORD *)a1 + 8), v2 - 1 > 0xFFE)
        && (v3 = *((_QWORD *)a1 + 46), v3 - 1 > 0xFFE)
        && (v4 = *((_QWORD *)a1 + 3), v4 - 1 > 0xFFE)
        && v1 >= v4
        && v4 >= v2
        && v2 >= v3
        && *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 8)
        && (v5 = *((_WORD *)a1 + 20), (v5 & 9) != 9)
        && ((*((_BYTE *)a1 + 42) & 7u) - 2 > 2 || (v5 & 3) != 0)
        && ((*((_BYTE *)a1 + 44) & 0x20) == 0 || (v5 & 0x20) != 0);
  return result;
}
