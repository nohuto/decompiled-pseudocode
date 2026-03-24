/*
 * XREFs of KxDebugTrapOrFault @ 0x1401B56C0
 * Callers:
 *     KiDebugTrapOrFault @ 0x1401B5600 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401B56C0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401B56C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401B56C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B56C0: sub     rsp, 8
 * 00000001401B56C4: push    rbp
 * 00000001401B56C5: sub     rsp, 158h
 * 00000001401B56CC: lea     rbp, [rsp+80h]
 * 00000001401B56D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401B56D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401B56DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B56E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B56E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401B56E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401B56EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401B56F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401B56F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401B56FB: jnz     short loc_1401B572A
 * 00000001401B56FD: lfence
 * 00000001401B5700: test    byte ptr gs:278h, 1
 * 00000001401B5709: jnz     short loc_1401B5713
 * 00000001401B570B: lfence
 * 00000001401B570E: jmp     loc_1401B5946
 * 00000001401B5713: movzx   eax, byte ptr gs:27Ah
 * 00000001401B571C: mov     ecx, 48h ; 'H'
 * 00000001401B5721: xor     edx, edx
 * 00000001401B5723: wrmsr
 * 00000001401B5725: jmp     loc_1401B5946
 * 00000001401B572A: test    cs:KiKvaShadow, 1
 * 00000001401B5731: jnz     short loc_1401B5736
 * 00000001401B5733: swapgs
 * 00000001401B5736: lfence
 * 00000001401B5739: mov     r10, gs:188h
 * 00000001401B5742: mov     rcx, gs:188h
 * 00000001401B574B: mov     rcx, [rcx+220h]
 * 00000001401B5752: mov     rcx, [rcx+838h]
 * 00000001401B5759: mov     gs:270h, rcx
 * 00000001401B5762: movzx   eax, byte ptr gs:27Bh
 * 00000001401B576B: cmp     gs:27Ah, al
 * 00000001401B5773: jz      short loc_1401B5786
 * 00000001401B5775: mov     gs:27Ah, al
 * 00000001401B577D: mov     ecx, 48h ; 'H'
 * 00000001401B5782: xor     edx, edx
 * 00000001401B5784: wrmsr
 * 00000001401B5786: movzx   edx, byte ptr gs:278h
 * 00000001401B578F: test    edx, 8
 * 00000001401B5795: jz      short loc_1401B57AA
 * 00000001401B5797: mov     eax, 1
 * 00000001401B579C: xor     edx, edx
 * 00000001401B579E: mov     ecx, 49h ; 'I'
 * 00000001401B57A3: wrmsr
 * 00000001401B57A5: jmp     loc_1401B58E8
 * 00000001401B57AA: test    edx, 2
 * 00000001401B57B0: jz      loc_1401B58E5
 * 00000001401B57B6: test    byte ptr gs:279h, 4
 * 00000001401B57BF: jnz     loc_1401B58E5
 * 00000001401B57C5: call    loc_1401B58D8
 * 00000001401B57CA: add     rsp, 8
 * 00000001401B57CE: call    loc_1401B58E1
 * 00000001401B57D3: add     rsp, 8
 * 00000001401B57D7: call    loc_1401B57CA
 * 00000001401B57DC: add     rsp, 8
 * 00000001401B57E0: call    loc_1401B57D3
 * 00000001401B57E5: add     rsp, 8
 * 00000001401B57E9: call    loc_1401B57DC
 * 00000001401B57EE: add     rsp, 8
 * 00000001401B57F2: call    loc_1401B57E5
 * 00000001401B57F7: add     rsp, 8
 * 00000001401B57FB: call    loc_1401B57EE
 * 00000001401B5800: add     rsp, 8
 * 00000001401B5804: call    loc_1401B57F7
 * 00000001401B5809: add     rsp, 8
 * 00000001401B580D: call    loc_1401B5800
 * 00000001401B5812: add     rsp, 8
 * 00000001401B5816: call    loc_1401B5809
 * 00000001401B581B: add     rsp, 8
 * 00000001401B581F: call    loc_1401B5812
 * 00000001401B5824: add     rsp, 8
 * 00000001401B5828: call    loc_1401B581B
 * 00000001401B582D: add     rsp, 8
 * 00000001401B5831: call    loc_1401B5824
 * 00000001401B5836: add     rsp, 8
 * 00000001401B583A: call    loc_1401B582D
 * 00000001401B583F: add     rsp, 8
 * 00000001401B5843: call    loc_1401B5836
 * 00000001401B5848: add     rsp, 8
 * 00000001401B584C: call    loc_1401B583F
 * 00000001401B5851: add     rsp, 8
 * 00000001401B5855: call    loc_1401B5848
 * 00000001401B585A: add     rsp, 8
 * 00000001401B585E: call    loc_1401B5851
 * 00000001401B5863: add     rsp, 8
 * 00000001401B5867: call    loc_1401B585A
 * 00000001401B586C: add     rsp, 8
 * 00000001401B5870: call    loc_1401B5863
 * 00000001401B5875: add     rsp, 8
 * 00000001401B5879: call    loc_1401B586C
 * 00000001401B587E: add     rsp, 8
 * 00000001401B5882: call    loc_1401B5875
 * 00000001401B5887: add     rsp, 8
 * 00000001401B588B: call    loc_1401B587E
 * 00000001401B5890: add     rsp, 8
 * 00000001401B5894: call    loc_1401B5887
 * 00000001401B5899: add     rsp, 8
 * 00000001401B589D: call    loc_1401B5890
 * 00000001401B58A2: add     rsp, 8
 * 00000001401B58A6: call    loc_1401B5899
 * 00000001401B58AB: add     rsp, 8
 * 00000001401B58AF: call    loc_1401B58A2
 * 00000001401B58B4: add     rsp, 8
 * 00000001401B58B8: call    loc_1401B58AB
 * 00000001401B58BD: add     rsp, 8
 * 00000001401B58C1: call    loc_1401B58B4
 * 00000001401B58C6: add     rsp, 8
 * 00000001401B58CA: call    loc_1401B58BD
 * 00000001401B58CF: add     rsp, 8
 * 00000001401B58D3: call    loc_1401B58C6
 * 00000001401B58D8: add     rsp, 8
 * 00000001401B58DC: call    loc_1401B58CF
 * 00000001401B58E1: add     rsp, 8
 * 00000001401B58E5: lfence
 * 00000001401B58E8: test    byte ptr [r10+3], 80h
 * 00000001401B58ED: jz      short loc_1401B5931
 * 00000001401B58EF: mov     ecx, 0C0000102h
 * 00000001401B58F4: rdmsr
 * 00000001401B58F6: shl     rdx, 20h
 * 00000001401B58FA: or      rax, rdx
 * 00000001401B58FD: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B5904: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B590C: cmp     [r10+0F0h], rax
 * 00000001401B5913: jz      short loc_1401B5931
 * 00000001401B5915: mov     rdx, [r10+1F0h]
 * 00000001401B591C: bts     dword ptr [r10+74h], 8
 * 00000001401B5922: dec     word ptr [r10+1E6h]
 * 00000001401B592A: mov     [rdx+80h], rax
 * 00000001401B5931: test    byte ptr [r10+3], 3
 * 00000001401B5936: mov     [rbp+0E8h+var_68], 0
 * 00000001401B593F: jz      short loc_1401B5946
 * 00000001401B5941: call    KiSaveDebugRegisterState
 * 00000001401B5946: cld
 * 00000001401B5947: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B594B: ldmxcsr dword ptr gs:180h
 * 00000001401B5954: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B5958: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B595C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B5960: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B5964: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B5968: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B596C: test    [rbp+0E8h+arg_8], 200h
 * 00000001401B5976: jz      short loc_1401B5979
 * 00000001401B5978: sti
 * 00000001401B5979: test    cs:KiCpuTracingFlags, 2
 * 00000001401B5983: jz      short loc_1401B5998
 * 00000001401B5985: mov     ecx, 1D9h
 * 00000001401B598A: rdmsr
 * 00000001401B598C: or      eax, 1
 * 00000001401B598F: wrmsr
 * 00000001401B5991: xor     edx, edx
 * 00000001401B5993: jmp     loc_1401B5A67
 * 00000001401B5998: xor     edx, edx
 * 00000001401B599A: test    [rbp+0E8h+arg_8], 100h
 * 00000001401B59A4: jz      loc_1401B5A67
 * 00000001401B59AA: test    byte ptr gs:6422h, 2
 * 00000001401B59B3: jz      loc_1401B5A67
 * 00000001401B59B9: test    [rbp+0E8h+arg_0], 1
 * 00000001401B59C0: jnz     short loc_1401B5A19
 * 00000001401B59C2: mov     rax, dr7
 * 00000001401B59C5: test    ax, 200h
 * 00000001401B59C9: jz      loc_1401B5A67
 * 00000001401B59CF: test    ax, 100h
 * 00000001401B59D3: jz      loc_1401B5A67
 * 00000001401B59D9: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401B59E0: or      r8d, r8d
 * 00000001401B59E3: jz      short loc_1401B59ED
 * 00000001401B59E5: mov     ecx, r8d
 * 00000001401B59E8: rdmsr
 * 00000001401B59EA: mov     r8d, eax
 * 00000001401B59ED: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401B59F3: add     ecx, r8d
 * 00000001401B59F6: rdmsr
 * 00000001401B59F8: mov     r9d, eax
 * 00000001401B59FB: shl     rdx, 20h
 * 00000001401B59FF: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401B5A05: or      r9, rdx
 * 00000001401B5A08: add     ecx, r8d
 * 00000001401B5A0B: rdmsr
 * 00000001401B5A0D: mov     r10d, eax
 * 00000001401B5A10: shl     rdx, 20h
 * 00000001401B5A14: or      r10, rdx
 * 00000001401B5A17: jmp     short loc_1401B5A62
 * 00000001401B5A19: test    [rbp+0E8h+var_68], 200h
 * 00000001401B5A22: jz      short loc_1401B5A67
 * 00000001401B5A24: test    [rbp+0E8h+var_68], 100h
 * 00000001401B5A2D: jz      short loc_1401B5A67
 * 00000001401B5A2F: and     [rbp+0E8h+var_40], 0
 * 00000001401B5A37: and     [rbp+0E8h+var_48], 0
 * 00000001401B5A3F: mov     rcx, cs:MmUserProbeAddress
 * 00000001401B5A46: mov     r9, [rbp+0E8h+var_50]
 * 00000001401B5A4D: cmp     r9, rcx
 * 00000001401B5A50: cmovnb  r9, rcx
 * 00000001401B5A54: mov     r10, [rbp+0E8h+var_58]
 * 00000001401B5A5B: cmp     r10, rcx
 * 00000001401B5A5E: cmovnb  r10, rcx
 * 00000001401B5A62: mov     edx, 2
 * 00000001401B5A67: mov     ecx, 80000004h
 * 00000001401B5A6C: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001401B5A76: mov     r8, [rbp+0E8h]
 * 00000001401B5A7D: call    KiExceptionDispatch
 * 00000001401B5A82: nop
 * 00000001401B5A83: retn
 */
