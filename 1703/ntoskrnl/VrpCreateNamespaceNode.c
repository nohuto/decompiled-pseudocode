/*
 * XREFs of VrpCreateNamespaceNode @ 0x14067AF54
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406799C8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     VrpFindBestMatchNamespaceNode @ 0x14067B594 (VrpFindBestMatchNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14067E730 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14067E7DC (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpCreateNamespaceNode(__int64 a1, const void **a2, const void **a3, int a4, _QWORD *a5)
{
  int v9; // ebx
  __int16 *PoolWithTag; // rax
  __int16 *v11; // rdi
  PVOID v12; // rax
  void *v13; // rcx
  __int16 v14; // ax
  PVOID v15; // rax
  void *v16; // rcx
  __int16 v17; // ax
  __int64 BestMatchNamespaceNode; // rax
  const UNICODE_STRING *v19; // rbx
  int v20; // eax
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // r11
  __int16 v24; // ax
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  __int64 v29; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v32; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  if ( (a4 & 0xE0000007) != a4 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(a3);
  VrpGetNextToken(a2, &v32, &String1);
  if ( !RtlEqualUnicodeString(&String1, &gRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v32, &String1);
  PoolWithTag = (__int16 *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x67655256u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x38uLL);
  *((_DWORD *)v11 + 12) = a4;
  v12 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a2 + 1), 0x67655256u);
  *((_QWORD *)v11 + 1) = v12;
  v13 = v12;
  if ( v12
    && (v14 = *(_WORD *)a2,
        v11[1] = *(_WORD *)a2,
        *v11 = v14,
        memmove(v13, a2[1], *(unsigned __int16 *)a2),
        v15 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a3 + 1), 0x67655256u),
        *((_QWORD *)v11 + 3) = v15,
        (v16 = v15) != 0LL) )
  {
    v17 = *(_WORD *)a3;
    v11[8] = *(_WORD *)a3;
    v11[9] = v17;
    memmove(v16, a3[1], *(unsigned __int16 *)a3);
    VrpGetNextToken(a2, &v32, &String1);
    if ( !String1.Length )
      goto LABEL_26;
    BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a1, v11, &v29);
    v19 = (const UNICODE_STRING *)BestMatchNamespaceNode;
    if ( BestMatchNamespaceNode )
    {
      v20 = *(_DWORD *)(BestMatchNamespaceNode + 48);
      if ( (v20 & 4) == 0 )
      {
        v21 = v29;
        *((_DWORD *)v11 + 12) |= v20 & 2;
        v22 = 0LL;
        v32 = 0LL;
        if ( v21 )
        {
          do
            VrpGetNextToken(v11, &v32, &String1);
          while ( v23 != 1 );
          v22 = v32;
        }
        v24 = *v11;
        Source.Buffer = (wchar_t *)(*((_QWORD *)v11 + 1) + 2 * v22);
        Source.Length = v24 - 2 * v22;
        Source.MaximumLength = Source.Length;
        v9 = VrpBuildKeyPath(v19 + 1, &Source, (PUNICODE_STRING)v11 + 2);
        if ( v9 < 0 )
          goto LABEL_19;
LABEL_26:
        v9 = 0;
        *a5 = v11;
        return (unsigned int)v9;
      }
    }
    v9 = -1073741811;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_19:
  v25 = (void *)*((_QWORD *)v11 + 1);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x67655256u);
  v26 = (void *)*((_QWORD *)v11 + 3);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x67655256u);
  v27 = (void *)*((_QWORD *)v11 + 5);
  if ( v27 )
    ExFreePoolWithTag(v27, 0x67655256u);
  ExFreePoolWithTag(v11, 0x67655256u);
  return (unsigned int)v9;
}
