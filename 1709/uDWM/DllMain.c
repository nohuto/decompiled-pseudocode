/*
 * XREFs of DllMain @ 0x180046674
 * Callers:
 *     __DllMainCRTStartup @ 0x180046250 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x180044FD8 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x180073D40 (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x180046674
 * Reason: Hex-Rays returned no pseudocode for 0x180046674
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180046674: sub     rsp, 28h
 * 0000000180046678: test    edx, edx
 * 000000018004667A: jz      short loc_180046695
 * 000000018004667C: cmp     edx, 1
 * 000000018004667F: jnz     short loc_18004669A
 * 0000000180046681: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 0000000180046688: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018004668E: call    McGenEventRegister
 * 0000000180046693: jmp     short loc_18004669A
 * 0000000180046695: call    McGenEventUnregister
 * 000000018004669A: mov     eax, 1
 * 000000018004669F: add     rsp, 28h
 * 00000001800466A3: retn
 */
