/*
 * XREFs of KiSystemCall64Shadow @ 0x140299040
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x140299040 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140299040
 * Reason: Hex-Rays returned no pseudocode for 0x140299040
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140299040: swapgs
 * 0000000140299043: mov     gs:7010h, rsp
 * 000000014029904C: mov     rsp, gs:7000h
 * 0000000140299055: bt      dword ptr gs:7018h, 1
 * 000000014029905F: jb      short loc_140299064
 * 0000000140299061: mov     cr3, rsp
 * 0000000140299064: mov     rsp, gs:7008h
 * 000000014029906D: push    2Bh ; '+'
 * 000000014029906F: push    qword ptr gs:7010h
 * 0000000140299077: push    r11
 * 0000000140299079: push    33h ; '3'
 * 000000014029907B: push    rcx
 * 000000014029907C: mov     rcx, r10
 * 000000014029907F: sub     rsp, 8
 * 0000000140299083: push    rbp
 * 0000000140299084: sub     rsp, 158h
 * 000000014029908B: lea     rbp, [rsp+190h+var_110]
 * 0000000140299093: mov     [rbp+0C0h], rbx
 * 000000014029909A: mov     [rbp+0C8h], rdi
 * 00000001402990A1: mov     [rbp+0D0h], rsi
 * 00000001402990A8: jmp     short loc_1402990D3
 * 00000001402990AA: mov     [rbx+90h], rsp
 * 00000001402990B1: mov     edi, eax
 * 00000001402990B3: shr     edi, 7
 * 00000001402990B6: and     edi, 20h
 * 00000001402990B9: and     eax, 0FFFh
 * 00000001402990BE: lea     r10, KeServiceDescriptorTable
 * 00000001402990C5: lea     r11, KeServiceDescriptorTableShadow
 * 00000001402990CC: test    dword ptr [rbx+78h], 80h
 * 00000001402990D3: mov     [rbp-50h], rax
 * 00000001402990D7: mov     [rbp-48h], rcx
 * 00000001402990DB: mov     [rbp-40h], rdx
 * 00000001402990DF: mov     rcx, gs:188h
 * 00000001402990E8: mov     rcx, [rcx+220h]
 * 00000001402990EF: mov     rcx, [rcx+838h]
 * 00000001402990F6: mov     gs:270h, rcx
 * 00000001402990FF: movzx   eax, byte ptr gs:27Bh
 * 0000000140299108: cmp     gs:27Ah, al
 * 0000000140299110: jz      short loc_140299123
 * 0000000140299112: mov     gs:27Ah, al
 * 000000014029911A: mov     ecx, 48h ; 'H'
 * 000000014029911F: xor     edx, edx
 * 0000000140299121: wrmsr
 * 0000000140299123: movzx   edx, byte ptr gs:278h
 * 000000014029912C: test    edx, 8
 * 0000000140299132: jz      short loc_140299147
 * 0000000140299134: mov     eax, 1
 * 0000000140299139: xor     edx, edx
 * 000000014029913B: mov     ecx, 49h ; 'I'
 * 0000000140299140: wrmsr
 * 0000000140299142: jmp     loc_140299285
 * 0000000140299147: test    edx, 2
 * 000000014029914D: jz      loc_140299282
 * 0000000140299153: test    byte ptr gs:279h, 4
 * 000000014029915C: jnz     loc_140299282
 * 0000000140299162: call    loc_140299275
 * 0000000140299167: add     rsp, 8
 * 000000014029916B: call    loc_14029927E
 * 0000000140299170: add     rsp, 8
 * 0000000140299174: call    loc_140299167
 * 0000000140299179: add     rsp, 8
 * 000000014029917D: call    loc_140299170
 * 0000000140299182: add     rsp, 8
 * 0000000140299186: call    loc_140299179
 * 000000014029918B: add     rsp, 8
 * 000000014029918F: call    loc_140299182
 * 0000000140299194: add     rsp, 8
 * 0000000140299198: call    loc_14029918B
 * 000000014029919D: add     rsp, 8
 * 00000001402991A1: call    loc_140299194
 * 00000001402991A6: add     rsp, 8
 * 00000001402991AA: call    loc_14029919D
 * 00000001402991AF: add     rsp, 8
 * 00000001402991B3: call    loc_1402991A6
 * 00000001402991B8: add     rsp, 8
 * 00000001402991BC: call    loc_1402991AF
 * 00000001402991C1: add     rsp, 8
 * 00000001402991C5: call    loc_1402991B8
 * 00000001402991CA: add     rsp, 8
 * 00000001402991CE: call    loc_1402991C1
 * 00000001402991D3: add     rsp, 8
 * 00000001402991D7: call    loc_1402991CA
 * 00000001402991DC: add     rsp, 8
 * 00000001402991E0: call    loc_1402991D3
 * 00000001402991E5: add     rsp, 8
 * 00000001402991E9: call    loc_1402991DC
 * 00000001402991EE: add     rsp, 8
 * 00000001402991F2: call    loc_1402991E5
 * 00000001402991F7: add     rsp, 8
 * 00000001402991FB: call    loc_1402991EE
 * 0000000140299200: add     rsp, 8
 * 0000000140299204: call    loc_1402991F7
 * 0000000140299209: add     rsp, 8
 * 000000014029920D: call    loc_140299200
 * 0000000140299212: add     rsp, 8
 * 0000000140299216: call    loc_140299209
 * 000000014029921B: add     rsp, 8
 * 000000014029921F: call    loc_140299212
 * 0000000140299224: add     rsp, 8
 * 0000000140299228: call    loc_14029921B
 * 000000014029922D: add     rsp, 8
 * 0000000140299231: call    loc_140299224
 * 0000000140299236: add     rsp, 8
 * 000000014029923A: call    loc_14029922D
 * 000000014029923F: add     rsp, 8
 * 0000000140299243: call    loc_140299236
 * 0000000140299248: add     rsp, 8
 * 000000014029924C: call    loc_14029923F
 * 0000000140299251: add     rsp, 8
 * 0000000140299255: call    loc_140299248
 * 000000014029925A: add     rsp, 8
 * 000000014029925E: call    loc_140299251
 * 0000000140299263: add     rsp, 8
 * 0000000140299267: call    loc_14029925A
 * 000000014029926C: add     rsp, 8
 * 0000000140299270: call    loc_140299263
 * 0000000140299275: add     rsp, 8
 * 0000000140299279: call    loc_14029926C
 * 000000014029927E: add     rsp, 8
 * 0000000140299282: lfence
 * 0000000140299285: jmp     KiSystemServiceUser
 * 000000014029928A: retn
 */
