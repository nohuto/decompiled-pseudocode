/*
 * XREFs of DllMain @ 0x18004B160
 * Callers:
 *     __DllMainCRTStartup @ 0x180049BA0 (__DllMainCRTStartup.c)
 * Callees:
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180048BB8 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister @ 0x180048BD8 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x18007AACC (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x18004B160
 * Reason: Hex-Rays returned no pseudocode for 0x18004B160
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018004B160: sub     rsp, 28h
 * 000000018004B164: test    edx, edx
 * 000000018004B166: jz      short loc_18004B186
 * 000000018004B168: cmp     edx, 1
 * 000000018004B16B: jnz     short loc_18004B18B
 * 000000018004B16D: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 000000018004B174: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018004B17A: call    ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z; wil::SetResultTelemetryFallback(void (*)(bool,wil::FailureInfo const &))
 * 000000018004B17F: call    McGenEventRegister
 * 000000018004B184: jmp     short loc_18004B18B
 * 000000018004B186: call    McGenEventUnregister
 * 000000018004B18B: mov     eax, 1
 * 000000018004B190: add     rsp, 28h
 * 000000018004B194: retn
 */
