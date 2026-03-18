/*
 * XREFs of InitializeNativeNamespace @ 0x1C0012064
 * Callers:
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     NewObjOwner @ 0x1C00134CC (NewObjOwner.c)
 *     NewNameSpaceObject @ 0x1C001A558 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x1C001A5C8 (InsertOwnerObjList.c)
 */

__int64 InitializeNativeNamespace()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int NativeNameSpaceObject; // eax
  __int64 v6; // [rsp+50h] [rbp+8h]

  LODWORD(v0) = NewObjOwner(gpheapGlobal, &gpNativeNameSpaceOwner);
  if ( (int)v0 >= 0 )
  {
    v1 = NewNameSpaceObject(gpheapGlobal);
    gpnsNativeNameSpaceOverrideRoot = v1;
    if ( v1 )
    {
      *(_DWORD *)(v1 + 40) = 1600085852;
      InsertOwnerObjList(gpNativeNameSpaceOwner, v1);
      v2 = 0;
      v3 = 0LL;
      do
      {
        NativeNameSpaceObject = CreateNativeNameSpaceObject(v0, *(_UNKNOWN **)((char *)&apszDefinedRootObjs + v3), 0LL);
        v0 = (unsigned int)NativeNameSpaceObject;
        if ( NativeNameSpaceObject < 0 )
          break;
        ++v2;
        *(_QWORD *)((char *)&AmliNativePreDefinedRootObjects + v3) = v6;
        v3 += 8LL;
      }
      while ( v2 < 5 );
    }
    else
    {
      LODWORD(v0) = -1073741670;
    }
  }
  return (unsigned int)v0;
}
