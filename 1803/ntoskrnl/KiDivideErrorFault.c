/*
 * XREFs of KiDivideErrorFault @ 0x1401B5300
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x1402CF100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1401B5300 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1401B5300
 * Reason: Hex-Rays returned no pseudocode for 0x1401B5300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B5300: sub     rsp, 8
 * 00000001401B5304: push    rbp
 * 00000001401B5305: sub     rsp, 158h
 * 00000001401B530C: lea     rbp, [rsp+80h]
 * 00000001401B5314: mov     [rbp+0E8h+var_13D], 1
 * 00000001401B5318: mov     [rbp+0E8h+var_138], rax
 * 00000001401B531C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B5320: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B5324: mov     [rbp+0E8h+var_120], r8
 * 00000001401B5328: mov     [rbp+0E8h+var_118], r9
 * 00000001401B532C: mov     [rbp+0E8h+var_110], r10
 * 00000001401B5330: mov     [rbp+0E8h+var_108], r11
 * 00000001401B5334: test    [rbp+0E8h+arg_0], 1
 * 00000001401B533B: jnz     short loc_1401B536A
 * 00000001401B533D: lfence
 * 00000001401B5340: test    byte ptr gs:278h, 1
 * 00000001401B5349: jnz     short loc_1401B5353
 * 00000001401B534B: lfence
 * 00000001401B534E: jmp     loc_1401B5586
 * 00000001401B5353: movzx   eax, byte ptr gs:27Ah
 * 00000001401B535C: mov     ecx, 48h ; 'H'
 * 00000001401B5361: xor     edx, edx
 * 00000001401B5363: wrmsr
 * 00000001401B5365: jmp     loc_1401B5586
 * 00000001401B536A: test    cs:KiKvaShadow, 1
 * 00000001401B5371: jnz     short loc_1401B5376
 * 00000001401B5373: swapgs
 * 00000001401B5376: lfence
 * 00000001401B5379: mov     r10, gs:188h
 * 00000001401B5382: mov     rcx, gs:188h
 * 00000001401B538B: mov     rcx, [rcx+220h]
 * 00000001401B5392: mov     rcx, [rcx+838h]
 * 00000001401B5399: mov     gs:270h, rcx
 * 00000001401B53A2: movzx   eax, byte ptr gs:27Bh
 * 00000001401B53AB: cmp     gs:27Ah, al
 * 00000001401B53B3: jz      short loc_1401B53C6
 * 00000001401B53B5: mov     gs:27Ah, al
 * 00000001401B53BD: mov     ecx, 48h ; 'H'
 * 00000001401B53C2: xor     edx, edx
 * 00000001401B53C4: wrmsr
 * 00000001401B53C6: movzx   edx, byte ptr gs:278h
 * 00000001401B53CF: test    edx, 8
 * 00000001401B53D5: jz      short loc_1401B53EA
 * 00000001401B53D7: mov     eax, 1
 * 00000001401B53DC: xor     edx, edx
 * 00000001401B53DE: mov     ecx, 49h ; 'I'
 * 00000001401B53E3: wrmsr
 * 00000001401B53E5: jmp     loc_1401B5528
 * 00000001401B53EA: test    edx, 2
 * 00000001401B53F0: jz      loc_1401B5525
 * 00000001401B53F6: test    byte ptr gs:279h, 4
 * 00000001401B53FF: jnz     loc_1401B5525
 * 00000001401B5405: call    loc_1401B5518
 * 00000001401B540A: add     rsp, 8
 * 00000001401B540E: call    loc_1401B5521
 * 00000001401B5413: add     rsp, 8
 * 00000001401B5417: call    loc_1401B540A
 * 00000001401B541C: add     rsp, 8
 * 00000001401B5420: call    loc_1401B5413
 * 00000001401B5425: add     rsp, 8
 * 00000001401B5429: call    loc_1401B541C
 * 00000001401B542E: add     rsp, 8
 * 00000001401B5432: call    loc_1401B5425
 * 00000001401B5437: add     rsp, 8
 * 00000001401B543B: call    loc_1401B542E
 * 00000001401B5440: add     rsp, 8
 * 00000001401B5444: call    loc_1401B5437
 * 00000001401B5449: add     rsp, 8
 * 00000001401B544D: call    loc_1401B5440
 * 00000001401B5452: add     rsp, 8
 * 00000001401B5456: call    loc_1401B5449
 * 00000001401B545B: add     rsp, 8
 * 00000001401B545F: call    loc_1401B5452
 * 00000001401B5464: add     rsp, 8
 * 00000001401B5468: call    loc_1401B545B
 * 00000001401B546D: add     rsp, 8
 * 00000001401B5471: call    loc_1401B5464
 * 00000001401B5476: add     rsp, 8
 * 00000001401B547A: call    loc_1401B546D
 * 00000001401B547F: add     rsp, 8
 * 00000001401B5483: call    loc_1401B5476
 * 00000001401B5488: add     rsp, 8
 * 00000001401B548C: call    loc_1401B547F
 * 00000001401B5491: add     rsp, 8
 * 00000001401B5495: call    loc_1401B5488
 * 00000001401B549A: add     rsp, 8
 * 00000001401B549E: call    loc_1401B5491
 * 00000001401B54A3: add     rsp, 8
 * 00000001401B54A7: call    loc_1401B549A
 * 00000001401B54AC: add     rsp, 8
 * 00000001401B54B0: call    loc_1401B54A3
 * 00000001401B54B5: add     rsp, 8
 * 00000001401B54B9: call    loc_1401B54AC
 * 00000001401B54BE: add     rsp, 8
 * 00000001401B54C2: call    loc_1401B54B5
 * 00000001401B54C7: add     rsp, 8
 * 00000001401B54CB: call    loc_1401B54BE
 * 00000001401B54D0: add     rsp, 8
 * 00000001401B54D4: call    loc_1401B54C7
 * 00000001401B54D9: add     rsp, 8
 * 00000001401B54DD: call    loc_1401B54D0
 * 00000001401B54E2: add     rsp, 8
 * 00000001401B54E6: call    loc_1401B54D9
 * 00000001401B54EB: add     rsp, 8
 * 00000001401B54EF: call    loc_1401B54E2
 * 00000001401B54F4: add     rsp, 8
 * 00000001401B54F8: call    loc_1401B54EB
 * 00000001401B54FD: add     rsp, 8
 * 00000001401B5501: call    loc_1401B54F4
 * 00000001401B5506: add     rsp, 8
 * 00000001401B550A: call    loc_1401B54FD
 * 00000001401B550F: add     rsp, 8
 * 00000001401B5513: call    loc_1401B5506
 * 00000001401B5518: add     rsp, 8
 * 00000001401B551C: call    loc_1401B550F
 * 00000001401B5521: add     rsp, 8
 * 00000001401B5525: lfence
 * 00000001401B5528: test    byte ptr [r10+3], 80h
 * 00000001401B552D: jz      short loc_1401B5571
 * 00000001401B552F: mov     ecx, 0C0000102h
 * 00000001401B5534: rdmsr
 * 00000001401B5536: shl     rdx, 20h
 * 00000001401B553A: or      rax, rdx
 * 00000001401B553D: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B5544: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B554C: cmp     [r10+0F0h], rax
 * 00000001401B5553: jz      short loc_1401B5571
 * 00000001401B5555: mov     rdx, [r10+1F0h]
 * 00000001401B555C: bts     dword ptr [r10+74h], 8
 * 00000001401B5562: dec     word ptr [r10+1E6h]
 * 00000001401B556A: mov     [rdx+80h], rax
 * 00000001401B5571: test    byte ptr [r10+3], 3
 * 00000001401B5576: mov     [rbp+0E8h+var_68], 0
 * 00000001401B557F: jz      short loc_1401B5586
 * 00000001401B5581: call    KiSaveDebugRegisterState
 * 00000001401B5586: cld
 * 00000001401B5587: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B558B: ldmxcsr dword ptr gs:180h
 * 00000001401B5594: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B5598: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B559C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B55A0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B55A4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B55A8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B55AC: test    [rbp+0E8h+arg_8], 200h
 * 00000001401B55B6: jz      short loc_1401B55B9
 * 00000001401B55B8: sti
 * 00000001401B55B9: mov     ecx, 10000003h
 * 00000001401B55BE: xor     edx, edx
 * 00000001401B55C0: mov     r8, [rbp+0E8h]
 * 00000001401B55C7: call    KiExceptionDispatch
 * 00000001401B55CC: nop
 * 00000001401B55CD: retn
 */
