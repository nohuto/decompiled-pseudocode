/*
 * XREFs of KiPageFault @ 0x14018E8C0
 * Callers:
 *     KiPageFaultShadow @ 0x14026C800 (KiPageFaultShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140191B80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140192440 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401928C0 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x1401FC660 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x1402390D0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14018E8C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018E8C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E8C0: push    rbp
 * 000000014018E8C1: sub     rsp, 158h
 * 000000014018E8C8: lea     rbp, [rsp+80h]
 * 000000014018E8D0: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E8D4: mov     [rbp+0D8h+var_128], rax
 * 000000014018E8D8: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E8DC: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E8E0: mov     [rbp+0D8h+var_110], r8
 * 000000014018E8E4: mov     [rbp+0D8h+var_108], r9
 * 000000014018E8E8: mov     [rbp+0D8h+var_100], r10
 * 000000014018E8EC: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E8F0: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018E8F7: jnz     short loc_14018E926
 * 000000014018E8F9: lfence
 * 000000014018E8FC: test    byte ptr gs:278h, 1
 * 000000014018E905: jnz     short loc_14018E90F
 * 000000014018E907: lfence
 * 000000014018E90A: jmp     loc_14018EB52
 * 000000014018E90F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E918: mov     ecx, 48h ; 'H'
 * 000000014018E91D: xor     edx, edx
 * 000000014018E91F: wrmsr
 * 000000014018E921: jmp     loc_14018EB52
 * 000000014018E926: test    cs:KiKvaShadow, 1
 * 000000014018E92D: jnz     short loc_14018E932
 * 000000014018E92F: swapgs
 * 000000014018E932: lfence
 * 000000014018E935: mov     r10, gs:188h
 * 000000014018E93E: mov     rcx, gs:188h
 * 000000014018E947: mov     rcx, [rcx+220h]
 * 000000014018E94E: mov     rcx, [rcx+818h]
 * 000000014018E955: mov     gs:270h, rcx
 * 000000014018E95E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E967: cmp     gs:27Ah, al
 * 000000014018E96F: jz      short loc_14018E982
 * 000000014018E971: mov     gs:27Ah, al
 * 000000014018E979: mov     ecx, 48h ; 'H'
 * 000000014018E97E: xor     edx, edx
 * 000000014018E980: wrmsr
 * 000000014018E982: movzx   edx, byte ptr gs:278h
 * 000000014018E98B: test    edx, 8
 * 000000014018E991: jz      short loc_14018E9A6
 * 000000014018E993: mov     eax, 1
 * 000000014018E998: xor     edx, edx
 * 000000014018E99A: mov     ecx, 49h ; 'I'
 * 000000014018E99F: wrmsr
 * 000000014018E9A1: jmp     loc_14018EAE4
 * 000000014018E9A6: test    edx, 2
 * 000000014018E9AC: jz      loc_14018EAE1
 * 000000014018E9B2: test    byte ptr gs:279h, 4
 * 000000014018E9BB: jnz     loc_14018EAE1
 * 000000014018E9C1: call    loc_14018EAD4
 * 000000014018E9C6: add     rsp, 8
 * 000000014018E9CA: call    loc_14018EADD
 * 000000014018E9CF: add     rsp, 8
 * 000000014018E9D3: call    loc_14018E9C6
 * 000000014018E9D8: add     rsp, 8
 * 000000014018E9DC: call    loc_14018E9CF
 * 000000014018E9E1: add     rsp, 8
 * 000000014018E9E5: call    loc_14018E9D8
 * 000000014018E9EA: add     rsp, 8
 * 000000014018E9EE: call    loc_14018E9E1
 * 000000014018E9F3: add     rsp, 8
 * 000000014018E9F7: call    loc_14018E9EA
 * 000000014018E9FC: add     rsp, 8
 * 000000014018EA00: call    loc_14018E9F3
 * 000000014018EA05: add     rsp, 8
 * 000000014018EA09: call    loc_14018E9FC
 * 000000014018EA0E: add     rsp, 8
 * 000000014018EA12: call    loc_14018EA05
 * 000000014018EA17: add     rsp, 8
 * 000000014018EA1B: call    loc_14018EA0E
 * 000000014018EA20: add     rsp, 8
 * 000000014018EA24: call    loc_14018EA17
 * 000000014018EA29: add     rsp, 8
 * 000000014018EA2D: call    loc_14018EA20
 * 000000014018EA32: add     rsp, 8
 * 000000014018EA36: call    loc_14018EA29
 * 000000014018EA3B: add     rsp, 8
 * 000000014018EA3F: call    loc_14018EA32
 * 000000014018EA44: add     rsp, 8
 * 000000014018EA48: call    loc_14018EA3B
 * 000000014018EA4D: add     rsp, 8
 * 000000014018EA51: call    loc_14018EA44
 * 000000014018EA56: add     rsp, 8
 * 000000014018EA5A: call    loc_14018EA4D
 * 000000014018EA5F: add     rsp, 8
 * 000000014018EA63: call    loc_14018EA56
 * 000000014018EA68: add     rsp, 8
 * 000000014018EA6C: call    loc_14018EA5F
 * 000000014018EA71: add     rsp, 8
 * 000000014018EA75: call    loc_14018EA68
 * 000000014018EA7A: add     rsp, 8
 * 000000014018EA7E: call    loc_14018EA71
 * 000000014018EA83: add     rsp, 8
 * 000000014018EA87: call    loc_14018EA7A
 * 000000014018EA8C: add     rsp, 8
 * 000000014018EA90: call    loc_14018EA83
 * 000000014018EA95: add     rsp, 8
 * 000000014018EA99: call    loc_14018EA8C
 * 000000014018EA9E: add     rsp, 8
 * 000000014018EAA2: call    loc_14018EA95
 * 000000014018EAA7: add     rsp, 8
 * 000000014018EAAB: call    loc_14018EA9E
 * 000000014018EAB0: add     rsp, 8
 * 000000014018EAB4: call    loc_14018EAA7
 * 000000014018EAB9: add     rsp, 8
 * 000000014018EABD: call    loc_14018EAB0
 * 000000014018EAC2: add     rsp, 8
 * 000000014018EAC6: call    loc_14018EAB9
 * 000000014018EACB: add     rsp, 8
 * 000000014018EACF: call    loc_14018EAC2
 * 000000014018EAD4: add     rsp, 8
 * 000000014018EAD8: call    loc_14018EACB
 * 000000014018EADD: add     rsp, 8
 * 000000014018EAE1: lfence
 * 000000014018EAE4: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014018EAEC: jnz     short loc_14018EB3D
 * 000000014018EAEE: mov     ecx, 0C0000102h
 * 000000014018EAF3: rdmsr
 * 000000014018EAF5: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014018EAF8: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014018EAFB: test    byte ptr [r10+3], 80h
 * 000000014018EB00: jz      short loc_14018EB3D
 * 000000014018EB02: shl     rdx, 20h
 * 000000014018EB06: or      rax, rdx
 * 000000014018EB09: cmp     rax, cs:MmUserProbeAddress
 * 000000014018EB10: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018EB18: cmp     [r10+0F0h], rax
 * 000000014018EB1F: jz      short loc_14018EB3D
 * 000000014018EB21: mov     rdx, [r10+1F0h]
 * 000000014018EB28: bts     dword ptr [r10+74h], 8
 * 000000014018EB2E: dec     word ptr [r10+1E6h]
 * 000000014018EB36: mov     [rdx+80h], rax
 * 000000014018EB3D: test    byte ptr [r10+3], 3
 * 000000014018EB42: mov     [rbp+0D8h+var_58], 0
 * 000000014018EB4B: jz      short loc_14018EB52
 * 000000014018EB4D: call    KiSaveDebugRegisterState
 * 000000014018EB52: cld
 * 000000014018EB53: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018EB57: ldmxcsr dword ptr gs:180h
 * 000000014018EB60: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018EB64: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018EB68: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018EB6C: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018EB70: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018EB74: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018EB78: mov     eax, [rbp+0E0h]
 * 000000014018EB7E: mov     rcx, cr2
 * 000000014018EB81: test    [rbp+0D8h+arg_10], 200h
 * 000000014018EB8B: jz      short loc_14018EB8E
 * 000000014018EB8D: sti
 * 000000014018EB8E: mov     r9, gs:188h
 * 000000014018EB97: bt      dword ptr [r9+74h], 8
 * 000000014018EB9D: jnb     short loc_14018EBAD
 * 000000014018EB9F: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018EBA6: jz      short loc_14018EBAD
 * 000000014018EBA8: call    KiUmsTrapEntry
 * 000000014018EBAD: mov     [rbp+0D8h+var_88], rcx
 * 000000014018EBB1: bt      [rbp+0D8h+arg_10], 9
 * 000000014018EBB9: jnb     loc_14018ECEB
 * 000000014018EBBF: lea     r9, [rbp+0D8h+var_158]
 * 000000014018EBC3: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014018EBCA: and     r8b, 1
 * 000000014018EBCE: mov     rdx, rcx; ULONG_PTR
 * 000000014018EBD1: mov     ecx, eax; BugCheckParameter2
 * 000000014018EBD3: shr     eax, 1
 * 000000014018EBD5: and     eax, 9
 * 000000014018EBD8: mov     [rbp+0D8h+var_12E], al
 * 000000014018EBDB: call    MmAccessFault
 * 000000014018EBE0: test    eax, eax
 * 000000014018EBE2: jl      short loc_14018EC1A
 * 000000014018EBE4: cmp     cs:PsWatchEnabled, 0
 * 000000014018EBEB: jz      short loc_14018EBFF
 * 000000014018EBED: mov     r8, [rbp+0D8h+var_88]
 * 000000014018EBF1: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014018EBF8: mov     ecx, eax
 * 000000014018EBFA: call    PsWatchWorkingSet
 * 000000014018EBFF: cmp     cs:KdpOweBreakpoint, 0
 * 000000014018EC06: jz      loc_14018ECF1
 * 000000014018EC0C: mov     rcx, [rbp+0D8h+var_88]
 * 000000014018EC10: call    KdSetOwedBreakpoints
 * 000000014018EC15: jmp     loc_14018ECF1
 * 000000014018EC1A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018EC21: jz      short loc_14018EC75
 * 000000014018EC23: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014018EC2B: jnz     short loc_14018EC6B
 * 000000014018EC2D: mov     r9, gs:188h
 * 000000014018EC36: test    byte ptr [r9+3], 4
 * 000000014018EC3B: jz      short loc_14018EC46
 * 000000014018EC3D: mov     r8, [r9+7A8h]
 * 000000014018EC44: jmp     short loc_14018EC4F
 * 000000014018EC46: mov     r8, gs:30h
 * 000000014018EC4F: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014018EC53: jz      short loc_14018EC75
 * 000000014018EC55: mov     ecx, 0C0000102h
 * 000000014018EC5A: mov     eax, r8d
 * 000000014018EC5D: shr     r8, 20h
 * 000000014018EC61: mov     edx, r8d
 * 000000014018EC64: wrmsr
 * 000000014018EC66: jmp     loc_14018ECF1
 * 000000014018EC6B: mov     rcx, [rbp+0D8h+var_88]
 * 000000014018EC6F: shr     rcx, 20h
 * 000000014018EC73: jnz     short loc_14018ECF1
 * 000000014018EC75: mov     ecx, eax
 * 000000014018EC77: mov     edx, 2
 * 000000014018EC7C: cmp     ecx, 0D0000006h
 * 000000014018EC82: jz      short loc_14018ECC5
 * 000000014018EC84: cmp     ecx, 0C0000005h
 * 000000014018EC8A: jz      short loc_14018ECAB
 * 000000014018EC8C: cmp     ecx, 80000001h
 * 000000014018EC92: jz      short loc_14018ECB0
 * 000000014018EC94: cmp     ecx, 0C00000FDh
 * 000000014018EC9A: jz      short loc_14018ECB0
 * 000000014018EC9C: mov     ecx, 0C0000006h
 * 000000014018ECA1: mov     edx, 3
 * 000000014018ECA6: mov     r11d, eax
 * 000000014018ECA9: jmp     short loc_14018ECB0
 * 000000014018ECAB: mov     ecx, 10000004h
 * 000000014018ECB0: mov     r10, [rbp+0D8h+var_88]
 * 000000014018ECB4: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014018ECB9: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018ECC0: call    KiExceptionDispatch
 * 000000014018ECC5: mov     rax, cr8
 * 000000014018ECC9: mov     r10, [rbp+0D8h+arg_0]
 * 000000014018ECD0: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014018ECD5: and     eax, 0FFh
 * 000000014018ECDA: mov     r8, rax
 * 000000014018ECDD: mov     rdx, [rbp+0D8h+var_88]
 * 000000014018ECE1: mov     ecx, 0Ah
 * 000000014018ECE6: call    KiBugCheckDispatch
 * 000000014018ECEB: xor     eax, eax
 * 000000014018ECED: mov     al, 0FFh
 * 000000014018ECEF: jmp     short loc_14018ECC9
 * 000000014018ECF1: mov     rax, cr8
 * 000000014018ECF5: or      eax, eax
 * 000000014018ECF7: mov     [rbp+0D8h+var_138], eax
 * 000000014018ECFA: jnz     short loc_14018ED05
 * 000000014018ECFC: mov     ecx, 1
 * 000000014018ED01: mov     cr8, rcx
 * 000000014018ED05: lea     rcx, [rbp+0D8h+var_158]
 * 000000014018ED09: call    KiCheckForSListAddress
 * 000000014018ED0E: mov     ecx, [rbp+0D8h+var_138]
 * 000000014018ED11: or      ecx, ecx
 * 000000014018ED13: jnz     short loc_14018ED19
 * 000000014018ED15: mov     cr8, rcx
 * 000000014018ED19: cli
 * 000000014018ED1A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018ED21: jz      loc_14018EE48
 * 000000014018ED27: mov     rcx, gs:188h
 * 000000014018ED30: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018ED37: jz      short loc_14018ED52
 * 000000014018ED39: mov     ecx, 1
 * 000000014018ED3E: mov     cr8, rcx
 * 000000014018ED42: sti
 * 000000014018ED43: call    KiInitiateUserApc
 * 000000014018ED48: cli
 * 000000014018ED49: mov     ecx, 0
 * 000000014018ED4E: mov     cr8, rcx
 * 000000014018ED52: mov     rcx, gs:188h
 * 000000014018ED5B: test    dword ptr [rcx], 8000000h
 * 000000014018ED61: jz      short loc_14018ED68
 * 000000014018ED63: call    KiRestoreSetContextState
 * 000000014018ED68: mov     rcx, gs:188h
 * 000000014018ED71: test    dword ptr [rcx], 40010000h
 * 000000014018ED77: jz      short loc_14018ED9E
 * 000000014018ED79: test    byte ptr [rcx+2], 1
 * 000000014018ED7D: jz      short loc_14018ED8D
 * 000000014018ED7F: call    KiCopyCounters
 * 000000014018ED84: mov     rcx, gs:188h
 * 000000014018ED8D: test    byte ptr [rcx+3], 40h
 * 000000014018ED91: jz      short loc_14018ED9E
 * 000000014018ED93: lea     rsp, [rbp-80h]
 * 000000014018ED97: mov     cl, 1
 * 000000014018ED99: call    KiUmsExit
 * 000000014018ED9E: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018EDA2: cmp     [rbp+0D8h+var_58], 0
 * 000000014018EDAA: jz      short loc_14018EDB1
 * 000000014018EDAC: call    KiRestoreDebugRegisterState
 * 000000014018EDB1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014018EDB5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014018EDB9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018EDBD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018EDC1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014018EDC5: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014018EDC9: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018EDCD: mov     r10, [rbp+0D8h+var_100]
 * 000000014018EDD1: mov     r9, [rbp+0D8h+var_108]
 * 000000014018EDD5: mov     r8, [rbp+0D8h+var_110]
 * 000000014018EDD9: movzx   eax, byte ptr gs:27Dh
 * 000000014018EDE2: cmp     gs:27Ah, al
 * 000000014018EDEA: jz      short loc_14018EDFD
 * 000000014018EDEC: mov     gs:27Ah, al
 * 000000014018EDF4: mov     ecx, 48h ; 'H'
 * 000000014018EDF9: xor     edx, edx
 * 000000014018EDFB: wrmsr
 * 000000014018EDFD: btr     word ptr gs:278h, 2
 * 000000014018EE08: jnb     short loc_14018EE18
 * 000000014018EE0A: mov     eax, 1
 * 000000014018EE0F: xor     edx, edx
 * 000000014018EE11: mov     ecx, 49h ; 'I'
 * 000000014018EE16: wrmsr
 * 000000014018EE18: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018EE1C: mov     rcx, [rbp+0D8h+var_120]
 * 000000014018EE20: mov     rax, [rbp+0D8h+var_128]
 * 000000014018EE24: mov     rsp, rbp
 * 000000014018EE27: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018EE2E: add     rsp, 0E8h
 * 000000014018EE35: test    cs:KiKvaShadow, 1
 * 000000014018EE3C: jz      short loc_14018EE43
 * 000000014018EE3E: jmp     KiKernelExit
 * 000000014018EE43: swapgs
 * 000000014018EE46: iretq
 * 000000014018EE48: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018EE4C: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014018EE50: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014018EE54: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018EE58: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018EE5C: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014018EE60: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014018EE64: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018EE68: mov     r10, [rbp+0D8h+var_100]
 * 000000014018EE6C: mov     r9, [rbp+0D8h+var_108]
 * 000000014018EE70: mov     r8, [rbp+0D8h+var_110]
 * 000000014018EE74: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018EE78: mov     rcx, [rbp+0D8h+var_120]
 * 000000014018EE7C: mov     rax, [rbp+0D8h+var_128]
 * 000000014018EE80: mov     rsp, rbp
 * 000000014018EE83: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018EE8A: add     rsp, 0E8h
 * 000000014018EE91: iretq
 */
