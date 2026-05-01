/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000A1C0
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180002C10 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180006234 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000725C (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(__int64 a1)
{
  void *v1; // rdi
  __int64 v2; // rbx
  volatile signed __int32 **i; // rsi

  v1 = (void *)(a1 - 8);
  v2 = *(_QWORD *)(a1 - 8);
  for ( i = (volatile signed __int32 **)(a1 + 8 * v2); v2; --v2 )
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(--i);
  operator delete(v1);
  return v1;
}
