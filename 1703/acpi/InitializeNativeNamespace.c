/*
 * XREFs of InitializeNativeNamespace @ 0x1C0022FC4
 * Callers:
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     InsertOwnerObjList @ 0x1C001C0D4 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C001C104 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C001D89C (NewObjOwner.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 */

__int64 InitializeNativeNamespace()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int NativeNameSpaceObject; // eax
  __int64 v6; // [rsp+50h] [rbp+8h]

  LODWORD(v0) = NewObjOwner(gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNativeNameSpaceOwner);
  if ( (int)v0 >= 0 )
  {
    v1 = NewNameSpaceObject(gpheapGlobal);
    gpnsNativeNameSpaceOverrideRoot = (__int64)v1;
    if ( v1 )
    {
      *((_DWORD *)v1 + 10) = 1600085852;
      InsertOwnerObjList((struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner, (struct _EX_RUNDOWN_REF *)v1);
      v2 = 0;
      v3 = 0LL;
      do
      {
        NativeNameSpaceObject = CreateNativeNameSpaceObject(v0, (&apszDefinedRootObjs)[v3], 0LL);
        v0 = (unsigned int)NativeNameSpaceObject;
        if ( NativeNameSpaceObject < 0 )
          break;
        ++v2;
        *(_QWORD *)((char *)&AmliNativePreDefinedRootObjects + v3 * 8) = v6;
        ++v3;
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
