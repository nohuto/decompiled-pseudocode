/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C001211C
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0012064 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C0012384 (SetClearAssociatedNativeObjectNoLock.c)
 *     GetNextNameSegment @ 0x1C00123A4 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdx
  int NameSpaceObject; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *ObjectPath; // r13
  bool v16; // zf
  void *v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r8
  KIRQL v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // [rsp+30h] [rbp-59h] BYREF
  __int64 v30; // [rsp+38h] [rbp-51h]
  __int64 v31; // [rsp+40h] [rbp-49h]
  _BYTE *v32; // [rsp+48h] [rbp-41h] BYREF
  __int64 v33; // [rsp+50h] [rbp-39h]
  __int64 v34; // [rsp+58h] [rbp-31h]
  __int64 v35; // [rsp+60h] [rbp-29h]
  __int64 v36; // [rsp+68h] [rbp-21h]
  __int64 *v37; // [rsp+70h] [rbp-19h]
  _BYTE Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v37 = a8;
  v35 = gpNativeNameSpaceOwner;
  v8 = 0LL;
  v33 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v36 = gpheapGlobal;
  v34 = gpnsNameSpaceRoot;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v31);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL, v11, v13, v14);
      v16 = *ObjectPath == 92;
      v31 = 0LL;
      v17 = ObjectPath;
      v32 = ObjectPath;
      if ( v16 )
      {
        v17 = ObjectPath + 1;
        v32 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v17);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v29);
        v29 = 0LL;
      }
      v9 = v34;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 112));
        v8 = v30;
        v17 = v32;
      }
      Src[4] = 0;
      v10 = v33;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 112));
        v8 = v30;
        goto LABEL_16;
      }
      while ( v17 )
      {
        NameSpaceObject = GetNextNameSegment(v17, Src, &v32);
        if ( NameSpaceObject < 0 )
        {
          if ( NameSpaceObject == -1073741197 )
            NameSpaceObject = 0;
          break;
        }
        NameSpaceObject = GetNameSpaceObject(Src);
        if ( NameSpaceObject < 0 )
        {
          v8 = v30;
          goto LABEL_19;
        }
        v18 = CreateNameSpaceObject(v36, Src, v10, v35, &v29, 0x20000);
        v8 = v30;
        NameSpaceObject = v18;
        v22 = v29;
        if ( v18 < 0 )
        {
          if ( v18 != -1073741771 )
            break;
          NameSpaceObject = 0;
        }
        else
        {
          *(_WORD *)(v29 + 64) |= 0xA00u;
          LOBYTE(v23) = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          SetClearAssociatedNativeObjectNoLock(v8, v22, v23);
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v24);
        }
        DereferenceObjectEx(v10, v19, v20, v21);
        v29 = 0LL;
        v10 = v22;
        DereferenceObjectEx(v9, v25, v26, v27);
        v9 = v8;
        v8 = 0LL;
        v30 = 0LL;
LABEL_16:
        v17 = v32;
      }
      if ( NameSpaceObject >= 0 )
      {
        *v37 = v10;
        v10 = 0LL;
      }
LABEL_19:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NameSpaceObject = -1073741670;
    }
  }
  if ( v9 )
    DereferenceObjectEx(v9, v11, v13, v14);
  if ( v10 )
    DereferenceObjectEx(v10, v11, v13, v14);
  if ( v8 )
    DereferenceObjectEx(v8, v11, v13, v14);
  return (unsigned int)NameSpaceObject;
}
