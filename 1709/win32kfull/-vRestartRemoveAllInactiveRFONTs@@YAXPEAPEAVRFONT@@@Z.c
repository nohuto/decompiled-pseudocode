/*
 * XREFs of ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C0283E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartRemoveAllInactiveRFONTs(struct _FONTOBJ **a1)
{
  struct _FONTOBJ *v1; // rax
  struct _FONTOBJ **v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1;
  while ( v1 )
  {
    v5 = v1;
    RFONTOBJ::vDeleteRFONT(&v5, 0LL, 0LL, 0);
    v5 = 0LL;
    ++v2;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5, v3, v4);
    v1 = *v2;
  }
}
