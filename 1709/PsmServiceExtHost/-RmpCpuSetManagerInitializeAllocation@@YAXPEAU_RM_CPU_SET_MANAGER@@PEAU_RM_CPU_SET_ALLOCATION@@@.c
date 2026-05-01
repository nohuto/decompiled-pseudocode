/*
 * XREFs of ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037220
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  __int64 v4; // rax
  int v5; // r8d

  memset_0(a2, 0, 0x108uLL);
  v4 = HamObjectIdGenerate(2);
  *((_QWORD *)a2 + 3) = v4;
  *((_QWORD *)a2 + 5) = a1;
  *((_DWORD *)a2 + 8) = v5;
  *((_DWORD *)a2 + 4) = 1;
  *((_QWORD *)a2 + 1) = HIBYTE(v4)
                      + 37
                      * (BYTE6(v4)
                       + 37
                       * (BYTE5(v4)
                        + 37
                        * (BYTE4(v4)
                         + 37
                         * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883LL)))))));
  *((_QWORD *)a2 + 10) = (char *)a2 + 72;
  *((_QWORD *)a2 + 9) = (char *)a2 + 72;
}
