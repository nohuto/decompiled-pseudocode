/*
 * XREFs of rimConvertUserToKernelEventHandle @ 0x1C000A104
 * Callers:
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C0151278 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimConvertUserToKernelEventHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
    ObfDereferenceObject(v4);
  }
  return v5;
}
