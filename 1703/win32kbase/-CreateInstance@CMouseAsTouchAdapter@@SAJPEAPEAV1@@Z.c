/*
 * XREFs of ?CreateInstance@CMouseAsTouchAdapter@@SAJPEAPEAV1@@Z @ 0x1C0132680
 * Callers:
 *     ?SecondPassIntialize@CMouseSensor@@UEAAJXZ @ 0x1C0130550 (-SecondPassIntialize@CMouseSensor@@UEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ @ 0x1C0132620 (-CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ.c)
 */

__int64 __fastcall CMouseAsTouchAdapter::CreateInstance(struct CMouseAsTouchAdapter **a1)
{
  CMouseAsTouchAdapter *v2; // rax
  CMouseAsTouchAdapter *v3; // rbx

  *a1 = 0LL;
  v2 = (CMouseAsTouchAdapter *)Win32AllocPoolZInit(0x50uLL, 1919964227LL);
  v3 = v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 13) = 0;
    *((_DWORD *)v2 + 14) = 0;
    *((_WORD *)v2 + 8) = 1;
    *(_BYTE *)v2 = 0;
    *((_DWORD *)v2 + 15) = 0xFFFF;
    *((_DWORD *)v2 + 16) = 0xFFFF;
    *((_DWORD *)v2 + 17) = 10;
    *((_DWORD *)v2 + 18) = 512;
    *((_DWORD *)v2 + 19) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
    return 3221225495LL;
  if ( !(unsigned int)CMouseAsTouchAdapter::CreateInjectionDevice(v3) )
    return 3221225473LL;
  *a1 = v3;
  return 0LL;
}
