/*
 * XREFs of vKillRFONTList @ 0x1C024BCC0
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0040898 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *pvProducer; // rbx
  struct _FONTOBJ *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v8; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    pvProducer = a2;
    v4 = a2;
    do
    {
      pvProducer = (struct _FONTOBJ *)pvProducer[7].pvProducer;
      v8 = v4;
      memset(v7, 0, 0x20uLL);
      PushThreadGuardedObject(v7, v4, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v8, 0LL, 0LL, 1);
      PopThreadGuardedObject(v7);
      PFFOBJ::vDeleteRFONTRef(this);
      v8 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8, v5, v6);
      v4 = pvProducer;
    }
    while ( pvProducer );
  }
}
