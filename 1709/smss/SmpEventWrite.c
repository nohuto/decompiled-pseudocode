/*
 * XREFs of SmpEventWrite @ 0x140007820
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140006E00 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x1400071F4 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x140007820
 * Reason: Hex-Rays returned no pseudocode for 0x140007820
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140007820: push    rbx
 * 0000000140007822: sub     rsp, 20h
 * 0000000140007826: mov     rbx, rcx
 * 0000000140007829: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 0000000140007830: test    rcx, rcx
 * 0000000140007833: jz      short loc_140007846
 * 0000000140007835: mov     rdx, rbx; EventDescriptor
 * 0000000140007838: call    cs:__imp_EtwEventEnabled
 * 000000014000783E: test    al, al
 * 0000000140007840: jnz     loc_14000E552
 * 0000000140007846: add     rsp, 20h
 * 000000014000784A: pop     rbx
 * 000000014000784B: retn
 * 000000014000E552: mov     rcx, cs:SmpTraceHandle
 * 000000014000E559: xor     r9d, r9d
 * 000000014000E55C: xor     r8d, r8d
 * 000000014000E55F: mov     rdx, rbx
 * 000000014000E562: call    cs:__imp_EtwEventWrite
 * 000000014000E568: nop
 * 000000014000E569: jmp     loc_140007846
 */
