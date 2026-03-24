/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140190480
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140297C80 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140190480 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140190480
 * Reason: Hex-Rays returned no pseudocode for 0x140190480
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190480: sub     qword ptr [rsp+0], 2
 * 0000000140190485: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014019048B: jnz     short loc_140190492
 * 000000014019048D: and     dword ptr [rsp+4], 0
 * 0000000140190492: sub     rsp, 8
 * 0000000140190496: push    rbp
 * 0000000140190497: sub     rsp, 158h
 * 000000014019049E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401904A6: mov     byte ptr [rbp-55h], 1
 * 00000001401904AA: mov     [rbp-50h], rax
 * 00000001401904AE: mov     [rbp-48h], rcx
 * 00000001401904B2: mov     [rbp-40h], rdx
 * 00000001401904B6: mov     [rbp-38h], r8
 * 00000001401904BA: mov     [rbp-30h], r9
 * 00000001401904BE: mov     [rbp-28h], r10
 * 00000001401904C2: mov     [rbp-20h], r11
 * 00000001401904C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401904CD: jnz     short loc_1401904FC
 * 00000001401904CF: lfence
 * 00000001401904D2: test    byte ptr gs:278h, 1
 * 00000001401904DB: jnz     short loc_1401904E5
 * 00000001401904DD: lfence
 * 00000001401904E0: jmp     loc_140190718
 * 00000001401904E5: movzx   eax, byte ptr gs:27Ah
 * 00000001401904EE: mov     ecx, 48h ; 'H'
 * 00000001401904F3: xor     edx, edx
 * 00000001401904F5: wrmsr
 * 00000001401904F7: jmp     loc_140190718
 * 00000001401904FC: test    cs:KiKvaShadow, 1
 * 0000000140190503: jnz     short loc_140190508
 * 0000000140190505: swapgs
 * 0000000140190508: lfence
 * 000000014019050B: mov     r10, gs:188h
 * 0000000140190514: mov     rcx, gs:188h
 * 000000014019051D: mov     rcx, [rcx+220h]
 * 0000000140190524: mov     rcx, [rcx+838h]
 * 000000014019052B: mov     gs:270h, rcx
 * 0000000140190534: movzx   eax, byte ptr gs:27Bh
 * 000000014019053D: cmp     gs:27Ah, al
 * 0000000140190545: jz      short loc_140190558
 * 0000000140190547: mov     gs:27Ah, al
 * 000000014019054F: mov     ecx, 48h ; 'H'
 * 0000000140190554: xor     edx, edx
 * 0000000140190556: wrmsr
 * 0000000140190558: movzx   edx, byte ptr gs:278h
 * 0000000140190561: test    edx, 8
 * 0000000140190567: jz      short loc_14019057C
 * 0000000140190569: mov     eax, 1
 * 000000014019056E: xor     edx, edx
 * 0000000140190570: mov     ecx, 49h ; 'I'
 * 0000000140190575: wrmsr
 * 0000000140190577: jmp     loc_1401906BA
 * 000000014019057C: test    edx, 2
 * 0000000140190582: jz      loc_1401906B7
 * 0000000140190588: test    byte ptr gs:279h, 4
 * 0000000140190591: jnz     loc_1401906B7
 * 0000000140190597: call    loc_1401906AA
 * 000000014019059C: add     rsp, 8
 * 00000001401905A0: call    loc_1401906B3
 * 00000001401905A5: add     rsp, 8
 * 00000001401905A9: call    loc_14019059C
 * 00000001401905AE: add     rsp, 8
 * 00000001401905B2: call    loc_1401905A5
 * 00000001401905B7: add     rsp, 8
 * 00000001401905BB: call    loc_1401905AE
 * 00000001401905C0: add     rsp, 8
 * 00000001401905C4: call    loc_1401905B7
 * 00000001401905C9: add     rsp, 8
 * 00000001401905CD: call    loc_1401905C0
 * 00000001401905D2: add     rsp, 8
 * 00000001401905D6: call    loc_1401905C9
 * 00000001401905DB: add     rsp, 8
 * 00000001401905DF: call    loc_1401905D2
 * 00000001401905E4: add     rsp, 8
 * 00000001401905E8: call    loc_1401905DB
 * 00000001401905ED: add     rsp, 8
 * 00000001401905F1: call    loc_1401905E4
 * 00000001401905F6: add     rsp, 8
 * 00000001401905FA: call    loc_1401905ED
 * 00000001401905FF: add     rsp, 8
 * 0000000140190603: call    loc_1401905F6
 * 0000000140190608: add     rsp, 8
 * 000000014019060C: call    loc_1401905FF
 * 0000000140190611: add     rsp, 8
 * 0000000140190615: call    loc_140190608
 * 000000014019061A: add     rsp, 8
 * 000000014019061E: call    loc_140190611
 * 0000000140190623: add     rsp, 8
 * 0000000140190627: call    loc_14019061A
 * 000000014019062C: add     rsp, 8
 * 0000000140190630: call    loc_140190623
 * 0000000140190635: add     rsp, 8
 * 0000000140190639: call    loc_14019062C
 * 000000014019063E: add     rsp, 8
 * 0000000140190642: call    loc_140190635
 * 0000000140190647: add     rsp, 8
 * 000000014019064B: call    loc_14019063E
 * 0000000140190650: add     rsp, 8
 * 0000000140190654: call    loc_140190647
 * 0000000140190659: add     rsp, 8
 * 000000014019065D: call    loc_140190650
 * 0000000140190662: add     rsp, 8
 * 0000000140190666: call    loc_140190659
 * 000000014019066B: add     rsp, 8
 * 000000014019066F: call    loc_140190662
 * 0000000140190674: add     rsp, 8
 * 0000000140190678: call    loc_14019066B
 * 000000014019067D: add     rsp, 8
 * 0000000140190681: call    loc_140190674
 * 0000000140190686: add     rsp, 8
 * 000000014019068A: call    loc_14019067D
 * 000000014019068F: add     rsp, 8
 * 0000000140190693: call    loc_140190686
 * 0000000140190698: add     rsp, 8
 * 000000014019069C: call    loc_14019068F
 * 00000001401906A1: add     rsp, 8
 * 00000001401906A5: call    loc_140190698
 * 00000001401906AA: add     rsp, 8
 * 00000001401906AE: call    loc_1401906A1
 * 00000001401906B3: add     rsp, 8
 * 00000001401906B7: lfence
 * 00000001401906BA: test    byte ptr [r10+3], 80h
 * 00000001401906BF: jz      short loc_140190703
 * 00000001401906C1: mov     ecx, 0C0000102h
 * 00000001401906C6: rdmsr
 * 00000001401906C8: shl     rdx, 20h
 * 00000001401906CC: or      rax, rdx
 * 00000001401906CF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401906D6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401906DE: cmp     [r10+0F0h], rax
 * 00000001401906E5: jz      short loc_140190703
 * 00000001401906E7: mov     rdx, [r10+1F0h]
 * 00000001401906EE: bts     dword ptr [r10+74h], 8
 * 00000001401906F4: dec     word ptr [r10+1E6h]
 * 00000001401906FC: mov     [rdx+80h], rax
 * 0000000140190703: test    byte ptr [r10+3], 3
 * 0000000140190708: mov     word ptr [rbp+80h], 0
 * 0000000140190711: jz      short loc_140190718
 * 0000000140190713: call    KiSaveDebugRegisterState
 * 0000000140190718: cld
 * 0000000140190719: stmxcsr dword ptr [rbp-54h]
 * 000000014019071D: ldmxcsr dword ptr gs:180h
 * 0000000140190726: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014019072A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014019072E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190732: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190736: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014019073A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014019073E: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190748: jz      short loc_14019074B
 * 000000014019074A: sti
 * 000000014019074B: mov     r9, [rbp-48h]
 * 000000014019074F: mov     ecx, 0C0000409h
 * 0000000140190754: mov     edx, 1
 * 0000000140190759: mov     r8, [rbp+0E8h]
 * 0000000140190760: call    KiFastFailDispatch
 * 0000000140190765: nop
 * 0000000140190766: retn
 */
