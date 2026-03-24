/*
 * XREFs of KyStartUserThread @ 0x140188740
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140188740 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401889D0 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140188740
 * Reason: Hex-Rays returned no pseudocode for 0x140188740
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140188740: sub     rsp, 8
 * 0000000140188744: push    rbp
 * 0000000140188745: sub     rsp, 158h
 * 000000014018874C: lea     rbp, [rsp+80h]
 * 0000000140188754: mov     [rbp+0E8h+var_13D], 1
 * 0000000140188758: mov     [rbp+0E8h+var_138], rax
 * 000000014018875C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140188760: mov     [rbp+0E8h+var_128], rdx
 * 0000000140188764: mov     [rbp+0E8h+var_120], r8
 * 0000000140188768: mov     [rbp+0E8h+var_118], r9
 * 000000014018876C: mov     [rbp+0E8h+var_110], r10
 * 0000000140188770: mov     [rbp+0E8h+var_108], r11
 * 0000000140188774: test    [rbp+0E8h+arg_0], 1
 * 000000014018877B: jnz     short loc_1401887AA
 * 000000014018877D: lfence
 * 0000000140188780: test    byte ptr gs:278h, 1
 * 0000000140188789: jnz     short loc_140188793
 * 000000014018878B: lfence
 * 000000014018878E: jmp     loc_14018897D
 * 0000000140188793: movzx   eax, byte ptr gs:27Ah
 * 000000014018879C: mov     ecx, 48h ; 'H'
 * 00000001401887A1: xor     edx, edx
 * 00000001401887A3: wrmsr
 * 00000001401887A5: jmp     loc_14018897D
 * 00000001401887AA: test    cs:KiKvaShadow, 1
 * 00000001401887B1: jnz     short loc_1401887B6
 * 00000001401887B3: swapgs
 * 00000001401887B6: lfence
 * 00000001401887B9: mov     r10, gs:188h
 * 00000001401887C2: mov     rcx, gs:188h
 * 00000001401887CB: mov     rcx, [rcx+220h]
 * 00000001401887D2: mov     rcx, [rcx+838h]
 * 00000001401887D9: mov     gs:270h, rcx
 * 00000001401887E2: movzx   eax, byte ptr gs:27Bh
 * 00000001401887EB: cmp     gs:27Ah, al
 * 00000001401887F3: jz      short loc_140188806
 * 00000001401887F5: mov     gs:27Ah, al
 * 00000001401887FD: mov     ecx, 48h ; 'H'
 * 0000000140188802: xor     edx, edx
 * 0000000140188804: wrmsr
 * 0000000140188806: movzx   edx, byte ptr gs:278h
 * 000000014018880F: test    edx, 8
 * 0000000140188815: jz      short loc_14018882A
 * 0000000140188817: mov     eax, 1
 * 000000014018881C: xor     edx, edx
 * 000000014018881E: mov     ecx, 49h ; 'I'
 * 0000000140188823: wrmsr
 * 0000000140188825: jmp     loc_140188968
 * 000000014018882A: test    edx, 2
 * 0000000140188830: jz      loc_140188965
 * 0000000140188836: test    byte ptr gs:279h, 4
 * 000000014018883F: jnz     loc_140188965
 * 0000000140188845: call    loc_140188958
 * 000000014018884A: add     rsp, 8
 * 000000014018884E: call    loc_140188961
 * 0000000140188853: add     rsp, 8
 * 0000000140188857: call    loc_14018884A
 * 000000014018885C: add     rsp, 8
 * 0000000140188860: call    loc_140188853
 * 0000000140188865: add     rsp, 8
 * 0000000140188869: call    loc_14018885C
 * 000000014018886E: add     rsp, 8
 * 0000000140188872: call    loc_140188865
 * 0000000140188877: add     rsp, 8
 * 000000014018887B: call    loc_14018886E
 * 0000000140188880: add     rsp, 8
 * 0000000140188884: call    loc_140188877
 * 0000000140188889: add     rsp, 8
 * 000000014018888D: call    loc_140188880
 * 0000000140188892: add     rsp, 8
 * 0000000140188896: call    loc_140188889
 * 000000014018889B: add     rsp, 8
 * 000000014018889F: call    loc_140188892
 * 00000001401888A4: add     rsp, 8
 * 00000001401888A8: call    loc_14018889B
 * 00000001401888AD: add     rsp, 8
 * 00000001401888B1: call    loc_1401888A4
 * 00000001401888B6: add     rsp, 8
 * 00000001401888BA: call    loc_1401888AD
 * 00000001401888BF: add     rsp, 8
 * 00000001401888C3: call    loc_1401888B6
 * 00000001401888C8: add     rsp, 8
 * 00000001401888CC: call    loc_1401888BF
 * 00000001401888D1: add     rsp, 8
 * 00000001401888D5: call    loc_1401888C8
 * 00000001401888DA: add     rsp, 8
 * 00000001401888DE: call    loc_1401888D1
 * 00000001401888E3: add     rsp, 8
 * 00000001401888E7: call    loc_1401888DA
 * 00000001401888EC: add     rsp, 8
 * 00000001401888F0: call    loc_1401888E3
 * 00000001401888F5: add     rsp, 8
 * 00000001401888F9: call    loc_1401888EC
 * 00000001401888FE: add     rsp, 8
 * 0000000140188902: call    loc_1401888F5
 * 0000000140188907: add     rsp, 8
 * 000000014018890B: call    loc_1401888FE
 * 0000000140188910: add     rsp, 8
 * 0000000140188914: call    loc_140188907
 * 0000000140188919: add     rsp, 8
 * 000000014018891D: call    loc_140188910
 * 0000000140188922: add     rsp, 8
 * 0000000140188926: call    loc_140188919
 * 000000014018892B: add     rsp, 8
 * 000000014018892F: call    loc_140188922
 * 0000000140188934: add     rsp, 8
 * 0000000140188938: call    loc_14018892B
 * 000000014018893D: add     rsp, 8
 * 0000000140188941: call    loc_140188934
 * 0000000140188946: add     rsp, 8
 * 000000014018894A: call    loc_14018893D
 * 000000014018894F: add     rsp, 8
 * 0000000140188953: call    loc_140188946
 * 0000000140188958: add     rsp, 8
 * 000000014018895C: call    loc_14018894F
 * 0000000140188961: add     rsp, 8
 * 0000000140188965: lfence
 * 0000000140188968: test    byte ptr [r10+3], 3
 * 000000014018896D: mov     [rbp+0E8h+var_68], 0
 * 0000000140188976: jz      short loc_14018897D
 * 0000000140188978: call    KiSaveDebugRegisterState
 * 000000014018897D: cld
 * 000000014018897E: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140188982: ldmxcsr dword ptr gs:180h
 * 000000014018898B: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018898F: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140188993: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140188997: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018899B: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018899F: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401889A3: test    [rbp+0E8h+arg_8], 200h
 * 00000001401889AD: jz      short loc_1401889B0
 * 00000001401889AF: sti
 * 00000001401889B0: call    KxStartUserThread
 * 00000001401889B5: nop     word ptr [rax+rax+00000000h]
 * 00000001401889C0: nop
 * 00000001401889C1: retn
 */
