/*
 * XREFs of KiOverflowTrap @ 0x1401B6240
 * Callers:
 *     KiOverflowTrapShadow @ 0x1402CF300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1401B6240 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1401B6240
 * Reason: Hex-Rays returned no pseudocode for 0x1401B6240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B6240: sub     rsp, 8
 * 00000001401B6244: push    rbp
 * 00000001401B6245: sub     rsp, 158h
 * 00000001401B624C: lea     rbp, [rsp+80h]
 * 00000001401B6254: mov     [rbp+0E8h+var_13D], 1
 * 00000001401B6258: mov     [rbp+0E8h+var_138], rax
 * 00000001401B625C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B6260: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B6264: mov     [rbp+0E8h+var_120], r8
 * 00000001401B6268: mov     [rbp+0E8h+var_118], r9
 * 00000001401B626C: mov     [rbp+0E8h+var_110], r10
 * 00000001401B6270: mov     [rbp+0E8h+var_108], r11
 * 00000001401B6274: test    [rbp+0E8h+arg_0], 1
 * 00000001401B627B: jnz     short loc_1401B62AA
 * 00000001401B627D: lfence
 * 00000001401B6280: test    byte ptr gs:278h, 1
 * 00000001401B6289: jnz     short loc_1401B6293
 * 00000001401B628B: lfence
 * 00000001401B628E: jmp     loc_1401B64C6
 * 00000001401B6293: movzx   eax, byte ptr gs:27Ah
 * 00000001401B629C: mov     ecx, 48h ; 'H'
 * 00000001401B62A1: xor     edx, edx
 * 00000001401B62A3: wrmsr
 * 00000001401B62A5: jmp     loc_1401B64C6
 * 00000001401B62AA: test    cs:KiKvaShadow, 1
 * 00000001401B62B1: jnz     short loc_1401B62B6
 * 00000001401B62B3: swapgs
 * 00000001401B62B6: lfence
 * 00000001401B62B9: mov     r10, gs:188h
 * 00000001401B62C2: mov     rcx, gs:188h
 * 00000001401B62CB: mov     rcx, [rcx+220h]
 * 00000001401B62D2: mov     rcx, [rcx+838h]
 * 00000001401B62D9: mov     gs:270h, rcx
 * 00000001401B62E2: movzx   eax, byte ptr gs:27Bh
 * 00000001401B62EB: cmp     gs:27Ah, al
 * 00000001401B62F3: jz      short loc_1401B6306
 * 00000001401B62F5: mov     gs:27Ah, al
 * 00000001401B62FD: mov     ecx, 48h ; 'H'
 * 00000001401B6302: xor     edx, edx
 * 00000001401B6304: wrmsr
 * 00000001401B6306: movzx   edx, byte ptr gs:278h
 * 00000001401B630F: test    edx, 8
 * 00000001401B6315: jz      short loc_1401B632A
 * 00000001401B6317: mov     eax, 1
 * 00000001401B631C: xor     edx, edx
 * 00000001401B631E: mov     ecx, 49h ; 'I'
 * 00000001401B6323: wrmsr
 * 00000001401B6325: jmp     loc_1401B6468
 * 00000001401B632A: test    edx, 2
 * 00000001401B6330: jz      loc_1401B6465
 * 00000001401B6336: test    byte ptr gs:279h, 4
 * 00000001401B633F: jnz     loc_1401B6465
 * 00000001401B6345: call    loc_1401B6458
 * 00000001401B634A: add     rsp, 8
 * 00000001401B634E: call    loc_1401B6461
 * 00000001401B6353: add     rsp, 8
 * 00000001401B6357: call    loc_1401B634A
 * 00000001401B635C: add     rsp, 8
 * 00000001401B6360: call    loc_1401B6353
 * 00000001401B6365: add     rsp, 8
 * 00000001401B6369: call    loc_1401B635C
 * 00000001401B636E: add     rsp, 8
 * 00000001401B6372: call    loc_1401B6365
 * 00000001401B6377: add     rsp, 8
 * 00000001401B637B: call    loc_1401B636E
 * 00000001401B6380: add     rsp, 8
 * 00000001401B6384: call    loc_1401B6377
 * 00000001401B6389: add     rsp, 8
 * 00000001401B638D: call    loc_1401B6380
 * 00000001401B6392: add     rsp, 8
 * 00000001401B6396: call    loc_1401B6389
 * 00000001401B639B: add     rsp, 8
 * 00000001401B639F: call    loc_1401B6392
 * 00000001401B63A4: add     rsp, 8
 * 00000001401B63A8: call    loc_1401B639B
 * 00000001401B63AD: add     rsp, 8
 * 00000001401B63B1: call    loc_1401B63A4
 * 00000001401B63B6: add     rsp, 8
 * 00000001401B63BA: call    loc_1401B63AD
 * 00000001401B63BF: add     rsp, 8
 * 00000001401B63C3: call    loc_1401B63B6
 * 00000001401B63C8: add     rsp, 8
 * 00000001401B63CC: call    loc_1401B63BF
 * 00000001401B63D1: add     rsp, 8
 * 00000001401B63D5: call    loc_1401B63C8
 * 00000001401B63DA: add     rsp, 8
 * 00000001401B63DE: call    loc_1401B63D1
 * 00000001401B63E3: add     rsp, 8
 * 00000001401B63E7: call    loc_1401B63DA
 * 00000001401B63EC: add     rsp, 8
 * 00000001401B63F0: call    loc_1401B63E3
 * 00000001401B63F5: add     rsp, 8
 * 00000001401B63F9: call    loc_1401B63EC
 * 00000001401B63FE: add     rsp, 8
 * 00000001401B6402: call    loc_1401B63F5
 * 00000001401B6407: add     rsp, 8
 * 00000001401B640B: call    loc_1401B63FE
 * 00000001401B6410: add     rsp, 8
 * 00000001401B6414: call    loc_1401B6407
 * 00000001401B6419: add     rsp, 8
 * 00000001401B641D: call    loc_1401B6410
 * 00000001401B6422: add     rsp, 8
 * 00000001401B6426: call    loc_1401B6419
 * 00000001401B642B: add     rsp, 8
 * 00000001401B642F: call    loc_1401B6422
 * 00000001401B6434: add     rsp, 8
 * 00000001401B6438: call    loc_1401B642B
 * 00000001401B643D: add     rsp, 8
 * 00000001401B6441: call    loc_1401B6434
 * 00000001401B6446: add     rsp, 8
 * 00000001401B644A: call    loc_1401B643D
 * 00000001401B644F: add     rsp, 8
 * 00000001401B6453: call    loc_1401B6446
 * 00000001401B6458: add     rsp, 8
 * 00000001401B645C: call    loc_1401B644F
 * 00000001401B6461: add     rsp, 8
 * 00000001401B6465: lfence
 * 00000001401B6468: test    byte ptr [r10+3], 80h
 * 00000001401B646D: jz      short loc_1401B64B1
 * 00000001401B646F: mov     ecx, 0C0000102h
 * 00000001401B6474: rdmsr
 * 00000001401B6476: shl     rdx, 20h
 * 00000001401B647A: or      rax, rdx
 * 00000001401B647D: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B6484: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B648C: cmp     [r10+0F0h], rax
 * 00000001401B6493: jz      short loc_1401B64B1
 * 00000001401B6495: mov     rdx, [r10+1F0h]
 * 00000001401B649C: bts     dword ptr [r10+74h], 8
 * 00000001401B64A2: dec     word ptr [r10+1E6h]
 * 00000001401B64AA: mov     [rdx+80h], rax
 * 00000001401B64B1: test    byte ptr [r10+3], 3
 * 00000001401B64B6: mov     [rbp+0E8h+var_68], 0
 * 00000001401B64BF: jz      short loc_1401B64C6
 * 00000001401B64C1: call    KiSaveDebugRegisterState
 * 00000001401B64C6: cld
 * 00000001401B64C7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B64CB: ldmxcsr dword ptr gs:180h
 * 00000001401B64D4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B64D8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B64DC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B64E0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B64E4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B64E8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B64EC: test    [rbp+0E8h+arg_8], 200h
 * 00000001401B64F6: jz      short loc_1401B64F9
 * 00000001401B64F8: sti
 * 00000001401B64F9: mov     ecx, 0C0000095h
 * 00000001401B64FE: xor     edx, edx
 * 00000001401B6500: mov     r8, [rbp+0E8h]
 * 00000001401B6507: dec     r8
 * 00000001401B650A: call    KiExceptionDispatch
 * 00000001401B650F: nop
 * 00000001401B6510: retn
 */
