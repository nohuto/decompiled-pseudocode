/*
 * XREFs of WbProcessModuleUnload @ 0x140583A0C
 * Callers:
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140583AF0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140583BB0 (WbHeapExecutionUnloadModule.c)
 */

__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  unsigned __int64 v6; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // rbx
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10uLL, &P);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 16 > 0x7FFFFFFF0000LL || v6 + 16 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v7 = P;
      *(_OWORD *)P = *(_OWORD *)a2[1];
      if ( *v7 )
      {
        v5 = -1073741811;
      }
      else
      {
        v8 = P;
        WbHeapExecutionUnloadModule(a1, *((_QWORD *)P + 1));
        WbInPlaceEncryptionUnloadModule(a1, v8[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)v5;
}
