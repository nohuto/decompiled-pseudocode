/*
 * XREFs of KiOverflowTrap @ 0x14018C540
 * Callers:
 *     KiOverflowTrapShadow @ 0x140297300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14018C540 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14018C540
 * Reason: Hex-Rays returned no pseudocode for 0x14018C540
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018C540: sub     rsp, 8
 * 000000014018C544: push    rbp
 * 000000014018C545: sub     rsp, 158h
 * 000000014018C54C: lea     rbp, [rsp+80h]
 * 000000014018C554: mov     [rbp+0E8h+var_13D], 1
 * 000000014018C558: mov     [rbp+0E8h+var_138], rax
 * 000000014018C55C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018C560: mov     [rbp+0E8h+var_128], rdx
 * 000000014018C564: mov     [rbp+0E8h+var_120], r8
 * 000000014018C568: mov     [rbp+0E8h+var_118], r9
 * 000000014018C56C: mov     [rbp+0E8h+var_110], r10
 * 000000014018C570: mov     [rbp+0E8h+var_108], r11
 * 000000014018C574: test    [rbp+0E8h+arg_0], 1
 * 000000014018C57B: jnz     short loc_14018C5AA
 * 000000014018C57D: lfence
 * 000000014018C580: test    byte ptr gs:278h, 1
 * 000000014018C589: jnz     short loc_14018C593
 * 000000014018C58B: lfence
 * 000000014018C58E: jmp     loc_14018C7C6
 * 000000014018C593: movzx   eax, byte ptr gs:27Ah
 * 000000014018C59C: mov     ecx, 48h ; 'H'
 * 000000014018C5A1: xor     edx, edx
 * 000000014018C5A3: wrmsr
 * 000000014018C5A5: jmp     loc_14018C7C6
 * 000000014018C5AA: test    cs:KiKvaShadow, 1
 * 000000014018C5B1: jnz     short loc_14018C5B6
 * 000000014018C5B3: swapgs
 * 000000014018C5B6: lfence
 * 000000014018C5B9: mov     r10, gs:188h
 * 000000014018C5C2: mov     rcx, gs:188h
 * 000000014018C5CB: mov     rcx, [rcx+220h]
 * 000000014018C5D2: mov     rcx, [rcx+838h]
 * 000000014018C5D9: mov     gs:270h, rcx
 * 000000014018C5E2: movzx   eax, byte ptr gs:27Bh
 * 000000014018C5EB: cmp     gs:27Ah, al
 * 000000014018C5F3: jz      short loc_14018C606
 * 000000014018C5F5: mov     gs:27Ah, al
 * 000000014018C5FD: mov     ecx, 48h ; 'H'
 * 000000014018C602: xor     edx, edx
 * 000000014018C604: wrmsr
 * 000000014018C606: movzx   edx, byte ptr gs:278h
 * 000000014018C60F: test    edx, 8
 * 000000014018C615: jz      short loc_14018C62A
 * 000000014018C617: mov     eax, 1
 * 000000014018C61C: xor     edx, edx
 * 000000014018C61E: mov     ecx, 49h ; 'I'
 * 000000014018C623: wrmsr
 * 000000014018C625: jmp     loc_14018C768
 * 000000014018C62A: test    edx, 2
 * 000000014018C630: jz      loc_14018C765
 * 000000014018C636: test    byte ptr gs:279h, 4
 * 000000014018C63F: jnz     loc_14018C765
 * 000000014018C645: call    loc_14018C758
 * 000000014018C64A: add     rsp, 8
 * 000000014018C64E: call    loc_14018C761
 * 000000014018C653: add     rsp, 8
 * 000000014018C657: call    loc_14018C64A
 * 000000014018C65C: add     rsp, 8
 * 000000014018C660: call    loc_14018C653
 * 000000014018C665: add     rsp, 8
 * 000000014018C669: call    loc_14018C65C
 * 000000014018C66E: add     rsp, 8
 * 000000014018C672: call    loc_14018C665
 * 000000014018C677: add     rsp, 8
 * 000000014018C67B: call    loc_14018C66E
 * 000000014018C680: add     rsp, 8
 * 000000014018C684: call    loc_14018C677
 * 000000014018C689: add     rsp, 8
 * 000000014018C68D: call    loc_14018C680
 * 000000014018C692: add     rsp, 8
 * 000000014018C696: call    loc_14018C689
 * 000000014018C69B: add     rsp, 8
 * 000000014018C69F: call    loc_14018C692
 * 000000014018C6A4: add     rsp, 8
 * 000000014018C6A8: call    loc_14018C69B
 * 000000014018C6AD: add     rsp, 8
 * 000000014018C6B1: call    loc_14018C6A4
 * 000000014018C6B6: add     rsp, 8
 * 000000014018C6BA: call    loc_14018C6AD
 * 000000014018C6BF: add     rsp, 8
 * 000000014018C6C3: call    loc_14018C6B6
 * 000000014018C6C8: add     rsp, 8
 * 000000014018C6CC: call    loc_14018C6BF
 * 000000014018C6D1: add     rsp, 8
 * 000000014018C6D5: call    loc_14018C6C8
 * 000000014018C6DA: add     rsp, 8
 * 000000014018C6DE: call    loc_14018C6D1
 * 000000014018C6E3: add     rsp, 8
 * 000000014018C6E7: call    loc_14018C6DA
 * 000000014018C6EC: add     rsp, 8
 * 000000014018C6F0: call    loc_14018C6E3
 * 000000014018C6F5: add     rsp, 8
 * 000000014018C6F9: call    loc_14018C6EC
 * 000000014018C6FE: add     rsp, 8
 * 000000014018C702: call    loc_14018C6F5
 * 000000014018C707: add     rsp, 8
 * 000000014018C70B: call    loc_14018C6FE
 * 000000014018C710: add     rsp, 8
 * 000000014018C714: call    loc_14018C707
 * 000000014018C719: add     rsp, 8
 * 000000014018C71D: call    loc_14018C710
 * 000000014018C722: add     rsp, 8
 * 000000014018C726: call    loc_14018C719
 * 000000014018C72B: add     rsp, 8
 * 000000014018C72F: call    loc_14018C722
 * 000000014018C734: add     rsp, 8
 * 000000014018C738: call    loc_14018C72B
 * 000000014018C73D: add     rsp, 8
 * 000000014018C741: call    loc_14018C734
 * 000000014018C746: add     rsp, 8
 * 000000014018C74A: call    loc_14018C73D
 * 000000014018C74F: add     rsp, 8
 * 000000014018C753: call    loc_14018C746
 * 000000014018C758: add     rsp, 8
 * 000000014018C75C: call    loc_14018C74F
 * 000000014018C761: add     rsp, 8
 * 000000014018C765: lfence
 * 000000014018C768: test    byte ptr [r10+3], 80h
 * 000000014018C76D: jz      short loc_14018C7B1
 * 000000014018C76F: mov     ecx, 0C0000102h
 * 000000014018C774: rdmsr
 * 000000014018C776: shl     rdx, 20h
 * 000000014018C77A: or      rax, rdx
 * 000000014018C77D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018C784: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018C78C: cmp     [r10+0F0h], rax
 * 000000014018C793: jz      short loc_14018C7B1
 * 000000014018C795: mov     rdx, [r10+1F0h]
 * 000000014018C79C: bts     dword ptr [r10+74h], 8
 * 000000014018C7A2: dec     word ptr [r10+1E6h]
 * 000000014018C7AA: mov     [rdx+80h], rax
 * 000000014018C7B1: test    byte ptr [r10+3], 3
 * 000000014018C7B6: mov     [rbp+0E8h+var_68], 0
 * 000000014018C7BF: jz      short loc_14018C7C6
 * 000000014018C7C1: call    KiSaveDebugRegisterState
 * 000000014018C7C6: cld
 * 000000014018C7C7: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018C7CB: ldmxcsr dword ptr gs:180h
 * 000000014018C7D4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018C7D8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018C7DC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018C7E0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018C7E4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018C7E8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018C7EC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018C7F6: jz      short loc_14018C7F9
 * 000000014018C7F8: sti
 * 000000014018C7F9: mov     ecx, 0C0000095h
 * 000000014018C7FE: xor     edx, edx
 * 000000014018C800: mov     r8, [rbp+0E8h]
 * 000000014018C807: dec     r8
 * 000000014018C80A: call    KiExceptionDispatch
 * 000000014018C80F: nop
 * 000000014018C810: retn
 */
