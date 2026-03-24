/*
 * XREFs of KiPageFault @ 0x14018E600
 * Callers:
 *     KiPageFaultShadow @ 0x140297800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140191D40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140192600 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x140202380 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14024E0C0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14018E600
 * Reason: Hex-Rays returned no pseudocode for 0x14018E600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E600: push    rbp
 * 000000014018E601: sub     rsp, 158h
 * 000000014018E608: lea     rbp, [rsp+80h]
 * 000000014018E610: mov     [rbp+0D8h+var_12D], 1
 * 000000014018E614: mov     [rbp+0D8h+var_128], rax
 * 000000014018E618: mov     [rbp+0D8h+var_120], rcx
 * 000000014018E61C: mov     [rbp+0D8h+var_118], rdx
 * 000000014018E620: mov     [rbp+0D8h+var_110], r8
 * 000000014018E624: mov     [rbp+0D8h+var_108], r9
 * 000000014018E628: mov     [rbp+0D8h+var_100], r10
 * 000000014018E62C: mov     [rbp+0D8h+var_F8], r11
 * 000000014018E630: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018E637: jnz     short loc_14018E666
 * 000000014018E639: lfence
 * 000000014018E63C: test    byte ptr gs:278h, 1
 * 000000014018E645: jnz     short loc_14018E64F
 * 000000014018E647: lfence
 * 000000014018E64A: jmp     loc_14018E892
 * 000000014018E64F: movzx   eax, byte ptr gs:27Ah
 * 000000014018E658: mov     ecx, 48h ; 'H'
 * 000000014018E65D: xor     edx, edx
 * 000000014018E65F: wrmsr
 * 000000014018E661: jmp     loc_14018E892
 * 000000014018E666: test    cs:KiKvaShadow, 1
 * 000000014018E66D: jnz     short loc_14018E672
 * 000000014018E66F: swapgs
 * 000000014018E672: lfence
 * 000000014018E675: mov     r10, gs:188h
 * 000000014018E67E: mov     rcx, gs:188h
 * 000000014018E687: mov     rcx, [rcx+220h]
 * 000000014018E68E: mov     rcx, [rcx+838h]
 * 000000014018E695: mov     gs:270h, rcx
 * 000000014018E69E: movzx   eax, byte ptr gs:27Bh
 * 000000014018E6A7: cmp     gs:27Ah, al
 * 000000014018E6AF: jz      short loc_14018E6C2
 * 000000014018E6B1: mov     gs:27Ah, al
 * 000000014018E6B9: mov     ecx, 48h ; 'H'
 * 000000014018E6BE: xor     edx, edx
 * 000000014018E6C0: wrmsr
 * 000000014018E6C2: movzx   edx, byte ptr gs:278h
 * 000000014018E6CB: test    edx, 8
 * 000000014018E6D1: jz      short loc_14018E6E6
 * 000000014018E6D3: mov     eax, 1
 * 000000014018E6D8: xor     edx, edx
 * 000000014018E6DA: mov     ecx, 49h ; 'I'
 * 000000014018E6DF: wrmsr
 * 000000014018E6E1: jmp     loc_14018E824
 * 000000014018E6E6: test    edx, 2
 * 000000014018E6EC: jz      loc_14018E821
 * 000000014018E6F2: test    byte ptr gs:279h, 4
 * 000000014018E6FB: jnz     loc_14018E821
 * 000000014018E701: call    loc_14018E814
 * 000000014018E706: add     rsp, 8
 * 000000014018E70A: call    loc_14018E81D
 * 000000014018E70F: add     rsp, 8
 * 000000014018E713: call    loc_14018E706
 * 000000014018E718: add     rsp, 8
 * 000000014018E71C: call    loc_14018E70F
 * 000000014018E721: add     rsp, 8
 * 000000014018E725: call    loc_14018E718
 * 000000014018E72A: add     rsp, 8
 * 000000014018E72E: call    loc_14018E721
 * 000000014018E733: add     rsp, 8
 * 000000014018E737: call    loc_14018E72A
 * 000000014018E73C: add     rsp, 8
 * 000000014018E740: call    loc_14018E733
 * 000000014018E745: add     rsp, 8
 * 000000014018E749: call    loc_14018E73C
 * 000000014018E74E: add     rsp, 8
 * 000000014018E752: call    loc_14018E745
 * 000000014018E757: add     rsp, 8
 * 000000014018E75B: call    loc_14018E74E
 * 000000014018E760: add     rsp, 8
 * 000000014018E764: call    loc_14018E757
 * 000000014018E769: add     rsp, 8
 * 000000014018E76D: call    loc_14018E760
 * 000000014018E772: add     rsp, 8
 * 000000014018E776: call    loc_14018E769
 * 000000014018E77B: add     rsp, 8
 * 000000014018E77F: call    loc_14018E772
 * 000000014018E784: add     rsp, 8
 * 000000014018E788: call    loc_14018E77B
 * 000000014018E78D: add     rsp, 8
 * 000000014018E791: call    loc_14018E784
 * 000000014018E796: add     rsp, 8
 * 000000014018E79A: call    loc_14018E78D
 * 000000014018E79F: add     rsp, 8
 * 000000014018E7A3: call    loc_14018E796
 * 000000014018E7A8: add     rsp, 8
 * 000000014018E7AC: call    loc_14018E79F
 * 000000014018E7B1: add     rsp, 8
 * 000000014018E7B5: call    loc_14018E7A8
 * 000000014018E7BA: add     rsp, 8
 * 000000014018E7BE: call    loc_14018E7B1
 * 000000014018E7C3: add     rsp, 8
 * 000000014018E7C7: call    loc_14018E7BA
 * 000000014018E7CC: add     rsp, 8
 * 000000014018E7D0: call    loc_14018E7C3
 * 000000014018E7D5: add     rsp, 8
 * 000000014018E7D9: call    loc_14018E7CC
 * 000000014018E7DE: add     rsp, 8
 * 000000014018E7E2: call    loc_14018E7D5
 * 000000014018E7E7: add     rsp, 8
 * 000000014018E7EB: call    loc_14018E7DE
 * 000000014018E7F0: add     rsp, 8
 * 000000014018E7F4: call    loc_14018E7E7
 * 000000014018E7F9: add     rsp, 8
 * 000000014018E7FD: call    loc_14018E7F0
 * 000000014018E802: add     rsp, 8
 * 000000014018E806: call    loc_14018E7F9
 * 000000014018E80B: add     rsp, 8
 * 000000014018E80F: call    loc_14018E802
 * 000000014018E814: add     rsp, 8
 * 000000014018E818: call    loc_14018E80B
 * 000000014018E81D: add     rsp, 8
 * 000000014018E821: lfence
 * 000000014018E824: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014018E82C: jnz     short loc_14018E87D
 * 000000014018E82E: mov     ecx, 0C0000102h
 * 000000014018E833: rdmsr
 * 000000014018E835: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014018E838: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014018E83B: test    byte ptr [r10+3], 80h
 * 000000014018E840: jz      short loc_14018E87D
 * 000000014018E842: shl     rdx, 20h
 * 000000014018E846: or      rax, rdx
 * 000000014018E849: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E850: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E858: cmp     [r10+0F0h], rax
 * 000000014018E85F: jz      short loc_14018E87D
 * 000000014018E861: mov     rdx, [r10+1F0h]
 * 000000014018E868: bts     dword ptr [r10+74h], 8
 * 000000014018E86E: dec     word ptr [r10+1E6h]
 * 000000014018E876: mov     [rdx+80h], rax
 * 000000014018E87D: test    byte ptr [r10+3], 3
 * 000000014018E882: mov     [rbp+0D8h+var_58], 0
 * 000000014018E88B: jz      short loc_14018E892
 * 000000014018E88D: call    KiSaveDebugRegisterState
 * 000000014018E892: cld
 * 000000014018E893: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018E897: ldmxcsr dword ptr gs:180h
 * 000000014018E8A0: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018E8A4: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014018E8A8: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014018E8AC: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014018E8B0: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018E8B4: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014018E8B8: mov     eax, [rbp+0E0h]
 * 000000014018E8BE: mov     rcx, cr2
 * 000000014018E8C1: test    [rbp+0D8h+arg_10], 200h
 * 000000014018E8CB: jz      short loc_14018E8CE
 * 000000014018E8CD: sti
 * 000000014018E8CE: mov     r9, gs:188h
 * 000000014018E8D7: bt      dword ptr [r9+74h], 8
 * 000000014018E8DD: jnb     short loc_14018E8ED
 * 000000014018E8DF: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018E8E6: jz      short loc_14018E8ED
 * 000000014018E8E8: call    KiUmsTrapEntry
 * 000000014018E8ED: mov     [rbp+0D8h+var_88], rcx
 * 000000014018E8F1: bt      [rbp+0D8h+arg_10], 9
 * 000000014018E8F9: jnb     loc_14018EA2B
 * 000000014018E8FF: lea     r9, [rbp+0D8h+var_158]
 * 000000014018E903: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014018E90A: and     r8b, 1
 * 000000014018E90E: mov     rdx, rcx; BugCheckParameter1
 * 000000014018E911: mov     ecx, eax; BugCheckParameter2
 * 000000014018E913: shr     eax, 1
 * 000000014018E915: and     eax, 9
 * 000000014018E918: mov     [rbp+0D8h+var_12E], al
 * 000000014018E91B: call    MmAccessFault
 * 000000014018E920: test    eax, eax
 * 000000014018E922: jl      short loc_14018E95A
 * 000000014018E924: cmp     cs:PsWatchEnabled, 0
 * 000000014018E92B: jz      short loc_14018E93F
 * 000000014018E92D: mov     r8, [rbp+0D8h+var_88]
 * 000000014018E931: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014018E938: mov     ecx, eax
 * 000000014018E93A: call    PsWatchWorkingSet
 * 000000014018E93F: cmp     cs:KdpOweBreakpoint, 0
 * 000000014018E946: jz      loc_14018EA31
 * 000000014018E94C: mov     rcx, [rbp+0D8h+var_88]
 * 000000014018E950: call    KdSetOwedBreakpoints
 * 000000014018E955: jmp     loc_14018EA31
 * 000000014018E95A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018E961: jz      short loc_14018E9B5
 * 000000014018E963: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014018E96B: jnz     short loc_14018E9AB
 * 000000014018E96D: mov     r9, gs:188h
 * 000000014018E976: test    byte ptr [r9+3], 4
 * 000000014018E97B: jz      short loc_14018E986
 * 000000014018E97D: mov     r8, [r9+7B0h]
 * 000000014018E984: jmp     short loc_14018E98F
 * 000000014018E986: mov     r8, gs:30h
 * 000000014018E98F: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014018E993: jz      short loc_14018E9B5
 * 000000014018E995: mov     ecx, 0C0000102h
 * 000000014018E99A: mov     eax, r8d
 * 000000014018E99D: shr     r8, 20h
 * 000000014018E9A1: mov     edx, r8d
 * 000000014018E9A4: wrmsr
 * 000000014018E9A6: jmp     loc_14018EA31
 * 000000014018E9AB: mov     rcx, [rbp+0D8h+var_88]
 * 000000014018E9AF: shr     rcx, 20h
 * 000000014018E9B3: jnz     short loc_14018EA31
 * 000000014018E9B5: mov     ecx, eax
 * 000000014018E9B7: mov     edx, 2
 * 000000014018E9BC: cmp     ecx, 0D0000006h
 * 000000014018E9C2: jz      short loc_14018EA05
 * 000000014018E9C4: cmp     ecx, 0C0000005h
 * 000000014018E9CA: jz      short loc_14018E9EB
 * 000000014018E9CC: cmp     ecx, 80000001h
 * 000000014018E9D2: jz      short loc_14018E9F0
 * 000000014018E9D4: cmp     ecx, 0C00000FDh
 * 000000014018E9DA: jz      short loc_14018E9F0
 * 000000014018E9DC: mov     ecx, 0C0000006h
 * 000000014018E9E1: mov     edx, 3
 * 000000014018E9E6: mov     r11d, eax
 * 000000014018E9E9: jmp     short loc_14018E9F0
 * 000000014018E9EB: mov     ecx, 10000004h
 * 000000014018E9F0: mov     r10, [rbp+0D8h+var_88]
 * 000000014018E9F4: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014018E9F9: mov     r8, [rbp+0D8h+arg_0]
 * 000000014018EA00: call    KiExceptionDispatch
 * 000000014018EA05: mov     rax, cr8
 * 000000014018EA09: mov     r10, [rbp+0D8h+arg_0]
 * 000000014018EA10: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014018EA15: and     eax, 0FFh
 * 000000014018EA1A: mov     r8, rax
 * 000000014018EA1D: mov     rdx, [rbp+0D8h+var_88]
 * 000000014018EA21: mov     ecx, 0Ah
 * 000000014018EA26: call    KiBugCheckDispatch
 * 000000014018EA2B: xor     eax, eax
 * 000000014018EA2D: mov     al, 0FFh
 * 000000014018EA2F: jmp     short loc_14018EA09
 * 000000014018EA31: mov     rax, cr8
 * 000000014018EA35: or      eax, eax
 * 000000014018EA37: mov     [rbp+0D8h+var_138], eax
 * 000000014018EA3A: jnz     short loc_14018EA45
 * 000000014018EA3C: mov     ecx, 1
 * 000000014018EA41: mov     cr8, rcx
 * 000000014018EA45: lea     rcx, [rbp+0D8h+var_158]
 * 000000014018EA49: call    KiCheckForSListAddress
 * 000000014018EA4E: mov     ecx, [rbp+0D8h+var_138]
 * 000000014018EA51: or      ecx, ecx
 * 000000014018EA53: jnz     short loc_14018EA59
 * 000000014018EA55: mov     cr8, rcx
 * 000000014018EA59: cli
 * 000000014018EA5A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014018EA61: jz      loc_14018EB88
 * 000000014018EA67: mov     rcx, gs:188h
 * 000000014018EA70: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018EA77: jz      short loc_14018EA92
 * 000000014018EA79: mov     ecx, 1
 * 000000014018EA7E: mov     cr8, rcx
 * 000000014018EA82: sti
 * 000000014018EA83: call    KiInitiateUserApc
 * 000000014018EA88: cli
 * 000000014018EA89: mov     ecx, 0
 * 000000014018EA8E: mov     cr8, rcx
 * 000000014018EA92: mov     rcx, gs:188h
 * 000000014018EA9B: test    dword ptr [rcx], 8000000h
 * 000000014018EAA1: jz      short loc_14018EAA8
 * 000000014018EAA3: call    KiRestoreSetContextState
 * 000000014018EAA8: mov     rcx, gs:188h
 * 000000014018EAB1: test    dword ptr [rcx], 40010000h
 * 000000014018EAB7: jz      short loc_14018EADE
 * 000000014018EAB9: test    byte ptr [rcx+2], 1
 * 000000014018EABD: jz      short loc_14018EACD
 * 000000014018EABF: call    KiCopyCounters
 * 000000014018EAC4: mov     rcx, gs:188h
 * 000000014018EACD: test    byte ptr [rcx+3], 40h
 * 000000014018EAD1: jz      short loc_14018EADE
 * 000000014018EAD3: lea     rsp, [rbp-80h]
 * 000000014018EAD7: mov     cl, 1
 * 000000014018EAD9: call    KiUmsExit
 * 000000014018EADE: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018EAE2: cmp     [rbp+0D8h+var_58], 0
 * 000000014018EAEA: jz      short loc_14018EAF1
 * 000000014018EAEC: call    KiRestoreDebugRegisterState
 * 000000014018EAF1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014018EAF5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014018EAF9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018EAFD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018EB01: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014018EB05: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014018EB09: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018EB0D: mov     r10, [rbp+0D8h+var_100]
 * 000000014018EB11: mov     r9, [rbp+0D8h+var_108]
 * 000000014018EB15: mov     r8, [rbp+0D8h+var_110]
 * 000000014018EB19: movzx   eax, byte ptr gs:27Dh
 * 000000014018EB22: cmp     gs:27Ah, al
 * 000000014018EB2A: jz      short loc_14018EB3D
 * 000000014018EB2C: mov     gs:27Ah, al
 * 000000014018EB34: mov     ecx, 48h ; 'H'
 * 000000014018EB39: xor     edx, edx
 * 000000014018EB3B: wrmsr
 * 000000014018EB3D: btr     word ptr gs:278h, 2
 * 000000014018EB48: jnb     short loc_14018EB58
 * 000000014018EB4A: mov     eax, 1
 * 000000014018EB4F: xor     edx, edx
 * 000000014018EB51: mov     ecx, 49h ; 'I'
 * 000000014018EB56: wrmsr
 * 000000014018EB58: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018EB5C: mov     rcx, [rbp+0D8h+var_120]
 * 000000014018EB60: mov     rax, [rbp+0D8h+var_128]
 * 000000014018EB64: mov     rsp, rbp
 * 000000014018EB67: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018EB6E: add     rsp, 0E8h
 * 000000014018EB75: test    cs:KiKvaShadow, 1
 * 000000014018EB7C: jz      short loc_14018EB83
 * 000000014018EB7E: jmp     KiKernelExit
 * 000000014018EB83: swapgs
 * 000000014018EB86: iretq
 * 000000014018EB88: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018EB8C: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014018EB90: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014018EB94: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018EB98: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018EB9C: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014018EBA0: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014018EBA4: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018EBA8: mov     r10, [rbp+0D8h+var_100]
 * 000000014018EBAC: mov     r9, [rbp+0D8h+var_108]
 * 000000014018EBB0: mov     r8, [rbp+0D8h+var_110]
 * 000000014018EBB4: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018EBB8: mov     rcx, [rbp+0D8h+var_120]
 * 000000014018EBBC: mov     rax, [rbp+0D8h+var_128]
 * 000000014018EBC0: mov     rsp, rbp
 * 000000014018EBC3: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018EBCA: add     rsp, 0E8h
 * 000000014018EBD1: iretq
 */
