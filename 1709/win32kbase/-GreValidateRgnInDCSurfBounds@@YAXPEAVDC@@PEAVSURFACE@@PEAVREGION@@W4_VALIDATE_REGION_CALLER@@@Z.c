/*
 * XREFs of ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0053140 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C0055778 (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0055798 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00557C8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00557F0 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0055844 (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  struct _RECTL v18; // [rsp+50h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp+8h] BYREF

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
    *(_QWORD *)&v18.left = v5;
    v18.right = v10;
    v18.bottom = v12;
    if ( v11 != 4096
      && !v9
      && (ERECTL::bWrapped((ERECTL *)(a3 + 22)) || a3[22] < (int)v14
                                                || v13 < a3[24]
                                                || a3[23] < (int)v14
                                                || v16 < a3[25]) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, v15, v17, a3, v14, v14, 0);
      ERECTL::vOrder((ERECTL *)(a3 + 22));
      ERECTL::operator*=(&v18, a3 + 22);
      v19 = a3;
      RGNOBJ::vSet((RGNOBJ *)&v19, &v18);
    }
  }
}
