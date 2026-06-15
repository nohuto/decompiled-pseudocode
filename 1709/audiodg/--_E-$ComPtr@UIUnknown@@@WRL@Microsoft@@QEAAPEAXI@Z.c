/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1400300D0
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140016784 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x14001CBE0 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14001CEB8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(char *a1)
{
  char *v1; // rbx

  v1 = a1 - 8;
  `eh vector destructor iterator'(
    a1,
    8LL,
    *((_QWORD *)a1 - 1),
    (void (*)(void *))Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>);
  operator delete[](v1);
  return v1;
}
