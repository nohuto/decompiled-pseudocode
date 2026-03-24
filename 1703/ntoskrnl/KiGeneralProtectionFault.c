/*
 * XREFs of KiGeneralProtectionFault @ 0x14018E5C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x14026C780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14018E5C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14018E5C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018E5C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E5C0: push    rbp
 * 000000014018E5C1: sub     rsp, 158h
 * 000000014018E5C8: lea     rbp, [rsp+80h]
 * 000000014018E5D0: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E5D4: mov     [rbp+0D8h+var_128], rax
 * 000000014018E5D8: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E5DC: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E5E0: mov     [rbp+0D8h+var_110], r8
 * 000000014018E5E4: mov     [rbp+0D8h+var_108], r9
 * 000000014018E5E8: mov     [rbp+0D8h+var_100], r10
 * 000000014018E5EC: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E5F0: test    [rbp+0D8h+arg_8], 1
 * 000000014018E5F7: jnz     short loc_14018E626
 * 000000014018E5F9: lfence
 * 000000014018E5FC: test    byte ptr gs:278h, 1
 * 000000014018E605: jnz     short loc_14018E60F
 * 000000014018E607: lfence
 * 000000014018E60A: jmp     loc_14018E842
 * 000000014018E60F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E618: mov     ecx, 48h ; 'H'
 * 000000014018E61D: xor     edx, edx
 * 000000014018E61F: wrmsr
 * 000000014018E621: jmp     loc_14018E842
 * 000000014018E626: test    cs:KiKvaShadow, 1
 * 000000014018E62D: jnz     short loc_14018E632
 * 000000014018E62F: swapgs
 * 000000014018E632: lfence
 * 000000014018E635: mov     r10, gs:188h
 * 000000014018E63E: mov     rcx, gs:188h
 * 000000014018E647: mov     rcx, [rcx+220h]
 * 000000014018E64E: mov     rcx, [rcx+818h]
 * 000000014018E655: mov     gs:270h, rcx
 * 000000014018E65E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E667: cmp     gs:27Ah, al
 * 000000014018E66F: jz      short loc_14018E682
 * 000000014018E671: mov     gs:27Ah, al
 * 000000014018E679: mov     ecx, 48h ; 'H'
 * 000000014018E67E: xor     edx, edx
 * 000000014018E680: wrmsr
 * 000000014018E682: movzx   edx, byte ptr gs:278h
 * 000000014018E68B: test    edx, 8
 * 000000014018E691: jz      short loc_14018E6A6
 * 000000014018E693: mov     eax, 1
 * 000000014018E698: xor     edx, edx
 * 000000014018E69A: mov     ecx, 49h ; 'I'
 * 000000014018E69F: wrmsr
 * 000000014018E6A1: jmp     loc_14018E7E4
 * 000000014018E6A6: test    edx, 2
 * 000000014018E6AC: jz      loc_14018E7E1
 * 000000014018E6B2: test    byte ptr gs:279h, 4
 * 000000014018E6BB: jnz     loc_14018E7E1
 * 000000014018E6C1: call    loc_14018E7D4
 * 000000014018E6C6: add     rsp, 8
 * 000000014018E6CA: call    loc_14018E7DD
 * 000000014018E6CF: add     rsp, 8
 * 000000014018E6D3: call    loc_14018E6C6
 * 000000014018E6D8: add     rsp, 8
 * 000000014018E6DC: call    loc_14018E6CF
 * 000000014018E6E1: add     rsp, 8
 * 000000014018E6E5: call    loc_14018E6D8
 * 000000014018E6EA: add     rsp, 8
 * 000000014018E6EE: call    loc_14018E6E1
 * 000000014018E6F3: add     rsp, 8
 * 000000014018E6F7: call    loc_14018E6EA
 * 000000014018E6FC: add     rsp, 8
 * 000000014018E700: call    loc_14018E6F3
 * 000000014018E705: add     rsp, 8
 * 000000014018E709: call    loc_14018E6FC
 * 000000014018E70E: add     rsp, 8
 * 000000014018E712: call    loc_14018E705
 * 000000014018E717: add     rsp, 8
 * 000000014018E71B: call    loc_14018E70E
 * 000000014018E720: add     rsp, 8
 * 000000014018E724: call    loc_14018E717
 * 000000014018E729: add     rsp, 8
 * 000000014018E72D: call    loc_14018E720
 * 000000014018E732: add     rsp, 8
 * 000000014018E736: call    loc_14018E729
 * 000000014018E73B: add     rsp, 8
 * 000000014018E73F: call    loc_14018E732
 * 000000014018E744: add     rsp, 8
 * 000000014018E748: call    loc_14018E73B
 * 000000014018E74D: add     rsp, 8
 * 000000014018E751: call    loc_14018E744
 * 000000014018E756: add     rsp, 8
 * 000000014018E75A: call    loc_14018E74D
 * 000000014018E75F: add     rsp, 8
 * 000000014018E763: call    loc_14018E756
 * 000000014018E768: add     rsp, 8
 * 000000014018E76C: call    loc_14018E75F
 * 000000014018E771: add     rsp, 8
 * 000000014018E775: call    loc_14018E768
 * 000000014018E77A: add     rsp, 8
 * 000000014018E77E: call    loc_14018E771
 * 000000014018E783: add     rsp, 8
 * 000000014018E787: call    loc_14018E77A
 * 000000014018E78C: add     rsp, 8
 * 000000014018E790: call    loc_14018E783
 * 000000014018E795: add     rsp, 8
 * 000000014018E799: call    loc_14018E78C
 * 000000014018E79E: add     rsp, 8
 * 000000014018E7A2: call    loc_14018E795
 * 000000014018E7A7: add     rsp, 8
 * 000000014018E7AB: call    loc_14018E79E
 * 000000014018E7B0: add     rsp, 8
 * 000000014018E7B4: call    loc_14018E7A7
 * 000000014018E7B9: add     rsp, 8
 * 000000014018E7BD: call    loc_14018E7B0
 * 000000014018E7C2: add     rsp, 8
 * 000000014018E7C6: call    loc_14018E7B9
 * 000000014018E7CB: add     rsp, 8
 * 000000014018E7CF: call    loc_14018E7C2
 * 000000014018E7D4: add     rsp, 8
 * 000000014018E7D8: call    loc_14018E7CB
 * 000000014018E7DD: add     rsp, 8
 * 000000014018E7E1: lfence
 * 000000014018E7E4: test    byte ptr [r10+3], 80h
 * 000000014018E7E9: jz      short loc_14018E82D
 * 000000014018E7EB: mov     ecx, 0C0000102h
 * 000000014018E7F0: rdmsr
 * 000000014018E7F2: shl     rdx, 20h
 * 000000014018E7F6: or      rax, rdx
 * 000000014018E7F9: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E800: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E808: cmp     [r10+0F0h], rax
 * 000000014018E80F: jz      short loc_14018E82D
 * 000000014018E811: mov     rdx, [r10+1F0h]
 * 000000014018E818: bts     dword ptr [r10+74h], 8
 * 000000014018E81E: dec     word ptr [r10+1E6h]
 * 000000014018E826: mov     [rdx+80h], rax
 * 000000014018E82D: test    byte ptr [r10+3], 3
 * 000000014018E832: mov     [rbp+0D8h+var_58], 0
 * 000000014018E83B: jz      short loc_14018E842
 * 000000014018E83D: call    KiSaveDebugRegisterState
 * 000000014018E842: cld
 * 000000014018E843: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018E847: ldmxcsr dword ptr gs:180h
 * 000000014018E850: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018E854: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018E858: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018E85C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018E860: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018E864: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018E868: mov     eax, [rbp+0E0h]
 * 000000014018E86E: test    [rbp+0D8h+arg_10], 200h
 * 000000014018E878: jz      short loc_14018E87B
 * 000000014018E87A: sti
 * 000000014018E87B: mov     ecx, 10000001h
 * 000000014018E880: mov     edx, 2
 * 000000014018E885: mov     r9d, [rbp+0E0h]
 * 000000014018E88C: and     r9d, 0FFFFh
 * 000000014018E893: xor     r10, r10
 * 000000014018E896: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018E89D: call    KiExceptionDispatch
 * 000000014018E8A2: nop
 * 000000014018E8A3: retn
 */
