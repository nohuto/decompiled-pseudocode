/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0045240
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     InitializeNativeNamespace @ 0x1C0045510 (InitializeNativeNamespace.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C0045788 (SetClearAssociatedNativeObjectNoLock.c)
 *     GetNextNameSegment @ 0x1C0046C94 (GetNextNameSegment.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
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
  __int64 v9; // r15
  __int64 v10; // r12
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v13; // zf
  _BYTE *v14; // r15
  void *v15; // rdi
  _BYTE *v16; // r12
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r8
  KIRQL v20; // r8
  __int64 v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h]
  __int64 v24; // [rsp+40h] [rbp-49h]
  _BYTE *v25; // [rsp+48h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-39h]
  __int64 v27; // [rsp+58h] [rbp-31h]
  __int64 v28; // [rsp+60h] [rbp-29h]
  __int64 v29; // [rsp+68h] [rbp-21h]
  __int64 *v30; // [rsp+70h] [rbp-19h]
  _BYTE Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v30 = a8;
  v28 = gpNativeNameSpaceOwner;
  v8 = 0LL;
  v27 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v29 = gpheapGlobal;
  v26 = gpnsNameSpaceRoot;
  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v24);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL);
      v13 = *ObjectPath == 92;
      v24 = 0LL;
      v14 = ObjectPath;
      v15 = ObjectPath;
      v25 = ObjectPath;
      v16 = ObjectPath;
      if ( v13 )
      {
        v15 = ObjectPath + 1;
        v14 = ObjectPath + 1;
        v25 = ObjectPath + 1;
        v16 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v15);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v22);
        v22 = 0LL;
        v14 = v16;
      }
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 112));
        v8 = v23;
        v15 = v25;
      }
      v10 = v27;
      Src[4] = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
        v8 = v23;
        v15 = v25;
      }
      v13 = v14 == 0LL;
      v9 = v26;
      if ( !v13 )
      {
        while ( 1 )
        {
          NameSpaceObject = GetNextNameSegment(v15, Src, &v25);
          if ( NameSpaceObject < 0 )
            break;
          NameSpaceObject = GetNameSpaceObject(Src);
          if ( NameSpaceObject < 0 )
          {
            v8 = v23;
            goto LABEL_22;
          }
          v17 = CreateNameSpaceObject(v29, Src, v10, v28, &v22, 0x20000);
          v8 = v23;
          NameSpaceObject = v17;
          v18 = v22;
          if ( v17 < 0 )
          {
            if ( v17 != -1073741771 )
              goto LABEL_20;
            NameSpaceObject = 0;
          }
          else
          {
            *(_WORD *)(v22 + 64) |= 0xA00u;
            LOBYTE(v19) = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
            SetClearAssociatedNativeObjectNoLock(v8, v18, v19);
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v20);
          }
          DereferenceObjectEx(v10);
          v22 = 0LL;
          v10 = v18;
          DereferenceObjectEx(v9);
          v15 = v25;
          v9 = v8;
          v8 = 0LL;
          v23 = 0LL;
          if ( !v25 )
            goto LABEL_20;
        }
        if ( NameSpaceObject == -1073741197 )
          NameSpaceObject = 0;
      }
LABEL_20:
      if ( NameSpaceObject >= 0 )
      {
        *v30 = v10;
        v10 = 0LL;
      }
LABEL_22:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NameSpaceObject = -1073741670;
    }
  }
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NameSpaceObject;
}
