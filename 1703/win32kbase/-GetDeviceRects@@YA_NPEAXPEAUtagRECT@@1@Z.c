/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01305CC
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0130584 (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 */

bool __fastcall GetDeviceRects(void *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  bool result; // al
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  struct tagRECT v7; // xmm1
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
  v5 = HMValidateHandleNoSecure((unsigned __int64)v4, 19);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 472);
  if ( !v6 )
    return 0;
  TouchExtensibility::rcHimetricRect = *(struct tagRECT *)(v6 + 140);
  v7 = *(struct tagRECT *)(v6 + 172);
  result = 1;
  TouchExtensibility::rcLogicalRect = v7;
  return result;
}
