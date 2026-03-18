/*
 * XREFs of ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0132718
 * Callers:
 *     ?CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ @ 0x1C0132620 (-CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall CMouseAsTouchAdapter::GetDeviceRects(
        CMouseAsTouchAdapter *this,
        char *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  struct tagRECT v10; // xmm1
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  if ( !a2 )
    return 0LL;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, 0, &Object) < 0 )
    return 0LL;
  v7 = Object == (PVOID)-64LL ? 0LL : *((_QWORD *)Object + 8);
  ObfDereferenceObject(Object);
  v8 = HMValidateHandleNoSecure(v7, 19);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 472);
  if ( !v9 )
    return 0LL;
  *a3 = *(struct tagRECT *)(v9 + 140);
  v10 = *(struct tagRECT *)(v9 + 172);
  result = 1LL;
  *a4 = v10;
  return result;
}
