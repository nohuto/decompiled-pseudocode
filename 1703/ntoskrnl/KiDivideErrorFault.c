/*
 * XREFs of KiDivideErrorFault @ 0x14018B900
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x14026C100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14018B900 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14018B900
 * Reason: Hex-Rays returned no pseudocode for 0x14018B900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018B900: sub     rsp, 8
 * 000000014018B904: push    rbp
 * 000000014018B905: sub     rsp, 158h
 * 000000014018B90C: lea     rbp, [rsp+80h]
 * 000000014018B914: mov     [rbp+0E8h+var_13D], 1
 * 000000014018B918: mov     [rbp+0E8h+var_138], rax
 * 000000014018B91C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018B920: mov     [rbp+0E8h+var_128], rdx
 * 000000014018B924: mov     [rbp+0E8h+var_120], r8
 * 000000014018B928: mov     [rbp+0E8h+var_118], r9
 * 000000014018B92C: mov     [rbp+0E8h+var_110], r10
 * 000000014018B930: mov     [rbp+0E8h+var_108], r11
 * 000000014018B934: test    [rbp+0E8h+arg_0], 1
 * 000000014018B93B: jnz     short loc_14018B96A
 * 000000014018B93D: lfence
 * 000000014018B940: test    byte ptr gs:278h, 1
 * 000000014018B949: jnz     short loc_14018B953
 * 000000014018B94B: lfence
 * 000000014018B94E: jmp     loc_14018BB86
 * 000000014018B953: movzx   eax, byte ptr gs:27Ah
 * 000000014018B95C: mov     ecx, 48h ; 'H'
 * 000000014018B961: xor     edx, edx
 * 000000014018B963: wrmsr
 * 000000014018B965: jmp     loc_14018BB86
 * 000000014018B96A: test    cs:KiKvaShadow, 1
 * 000000014018B971: jnz     short loc_14018B976
 * 000000014018B973: swapgs
 * 000000014018B976: lfence
 * 000000014018B979: mov     r10, gs:188h
 * 000000014018B982: mov     rcx, gs:188h
 * 000000014018B98B: mov     rcx, [rcx+220h]
 * 000000014018B992: mov     rcx, [rcx+818h]
 * 000000014018B999: mov     gs:270h, rcx
 * 000000014018B9A2: movzx   eax, byte ptr gs:27Bh
 * 000000014018B9AB: cmp     gs:27Ah, al
 * 000000014018B9B3: jz      short loc_14018B9C6
 * 000000014018B9B5: mov     gs:27Ah, al
 * 000000014018B9BD: mov     ecx, 48h ; 'H'
 * 000000014018B9C2: xor     edx, edx
 * 000000014018B9C4: wrmsr
 * 000000014018B9C6: movzx   edx, byte ptr gs:278h
 * 000000014018B9CF: test    edx, 8
 * 000000014018B9D5: jz      short loc_14018B9EA
 * 000000014018B9D7: mov     eax, 1
 * 000000014018B9DC: xor     edx, edx
 * 000000014018B9DE: mov     ecx, 49h ; 'I'
 * 000000014018B9E3: wrmsr
 * 000000014018B9E5: jmp     loc_14018BB28
 * 000000014018B9EA: test    edx, 2
 * 000000014018B9F0: jz      loc_14018BB25
 * 000000014018B9F6: test    byte ptr gs:279h, 4
 * 000000014018B9FF: jnz     loc_14018BB25
 * 000000014018BA05: call    loc_14018BB18
 * 000000014018BA0A: add     rsp, 8
 * 000000014018BA0E: call    loc_14018BB21
 * 000000014018BA13: add     rsp, 8
 * 000000014018BA17: call    loc_14018BA0A
 * 000000014018BA1C: add     rsp, 8
 * 000000014018BA20: call    loc_14018BA13
 * 000000014018BA25: add     rsp, 8
 * 000000014018BA29: call    loc_14018BA1C
 * 000000014018BA2E: add     rsp, 8
 * 000000014018BA32: call    loc_14018BA25
 * 000000014018BA37: add     rsp, 8
 * 000000014018BA3B: call    loc_14018BA2E
 * 000000014018BA40: add     rsp, 8
 * 000000014018BA44: call    loc_14018BA37
 * 000000014018BA49: add     rsp, 8
 * 000000014018BA4D: call    loc_14018BA40
 * 000000014018BA52: add     rsp, 8
 * 000000014018BA56: call    loc_14018BA49
 * 000000014018BA5B: add     rsp, 8
 * 000000014018BA5F: call    loc_14018BA52
 * 000000014018BA64: add     rsp, 8
 * 000000014018BA68: call    loc_14018BA5B
 * 000000014018BA6D: add     rsp, 8
 * 000000014018BA71: call    loc_14018BA64
 * 000000014018BA76: add     rsp, 8
 * 000000014018BA7A: call    loc_14018BA6D
 * 000000014018BA7F: add     rsp, 8
 * 000000014018BA83: call    loc_14018BA76
 * 000000014018BA88: add     rsp, 8
 * 000000014018BA8C: call    loc_14018BA7F
 * 000000014018BA91: add     rsp, 8
 * 000000014018BA95: call    loc_14018BA88
 * 000000014018BA9A: add     rsp, 8
 * 000000014018BA9E: call    loc_14018BA91
 * 000000014018BAA3: add     rsp, 8
 * 000000014018BAA7: call    loc_14018BA9A
 * 000000014018BAAC: add     rsp, 8
 * 000000014018BAB0: call    loc_14018BAA3
 * 000000014018BAB5: add     rsp, 8
 * 000000014018BAB9: call    loc_14018BAAC
 * 000000014018BABE: add     rsp, 8
 * 000000014018BAC2: call    loc_14018BAB5
 * 000000014018BAC7: add     rsp, 8
 * 000000014018BACB: call    loc_14018BABE
 * 000000014018BAD0: add     rsp, 8
 * 000000014018BAD4: call    loc_14018BAC7
 * 000000014018BAD9: add     rsp, 8
 * 000000014018BADD: call    loc_14018BAD0
 * 000000014018BAE2: add     rsp, 8
 * 000000014018BAE6: call    loc_14018BAD9
 * 000000014018BAEB: add     rsp, 8
 * 000000014018BAEF: call    loc_14018BAE2
 * 000000014018BAF4: add     rsp, 8
 * 000000014018BAF8: call    loc_14018BAEB
 * 000000014018BAFD: add     rsp, 8
 * 000000014018BB01: call    loc_14018BAF4
 * 000000014018BB06: add     rsp, 8
 * 000000014018BB0A: call    loc_14018BAFD
 * 000000014018BB0F: add     rsp, 8
 * 000000014018BB13: call    loc_14018BB06
 * 000000014018BB18: add     rsp, 8
 * 000000014018BB1C: call    loc_14018BB0F
 * 000000014018BB21: add     rsp, 8
 * 000000014018BB25: lfence
 * 000000014018BB28: test    byte ptr [r10+3], 80h
 * 000000014018BB2D: jz      short loc_14018BB71
 * 000000014018BB2F: mov     ecx, 0C0000102h
 * 000000014018BB34: rdmsr
 * 000000014018BB36: shl     rdx, 20h
 * 000000014018BB3A: or      rax, rdx
 * 000000014018BB3D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018BB44: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018BB4C: cmp     [r10+0F0h], rax
 * 000000014018BB53: jz      short loc_14018BB71
 * 000000014018BB55: mov     rdx, [r10+1F0h]
 * 000000014018BB5C: bts     dword ptr [r10+74h], 8
 * 000000014018BB62: dec     word ptr [r10+1E6h]
 * 000000014018BB6A: mov     [rdx+80h], rax
 * 000000014018BB71: test    byte ptr [r10+3], 3
 * 000000014018BB76: mov     [rbp+0E8h+var_68], 0
 * 000000014018BB7F: jz      short loc_14018BB86
 * 000000014018BB81: call    KiSaveDebugRegisterState
 * 000000014018BB86: cld
 * 000000014018BB87: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018BB8B: ldmxcsr dword ptr gs:180h
 * 000000014018BB94: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018BB98: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018BB9C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018BBA0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018BBA4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018BBA8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018BBAC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018BBB6: jz      short loc_14018BBB9
 * 000000014018BBB8: sti
 * 000000014018BBB9: mov     ecx, 10000003h
 * 000000014018BBBE: xor     edx, edx
 * 000000014018BBC0: mov     r8, [rbp+0E8h]
 * 000000014018BBC7: call    KiExceptionDispatch
 * 000000014018BBCC: nop
 * 000000014018BBCD: retn
 */
