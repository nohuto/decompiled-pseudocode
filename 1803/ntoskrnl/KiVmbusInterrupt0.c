/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401AFAF0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x1402CFF80 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401AFAF0
 * Reason: Hex-Rays returned no pseudocode for 0x1401AFAF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AFAF0: sub     rsp, 8
 * 00000001401AFAF4: push    rbp
 * 00000001401AFAF5: push    rsi
 * 00000001401AFAF6: sub     rsp, 150h
 * 00000001401AFAFD: lea     rbp, [rsp+80h]
 * 00000001401AFB05: mov     [rbp+0E8h+var_13D], 0
 * 00000001401AFB09: mov     [rbp+0E8h+var_138], rax
 * 00000001401AFB0D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401AFB11: mov     [rbp+0E8h+var_128], rdx
 * 00000001401AFB15: mov     [rbp+0E8h+var_120], r8
 * 00000001401AFB19: mov     [rbp+0E8h+var_118], r9
 * 00000001401AFB1D: mov     [rbp+0E8h+var_110], r10
 * 00000001401AFB21: mov     [rbp+0E8h+var_108], r11
 * 00000001401AFB25: test    [rbp+0E8h+arg_0], 1
 * 00000001401AFB2C: jnz     short loc_1401AFB5B
 * 00000001401AFB2E: lfence
 * 00000001401AFB31: test    byte ptr gs:278h, 1
 * 00000001401AFB3A: jnz     short loc_1401AFB44
 * 00000001401AFB3C: lfence
 * 00000001401AFB3F: jmp     loc_1401AFD2E
 * 00000001401AFB44: movzx   eax, byte ptr gs:27Ah
 * 00000001401AFB4D: mov     ecx, 48h ; 'H'
 * 00000001401AFB52: xor     edx, edx
 * 00000001401AFB54: wrmsr
 * 00000001401AFB56: jmp     loc_1401AFD2E
 * 00000001401AFB5B: test    cs:KiKvaShadow, 1
 * 00000001401AFB62: jnz     short loc_1401AFB67
 * 00000001401AFB64: swapgs
 * 00000001401AFB67: lfence
 * 00000001401AFB6A: mov     r10, gs:188h
 * 00000001401AFB73: mov     rcx, gs:188h
 * 00000001401AFB7C: mov     rcx, [rcx+220h]
 * 00000001401AFB83: mov     rcx, [rcx+838h]
 * 00000001401AFB8A: mov     gs:270h, rcx
 * 00000001401AFB93: movzx   eax, byte ptr gs:27Bh
 * 00000001401AFB9C: cmp     gs:27Ah, al
 * 00000001401AFBA4: jz      short loc_1401AFBB7
 * 00000001401AFBA6: mov     gs:27Ah, al
 * 00000001401AFBAE: mov     ecx, 48h ; 'H'
 * 00000001401AFBB3: xor     edx, edx
 * 00000001401AFBB5: wrmsr
 * 00000001401AFBB7: movzx   edx, byte ptr gs:278h
 * 00000001401AFBC0: test    edx, 8
 * 00000001401AFBC6: jz      short loc_1401AFBDB
 * 00000001401AFBC8: mov     eax, 1
 * 00000001401AFBCD: xor     edx, edx
 * 00000001401AFBCF: mov     ecx, 49h ; 'I'
 * 00000001401AFBD4: wrmsr
 * 00000001401AFBD6: jmp     loc_1401AFD19
 * 00000001401AFBDB: test    edx, 2
 * 00000001401AFBE1: jz      loc_1401AFD16
 * 00000001401AFBE7: test    byte ptr gs:279h, 4
 * 00000001401AFBF0: jnz     loc_1401AFD16
 * 00000001401AFBF6: call    loc_1401AFD09
 * 00000001401AFBFB: add     rsp, 8
 * 00000001401AFBFF: call    loc_1401AFD12
 * 00000001401AFC04: add     rsp, 8
 * 00000001401AFC08: call    loc_1401AFBFB
 * 00000001401AFC0D: add     rsp, 8
 * 00000001401AFC11: call    loc_1401AFC04
 * 00000001401AFC16: add     rsp, 8
 * 00000001401AFC1A: call    loc_1401AFC0D
 * 00000001401AFC1F: add     rsp, 8
 * 00000001401AFC23: call    loc_1401AFC16
 * 00000001401AFC28: add     rsp, 8
 * 00000001401AFC2C: call    loc_1401AFC1F
 * 00000001401AFC31: add     rsp, 8
 * 00000001401AFC35: call    loc_1401AFC28
 * 00000001401AFC3A: add     rsp, 8
 * 00000001401AFC3E: call    loc_1401AFC31
 * 00000001401AFC43: add     rsp, 8
 * 00000001401AFC47: call    loc_1401AFC3A
 * 00000001401AFC4C: add     rsp, 8
 * 00000001401AFC50: call    loc_1401AFC43
 * 00000001401AFC55: add     rsp, 8
 * 00000001401AFC59: call    loc_1401AFC4C
 * 00000001401AFC5E: add     rsp, 8
 * 00000001401AFC62: call    loc_1401AFC55
 * 00000001401AFC67: add     rsp, 8
 * 00000001401AFC6B: call    loc_1401AFC5E
 * 00000001401AFC70: add     rsp, 8
 * 00000001401AFC74: call    loc_1401AFC67
 * 00000001401AFC79: add     rsp, 8
 * 00000001401AFC7D: call    loc_1401AFC70
 * 00000001401AFC82: add     rsp, 8
 * 00000001401AFC86: call    loc_1401AFC79
 * 00000001401AFC8B: add     rsp, 8
 * 00000001401AFC8F: call    loc_1401AFC82
 * 00000001401AFC94: add     rsp, 8
 * 00000001401AFC98: call    loc_1401AFC8B
 * 00000001401AFC9D: add     rsp, 8
 * 00000001401AFCA1: call    loc_1401AFC94
 * 00000001401AFCA6: add     rsp, 8
 * 00000001401AFCAA: call    loc_1401AFC9D
 * 00000001401AFCAF: add     rsp, 8
 * 00000001401AFCB3: call    loc_1401AFCA6
 * 00000001401AFCB8: add     rsp, 8
 * 00000001401AFCBC: call    loc_1401AFCAF
 * 00000001401AFCC1: add     rsp, 8
 * 00000001401AFCC5: call    loc_1401AFCB8
 * 00000001401AFCCA: add     rsp, 8
 * 00000001401AFCCE: call    loc_1401AFCC1
 * 00000001401AFCD3: add     rsp, 8
 * 00000001401AFCD7: call    loc_1401AFCCA
 * 00000001401AFCDC: add     rsp, 8
 * 00000001401AFCE0: call    loc_1401AFCD3
 * 00000001401AFCE5: add     rsp, 8
 * 00000001401AFCE9: call    loc_1401AFCDC
 * 00000001401AFCEE: add     rsp, 8
 * 00000001401AFCF2: call    loc_1401AFCE5
 * 00000001401AFCF7: add     rsp, 8
 * 00000001401AFCFB: call    loc_1401AFCEE
 * 00000001401AFD00: add     rsp, 8
 * 00000001401AFD04: call    loc_1401AFCF7
 * 00000001401AFD09: add     rsp, 8
 * 00000001401AFD0D: call    loc_1401AFD00
 * 00000001401AFD12: add     rsp, 8
 * 00000001401AFD16: lfence
 * 00000001401AFD19: test    byte ptr [r10+3], 3
 * 00000001401AFD1E: mov     [rbp+0E8h+var_68], 0
 * 00000001401AFD27: jz      short loc_1401AFD2E
 * 00000001401AFD29: call    KiSaveDebugRegisterState
 * 00000001401AFD2E: cld
 * 00000001401AFD2F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401AFD33: ldmxcsr dword ptr gs:180h
 * 00000001401AFD3C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401AFD40: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401AFD44: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401AFD48: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401AFD4C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401AFD50: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401AFD54: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401AFD5D: jz      short loc_1401AFD64
 * 00000001401AFD5F: call    KeWakeProcessor
 * 00000001401AFD64: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401AFD6B: cmp     rax, [rbp+0E8h]
 * 00000001401AFD72: jnb     short loc_1401AFD8D
 * 00000001401AFD74: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401AFD7B: cmp     rax, [rbp+0E8h]
 * 00000001401AFD82: jb      short loc_1401AFD8D
 * 00000001401AFD84: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401AFD88: call    KiCheckForSListAddress
 * 00000001401AFD8D: xor     esi, esi
 * 00000001401AFD8F: inc     dword ptr gs:5D00h
 * 00000001401AFD97: mov     ecx, 3
 * 00000001401AFD9C: mov     rax, cr8
 * 00000001401AFDA0: mov     cr8, rcx
 * 00000001401AFDA4: mov     [rbp+0E8h+var_13F], al
 * 00000001401AFDA7: mov     [rbp+0E8h+var_148], 0
 * 00000001401AFDAE: mov     rcx, gs:20h
 * 00000001401AFDB7: inc     byte ptr [rcx+20h]
 * 00000001401AFDBA: cmp     byte ptr [rcx+20h], 1
 * 00000001401AFDBE: jnz     loc_1401AFE54
 * 00000001401AFDC4: rdtsc
 * 00000001401AFDC6: shl     rdx, 20h
 * 00000001401AFDCA: or      rax, rdx
 * 00000001401AFDCD: mov     edx, [rcx+62E0h]
 * 00000001401AFDD3: mov     r11d, edx
 * 00000001401AFDD6: and     edx, 7FFh
 * 00000001401AFDDC: shr     edx, 5
 * 00000001401AFDDF: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401AFDE7: mov     edx, [r10]
 * 00000001401AFDEA: ror     edx, 5
 * 00000001401AFDED: xor     edx, eax
 * 00000001401AFDEF: mov     [r10], edx
 * 00000001401AFDF2: add     r11d, 1
 * 00000001401AFDF6: mov     [rcx+62E0h], r11d
 * 00000001401AFDFD: and     r11d, 3FFh
 * 00000001401AFE04: jnz     short loc_1401AFE0D
 * 00000001401AFE06: mov     [rbp+0E8h+var_148], 1
 * 00000001401AFE0D: mov     r8, [rcx+8]
 * 00000001401AFE11: sub     rax, [rcx+5BC0h]
 * 00000001401AFE18: add     [r8+48h], rax
 * 00000001401AFE1C: mov     edx, [r8+50h]
 * 00000001401AFE20: add     [rcx+5BC0h], rax
 * 00000001401AFE27: add     rdx, rax
 * 00000001401AFE2A: mov     ecx, edx
 * 00000001401AFE2C: shr     rdx, 20h
 * 00000001401AFE30: jz      short loc_1401AFE35
 * 00000001401AFE32: or      ecx, 0FFFFFFFFh
 * 00000001401AFE35: mov     [r8+50h], ecx
 * 00000001401AFE39: test    byte ptr [r8+2], 3Eh
 * 00000001401AFE3E: jz      short loc_1401AFE54
 * 00000001401AFE40: mov     rdx, r8
 * 00000001401AFE43: mov     r8, rax
 * 00000001401AFE46: mov     rcx, gs:20h
 * 00000001401AFE4F: call    KiEndThreadAccountingPeriod
 * 00000001401AFE54: sti
 * 00000001401AFE55: cmp     [rbp+0E8h+var_148], 0
 * 00000001401AFE59: jz      short loc_1401AFE69
 * 00000001401AFE5B: mov     rcx, gs:20h
 * 00000001401AFE64: call    KiEntropyQueueDpc
 * 00000001401AFE69: mov     ecx, 1
 * 00000001401AFE6E: call    HvlRouteInterrupt
 * 00000001401AFE73: cli
 * 00000001401AFE74: mov     rcx, gs:20h
 * 00000001401AFE7D: cmp     byte ptr [rcx+20h], 1
 * 00000001401AFE81: ja      short loc_1401AFEF7
 * 00000001401AFE83: rdtsc
 * 00000001401AFE85: shl     rdx, 20h
 * 00000001401AFE89: or      rax, rdx
 * 00000001401AFE8C: sub     rax, [rcx+5BC0h]
 * 00000001401AFE93: add     [rcx+5C38h], rax
 * 00000001401AFE9A: add     [rcx+5BC0h], rax
 * 00000001401AFEA1: mov     r8, rax
 * 00000001401AFEA4: mov     rax, [rcx+8]
 * 00000001401AFEA8: test    byte ptr [rax+2], 72h
 * 00000001401AFEAC: jz      short loc_1401AFEC1
 * 00000001401AFEAE: xor     edx, edx
 * 00000001401AFEB0: call    KiBeginThreadAccountingPeriod
 * 00000001401AFEB5: mov     rcx, gs:20h
 * 00000001401AFEBE: inc     byte ptr [rcx+20h]
 * 00000001401AFEC1: mov     dl, [rcx+6]
 * 00000001401AFEC4: and     byte ptr [rcx+6], 0
 * 00000001401AFEC8: cmp     byte ptr [rcx+7], 0
 * 00000001401AFECC: jnz     short loc_1401AFEF7
 * 00000001401AFECE: test    dl, dl
 * 00000001401AFED0: jz      short loc_1401AFEF7
 * 00000001401AFED2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401AFED6: jnb     short loc_1401AFEE3
 * 00000001401AFED8: and     byte ptr [rcx+20h], 0
 * 00000001401AFEDC: call    KiDpcInterruptBypass
 * 00000001401AFEE1: jmp     short loc_1401AFEFA
 * 00000001401AFEE3: mov     ecx, 2
 * 00000001401AFEE8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401AFEEE: mov     rcx, gs:20h
 * 00000001401AFEF7: dec     byte ptr [rcx+20h]
 * 00000001401AFEFA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401AFEFE: mov     cr8, rcx
 * 00000001401AFF02: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401AFF09: cli
 * 00000001401AFF0A: test    [rbp+0E8h+arg_0], 1
 * 00000001401AFF11: jz      loc_1401B0027
 * 00000001401AFF17: mov     rcx, gs:188h
 * 00000001401AFF20: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401AFF27: jz      short loc_1401AFF42
 * 00000001401AFF29: mov     ecx, 1
 * 00000001401AFF2E: mov     cr8, rcx
 * 00000001401AFF32: sti
 * 00000001401AFF33: call    KiInitiateUserApc
 * 00000001401AFF38: cli
 * 00000001401AFF39: mov     ecx, 0
 * 00000001401AFF3E: mov     cr8, rcx
 * 00000001401AFF42: mov     rcx, gs:188h
 * 00000001401AFF4B: test    dword ptr [rcx], 8000000h
 * 00000001401AFF51: jz      short loc_1401AFF58
 * 00000001401AFF53: call    KiRestoreSetContextState
 * 00000001401AFF58: mov     rcx, gs:188h
 * 00000001401AFF61: test    dword ptr [rcx], 40010000h
 * 00000001401AFF67: jz      short loc_1401AFF7D
 * 00000001401AFF69: test    byte ptr [rcx+2], 1
 * 00000001401AFF6D: jz      short loc_1401AFF7D
 * 00000001401AFF6F: call    KiCopyCounters
 * 00000001401AFF74: mov     rcx, gs:188h
 * 00000001401AFF7D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401AFF81: cmp     [rbp+0E8h+var_68], 0
 * 00000001401AFF89: jz      short loc_1401AFF90
 * 00000001401AFF8B: call    KiRestoreDebugRegisterState
 * 00000001401AFF90: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401AFF94: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401AFF98: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401AFF9C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401AFFA0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401AFFA4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401AFFA8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401AFFAC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401AFFB0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401AFFB4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401AFFB8: movzx   eax, byte ptr gs:27Dh
 * 00000001401AFFC1: cmp     gs:27Ah, al
 * 00000001401AFFC9: jz      short loc_1401AFFDC
 * 00000001401AFFCB: mov     gs:27Ah, al
 * 00000001401AFFD3: mov     ecx, 48h ; 'H'
 * 00000001401AFFD8: xor     edx, edx
 * 00000001401AFFDA: wrmsr
 * 00000001401AFFDC: btr     word ptr gs:278h, 2
 * 00000001401AFFE7: jnb     short loc_1401AFFF7
 * 00000001401AFFE9: mov     eax, 1
 * 00000001401AFFEE: xor     edx, edx
 * 00000001401AFFF0: mov     ecx, 49h ; 'I'
 * 00000001401AFFF5: wrmsr
 * 00000001401AFFF7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401AFFFB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401AFFFF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B0003: mov     rsp, rbp
 * 00000001401B0006: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B000D: add     rsp, 0E8h
 * 00000001401B0014: test    cs:KiKvaShadow, 1
 * 00000001401B001B: jz      short loc_1401B0022
 * 00000001401B001D: jmp     KiKernelExit
 * 00000001401B0022: swapgs
 * 00000001401B0025: iretq
 * 00000001401B0027: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B002B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B002F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B0033: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B0037: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B003B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B003F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B0043: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B0047: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B004B: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B004F: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B0053: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B0057: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B005B: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B005F: mov     rsp, rbp
 * 00000001401B0062: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B0069: add     rsp, 0E8h
 * 00000001401B0070: iretq
 */
