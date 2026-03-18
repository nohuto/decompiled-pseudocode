/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C012E098
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D660 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D8C0 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D9B0 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DAD0 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DB80 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotificationBase @ 0x1C008BFD0 (NlsKbdSendIMENotificationBase.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x1C013AB88 (ApiSetEditionGetAppImeCompatFlags.c)
 */

void __fastcall NlsKbdSendIMEProc(int a1, int a2)
{
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 64) && (ApiSetEditionGetAppImeCompatFlags() & 0x800000) == 0 )
    NlsKbdSendIMENotificationBase(a1, a2);
}
