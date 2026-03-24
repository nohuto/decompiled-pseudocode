/*
 * XREFs of KiAlignmentFault @ 0x14018EF80
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140297900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14018EF80 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14018EF80
 * Reason: Hex-Rays returned no pseudocode for 0x14018EF80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018EF80: push    rbp
 * 000000014018EF81: sub     rsp, 158h
 * 000000014018EF88: lea     rbp, [rsp+80h]
 * 000000014018EF90: mov     [rbp+0D8h+var_12D], 1
 * 000000014018EF94: mov     [rbp+0D8h+var_128], rax
 * 000000014018EF98: mov     [rbp+0D8h+var_120], rcx
 * 000000014018EF9C: mov     [rbp+0D8h+var_118], rdx
 * 000000014018EFA0: mov     [rbp+0D8h+var_110], r8
 * 000000014018EFA4: mov     [rbp+0D8h+var_108], r9
 * 000000014018EFA8: mov     [rbp+0D8h+var_100], r10
 * 000000014018EFAC: mov     [rbp+0D8h+var_F8], r11
 * 000000014018EFB0: test    [rbp+0D8h+arg_8], 1
 * 000000014018EFB7: jnz     short loc_14018EFE6
 * 000000014018EFB9: lfence
 * 000000014018EFBC: test    byte ptr gs:278h, 1
 * 000000014018EFC5: jnz     short loc_14018EFCF
 * 000000014018EFC7: lfence
 * 000000014018EFCA: jmp     loc_14018F202
 * 000000014018EFCF: movzx   eax, byte ptr gs:27Ah
 * 000000014018EFD8: mov     ecx, 48h ; 'H'
 * 000000014018EFDD: xor     edx, edx
 * 000000014018EFDF: wrmsr
 * 000000014018EFE1: jmp     loc_14018F202
 * 000000014018EFE6: test    cs:KiKvaShadow, 1
 * 000000014018EFED: jnz     short loc_14018EFF2
 * 000000014018EFEF: swapgs
 * 000000014018EFF2: lfence
 * 000000014018EFF5: mov     r10, gs:188h
 * 000000014018EFFE: mov     rcx, gs:188h
 * 000000014018F007: mov     rcx, [rcx+220h]
 * 000000014018F00E: mov     rcx, [rcx+838h]
 * 000000014018F015: mov     gs:270h, rcx
 * 000000014018F01E: movzx   eax, byte ptr gs:27Bh
 * 000000014018F027: cmp     gs:27Ah, al
 * 000000014018F02F: jz      short loc_14018F042
 * 000000014018F031: mov     gs:27Ah, al
 * 000000014018F039: mov     ecx, 48h ; 'H'
 * 000000014018F03E: xor     edx, edx
 * 000000014018F040: wrmsr
 * 000000014018F042: movzx   edx, byte ptr gs:278h
 * 000000014018F04B: test    edx, 8
 * 000000014018F051: jz      short loc_14018F066
 * 000000014018F053: mov     eax, 1
 * 000000014018F058: xor     edx, edx
 * 000000014018F05A: mov     ecx, 49h ; 'I'
 * 000000014018F05F: wrmsr
 * 000000014018F061: jmp     loc_14018F1A4
 * 000000014018F066: test    edx, 2
 * 000000014018F06C: jz      loc_14018F1A1
 * 000000014018F072: test    byte ptr gs:279h, 4
 * 000000014018F07B: jnz     loc_14018F1A1
 * 000000014018F081: call    loc_14018F194
 * 000000014018F086: add     rsp, 8
 * 000000014018F08A: call    loc_14018F19D
 * 000000014018F08F: add     rsp, 8
 * 000000014018F093: call    loc_14018F086
 * 000000014018F098: add     rsp, 8
 * 000000014018F09C: call    loc_14018F08F
 * 000000014018F0A1: add     rsp, 8
 * 000000014018F0A5: call    loc_14018F098
 * 000000014018F0AA: add     rsp, 8
 * 000000014018F0AE: call    loc_14018F0A1
 * 000000014018F0B3: add     rsp, 8
 * 000000014018F0B7: call    loc_14018F0AA
 * 000000014018F0BC: add     rsp, 8
 * 000000014018F0C0: call    loc_14018F0B3
 * 000000014018F0C5: add     rsp, 8
 * 000000014018F0C9: call    loc_14018F0BC
 * 000000014018F0CE: add     rsp, 8
 * 000000014018F0D2: call    loc_14018F0C5
 * 000000014018F0D7: add     rsp, 8
 * 000000014018F0DB: call    loc_14018F0CE
 * 000000014018F0E0: add     rsp, 8
 * 000000014018F0E4: call    loc_14018F0D7
 * 000000014018F0E9: add     rsp, 8
 * 000000014018F0ED: call    loc_14018F0E0
 * 000000014018F0F2: add     rsp, 8
 * 000000014018F0F6: call    loc_14018F0E9
 * 000000014018F0FB: add     rsp, 8
 * 000000014018F0FF: call    loc_14018F0F2
 * 000000014018F104: add     rsp, 8
 * 000000014018F108: call    loc_14018F0FB
 * 000000014018F10D: add     rsp, 8
 * 000000014018F111: call    loc_14018F104
 * 000000014018F116: add     rsp, 8
 * 000000014018F11A: call    loc_14018F10D
 * 000000014018F11F: add     rsp, 8
 * 000000014018F123: call    loc_14018F116
 * 000000014018F128: add     rsp, 8
 * 000000014018F12C: call    loc_14018F11F
 * 000000014018F131: add     rsp, 8
 * 000000014018F135: call    loc_14018F128
 * 000000014018F13A: add     rsp, 8
 * 000000014018F13E: call    loc_14018F131
 * 000000014018F143: add     rsp, 8
 * 000000014018F147: call    loc_14018F13A
 * 000000014018F14C: add     rsp, 8
 * 000000014018F150: call    loc_14018F143
 * 000000014018F155: add     rsp, 8
 * 000000014018F159: call    loc_14018F14C
 * 000000014018F15E: add     rsp, 8
 * 000000014018F162: call    loc_14018F155
 * 000000014018F167: add     rsp, 8
 * 000000014018F16B: call    loc_14018F15E
 * 000000014018F170: add     rsp, 8
 * 000000014018F174: call    loc_14018F167
 * 000000014018F179: add     rsp, 8
 * 000000014018F17D: call    loc_14018F170
 * 000000014018F182: add     rsp, 8
 * 000000014018F186: call    loc_14018F179
 * 000000014018F18B: add     rsp, 8
 * 000000014018F18F: call    loc_14018F182
 * 000000014018F194: add     rsp, 8
 * 000000014018F198: call    loc_14018F18B
 * 000000014018F19D: add     rsp, 8
 * 000000014018F1A1: lfence
 * 000000014018F1A4: test    byte ptr [r10+3], 80h
 * 000000014018F1A9: jz      short loc_14018F1ED
 * 000000014018F1AB: mov     ecx, 0C0000102h
 * 000000014018F1B0: rdmsr
 * 000000014018F1B2: shl     rdx, 20h
 * 000000014018F1B6: or      rax, rdx
 * 000000014018F1B9: cmp     rax, cs:MmUserProbeAddress
 * 000000014018F1C0: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018F1C8: cmp     [r10+0F0h], rax
 * 000000014018F1CF: jz      short loc_14018F1ED
 * 000000014018F1D1: mov     rdx, [r10+1F0h]
 * 000000014018F1D8: bts     dword ptr [r10+74h], 8
 * 000000014018F1DE: dec     word ptr [r10+1E6h]
 * 000000014018F1E6: mov     [rdx+80h], rax
 * 000000014018F1ED: test    byte ptr [r10+3], 3
 * 000000014018F1F2: mov     [rbp+0D8h+var_58], 0
 * 000000014018F1FB: jz      short loc_14018F202
 * 000000014018F1FD: call    KiSaveDebugRegisterState
 * 000000014018F202: cld
 * 000000014018F203: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018F207: ldmxcsr dword ptr gs:180h
 * 000000014018F210: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018F214: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018F218: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018F21C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018F220: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018F224: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018F228: mov     eax, [rbp+0E0h]
 * 000000014018F22E: test    [rbp+0D8h+arg_10], 200h
 * 000000014018F238: jz      short loc_14018F23B
 * 000000014018F23A: sti
 * 000000014018F23B: mov     ecx, 80000002h
 * 000000014018F240: xor     edx, edx
 * 000000014018F242: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018F249: call    KiExceptionDispatch
 * 000000014018F24E: nop
 * 000000014018F24F: retn
 */
