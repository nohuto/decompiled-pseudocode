/*
 * XREFs of KiStackFault @ 0x14018E2C0
 * Callers:
 *     KiStackFaultShadow @ 0x14026C700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14018E2C0 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14018E2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018E2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E2C0: push    rbp
 * 000000014018E2C1: sub     rsp, 158h
 * 000000014018E2C8: lea     rbp, [rsp+80h]
 * 000000014018E2D0: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E2D4: mov     [rbp+0D8h+var_128], rax
 * 000000014018E2D8: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E2DC: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E2E0: mov     [rbp+0D8h+var_110], r8
 * 000000014018E2E4: mov     [rbp+0D8h+var_108], r9
 * 000000014018E2E8: mov     [rbp+0D8h+var_100], r10
 * 000000014018E2EC: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E2F0: test    [rbp+0D8h+arg_8], 1
 * 000000014018E2F7: jnz     short loc_14018E326
 * 000000014018E2F9: lfence
 * 000000014018E2FC: test    byte ptr gs:278h, 1
 * 000000014018E305: jnz     short loc_14018E30F
 * 000000014018E307: lfence
 * 000000014018E30A: jmp     loc_14018E542
 * 000000014018E30F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E318: mov     ecx, 48h ; 'H'
 * 000000014018E31D: xor     edx, edx
 * 000000014018E31F: wrmsr
 * 000000014018E321: jmp     loc_14018E542
 * 000000014018E326: test    cs:KiKvaShadow, 1
 * 000000014018E32D: jnz     short loc_14018E332
 * 000000014018E32F: swapgs
 * 000000014018E332: lfence
 * 000000014018E335: mov     r10, gs:188h
 * 000000014018E33E: mov     rcx, gs:188h
 * 000000014018E347: mov     rcx, [rcx+220h]
 * 000000014018E34E: mov     rcx, [rcx+818h]
 * 000000014018E355: mov     gs:270h, rcx
 * 000000014018E35E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E367: cmp     gs:27Ah, al
 * 000000014018E36F: jz      short loc_14018E382
 * 000000014018E371: mov     gs:27Ah, al
 * 000000014018E379: mov     ecx, 48h ; 'H'
 * 000000014018E37E: xor     edx, edx
 * 000000014018E380: wrmsr
 * 000000014018E382: movzx   edx, byte ptr gs:278h
 * 000000014018E38B: test    edx, 8
 * 000000014018E391: jz      short loc_14018E3A6
 * 000000014018E393: mov     eax, 1
 * 000000014018E398: xor     edx, edx
 * 000000014018E39A: mov     ecx, 49h ; 'I'
 * 000000014018E39F: wrmsr
 * 000000014018E3A1: jmp     loc_14018E4E4
 * 000000014018E3A6: test    edx, 2
 * 000000014018E3AC: jz      loc_14018E4E1
 * 000000014018E3B2: test    byte ptr gs:279h, 4
 * 000000014018E3BB: jnz     loc_14018E4E1
 * 000000014018E3C1: call    loc_14018E4D4
 * 000000014018E3C6: add     rsp, 8
 * 000000014018E3CA: call    loc_14018E4DD
 * 000000014018E3CF: add     rsp, 8
 * 000000014018E3D3: call    loc_14018E3C6
 * 000000014018E3D8: add     rsp, 8
 * 000000014018E3DC: call    loc_14018E3CF
 * 000000014018E3E1: add     rsp, 8
 * 000000014018E3E5: call    loc_14018E3D8
 * 000000014018E3EA: add     rsp, 8
 * 000000014018E3EE: call    loc_14018E3E1
 * 000000014018E3F3: add     rsp, 8
 * 000000014018E3F7: call    loc_14018E3EA
 * 000000014018E3FC: add     rsp, 8
 * 000000014018E400: call    loc_14018E3F3
 * 000000014018E405: add     rsp, 8
 * 000000014018E409: call    loc_14018E3FC
 * 000000014018E40E: add     rsp, 8
 * 000000014018E412: call    loc_14018E405
 * 000000014018E417: add     rsp, 8
 * 000000014018E41B: call    loc_14018E40E
 * 000000014018E420: add     rsp, 8
 * 000000014018E424: call    loc_14018E417
 * 000000014018E429: add     rsp, 8
 * 000000014018E42D: call    loc_14018E420
 * 000000014018E432: add     rsp, 8
 * 000000014018E436: call    loc_14018E429
 * 000000014018E43B: add     rsp, 8
 * 000000014018E43F: call    loc_14018E432
 * 000000014018E444: add     rsp, 8
 * 000000014018E448: call    loc_14018E43B
 * 000000014018E44D: add     rsp, 8
 * 000000014018E451: call    loc_14018E444
 * 000000014018E456: add     rsp, 8
 * 000000014018E45A: call    loc_14018E44D
 * 000000014018E45F: add     rsp, 8
 * 000000014018E463: call    loc_14018E456
 * 000000014018E468: add     rsp, 8
 * 000000014018E46C: call    loc_14018E45F
 * 000000014018E471: add     rsp, 8
 * 000000014018E475: call    loc_14018E468
 * 000000014018E47A: add     rsp, 8
 * 000000014018E47E: call    loc_14018E471
 * 000000014018E483: add     rsp, 8
 * 000000014018E487: call    loc_14018E47A
 * 000000014018E48C: add     rsp, 8
 * 000000014018E490: call    loc_14018E483
 * 000000014018E495: add     rsp, 8
 * 000000014018E499: call    loc_14018E48C
 * 000000014018E49E: add     rsp, 8
 * 000000014018E4A2: call    loc_14018E495
 * 000000014018E4A7: add     rsp, 8
 * 000000014018E4AB: call    loc_14018E49E
 * 000000014018E4B0: add     rsp, 8
 * 000000014018E4B4: call    loc_14018E4A7
 * 000000014018E4B9: add     rsp, 8
 * 000000014018E4BD: call    loc_14018E4B0
 * 000000014018E4C2: add     rsp, 8
 * 000000014018E4C6: call    loc_14018E4B9
 * 000000014018E4CB: add     rsp, 8
 * 000000014018E4CF: call    loc_14018E4C2
 * 000000014018E4D4: add     rsp, 8
 * 000000014018E4D8: call    loc_14018E4CB
 * 000000014018E4DD: add     rsp, 8
 * 000000014018E4E1: lfence
 * 000000014018E4E4: test    byte ptr [r10+3], 80h
 * 000000014018E4E9: jz      short loc_14018E52D
 * 000000014018E4EB: mov     ecx, 0C0000102h
 * 000000014018E4F0: rdmsr
 * 000000014018E4F2: shl     rdx, 20h
 * 000000014018E4F6: or      rax, rdx
 * 000000014018E4F9: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E500: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E508: cmp     [r10+0F0h], rax
 * 000000014018E50F: jz      short loc_14018E52D
 * 000000014018E511: mov     rdx, [r10+1F0h]
 * 000000014018E518: bts     dword ptr [r10+74h], 8
 * 000000014018E51E: dec     word ptr [r10+1E6h]
 * 000000014018E526: mov     [rdx+80h], rax
 * 000000014018E52D: test    byte ptr [r10+3], 3
 * 000000014018E532: mov     [rbp+0D8h+var_58], 0
 * 000000014018E53B: jz      short loc_14018E542
 * 000000014018E53D: call    KiSaveDebugRegisterState
 * 000000014018E542: cld
 * 000000014018E543: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018E547: ldmxcsr dword ptr gs:180h
 * 000000014018E550: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018E554: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018E558: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018E55C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018E560: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018E564: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018E568: mov     eax, [rbp+0E0h]
 * 000000014018E56E: test    [rbp+0D8h+arg_10], 200h
 * 000000014018E578: jz      short loc_14018E57B
 * 000000014018E57A: sti
 * 000000014018E57B: mov     ecx, 0C0000005h
 * 000000014018E580: mov     edx, 2
 * 000000014018E585: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018E58C: mov     r9d, [rbp+0E0h]
 * 000000014018E593: or      r9d, 3
 * 000000014018E597: and     r9d, 0FFFFh
 * 000000014018E59E: test    [rbp+0D8h+arg_8], 1
 * 000000014018E5A5: jnz     short loc_14018E5AB
 * 000000014018E5A7: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014018E5AB: xor     r10, r10
 * 000000014018E5AE: call    KiExceptionDispatch
 * 000000014018E5B3: nop
 * 000000014018E5B4: retn
 */
