/*
 * XREFs of KiBreakpointTrap @ 0x1401B5F40
 * Callers:
 *     KiBreakpointTrapShadow @ 0x1402CF280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1401B5F40 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1401B5F40
 * Reason: Hex-Rays returned no pseudocode for 0x1401B5F40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B5F40: sub     rsp, 8
 * 00000001401B5F44: push    rbp
 * 00000001401B5F45: sub     rsp, 158h
 * 00000001401B5F4C: lea     rbp, [rsp+80h]
 * 00000001401B5F54: mov     [rbp+0E8h+var_13D], 1
 * 00000001401B5F58: mov     [rbp+0E8h+var_138], rax
 * 00000001401B5F5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B5F60: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B5F64: mov     [rbp+0E8h+var_120], r8
 * 00000001401B5F68: mov     [rbp+0E8h+var_118], r9
 * 00000001401B5F6C: mov     [rbp+0E8h+var_110], r10
 * 00000001401B5F70: mov     [rbp+0E8h+var_108], r11
 * 00000001401B5F74: test    [rbp+0E8h+arg_0], 1
 * 00000001401B5F7B: jnz     short loc_1401B5FAA
 * 00000001401B5F7D: lfence
 * 00000001401B5F80: test    byte ptr gs:278h, 1
 * 00000001401B5F89: jnz     short loc_1401B5F93
 * 00000001401B5F8B: lfence
 * 00000001401B5F8E: jmp     loc_1401B61C6
 * 00000001401B5F93: movzx   eax, byte ptr gs:27Ah
 * 00000001401B5F9C: mov     ecx, 48h ; 'H'
 * 00000001401B5FA1: xor     edx, edx
 * 00000001401B5FA3: wrmsr
 * 00000001401B5FA5: jmp     loc_1401B61C6
 * 00000001401B5FAA: test    cs:KiKvaShadow, 1
 * 00000001401B5FB1: jnz     short loc_1401B5FB6
 * 00000001401B5FB3: swapgs
 * 00000001401B5FB6: lfence
 * 00000001401B5FB9: mov     r10, gs:188h
 * 00000001401B5FC2: mov     rcx, gs:188h
 * 00000001401B5FCB: mov     rcx, [rcx+220h]
 * 00000001401B5FD2: mov     rcx, [rcx+838h]
 * 00000001401B5FD9: mov     gs:270h, rcx
 * 00000001401B5FE2: movzx   eax, byte ptr gs:27Bh
 * 00000001401B5FEB: cmp     gs:27Ah, al
 * 00000001401B5FF3: jz      short loc_1401B6006
 * 00000001401B5FF5: mov     gs:27Ah, al
 * 00000001401B5FFD: mov     ecx, 48h ; 'H'
 * 00000001401B6002: xor     edx, edx
 * 00000001401B6004: wrmsr
 * 00000001401B6006: movzx   edx, byte ptr gs:278h
 * 00000001401B600F: test    edx, 8
 * 00000001401B6015: jz      short loc_1401B602A
 * 00000001401B6017: mov     eax, 1
 * 00000001401B601C: xor     edx, edx
 * 00000001401B601E: mov     ecx, 49h ; 'I'
 * 00000001401B6023: wrmsr
 * 00000001401B6025: jmp     loc_1401B6168
 * 00000001401B602A: test    edx, 2
 * 00000001401B6030: jz      loc_1401B6165
 * 00000001401B6036: test    byte ptr gs:279h, 4
 * 00000001401B603F: jnz     loc_1401B6165
 * 00000001401B6045: call    loc_1401B6158
 * 00000001401B604A: add     rsp, 8
 * 00000001401B604E: call    loc_1401B6161
 * 00000001401B6053: add     rsp, 8
 * 00000001401B6057: call    loc_1401B604A
 * 00000001401B605C: add     rsp, 8
 * 00000001401B6060: call    loc_1401B6053
 * 00000001401B6065: add     rsp, 8
 * 00000001401B6069: call    loc_1401B605C
 * 00000001401B606E: add     rsp, 8
 * 00000001401B6072: call    loc_1401B6065
 * 00000001401B6077: add     rsp, 8
 * 00000001401B607B: call    loc_1401B606E
 * 00000001401B6080: add     rsp, 8
 * 00000001401B6084: call    loc_1401B6077
 * 00000001401B6089: add     rsp, 8
 * 00000001401B608D: call    loc_1401B6080
 * 00000001401B6092: add     rsp, 8
 * 00000001401B6096: call    loc_1401B6089
 * 00000001401B609B: add     rsp, 8
 * 00000001401B609F: call    loc_1401B6092
 * 00000001401B60A4: add     rsp, 8
 * 00000001401B60A8: call    loc_1401B609B
 * 00000001401B60AD: add     rsp, 8
 * 00000001401B60B1: call    loc_1401B60A4
 * 00000001401B60B6: add     rsp, 8
 * 00000001401B60BA: call    loc_1401B60AD
 * 00000001401B60BF: add     rsp, 8
 * 00000001401B60C3: call    loc_1401B60B6
 * 00000001401B60C8: add     rsp, 8
 * 00000001401B60CC: call    loc_1401B60BF
 * 00000001401B60D1: add     rsp, 8
 * 00000001401B60D5: call    loc_1401B60C8
 * 00000001401B60DA: add     rsp, 8
 * 00000001401B60DE: call    loc_1401B60D1
 * 00000001401B60E3: add     rsp, 8
 * 00000001401B60E7: call    loc_1401B60DA
 * 00000001401B60EC: add     rsp, 8
 * 00000001401B60F0: call    loc_1401B60E3
 * 00000001401B60F5: add     rsp, 8
 * 00000001401B60F9: call    loc_1401B60EC
 * 00000001401B60FE: add     rsp, 8
 * 00000001401B6102: call    loc_1401B60F5
 * 00000001401B6107: add     rsp, 8
 * 00000001401B610B: call    loc_1401B60FE
 * 00000001401B6110: add     rsp, 8
 * 00000001401B6114: call    loc_1401B6107
 * 00000001401B6119: add     rsp, 8
 * 00000001401B611D: call    loc_1401B6110
 * 00000001401B6122: add     rsp, 8
 * 00000001401B6126: call    loc_1401B6119
 * 00000001401B612B: add     rsp, 8
 * 00000001401B612F: call    loc_1401B6122
 * 00000001401B6134: add     rsp, 8
 * 00000001401B6138: call    loc_1401B612B
 * 00000001401B613D: add     rsp, 8
 * 00000001401B6141: call    loc_1401B6134
 * 00000001401B6146: add     rsp, 8
 * 00000001401B614A: call    loc_1401B613D
 * 00000001401B614F: add     rsp, 8
 * 00000001401B6153: call    loc_1401B6146
 * 00000001401B6158: add     rsp, 8
 * 00000001401B615C: call    loc_1401B614F
 * 00000001401B6161: add     rsp, 8
 * 00000001401B6165: lfence
 * 00000001401B6168: test    byte ptr [r10+3], 80h
 * 00000001401B616D: jz      short loc_1401B61B1
 * 00000001401B616F: mov     ecx, 0C0000102h
 * 00000001401B6174: rdmsr
 * 00000001401B6176: shl     rdx, 20h
 * 00000001401B617A: or      rax, rdx
 * 00000001401B617D: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B6184: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B618C: cmp     [r10+0F0h], rax
 * 00000001401B6193: jz      short loc_1401B61B1
 * 00000001401B6195: mov     rdx, [r10+1F0h]
 * 00000001401B619C: bts     dword ptr [r10+74h], 8
 * 00000001401B61A2: dec     word ptr [r10+1E6h]
 * 00000001401B61AA: mov     [rdx+80h], rax
 * 00000001401B61B1: test    byte ptr [r10+3], 3
 * 00000001401B61B6: mov     [rbp+0E8h+var_68], 0
 * 00000001401B61BF: jz      short loc_1401B61C6
 * 00000001401B61C1: call    KiSaveDebugRegisterState
 * 00000001401B61C6: cld
 * 00000001401B61C7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B61CB: ldmxcsr dword ptr gs:180h
 * 00000001401B61D4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B61D8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B61DC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B61E0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B61E4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B61E8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B61EC: test    [rbp+0E8h+arg_8], 200h
 * 00000001401B61F6: jz      short loc_1401B61F9
 * 00000001401B61F8: sti
 * 00000001401B61F9: mov     ecx, 80000003h
 * 00000001401B61FE: mov     edx, 1
 * 00000001401B6203: mov     r8, [rbp+0E8h]
 * 00000001401B620A: dec     r8
 * 00000001401B620D: mov     r9d, 0
 * 00000001401B6213: call    KiExceptionDispatch
 * 00000001401B6218: nop
 * 00000001401B6219: retn
 */
