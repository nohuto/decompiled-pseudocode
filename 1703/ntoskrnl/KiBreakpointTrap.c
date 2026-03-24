/*
 * XREFs of KiBreakpointTrap @ 0x14018C500
 * Callers:
 *     KiBreakpointTrapShadow @ 0x14026C280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14018C500 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14018C500
 * Reason: Hex-Rays returned no pseudocode for 0x14018C500
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018C500: sub     rsp, 8
 * 000000014018C504: push    rbp
 * 000000014018C505: sub     rsp, 158h
 * 000000014018C50C: lea     rbp, [rsp+80h]
 * 000000014018C514: mov     [rbp+0E8h+var_13D], 1
 * 000000014018C518: mov     [rbp+0E8h+var_138], rax
 * 000000014018C51C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018C520: mov     [rbp+0E8h+var_128], rdx
 * 000000014018C524: mov     [rbp+0E8h+var_120], r8
 * 000000014018C528: mov     [rbp+0E8h+var_118], r9
 * 000000014018C52C: mov     [rbp+0E8h+var_110], r10
 * 000000014018C530: mov     [rbp+0E8h+var_108], r11
 * 000000014018C534: test    [rbp+0E8h+arg_0], 1
 * 000000014018C53B: jnz     short loc_14018C56A
 * 000000014018C53D: lfence
 * 000000014018C540: test    byte ptr gs:278h, 1
 * 000000014018C549: jnz     short loc_14018C553
 * 000000014018C54B: lfence
 * 000000014018C54E: jmp     loc_14018C786
 * 000000014018C553: movzx   eax, byte ptr gs:27Ah
 * 000000014018C55C: mov     ecx, 48h ; 'H'
 * 000000014018C561: xor     edx, edx
 * 000000014018C563: wrmsr
 * 000000014018C565: jmp     loc_14018C786
 * 000000014018C56A: test    cs:KiKvaShadow, 1
 * 000000014018C571: jnz     short loc_14018C576
 * 000000014018C573: swapgs
 * 000000014018C576: lfence
 * 000000014018C579: mov     r10, gs:188h
 * 000000014018C582: mov     rcx, gs:188h
 * 000000014018C58B: mov     rcx, [rcx+220h]
 * 000000014018C592: mov     rcx, [rcx+818h]
 * 000000014018C599: mov     gs:270h, rcx
 * 000000014018C5A2: movzx   eax, byte ptr gs:27Bh
 * 000000014018C5AB: cmp     gs:27Ah, al
 * 000000014018C5B3: jz      short loc_14018C5C6
 * 000000014018C5B5: mov     gs:27Ah, al
 * 000000014018C5BD: mov     ecx, 48h ; 'H'
 * 000000014018C5C2: xor     edx, edx
 * 000000014018C5C4: wrmsr
 * 000000014018C5C6: movzx   edx, byte ptr gs:278h
 * 000000014018C5CF: test    edx, 8
 * 000000014018C5D5: jz      short loc_14018C5EA
 * 000000014018C5D7: mov     eax, 1
 * 000000014018C5DC: xor     edx, edx
 * 000000014018C5DE: mov     ecx, 49h ; 'I'
 * 000000014018C5E3: wrmsr
 * 000000014018C5E5: jmp     loc_14018C728
 * 000000014018C5EA: test    edx, 2
 * 000000014018C5F0: jz      loc_14018C725
 * 000000014018C5F6: test    byte ptr gs:279h, 4
 * 000000014018C5FF: jnz     loc_14018C725
 * 000000014018C605: call    loc_14018C718
 * 000000014018C60A: add     rsp, 8
 * 000000014018C60E: call    loc_14018C721
 * 000000014018C613: add     rsp, 8
 * 000000014018C617: call    loc_14018C60A
 * 000000014018C61C: add     rsp, 8
 * 000000014018C620: call    loc_14018C613
 * 000000014018C625: add     rsp, 8
 * 000000014018C629: call    loc_14018C61C
 * 000000014018C62E: add     rsp, 8
 * 000000014018C632: call    loc_14018C625
 * 000000014018C637: add     rsp, 8
 * 000000014018C63B: call    loc_14018C62E
 * 000000014018C640: add     rsp, 8
 * 000000014018C644: call    loc_14018C637
 * 000000014018C649: add     rsp, 8
 * 000000014018C64D: call    loc_14018C640
 * 000000014018C652: add     rsp, 8
 * 000000014018C656: call    loc_14018C649
 * 000000014018C65B: add     rsp, 8
 * 000000014018C65F: call    loc_14018C652
 * 000000014018C664: add     rsp, 8
 * 000000014018C668: call    loc_14018C65B
 * 000000014018C66D: add     rsp, 8
 * 000000014018C671: call    loc_14018C664
 * 000000014018C676: add     rsp, 8
 * 000000014018C67A: call    loc_14018C66D
 * 000000014018C67F: add     rsp, 8
 * 000000014018C683: call    loc_14018C676
 * 000000014018C688: add     rsp, 8
 * 000000014018C68C: call    loc_14018C67F
 * 000000014018C691: add     rsp, 8
 * 000000014018C695: call    loc_14018C688
 * 000000014018C69A: add     rsp, 8
 * 000000014018C69E: call    loc_14018C691
 * 000000014018C6A3: add     rsp, 8
 * 000000014018C6A7: call    loc_14018C69A
 * 000000014018C6AC: add     rsp, 8
 * 000000014018C6B0: call    loc_14018C6A3
 * 000000014018C6B5: add     rsp, 8
 * 000000014018C6B9: call    loc_14018C6AC
 * 000000014018C6BE: add     rsp, 8
 * 000000014018C6C2: call    loc_14018C6B5
 * 000000014018C6C7: add     rsp, 8
 * 000000014018C6CB: call    loc_14018C6BE
 * 000000014018C6D0: add     rsp, 8
 * 000000014018C6D4: call    loc_14018C6C7
 * 000000014018C6D9: add     rsp, 8
 * 000000014018C6DD: call    loc_14018C6D0
 * 000000014018C6E2: add     rsp, 8
 * 000000014018C6E6: call    loc_14018C6D9
 * 000000014018C6EB: add     rsp, 8
 * 000000014018C6EF: call    loc_14018C6E2
 * 000000014018C6F4: add     rsp, 8
 * 000000014018C6F8: call    loc_14018C6EB
 * 000000014018C6FD: add     rsp, 8
 * 000000014018C701: call    loc_14018C6F4
 * 000000014018C706: add     rsp, 8
 * 000000014018C70A: call    loc_14018C6FD
 * 000000014018C70F: add     rsp, 8
 * 000000014018C713: call    loc_14018C706
 * 000000014018C718: add     rsp, 8
 * 000000014018C71C: call    loc_14018C70F
 * 000000014018C721: add     rsp, 8
 * 000000014018C725: lfence
 * 000000014018C728: test    byte ptr [r10+3], 80h
 * 000000014018C72D: jz      short loc_14018C771
 * 000000014018C72F: mov     ecx, 0C0000102h
 * 000000014018C734: rdmsr
 * 000000014018C736: shl     rdx, 20h
 * 000000014018C73A: or      rax, rdx
 * 000000014018C73D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018C744: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018C74C: cmp     [r10+0F0h], rax
 * 000000014018C753: jz      short loc_14018C771
 * 000000014018C755: mov     rdx, [r10+1F0h]
 * 000000014018C75C: bts     dword ptr [r10+74h], 8
 * 000000014018C762: dec     word ptr [r10+1E6h]
 * 000000014018C76A: mov     [rdx+80h], rax
 * 000000014018C771: test    byte ptr [r10+3], 3
 * 000000014018C776: mov     [rbp+0E8h+var_68], 0
 * 000000014018C77F: jz      short loc_14018C786
 * 000000014018C781: call    KiSaveDebugRegisterState
 * 000000014018C786: cld
 * 000000014018C787: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018C78B: ldmxcsr dword ptr gs:180h
 * 000000014018C794: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018C798: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018C79C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018C7A0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018C7A4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018C7A8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018C7AC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018C7B6: jz      short loc_14018C7B9
 * 000000014018C7B8: sti
 * 000000014018C7B9: mov     ecx, 80000003h
 * 000000014018C7BE: mov     edx, 1
 * 000000014018C7C3: mov     r8, [rbp+0E8h]
 * 000000014018C7CA: dec     r8
 * 000000014018C7CD: mov     r9d, 0
 * 000000014018C7D3: call    KiExceptionDispatch
 * 000000014018C7D8: nop
 * 000000014018C7D9: retn
 */
