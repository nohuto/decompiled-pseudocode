/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0250060
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024DA04 (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 48LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v7[0] + 512LL);
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3488);
        if ( v6 )
          v6((*(_QWORD *)(v3 + 512) + 24LL) & -(__int64)(*(_QWORD *)(v3 + 512) != 0LL), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(HWND *)(v3 + 488), *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
}
