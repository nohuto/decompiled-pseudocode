/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00CAF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
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
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(0x44u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a2);
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C007F228;
  qword_1C0098F68 = (__int64)a5;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(0x45u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a2, a4);
  return 0LL;
}
