/*
 * XREFs of ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C0283310
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RestartInactiveHelper(struct RFONT *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v5 = (struct _FONTOBJ *)a1;
  v4[0] = v1;
  RFONTOBJ::vDeleteRFONT(&v5, 0LL, (struct PFFOBJ *)v4, 0);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5, v2, v3);
}
