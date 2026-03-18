/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082E28
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0023210 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082F50 (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  int v4; // edx
  __int64 v5; // rax

  memset(a1, 0, 0x330uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 97) = (char *)a1 + 768;
  *((_QWORD *)a1 + 96) = (char *)a1 + 768;
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  v3 = *((_BYTE *)a1 + 112);
  *((_DWORD *)a1 + 46) = 1;
  v2 >>= 24;
  *((_BYTE *)a1 + 112) = v3 & 0xF9 | 2;
  *((_DWORD *)a1 + 48) = v2;
  *((_DWORD *)a1 + 49) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), 1);
  *((_DWORD *)a1 + 54) = v2;
  *((_DWORD *)a1 + 55) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), v4);
  *((_DWORD *)a1 + 186) = v2;
  memset((char *)a1 + 512, 0, 0xE8uLL);
  *((_WORD *)a1 + 256) = 210;
  v5 = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 67) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 68) = v5;
  *((_WORD *)a1 + 257) = 232;
  CitpContextResetTrackingValues(a1, v2);
}
