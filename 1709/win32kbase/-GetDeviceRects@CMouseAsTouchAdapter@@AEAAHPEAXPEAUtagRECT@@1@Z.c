/*
 * XREFs of ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0131DF4
 * Callers:
 *     ?CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ @ 0x1C0131D00 (-CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ.c)
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0131F34 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall CMouseAsTouchAdapter::GetDeviceRects(
        CMouseAsTouchAdapter *this,
        char *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct tagRECT *v13; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, 0, &Object) < 0 )
    return 0LL;
  v8 = Object == (PVOID)-64LL ? 0LL : *((_QWORD *)Object + 8);
  ObfDereferenceObject(Object);
  LOBYTE(v9) = 19;
  v12 = HMValidateHandleNoSecure(v8, v9, v10, v11);
  if ( !v12 )
    return 0LL;
  v13 = *(struct tagRECT **)(v12 + 472);
  if ( !v13 )
    return 0LL;
  *a3 = v13[11];
  *a4 = v13[12];
  *((_DWORD *)this + 20) = **(_DWORD **)gpDispInfo;
  return 1LL;
}
