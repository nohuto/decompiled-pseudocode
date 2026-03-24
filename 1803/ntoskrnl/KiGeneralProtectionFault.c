/*
 * XREFs of KiGeneralProtectionFault @ 0x1401B8000
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x1402CF780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1401B8000 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1401B8000
 * Reason: Hex-Rays returned no pseudocode for 0x1401B8000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B8000: push    rbp
 * 00000001401B8001: sub     rsp, 158h
 * 00000001401B8008: lea     rbp, [rsp+80h]
 * 00000001401B8010: mov     [rbp+0D8h+var_12D], 1
 * 00000001401B8014: mov     [rbp+0D8h+var_128], rax
 * 00000001401B8018: mov     [rbp+0D8h+var_120], rcx
 * 00000001401B801C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401B8020: mov     [rbp+0D8h+var_110], r8
 * 00000001401B8024: mov     [rbp+0D8h+var_108], r9
 * 00000001401B8028: mov     [rbp+0D8h+var_100], r10
 * 00000001401B802C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401B8030: test    [rbp+0D8h+arg_8], 1
 * 00000001401B8037: jnz     short loc_1401B8066
 * 00000001401B8039: lfence
 * 00000001401B803C: test    byte ptr gs:278h, 1
 * 00000001401B8045: jnz     short loc_1401B804F
 * 00000001401B8047: lfence
 * 00000001401B804A: jmp     loc_1401B8282
 * 00000001401B804F: movzx   eax, byte ptr gs:27Ah
 * 00000001401B8058: mov     ecx, 48h ; 'H'
 * 00000001401B805D: xor     edx, edx
 * 00000001401B805F: wrmsr
 * 00000001401B8061: jmp     loc_1401B8282
 * 00000001401B8066: test    cs:KiKvaShadow, 1
 * 00000001401B806D: jnz     short loc_1401B8072
 * 00000001401B806F: swapgs
 * 00000001401B8072: lfence
 * 00000001401B8075: mov     r10, gs:188h
 * 00000001401B807E: mov     rcx, gs:188h
 * 00000001401B8087: mov     rcx, [rcx+220h]
 * 00000001401B808E: mov     rcx, [rcx+838h]
 * 00000001401B8095: mov     gs:270h, rcx
 * 00000001401B809E: movzx   eax, byte ptr gs:27Bh
 * 00000001401B80A7: cmp     gs:27Ah, al
 * 00000001401B80AF: jz      short loc_1401B80C2
 * 00000001401B80B1: mov     gs:27Ah, al
 * 00000001401B80B9: mov     ecx, 48h ; 'H'
 * 00000001401B80BE: xor     edx, edx
 * 00000001401B80C0: wrmsr
 * 00000001401B80C2: movzx   edx, byte ptr gs:278h
 * 00000001401B80CB: test    edx, 8
 * 00000001401B80D1: jz      short loc_1401B80E6
 * 00000001401B80D3: mov     eax, 1
 * 00000001401B80D8: xor     edx, edx
 * 00000001401B80DA: mov     ecx, 49h ; 'I'
 * 00000001401B80DF: wrmsr
 * 00000001401B80E1: jmp     loc_1401B8224
 * 00000001401B80E6: test    edx, 2
 * 00000001401B80EC: jz      loc_1401B8221
 * 00000001401B80F2: test    byte ptr gs:279h, 4
 * 00000001401B80FB: jnz     loc_1401B8221
 * 00000001401B8101: call    loc_1401B8214
 * 00000001401B8106: add     rsp, 8
 * 00000001401B810A: call    loc_1401B821D
 * 00000001401B810F: add     rsp, 8
 * 00000001401B8113: call    loc_1401B8106
 * 00000001401B8118: add     rsp, 8
 * 00000001401B811C: call    loc_1401B810F
 * 00000001401B8121: add     rsp, 8
 * 00000001401B8125: call    loc_1401B8118
 * 00000001401B812A: add     rsp, 8
 * 00000001401B812E: call    loc_1401B8121
 * 00000001401B8133: add     rsp, 8
 * 00000001401B8137: call    loc_1401B812A
 * 00000001401B813C: add     rsp, 8
 * 00000001401B8140: call    loc_1401B8133
 * 00000001401B8145: add     rsp, 8
 * 00000001401B8149: call    loc_1401B813C
 * 00000001401B814E: add     rsp, 8
 * 00000001401B8152: call    loc_1401B8145
 * 00000001401B8157: add     rsp, 8
 * 00000001401B815B: call    loc_1401B814E
 * 00000001401B8160: add     rsp, 8
 * 00000001401B8164: call    loc_1401B8157
 * 00000001401B8169: add     rsp, 8
 * 00000001401B816D: call    loc_1401B8160
 * 00000001401B8172: add     rsp, 8
 * 00000001401B8176: call    loc_1401B8169
 * 00000001401B817B: add     rsp, 8
 * 00000001401B817F: call    loc_1401B8172
 * 00000001401B8184: add     rsp, 8
 * 00000001401B8188: call    loc_1401B817B
 * 00000001401B818D: add     rsp, 8
 * 00000001401B8191: call    loc_1401B8184
 * 00000001401B8196: add     rsp, 8
 * 00000001401B819A: call    loc_1401B818D
 * 00000001401B819F: add     rsp, 8
 * 00000001401B81A3: call    loc_1401B8196
 * 00000001401B81A8: add     rsp, 8
 * 00000001401B81AC: call    loc_1401B819F
 * 00000001401B81B1: add     rsp, 8
 * 00000001401B81B5: call    loc_1401B81A8
 * 00000001401B81BA: add     rsp, 8
 * 00000001401B81BE: call    loc_1401B81B1
 * 00000001401B81C3: add     rsp, 8
 * 00000001401B81C7: call    loc_1401B81BA
 * 00000001401B81CC: add     rsp, 8
 * 00000001401B81D0: call    loc_1401B81C3
 * 00000001401B81D5: add     rsp, 8
 * 00000001401B81D9: call    loc_1401B81CC
 * 00000001401B81DE: add     rsp, 8
 * 00000001401B81E2: call    loc_1401B81D5
 * 00000001401B81E7: add     rsp, 8
 * 00000001401B81EB: call    loc_1401B81DE
 * 00000001401B81F0: add     rsp, 8
 * 00000001401B81F4: call    loc_1401B81E7
 * 00000001401B81F9: add     rsp, 8
 * 00000001401B81FD: call    loc_1401B81F0
 * 00000001401B8202: add     rsp, 8
 * 00000001401B8206: call    loc_1401B81F9
 * 00000001401B820B: add     rsp, 8
 * 00000001401B820F: call    loc_1401B8202
 * 00000001401B8214: add     rsp, 8
 * 00000001401B8218: call    loc_1401B820B
 * 00000001401B821D: add     rsp, 8
 * 00000001401B8221: lfence
 * 00000001401B8224: test    byte ptr [r10+3], 80h
 * 00000001401B8229: jz      short loc_1401B826D
 * 00000001401B822B: mov     ecx, 0C0000102h
 * 00000001401B8230: rdmsr
 * 00000001401B8232: shl     rdx, 20h
 * 00000001401B8236: or      rax, rdx
 * 00000001401B8239: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B8240: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B8248: cmp     [r10+0F0h], rax
 * 00000001401B824F: jz      short loc_1401B826D
 * 00000001401B8251: mov     rdx, [r10+1F0h]
 * 00000001401B8258: bts     dword ptr [r10+74h], 8
 * 00000001401B825E: dec     word ptr [r10+1E6h]
 * 00000001401B8266: mov     [rdx+80h], rax
 * 00000001401B826D: test    byte ptr [r10+3], 3
 * 00000001401B8272: mov     [rbp+0D8h+var_58], 0
 * 00000001401B827B: jz      short loc_1401B8282
 * 00000001401B827D: call    KiSaveDebugRegisterState
 * 00000001401B8282: cld
 * 00000001401B8283: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401B8287: ldmxcsr dword ptr gs:180h
 * 00000001401B8290: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401B8294: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401B8298: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401B829C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401B82A0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401B82A4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401B82A8: mov     eax, [rbp+0E0h]
 * 00000001401B82AE: test    [rbp+0D8h+arg_10], 200h
 * 00000001401B82B8: jz      short loc_1401B82BB
 * 00000001401B82BA: sti
 * 00000001401B82BB: mov     ecx, 10000001h
 * 00000001401B82C0: mov     edx, 2
 * 00000001401B82C5: mov     r9d, [rbp+0E0h]
 * 00000001401B82CC: and     r9d, 0FFFFh
 * 00000001401B82D3: xor     r10, r10
 * 00000001401B82D6: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401B82DD: call    KiExceptionDispatch
 * 00000001401B82E2: nop
 * 00000001401B82E3: retn
 */
