/*
 * XREFs of ??4?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007C31C
 * Callers:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18007A1B0 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 */

void **__fastcall std::unique_ptr<float [0]>::operator=(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}
