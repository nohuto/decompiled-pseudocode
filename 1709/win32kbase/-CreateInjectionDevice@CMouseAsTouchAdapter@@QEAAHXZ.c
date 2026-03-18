/*
 * XREFs of ?CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ @ 0x1C0131D00
 * Callers:
 *     ?CreateInstance@CMouseAsTouchAdapter@@SAJPEAPEAV1@@Z @ 0x1C0131D58 (-CreateInstance@CMouseAsTouchAdapter@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010B548 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0131DF4 (-GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CMouseAsTouchAdapter::CreateInjectionDevice(CMouseAsTouchAdapter *this)
{
  void **v1; // rdi
  __int64 result; // rax

  v1 = (void **)((char *)this + 8);
  result = RIMIDE_InitializePointerDeviceInjection(2, *((_DWORD *)this + 19), 0LL, 3u, 0, (__int64 *)this + 1);
  if ( (_DWORD)result )
    return CMouseAsTouchAdapter::GetDeviceRects(
             this,
             *v1,
             (struct tagRECT *)((char *)this + 36),
             (struct tagRECT *)((char *)this + 20));
  return result;
}
