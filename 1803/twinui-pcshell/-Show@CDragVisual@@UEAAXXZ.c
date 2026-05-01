/*
 * XREFs of ?Show@CDragVisual@@UEAAXXZ @ 0x1802F2480
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDragVisual::Show(HWND *this)
{
  __int64 v2; // rcx

  if ( !IsWindowVisible(this[16]) )
  {
    ShowWindow(this[16], 8);
    if ( *((_DWORD *)this + 31) == 1 || *((_DWORD *)this + 31) == 4 )
      (*((void (__fastcall **)(HWND *, _QWORD))*this + 10))(this, 0LL);
    if ( *((_BYTE *)this + 248) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0(v2, (__int64)&DragVisual_Show_Info);
    }
  }
}
