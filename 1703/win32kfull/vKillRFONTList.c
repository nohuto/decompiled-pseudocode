/*
 * XREFs of vKillRFONTList @ 0x1C024A3B8
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002A52C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C002A6D4 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *pvProducer; // rbx
  struct _FONTOBJ *v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    pvProducer = a2;
    v4 = a2;
    do
    {
      pvProducer = (struct _FONTOBJ *)pvProducer[7].pvProducer;
      v6 = v4;
      memset(v5, 0, 0x20uLL);
      PushThreadGuardedObject(v5, v4, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v6, 0LL, 0LL, 1);
      PopThreadGuardedObject(v5);
      PFFOBJ::vDeleteRFONTRef(this);
      v6 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
      v4 = pvProducer;
    }
    while ( pvProducer );
  }
}
