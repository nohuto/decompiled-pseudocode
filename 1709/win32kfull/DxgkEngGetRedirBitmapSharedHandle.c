/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C0252660
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDxSharedSurface @ 0x1C00E7634 (GreGetDxSharedSurface.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2, int a3)
{
  __int64 v4; // rcx
  HWND v5; // rcx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1, a3);
  v4 = v7[0];
  *a2 = 0LL;
  if ( v4 )
  {
    v5 = *(HWND *)(v4 + 488);
    LODWORD(v8) = 0;
    GreGetDxSharedSurface(v5, a2, &v6, &v9, &v8, &v10);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
  }
}
