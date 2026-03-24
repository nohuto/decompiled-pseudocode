/*
 * XREFs of KiDebugServiceTrap @ 0x1401BA780
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x1402CFD80 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401BA780 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401BA780
 * Reason: Hex-Rays returned no pseudocode for 0x1401BA780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BA780: inc     qword ptr [rsp+0]
 * 00000001401BA784: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401BA78A: jnz     short loc_1401BA791
 * 00000001401BA78C: and     dword ptr [rsp+4], 0
 * 00000001401BA791: sub     rsp, 8
 * 00000001401BA795: push    rbp
 * 00000001401BA796: sub     rsp, 158h
 * 00000001401BA79D: lea     rbp, [rsp+168h+var_E8]
 * 00000001401BA7A5: mov     byte ptr [rbp-55h], 1
 * 00000001401BA7A9: mov     [rbp-50h], rax
 * 00000001401BA7AD: mov     [rbp-48h], rcx
 * 00000001401BA7B1: mov     [rbp-40h], rdx
 * 00000001401BA7B5: mov     [rbp-38h], r8
 * 00000001401BA7B9: mov     [rbp-30h], r9
 * 00000001401BA7BD: mov     [rbp-28h], r10
 * 00000001401BA7C1: mov     [rbp-20h], r11
 * 00000001401BA7C5: test    byte ptr [rbp+0F0h], 1
 * 00000001401BA7CC: jnz     short loc_1401BA7FB
 * 00000001401BA7CE: lfence
 * 00000001401BA7D1: test    byte ptr gs:278h, 1
 * 00000001401BA7DA: jnz     short loc_1401BA7E4
 * 00000001401BA7DC: lfence
 * 00000001401BA7DF: jmp     loc_1401BAA17
 * 00000001401BA7E4: movzx   eax, byte ptr gs:27Ah
 * 00000001401BA7ED: mov     ecx, 48h ; 'H'
 * 00000001401BA7F2: xor     edx, edx
 * 00000001401BA7F4: wrmsr
 * 00000001401BA7F6: jmp     loc_1401BAA17
 * 00000001401BA7FB: test    cs:KiKvaShadow, 1
 * 00000001401BA802: jnz     short loc_1401BA807
 * 00000001401BA804: swapgs
 * 00000001401BA807: lfence
 * 00000001401BA80A: mov     r10, gs:188h
 * 00000001401BA813: mov     rcx, gs:188h
 * 00000001401BA81C: mov     rcx, [rcx+220h]
 * 00000001401BA823: mov     rcx, [rcx+838h]
 * 00000001401BA82A: mov     gs:270h, rcx
 * 00000001401BA833: movzx   eax, byte ptr gs:27Bh
 * 00000001401BA83C: cmp     gs:27Ah, al
 * 00000001401BA844: jz      short loc_1401BA857
 * 00000001401BA846: mov     gs:27Ah, al
 * 00000001401BA84E: mov     ecx, 48h ; 'H'
 * 00000001401BA853: xor     edx, edx
 * 00000001401BA855: wrmsr
 * 00000001401BA857: movzx   edx, byte ptr gs:278h
 * 00000001401BA860: test    edx, 8
 * 00000001401BA866: jz      short loc_1401BA87B
 * 00000001401BA868: mov     eax, 1
 * 00000001401BA86D: xor     edx, edx
 * 00000001401BA86F: mov     ecx, 49h ; 'I'
 * 00000001401BA874: wrmsr
 * 00000001401BA876: jmp     loc_1401BA9B9
 * 00000001401BA87B: test    edx, 2
 * 00000001401BA881: jz      loc_1401BA9B6
 * 00000001401BA887: test    byte ptr gs:279h, 4
 * 00000001401BA890: jnz     loc_1401BA9B6
 * 00000001401BA896: call    loc_1401BA9A9
 * 00000001401BA89B: add     rsp, 8
 * 00000001401BA89F: call    loc_1401BA9B2
 * 00000001401BA8A4: add     rsp, 8
 * 00000001401BA8A8: call    loc_1401BA89B
 * 00000001401BA8AD: add     rsp, 8
 * 00000001401BA8B1: call    loc_1401BA8A4
 * 00000001401BA8B6: add     rsp, 8
 * 00000001401BA8BA: call    loc_1401BA8AD
 * 00000001401BA8BF: add     rsp, 8
 * 00000001401BA8C3: call    loc_1401BA8B6
 * 00000001401BA8C8: add     rsp, 8
 * 00000001401BA8CC: call    loc_1401BA8BF
 * 00000001401BA8D1: add     rsp, 8
 * 00000001401BA8D5: call    loc_1401BA8C8
 * 00000001401BA8DA: add     rsp, 8
 * 00000001401BA8DE: call    loc_1401BA8D1
 * 00000001401BA8E3: add     rsp, 8
 * 00000001401BA8E7: call    loc_1401BA8DA
 * 00000001401BA8EC: add     rsp, 8
 * 00000001401BA8F0: call    loc_1401BA8E3
 * 00000001401BA8F5: add     rsp, 8
 * 00000001401BA8F9: call    loc_1401BA8EC
 * 00000001401BA8FE: add     rsp, 8
 * 00000001401BA902: call    loc_1401BA8F5
 * 00000001401BA907: add     rsp, 8
 * 00000001401BA90B: call    loc_1401BA8FE
 * 00000001401BA910: add     rsp, 8
 * 00000001401BA914: call    loc_1401BA907
 * 00000001401BA919: add     rsp, 8
 * 00000001401BA91D: call    loc_1401BA910
 * 00000001401BA922: add     rsp, 8
 * 00000001401BA926: call    loc_1401BA919
 * 00000001401BA92B: add     rsp, 8
 * 00000001401BA92F: call    loc_1401BA922
 * 00000001401BA934: add     rsp, 8
 * 00000001401BA938: call    loc_1401BA92B
 * 00000001401BA93D: add     rsp, 8
 * 00000001401BA941: call    loc_1401BA934
 * 00000001401BA946: add     rsp, 8
 * 00000001401BA94A: call    loc_1401BA93D
 * 00000001401BA94F: add     rsp, 8
 * 00000001401BA953: call    loc_1401BA946
 * 00000001401BA958: add     rsp, 8
 * 00000001401BA95C: call    loc_1401BA94F
 * 00000001401BA961: add     rsp, 8
 * 00000001401BA965: call    loc_1401BA958
 * 00000001401BA96A: add     rsp, 8
 * 00000001401BA96E: call    loc_1401BA961
 * 00000001401BA973: add     rsp, 8
 * 00000001401BA977: call    loc_1401BA96A
 * 00000001401BA97C: add     rsp, 8
 * 00000001401BA980: call    loc_1401BA973
 * 00000001401BA985: add     rsp, 8
 * 00000001401BA989: call    loc_1401BA97C
 * 00000001401BA98E: add     rsp, 8
 * 00000001401BA992: call    loc_1401BA985
 * 00000001401BA997: add     rsp, 8
 * 00000001401BA99B: call    loc_1401BA98E
 * 00000001401BA9A0: add     rsp, 8
 * 00000001401BA9A4: call    loc_1401BA997
 * 00000001401BA9A9: add     rsp, 8
 * 00000001401BA9AD: call    loc_1401BA9A0
 * 00000001401BA9B2: add     rsp, 8
 * 00000001401BA9B6: lfence
 * 00000001401BA9B9: test    byte ptr [r10+3], 80h
 * 00000001401BA9BE: jz      short loc_1401BAA02
 * 00000001401BA9C0: mov     ecx, 0C0000102h
 * 00000001401BA9C5: rdmsr
 * 00000001401BA9C7: shl     rdx, 20h
 * 00000001401BA9CB: or      rax, rdx
 * 00000001401BA9CE: cmp     rax, cs:MmUserProbeAddress
 * 00000001401BA9D5: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401BA9DD: cmp     [r10+0F0h], rax
 * 00000001401BA9E4: jz      short loc_1401BAA02
 * 00000001401BA9E6: mov     rdx, [r10+1F0h]
 * 00000001401BA9ED: bts     dword ptr [r10+74h], 8
 * 00000001401BA9F3: dec     word ptr [r10+1E6h]
 * 00000001401BA9FB: mov     [rdx+80h], rax
 * 00000001401BAA02: test    byte ptr [r10+3], 3
 * 00000001401BAA07: mov     word ptr [rbp+80h], 0
 * 00000001401BAA10: jz      short loc_1401BAA17
 * 00000001401BAA12: call    KiSaveDebugRegisterState
 * 00000001401BAA17: cld
 * 00000001401BAA18: stmxcsr dword ptr [rbp-54h]
 * 00000001401BAA1C: ldmxcsr dword ptr gs:180h
 * 00000001401BAA25: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401BAA29: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401BAA2D: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401BAA31: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401BAA35: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401BAA39: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401BAA3D: test    dword ptr [rbp+0F8h], 200h
 * 00000001401BAA47: jz      short loc_1401BAA4A
 * 00000001401BAA49: sti
 * 00000001401BAA4A: mov     ecx, 80000003h
 * 00000001401BAA4F: mov     edx, 1
 * 00000001401BAA54: mov     r9, [rbp-50h]
 * 00000001401BAA58: mov     r8, [rbp+0E8h]
 * 00000001401BAA5F: call    KiExceptionDispatch
 * 00000001401BAA64: nop
 * 00000001401BAA65: retn
 */
