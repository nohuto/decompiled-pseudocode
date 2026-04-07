/*
 * XREFs of DllMain @ 0x18004DD08
 * Callers:
 *     __DllMainCRTStartup @ 0x18004D890 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x18004A840 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x18007E484 (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x18004DD08
 * Reason: Hex-Rays returned no pseudocode for 0x18004DD08
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018004DD08: sub     rsp, 28h
 * 000000018004DD0C: test    edx, edx
 * 000000018004DD0E: jz      short loc_18004DD29
 * 000000018004DD10: cmp     edx, 1
 * 000000018004DD13: jnz     short loc_18004DD2E
 * 000000018004DD15: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 000000018004DD1C: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018004DD22: call    McGenEventRegister
 * 000000018004DD27: jmp     short loc_18004DD2E
 * 000000018004DD29: call    McGenEventUnregister
 * 000000018004DD2E: mov     eax, 1
 * 000000018004DD33: add     rsp, 28h
 * 000000018004DD37: retn
 */
