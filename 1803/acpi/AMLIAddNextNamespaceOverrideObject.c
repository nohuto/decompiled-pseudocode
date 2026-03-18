/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0045CFC (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0045DF0 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0046064 (AMLIGetValidNamespaceName.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, const char *a3)
{
  PVOID PoolWithTag; // rdi
  int valid; // ebx
  int v7; // eax
  SIZE_T v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v12; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+38h] BYREF

  PoolWithTag = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v12);
  if ( valid < 0 )
    return (unsigned int)valid;
  LODWORD(NumberOfBytes) = 0;
  valid = OSReadRegValue(a3);
  if ( valid != -2147483643 )
    goto LABEL_5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x496C6D41u);
  if ( !PoolWithTag )
  {
    valid = -1073741670;
LABEL_5:
    if ( valid < 0 )
      return (unsigned int)valid;
  }
  valid = OSReadRegValue(a3);
  if ( valid >= 0 )
  {
    memset(v13, 0, sizeof(v13));
    v7 = v12 == 1346716767
       ? AMLICreateOverrideObjectDep(PoolWithTag)
       : AMLICreateOverrideObjectDefault(PoolWithTag, (unsigned int)NumberOfBytes);
    valid = v7;
    if ( v7 >= 0 )
    {
      valid = CreateNameSpaceObject(gpheapGlobal, a3, a2, *(_QWORD *)(a2 + 48), &NumberOfBytes, 0);
      if ( valid < 0 )
      {
        FreeObjData(v13);
      }
      else
      {
        v8 = NumberOfBytes;
        v9 = *(_OWORD *)&v13[16];
        *(_OWORD *)(NumberOfBytes + 64) = *(_OWORD *)v13;
        v10 = *(_QWORD *)&v13[32];
        *(_OWORD *)(v8 + 80) = v9;
        *(_QWORD *)(v8 + 96) = v10;
        DereferenceObjectEx(v8);
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)valid;
}
