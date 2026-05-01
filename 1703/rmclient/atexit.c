/*
 * XREFs of atexit @ 0x180007880
 * Callers:
 *     sub_180001020 @ 0x180001020 (sub_180001020.c)
 *     sub_180001040 @ 0x180001040 (sub_180001040.c)
 *     sub_180001060 @ 0x180001060 (sub_180001060.c)
 *     sub_180001080 @ 0x180001080 (sub_180001080.c)
 *     sub_1800010A0 @ 0x1800010A0 (sub_1800010A0.c)
 *     DllGetActivationFactory @ 0x180004AB0 (DllGetActivationFactory.c)
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ @ 0x180004C40 (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ.c)
 *     DllCanUnloadNow @ 0x180004D10 (DllCanUnloadNow.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18000A3B0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 * Callees:
 *     _onexit_0 @ 0x1800077F0 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
