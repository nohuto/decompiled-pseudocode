/*
 * XREFs of SmpEventWrite @ 0x140007660
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140006C40 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140006F00 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140007034 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x140007660
 * Reason: Hex-Rays returned no pseudocode for 0x140007660
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140007660: push    rbx
 * 0000000140007662: sub     rsp, 20h
 * 0000000140007666: mov     rbx, rcx
 * 0000000140007669: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 0000000140007670: test    rcx, rcx
 * 0000000140007673: jz      short loc_140007686
 * 0000000140007675: mov     rdx, rbx; EventDescriptor
 * 0000000140007678: call    cs:__imp_EtwEventEnabled
 * 000000014000767E: test    al, al
 * 0000000140007680: jnz     loc_14000E73C
 * 0000000140007686: add     rsp, 20h
 * 000000014000768A: pop     rbx
 * 000000014000768B: retn
 * 000000014000E73C: mov     rcx, cs:SmpTraceHandle
 * 000000014000E743: xor     r9d, r9d
 * 000000014000E746: xor     r8d, r8d
 * 000000014000E749: mov     rdx, rbx
 * 000000014000E74C: call    cs:__imp_EtwEventWrite
 * 000000014000E752: nop
 * 000000014000E753: jmp     loc_140007686
 */
