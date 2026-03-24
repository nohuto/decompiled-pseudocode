/*
 * XREFs of KiDebugServiceTrap @ 0x1401908C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x14026CD00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401908C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401908C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401908C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401908C0: inc     qword ptr [rsp+0]
 * 00000001401908C4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401908CA: jnz     short loc_1401908D1
 * 00000001401908CC: and     dword ptr [rsp+4], 0
 * 00000001401908D1: sub     rsp, 8
 * 00000001401908D5: push    rbp
 * 00000001401908D6: sub     rsp, 158h
 * 00000001401908DD: lea     rbp, [rsp+168h+var_E8]
 * 00000001401908E5: mov     byte ptr [rbp-55h], 1
 * 00000001401908E9: mov     [rbp-50h], rax
 * 00000001401908ED: mov     [rbp-48h], rcx
 * 00000001401908F1: mov     [rbp-40h], rdx
 * 00000001401908F5: mov     [rbp-38h], r8
 * 00000001401908F9: mov     [rbp-30h], r9
 * 00000001401908FD: mov     [rbp-28h], r10
 * 0000000140190901: mov     [rbp-20h], r11
 * 0000000140190905: test    byte ptr [rbp+0F0h], 1
 * 000000014019090C: jnz     short loc_14019093B
 * 000000014019090E: lfence
 * 0000000140190911: test    byte ptr gs:278h, 1
 * 000000014019091A: jnz     short loc_140190924
 * 000000014019091C: lfence
 * 000000014019091F: jmp     loc_140190B57
 * 0000000140190924: movzx   eax, byte ptr gs:27Ah
 * 000000014019092D: mov     ecx, 48h ; 'H'
 * 0000000140190932: xor     edx, edx
 * 0000000140190934: wrmsr
 * 0000000140190936: jmp     loc_140190B57
 * 000000014019093B: test    cs:KiKvaShadow, 1
 * 0000000140190942: jnz     short loc_140190947
 * 0000000140190944: swapgs
 * 0000000140190947: lfence
 * 000000014019094A: mov     r10, gs:188h
 * 0000000140190953: mov     rcx, gs:188h
 * 000000014019095C: mov     rcx, [rcx+220h]
 * 0000000140190963: mov     rcx, [rcx+818h]
 * 000000014019096A: mov     gs:270h, rcx
 * 0000000140190973: movzx   eax, byte ptr gs:27Bh
 * 000000014019097C: cmp     gs:27Ah, al
 * 0000000140190984: jz      short loc_140190997
 * 0000000140190986: mov     gs:27Ah, al
 * 000000014019098E: mov     ecx, 48h ; 'H'
 * 0000000140190993: xor     edx, edx
 * 0000000140190995: wrmsr
 * 0000000140190997: movzx   edx, byte ptr gs:278h
 * 00000001401909A0: test    edx, 8
 * 00000001401909A6: jz      short loc_1401909BB
 * 00000001401909A8: mov     eax, 1
 * 00000001401909AD: xor     edx, edx
 * 00000001401909AF: mov     ecx, 49h ; 'I'
 * 00000001401909B4: wrmsr
 * 00000001401909B6: jmp     loc_140190AF9
 * 00000001401909BB: test    edx, 2
 * 00000001401909C1: jz      loc_140190AF6
 * 00000001401909C7: test    byte ptr gs:279h, 4
 * 00000001401909D0: jnz     loc_140190AF6
 * 00000001401909D6: call    loc_140190AE9
 * 00000001401909DB: add     rsp, 8
 * 00000001401909DF: call    loc_140190AF2
 * 00000001401909E4: add     rsp, 8
 * 00000001401909E8: call    loc_1401909DB
 * 00000001401909ED: add     rsp, 8
 * 00000001401909F1: call    loc_1401909E4
 * 00000001401909F6: add     rsp, 8
 * 00000001401909FA: call    loc_1401909ED
 * 00000001401909FF: add     rsp, 8
 * 0000000140190A03: call    loc_1401909F6
 * 0000000140190A08: add     rsp, 8
 * 0000000140190A0C: call    loc_1401909FF
 * 0000000140190A11: add     rsp, 8
 * 0000000140190A15: call    loc_140190A08
 * 0000000140190A1A: add     rsp, 8
 * 0000000140190A1E: call    loc_140190A11
 * 0000000140190A23: add     rsp, 8
 * 0000000140190A27: call    loc_140190A1A
 * 0000000140190A2C: add     rsp, 8
 * 0000000140190A30: call    loc_140190A23
 * 0000000140190A35: add     rsp, 8
 * 0000000140190A39: call    loc_140190A2C
 * 0000000140190A3E: add     rsp, 8
 * 0000000140190A42: call    loc_140190A35
 * 0000000140190A47: add     rsp, 8
 * 0000000140190A4B: call    loc_140190A3E
 * 0000000140190A50: add     rsp, 8
 * 0000000140190A54: call    loc_140190A47
 * 0000000140190A59: add     rsp, 8
 * 0000000140190A5D: call    loc_140190A50
 * 0000000140190A62: add     rsp, 8
 * 0000000140190A66: call    loc_140190A59
 * 0000000140190A6B: add     rsp, 8
 * 0000000140190A6F: call    loc_140190A62
 * 0000000140190A74: add     rsp, 8
 * 0000000140190A78: call    loc_140190A6B
 * 0000000140190A7D: add     rsp, 8
 * 0000000140190A81: call    loc_140190A74
 * 0000000140190A86: add     rsp, 8
 * 0000000140190A8A: call    loc_140190A7D
 * 0000000140190A8F: add     rsp, 8
 * 0000000140190A93: call    loc_140190A86
 * 0000000140190A98: add     rsp, 8
 * 0000000140190A9C: call    loc_140190A8F
 * 0000000140190AA1: add     rsp, 8
 * 0000000140190AA5: call    loc_140190A98
 * 0000000140190AAA: add     rsp, 8
 * 0000000140190AAE: call    loc_140190AA1
 * 0000000140190AB3: add     rsp, 8
 * 0000000140190AB7: call    loc_140190AAA
 * 0000000140190ABC: add     rsp, 8
 * 0000000140190AC0: call    loc_140190AB3
 * 0000000140190AC5: add     rsp, 8
 * 0000000140190AC9: call    loc_140190ABC
 * 0000000140190ACE: add     rsp, 8
 * 0000000140190AD2: call    loc_140190AC5
 * 0000000140190AD7: add     rsp, 8
 * 0000000140190ADB: call    loc_140190ACE
 * 0000000140190AE0: add     rsp, 8
 * 0000000140190AE4: call    loc_140190AD7
 * 0000000140190AE9: add     rsp, 8
 * 0000000140190AED: call    loc_140190AE0
 * 0000000140190AF2: add     rsp, 8
 * 0000000140190AF6: lfence
 * 0000000140190AF9: test    byte ptr [r10+3], 80h
 * 0000000140190AFE: jz      short loc_140190B42
 * 0000000140190B00: mov     ecx, 0C0000102h
 * 0000000140190B05: rdmsr
 * 0000000140190B07: shl     rdx, 20h
 * 0000000140190B0B: or      rax, rdx
 * 0000000140190B0E: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190B15: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140190B1D: cmp     [r10+0F0h], rax
 * 0000000140190B24: jz      short loc_140190B42
 * 0000000140190B26: mov     rdx, [r10+1F0h]
 * 0000000140190B2D: bts     dword ptr [r10+74h], 8
 * 0000000140190B33: dec     word ptr [r10+1E6h]
 * 0000000140190B3B: mov     [rdx+80h], rax
 * 0000000140190B42: test    byte ptr [r10+3], 3
 * 0000000140190B47: mov     word ptr [rbp+80h], 0
 * 0000000140190B50: jz      short loc_140190B57
 * 0000000140190B52: call    KiSaveDebugRegisterState
 * 0000000140190B57: cld
 * 0000000140190B58: stmxcsr dword ptr [rbp-54h]
 * 0000000140190B5C: ldmxcsr dword ptr gs:180h
 * 0000000140190B65: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140190B69: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140190B6D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190B71: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190B75: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140190B79: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140190B7D: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190B87: jz      short loc_140190B8A
 * 0000000140190B89: sti
 * 0000000140190B8A: mov     ecx, 80000003h
 * 0000000140190B8F: mov     edx, 1
 * 0000000140190B94: mov     r9, [rbp-50h]
 * 0000000140190B98: mov     r8, [rbp+0E8h]
 * 0000000140190B9F: call    KiExceptionDispatch
 * 0000000140190BA4: nop
 * 0000000140190BA5: retn
 */
