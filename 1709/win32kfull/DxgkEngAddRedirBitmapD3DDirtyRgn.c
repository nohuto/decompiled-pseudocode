/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0251AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024F474 (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64); // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1, a3);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 48LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v8[0] + 512LL);
      if ( (*(_DWORD *)(v6 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v6 + 92);
        v7 = *(void (__fastcall **)(__int64, __int64))(v5 + 3488);
        if ( v7 )
          v7((*(_QWORD *)(v4 + 512) + 24LL) & -(__int64)(*(_QWORD *)(v4 + 512) != 0LL), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(HWND *)(v4 + 488), *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
  }
}
