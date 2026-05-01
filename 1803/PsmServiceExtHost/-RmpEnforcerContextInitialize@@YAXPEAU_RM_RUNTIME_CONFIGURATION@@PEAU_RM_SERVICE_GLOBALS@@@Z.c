/*
 * XREFs of ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003831C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180037CC4 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall RmpEnforcerContextInitialize(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  int v4; // eax
  int v5; // eax

  *((_QWORD *)a2 + 7) = (char *)a2 + 48;
  *((_QWORD *)a2 + 6) = (char *)a2 + 48;
  memset_0((char *)a2 + 72, 0, 0x38uLL);
  *((_QWORD *)a2 + 10) = -500000LL;
  *((_DWORD *)a2 + 28) = 50;
  *((_BYTE *)a2 + 120) = 5;
  memset_0((char *)a2 + 128, 0, 0x48uLL);
  *((_QWORD *)a2 + 20) = 0LL;
  *((_QWORD *)a2 + 21) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 160);
  *((_DWORD *)a2 + 42) = 0;
  memset_0((char *)a2 + 200, 0, 0x28uLL);
  v4 = *((_DWORD *)a1 + 40);
  *((_QWORD *)a2 + 26) = (char *)a2 + 200;
  *((_QWORD *)a2 + 25) = (char *)a2 + 200;
  *((_DWORD *)a2 + 56) = v4;
  *((_DWORD *)a2 + 57) = *((_DWORD *)a1 + 41);
  *((_BYTE *)a2 + 232) = *((_BYTE *)a1 + 168);
  memset_0((char *)a2 + 240, 0, 0x60uLL);
  *((_QWORD *)a2 + 32) = (char *)a2 + 248;
  *((_QWORD *)a2 + 31) = (char *)a2 + 248;
  v5 = *((_DWORD *)a1 + 38);
  *((_QWORD *)a2 + 37) = 0LL;
  *((_QWORD *)a2 + 38) = -1LL;
  *((_QWORD *)a2 + 39) = 0LL;
  *((_QWORD *)a2 + 40) = 0LL;
  *((_DWORD *)a2 + 82) = 0;
  *((_DWORD *)a2 + 83) = 0;
  *((_DWORD *)a2 + 70) = v5;
  *((_DWORD *)a2 + 71) = *((_DWORD *)a1 + 36);
  *((_DWORD *)a2 + 72) = *((_DWORD *)a1 + 37);
}
