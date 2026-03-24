/*
 * XREFs of KiSystemCall32 @ 0x1401BAC80
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1401BAC80 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1401BAC80
 * Reason: Hex-Rays returned no pseudocode for 0x1401BAC80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BAC80: swapgs
 * 00000001401BAC83: mov     gs:10h, rsp
 * 00000001401BAC8C: mov     rsp, gs:1A8h
 * 00000001401BAC95: push    2Bh ; '+'
 * 00000001401BAC97: push    qword ptr gs:10h
 * 00000001401BAC9F: push    r11
 * 00000001401BACA1: push    23h ; '#'
 * 00000001401BACA3: push    rcx
 * 00000001401BACA4: swapgs
 * 00000001401BACA7: lfence
 * 00000001401BACAA: sub     rsp, 8
 * 00000001401BACAE: push    rbp
 * 00000001401BACAF: sub     rsp, 158h
 * 00000001401BACB6: lea     rbp, [rsp+190h+var_110]
 * 00000001401BACBE: mov     byte ptr [rbp-55h], 1
 * 00000001401BACC2: mov     [rbp-50h], rax
 * 00000001401BACC6: mov     [rbp-48h], rcx
 * 00000001401BACCA: mov     [rbp-40h], rdx
 * 00000001401BACCE: mov     [rbp-38h], r8
 * 00000001401BACD2: mov     [rbp-30h], r9
 * 00000001401BACD6: mov     [rbp-28h], r10
 * 00000001401BACDA: mov     [rbp-20h], r11
 * 00000001401BACDE: test    byte ptr [rbp+0F0h], 1
 * 00000001401BACE5: jnz     short loc_1401BAD14
 * 00000001401BACE7: lfence
 * 00000001401BACEA: test    byte ptr gs:278h, 1
 * 00000001401BACF3: jnz     short loc_1401BACFD
 * 00000001401BACF5: lfence
 * 00000001401BACF8: jmp     loc_1401BAF30
 * 00000001401BACFD: movzx   eax, byte ptr gs:27Ah
 * 00000001401BAD06: mov     ecx, 48h ; 'H'
 * 00000001401BAD0B: xor     edx, edx
 * 00000001401BAD0D: wrmsr
 * 00000001401BAD0F: jmp     loc_1401BAF30
 * 00000001401BAD14: test    cs:KiKvaShadow, 1
 * 00000001401BAD1B: jnz     short loc_1401BAD20
 * 00000001401BAD1D: swapgs
 * 00000001401BAD20: lfence
 * 00000001401BAD23: mov     r10, gs:188h
 * 00000001401BAD2C: mov     rcx, gs:188h
 * 00000001401BAD35: mov     rcx, [rcx+220h]
 * 00000001401BAD3C: mov     rcx, [rcx+838h]
 * 00000001401BAD43: mov     gs:270h, rcx
 * 00000001401BAD4C: movzx   eax, byte ptr gs:27Bh
 * 00000001401BAD55: cmp     gs:27Ah, al
 * 00000001401BAD5D: jz      short loc_1401BAD70
 * 00000001401BAD5F: mov     gs:27Ah, al
 * 00000001401BAD67: mov     ecx, 48h ; 'H'
 * 00000001401BAD6C: xor     edx, edx
 * 00000001401BAD6E: wrmsr
 * 00000001401BAD70: movzx   edx, byte ptr gs:278h
 * 00000001401BAD79: test    edx, 8
 * 00000001401BAD7F: jz      short loc_1401BAD94
 * 00000001401BAD81: mov     eax, 1
 * 00000001401BAD86: xor     edx, edx
 * 00000001401BAD88: mov     ecx, 49h ; 'I'
 * 00000001401BAD8D: wrmsr
 * 00000001401BAD8F: jmp     loc_1401BAED2
 * 00000001401BAD94: test    edx, 2
 * 00000001401BAD9A: jz      loc_1401BAECF
 * 00000001401BADA0: test    byte ptr gs:279h, 4
 * 00000001401BADA9: jnz     loc_1401BAECF
 * 00000001401BADAF: call    loc_1401BAEC2
 * 00000001401BADB4: add     rsp, 8
 * 00000001401BADB8: call    loc_1401BAECB
 * 00000001401BADBD: add     rsp, 8
 * 00000001401BADC1: call    loc_1401BADB4
 * 00000001401BADC6: add     rsp, 8
 * 00000001401BADCA: call    loc_1401BADBD
 * 00000001401BADCF: add     rsp, 8
 * 00000001401BADD3: call    loc_1401BADC6
 * 00000001401BADD8: add     rsp, 8
 * 00000001401BADDC: call    loc_1401BADCF
 * 00000001401BADE1: add     rsp, 8
 * 00000001401BADE5: call    loc_1401BADD8
 * 00000001401BADEA: add     rsp, 8
 * 00000001401BADEE: call    loc_1401BADE1
 * 00000001401BADF3: add     rsp, 8
 * 00000001401BADF7: call    loc_1401BADEA
 * 00000001401BADFC: add     rsp, 8
 * 00000001401BAE00: call    loc_1401BADF3
 * 00000001401BAE05: add     rsp, 8
 * 00000001401BAE09: call    loc_1401BADFC
 * 00000001401BAE0E: add     rsp, 8
 * 00000001401BAE12: call    loc_1401BAE05
 * 00000001401BAE17: add     rsp, 8
 * 00000001401BAE1B: call    loc_1401BAE0E
 * 00000001401BAE20: add     rsp, 8
 * 00000001401BAE24: call    loc_1401BAE17
 * 00000001401BAE29: add     rsp, 8
 * 00000001401BAE2D: call    loc_1401BAE20
 * 00000001401BAE32: add     rsp, 8
 * 00000001401BAE36: call    loc_1401BAE29
 * 00000001401BAE3B: add     rsp, 8
 * 00000001401BAE3F: call    loc_1401BAE32
 * 00000001401BAE44: add     rsp, 8
 * 00000001401BAE48: call    loc_1401BAE3B
 * 00000001401BAE4D: add     rsp, 8
 * 00000001401BAE51: call    loc_1401BAE44
 * 00000001401BAE56: add     rsp, 8
 * 00000001401BAE5A: call    loc_1401BAE4D
 * 00000001401BAE5F: add     rsp, 8
 * 00000001401BAE63: call    loc_1401BAE56
 * 00000001401BAE68: add     rsp, 8
 * 00000001401BAE6C: call    loc_1401BAE5F
 * 00000001401BAE71: add     rsp, 8
 * 00000001401BAE75: call    loc_1401BAE68
 * 00000001401BAE7A: add     rsp, 8
 * 00000001401BAE7E: call    loc_1401BAE71
 * 00000001401BAE83: add     rsp, 8
 * 00000001401BAE87: call    loc_1401BAE7A
 * 00000001401BAE8C: add     rsp, 8
 * 00000001401BAE90: call    loc_1401BAE83
 * 00000001401BAE95: add     rsp, 8
 * 00000001401BAE99: call    loc_1401BAE8C
 * 00000001401BAE9E: add     rsp, 8
 * 00000001401BAEA2: call    loc_1401BAE95
 * 00000001401BAEA7: add     rsp, 8
 * 00000001401BAEAB: call    loc_1401BAE9E
 * 00000001401BAEB0: add     rsp, 8
 * 00000001401BAEB4: call    loc_1401BAEA7
 * 00000001401BAEB9: add     rsp, 8
 * 00000001401BAEBD: call    loc_1401BAEB0
 * 00000001401BAEC2: add     rsp, 8
 * 00000001401BAEC6: call    loc_1401BAEB9
 * 00000001401BAECB: add     rsp, 8
 * 00000001401BAECF: lfence
 * 00000001401BAED2: test    byte ptr [r10+3], 80h
 * 00000001401BAED7: jz      short loc_1401BAF1B
 * 00000001401BAED9: mov     ecx, 0C0000102h
 * 00000001401BAEDE: rdmsr
 * 00000001401BAEE0: shl     rdx, 20h
 * 00000001401BAEE4: or      rax, rdx
 * 00000001401BAEE7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401BAEEE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401BAEF6: cmp     [r10+0F0h], rax
 * 00000001401BAEFD: jz      short loc_1401BAF1B
 * 00000001401BAEFF: mov     rdx, [r10+1F0h]
 * 00000001401BAF06: bts     dword ptr [r10+74h], 8
 * 00000001401BAF0C: dec     word ptr [r10+1E6h]
 * 00000001401BAF14: mov     [rdx+80h], rax
 * 00000001401BAF1B: test    byte ptr [r10+3], 3
 * 00000001401BAF20: mov     word ptr [rbp+80h], 0
 * 00000001401BAF29: jz      short loc_1401BAF30
 * 00000001401BAF2B: call    KiSaveDebugRegisterState
 * 00000001401BAF30: cld
 * 00000001401BAF31: stmxcsr dword ptr [rbp-54h]
 * 00000001401BAF35: ldmxcsr dword ptr gs:180h
 * 00000001401BAF3E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401BAF42: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401BAF46: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401BAF4A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401BAF4E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401BAF52: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401BAF56: sub     qword ptr [rbp+0E8h], 2
 * 00000001401BAF5E: and     dword ptr [rbp+0ECh], 0
 * 00000001401BAF65: sti
 * 00000001401BAF66: mov     ecx, 0C000001Dh
 * 00000001401BAF6B: xor     edx, edx
 * 00000001401BAF6D: mov     r8, [rbp+0E8h]
 * 00000001401BAF74: call    KiExceptionDispatch
 * 00000001401BAF79: nop
 * 00000001401BAF7A: retn
 */
