/*
 * XREFs of KiSystemService @ 0x140190BC0
 * Callers:
 *     KiSystemServiceShadow @ 0x14026CD80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140190BC0 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140190BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140190BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190BC0: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140190BC6: jz      KiSystemService32User
 * 0000000140190BCC: test    cs:KiKvaShadow, 1
 * 0000000140190BD3: jnz     short loc_140190BD8
 * 0000000140190BD5: swapgs
 * 0000000140190BD8: lfence
 * 0000000140190BDB: mov     rcx, r10
 * 0000000140190BDE: sub     rsp, 8
 * 0000000140190BE2: push    rbp
 * 0000000140190BE3: sub     rsp, 158h
 * 0000000140190BEA: lea     rbp, [rsp+168h+var_E8]
 * 0000000140190BF2: mov     [rbp+0C0h], rbx
 * 0000000140190BF9: mov     [rbp+0C8h], rdi
 * 0000000140190C00: mov     [rbp+0D0h], rsi
 * 0000000140190C07: mov     [rbp-50h], rax
 * 0000000140190C0B: mov     [rbp-48h], rcx
 * 0000000140190C0F: mov     [rbp-40h], rdx
 * 0000000140190C13: mov     rcx, gs:188h
 * 0000000140190C1C: mov     rcx, [rcx+220h]
 * 0000000140190C23: mov     rcx, [rcx+818h]
 * 0000000140190C2A: mov     gs:270h, rcx
 * 0000000140190C33: movzx   eax, byte ptr gs:27Bh
 * 0000000140190C3C: cmp     gs:27Ah, al
 * 0000000140190C44: jz      short loc_140190C57
 * 0000000140190C46: mov     gs:27Ah, al
 * 0000000140190C4E: mov     ecx, 48h ; 'H'
 * 0000000140190C53: xor     edx, edx
 * 0000000140190C55: wrmsr
 * 0000000140190C57: movzx   edx, byte ptr gs:278h
 * 0000000140190C60: test    edx, 8
 * 0000000140190C66: jz      short loc_140190C7B
 * 0000000140190C68: mov     eax, 1
 * 0000000140190C6D: xor     edx, edx
 * 0000000140190C6F: mov     ecx, 49h ; 'I'
 * 0000000140190C74: wrmsr
 * 0000000140190C76: jmp     loc_140190DB9
 * 0000000140190C7B: test    edx, 2
 * 0000000140190C81: jz      loc_140190DB6
 * 0000000140190C87: test    byte ptr gs:279h, 4
 * 0000000140190C90: jnz     loc_140190DB6
 * 0000000140190C96: call    loc_140190DA9
 * 0000000140190C9B: add     rsp, 8
 * 0000000140190C9F: call    loc_140190DB2
 * 0000000140190CA4: add     rsp, 8
 * 0000000140190CA8: call    loc_140190C9B
 * 0000000140190CAD: add     rsp, 8
 * 0000000140190CB1: call    loc_140190CA4
 * 0000000140190CB6: add     rsp, 8
 * 0000000140190CBA: call    loc_140190CAD
 * 0000000140190CBF: add     rsp, 8
 * 0000000140190CC3: call    loc_140190CB6
 * 0000000140190CC8: add     rsp, 8
 * 0000000140190CCC: call    loc_140190CBF
 * 0000000140190CD1: add     rsp, 8
 * 0000000140190CD5: call    loc_140190CC8
 * 0000000140190CDA: add     rsp, 8
 * 0000000140190CDE: call    loc_140190CD1
 * 0000000140190CE3: add     rsp, 8
 * 0000000140190CE7: call    loc_140190CDA
 * 0000000140190CEC: add     rsp, 8
 * 0000000140190CF0: call    loc_140190CE3
 * 0000000140190CF5: add     rsp, 8
 * 0000000140190CF9: call    loc_140190CEC
 * 0000000140190CFE: add     rsp, 8
 * 0000000140190D02: call    loc_140190CF5
 * 0000000140190D07: add     rsp, 8
 * 0000000140190D0B: call    loc_140190CFE
 * 0000000140190D10: add     rsp, 8
 * 0000000140190D14: call    loc_140190D07
 * 0000000140190D19: add     rsp, 8
 * 0000000140190D1D: call    loc_140190D10
 * 0000000140190D22: add     rsp, 8
 * 0000000140190D26: call    loc_140190D19
 * 0000000140190D2B: add     rsp, 8
 * 0000000140190D2F: call    loc_140190D22
 * 0000000140190D34: add     rsp, 8
 * 0000000140190D38: call    loc_140190D2B
 * 0000000140190D3D: add     rsp, 8
 * 0000000140190D41: call    loc_140190D34
 * 0000000140190D46: add     rsp, 8
 * 0000000140190D4A: call    loc_140190D3D
 * 0000000140190D4F: add     rsp, 8
 * 0000000140190D53: call    loc_140190D46
 * 0000000140190D58: add     rsp, 8
 * 0000000140190D5C: call    loc_140190D4F
 * 0000000140190D61: add     rsp, 8
 * 0000000140190D65: call    loc_140190D58
 * 0000000140190D6A: add     rsp, 8
 * 0000000140190D6E: call    loc_140190D61
 * 0000000140190D73: add     rsp, 8
 * 0000000140190D77: call    loc_140190D6A
 * 0000000140190D7C: add     rsp, 8
 * 0000000140190D80: call    loc_140190D73
 * 0000000140190D85: add     rsp, 8
 * 0000000140190D89: call    loc_140190D7C
 * 0000000140190D8E: add     rsp, 8
 * 0000000140190D92: call    loc_140190D85
 * 0000000140190D97: add     rsp, 8
 * 0000000140190D9B: call    loc_140190D8E
 * 0000000140190DA0: add     rsp, 8
 * 0000000140190DA4: call    loc_140190D97
 * 0000000140190DA9: add     rsp, 8
 * 0000000140190DAD: call    loc_140190DA0
 * 0000000140190DB2: add     rsp, 8
 * 0000000140190DB6: lfence
 * 0000000140190DB9: jmp     KiSystemServiceUser
 * 0000000140190DBE: retn
 */
