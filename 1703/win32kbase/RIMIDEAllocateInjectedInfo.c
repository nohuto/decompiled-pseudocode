/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C010908C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v4; // rbx
  void *v5; // rax

  result = Win32AllocPoolZInit(0x58uLL, 1785620818LL);
  v4 = (__int64)result;
  if ( result )
  {
    v5 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a2 + 88), 1785620818LL);
    if ( v5 )
    {
      *(_QWORD *)(v4 + 72) = v5;
    }
    else
    {
      Win32FreePool(v4);
      return 0LL;
    }
    return (void *)v4;
  }
  return result;
}
