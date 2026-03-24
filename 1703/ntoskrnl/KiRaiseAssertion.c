/*
 * XREFs of KiRaiseAssertion @ 0x1401905C0
 * Callers:
 *     KiRaiseAssertionShadow @ 0x14026CC80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401905C0 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401905C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401905C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401905C0: sub     qword ptr [rsp+0], 2
 * 00000001401905C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401905CB: jnz     short loc_1401905D2
 * 00000001401905CD: and     dword ptr [rsp+4], 0
 * 00000001401905D2: sub     rsp, 8
 * 00000001401905D6: push    rbp
 * 00000001401905D7: sub     rsp, 158h
 * 00000001401905DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001401905E6: mov     byte ptr [rbp-55h], 1
 * 00000001401905EA: mov     [rbp-50h], rax
 * 00000001401905EE: mov     [rbp-48h], rcx
 * 00000001401905F2: mov     [rbp-40h], rdx
 * 00000001401905F6: mov     [rbp-38h], r8
 * 00000001401905FA: mov     [rbp-30h], r9
 * 00000001401905FE: mov     [rbp-28h], r10
 * 0000000140190602: mov     [rbp-20h], r11
 * 0000000140190606: test    byte ptr [rbp+0F0h], 1
 * 000000014019060D: jnz     short loc_14019063C
 * 000000014019060F: lfence
 * 0000000140190612: test    byte ptr gs:278h, 1
 * 000000014019061B: jnz     short loc_140190625
 * 000000014019061D: lfence
 * 0000000140190620: jmp     loc_140190858
 * 0000000140190625: movzx   eax, byte ptr gs:27Ah
 * 000000014019062E: mov     ecx, 48h ; 'H'
 * 0000000140190633: xor     edx, edx
 * 0000000140190635: wrmsr
 * 0000000140190637: jmp     loc_140190858
 * 000000014019063C: test    cs:KiKvaShadow, 1
 * 0000000140190643: jnz     short loc_140190648
 * 0000000140190645: swapgs
 * 0000000140190648: lfence
 * 000000014019064B: mov     r10, gs:188h
 * 0000000140190654: mov     rcx, gs:188h
 * 000000014019065D: mov     rcx, [rcx+220h]
 * 0000000140190664: mov     rcx, [rcx+818h]
 * 000000014019066B: mov     gs:270h, rcx
 * 0000000140190674: movzx   eax, byte ptr gs:27Bh
 * 000000014019067D: cmp     gs:27Ah, al
 * 0000000140190685: jz      short loc_140190698
 * 0000000140190687: mov     gs:27Ah, al
 * 000000014019068F: mov     ecx, 48h ; 'H'
 * 0000000140190694: xor     edx, edx
 * 0000000140190696: wrmsr
 * 0000000140190698: movzx   edx, byte ptr gs:278h
 * 00000001401906A1: test    edx, 8
 * 00000001401906A7: jz      short loc_1401906BC
 * 00000001401906A9: mov     eax, 1
 * 00000001401906AE: xor     edx, edx
 * 00000001401906B0: mov     ecx, 49h ; 'I'
 * 00000001401906B5: wrmsr
 * 00000001401906B7: jmp     loc_1401907FA
 * 00000001401906BC: test    edx, 2
 * 00000001401906C2: jz      loc_1401907F7
 * 00000001401906C8: test    byte ptr gs:279h, 4
 * 00000001401906D1: jnz     loc_1401907F7
 * 00000001401906D7: call    loc_1401907EA
 * 00000001401906DC: add     rsp, 8
 * 00000001401906E0: call    loc_1401907F3
 * 00000001401906E5: add     rsp, 8
 * 00000001401906E9: call    loc_1401906DC
 * 00000001401906EE: add     rsp, 8
 * 00000001401906F2: call    loc_1401906E5
 * 00000001401906F7: add     rsp, 8
 * 00000001401906FB: call    loc_1401906EE
 * 0000000140190700: add     rsp, 8
 * 0000000140190704: call    loc_1401906F7
 * 0000000140190709: add     rsp, 8
 * 000000014019070D: call    loc_140190700
 * 0000000140190712: add     rsp, 8
 * 0000000140190716: call    loc_140190709
 * 000000014019071B: add     rsp, 8
 * 000000014019071F: call    loc_140190712
 * 0000000140190724: add     rsp, 8
 * 0000000140190728: call    loc_14019071B
 * 000000014019072D: add     rsp, 8
 * 0000000140190731: call    loc_140190724
 * 0000000140190736: add     rsp, 8
 * 000000014019073A: call    loc_14019072D
 * 000000014019073F: add     rsp, 8
 * 0000000140190743: call    loc_140190736
 * 0000000140190748: add     rsp, 8
 * 000000014019074C: call    loc_14019073F
 * 0000000140190751: add     rsp, 8
 * 0000000140190755: call    loc_140190748
 * 000000014019075A: add     rsp, 8
 * 000000014019075E: call    loc_140190751
 * 0000000140190763: add     rsp, 8
 * 0000000140190767: call    loc_14019075A
 * 000000014019076C: add     rsp, 8
 * 0000000140190770: call    loc_140190763
 * 0000000140190775: add     rsp, 8
 * 0000000140190779: call    loc_14019076C
 * 000000014019077E: add     rsp, 8
 * 0000000140190782: call    loc_140190775
 * 0000000140190787: add     rsp, 8
 * 000000014019078B: call    loc_14019077E
 * 0000000140190790: add     rsp, 8
 * 0000000140190794: call    loc_140190787
 * 0000000140190799: add     rsp, 8
 * 000000014019079D: call    loc_140190790
 * 00000001401907A2: add     rsp, 8
 * 00000001401907A6: call    loc_140190799
 * 00000001401907AB: add     rsp, 8
 * 00000001401907AF: call    loc_1401907A2
 * 00000001401907B4: add     rsp, 8
 * 00000001401907B8: call    loc_1401907AB
 * 00000001401907BD: add     rsp, 8
 * 00000001401907C1: call    loc_1401907B4
 * 00000001401907C6: add     rsp, 8
 * 00000001401907CA: call    loc_1401907BD
 * 00000001401907CF: add     rsp, 8
 * 00000001401907D3: call    loc_1401907C6
 * 00000001401907D8: add     rsp, 8
 * 00000001401907DC: call    loc_1401907CF
 * 00000001401907E1: add     rsp, 8
 * 00000001401907E5: call    loc_1401907D8
 * 00000001401907EA: add     rsp, 8
 * 00000001401907EE: call    loc_1401907E1
 * 00000001401907F3: add     rsp, 8
 * 00000001401907F7: lfence
 * 00000001401907FA: test    byte ptr [r10+3], 80h
 * 00000001401907FF: jz      short loc_140190843
 * 0000000140190801: mov     ecx, 0C0000102h
 * 0000000140190806: rdmsr
 * 0000000140190808: shl     rdx, 20h
 * 000000014019080C: or      rax, rdx
 * 000000014019080F: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190816: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014019081E: cmp     [r10+0F0h], rax
 * 0000000140190825: jz      short loc_140190843
 * 0000000140190827: mov     rdx, [r10+1F0h]
 * 000000014019082E: bts     dword ptr [r10+74h], 8
 * 0000000140190834: dec     word ptr [r10+1E6h]
 * 000000014019083C: mov     [rdx+80h], rax
 * 0000000140190843: test    byte ptr [r10+3], 3
 * 0000000140190848: mov     word ptr [rbp+80h], 0
 * 0000000140190851: jz      short loc_140190858
 * 0000000140190853: call    KiSaveDebugRegisterState
 * 0000000140190858: cld
 * 0000000140190859: stmxcsr dword ptr [rbp-54h]
 * 000000014019085D: ldmxcsr dword ptr gs:180h
 * 0000000140190866: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014019086A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014019086E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190872: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190876: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014019087A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014019087E: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190888: jz      short loc_14019088B
 * 000000014019088A: sti
 * 000000014019088B: mov     ecx, 0C0000420h
 * 0000000140190890: xor     edx, edx
 * 0000000140190892: mov     r8, [rbp+0E8h]
 * 0000000140190899: call    KiExceptionDispatch
 * 000000014019089E: nop
 * 000000014019089F: retn
 */
