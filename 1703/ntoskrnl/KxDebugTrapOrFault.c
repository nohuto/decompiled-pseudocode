/*
 * XREFs of KxDebugTrapOrFault @ 0x14018BCC0
 * Callers:
 *     KiDebugTrapOrFault @ 0x14018BC00 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14018BCC0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14018BCC0
 * Reason: Hex-Rays returned no pseudocode for 0x14018BCC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018BCC0: sub     rsp, 8
 * 000000014018BCC4: push    rbp
 * 000000014018BCC5: sub     rsp, 158h
 * 000000014018BCCC: lea     rbp, [rsp+80h]
 * 000000014018BCD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018BCD8: mov     [rbp+0E8h+var_138], rax
 * 000000014018BCDC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018BCE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018BCE4: mov     [rbp+0E8h+var_120], r8
 * 000000014018BCE8: mov     [rbp+0E8h+var_118], r9
 * 000000014018BCEC: mov     [rbp+0E8h+var_110], r10
 * 000000014018BCF0: mov     [rbp+0E8h+var_108], r11
 * 000000014018BCF4: test    [rbp+0E8h+arg_0], 1
 * 000000014018BCFB: jnz     short loc_14018BD2A
 * 000000014018BCFD: lfence
 * 000000014018BD00: test    byte ptr gs:278h, 1
 * 000000014018BD09: jnz     short loc_14018BD13
 * 000000014018BD0B: lfence
 * 000000014018BD0E: jmp     loc_14018BF46
 * 000000014018BD13: movzx   eax, byte ptr gs:27Ah
 * 000000014018BD1C: mov     ecx, 48h ; 'H'
 * 000000014018BD21: xor     edx, edx
 * 000000014018BD23: wrmsr
 * 000000014018BD25: jmp     loc_14018BF46
 * 000000014018BD2A: test    cs:KiKvaShadow, 1
 * 000000014018BD31: jnz     short loc_14018BD36
 * 000000014018BD33: swapgs
 * 000000014018BD36: lfence
 * 000000014018BD39: mov     r10, gs:188h
 * 000000014018BD42: mov     rcx, gs:188h
 * 000000014018BD4B: mov     rcx, [rcx+220h]
 * 000000014018BD52: mov     rcx, [rcx+818h]
 * 000000014018BD59: mov     gs:270h, rcx
 * 000000014018BD62: movzx   eax, byte ptr gs:27Bh
 * 000000014018BD6B: cmp     gs:27Ah, al
 * 000000014018BD73: jz      short loc_14018BD86
 * 000000014018BD75: mov     gs:27Ah, al
 * 000000014018BD7D: mov     ecx, 48h ; 'H'
 * 000000014018BD82: xor     edx, edx
 * 000000014018BD84: wrmsr
 * 000000014018BD86: movzx   edx, byte ptr gs:278h
 * 000000014018BD8F: test    edx, 8
 * 000000014018BD95: jz      short loc_14018BDAA
 * 000000014018BD97: mov     eax, 1
 * 000000014018BD9C: xor     edx, edx
 * 000000014018BD9E: mov     ecx, 49h ; 'I'
 * 000000014018BDA3: wrmsr
 * 000000014018BDA5: jmp     loc_14018BEE8
 * 000000014018BDAA: test    edx, 2
 * 000000014018BDB0: jz      loc_14018BEE5
 * 000000014018BDB6: test    byte ptr gs:279h, 4
 * 000000014018BDBF: jnz     loc_14018BEE5
 * 000000014018BDC5: call    loc_14018BED8
 * 000000014018BDCA: add     rsp, 8
 * 000000014018BDCE: call    loc_14018BEE1
 * 000000014018BDD3: add     rsp, 8
 * 000000014018BDD7: call    loc_14018BDCA
 * 000000014018BDDC: add     rsp, 8
 * 000000014018BDE0: call    loc_14018BDD3
 * 000000014018BDE5: add     rsp, 8
 * 000000014018BDE9: call    loc_14018BDDC
 * 000000014018BDEE: add     rsp, 8
 * 000000014018BDF2: call    loc_14018BDE5
 * 000000014018BDF7: add     rsp, 8
 * 000000014018BDFB: call    loc_14018BDEE
 * 000000014018BE00: add     rsp, 8
 * 000000014018BE04: call    loc_14018BDF7
 * 000000014018BE09: add     rsp, 8
 * 000000014018BE0D: call    loc_14018BE00
 * 000000014018BE12: add     rsp, 8
 * 000000014018BE16: call    loc_14018BE09
 * 000000014018BE1B: add     rsp, 8
 * 000000014018BE1F: call    loc_14018BE12
 * 000000014018BE24: add     rsp, 8
 * 000000014018BE28: call    loc_14018BE1B
 * 000000014018BE2D: add     rsp, 8
 * 000000014018BE31: call    loc_14018BE24
 * 000000014018BE36: add     rsp, 8
 * 000000014018BE3A: call    loc_14018BE2D
 * 000000014018BE3F: add     rsp, 8
 * 000000014018BE43: call    loc_14018BE36
 * 000000014018BE48: add     rsp, 8
 * 000000014018BE4C: call    loc_14018BE3F
 * 000000014018BE51: add     rsp, 8
 * 000000014018BE55: call    loc_14018BE48
 * 000000014018BE5A: add     rsp, 8
 * 000000014018BE5E: call    loc_14018BE51
 * 000000014018BE63: add     rsp, 8
 * 000000014018BE67: call    loc_14018BE5A
 * 000000014018BE6C: add     rsp, 8
 * 000000014018BE70: call    loc_14018BE63
 * 000000014018BE75: add     rsp, 8
 * 000000014018BE79: call    loc_14018BE6C
 * 000000014018BE7E: add     rsp, 8
 * 000000014018BE82: call    loc_14018BE75
 * 000000014018BE87: add     rsp, 8
 * 000000014018BE8B: call    loc_14018BE7E
 * 000000014018BE90: add     rsp, 8
 * 000000014018BE94: call    loc_14018BE87
 * 000000014018BE99: add     rsp, 8
 * 000000014018BE9D: call    loc_14018BE90
 * 000000014018BEA2: add     rsp, 8
 * 000000014018BEA6: call    loc_14018BE99
 * 000000014018BEAB: add     rsp, 8
 * 000000014018BEAF: call    loc_14018BEA2
 * 000000014018BEB4: add     rsp, 8
 * 000000014018BEB8: call    loc_14018BEAB
 * 000000014018BEBD: add     rsp, 8
 * 000000014018BEC1: call    loc_14018BEB4
 * 000000014018BEC6: add     rsp, 8
 * 000000014018BECA: call    loc_14018BEBD
 * 000000014018BECF: add     rsp, 8
 * 000000014018BED3: call    loc_14018BEC6
 * 000000014018BED8: add     rsp, 8
 * 000000014018BEDC: call    loc_14018BECF
 * 000000014018BEE1: add     rsp, 8
 * 000000014018BEE5: lfence
 * 000000014018BEE8: test    byte ptr [r10+3], 80h
 * 000000014018BEED: jz      short loc_14018BF31
 * 000000014018BEEF: mov     ecx, 0C0000102h
 * 000000014018BEF4: rdmsr
 * 000000014018BEF6: shl     rdx, 20h
 * 000000014018BEFA: or      rax, rdx
 * 000000014018BEFD: cmp     rax, cs:MmUserProbeAddress
 * 000000014018BF04: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018BF0C: cmp     [r10+0F0h], rax
 * 000000014018BF13: jz      short loc_14018BF31
 * 000000014018BF15: mov     rdx, [r10+1F0h]
 * 000000014018BF1C: bts     dword ptr [r10+74h], 8
 * 000000014018BF22: dec     word ptr [r10+1E6h]
 * 000000014018BF2A: mov     [rdx+80h], rax
 * 000000014018BF31: test    byte ptr [r10+3], 3
 * 000000014018BF36: mov     [rbp+0E8h+var_68], 0
 * 000000014018BF3F: jz      short loc_14018BF46
 * 000000014018BF41: call    KiSaveDebugRegisterState
 * 000000014018BF46: cld
 * 000000014018BF47: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018BF4B: ldmxcsr dword ptr gs:180h
 * 000000014018BF54: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018BF58: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018BF5C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018BF60: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018BF64: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018BF68: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018BF6C: test    [rbp+0E8h+arg_8], 200h
 * 000000014018BF76: jz      short loc_14018BF79
 * 000000014018BF78: sti
 * 000000014018BF79: xor     edx, edx
 * 000000014018BF7B: test    [rbp+0E8h+arg_8], 100h
 * 000000014018BF85: jz      loc_14018C048
 * 000000014018BF8B: test    byte ptr gs:656Ah, 2
 * 000000014018BF94: jz      loc_14018C048
 * 000000014018BF9A: test    [rbp+0E8h+arg_0], 1
 * 000000014018BFA1: jnz     short loc_14018BFFA
 * 000000014018BFA3: mov     rax, dr7
 * 000000014018BFA6: test    ax, 200h
 * 000000014018BFAA: jz      loc_14018C048
 * 000000014018BFB0: test    ax, 100h
 * 000000014018BFB4: jz      loc_14018C048
 * 000000014018BFBA: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014018BFC1: or      r8d, r8d
 * 000000014018BFC4: jz      short loc_14018BFCE
 * 000000014018BFC6: mov     ecx, r8d
 * 000000014018BFC9: rdmsr
 * 000000014018BFCB: mov     r8d, eax
 * 000000014018BFCE: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014018BFD4: add     ecx, r8d
 * 000000014018BFD7: rdmsr
 * 000000014018BFD9: mov     r9d, eax
 * 000000014018BFDC: shl     rdx, 20h
 * 000000014018BFE0: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014018BFE6: or      r9, rdx
 * 000000014018BFE9: add     ecx, r8d
 * 000000014018BFEC: rdmsr
 * 000000014018BFEE: mov     r10d, eax
 * 000000014018BFF1: shl     rdx, 20h
 * 000000014018BFF5: or      r10, rdx
 * 000000014018BFF8: jmp     short loc_14018C043
 * 000000014018BFFA: test    [rbp+0E8h+var_68], 200h
 * 000000014018C003: jz      short loc_14018C048
 * 000000014018C005: test    [rbp+0E8h+var_68], 100h
 * 000000014018C00E: jz      short loc_14018C048
 * 000000014018C010: and     [rbp+0E8h+var_40], 0
 * 000000014018C018: and     [rbp+0E8h+var_48], 0
 * 000000014018C020: mov     rcx, cs:MmUserProbeAddress
 * 000000014018C027: mov     r9, [rbp+0E8h+var_50]
 * 000000014018C02E: cmp     r9, rcx
 * 000000014018C031: cmovnb  r9, rcx
 * 000000014018C035: mov     r10, [rbp+0E8h+var_58]
 * 000000014018C03C: cmp     r10, rcx
 * 000000014018C03F: cmovnb  r10, rcx
 * 000000014018C043: mov     edx, 2
 * 000000014018C048: mov     ecx, 80000004h
 * 000000014018C04D: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014018C057: mov     r8, [rbp+0E8h]
 * 000000014018C05E: call    KiExceptionDispatch
 * 000000014018C063: nop
 * 000000014018C064: retn
 */
