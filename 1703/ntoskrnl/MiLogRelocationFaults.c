/*
 * XREFs of MiLogRelocationFaults @ 0x140496184
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x14049620C (MiLogRelocationRva.c)
 */

/*
 * Hex-Rays decompilation failed for MiLogRelocationFaults @ 0x140496184
 * Reason: Hex-Rays returned no pseudocode for 0x140496184
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140496184: mov     [rsp+arg_0], rbx
 * 0000000140496189: mov     [rsp+arg_8], rbp
 * 000000014049618E: mov     [rsp+arg_10], rsi
 * 0000000140496193: push    rdi
 * 0000000140496194: sub     rsp, 20h
 * 0000000140496198: mov     rdi, r8
 * 000000014049619B: mov     rbx, rdx
 * 000000014049619E: mov     rsi, rcx
 * 00000001404961A1: call    MiReferenceControlAreaFile
 * 00000001404961A6: mov     edx, [rbx+4]
 * 00000001404961A9: mov     r9, rsi
 * 00000001404961AC: mov     ecx, [rbx]
 * 00000001404961AE: mov     r8, rax
 * 00000001404961B1: mov     rbp, rax
 * 00000001404961B4: call    MiLogRelocationRva
 * 00000001404961B9: mov     rbx, [rdi+10h]
 * 00000001404961BD: test    rbx, rbx
 * 00000001404961C0: jnz     short loc_1404961E1
 * 00000001404961C2: mov     rdx, rbp
 * 00000001404961C5: mov     rcx, rsi
 * 00000001404961C8: mov     rbx, [rsp+28h+arg_0]
 * 00000001404961CD: mov     rbp, [rsp+28h+arg_8]
 * 00000001404961D2: mov     rsi, [rsp+28h+arg_10]
 * 00000001404961D7: add     rsp, 20h
 * 00000001404961DB: pop     rdi
 * 00000001404961DC: jmp     MiDereferenceControlAreaFile
 * 00000001404961E1: mov     ecx, [rbx+8]
 * 00000001404961E4: test    ecx, 0FFFh
 * 00000001404961EA: jnz     short loc_1404961F1
 * 00000001404961EC: mov     rbx, [rbx]
 * 00000001404961EF: jmp     short loc_1404961BD
 * 00000001404961F1: mov     r9, rsi
 * 00000001404961F4: mov     r8, rbp
 * 00000001404961F7: mov     edx, 2000h
 * 00000001404961FC: call    MiLogRelocationRva
 * 0000000140496201: jmp     short loc_1404961EC
 */
