/*
 * XREFs of ObWaitForSingleObject @ 0x140579C50
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetWaitObject @ 0x1400518A0 (ObpGetWaitObject.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(ULONG_PTR a1, char a2, KPROCESSOR_MODE a3, BOOLEAN a4, LARGE_INTEGER *Timeout)
{
  int v7; // ebx
  PVOID v8; // rdi
  void *WaitObject; // rax
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF

  v7 = ObpReferenceObjectByHandleWithTag(a1, 0x100000, 0LL, a2, 1951883855, Object, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Object[0];
    WaitObject = (void *)ObpGetWaitObject((__int64)Object[0] - 48);
    v7 = KeWaitForSingleObject(WaitObject, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
  }
  return (unsigned int)v7;
}
