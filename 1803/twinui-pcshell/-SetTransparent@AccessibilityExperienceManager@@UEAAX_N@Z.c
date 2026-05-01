/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180259B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x18025771C (CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, char a2)
{
  __int64 v4; // rbx
  LONG WindowLongW; // eax
  LONG v6; // eax
  char *v7; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+38h] [rbp-8h]
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+70h] [rbp+30h] BYREF

  v9 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v9) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 24LL))(v9, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      if ( a2 )
        v6 = WindowLongW | 0x80020;
      else
        v6 = WindowLongW & 0xFFF7FFDF;
      SetWindowLongW(hWnd, -20, v6);
      v7 = (char *)this - 152;
      v8 = a2;
      CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___(
        *((_QWORD *)this + 18),
        (volatile int *)&v7);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
