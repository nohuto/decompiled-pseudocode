/*
 * XREFs of KiRaiseAssertion @ 0x140190780
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140297D00 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140190780 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140190780
 * Reason: Hex-Rays returned no pseudocode for 0x140190780
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190780: sub     qword ptr [rsp+0], 2
 * 0000000140190785: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014019078B: jnz     short loc_140190792
 * 000000014019078D: and     dword ptr [rsp+4], 0
 * 0000000140190792: sub     rsp, 8
 * 0000000140190796: push    rbp
 * 0000000140190797: sub     rsp, 158h
 * 000000014019079E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401907A6: mov     byte ptr [rbp-55h], 1
 * 00000001401907AA: mov     [rbp-50h], rax
 * 00000001401907AE: mov     [rbp-48h], rcx
 * 00000001401907B2: mov     [rbp-40h], rdx
 * 00000001401907B6: mov     [rbp-38h], r8
 * 00000001401907BA: mov     [rbp-30h], r9
 * 00000001401907BE: mov     [rbp-28h], r10
 * 00000001401907C2: mov     [rbp-20h], r11
 * 00000001401907C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401907CD: jnz     short loc_1401907FC
 * 00000001401907CF: lfence
 * 00000001401907D2: test    byte ptr gs:278h, 1
 * 00000001401907DB: jnz     short loc_1401907E5
 * 00000001401907DD: lfence
 * 00000001401907E0: jmp     loc_140190A18
 * 00000001401907E5: movzx   eax, byte ptr gs:27Ah
 * 00000001401907EE: mov     ecx, 48h ; 'H'
 * 00000001401907F3: xor     edx, edx
 * 00000001401907F5: wrmsr
 * 00000001401907F7: jmp     loc_140190A18
 * 00000001401907FC: test    cs:KiKvaShadow, 1
 * 0000000140190803: jnz     short loc_140190808
 * 0000000140190805: swapgs
 * 0000000140190808: lfence
 * 000000014019080B: mov     r10, gs:188h
 * 0000000140190814: mov     rcx, gs:188h
 * 000000014019081D: mov     rcx, [rcx+220h]
 * 0000000140190824: mov     rcx, [rcx+838h]
 * 000000014019082B: mov     gs:270h, rcx
 * 0000000140190834: movzx   eax, byte ptr gs:27Bh
 * 000000014019083D: cmp     gs:27Ah, al
 * 0000000140190845: jz      short loc_140190858
 * 0000000140190847: mov     gs:27Ah, al
 * 000000014019084F: mov     ecx, 48h ; 'H'
 * 0000000140190854: xor     edx, edx
 * 0000000140190856: wrmsr
 * 0000000140190858: movzx   edx, byte ptr gs:278h
 * 0000000140190861: test    edx, 8
 * 0000000140190867: jz      short loc_14019087C
 * 0000000140190869: mov     eax, 1
 * 000000014019086E: xor     edx, edx
 * 0000000140190870: mov     ecx, 49h ; 'I'
 * 0000000140190875: wrmsr
 * 0000000140190877: jmp     loc_1401909BA
 * 000000014019087C: test    edx, 2
 * 0000000140190882: jz      loc_1401909B7
 * 0000000140190888: test    byte ptr gs:279h, 4
 * 0000000140190891: jnz     loc_1401909B7
 * 0000000140190897: call    loc_1401909AA
 * 000000014019089C: add     rsp, 8
 * 00000001401908A0: call    loc_1401909B3
 * 00000001401908A5: add     rsp, 8
 * 00000001401908A9: call    loc_14019089C
 * 00000001401908AE: add     rsp, 8
 * 00000001401908B2: call    loc_1401908A5
 * 00000001401908B7: add     rsp, 8
 * 00000001401908BB: call    loc_1401908AE
 * 00000001401908C0: add     rsp, 8
 * 00000001401908C4: call    loc_1401908B7
 * 00000001401908C9: add     rsp, 8
 * 00000001401908CD: call    loc_1401908C0
 * 00000001401908D2: add     rsp, 8
 * 00000001401908D6: call    loc_1401908C9
 * 00000001401908DB: add     rsp, 8
 * 00000001401908DF: call    loc_1401908D2
 * 00000001401908E4: add     rsp, 8
 * 00000001401908E8: call    loc_1401908DB
 * 00000001401908ED: add     rsp, 8
 * 00000001401908F1: call    loc_1401908E4
 * 00000001401908F6: add     rsp, 8
 * 00000001401908FA: call    loc_1401908ED
 * 00000001401908FF: add     rsp, 8
 * 0000000140190903: call    loc_1401908F6
 * 0000000140190908: add     rsp, 8
 * 000000014019090C: call    loc_1401908FF
 * 0000000140190911: add     rsp, 8
 * 0000000140190915: call    loc_140190908
 * 000000014019091A: add     rsp, 8
 * 000000014019091E: call    loc_140190911
 * 0000000140190923: add     rsp, 8
 * 0000000140190927: call    loc_14019091A
 * 000000014019092C: add     rsp, 8
 * 0000000140190930: call    loc_140190923
 * 0000000140190935: add     rsp, 8
 * 0000000140190939: call    loc_14019092C
 * 000000014019093E: add     rsp, 8
 * 0000000140190942: call    loc_140190935
 * 0000000140190947: add     rsp, 8
 * 000000014019094B: call    loc_14019093E
 * 0000000140190950: add     rsp, 8
 * 0000000140190954: call    loc_140190947
 * 0000000140190959: add     rsp, 8
 * 000000014019095D: call    loc_140190950
 * 0000000140190962: add     rsp, 8
 * 0000000140190966: call    loc_140190959
 * 000000014019096B: add     rsp, 8
 * 000000014019096F: call    loc_140190962
 * 0000000140190974: add     rsp, 8
 * 0000000140190978: call    loc_14019096B
 * 000000014019097D: add     rsp, 8
 * 0000000140190981: call    loc_140190974
 * 0000000140190986: add     rsp, 8
 * 000000014019098A: call    loc_14019097D
 * 000000014019098F: add     rsp, 8
 * 0000000140190993: call    loc_140190986
 * 0000000140190998: add     rsp, 8
 * 000000014019099C: call    loc_14019098F
 * 00000001401909A1: add     rsp, 8
 * 00000001401909A5: call    loc_140190998
 * 00000001401909AA: add     rsp, 8
 * 00000001401909AE: call    loc_1401909A1
 * 00000001401909B3: add     rsp, 8
 * 00000001401909B7: lfence
 * 00000001401909BA: test    byte ptr [r10+3], 80h
 * 00000001401909BF: jz      short loc_140190A03
 * 00000001401909C1: mov     ecx, 0C0000102h
 * 00000001401909C6: rdmsr
 * 00000001401909C8: shl     rdx, 20h
 * 00000001401909CC: or      rax, rdx
 * 00000001401909CF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401909D6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401909DE: cmp     [r10+0F0h], rax
 * 00000001401909E5: jz      short loc_140190A03
 * 00000001401909E7: mov     rdx, [r10+1F0h]
 * 00000001401909EE: bts     dword ptr [r10+74h], 8
 * 00000001401909F4: dec     word ptr [r10+1E6h]
 * 00000001401909FC: mov     [rdx+80h], rax
 * 0000000140190A03: test    byte ptr [r10+3], 3
 * 0000000140190A08: mov     word ptr [rbp+80h], 0
 * 0000000140190A11: jz      short loc_140190A18
 * 0000000140190A13: call    KiSaveDebugRegisterState
 * 0000000140190A18: cld
 * 0000000140190A19: stmxcsr dword ptr [rbp-54h]
 * 0000000140190A1D: ldmxcsr dword ptr gs:180h
 * 0000000140190A26: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140190A2A: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140190A2E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190A32: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190A36: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140190A3A: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140190A3E: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190A48: jz      short loc_140190A4B
 * 0000000140190A4A: sti
 * 0000000140190A4B: mov     ecx, 0C0000420h
 * 0000000140190A50: xor     edx, edx
 * 0000000140190A52: mov     r8, [rbp+0E8h]
 * 0000000140190A59: call    KiExceptionDispatch
 * 0000000140190A5E: nop
 * 0000000140190A5F: retn
 */
