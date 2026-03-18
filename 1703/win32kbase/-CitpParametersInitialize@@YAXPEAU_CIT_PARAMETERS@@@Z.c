/*
 * XREFs of ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008694C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0086350 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CitpParametersInitialize(struct _CIT_PARAMETERS *a1)
{
  memset(a1, 0, 0x70uLL);
  *((_DWORD *)a1 + 22) = 2;
  *((_DWORD *)a1 + 14) = 60000;
  *((_QWORD *)a1 + 1) = 144000000000LL;
  *((_QWORD *)a1 + 2) = 864000000000LL;
  *((_QWORD *)a1 + 3) = 6048000000000LL;
  *((_QWORD *)a1 + 4) = 36000000000LL;
  *((_DWORD *)a1 + 10) = 3600000;
  *((_DWORD *)a1 + 15) = 3600000;
  *((_DWORD *)a1 + 19) = 60000;
  *((_QWORD *)a1 + 8) = L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:";
  *((_DWORD *)a1 + 1) = 64;
  *((_DWORD *)a1 + 11) = 128;
  *((_DWORD *)a1 + 12) = 3024000;
  *((_DWORD *)a1 + 13) = 4096;
  *((_DWORD *)a1 + 18) = 1;
  *((_DWORD *)a1 + 20) = 1000;
  *((_WORD *)a1 + 45) = 16392;
  *((_BYTE *)a1 + 94) = 1;
  *((_BYTE *)a1 + 98) = 1;
  CitpParametersCompute(a1);
}
