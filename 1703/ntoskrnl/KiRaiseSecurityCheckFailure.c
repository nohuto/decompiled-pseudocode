/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401902C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x14026CC00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401902C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140191EC0 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401902C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401902C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401902C0: sub     qword ptr [rsp+0], 2
 * 00000001401902C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401902CB: jnz     short loc_1401902D2
 * 00000001401902CD: and     dword ptr [rsp+4], 0
 * 00000001401902D2: sub     rsp, 8
 * 00000001401902D6: push    rbp
 * 00000001401902D7: sub     rsp, 158h
 * 00000001401902DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001401902E6: mov     byte ptr [rbp-55h], 1
 * 00000001401902EA: mov     [rbp-50h], rax
 * 00000001401902EE: mov     [rbp-48h], rcx
 * 00000001401902F2: mov     [rbp-40h], rdx
 * 00000001401902F6: mov     [rbp-38h], r8
 * 00000001401902FA: mov     [rbp-30h], r9
 * 00000001401902FE: mov     [rbp-28h], r10
 * 0000000140190302: mov     [rbp-20h], r11
 * 0000000140190306: test    byte ptr [rbp+0F0h], 1
 * 000000014019030D: jnz     short loc_14019033C
 * 000000014019030F: lfence
 * 0000000140190312: test    byte ptr gs:278h, 1
 * 000000014019031B: jnz     short loc_140190325
 * 000000014019031D: lfence
 * 0000000140190320: jmp     loc_140190558
 * 0000000140190325: movzx   eax, byte ptr gs:27Ah
 * 000000014019032E: mov     ecx, 48h ; 'H'
 * 0000000140190333: xor     edx, edx
 * 0000000140190335: wrmsr
 * 0000000140190337: jmp     loc_140190558
 * 000000014019033C: test    cs:KiKvaShadow, 1
 * 0000000140190343: jnz     short loc_140190348
 * 0000000140190345: swapgs
 * 0000000140190348: lfence
 * 000000014019034B: mov     r10, gs:188h
 * 0000000140190354: mov     rcx, gs:188h
 * 000000014019035D: mov     rcx, [rcx+220h]
 * 0000000140190364: mov     rcx, [rcx+818h]
 * 000000014019036B: mov     gs:270h, rcx
 * 0000000140190374: movzx   eax, byte ptr gs:27Bh
 * 000000014019037D: cmp     gs:27Ah, al
 * 0000000140190385: jz      short loc_140190398
 * 0000000140190387: mov     gs:27Ah, al
 * 000000014019038F: mov     ecx, 48h ; 'H'
 * 0000000140190394: xor     edx, edx
 * 0000000140190396: wrmsr
 * 0000000140190398: movzx   edx, byte ptr gs:278h
 * 00000001401903A1: test    edx, 8
 * 00000001401903A7: jz      short loc_1401903BC
 * 00000001401903A9: mov     eax, 1
 * 00000001401903AE: xor     edx, edx
 * 00000001401903B0: mov     ecx, 49h ; 'I'
 * 00000001401903B5: wrmsr
 * 00000001401903B7: jmp     loc_1401904FA
 * 00000001401903BC: test    edx, 2
 * 00000001401903C2: jz      loc_1401904F7
 * 00000001401903C8: test    byte ptr gs:279h, 4
 * 00000001401903D1: jnz     loc_1401904F7
 * 00000001401903D7: call    loc_1401904EA
 * 00000001401903DC: add     rsp, 8
 * 00000001401903E0: call    loc_1401904F3
 * 00000001401903E5: add     rsp, 8
 * 00000001401903E9: call    loc_1401903DC
 * 00000001401903EE: add     rsp, 8
 * 00000001401903F2: call    loc_1401903E5
 * 00000001401903F7: add     rsp, 8
 * 00000001401903FB: call    loc_1401903EE
 * 0000000140190400: add     rsp, 8
 * 0000000140190404: call    loc_1401903F7
 * 0000000140190409: add     rsp, 8
 * 000000014019040D: call    loc_140190400
 * 0000000140190412: add     rsp, 8
 * 0000000140190416: call    loc_140190409
 * 000000014019041B: add     rsp, 8
 * 000000014019041F: call    loc_140190412
 * 0000000140190424: add     rsp, 8
 * 0000000140190428: call    loc_14019041B
 * 000000014019042D: add     rsp, 8
 * 0000000140190431: call    loc_140190424
 * 0000000140190436: add     rsp, 8
 * 000000014019043A: call    loc_14019042D
 * 000000014019043F: add     rsp, 8
 * 0000000140190443: call    loc_140190436
 * 0000000140190448: add     rsp, 8
 * 000000014019044C: call    loc_14019043F
 * 0000000140190451: add     rsp, 8
 * 0000000140190455: call    loc_140190448
 * 000000014019045A: add     rsp, 8
 * 000000014019045E: call    loc_140190451
 * 0000000140190463: add     rsp, 8
 * 0000000140190467: call    loc_14019045A
 * 000000014019046C: add     rsp, 8
 * 0000000140190470: call    loc_140190463
 * 0000000140190475: add     rsp, 8
 * 0000000140190479: call    loc_14019046C
 * 000000014019047E: add     rsp, 8
 * 0000000140190482: call    loc_140190475
 * 0000000140190487: add     rsp, 8
 * 000000014019048B: call    loc_14019047E
 * 0000000140190490: add     rsp, 8
 * 0000000140190494: call    loc_140190487
 * 0000000140190499: add     rsp, 8
 * 000000014019049D: call    loc_140190490
 * 00000001401904A2: add     rsp, 8
 * 00000001401904A6: call    loc_140190499
 * 00000001401904AB: add     rsp, 8
 * 00000001401904AF: call    loc_1401904A2
 * 00000001401904B4: add     rsp, 8
 * 00000001401904B8: call    loc_1401904AB
 * 00000001401904BD: add     rsp, 8
 * 00000001401904C1: call    loc_1401904B4
 * 00000001401904C6: add     rsp, 8
 * 00000001401904CA: call    loc_1401904BD
 * 00000001401904CF: add     rsp, 8
 * 00000001401904D3: call    loc_1401904C6
 * 00000001401904D8: add     rsp, 8
 * 00000001401904DC: call    loc_1401904CF
 * 00000001401904E1: add     rsp, 8
 * 00000001401904E5: call    loc_1401904D8
 * 00000001401904EA: add     rsp, 8
 * 00000001401904EE: call    loc_1401904E1
 * 00000001401904F3: add     rsp, 8
 * 00000001401904F7: lfence
 * 00000001401904FA: test    byte ptr [r10+3], 80h
 * 00000001401904FF: jz      short loc_140190543
 * 0000000140190501: mov     ecx, 0C0000102h
 * 0000000140190506: rdmsr
 * 0000000140190508: shl     rdx, 20h
 * 000000014019050C: or      rax, rdx
 * 000000014019050F: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190516: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014019051E: cmp     [r10+0F0h], rax
 * 0000000140190525: jz      short loc_140190543
 * 0000000140190527: mov     rdx, [r10+1F0h]
 * 000000014019052E: bts     dword ptr [r10+74h], 8
 * 0000000140190534: dec     word ptr [r10+1E6h]
 * 000000014019053C: mov     [rdx+80h], rax
 * 0000000140190543: test    byte ptr [r10+3], 3
 * 0000000140190548: mov     word ptr [rbp+80h], 0
 * 0000000140190551: jz      short loc_140190558
 * 0000000140190553: call    KiSaveDebugRegisterState
 * 0000000140190558: cld
 * 0000000140190559: stmxcsr dword ptr [rbp-54h]
 * 000000014019055D: ldmxcsr dword ptr gs:180h
 * 0000000140190566: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014019056A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014019056E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190572: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190576: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014019057A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014019057E: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190588: jz      short loc_14019058B
 * 000000014019058A: sti
 * 000000014019058B: mov     r9, [rbp-48h]
 * 000000014019058F: mov     ecx, 0C0000409h
 * 0000000140190594: mov     edx, 1
 * 0000000140190599: mov     r8, [rbp+0E8h]
 * 00000001401905A0: call    KiFastFailDispatch
 * 00000001401905A5: nop
 * 00000001401905A6: retn
 */
