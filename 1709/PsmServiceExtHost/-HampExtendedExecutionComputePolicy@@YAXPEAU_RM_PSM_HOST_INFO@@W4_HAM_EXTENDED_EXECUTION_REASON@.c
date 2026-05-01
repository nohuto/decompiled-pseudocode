/*
 * XREFs of ?HampExtendedExecutionComputePolicy@@YAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180046FB0
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180042120 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004D0F8 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

unsigned int __fastcall HampExtendedExecutionComputePolicy(
        __int64 a1,
        int a2,
        const unsigned __int16 *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  const unsigned __int16 *v4; // rax
  int v7; // eax
  unsigned int result; // eax

  v4 = a3;
  if ( !a3 )
    v4 = L"Extended execution";
  HampActivityPropertiesInitialize(v4, L"GenericExtendedExecution", a4);
  v7 = *(_DWORD *)a4 | 0x16;
  *(_DWORD *)a4 = v7;
  if ( a2 == 3 )
    result = v7 & 0xFFFFFE7F | 0x100;
  else
    result = v7 | 0x280;
  *(_DWORD *)a4 = result;
  return result;
}
