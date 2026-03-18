/*
 * XREFs of NtFlipObjectConsumerAcquirePresent @ 0x1C004E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___ @ 0x1C004D980 (CFlipPropertySetBase--WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C004DD14 (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectConsumerAcquirePresent(void *a1, unsigned int a2, unsigned int a3, char *a4, char *a5)
{
  size_t v7; // r15
  int v9; // ebx
  const void *v10; // r13
  struct CFlipPropertySet *v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  PVOID v14; // rsi
  struct CFlipPropertySet *v16; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v7 = a2;
  if ( (!a2 || a4) && (!a3 || a5) )
  {
    v10 = 0LL;
    v18[0] = 0LL;
    v11 = 0LL;
    v16 = 0LL;
    KeEnterCriticalRegion();
    Object = 0LL;
    v12 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
    v9 = v12;
    v14 = 0LL;
    if ( v12 >= 0 )
      v14 = Object;
    v18[1] = v14;
    if ( v12 >= 0 )
    {
      v9 = FlipManagerObject::ConsumerAcquirePresent((FlipManagerObject *)v14, v7, a3, v18, &v16);
      v10 = v18[0];
      v11 = v16;
    }
    if ( v9 >= 0 )
    {
      if ( (_DWORD)v7 )
      {
        if ( (unsigned __int64)&a4[v7] > MmUserProbeAddress || &a4[v7] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v10, v7);
      }
      if ( a3 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___(
          (__int64)v11,
          v13,
          a5);
    }
    if ( v11 )
      CFlipPropertySetBase::Release(v11);
    if ( v14 )
      ObfDereferenceObject(v14);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
