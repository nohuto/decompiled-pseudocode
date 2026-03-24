/*
 * XREFs of KiSystemService @ 0x140190D80
 * Callers:
 *     KiSystemServiceShadow @ 0x140297E00 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140190D80 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140190D80
 * Reason: Hex-Rays returned no pseudocode for 0x140190D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190D80: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140190D86: jz      KiSystemService32User
 * 0000000140190D8C: test    cs:KiKvaShadow, 1
 * 0000000140190D93: jnz     short loc_140190D98
 * 0000000140190D95: swapgs
 * 0000000140190D98: lfence
 * 0000000140190D9B: mov     rcx, r10
 * 0000000140190D9E: sub     rsp, 8
 * 0000000140190DA2: push    rbp
 * 0000000140190DA3: sub     rsp, 158h
 * 0000000140190DAA: lea     rbp, [rsp+168h+var_E8]
 * 0000000140190DB2: mov     [rbp+0C0h], rbx
 * 0000000140190DB9: mov     [rbp+0C8h], rdi
 * 0000000140190DC0: mov     [rbp+0D0h], rsi
 * 0000000140190DC7: mov     [rbp-50h], rax
 * 0000000140190DCB: mov     [rbp-48h], rcx
 * 0000000140190DCF: mov     [rbp-40h], rdx
 * 0000000140190DD3: mov     rcx, gs:188h
 * 0000000140190DDC: mov     rcx, [rcx+220h]
 * 0000000140190DE3: mov     rcx, [rcx+838h]
 * 0000000140190DEA: mov     gs:270h, rcx
 * 0000000140190DF3: movzx   eax, byte ptr gs:27Bh
 * 0000000140190DFC: cmp     gs:27Ah, al
 * 0000000140190E04: jz      short loc_140190E17
 * 0000000140190E06: mov     gs:27Ah, al
 * 0000000140190E0E: mov     ecx, 48h ; 'H'
 * 0000000140190E13: xor     edx, edx
 * 0000000140190E15: wrmsr
 * 0000000140190E17: movzx   edx, byte ptr gs:278h
 * 0000000140190E20: test    edx, 8
 * 0000000140190E26: jz      short loc_140190E3B
 * 0000000140190E28: mov     eax, 1
 * 0000000140190E2D: xor     edx, edx
 * 0000000140190E2F: mov     ecx, 49h ; 'I'
 * 0000000140190E34: wrmsr
 * 0000000140190E36: jmp     loc_140190F79
 * 0000000140190E3B: test    edx, 2
 * 0000000140190E41: jz      loc_140190F76
 * 0000000140190E47: test    byte ptr gs:279h, 4
 * 0000000140190E50: jnz     loc_140190F76
 * 0000000140190E56: call    loc_140190F69
 * 0000000140190E5B: add     rsp, 8
 * 0000000140190E5F: call    loc_140190F72
 * 0000000140190E64: add     rsp, 8
 * 0000000140190E68: call    loc_140190E5B
 * 0000000140190E6D: add     rsp, 8
 * 0000000140190E71: call    loc_140190E64
 * 0000000140190E76: add     rsp, 8
 * 0000000140190E7A: call    loc_140190E6D
 * 0000000140190E7F: add     rsp, 8
 * 0000000140190E83: call    loc_140190E76
 * 0000000140190E88: add     rsp, 8
 * 0000000140190E8C: call    loc_140190E7F
 * 0000000140190E91: add     rsp, 8
 * 0000000140190E95: call    loc_140190E88
 * 0000000140190E9A: add     rsp, 8
 * 0000000140190E9E: call    loc_140190E91
 * 0000000140190EA3: add     rsp, 8
 * 0000000140190EA7: call    loc_140190E9A
 * 0000000140190EAC: add     rsp, 8
 * 0000000140190EB0: call    loc_140190EA3
 * 0000000140190EB5: add     rsp, 8
 * 0000000140190EB9: call    loc_140190EAC
 * 0000000140190EBE: add     rsp, 8
 * 0000000140190EC2: call    loc_140190EB5
 * 0000000140190EC7: add     rsp, 8
 * 0000000140190ECB: call    loc_140190EBE
 * 0000000140190ED0: add     rsp, 8
 * 0000000140190ED4: call    loc_140190EC7
 * 0000000140190ED9: add     rsp, 8
 * 0000000140190EDD: call    loc_140190ED0
 * 0000000140190EE2: add     rsp, 8
 * 0000000140190EE6: call    loc_140190ED9
 * 0000000140190EEB: add     rsp, 8
 * 0000000140190EEF: call    loc_140190EE2
 * 0000000140190EF4: add     rsp, 8
 * 0000000140190EF8: call    loc_140190EEB
 * 0000000140190EFD: add     rsp, 8
 * 0000000140190F01: call    loc_140190EF4
 * 0000000140190F06: add     rsp, 8
 * 0000000140190F0A: call    loc_140190EFD
 * 0000000140190F0F: add     rsp, 8
 * 0000000140190F13: call    loc_140190F06
 * 0000000140190F18: add     rsp, 8
 * 0000000140190F1C: call    loc_140190F0F
 * 0000000140190F21: add     rsp, 8
 * 0000000140190F25: call    loc_140190F18
 * 0000000140190F2A: add     rsp, 8
 * 0000000140190F2E: call    loc_140190F21
 * 0000000140190F33: add     rsp, 8
 * 0000000140190F37: call    loc_140190F2A
 * 0000000140190F3C: add     rsp, 8
 * 0000000140190F40: call    loc_140190F33
 * 0000000140190F45: add     rsp, 8
 * 0000000140190F49: call    loc_140190F3C
 * 0000000140190F4E: add     rsp, 8
 * 0000000140190F52: call    loc_140190F45
 * 0000000140190F57: add     rsp, 8
 * 0000000140190F5B: call    loc_140190F4E
 * 0000000140190F60: add     rsp, 8
 * 0000000140190F64: call    loc_140190F57
 * 0000000140190F69: add     rsp, 8
 * 0000000140190F6D: call    loc_140190F60
 * 0000000140190F72: add     rsp, 8
 * 0000000140190F76: lfence
 * 0000000140190F79: jmp     KiSystemServiceUser
 * 0000000140190F7E: retn
 */
