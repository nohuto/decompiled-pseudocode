/*
 * XREFs of KiGeneralProtectionFault @ 0x14018E300
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140297780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14018E300 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14018E300
 * Reason: Hex-Rays returned no pseudocode for 0x14018E300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E300: push    rbp
 * 000000014018E301: sub     rsp, 158h
 * 000000014018E308: lea     rbp, [rsp+80h]
 * 000000014018E310: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E314: mov     [rbp+0D8h+var_128], rax
 * 000000014018E318: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E31C: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E320: mov     [rbp+0D8h+var_110], r8
 * 000000014018E324: mov     [rbp+0D8h+var_108], r9
 * 000000014018E328: mov     [rbp+0D8h+var_100], r10
 * 000000014018E32C: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E330: test    [rbp+0D8h+arg_8], 1
 * 000000014018E337: jnz     short loc_14018E366
 * 000000014018E339: lfence
 * 000000014018E33C: test    byte ptr gs:278h, 1
 * 000000014018E345: jnz     short loc_14018E34F
 * 000000014018E347: lfence
 * 000000014018E34A: jmp     loc_14018E582
 * 000000014018E34F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E358: mov     ecx, 48h ; 'H'
 * 000000014018E35D: xor     edx, edx
 * 000000014018E35F: wrmsr
 * 000000014018E361: jmp     loc_14018E582
 * 000000014018E366: test    cs:KiKvaShadow, 1
 * 000000014018E36D: jnz     short loc_14018E372
 * 000000014018E36F: swapgs
 * 000000014018E372: lfence
 * 000000014018E375: mov     r10, gs:188h
 * 000000014018E37E: mov     rcx, gs:188h
 * 000000014018E387: mov     rcx, [rcx+220h]
 * 000000014018E38E: mov     rcx, [rcx+838h]
 * 000000014018E395: mov     gs:270h, rcx
 * 000000014018E39E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E3A7: cmp     gs:27Ah, al
 * 000000014018E3AF: jz      short loc_14018E3C2
 * 000000014018E3B1: mov     gs:27Ah, al
 * 000000014018E3B9: mov     ecx, 48h ; 'H'
 * 000000014018E3BE: xor     edx, edx
 * 000000014018E3C0: wrmsr
 * 000000014018E3C2: movzx   edx, byte ptr gs:278h
 * 000000014018E3CB: test    edx, 8
 * 000000014018E3D1: jz      short loc_14018E3E6
 * 000000014018E3D3: mov     eax, 1
 * 000000014018E3D8: xor     edx, edx
 * 000000014018E3DA: mov     ecx, 49h ; 'I'
 * 000000014018E3DF: wrmsr
 * 000000014018E3E1: jmp     loc_14018E524
 * 000000014018E3E6: test    edx, 2
 * 000000014018E3EC: jz      loc_14018E521
 * 000000014018E3F2: test    byte ptr gs:279h, 4
 * 000000014018E3FB: jnz     loc_14018E521
 * 000000014018E401: call    loc_14018E514
 * 000000014018E406: add     rsp, 8
 * 000000014018E40A: call    loc_14018E51D
 * 000000014018E40F: add     rsp, 8
 * 000000014018E413: call    loc_14018E406
 * 000000014018E418: add     rsp, 8
 * 000000014018E41C: call    loc_14018E40F
 * 000000014018E421: add     rsp, 8
 * 000000014018E425: call    loc_14018E418
 * 000000014018E42A: add     rsp, 8
 * 000000014018E42E: call    loc_14018E421
 * 000000014018E433: add     rsp, 8
 * 000000014018E437: call    loc_14018E42A
 * 000000014018E43C: add     rsp, 8
 * 000000014018E440: call    loc_14018E433
 * 000000014018E445: add     rsp, 8
 * 000000014018E449: call    loc_14018E43C
 * 000000014018E44E: add     rsp, 8
 * 000000014018E452: call    loc_14018E445
 * 000000014018E457: add     rsp, 8
 * 000000014018E45B: call    loc_14018E44E
 * 000000014018E460: add     rsp, 8
 * 000000014018E464: call    loc_14018E457
 * 000000014018E469: add     rsp, 8
 * 000000014018E46D: call    loc_14018E460
 * 000000014018E472: add     rsp, 8
 * 000000014018E476: call    loc_14018E469
 * 000000014018E47B: add     rsp, 8
 * 000000014018E47F: call    loc_14018E472
 * 000000014018E484: add     rsp, 8
 * 000000014018E488: call    loc_14018E47B
 * 000000014018E48D: add     rsp, 8
 * 000000014018E491: call    loc_14018E484
 * 000000014018E496: add     rsp, 8
 * 000000014018E49A: call    loc_14018E48D
 * 000000014018E49F: add     rsp, 8
 * 000000014018E4A3: call    loc_14018E496
 * 000000014018E4A8: add     rsp, 8
 * 000000014018E4AC: call    loc_14018E49F
 * 000000014018E4B1: add     rsp, 8
 * 000000014018E4B5: call    loc_14018E4A8
 * 000000014018E4BA: add     rsp, 8
 * 000000014018E4BE: call    loc_14018E4B1
 * 000000014018E4C3: add     rsp, 8
 * 000000014018E4C7: call    loc_14018E4BA
 * 000000014018E4CC: add     rsp, 8
 * 000000014018E4D0: call    loc_14018E4C3
 * 000000014018E4D5: add     rsp, 8
 * 000000014018E4D9: call    loc_14018E4CC
 * 000000014018E4DE: add     rsp, 8
 * 000000014018E4E2: call    loc_14018E4D5
 * 000000014018E4E7: add     rsp, 8
 * 000000014018E4EB: call    loc_14018E4DE
 * 000000014018E4F0: add     rsp, 8
 * 000000014018E4F4: call    loc_14018E4E7
 * 000000014018E4F9: add     rsp, 8
 * 000000014018E4FD: call    loc_14018E4F0
 * 000000014018E502: add     rsp, 8
 * 000000014018E506: call    loc_14018E4F9
 * 000000014018E50B: add     rsp, 8
 * 000000014018E50F: call    loc_14018E502
 * 000000014018E514: add     rsp, 8
 * 000000014018E518: call    loc_14018E50B
 * 000000014018E51D: add     rsp, 8
 * 000000014018E521: lfence
 * 000000014018E524: test    byte ptr [r10+3], 80h
 * 000000014018E529: jz      short loc_14018E56D
 * 000000014018E52B: mov     ecx, 0C0000102h
 * 000000014018E530: rdmsr
 * 000000014018E532: shl     rdx, 20h
 * 000000014018E536: or      rax, rdx
 * 000000014018E539: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E540: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E548: cmp     [r10+0F0h], rax
 * 000000014018E54F: jz      short loc_14018E56D
 * 000000014018E551: mov     rdx, [r10+1F0h]
 * 000000014018E558: bts     dword ptr [r10+74h], 8
 * 000000014018E55E: dec     word ptr [r10+1E6h]
 * 000000014018E566: mov     [rdx+80h], rax
 * 000000014018E56D: test    byte ptr [r10+3], 3
 * 000000014018E572: mov     [rbp+0D8h+var_58], 0
 * 000000014018E57B: jz      short loc_14018E582
 * 000000014018E57D: call    KiSaveDebugRegisterState
 * 000000014018E582: cld
 * 000000014018E583: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018E587: ldmxcsr dword ptr gs:180h
 * 000000014018E590: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018E594: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018E598: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018E59C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018E5A0: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018E5A4: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018E5A8: mov     eax, [rbp+0E0h]
 * 000000014018E5AE: test    [rbp+0D8h+arg_10], 200h
 * 000000014018E5B8: jz      short loc_14018E5BB
 * 000000014018E5BA: sti
 * 000000014018E5BB: mov     ecx, 10000001h
 * 000000014018E5C0: mov     edx, 2
 * 000000014018E5C5: mov     r9d, [rbp+0E0h]
 * 000000014018E5CC: and     r9d, 0FFFFh
 * 000000014018E5D3: xor     r10, r10
 * 000000014018E5D6: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018E5DD: call    KiExceptionDispatch
 * 000000014018E5E2: nop
 * 000000014018E5E3: retn
 */
