/*
 * XREFs of ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C003A640 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C0040DEC (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0040E0C (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0040E3C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0040E64 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0040EB8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

void __fastcall GreValidateRgnInDCSurfBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  BOOL v8; // eax
  char v9; // cl
  LONG v10; // edx
  int v11; // eax
  LONG v12; // r10d
  int v13; // edx
  int v14; // r8d
  int v15; // r10d
  struct _RECTL v16; // [rsp+50h] [rbp-18h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 || (*(_DWORD *)(v3 + 32) & 0x20000) == 0 || *(int *)(*(_QWORD *)(a1 + 512) + 112LL) >= 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(a3 + 22))
      || (v8 = ERECTL::bEqual((ERECTL *)&rclEmpty, (struct ERECTL *)(a3 + 22)), v9 = v5, v8) )
    {
      v9 = 1;
    }
    v10 = *(_DWORD *)(v7 + 56);
    v11 = *(_DWORD *)(v6 + 36) & 0x5000;
    v12 = *(_DWORD *)(v7 + 60);
    *(_QWORD *)&v16.left = v5;
    v16.right = v10;
    v16.bottom = v12;
    if ( v11 != 4096
      && !v9
      && (ERECTL::bWrapped((ERECTL *)(a3 + 22)) || a3[22] < v14 || v13 < a3[24] || a3[23] < v14 || v15 < a3[25]) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL);
      ERECTL::vOrder((ERECTL *)(a3 + 22));
      ERECTL::operator*=(&v16, a3 + 22);
      v17 = a3;
      RGNOBJ::vSet((RGNOBJ *)&v17, &v16);
    }
  }
}
