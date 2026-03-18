/*
 * XREFs of AMLIAddNamespaceOverride @ 0x1C00457B8
 * Callers:
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C004691C (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C0046A88 (FreeOwnedObjects.c)
 *     InsertOwnerObjList @ 0x1C0046E04 (InsertOwnerObjList.c)
 *     NewObjOwner @ 0x1C00472E8 (NewObjOwner.c)
 *     CatError @ 0x1C0048590 (CatError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     NewNameSpaceObject @ 0x1C004A874 (NewNameSpaceObject.c)
 *     OSCloseHandle @ 0x1C0082128 (OSCloseHandle.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C0082328 (OSOpenAMLINamespaceOverrideHandle.c)
 */

__int64 AMLIAddNamespaceOverride()
{
  int NamespaceOverride; // ebx
  int v1; // eax
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (gOverrideFlags & 0x20) == 0 )
    return 0;
  v1 = OSOpenAMLINamespaceOverrideHandle(&v4);
  NamespaceOverride = v1;
  if ( v1 == -1073741772 )
  {
    return 0;
  }
  else if ( v1 >= 0 )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      NamespaceOverride = NewObjOwner(gpheapGlobal, &gpNameSpaceOverrideOwner);
      if ( NamespaceOverride >= 0 )
      {
        v2 = NewNameSpaceObject(gpheapGlobal);
        gpnsNameSpaceOverrideRoot = v2;
        if ( v2 )
        {
          *(_DWORD *)(v2 + 40) = 1600085852;
          InsertOwnerObjList(gpNameSpaceOverrideOwner, v2);
          NamespaceOverride = AMLIAddNextNamespaceOverride(v4, gpnsNameSpaceOverrideRoot);
          OSCloseHandle(v4);
          DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
          if ( NamespaceOverride < 0 )
          {
            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
            FreeOwnedObjects(gpNameSpaceOverrideOwner);
            FreeObjOwner(0LL, gpNameSpaceOverrideOwner);
            gpNameSpaceOverrideOwner = 0LL;
            gpnsNameSpaceOverrideRoot = 0LL;
          }
        }
        else
        {
          NamespaceOverride = -1073741670;
          LogError(3221225626LL);
          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
        }
      }
    }
  }
  return (unsigned int)NamespaceOverride;
}
