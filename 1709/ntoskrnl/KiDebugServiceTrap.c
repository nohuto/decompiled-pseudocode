/*
 * XREFs of KiDebugServiceTrap @ 0x140190A80
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140297D80 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140190A80 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140190A80
 * Reason: Hex-Rays returned no pseudocode for 0x140190A80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190A80: inc     qword ptr [rsp+0]
 * 0000000140190A84: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140190A8A: jnz     short loc_140190A91
 * 0000000140190A8C: and     dword ptr [rsp+4], 0
 * 0000000140190A91: sub     rsp, 8
 * 0000000140190A95: push    rbp
 * 0000000140190A96: sub     rsp, 158h
 * 0000000140190A9D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140190AA5: mov     byte ptr [rbp-55h], 1
 * 0000000140190AA9: mov     [rbp-50h], rax
 * 0000000140190AAD: mov     [rbp-48h], rcx
 * 0000000140190AB1: mov     [rbp-40h], rdx
 * 0000000140190AB5: mov     [rbp-38h], r8
 * 0000000140190AB9: mov     [rbp-30h], r9
 * 0000000140190ABD: mov     [rbp-28h], r10
 * 0000000140190AC1: mov     [rbp-20h], r11
 * 0000000140190AC5: test    byte ptr [rbp+0F0h], 1
 * 0000000140190ACC: jnz     short loc_140190AFB
 * 0000000140190ACE: lfence
 * 0000000140190AD1: test    byte ptr gs:278h, 1
 * 0000000140190ADA: jnz     short loc_140190AE4
 * 0000000140190ADC: lfence
 * 0000000140190ADF: jmp     loc_140190D17
 * 0000000140190AE4: movzx   eax, byte ptr gs:27Ah
 * 0000000140190AED: mov     ecx, 48h ; 'H'
 * 0000000140190AF2: xor     edx, edx
 * 0000000140190AF4: wrmsr
 * 0000000140190AF6: jmp     loc_140190D17
 * 0000000140190AFB: test    cs:KiKvaShadow, 1
 * 0000000140190B02: jnz     short loc_140190B07
 * 0000000140190B04: swapgs
 * 0000000140190B07: lfence
 * 0000000140190B0A: mov     r10, gs:188h
 * 0000000140190B13: mov     rcx, gs:188h
 * 0000000140190B1C: mov     rcx, [rcx+220h]
 * 0000000140190B23: mov     rcx, [rcx+838h]
 * 0000000140190B2A: mov     gs:270h, rcx
 * 0000000140190B33: movzx   eax, byte ptr gs:27Bh
 * 0000000140190B3C: cmp     gs:27Ah, al
 * 0000000140190B44: jz      short loc_140190B57
 * 0000000140190B46: mov     gs:27Ah, al
 * 0000000140190B4E: mov     ecx, 48h ; 'H'
 * 0000000140190B53: xor     edx, edx
 * 0000000140190B55: wrmsr
 * 0000000140190B57: movzx   edx, byte ptr gs:278h
 * 0000000140190B60: test    edx, 8
 * 0000000140190B66: jz      short loc_140190B7B
 * 0000000140190B68: mov     eax, 1
 * 0000000140190B6D: xor     edx, edx
 * 0000000140190B6F: mov     ecx, 49h ; 'I'
 * 0000000140190B74: wrmsr
 * 0000000140190B76: jmp     loc_140190CB9
 * 0000000140190B7B: test    edx, 2
 * 0000000140190B81: jz      loc_140190CB6
 * 0000000140190B87: test    byte ptr gs:279h, 4
 * 0000000140190B90: jnz     loc_140190CB6
 * 0000000140190B96: call    loc_140190CA9
 * 0000000140190B9B: add     rsp, 8
 * 0000000140190B9F: call    loc_140190CB2
 * 0000000140190BA4: add     rsp, 8
 * 0000000140190BA8: call    loc_140190B9B
 * 0000000140190BAD: add     rsp, 8
 * 0000000140190BB1: call    loc_140190BA4
 * 0000000140190BB6: add     rsp, 8
 * 0000000140190BBA: call    loc_140190BAD
 * 0000000140190BBF: add     rsp, 8
 * 0000000140190BC3: call    loc_140190BB6
 * 0000000140190BC8: add     rsp, 8
 * 0000000140190BCC: call    loc_140190BBF
 * 0000000140190BD1: add     rsp, 8
 * 0000000140190BD5: call    loc_140190BC8
 * 0000000140190BDA: add     rsp, 8
 * 0000000140190BDE: call    loc_140190BD1
 * 0000000140190BE3: add     rsp, 8
 * 0000000140190BE7: call    loc_140190BDA
 * 0000000140190BEC: add     rsp, 8
 * 0000000140190BF0: call    loc_140190BE3
 * 0000000140190BF5: add     rsp, 8
 * 0000000140190BF9: call    loc_140190BEC
 * 0000000140190BFE: add     rsp, 8
 * 0000000140190C02: call    loc_140190BF5
 * 0000000140190C07: add     rsp, 8
 * 0000000140190C0B: call    loc_140190BFE
 * 0000000140190C10: add     rsp, 8
 * 0000000140190C14: call    loc_140190C07
 * 0000000140190C19: add     rsp, 8
 * 0000000140190C1D: call    loc_140190C10
 * 0000000140190C22: add     rsp, 8
 * 0000000140190C26: call    loc_140190C19
 * 0000000140190C2B: add     rsp, 8
 * 0000000140190C2F: call    loc_140190C22
 * 0000000140190C34: add     rsp, 8
 * 0000000140190C38: call    loc_140190C2B
 * 0000000140190C3D: add     rsp, 8
 * 0000000140190C41: call    loc_140190C34
 * 0000000140190C46: add     rsp, 8
 * 0000000140190C4A: call    loc_140190C3D
 * 0000000140190C4F: add     rsp, 8
 * 0000000140190C53: call    loc_140190C46
 * 0000000140190C58: add     rsp, 8
 * 0000000140190C5C: call    loc_140190C4F
 * 0000000140190C61: add     rsp, 8
 * 0000000140190C65: call    loc_140190C58
 * 0000000140190C6A: add     rsp, 8
 * 0000000140190C6E: call    loc_140190C61
 * 0000000140190C73: add     rsp, 8
 * 0000000140190C77: call    loc_140190C6A
 * 0000000140190C7C: add     rsp, 8
 * 0000000140190C80: call    loc_140190C73
 * 0000000140190C85: add     rsp, 8
 * 0000000140190C89: call    loc_140190C7C
 * 0000000140190C8E: add     rsp, 8
 * 0000000140190C92: call    loc_140190C85
 * 0000000140190C97: add     rsp, 8
 * 0000000140190C9B: call    loc_140190C8E
 * 0000000140190CA0: add     rsp, 8
 * 0000000140190CA4: call    loc_140190C97
 * 0000000140190CA9: add     rsp, 8
 * 0000000140190CAD: call    loc_140190CA0
 * 0000000140190CB2: add     rsp, 8
 * 0000000140190CB6: lfence
 * 0000000140190CB9: test    byte ptr [r10+3], 80h
 * 0000000140190CBE: jz      short loc_140190D02
 * 0000000140190CC0: mov     ecx, 0C0000102h
 * 0000000140190CC5: rdmsr
 * 0000000140190CC7: shl     rdx, 20h
 * 0000000140190CCB: or      rax, rdx
 * 0000000140190CCE: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190CD5: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140190CDD: cmp     [r10+0F0h], rax
 * 0000000140190CE4: jz      short loc_140190D02
 * 0000000140190CE6: mov     rdx, [r10+1F0h]
 * 0000000140190CED: bts     dword ptr [r10+74h], 8
 * 0000000140190CF3: dec     word ptr [r10+1E6h]
 * 0000000140190CFB: mov     [rdx+80h], rax
 * 0000000140190D02: test    byte ptr [r10+3], 3
 * 0000000140190D07: mov     word ptr [rbp+80h], 0
 * 0000000140190D10: jz      short loc_140190D17
 * 0000000140190D12: call    KiSaveDebugRegisterState
 * 0000000140190D17: cld
 * 0000000140190D18: stmxcsr dword ptr [rbp-54h]
 * 0000000140190D1C: ldmxcsr dword ptr gs:180h
 * 0000000140190D25: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140190D29: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140190D2D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140190D31: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140190D35: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140190D39: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140190D3D: test    dword ptr [rbp+0F8h], 200h
 * 0000000140190D47: jz      short loc_140190D4A
 * 0000000140190D49: sti
 * 0000000140190D4A: mov     ecx, 80000003h
 * 0000000140190D4F: mov     edx, 1
 * 0000000140190D54: mov     r9, [rbp-50h]
 * 0000000140190D58: mov     r8, [rbp+0E8h]
 * 0000000140190D5F: call    KiExceptionDispatch
 * 0000000140190D64: nop
 * 0000000140190D65: retn
 */
