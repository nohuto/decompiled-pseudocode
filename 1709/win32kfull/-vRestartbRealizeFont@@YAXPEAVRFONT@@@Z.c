/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C0283E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0283D08 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v7 = (struct _FONTOBJ *)a1;
  v6[0] = v1;
  RFONTOBJ::vDestroyFont(&v7, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v6);
  Win32FreePool(a1, v3);
  v7 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7, v4, v5);
}
