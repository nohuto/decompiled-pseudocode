/*
 * XREFs of KiSystemCall32 @ 0x140190DC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140190DC0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140190DC0
 * Reason: Hex-Rays returned no pseudocode for 0x140190DC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190DC0: swapgs
 * 0000000140190DC3: mov     gs:10h, rsp
 * 0000000140190DCC: mov     rsp, gs:1A8h
 * 0000000140190DD5: push    2Bh ; '+'
 * 0000000140190DD7: push    qword ptr gs:10h
 * 0000000140190DDF: push    r11
 * 0000000140190DE1: push    23h ; '#'
 * 0000000140190DE3: push    rcx
 * 0000000140190DE4: swapgs
 * 0000000140190DE7: lfence
 * 0000000140190DEA: sub     rsp, 8
 * 0000000140190DEE: push    rbp
 * 0000000140190DEF: sub     rsp, 158h
 * 0000000140190DF6: lea     rbp, [rsp+190h+var_110]
 * 0000000140190DFE: mov     byte ptr [rbp-55h], 1
 * 0000000140190E02: mov     [rbp-50h], rax
 * 0000000140190E06: mov     [rbp-48h], rcx
 * 0000000140190E0A: mov     [rbp-40h], rdx
 * 0000000140190E0E: mov     [rbp-38h], r8
 * 0000000140190E12: mov     [rbp-30h], r9
 * 0000000140190E16: mov     [rbp-28h], r10
 * 0000000140190E1A: mov     [rbp-20h], r11
 * 0000000140190E1E: test    byte ptr [rbp+0F0h], 1
 * 0000000140190E25: jnz     short loc_140190E54
 * 0000000140190E27: lfence
 * 0000000140190E2A: test    byte ptr gs:278h, 1
 * 0000000140190E33: jnz     short loc_140190E3D
 * 0000000140190E35: lfence
 * 0000000140190E38: jmp     loc_140191070
 * 0000000140190E3D: movzx   eax, byte ptr gs:27Ah
 * 0000000140190E46: mov     ecx, 48h ; 'H'
 * 0000000140190E4B: xor     edx, edx
 * 0000000140190E4D: wrmsr
 * 0000000140190E4F: jmp     loc_140191070
 * 0000000140190E54: test    cs:KiKvaShadow, 1
 * 0000000140190E5B: jnz     short loc_140190E60
 * 0000000140190E5D: swapgs
 * 0000000140190E60: lfence
 * 0000000140190E63: mov     r10, gs:188h
 * 0000000140190E6C: mov     rcx, gs:188h
 * 0000000140190E75: mov     rcx, [rcx+220h]
 * 0000000140190E7C: mov     rcx, [rcx+818h]
 * 0000000140190E83: mov     gs:270h, rcx
 * 0000000140190E8C: movzx   eax, byte ptr gs:27Bh
 * 0000000140190E95: cmp     gs:27Ah, al
 * 0000000140190E9D: jz      short loc_140190EB0
 * 0000000140190E9F: mov     gs:27Ah, al
 * 0000000140190EA7: mov     ecx, 48h ; 'H'
 * 0000000140190EAC: xor     edx, edx
 * 0000000140190EAE: wrmsr
 * 0000000140190EB0: movzx   edx, byte ptr gs:278h
 * 0000000140190EB9: test    edx, 8
 * 0000000140190EBF: jz      short loc_140190ED4
 * 0000000140190EC1: mov     eax, 1
 * 0000000140190EC6: xor     edx, edx
 * 0000000140190EC8: mov     ecx, 49h ; 'I'
 * 0000000140190ECD: wrmsr
 * 0000000140190ECF: jmp     loc_140191012
 * 0000000140190ED4: test    edx, 2
 * 0000000140190EDA: jz      loc_14019100F
 * 0000000140190EE0: test    byte ptr gs:279h, 4
 * 0000000140190EE9: jnz     loc_14019100F
 * 0000000140190EEF: call    loc_140191002
 * 0000000140190EF4: add     rsp, 8
 * 0000000140190EF8: call    loc_14019100B
 * 0000000140190EFD: add     rsp, 8
 * 0000000140190F01: call    loc_140190EF4
 * 0000000140190F06: add     rsp, 8
 * 0000000140190F0A: call    loc_140190EFD
 * 0000000140190F0F: add     rsp, 8
 * 0000000140190F13: call    loc_140190F06
 * 0000000140190F18: add     rsp, 8
 * 0000000140190F1C: call    loc_140190F0F
 * 0000000140190F21: add     rsp, 8
 * 0000000140190F25: call    loc_140190F18
 * 0000000140190F2A: add     rsp, 8
 * 0000000140190F2E: call    loc_140190F21
 * 0000000140190F33: add     rsp, 8
 * 0000000140190F37: call    loc_140190F2A
 * 0000000140190F3C: add     rsp, 8
 * 0000000140190F40: call    loc_140190F33
 * 0000000140190F45: add     rsp, 8
 * 0000000140190F49: call    loc_140190F3C
 * 0000000140190F4E: add     rsp, 8
 * 0000000140190F52: call    loc_140190F45
 * 0000000140190F57: add     rsp, 8
 * 0000000140190F5B: call    loc_140190F4E
 * 0000000140190F60: add     rsp, 8
 * 0000000140190F64: call    loc_140190F57
 * 0000000140190F69: add     rsp, 8
 * 0000000140190F6D: call    loc_140190F60
 * 0000000140190F72: add     rsp, 8
 * 0000000140190F76: call    loc_140190F69
 * 0000000140190F7B: add     rsp, 8
 * 0000000140190F7F: call    loc_140190F72
 * 0000000140190F84: add     rsp, 8
 * 0000000140190F88: call    loc_140190F7B
 * 0000000140190F8D: add     rsp, 8
 * 0000000140190F91: call    loc_140190F84
 * 0000000140190F96: add     rsp, 8
 * 0000000140190F9A: call    loc_140190F8D
 * 0000000140190F9F: add     rsp, 8
 * 0000000140190FA3: call    loc_140190F96
 * 0000000140190FA8: add     rsp, 8
 * 0000000140190FAC: call    loc_140190F9F
 * 0000000140190FB1: add     rsp, 8
 * 0000000140190FB5: call    loc_140190FA8
 * 0000000140190FBA: add     rsp, 8
 * 0000000140190FBE: call    loc_140190FB1
 * 0000000140190FC3: add     rsp, 8
 * 0000000140190FC7: call    loc_140190FBA
 * 0000000140190FCC: add     rsp, 8
 * 0000000140190FD0: call    loc_140190FC3
 * 0000000140190FD5: add     rsp, 8
 * 0000000140190FD9: call    loc_140190FCC
 * 0000000140190FDE: add     rsp, 8
 * 0000000140190FE2: call    loc_140190FD5
 * 0000000140190FE7: add     rsp, 8
 * 0000000140190FEB: call    loc_140190FDE
 * 0000000140190FF0: add     rsp, 8
 * 0000000140190FF4: call    loc_140190FE7
 * 0000000140190FF9: add     rsp, 8
 * 0000000140190FFD: call    loc_140190FF0
 * 0000000140191002: add     rsp, 8
 * 0000000140191006: call    loc_140190FF9
 * 000000014019100B: add     rsp, 8
 * 000000014019100F: lfence
 * 0000000140191012: test    byte ptr [r10+3], 80h
 * 0000000140191017: jz      short loc_14019105B
 * 0000000140191019: mov     ecx, 0C0000102h
 * 000000014019101E: rdmsr
 * 0000000140191020: shl     rdx, 20h
 * 0000000140191024: or      rax, rdx
 * 0000000140191027: cmp     rax, cs:MmUserProbeAddress
 * 000000014019102E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140191036: cmp     [r10+0F0h], rax
 * 000000014019103D: jz      short loc_14019105B
 * 000000014019103F: mov     rdx, [r10+1F0h]
 * 0000000140191046: bts     dword ptr [r10+74h], 8
 * 000000014019104C: dec     word ptr [r10+1E6h]
 * 0000000140191054: mov     [rdx+80h], rax
 * 000000014019105B: test    byte ptr [r10+3], 3
 * 0000000140191060: mov     word ptr [rbp+80h], 0
 * 0000000140191069: jz      short loc_140191070
 * 000000014019106B: call    KiSaveDebugRegisterState
 * 0000000140191070: cld
 * 0000000140191071: stmxcsr dword ptr [rbp-54h]
 * 0000000140191075: ldmxcsr dword ptr gs:180h
 * 000000014019107E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140191082: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140191086: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014019108A: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014019108E: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140191092: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140191096: sub     qword ptr [rbp+0E8h], 2
 * 000000014019109E: and     dword ptr [rbp+0ECh], 0
 * 00000001401910A5: sti
 * 00000001401910A6: mov     ecx, 0C000001Dh
 * 00000001401910AB: xor     edx, edx
 * 00000001401910AD: mov     r8, [rbp+0E8h]
 * 00000001401910B4: call    KiExceptionDispatch
 * 00000001401910B9: nop
 * 00000001401910BA: retn
 */
