/*
 * XREFs of ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180091078
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18004EB20 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801DDE1C (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180090FE0 (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 272);
      while ( v4 >= 0 )
      {
        if ( (_DWORD)v4 != 0x7FFFFFFF )
        {
          v5 = v4;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 272), v4 + 1, v4);
          if ( v5 != v4 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v4 + 16));
    }
LABEL_9:
    v7 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v7, (volatile int *)a2);
  }
  return a1;
}
