/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C0250C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v5, a1);
  v3 = v5[0];
  *a2 = 0LL;
  if ( v3 )
  {
    LODWORD(v6) = 0;
    GreGetDxSharedSurface(*(HWND *)(v3 + 488), a2, &v4, &v7, &v6, &v8);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
}
