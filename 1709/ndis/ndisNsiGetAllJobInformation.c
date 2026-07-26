/*
 * XREFs of ndisNsiGetAllJobInformation @ 0x1C00EE7E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C0067D40 (NdisGetJobObjectCompartmentId.c)
 */

NTSTATUS __fastcall ndisNsiGetAllJobInformation(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  NTSTATUS result; // eax
  _DWORD *v4; // rbx
  PVOID v5; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 )
  {
    v2 = v1 - 1;
    result = -1073741811;
    if ( v2 <= 1 )
      return -1073741822;
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 40);
    if ( v4 )
    {
      result = ObReferenceObjectByHandle(**(HANDLE **)(a1 + 16), 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v5 = Object;
      if ( result < 0 )
        return result;
      *v4 = NdisGetJobObjectCompartmentId((__int64)Object);
      ObfDereferenceObject(v5);
    }
    return 0;
  }
  return result;
}
