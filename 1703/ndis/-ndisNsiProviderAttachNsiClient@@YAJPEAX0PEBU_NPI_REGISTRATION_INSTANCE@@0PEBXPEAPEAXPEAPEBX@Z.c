/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00BE6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
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
  char v9; // cl

  v9 = byte_1C009261D;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_qq(0x44u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a2);
    v9 = byte_1C009261D;
  }
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C007A230;
  qword_1C0091DC8 = (__int64)a5;
  if ( (unsigned __int8)v9 >= 4u )
    WPP_SF_qq(0x45u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a2, a4);
  return 0LL;
}
