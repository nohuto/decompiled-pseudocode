/*
 * XREFs of KiStackFault @ 0x14018E000
 * Callers:
 *     KiStackFaultShadow @ 0x140297700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14018E000 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14018E000
 * Reason: Hex-Rays returned no pseudocode for 0x14018E000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E000: push    rbp
 * 000000014018E001: sub     rsp, 158h
 * 000000014018E008: lea     rbp, [rsp+80h]
 * 000000014018E010: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E014: mov     [rbp+0D8h+var_128], rax
 * 000000014018E018: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E01C: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E020: mov     [rbp+0D8h+var_110], r8
 * 000000014018E024: mov     [rbp+0D8h+var_108], r9
 * 000000014018E028: mov     [rbp+0D8h+var_100], r10
 * 000000014018E02C: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E030: test    [rbp+0D8h+arg_8], 1
 * 000000014018E037: jnz     short loc_14018E066
 * 000000014018E039: lfence
 * 000000014018E03C: test    byte ptr gs:278h, 1
 * 000000014018E045: jnz     short loc_14018E04F
 * 000000014018E047: lfence
 * 000000014018E04A: jmp     loc_14018E282
 * 000000014018E04F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E058: mov     ecx, 48h ; 'H'
 * 000000014018E05D: xor     edx, edx
 * 000000014018E05F: wrmsr
 * 000000014018E061: jmp     loc_14018E282
 * 000000014018E066: test    cs:KiKvaShadow, 1
 * 000000014018E06D: jnz     short loc_14018E072
 * 000000014018E06F: swapgs
 * 000000014018E072: lfence
 * 000000014018E075: mov     r10, gs:188h
 * 000000014018E07E: mov     rcx, gs:188h
 * 000000014018E087: mov     rcx, [rcx+220h]
 * 000000014018E08E: mov     rcx, [rcx+838h]
 * 000000014018E095: mov     gs:270h, rcx
 * 000000014018E09E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E0A7: cmp     gs:27Ah, al
 * 000000014018E0AF: jz      short loc_14018E0C2
 * 000000014018E0B1: mov     gs:27Ah, al
 * 000000014018E0B9: mov     ecx, 48h ; 'H'
 * 000000014018E0BE: xor     edx, edx
 * 000000014018E0C0: wrmsr
 * 000000014018E0C2: movzx   edx, byte ptr gs:278h
 * 000000014018E0CB: test    edx, 8
 * 000000014018E0D1: jz      short loc_14018E0E6
 * 000000014018E0D3: mov     eax, 1
 * 000000014018E0D8: xor     edx, edx
 * 000000014018E0DA: mov     ecx, 49h ; 'I'
 * 000000014018E0DF: wrmsr
 * 000000014018E0E1: jmp     loc_14018E224
 * 000000014018E0E6: test    edx, 2
 * 000000014018E0EC: jz      loc_14018E221
 * 000000014018E0F2: test    byte ptr gs:279h, 4
 * 000000014018E0FB: jnz     loc_14018E221
 * 000000014018E101: call    loc_14018E214
 * 000000014018E106: add     rsp, 8
 * 000000014018E10A: call    loc_14018E21D
 * 000000014018E10F: add     rsp, 8
 * 000000014018E113: call    loc_14018E106
 * 000000014018E118: add     rsp, 8
 * 000000014018E11C: call    loc_14018E10F
 * 000000014018E121: add     rsp, 8
 * 000000014018E125: call    loc_14018E118
 * 000000014018E12A: add     rsp, 8
 * 000000014018E12E: call    loc_14018E121
 * 000000014018E133: add     rsp, 8
 * 000000014018E137: call    loc_14018E12A
 * 000000014018E13C: add     rsp, 8
 * 000000014018E140: call    loc_14018E133
 * 000000014018E145: add     rsp, 8
 * 000000014018E149: call    loc_14018E13C
 * 000000014018E14E: add     rsp, 8
 * 000000014018E152: call    loc_14018E145
 * 000000014018E157: add     rsp, 8
 * 000000014018E15B: call    loc_14018E14E
 * 000000014018E160: add     rsp, 8
 * 000000014018E164: call    loc_14018E157
 * 000000014018E169: add     rsp, 8
 * 000000014018E16D: call    loc_14018E160
 * 000000014018E172: add     rsp, 8
 * 000000014018E176: call    loc_14018E169
 * 000000014018E17B: add     rsp, 8
 * 000000014018E17F: call    loc_14018E172
 * 000000014018E184: add     rsp, 8
 * 000000014018E188: call    loc_14018E17B
 * 000000014018E18D: add     rsp, 8
 * 000000014018E191: call    loc_14018E184
 * 000000014018E196: add     rsp, 8
 * 000000014018E19A: call    loc_14018E18D
 * 000000014018E19F: add     rsp, 8
 * 000000014018E1A3: call    loc_14018E196
 * 000000014018E1A8: add     rsp, 8
 * 000000014018E1AC: call    loc_14018E19F
 * 000000014018E1B1: add     rsp, 8
 * 000000014018E1B5: call    loc_14018E1A8
 * 000000014018E1BA: add     rsp, 8
 * 000000014018E1BE: call    loc_14018E1B1
 * 000000014018E1C3: add     rsp, 8
 * 000000014018E1C7: call    loc_14018E1BA
 * 000000014018E1CC: add     rsp, 8
 * 000000014018E1D0: call    loc_14018E1C3
 * 000000014018E1D5: add     rsp, 8
 * 000000014018E1D9: call    loc_14018E1CC
 * 000000014018E1DE: add     rsp, 8
 * 000000014018E1E2: call    loc_14018E1D5
 * 000000014018E1E7: add     rsp, 8
 * 000000014018E1EB: call    loc_14018E1DE
 * 000000014018E1F0: add     rsp, 8
 * 000000014018E1F4: call    loc_14018E1E7
 * 000000014018E1F9: add     rsp, 8
 * 000000014018E1FD: call    loc_14018E1F0
 * 000000014018E202: add     rsp, 8
 * 000000014018E206: call    loc_14018E1F9
 * 000000014018E20B: add     rsp, 8
 * 000000014018E20F: call    loc_14018E202
 * 000000014018E214: add     rsp, 8
 * 000000014018E218: call    loc_14018E20B
 * 000000014018E21D: add     rsp, 8
 * 000000014018E221: lfence
 * 000000014018E224: test    byte ptr [r10+3], 80h
 * 000000014018E229: jz      short loc_14018E26D
 * 000000014018E22B: mov     ecx, 0C0000102h
 * 000000014018E230: rdmsr
 * 000000014018E232: shl     rdx, 20h
 * 000000014018E236: or      rax, rdx
 * 000000014018E239: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E240: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E248: cmp     [r10+0F0h], rax
 * 000000014018E24F: jz      short loc_14018E26D
 * 000000014018E251: mov     rdx, [r10+1F0h]
 * 000000014018E258: bts     dword ptr [r10+74h], 8
 * 000000014018E25E: dec     word ptr [r10+1E6h]
 * 000000014018E266: mov     [rdx+80h], rax
 * 000000014018E26D: test    byte ptr [r10+3], 3
 * 000000014018E272: mov     [rbp+0D8h+var_58], 0
 * 000000014018E27B: jz      short loc_14018E282
 * 000000014018E27D: call    KiSaveDebugRegisterState
 * 000000014018E282: cld
 * 000000014018E283: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018E287: ldmxcsr dword ptr gs:180h
 * 000000014018E290: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018E294: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018E298: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018E29C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018E2A0: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018E2A4: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018E2A8: mov     eax, [rbp+0E0h]
 * 000000014018E2AE: test    [rbp+0D8h+arg_10], 200h
 * 000000014018E2B8: jz      short loc_14018E2BB
 * 000000014018E2BA: sti
 * 000000014018E2BB: mov     ecx, 0C0000005h
 * 000000014018E2C0: mov     edx, 2
 * 000000014018E2C5: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018E2CC: mov     r9d, [rbp+0E0h]
 * 000000014018E2D3: or      r9d, 3
 * 000000014018E2D7: and     r9d, 0FFFFh
 * 000000014018E2DE: test    [rbp+0D8h+arg_8], 1
 * 000000014018E2E5: jnz     short loc_14018E2EB
 * 000000014018E2E7: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014018E2EB: xor     r10, r10
 * 000000014018E2EE: call    KiExceptionDispatch
 * 000000014018E2F3: nop
 * 000000014018E2F4: retn
 */
