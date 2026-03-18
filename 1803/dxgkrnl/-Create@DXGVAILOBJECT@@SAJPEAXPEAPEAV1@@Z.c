/*
 * XREFs of ?Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z @ 0x1C01E61C8
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C01E5CD0 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::Create(__int64 a1, struct DXGVAILOBJECT **a2)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v5; // r9
  void *v6; // rdi
  int v7; // ebx
  HANDLE v8; // rcx
  int v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  void *v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  void *v17; // [rsp+B0h] [rbp+30h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0xC0060000, (struct _ACL **)&v17);
  v6 = v17;
  v7 = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor >= 0 )
  {
    v11 = 0LL;
    v13 = 0;
    v12 = 0LL;
    v15 = 0LL;
    v10 = 48;
    v14 = v17;
    v7 = DxgkCompositionObject::Create(
           0LL,
           (__int64)&v10,
           0xC0060000,
           v5,
           3,
           128,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DXGVAILOBJECT::ObjectInit,
           a1,
           &Handle);
    if ( v7 >= 0 )
    {
      v8 = Handle;
      v17 = 0LL;
      *a2 = 0LL;
      v7 = DxgkCompositionObject::ResolveHandle(v8, 0x60000u, 1, 3, &v17);
      if ( v7 >= 0 )
        *a2 = (struct DXGVAILOBJECT *)v17;
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v7;
}
