/*
 * XREFs of ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C02747B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct RFONT *v1; // rbx
  struct _FONTOBJ *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  PVOID v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = (struct _FONTOBJ *)a1;
    do
    {
      v1 = (struct RFONT *)*((_QWORD *)v1 + 63);
      v6 = v2;
      v5[0] = v2[1].pvProducer;
      RFONTOBJ::vDeleteRFONT(&v6, 0LL, (struct PFFOBJ *)v5, 0);
      v6 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6, v3, v4);
      v2 = (struct _FONTOBJ *)v1;
    }
    while ( v1 );
  }
}
