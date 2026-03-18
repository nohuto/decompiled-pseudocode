/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0086E50
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C005312C (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0086FDC (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C0087160 (-CitpIsOnDefaultDesktop@@YAEXZ.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0087240 (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  int v4; // edx
  int v5; // edx
  __int16 v6; // bp
  __int64 v7; // rax
  unsigned __int8 IsUserDesktopActive; // al

  memset(a1, 0, 0x3F0uLL);
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  *((_DWORD *)a1 + 94) = 0;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_DWORD *)a1 + 95) = 0;
  *((_QWORD *)a1 + 121) = (char *)a1 + 960;
  *((_QWORD *)a1 + 120) = (char *)a1 + 960;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 432) & 0xD7 | 8;
  *((_DWORD *)a1 + 134) = 1;
  *((_BYTE *)a1 + 432) = v3;
  *((_BYTE *)a1 + 432) ^= (*((_BYTE *)a1 + 432) ^ (16 * CitpIsOnDefaultDesktop())) & 0x10;
  *((_DWORD *)a1 + 137) = v2;
  *((_DWORD *)a1 + 138) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 560), 1);
  *((_DWORD *)a1 + 143) = v2;
  *((_DWORD *)a1 + 144) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 584), v4);
  v6 = v5 + 87;
  *((_DWORD *)a1 + 234) = v2;
  memset((char *)a1 + 848, 0, (unsigned int)(v5 + 87));
  *((_WORD *)a1 + 424) = v6 + 118;
  v7 = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 109) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 110) = v7;
  *((_WORD *)a1 + 425) = v6;
  IsUserDesktopActive = CitpIsUserDesktopActive(a1);
  *((_DWORD *)a1 + 151) = 0;
  *((_BYTE *)a1 + 592) = IsUserDesktopActive;
  *((_DWORD *)a1 + 150) = v2;
  CitpContextResetTrackingValues(a1, v2);
  *((_DWORD *)a1 + 126) = dword_1C018E910;
  *((_QWORD *)a1 + 64) = qword_1C018E900;
}
