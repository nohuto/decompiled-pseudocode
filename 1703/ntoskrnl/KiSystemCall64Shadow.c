/*
 * XREFs of KiSystemCall64Shadow @ 0x14026DFC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x14026DFC0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x14026DFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14026DFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026DFC0: swapgs
 * 000000014026DFC3: mov     gs:7010h, rsp
 * 000000014026DFCC: mov     rsp, gs:7000h
 * 000000014026DFD5: bt      dword ptr gs:7018h, 1
 * 000000014026DFDF: jb      short loc_14026DFE4
 * 000000014026DFE1: mov     cr3, rsp
 * 000000014026DFE4: mov     rsp, gs:7008h
 * 000000014026DFED: push    2Bh ; '+'
 * 000000014026DFEF: push    qword ptr gs:7010h
 * 000000014026DFF7: push    r11
 * 000000014026DFF9: push    33h ; '3'
 * 000000014026DFFB: push    rcx
 * 000000014026DFFC: mov     rcx, r10
 * 000000014026DFFF: sub     rsp, 8
 * 000000014026E003: push    rbp
 * 000000014026E004: sub     rsp, 158h
 * 000000014026E00B: lea     rbp, [rsp+190h+var_110]
 * 000000014026E013: mov     [rbp+0C0h], rbx
 * 000000014026E01A: mov     [rbp+0C8h], rdi
 * 000000014026E021: mov     [rbp+0D0h], rsi
 * 000000014026E028: jmp     short loc_14026E053
 * 000000014026E02A: mov     [rbx+90h], rsp
 * 000000014026E031: mov     edi, eax
 * 000000014026E033: shr     edi, 7
 * 000000014026E036: and     edi, 20h
 * 000000014026E039: and     eax, 0FFFh
 * 000000014026E03E: lea     r10, KeServiceDescriptorTable
 * 000000014026E045: lea     r11, KeServiceDescriptorTableShadow
 * 000000014026E04C: test    dword ptr [rbx+78h], 40h
 * 000000014026E053: mov     [rbp-50h], rax
 * 000000014026E057: mov     [rbp-48h], rcx
 * 000000014026E05B: mov     [rbp-40h], rdx
 * 000000014026E05F: mov     rcx, gs:188h
 * 000000014026E068: mov     rcx, [rcx+220h]
 * 000000014026E06F: mov     rcx, [rcx+818h]
 * 000000014026E076: mov     gs:270h, rcx
 * 000000014026E07F: movzx   eax, byte ptr gs:27Bh
 * 000000014026E088: cmp     gs:27Ah, al
 * 000000014026E090: jz      short loc_14026E0A3
 * 000000014026E092: mov     gs:27Ah, al
 * 000000014026E09A: mov     ecx, 48h ; 'H'
 * 000000014026E09F: xor     edx, edx
 * 000000014026E0A1: wrmsr
 * 000000014026E0A3: movzx   edx, byte ptr gs:278h
 * 000000014026E0AC: test    edx, 8
 * 000000014026E0B2: jz      short loc_14026E0C7
 * 000000014026E0B4: mov     eax, 1
 * 000000014026E0B9: xor     edx, edx
 * 000000014026E0BB: mov     ecx, 49h ; 'I'
 * 000000014026E0C0: wrmsr
 * 000000014026E0C2: jmp     loc_14026E205
 * 000000014026E0C7: test    edx, 2
 * 000000014026E0CD: jz      loc_14026E202
 * 000000014026E0D3: test    byte ptr gs:279h, 4
 * 000000014026E0DC: jnz     loc_14026E202
 * 000000014026E0E2: call    loc_14026E1F5
 * 000000014026E0E7: add     rsp, 8
 * 000000014026E0EB: call    loc_14026E1FE
 * 000000014026E0F0: add     rsp, 8
 * 000000014026E0F4: call    loc_14026E0E7
 * 000000014026E0F9: add     rsp, 8
 * 000000014026E0FD: call    loc_14026E0F0
 * 000000014026E102: add     rsp, 8
 * 000000014026E106: call    loc_14026E0F9
 * 000000014026E10B: add     rsp, 8
 * 000000014026E10F: call    loc_14026E102
 * 000000014026E114: add     rsp, 8
 * 000000014026E118: call    loc_14026E10B
 * 000000014026E11D: add     rsp, 8
 * 000000014026E121: call    loc_14026E114
 * 000000014026E126: add     rsp, 8
 * 000000014026E12A: call    loc_14026E11D
 * 000000014026E12F: add     rsp, 8
 * 000000014026E133: call    loc_14026E126
 * 000000014026E138: add     rsp, 8
 * 000000014026E13C: call    loc_14026E12F
 * 000000014026E141: add     rsp, 8
 * 000000014026E145: call    loc_14026E138
 * 000000014026E14A: add     rsp, 8
 * 000000014026E14E: call    loc_14026E141
 * 000000014026E153: add     rsp, 8
 * 000000014026E157: call    loc_14026E14A
 * 000000014026E15C: add     rsp, 8
 * 000000014026E160: call    loc_14026E153
 * 000000014026E165: add     rsp, 8
 * 000000014026E169: call    loc_14026E15C
 * 000000014026E16E: add     rsp, 8
 * 000000014026E172: call    loc_14026E165
 * 000000014026E177: add     rsp, 8
 * 000000014026E17B: call    loc_14026E16E
 * 000000014026E180: add     rsp, 8
 * 000000014026E184: call    loc_14026E177
 * 000000014026E189: add     rsp, 8
 * 000000014026E18D: call    loc_14026E180
 * 000000014026E192: add     rsp, 8
 * 000000014026E196: call    loc_14026E189
 * 000000014026E19B: add     rsp, 8
 * 000000014026E19F: call    loc_14026E192
 * 000000014026E1A4: add     rsp, 8
 * 000000014026E1A8: call    loc_14026E19B
 * 000000014026E1AD: add     rsp, 8
 * 000000014026E1B1: call    loc_14026E1A4
 * 000000014026E1B6: add     rsp, 8
 * 000000014026E1BA: call    loc_14026E1AD
 * 000000014026E1BF: add     rsp, 8
 * 000000014026E1C3: call    loc_14026E1B6
 * 000000014026E1C8: add     rsp, 8
 * 000000014026E1CC: call    loc_14026E1BF
 * 000000014026E1D1: add     rsp, 8
 * 000000014026E1D5: call    loc_14026E1C8
 * 000000014026E1DA: add     rsp, 8
 * 000000014026E1DE: call    loc_14026E1D1
 * 000000014026E1E3: add     rsp, 8
 * 000000014026E1E7: call    loc_14026E1DA
 * 000000014026E1EC: add     rsp, 8
 * 000000014026E1F0: call    loc_14026E1E3
 * 000000014026E1F5: add     rsp, 8
 * 000000014026E1F9: call    loc_14026E1EC
 * 000000014026E1FE: add     rsp, 8
 * 000000014026E202: lfence
 * 000000014026E205: jmp     KiSystemServiceUser
 * 000000014026E20A: retn
 */
