/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401B0BA0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x1402D0100 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401B0BA0
 * Reason: Hex-Rays returned no pseudocode for 0x1401B0BA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B0BA0: sub     rsp, 8
 * 00000001401B0BA4: push    rbp
 * 00000001401B0BA5: push    rsi
 * 00000001401B0BA6: sub     rsp, 150h
 * 00000001401B0BAD: lea     rbp, [rsp+80h]
 * 00000001401B0BB5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401B0BB9: mov     [rbp+0E8h+var_138], rax
 * 00000001401B0BBD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B0BC1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B0BC5: mov     [rbp+0E8h+var_120], r8
 * 00000001401B0BC9: mov     [rbp+0E8h+var_118], r9
 * 00000001401B0BCD: mov     [rbp+0E8h+var_110], r10
 * 00000001401B0BD1: mov     [rbp+0E8h+var_108], r11
 * 00000001401B0BD5: test    [rbp+0E8h+arg_0], 1
 * 00000001401B0BDC: jnz     short loc_1401B0C0B
 * 00000001401B0BDE: lfence
 * 00000001401B0BE1: test    byte ptr gs:278h, 1
 * 00000001401B0BEA: jnz     short loc_1401B0BF4
 * 00000001401B0BEC: lfence
 * 00000001401B0BEF: jmp     loc_1401B0DDE
 * 00000001401B0BF4: movzx   eax, byte ptr gs:27Ah
 * 00000001401B0BFD: mov     ecx, 48h ; 'H'
 * 00000001401B0C02: xor     edx, edx
 * 00000001401B0C04: wrmsr
 * 00000001401B0C06: jmp     loc_1401B0DDE
 * 00000001401B0C0B: test    cs:KiKvaShadow, 1
 * 00000001401B0C12: jnz     short loc_1401B0C17
 * 00000001401B0C14: swapgs
 * 00000001401B0C17: lfence
 * 00000001401B0C1A: mov     r10, gs:188h
 * 00000001401B0C23: mov     rcx, gs:188h
 * 00000001401B0C2C: mov     rcx, [rcx+220h]
 * 00000001401B0C33: mov     rcx, [rcx+838h]
 * 00000001401B0C3A: mov     gs:270h, rcx
 * 00000001401B0C43: movzx   eax, byte ptr gs:27Bh
 * 00000001401B0C4C: cmp     gs:27Ah, al
 * 00000001401B0C54: jz      short loc_1401B0C67
 * 00000001401B0C56: mov     gs:27Ah, al
 * 00000001401B0C5E: mov     ecx, 48h ; 'H'
 * 00000001401B0C63: xor     edx, edx
 * 00000001401B0C65: wrmsr
 * 00000001401B0C67: movzx   edx, byte ptr gs:278h
 * 00000001401B0C70: test    edx, 8
 * 00000001401B0C76: jz      short loc_1401B0C8B
 * 00000001401B0C78: mov     eax, 1
 * 00000001401B0C7D: xor     edx, edx
 * 00000001401B0C7F: mov     ecx, 49h ; 'I'
 * 00000001401B0C84: wrmsr
 * 00000001401B0C86: jmp     loc_1401B0DC9
 * 00000001401B0C8B: test    edx, 2
 * 00000001401B0C91: jz      loc_1401B0DC6
 * 00000001401B0C97: test    byte ptr gs:279h, 4
 * 00000001401B0CA0: jnz     loc_1401B0DC6
 * 00000001401B0CA6: call    loc_1401B0DB9
 * 00000001401B0CAB: add     rsp, 8
 * 00000001401B0CAF: call    loc_1401B0DC2
 * 00000001401B0CB4: add     rsp, 8
 * 00000001401B0CB8: call    loc_1401B0CAB
 * 00000001401B0CBD: add     rsp, 8
 * 00000001401B0CC1: call    loc_1401B0CB4
 * 00000001401B0CC6: add     rsp, 8
 * 00000001401B0CCA: call    loc_1401B0CBD
 * 00000001401B0CCF: add     rsp, 8
 * 00000001401B0CD3: call    loc_1401B0CC6
 * 00000001401B0CD8: add     rsp, 8
 * 00000001401B0CDC: call    loc_1401B0CCF
 * 00000001401B0CE1: add     rsp, 8
 * 00000001401B0CE5: call    loc_1401B0CD8
 * 00000001401B0CEA: add     rsp, 8
 * 00000001401B0CEE: call    loc_1401B0CE1
 * 00000001401B0CF3: add     rsp, 8
 * 00000001401B0CF7: call    loc_1401B0CEA
 * 00000001401B0CFC: add     rsp, 8
 * 00000001401B0D00: call    loc_1401B0CF3
 * 00000001401B0D05: add     rsp, 8
 * 00000001401B0D09: call    loc_1401B0CFC
 * 00000001401B0D0E: add     rsp, 8
 * 00000001401B0D12: call    loc_1401B0D05
 * 00000001401B0D17: add     rsp, 8
 * 00000001401B0D1B: call    loc_1401B0D0E
 * 00000001401B0D20: add     rsp, 8
 * 00000001401B0D24: call    loc_1401B0D17
 * 00000001401B0D29: add     rsp, 8
 * 00000001401B0D2D: call    loc_1401B0D20
 * 00000001401B0D32: add     rsp, 8
 * 00000001401B0D36: call    loc_1401B0D29
 * 00000001401B0D3B: add     rsp, 8
 * 00000001401B0D3F: call    loc_1401B0D32
 * 00000001401B0D44: add     rsp, 8
 * 00000001401B0D48: call    loc_1401B0D3B
 * 00000001401B0D4D: add     rsp, 8
 * 00000001401B0D51: call    loc_1401B0D44
 * 00000001401B0D56: add     rsp, 8
 * 00000001401B0D5A: call    loc_1401B0D4D
 * 00000001401B0D5F: add     rsp, 8
 * 00000001401B0D63: call    loc_1401B0D56
 * 00000001401B0D68: add     rsp, 8
 * 00000001401B0D6C: call    loc_1401B0D5F
 * 00000001401B0D71: add     rsp, 8
 * 00000001401B0D75: call    loc_1401B0D68
 * 00000001401B0D7A: add     rsp, 8
 * 00000001401B0D7E: call    loc_1401B0D71
 * 00000001401B0D83: add     rsp, 8
 * 00000001401B0D87: call    loc_1401B0D7A
 * 00000001401B0D8C: add     rsp, 8
 * 00000001401B0D90: call    loc_1401B0D83
 * 00000001401B0D95: add     rsp, 8
 * 00000001401B0D99: call    loc_1401B0D8C
 * 00000001401B0D9E: add     rsp, 8
 * 00000001401B0DA2: call    loc_1401B0D95
 * 00000001401B0DA7: add     rsp, 8
 * 00000001401B0DAB: call    loc_1401B0D9E
 * 00000001401B0DB0: add     rsp, 8
 * 00000001401B0DB4: call    loc_1401B0DA7
 * 00000001401B0DB9: add     rsp, 8
 * 00000001401B0DBD: call    loc_1401B0DB0
 * 00000001401B0DC2: add     rsp, 8
 * 00000001401B0DC6: lfence
 * 00000001401B0DC9: test    byte ptr [r10+3], 3
 * 00000001401B0DCE: mov     [rbp+0E8h+var_68], 0
 * 00000001401B0DD7: jz      short loc_1401B0DDE
 * 00000001401B0DD9: call    KiSaveDebugRegisterState
 * 00000001401B0DDE: cld
 * 00000001401B0DDF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B0DE3: ldmxcsr dword ptr gs:180h
 * 00000001401B0DEC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B0DF0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B0DF4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B0DF8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B0DFC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B0E00: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B0E04: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401B0E0D: jz      short loc_1401B0E14
 * 00000001401B0E0F: call    KeWakeProcessor
 * 00000001401B0E14: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401B0E1B: cmp     rax, [rbp+0E8h]
 * 00000001401B0E22: jnb     short loc_1401B0E3D
 * 00000001401B0E24: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401B0E2B: cmp     rax, [rbp+0E8h]
 * 00000001401B0E32: jb      short loc_1401B0E3D
 * 00000001401B0E34: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401B0E38: call    KiCheckForSListAddress
 * 00000001401B0E3D: xor     esi, esi
 * 00000001401B0E3F: inc     dword ptr gs:5D00h
 * 00000001401B0E47: mov     ecx, 3
 * 00000001401B0E4C: mov     rax, cr8
 * 00000001401B0E50: mov     cr8, rcx
 * 00000001401B0E54: mov     [rbp+0E8h+var_13F], al
 * 00000001401B0E57: mov     [rbp+0E8h+var_148], 0
 * 00000001401B0E5E: mov     rcx, gs:20h
 * 00000001401B0E67: inc     byte ptr [rcx+20h]
 * 00000001401B0E6A: cmp     byte ptr [rcx+20h], 1
 * 00000001401B0E6E: jnz     loc_1401B0F04
 * 00000001401B0E74: rdtsc
 * 00000001401B0E76: shl     rdx, 20h
 * 00000001401B0E7A: or      rax, rdx
 * 00000001401B0E7D: mov     edx, [rcx+62E0h]
 * 00000001401B0E83: mov     r11d, edx
 * 00000001401B0E86: and     edx, 7FFh
 * 00000001401B0E8C: shr     edx, 5
 * 00000001401B0E8F: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401B0E97: mov     edx, [r10]
 * 00000001401B0E9A: ror     edx, 5
 * 00000001401B0E9D: xor     edx, eax
 * 00000001401B0E9F: mov     [r10], edx
 * 00000001401B0EA2: add     r11d, 1
 * 00000001401B0EA6: mov     [rcx+62E0h], r11d
 * 00000001401B0EAD: and     r11d, 3FFh
 * 00000001401B0EB4: jnz     short loc_1401B0EBD
 * 00000001401B0EB6: mov     [rbp+0E8h+var_148], 1
 * 00000001401B0EBD: mov     r8, [rcx+8]
 * 00000001401B0EC1: sub     rax, [rcx+5BC0h]
 * 00000001401B0EC8: add     [r8+48h], rax
 * 00000001401B0ECC: mov     edx, [r8+50h]
 * 00000001401B0ED0: add     [rcx+5BC0h], rax
 * 00000001401B0ED7: add     rdx, rax
 * 00000001401B0EDA: mov     ecx, edx
 * 00000001401B0EDC: shr     rdx, 20h
 * 00000001401B0EE0: jz      short loc_1401B0EE5
 * 00000001401B0EE2: or      ecx, 0FFFFFFFFh
 * 00000001401B0EE5: mov     [r8+50h], ecx
 * 00000001401B0EE9: test    byte ptr [r8+2], 3Eh
 * 00000001401B0EEE: jz      short loc_1401B0F04
 * 00000001401B0EF0: mov     rdx, r8
 * 00000001401B0EF3: mov     r8, rax
 * 00000001401B0EF6: mov     rcx, gs:20h
 * 00000001401B0EFF: call    KiEndThreadAccountingPeriod
 * 00000001401B0F04: sti
 * 00000001401B0F05: cmp     [rbp+0E8h+var_148], 0
 * 00000001401B0F09: jz      short loc_1401B0F19
 * 00000001401B0F0B: mov     rcx, gs:20h
 * 00000001401B0F14: call    KiEntropyQueueDpc
 * 00000001401B0F19: mov     ecx, 4
 * 00000001401B0F1E: call    HvlRouteInterrupt
 * 00000001401B0F23: cli
 * 00000001401B0F24: mov     rcx, gs:20h
 * 00000001401B0F2D: cmp     byte ptr [rcx+20h], 1
 * 00000001401B0F31: ja      short loc_1401B0FA7
 * 00000001401B0F33: rdtsc
 * 00000001401B0F35: shl     rdx, 20h
 * 00000001401B0F39: or      rax, rdx
 * 00000001401B0F3C: sub     rax, [rcx+5BC0h]
 * 00000001401B0F43: add     [rcx+5C38h], rax
 * 00000001401B0F4A: add     [rcx+5BC0h], rax
 * 00000001401B0F51: mov     r8, rax
 * 00000001401B0F54: mov     rax, [rcx+8]
 * 00000001401B0F58: test    byte ptr [rax+2], 72h
 * 00000001401B0F5C: jz      short loc_1401B0F71
 * 00000001401B0F5E: xor     edx, edx
 * 00000001401B0F60: call    KiBeginThreadAccountingPeriod
 * 00000001401B0F65: mov     rcx, gs:20h
 * 00000001401B0F6E: inc     byte ptr [rcx+20h]
 * 00000001401B0F71: mov     dl, [rcx+6]
 * 00000001401B0F74: and     byte ptr [rcx+6], 0
 * 00000001401B0F78: cmp     byte ptr [rcx+7], 0
 * 00000001401B0F7C: jnz     short loc_1401B0FA7
 * 00000001401B0F7E: test    dl, dl
 * 00000001401B0F80: jz      short loc_1401B0FA7
 * 00000001401B0F82: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401B0F86: jnb     short loc_1401B0F93
 * 00000001401B0F88: and     byte ptr [rcx+20h], 0
 * 00000001401B0F8C: call    KiDpcInterruptBypass
 * 00000001401B0F91: jmp     short loc_1401B0FAA
 * 00000001401B0F93: mov     ecx, 2
 * 00000001401B0F98: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401B0F9E: mov     rcx, gs:20h
 * 00000001401B0FA7: dec     byte ptr [rcx+20h]
 * 00000001401B0FAA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401B0FAE: mov     cr8, rcx
 * 00000001401B0FB2: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401B0FB9: cli
 * 00000001401B0FBA: test    [rbp+0E8h+arg_0], 1
 * 00000001401B0FC1: jz      loc_1401B10D7
 * 00000001401B0FC7: mov     rcx, gs:188h
 * 00000001401B0FD0: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B0FD7: jz      short loc_1401B0FF2
 * 00000001401B0FD9: mov     ecx, 1
 * 00000001401B0FDE: mov     cr8, rcx
 * 00000001401B0FE2: sti
 * 00000001401B0FE3: call    KiInitiateUserApc
 * 00000001401B0FE8: cli
 * 00000001401B0FE9: mov     ecx, 0
 * 00000001401B0FEE: mov     cr8, rcx
 * 00000001401B0FF2: mov     rcx, gs:188h
 * 00000001401B0FFB: test    dword ptr [rcx], 8000000h
 * 00000001401B1001: jz      short loc_1401B1008
 * 00000001401B1003: call    KiRestoreSetContextState
 * 00000001401B1008: mov     rcx, gs:188h
 * 00000001401B1011: test    dword ptr [rcx], 40010000h
 * 00000001401B1017: jz      short loc_1401B102D
 * 00000001401B1019: test    byte ptr [rcx+2], 1
 * 00000001401B101D: jz      short loc_1401B102D
 * 00000001401B101F: call    KiCopyCounters
 * 00000001401B1024: mov     rcx, gs:188h
 * 00000001401B102D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B1031: cmp     [rbp+0E8h+var_68], 0
 * 00000001401B1039: jz      short loc_1401B1040
 * 00000001401B103B: call    KiRestoreDebugRegisterState
 * 00000001401B1040: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B1044: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B1048: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B104C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B1050: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B1054: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B1058: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B105C: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B1060: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B1064: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B1068: movzx   eax, byte ptr gs:27Dh
 * 00000001401B1071: cmp     gs:27Ah, al
 * 00000001401B1079: jz      short loc_1401B108C
 * 00000001401B107B: mov     gs:27Ah, al
 * 00000001401B1083: mov     ecx, 48h ; 'H'
 * 00000001401B1088: xor     edx, edx
 * 00000001401B108A: wrmsr
 * 00000001401B108C: btr     word ptr gs:278h, 2
 * 00000001401B1097: jnb     short loc_1401B10A7
 * 00000001401B1099: mov     eax, 1
 * 00000001401B109E: xor     edx, edx
 * 00000001401B10A0: mov     ecx, 49h ; 'I'
 * 00000001401B10A5: wrmsr
 * 00000001401B10A7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B10AB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B10AF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B10B3: mov     rsp, rbp
 * 00000001401B10B6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B10BD: add     rsp, 0E8h
 * 00000001401B10C4: test    cs:KiKvaShadow, 1
 * 00000001401B10CB: jz      short loc_1401B10D2
 * 00000001401B10CD: jmp     KiKernelExit
 * 00000001401B10D2: swapgs
 * 00000001401B10D5: iretq
 * 00000001401B10D7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B10DB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B10DF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B10E3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B10E7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B10EB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B10EF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B10F3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B10F7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B10FB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B10FF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B1103: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B1107: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B110B: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B110F: mov     rsp, rbp
 * 00000001401B1112: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B1119: add     rsp, 0E8h
 * 00000001401B1120: iretq
 */
