/*
 * XREFs of KiBreakpointTrap @ 0x14018C240
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140297280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14018C240 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14018C240
 * Reason: Hex-Rays returned no pseudocode for 0x14018C240
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018C240: sub     rsp, 8
 * 000000014018C244: push    rbp
 * 000000014018C245: sub     rsp, 158h
 * 000000014018C24C: lea     rbp, [rsp+80h]
 * 000000014018C254: mov     [rbp+0E8h+var_13D], 1
 * 000000014018C258: mov     [rbp+0E8h+var_138], rax
 * 000000014018C25C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018C260: mov     [rbp+0E8h+var_128], rdx
 * 000000014018C264: mov     [rbp+0E8h+var_120], r8
 * 000000014018C268: mov     [rbp+0E8h+var_118], r9
 * 000000014018C26C: mov     [rbp+0E8h+var_110], r10
 * 000000014018C270: mov     [rbp+0E8h+var_108], r11
 * 000000014018C274: test    [rbp+0E8h+arg_0], 1
 * 000000014018C27B: jnz     short loc_14018C2AA
 * 000000014018C27D: lfence
 * 000000014018C280: test    byte ptr gs:278h, 1
 * 000000014018C289: jnz     short loc_14018C293
 * 000000014018C28B: lfence
 * 000000014018C28E: jmp     loc_14018C4C6
 * 000000014018C293: movzx   eax, byte ptr gs:27Ah
 * 000000014018C29C: mov     ecx, 48h ; 'H'
 * 000000014018C2A1: xor     edx, edx
 * 000000014018C2A3: wrmsr
 * 000000014018C2A5: jmp     loc_14018C4C6
 * 000000014018C2AA: test    cs:KiKvaShadow, 1
 * 000000014018C2B1: jnz     short loc_14018C2B6
 * 000000014018C2B3: swapgs
 * 000000014018C2B6: lfence
 * 000000014018C2B9: mov     r10, gs:188h
 * 000000014018C2C2: mov     rcx, gs:188h
 * 000000014018C2CB: mov     rcx, [rcx+220h]
 * 000000014018C2D2: mov     rcx, [rcx+838h]
 * 000000014018C2D9: mov     gs:270h, rcx
 * 000000014018C2E2: movzx   eax, byte ptr gs:27Bh
 * 000000014018C2EB: cmp     gs:27Ah, al
 * 000000014018C2F3: jz      short loc_14018C306
 * 000000014018C2F5: mov     gs:27Ah, al
 * 000000014018C2FD: mov     ecx, 48h ; 'H'
 * 000000014018C302: xor     edx, edx
 * 000000014018C304: wrmsr
 * 000000014018C306: movzx   edx, byte ptr gs:278h
 * 000000014018C30F: test    edx, 8
 * 000000014018C315: jz      short loc_14018C32A
 * 000000014018C317: mov     eax, 1
 * 000000014018C31C: xor     edx, edx
 * 000000014018C31E: mov     ecx, 49h ; 'I'
 * 000000014018C323: wrmsr
 * 000000014018C325: jmp     loc_14018C468
 * 000000014018C32A: test    edx, 2
 * 000000014018C330: jz      loc_14018C465
 * 000000014018C336: test    byte ptr gs:279h, 4
 * 000000014018C33F: jnz     loc_14018C465
 * 000000014018C345: call    loc_14018C458
 * 000000014018C34A: add     rsp, 8
 * 000000014018C34E: call    loc_14018C461
 * 000000014018C353: add     rsp, 8
 * 000000014018C357: call    loc_14018C34A
 * 000000014018C35C: add     rsp, 8
 * 000000014018C360: call    loc_14018C353
 * 000000014018C365: add     rsp, 8
 * 000000014018C369: call    loc_14018C35C
 * 000000014018C36E: add     rsp, 8
 * 000000014018C372: call    loc_14018C365
 * 000000014018C377: add     rsp, 8
 * 000000014018C37B: call    loc_14018C36E
 * 000000014018C380: add     rsp, 8
 * 000000014018C384: call    loc_14018C377
 * 000000014018C389: add     rsp, 8
 * 000000014018C38D: call    loc_14018C380
 * 000000014018C392: add     rsp, 8
 * 000000014018C396: call    loc_14018C389
 * 000000014018C39B: add     rsp, 8
 * 000000014018C39F: call    loc_14018C392
 * 000000014018C3A4: add     rsp, 8
 * 000000014018C3A8: call    loc_14018C39B
 * 000000014018C3AD: add     rsp, 8
 * 000000014018C3B1: call    loc_14018C3A4
 * 000000014018C3B6: add     rsp, 8
 * 000000014018C3BA: call    loc_14018C3AD
 * 000000014018C3BF: add     rsp, 8
 * 000000014018C3C3: call    loc_14018C3B6
 * 000000014018C3C8: add     rsp, 8
 * 000000014018C3CC: call    loc_14018C3BF
 * 000000014018C3D1: add     rsp, 8
 * 000000014018C3D5: call    loc_14018C3C8
 * 000000014018C3DA: add     rsp, 8
 * 000000014018C3DE: call    loc_14018C3D1
 * 000000014018C3E3: add     rsp, 8
 * 000000014018C3E7: call    loc_14018C3DA
 * 000000014018C3EC: add     rsp, 8
 * 000000014018C3F0: call    loc_14018C3E3
 * 000000014018C3F5: add     rsp, 8
 * 000000014018C3F9: call    loc_14018C3EC
 * 000000014018C3FE: add     rsp, 8
 * 000000014018C402: call    loc_14018C3F5
 * 000000014018C407: add     rsp, 8
 * 000000014018C40B: call    loc_14018C3FE
 * 000000014018C410: add     rsp, 8
 * 000000014018C414: call    loc_14018C407
 * 000000014018C419: add     rsp, 8
 * 000000014018C41D: call    loc_14018C410
 * 000000014018C422: add     rsp, 8
 * 000000014018C426: call    loc_14018C419
 * 000000014018C42B: add     rsp, 8
 * 000000014018C42F: call    loc_14018C422
 * 000000014018C434: add     rsp, 8
 * 000000014018C438: call    loc_14018C42B
 * 000000014018C43D: add     rsp, 8
 * 000000014018C441: call    loc_14018C434
 * 000000014018C446: add     rsp, 8
 * 000000014018C44A: call    loc_14018C43D
 * 000000014018C44F: add     rsp, 8
 * 000000014018C453: call    loc_14018C446
 * 000000014018C458: add     rsp, 8
 * 000000014018C45C: call    loc_14018C44F
 * 000000014018C461: add     rsp, 8
 * 000000014018C465: lfence
 * 000000014018C468: test    byte ptr [r10+3], 80h
 * 000000014018C46D: jz      short loc_14018C4B1
 * 000000014018C46F: mov     ecx, 0C0000102h
 * 000000014018C474: rdmsr
 * 000000014018C476: shl     rdx, 20h
 * 000000014018C47A: or      rax, rdx
 * 000000014018C47D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018C484: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018C48C: cmp     [r10+0F0h], rax
 * 000000014018C493: jz      short loc_14018C4B1
 * 000000014018C495: mov     rdx, [r10+1F0h]
 * 000000014018C49C: bts     dword ptr [r10+74h], 8
 * 000000014018C4A2: dec     word ptr [r10+1E6h]
 * 000000014018C4AA: mov     [rdx+80h], rax
 * 000000014018C4B1: test    byte ptr [r10+3], 3
 * 000000014018C4B6: mov     [rbp+0E8h+var_68], 0
 * 000000014018C4BF: jz      short loc_14018C4C6
 * 000000014018C4C1: call    KiSaveDebugRegisterState
 * 000000014018C4C6: cld
 * 000000014018C4C7: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018C4CB: ldmxcsr dword ptr gs:180h
 * 000000014018C4D4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018C4D8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018C4DC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018C4E0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018C4E4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018C4E8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018C4EC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018C4F6: jz      short loc_14018C4F9
 * 000000014018C4F8: sti
 * 000000014018C4F9: mov     ecx, 80000003h
 * 000000014018C4FE: mov     edx, 1
 * 000000014018C503: mov     r8, [rbp+0E8h]
 * 000000014018C50A: dec     r8
 * 000000014018C50D: mov     r9d, 0
 * 000000014018C513: call    KiExceptionDispatch
 * 000000014018C518: nop
 * 000000014018C519: retn
 */
