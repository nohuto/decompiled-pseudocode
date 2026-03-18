/*
 * XREFs of NtSetIoCompletionEx @ 0x1404A65E0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x1400765E0 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletionEx(void *a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  NTSTATUS result; // eax
  int v10; // ebx
  signed __int32 v11; // eax
  _DWORD *v12; // rsi
  __int64 v13; // r8
  PVOID v14; // rdi
  PVOID v15; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  v10 = ObReferenceObjectByHandle(a2, 2u, ObjectType, KeGetCurrentThread()->PreviousMode, &v15, 0LL);
  if ( v10 < 0 )
  {
    v14 = Object;
    goto LABEL_5;
  }
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  v12 = v15;
  if ( v11 )
  {
    v14 = Object;
    v10 = -1073741584;
LABEL_11:
    if ( v12 )
      ObfDereferenceObject(v12);
    goto LABEL_5;
  }
  v13 = a4;
  v14 = Object;
  v10 = IoSetIoCompletionEx((__int64)Object, a3, v13, a5, a6, 0, (__int64)v15 + 8);
  if ( v10 < 0 )
  {
    *v12 = 0;
    goto LABEL_11;
  }
LABEL_5:
  if ( v14 )
    ObfDereferenceObject(v14);
  return v10;
}
