/*
 * XREFs of KiAlignmentFault @ 0x14018F240
 * Callers:
 *     KiAlignmentFaultShadow @ 0x14026C900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14018F240 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14018F240
 * Reason: Hex-Rays returned no pseudocode for 0x14018F240
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018F240: push    rbp
 * 000000014018F241: sub     rsp, 158h
 * 000000014018F248: lea     rbp, [rsp+80h]
 * 000000014018F250: mov     [rbp+0D8h+var_12D], 1
 * 000000014018F254: mov     [rbp+0D8h+var_128], rax
 * 000000014018F258: mov     [rbp+0D8h+var_120], rcx
 * 000000014018F25C: mov     [rbp+0D8h+var_118], rdx
 * 000000014018F260: mov     [rbp+0D8h+var_110], r8
 * 000000014018F264: mov     [rbp+0D8h+var_108], r9
 * 000000014018F268: mov     [rbp+0D8h+var_100], r10
 * 000000014018F26C: mov     [rbp+0D8h+var_F8], r11
 * 000000014018F270: test    [rbp+0D8h+arg_8], 1
 * 000000014018F277: jnz     short loc_14018F2A6
 * 000000014018F279: lfence
 * 000000014018F27C: test    byte ptr gs:278h, 1
 * 000000014018F285: jnz     short loc_14018F28F
 * 000000014018F287: lfence
 * 000000014018F28A: jmp     loc_14018F4C2
 * 000000014018F28F: movzx   eax, byte ptr gs:27Ah
 * 000000014018F298: mov     ecx, 48h ; 'H'
 * 000000014018F29D: xor     edx, edx
 * 000000014018F29F: wrmsr
 * 000000014018F2A1: jmp     loc_14018F4C2
 * 000000014018F2A6: test    cs:KiKvaShadow, 1
 * 000000014018F2AD: jnz     short loc_14018F2B2
 * 000000014018F2AF: swapgs
 * 000000014018F2B2: lfence
 * 000000014018F2B5: mov     r10, gs:188h
 * 000000014018F2BE: mov     rcx, gs:188h
 * 000000014018F2C7: mov     rcx, [rcx+220h]
 * 000000014018F2CE: mov     rcx, [rcx+818h]
 * 000000014018F2D5: mov     gs:270h, rcx
 * 000000014018F2DE: movzx   eax, byte ptr gs:27Bh
 * 000000014018F2E7: cmp     gs:27Ah, al
 * 000000014018F2EF: jz      short loc_14018F302
 * 000000014018F2F1: mov     gs:27Ah, al
 * 000000014018F2F9: mov     ecx, 48h ; 'H'
 * 000000014018F2FE: xor     edx, edx
 * 000000014018F300: wrmsr
 * 000000014018F302: movzx   edx, byte ptr gs:278h
 * 000000014018F30B: test    edx, 8
 * 000000014018F311: jz      short loc_14018F326
 * 000000014018F313: mov     eax, 1
 * 000000014018F318: xor     edx, edx
 * 000000014018F31A: mov     ecx, 49h ; 'I'
 * 000000014018F31F: wrmsr
 * 000000014018F321: jmp     loc_14018F464
 * 000000014018F326: test    edx, 2
 * 000000014018F32C: jz      loc_14018F461
 * 000000014018F332: test    byte ptr gs:279h, 4
 * 000000014018F33B: jnz     loc_14018F461
 * 000000014018F341: call    loc_14018F454
 * 000000014018F346: add     rsp, 8
 * 000000014018F34A: call    loc_14018F45D
 * 000000014018F34F: add     rsp, 8
 * 000000014018F353: call    loc_14018F346
 * 000000014018F358: add     rsp, 8
 * 000000014018F35C: call    loc_14018F34F
 * 000000014018F361: add     rsp, 8
 * 000000014018F365: call    loc_14018F358
 * 000000014018F36A: add     rsp, 8
 * 000000014018F36E: call    loc_14018F361
 * 000000014018F373: add     rsp, 8
 * 000000014018F377: call    loc_14018F36A
 * 000000014018F37C: add     rsp, 8
 * 000000014018F380: call    loc_14018F373
 * 000000014018F385: add     rsp, 8
 * 000000014018F389: call    loc_14018F37C
 * 000000014018F38E: add     rsp, 8
 * 000000014018F392: call    loc_14018F385
 * 000000014018F397: add     rsp, 8
 * 000000014018F39B: call    loc_14018F38E
 * 000000014018F3A0: add     rsp, 8
 * 000000014018F3A4: call    loc_14018F397
 * 000000014018F3A9: add     rsp, 8
 * 000000014018F3AD: call    loc_14018F3A0
 * 000000014018F3B2: add     rsp, 8
 * 000000014018F3B6: call    loc_14018F3A9
 * 000000014018F3BB: add     rsp, 8
 * 000000014018F3BF: call    loc_14018F3B2
 * 000000014018F3C4: add     rsp, 8
 * 000000014018F3C8: call    loc_14018F3BB
 * 000000014018F3CD: add     rsp, 8
 * 000000014018F3D1: call    loc_14018F3C4
 * 000000014018F3D6: add     rsp, 8
 * 000000014018F3DA: call    loc_14018F3CD
 * 000000014018F3DF: add     rsp, 8
 * 000000014018F3E3: call    loc_14018F3D6
 * 000000014018F3E8: add     rsp, 8
 * 000000014018F3EC: call    loc_14018F3DF
 * 000000014018F3F1: add     rsp, 8
 * 000000014018F3F5: call    loc_14018F3E8
 * 000000014018F3FA: add     rsp, 8
 * 000000014018F3FE: call    loc_14018F3F1
 * 000000014018F403: add     rsp, 8
 * 000000014018F407: call    loc_14018F3FA
 * 000000014018F40C: add     rsp, 8
 * 000000014018F410: call    loc_14018F403
 * 000000014018F415: add     rsp, 8
 * 000000014018F419: call    loc_14018F40C
 * 000000014018F41E: add     rsp, 8
 * 000000014018F422: call    loc_14018F415
 * 000000014018F427: add     rsp, 8
 * 000000014018F42B: call    loc_14018F41E
 * 000000014018F430: add     rsp, 8
 * 000000014018F434: call    loc_14018F427
 * 000000014018F439: add     rsp, 8
 * 000000014018F43D: call    loc_14018F430
 * 000000014018F442: add     rsp, 8
 * 000000014018F446: call    loc_14018F439
 * 000000014018F44B: add     rsp, 8
 * 000000014018F44F: call    loc_14018F442
 * 000000014018F454: add     rsp, 8
 * 000000014018F458: call    loc_14018F44B
 * 000000014018F45D: add     rsp, 8
 * 000000014018F461: lfence
 * 000000014018F464: test    byte ptr [r10+3], 80h
 * 000000014018F469: jz      short loc_14018F4AD
 * 000000014018F46B: mov     ecx, 0C0000102h
 * 000000014018F470: rdmsr
 * 000000014018F472: shl     rdx, 20h
 * 000000014018F476: or      rax, rdx
 * 000000014018F479: cmp     rax, cs:MmUserProbeAddress
 * 000000014018F480: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018F488: cmp     [r10+0F0h], rax
 * 000000014018F48F: jz      short loc_14018F4AD
 * 000000014018F491: mov     rdx, [r10+1F0h]
 * 000000014018F498: bts     dword ptr [r10+74h], 8
 * 000000014018F49E: dec     word ptr [r10+1E6h]
 * 000000014018F4A6: mov     [rdx+80h], rax
 * 000000014018F4AD: test    byte ptr [r10+3], 3
 * 000000014018F4B2: mov     [rbp+0D8h+var_58], 0
 * 000000014018F4BB: jz      short loc_14018F4C2
 * 000000014018F4BD: call    KiSaveDebugRegisterState
 * 000000014018F4C2: cld
 * 000000014018F4C3: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018F4C7: ldmxcsr dword ptr gs:180h
 * 000000014018F4D0: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018F4D4: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018F4D8: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018F4DC: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018F4E0: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018F4E4: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018F4E8: mov     eax, [rbp+0E0h]
 * 000000014018F4EE: test    [rbp+0D8h+arg_10], 200h
 * 000000014018F4F8: jz      short loc_14018F4FB
 * 000000014018F4FA: sti
 * 000000014018F4FB: mov     ecx, 80000002h
 * 000000014018F500: xor     edx, edx
 * 000000014018F502: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018F509: call    KiExceptionDispatch
 * 000000014018F50E: nop
 * 000000014018F50F: retn
 */
