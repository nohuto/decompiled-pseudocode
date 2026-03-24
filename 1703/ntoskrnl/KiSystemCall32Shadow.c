/*
 * XREFs of KiSystemCall32Shadow @ 0x14026DC80
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x14026DC80 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x14026DC80
 * Reason: Hex-Rays returned no pseudocode for 0x14026DC80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026DC80: swapgs
 * 000000014026DC83: mov     gs:7010h, rsp
 * 000000014026DC8C: mov     rsp, gs:7000h
 * 000000014026DC95: mov     cr3, rsp
 * 000000014026DC98: mov     rsp, gs:7008h
 * 000000014026DCA1: push    2Bh ; '+'
 * 000000014026DCA3: push    qword ptr gs:7010h
 * 000000014026DCAB: push    r11
 * 000000014026DCAD: push    23h ; '#'
 * 000000014026DCAF: push    rcx
 * 000000014026DCB0: sub     rsp, 8
 * 000000014026DCB4: push    rbp
 * 000000014026DCB5: sub     rsp, 158h
 * 000000014026DCBC: lea     rbp, [rsp+190h+var_110]
 * 000000014026DCC4: mov     byte ptr [rbp-55h], 1
 * 000000014026DCC8: mov     [rbp-50h], rax
 * 000000014026DCCC: mov     [rbp-48h], rcx
 * 000000014026DCD0: mov     [rbp-40h], rdx
 * 000000014026DCD4: mov     [rbp-38h], r8
 * 000000014026DCD8: mov     [rbp-30h], r9
 * 000000014026DCDC: mov     [rbp-28h], r10
 * 000000014026DCE0: mov     [rbp-20h], r11
 * 000000014026DCE4: test    byte ptr [rbp+0F0h], 1
 * 000000014026DCEB: jnz     short loc_14026DD1A
 * 000000014026DCED: lfence
 * 000000014026DCF0: test    byte ptr gs:278h, 1
 * 000000014026DCF9: jnz     short loc_14026DD03
 * 000000014026DCFB: lfence
 * 000000014026DCFE: jmp     loc_14026DF36
 * 000000014026DD03: movzx   eax, byte ptr gs:27Ah
 * 000000014026DD0C: mov     ecx, 48h ; 'H'
 * 000000014026DD11: xor     edx, edx
 * 000000014026DD13: wrmsr
 * 000000014026DD15: jmp     loc_14026DF36
 * 000000014026DD1A: test    cs:KiKvaShadow, 1
 * 000000014026DD21: jnz     short loc_14026DD26
 * 000000014026DD23: swapgs
 * 000000014026DD26: lfence
 * 000000014026DD29: mov     r10, gs:188h
 * 000000014026DD32: mov     rcx, gs:188h
 * 000000014026DD3B: mov     rcx, [rcx+220h]
 * 000000014026DD42: mov     rcx, [rcx+818h]
 * 000000014026DD49: mov     gs:270h, rcx
 * 000000014026DD52: movzx   eax, byte ptr gs:27Bh
 * 000000014026DD5B: cmp     gs:27Ah, al
 * 000000014026DD63: jz      short loc_14026DD76
 * 000000014026DD65: mov     gs:27Ah, al
 * 000000014026DD6D: mov     ecx, 48h ; 'H'
 * 000000014026DD72: xor     edx, edx
 * 000000014026DD74: wrmsr
 * 000000014026DD76: movzx   edx, byte ptr gs:278h
 * 000000014026DD7F: test    edx, 8
 * 000000014026DD85: jz      short loc_14026DD9A
 * 000000014026DD87: mov     eax, 1
 * 000000014026DD8C: xor     edx, edx
 * 000000014026DD8E: mov     ecx, 49h ; 'I'
 * 000000014026DD93: wrmsr
 * 000000014026DD95: jmp     loc_14026DED8
 * 000000014026DD9A: test    edx, 2
 * 000000014026DDA0: jz      loc_14026DED5
 * 000000014026DDA6: test    byte ptr gs:279h, 4
 * 000000014026DDAF: jnz     loc_14026DED5
 * 000000014026DDB5: call    loc_14026DEC8
 * 000000014026DDBA: add     rsp, 8
 * 000000014026DDBE: call    loc_14026DED1
 * 000000014026DDC3: add     rsp, 8
 * 000000014026DDC7: call    loc_14026DDBA
 * 000000014026DDCC: add     rsp, 8
 * 000000014026DDD0: call    loc_14026DDC3
 * 000000014026DDD5: add     rsp, 8
 * 000000014026DDD9: call    loc_14026DDCC
 * 000000014026DDDE: add     rsp, 8
 * 000000014026DDE2: call    loc_14026DDD5
 * 000000014026DDE7: add     rsp, 8
 * 000000014026DDEB: call    loc_14026DDDE
 * 000000014026DDF0: add     rsp, 8
 * 000000014026DDF4: call    loc_14026DDE7
 * 000000014026DDF9: add     rsp, 8
 * 000000014026DDFD: call    loc_14026DDF0
 * 000000014026DE02: add     rsp, 8
 * 000000014026DE06: call    loc_14026DDF9
 * 000000014026DE0B: add     rsp, 8
 * 000000014026DE0F: call    loc_14026DE02
 * 000000014026DE14: add     rsp, 8
 * 000000014026DE18: call    loc_14026DE0B
 * 000000014026DE1D: add     rsp, 8
 * 000000014026DE21: call    loc_14026DE14
 * 000000014026DE26: add     rsp, 8
 * 000000014026DE2A: call    loc_14026DE1D
 * 000000014026DE2F: add     rsp, 8
 * 000000014026DE33: call    loc_14026DE26
 * 000000014026DE38: add     rsp, 8
 * 000000014026DE3C: call    loc_14026DE2F
 * 000000014026DE41: add     rsp, 8
 * 000000014026DE45: call    loc_14026DE38
 * 000000014026DE4A: add     rsp, 8
 * 000000014026DE4E: call    loc_14026DE41
 * 000000014026DE53: add     rsp, 8
 * 000000014026DE57: call    loc_14026DE4A
 * 000000014026DE5C: add     rsp, 8
 * 000000014026DE60: call    loc_14026DE53
 * 000000014026DE65: add     rsp, 8
 * 000000014026DE69: call    loc_14026DE5C
 * 000000014026DE6E: add     rsp, 8
 * 000000014026DE72: call    loc_14026DE65
 * 000000014026DE77: add     rsp, 8
 * 000000014026DE7B: call    loc_14026DE6E
 * 000000014026DE80: add     rsp, 8
 * 000000014026DE84: call    loc_14026DE77
 * 000000014026DE89: add     rsp, 8
 * 000000014026DE8D: call    loc_14026DE80
 * 000000014026DE92: add     rsp, 8
 * 000000014026DE96: call    loc_14026DE89
 * 000000014026DE9B: add     rsp, 8
 * 000000014026DE9F: call    loc_14026DE92
 * 000000014026DEA4: add     rsp, 8
 * 000000014026DEA8: call    loc_14026DE9B
 * 000000014026DEAD: add     rsp, 8
 * 000000014026DEB1: call    loc_14026DEA4
 * 000000014026DEB6: add     rsp, 8
 * 000000014026DEBA: call    loc_14026DEAD
 * 000000014026DEBF: add     rsp, 8
 * 000000014026DEC3: call    loc_14026DEB6
 * 000000014026DEC8: add     rsp, 8
 * 000000014026DECC: call    loc_14026DEBF
 * 000000014026DED1: add     rsp, 8
 * 000000014026DED5: lfence
 * 000000014026DED8: test    byte ptr [r10+3], 80h
 * 000000014026DEDD: jz      short loc_14026DF21
 * 000000014026DEDF: mov     ecx, 0C0000102h
 * 000000014026DEE4: rdmsr
 * 000000014026DEE6: shl     rdx, 20h
 * 000000014026DEEA: or      rax, rdx
 * 000000014026DEED: cmp     rax, cs:MmUserProbeAddress
 * 000000014026DEF4: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014026DEFC: cmp     [r10+0F0h], rax
 * 000000014026DF03: jz      short loc_14026DF21
 * 000000014026DF05: mov     rdx, [r10+1F0h]
 * 000000014026DF0C: bts     dword ptr [r10+74h], 8
 * 000000014026DF12: dec     word ptr [r10+1E6h]
 * 000000014026DF1A: mov     [rdx+80h], rax
 * 000000014026DF21: test    byte ptr [r10+3], 3
 * 000000014026DF26: mov     word ptr [rbp+80h], 0
 * 000000014026DF2F: jz      short loc_14026DF36
 * 000000014026DF31: call    KiSaveDebugRegisterState
 * 000000014026DF36: cld
 * 000000014026DF37: stmxcsr dword ptr [rbp-54h]
 * 000000014026DF3B: ldmxcsr dword ptr gs:180h
 * 000000014026DF44: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014026DF48: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014026DF4C: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014026DF50: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014026DF54: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014026DF58: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014026DF5C: sub     qword ptr [rbp+0E8h], 2
 * 000000014026DF64: and     dword ptr [rbp+0ECh], 0
 * 000000014026DF6B: sti
 * 000000014026DF6C: mov     ecx, 0C000001Dh
 * 000000014026DF71: xor     edx, edx
 * 000000014026DF73: mov     r8, [rbp+0E8h]
 * 000000014026DF7A: call    KiExceptionDispatch
 * 000000014026DF7F: nop
 * 000000014026DF80: retn
 */
