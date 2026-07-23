/*
 * XREFs of NtSetIoCompletionEx @ 0x14052EAB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x140086380 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  int v6; // edi
  int v7; // ebp
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  signed __int32 v11; // eax
  _DWORD *v12; // rsi
  int v13; // r8d
  PVOID v14; // rdi
  PVOID v15; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  v6 = (int)ApcContext;
  v7 = (int)KeyContext;
  result = ObReferenceObjectByHandle(
             IoCompletionHandle,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v10 = ObReferenceObjectByHandle(
          IoCompletionPacketHandle,
          2u,
          ObjectType,
          KeGetCurrentThread()->PreviousMode,
          &v15,
          0LL);
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
  v13 = v6;
  v14 = Object;
  v10 = IoSetIoCompletionEx((int)Object, v7, v13, IoStatus, IoStatusInformation, 0, (__int64)v15 + 8);
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
