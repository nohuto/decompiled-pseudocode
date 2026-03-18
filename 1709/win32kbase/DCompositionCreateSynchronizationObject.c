/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x1C013DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00251A0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C013F88C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(struct DirectComposition::SynchronizationObject **a1)
{
  int v2; // ebx
  struct DirectComposition::SynchronizationObject *v3; // rdi
  __int64 v5; // [rsp+28h] [rbp-58h]
  int v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  struct DirectComposition::SynchronizationObject *v10; // [rsp+70h] [rbp-10h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  struct DirectComposition::SynchronizationObject *v13; // [rsp+B0h] [rbp+30h] BYREF

  v2 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&v13);
  if ( v2 >= 0 )
  {
    v3 = v13;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v11 = 0LL;
    LODWORD(v5) = 40;
    v6 = 48;
    v9 = 512;
    v10 = v13;
    v2 = CompositionObject::Create(
           0LL,
           (__int64)&v6,
           3u,
           0LL,
           5,
           v5,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v2 >= 0 )
    {
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(Handle, 3u, 0, &v13);
      if ( v2 >= 0 )
        *a1 = v13;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v3);
  }
  return (unsigned int)v2;
}
