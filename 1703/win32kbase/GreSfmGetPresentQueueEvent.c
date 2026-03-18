/*
 * XREFs of GreSfmGetPresentQueueEvent @ 0x1C007D8F0
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C007D7A8 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSfmGetPresentQueueEvent(__int64 a1, void **a2)
{
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v3 = ((__int64 (__fastcall *)(__int64, PVOID *))qword_1C018B9F8)(a1, &Object);
  if ( v3 >= 0 )
  {
    v3 = ObOpenObjectByPointer(Object, 0x80u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle);
    if ( v3 >= 0 )
      *a2 = Handle;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v3;
}
