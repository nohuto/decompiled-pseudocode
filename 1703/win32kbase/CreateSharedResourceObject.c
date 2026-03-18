/*
 * XREFs of CreateSharedResourceObject @ 0x1C008303C
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B2E0 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C013ED00 (NtDCompositionCreateSharedVisualHandle.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0010088 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C001095C (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0041CA0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 */

__int64 __fastcall CreateSharedResourceObject(unsigned int a1, struct DirectComposition::ResourceObject **a2)
{
  __int64 v3; // r14
  int v4; // ebx
  struct _ACL *v5; // rdi
  __int64 v7; // [rsp+28h] [rbp-58h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  struct _ACL *v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  struct _ACL *v15; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  v4 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v15);
  if ( v4 >= 0 )
  {
    v5 = v15;
    Handle = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v13 = 0LL;
    LODWORD(v7) = 64;
    v8 = 48;
    v11 = 512;
    v12 = v15;
    v4 = CompositionObject::Create(
           0LL,
           (__int64)&v8,
           3u,
           0LL,
           2,
           v7,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v5);
  }
  return (unsigned int)v4;
}
