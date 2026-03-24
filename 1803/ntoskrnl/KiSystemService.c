/*
 * XREFs of KiSystemService @ 0x1401BAA80
 * Callers:
 *     KiSystemServiceShadow @ 0x1402CFE00 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1401BAA80 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1401BAA80
 * Reason: Hex-Rays returned no pseudocode for 0x1401BAA80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BAA80: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401BAA86: jz      KiSystemService32User
 * 00000001401BAA8C: test    cs:KiKvaShadow, 1
 * 00000001401BAA93: jnz     short loc_1401BAA98
 * 00000001401BAA95: swapgs
 * 00000001401BAA98: lfence
 * 00000001401BAA9B: mov     rcx, r10
 * 00000001401BAA9E: sub     rsp, 8
 * 00000001401BAAA2: push    rbp
 * 00000001401BAAA3: sub     rsp, 158h
 * 00000001401BAAAA: lea     rbp, [rsp+168h+var_E8]
 * 00000001401BAAB2: mov     [rbp+0C0h], rbx
 * 00000001401BAAB9: mov     [rbp+0C8h], rdi
 * 00000001401BAAC0: mov     [rbp+0D0h], rsi
 * 00000001401BAAC7: mov     [rbp-50h], rax
 * 00000001401BAACB: mov     [rbp-48h], rcx
 * 00000001401BAACF: mov     [rbp-40h], rdx
 * 00000001401BAAD3: mov     rcx, gs:188h
 * 00000001401BAADC: mov     rcx, [rcx+220h]
 * 00000001401BAAE3: mov     rcx, [rcx+838h]
 * 00000001401BAAEA: mov     gs:270h, rcx
 * 00000001401BAAF3: movzx   eax, byte ptr gs:27Bh
 * 00000001401BAAFC: cmp     gs:27Ah, al
 * 00000001401BAB04: jz      short loc_1401BAB17
 * 00000001401BAB06: mov     gs:27Ah, al
 * 00000001401BAB0E: mov     ecx, 48h ; 'H'
 * 00000001401BAB13: xor     edx, edx
 * 00000001401BAB15: wrmsr
 * 00000001401BAB17: movzx   edx, byte ptr gs:278h
 * 00000001401BAB20: test    edx, 8
 * 00000001401BAB26: jz      short loc_1401BAB3B
 * 00000001401BAB28: mov     eax, 1
 * 00000001401BAB2D: xor     edx, edx
 * 00000001401BAB2F: mov     ecx, 49h ; 'I'
 * 00000001401BAB34: wrmsr
 * 00000001401BAB36: jmp     loc_1401BAC79
 * 00000001401BAB3B: test    edx, 2
 * 00000001401BAB41: jz      loc_1401BAC76
 * 00000001401BAB47: test    byte ptr gs:279h, 4
 * 00000001401BAB50: jnz     loc_1401BAC76
 * 00000001401BAB56: call    loc_1401BAC69
 * 00000001401BAB5B: add     rsp, 8
 * 00000001401BAB5F: call    loc_1401BAC72
 * 00000001401BAB64: add     rsp, 8
 * 00000001401BAB68: call    loc_1401BAB5B
 * 00000001401BAB6D: add     rsp, 8
 * 00000001401BAB71: call    loc_1401BAB64
 * 00000001401BAB76: add     rsp, 8
 * 00000001401BAB7A: call    loc_1401BAB6D
 * 00000001401BAB7F: add     rsp, 8
 * 00000001401BAB83: call    loc_1401BAB76
 * 00000001401BAB88: add     rsp, 8
 * 00000001401BAB8C: call    loc_1401BAB7F
 * 00000001401BAB91: add     rsp, 8
 * 00000001401BAB95: call    loc_1401BAB88
 * 00000001401BAB9A: add     rsp, 8
 * 00000001401BAB9E: call    loc_1401BAB91
 * 00000001401BABA3: add     rsp, 8
 * 00000001401BABA7: call    loc_1401BAB9A
 * 00000001401BABAC: add     rsp, 8
 * 00000001401BABB0: call    loc_1401BABA3
 * 00000001401BABB5: add     rsp, 8
 * 00000001401BABB9: call    loc_1401BABAC
 * 00000001401BABBE: add     rsp, 8
 * 00000001401BABC2: call    loc_1401BABB5
 * 00000001401BABC7: add     rsp, 8
 * 00000001401BABCB: call    loc_1401BABBE
 * 00000001401BABD0: add     rsp, 8
 * 00000001401BABD4: call    loc_1401BABC7
 * 00000001401BABD9: add     rsp, 8
 * 00000001401BABDD: call    loc_1401BABD0
 * 00000001401BABE2: add     rsp, 8
 * 00000001401BABE6: call    loc_1401BABD9
 * 00000001401BABEB: add     rsp, 8
 * 00000001401BABEF: call    loc_1401BABE2
 * 00000001401BABF4: add     rsp, 8
 * 00000001401BABF8: call    loc_1401BABEB
 * 00000001401BABFD: add     rsp, 8
 * 00000001401BAC01: call    loc_1401BABF4
 * 00000001401BAC06: add     rsp, 8
 * 00000001401BAC0A: call    loc_1401BABFD
 * 00000001401BAC0F: add     rsp, 8
 * 00000001401BAC13: call    loc_1401BAC06
 * 00000001401BAC18: add     rsp, 8
 * 00000001401BAC1C: call    loc_1401BAC0F
 * 00000001401BAC21: add     rsp, 8
 * 00000001401BAC25: call    loc_1401BAC18
 * 00000001401BAC2A: add     rsp, 8
 * 00000001401BAC2E: call    loc_1401BAC21
 * 00000001401BAC33: add     rsp, 8
 * 00000001401BAC37: call    loc_1401BAC2A
 * 00000001401BAC3C: add     rsp, 8
 * 00000001401BAC40: call    loc_1401BAC33
 * 00000001401BAC45: add     rsp, 8
 * 00000001401BAC49: call    loc_1401BAC3C
 * 00000001401BAC4E: add     rsp, 8
 * 00000001401BAC52: call    loc_1401BAC45
 * 00000001401BAC57: add     rsp, 8
 * 00000001401BAC5B: call    loc_1401BAC4E
 * 00000001401BAC60: add     rsp, 8
 * 00000001401BAC64: call    loc_1401BAC57
 * 00000001401BAC69: add     rsp, 8
 * 00000001401BAC6D: call    loc_1401BAC60
 * 00000001401BAC72: add     rsp, 8
 * 00000001401BAC76: lfence
 * 00000001401BAC79: jmp     KiSystemServiceUser
 * 00000001401BAC7E: retn
 */
