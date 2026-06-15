/*
 * XREFs of memcmp_0 @ 0x14001D6E7
 * Callers:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140003B40 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140042334 (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 *     ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x140044E50 (-IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
