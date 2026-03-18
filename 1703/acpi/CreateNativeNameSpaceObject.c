/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C002307C
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0022FC4 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C00232E0 (SetClearAssociatedNativeObjectNoLock.c)
 *     GetNextNameSegment @ 0x1C0023300 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  _QWORD *v9; // r12
  _QWORD *v10; // r15
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v13; // zf
  _BYTE *v14; // rdi
  char v15; // al
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // r8
  KIRQL v19; // r8
  _QWORD *v21; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-51h]
  __int64 v23; // [rsp+40h] [rbp-49h]
  _BYTE *v24; // [rsp+48h] [rbp-41h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h]
  __int64 v26; // [rsp+58h] [rbp-31h]
  struct _EX_RUNDOWN_REF *v27; // [rsp+60h] [rbp-29h]
  __int64 v28; // [rsp+68h] [rbp-21h]
  _QWORD *v29; // [rsp+70h] [rbp-19h]
  unsigned __int8 Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v29 = a8;
  v27 = (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner;
  v8 = 0LL;
  v25 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v28 = gpheapGlobal;
  v26 = gpnsNameSpaceRoot;
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v23);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL);
      v13 = *ObjectPath == 92;
      v23 = 0LL;
      v14 = ObjectPath;
      v24 = ObjectPath;
      if ( v13 )
      {
        v14 = ObjectPath + 1;
        v24 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v14);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v21);
        v21 = 0LL;
      }
      v15 = gdwfAMLI;
      v9 = (_QWORD *)v26;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 112));
        v8 = v22;
        v14 = v24;
        v15 = gdwfAMLI;
      }
      Src[4] = 0;
      v10 = (_QWORD *)v25;
      if ( (v15 & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 112));
        v8 = v22;
        goto LABEL_16;
      }
      while ( v14 )
      {
        NameSpaceObject = GetNextNameSegment(v14, Src, &v24);
        if ( NameSpaceObject < 0 )
        {
          if ( NameSpaceObject == -1073741197 )
            NameSpaceObject = 0;
          break;
        }
        NameSpaceObject = GetNameSpaceObject(Src);
        if ( NameSpaceObject < 0 )
        {
          v8 = v22;
          goto LABEL_19;
        }
        v16 = CreateNameSpaceObject(v28, Src, (__int64)v10, v27, &v21, 0x20000);
        v8 = v22;
        NameSpaceObject = v16;
        v17 = v21;
        if ( v16 < 0 )
        {
          if ( v16 != -1073741771 )
            break;
          NameSpaceObject = 0;
        }
        else
        {
          *((_WORD *)v21 + 32) |= 0xA00u;
          LOBYTE(v18) = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          SetClearAssociatedNativeObjectNoLock(v8, v17, v18);
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v19);
        }
        DereferenceObjectEx(v10);
        v21 = 0LL;
        v10 = v17;
        DereferenceObjectEx(v9);
        v9 = v8;
        v8 = 0LL;
        v22 = 0LL;
LABEL_16:
        v14 = v24;
      }
      if ( NameSpaceObject >= 0 )
      {
        *v29 = v10;
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
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NameSpaceObject;
}
