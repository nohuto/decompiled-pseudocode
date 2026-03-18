/*
 * XREFs of EtwTracePriority @ 0x140253A4C
 * Callers:
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     PsSetIoPriorityThread @ 0x1400669C4 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x140254710 (EtwpPsProvTracePriority.c)
 */

void *__fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v6; // bl
  void *result; // rax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( a3 != a4 )
  {
    v5 = a4;
    v6 = a3;
    if ( (dword_140345004 & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v10 = *(_DWORD *)(a1 + 1600);
    v11 = v6;
    v12 = v5;
    v13 = 0;
    if ( a5 )
      LOBYTE(v13) = *a5;
    v14[1] = 8LL;
    v14[0] = &v10;
    return EtwTraceKernelEvent((int)v14, 1, 0x20002000u, a2, 22026499);
  }
  return result;
}
