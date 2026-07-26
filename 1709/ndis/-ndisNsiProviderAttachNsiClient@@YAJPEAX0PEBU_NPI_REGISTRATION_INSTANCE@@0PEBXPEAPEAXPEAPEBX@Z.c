/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00C97C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisNsiProviderAttachNsiClient(
        void *a1,
        void *a2,
        const struct _NPI_REGISTRATION_INSTANCE *a3,
        void *a4,
        const void *a5,
        void **a6,
        const void **a7)
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(0x44u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a2);
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C007E230;
  qword_1C00980E8 = (__int64)a5;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(0x45u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a2, a4);
  return 0LL;
}
