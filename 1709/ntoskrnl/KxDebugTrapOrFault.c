/*
 * XREFs of KxDebugTrapOrFault @ 0x14018B9C0
 * Callers:
 *     KiDebugTrapOrFault @ 0x14018B900 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14018B9C0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14018B9C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018B9C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018B9C0: sub     rsp, 8
 * 000000014018B9C4: push    rbp
 * 000000014018B9C5: sub     rsp, 158h
 * 000000014018B9CC: lea     rbp, [rsp+80h]
 * 000000014018B9D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018B9D8: mov     [rbp+0E8h+var_138], rax
 * 000000014018B9DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018B9E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018B9E4: mov     [rbp+0E8h+var_120], r8
 * 000000014018B9E8: mov     [rbp+0E8h+var_118], r9
 * 000000014018B9EC: mov     [rbp+0E8h+var_110], r10
 * 000000014018B9F0: mov     [rbp+0E8h+var_108], r11
 * 000000014018B9F4: test    [rbp+0E8h+arg_0], 1
 * 000000014018B9FB: jnz     short loc_14018BA2A
 * 000000014018B9FD: lfence
 * 000000014018BA00: test    byte ptr gs:278h, 1
 * 000000014018BA09: jnz     short loc_14018BA13
 * 000000014018BA0B: lfence
 * 000000014018BA0E: jmp     loc_14018BC46
 * 000000014018BA13: movzx   eax, byte ptr gs:27Ah
 * 000000014018BA1C: mov     ecx, 48h ; 'H'
 * 000000014018BA21: xor     edx, edx
 * 000000014018BA23: wrmsr
 * 000000014018BA25: jmp     loc_14018BC46
 * 000000014018BA2A: test    cs:KiKvaShadow, 1
 * 000000014018BA31: jnz     short loc_14018BA36
 * 000000014018BA33: swapgs
 * 000000014018BA36: lfence
 * 000000014018BA39: mov     r10, gs:188h
 * 000000014018BA42: mov     rcx, gs:188h
 * 000000014018BA4B: mov     rcx, [rcx+220h]
 * 000000014018BA52: mov     rcx, [rcx+838h]
 * 000000014018BA59: mov     gs:270h, rcx
 * 000000014018BA62: movzx   eax, byte ptr gs:27Bh
 * 000000014018BA6B: cmp     gs:27Ah, al
 * 000000014018BA73: jz      short loc_14018BA86
 * 000000014018BA75: mov     gs:27Ah, al
 * 000000014018BA7D: mov     ecx, 48h ; 'H'
 * 000000014018BA82: xor     edx, edx
 * 000000014018BA84: wrmsr
 * 000000014018BA86: movzx   edx, byte ptr gs:278h
 * 000000014018BA8F: test    edx, 8
 * 000000014018BA95: jz      short loc_14018BAAA
 * 000000014018BA97: mov     eax, 1
 * 000000014018BA9C: xor     edx, edx
 * 000000014018BA9E: mov     ecx, 49h ; 'I'
 * 000000014018BAA3: wrmsr
 * 000000014018BAA5: jmp     loc_14018BBE8
 * 000000014018BAAA: test    edx, 2
 * 000000014018BAB0: jz      loc_14018BBE5
 * 000000014018BAB6: test    byte ptr gs:279h, 4
 * 000000014018BABF: jnz     loc_14018BBE5
 * 000000014018BAC5: call    loc_14018BBD8
 * 000000014018BACA: add     rsp, 8
 * 000000014018BACE: call    loc_14018BBE1
 * 000000014018BAD3: add     rsp, 8
 * 000000014018BAD7: call    loc_14018BACA
 * 000000014018BADC: add     rsp, 8
 * 000000014018BAE0: call    loc_14018BAD3
 * 000000014018BAE5: add     rsp, 8
 * 000000014018BAE9: call    loc_14018BADC
 * 000000014018BAEE: add     rsp, 8
 * 000000014018BAF2: call    loc_14018BAE5
 * 000000014018BAF7: add     rsp, 8
 * 000000014018BAFB: call    loc_14018BAEE
 * 000000014018BB00: add     rsp, 8
 * 000000014018BB04: call    loc_14018BAF7
 * 000000014018BB09: add     rsp, 8
 * 000000014018BB0D: call    loc_14018BB00
 * 000000014018BB12: add     rsp, 8
 * 000000014018BB16: call    loc_14018BB09
 * 000000014018BB1B: add     rsp, 8
 * 000000014018BB1F: call    loc_14018BB12
 * 000000014018BB24: add     rsp, 8
 * 000000014018BB28: call    loc_14018BB1B
 * 000000014018BB2D: add     rsp, 8
 * 000000014018BB31: call    loc_14018BB24
 * 000000014018BB36: add     rsp, 8
 * 000000014018BB3A: call    loc_14018BB2D
 * 000000014018BB3F: add     rsp, 8
 * 000000014018BB43: call    loc_14018BB36
 * 000000014018BB48: add     rsp, 8
 * 000000014018BB4C: call    loc_14018BB3F
 * 000000014018BB51: add     rsp, 8
 * 000000014018BB55: call    loc_14018BB48
 * 000000014018BB5A: add     rsp, 8
 * 000000014018BB5E: call    loc_14018BB51
 * 000000014018BB63: add     rsp, 8
 * 000000014018BB67: call    loc_14018BB5A
 * 000000014018BB6C: add     rsp, 8
 * 000000014018BB70: call    loc_14018BB63
 * 000000014018BB75: add     rsp, 8
 * 000000014018BB79: call    loc_14018BB6C
 * 000000014018BB7E: add     rsp, 8
 * 000000014018BB82: call    loc_14018BB75
 * 000000014018BB87: add     rsp, 8
 * 000000014018BB8B: call    loc_14018BB7E
 * 000000014018BB90: add     rsp, 8
 * 000000014018BB94: call    loc_14018BB87
 * 000000014018BB99: add     rsp, 8
 * 000000014018BB9D: call    loc_14018BB90
 * 000000014018BBA2: add     rsp, 8
 * 000000014018BBA6: call    loc_14018BB99
 * 000000014018BBAB: add     rsp, 8
 * 000000014018BBAF: call    loc_14018BBA2
 * 000000014018BBB4: add     rsp, 8
 * 000000014018BBB8: call    loc_14018BBAB
 * 000000014018BBBD: add     rsp, 8
 * 000000014018BBC1: call    loc_14018BBB4
 * 000000014018BBC6: add     rsp, 8
 * 000000014018BBCA: call    loc_14018BBBD
 * 000000014018BBCF: add     rsp, 8
 * 000000014018BBD3: call    loc_14018BBC6
 * 000000014018BBD8: add     rsp, 8
 * 000000014018BBDC: call    loc_14018BBCF
 * 000000014018BBE1: add     rsp, 8
 * 000000014018BBE5: lfence
 * 000000014018BBE8: test    byte ptr [r10+3], 80h
 * 000000014018BBED: jz      short loc_14018BC31
 * 000000014018BBEF: mov     ecx, 0C0000102h
 * 000000014018BBF4: rdmsr
 * 000000014018BBF6: shl     rdx, 20h
 * 000000014018BBFA: or      rax, rdx
 * 000000014018BBFD: cmp     rax, cs:MmUserProbeAddress
 * 000000014018BC04: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018BC0C: cmp     [r10+0F0h], rax
 * 000000014018BC13: jz      short loc_14018BC31
 * 000000014018BC15: mov     rdx, [r10+1F0h]
 * 000000014018BC1C: bts     dword ptr [r10+74h], 8
 * 000000014018BC22: dec     word ptr [r10+1E6h]
 * 000000014018BC2A: mov     [rdx+80h], rax
 * 000000014018BC31: test    byte ptr [r10+3], 3
 * 000000014018BC36: mov     [rbp+0E8h+var_68], 0
 * 000000014018BC3F: jz      short loc_14018BC46
 * 000000014018BC41: call    KiSaveDebugRegisterState
 * 000000014018BC46: cld
 * 000000014018BC47: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018BC4B: ldmxcsr dword ptr gs:180h
 * 000000014018BC54: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018BC58: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018BC5C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018BC60: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018BC64: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018BC68: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018BC6C: test    [rbp+0E8h+arg_8], 200h
 * 000000014018BC76: jz      short loc_14018BC79
 * 000000014018BC78: sti
 * 000000014018BC79: cmp     cs:KiLastBranchRecordInUse, 0
 * 000000014018BC80: jz      short loc_14018BC95
 * 000000014018BC82: mov     ecx, 1D9h
 * 000000014018BC87: rdmsr
 * 000000014018BC89: or      eax, 1
 * 000000014018BC8C: wrmsr
 * 000000014018BC8E: xor     edx, edx
 * 000000014018BC90: jmp     loc_14018BD64
 * 000000014018BC95: xor     edx, edx
 * 000000014018BC97: test    [rbp+0E8h+arg_8], 100h
 * 000000014018BCA1: jz      loc_14018BD64
 * 000000014018BCA7: test    byte ptr gs:6422h, 2
 * 000000014018BCB0: jz      loc_14018BD64
 * 000000014018BCB6: test    [rbp+0E8h+arg_0], 1
 * 000000014018BCBD: jnz     short loc_14018BD16
 * 000000014018BCBF: mov     rax, dr7
 * 000000014018BCC2: test    ax, 200h
 * 000000014018BCC6: jz      loc_14018BD64
 * 000000014018BCCC: test    ax, 100h
 * 000000014018BCD0: jz      loc_14018BD64
 * 000000014018BCD6: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014018BCDD: or      r8d, r8d
 * 000000014018BCE0: jz      short loc_14018BCEA
 * 000000014018BCE2: mov     ecx, r8d
 * 000000014018BCE5: rdmsr
 * 000000014018BCE7: mov     r8d, eax
 * 000000014018BCEA: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014018BCF0: add     ecx, r8d
 * 000000014018BCF3: rdmsr
 * 000000014018BCF5: mov     r9d, eax
 * 000000014018BCF8: shl     rdx, 20h
 * 000000014018BCFC: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014018BD02: or      r9, rdx
 * 000000014018BD05: add     ecx, r8d
 * 000000014018BD08: rdmsr
 * 000000014018BD0A: mov     r10d, eax
 * 000000014018BD0D: shl     rdx, 20h
 * 000000014018BD11: or      r10, rdx
 * 000000014018BD14: jmp     short loc_14018BD5F
 * 000000014018BD16: test    [rbp+0E8h+var_68], 200h
 * 000000014018BD1F: jz      short loc_14018BD64
 * 000000014018BD21: test    [rbp+0E8h+var_68], 100h
 * 000000014018BD2A: jz      short loc_14018BD64
 * 000000014018BD2C: and     [rbp+0E8h+var_40], 0
 * 000000014018BD34: and     [rbp+0E8h+var_48], 0
 * 000000014018BD3C: mov     rcx, cs:MmUserProbeAddress
 * 000000014018BD43: mov     r9, [rbp+0E8h+var_50]
 * 000000014018BD4A: cmp     r9, rcx
 * 000000014018BD4D: cmovnb  r9, rcx
 * 000000014018BD51: mov     r10, [rbp+0E8h+var_58]
 * 000000014018BD58: cmp     r10, rcx
 * 000000014018BD5B: cmovnb  r10, rcx
 * 000000014018BD5F: mov     edx, 2
 * 000000014018BD64: mov     ecx, 80000004h
 * 000000014018BD69: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014018BD73: mov     r8, [rbp+0E8h]
 * 000000014018BD7A: call    KiExceptionDispatch
 * 000000014018BD7F: nop
 * 000000014018BD80: retn
 */
