/*
 * XREFs of VrpTranslatePath @ 0x14067D470
 * Callers:
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     VrpFindBestMatchNamespaceNode @ 0x14067B594 (VrpFindBestMatchNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14067E730 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14067E7DC (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpTranslatePath(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int *a7)
{
  __int64 v11; // rsi
  __int64 BestMatchNamespaceNode; // rax
  UNICODE_STRING *v13; // r13
  NTSTATUS v14; // ebx
  int *v15; // r11
  __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 Length; // rdx
  unsigned __int64 v20; // rcx
  __int64 i; // rax
  __int16 v22; // dx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  wchar_t *Buffer; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING Object; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  KeyHandle = 0LL;
  v11 = 0LL;
  *(_QWORD *)&Object.Length = 0LL;
  v28[0] = 0LL;
  BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a6, a1, (__int64)v28);
  v13 = (UNICODE_STRING *)BestMatchNamespaceNode;
  if ( BestMatchNamespaceNode )
  {
    v15 = a7;
    if ( a7 )
      *a7 = *(_DWORD *)(BestMatchNamespaceNode + 48) & 6;
    v16 = v28[0];
    if ( v28[0] )
    {
      do
      {
        VrpGetNextToken(a1, &Object, v28);
        --v16;
      }
      while ( v16 );
      v11 = *(_QWORD *)&Object.Length;
    }
    v17 = *(_WORD *)a1 == (unsigned __int16)(2 * v11);
    v18 = *(_QWORD *)(a1 + 8);
    Object.MaximumLength = *(_WORD *)a1 - 2 * v11;
    Object.Length = Object.MaximumLength;
    Object.Buffer = (wchar_t *)(v18 + 2 * v11);
    if ( v17 && v15 )
      *v15 |= 0x20000000u;
    v14 = VrpBuildKeyPath(v13 + 1, &Object, a2);
    if ( v14 >= 0 )
    {
      VrpStripTrailingCharacters(a2);
      if ( a3 )
      {
        Length = a2->Length;
        v20 = (unsigned __int64)v13[1].Length >> 1;
        for ( i = v20; 2 * v20 < Length; i = v20 )
        {
          if ( a2->Buffer[i] != 92 )
            break;
          ++v20;
        }
        v22 = Length - 2 * v20;
        *(_WORD *)a3 = v22;
        *(_WORD *)(a3 + 2) = v22;
        *(_QWORD *)(a3 + 8) = &a2->Buffer[v20];
      }
      if ( a4 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = v13 + 1;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v14 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
        if ( v14 >= 0 )
        {
          v23 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&Object, 0LL);
          v24 = *(_QWORD *)&Object.Length;
          v14 = v23;
          *a4 = *(_QWORD *)&Object.Length;
          if ( v23 >= 0 )
          {
            if ( a5 )
              *(_WORD *)(v24 + 50) = *(_WORD *)(a5 + 50);
          }
        }
      }
    }
  }
  else
  {
    v14 = -1073741772;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 < 0 )
  {
    Buffer = a2->Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0x67655256u);
      a2->Buffer = 0LL;
    }
  }
  return (unsigned int)v14;
}
