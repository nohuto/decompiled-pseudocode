/*
 * XREFs of atexit @ 0x1800083A0
 * Callers:
 *     sub_180001110 @ 0x180001110 (sub_180001110.c)
 *     sub_180001140 @ 0x180001140 (sub_180001140.c)
 *     sub_1800011B0 @ 0x1800011B0 (sub_1800011B0.c)
 *     sub_180001200 @ 0x180001200 (sub_180001200.c)
 *     sub_180001210 @ 0x180001210 (sub_180001210.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800079F0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     sub_1800090D0 @ 0x1800090D0 (sub_1800090D0.c)
 * Callees:
 *     _onexit_0 @ 0x180008310 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
