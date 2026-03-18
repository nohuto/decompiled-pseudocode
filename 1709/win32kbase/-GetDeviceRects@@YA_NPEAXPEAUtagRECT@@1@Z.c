/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C012FF54
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C012FF0C (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

bool __fastcall GetDeviceRects(void *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  bool result; // al
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  struct tagRECT v10; // xmm1
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = a3;
  if ( !TouchExtensibility::ghInjectionDevice )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &Object) < 0 )
    return 0;
  v4 = Object == (PVOID)-64LL ? 0LL : (void *)*((_QWORD *)Object + 8);
  TouchExtensibility::hDeviceUser = v4;
  ObfDereferenceObject(Object);
  LOBYTE(v5) = 19;
  v8 = HMValidateHandleNoSecure((unsigned __int64)v4, v5, v6, v7);
  if ( !v8 )
    return 0;
  v9 = *(_QWORD *)(v8 + 472);
  if ( !v9 )
    return 0;
  TouchExtensibility::rcHimetricRect = *(struct tagRECT *)(v9 + 176);
  v10 = *(struct tagRECT *)(v9 + 192);
  result = 1;
  TouchExtensibility::rcLogicalRect = v10;
  return result;
}
