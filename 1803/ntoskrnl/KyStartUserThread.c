/*
 * XREFs of KyStartUserThread @ 0x1401B23A0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401B23A0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401B2630 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401B23A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401B23A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B23A0: sub     rsp, 8
 * 00000001401B23A4: push    rbp
 * 00000001401B23A5: sub     rsp, 158h
 * 00000001401B23AC: lea     rbp, [rsp+80h]
 * 00000001401B23B4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401B23B8: mov     [rbp+0E8h+var_138], rax
 * 00000001401B23BC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B23C0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B23C4: mov     [rbp+0E8h+var_120], r8
 * 00000001401B23C8: mov     [rbp+0E8h+var_118], r9
 * 00000001401B23CC: mov     [rbp+0E8h+var_110], r10
 * 00000001401B23D0: mov     [rbp+0E8h+var_108], r11
 * 00000001401B23D4: test    [rbp+0E8h+arg_0], 1
 * 00000001401B23DB: jnz     short loc_1401B240A
 * 00000001401B23DD: lfence
 * 00000001401B23E0: test    byte ptr gs:278h, 1
 * 00000001401B23E9: jnz     short loc_1401B23F3
 * 00000001401B23EB: lfence
 * 00000001401B23EE: jmp     loc_1401B25DD
 * 00000001401B23F3: movzx   eax, byte ptr gs:27Ah
 * 00000001401B23FC: mov     ecx, 48h ; 'H'
 * 00000001401B2401: xor     edx, edx
 * 00000001401B2403: wrmsr
 * 00000001401B2405: jmp     loc_1401B25DD
 * 00000001401B240A: test    cs:KiKvaShadow, 1
 * 00000001401B2411: jnz     short loc_1401B2416
 * 00000001401B2413: swapgs
 * 00000001401B2416: lfence
 * 00000001401B2419: mov     r10, gs:188h
 * 00000001401B2422: mov     rcx, gs:188h
 * 00000001401B242B: mov     rcx, [rcx+220h]
 * 00000001401B2432: mov     rcx, [rcx+838h]
 * 00000001401B2439: mov     gs:270h, rcx
 * 00000001401B2442: movzx   eax, byte ptr gs:27Bh
 * 00000001401B244B: cmp     gs:27Ah, al
 * 00000001401B2453: jz      short loc_1401B2466
 * 00000001401B2455: mov     gs:27Ah, al
 * 00000001401B245D: mov     ecx, 48h ; 'H'
 * 00000001401B2462: xor     edx, edx
 * 00000001401B2464: wrmsr
 * 00000001401B2466: movzx   edx, byte ptr gs:278h
 * 00000001401B246F: test    edx, 8
 * 00000001401B2475: jz      short loc_1401B248A
 * 00000001401B2477: mov     eax, 1
 * 00000001401B247C: xor     edx, edx
 * 00000001401B247E: mov     ecx, 49h ; 'I'
 * 00000001401B2483: wrmsr
 * 00000001401B2485: jmp     loc_1401B25C8
 * 00000001401B248A: test    edx, 2
 * 00000001401B2490: jz      loc_1401B25C5
 * 00000001401B2496: test    byte ptr gs:279h, 4
 * 00000001401B249F: jnz     loc_1401B25C5
 * 00000001401B24A5: call    loc_1401B25B8
 * 00000001401B24AA: add     rsp, 8
 * 00000001401B24AE: call    loc_1401B25C1
 * 00000001401B24B3: add     rsp, 8
 * 00000001401B24B7: call    loc_1401B24AA
 * 00000001401B24BC: add     rsp, 8
 * 00000001401B24C0: call    loc_1401B24B3
 * 00000001401B24C5: add     rsp, 8
 * 00000001401B24C9: call    loc_1401B24BC
 * 00000001401B24CE: add     rsp, 8
 * 00000001401B24D2: call    loc_1401B24C5
 * 00000001401B24D7: add     rsp, 8
 * 00000001401B24DB: call    loc_1401B24CE
 * 00000001401B24E0: add     rsp, 8
 * 00000001401B24E4: call    loc_1401B24D7
 * 00000001401B24E9: add     rsp, 8
 * 00000001401B24ED: call    loc_1401B24E0
 * 00000001401B24F2: add     rsp, 8
 * 00000001401B24F6: call    loc_1401B24E9
 * 00000001401B24FB: add     rsp, 8
 * 00000001401B24FF: call    loc_1401B24F2
 * 00000001401B2504: add     rsp, 8
 * 00000001401B2508: call    loc_1401B24FB
 * 00000001401B250D: add     rsp, 8
 * 00000001401B2511: call    loc_1401B2504
 * 00000001401B2516: add     rsp, 8
 * 00000001401B251A: call    loc_1401B250D
 * 00000001401B251F: add     rsp, 8
 * 00000001401B2523: call    loc_1401B2516
 * 00000001401B2528: add     rsp, 8
 * 00000001401B252C: call    loc_1401B251F
 * 00000001401B2531: add     rsp, 8
 * 00000001401B2535: call    loc_1401B2528
 * 00000001401B253A: add     rsp, 8
 * 00000001401B253E: call    loc_1401B2531
 * 00000001401B2543: add     rsp, 8
 * 00000001401B2547: call    loc_1401B253A
 * 00000001401B254C: add     rsp, 8
 * 00000001401B2550: call    loc_1401B2543
 * 00000001401B2555: add     rsp, 8
 * 00000001401B2559: call    loc_1401B254C
 * 00000001401B255E: add     rsp, 8
 * 00000001401B2562: call    loc_1401B2555
 * 00000001401B2567: add     rsp, 8
 * 00000001401B256B: call    loc_1401B255E
 * 00000001401B2570: add     rsp, 8
 * 00000001401B2574: call    loc_1401B2567
 * 00000001401B2579: add     rsp, 8
 * 00000001401B257D: call    loc_1401B2570
 * 00000001401B2582: add     rsp, 8
 * 00000001401B2586: call    loc_1401B2579
 * 00000001401B258B: add     rsp, 8
 * 00000001401B258F: call    loc_1401B2582
 * 00000001401B2594: add     rsp, 8
 * 00000001401B2598: call    loc_1401B258B
 * 00000001401B259D: add     rsp, 8
 * 00000001401B25A1: call    loc_1401B2594
 * 00000001401B25A6: add     rsp, 8
 * 00000001401B25AA: call    loc_1401B259D
 * 00000001401B25AF: add     rsp, 8
 * 00000001401B25B3: call    loc_1401B25A6
 * 00000001401B25B8: add     rsp, 8
 * 00000001401B25BC: call    loc_1401B25AF
 * 00000001401B25C1: add     rsp, 8
 * 00000001401B25C5: lfence
 * 00000001401B25C8: test    byte ptr [r10+3], 3
 * 00000001401B25CD: mov     [rbp+0E8h+var_68], 0
 * 00000001401B25D6: jz      short loc_1401B25DD
 * 00000001401B25D8: call    KiSaveDebugRegisterState
 * 00000001401B25DD: cld
 * 00000001401B25DE: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B25E2: ldmxcsr dword ptr gs:180h
 * 00000001401B25EB: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B25EF: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B25F3: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B25F7: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B25FB: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B25FF: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B2603: test    [rbp+0E8h+arg_8], 200h
 * 00000001401B260D: jz      short loc_1401B2610
 * 00000001401B260F: sti
 * 00000001401B2610: call    KxStartUserThread
 * 00000001401B2615: nop     word ptr [rax+rax+00000000h]
 * 00000001401B2620: nop
 * 00000001401B2621: retn
 */
