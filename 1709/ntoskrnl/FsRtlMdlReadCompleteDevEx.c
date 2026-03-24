/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x14029A010
 * Callers:
 *     KiDecodeMcaFault @ 0x140168660 (KiDecodeMcaFault.c)
 *     sub_140175530 @ 0x140175530 (sub_140175530.c)
 *     FsRtlUninitializeSmallMcb @ 0x1402B1210 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     sub_140175834 @ 0x140175834 (sub_140175834.c)
 *     sub_140176734 @ 0x140176734 (sub_140176734.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_1402AE570 @ 0x1402AE570 (sub_1402AE570.c)
 *     sub_1402AEFBC @ 0x1402AEFBC (sub_1402AEFBC.c)
 *     sub_1402AF85C @ 0x1402AF85C (sub_1402AF85C.c)
 *     KiGetGdtIdt @ 0x1402B10E0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x1402B10F0 (KiGetLdtr.c)
 *     KiGetTr @ 0x1402B1100 (KiGetTr.c)
 *     KiErrata704Present @ 0x1402B1110 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x1402B11C0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x1402B15F8 (RtlInitMinimalBarrier.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x14029A010
 * Reason: Hex-Rays returned no pseudocode for 0x14029A010
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014029A010: mov     rax, rsp
 * 000000014029A013: mov     [rax+10h], rbx
 * 000000014029A017: mov     [rax+18h], rsi
 * 000000014029A01B: mov     [rax+20h], rdi
 * 000000014029A01F: mov     [rax+8], rcx
 * 000000014029A023: push    rbp
 * 000000014029A024: push    r12
 * 000000014029A026: push    r13
 * 000000014029A028: push    r14
 * 000000014029A02A: push    r15
 * 000000014029A02C: sub     rsp, 1100h
 * 000000014029A033: lea     rbp, [rax-1058h]
 * 000000014029A03A: and     rbp, 0FFFFFFFFFFFFFF80h
 * 000000014029A03E: mov     eax, [rcx+7D8h]
 * 000000014029A044: xor     r8d, r8d
 * 000000014029A047: mov     r13, rcx
 * 000000014029A04A: mov     [rbp+2150h+var_19A0], rcx
 * 000000014029A051: mov     ecx, 110000h
 * 000000014029A056: or      r10d, 0FFFFFFFFh
 * 000000014029A05A: and     eax, ecx
 * 000000014029A05C: mov     r9d, 130h
 * 000000014029A062: lea     esi, [r8+1]
 * 000000014029A066: mov     r11d, 0FFFFFFF8h
 * 000000014029A06C: cmp     eax, ecx
 * 000000014029A06E: jz      loc_14029A137
 * 000000014029A074: mov     ecx, r9d
 * 000000014029A077: lea     rax, [rbp+2150h+var_14D0]
 * 000000014029A07E: lea     edx, [rsi+25h]
 * 000000014029A081: mov     [rax], r8
 * 000000014029A084: add     ecx, r11d
 * 000000014029A087: add     rax, 8
 * 000000014029A08B: sub     rdx, rsi
 * 000000014029A08E: jnz     short loc_14029A081
 * 000000014029A090: test    ecx, ecx
 * 000000014029A092: jz      short loc_14029A09F
 * 000000014029A094: mov     [rax], r8b
 * 000000014029A097: add     rax, rsi
 * 000000014029A09A: add     ecx, r10d
 * 000000014029A09D: jnz     short loc_14029A094
 * 000000014029A09F: movups  xmm0, xmmword ptr [r13+6A8h]
 * 000000014029A0A7: lea     rax, [rbp+2150h+var_14D0]
 * 000000014029A0AE: movdqu  [rbp+2150h+var_14C0], xmm0
 * 000000014029A0B6: movups  xmm1, xmmword ptr [r13+6B8h]
 * 000000014029A0BE: movdqu  [rbp+2150h+var_14B0], xmm1
 * 000000014029A0C6: movups  xmm0, xmmword ptr [r13+6C8h]
 * 000000014029A0CE: mov     [rbp+2150h+var_1DBE], rax
 * 000000014029A0D5: lea     rax, [r13+6D8h]
 * 000000014029A0DC: mov     rcx, rax
 * 000000014029A0DF: mov     word ptr [rbp+2150h+var_14C0], ax
 * 000000014029A0E6: shr     rcx, 10h
 * 000000014029A0EA: shr     rax, 20h
 * 000000014029A0EE: mov     dword ptr [rbp+2150h+var_14C0+8], eax
 * 000000014029A0F4: movdqu  [rbp+2150h+var_13B0], xmm0
 * 000000014029A0FC: mov     word ptr [rbp+2150h+var_1DC0], r9w
 * 000000014029A104: mov     word ptr [rbp+2150h+var_14C0+6], cx
 * 000000014029A10B: cli
 * 000000014029A10C: xor     eax, eax
 * 000000014029A10E: cmp     [r13+7D8h], eax
 * 000000014029A115: jge     short loc_14029A11D
 * 000000014029A117: mov     dr7, rax
 * 000000014029A11A: sti
 * 000000014029A11B: jmp     short loc_14029A139
 * 000000014029A11D: sidt    fword ptr [rbp+2150h+var_1C70]
 * 000000014029A124: lidt    fword ptr [rbp+2150h+var_1DC0]
 * 000000014029A12B: mov     dr7, rax
 * 000000014029A12E: lidt    fword ptr [rbp+2150h+var_1C70]
 * 000000014029A135: jmp     short loc_14029A11A
 * 000000014029A137: xor     eax, eax
 * 000000014029A139: test    dword ptr [r13+7DCh], 100h
 * 000000014029A144: mov     [rbp+2150h+var_2078], rax
 * 000000014029A14B: jz      short loc_14029A166
 * 000000014029A14D: lea     rcx, [rsp+1128h]
 * 000000014029A155: mov     rax, [rcx]
 * 000000014029A158: mov     [rbp+2150h+var_2078], rax
 * 000000014029A15F: xor     eax, eax
 * 000000014029A161: mov     [rcx], rax
 * 000000014029A164: jmp     short loc_14029A168
 * 000000014029A166: xor     eax, eax
 * 000000014029A168: mov     edi, 40h ; '@'
 * 000000014029A16D: mov     [r13+688h], eax
 * 000000014029A174: test    dword ptr [r13+7D8h], 40000000h
 * 000000014029A17F: mov     rbx, 7010008004002001h
 * 000000014029A189: lea     r12d, [rdi-20h]
 * 000000014029A18D: lea     r15d, [rdi-3Ch]
 * 000000014029A191: jz      short loc_14029A1A2
 * 000000014029A193: xor     eax, eax
 * 000000014029A195: cmp     [r13+8A8h], rax
 * 000000014029A19C: jnz     loc_14029A3FB
 * 000000014029A1A2: mov     r14, [r13+618h]
 * 000000014029A1A9: lea     rbx, [r13+5F8h]
 * 000000014029A1B0: mov     [rbp+2150h+var_2148], r14
 * 000000014029A1B4: lea     rdx, [rbp+2150h+var_16A0]
 * 000000014029A1BB: mov     rcx, rbx
 * 000000014029A1BE: mov     r8d, r12d
 * 000000014029A1C1: mov     r9, r15
 * 000000014029A1C4: mov     rax, [rcx]
 * 000000014029A1C7: add     r8d, r11d
 * 000000014029A1CA: mov     [rdx], rax
 * 000000014029A1CD: add     rcx, 8
 * 000000014029A1D1: add     rdx, 8
 * 000000014029A1D5: sub     r9, rsi
 * 000000014029A1D8: jnz     short loc_14029A1C4
 * 000000014029A1DA: xor     eax, eax
 * 000000014029A1DC: test    r8d, r8d
 * 000000014029A1DF: jz      short loc_14029A1F2
 * 000000014029A1E1: mov     al, [rcx]
 * 000000014029A1E3: add     rcx, rsi
 * 000000014029A1E6: mov     [rdx], al
 * 000000014029A1E8: add     rdx, rsi
 * 000000014029A1EB: add     r8d, r10d
 * 000000014029A1EE: jnz     short loc_14029A1E1
 * 000000014029A1F0: xor     eax, eax
 * 000000014029A1F2: mov     [r13+618h], rax
 * 000000014029A1F9: mov     ecx, r12d
 * 000000014029A1FC: mov     [r13+688h], eax
 * 000000014029A203: mov     rdx, r15
 * 000000014029A206: mov     rax, rbx
 * 000000014029A209: xor     r8d, r8d
 * 000000014029A20C: mov     [rax], r8
 * 000000014029A20F: add     ecx, r11d
 * 000000014029A212: add     rax, 8
 * 000000014029A216: sub     rdx, rsi
 * 000000014029A219: jnz     short loc_14029A20C
 * 000000014029A21B: test    ecx, ecx
 * 000000014029A21D: jz      short loc_14029A22A
 * 000000014029A21F: mov     [rax], r8b
 * 000000014029A222: add     rax, rsi
 * 000000014029A225: add     ecx, r10d
 * 000000014029A228: jnz     short loc_14029A21F
 * 000000014029A22A: mov     eax, [r13+644h]
 * 000000014029A231: mov     r9, r13
 * 000000014029A234: add     [r13+688h], eax
 * 000000014029A23B: mov     rax, r13
 * 000000014029A23E: mov     r10d, [r13+644h]
 * 000000014029A245: mov     r11d, [r13+674h]
 * 000000014029A24C: mov     rsi, [r13+678h]
 * 000000014029A253: lea     rcx, [r10+r13]
 * 000000014029A257: cmp     r13, rcx
 * 000000014029A25A: jnb     short loc_14029A267
 * 000000014029A25C: prefetchnta byte ptr [rax]
 * 000000014029A25F: add     rax, rdi
 * 000000014029A262: cmp     rax, rcx
 * 000000014029A265: jb      short loc_14029A25C
 * 000000014029A267: mov     edi, r10d
 * 000000014029A26A: mov     r8, rsi
 * 000000014029A26D: shr     edi, 7
 * 000000014029A270: test    edi, edi
 * 000000014029A272: jz      short loc_14029A2E9
 * 000000014029A274: mov     r14, 7010008004002001h
 * 000000014029A27E: mov     edx, 8
 * 000000014029A283: lea     r13d, [rdx-7]
 * 000000014029A287: mov     rax, [r9]
 * 000000014029A28A: mov     ecx, r11d
 * 000000014029A28D: xor     rax, r8
 * 000000014029A290: mov     r8, [r9+8]
 * 000000014029A294: rol     rax, cl
 * 000000014029A297: add     r9, 10h
 * 000000014029A29B: xor     r8, rax
 * 000000014029A29E: rol     r8, cl
 * 000000014029A2A1: sub     rdx, r13
 * 000000014029A2A4: jnz     short loc_14029A287
 * 000000014029A2A6: mov     r13, [rsp+1120h+arg_0]
 * 000000014029A2AE: mov     rcx, r9
 * 000000014029A2B1: sub     rcx, r13
 * 000000014029A2B4: xor     rcx, rsi
 * 000000014029A2B7: mov     rax, rcx
 * 000000014029A2BA: rol     rax, 11h
 * 000000014029A2BE: xor     rcx, rax
 * 000000014029A2C1: mov     rax, r14
 * 000000014029A2C4: mul     rcx
 * 000000014029A2C7: xor     eax, edx
 * 000000014029A2C9: mov     [rbp+2150h+var_1910], rdx
 * 000000014029A2D0: xor     r11d, eax
 * 000000014029A2D3: mov     eax, 1
 * 000000014029A2D8: and     r11d, 3Fh
 * 000000014029A2DC: cmovz   r11d, eax
 * 000000014029A2E0: add     edi, 0FFFFFFFFh
 * 000000014029A2E3: jnz     short loc_14029A27E
 * 000000014029A2E5: mov     r14, [rbp+2150h+var_2148]
 * 000000014029A2E9: and     r10d, 7Fh
 * 000000014029A2ED: mov     esi, 1
 * 000000014029A2F2: cmp     r10d, 8
 * 000000014029A2F6: jb      short loc_14029A315
 * 000000014029A2F8: mov     edx, r10d
 * 000000014029A2FB: shr     rdx, 3
 * 000000014029A2FF: xor     r8, [r9]
 * 000000014029A302: mov     ecx, r11d
 * 000000014029A305: rol     r8, cl
 * 000000014029A308: add     r9, 8
 * 000000014029A30C: add     r10d, 0FFFFFFF8h
 * 000000014029A310: sub     rdx, rsi
 * 000000014029A313: jnz     short loc_14029A2FF
 * 000000014029A315: test    r10d, r10d
 * 000000014029A318: jz      short loc_14029A330
 * 000000014029A31A: movzx   eax, byte ptr [r9]
 * 000000014029A31E: mov     ecx, r11d
 * 000000014029A321: xor     r8, rax
 * 000000014029A324: add     r9, rsi
 * 000000014029A327: rol     r8, cl
 * 000000014029A32A: add     r10d, 0FFFFFFFFh
 * 000000014029A32E: jnz     short loc_14029A31A
 * 000000014029A330: mov     [r13+618h], r14
 * 000000014029A337: lea     rcx, [rbp+2150h+var_16A0]
 * 000000014029A33E: mov     edx, r12d
 * 000000014029A341: mov     r9, r15
 * 000000014029A344: mov     r11d, 0FFFFFFF8h
 * 000000014029A34A: mov     rax, [rcx]
 * 000000014029A34D: add     edx, r11d
 * 000000014029A350: mov     [rbx], rax
 * 000000014029A353: add     rcx, 8
 * 000000014029A357: add     rbx, 8
 * 000000014029A35B: sub     r9, rsi
 * 000000014029A35E: jnz     short loc_14029A34A
 * 000000014029A360: test    edx, edx
 * 000000014029A362: jz      short loc_14029A373
 * 000000014029A364: mov     al, [rcx]
 * 000000014029A366: add     rcx, rsi
 * 000000014029A369: mov     [rbx], al
 * 000000014029A36B: add     rbx, rsi
 * 000000014029A36E: add     edx, 0FFFFFFFFh
 * 000000014029A371: jnz     short loc_14029A364
 * 000000014029A373: cmp     [r13+618h], r8
 * 000000014029A37A: jz      short loc_14029A3F1
 * 000000014029A37C: mov     rax, [r13+548h]
 * 000000014029A383: mov     ecx, [r13+644h]
 * 000000014029A38A: mov     [rax], r13
 * 000000014029A38D: mov     [rax+10h], ecx
 * 000000014029A390: xor     eax, eax
 * 000000014029A392: mov     rcx, [r13+618h]
 * 000000014029A399: cmp     [r13+750h], eax
 * 000000014029A3A0: jnz     short loc_14029A3F1
 * 000000014029A3A2: mov     rax, [r13+548h]
 * 000000014029A3A9: xor     rcx, r8
 * 000000014029A3AC: mov     [rax+18h], rcx
 * 000000014029A3B0: xor     eax, eax
 * 000000014029A3B2: cmp     [r13+750h], eax
 * 000000014029A3B9: jnz     short loc_14029A3F1
 * 000000014029A3BB: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029A3C5: add     rax, r13
 * 000000014029A3C8: mov     [r13+758h], rax
 * 000000014029A3CF: xor     eax, eax
 * 000000014029A3D1: mov     [r13+760h], rax
 * 000000014029A3D8: mov     qword ptr [r13+768h], 101h
 * 000000014029A3E3: mov     [r13+770h], r8
 * 000000014029A3EA: mov     [r13+750h], esi
 * 000000014029A3F1: mov     rbx, 7010008004002001h
 * 000000014029A3FB: or      [r13+7D8h], r15d
 * 000000014029A402: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029A409: add     [r13+694h], esi
 * 000000014029A410: mov     r14d, 2
 * 000000014029A416: mov     eax, [r13+7D8h]
 * 000000014029A41D: test    al, 8
 * 000000014029A41F: jz      loc_14029A824
 * 000000014029A425: bt      eax, 17h
 * 000000014029A429: jb      loc_14029A824
 * 000000014029A42F: mov     eax, [r13+7DCh]
 * 000000014029A436: mov     r10, [r13+8A0h]
 * 000000014029A43D: and     eax, esi
 * 000000014029A43F: mov     esi, [r13+644h]
 * 000000014029A446: mov     r11, [r13+840h]
 * 000000014029A44D: mov     r15d, [r13+668h]
 * 000000014029A454: mov     [rbp+2150h+var_2148], r10
 * 000000014029A458: jz      short loc_14029A461
 * 000000014029A45A: mov     r11, [r13+590h]
 * 000000014029A461: mov     r9, [r13+150h]
 * 000000014029A468: mov     rax, [r13+2B8h]
 * 000000014029A46F: mov     r12, [r13+330h]
 * 000000014029A476: mov     [rbp+2150h+var_2130], r9
 * 000000014029A47A: mov     [rbp+2150h+var_20C8], rax
 * 000000014029A481: mov     [rbp+2150h+var_20F8], r12
 * 000000014029A485: rdtsc
 * 000000014029A487: shl     rdx, 20h
 * 000000014029A48B: or      rax, rdx
 * 000000014029A48E: mov     rcx, rax
 * 000000014029A491: ror     rax, 3
 * 000000014029A495: xor     rcx, rax
 * 000000014029A498: mov     rax, rbx
 * 000000014029A49B: mul     rcx
 * 000000014029A49E: mov     rcx, rdi
 * 000000014029A4A1: mov     r8, rdx
 * 000000014029A4A4: mov     [rbp+2150h+var_1908], rdx
 * 000000014029A4AB: xor     r8, rax
 * 000000014029A4AE: mov     rax, 0ABCC77118461CEFDh
 * 000000014029A4B8: mul     r8
 * 000000014029A4BB: shr     rdx, 1Ah
 * 000000014029A4BF: imul    rax, rdx, 5F5E100h
 * 000000014029A4C6: sub     r8, rax
 * 000000014029A4C9: sub     rcx, r8
 * 000000014029A4CC: mov     [rbp+2150h+var_1F48], rcx
 * 000000014029A4D3: test    dword ptr [r13+7D8h], 4000000h
 * 000000014029A4DE: jz      loc_14029A580
 * 000000014029A4E4: rdtsc
 * 000000014029A4E6: shl     rdx, 20h
 * 000000014029A4EA: or      rax, rdx
 * 000000014029A4ED: mov     rdx, rax
 * 000000014029A4F0: ror     rax, 3
 * 000000014029A4F4: xor     rdx, rax
 * 000000014029A4F7: mov     rax, rbx
 * 000000014029A4FA: mul     rdx
 * 000000014029A4FD: mov     r8, rdx
 * 000000014029A500: mov     [rbp+2150h+var_1900], rdx
 * 000000014029A507: xor     r8, rax
 * 000000014029A50A: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014029A514: mul     r8
 * 000000014029A517: shr     rdx, 3
 * 000000014029A51B: lea     rax, [rdx+rdx*4]
 * 000000014029A51F: add     rax, rax
 * 000000014029A522: sub     r8, rax
 * 000000014029A525: cmp     r8, r14
 * 000000014029A528: jnb     short loc_14029A580
 * 000000014029A52A: rdtsc
 * 000000014029A52C: shl     rdx, 20h
 * 000000014029A530: or      rax, rdx
 * 000000014029A533: mov     rdx, rax
 * 000000014029A536: ror     rax, 3
 * 000000014029A53A: xor     rdx, rax
 * 000000014029A53D: mov     rax, rbx
 * 000000014029A540: mul     rdx
 * 000000014029A543: mov     r8, rdx
 * 000000014029A546: mov     [rbp+2150h+var_18F8], rdx
 * 000000014029A54D: xor     r8, rax
 * 000000014029A550: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014029A55A: mul     r8
 * 000000014029A55D: shr     rdx, 3
 * 000000014029A561: lea     rax, [rdx+rdx*4]
 * 000000014029A565: mov     edx, 1
 * 000000014029A56A: add     rax, rax
 * 000000014029A56D: sub     r8, rax
 * 000000014029A570: add     r8, rdx
 * 000000014029A573: imul    rcx, r8
 * 000000014029A577: mov     [rbp+2150h+var_1F48], rcx
 * 000000014029A57E: jmp     short loc_14029A585
 * 000000014029A580: mov     edx, 1
 * 000000014029A585: xor     eax, eax
 * 000000014029A587: mov     ebx, eax
 * 000000014029A589: mov     r14d, eax
 * 000000014029A58C: mov     eax, [r13+7D8h]
 * 000000014029A593: test    al, 2
 * 000000014029A595: cmovz   esi, r15d
 * 000000014029A599: test    al, al
 * 000000014029A59B: js      short loc_14029A5A7
 * 000000014029A59D: xor     eax, eax
 * 000000014029A59F: mov     r13d, eax
 * 000000014029A5A2: jmp     loc_14029A68C
 * 000000014029A5A7: mov     r13d, edx
 * 000000014029A5AA: rdtsc
 * 000000014029A5AC: shl     rdx, 20h
 * 000000014029A5B0: mov     r12d, 1
 * 000000014029A5B6: or      rax, rdx
 * 000000014029A5B9: mov     rcx, rax
 * 000000014029A5BC: ror     rax, 3
 * 000000014029A5C0: xor     rcx, rax
 * 000000014029A5C3: mov     rax, 7010008004002001h
 * 000000014029A5CD: mul     rcx
 * 000000014029A5D0: mov     ecx, 11Ah
 * 000000014029A5D5: mov     rbx, rdx
 * 000000014029A5D8: mov     [rbp+2150h+var_18F0], rdx
 * 000000014029A5DF: mov     rdx, [rsp+1120h+arg_0]
 * 000000014029A5E7: xor     rbx, rax
 * 000000014029A5EA: mov     r14, rbx
 * 000000014029A5ED: mov     r8, rbx
 * 000000014029A5F0: xor     r14, rdx
 * 000000014029A5F3: lea     rax, [rdx+8C8h]
 * 000000014029A5FA: xor     [rax], r8
 * 000000014029A5FD: lea     rax, [rax-8]
 * 000000014029A601: ror     r8, cl
 * 000000014029A604: sub     ecx, r12d
 * 000000014029A607: jnz     short loc_14029A5FA
 * 000000014029A609: lea     r9, [r15-8D0h]
 * 000000014029A610: mov     r12, r15
 * 000000014029A613: shr     r9, 3
 * 000000014029A617: test    r9d, r9d
 * 000000014029A61A: jz      short loc_14029A658
 * 000000014029A61C: movsxd  r10, r9d
 * 000000014029A61F: lea     edi, [rcx+1]
 * 000000014029A622: add     r10, 119h
 * 000000014029A629: lea     r10, [rdx+r10*8]
 * 000000014029A62D: mov     rdx, [r10]
 * 000000014029A630: lea     rax, [r14+r14]
 * 000000014029A634: mov     ecx, r9d
 * 000000014029A637: lea     r10, [r10-8]
 * 000000014029A63B: ror     rdx, cl
 * 000000014029A63E: mov     r14, rdx
 * 000000014029A641: xor     r14, rax
 * 000000014029A644: sub     r9d, edi
 * 000000014029A647: jnz     short loc_14029A62D
 * 000000014029A649: mov     r10, [rbp+2150h+var_2148]
 * 000000014029A64D: mov     r12, r15
 * 000000014029A650: mov     rdx, [rsp+1120h+arg_0]
 * 000000014029A658: mov     ecx, esi
 * 000000014029A65A: add     rdx, r12
 * 000000014029A65D: sub     ecx, r15d
 * 000000014029A660: shr     ecx, 3
 * 000000014029A663: test    ecx, ecx
 * 000000014029A665: jz      short loc_14029A684
 * 000000014029A667: lea     rdx, [rdx+rcx*8]
 * 000000014029A66B: mov     r9d, 1
 * 000000014029A671: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014029A675: xor     [rdx], r8
 * 000000014029A678: lea     rdx, [rdx-8]
 * 000000014029A67C: ror     r8, cl
 * 000000014029A67F: sub     ecx, r9d
 * 000000014029A682: jnz     short loc_14029A675
 * 000000014029A684: mov     r9, [rbp+2150h+var_2130]
 * 000000014029A688: mov     r12, [rbp+2150h+var_20F8]
 * 000000014029A68C: test    r10, r10
 * 000000014029A68F: jz      short loc_14029A6B1
 * 000000014029A691: mov     rcx, [rsp+1120h+arg_0]
 * 000000014029A699: lea     r8, [rbp+2150h+var_1F48]
 * 000000014029A6A0: mov     edx, esi
 * 000000014029A6A2: mov     [rsp+1120h+BugCheckParameter4], r10
 * 000000014029A6A7: mov     rax, r12
 * 000000014029A6AA: call    KeGuardDispatchICall
 * 000000014029A6AF: jmp     short loc_14029A6EC
 * 000000014029A6B1: xor     edx, edx
 * 000000014029A6B3: test    r11, r11
 * 000000014029A6B6: jnz     short loc_14029A6CB
 * 000000014029A6B8: lea     r8, [rbp+2150h+var_1F48]
 * 000000014029A6BF: xor     ecx, ecx
 * 000000014029A6C1: mov     rax, r9
 * 000000014029A6C4: call    KeGuardDispatchICall
 * 000000014029A6C9: jmp     short loc_14029A6EC
 * 000000014029A6CB: lea     rax, [rbp+2150h+var_1F48]
 * 000000014029A6D2: xor     r9d, r9d
 * 000000014029A6D5: mov     [rsp+1120h+BugCheckParameter4], rax
 * 000000014029A6DA: xor     r8d, r8d
 * 000000014029A6DD: mov     rax, [rbp+2150h+var_20C8]
 * 000000014029A6E4: mov     rcx, r11
 * 000000014029A6E7: call    KeGuardDispatchICall
 * 000000014029A6EC: xor     eax, eax
 * 000000014029A6EE: test    r13d, r13d
 * 000000014029A6F1: mov     r13, [rsp+1120h+arg_0]
 * 000000014029A6F9: jz      loc_14029A811
 * 000000014029A6FF: mov     r8, rbx
 * 000000014029A702: lea     rax, [r13+8C8h]
 * 000000014029A709: xor     r8, r13
 * 000000014029A70C: mov     ecx, 11Ah
 * 000000014029A711: mov     r12d, 1
 * 000000014029A717: xor     [rax], rbx
 * 000000014029A71A: lea     rax, [rax-8]
 * 000000014029A71E: ror     rbx, cl
 * 000000014029A721: sub     ecx, r12d
 * 000000014029A724: jnz     short loc_14029A717
 * 000000014029A726: lea     r9, [r15-8D0h]
 * 000000014029A72D: mov     r11, r15
 * 000000014029A730: shr     r9, 3
 * 000000014029A734: test    r9d, r9d
 * 000000014029A737: jz      short loc_14029A766
 * 000000014029A739: movsxd  rax, r9d
 * 000000014029A73C: lea     r10, [r13+8C8h]
 * 000000014029A743: lea     r10, [r10+rax*8]
 * 000000014029A747: mov     rdx, [r10]
 * 000000014029A74A: lea     rax, [r8+r8]
 * 000000014029A74E: mov     ecx, r9d
 * 000000014029A751: lea     r10, [r10-8]
 * 000000014029A755: ror     rdx, cl
 * 000000014029A758: mov     r8, rdx
 * 000000014029A75B: xor     r8, rax
 * 000000014029A75E: sub     r9d, r12d
 * 000000014029A761: jnz     short loc_14029A747
 * 000000014029A763: mov     r11, r15
 * 000000014029A766: sub     esi, r15d
 * 000000014029A769: lea     rcx, [r11+r13]
 * 000000014029A76D: shr     esi, 3
 * 000000014029A770: test    esi, esi
 * 000000014029A772: jz      short loc_14029A78E
 * 000000014029A774: mov     eax, esi
 * 000000014029A776: dec     rax
 * 000000014029A779: lea     rdx, [rcx+rax*8]
 * 000000014029A77D: xor     [rdx], rbx
 * 000000014029A780: mov     ecx, esi
 * 000000014029A782: ror     rbx, cl
 * 000000014029A785: lea     rdx, [rdx-8]
 * 000000014029A789: sub     esi, r12d
 * 000000014029A78C: jnz     short loc_14029A77D
 * 000000014029A78E: cmp     r8, r14
 * 000000014029A791: jz      loc_14029A819
 * 000000014029A797: mov     rax, [r13+548h]
 * 000000014029A79E: mov     ecx, [r13+644h]
 * 000000014029A7A5: mov     [rax], r13
 * 000000014029A7A8: mov     [rax+10h], ecx
 * 000000014029A7AB: xor     eax, eax
 * 000000014029A7AD: cmp     [r13+750h], eax
 * 000000014029A7B4: jnz     short loc_14029A819
 * 000000014029A7B6: mov     rax, [r13+548h]
 * 000000014029A7BD: mov     rcx, r8
 * 000000014029A7C0: xor     rcx, r14
 * 000000014029A7C3: mov     [rax+18h], rcx
 * 000000014029A7C7: xor     eax, eax
 * 000000014029A7C9: cmp     [r13+750h], eax
 * 000000014029A7D0: jnz     short loc_14029A819
 * 000000014029A7D2: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029A7DC: mov     r14, r12
 * 000000014029A7DF: add     rax, r13
 * 000000014029A7E2: mov     [r13+758h], rax
 * 000000014029A7E9: xor     eax, eax
 * 000000014029A7EB: mov     [r13+760h], rax
 * 000000014029A7F2: mov     qword ptr [r13+768h], 10Eh
 * 000000014029A7FD: mov     [r13+770h], r8
 * 000000014029A804: mov     [r13+750h], r14d
 * 000000014029A80B: lea     r15d, [rax+4]
 * 000000014029A80F: jmp     short loc_14029A82C
 * 000000014029A811: mov     r15d, 4
 * 000000014029A817: jmp     short loc_14029A826
 * 000000014029A819: xor     eax, eax
 * 000000014029A81B: mov     r14, r12
 * 000000014029A81E: lea     r15d, [rax+4]
 * 000000014029A822: jmp     short loc_14029A82C
 * 000000014029A824: xor     eax, eax
 * 000000014029A826: mov     r14d, 1
 * 000000014029A82C: mov     esi, [r13+0C4h]
 * 000000014029A833: lea     rcx, [r13+5D8h]
 * 000000014029A83A: mov     [r13+0C4h], eax
 * 000000014029A841: mov     r9, r13
 * 000000014029A844: add     dword ptr [r13+688h], 5D8h
 * 000000014029A84F: mov     rax, r13
 * 000000014029A852: mov     r10d, [r13+674h]
 * 000000014029A859: mov     r11, [r13+678h]
 * 000000014029A860: cmp     r13, rcx
 * 000000014029A863: jnb     short loc_14029A875
 * 000000014029A865: mov     edx, 40h ; '@'
 * 000000014029A86A: prefetchnta byte ptr [rax]
 * 000000014029A86D: add     rax, rdx
 * 000000014029A870: cmp     rax, rcx
 * 000000014029A873: jb      short loc_14029A86A
 * 000000014029A875: mov     r8, r11
 * 000000014029A878: mov     ebx, 0Bh
 * 000000014029A87D: or      r12d, 0FFFFFFFFh
 * 000000014029A881: mov     rdi, 7010008004002001h
 * 000000014029A88B: mov     edx, 8
 * 000000014029A890: mov     rax, [r9]
 * 000000014029A893: mov     ecx, r10d
 * 000000014029A896: xor     rax, r8
 * 000000014029A899: mov     r8, [r9+8]
 * 000000014029A89D: rol     rax, cl
 * 000000014029A8A0: add     r9, 10h
 * 000000014029A8A4: xor     r8, rax
 * 000000014029A8A7: rol     r8, cl
 * 000000014029A8AA: sub     rdx, r14
 * 000000014029A8AD: jnz     short loc_14029A890
 * 000000014029A8AF: mov     rcx, r9
 * 000000014029A8B2: sub     rcx, r13
 * 000000014029A8B5: xor     rcx, r11
 * 000000014029A8B8: mov     rax, rcx
 * 000000014029A8BB: rol     rax, 11h
 * 000000014029A8BF: xor     rcx, rax
 * 000000014029A8C2: mov     rax, rdi
 * 000000014029A8C5: mul     rcx
 * 000000014029A8C8: xor     eax, edx
 * 000000014029A8CA: mov     [rbp+2150h+var_18E8], rdx
 * 000000014029A8D1: xor     r10d, eax
 * 000000014029A8D4: and     r10d, 3Fh
 * 000000014029A8D8: cmovz   r10d, r14d
 * 000000014029A8DC: add     ebx, r12d
 * 000000014029A8DF: jnz     short loc_14029A88B
 * 000000014029A8E1: lea     edx, [rbx+58h]
 * 000000014029A8E4: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029A8EB: lea     r11d, [rbx+0Bh]
 * 000000014029A8EF: xor     r8, [r9]
 * 000000014029A8F2: mov     ecx, r10d
 * 000000014029A8F5: rol     r8, cl
 * 000000014029A8F8: add     r9, 8
 * 000000014029A8FC: add     edx, 0FFFFFFF8h
 * 000000014029A8FF: sub     r11, r14
 * 000000014029A902: jnz     short loc_14029A8EF
 * 000000014029A904: test    edx, edx
 * 000000014029A906: jz      short loc_14029A91D
 * 000000014029A908: movzx   eax, byte ptr [r9]
 * 000000014029A90C: mov     ecx, r10d
 * 000000014029A90F: xor     r8, rax
 * 000000014029A912: add     r9, r14
 * 000000014029A915: rol     r8, cl
 * 000000014029A918: add     edx, r12d
 * 000000014029A91B: jnz     short loc_14029A908
 * 000000014029A91D: mov     [r13+0C4h], esi
 * 000000014029A924: cmp     [r13+860h], r8
 * 000000014029A92B: jz      short loc_14029A9A7
 * 000000014029A92D: mov     rax, [r13+548h]
 * 000000014029A934: mov     ecx, [r13+644h]
 * 000000014029A93B: mov     [rax], r13
 * 000000014029A93E: mov     [rax+10h], ecx
 * 000000014029A941: xor     ecx, ecx
 * 000000014029A943: mov     rax, [r13+860h]
 * 000000014029A94A: cmp     [r13+750h], ecx
 * 000000014029A951: jnz     short loc_14029A964
 * 000000014029A953: mov     rcx, r8
 * 000000014029A956: xor     rcx, rax
 * 000000014029A959: mov     rax, [r13+548h]
 * 000000014029A960: mov     [rax+18h], rcx
 * 000000014029A964: xor     eax, eax
 * 000000014029A966: cmp     [r13+750h], eax
 * 000000014029A96D: jnz     short loc_14029A9A9
 * 000000014029A96F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029A979: add     rax, r13
 * 000000014029A97C: mov     [r13+758h], rax
 * 000000014029A983: xor     eax, eax
 * 000000014029A985: mov     [r13+760h], rax
 * 000000014029A98C: mov     qword ptr [r13+768h], 109h
 * 000000014029A997: mov     [r13+770h], r8
 * 000000014029A99E: mov     [r13+750h], r14d
 * 000000014029A9A5: jmp     short loc_14029A9A9
 * 000000014029A9A7: xor     eax, eax
 * 000000014029A9A9: mov     ecx, [r13+7C0h]
 * 000000014029A9B0: mov     rsi, r13
 * 000000014029A9B3: mov     [rbp+2150h+var_2120], r13
 * 000000014029A9B7: mov     r8d, 3
 * 000000014029A9BD: mov     [rbp+2150h+var_2058], eax
 * 000000014029A9C3: mov     [rbp+2150h+var_2118], eax
 * 000000014029A9C6: cmp     ecx, r12d
 * 000000014029A9C9: jz      loc_14029AAAF
 * 000000014029A9CF: mov     rax, [r13+268h]
 * 000000014029A9D6: call    KeGuardDispatchICall
 * 000000014029A9DB: mov     rbx, rax
 * 000000014029A9DE: test    rax, rax
 * 000000014029A9E1: jnz     short loc_14029A9FD
 * 000000014029A9E3: mov     rax, [r13+270h]
 * 000000014029A9EA: xor     ecx, ecx
 * 000000014029A9EC: call    KeGuardDispatchICall
 * 000000014029A9F1: mov     rbx, rax
 * 000000014029A9F4: test    rax, rax
 * 000000014029A9F7: jz      loc_14029AAA9
 * 000000014029A9FD: mov     rax, [r13+280h]
 * 000000014029AA04: lea     rdx, [rbp+2150h+var_1BF0]
 * 000000014029AA0B: mov     rcx, rbx
 * 000000014029AA0E: call    KeGuardDispatchICall
 * 000000014029AA13: mov     r14d, eax
 * 000000014029AA16: test    eax, eax
 * 000000014029AA18: jns     short loc_14029AA2D
 * 000000014029AA1A: mov     rax, [r13+278h]
 * 000000014029AA21: mov     rcx, rbx
 * 000000014029AA24: call    KeGuardDispatchICall
 * 000000014029AA29: xor     eax, eax
 * 000000014029AA2B: jmp     short loc_14029AA95
 * 000000014029AA2D: mov     [r13+7D0h], rbx
 * 000000014029AA34: mov     rax, [r13+2A8h]
 * 000000014029AA3B: call    KeGuardDispatchICall
 * 000000014029AA40: mov     rbx, rax
 * 000000014029AA43: mov     rax, [r13+2C8h]
 * 000000014029AA4A: mov     rcx, rbx
 * 000000014029AA4D: call    KeGuardDispatchICall
 * 000000014029AA52: mov     rdx, rax
 * 000000014029AA55: test    rax, rax
 * 000000014029AA58: jnz     short loc_14029AA5F
 * 000000014029AA5A: mov     ecx, r15d
 * 000000014029AA5D: jmp     short loc_14029AA72
 * 000000014029AA5F: mov     rax, [r13+2D8h]
 * 000000014029AA66: mov     rcx, rbx
 * 000000014029AA69: call    KeGuardDispatchICall
 * 000000014029AA6E: xor     eax, eax
 * 000000014029AA70: mov     ecx, eax
 * 000000014029AA72: mov     eax, [r13+7DCh]
 * 000000014029AA79: and     eax, 0FFFFFFFBh
 * 000000014029AA7C: or      eax, ecx
 * 000000014029AA7E: mov     [r13+7DCh], eax
 * 000000014029AA85: add     dword ptr [r13+688h], 10000h
 * 000000014029AA90: xor     eax, eax
 * 000000014029AA92: mov     r14d, eax
 * 000000014029AA95: test    r14d, r14d
 * 000000014029AA98: js      short loc_14029AAA9
 * 000000014029AA9A: mov     r10d, 1
 * 000000014029AAA0: mov     [rbp+2150h+var_2118], r10d
 * 000000014029AAA4: jmp     loc_14029ACDC
 * 000000014029AAA9: mov     r8d, 3
 * 000000014029AAAF: mov     eax, [r13+7DCh]
 * 000000014029AAB6: test    al, 8
 * 000000014029AAB8: jz      loc_14029ACCE
 * 000000014029AABE: bt      eax, 0Ch
 * 000000014029AAC2: jb      loc_14029ACCE
 * 000000014029AAC8: rdtsc
 * 000000014029AACA: shl     rdx, 20h
 * 000000014029AACE: mov     r15, 7010008004002001h
 * 000000014029AAD8: or      rax, rdx
 * 000000014029AADB: mov     rcx, rax
 * 000000014029AADE: ror     rax, 3
 * 000000014029AAE2: xor     rcx, rax
 * 000000014029AAE5: mov     rax, r15
 * 000000014029AAE8: mul     rcx
 * 000000014029AAEB: mov     [rbp+2150h+var_18E0], rdx
 * 000000014029AAF2: xor     dl, al
 * 000000014029AAF4: test    r8b, dl
 * 000000014029AAF7: jnz     loc_14029ACCE
 * 000000014029AAFD: mov     rax, [r13+4D0h]
 * 000000014029AB04: mov     r14d, [rax+2Ch]
 * 000000014029AB08: test    r14d, r14d
 * 000000014029AB0B: jz      short loc_14029AB38
 * 000000014029AB0D: rdtsc
 * 000000014029AB0F: shl     rdx, 20h
 * 000000014029AB13: or      rax, rdx
 * 000000014029AB16: mov     rcx, rax
 * 000000014029AB19: ror     rax, 3
 * 000000014029AB1D: xor     rcx, rax
 * 000000014029AB20: mov     rax, r15
 * 000000014029AB23: mul     rcx
 * 000000014029AB26: mov     [rbp+2150h+var_18D8], rdx
 * 000000014029AB2D: xor     rax, rdx
 * 000000014029AB30: xor     edx, edx
 * 000000014029AB32: div     r14
 * 000000014029AB35: mov     r14, rdx
 * 000000014029AB38: mov     rax, [r13+3A0h]
 * 000000014029AB3F: xor     ecx, ecx
 * 000000014029AB41: call    KeGuardDispatchICall
 * 000000014029AB46: mov     rbx, rax
 * 000000014029AB49: xor     eax, eax
 * 000000014029AB4B: test    rbx, rbx
 * 000000014029AB4E: jz      short loc_14029ABA6
 * 000000014029AB50: test    r14d, r14d
 * 000000014029AB53: jz      short loc_14029AB6F
 * 000000014029AB55: mov     rax, [r13+3A0h]
 * 000000014029AB5C: mov     rcx, rbx
 * 000000014029AB5F: add     r14d, r12d
 * 000000014029AB62: call    KeGuardDispatchICall
 * 000000014029AB67: mov     rbx, rax
 * 000000014029AB6A: test    rax, rax
 * 000000014029AB6D: jnz     short loc_14029AB50
 * 000000014029AB6F: mov     rsi, r13
 * 000000014029AB72: test    rbx, rbx
 * 000000014029AB75: jz      short loc_14029AB9F
 * 000000014029AB77: mov     rax, [r13+390h]
 * 000000014029AB7E: mov     rcx, rbx
 * 000000014029AB81: call    KeGuardDispatchICall
 * 000000014029AB86: test    eax, eax
 * 000000014029AB88: jns     short loc_14029AB9F
 * 000000014029AB8A: mov     rax, [r13+3A8h]
 * 000000014029AB91: mov     rcx, rbx
 * 000000014029AB94: call    KeGuardDispatchICall
 * 000000014029AB99: xor     eax, eax
 * 000000014029AB9B: mov     ebx, eax
 * 000000014029AB9D: jmp     short loc_14029ABA1
 * 000000014029AB9F: xor     eax, eax
 * 000000014029ABA1: test    rbx, rbx
 * 000000014029ABA4: jnz     short loc_14029ABB3
 * 000000014029ABA6: mov     [rbp+2150h+var_2058], eax
 * 000000014029ABAC: xor     eax, eax
 * 000000014029ABAE: jmp     loc_14029ACD6
 * 000000014029ABB3: mov     rax, [r13+420h]
 * 000000014029ABBA: lea     rdx, [rbp+2150h+var_1BF0]
 * 000000014029ABC1: mov     rcx, rbx
 * 000000014029ABC4: call    KeGuardDispatchICall
 * 000000014029ABC9: mov     rax, [r13+1B0h]
 * 000000014029ABD0: lea     rdx, [rbp+2150h+var_11D0]
 * 000000014029ABD7: xor     r9d, r9d
 * 000000014029ABDA: xor     r8d, r8d
 * 000000014029ABDD: mov     rcx, rbx
 * 000000014029ABE0: call    KeGuardDispatchICall
 * 000000014029ABE5: rdtsc
 * 000000014029ABE7: shl     rdx, 20h
 * 000000014029ABEB: or      rax, rdx
 * 000000014029ABEE: mov     rcx, rax
 * 000000014029ABF1: ror     rax, 3
 * 000000014029ABF5: xor     rcx, rax
 * 000000014029ABF8: mov     rax, r15
 * 000000014029ABFB: mul     rcx
 * 000000014029ABFE: lea     rcx, [rbp+2150h+var_11D0]
 * 000000014029AC05: mov     rbx, rdx
 * 000000014029AC08: mov     [rbp+2150h+var_18D0], rdx
 * 000000014029AC0F: xor     rbx, rax
 * 000000014029AC12: mov     rax, [r13+1A8h]
 * 000000014029AC19: call    KeGuardDispatchICall
 * 000000014029AC1E: mov     ecx, eax
 * 000000014029AC20: xor     edx, edx
 * 000000014029AC22: mov     rax, rbx
 * 000000014029AC25: div     rcx
 * 000000014029AC28: mov     rcx, gs:188h
 * 000000014029AC31: mov     rax, [r13+1B8h]
 * 000000014029AC38: mov     rbx, rdx
 * 000000014029AC3B: lea     rdx, [rbp+2150h+var_1C00]
 * 000000014029AC42: call    KeGuardDispatchICall
 * 000000014029AC47: mov     rax, [r13+198h]
 * 000000014029AC4E: lea     rdx, [rbp+2150h+var_11D0]
 * 000000014029AC55: lea     rcx, [rbp+2150h+var_1780]
 * 000000014029AC5C: call    KeGuardDispatchICall
 * 000000014029AC61: jmp     short loc_14029AC6A
 * 000000014029AC63: test    ebx, ebx
 * 000000014029AC65: jz      short loc_14029AC8A
 * 000000014029AC67: add     ebx, r12d
 * 000000014029AC6A: mov     rax, [r13+1A0h]
 * 000000014029AC71: lea     rdx, [rbp+2150h+var_1780]
 * 000000014029AC78: lea     rcx, [rbp+2150h+var_1FA8]
 * 000000014029AC7F: call    KeGuardDispatchICall
 * 000000014029AC84: test    eax, eax
 * 000000014029AC86: jns     short loc_14029AC63
 * 000000014029AC88: jmp     short loc_14029ACA3
 * 000000014029AC8A: mov     rax, [r13+190h]
 * 000000014029AC91: lea     rcx, [rbp+2150h+var_1C00]
 * 000000014029AC98: mov     edx, [rbp+2150h+var_1FA8]
 * 000000014029AC9E: call    KeGuardDispatchICall
 * 000000014029ACA3: mov     rax, [r13+1C0h]
 * 000000014029ACAA: lea     rdx, [rbp+2150h+var_17A0]
 * 000000014029ACB1: lea     rcx, [rbp+2150h+var_1C00]
 * 000000014029ACB8: call    KeGuardDispatchICall
 * 000000014029ACBD: mov     r10d, 1
 * 000000014029ACC3: xor     eax, eax
 * 000000014029ACC5: mov     [rbp+2150h+var_2058], r10d
 * 000000014029ACCC: jmp     short loc_14029ACDC
 * 000000014029ACCE: xor     eax, eax
 * 000000014029ACD0: mov     [rbp+2150h+var_2058], eax
 * 000000014029ACD6: mov     r10d, 1
 * 000000014029ACDC: mov     [rbp+2150h+var_1FC0], rax
 * 000000014029ACE3: mov     ecx, 4
 * 000000014029ACE8: lea     rax, [rbp+2150h+var_1FB8]
 * 000000014029ACEF: xor     edx, edx
 * 000000014029ACF1: mov     [rax], dl
 * 000000014029ACF3: add     rax, r10
 * 000000014029ACF6: add     ecx, r12d
 * 000000014029ACF9: jnz     short loc_14029ACF1
 * 000000014029ACFB: mov     edx, [r13+680h]
 * 000000014029AD02: lea     r15d, [rcx+0Ch]
 * 000000014029AD06: add     r13, 68Ch
 * 000000014029AD0D: mov     [rbp+2150h+var_2150], edx
 * 000000014029AD10: lea     r11d, [rcx+6]
 * 000000014029AD14: mov     [rbp+2150h+var_2130], r13
 * 000000014029AD18: lea     r10d, [rcx+5]
 * 000000014029AD1C: mov     [rbp+2150h+var_2100], 0C000009Ah
 * 000000014029AD23: mov     rcx, [rsp+1120h+arg_0]
 * 000000014029AD2B: mov     r14d, 8000h
 * 000000014029AD31: mov     eax, [r13+0]
 * 000000014029AD35: cmp     [rcx+688h], eax
 * 000000014029AD3B: jge     loc_1402A50A0
 * 000000014029AD41: mov     r14d, [rbp+2150h+var_1D64]
 * 000000014029AD48: mov     ebx, [rbp+2150h+var_1D38]
 * 000000014029AD4E: mov     [rbp+2150h+var_2094], r14d
 * 000000014029AD55: mov     [rbp+2150h+var_20C0], ebx
 * 000000014029AD5B: mov     eax, [rsi+7D8h]
 * 000000014029AD61: mov     ecx, 110000h
 * 000000014029AD66: and     eax, ecx
 * 000000014029AD68: cmp     eax, ecx
 * 000000014029AD6A: jz      short loc_14029AD73
 * 000000014029AD6C: xor     eax, eax
 * 000000014029AD6E: mov     dr7, rax
 * 000000014029AD71: jmp     short loc_14029AD75
 * 000000014029AD73: xor     eax, eax
 * 000000014029AD75: cmp     edx, [rsi+66Ch]
 * 000000014029AD7B: jnz     short loc_14029ADBB
 * 000000014029AD7D: mov     ecx, 1
 * 000000014029AD82: mov     [rbp+2150h+var_2150], eax
 * 000000014029AD85: add     [rsi+690h], ecx
 * 000000014029AD8B: mov     edx, eax
 * 000000014029AD8D: cmp     dword ptr [rsi+7A8h], 0Bh
 * 000000014029AD94: jnz     short loc_14029ADBB
 * 000000014029AD96: mov     eax, [rsi+7D8h]
 * 000000014029AD9C: test    cl, al
 * 000000014029AD9E: jnz     short loc_14029ADBB
 * 000000014029ADA0: cmp     [rsi+7C0h], r12d
 * 000000014029ADA7: jnz     short loc_14029ADB3
 * 000000014029ADA9: xor     eax, eax
 * 000000014029ADAB: mov     [rsi+7C0h], eax
 * 000000014029ADB1: jmp     short loc_14029ADBB
 * 000000014029ADB3: or      eax, ecx
 * 000000014029ADB5: mov     [rsi+7D8h], eax
 * 000000014029ADBB: mov     rax, [rsi+8A8h]
 * 000000014029ADC2: mov     r9, rsi
 * 000000014029ADC5: test    rax, rax
 * 000000014029ADC8: mov     [rbp+2150h+var_20EC], edx
 * 000000014029ADCB: cmovnz  r9, rax
 * 000000014029ADCF: xor     eax, eax
 * 000000014029ADD1: mov     r8d, eax
 * 000000014029ADD4: mov     r12d, [r9+668h]
 * 000000014029ADDB: add     r12, r9
 * 000000014029ADDE: mov     [rbp+2150h+var_2138], r12
 * 000000014029ADE2: cmp     dword ptr [rbp+2150h+var_1FC0], eax
 * 000000014029ADE8: jz      short loc_14029AE07
 * 000000014029ADEA: cmp     dword ptr [rbp+2150h+var_1FC0+4], edx
 * 000000014029ADF0: ja      short loc_14029AE07
 * 000000014029ADF2: mov     r12d, [rbp+2150h+var_1FB8]
 * 000000014029ADF9: mov     r8d, dword ptr [rbp+2150h+var_1FC0+4]
 * 000000014029AE00: add     r12, r9
 * 000000014029AE03: mov     [rbp+2150h+var_2138], r12
 * 000000014029AE07: cmp     r8d, edx
 * 000000014029AE0A: jz      loc_14029AF4E
 * 000000014029AE10: mov     ebx, 2
 * 000000014029AE15: mov     eax, edx
 * 000000014029AE17: sub     eax, r8d
 * 000000014029AE1A: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 000000014029AE24: mov     r10d, eax
 * 000000014029AE27: add     r8d, eax
 * 000000014029AE2A: lea     esi, [rbx+1]
 * 000000014029AE2D: lea     r14d, [rbx-1]
 * 000000014029AE31: mov     ecx, [r12]
 * 000000014029AE35: cmp     ecx, r15d
 * 000000014029AE38: jg      short loc_14029AE7F
 * 000000014029AE3A: jz      short loc_14029AE9C
 * 000000014029AE3C: sub     ecx, r14d
 * 000000014029AE3F: jz      short loc_14029AE9C
 * 000000014029AE41: sub     ecx, r11d
 * 000000014029AE44: jz      short loc_14029AE6D
 * 000000014029AE46: sub     ecx, r14d
 * 000000014029AE49: jz      short loc_14029AE62
 * 000000014029AE4B: cmp     ecx, ebx
 * 000000014029AE4D: jnz     loc_14029AEDE
 * 000000014029AE53: mov     eax, [r12+1Ch]
 * 000000014029AE58: add     eax, esi
 * 000000014029AE5A: shl     eax, 4
 * 000000014029AE5D: jmp     loc_14029AF19
 * 000000014029AE62: movzx   eax, word ptr [r12+20h]
 * 000000014029AE68: jmp     loc_14029AF13
 * 000000014029AE6D: mov     eax, [r12+18h]
 * 000000014029AE72: add     eax, ebx
 * 000000014029AE74: lea     eax, [rax+rax*2]
 * 000000014029AE77: shl     eax, 3
 * 000000014029AE7A: jmp     loc_14029AF19
 * 000000014029AE7F: cmp     ecx, 1Ch
 * 000000014029AE82: jz      loc_14029AF0D
 * 000000014029AE88: cmp     ecx, 1Eh
 * 000000014029AE8B: jz      short loc_14029AEE5
 * 000000014029AE8D: cmp     ecx, 20h ; ' '
 * 000000014029AE90: jle     short loc_14029AEDE
 * 000000014029AE92: cmp     ecx, 22h ; '"'
 * 000000014029AE95: jle     short loc_14029AEB4
 * 000000014029AE97: cmp     ecx, 2Bh ; '+'
 * 000000014029AE9A: jnz     short loc_14029AEDE
 * 000000014029AE9C: mov     ecx, [r12+10h]
 * 000000014029AEA1: mov     rax, rdi
 * 000000014029AEA4: mul     rcx
 * 000000014029AEA7: shr     rdx, 3
 * 000000014029AEAB: lea     eax, ds:30h[rdx*4]
 * 000000014029AEB2: jmp     short loc_14029AF19
 * 000000014029AEB4: mov     ecx, [r12+20h]
 * 000000014029AEB9: mov     edx, [r12+28h]
 * 000000014029AEBE: and     ecx, 0FFFh
 * 000000014029AEC4: add     rdx, 0FFFh
 * 000000014029AECB: add     rdx, rcx
 * 000000014029AECE: shr     rdx, 0Ch
 * 000000014029AED2: lea     eax, [rdx+rdx*4]
 * 000000014029AED5: lea     eax, ds:30h[rax*4]
 * 000000014029AEDC: jmp     short loc_14029AF19
 * 000000014029AEDE: mov     eax, 30h ; '0'
 * 000000014029AEE3: jmp     short loc_14029AF19
 * 000000014029AEE5: mov     ecx, [r12+24h]
 * 000000014029AEEA: mov     rax, rdi
 * 000000014029AEED: sub     ecx, r14d
 * 000000014029AEF0: mul     rcx
 * 000000014029AEF3: movzx   eax, word ptr [r12+28h]
 * 000000014029AEF9: shr     rdx, 3
 * 000000014029AEFD: add     edx, 7
 * 000000014029AF00: and     edx, 0FFFFFFF8h
 * 000000014029AF03: add     eax, ebx
 * 000000014029AF05: lea     eax, [rax+rax*2]
 * 000000014029AF08: lea     eax, [rdx+rax*8]
 * 000000014029AF0B: jmp     short loc_14029AF19
 * 000000014029AF0D: movzx   eax, word ptr [r12+28h]
 * 000000014029AF13: add     eax, 37h ; '7'
 * 000000014029AF16: and     eax, 0FFFFFFF8h
 * 000000014029AF19: add     r12, rax
 * 000000014029AF1C: sub     r10, r14
 * 000000014029AF1F: jnz     loc_14029AE31
 * 000000014029AF25: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029AF29: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029AF30: mov     r13, [rbp+2150h+var_2130]
 * 000000014029AF34: mov     r10d, 5
 * 000000014029AF3A: mov     edx, [rbp+2150h+var_2150]
 * 000000014029AF3D: mov     ebx, [rbp+2150h+var_20C0]
 * 000000014029AF43: mov     r14d, [rbp+2150h+var_2094]
 * 000000014029AF4A: mov     [rbp+2150h+var_2138], r12
 * 000000014029AF4E: mov     eax, r12d
 * 000000014029AF51: mov     dword ptr [rbp+2150h+var_1FC0+4], r8d
 * 000000014029AF58: sub     eax, r9d
 * 000000014029AF5B: mov     ecx, 1
 * 000000014029AF60: mov     [rbp+2150h+var_1FB8], eax
 * 000000014029AF66: mov     dword ptr [rbp+2150h+var_1FC0], ecx
 * 000000014029AF6C: mov     r15d, [r12]
 * 000000014029AF70: mov     [rbp+2150h+var_2140], r15d
 * 000000014029AF74: cmp     r15d, 1Ah
 * 000000014029AF78: jg      loc_14029F546
 * 000000014029AF7E: jz      loc_14029F3E5
 * 000000014029AF84: cmp     r15d, 0Bh
 * 000000014029AF88: jg      loc_14029C279
 * 000000014029AF8E: jz      loc_14029BF2B
 * 000000014029AF94: xor     eax, eax
 * 000000014029AF96: mov     ecx, r15d
 * 000000014029AF99: test    r15d, r15d
 * 000000014029AF9C: jz      loc_14029BCB5
 * 000000014029AFA2: sub     ecx, 1
 * 000000014029AFA5: jz      loc_1402A2A84
 * 000000014029AFAB: lea     r8d, [rax+3]
 * 000000014029AFAF: sub     ecx, r8d
 * 000000014029AFB2: jz      loc_14029BB59
 * 000000014029AFB8: sub     ecx, 1
 * 000000014029AFBB: jz      loc_14029B8D3
 * 000000014029AFC1: lea     ebx, [rax+2]
 * 000000014029AFC4: sub     ecx, ebx
 * 000000014029AFC6: jz      loc_14029B771
 * 000000014029AFCC: sub     ecx, 1
 * 000000014029AFCF: jz      loc_14029B37F
 * 000000014029AFD5: cmp     ecx, ebx
 * 000000014029AFD7: jnz     loc_1402A3C76
 * 000000014029AFDD: cmp     [r12+18h], eax
 * 000000014029AFE2: jz      short loc_14029B01E
 * 000000014029AFE4: cmp     [rsi+7D0h], rax
 * 000000014029AFEB: jz      loc_14029B15D
 * 000000014029AFF1: mov     ecx, [rsi+7DCh]
 * 000000014029AFF7: test    cl, 4
 * 000000014029AFFA: jnz     loc_14029B15D
 * 000000014029B000: cmp     [rsi+684h], eax
 * 000000014029B006: jnz     loc_14029B154
 * 000000014029B00C: mov     eax, ecx
 * 000000014029B00E: shl     eax, 3
 * 000000014029B011: xor     eax, ecx
 * 000000014029B013: and     eax, 20h
 * 000000014029B016: xor     eax, ecx
 * 000000014029B018: mov     [rsi+7DCh], eax
 * 000000014029B01E: mov     r15d, [rsi+684h]
 * 000000014029B025: lea     rax, [r12+30h]
 * 000000014029B02A: mov     edx, [r12+1Ch]
 * 000000014029B02F: shl     r15, 4
 * 000000014029B033: add     r15, rax
 * 000000014029B036: shl     rdx, 4
 * 000000014029B03A: add     rdx, rax
 * 000000014029B03D: mov     [rbp+2150h+var_2148], rdx
 * 000000014029B041: xor     eax, eax
 * 000000014029B043: cmp     [r15], eax
 * 000000014029B046: jl      loc_14029B292
 * 000000014029B04C: mov     rdi, [r15+8]
 * 000000014029B050: mov     r8d, [r15+4]
 * 000000014029B054: mov     r9, rdi
 * 000000014029B057: add     [rsi+688h], r8d
 * 000000014029B05E: mov     rax, rdi
 * 000000014029B061: mov     r10d, [rsi+674h]
 * 000000014029B068: mov     r13d, r8d
 * 000000014029B06B: mov     r14, [rsi+678h]
 * 000000014029B072: lea     rcx, [rdi+r8]
 * 000000014029B076: cmp     rdi, rcx
 * 000000014029B079: jnb     short loc_14029B08C
 * 000000014029B07B: mov     r11d, 40h ; '@'
 * 000000014029B081: prefetchnta byte ptr [rax]
 * 000000014029B084: add     rax, r11
 * 000000014029B087: cmp     rax, rcx
 * 000000014029B08A: jb      short loc_14029B081
 * 000000014029B08C: mov     r11d, r8d
 * 000000014029B08F: mov     rbx, r14
 * 000000014029B092: shr     r11d, 7
 * 000000014029B096: test    r11d, r11d
 * 000000014029B099: jz      short loc_14029B107
 * 000000014029B09B: mov     esi, 1
 * 000000014029B0A0: mov     r13, 7010008004002001h
 * 000000014029B0AA: mov     eax, 8
 * 000000014029B0AF: xor     rbx, [r9]
 * 000000014029B0B2: mov     ecx, r10d
 * 000000014029B0B5: rol     rbx, cl
 * 000000014029B0B8: xor     rbx, [r9+8]
 * 000000014029B0BC: add     r9, 10h
 * 000000014029B0C0: rol     rbx, cl
 * 000000014029B0C3: sub     rax, rsi
 * 000000014029B0C6: jnz     short loc_14029B0AF
 * 000000014029B0C8: mov     rcx, r9
 * 000000014029B0CB: sub     rcx, rdi
 * 000000014029B0CE: xor     rcx, r14
 * 000000014029B0D1: mov     rax, rcx
 * 000000014029B0D4: rol     rax, 11h
 * 000000014029B0D8: xor     rcx, rax
 * 000000014029B0DB: mov     rax, r13
 * 000000014029B0DE: mul     rcx
 * 000000014029B0E1: xor     r10d, eax
 * 000000014029B0E4: mov     [rbp+2150h+var_18C8], rdx
 * 000000014029B0EB: xor     r10d, edx
 * 000000014029B0EE: and     r10d, 3Fh
 * 000000014029B0F2: cmovz   r10d, esi
 * 000000014029B0F6: add     r11d, 0FFFFFFFFh
 * 000000014029B0FA: jnz     short loc_14029B0AA
 * 000000014029B0FC: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029B100: mov     r13, r8
 * 000000014029B103: mov     rdx, [rbp+2150h+var_2148]
 * 000000014029B107: and     r8d, 7Fh
 * 000000014029B10B: mov     r11d, 1
 * 000000014029B111: cmp     r8d, 8
 * 000000014029B115: jb      short loc_14029B134
 * 000000014029B117: mov     eax, r8d
 * 000000014029B11A: shr     rax, 3
 * 000000014029B11E: xor     rbx, [r9]
 * 000000014029B121: mov     ecx, r10d
 * 000000014029B124: rol     rbx, cl
 * 000000014029B127: add     r9, 8
 * 000000014029B12B: add     r8d, 0FFFFFFF8h
 * 000000014029B12F: sub     rax, r11
 * 000000014029B132: jnz     short loc_14029B11E
 * 000000014029B134: test    r8d, r8d
 * 000000014029B137: jz      short loc_14029B14F
 * 000000014029B139: movzx   eax, byte ptr [r9]
 * 000000014029B13D: mov     ecx, r10d
 * 000000014029B140: xor     rbx, rax
 * 000000014029B143: add     r9, r11
 * 000000014029B146: rol     rbx, cl
 * 000000014029B149: add     r8d, 0FFFFFFFFh
 * 000000014029B14D: jnz     short loc_14029B139
 * 000000014029B14F: mov     rax, rbx
 * 000000014029B152: jmp     short loc_14029B1CF
 * 000000014029B154: test    cl, 20h
 * 000000014029B157: jz      loc_14029B01E
 * 000000014029B15D: mov     [rsi+684h], eax
 * 000000014029B163: xor     r13d, r13d
 * 000000014029B166: mov     r14d, 8000h
 * 000000014029B16C: mov     r15d, 0Ch
 * 000000014029B172: mov     eax, [rsi+684h]
 * 000000014029B178: dec     edx
 * 000000014029B17A: test    eax, eax
 * 000000014029B17C: cmovz   edx, [rbp+2150h+var_20EC]
 * 000000014029B180: inc     edx
 * 000000014029B182: mov     [rbp+2150h+var_2150], edx
 * 000000014029B185: cmp     [rsi+750h], r13d
 * 000000014029B18C: jnz     loc_1402A4FAD
 * 000000014029B192: lea     r13, [rsi+68Ch]
 * 000000014029B199: mov     eax, [r13+0]
 * 000000014029B19D: mov     [rbp+2150h+var_2130], r13
 * 000000014029B1A1: cmp     [rsi+688h], eax
 * 000000014029B1A7: jge     loc_1402A4FAA
 * 000000014029B1AD: mov     ebx, [rbp+2150h+var_20C0]
 * 000000014029B1B3: mov     r11d, 6
 * 000000014029B1B9: mov     r14d, [rbp+2150h+var_2094]
 * 000000014029B1C0: or      r12d, 0FFFFFFFFh
 * 000000014029B1C4: lea     r10d, [r11-1]
 * 000000014029B1C8: jmp     loc_14029AD5B
 * 000000014029B1CD: xor     ebx, eax
 * 000000014029B1CF: shr     rax, 1Fh
 * 000000014029B1D3: test    rax, rax
 * 000000014029B1D6: jnz     short loc_14029B1CD
 * 000000014029B1D8: mov     eax, [r15]
 * 000000014029B1DB: btr     ebx, 1Fh
 * 000000014029B1DF: btr     eax, 1Fh
 * 000000014029B1E3: cmp     ebx, eax
 * 000000014029B1E5: jz      loc_14029B28E
 * 000000014029B1EB: test    r13, r13
 * 000000014029B1EE: jz      loc_14029B2E4
 * 000000014029B1F4: mov     eax, [rsi+7DCh]
 * 000000014029B1FA: mov     ecx, 40h ; '@'
 * 000000014029B1FF: test    cl, al
 * 000000014029B201: jz      loc_14029B2E4
 * 000000014029B207: mov     r12, cr8
 * 000000014029B20B: lea     eax, [rcx-3Eh]
 * 000000014029B20E: mov     cr8, rax
 * 000000014029B212: lea     rax, [r13-1]
 * 000000014029B216: mov     r14, rdi
 * 000000014029B219: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014029B220: add     rax, rdi
 * 000000014029B223: or      rax, 0FFFh
 * 000000014029B229: mov     [rbp+2150h+var_20F8], rax
 * 000000014029B22D: lea     r13, [r14-1]
 * 000000014029B231: mov     rax, [rsi+450h]
 * 000000014029B238: xor     edx, edx
 * 000000014029B23A: mov     rcx, r14
 * 000000014029B23D: call    KeGuardDispatchICall
 * 000000014029B242: cmp     eax, 0C000022Dh
 * 000000014029B247: jnz     short loc_14029B26D
 * 000000014029B249: mov     eax, 1
 * 000000014029B24E: cmp     r12b, al
 * 000000014029B251: ja      short loc_14029B271
 * 000000014029B253: movzx   eax, r12b
 * 000000014029B257: mov     cr8, rax
 * 000000014029B25B: mov     al, [r14]
 * 000000014029B25E: mov     rax, cr8
 * 000000014029B262: mov     eax, 2
 * 000000014029B267: mov     cr8, rax
 * 000000014029B26B: jmp     short loc_14029B231
 * 000000014029B26D: test    eax, eax
 * 000000014029B26F: js      short loc_14029B2D8
 * 000000014029B271: mov     eax, 1000h
 * 000000014029B276: add     r14, rax
 * 000000014029B279: add     r13, rax
 * 000000014029B27C: cmp     r13, [rbp+2150h+var_20F8]
 * 000000014029B280: jnz     short loc_14029B231
 * 000000014029B282: movzx   eax, r12b
 * 000000014029B286: mov     cr8, rax
 * 000000014029B28A: mov     rdx, [rbp+2150h+var_2148]
 * 000000014029B28E: mov     r13, [rbp+2150h+var_2130]
 * 000000014029B292: add     r15, 10h
 * 000000014029B296: cmp     r15, rdx
 * 000000014029B299: jnb     short loc_14029B2B2
 * 000000014029B29B: mov     eax, [r13+0]
 * 000000014029B29F: mov     r12, [rbp+2150h+var_2138]
 * 000000014029B2A3: cmp     [rsi+688h], eax
 * 000000014029B2A9: jl      loc_14029B041
 * 000000014029B2AF: cmp     r15, rdx
 * 000000014029B2B2: mov     edx, [rbp+2150h+var_2150]
 * 000000014029B2B5: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029B2BC: mov     r14d, 8000h
 * 000000014029B2C2: jnz     loc_14029B364
 * 000000014029B2C8: xor     eax, eax
 * 000000014029B2CA: mov     [rsi+684h], eax
 * 000000014029B2D0: xor     r13d, r13d
 * 000000014029B2D3: jmp     loc_14029B16C
 * 000000014029B2D8: movzx   eax, r12b
 * 000000014029B2DC: mov     cr8, rax
 * 000000014029B2E0: mov     r12, [rbp+2150h+var_2138]
 * 000000014029B2E4: mov     eax, [r15]
 * 000000014029B2E7: btr     eax, 1Fh
 * 000000014029B2EB: cmp     dword ptr [rsi+750h], 0
 * 000000014029B2F2: jnz     short loc_14029B304
 * 000000014029B2F4: mov     ecx, ebx
 * 000000014029B2F6: xor     rcx, rax
 * 000000014029B2F9: mov     rax, [rsi+548h]
 * 000000014029B300: mov     [rax+18h], rcx
 * 000000014029B304: mov     rdx, [rbp+2150h+var_2148]
 * 000000014029B308: xor     eax, eax
 * 000000014029B30A: mov     r13, [rbp+2150h+var_2130]
 * 000000014029B30E: cmp     [rsi+750h], eax
 * 000000014029B314: jnz     loc_14029B292
 * 000000014029B31A: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029B324: add     rax, rsi
 * 000000014029B327: mov     [rsi+758h], rax
 * 000000014029B32E: mov     rax, 0B3B74BDEE4453415h
 * 000000014029B338: add     rax, r12
 * 000000014029B33B: mov     [rsi+760h], rax
 * 000000014029B342: movsxd  rax, dword ptr [r12]
 * 000000014029B346: mov     [rsi+768h], rax
 * 000000014029B34D: mov     eax, 1
 * 000000014029B352: mov     [rsi+770h], rdi
 * 000000014029B359: mov     [rsi+750h], eax
 * 000000014029B35F: jmp     loc_14029B292
 * 000000014029B364: mov     rax, [rbp+2150h+var_2138]
 * 000000014029B368: add     rax, 30h ; '0'
 * 000000014029B36C: sub     r15, rax
 * 000000014029B36F: sar     r15, 4
 * 000000014029B373: mov     [rsi+684h], r15d
 * 000000014029B37A: jmp     loc_14029B2D0
 * 000000014029B37F: mov     rcx, [r12+18h]
 * 000000014029B384: mov     r8, 0A3A03F5891C8B4E8h
 * 000000014029B38E: movzx   eax, word ptr [r12+22h]
 * 000000014029B394: mov     rdx, 0B3B74BDEE4453415h
 * 000000014029B39E: mov     r13d, 1
 * 000000014029B3A4: cmp     [rcx+42h], ax
 * 000000014029B3A8: jz      short loc_14029B3E3
 * 000000014029B3AA: xor     eax, eax
 * 000000014029B3AC: cmp     [rsi+750h], eax
 * 000000014029B3B2: jnz     short loc_14029B3E3
 * 000000014029B3B4: lea     rax, [rsi+r8]
 * 000000014029B3B8: mov     [rsi+758h], rax
 * 000000014029B3BF: lea     rax, [r12+rdx]
 * 000000014029B3C3: mov     [rsi+760h], rax
 * 000000014029B3CA: movsxd  rax, dword ptr [r12]
 * 000000014029B3CE: mov     [rsi+768h], rax
 * 000000014029B3D5: mov     [rsi+770h], rcx
 * 000000014029B3DC: mov     [rsi+750h], r13d
 * 000000014029B3E3: mov     r11d, 40h ; '@'
 * 000000014029B3E9: test    [r12+22h], r11b
 * 000000014029B3EE: jnz     short loc_14029B435
 * 000000014029B3F0: lea     rax, [rcx+0C8h]
 * 000000014029B3F7: cmp     [rax], rax
 * 000000014029B3FA: jz      short loc_14029B435
 * 000000014029B3FC: xor     eax, eax
 * 000000014029B3FE: cmp     [rsi+750h], eax
 * 000000014029B404: jnz     short loc_14029B435
 * 000000014029B406: lea     rax, [rsi+r8]
 * 000000014029B40A: mov     [rsi+758h], rax
 * 000000014029B411: lea     rax, [r12+rdx]
 * 000000014029B415: mov     [rsi+760h], rax
 * 000000014029B41C: movsxd  rax, dword ptr [r12]
 * 000000014029B420: mov     [rsi+768h], rax
 * 000000014029B427: mov     [rsi+770h], rcx
 * 000000014029B42E: mov     [rsi+750h], r13d
 * 000000014029B435: mov     r14, [r12+8]
 * 000000014029B43A: mov     r8d, [r12+10h]
 * 000000014029B43F: mov     r9, r14
 * 000000014029B442: add     [rsi+688h], r8d
 * 000000014029B449: mov     rax, r14
 * 000000014029B44C: mov     r10d, [rsi+674h]
 * 000000014029B453: mov     r15, [rsi+678h]
 * 000000014029B45A: lea     rcx, [r14+r8]
 * 000000014029B45E: cmp     r14, rcx
 * 000000014029B461: jnb     short loc_14029B46E
 * 000000014029B463: prefetchnta byte ptr [rax]
 * 000000014029B466: add     rax, r11
 * 000000014029B469: cmp     rax, rcx
 * 000000014029B46C: jb      short loc_14029B463
 * 000000014029B46E: mov     r11d, r8d
 * 000000014029B471: mov     rbx, r15
 * 000000014029B474: shr     r11d, 7
 * 000000014029B478: test    r11d, r11d
 * 000000014029B47B: jz      short loc_14029B4E4
 * 000000014029B47D: mov     rdi, 7010008004002001h
 * 000000014029B487: mov     eax, 8
 * 000000014029B48C: xor     rbx, [r9]
 * 000000014029B48F: mov     ecx, r10d
 * 000000014029B492: rol     rbx, cl
 * 000000014029B495: xor     rbx, [r9+8]
 * 000000014029B499: add     r9, 10h
 * 000000014029B49D: rol     rbx, cl
 * 000000014029B4A0: sub     rax, r13
 * 000000014029B4A3: jnz     short loc_14029B48C
 * 000000014029B4A5: mov     rcx, r9
 * 000000014029B4A8: sub     rcx, r14
 * 000000014029B4AB: xor     rcx, r15
 * 000000014029B4AE: mov     rax, rcx
 * 000000014029B4B1: rol     rax, 11h
 * 000000014029B4B5: xor     rcx, rax
 * 000000014029B4B8: mov     rax, rdi
 * 000000014029B4BB: mul     rcx
 * 000000014029B4BE: xor     r10d, eax
 * 000000014029B4C1: mov     [rbp+2150h+var_18C0], rdx
 * 000000014029B4C8: xor     r10d, edx
 * 000000014029B4CB: and     r10d, 3Fh
 * 000000014029B4CF: cmovz   r10d, r13d
 * 000000014029B4D3: add     r11d, 0FFFFFFFFh
 * 000000014029B4D7: jnz     short loc_14029B487
 * 000000014029B4D9: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029B4DD: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029B4E4: and     r8d, 7Fh
 * 000000014029B4E8: cmp     r8d, 8
 * 000000014029B4EC: jb      short loc_14029B50B
 * 000000014029B4EE: mov     eax, r8d
 * 000000014029B4F1: shr     rax, 3
 * 000000014029B4F5: xor     rbx, [r9]
 * 000000014029B4F8: mov     ecx, r10d
 * 000000014029B4FB: rol     rbx, cl
 * 000000014029B4FE: add     r9, 8
 * 000000014029B502: add     r8d, 0FFFFFFF8h
 * 000000014029B506: sub     rax, r13
 * 000000014029B509: jnz     short loc_14029B4F5
 * 000000014029B50B: test    r8d, r8d
 * 000000014029B50E: jz      short loc_14029B526
 * 000000014029B510: movzx   eax, byte ptr [r9]
 * 000000014029B514: mov     ecx, r10d
 * 000000014029B517: xor     rbx, rax
 * 000000014029B51A: add     r9, r13
 * 000000014029B51D: rol     rbx, cl
 * 000000014029B520: add     r8d, 0FFFFFFFFh
 * 000000014029B524: jnz     short loc_14029B510
 * 000000014029B526: mov     rax, rbx
 * 000000014029B529: jmp     short loc_14029B52D
 * 000000014029B52B: xor     ebx, eax
 * 000000014029B52D: shr     rax, 1Fh
 * 000000014029B531: test    rax, rax
 * 000000014029B534: jnz     short loc_14029B52B
 * 000000014029B536: mov     r14, [rbp+2150h+var_2138]
 * 000000014029B53A: btr     ebx, 1Fh
 * 000000014029B53E: mov     r12d, eax
 * 000000014029B541: cmp     ebx, [r14+14h]
 * 000000014029B545: jz      loc_14029B613
 * 000000014029B54B: cmp     [r14], eax
 * 000000014029B54E: jnz     short loc_14029B558
 * 000000014029B550: cmp     [r14+18h], eax
 * 000000014029B554: cmovnz  r12d, r13d
 * 000000014029B558: mov     ecx, [r14+10h]
 * 000000014029B55C: mov     rdx, [r14+8]
 * 000000014029B560: test    rcx, rcx
 * 000000014029B563: jz      loc_14029B6F7
 * 000000014029B569: mov     eax, [rsi+7DCh]
 * 000000014029B56F: mov     r8d, 40h ; '@'
 * 000000014029B575: test    r8b, al
 * 000000014029B578: jz      loc_14029B6F7
 * 000000014029B57E: mov     r15, cr8
 * 000000014029B582: lea     eax, [r8-3Eh]
 * 000000014029B586: mov     cr8, rax
 * 000000014029B58A: mov     r14, rdx
 * 000000014029B58D: lea     rax, [rcx-1]
 * 000000014029B591: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014029B598: add     rax, rdx
 * 000000014029B59B: or      rax, 0FFFh
 * 000000014029B5A1: mov     [rbp+2150h+var_2148], rax
 * 000000014029B5A5: lea     r13, [r14-1]
 * 000000014029B5A9: mov     rax, [rsi+450h]
 * 000000014029B5B0: xor     edx, edx
 * 000000014029B5B2: mov     rcx, r14
 * 000000014029B5B5: call    KeGuardDispatchICall
 * 000000014029B5BA: cmp     eax, 0C000022Dh
 * 000000014029B5BF: jnz     short loc_14029B5EE
 * 000000014029B5C1: test    r12d, r12d
 * 000000014029B5C4: jnz     loc_14029B6EB
 * 000000014029B5CA: lea     eax, [r12+1]
 * 000000014029B5CF: cmp     r15b, al
 * 000000014029B5D2: ja      short loc_14029B5F6
 * 000000014029B5D4: movzx   eax, r15b
 * 000000014029B5D8: mov     cr8, rax
 * 000000014029B5DC: mov     al, [r14]
 * 000000014029B5DF: mov     rax, cr8
 * 000000014029B5E3: lea     eax, [r12+2]
 * 000000014029B5E8: mov     cr8, rax
 * 000000014029B5EC: jmp     short loc_14029B5A9
 * 000000014029B5EE: test    eax, eax
 * 000000014029B5F0: js      loc_14029B6EB
 * 000000014029B5F6: mov     eax, 1000h
 * 000000014029B5FB: add     r14, rax
 * 000000014029B5FE: add     r13, rax
 * 000000014029B601: cmp     r13, [rbp+2150h+var_2148]
 * 000000014029B605: jnz     short loc_14029B5A9
 * 000000014029B607: movzx   eax, r15b
 * 000000014029B60B: mov     cr8, rax
 * 000000014029B60F: mov     r14, [rbp+2150h+var_2138]
 * 000000014029B613: mov     r12, 0A3A03F5891C8B4E8h
 * 000000014029B61D: mov     r15, 0B3B74BDEE4453415h
 * 000000014029B627: mov     ebx, 1
 * 000000014029B62C: lea     rax, [r14+30h]
 * 000000014029B630: xor     r9d, r9d
 * 000000014029B633: mov     [rbp+2150h+var_1D70], rax
 * 000000014029B63A: lea     rcx, [rbp+2150h+var_1D78]
 * 000000014029B641: movzx   eax, word ptr [r14+20h]
 * 000000014029B646: xor     r8d, r8d
 * 000000014029B649: mov     [rbp+2150h+var_1D78], ax
 * 000000014029B650: xor     edx, edx
 * 000000014029B652: mov     [rbp+2150h+var_1D76], ax
 * 000000014029B659: lea     rax, [rbp+2150h+var_1E40]
 * 000000014029B660: mov     [rsp+1120h+var_10E8], rax
 * 000000014029B665: xor     eax, eax
 * 000000014029B667: mov     [rsp+1120h+var_10F0], rax
 * 000000014029B66C: mov     byte ptr [rsp+1120h+var_10F8], al
 * 000000014029B670: mov     rax, [rsi+4C0h]
 * 000000014029B677: mov     [rsp+1120h+BugCheckParameter4], rax
 * 000000014029B67C: mov     rax, [rsi+1D8h]
 * 000000014029B683: call    KeGuardDispatchICall
 * 000000014029B688: test    eax, eax
 * 000000014029B68A: js      short loc_14029B6E3
 * 000000014029B68C: mov     rcx, [rbp+2150h+var_1E40]
 * 000000014029B693: cmp     rcx, [r14+18h]
 * 000000014029B697: jz      short loc_14029B6D7
 * 000000014029B699: xor     eax, eax
 * 000000014029B69B: cmp     [rsi+750h], eax
 * 000000014029B6A1: jnz     short loc_14029B6D7
 * 000000014029B6A3: lea     rax, [rsi+r12]
 * 000000014029B6A7: mov     [rsi+758h], rax
 * 000000014029B6AE: lea     rax, [r14+r15]
 * 000000014029B6B2: mov     [rsi+760h], rax
 * 000000014029B6B9: movsxd  rax, dword ptr [r14]
 * 000000014029B6BC: mov     [rsi+768h], rax
 * 000000014029B6C3: mov     [rsi+770h], rcx
 * 000000014029B6CA: mov     [rsi+750h], ebx
 * 000000014029B6D0: mov     rcx, [rbp+2150h+var_1E40]
 * 000000014029B6D7: mov     rax, [rsi+1D0h]
 * 000000014029B6DE: call    KeGuardDispatchICall
 * 000000014029B6E3: mov     edx, [rbp+2150h+var_2150]
 * 000000014029B6E6: jmp     loc_14029B163
 * 000000014029B6EB: movzx   eax, r15b
 * 000000014029B6EF: mov     r14, [rbp+2150h+var_2138]
 * 000000014029B6F3: mov     cr8, rax
 * 000000014029B6F7: cmp     dword ptr [rsi+750h], 0
 * 000000014029B6FE: mov     eax, [r14+14h]
 * 000000014029B702: jnz     short loc_14029B716
 * 000000014029B704: mov     ecx, eax
 * 000000014029B706: mov     eax, ebx
 * 000000014029B708: xor     rcx, rax
 * 000000014029B70B: mov     rax, [rsi+548h]
 * 000000014029B712: mov     [rax+18h], rcx
 * 000000014029B716: mov     rcx, [r14+8]
 * 000000014029B71A: xor     eax, eax
 * 000000014029B71C: mov     r12, 0A3A03F5891C8B4E8h
 * 000000014029B726: mov     r15, 0B3B74BDEE4453415h
 * 000000014029B730: lea     ebx, [rax+1]
 * 000000014029B733: cmp     [rsi+750h], eax
 * 000000014029B739: jnz     loc_14029B62C
 * 000000014029B73F: lea     rax, [rsi+r12]
 * 000000014029B743: mov     [rsi+758h], rax
 * 000000014029B74A: lea     rax, [r14+r15]
 * 000000014029B74E: mov     [rsi+760h], rax
 * 000000014029B755: movsxd  rax, dword ptr [r14]
 * 000000014029B758: mov     [rsi+768h], rax
 * 000000014029B75F: mov     [rsi+770h], rcx
 * 000000014029B766: mov     [rsi+750h], ebx
 * 000000014029B76C: jmp     loc_14029B62C
 * 000000014029B771: mov     rax, [rsi+190h]
 * 000000014029B778: lea     rcx, [rbp+2150h+var_1870]
 * 000000014029B77F: mov     edx, [r12+1Ch]
 * 000000014029B784: call    KeGuardDispatchICall
 * 000000014029B789: mov     rax, [rsi+1C0h]
 * 000000014029B790: lea     rdx, [rbp+2150h+var_1860]
 * 000000014029B797: lea     rcx, [rbp+2150h+var_1870]
 * 000000014029B79E: call    KeGuardDispatchICall
 * 000000014029B7A3: xor     eax, eax
 * 000000014029B7A5: mov     r10d, eax
 * 000000014029B7A8: cmp     [r12+18h], eax
 * 000000014029B7AD: jbe     loc_14029B8AD
 * 000000014029B7B3: xor     edi, edi
 * 000000014029B7B5: mov     eax, r10d
 * 000000014029B7B8: lea     r8, [rax+rax*2]
 * 000000014029B7BC: mov     r9d, [r12+r8*8+40h]
 * 000000014029B7C1: test    [rsi+6DBh], bl
 * 000000014029B7C7: jz      short loc_14029B7EC
 * 000000014029B7C9: mov     eax, 0C0000082h
 * 000000014029B7CE: cmp     r9d, eax
 * 000000014029B7D1: jnz     short loc_14029B7EC
 * 000000014029B7D3: mov     eax, gs:1A4h
 * 000000014029B7DB: cmp     eax, [rsi+748h]
 * 000000014029B7E1: jnz     short loc_14029B7EC
 * 000000014029B7E3: mov     rdx, [rsi+740h]
 * 000000014029B7EA: jmp     short loc_14029B7F8
 * 000000014029B7EC: mov     ecx, r9d
 * 000000014029B7EF: rdmsr
 * 000000014029B7F1: shl     rdx, 20h
 * 000000014029B7F5: or      rdx, rax
 * 000000014029B7F8: mov     rcx, [r12+r8*8+30h]
 * 000000014029B7FD: mov     r8, [r12+r8*8+38h]
 * 000000014029B802: and     rdx, rcx
 * 000000014029B805: cmp     rdx, r8
 * 000000014029B808: jz      short loc_14029B87A
 * 000000014029B80A: mov     ecx, [r12+1Ch]
 * 000000014029B80F: shl     rcx, 20h
 * 000000014029B813: or      rcx, r9
 * 000000014029B816: cmp     [rsi+750h], edi
 * 000000014029B81C: jnz     short loc_14029B898
 * 000000014029B81E: mov     rax, [rsi+548h]
 * 000000014029B825: xor     r8, rdx
 * 000000014029B828: mov     [rax+18h], r8
 * 000000014029B82C: cmp     [rsi+750h], edi
 * 000000014029B832: jnz     short loc_14029B898
 * 000000014029B834: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029B83E: add     rax, rsi
 * 000000014029B841: mov     [rsi+758h], rax
 * 000000014029B848: mov     rax, 0B3B74BDEE4453415h
 * 000000014029B852: add     rax, r12
 * 000000014029B855: mov     [rsi+760h], rax
 * 000000014029B85C: movsxd  rax, dword ptr [r12]
 * 000000014029B860: mov     [rsi+768h], rax
 * 000000014029B867: mov     [rsi+770h], rcx
 * 000000014029B86E: mov     dword ptr [rsi+750h], 1
 * 000000014029B878: jmp     short loc_14029B898
 * 000000014029B87A: test    dword ptr [rsi+7DCh], 200h
 * 000000014029B884: jz      short loc_14029B898
 * 000000014029B886: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 000000014029B88A: jnz     short loc_14029B898
 * 000000014029B88C: mov     rax, rdx
 * 000000014029B88F: mov     ecx, r9d
 * 000000014029B892: shr     rdx, 20h
 * 000000014029B896: wrmsr
 * 000000014029B898: inc     r10d
 * 000000014029B89B: cmp     r10d, [r12+18h]
 * 000000014029B8A0: jb      loc_14029B7B5
 * 000000014029B8A6: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029B8AD: mov     rax, [rsi+188h]
 * 000000014029B8B4: lea     rcx, [rbp+2150h+var_1860]
 * 000000014029B8BB: call    KeGuardDispatchICall
 * 000000014029B8C0: mov     eax, [r12+18h]
 * 000000014029B8C5: shl     eax, 0Fh
 * 000000014029B8C8: add     [rsi+688h], eax
 * 000000014029B8CE: jmp     loc_14029B6E3
 * 000000014029B8D3: mov     ecx, [rsi+690h]
 * 000000014029B8D9: mov     eax, 1
 * 000000014029B8DE: test    al, cl
 * 000000014029B8E0: jz      loc_14029B163
 * 000000014029B8E6: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029B8F0: jnz     short loc_14029B903
 * 000000014029B8F2: xor     eax, eax
 * 000000014029B8F4: and     ecx, r8d
 * 000000014029B8F7: cmp     cl, r8b
 * 000000014029B8FA: mov     r13d, eax
 * 000000014029B8FD: setz    r13b
 * 000000014029B901: jmp     short loc_14029B953
 * 000000014029B903: rdtsc
 * 000000014029B905: shl     rdx, 20h
 * 000000014029B909: mov     r13d, 0
 * 000000014029B90F: or      rax, rdx
 * 000000014029B912: mov     rcx, rax
 * 000000014029B915: ror     rax, 3
 * 000000014029B919: xor     rcx, rax
 * 000000014029B91C: mov     rax, 7010008004002001h
 * 000000014029B926: mul     rcx
 * 000000014029B929: mov     rcx, rdx
 * 000000014029B92C: mov     [rbp+2150h+var_18B8], rdx
 * 000000014029B933: xor     rcx, rax
 * 000000014029B936: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014029B940: mul     rcx
 * 000000014029B943: shr     rdx, 1
 * 000000014029B946: lea     rax, [rdx+rdx*2]
 * 000000014029B94A: cmp     rcx, rax
 * 000000014029B94D: setz    r13b
 * 000000014029B951: xor     eax, eax
 * 000000014029B953: mov     rbx, [rsi+500h]
 * 000000014029B95A: mov     r14d, eax
 * 000000014029B95D: mov     dword ptr [rbp+2150h+var_20E0], eax
 * 000000014029B960: mov     rax, [rsi+168h]
 * 000000014029B967: call    KeGuardDispatchICall
 * 000000014029B96C: mov     rax, [rsi+118h]
 * 000000014029B973: xor     edx, edx
 * 000000014029B975: mov     rcx, rbx
 * 000000014029B978: call    KeGuardDispatchICall
 * 000000014029B97D: mov     rcx, [rsi+4D8h]
 * 000000014029B984: mov     rax, [rcx]
 * 000000014029B987: cmp     rax, rcx
 * 000000014029B98A: jz      short loc_14029B9A6
 * 000000014029B98C: mov     edx, 1
 * 000000014029B991: mov     [rax-12Ah], dl
 * 000000014029B997: add     r14d, edx
 * 000000014029B99A: mov     rax, [rax]
 * 000000014029B99D: cmp     rax, rcx
 * 000000014029B9A0: jnz     short loc_14029B991
 * 000000014029B9A2: mov     dword ptr [rbp+2150h+var_20E0], r14d
 * 000000014029B9A6: mov     rax, [rsi+508h]
 * 000000014029B9AD: mov     r14d, 4
 * 000000014029B9B3: mov     rdi, [rbp+2150h+var_2138]
 * 000000014029B9B7: mov     ebx, r14d
 * 000000014029B9BA: mov     r12, [rax]
 * 000000014029B9BD: mov     r15d, [r12]
 * 000000014029B9C1: mov     rax, [rsi+0F8h]
 * 000000014029B9C8: mov     rdx, rbx
 * 000000014029B9CB: mov     rcx, r12
 * 000000014029B9CE: call    KeGuardDispatchICall
 * 000000014029B9D3: mov     rdx, rax
 * 000000014029B9D6: xor     eax, eax
 * 000000014029B9D8: test    rdx, rdx
 * 000000014029B9DB: jz      loc_14029BB0A
 * 000000014029B9E1: mov     rcx, [rdx]
 * 000000014029B9E4: sar     rcx, 10h
 * 000000014029B9E8: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 000000014029B9EC: mov     al, [rcx]
 * 000000014029B9EE: and     al, 7Fh
 * 000000014029B9F0: cmp     al, 3
 * 000000014029B9F2: jnz     short loc_14029BA63
 * 000000014029B9F4: xor     eax, eax
 * 000000014029B9F6: cmp     [rcx+1BEh], al
 * 000000014029B9FC: jnz     short loc_14029BA58
 * 000000014029B9FE: test    dword ptr [rcx+304h], 4000000h
 * 000000014029BA08: jz      short loc_14029BA58
 * 000000014029BA0A: cmp     [rsi+750h], eax
 * 000000014029BA10: jnz     short loc_14029BA58
 * 000000014029BA12: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029BA1C: add     rax, rsi
 * 000000014029BA1F: mov     [rsi+758h], rax
 * 000000014029BA26: mov     rax, 0B3B74BDEE4453415h
 * 000000014029BA30: add     rax, rdi
 * 000000014029BA33: mov     [rsi+760h], rax
 * 000000014029BA3A: movsxd  rax, dword ptr [rdi]
 * 000000014029BA3D: mov     [rsi+768h], rax
 * 000000014029BA44: mov     eax, 1
 * 000000014029BA49: mov     [rsi+770h], rcx
 * 000000014029BA50: mov     [rsi+750h], eax
 * 000000014029BA56: xor     eax, eax
 * 000000014029BA58: mov     [rcx+1BEh], al
 * 000000014029BA5E: jmp     loc_14029BAFB
 * 000000014029BA63: cmp     al, 6
 * 000000014029BA65: jnz     short loc_14029BAA9
 * 000000014029BA67: test    r13d, r13d
 * 000000014029BA6A: jz      loc_14029BAFB
 * 000000014029BA70: mov     rax, [rcx+2A8h]
 * 000000014029BA77: cmp     rax, [rsi+310h]
 * 000000014029BA7E: jz      short loc_14029BA89
 * 000000014029BA80: cmp     rax, [rsi+318h]
 * 000000014029BA87: jnz     short loc_14029BAAD
 * 000000014029BA89: mov     rax, [rsi+320h]
 * 000000014029BA90: cmp     [rcx+2B8h], rax
 * 000000014029BA97: jnz     short loc_14029BAAD
 * 000000014029BA99: mov     rax, [rsi+328h]
 * 000000014029BAA0: cmp     [rcx+2B0h], rax
 * 000000014029BAA7: jmp     short loc_14029BAAB
 * 000000014029BAA9: test    al, al
 * 000000014029BAAB: jz      short loc_14029BAFB
 * 000000014029BAAD: xor     eax, eax
 * 000000014029BAAF: cmp     [rsi+750h], eax
 * 000000014029BAB5: jnz     short loc_14029BAFB
 * 000000014029BAB7: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029BAC1: add     rax, rsi
 * 000000014029BAC4: mov     [rsi+758h], rax
 * 000000014029BACB: mov     rax, 0B3B74BDEE4453415h
 * 000000014029BAD5: add     rax, rdi
 * 000000014029BAD8: mov     [rsi+760h], rax
 * 000000014029BADF: movsxd  rax, dword ptr [rdi]
 * 000000014029BAE2: mov     [rsi+768h], rax
 * 000000014029BAE9: mov     eax, 1
 * 000000014029BAEE: mov     [rsi+770h], rcx
 * 000000014029BAF5: mov     [rsi+750h], eax
 * 000000014029BAFB: mov     rax, [rsi+110h]
 * 000000014029BB02: mov     rcx, r12
 * 000000014029BB05: call    KeGuardDispatchICall
 * 000000014029BB0A: add     rbx, r14
 * 000000014029BB0D: cmp     rbx, r15
 * 000000014029BB10: jb      loc_14029B9C1
 * 000000014029BB16: mov     rcx, [rsi+500h]
 * 000000014029BB1D: xor     edx, edx
 * 000000014029BB1F: mov     rax, [rsi+120h]
 * 000000014029BB26: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029BB2D: mov     r14d, dword ptr [rbp+2150h+var_20E0]
 * 000000014029BB31: call    KeGuardDispatchICall
 * 000000014029BB36: mov     rax, [rsi+170h]
 * 000000014029BB3D: call    KeGuardDispatchICall
 * 000000014029BB42: shr     r15, 2
 * 000000014029BB46: add     r14d, r15d
 * 000000014029BB49: shl     r14d, 8
 * 000000014029BB4D: add     [rsi+688h], r14d
 * 000000014029BB54: jmp     loc_14029B6E3
 * 000000014029BB59: mov     eax, [rsi+690h]
 * 000000014029BB5F: mov     r13d, 1
 * 000000014029BB65: test    r13b, al
 * 000000014029BB68: jnz     loc_14029B163
 * 000000014029BB6E: mov     rbx, [rsi+500h]
 * 000000014029BB75: xor     eax, eax
 * 000000014029BB77: mov     r14d, eax
 * 000000014029BB7A: mov     rax, [rsi+168h]
 * 000000014029BB81: call    KeGuardDispatchICall
 * 000000014029BB86: mov     rax, [rsi+118h]
 * 000000014029BB8D: xor     edx, edx
 * 000000014029BB8F: mov     rcx, rbx
 * 000000014029BB92: call    KeGuardDispatchICall
 * 000000014029BB97: mov     rcx, [rsi+4D8h]
 * 000000014029BB9E: mov     rax, [rcx]
 * 000000014029BBA1: jmp     short loc_14029BBB0
 * 000000014029BBA3: mov     [rax-12Ah], r13b
 * 000000014029BBAA: add     r14d, r13d
 * 000000014029BBAD: mov     rax, [rax]
 * 000000014029BBB0: cmp     rax, rcx
 * 000000014029BBB3: jnz     short loc_14029BBA3
 * 000000014029BBB5: mov     rcx, [rsi+4B8h]
 * 000000014029BBBC: mov     rbx, cr8
 * 000000014029BBC0: mov     [rbp+2150h+var_2148], rbx
 * 000000014029BBC4: mov     r15d, 0Ch
 * 000000014029BBCA: mov     cr8, r15
 * 000000014029BBCE: mov     rax, [rsi+138h]
 * 000000014029BBD5: lea     rdx, [rbp+2150h+var_1718]
 * 000000014029BBDC: call    KeGuardDispatchICall
 * 000000014029BBE1: mov     r8, [rsi+4B0h]
 * 000000014029BBE8: mov     rcx, [r8]
 * 000000014029BBEB: cmp     rcx, r8
 * 000000014029BBEE: jz      short loc_14029BC67
 * 000000014029BBF0: xor     eax, eax
 * 000000014029BBF2: mov     rdi, 0B3B74BDEE4453415h
 * 000000014029BBFC: mov     rbx, 0A3A03F5891C8B4E8h
 * 000000014029BC06: lea     rdx, [rcx-240h]
 * 000000014029BC0D: cmp     [rdx+1BEh], al
 * 000000014029BC13: jnz     short loc_14029BC4E
 * 000000014029BC15: cmp     [rsi+750h], eax
 * 000000014029BC1B: jnz     short loc_14029BC4E
 * 000000014029BC1D: lea     rax, [rsi+rbx]
 * 000000014029BC21: mov     [rsi+758h], rax
 * 000000014029BC28: lea     rax, [r12+rdi]
 * 000000014029BC2C: mov     [rsi+760h], rax
 * 000000014029BC33: movsxd  rax, dword ptr [r12]
 * 000000014029BC37: mov     [rsi+768h], rax
 * 000000014029BC3E: xor     eax, eax
 * 000000014029BC40: mov     [rsi+770h], rdx
 * 000000014029BC47: mov     [rsi+750h], r13d
 * 000000014029BC4E: mov     [rdx+1BEh], al
 * 000000014029BC54: mov     rcx, [rcx]
 * 000000014029BC57: cmp     rcx, r8
 * 000000014029BC5A: jnz     short loc_14029BC06
 * 000000014029BC5C: mov     rbx, [rbp+2150h+var_2148]
 * 000000014029BC60: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029BC67: mov     rax, [rsi+178h]
 * 000000014029BC6E: lea     rcx, [rbp+2150h+var_1718]
 * 000000014029BC75: call    KeGuardDispatchICall
 * 000000014029BC7A: movzx   eax, bl
 * 000000014029BC7D: mov     cr8, rax
 * 000000014029BC81: mov     rcx, [rsi+500h]
 * 000000014029BC88: xor     edx, edx
 * 000000014029BC8A: mov     rax, [rsi+120h]
 * 000000014029BC91: call    KeGuardDispatchICall
 * 000000014029BC96: mov     rax, [rsi+170h]
 * 000000014029BC9D: call    KeGuardDispatchICall
 * 000000014029BCA2: shl     r14d, 8
 * 000000014029BCA6: add     [rsi+688h], r14d
 * 000000014029BCAD: xor     r13d, r13d
 * 000000014029BCB0: jmp     loc_1402A3AD9
 * 000000014029BCB5: mov     r14, [r12+8]
 * 000000014029BCBA: mov     r8d, [r12+10h]
 * 000000014029BCBF: mov     r9, r14
 * 000000014029BCC2: add     [rsi+688h], r8d
 * 000000014029BCC9: mov     rax, r14
 * 000000014029BCCC: mov     r10d, [rsi+674h]
 * 000000014029BCD3: mov     r15, [rsi+678h]
 * 000000014029BCDA: lea     rcx, [r14+r8]
 * 000000014029BCDE: cmp     r14, rcx
 * 000000014029BCE1: jnb     short loc_14029BCF3
 * 000000014029BCE3: mov     edx, 40h ; '@'
 * 000000014029BCE8: prefetchnta byte ptr [rax]
 * 000000014029BCEB: add     rax, rdx
 * 000000014029BCEE: cmp     rax, rcx
 * 000000014029BCF1: jb      short loc_14029BCE8
 * 000000014029BCF3: mov     r11d, r8d
 * 000000014029BCF6: mov     rbx, r15
 * 000000014029BCF9: shr     r11d, 7
 * 000000014029BCFD: mov     r13d, 1
 * 000000014029BD03: test    r11d, r11d
 * 000000014029BD06: jz      short loc_14029BD6F
 * 000000014029BD08: mov     rdi, 7010008004002001h
 * 000000014029BD12: mov     eax, 8
 * 000000014029BD17: xor     rbx, [r9]
 * 000000014029BD1A: mov     ecx, r10d
 * 000000014029BD1D: rol     rbx, cl
 * 000000014029BD20: xor     rbx, [r9+8]
 * 000000014029BD24: add     r9, 10h
 * 000000014029BD28: rol     rbx, cl
 * 000000014029BD2B: sub     rax, r13
 * 000000014029BD2E: jnz     short loc_14029BD17
 * 000000014029BD30: mov     rcx, r9
 * 000000014029BD33: sub     rcx, r14
 * 000000014029BD36: xor     rcx, r15
 * 000000014029BD39: mov     rax, rcx
 * 000000014029BD3C: rol     rax, 11h
 * 000000014029BD40: xor     rcx, rax
 * 000000014029BD43: mov     rax, rdi
 * 000000014029BD46: mul     rcx
 * 000000014029BD49: xor     r10d, eax
 * 000000014029BD4C: mov     [rbp+2150h+var_18B0], rdx
 * 000000014029BD53: xor     r10d, edx
 * 000000014029BD56: and     r10d, 3Fh
 * 000000014029BD5A: cmovz   r10d, r13d
 * 000000014029BD5E: add     r11d, 0FFFFFFFFh
 * 000000014029BD62: jnz     short loc_14029BD12
 * 000000014029BD64: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029BD68: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029BD6F: and     r8d, 7Fh
 * 000000014029BD73: cmp     r8d, 8
 * 000000014029BD77: jb      short loc_14029BD96
 * 000000014029BD79: mov     eax, r8d
 * 000000014029BD7C: shr     rax, 3
 * 000000014029BD80: xor     rbx, [r9]
 * 000000014029BD83: mov     ecx, r10d
 * 000000014029BD86: rol     rbx, cl
 * 000000014029BD89: add     r9, 8
 * 000000014029BD8D: add     r8d, 0FFFFFFF8h
 * 000000014029BD91: sub     rax, r13
 * 000000014029BD94: jnz     short loc_14029BD80
 * 000000014029BD96: test    r8d, r8d
 * 000000014029BD99: jz      short loc_14029BDB1
 * 000000014029BD9B: movzx   eax, byte ptr [r9]
 * 000000014029BD9F: mov     ecx, r10d
 * 000000014029BDA2: xor     rbx, rax
 * 000000014029BDA5: add     r9, r13
 * 000000014029BDA8: rol     rbx, cl
 * 000000014029BDAB: add     r8d, 0FFFFFFFFh
 * 000000014029BDAF: jnz     short loc_14029BD9B
 * 000000014029BDB1: mov     rax, rbx
 * 000000014029BDB4: jmp     short loc_14029BDB8
 * 000000014029BDB6: xor     ebx, eax
 * 000000014029BDB8: shr     rax, 1Fh
 * 000000014029BDBC: test    rax, rax
 * 000000014029BDBF: jnz     short loc_14029BDB6
 * 000000014029BDC1: mov     r8, [rbp+2150h+var_2138]
 * 000000014029BDC5: btr     ebx, 1Fh
 * 000000014029BDC9: mov     r12d, eax
 * 000000014029BDCC: cmp     ebx, [r8+14h]
 * 000000014029BDD0: jz      loc_14029B6E3
 * 000000014029BDD6: cmp     [r8], eax
 * 000000014029BDD9: jnz     short loc_14029BDE3
 * 000000014029BDDB: cmp     [r8+18h], eax
 * 000000014029BDDF: cmovnz  r12d, r13d
 * 000000014029BDE3: mov     ecx, [r8+10h]
 * 000000014029BDE7: mov     rdx, [r8+8]
 * 000000014029BDEB: test    rcx, rcx
 * 000000014029BDEE: jz      loc_14029BEA6
 * 000000014029BDF4: mov     eax, [rsi+7DCh]
 * 000000014029BDFA: mov     r9d, 40h ; '@'
 * 000000014029BE00: test    r9b, al
 * 000000014029BE03: jz      loc_14029BEA6
 * 000000014029BE09: mov     r15, cr8
 * 000000014029BE0D: lea     eax, [r9-3Eh]
 * 000000014029BE11: mov     cr8, rax
 * 000000014029BE15: mov     r14, rdx
 * 000000014029BE18: lea     rax, [rcx-1]
 * 000000014029BE1C: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014029BE23: add     rax, rdx
 * 000000014029BE26: or      rax, 0FFFh
 * 000000014029BE2C: mov     [rbp+2150h+var_2148], rax
 * 000000014029BE30: lea     r13, [r14-1]
 * 000000014029BE34: mov     rax, [rsi+450h]
 * 000000014029BE3B: xor     edx, edx
 * 000000014029BE3D: mov     rcx, r14
 * 000000014029BE40: call    KeGuardDispatchICall
 * 000000014029BE45: cmp     eax, 0C000022Dh
 * 000000014029BE4A: jnz     short loc_14029BE75
 * 000000014029BE4C: test    r12d, r12d
 * 000000014029BE4F: jnz     short loc_14029BE9A
 * 000000014029BE51: lea     eax, [r12+1]
 * 000000014029BE56: cmp     r15b, al
 * 000000014029BE59: ja      short loc_14029BE79
 * 000000014029BE5B: movzx   eax, r15b
 * 000000014029BE5F: mov     cr8, rax
 * 000000014029BE63: mov     al, [r14]
 * 000000014029BE66: mov     rax, cr8
 * 000000014029BE6A: lea     eax, [r12+2]
 * 000000014029BE6F: mov     cr8, rax
 * 000000014029BE73: jmp     short loc_14029BE34
 * 000000014029BE75: test    eax, eax
 * 000000014029BE77: js      short loc_14029BE9A
 * 000000014029BE79: add     r14, 1000h
 * 000000014029BE80: add     r13, 1000h
 * 000000014029BE87: cmp     r13, [rbp+2150h+var_2148]
 * 000000014029BE8B: jnz     short loc_14029BE34
 * 000000014029BE8D: movzx   eax, r15b
 * 000000014029BE91: mov     cr8, rax
 * 000000014029BE95: jmp     loc_14029B6E3
 * 000000014029BE9A: movzx   eax, r15b
 * 000000014029BE9E: mov     r8, [rbp+2150h+var_2138]
 * 000000014029BEA2: mov     cr8, rax
 * 000000014029BEA6: mov     eax, [r8+14h]
 * 000000014029BEAA: xor     ecx, ecx
 * 000000014029BEAC: cmp     [rsi+750h], ecx
 * 000000014029BEB2: jnz     short loc_14029BEC4
 * 000000014029BEB4: mov     ecx, ebx
 * 000000014029BEB6: xor     rcx, rax
 * 000000014029BEB9: mov     rax, [rsi+548h]
 * 000000014029BEC0: mov     [rax+18h], rcx
 * 000000014029BEC4: mov     rcx, [r8+8]
 * 000000014029BEC8: xor     eax, eax
 * 000000014029BECA: mov     r14d, 8000h
 * 000000014029BED0: mov     edx, [rbp+2150h+var_2150]
 * 000000014029BED3: lea     r15d, [rax+0Ch]
 * 000000014029BED7: cmp     [rsi+750h], eax
 * 000000014029BEDD: jnz     short loc_14029BF23
 * 000000014029BEDF: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029BEE9: add     rax, rsi
 * 000000014029BEEC: mov     [rsi+758h], rax
 * 000000014029BEF3: mov     rax, 0B3B74BDEE4453415h
 * 000000014029BEFD: add     rax, r8
 * 000000014029BF00: mov     [rsi+760h], rax
 * 000000014029BF07: movsxd  rax, dword ptr [r8]
 * 000000014029BF0A: mov     [rsi+768h], rax
 * 000000014029BF11: mov     eax, 1
 * 000000014029BF16: mov     [rsi+770h], rcx
 * 000000014029BF1D: mov     [rsi+750h], eax
 * 000000014029BF23: xor     r13d, r13d
 * 000000014029BF26: jmp     loc_14029B172
 * 000000014029BF2B: xor     eax, eax
 * 000000014029BF2D: cmp     [rsi+7D0h], rax
 * 000000014029BF34: jz      loc_14029B15D
 * 000000014029BF3A: cmp     [rsi+684h], eax
 * 000000014029BF40: mov     eax, [rsi+7DCh]
 * 000000014029BF46: mov     ecx, eax
 * 000000014029BF48: jnz     loc_14029C027
 * 000000014029BF4E: shl     ecx, 3
 * 000000014029BF51: xor     ecx, eax
 * 000000014029BF53: and     ecx, 20h
 * 000000014029BF56: xor     ecx, eax
 * 000000014029BF58: mov     [rsi+7DCh], ecx
 * 000000014029BF5E: mov     eax, [rsi+7DCh]
 * 000000014029BF64: test    al, 4
 * 000000014029BF66: jz      loc_14029C03C
 * 000000014029BF6C: mov     r14d, [r12+8]
 * 000000014029BF71: mov     ecx, [r12+10h]
 * 000000014029BF76: and     r14d, 0FFFh
 * 000000014029BF7D: mov     rbx, [r12+8]
 * 000000014029BF82: add     r14, 0FFFh
 * 000000014029BF89: add     r14, rcx
 * 000000014029BF8C: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014029BF93: shr     r14, 0Ch
 * 000000014029BF97: test    r14, r14
 * 000000014029BF9A: jz      loc_14029B163
 * 000000014029BFA0: xor     edi, edi
 * 000000014029BFA2: lea     r13d, [rdi+1]
 * 000000014029BFA6: mov     rax, [rsi+2A0h]
 * 000000014029BFAD: mov     rcx, rbx
 * 000000014029BFB0: sub     r14, r13
 * 000000014029BFB3: call    KeGuardDispatchICall
 * 000000014029BFB8: test    al, al
 * 000000014029BFBA: jz      short loc_14029C005
 * 000000014029BFBC: cmp     [rsi+750h], edi
 * 000000014029BFC2: jnz     short loc_14029C005
 * 000000014029BFC4: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029BFCE: add     rax, rsi
 * 000000014029BFD1: mov     [rsi+758h], rax
 * 000000014029BFD8: mov     rax, 0B3B74BDEE4453415h
 * 000000014029BFE2: add     rax, r12
 * 000000014029BFE5: mov     [rsi+760h], rax
 * 000000014029BFEC: movsxd  rax, dword ptr [r12]
 * 000000014029BFF0: mov     [rsi+768h], rax
 * 000000014029BFF7: mov     [rsi+770h], rbx
 * 000000014029BFFE: mov     [rsi+750h], r13d
 * 000000014029C005: add     dword ptr [rsi+688h], 100h
 * 000000014029C00F: add     rbx, 1000h
 * 000000014029C016: test    r14, r14
 * 000000014029C019: jnz     short loc_14029BFA6
 * 000000014029C01B: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029C022: jmp     loc_14029B6E3
 * 000000014029C027: shr     ecx, 3
 * 000000014029C02A: xor     ecx, eax
 * 000000014029C02C: test    cl, 4
 * 000000014029C02F: jz      loc_14029BF5E
 * 000000014029C035: xor     eax, eax
 * 000000014029C037: jmp     loc_14029B15D
 * 000000014029C03C: mov     r14, [r12+8]
 * 000000014029C041: mov     r8d, [r12+10h]
 * 000000014029C046: mov     r9, r14
 * 000000014029C049: add     [rsi+688h], r8d
 * 000000014029C050: mov     rax, r14
 * 000000014029C053: mov     r10d, [rsi+674h]
 * 000000014029C05A: mov     r15, [rsi+678h]
 * 000000014029C061: lea     rcx, [r14+r8]
 * 000000014029C065: cmp     r14, rcx
 * 000000014029C068: jnb     short loc_14029C07A
 * 000000014029C06A: mov     edx, 40h ; '@'
 * 000000014029C06F: prefetchnta byte ptr [rax]
 * 000000014029C072: add     rax, rdx
 * 000000014029C075: cmp     rax, rcx
 * 000000014029C078: jb      short loc_14029C06F
 * 000000014029C07A: mov     r11d, r8d
 * 000000014029C07D: mov     rbx, r15
 * 000000014029C080: shr     r11d, 7
 * 000000014029C084: mov     r13d, 1
 * 000000014029C08A: test    r11d, r11d
 * 000000014029C08D: jz      short loc_14029C0F6
 * 000000014029C08F: mov     rdi, 7010008004002001h
 * 000000014029C099: mov     eax, 8
 * 000000014029C09E: xor     rbx, [r9]
 * 000000014029C0A1: mov     ecx, r10d
 * 000000014029C0A4: rol     rbx, cl
 * 000000014029C0A7: xor     rbx, [r9+8]
 * 000000014029C0AB: add     r9, 10h
 * 000000014029C0AF: rol     rbx, cl
 * 000000014029C0B2: sub     rax, r13
 * 000000014029C0B5: jnz     short loc_14029C09E
 * 000000014029C0B7: mov     rcx, r9
 * 000000014029C0BA: sub     rcx, r14
 * 000000014029C0BD: xor     rcx, r15
 * 000000014029C0C0: mov     rax, rcx
 * 000000014029C0C3: rol     rax, 11h
 * 000000014029C0C7: xor     rcx, rax
 * 000000014029C0CA: mov     rax, rdi
 * 000000014029C0CD: mul     rcx
 * 000000014029C0D0: xor     r10d, edx
 * 000000014029C0D3: mov     [rbp+2150h+var_18A8], rdx
 * 000000014029C0DA: xor     r10d, eax
 * 000000014029C0DD: and     r10d, 3Fh
 * 000000014029C0E1: cmovz   r10d, r13d
 * 000000014029C0E5: add     r11d, 0FFFFFFFFh
 * 000000014029C0E9: jnz     short loc_14029C099
 * 000000014029C0EB: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029C0EF: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029C0F6: and     r8d, 7Fh
 * 000000014029C0FA: cmp     r8d, 8
 * 000000014029C0FE: jb      short loc_14029C11D
 * 000000014029C100: mov     eax, r8d
 * 000000014029C103: shr     rax, 3
 * 000000014029C107: xor     rbx, [r9]
 * 000000014029C10A: mov     ecx, r10d
 * 000000014029C10D: rol     rbx, cl
 * 000000014029C110: add     r9, 8
 * 000000014029C114: add     r8d, 0FFFFFFF8h
 * 000000014029C118: sub     rax, r13
 * 000000014029C11B: jnz     short loc_14029C107
 * 000000014029C11D: test    r8d, r8d
 * 000000014029C120: jz      short loc_14029C138
 * 000000014029C122: movzx   eax, byte ptr [r9]
 * 000000014029C126: mov     ecx, r10d
 * 000000014029C129: xor     rbx, rax
 * 000000014029C12C: add     r9, r13
 * 000000014029C12F: rol     rbx, cl
 * 000000014029C132: add     r8d, 0FFFFFFFFh
 * 000000014029C136: jnz     short loc_14029C122
 * 000000014029C138: mov     rax, rbx
 * 000000014029C13B: shr     rax, 1Fh
 * 000000014029C13F: xor     r13d, r13d
 * 000000014029C142: jmp     short loc_14029C14A
 * 000000014029C144: xor     ebx, eax
 * 000000014029C146: shr     rax, 1Fh
 * 000000014029C14A: test    rax, rax
 * 000000014029C14D: jnz     short loc_14029C144
 * 000000014029C14F: btr     ebx, 1Fh
 * 000000014029C153: cmp     ebx, [r12+14h]
 * 000000014029C158: jz      loc_1402A00F1
 * 000000014029C15E: mov     ecx, [r12+10h]
 * 000000014029C163: mov     rdx, [r12+8]
 * 000000014029C168: test    rcx, rcx
 * 000000014029C16B: jz      loc_14029C208
 * 000000014029C171: mov     eax, [rsi+7DCh]
 * 000000014029C177: mov     r8d, 40h ; '@'
 * 000000014029C17D: test    r8b, al
 * 000000014029C180: jz      loc_14029C208
 * 000000014029C186: mov     r15, cr8
 * 000000014029C18A: mov     r14, rdx
 * 000000014029C18D: lea     r13, [rcx-1]
 * 000000014029C191: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014029C198: add     r13, rdx
 * 000000014029C19B: or      r13, 0FFFh
 * 000000014029C1A2: lea     r12, [r14-1]
 * 000000014029C1A6: mov     eax, 2
 * 000000014029C1AB: mov     cr8, rax
 * 000000014029C1AF: mov     rax, [rsi+450h]
 * 000000014029C1B6: xor     edx, edx
 * 000000014029C1B8: mov     rcx, r14
 * 000000014029C1BB: call    KeGuardDispatchICall
 * 000000014029C1C0: cmp     eax, 0C000022Dh
 * 000000014029C1C5: jnz     short loc_14029C1E2
 * 000000014029C1C7: mov     eax, 1
 * 000000014029C1CC: cmp     r15b, al
 * 000000014029C1CF: ja      short loc_14029C1E6
 * 000000014029C1D1: movzx   eax, r15b
 * 000000014029C1D5: mov     cr8, rax
 * 000000014029C1D9: mov     al, [r14]
 * 000000014029C1DC: mov     rax, cr8
 * 000000014029C1E0: jmp     short loc_14029C1A6
 * 000000014029C1E2: test    eax, eax
 * 000000014029C1E4: js      short loc_14029C1FC
 * 000000014029C1E6: mov     r11d, 1000h
 * 000000014029C1EC: add     r14, r11
 * 000000014029C1EF: add     r12, r11
 * 000000014029C1F2: cmp     r12, r13
 * 000000014029C1F5: jnz     short loc_14029C1AF
 * 000000014029C1F7: jmp     loc_14029BE8D
 * 000000014029C1FC: movzx   eax, r15b
 * 000000014029C200: mov     cr8, rax
 * 000000014029C204: mov     r12, [rbp+2150h+var_2138]
 * 000000014029C208: cmp     dword ptr [rsi+750h], 0
 * 000000014029C20F: mov     eax, [r12+14h]
 * 000000014029C214: jnz     short loc_14029C228
 * 000000014029C216: mov     ecx, eax
 * 000000014029C218: mov     eax, ebx
 * 000000014029C21A: xor     rcx, rax
 * 000000014029C21D: mov     rax, [rsi+548h]
 * 000000014029C224: mov     [rax+18h], rcx
 * 000000014029C228: mov     rcx, [r12+8]
 * 000000014029C22D: xor     eax, eax
 * 000000014029C22F: mov     r14d, 8000h
 * 000000014029C235: mov     edx, [rbp+2150h+var_2150]
 * 000000014029C238: lea     r15d, [rax+0Ch]
 * 000000014029C23C: cmp     [rsi+750h], eax
 * 000000014029C242: jnz     loc_14029BF23
 * 000000014029C248: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029C252: add     rax, rsi
 * 000000014029C255: mov     [rsi+758h], rax
 * 000000014029C25C: mov     rax, 0B3B74BDEE4453415h
 * 000000014029C266: add     rax, r12
 * 000000014029C269: mov     [rsi+760h], rax
 * 000000014029C270: movsxd  rax, dword ptr [r12]
 * 000000014029C274: jmp     loc_14029BF0A
 * 000000014029C279: mov     r8d, 0Ch
 * 000000014029C27F: cmp     r15d, r8d
 * 000000014029C282: jz      loc_1402A2AC2
 * 000000014029C288: jle     loc_1402A3C7B
 * 000000014029C28E: cmp     r15d, 0Eh
 * 000000014029C292: jle     loc_14029EF45
 * 000000014029C298: lea     ebx, [r8+3]
 * 000000014029C29C: cmp     r15d, ebx
 * 000000014029C29F: jz      loc_14029EE04
 * 000000014029C2A5: cmp     r15d, 15h
 * 000000014029C2A9: jz      loc_14029ECFC
 * 000000014029C2AF: cmp     r15d, 18h
 * 000000014029C2B3: jz      loc_14029C6D2
 * 000000014029C2B9: cmp     r15d, 19h
 * 000000014029C2BD: jnz     loc_1402A3C80
 * 000000014029C2C3: mov     r12, [rsi+4E8h]
 * 000000014029C2CA: xor     eax, eax
 * 000000014029C2CC: mov     dword ptr [rbp+2150h+var_2088], eax
 * 000000014029C2D2: mov     rax, [rsi+368h]
 * 000000014029C2D9: call    KeGuardDispatchICall
 * 000000014029C2DE: mov     rcx, gs:188h
 * 000000014029C2E7: mov     [rbp+2150h+var_20F8], rax
 * 000000014029C2EB: mov     rax, [rsi+158h]
 * 000000014029C2F2: call    KeGuardDispatchICall
 * 000000014029C2F7: mov     rcx, [rsi+4F0h]
 * 000000014029C2FE: lea     ebx, [r15-18h]
 * 000000014029C302: mov     rax, [rsi+0E0h]
 * 000000014029C309: mov     dl, bl
 * 000000014029C30B: call    KeGuardDispatchICall
 * 000000014029C310: mov     rax, [rsi+5C8h]
 * 000000014029C317: mov     rcx, [rax]
 * 000000014029C31A: mov     r13d, [rcx]
 * 000000014029C31D: lea     rdx, [rcx+10h]
 * 000000014029C321: mov     [rbp+2150h+var_2148], rdx
 * 000000014029C325: lea     rax, ds:0[r13*2]
 * 000000014029C32D: add     rax, r13
 * 000000014029C330: lea     rax, [rdx+rax*8]
 * 000000014029C334: mov     [rbp+2150h+var_2130], rax
 * 000000014029C338: xor     eax, eax
 * 000000014029C33A: mov     [rbp+2150h+var_20F0], eax
 * 000000014029C33D: cmp     [rcx+0Ch], al
 * 000000014029C340: jz      short loc_14029C356
 * 000000014029C342: mov     r13d, eax
 * 000000014029C345: mov     rax, [r12]
 * 000000014029C349: jmp     short loc_14029C351
 * 000000014029C34B: mov     rax, [rax]
 * 000000014029C34E: add     r13d, ebx
 * 000000014029C351: cmp     rax, r12
 * 000000014029C354: jnz     short loc_14029C34B
 * 000000014029C356: mov     r8d, [rsi+670h]
 * 000000014029C35D: mov     r15d, r13d
 * 000000014029C360: shl     r15d, 3
 * 000000014029C364: rdtsc
 * 000000014029C366: shl     rdx, 20h
 * 000000014029C36A: mov     r9, 7010008004002001h
 * 000000014029C374: or      rax, rdx
 * 000000014029C377: mov     rcx, rax
 * 000000014029C37A: ror     rax, 3
 * 000000014029C37E: xor     rcx, rax
 * 000000014029C381: mov     rax, r9
 * 000000014029C384: mul     rcx
 * 000000014029C387: mov     rbx, rax
 * 000000014029C38A: mov     [rbp+2150h+var_18A0], rdx
 * 000000014029C391: xor     ebx, edx
 * 000000014029C393: and     ebx, 7FFh
 * 000000014029C399: rdtsc
 * 000000014029C39B: shl     rdx, 20h
 * 000000014029C39F: or      rax, rdx
 * 000000014029C3A2: mov     rcx, rax
 * 000000014029C3A5: ror     rax, 3
 * 000000014029C3A9: xor     rcx, rax
 * 000000014029C3AC: mov     rax, r9
 * 000000014029C3AF: mul     rcx
 * 000000014029C3B2: lea     ecx, [rbx+1]
 * 000000014029C3B5: xor     rax, rdx
 * 000000014029C3B8: mov     [rbp+2150h+var_1898], rdx
 * 000000014029C3BF: xor     edx, edx
 * 000000014029C3C1: div     rcx
 * 000000014029C3C4: mov     rax, [rsi+0E8h]
 * 000000014029C3CB: mov     ecx, 200h
 * 000000014029C3D0: mov     r14, rdx
 * 000000014029C3D3: lea     edx, [rbx+r15]
 * 000000014029C3D7: call    KeGuardDispatchICall
 * 000000014029C3DC: mov     r11, rax
 * 000000014029C3DF: xor     eax, eax
 * 000000014029C3E1: test    r11, r11
 * 000000014029C3E4: jnz     short loc_14029C3F6
 * 000000014029C3E6: lea     r14d, [rax+1]
 * 000000014029C3EA: add     [rsi+858h], r14d
 * 000000014029C3F1: jmp     loc_14029C53F
 * 000000014029C3F6: mov     r10d, r14d
 * 000000014029C3F9: mov     r9, r11
 * 000000014029C3FC: cmp     r14d, 8
 * 000000014029C400: jb      short loc_14029C456
 * 000000014029C402: mov     r8d, r14d
 * 000000014029C405: mov     esi, 1
 * 000000014029C40A: shr     r8, 3
 * 000000014029C40E: mov     rdi, 7010008004002001h
 * 000000014029C418: rdtsc
 * 000000014029C41A: shl     rdx, 20h
 * 000000014029C41E: add     r10d, 0FFFFFFF8h
 * 000000014029C422: or      rax, rdx
 * 000000014029C425: mov     rcx, rax
 * 000000014029C428: ror     rax, 3
 * 000000014029C42C: xor     rcx, rax
 * 000000014029C42F: mov     rax, rdi
 * 000000014029C432: mul     rcx
 * 000000014029C435: mov     [rbp+2150h+var_1888], rdx
 * 000000014029C43C: xor     rdx, rax
 * 000000014029C43F: mov     [r9], rdx
 * 000000014029C442: add     r9, 8
 * 000000014029C446: sub     r8, rsi
 * 000000014029C449: jnz     short loc_14029C418
 * 000000014029C44B: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029C44F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029C456: test    r10d, r10d
 * 000000014029C459: jz      short loc_14029C49A
 * 000000014029C45B: rdtsc
 * 000000014029C45D: shl     rdx, 20h
 * 000000014029C461: or      rax, rdx
 * 000000014029C464: mov     rcx, rax
 * 000000014029C467: ror     rax, 3
 * 000000014029C46B: xor     rcx, rax
 * 000000014029C46E: mov     rax, 7010008004002001h
 * 000000014029C478: mul     rcx
 * 000000014029C47B: mov     [rbp+2150h+var_1880], rdx
 * 000000014029C482: xor     rdx, rax
 * 000000014029C485: mov     eax, 1
 * 000000014029C48A: mov     [r9], dl
 * 000000014029C48D: add     r9, rax
 * 000000014029C490: shr     rdx, 8
 * 000000014029C494: add     r10d, 0FFFFFFFFh
 * 000000014029C498: jnz     short loc_14029C48A
 * 000000014029C49A: mov     r8d, r15d
 * 000000014029C49D: sub     ebx, r14d
 * 000000014029C4A0: add     r8, r11
 * 000000014029C4A3: mov     r10d, r14d
 * 000000014029C4A6: add     r8, r10
 * 000000014029C4A9: mov     r14d, 1
 * 000000014029C4AF: mov     r15, 7010008004002001h
 * 000000014029C4B9: cmp     ebx, 8
 * 000000014029C4BC: jb      short loc_14029C4F7
 * 000000014029C4BE: mov     r9d, ebx
 * 000000014029C4C1: shr     r9, 3
 * 000000014029C4C5: rdtsc
 * 000000014029C4C7: shl     rdx, 20h
 * 000000014029C4CB: add     ebx, 0FFFFFFF8h
 * 000000014029C4CE: or      rax, rdx
 * 000000014029C4D1: mov     rcx, rax
 * 000000014029C4D4: ror     rax, 3
 * 000000014029C4D8: xor     rcx, rax
 * 000000014029C4DB: mov     rax, r15
 * 000000014029C4DE: mul     rcx
 * 000000014029C4E1: mov     [rbp+2150h+var_1878], rdx
 * 000000014029C4E8: xor     rdx, rax
 * 000000014029C4EB: mov     [r8], rdx
 * 000000014029C4EE: add     r8, 8
 * 000000014029C4F2: sub     r9, r14
 * 000000014029C4F5: jnz     short loc_14029C4C5
 * 000000014029C4F7: test    ebx, ebx
 * 000000014029C4F9: jz      short loc_14029C52D
 * 000000014029C4FB: rdtsc
 * 000000014029C4FD: shl     rdx, 20h
 * 000000014029C501: or      rax, rdx
 * 000000014029C504: mov     rcx, rax
 * 000000014029C507: ror     rax, 3
 * 000000014029C50B: xor     rcx, rax
 * 000000014029C50E: mov     rax, r15
 * 000000014029C511: mul     rcx
 * 000000014029C514: mov     [rbp+2150h+var_1790], rdx
 * 000000014029C51B: xor     rdx, rax
 * 000000014029C51E: mov     [r8], dl
 * 000000014029C521: add     r8, r14
 * 000000014029C524: shr     rdx, 8
 * 000000014029C528: add     ebx, 0FFFFFFFFh
 * 000000014029C52B: jnz     short loc_14029C51E
 * 000000014029C52D: lea     r15, [r11+r10]
 * 000000014029C531: mov     [rbp+2150h+var_1EB0], r11
 * 000000014029C538: test    r15, r15
 * 000000014029C53B: jnz     short loc_14029C54B
 * 000000014029C53D: xor     eax, eax
 * 000000014029C53F: mov     [rbp+2150h+var_1EB0], rax
 * 000000014029C546: jmp     loc_14029C672
 * 000000014029C54B: mov     rbx, [r12]
 * 000000014029C54F: cmp     rbx, r12
 * 000000014029C552: jz      short loc_14029C598
 * 000000014029C554: mov     edi, [rbp+2150h+var_20F0]
 * 000000014029C557: mov     r14, [rbx+30h]
 * 000000014029C55B: mov     rax, [rsi+298h]
 * 000000014029C562: mov     rcx, r14
 * 000000014029C565: call    KeGuardDispatchICall
 * 000000014029C56A: test    eax, eax
 * 000000014029C56C: jnz     short loc_14029C582
 * 000000014029C56E: cmp     edi, r13d
 * 000000014029C571: jnb     short loc_14029C582
 * 000000014029C573: mov     eax, edi
 * 000000014029C575: mov     [r15+rax*8], r14
 * 000000014029C579: mov     eax, 1
 * 000000014029C57E: add     edi, eax
 * 000000014029C580: jmp     short loc_14029C587
 * 000000014029C582: mov     eax, 1
 * 000000014029C587: mov     rbx, [rbx]
 * 000000014029C58A: add     dword ptr [rbp+2150h+var_2088], eax
 * 000000014029C590: cmp     rbx, r12
 * 000000014029C593: jnz     short loc_14029C557
 * 000000014029C595: mov     [rbp+2150h+var_20F0], edi
 * 000000014029C598: mov     r14d, [rbp+2150h+var_20F0]
 * 000000014029C59C: mov     rcx, r15
 * 000000014029C59F: mov     rax, [rsi+388h]
 * 000000014029C5A6: mov     edx, r14d
 * 000000014029C5A9: call    KeGuardDispatchICall
 * 000000014029C5AE: mov     r12, [rbp+2150h+var_2148]
 * 000000014029C5B2: mov     r13, [rbp+2150h+var_2130]
 * 000000014029C5B6: mov     rdi, [rbp+2150h+var_2138]
 * 000000014029C5BA: mov     rbx, [r12+8]
 * 000000014029C5BF: mov     rax, [rsi+298h]
 * 000000014029C5C6: mov     rcx, rbx
 * 000000014029C5C9: call    KeGuardDispatchICall
 * 000000014029C5CE: test    eax, eax
 * 000000014029C5D0: jnz     loc_14029C65E
 * 000000014029C5D6: xor     eax, eax
 * 000000014029C5D8: lea     edx, [r14-1]
 * 000000014029C5DC: mov     r8d, eax
 * 000000014029C5DF: test    edx, edx
 * 000000014029C5E1: js      short loc_14029C612
 * 000000014029C5E3: lea     ecx, [rdx+r8]
 * 000000014029C5E7: sar     ecx, 1
 * 000000014029C5E9: movsxd  rax, ecx
 * 000000014029C5EC: mov     r9, [r15+rax*8]
 * 000000014029C5F0: cmp     rbx, r9
 * 000000014029C5F3: jnb     short loc_14029C600
 * 000000014029C5F5: xor     eax, eax
 * 000000014029C5F7: test    ecx, ecx
 * 000000014029C5F9: jz      short loc_14029C612
 * 000000014029C5FB: lea     edx, [rcx-1]
 * 000000014029C5FE: jmp     short loc_14029C606
 * 000000014029C600: jbe     short loc_14029C60B
 * 000000014029C602: lea     r8d, [rcx+1]
 * 000000014029C606: cmp     edx, r8d
 * 000000014029C609: jge     short loc_14029C5E3
 * 000000014029C60B: cmp     edx, r8d
 * 000000014029C60E: jge     short loc_14029C65E
 * 000000014029C610: xor     eax, eax
 * 000000014029C612: cmp     [rsi+750h], eax
 * 000000014029C618: jnz     short loc_14029C65E
 * 000000014029C61A: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029C624: add     rax, rsi
 * 000000014029C627: mov     [rsi+758h], rax
 * 000000014029C62E: mov     rax, 0B3B74BDEE4453415h
 * 000000014029C638: add     rax, rdi
 * 000000014029C63B: mov     [rsi+760h], rax
 * 000000014029C642: movsxd  rax, dword ptr [rdi]
 * 000000014029C645: mov     [rsi+768h], rax
 * 000000014029C64C: mov     eax, 1
 * 000000014029C651: mov     [rsi+770h], rbx
 * 000000014029C658: mov     [rsi+750h], eax
 * 000000014029C65E: add     r12, 18h
 * 000000014029C662: cmp     r12, r13
 * 000000014029C665: jb      loc_14029C5BA
 * 000000014029C66B: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029C672: mov     rcx, [rsi+4F0h]
 * 000000014029C679: mov     rax, [rsi+108h]
 * 000000014029C680: call    KeGuardDispatchICall
 * 000000014029C685: mov     rax, [rsi+160h]
 * 000000014029C68C: call    KeGuardDispatchICall
 * 000000014029C691: mov     rax, [rsi+370h]
 * 000000014029C698: mov     rcx, [rbp+2150h+var_20F8]
 * 000000014029C69C: call    KeGuardDispatchICall
 * 000000014029C6A1: xor     eax, eax
 * 000000014029C6A3: cmp     [rbp+2150h+var_1EB0], rax
 * 000000014029C6AA: jz      loc_14029B6E3
 * 000000014029C6B0: mov     eax, dword ptr [rbp+2150h+var_2088]
 * 000000014029C6B6: shl     eax, 9
 * 000000014029C6B9: add     [rsi+688h], eax
 * 000000014029C6BF: mov     rax, [rsi+0F0h]
 * 000000014029C6C6: mov     rcx, [rbp+2150h+var_1EB0]
 * 000000014029C6CD: jmp     loc_14029B6DE
 * 000000014029C6D2: mov     r15d, 40000000h
 * 000000014029C6D8: test    [rsi+7D8h], r15d
 * 000000014029C6DF: jz      short loc_14029C738
 * 000000014029C6E1: test    dword ptr [rsi+7DCh], 1000h
 * 000000014029C6EB: jnz     short loc_14029C738
 * 000000014029C6ED: rdtsc
 * 000000014029C6EF: shl     rdx, 20h
 * 000000014029C6F3: or      rax, rdx
 * 000000014029C6F6: mov     rcx, rax
 * 000000014029C6F9: ror     rax, 3
 * 000000014029C6FD: xor     rcx, rax
 * 000000014029C700: mov     rax, 7010008004002001h
 * 000000014029C70A: mul     rcx
 * 000000014029C70D: mov     rcx, rdx
 * 000000014029C710: mov     [rbp+2150h+var_1788], rdx
 * 000000014029C717: xor     rcx, rax
 * 000000014029C71A: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014029C724: mul     rcx
 * 000000014029C727: shr     rdx, 2
 * 000000014029C72B: lea     rax, [rdx+rdx*4]
 * 000000014029C72F: sub     rcx, rax
 * 000000014029C732: mov     [rsi+684h], ecx
 * 000000014029C738: mov     r13d, 1
 * 000000014029C73E: mov     ecx, [rsi+684h]
 * 000000014029C744: xor     eax, eax
 * 000000014029C746: test    ecx, ecx
 * 000000014029C748: jz      loc_14029EB83
 * 000000014029C74E: sub     ecx, 1
 * 000000014029C751: jz      loc_14029EA33
 * 000000014029C757: sub     ecx, 1
 * 000000014029C75A: jz      loc_14029E89D
 * 000000014029C760: sub     ecx, 1
 * 000000014029C763: jz      loc_14029CA75
 * 000000014029C769: sub     ecx, 1
 * 000000014029C76C: jz      loc_14029C8D2
 * 000000014029C772: cmp     ecx, 1
 * 000000014029C775: jnz     loc_14029ECED
 * 000000014029C77B: mov     rbx, r12
 * 000000014029C77E: mov     [rbp+2150h+var_208E], 0FFh
 * 000000014029C785: mov     r12d, eax
 * 000000014029C788: mov     r14d, eax
 * 000000014029C78B: mov     r15d, eax
 * 000000014029C78E: jmp     short loc_14029C792
 * 000000014029C790: xor     eax, eax
 * 000000014029C792: mov     [rbp+2150h+var_1E38], rax
 * 000000014029C799: jmp     loc_14029C88D
 * 000000014029C79E: mov     rax, [rsi+1F8h]
 * 000000014029C7A5: lea     rdx, [rbp+2150h+var_1768]
 * 000000014029C7AC: mov     rcx, [rbp+2150h+var_1F40]
 * 000000014029C7B3: add     r12d, r13d
 * 000000014029C7B6: call    KeGuardDispatchICall
 * 000000014029C7BB: test    rax, rax
 * 000000014029C7BE: jnz     loc_14029C88D
 * 000000014029C7C4: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029C7CE: jz      short loc_14029C80E
 * 000000014029C7D0: mov     rcx, [rsi+8B0h]
 * 000000014029C7D7: lea     edx, [rax+30h]
 * 000000014029C7DA: lea     r8d, [rax+6]
 * 000000014029C7DE: mov     rax, [rbx]
 * 000000014029C7E1: add     edx, 0FFFFFFF8h
 * 000000014029C7E4: mov     [rcx], rax
 * 000000014029C7E7: add     rbx, 8
 * 000000014029C7EB: add     rcx, 8
 * 000000014029C7EF: sub     r8, r13
 * 000000014029C7F2: jnz     short loc_14029C7DE
 * 000000014029C7F4: test    edx, edx
 * 000000014029C7F6: jz      short loc_14029C807
 * 000000014029C7F8: mov     al, [rbx]
 * 000000014029C7FA: add     rbx, r13
 * 000000014029C7FD: mov     [rcx], al
 * 000000014029C7FF: add     rcx, r13
 * 000000014029C802: add     edx, 0FFFFFFFFh
 * 000000014029C805: jnz     short loc_14029C7F8
 * 000000014029C807: mov     rbx, [rsi+8B0h]
 * 000000014029C80E: mov     rax, [rbp+2150h+var_1F40]
 * 000000014029C815: mov     [rbx+18h], rax
 * 000000014029C819: mov     rax, [rsi+548h]
 * 000000014029C820: mov     [rax], rbx
 * 000000014029C823: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029C82A: mov     rax, [rbp+2150h+var_1F40]
 * 000000014029C831: mov     rcx, [rsi+548h]
 * 000000014029C838: mov     [rcx+8], rax
 * 000000014029C83C: xor     eax, eax
 * 000000014029C83E: mov     dword ptr [rcx+14h], 1000h
 * 000000014029C845: cmp     [rsi+750h], eax
 * 000000014029C84B: jnz     short loc_14029C88D
 * 000000014029C84D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029C857: add     rax, rsi
 * 000000014029C85A: mov     [rsi+758h], rax
 * 000000014029C861: mov     rax, 0B3B74BDEE4453415h
 * 000000014029C86B: add     rax, rbx
 * 000000014029C86E: mov     [rsi+760h], rax
 * 000000014029C875: movsxd  rax, dword ptr [rbx]
 * 000000014029C878: mov     [rsi+768h], rax
 * 000000014029C87F: mov     [rsi+770h], r15
 * 000000014029C886: mov     [rsi+750h], r13d
 * 000000014029C88D: mov     rax, [rsi+418h]
 * 000000014029C894: lea     r9, [rbp+2150h+var_1F40]
 * 000000014029C89B: lea     r8, [rbp+2150h+var_208E]
 * 000000014029C8A2: mov     ecx, r14d
 * 000000014029C8A5: lea     rdx, [rbp+2150h+var_1E38]
 * 000000014029C8AC: call    KeGuardDispatchICall
 * 000000014029C8B1: test    eax, eax
 * 000000014029C8B3: jnz     loc_14029C79E
 * 000000014029C8B9: add     r14d, r13d
 * 000000014029C8BC: add     r15, r13
 * 000000014029C8BF: mov     eax, 3
 * 000000014029C8C4: cmp     r14d, eax
 * 000000014029C8C7: jb      loc_14029C790
 * 000000014029C8CD: jmp     loc_14029ECAD
 * 000000014029C8D2: mov     r12d, eax
 * 000000014029C8D5: mov     [rbp+2150h+var_2140], eax
 * 000000014029C8D8: mov     rax, [rsi+308h]
 * 000000014029C8DF: xor     ecx, ecx
 * 000000014029C8E1: call    KeGuardDispatchICall
 * 000000014029C8E6: mov     r15, rax
 * 000000014029C8E9: xor     eax, eax
 * 000000014029C8EB: test    r15, r15
 * 000000014029C8EE: jz      loc_14029E892
 * 000000014029C8F4: mov     rdi, [rbp+2150h+var_2138]
 * 000000014029C8F8: mov     r13d, eax
 * 000000014029C8FB: mov     [rbp+2150h+var_1E30], rax
 * 000000014029C902: lea     rdx, [rbp+2150h+var_1E30]
 * 000000014029C909: mov     rax, [rsi+300h]
 * 000000014029C910: mov     rcx, r15
 * 000000014029C913: mov     rbx, rdi
 * 000000014029C916: mov     r12d, 1
 * 000000014029C91C: call    KeGuardDispatchICall
 * 000000014029C921: mov     r14, rax
 * 000000014029C924: test    rax, rax
 * 000000014029C927: jz      loc_14029CA42
 * 000000014029C92D: lea     edi, [r12+5]
 * 000000014029C932: xor     r13d, r13d
 * 000000014029C935: mov     rax, [rsi+1F8h]
 * 000000014029C93C: lea     rdx, [rbp+2150h+var_1760]
 * 000000014029C943: mov     rcx, r14
 * 000000014029C946: inc     r12d
 * 000000014029C949: call    KeGuardDispatchICall
 * 000000014029C94E: test    rax, rax
 * 000000014029C951: jnz     loc_14029CA18
 * 000000014029C957: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029C961: lea     r9d, [rax+1]
 * 000000014029C965: jz      short loc_14029C9A4
 * 000000014029C967: mov     rcx, [rsi+8B0h]
 * 000000014029C96E: lea     edx, [rax+30h]
 * 000000014029C971: mov     r8, rdi
 * 000000014029C974: mov     rax, [rbx]
 * 000000014029C977: add     edx, 0FFFFFFF8h
 * 000000014029C97A: mov     [rcx], rax
 * 000000014029C97D: add     rbx, 8
 * 000000014029C981: add     rcx, 8
 * 000000014029C985: sub     r8, r9
 * 000000014029C988: jnz     short loc_14029C974
 * 000000014029C98A: test    edx, edx
 * 000000014029C98C: jz      short loc_14029C99D
 * 000000014029C98E: mov     al, [rbx]
 * 000000014029C990: add     rbx, r9
 * 000000014029C993: mov     [rcx], al
 * 000000014029C995: add     rcx, r9
 * 000000014029C998: add     edx, 0FFFFFFFFh
 * 000000014029C99B: jnz     short loc_14029C98E
 * 000000014029C99D: mov     rbx, [rsi+8B0h]
 * 000000014029C9A4: mov     [rbx+18h], r14
 * 000000014029C9A8: mov     [rbx+20h], r15
 * 000000014029C9AC: mov     rax, [rsi+548h]
 * 000000014029C9B3: mov     [rax], rbx
 * 000000014029C9B6: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029C9BD: mov     rax, [rsi+548h]
 * 000000014029C9C4: mov     [rax+8], r14
 * 000000014029C9C8: mov     dword ptr [rax+14h], 1000h
 * 000000014029C9CF: cmp     [rsi+750h], r13d
 * 000000014029C9D6: jnz     short loc_14029CA18
 * 000000014029C9D8: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029C9E2: add     rax, rsi
 * 000000014029C9E5: mov     [rsi+758h], rax
 * 000000014029C9EC: mov     rax, 0B3B74BDEE4453415h
 * 000000014029C9F6: add     rax, rbx
 * 000000014029C9F9: mov     [rsi+760h], rax
 * 000000014029CA00: movsxd  rax, dword ptr [rbx]
 * 000000014029CA03: mov     [rsi+768h], rax
 * 000000014029CA0A: mov     [rsi+770h], rdi
 * 000000014029CA11: mov     [rsi+750h], r9d
 * 000000014029CA18: mov     rax, [rsi+300h]
 * 000000014029CA1F: lea     rdx, [rbp+2150h+var_1E30]
 * 000000014029CA26: mov     rcx, r15
 * 000000014029CA29: call    KeGuardDispatchICall
 * 000000014029CA2E: mov     r14, rax
 * 000000014029CA31: test    rax, rax
 * 000000014029CA34: jnz     loc_14029C935
 * 000000014029CA3A: mov     r13d, [rbp+2150h+var_2140]
 * 000000014029CA3E: mov     rdi, [rbp+2150h+var_2138]
 * 000000014029CA42: mov     rax, [rsi+308h]
 * 000000014029CA49: add     r13d, r12d
 * 000000014029CA4C: mov     rcx, r15
 * 000000014029CA4F: mov     [rbp+2150h+var_2140], r13d
 * 000000014029CA53: call    KeGuardDispatchICall
 * 000000014029CA58: mov     r15, rax
 * 000000014029CA5B: xor     eax, eax
 * 000000014029CA5D: test    r15, r15
 * 000000014029CA60: jnz     loc_14029C8FB
 * 000000014029CA66: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029CA6D: mov     r12d, r13d
 * 000000014029CA70: jmp     loc_14029E892
 * 000000014029CA75: mov     r12d, eax
 * 000000014029CA78: mov     rax, [rsi+4A8h]
 * 000000014029CA7F: mov     r13, rsi
 * 000000014029CA82: mov     [rbp+2150h+var_1FF0], rsi
 * 000000014029CA89: mov     rbx, [rax]
 * 000000014029CA8C: mov     [rbp+2150h+var_20C8], rbx
 * 000000014029CA93: test    [rsi+7D8h], r15d
 * 000000014029CA9A: jnz     loc_14029E892
 * 000000014029CAA0: mov     rcx, [rbp+2150h+var_2138]
 * 000000014029CAA4: mov     rax, [rcx+28h]
 * 000000014029CAA8: test    rax, rax
 * 000000014029CAAB: jz      loc_14029CB3D
 * 000000014029CAB1: mov     r13d, 1
 * 000000014029CAB7: mov     r12d, r13d
 * 000000014029CABA: cmp     rbx, rax
 * 000000014029CABD: jz      loc_14029ECB4
 * 000000014029CAC3: mov     [rcx+18h], rbx
 * 000000014029CAC7: mov     rax, [rsi+548h]
 * 000000014029CACE: mov     [rax], rcx
 * 000000014029CAD1: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029CAD8: mov     rax, [rsi+548h]
 * 000000014029CADF: mov     [rax+8], rbx
 * 000000014029CAE3: mov     dword ptr [rax+14h], 1000h
 * 000000014029CAEA: xor     eax, eax
 * 000000014029CAEC: cmp     [rsi+750h], eax
 * 000000014029CAF2: jnz     loc_14029ECB4
 * 000000014029CAF8: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029CB02: add     rax, rsi
 * 000000014029CB05: mov     [rsi+758h], rax
 * 000000014029CB0C: mov     rax, 0B3B74BDEE4453415h
 * 000000014029CB16: add     rax, rcx
 * 000000014029CB19: mov     [rsi+760h], rax
 * 000000014029CB20: movsxd  rax, dword ptr [rcx]
 * 000000014029CB23: mov     [rsi+768h], rax
 * 000000014029CB2A: mov     [rsi+770h], r10
 * 000000014029CB31: mov     [rsi+750h], r13d
 * 000000014029CB38: jmp     loc_14029ECB4
 * 000000014029CB3D: test    rbx, rbx
 * 000000014029CB40: jz      loc_14029E892
 * 000000014029CB46: mov     rax, [rsi+1F0h]
 * 000000014029CB4D: lea     r8, [rbp+2150h+var_209C]
 * 000000014029CB54: mov     r14d, 1
 * 000000014029CB5A: mov     [rbp+2150h+var_2040], rsi
 * 000000014029CB61: lea     rdx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CB68: mov     [rbp+2150h+var_2140], r14d
 * 000000014029CB6C: mov     rcx, rbx
 * 000000014029CB6F: mov     r12d, r14d
 * 000000014029CB72: call    KeGuardDispatchICall
 * 000000014029CB77: mov     [rbp+2150h+var_2108], rax
 * 000000014029CB7B: test    rax, rax
 * 000000014029CB7E: jnz     short loc_14029CB8A
 * 000000014029CB80: mov     ecx, 0C000007Bh
 * 000000014029CB85: jmp     loc_14029E85F
 * 000000014029CB8A: mov     r12d, [rbp+2150h+var_209C]
 * 000000014029CB91: xor     eax, eax
 * 000000014029CB93: mov     r15, [rbp+2150h+BugCheckParameter2]
 * 000000014029CB9A: mov     ecx, 4
 * 000000014029CB9F: mov     [rbp+2150h+var_1F60], rax
 * 000000014029CBA6: xor     edx, edx
 * 000000014029CBA8: lea     rax, [rbp+2150h+var_1F58]
 * 000000014029CBAF: mov     [rbp+2150h+var_20B0], r12d
 * 000000014029CBB6: mov     [rbp+2150h+var_2130], r15
 * 000000014029CBBA: mov     [rax], dl
 * 000000014029CBBC: add     rax, r14
 * 000000014029CBBF: add     ecx, 0FFFFFFFFh
 * 000000014029CBC2: jnz     short loc_14029CBBA
 * 000000014029CBC4: xor     eax, eax
 * 000000014029CBC6: mov     r14d, eax
 * 000000014029CBC9: mov     dword ptr [rbp+2150h+var_20E0], eax
 * 000000014029CBCC: cmp     [rsi+66Ch], eax
 * 000000014029CBD2: jbe     loc_14029CDDB
 * 000000014029CBD8: mov     edx, [rbp+2150h+var_1F58]
 * 000000014029CBDE: mov     r9d, dword ptr [rbp+2150h+var_1F60+4]
 * 000000014029CBE5: mov     r10d, dword ptr [rbp+2150h+var_1F60]
 * 000000014029CBEC: mov     rax, [rsi+8A8h]
 * 000000014029CBF3: mov     rbx, rsi
 * 000000014029CBF6: test    rax, rax
 * 000000014029CBF9: cmovnz  rbx, rax
 * 000000014029CBFD: xor     eax, eax
 * 000000014029CBFF: mov     [rbp+2150h+var_2148], rbx
 * 000000014029CC03: mov     r11d, eax
 * 000000014029CC06: mov     r8d, [rbx+668h]
 * 000000014029CC0D: add     r8, rbx
 * 000000014029CC10: test    r10d, r10d
 * 000000014029CC13: jz      short loc_14029CC23
 * 000000014029CC15: cmp     r9d, r14d
 * 000000014029CC18: ja      short loc_14029CC23
 * 000000014029CC1A: mov     r8d, edx
 * 000000014029CC1D: mov     r11d, r9d
 * 000000014029CC20: add     r8, rbx
 * 000000014029CC23: cmp     r11d, r14d
 * 000000014029CC26: jz      loc_14029CD68
 * 000000014029CC2C: mov     eax, r14d
 * 000000014029CC2F: mov     ebx, 3
 * 000000014029CC34: sub     eax, r11d
 * 000000014029CC37: add     r11d, eax
 * 000000014029CC3A: mov     r9d, eax
 * 000000014029CC3D: mov     [rbp+2150h+var_2128], r11d
 * 000000014029CC41: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014029CC4B: lea     r12d, [rbx-1]
 * 000000014029CC4F: lea     r14d, [rbx+9]
 * 000000014029CC53: mov     ecx, [r8]
 * 000000014029CC56: cmp     ecx, r14d
 * 000000014029CC59: jg      short loc_14029CC9F
 * 000000014029CC5B: jz      short loc_14029CCBC
 * 000000014029CC5D: sub     ecx, 1
 * 000000014029CC60: jz      short loc_14029CCBC
 * 000000014029CC62: sub     ecx, 6
 * 000000014029CC65: jz      short loc_14029CC8D
 * 000000014029CC67: sub     ecx, 1
 * 000000014029CC6A: jz      short loc_14029CC83
 * 000000014029CC6C: cmp     ecx, r12d
 * 000000014029CC6F: jnz     loc_14029CCFB
 * 000000014029CC75: mov     eax, [r8+1Ch]
 * 000000014029CC79: add     eax, ebx
 * 000000014029CC7B: shl     eax, 4
 * 000000014029CC7E: jmp     loc_14029CD33
 * 000000014029CC83: movzx   eax, word ptr [r8+20h]
 * 000000014029CC88: jmp     loc_14029CD2D
 * 000000014029CC8D: mov     eax, [r8+18h]
 * 000000014029CC91: add     eax, r12d
 * 000000014029CC94: lea     eax, [rax+rax*2]
 * 000000014029CC97: shl     eax, 3
 * 000000014029CC9A: jmp     loc_14029CD33
 * 000000014029CC9F: cmp     ecx, 1Ch
 * 000000014029CCA2: jz      loc_14029CD28
 * 000000014029CCA8: cmp     ecx, 1Eh
 * 000000014029CCAB: jz      short loc_14029CD02
 * 000000014029CCAD: cmp     ecx, 20h ; ' '
 * 000000014029CCB0: jle     short loc_14029CCFB
 * 000000014029CCB2: cmp     ecx, 22h ; '"'
 * 000000014029CCB5: jle     short loc_14029CCD3
 * 000000014029CCB7: cmp     ecx, 2Bh ; '+'
 * 000000014029CCBA: jnz     short loc_14029CCFB
 * 000000014029CCBC: mov     ecx, [r8+10h]
 * 000000014029CCC0: mov     rax, r11
 * 000000014029CCC3: mul     rcx
 * 000000014029CCC6: shr     rdx, 3
 * 000000014029CCCA: lea     eax, ds:30h[rdx*4]
 * 000000014029CCD1: jmp     short loc_14029CD33
 * 000000014029CCD3: mov     ecx, [r8+20h]
 * 000000014029CCD7: mov     edx, [r8+28h]
 * 000000014029CCDB: and     ecx, 0FFFh
 * 000000014029CCE1: add     rdx, 0FFFh
 * 000000014029CCE8: add     rdx, rcx
 * 000000014029CCEB: shr     rdx, 0Ch
 * 000000014029CCEF: lea     eax, [rdx+rdx*4]
 * 000000014029CCF2: lea     eax, ds:30h[rax*4]
 * 000000014029CCF9: jmp     short loc_14029CD33
 * 000000014029CCFB: mov     eax, 30h ; '0'
 * 000000014029CD00: jmp     short loc_14029CD33
 * 000000014029CD02: mov     ecx, [r8+24h]
 * 000000014029CD06: mov     rax, r11
 * 000000014029CD09: dec     ecx
 * 000000014029CD0B: mul     rcx
 * 000000014029CD0E: movzx   eax, word ptr [r8+28h]
 * 000000014029CD13: shr     rdx, 3
 * 000000014029CD17: add     edx, 7
 * 000000014029CD1A: and     edx, 0FFFFFFF8h
 * 000000014029CD1D: add     eax, r12d
 * 000000014029CD20: lea     eax, [rax+rax*2]
 * 000000014029CD23: lea     eax, [rdx+rax*8]
 * 000000014029CD26: jmp     short loc_14029CD33
 * 000000014029CD28: movzx   eax, word ptr [r8+28h]
 * 000000014029CD2D: add     eax, 37h ; '7'
 * 000000014029CD30: and     eax, 0FFFFFFF8h
 * 000000014029CD33: add     r8, rax
 * 000000014029CD36: mov     eax, 1
 * 000000014029CD3B: sub     r9, rax
 * 000000014029CD3E: jnz     loc_14029CC53
 * 000000014029CD44: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029CD48: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029CD4F: mov     r11d, [rbp+2150h+var_2128]
 * 000000014029CD53: mov     rbx, [rbp+2150h+var_2148]
 * 000000014029CD57: mov     r14d, dword ptr [rbp+2150h+var_20E0]
 * 000000014029CD5B: mov     r15, [rbp+2150h+var_2130]
 * 000000014029CD5F: mov     r12d, [rbp+2150h+var_20B0]
 * 000000014029CD66: jmp     short loc_14029CD6D
 * 000000014029CD68: mov     eax, 1
 * 000000014029CD6D: mov     edx, r8d
 * 000000014029CD70: mov     dword ptr [rbp+2150h+var_1F60], eax
 * 000000014029CD76: sub     edx, ebx
 * 000000014029CD78: mov     dword ptr [rbp+2150h+var_1F60+4], r11d
 * 000000014029CD7F: mov     [rbp+2150h+var_1F58], edx
 * 000000014029CD85: mov     r10d, eax
 * 000000014029CD88: movsxd  rcx, dword ptr [r8]
 * 000000014029CD8B: mov     r9d, r11d
 * 000000014029CD8E: cmp     ecx, 2Bh ; '+'
 * 000000014029CD91: ja      short loc_14029CDB3
 * 000000014029CD93: mov     r11, 80000001002h
 * 000000014029CD9D: bt      r11, rcx
 * 000000014029CDA1: jnb     short loc_14029CDB3
 * 000000014029CDA3: mov     rax, [rbp+2150h+var_2108]
 * 000000014029CDA7: cmp     [r8+8], rax
 * 000000014029CDAB: jnz     short loc_14029CDB3
 * 000000014029CDAD: cmp     [r8+10h], r12d
 * 000000014029CDB1: jz      short loc_14029CDDE
 * 000000014029CDB3: lea     eax, [rcx-21h]
 * 000000014029CDB6: mov     ecx, 1
 * 000000014029CDBB: cmp     eax, ecx
 * 000000014029CDBD: ja      short loc_14029CDC5
 * 000000014029CDBF: cmp     [r8+20h], r15
 * 000000014029CDC3: jz      short loc_14029CDDE
 * 000000014029CDC5: add     r14d, ecx
 * 000000014029CDC8: mov     dword ptr [rbp+2150h+var_20E0], r14d
 * 000000014029CDCC: cmp     r14d, [rsi+66Ch]
 * 000000014029CDD3: jb      loc_14029CBEC
 * 000000014029CDD9: xor     eax, eax
 * 000000014029CDDB: mov     r8, rax
 * 000000014029CDDE: mov     [rbp+2150h+var_1FE8], r8
 * 000000014029CDE5: test    r8, r8
 * 000000014029CDE8: jz      short loc_14029CDF4
 * 000000014029CDEA: mov     ecx, 0C000010Eh
 * 000000014029CDEF: jmp     loc_14029E854
 * 000000014029CDF4: mov     rax, [rsi+298h]
 * 000000014029CDFB: mov     rcx, [rbp+2150h+var_20C8]
 * 000000014029CE02: call    KeGuardDispatchICall
 * 000000014029CE07: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029CE11: mov     ebx, eax
 * 000000014029CE13: mov     dword ptr [rbp+2150h+var_2088], eax
 * 000000014029CE19: mov     eax, [rbp+2150h+var_209C]
 * 000000014029CE1F: mov     dword ptr [rbp+2150h+var_20E0], eax
 * 000000014029CE22: jz      short loc_14029CE49
 * 000000014029CE24: mov     rdx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CE2B: lea     rcx, [rbp+2150h+var_1FF0]
 * 000000014029CE32: mov     r8d, 9
 * 000000014029CE38: call    sub_14080CF60
 * 000000014029CE3D: mov     r13, [rbp+2150h+var_1FF0]
 * 000000014029CE44: jmp     loc_14029E852
 * 000000014029CE49: mov     rcx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CE50: lea     r9, [rbp+2150h+var_209C]
 * 000000014029CE57: xor     eax, eax
 * 000000014029CE59: xor     r8d, r8d
 * 000000014029CE5C: mov     [rbp+2150h+var_1CC0], rax
 * 000000014029CE63: mov     [rbp+2150h+var_1E70], eax
 * 000000014029CE69: mov     rax, [rsi+1E0h]
 * 000000014029CE70: lea     r14d, [r8+1]
 * 000000014029CE74: mov     dl, r14b
 * 000000014029CE77: call    KeGuardDispatchICall
 * 000000014029CE7C: mov     rdx, rax
 * 000000014029CE7F: lea     r8d, [r14+0Bh]
 * 000000014029CE83: neg     rax
 * 000000014029CE86: mov     [rbp+2150h+var_1CD8], rdx
 * 000000014029CE8D: lea     r9, [rbp+2150h+var_209C]
 * 000000014029CE94: mov     dl, r14b
 * 000000014029CE97: sbb     ecx, ecx
 * 000000014029CE99: and     ecx, [rbp+2150h+var_209C]
 * 000000014029CE9F: mov     [rbp+2150h+var_209C], ecx
 * 000000014029CEA5: mov     rax, [rsi+1E0h]
 * 000000014029CEAC: mov     [rbp+2150h+var_1E7C], ecx
 * 000000014029CEB2: mov     rcx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CEB9: call    KeGuardDispatchICall
 * 000000014029CEBE: mov     rdx, rax
 * 000000014029CEC1: mov     [rbp+2150h+var_20F8], rax
 * 000000014029CEC5: neg     rax
 * 000000014029CEC8: mov     [rbp+2150h+var_1CD0], rdx
 * 000000014029CECF: lea     r8d, [r14+9]
 * 000000014029CED3: mov     dl, r14b
 * 000000014029CED6: sbb     ecx, ecx
 * 000000014029CED8: lea     r9, [rbp+2150h+var_209C]
 * 000000014029CEDF: and     ecx, [rbp+2150h+var_209C]
 * 000000014029CEE5: mov     [rbp+2150h+var_209C], ecx
 * 000000014029CEEB: mov     rax, [rsi+1E0h]
 * 000000014029CEF2: mov     [rbp+2150h+var_20D8], ecx
 * 000000014029CEF5: mov     [rbp+2150h+var_1E78], ecx
 * 000000014029CEFB: mov     rcx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CF02: call    KeGuardDispatchICall
 * 000000014029CF07: mov     rdx, rax
 * 000000014029CF0A: neg     rax
 * 000000014029CF0D: mov     [rbp+2150h+var_1CC8], rdx
 * 000000014029CF14: sbb     ecx, ecx
 * 000000014029CF16: and     ecx, [rbp+2150h+var_209C]
 * 000000014029CF1C: mov     [rbp+2150h+var_209C], ecx
 * 000000014029CF22: mov     rax, [rsi+1E8h]
 * 000000014029CF29: mov     [rbp+2150h+var_1E74], ecx
 * 000000014029CF2F: mov     rcx, [rbp+2150h+BugCheckParameter2]
 * 000000014029CF36: call    KeGuardDispatchICall
 * 000000014029CF3B: mov     rcx, rax
 * 000000014029CF3E: test    rax, rax
 * 000000014029CF41: jnz     short loc_14029CF50
 * 000000014029CF43: mov     ecx, 0C000007Bh
 * 000000014029CF48: mov     r12d, r14d
 * 000000014029CF4B: jmp     loc_14029E858
 * 000000014029CF50: mov     rax, [rbp+2150h+BugCheckParameter2]
 * 000000014029CF57: mov     r15d, [rsi+644h]
 * 000000014029CF5E: mov     r8d, [rsi+77Ch]
 * 000000014029CF65: mov     [rbp+2150h+var_1CE0], rax
 * 000000014029CF6C: mov     eax, [rcx+54h]
 * 000000014029CF6F: mov     [rbp+2150h+var_1E80], eax
 * 000000014029CF75: mov     eax, ebx
 * 000000014029CF77: neg     eax
 * 000000014029CF79: lea     eax, [r15+0F0h]
 * 000000014029CF80: sbb     r9d, r9d
 * 000000014029CF83: and     r9d, 0Bh
 * 000000014029CF87: mov     [rbp+2150h+var_20F0], r9d
 * 000000014029CF8B: cmp     eax, [rsi+85Ch]
 * 000000014029CF91: jbe     loc_14029D096
 * 000000014029CF97: mov     edx, eax
 * 000000014029CF99: mov     rcx, rsi
 * 000000014029CF9C: call    sub_1402AEFBC
 * 000000014029CFA1: mov     rbx, rax
 * 000000014029CFA4: mov     [rbp+2150h+var_2148], rax
 * 000000014029CFA8: xor     eax, eax
 * 000000014029CFAA: test    rbx, rbx
 * 000000014029CFAD: jz      loc_14029D085
 * 000000014029CFB3: mov     edx, [rsi+7D8h]
 * 000000014029CFB9: test    dl, 4
 * 000000014029CFBC: jnz     loc_14029D078
 * 000000014029CFC2: mov     ecx, [rsi+644h]
 * 000000014029CFC8: and     edx, 20000000h
 * 000000014029CFCE: mov     r9, [rsi+628h]
 * 000000014029CFD5: neg     edx
 * 000000014029CFD7: mov     rax, rsi
 * 000000014029CFDA: sbb     r8d, r8d
 * 000000014029CFDD: and     r8d, [rsi+77Ch]
 * 000000014029CFE4: cmp     ecx, 8
 * 000000014029CFE7: jb      short loc_14029D001
 * 000000014029CFE9: mov     edx, ecx
 * 000000014029CFEB: shr     rdx, 3
 * 000000014029CFEF: xor     r10d, r10d
 * 000000014029CFF2: mov     [rax], r10
 * 000000014029CFF5: add     ecx, 0FFFFFFF8h
 * 000000014029CFF8: add     rax, 8
 * 000000014029CFFC: sub     rdx, r14
 * 000000014029CFFF: jnz     short loc_14029CFF2
 * 000000014029D001: xor     edx, edx
 * 000000014029D003: test    ecx, ecx
 * 000000014029D005: jz      short loc_14029D011
 * 000000014029D007: mov     [rax], dl
 * 000000014029D009: add     rax, r14
 * 000000014029D00C: add     ecx, 0FFFFFFFFh
 * 000000014029D00F: jnz     short loc_14029D007
 * 000000014029D011: mov     r14d, [rbx+77Ch]
 * 000000014029D018: mov     eax, 3
 * 000000014029D01D: mov     [rbx+77Ch], r8d
 * 000000014029D024: cmp     r8d, eax
 * 000000014029D027: jz      short loc_14029D05C
 * 000000014029D029: test    dword ptr [rbx+7D8h], 10000000h
 * 000000014029D033: mov     rcx, rdx
 * 000000014029D036: cmovz   ecx, r8d
 * 000000014029D03A: test    ecx, ecx
 * 000000014029D03C: jz      short loc_14029D053
 * 000000014029D03E: mov     rax, [rbx+218h]
 * 000000014029D045: lea     rcx, [r9-8]
 * 000000014029D049: mov     rdx, [rcx]
 * 000000014029D04C: call    KeGuardDispatchICall
 * 000000014029D051: jmp     short loc_14029D06B
 * 000000014029D053: mov     rax, [rbx+0F0h]
 * 000000014029D05A: jmp     short loc_14029D063
 * 000000014029D05C: mov     rax, [rbx+358h]
 * 000000014029D063: mov     rcx, r9
 * 000000014029D066: call    KeGuardDispatchICall
 * 000000014029D06B: mov     [rbx+77Ch], r14d
 * 000000014029D072: mov     r14d, 1
 * 000000014029D078: and     dword ptr [rbx+7D8h], 0FFFFFFFBh
 * 000000014029D07F: mov     r9d, [rbp+2150h+var_20F0]
 * 000000014029D083: jmp     short loc_14029D0A3
 * 000000014029D085: mov     [rbp+2150h+var_2040], rax
 * 000000014029D08C: mov     ecx, 0C000009Ah
 * 000000014029D091: jmp     loc_14029CF48
 * 000000014029D096: mov     rbx, rsi
 * 000000014029D099: mov     [rsi+644h], eax
 * 000000014029D09F: mov     [rbp+2150h+var_2148], rbx
 * 000000014029D0A3: mov     eax, 5
 * 000000014029D0A8: lea     r12, [rbx+r15]
 * 000000014029D0AC: add     [rbx+66Ch], eax
 * 000000014029D0B2: lea     rdi, [rbp+2150h+var_1CE0]
 * 000000014029D0B9: xor     r10d, r10d
 * 000000014029D0BC: mov     [rbp+2150h+var_1E28], r12
 * 000000014029D0C3: mov     [rbp+2150h+var_1FE8], r12
 * 000000014029D0CA: lea     rsi, [rbp+2150h+var_1E80]
 * 000000014029D0D1: mov     [rbp+2150h+var_2130], rax
 * 000000014029D0D5: mov     r13d, [rsi]
 * 000000014029D0D8: mov     ecx, 30h ; '0'
 * 000000014029D0DD: mov     r15, [rdi]
 * 000000014029D0E0: mov     rax, r12
 * 000000014029D0E3: mov     [rbp+2150h+var_2128], r13d
 * 000000014029D0E7: lea     edx, [rcx-2Ah]
 * 000000014029D0EA: mov     [rax], r10
 * 000000014029D0ED: add     ecx, 0FFFFFFF8h
 * 000000014029D0F0: add     rax, 8
 * 000000014029D0F4: sub     rdx, r14
 * 000000014029D0F7: jnz     short loc_14029D0EA
 * 000000014029D0F9: test    ecx, ecx
 * 000000014029D0FB: jz      short loc_14029D108
 * 000000014029D0FD: mov     [rax], r10b
 * 000000014029D100: add     rax, r14
 * 000000014029D103: add     ecx, 0FFFFFFFFh
 * 000000014029D106: jnz     short loc_14029D0FD
 * 000000014029D108: mov     [r12], r9d
 * 000000014029D10C: lea     rcx, [r15+r13]
 * 000000014029D110: mov     [r12+8], r15
 * 000000014029D115: mov     r9, r15
 * 000000014029D118: mov     [r12+10h], r13d
 * 000000014029D11D: mov     rax, r15
 * 000000014029D120: add     [rbx+688h], r13d
 * 000000014029D127: mov     r11d, [rbx+674h]
 * 000000014029D12E: mov     r14, [rbx+678h]
 * 000000014029D135: cmp     r15, rcx
 * 000000014029D138: jnb     short loc_14029D14A
 * 000000014029D13A: mov     edx, 40h ; '@'
 * 000000014029D13F: prefetchnta byte ptr [rax]
 * 000000014029D142: add     rax, rdx
 * 000000014029D145: cmp     rax, rcx
 * 000000014029D148: jb      short loc_14029D13F
 * 000000014029D14A: mov     r10d, r13d
 * 000000014029D14D: mov     r8, r14
 * 000000014029D150: shr     r10d, 7
 * 000000014029D154: test    r10d, r10d
 * 000000014029D157: jz      short loc_14029D1C2
 * 000000014029D159: mov     ebx, 1
 * 000000014029D15E: mov     r13, 7010008004002001h
 * 000000014029D168: mov     eax, 8
 * 000000014029D16D: xor     r8, [r9]
 * 000000014029D170: mov     ecx, r11d
 * 000000014029D173: rol     r8, cl
 * 000000014029D176: xor     r8, [r9+8]
 * 000000014029D17A: add     r9, 10h
 * 000000014029D17E: rol     r8, cl
 * 000000014029D181: sub     rax, rbx
 * 000000014029D184: jnz     short loc_14029D16D
 * 000000014029D186: mov     rcx, r9
 * 000000014029D189: sub     rcx, r15
 * 000000014029D18C: xor     rcx, r14
 * 000000014029D18F: mov     rax, rcx
 * 000000014029D192: rol     rax, 11h
 * 000000014029D196: xor     rcx, rax
 * 000000014029D199: mov     rax, r13
 * 000000014029D19C: mul     rcx
 * 000000014029D19F: xor     r11d, eax
 * 000000014029D1A2: mov     [rbp+2150h+var_1758], rdx
 * 000000014029D1A9: xor     r11d, edx
 * 000000014029D1AC: and     r11d, 3Fh
 * 000000014029D1B0: cmovz   r11d, ebx
 * 000000014029D1B4: add     r10d, 0FFFFFFFFh
 * 000000014029D1B8: jnz     short loc_14029D168
 * 000000014029D1BA: mov     rbx, [rbp+2150h+var_2148]
 * 000000014029D1BE: mov     r13d, [rbp+2150h+var_2128]
 * 000000014029D1C2: mov     edx, r13d
 * 000000014029D1C5: mov     r14d, 1
 * 000000014029D1CB: and     edx, 7Fh
 * 000000014029D1CE: cmp     edx, 8
 * 000000014029D1D1: jb      short loc_14029D1EE
 * 000000014029D1D3: mov     eax, edx
 * 000000014029D1D5: shr     rax, 3
 * 000000014029D1D9: xor     r8, [r9]
 * 000000014029D1DC: mov     ecx, r11d
 * 000000014029D1DF: rol     r8, cl
 * 000000014029D1E2: add     r9, 8
 * 000000014029D1E6: add     edx, 0FFFFFFF8h
 * 000000014029D1E9: sub     rax, r14
 * 000000014029D1EC: jnz     short loc_14029D1D9
 * 000000014029D1EE: test    edx, edx
 * 000000014029D1F0: jz      short loc_14029D207
 * 000000014029D1F2: movzx   eax, byte ptr [r9]
 * 000000014029D1F6: mov     ecx, r11d
 * 000000014029D1F9: xor     r8, rax
 * 000000014029D1FC: add     r9, r14
 * 000000014029D1FF: rol     r8, cl
 * 000000014029D202: add     edx, 0FFFFFFFFh
 * 000000014029D205: jnz     short loc_14029D1F2
 * 000000014029D207: mov     rax, r8
 * 000000014029D20A: shr     rax, 1Fh
 * 000000014029D20E: xor     r10d, r10d
 * 000000014029D211: jmp     short loc_14029D21A
 * 000000014029D213: xor     r8d, eax
 * 000000014029D216: shr     rax, 1Fh
 * 000000014029D21A: test    rax, rax
 * 000000014029D21D: jnz     short loc_14029D213
 * 000000014029D21F: mov     r9d, [rbp+2150h+var_20F0]
 * 000000014029D223: btr     r8d, 1Fh
 * 000000014029D228: mov     [r12+14h], r8d
 * 000000014029D22D: add     rsi, 4
 * 000000014029D231: add     [rbx+688h], r13d
 * 000000014029D238: add     rdi, 8
 * 000000014029D23C: mov     r12, [rbp+2150h+var_1E28]
 * 000000014029D243: add     r12, 30h ; '0'
 * 000000014029D247: sub     [rbp+2150h+var_2130], r14
 * 000000014029D24B: mov     [rbp+2150h+var_1E28], r12
 * 000000014029D252: jnz     loc_14029D0D5
 * 000000014029D258: mov     rcx, [rbp+2150h+var_1FE8]
 * 000000014029D25F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029D266: mov     rax, [rbp+2150h+BugCheckParameter2]
 * 000000014029D26D: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029D271: mov     edx, dword ptr [rbp+2150h+var_2088]
 * 000000014029D277: mov     dword ptr [rcx], 2Ch ; ','
 * 000000014029D27D: mov     [rcx+18h], rax
 * 000000014029D281: test    dword ptr [rbx+7D8h], 10200000h
 * 000000014029D28B: jnz     short loc_14029D2A1
 * 000000014029D28D: test    edx, edx
 * 000000014029D28F: jnz     short loc_14029D2A5
 * 000000014029D291: test    dword ptr [rbx+7DCh], 8000h
 * 000000014029D29B: jz      short loc_14029D2AD
 * 000000014029D29D: or      [rcx+20h], r14d
 * 000000014029D2A1: test    edx, edx
 * 000000014029D2A3: jz      short loc_14029D2AD
 * 000000014029D2A5: mov     eax, 2
 * 000000014029D2AA: or      [rcx+20h], eax
 * 000000014029D2AD: mov     r9, [rbp+2150h+BugCheckParameter2]
 * 000000014029D2B4: lea     rax, [rbp+2150h+var_1F20]
 * 000000014029D2BB: mov     r8d, dword ptr [rbp+2150h+var_20E0]
 * 000000014029D2BF: lea     rcx, [rbp+2150h+var_2040]
 * 000000014029D2C6: mov     [rsp+1120h+var_10E8], rax
 * 000000014029D2CB: mov     r13, rbx
 * 000000014029D2CE: lea     rax, [rbp+2150h+var_1FAC]
 * 000000014029D2D5: mov     [rbp+2150h+var_2040], rbx
 * 000000014029D2DC: mov     [rsp+1120h+var_10F0], rax
 * 000000014029D2E1: mov     dword ptr [rsp+1120h+var_10F8], 9
 * 000000014029D2E9: mov     dword ptr [rsp+1120h+BugCheckParameter4], edx
 * 000000014029D2ED: mov     rdx, [rbp+2150h+var_2108]
 * 000000014029D2F1: mov     [rbp+2150h+var_1FF0], rbx
 * 000000014029D2F8: call    sub_1402AE570
 * 000000014029D2FD: mov     ecx, eax
 * 000000014029D2FF: test    eax, eax
 * 000000014029D301: js      loc_14029E854
 * 000000014029D307: mov     r13, [rbp+2150h+var_2040]
 * 000000014029D30E: mov     rcx, [rbp+2150h+var_1FE8]
 * 000000014029D315: mov     rax, r13
 * 000000014029D318: mov     r14d, [rbp+2150h+var_1FAC]
 * 000000014029D31F: sub     rax, rbx
 * 000000014029D322: mov     ebx, [rbp+2150h+var_1F20]
 * 000000014029D328: add     rcx, rax
 * 000000014029D32B: sub     ebx, [rbp+2150h+var_1FAC]
 * 000000014029D331: add     r14, [rbp+2150h+BugCheckParameter2]
 * 000000014029D338: mov     [rbp+2150h+var_1FE8], rcx
 * 000000014029D33F: xor     r8d, r8d
 * 000000014029D342: lea     r12, [rcx+0C0h]
 * 000000014029D349: mov     [rbp+2150h+var_1FF0], r13
 * 000000014029D350: mov     ecx, 30h ; '0'
 * 000000014029D355: mov     rax, r12
 * 000000014029D358: lea     edx, [rcx-2Ah]
 * 000000014029D35B: lea     r9d, [rcx-2Fh]
 * 000000014029D35F: mov     [rax], r8
 * 000000014029D362: add     ecx, 0FFFFFFF8h
 * 000000014029D365: add     rax, 8
 * 000000014029D369: sub     rdx, r9
 * 000000014029D36C: jnz     short loc_14029D35F
 * 000000014029D36E: test    ecx, ecx
 * 000000014029D370: jz      short loc_14029D37D
 * 000000014029D372: mov     [rax], r8b
 * 000000014029D375: add     rax, r9
 * 000000014029D378: add     ecx, 0FFFFFFFFh
 * 000000014029D37B: jnz     short loc_14029D372
 * 000000014029D37D: mov     eax, [rbp+2150h+var_20F0]
 * 000000014029D380: mov     r9, r14
 * 000000014029D383: mov     [r12], eax
 * 000000014029D387: mov     rax, r14
 * 000000014029D38A: mov     [r12+8], r14
 * 000000014029D38F: mov     [r12+10h], ebx
 * 000000014029D394: add     [r13+688h], ebx
 * 000000014029D39B: mov     r10d, [r13+674h]
 * 000000014029D3A2: mov     r15, [r13+678h]
 * 000000014029D3A9: mov     ecx, ebx
 * 000000014029D3AB: add     rcx, r14
 * 000000014029D3AE: cmp     r14, rcx
 * 000000014029D3B1: jnb     short loc_14029D3C3
 * 000000014029D3B3: mov     edx, 40h ; '@'
 * 000000014029D3B8: prefetchnta byte ptr [rax]
 * 000000014029D3BB: add     rax, rdx
 * 000000014029D3BE: cmp     rax, rcx
 * 000000014029D3C1: jb      short loc_14029D3B8
 * 000000014029D3C3: mov     r11d, ebx
 * 000000014029D3C6: mov     r8, r15
 * 000000014029D3C9: shr     r11d, 7
 * 000000014029D3CD: test    r11d, r11d
 * 000000014029D3D0: jz      short loc_14029D43E
 * 000000014029D3D2: mov     esi, 1
 * 000000014029D3D7: mov     rdi, 7010008004002001h
 * 000000014029D3E1: mov     eax, 8
 * 000000014029D3E6: xor     r8, [r9]
 * 000000014029D3E9: mov     ecx, r10d
 * 000000014029D3EC: rol     r8, cl
 * 000000014029D3EF: xor     r8, [r9+8]
 * 000000014029D3F3: add     r9, 10h
 * 000000014029D3F7: rol     r8, cl
 * 000000014029D3FA: sub     rax, rsi
 * 000000014029D3FD: jnz     short loc_14029D3E6
 * 000000014029D3FF: mov     rcx, r9
 * 000000014029D402: sub     rcx, r14
 * 000000014029D405: xor     rcx, r15
 * 000000014029D408: mov     rax, rcx
 * 000000014029D40B: rol     rax, 11h
 * 000000014029D40F: xor     rcx, rax
 * 000000014029D412: mov     rax, rdi
 * 000000014029D415: mul     rcx
 * 000000014029D418: xor     r10d, eax
 * 000000014029D41B: mov     [rbp+2150h+var_1750], rdx
 * 000000014029D422: xor     r10d, edx
 * 000000014029D425: and     r10d, 3Fh
 * 000000014029D429: cmovz   r10d, esi
 * 000000014029D42D: add     r11d, 0FFFFFFFFh
 * 000000014029D431: jnz     short loc_14029D3E1
 * 000000014029D433: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029D437: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029D43E: and     ebx, 7Fh
 * 000000014029D441: mov     r14d, 1
 * 000000014029D447: cmp     ebx, 8
 * 000000014029D44A: jb      short loc_14029D467
 * 000000014029D44C: mov     eax, ebx
 * 000000014029D44E: shr     rax, 3
 * 000000014029D452: xor     r8, [r9]
 * 000000014029D455: mov     ecx, r10d
 * 000000014029D458: rol     r8, cl
 * 000000014029D45B: add     r9, 8
 * 000000014029D45F: add     ebx, 0FFFFFFF8h
 * 000000014029D462: sub     rax, r14
 * 000000014029D465: jnz     short loc_14029D452
 * 000000014029D467: test    ebx, ebx
 * 000000014029D469: jz      short loc_14029D480
 * 000000014029D46B: movzx   eax, byte ptr [r9]
 * 000000014029D46F: mov     ecx, r10d
 * 000000014029D472: xor     r8, rax
 * 000000014029D475: add     r9, r14
 * 000000014029D478: rol     r8, cl
 * 000000014029D47B: add     ebx, 0FFFFFFFFh
 * 000000014029D47E: jnz     short loc_14029D46B
 * 000000014029D480: mov     rax, r8
 * 000000014029D483: jmp     short loc_14029D488
 * 000000014029D485: xor     r8d, eax
 * 000000014029D488: shr     rax, 1Fh
 * 000000014029D48C: test    rax, rax
 * 000000014029D48F: jnz     short loc_14029D485
 * 000000014029D491: mov     eax, dword ptr [rbp+2150h+var_2088]
 * 000000014029D497: btr     r8d, 1Fh
 * 000000014029D49C: mov     [r12+14h], r8d
 * 000000014029D4A1: mov     rcx, [rbp+2150h+var_1FE8]
 * 000000014029D4A8: add     rcx, 60h ; '`'
 * 000000014029D4AC: neg     eax
 * 000000014029D4AE: mov     [rbp+2150h+var_1F38], rcx
 * 000000014029D4B5: sbb     r12d, r12d
 * 000000014029D4B8: neg     r12d
 * 000000014029D4BB: add     r12d, 0Dh
 * 000000014029D4BF: test    rcx, rcx
 * 000000014029D4C2: jnz     loc_14029D764
 * 000000014029D4C8: mov     r15d, [r13+644h]
 * 000000014029D4CF: mov     r8d, [r13+77Ch]
 * 000000014029D4D6: lea     eax, [r15+30h]
 * 000000014029D4DA: cmp     eax, [r13+85Ch]
 * 000000014029D4E1: jbe     loc_14029D5D9
 * 000000014029D4E7: mov     edx, eax
 * 000000014029D4E9: mov     rcx, r13
 * 000000014029D4EC: call    sub_1402AEFBC
 * 000000014029D4F1: mov     rbx, rax
 * 000000014029D4F4: xor     eax, eax
 * 000000014029D4F6: test    rbx, rbx
 * 000000014029D4F9: jz      loc_14029D5C8
 * 000000014029D4FF: mov     edx, [r13+7D8h]
 * 000000014029D506: test    dl, 4
 * 000000014029D509: jnz     loc_14029D5BF
 * 000000014029D50F: mov     ecx, [r13+644h]
 * 000000014029D516: and     edx, 20000000h
 * 000000014029D51C: mov     r9, [r13+628h]
 * 000000014029D523: neg     edx
 * 000000014029D525: sbb     r8d, r8d
 * 000000014029D528: and     r8d, [r13+77Ch]
 * 000000014029D52F: cmp     ecx, 8
 * 000000014029D532: jb      short loc_14029D54C
 * 000000014029D534: mov     eax, ecx
 * 000000014029D536: shr     rax, 3
 * 000000014029D53A: xor     edx, edx
 * 000000014029D53C: mov     [r13+0], rdx
 * 000000014029D540: add     ecx, 0FFFFFFF8h
 * 000000014029D543: add     r13, 8
 * 000000014029D547: sub     rax, r14
 * 000000014029D54A: jnz     short loc_14029D53C
 * 000000014029D54C: xor     eax, eax
 * 000000014029D54E: test    ecx, ecx
 * 000000014029D550: jz      short loc_14029D55E
 * 000000014029D552: mov     [r13+0], al
 * 000000014029D556: add     r13, r14
 * 000000014029D559: add     ecx, 0FFFFFFFFh
 * 000000014029D55C: jnz     short loc_14029D552
 * 000000014029D55E: mov     r14d, [rbx+77Ch]
 * 000000014029D565: mov     eax, 3
 * 000000014029D56A: mov     [rbx+77Ch], r8d
 * 000000014029D571: cmp     r8d, eax
 * 000000014029D574: jz      short loc_14029D5A9
 * 000000014029D576: test    dword ptr [rbx+7D8h], 10000000h
 * 000000014029D580: lea     ecx, [rax-3]
 * 000000014029D583: cmovz   ecx, r8d
 * 000000014029D587: test    ecx, ecx
 * 000000014029D589: jz      short loc_14029D5A0
 * 000000014029D58B: mov     rax, [rbx+218h]
 * 000000014029D592: lea     rcx, [r9-8]
 * 000000014029D596: mov     rdx, [rcx]
 * 000000014029D599: call    KeGuardDispatchICall
 * 000000014029D59E: jmp     short loc_14029D5B8
 * 000000014029D5A0: mov     rax, [rbx+0F0h]
 * 000000014029D5A7: jmp     short loc_14029D5B0
 * 000000014029D5A9: mov     rax, [rbx+358h]
 * 000000014029D5B0: mov     rcx, r9
 * 000000014029D5B3: call    KeGuardDispatchICall
 * 000000014029D5B8: mov     [rbx+77Ch], r14d
 * 000000014029D5BF: and     dword ptr [rbx+7D8h], 0FFFFFFFBh
 * 000000014029D5C6: jmp     short loc_14029D5E3
 * 000000014029D5C8: mov     [rbp+2150h+var_2040], rax
 * 000000014029D5CF: mov     ecx, 0C000009Ah
 * 000000014029D5D4: jmp     loc_14029E854
 * 000000014029D5D9: mov     rbx, r13
 * 000000014029D5DC: mov     [r13+644h], eax
 * 000000014029D5E3: add     r15, rbx
 * 000000014029D5E6: mov     r9d, 1
 * 000000014029D5EC: add     [rbx+66Ch], r9d
 * 000000014029D5F3: mov     rax, r15
 * 000000014029D5F6: mov     [rbp+2150h+var_1D30], r15
 * 000000014029D5FD: xor     r8d, r8d
 * 000000014029D600: lea     ecx, [r9+2Fh]
 * 000000014029D604: lea     edx, [rcx-2Ah]
 * 000000014029D607: mov     [rax], r8
 * 000000014029D60A: add     ecx, 0FFFFFFF8h
 * 000000014029D60D: add     rax, 8
 * 000000014029D611: sub     rdx, r9
 * 000000014029D614: jnz     short loc_14029D607
 * 000000014029D616: test    ecx, ecx
 * 000000014029D618: jz      short loc_14029D625
 * 000000014029D61A: mov     [rax], r8b
 * 000000014029D61D: add     rax, r9
 * 000000014029D620: add     ecx, 0FFFFFFFFh
 * 000000014029D623: jnz     short loc_14029D61A
 * 000000014029D625: mov     r13, [rbp+2150h+var_20F8]
 * 000000014029D629: mov     [r15], r12d
 * 000000014029D62C: mov     r9, r13
 * 000000014029D62F: mov     r12d, [rbp+2150h+var_20D8]
 * 000000014029D633: mov     rax, r13
 * 000000014029D636: mov     [r15+8], r13
 * 000000014029D63A: mov     [r15+10h], r12d
 * 000000014029D63E: add     [rbx+688h], r12d
 * 000000014029D645: mov     r11d, [rbx+674h]
 * 000000014029D64C: mov     r14, [rbx+678h]
 * 000000014029D653: mov     ecx, r12d
 * 000000014029D656: add     rcx, r13
 * 000000014029D659: cmp     r13, rcx
 * 000000014029D65C: jnb     short loc_14029D66E
 * 000000014029D65E: mov     edx, 40h ; '@'
 * 000000014029D663: prefetchnta byte ptr [rax]
 * 000000014029D666: add     rax, rdx
 * 000000014029D669: cmp     rax, rcx
 * 000000014029D66C: jb      short loc_14029D663
 * 000000014029D66E: mov     r10d, r12d
 * 000000014029D671: mov     r8, r14
 * 000000014029D674: shr     r10d, 7
 * 000000014029D678: test    r10d, r10d
 * 000000014029D67B: jz      short loc_14029D6ED
 * 000000014029D67D: mov     r12, 7010008004002001h
 * 000000014029D687: mov     edx, 8
 * 000000014029D68C: lea     esi, [rdx-7]
 * 000000014029D68F: mov     rax, [r9]
 * 000000014029D692: mov     ecx, r11d
 * 000000014029D695: xor     rax, r8
 * 000000014029D698: mov     r8, [r9+8]
 * 000000014029D69C: rol     rax, cl
 * 000000014029D69F: add     r9, 10h
 * 000000014029D6A3: xor     r8, rax
 * 000000014029D6A6: rol     r8, cl
 * 000000014029D6A9: sub     rdx, rsi
 * 000000014029D6AC: jnz     short loc_14029D68F
 * 000000014029D6AE: mov     rcx, r9
 * 000000014029D6B1: sub     rcx, r13
 * 000000014029D6B4: xor     rcx, r14
 * 000000014029D6B7: mov     rax, rcx
 * 000000014029D6BA: rol     rax, 11h
 * 000000014029D6BE: xor     rcx, rax
 * 000000014029D6C1: mov     rax, r12
 * 000000014029D6C4: mul     rcx
 * 000000014029D6C7: xor     r11d, eax
 * 000000014029D6CA: mov     [rbp+2150h+var_1748], rdx
 * 000000014029D6D1: xor     r11d, edx
 * 000000014029D6D4: mov     rax, rsi
 * 000000014029D6D7: and     r11d, 3Fh
 * 000000014029D6DB: cmovz   r11d, eax
 * 000000014029D6DF: add     r10d, 0FFFFFFFFh
 * 000000014029D6E3: jnz     short loc_14029D687
 * 000000014029D6E5: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029D6E9: mov     r12d, [rbp+2150h+var_20D8]
 * 000000014029D6ED: mov     edx, r12d
 * 000000014029D6F0: mov     r14d, 1
 * 000000014029D6F6: and     edx, 7Fh
 * 000000014029D6F9: cmp     edx, 8
 * 000000014029D6FC: jb      short loc_14029D71A
 * 000000014029D6FE: mov     r10d, edx
 * 000000014029D701: shr     r10, 3
 * 000000014029D705: xor     r8, [r9]
 * 000000014029D708: mov     ecx, r11d
 * 000000014029D70B: rol     r8, cl
 * 000000014029D70E: add     r9, 8
 * 000000014029D712: add     edx, 0FFFFFFF8h
 * 000000014029D715: sub     r10, r14
 * 000000014029D718: jnz     short loc_14029D705
 * 000000014029D71A: test    edx, edx
 * 000000014029D71C: jz      short loc_14029D733
 * 000000014029D71E: movzx   eax, byte ptr [r9]
 * 000000014029D722: mov     ecx, r11d
 * 000000014029D725: xor     r8, rax
 * 000000014029D728: add     r9, r14
 * 000000014029D72B: rol     r8, cl
 * 000000014029D72E: add     edx, 0FFFFFFFFh
 * 000000014029D731: jnz     short loc_14029D71E
 * 000000014029D733: mov     rax, r8
 * 000000014029D736: jmp     short loc_14029D73B
 * 000000014029D738: xor     r8d, eax
 * 000000014029D73B: shr     rax, 1Fh
 * 000000014029D73F: test    rax, rax
 * 000000014029D742: jnz     short loc_14029D738
 * 000000014029D744: btr     r8d, 1Fh
 * 000000014029D749: mov     [r15+14h], r8d
 * 000000014029D74D: mov     rax, [rbp+2150h+var_1D30]
 * 000000014029D754: mov     [rbp+2150h+var_1F38], rax
 * 000000014029D75B: add     [rbx+688h], r12d
 * 000000014029D762: jmp     short loc_14029D772
 * 000000014029D764: mov     rbx, r13
 * 000000014029D767: mov     [rcx], r12d
 * 000000014029D76A: mov     r12d, [rbp+2150h+var_20D8]
 * 000000014029D76E: mov     r13, [rbp+2150h+var_20F8]
 * 000000014029D772: test    dword ptr [rbx+7D8h], 40000000h
 * 000000014029D77C: jz      short loc_14029D79C
 * 000000014029D77E: test    r12d, r12d
 * 000000014029D781: jz      short loc_14029D79C
 * 000000014029D783: mov     r9, [rbp+2150h+var_1F38]
 * 000000014029D78A: mov     r8d, r12d
 * 000000014029D78D: add     r9, 1Ch
 * 000000014029D791: mov     rdx, r13
 * 000000014029D794: mov     rcx, rbx
 * 000000014029D797: call    sub_14017573C
 * 000000014029D79C: mov     rax, [rbp+2150h+var_1F38]
 * 000000014029D7A3: xor     ecx, ecx
 * 000000014029D7A5: mov     [rbp+2150h+var_1FF0], rbx
 * 000000014029D7AC: mov     [rax+18h], ecx
 * 000000014029D7AF: lea     r12d, [rcx+1]
 * 000000014029D7B3: mov     rax, [rbp+2150h+var_1F38]
 * 000000014029D7BA: or      [rax+18h], r12d
 * 000000014029D7BE: xor     eax, eax
 * 000000014029D7C0: mov     r14, [rbp+2150h+var_1FE8]
 * 000000014029D7C7: cmp     dword ptr [rbp+2150h+var_2088], eax
 * 000000014029D7CD: mov     r15, [rbp+2150h+BugCheckParameter2]
 * 000000014029D7D4: setnz   cl
 * 000000014029D7D7: mov     dword ptr [r14+90h], 23h ; '#'
 * 000000014029D7E2: mov     eax, [r14+0B8h]
 * 000000014029D7E9: and     eax, 0FFFFFFFEh
 * 000000014029D7EC: or      ecx, eax
 * 000000014029D7EE: mov     [r14+0B8h], ecx
 * 000000014029D7F5: cmp     dword ptr [r14+0A0h], 94h
 * 000000014029D800: jb      loc_14029D887
 * 000000014029D806: mov     rax, [rbx+1E8h]
 * 000000014029D80D: mov     rcx, r15
 * 000000014029D810: mov     r13, [r14+98h]
 * 000000014029D817: call    KeGuardDispatchICall
 * 000000014029D81C: test    rax, rax
 * 000000014029D81F: jnz     short loc_14029D835
 * 000000014029D821: mov     [rbp+2150h+var_2040], rax
 * 000000014029D828: mov     ecx, 0C000009Ah
 * 000000014029D82D: mov     r13, rbx
 * 000000014029D830: jmp     loc_14029E858
 * 000000014029D835: mov     ecx, [rax+50h]
 * 000000014029D838: mov     eax, 2
 * 000000014029D83D: or      [r14+0B8h], eax
 * 000000014029D844: add     rcx, r15
 * 000000014029D847: mov     rax, [r13+70h]
 * 000000014029D84B: cmp     rax, r15
 * 000000014029D84E: jb      short loc_14029D867
 * 000000014029D850: cmp     rax, rcx
 * 000000014029D853: jnb     short loc_14029D867
 * 000000014029D855: mov     rax, [rax]
 * 000000014029D858: mov     [r14+0A8h], rax
 * 000000014029D85F: or      dword ptr [r14+0B8h], 4
 * 000000014029D867: mov     rax, [r13+78h]
 * 000000014029D86B: cmp     rax, r15
 * 000000014029D86E: jb      short loc_14029D887
 * 000000014029D870: cmp     rax, rcx
 * 000000014029D873: jnb     short loc_14029D887
 * 000000014029D875: mov     rax, [rax]
 * 000000014029D878: mov     [r14+0B0h], rax
 * 000000014029D87F: or      dword ptr [r14+0B8h], 8
 * 000000014029D887: test    dword ptr [rbx+7D8h], 400000h
 * 000000014029D891: mov     r13, rbx
 * 000000014029D894: mov     r14, [rbp+2150h+BugCheckParameter2]
 * 000000014029D89B: mov     [rbp+2150h+var_20B8], r14
 * 000000014029D8A2: mov     [rbp+2150h+var_2040], rbx
 * 000000014029D8A9: mov     [rbp+2150h+var_1FF0], rbx
 * 000000014029D8B0: jz      loc_14029E846
 * 000000014029D8B6: mov     rax, [rbx+1E8h]
 * 000000014029D8BD: mov     rcx, r14
 * 000000014029D8C0: call    KeGuardDispatchICall
 * 000000014029D8C5: mov     [rbp+2150h+var_2080], rax
 * 000000014029D8CC: mov     r15, rax
 * 000000014029D8CF: test    rax, rax
 * 000000014029D8D2: jnz     short loc_14029D8DE
 * 000000014029D8D4: mov     ecx, 0C000007Bh
 * 000000014029D8D9: jmp     loc_14029E854
 * 000000014029D8DE: movzx   r13d, word ptr [r15+6]
 * 000000014029D8E3: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014029D8ED: mov     ecx, dword ptr [rbp+2150h+var_20E0]
 * 000000014029D8F0: mul     rcx
 * 000000014029D8F3: xor     eax, eax
 * 000000014029D8F5: mov     word ptr [rbp+2150h+var_20D8], r13w
 * 000000014029D8FA: mov     r10, rdx
 * 000000014029D8FD: shr     r10, 3
 * 000000014029D901: mov     [rbp+2150h+var_20F8], r10
 * 000000014029D905: test    r13w, r13w
 * 000000014029D909: jnz     short loc_14029D963
 * 000000014029D90B: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029D915: jz      loc_1402AC10C
 * 000000014029D91B: cmp     [rbx+750h], eax
 * 000000014029D921: jnz     short loc_14029D959
 * 000000014029D923: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029D92D: add     rax, rbx
 * 000000014029D930: mov     [rbx+758h], rax
 * 000000014029D937: xor     eax, eax
 * 000000014029D939: mov     [rbx+760h], rax
 * 000000014029D940: mov     qword ptr [rbx+768h], 10Fh
 * 000000014029D94B: mov     [rbx+770h], r14
 * 000000014029D952: mov     [rbx+750h], r12d
 * 000000014029D959: mov     ecx, 0C000007Bh
 * 000000014029D95E: jmp     loc_14029DDE5
 * 000000014029D963: mov     r12, [rbp+2150h+var_2108]
 * 000000014029D967: movzx   r11d, word ptr [r15+14h]
 * 000000014029D96C: add     r11, 18h
 * 000000014029D970: movzx   r9d, r13w
 * 000000014029D974: add     r11, r15
 * 000000014029D977: mov     eax, r10d
 * 000000014029D97A: mov     [rbp+2150h+var_2148], r11
 * 000000014029D97E: mov     [rbp+2150h+var_2128], r9d
 * 000000014029D982: lea     rax, [rax+rax*2]
 * 000000014029D986: shl     rax, 2
 * 000000014029D98A: mov     [rbp+2150h+var_2110], rax
 * 000000014029D98E: add     rax, r12
 * 000000014029D991: mov     [rbp+2150h+var_20A8], rax
 * 000000014029D998: xor     eax, eax
 * 000000014029D99A: mov     [rbp+2150h+var_20F0], eax
 * 000000014029D99D: mov     r8d, eax
 * 000000014029D9A0: test    r9d, r9d
 * 000000014029D9A3: jz      loc_14029DBDE
 * 000000014029D9A9: mov     r13, r11
 * 000000014029D9AC: lea     r10d, [rax+1]
 * 000000014029D9B0: mov     eax, [r13+10h]
 * 000000014029D9B4: mov     ecx, [r13+8]
 * 000000014029D9B8: cmp     eax, ecx
 * 000000014029D9BA: mov     r9d, [r13+0Ch]
 * 000000014029D9BE: cmova   ecx, eax
 * 000000014029D9C1: mov     [rbp+2150h+var_20B0], r9d
 * 000000014029D9C8: lea     edx, [r9+rcx]
 * 000000014029D9CC: mov     dword ptr [rbp+2150h+var_2070], edx
 * 000000014029D9D2: test    r8d, r8d
 * 000000014029D9D5: jz      short loc_14029D9EA
 * 000000014029D9D7: lea     eax, [r8-1]
 * 000000014029D9DB: lea     rax, [rax+rax*4]
 * 000000014029D9DF: cmp     edx, [r11+rax*8+0Ch]
 * 000000014029D9E4: jb      loc_14029DBFE
 * 000000014029D9EA: cmp     r12, [rbp+2150h+var_20A8]
 * 000000014029D9F1: jz      loc_14029DBB6
 * 000000014029D9F7: mov     ecx, [r12]
 * 000000014029D9FB: mov     eax, [r12+4]
 * 000000014029DA00: cmp     ecx, edx
 * 000000014029DA02: jnb     loc_14029DBA8
 * 000000014029DA08: cmp     eax, r9d
 * 000000014029DA0B: jbe     loc_14029DBA8
 * 000000014029DA11: cmp     ecx, r9d
 * 000000014029DA14: jb      loc_14029DC57
 * 000000014029DA1A: cmp     eax, edx
 * 000000014029DA1C: ja      loc_14029DC57
 * 000000014029DA22: mov     eax, [r12+8]
 * 000000014029DA27: mov     ecx, 1
 * 000000014029DA2C: mov     [rbp+2150h+var_1740], r12
 * 000000014029DA33: test    cl, al
 * 000000014029DA35: jnz     short loc_14029DA43
 * 000000014029DA37: mov     al, [rax+r14]
 * 000000014029DA3B: test    al, 20h
 * 000000014029DA3D: jz      loc_14029DB97
 * 000000014029DA43: mov     eax, [r13+10h]
 * 000000014029DA47: mov     ecx, [r13+8]
 * 000000014029DA4B: cmp     eax, ecx
 * 000000014029DA4D: mov     r15d, [r13+0Ch]
 * 000000014029DA51: mov     rdx, [rbp+2150h+var_20B8]
 * 000000014029DA58: cmova   ecx, eax
 * 000000014029DA5B: mov     rax, [rbx+400h]
 * 000000014029DA62: lea     r14d, [rcx+r15]
 * 000000014029DA66: mov     rcx, r12
 * 000000014029DA69: call    KeGuardDispatchICall
 * 000000014029DA6E: mov     rcx, rax
 * 000000014029DA71: cmp     [rax], r15d
 * 000000014029DA74: jb      short loc_14029DA7C
 * 000000014029DA76: cmp     [rax+4], r14d
 * 000000014029DA7A: jb      short loc_14029DAE5
 * 000000014029DA7C: mov     r10, [rbp+2150h+var_20B8]
 * 000000014029DA83: mov     eax, 80000000h
 * 000000014029DA88: mov     edx, ecx
 * 000000014029DA8A: sub     edx, r10d
 * 000000014029DA8D: or      edx, eax
 * 000000014029DA8F: xor     eax, eax
 * 000000014029DA91: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029DA9B: jz      loc_1402AC186
 * 000000014029DAA1: cmp     [rbx+750h], eax
 * 000000014029DAA7: jnz     short loc_14029DAEC
 * 000000014029DAA9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029DAB3: add     rax, rbx
 * 000000014029DAB6: mov     [rbx+758h], rax
 * 000000014029DABD: xor     eax, eax
 * 000000014029DABF: mov     [rbx+760h], rax
 * 000000014029DAC6: mov     eax, 1
 * 000000014029DACB: mov     qword ptr [rbx+768h], 10Fh
 * 000000014029DAD6: mov     [rbx+770h], r10
 * 000000014029DADD: mov     [rbx+750h], eax
 * 000000014029DAE3: jmp     short loc_14029DAEC
 * 000000014029DAE5: mov     r10, [rbp+2150h+var_20B8]
 * 000000014029DAEC: mov     r8d, [rcx]
 * 000000014029DAEF: mov     rdx, r10
 * 000000014029DAF2: mov     rax, [rbx+408h]
 * 000000014029DAF9: add     r8, r10
 * 000000014029DAFC: call    KeGuardDispatchICall
 * 000000014029DB01: mov     rdx, rax
 * 000000014029DB04: cmp     [rax], r15d
 * 000000014029DB07: jb      short loc_14029DB0F
 * 000000014029DB09: cmp     [rax+4], r14d
 * 000000014029DB0D: jb      short loc_14029DB83
 * 000000014029DB0F: mov     r14, [rbp+2150h+var_20B8]
 * 000000014029DB16: mov     eax, 80000000h
 * 000000014029DB1B: sub     edx, r14d
 * 000000014029DB1E: or      edx, eax
 * 000000014029DB20: xor     eax, eax
 * 000000014029DB22: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029DB2C: jz      loc_1402AC15D
 * 000000014029DB32: mov     edx, dword ptr [rbp+2150h+var_2070]
 * 000000014029DB38: mov     r9d, [rbp+2150h+var_20B0]
 * 000000014029DB3F: cmp     [rbx+750h], eax
 * 000000014029DB45: jnz     short loc_14029DB97
 * 000000014029DB47: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029DB51: add     rax, rbx
 * 000000014029DB54: mov     [rbx+758h], rax
 * 000000014029DB5B: xor     eax, eax
 * 000000014029DB5D: mov     [rbx+760h], rax
 * 000000014029DB64: mov     eax, 1
 * 000000014029DB69: mov     qword ptr [rbx+768h], 10Fh
 * 000000014029DB74: mov     [rbx+770h], r14
 * 000000014029DB7B: mov     [rbx+750h], eax
 * 000000014029DB81: jmp     short loc_14029DB97
 * 000000014029DB83: mov     edx, dword ptr [rbp+2150h+var_2070]
 * 000000014029DB89: mov     r9d, [rbp+2150h+var_20B0]
 * 000000014029DB90: mov     r14, [rbp+2150h+var_20B8]
 * 000000014029DB97: add     r12, 0Ch
 * 000000014029DB9B: cmp     r12, [rbp+2150h+var_20A8]
 * 000000014029DBA2: jnz     loc_14029D9F7
 * 000000014029DBA8: mov     r8d, [rbp+2150h+var_20F0]
 * 000000014029DBAC: mov     r10d, 1
 * 000000014029DBB2: mov     r11, [rbp+2150h+var_2148]
 * 000000014029DBB6: mov     r9d, [rbp+2150h+var_2128]
 * 000000014029DBBA: add     r8d, r10d
 * 000000014029DBBD: add     r13, 28h ; '('
 * 000000014029DBC1: mov     [rbp+2150h+var_20F0], r8d
 * 000000014029DBC5: cmp     r8d, r9d
 * 000000014029DBC8: jb      loc_14029D9B0
 * 000000014029DBCE: mov     r10, [rbp+2150h+var_20F8]
 * 000000014029DBD2: mov     r15, [rbp+2150h+var_2080]
 * 000000014029DBD9: movzx   r13d, word ptr [rbp+2150h+var_20D8]
 * 000000014029DBDE: cmp     r12, [rbp+2150h+var_20A8]
 * 000000014029DBE5: jz      loc_14029DCB4
 * 000000014029DBEB: xor     eax, eax
 * 000000014029DBED: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029DBF7: jnz     short loc_14029DC69
 * 000000014029DBF9: jmp     loc_1402AC0E1
 * 000000014029DBFE: xor     eax, eax
 * 000000014029DC00: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029DC0A: jz      loc_1402AC134
 * 000000014029DC10: cmp     [rbx+750h], eax
 * 000000014029DC16: jnz     loc_14029D959
 * 000000014029DC1C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029DC26: add     rax, rbx
 * 000000014029DC29: mov     [rbx+758h], rax
 * 000000014029DC30: xor     eax, eax
 * 000000014029DC32: mov     [rbx+760h], rax
 * 000000014029DC39: mov     qword ptr [rbx+768h], 10Fh
 * 000000014029DC44: mov     [rbx+770h], r14
 * 000000014029DC4B: mov     [rbx+750h], r10d
 * 000000014029DC52: jmp     loc_14029D959
 * 000000014029DC57: xor     eax, eax
 * 000000014029DC59: test    dword ptr [rbx+7D8h], 200000h
 * 000000014029DC63: jz      loc_1402AC1AF
 * 000000014029DC69: cmp     [rbx+750h], eax
 * 000000014029DC6F: jnz     loc_14029D959
 * 000000014029DC75: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029DC7F: add     rax, rbx
 * 000000014029DC82: mov     [rbx+758h], rax
 * 000000014029DC89: xor     eax, eax
 * 000000014029DC8B: mov     [rbx+760h], rax
 * 000000014029DC92: mov     eax, 1
 * 000000014029DC97: mov     qword ptr [rbx+768h], 10Fh
 * 000000014029DCA2: mov     [rbx+770h], r14
 * 000000014029DCA9: mov     [rbx+750h], eax
 * 000000014029DCAF: jmp     loc_14029D959
 * 000000014029DCB4: mov     r14d, [rbx+644h]
 * 000000014029DCBB: lea     ecx, [r10+6]
 * 000000014029DCBF: mov     r8d, [rbx+77Ch]
 * 000000014029DCC6: lea     eax, [r9+2]
 * 000000014029DCCA: lea     eax, [rax+rax*2]
 * 000000014029DCCD: mov     r12d, 0FFFFFFF8h
 * 000000014029DCD3: and     ecx, r12d
 * 000000014029DCD6: lea     eax, [rcx+rax*8]
 * 000000014029DCD9: add     eax, r14d
 * 000000014029DCDC: cmp     eax, [rbx+85Ch]
 * 000000014029DCE2: jbe     loc_14029DDED
 * 000000014029DCE8: mov     edx, eax
 * 000000014029DCEA: mov     rcx, rbx
 * 000000014029DCED: call    sub_1402AEFBC
 * 000000014029DCF2: mov     [rbp+2150h+var_2070], rax
 * 000000014029DCF9: mov     r11, rax
 * 000000014029DCFC: test    rax, rax
 * 000000014029DCFF: jz      loc_14029DDE0
 * 000000014029DD05: mov     edx, [rbx+7D8h]
 * 000000014029DD0B: test    dl, 4
 * 000000014029DD0E: jnz     loc_14029DDCE
 * 000000014029DD14: mov     ecx, [rbx+644h]
 * 000000014029DD1A: and     edx, 20000000h
 * 000000014029DD20: mov     r9, [rbx+628h]
 * 000000014029DD27: neg     edx
 * 000000014029DD29: mov     r10d, 1
 * 000000014029DD2F: sbb     r8d, r8d
 * 000000014029DD32: and     r8d, [rbx+77Ch]
 * 000000014029DD39: cmp     ecx, 8
 * 000000014029DD3C: jb      short loc_14029DD55
 * 000000014029DD3E: mov     eax, ecx
 * 000000014029DD40: shr     rax, 3
 * 000000014029DD44: xor     edx, edx
 * 000000014029DD46: mov     [rbx], rdx
 * 000000014029DD49: add     ecx, r12d
 * 000000014029DD4C: add     rbx, 8
 * 000000014029DD50: sub     rax, r10
 * 000000014029DD53: jnz     short loc_14029DD46
 * 000000014029DD55: xor     eax, eax
 * 000000014029DD57: test    ecx, ecx
 * 000000014029DD59: jz      short loc_14029DD65
 * 000000014029DD5B: mov     [rbx], al
 * 000000014029DD5D: add     rbx, r10
 * 000000014029DD60: add     ecx, 0FFFFFFFFh
 * 000000014029DD63: jnz     short loc_14029DD5B
 * 000000014029DD65: mov     ebx, [r11+77Ch]
 * 000000014029DD6C: mov     eax, 3
 * 000000014029DD71: mov     [r11+77Ch], r8d
 * 000000014029DD78: cmp     r8d, eax
 * 000000014029DD7B: jz      short loc_14029DDB1
 * 000000014029DD7D: test    dword ptr [r11+7D8h], 10000000h
 * 000000014029DD88: lea     ecx, [rax-3]
 * 000000014029DD8B: cmovz   ecx, r8d
 * 000000014029DD8F: test    ecx, ecx
 * 000000014029DD91: jz      short loc_14029DDA8
 * 000000014029DD93: mov     rax, [r11+218h]
 * 000000014029DD9A: lea     rcx, [r9-8]
 * 000000014029DD9E: mov     rdx, [rcx]
 * 000000014029DDA1: call    KeGuardDispatchICall
 * 000000014029DDA6: jmp     short loc_14029DDC0
 * 000000014029DDA8: mov     rax, [r11+0F0h]
 * 000000014029DDAF: jmp     short loc_14029DDB8
 * 000000014029DDB1: mov     rax, [r11+358h]
 * 000000014029DDB8: mov     rcx, r9
 * 000000014029DDBB: call    KeGuardDispatchICall
 * 000000014029DDC0: mov     r11, [rbp+2150h+var_2070]
 * 000000014029DDC7: mov     [r11+77Ch], ebx
 * 000000014029DDCE: and     dword ptr [r11+7D8h], 0FFFFFFFBh
 * 000000014029DDD6: mov     r9d, [rbp+2150h+var_2128]
 * 000000014029DDDA: mov     r10, [rbp+2150h+var_20F8]
 * 000000014029DDDE: jmp     short loc_14029DDFD
 * 000000014029DDE0: mov     ecx, 0C000009Ah
 * 000000014029DDE5: mov     r13, rbx
 * 000000014029DDE8: jmp     loc_14029E854
 * 000000014029DDED: mov     r11, rbx
 * 000000014029DDF0: mov     [rbp+2150h+var_2070], rbx
 * 000000014029DDF7: mov     [rbx+644h], eax
 * 000000014029DDFD: mov     r12d, 1
 * 000000014029DE03: lea     r8, [r11+r14]
 * 000000014029DE07: add     [r11+66Ch], r12d
 * 000000014029DE0E: mov     rax, r8
 * 000000014029DE11: mov     [rbp+2150h+var_1D20], r8
 * 000000014029DE18: xor     ebx, ebx
 * 000000014029DE1A: lea     ecx, [r12+2Fh]
 * 000000014029DE1F: lea     edx, [rcx-2Ah]
 * 000000014029DE22: mov     [rax], rbx
 * 000000014029DE25: add     ecx, 0FFFFFFF8h
 * 000000014029DE28: add     rax, 8
 * 000000014029DE2C: sub     rdx, r12
 * 000000014029DE2F: jnz     short loc_14029DE22
 * 000000014029DE31: test    ecx, ecx
 * 000000014029DE33: jz      short loc_14029DE3F
 * 000000014029DE35: mov     [rax], bl
 * 000000014029DE37: add     rax, r12
 * 000000014029DE3A: add     ecx, 0FFFFFFFFh
 * 000000014029DE3D: jnz     short loc_14029DE35
 * 000000014029DE3F: mov     rax, [rbp+2150h+var_2108]
 * 000000014029DE43: mov     dword ptr [r8], 1Eh
 * 000000014029DE4A: mov     [r8+8], rax
 * 000000014029DE4E: xor     eax, eax
 * 000000014029DE50: mov     [r8+10h], eax
 * 000000014029DE54: mov     rcx, [r11+678h]
 * 000000014029DE5B: mov     rax, rcx
 * 000000014029DE5E: jmp     short loc_14029DE62
 * 000000014029DE60: xor     ecx, eax
 * 000000014029DE62: shr     rax, 1Fh
 * 000000014029DE66: test    rax, rax
 * 000000014029DE69: jnz     short loc_14029DE60
 * 000000014029DE6B: btr     ecx, 1Fh
 * 000000014029DE6F: mov     r14d, 0FFFEh
 * 000000014029DE75: mov     [r8+14h], ecx
 * 000000014029DE79: mov     rbx, r11
 * 000000014029DE7C: mov     rax, [rbp+2150h+var_1D20]
 * 000000014029DE83: mov     r8, [rbp+2150h+var_20B8]
 * 000000014029DE8A: mov     [rbp+2150h+var_1F90], rax
 * 000000014029DE91: mov     [rbp+2150h+var_2040], rbx
 * 000000014029DE98: mov     [rax+18h], r8
 * 000000014029DE9C: mov     ecx, [r15+50h]
 * 000000014029DEA0: mov     rax, [rbp+2150h+var_1F90]
 * 000000014029DEA7: mov     [rax+20h], ecx
 * 000000014029DEAA: mov     rax, [rbp+2150h+var_1F90]
 * 000000014029DEB1: mov     ecx, dword ptr [rbp+2150h+var_20E0]
 * 000000014029DEB4: mov     [rax+24h], ecx
 * 000000014029DEB7: mov     rax, [rbp+2150h+var_1F90]
 * 000000014029DEBE: mov     [rax+28h], r13w
 * 000000014029DEC3: xor     eax, eax
 * 000000014029DEC5: cmp     dword ptr [rbp+2150h+var_2088], eax
 * 000000014029DECB: mov     ecx, eax
 * 000000014029DECD: mov     rdx, [rbp+2150h+var_1F90]
 * 000000014029DED4: setnz   cl
 * 000000014029DED7: movzx   eax, word ptr [rdx+2Ah]
 * 000000014029DEDB: and     ax, r14w
 * 000000014029DEDF: lea     r14d, [r10-1]
 * 000000014029DEE3: or      cx, ax
 * 000000014029DEE6: add     r14, 7
 * 000000014029DEEA: mov     [rdx+2Ah], cx
 * 000000014029DEEE: and     r14, 0FFFFFFFFFFFFFFF8h
 * 000000014029DEF2: mov     rcx, [rbp+2150h+var_1F90]
 * 000000014029DEF9: movzx   eax, word ptr [rcx+28h]
 * 000000014029DEFD: lea     rdx, [rcx+30h]
 * 000000014029DF01: add     r14, rdx
 * 000000014029DF04: mov     [rbp+2150h+var_2088], rdx
 * 000000014029DF0B: test    r10d, r10d
 * 000000014029DF0E: mov     [rbp+2150h+var_2130], r14
 * 000000014029DF12: mov     r10, [rbp+2150h+var_2108]
 * 000000014029DF16: lea     rcx, [rax+rax*2]
 * 000000014029DF1A: mov     eax, 0Ch
 * 000000014029DF1F: cmovz   rax, [rbp+2150h+var_2110]
 * 000000014029DF24: lea     r15, [r14+rcx*8]
 * 000000014029DF28: add     rax, r10
 * 000000014029DF2B: mov     [rbp+2150h+var_2080], r15
 * 000000014029DF32: mov     [rbp+2150h+var_20F8], rax
 * 000000014029DF36: xor     eax, eax
 * 000000014029DF38: test    r9d, r9d
 * 000000014029DF3B: jz      short loc_14029DF73
 * 000000014029DF3D: mov     edx, r9d
 * 000000014029DF40: lea     rax, [r14+8]
 * 000000014029DF44: xor     r9d, r9d
 * 000000014029DF47: mov     r13d, 80000000h
 * 000000014029DF4D: lea     esi, [r9+2]
 * 000000014029DF51: mov     rcx, rsi
 * 000000014029DF54: mov     [rax-8], r9d
 * 000000014029DF58: mov     [rax-4], r9d
 * 000000014029DF5C: mov     [rax], r13d
 * 000000014029DF5F: add     rax, 0Ch
 * 000000014029DF63: sub     rcx, r12
 * 000000014029DF66: jnz     short loc_14029DF54
 * 000000014029DF68: sub     rdx, r12
 * 000000014029DF6B: jnz     short loc_14029DF51
 * 000000014029DF6D: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029DF71: xor     eax, eax
 * 000000014029DF73: cmp     r14, r15
 * 000000014029DF76: jz      loc_14029E846
 * 000000014029DF7C: mov     r15, [rbp+2150h+var_2148]
 * 000000014029DF80: mov     r13, [rbp+2150h+var_20A8]
 * 000000014029DF87: jmp     short loc_14029DF8B
 * 000000014029DF89: xor     eax, eax
 * 000000014029DF8B: mov     r12d, eax
 * 000000014029DF8E: mov     eax, [r15+24h]
 * 000000014029DF92: bt      eax, 19h
 * 000000014029DF96: jb      loc_14029E1B6
 * 000000014029DF9C: mov     ecx, [r15]
 * 000000014029DF9F: cmp     ecx, 54494E49h
 * 000000014029DFA5: jnz     short loc_14029DFB5
 * 000000014029DFA7: cmp     dword ptr [r15+4], 4742444Bh
 * 000000014029DFAF: jz      loc_14029E1B6
 * 000000014029DFB5: cmp     ecx, 45474150h
 * 000000014029DFBB: jnz     short loc_14029DFEC
 * 000000014029DFBD: movzx   eax, word ptr [r15+4]
 * 000000014029DFC2: mov     edx, 7777h
 * 000000014029DFC7: cmp     ax, dx
 * 000000014029DFCA: jz      loc_14029E1B6
 * 000000014029DFD0: mov     edx, 7277h
 * 000000014029DFD5: cmp     ax, dx
 * 000000014029DFD8: jz      loc_14029E1B6
 * 000000014029DFDE: mov     edx, 7877h
 * 000000014029DFE3: cmp     ax, dx
 * 000000014029DFE6: jz      loc_14029E1B6
 * 000000014029DFEC: cmp     ecx, 41525245h
 * 000000014029DFF2: jnz     short loc_14029E004
 * 000000014029DFF4: mov     eax, 4154h
 * 000000014029DFF9: cmp     [r15+4], ax
 * 000000014029DFFE: jz      loc_14029E1B6
 * 000000014029E004: mov     rax, [rbp+2150h+var_2070]
 * 000000014029E00B: mov     r10d, 7
 * 000000014029E011: mov     r8, [r11+788h]
 * 000000014029E018: mov     r9, r15
 * 000000014029E01B: mov     r11, [r11+790h]
 * 000000014029E022: mov     rbx, [rax+798h]
 * 000000014029E029: mov     r14, [rax+7A0h]
 * 000000014029E030: movzx   edx, byte ptr [r9]
 * 000000014029E034: inc     r9
 * 000000014029E037: movzx   eax, byte ptr [r8]
 * 000000014029E03B: inc     r8
 * 000000014029E03E: cmp     rdx, rax
 * 000000014029E041: jnz     loc_14029E10A
 * 000000014029E047: add     r10d, 0FFFFFFFFh
 * 000000014029E04B: jnz     short loc_14029E030
 * 000000014029E04D: mov     r10d, 1
 * 000000014029E053: mov     r12d, r10d
 * 000000014029E056: mov     r10, [rbp+2150h+var_2108]
 * 000000014029E05A: mov     r9d, 1
 * 000000014029E060: mov     r14, [rbp+2150h+var_2130]
 * 000000014029E064: mov     r8, [rbp+2150h+var_20B8]
 * 000000014029E06B: mov     r11, [rbp+2150h+var_2070]
 * 000000014029E072: mov     ecx, [r15+24h]
 * 000000014029E076: xor     eax, eax
 * 000000014029E078: test    ecx, ecx
 * 000000014029E07A: cmovs   r12d, r9d
 * 000000014029E07E: mov     [rbp+2150h+var_20F0], r12d
 * 000000014029E082: test    r12d, r12d
 * 000000014029E085: jz      short loc_14029E0AD
 * 000000014029E087: cmp     dword ptr [r15], 54494E49h
 * 000000014029E08E: jnz     short loc_14029E0AD
 * 000000014029E090: cmp     dword ptr [r15+4], 4742444Bh
 * 000000014029E098: jnz     short loc_14029E0AD
 * 000000014029E09A: test    dword ptr [r11+7DCh], 2000h
 * 000000014029E0A5: cmovnz  r12d, eax
 * 000000014029E0A9: mov     [rbp+2150h+var_20F0], r12d
 * 000000014029E0AD: test    dword ptr [r11+7DCh], 4000h
 * 000000014029E0B8: jz      short loc_14029E0D9
 * 000000014029E0BA: bt      ecx, 1Dh
 * 000000014029E0BE: jnb     short loc_14029E0D9
 * 000000014029E0C0: cmp     r8, [r11+5A0h]
 * 000000014029E0C7: jz      short loc_14029E0D2
 * 000000014029E0C9: cmp     r8, [r11+5A8h]
 * 000000014029E0D0: jnz     short loc_14029E0D9
 * 000000014029E0D2: mov     r12d, r9d
 * 000000014029E0D5: mov     [rbp+2150h+var_20F0], r9d
 * 000000014029E0D9: mov     eax, [r15+10h]
 * 000000014029E0DD: mov     ecx, [r15+8]
 * 000000014029E0E1: cmp     eax, ecx
 * 000000014029E0E3: mov     ebx, [r15+0Ch]
 * 000000014029E0E7: cmova   ecx, eax
 * 000000014029E0EA: mov     [rbp+2150h+var_20B0], ebx
 * 000000014029E0F0: add     ecx, ebx
 * 000000014029E0F2: mov     [rbp+2150h+var_20D8], ecx
 * 000000014029E0F5: cmp     r10, r13
 * 000000014029E0F8: jz      loc_14029E1C4
 * 000000014029E0FE: mov     r13d, [r10]
 * 000000014029E101: mov     eax, [r10+4]
 * 000000014029E105: jmp     loc_14029E1C9
 * 000000014029E10A: mov     r8d, 8
 * 000000014029E110: mov     r9, r15
 * 000000014029E113: mov     rcx, [r9]
 * 000000014029E116: add     r9, 8
 * 000000014029E11A: mov     rax, [r11]
 * 000000014029E11D: add     r11, 8
 * 000000014029E121: cmp     rcx, rax
 * 000000014029E124: jnz     short loc_14029E15D
 * 000000014029E126: add     r8d, 0FFFFFFF8h
 * 000000014029E12A: cmp     r8d, 8
 * 000000014029E12E: jnb     short loc_14029E113
 * 000000014029E130: test    r8d, r8d
 * 000000014029E133: jz      loc_14029E04D
 * 000000014029E139: mov     r10d, 1
 * 000000014029E13F: movzx   edx, byte ptr [r9]
 * 000000014029E143: add     r9, r10
 * 000000014029E146: movzx   eax, byte ptr [r11]
 * 000000014029E14A: add     r11, r10
 * 000000014029E14D: cmp     rdx, rax
 * 000000014029E150: jnz     short loc_14029E163
 * 000000014029E152: add     r8d, 0FFFFFFFFh
 * 000000014029E156: jnz     short loc_14029E13F
 * 000000014029E158: jmp     loc_14029E053
 * 000000014029E15D: mov     r10d, 1
 * 000000014029E163: mov     r9d, 4
 * 000000014029E169: mov     r8, r15
 * 000000014029E16C: or      r11d, 0FFFFFFFFh
 * 000000014029E170: movzx   edx, byte ptr [r8]
 * 000000014029E174: add     r8, r10
 * 000000014029E177: movzx   eax, byte ptr [rbx]
 * 000000014029E17A: add     rbx, r10
 * 000000014029E17D: cmp     rdx, rax
 * 000000014029E180: jnz     short loc_14029E18C
 * 000000014029E182: add     r9d, r11d
 * 000000014029E185: jnz     short loc_14029E170
 * 000000014029E187: jmp     loc_14029E053
 * 000000014029E18C: mov     r9d, 6
 * 000000014029E192: mov     r8, r15
 * 000000014029E195: movzx   edx, byte ptr [r8]
 * 000000014029E199: add     r8, r10
 * 000000014029E19C: movzx   eax, byte ptr [r14]
 * 000000014029E1A0: add     r14, r10
 * 000000014029E1A3: cmp     rdx, rax
 * 000000014029E1A6: jnz     loc_14029E056
 * 000000014029E1AC: add     r9d, r11d
 * 000000014029E1AF: jnz     short loc_14029E195
 * 000000014029E1B1: jmp     loc_14029E053
 * 000000014029E1B6: mov     r9d, 1
 * 000000014029E1BC: mov     r12d, r9d
 * 000000014029E1BF: jmp     loc_14029E072
 * 000000014029E1C4: xor     eax, eax
 * 000000014029E1C6: mov     r13d, eax
 * 000000014029E1C9: mov     r15d, ebx
 * 000000014029E1CC: mov     [rbp+2150h+var_2128], eax
 * 000000014029E1CF: cmp     r10, [rbp+2150h+var_20A8]
 * 000000014029E1D6: jz      loc_14029E398
 * 000000014029E1DC: cmp     r13d, ebx
 * 000000014029E1DF: jbe     loc_14029E398
 * 000000014029E1E5: cmp     eax, ecx
 * 000000014029E1E7: ja      loc_14029E398
 * 000000014029E1ED: test    r12d, r12d
 * 000000014029E1F0: jnz     loc_14029E398
 * 000000014029E1F6: mov     [r14], ebx
 * 000000014029E1F9: lea     rdx, [rbp+2150h+var_1E80]
 * 000000014029E200: mov     [r14+4], r13d
 * 000000014029E204: mov     r9d, r13d
 * 000000014029E207: mov     eax, [r14]
 * 000000014029E20A: mov     r15d, r13d
 * 000000014029E20D: sub     r9d, eax
 * 000000014029E210: mov     r11d, r9d
 * 000000014029E213: lea     r14, [r8+rax]
 * 000000014029E217: add     r11, r14
 * 000000014029E21A: lea     r8, [rbp+2150h+var_1CE0]
 * 000000014029E221: xor     eax, eax
 * 000000014029E223: mov     r10d, eax
 * 000000014029E226: mov     rcx, [r8]
 * 000000014029E229: mov     eax, [rdx]
 * 000000014029E22B: add     rax, rcx
 * 000000014029E22E: cmp     r14, rax
 * 000000014029E231: jnb     short loc_14029E23C
 * 000000014029E233: cmp     r11, rcx
 * 000000014029E236: ja      loc_14029E384
 * 000000014029E23C: inc     r10d
 * 000000014029E23F: add     r8, 8
 * 000000014029E243: add     rdx, 4
 * 000000014029E247: cmp     r10d, 5
 * 000000014029E24B: jb      short loc_14029E226
 * 000000014029E24D: mov     rax, [rbp+2150h+var_2070]
 * 000000014029E254: mov     rbx, r14
 * 000000014029E257: add     [rax+688h], r9d
 * 000000014029E25E: mov     r15d, [rax+674h]
 * 000000014029E265: mov     r12, [rax+678h]
 * 000000014029E26C: mov     rax, r14
 * 000000014029E26F: cmp     r14, r11
 * 000000014029E272: jnb     short loc_14029E284
 * 000000014029E274: mov     ecx, 40h ; '@'
 * 000000014029E279: prefetchnta byte ptr [rax]
 * 000000014029E27C: add     rax, rcx
 * 000000014029E27F: cmp     rax, r11
 * 000000014029E282: jb      short loc_14029E279
 * 000000014029E284: mov     r10d, r9d
 * 000000014029E287: mov     r8, r12
 * 000000014029E28A: shr     r10d, 7
 * 000000014029E28E: mov     r11d, 1
 * 000000014029E294: test    r10d, r10d
 * 000000014029E297: jz      short loc_14029E300
 * 000000014029E299: mov     rdi, 7010008004002001h
 * 000000014029E2A3: mov     eax, 8
 * 000000014029E2A8: xor     r8, [rbx]
 * 000000014029E2AB: mov     ecx, r15d
 * 000000014029E2AE: rol     r8, cl
 * 000000014029E2B1: xor     r8, [rbx+8]
 * 000000014029E2B5: add     rbx, 10h
 * 000000014029E2B9: rol     r8, cl
 * 000000014029E2BC: sub     rax, r11
 * 000000014029E2BF: jnz     short loc_14029E2A8
 * 000000014029E2C1: mov     rcx, rbx
 * 000000014029E2C4: sub     rcx, r14
 * 000000014029E2C7: xor     rcx, r12
 * 000000014029E2CA: mov     rax, rcx
 * 000000014029E2CD: rol     rax, 11h
 * 000000014029E2D1: xor     rcx, rax
 * 000000014029E2D4: mov     rax, rdi
 * 000000014029E2D7: mul     rcx
 * 000000014029E2DA: xor     r15d, eax
 * 000000014029E2DD: mov     [rbp+2150h+var_1BC0], rdx
 * 000000014029E2E4: xor     r15d, edx
 * 000000014029E2E7: and     r15d, 3Fh
 * 000000014029E2EB: cmovz   r15d, r11d
 * 000000014029E2EF: add     r10d, 0FFFFFFFFh
 * 000000014029E2F3: jnz     short loc_14029E2A3
 * 000000014029E2F5: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029E2F9: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029E300: and     r9d, 7Fh
 * 000000014029E304: cmp     r9d, 8
 * 000000014029E308: jb      short loc_14029E327
 * 000000014029E30A: mov     eax, r9d
 * 000000014029E30D: shr     rax, 3
 * 000000014029E311: xor     r8, [rbx]
 * 000000014029E314: mov     ecx, r15d
 * 000000014029E317: rol     r8, cl
 * 000000014029E31A: add     rbx, 8
 * 000000014029E31E: add     r9d, 0FFFFFFF8h
 * 000000014029E322: sub     rax, r11
 * 000000014029E325: jnz     short loc_14029E311
 * 000000014029E327: test    r9d, r9d
 * 000000014029E32A: jz      short loc_14029E341
 * 000000014029E32C: movzx   eax, byte ptr [rbx]
 * 000000014029E32F: mov     ecx, r15d
 * 000000014029E332: xor     r8, rax
 * 000000014029E335: add     rbx, r11
 * 000000014029E338: rol     r8, cl
 * 000000014029E33B: add     r9d, 0FFFFFFFFh
 * 000000014029E33F: jnz     short loc_14029E32C
 * 000000014029E341: mov     rax, r8
 * 000000014029E344: shr     rax, 1Fh
 * 000000014029E348: xor     edx, edx
 * 000000014029E34A: jmp     short loc_14029E353
 * 000000014029E34C: xor     r8d, eax
 * 000000014029E34F: shr     rax, 1Fh
 * 000000014029E353: test    rax, rax
 * 000000014029E356: jnz     short loc_14029E34C
 * 000000014029E358: mov     rax, [rbp+2150h+var_2130]
 * 000000014029E35C: btr     r8d, 1Fh
 * 000000014029E361: mov     ecx, [rbp+2150h+var_20D8]
 * 000000014029E364: mov     r15d, r13d
 * 000000014029E367: mov     ebx, [rbp+2150h+var_20B0]
 * 000000014029E36D: mov     r9d, 1
 * 000000014029E373: mov     r11, [rbp+2150h+var_2070]
 * 000000014029E37A: mov     r10, [rbp+2150h+var_2108]
 * 000000014029E37E: mov     [rax+8], r8d
 * 000000014029E382: jmp     short loc_14029E39A
 * 000000014029E384: mov     ecx, [rbp+2150h+var_20D8]
 * 000000014029E387: mov     r9d, 1
 * 000000014029E38D: mov     r11, [rbp+2150h+var_2070]
 * 000000014029E394: mov     r10, [rbp+2150h+var_2108]
 * 000000014029E398: xor     edx, edx
 * 000000014029E39A: mov     r12, [rbp+2150h+var_20F8]
 * 000000014029E39E: cmp     r13d, ebx
 * 000000014029E3A1: mov     r13, [rbp+2150h+var_20A8]
 * 000000014029E3A8: jb      loc_14029E639
 * 000000014029E3AE: cmp     [rbp+2150h+var_2128], ecx
 * 000000014029E3B1: ja      loc_14029E639
 * 000000014029E3B7: cmp     r10, r13
 * 000000014029E3BA: jz      loc_14029E639
 * 000000014029E3C0: mov     r13d, [r12+4]
 * 000000014029E3C5: cmp     r13d, ecx
 * 000000014029E3C8: ja      loc_14029E632
 * 000000014029E3CE: mov     rax, [rbp+2150h+var_2088]
 * 000000014029E3D5: mov     r8d, 0Ch
 * 000000014029E3DB: cmp     r12, [rbp+2150h+var_20A8]
 * 000000014029E3E2: jz      loc_14029E632
 * 000000014029E3E8: cmp     [rbp+2150h+var_20F0], edx
 * 000000014029E3EB: jz      short loc_14029E3F5
 * 000000014029E3ED: mov     byte ptr [rax], 80h
 * 000000014029E3F0: jmp     loc_14029E5FC
 * 000000014029E3F5: mov     r15d, [r12]
 * 000000014029E3F9: mov     ecx, [r10+4]
 * 000000014029E3FD: mov     dword ptr [rbp+2150h+var_20E0], r15d
 * 000000014029E401: cmp     r15d, ecx
 * 000000014029E404: jnb     short loc_14029E45F
 * 000000014029E406: test    dword ptr [r11+7D8h], 200000h
 * 000000014029E411: jz      loc_1402AC1DA
 * 000000014029E417: xor     eax, eax
 * 000000014029E419: cmp     [r11+750h], eax
 * 000000014029E420: jnz     short loc_14029E45F
 * 000000014029E422: mov     r14, [rbp+2150h+var_20B8]
 * 000000014029E429: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029E433: add     rax, r11
 * 000000014029E436: mov     [r11+758h], rax
 * 000000014029E43D: xor     eax, eax
 * 000000014029E43F: mov     [r11+760h], rax
 * 000000014029E446: mov     qword ptr [r11+768h], 10Fh
 * 000000014029E451: mov     [r11+770h], r14
 * 000000014029E458: mov     [r11+750h], r9d
 * 000000014029E45F: mov     r9d, r15d
 * 000000014029E462: lea     rdx, [rbp+2150h+var_1E80]
 * 000000014029E469: sub     r9d, ecx
 * 000000014029E46C: lea     r8, [rbp+2150h+var_1CE0]
 * 000000014029E473: mov     r14, rcx
 * 000000014029E476: mov     ebx, r9d
 * 000000014029E479: add     r14, [rbp+2150h+var_20B8]
 * 000000014029E480: add     rbx, r14
 * 000000014029E483: xor     eax, eax
 * 000000014029E485: mov     r10d, eax
 * 000000014029E488: mov     rcx, [r8]
 * 000000014029E48B: mov     eax, [rdx]
 * 000000014029E48D: add     rax, rcx
 * 000000014029E490: cmp     r14, rax
 * 000000014029E493: jnb     short loc_14029E49E
 * 000000014029E495: cmp     rbx, rcx
 * 000000014029E498: ja      loc_14029E5D8
 * 000000014029E49E: mov     eax, 4
 * 000000014029E4A3: inc     r10d
 * 000000014029E4A6: add     rdx, rax
 * 000000014029E4A9: add     r8, 8
 * 000000014029E4AD: cmp     r10d, 5
 * 000000014029E4B1: jb      short loc_14029E488
 * 000000014029E4B3: cmp     r9d, eax
 * 000000014029E4B6: jb      loc_14029E5D8
 * 000000014029E4BC: add     [r11+688h], r9d
 * 000000014029E4C3: mov     rax, r14
 * 000000014029E4C6: mov     r15d, [r11+674h]
 * 000000014029E4CD: mov     r12, [r11+678h]
 * 000000014029E4D4: mov     r11, r14
 * 000000014029E4D7: cmp     r14, rbx
 * 000000014029E4DA: jnb     short loc_14029E4EC
 * 000000014029E4DC: mov     ecx, 40h ; '@'
 * 000000014029E4E1: prefetchnta byte ptr [rax]
 * 000000014029E4E4: add     rax, rcx
 * 000000014029E4E7: cmp     rax, rbx
 * 000000014029E4EA: jb      short loc_14029E4E1
 * 000000014029E4EC: mov     r10d, r9d
 * 000000014029E4EF: mov     r8, r12
 * 000000014029E4F2: shr     r10d, 7
 * 000000014029E4F6: mov     ebx, 1
 * 000000014029E4FB: test    r10d, r10d
 * 000000014029E4FE: jz      short loc_14029E567
 * 000000014029E500: mov     rdi, 7010008004002001h
 * 000000014029E50A: mov     eax, 8
 * 000000014029E50F: xor     r8, [r11]
 * 000000014029E512: mov     ecx, r15d
 * 000000014029E515: rol     r8, cl
 * 000000014029E518: xor     r8, [r11+8]
 * 000000014029E51C: add     r11, 10h
 * 000000014029E520: rol     r8, cl
 * 000000014029E523: sub     rax, rbx
 * 000000014029E526: jnz     short loc_14029E50F
 * 000000014029E528: mov     rcx, r11
 * 000000014029E52B: sub     rcx, r14
 * 000000014029E52E: xor     rcx, r12
 * 000000014029E531: mov     rax, rcx
 * 000000014029E534: rol     rax, 11h
 * 000000014029E538: xor     rcx, rax
 * 000000014029E53B: mov     rax, rdi
 * 000000014029E53E: mul     rcx
 * 000000014029E541: xor     r15d, eax
 * 000000014029E544: mov     [rbp+2150h+var_1BB8], rdx
 * 000000014029E54B: xor     r15d, edx
 * 000000014029E54E: and     r15d, 3Fh
 * 000000014029E552: cmovz   r15d, ebx
 * 000000014029E556: add     r10d, 0FFFFFFFFh
 * 000000014029E55A: jnz     short loc_14029E50A
 * 000000014029E55C: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029E560: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029E567: and     r9d, 7Fh
 * 000000014029E56B: cmp     r9d, 8
 * 000000014029E56F: jb      short loc_14029E58E
 * 000000014029E571: mov     eax, r9d
 * 000000014029E574: shr     rax, 3
 * 000000014029E578: xor     r8, [r11]
 * 000000014029E57B: mov     ecx, r15d
 * 000000014029E57E: rol     r8, cl
 * 000000014029E581: add     r11, 8
 * 000000014029E585: add     r9d, 0FFFFFFF8h
 * 000000014029E589: sub     rax, rbx
 * 000000014029E58C: jnz     short loc_14029E578
 * 000000014029E58E: test    r9d, r9d
 * 000000014029E591: jz      short loc_14029E5A9
 * 000000014029E593: movzx   eax, byte ptr [r11]
 * 000000014029E597: mov     ecx, r15d
 * 000000014029E59A: xor     r8, rax
 * 000000014029E59D: add     r11, rbx
 * 000000014029E5A0: rol     r8, cl
 * 000000014029E5A3: add     r9d, 0FFFFFFFFh
 * 000000014029E5A7: jnz     short loc_14029E593
 * 000000014029E5A9: mov     rax, r8
 * 000000014029E5AC: shr     rax, 7
 * 000000014029E5B0: xor     edx, edx
 * 000000014029E5B2: jmp     short loc_14029E5BB
 * 000000014029E5B4: xor     r8b, al
 * 000000014029E5B7: shr     rax, 7
 * 000000014029E5BB: test    rax, rax
 * 000000014029E5BE: jnz     short loc_14029E5B4
 * 000000014029E5C0: mov     rcx, [rbp+2150h+var_2088]
 * 000000014029E5C7: and     r8b, 7Fh
 * 000000014029E5CB: mov     r15d, dword ptr [rbp+2150h+var_20E0]
 * 000000014029E5CF: mov     r12, [rbp+2150h+var_20F8]
 * 000000014029E5D3: mov     [rcx], r8b
 * 000000014029E5D6: jmp     short loc_14029E5E4
 * 000000014029E5D8: mov     rcx, [rbp+2150h+var_2088]
 * 000000014029E5DF: xor     edx, edx
 * 000000014029E5E1: mov     byte ptr [rcx], 80h
 * 000000014029E5E4: mov     ecx, [rbp+2150h+var_20D8]
 * 000000014029E5E7: mov     r9d, 1
 * 000000014029E5ED: mov     rax, [rbp+2150h+var_2088]
 * 000000014029E5F4: mov     r10, [rbp+2150h+var_2108]
 * 000000014029E5F8: lea     r8d, [r9+0Bh]
 * 000000014029E5FC: add     r10, r8
 * 000000014029E5FF: add     rax, r9
 * 000000014029E602: add     r12, r8
 * 000000014029E605: mov     [rbp+2150h+var_2108], r10
 * 000000014029E609: mov     [rbp+2150h+var_2088], rax
 * 000000014029E610: mov     [rbp+2150h+var_20F8], r12
 * 000000014029E614: cmp     r12, [rbp+2150h+var_20A8]
 * 000000014029E61B: jz      short loc_14029E622
 * 000000014029E61D: mov     r13d, [r12+4]
 * 000000014029E622: mov     r11, [rbp+2150h+var_2070]
 * 000000014029E629: cmp     r13d, ecx
 * 000000014029E62C: jbe     loc_14029E3DB
 * 000000014029E632: mov     r13, [rbp+2150h+var_20A8]
 * 000000014029E639: mov     r14, [rbp+2150h+var_2130]
 * 000000014029E63D: xor     eax, eax
 * 000000014029E63F: cmp     [rbp+2150h+var_20F0], eax
 * 000000014029E642: jnz     loc_14029E7C4
 * 000000014029E648: cmp     r15d, ecx
 * 000000014029E64B: jz      loc_14029E7C4
 * 000000014029E651: mov     [r14+0Ch], r15d
 * 000000014029E655: lea     rdx, [rbp+2150h+var_1E80]
 * 000000014029E65C: mov     [r14+10h], ecx
 * 000000014029E660: lea     r8, [rbp+2150h+var_1CE0]
 * 000000014029E667: mov     eax, [r14+0Ch]
 * 000000014029E66B: mov     r9d, ecx
 * 000000014029E66E: mov     ebx, eax
 * 000000014029E670: sub     r9d, eax
 * 000000014029E673: add     rbx, [rbp+2150h+var_20B8]
 * 000000014029E67A: mov     r11d, r9d
 * 000000014029E67D: add     r11, rbx
 * 000000014029E680: xor     eax, eax
 * 000000014029E682: mov     r10d, eax
 * 000000014029E685: mov     rcx, [r8]
 * 000000014029E688: mov     eax, [rdx]
 * 000000014029E68A: add     rax, rcx
 * 000000014029E68D: cmp     rbx, rax
 * 000000014029E690: jnb     short loc_14029E69B
 * 000000014029E692: cmp     r11, rcx
 * 000000014029E695: ja      loc_14029E7C0
 * 000000014029E69B: inc     r10d
 * 000000014029E69E: add     r8, 8
 * 000000014029E6A2: add     rdx, 4
 * 000000014029E6A6: cmp     r10d, 5
 * 000000014029E6AA: jb      short loc_14029E685
 * 000000014029E6AC: mov     rax, [rbp+2150h+var_2070]
 * 000000014029E6B3: mov     r10, rbx
 * 000000014029E6B6: add     [rax+688h], r9d
 * 000000014029E6BD: mov     r14d, [rax+674h]
 * 000000014029E6C4: mov     r15, [rax+678h]
 * 000000014029E6CB: mov     rax, rbx
 * 000000014029E6CE: cmp     rbx, r11
 * 000000014029E6D1: jnb     short loc_14029E6E3
 * 000000014029E6D3: mov     ecx, 40h ; '@'
 * 000000014029E6D8: prefetchnta byte ptr [rax]
 * 000000014029E6DB: add     rax, rcx
 * 000000014029E6DE: cmp     rax, r11
 * 000000014029E6E1: jb      short loc_14029E6D8
 * 000000014029E6E3: mov     r11d, r9d
 * 000000014029E6E6: mov     r8, r15
 * 000000014029E6E9: shr     r11d, 7
 * 000000014029E6ED: mov     edx, 1
 * 000000014029E6F2: test    r11d, r11d
 * 000000014029E6F5: jz      short loc_14029E760
 * 000000014029E6F7: mov     r12, 7010008004002001h
 * 000000014029E701: mov     eax, 8
 * 000000014029E706: xor     r8, [r10]
 * 000000014029E709: mov     ecx, r14d
 * 000000014029E70C: rol     r8, cl
 * 000000014029E70F: xor     r8, [r10+8]
 * 000000014029E713: add     r10, 10h
 * 000000014029E717: rol     r8, cl
 * 000000014029E71A: sub     rax, rdx
 * 000000014029E71D: jnz     short loc_14029E706
 * 000000014029E71F: mov     rcx, r10
 * 000000014029E722: sub     rcx, rbx
 * 000000014029E725: xor     rcx, r15
 * 000000014029E728: mov     rax, rcx
 * 000000014029E72B: rol     rax, 11h
 * 000000014029E72F: xor     rcx, rax
 * 000000014029E732: mov     rax, r12
 * 000000014029E735: mul     rcx
 * 000000014029E738: xor     r14d, eax
 * 000000014029E73B: mov     [rbp+2150h+var_1BB0], rdx
 * 000000014029E742: xor     r14d, edx
 * 000000014029E745: mov     edx, 1
 * 000000014029E74A: and     r14d, 3Fh
 * 000000014029E74E: cmovz   r14d, edx
 * 000000014029E752: add     r11d, 0FFFFFFFFh
 * 000000014029E756: jnz     short loc_14029E701
 * 000000014029E758: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029E75C: mov     r12, [rbp+2150h+var_20F8]
 * 000000014029E760: and     r9d, 7Fh
 * 000000014029E764: cmp     r9d, 8
 * 000000014029E768: jb      short loc_14029E787
 * 000000014029E76A: mov     eax, r9d
 * 000000014029E76D: shr     rax, 3
 * 000000014029E771: xor     r8, [r10]
 * 000000014029E774: mov     ecx, r14d
 * 000000014029E777: rol     r8, cl
 * 000000014029E77A: add     r10, 8
 * 000000014029E77E: add     r9d, 0FFFFFFF8h
 * 000000014029E782: sub     rax, rdx
 * 000000014029E785: jnz     short loc_14029E771
 * 000000014029E787: test    r9d, r9d
 * 000000014029E78A: jz      short loc_14029E7A2
 * 000000014029E78C: movzx   eax, byte ptr [r10]
 * 000000014029E790: mov     ecx, r14d
 * 000000014029E793: xor     r8, rax
 * 000000014029E796: add     r10, rdx
 * 000000014029E799: rol     r8, cl
 * 000000014029E79C: add     r9d, 0FFFFFFFFh
 * 000000014029E7A0: jnz     short loc_14029E78C
 * 000000014029E7A2: mov     rax, r8
 * 000000014029E7A5: jmp     short loc_14029E7AA
 * 000000014029E7A7: xor     r8d, eax
 * 000000014029E7AA: shr     rax, 1Fh
 * 000000014029E7AE: test    rax, rax
 * 000000014029E7B1: jnz     short loc_14029E7A7
 * 000000014029E7B3: mov     r14, [rbp+2150h+var_2130]
 * 000000014029E7B7: btr     r8d, 1Fh
 * 000000014029E7BC: mov     [r14+14h], r8d
 * 000000014029E7C0: mov     r10, [rbp+2150h+var_2108]
 * 000000014029E7C4: cmp     r10, r13
 * 000000014029E7C7: jz      short loc_14029E810
 * 000000014029E7C9: mov     eax, [r10]
 * 000000014029E7CC: mov     ecx, [r10+4]
 * 000000014029E7D0: cmp     eax, [rbp+2150h+var_20B0]
 * 000000014029E7D6: jb      short loc_14029E810
 * 000000014029E7D8: cmp     ecx, [rbp+2150h+var_20D8]
 * 000000014029E7DB: ja      short loc_14029E810
 * 000000014029E7DD: cmp     r12, r13
 * 000000014029E7E0: jz      short loc_14029E804
 * 000000014029E7E2: mov     rax, [rbp+2150h+var_2088]
 * 000000014029E7E9: mov     byte ptr [rax], 80h
 * 000000014029E7EC: inc     rax
 * 000000014029E7EF: mov     [rbp+2150h+var_2088], rax
 * 000000014029E7F6: mov     eax, 0Ch
 * 000000014029E7FB: add     r12, rax
 * 000000014029E7FE: mov     [rbp+2150h+var_20F8], r12
 * 000000014029E802: jmp     short loc_14029E809
 * 000000014029E804: mov     eax, 0Ch
 * 000000014029E809: add     r10, rax
 * 000000014029E80C: mov     [rbp+2150h+var_2108], r10
 * 000000014029E810: mov     r15, [rbp+2150h+var_2148]
 * 000000014029E814: add     r14, 18h
 * 000000014029E818: mov     r11, [rbp+2150h+var_2070]
 * 000000014029E81F: add     r15, 28h ; '('
 * 000000014029E823: mov     r8, [rbp+2150h+var_20B8]
 * 000000014029E82A: mov     [rbp+2150h+var_2130], r14
 * 000000014029E82E: mov     [rbp+2150h+var_2148], r15
 * 000000014029E832: cmp     r14, [rbp+2150h+var_2080]
 * 000000014029E839: jnz     loc_14029DF89
 * 000000014029E83F: mov     rbx, [rbp+2150h+var_2040]
 * 000000014029E846: mov     r13, rbx
 * 000000014029E849: mov     [rbp+2150h+var_1FF0], rbx
 * 000000014029E850: xor     eax, eax
 * 000000014029E852: mov     ecx, eax
 * 000000014029E854: mov     r12d, [rbp+2150h+var_2140]
 * 000000014029E858: mov     rbx, [rbp+2150h+var_20C8]
 * 000000014029E85F: mov     rdx, [rbp+2150h+var_2138]
 * 000000014029E863: mov     r8d, 80000000h
 * 000000014029E869: mov     rax, r13
 * 000000014029E86C: mov     [rbp+2150h+var_2120], r13
 * 000000014029E870: sub     rax, rsi
 * 000000014029E873: mov     rsi, r13
 * 000000014029E876: add     rdx, rax
 * 000000014029E879: lea     eax, [rcx+r8]
 * 000000014029E87D: mov     [rbp+2150h+var_2138], rdx
 * 000000014029E881: test    r8d, eax
 * 000000014029E884: jnz     short loc_14029E88E
 * 000000014029E886: cmp     ecx, 0C000010Eh
 * 000000014029E88C: jnz     short loc_14029E892
 * 000000014029E88E: mov     [rdx+28h], rbx
 * 000000014029E892: mov     r13d, 1
 * 000000014029E898: jmp     loc_14029ECB4
 * 000000014029E89D: mov     rbx, r12
 * 000000014029E8A0: mov     [rbp+2150h+var_2140], eax
 * 000000014029E8A3: mov     r12d, eax
 * 000000014029E8A6: mov     r15d, eax
 * 000000014029E8A9: mov     r13, rax
 * 000000014029E8AC: jmp     short loc_14029E8B0
 * 000000014029E8AE: xor     eax, eax
 * 000000014029E8B0: mov     [rbp+2150h+var_1F88], eax
 * 000000014029E8B6: mov     rax, [rsi+2E8h]
 * 000000014029E8BD: lea     r8, [rbp+2150h+var_1EA8]
 * 000000014029E8C4: lea     rdx, [rbp+2150h+var_1F88]
 * 000000014029E8CB: mov     ecx, r12d
 * 000000014029E8CE: call    KeGuardDispatchICall
 * 000000014029E8D3: test    eax, eax
 * 000000014029E8D5: jz      loc_14029EA0A
 * 000000014029E8DB: mov     rax, [rsi+2C8h]
 * 000000014029E8E2: mov     rcx, [rbp+2150h+var_1EA8]
 * 000000014029E8E9: call    KeGuardDispatchICall
 * 000000014029E8EE: mov     r14, rax
 * 000000014029E8F1: test    rax, rax
 * 000000014029E8F4: jz      short loc_14029E8B6
 * 000000014029E8F6: mov     rax, [rsi+2D0h]
 * 000000014029E8FD: mov     edi, 1
 * 000000014029E902: add     r15d, edi
 * 000000014029E905: mov     rcx, r14
 * 000000014029E908: mov     [rbp+2150h+var_2140], r15d
 * 000000014029E90C: call    KeGuardDispatchICall
 * 000000014029E911: mov     r15, rax
 * 000000014029E914: lea     rdx, [rbp+2150h+var_1BA8]
 * 000000014029E91B: mov     rax, [rsi+1F8h]
 * 000000014029E922: mov     rcx, r15
 * 000000014029E925: call    KeGuardDispatchICall
 * 000000014029E92A: test    rax, rax
 * 000000014029E92D: jz      short loc_14029E94E
 * 000000014029E92F: mov     rax, [rsi+2D8h]
 * 000000014029E936: mov     rdx, r14
 * 000000014029E939: mov     rcx, [rbp+2150h+var_1EA8]
 * 000000014029E940: call    KeGuardDispatchICall
 * 000000014029E945: mov     r15d, [rbp+2150h+var_2140]
 * 000000014029E949: jmp     loc_14029E8B6
 * 000000014029E94E: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029E958: jz      short loc_14029E99A
 * 000000014029E95A: mov     rcx, [rsi+8B0h]
 * 000000014029E961: mov     edx, 30h ; '0'
 * 000000014029E966: lea     r8d, [rdx-2Ah]
 * 000000014029E96A: mov     rax, [rbx]
 * 000000014029E96D: add     edx, 0FFFFFFF8h
 * 000000014029E970: mov     [rcx], rax
 * 000000014029E973: add     rbx, 8
 * 000000014029E977: add     rcx, 8
 * 000000014029E97B: sub     r8, rdi
 * 000000014029E97E: jnz     short loc_14029E96A
 * 000000014029E980: test    edx, edx
 * 000000014029E982: jz      short loc_14029E993
 * 000000014029E984: mov     al, [rbx]
 * 000000014029E986: add     rbx, rdi
 * 000000014029E989: mov     [rcx], al
 * 000000014029E98B: add     rcx, rdi
 * 000000014029E98E: add     edx, 0FFFFFFFFh
 * 000000014029E991: jnz     short loc_14029E984
 * 000000014029E993: mov     rbx, [rsi+8B0h]
 * 000000014029E99A: mov     [rbx+18h], r15
 * 000000014029E99E: mov     rax, [rsi+548h]
 * 000000014029E9A5: mov     [rax], rbx
 * 000000014029E9A8: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029E9AF: mov     rax, [rsi+548h]
 * 000000014029E9B6: mov     [rax+8], r15
 * 000000014029E9BA: mov     dword ptr [rax+14h], 1000h
 * 000000014029E9C1: xor     eax, eax
 * 000000014029E9C3: cmp     [rsi+750h], eax
 * 000000014029E9C9: jnz     short loc_14029EA0A
 * 000000014029E9CB: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029E9D5: add     rax, rsi
 * 000000014029E9D8: mov     [rsi+758h], rax
 * 000000014029E9DF: mov     rax, 0B3B74BDEE4453415h
 * 000000014029E9E9: add     rax, rbx
 * 000000014029E9EC: mov     [rsi+760h], rax
 * 000000014029E9F3: movsxd  rax, dword ptr [rbx]
 * 000000014029E9F6: mov     [rsi+768h], rax
 * 000000014029E9FD: mov     [rsi+770h], r13
 * 000000014029EA04: mov     [rsi+750h], edi
 * 000000014029EA0A: mov     r15d, [rbp+2150h+var_2140]
 * 000000014029EA0E: mov     eax, 1
 * 000000014029EA13: add     r12d, eax
 * 000000014029EA16: add     r13, rax
 * 000000014029EA19: mov     eax, 3
 * 000000014029EA1E: cmp     r12d, eax
 * 000000014029EA21: jb      loc_14029E8AE
 * 000000014029EA27: mov     r12d, r15d
 * 000000014029EA2A: lea     r13d, [rax-2]
 * 000000014029EA2E: jmp     loc_14029ECAD
 * 000000014029EA33: mov     rbx, r12
 * 000000014029EA36: mov     [rbp+2150h+var_1E20], rax
 * 000000014029EA3D: mov     r12d, eax
 * 000000014029EA40: mov     r15, cr8
 * 000000014029EA44: mov     [rbp+2150h+var_2110], r15
 * 000000014029EA48: mov     cr8, r8
 * 000000014029EA4C: mov     rax, [rsi+2F8h]
 * 000000014029EA53: lea     rcx, [rbp+2150h+var_1E20]
 * 000000014029EA5A: call    KeGuardDispatchICall
 * 000000014029EA5F: mov     r14, rax
 * 000000014029EA62: test    rax, rax
 * 000000014029EA65: jz      loc_14029EB76
 * 000000014029EA6B: mov     rax, [rsi+1F8h]
 * 000000014029EA72: lea     rdx, [rbp+2150h+var_1BA0]
 * 000000014029EA79: mov     rcx, r14
 * 000000014029EA7C: add     r12d, r13d
 * 000000014029EA7F: call    KeGuardDispatchICall
 * 000000014029EA84: test    rax, rax
 * 000000014029EA87: jnz     loc_14029EB4C
 * 000000014029EA8D: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029EA97: jz      short loc_14029EAD7
 * 000000014029EA99: mov     rcx, [rsi+8B0h]
 * 000000014029EAA0: lea     edx, [rax+30h]
 * 000000014029EAA3: lea     r8d, [rax+6]
 * 000000014029EAA7: mov     rax, [rbx]
 * 000000014029EAAA: add     edx, 0FFFFFFF8h
 * 000000014029EAAD: mov     [rcx], rax
 * 000000014029EAB0: add     rbx, 8
 * 000000014029EAB4: add     rcx, 8
 * 000000014029EAB8: sub     r8, r13
 * 000000014029EABB: jnz     short loc_14029EAA7
 * 000000014029EABD: test    edx, edx
 * 000000014029EABF: jz      short loc_14029EAD0
 * 000000014029EAC1: mov     al, [rbx]
 * 000000014029EAC3: add     rbx, r13
 * 000000014029EAC6: mov     [rcx], al
 * 000000014029EAC8: add     rcx, r13
 * 000000014029EACB: add     edx, 0FFFFFFFFh
 * 000000014029EACE: jnz     short loc_14029EAC1
 * 000000014029EAD0: mov     rbx, [rsi+8B0h]
 * 000000014029EAD7: mov     [rbx+18h], r14
 * 000000014029EADB: mov     rax, [rsi+548h]
 * 000000014029EAE2: mov     [rax], rbx
 * 000000014029EAE5: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029EAEC: mov     rax, [rsi+548h]
 * 000000014029EAF3: mov     [rax+8], r14
 * 000000014029EAF7: mov     dword ptr [rax+14h], 1000h
 * 000000014029EAFE: xor     eax, eax
 * 000000014029EB00: cmp     [rsi+750h], eax
 * 000000014029EB06: jnz     short loc_14029EB4C
 * 000000014029EB08: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029EB12: add     rax, rsi
 * 000000014029EB15: mov     [rsi+758h], rax
 * 000000014029EB1C: mov     rax, 0B3B74BDEE4453415h
 * 000000014029EB26: add     rax, rbx
 * 000000014029EB29: mov     [rsi+760h], rax
 * 000000014029EB30: movsxd  rax, dword ptr [rbx]
 * 000000014029EB33: mov     [rsi+768h], rax
 * 000000014029EB3A: mov     qword ptr [rsi+770h], 4
 * 000000014029EB45: mov     [rsi+750h], r13d
 * 000000014029EB4C: mov     rax, [rsi+2F8h]
 * 000000014029EB53: lea     rcx, [rbp+2150h+var_1E20]
 * 000000014029EB5A: call    KeGuardDispatchICall
 * 000000014029EB5F: mov     r14, rax
 * 000000014029EB62: test    rax, rax
 * 000000014029EB65: jnz     loc_14029EA6B
 * 000000014029EB6B: mov     r15, [rbp+2150h+var_2110]
 * 000000014029EB6F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029EB76: movzx   eax, r15b
 * 000000014029EB7A: mov     cr8, rax
 * 000000014029EB7E: jmp     loc_14029ECB4
 * 000000014029EB83: mov     [rbp+2150h+var_1E18], rax
 * 000000014029EB8A: lea     rcx, [rbp+2150h+var_1E18]
 * 000000014029EB91: mov     rbx, r12
 * 000000014029EB94: mov     r12d, eax
 * 000000014029EB97: mov     rax, [rsi+2F0h]
 * 000000014029EB9E: call    KeGuardDispatchICall
 * 000000014029EBA3: mov     r14, rax
 * 000000014029EBA6: test    rax, rax
 * 000000014029EBA9: jz      loc_14029ECB4
 * 000000014029EBAF: mov     rax, [rsi+1F8h]
 * 000000014029EBB6: lea     rdx, [rbp+2150h+var_1B98]
 * 000000014029EBBD: mov     rcx, r14
 * 000000014029EBC0: add     r12d, r13d
 * 000000014029EBC3: call    KeGuardDispatchICall
 * 000000014029EBC8: test    rax, rax
 * 000000014029EBCB: jnz     loc_14029EC8E
 * 000000014029EBD1: test    [rsi+7D8h], r15d
 * 000000014029EBD8: jz      short loc_14029EC18
 * 000000014029EBDA: mov     rcx, [rsi+8B0h]
 * 000000014029EBE1: lea     edx, [rax+30h]
 * 000000014029EBE4: lea     r8d, [rax+6]
 * 000000014029EBE8: mov     rax, [rbx]
 * 000000014029EBEB: add     edx, 0FFFFFFF8h
 * 000000014029EBEE: mov     [rcx], rax
 * 000000014029EBF1: add     rbx, 8
 * 000000014029EBF5: add     rcx, 8
 * 000000014029EBF9: sub     r8, r13
 * 000000014029EBFC: jnz     short loc_14029EBE8
 * 000000014029EBFE: test    edx, edx
 * 000000014029EC00: jz      short loc_14029EC11
 * 000000014029EC02: mov     al, [rbx]
 * 000000014029EC04: add     rbx, r13
 * 000000014029EC07: mov     [rcx], al
 * 000000014029EC09: add     rcx, r13
 * 000000014029EC0C: add     edx, 0FFFFFFFFh
 * 000000014029EC0F: jnz     short loc_14029EC02
 * 000000014029EC11: mov     rbx, [rsi+8B0h]
 * 000000014029EC18: mov     [rbx+18h], r14
 * 000000014029EC1C: mov     rax, [rsi+548h]
 * 000000014029EC23: mov     [rax], rbx
 * 000000014029EC26: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014029EC2D: mov     rax, [rsi+548h]
 * 000000014029EC34: mov     [rax+8], r14
 * 000000014029EC38: mov     dword ptr [rax+14h], 1000h
 * 000000014029EC3F: xor     eax, eax
 * 000000014029EC41: cmp     [rsi+750h], eax
 * 000000014029EC47: jnz     short loc_14029EC8E
 * 000000014029EC49: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029EC53: add     rax, rsi
 * 000000014029EC56: mov     [rsi+758h], rax
 * 000000014029EC5D: mov     rax, 0B3B74BDEE4453415h
 * 000000014029EC67: add     rax, rbx
 * 000000014029EC6A: mov     [rsi+760h], rax
 * 000000014029EC71: movsxd  rax, dword ptr [rbx]
 * 000000014029EC74: mov     [rsi+768h], rax
 * 000000014029EC7B: mov     eax, 3
 * 000000014029EC80: mov     [rsi+770h], rax
 * 000000014029EC87: mov     [rsi+750h], r13d
 * 000000014029EC8E: mov     rax, [rsi+2F0h]
 * 000000014029EC95: lea     rcx, [rbp+2150h+var_1E18]
 * 000000014029EC9C: call    KeGuardDispatchICall
 * 000000014029ECA1: mov     r14, rax
 * 000000014029ECA4: test    rax, rax
 * 000000014029ECA7: jnz     loc_14029EBAF
 * 000000014029ECAD: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029ECB4: shl     r12d, 0Ch
 * 000000014029ECB8: add     [rsi+688h], r12d
 * 000000014029ECBF: add     [rsi+684h], r13d
 * 000000014029ECC6: mov     eax, [rsi+68Ch]
 * 000000014029ECCC: cmp     [rsi+688h], eax
 * 000000014029ECD2: jge     short loc_14029ECF3
 * 000000014029ECD4: mov     r12, [rbp+2150h+var_2138]
 * 000000014029ECD8: mov     r10d, 5
 * 000000014029ECDE: mov     r15d, 40000000h
 * 000000014029ECE4: lea     r8d, [r10+7]
 * 000000014029ECE8: jmp     loc_14029C73E
 * 000000014029ECED: mov     [rsi+684h], eax
 * 000000014029ECF3: mov     [rbp+2150h+var_2120], rsi
 * 000000014029ECF7: jmp     loc_14029B6E3
 * 000000014029ECFC: mov     edx, [r12+2Ch]
 * 000000014029ED01: lea     rcx, [rbp+2150h+var_1850]
 * 000000014029ED08: mov     rax, [rsi+190h]
 * 000000014029ED0F: mov     ebx, [r12+28h]
 * 000000014029ED14: call    KeGuardDispatchICall
 * 000000014029ED19: mov     rax, [rsi+1C0h]
 * 000000014029ED20: lea     rdx, [rbp+2150h+var_1840]
 * 000000014029ED27: lea     rcx, [rbp+2150h+var_1850]
 * 000000014029ED2E: call    KeGuardDispatchICall
 * 000000014029ED33: cmp     r15d, 26h ; '&'
 * 000000014029ED37: jz      short loc_14029ED47
 * 000000014029ED39: test    ebx, ebx
 * 000000014029ED3B: jz      short loc_14029ED42
 * 000000014029ED3D: mov     rbx, cr4
 * 000000014029ED40: jmp     short loc_14029ED56
 * 000000014029ED42: mov     rbx, cr0
 * 000000014029ED45: jmp     short loc_14029ED56
 * 000000014029ED47: xor     ecx, ecx
 * 000000014029ED49: xgetbv
 * 000000014029ED4C: shl     rdx, 20h
 * 000000014029ED50: or      rdx, rax
 * 000000014029ED53: mov     rbx, rdx
 * 000000014029ED56: mov     rax, [rsi+188h]
 * 000000014029ED5D: lea     rcx, [rbp+2150h+var_1840]
 * 000000014029ED64: call    KeGuardDispatchICall
 * 000000014029ED69: mov     r8, [r12+18h]
 * 000000014029ED6E: mov     rdx, [r12+20h]
 * 000000014029ED73: and     r8, rbx
 * 000000014029ED76: cmp     r8, rdx
 * 000000014029ED79: jz      loc_14029B6E3
 * 000000014029ED7F: mov     eax, [r12+28h]
 * 000000014029ED84: mov     ecx, [r12+2Ch]
 * 000000014029ED89: shl     rcx, 20h
 * 000000014029ED8D: or      rcx, rax
 * 000000014029ED90: xor     eax, eax
 * 000000014029ED92: cmp     [rsi+750h], eax
 * 000000014029ED98: jnz     loc_14029B6E3
 * 000000014029ED9E: mov     rax, [rsi+548h]
 * 000000014029EDA5: xor     rdx, r8
 * 000000014029EDA8: mov     [rax+18h], rdx
 * 000000014029EDAC: xor     eax, eax
 * 000000014029EDAE: cmp     [rsi+750h], eax
 * 000000014029EDB4: jnz     loc_14029B6E3
 * 000000014029EDBA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029EDC4: add     rax, rsi
 * 000000014029EDC7: mov     [rsi+758h], rax
 * 000000014029EDCE: mov     rax, 0B3B74BDEE4453415h
 * 000000014029EDD8: add     rax, r12
 * 000000014029EDDB: mov     [rsi+760h], rax
 * 000000014029EDE2: movsxd  rax, dword ptr [r12]
 * 000000014029EDE6: mov     [rsi+768h], rax
 * 000000014029EDED: mov     eax, 1
 * 000000014029EDF2: mov     [rsi+770h], rcx
 * 000000014029EDF9: mov     [rsi+750h], eax
 * 000000014029EDFF: jmp     loc_14029B6E3
 * 000000014029EE04: cmp     dword ptr [rsi+7A8h], 0Bh
 * 000000014029EE0B: jnz     loc_14029EF9F
 * 000000014029EE11: add     dword ptr [rsi+688h], 100h
 * 000000014029EE1B: mov     r14, [rsi+540h]
 * 000000014029EE22: mov     rax, [rsi+2C8h]
 * 000000014029EE29: mov     rcx, r14
 * 000000014029EE2C: call    KeGuardDispatchICall
 * 000000014029EE31: mov     rbx, rax
 * 000000014029EE34: test    rax, rax
 * 000000014029EE37: jz      loc_14029B6E3
 * 000000014029EE3D: mov     rax, [rsi+2D0h]
 * 000000014029EE44: mov     rcx, rbx
 * 000000014029EE47: call    KeGuardDispatchICall
 * 000000014029EE4C: mov     rcx, rax
 * 000000014029EE4F: mov     rax, [r12+18h]
 * 000000014029EE54: test    rax, rax
 * 000000014029EE57: jz      short loc_14029EEB7
 * 000000014029EE59: cmp     rax, rcx
 * 000000014029EE5C: jz      loc_14029EF2E
 * 000000014029EE62: xor     eax, eax
 * 000000014029EE64: cmp     [rsi+750h], eax
 * 000000014029EE6A: jnz     loc_14029EF2E
 * 000000014029EE70: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029EE7A: add     rax, rsi
 * 000000014029EE7D: mov     [rsi+758h], rax
 * 000000014029EE84: mov     rax, 0B3B74BDEE4453415h
 * 000000014029EE8E: add     rax, r12
 * 000000014029EE91: mov     [rsi+760h], rax
 * 000000014029EE98: movsxd  rax, dword ptr [r12]
 * 000000014029EE9C: mov     [rsi+768h], rax
 * 000000014029EEA3: mov     eax, 1
 * 000000014029EEA8: mov     [rsi+770h], rcx
 * 000000014029EEAF: mov     [rsi+750h], eax
 * 000000014029EEB5: jmp     short loc_14029EF2E
 * 000000014029EEB7: mov     eax, [rsi+7C4h]
 * 000000014029EEBD: mov     rdx, [rsi+7C8h]
 * 000000014029EEC4: test    rax, rax
 * 000000014029EEC7: jz      short loc_14029EEDA
 * 000000014029EEC9: lea     r8, [rax-1]
 * 000000014029EECD: add     r8, rdx
 * 000000014029EED0: cmp     rcx, rdx
 * 000000014029EED3: jb      short loc_14029EEDA
 * 000000014029EED5: cmp     rcx, r8
 * 000000014029EED8: jbe     short loc_14029EF29
 * 000000014029EEDA: xor     eax, eax
 * 000000014029EEDC: cmp     [rsi+750h], eax
 * 000000014029EEE2: jnz     short loc_14029EF29
 * 000000014029EEE4: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029EEEE: add     rax, rsi
 * 000000014029EEF1: mov     [rsi+758h], rax
 * 000000014029EEF8: mov     rax, 0B3B74BDEE4453415h
 * 000000014029EF02: add     rax, r12
 * 000000014029EF05: mov     [rsi+760h], rax
 * 000000014029EF0C: movsxd  rax, dword ptr [r12]
 * 000000014029EF10: mov     [rsi+768h], rax
 * 000000014029EF17: mov     eax, 1
 * 000000014029EF1C: mov     [rsi+770h], rcx
 * 000000014029EF23: mov     [rsi+750h], eax
 * 000000014029EF29: mov     [r12+18h], rcx
 * 000000014029EF2E: mov     rax, [rsi+2D8h]
 * 000000014029EF35: mov     rdx, rbx
 * 000000014029EF38: mov     rcx, r14
 * 000000014029EF3B: call    KeGuardDispatchICall
 * 000000014029EF40: jmp     loc_14029B6E3
 * 000000014029EF45: jnz     short loc_14029EFAA
 * 000000014029EF47: xor     eax, eax
 * 000000014029EF49: cmp     [rsi+7D0h], rax
 * 000000014029EF50: jz      short loc_14029EF99
 * 000000014029EF52: mov     ecx, [rsi+7DCh]
 * 000000014029EF58: mov     r13d, 1
 * 000000014029EF5E: mov     eax, ecx
 * 000000014029EF60: shr     eax, 2
 * 000000014029EF63: and     eax, r13d
 * 000000014029EF66: jnz     short loc_14029EF97
 * 000000014029EF68: xor     r8d, r8d
 * 000000014029EF6B: cmp     [rsi+684h], r8d
 * 000000014029EF72: jnz     short loc_14029EF88
 * 000000014029EF74: mov     eax, ecx
 * 000000014029EF76: shl     eax, 3
 * 000000014029EF79: xor     eax, ecx
 * 000000014029EF7B: and     eax, 20h
 * 000000014029EF7E: xor     eax, ecx
 * 000000014029EF80: mov     [rsi+7DCh], eax
 * 000000014029EF86: jmp     short loc_14029EFB0
 * 000000014029EF88: shr     ecx, 5
 * 000000014029EF8B: and     ecx, r13d
 * 000000014029EF8E: cmp     eax, ecx
 * 000000014029EF90: jz      short loc_14029EFB0
 * 000000014029EF92: jmp     loc_14029C035
 * 000000014029EF97: xor     eax, eax
 * 000000014029EF99: mov     [rsi+684h], eax
 * 000000014029EF9F: xor     r13d, r13d
 * 000000014029EFA2: mov     r15, r8
 * 000000014029EFA5: jmp     loc_1402A3ADC
 * 000000014029EFAA: mov     r13d, 1
 * 000000014029EFB0: mov     r14, [r12+8]
 * 000000014029EFB5: mov     r8d, [r12+10h]
 * 000000014029EFBA: mov     r9, r14
 * 000000014029EFBD: add     [rsi+688h], r8d
 * 000000014029EFC4: mov     rax, r14
 * 000000014029EFC7: mov     r10d, [rsi+674h]
 * 000000014029EFCE: mov     r15, [rsi+678h]
 * 000000014029EFD5: lea     rcx, [r14+r8]
 * 000000014029EFD9: cmp     r14, rcx
 * 000000014029EFDC: jnb     short loc_14029EFEE
 * 000000014029EFDE: mov     edx, 40h ; '@'
 * 000000014029EFE3: prefetchnta byte ptr [rax]
 * 000000014029EFE6: add     rax, rdx
 * 000000014029EFE9: cmp     rax, rcx
 * 000000014029EFEC: jb      short loc_14029EFE3
 * 000000014029EFEE: mov     r11d, r8d
 * 000000014029EFF1: mov     rbx, r15
 * 000000014029EFF4: shr     r11d, 7
 * 000000014029EFF8: test    r11d, r11d
 * 000000014029EFFB: jz      short loc_14029F063
 * 000000014029EFFD: mov     rsi, 7010008004002001h
 * 000000014029F007: mov     edx, 8
 * 000000014029F00C: mov     rax, [r9]
 * 000000014029F00F: mov     ecx, r10d
 * 000000014029F012: xor     rax, rbx
 * 000000014029F015: mov     rbx, [r9+8]
 * 000000014029F019: rol     rax, cl
 * 000000014029F01C: add     r9, 10h
 * 000000014029F020: xor     rbx, rax
 * 000000014029F023: rol     rbx, cl
 * 000000014029F026: sub     rdx, r13
 * 000000014029F029: jnz     short loc_14029F00C
 * 000000014029F02B: mov     rcx, r9
 * 000000014029F02E: sub     rcx, r14
 * 000000014029F031: xor     rcx, r15
 * 000000014029F034: mov     rax, rcx
 * 000000014029F037: rol     rax, 11h
 * 000000014029F03B: xor     rcx, rax
 * 000000014029F03E: mov     rax, rsi
 * 000000014029F041: mul     rcx
 * 000000014029F044: xor     r10d, eax
 * 000000014029F047: mov     [rbp+2150h+var_1B90], rdx
 * 000000014029F04E: xor     r10d, edx
 * 000000014029F051: and     r10d, 3Fh
 * 000000014029F055: cmovz   r10d, r13d
 * 000000014029F059: add     r11d, 0FFFFFFFFh
 * 000000014029F05D: jnz     short loc_14029F007
 * 000000014029F05F: mov     rsi, [rbp+2150h+var_2120]
 * 000000014029F063: and     r8d, 7Fh
 * 000000014029F067: cmp     r8d, 8
 * 000000014029F06B: jb      short loc_14029F08A
 * 000000014029F06D: mov     edx, r8d
 * 000000014029F070: shr     rdx, 3
 * 000000014029F074: xor     rbx, [r9]
 * 000000014029F077: mov     ecx, r10d
 * 000000014029F07A: rol     rbx, cl
 * 000000014029F07D: add     r9, 8
 * 000000014029F081: add     r8d, 0FFFFFFF8h
 * 000000014029F085: sub     rdx, r13
 * 000000014029F088: jnz     short loc_14029F074
 * 000000014029F08A: test    r8d, r8d
 * 000000014029F08D: jz      short loc_14029F0A5
 * 000000014029F08F: movzx   eax, byte ptr [r9]
 * 000000014029F093: mov     ecx, r10d
 * 000000014029F096: xor     rbx, rax
 * 000000014029F099: add     r9, r13
 * 000000014029F09C: rol     rbx, cl
 * 000000014029F09F: add     r8d, 0FFFFFFFFh
 * 000000014029F0A3: jnz     short loc_14029F08F
 * 000000014029F0A5: mov     rax, rbx
 * 000000014029F0A8: shr     rax, 1Fh
 * 000000014029F0AC: xor     r13d, r13d
 * 000000014029F0AF: jmp     short loc_14029F0B7
 * 000000014029F0B1: xor     ebx, eax
 * 000000014029F0B3: shr     rax, 1Fh
 * 000000014029F0B7: test    rax, rax
 * 000000014029F0BA: jnz     short loc_14029F0B1
 * 000000014029F0BC: btr     ebx, 1Fh
 * 000000014029F0C0: cmp     ebx, [r12+14h]
 * 000000014029F0C5: jz      loc_14029F220
 * 000000014029F0CB: lock or [rsp+1120h+var_1120], eax
 * 000000014029F0CF: mov     eax, [r12+18h]
 * 000000014029F0D4: mov     r8d, 1
 * 000000014029F0DA: test    r8b, al
 * 000000014029F0DD: jz      short loc_14029F0F0
 * 000000014029F0DF: mov     rax, [rsi+538h]
 * 000000014029F0E6: mov     cl, [rax]
 * 000000014029F0E8: test    cl, cl
 * 000000014029F0EA: jnz     loc_14029F220
 * 000000014029F0F0: mov     ecx, [r12+10h]
 * 000000014029F0F5: mov     rdx, [r12+8]
 * 000000014029F0FA: test    rcx, rcx
 * 000000014029F0FD: jz      loc_14029F1AC
 * 000000014029F103: mov     eax, [rsi+7DCh]
 * 000000014029F109: mov     r9d, 40h ; '@'
 * 000000014029F10F: test    r9b, al
 * 000000014029F112: jz      loc_14029F1AC
 * 000000014029F118: mov     r15, cr8
 * 000000014029F11C: mov     r14, rdx
 * 000000014029F11F: lea     r13, [rcx-1]
 * 000000014029F123: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014029F12A: add     r13, rdx
 * 000000014029F12D: or      r13, 0FFFh
 * 000000014029F134: lea     r12, [r14-1]
 * 000000014029F138: mov     eax, 2
 * 000000014029F13D: mov     cr8, rax
 * 000000014029F141: mov     rax, [rsi+450h]
 * 000000014029F148: xor     edx, edx
 * 000000014029F14A: mov     rcx, r14
 * 000000014029F14D: call    KeGuardDispatchICall
 * 000000014029F152: cmp     eax, 0C000022Dh
 * 000000014029F157: jnz     short loc_14029F174
 * 000000014029F159: mov     eax, 1
 * 000000014029F15E: cmp     r15b, al
 * 000000014029F161: ja      short loc_14029F178
 * 000000014029F163: movzx   eax, r15b
 * 000000014029F167: mov     cr8, rax
 * 000000014029F16B: mov     al, [r14]
 * 000000014029F16E: mov     rax, cr8
 * 000000014029F172: jmp     short loc_14029F138
 * 000000014029F174: test    eax, eax
 * 000000014029F176: js      short loc_14029F19A
 * 000000014029F178: mov     r11d, 1000h
 * 000000014029F17E: add     r14, r11
 * 000000014029F181: add     r12, r11
 * 000000014029F184: cmp     r12, r13
 * 000000014029F187: jnz     short loc_14029F141
 * 000000014029F189: movzx   eax, r15b
 * 000000014029F18D: mov     cr8, rax
 * 000000014029F191: mov     r12, [rbp+2150h+var_2138]
 * 000000014029F195: jmp     loc_14029F21D
 * 000000014029F19A: movzx   eax, r15b
 * 000000014029F19E: mov     cr8, rax
 * 000000014029F1A2: mov     r12, [rbp+2150h+var_2138]
 * 000000014029F1A6: mov     r8d, 1
 * 000000014029F1AC: mov     eax, [r12+14h]
 * 000000014029F1B1: xor     r14d, r14d
 * 000000014029F1B4: cmp     [rsi+750h], r14d
 * 000000014029F1BB: jnz     short loc_14029F1CD
 * 000000014029F1BD: mov     ecx, ebx
 * 000000014029F1BF: xor     rcx, rax
 * 000000014029F1C2: mov     rax, [rsi+548h]
 * 000000014029F1C9: mov     [rax+18h], rcx
 * 000000014029F1CD: mov     rcx, [r12+8]
 * 000000014029F1D2: xor     eax, eax
 * 000000014029F1D4: cmp     [rsi+750h], eax
 * 000000014029F1DA: jnz     short loc_14029F21D
 * 000000014029F1DC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029F1E6: add     rax, rsi
 * 000000014029F1E9: mov     [rsi+758h], rax
 * 000000014029F1F0: mov     rax, 0B3B74BDEE4453415h
 * 000000014029F1FA: add     rax, r12
 * 000000014029F1FD: mov     [rsi+760h], rax
 * 000000014029F204: movsxd  rax, dword ptr [r12]
 * 000000014029F208: mov     [rsi+768h], rax
 * 000000014029F20F: mov     [rsi+770h], rcx
 * 000000014029F216: mov     [rsi+750h], r8d
 * 000000014029F21D: xor     r13d, r13d
 * 000000014029F220: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029F22A: jz      loc_1402A00F1
 * 000000014029F230: mov     r8d, [r12+10h]
 * 000000014029F235: test    r8d, r8d
 * 000000014029F238: jz      loc_14029B6E3
 * 000000014029F23E: mov     rdx, [r12+8]
 * 000000014029F243: lea     r9, [rbp+2150h+var_1830]
 * 000000014029F24A: mov     rcx, rsi
 * 000000014029F24D: call    sub_14017573C
 * 000000014029F252: mov     r8d, 10h
 * 000000014029F258: lea     r9, [r12+1Ch]
 * 000000014029F25D: lea     r10, [rbp+2150h+var_1830]
 * 000000014029F264: mov     rcx, [r10]
 * 000000014029F267: add     r10, 8
 * 000000014029F26B: mov     rax, [r9]
 * 000000014029F26E: add     r9, 8
 * 000000014029F272: cmp     rcx, rax
 * 000000014029F275: jnz     short loc_14029F2AE
 * 000000014029F277: add     r8d, 0FFFFFFF8h
 * 000000014029F27B: cmp     r8d, 8
 * 000000014029F27F: jnb     short loc_14029F264
 * 000000014029F281: test    r8d, r8d
 * 000000014029F284: jz      loc_14029F3D8
 * 000000014029F28A: mov     r13d, 1
 * 000000014029F290: movzx   edx, byte ptr [r10]
 * 000000014029F294: add     r10, r13
 * 000000014029F297: movzx   eax, byte ptr [r9]
 * 000000014029F29B: add     r9, r13
 * 000000014029F29E: cmp     rdx, rax
 * 000000014029F2A1: jnz     short loc_14029F2B4
 * 000000014029F2A3: add     r8d, 0FFFFFFFFh
 * 000000014029F2A7: jnz     short loc_14029F290
 * 000000014029F2A9: jmp     loc_14029F3D8
 * 000000014029F2AE: mov     r13d, 1
 * 000000014029F2B4: xor     eax, eax
 * 000000014029F2B6: lock or [rsp+1120h+var_1120], eax
 * 000000014029F2BA: mov     eax, [r12+18h]
 * 000000014029F2BF: test    r13b, al
 * 000000014029F2C2: jz      short loc_14029F2D9
 * 000000014029F2C4: mov     rax, [rsi+538h]
 * 000000014029F2CB: mov     cl, [rax]
 * 000000014029F2CD: xor     eax, eax
 * 000000014029F2CF: test    cl, cl
 * 000000014029F2D1: jnz     loc_14029F3D8
 * 000000014029F2D7: jmp     short loc_14029F2DB
 * 000000014029F2D9: xor     eax, eax
 * 000000014029F2DB: mov     ecx, [r12+10h]
 * 000000014029F2E0: mov     rdx, [r12+8]
 * 000000014029F2E5: test    rcx, rcx
 * 000000014029F2E8: jz      loc_14029F38A
 * 000000014029F2EE: mov     eax, [rsi+7DCh]
 * 000000014029F2F4: mov     r8d, 40h ; '@'
 * 000000014029F2FA: test    r8b, al
 * 000000014029F2FD: jz      loc_14029F388
 * 000000014029F303: mov     r14, cr8
 * 000000014029F307: mov     rbx, rdx
 * 000000014029F30A: lea     r12, [rcx-1]
 * 000000014029F30E: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014029F315: add     r12, rdx
 * 000000014029F318: or      r12, 0FFFh
 * 000000014029F31F: lea     r15, [rbx-1]
 * 000000014029F323: mov     eax, 2
 * 000000014029F328: mov     cr8, rax
 * 000000014029F32C: mov     rax, [rsi+450h]
 * 000000014029F333: xor     edx, edx
 * 000000014029F335: mov     rcx, rbx
 * 000000014029F338: call    KeGuardDispatchICall
 * 000000014029F33D: cmp     eax, 0C000022Dh
 * 000000014029F342: jnz     short loc_14029F359
 * 000000014029F344: cmp     r14b, r13b
 * 000000014029F347: ja      short loc_14029F35D
 * 000000014029F349: movzx   eax, r14b
 * 000000014029F34D: mov     cr8, rax
 * 000000014029F351: mov     al, [rbx]
 * 000000014029F353: mov     rax, cr8
 * 000000014029F357: jmp     short loc_14029F323
 * 000000014029F359: test    eax, eax
 * 000000014029F35B: js      short loc_14029F37C
 * 000000014029F35D: mov     r11d, 1000h
 * 000000014029F363: add     rbx, r11
 * 000000014029F366: add     r15, r11
 * 000000014029F369: cmp     r15, r12
 * 000000014029F36C: jnz     short loc_14029F32C
 * 000000014029F36E: movzx   eax, r14b
 * 000000014029F372: mov     cr8, rax
 * 000000014029F376: mov     r12, [rbp+2150h+var_2138]
 * 000000014029F37A: jmp     short loc_14029F3D8
 * 000000014029F37C: movzx   eax, r14b
 * 000000014029F380: mov     cr8, rax
 * 000000014029F384: mov     r12, [rbp+2150h+var_2138]
 * 000000014029F388: xor     eax, eax
 * 000000014029F38A: mov     rcx, [r12+8]
 * 000000014029F38F: cmp     [rsi+750h], eax
 * 000000014029F395: jnz     short loc_14029F3D8
 * 000000014029F397: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029F3A1: add     rax, rsi
 * 000000014029F3A4: mov     [rsi+758h], rax
 * 000000014029F3AB: mov     rax, 0B3B74BDEE4453415h
 * 000000014029F3B5: add     rax, r12
 * 000000014029F3B8: mov     [rsi+760h], rax
 * 000000014029F3BF: movsxd  rax, dword ptr [r12]
 * 000000014029F3C3: mov     [rsi+768h], rax
 * 000000014029F3CA: mov     [rsi+770h], rcx
 * 000000014029F3D1: mov     [rsi+750h], r13d
 * 000000014029F3D8: mov     eax, [r12+10h]
 * 000000014029F3DD: shl     eax, 4
 * 000000014029F3E0: jmp     loc_14029B8C8
 * 000000014029F3E5: mov     eax, [rsi+690h]
 * 000000014029F3EB: mov     r13, rcx
 * 000000014029F3EE: test    r13b, al
 * 000000014029F3F1: jnz     loc_14029B163
 * 000000014029F3F7: mov     r15, [rsi+560h]
 * 000000014029F3FE: xor     eax, eax
 * 000000014029F400: mov     r12, [rsi+568h]
 * 000000014029F407: mov     r14d, eax
 * 000000014029F40A: mov     rbx, [rsi+500h]
 * 000000014029F411: mov     [rbp+2150h+var_2128], eax
 * 000000014029F414: mov     rax, [rsi+168h]
 * 000000014029F41B: mov     [rbp+2150h+var_2110], r15
 * 000000014029F41F: call    KeGuardDispatchICall
 * 000000014029F424: mov     rax, [rsi+118h]
 * 000000014029F42B: xor     edx, edx
 * 000000014029F42D: mov     rcx, rbx
 * 000000014029F430: call    KeGuardDispatchICall
 * 000000014029F435: mov     rcx, [rsi+4D8h]
 * 000000014029F43C: mov     rax, [rcx]
 * 000000014029F43F: cmp     rax, rcx
 * 000000014029F442: jz      short loc_14029F45A
 * 000000014029F444: mov     [rax-12Ah], r13b
 * 000000014029F44B: add     r14d, r13d
 * 000000014029F44E: mov     rax, [rax]
 * 000000014029F451: cmp     rax, rcx
 * 000000014029F454: jnz     short loc_14029F444
 * 000000014029F456: mov     [rbp+2150h+var_2128], r14d
 * 000000014029F45A: mov     rax, [rsi+128h]
 * 000000014029F461: xor     edx, edx
 * 000000014029F463: mov     rcx, r15
 * 000000014029F466: call    KeGuardDispatchICall
 * 000000014029F46B: mov     r9, [rsi+558h]
 * 000000014029F472: mov     r8, [r9]
 * 000000014029F475: cmp     r8, r9
 * 000000014029F478: jz      loc_14029F50F
 * 000000014029F47E: mov     rdi, [rbp+2150h+var_2138]
 * 000000014029F482: xor     r15d, r15d
 * 000000014029F485: mov     r14, 0B3B74BDEE4453415h
 * 000000014029F48F: lea     rdx, [r8-18h]
 * 000000014029F493: cmp     rdx, r12
 * 000000014029F496: jz      short loc_14029F4F8
 * 000000014029F498: mov     rdx, [rdx+10h]
 * 000000014029F49C: cmp     [rdx+1BEh], r15b
 * 000000014029F4A3: jnz     short loc_14029F4F1
 * 000000014029F4A5: test    dword ptr [rdx+304h], 4000000h
 * 000000014029F4AF: jz      short loc_14029F4F1
 * 000000014029F4B1: cmp     [rsi+750h], r15d
 * 000000014029F4B8: jnz     short loc_14029F4F1
 * 000000014029F4BA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029F4C4: add     rax, rsi
 * 000000014029F4C7: mov     [rsi+758h], rax
 * 000000014029F4CE: lea     rax, [rdi+r14]
 * 000000014029F4D2: mov     [rsi+760h], rax
 * 000000014029F4D9: movsxd  rax, dword ptr [rdi]
 * 000000014029F4DC: mov     [rsi+768h], rax
 * 000000014029F4E3: mov     [rsi+770h], rdx
 * 000000014029F4EA: mov     [rsi+750h], r13d
 * 000000014029F4F1: mov     [rdx+1BEh], r15b
 * 000000014029F4F8: mov     r8, [r8]
 * 000000014029F4FB: cmp     r8, r9
 * 000000014029F4FE: jnz     short loc_14029F48F
 * 000000014029F500: mov     r14d, [rbp+2150h+var_2128]
 * 000000014029F504: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029F50B: mov     r15, [rbp+2150h+var_2110]
 * 000000014029F50F: mov     rax, [rsi+130h]
 * 000000014029F516: xor     edx, edx
 * 000000014029F518: mov     rcx, r15
 * 000000014029F51B: call    KeGuardDispatchICall
 * 000000014029F520: mov     rcx, [rsi+500h]
 * 000000014029F527: xor     edx, edx
 * 000000014029F529: mov     rax, [rsi+120h]
 * 000000014029F530: call    KeGuardDispatchICall
 * 000000014029F535: mov     rax, [rsi+170h]
 * 000000014029F53C: call    KeGuardDispatchICall
 * 000000014029F541: jmp     loc_14029BB49
 * 000000014029F546: cmp     r15d, 23h ; '#'
 * 000000014029F54A: jg      loc_1402A1EAD
 * 000000014029F550: jz      loc_1402A1793
 * 000000014029F556: mov     ecx, r15d
 * 000000014029F559: sub     ecx, 1Bh
 * 000000014029F55C: jz      loc_1402A161A
 * 000000014029F562: sub     ecx, 1
 * 000000014029F565: jz      loc_1402A0C22
 * 000000014029F56B: sub     ecx, 1
 * 000000014029F56E: jz      loc_1402A0810
 * 000000014029F574: sub     ecx, 1
 * 000000014029F577: jz      loc_1402A00F9
 * 000000014029F57D: sub     ecx, 1
 * 000000014029F580: jz      short loc_14029F5B0
 * 000000014029F582: sub     ecx, 1
 * 000000014029F585: jz      short loc_14029F5A0
 * 000000014029F587: cmp     ecx, 1
 * 000000014029F58A: jnz     loc_1402A3C76
 * 000000014029F590: mov     rdx, r12
 * 000000014029F593: mov     rcx, rsi
 * 000000014029F596: call    sub_140175834
 * 000000014029F59B: jmp     loc_14029B6E3
 * 000000014029F5A0: mov     rdx, r12
 * 000000014029F5A3: mov     rcx, rsi
 * 000000014029F5A6: call    sub_140176734
 * 000000014029F5AB: jmp     loc_14029B6E3
 * 000000014029F5B0: mov     eax, [rsi+690h]
 * 000000014029F5B6: mov     ecx, 1
 * 000000014029F5BB: test    cl, al
 * 000000014029F5BD: jz      loc_14029B163
 * 000000014029F5C3: xor     eax, eax
 * 000000014029F5C5: cmp     [rsi+7D0h], rax
 * 000000014029F5CC: jz      short loc_14029F60A
 * 000000014029F5CE: mov     eax, [rsi+7DCh]
 * 000000014029F5D4: test    al, 4
 * 000000014029F5D6: jnz     short loc_14029F608
 * 000000014029F5D8: mov     rax, [rsi+3B8h]
 * 000000014029F5DF: lea     rdx, [rbp+2150h+var_1D10]
 * 000000014029F5E6: xor     r9d, r9d
 * 000000014029F5E9: xor     r8d, r8d
 * 000000014029F5EC: lea     ecx, [r9+1Ah]
 * 000000014029F5F0: call    KeGuardDispatchICall
 * 000000014029F5F5: mov     rbx, [rbp+2150h+var_1D10]
 * 000000014029F5FC: xor     ecx, ecx
 * 000000014029F5FE: test    eax, eax
 * 000000014029F600: mov     eax, ecx
 * 000000014029F602: cmovs   rbx, rcx
 * 000000014029F606: jmp     short loc_14029F60D
 * 000000014029F608: xor     eax, eax
 * 000000014029F60A: mov     rbx, rax
 * 000000014029F60D: mov     r15d, eax
 * 000000014029F610: mov     [rbp+2150h+var_20F0], eax
 * 000000014029F613: mov     rax, [rsi+3A0h]
 * 000000014029F61A: xor     ecx, ecx
 * 000000014029F61C: mov     [rbp+2150h+var_2148], rbx
 * 000000014029F620: call    KeGuardDispatchICall
 * 000000014029F625: xor     r13d, r13d
 * 000000014029F628: mov     r14, rax
 * 000000014029F62B: test    rax, rax
 * 000000014029F62E: jz      loc_14029FD40
 * 000000014029F634: mov     rcx, r14
 * 000000014029F637: cmp     rbx, r14
 * 000000014029F63A: jnz     loc_14029F988
 * 000000014029F640: mov     rax, [rsi+390h]
 * 000000014029F647: mov     r13, r12
 * 000000014029F64A: call    KeGuardDispatchICall
 * 000000014029F64F: test    eax, eax
 * 000000014029F651: js      loc_14029FD14
 * 000000014029F657: mov     rax, [rsi+3C8h]
 * 000000014029F65E: mov     rcx, r14
 * 000000014029F661: call    KeGuardDispatchICall
 * 000000014029F666: mov     bl, al
 * 000000014029F668: mov     [rbp+2150h+var_1FF7], al
 * 000000014029F66E: mov     rax, [rsi+3D0h]
 * 000000014029F675: lea     rdx, [rbp+2150h+var_2090]
 * 000000014029F67C: mov     rcx, r14
 * 000000014029F67F: call    KeGuardDispatchICall
 * 000000014029F684: mov     r15b, al
 * 000000014029F687: mov     byte ptr [rbp+2150h+var_20D8], al
 * 000000014029F68A: mov     rax, [rsi+3D8h]
 * 000000014029F691: mov     rcx, r14
 * 000000014029F694: call    KeGuardDispatchICall
 * 000000014029F699: mov     [rbp+2150h+var_2110], rax
 * 000000014029F69D: xor     eax, eax
 * 000000014029F69F: cmp     bl, 61h ; 'a'
 * 000000014029F6A2: jz      short loc_14029F715
 * 000000014029F6A4: cmp     [rsi+750h], eax
 * 000000014029F6AA: jnz     short loc_14029F715
 * 000000014029F6AC: mov     rax, [rsi+548h]
 * 000000014029F6B3: movzx   ecx, bl
 * 000000014029F6B6: xor     rcx, 61h
 * 000000014029F6BA: mov     [rax+18h], rcx
 * 000000014029F6BE: xor     eax, eax
 * 000000014029F6C0: cmp     [rsi+750h], eax
 * 000000014029F6C6: jnz     short loc_14029F715
 * 000000014029F6C8: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014029F6D2: mov     r11, 0B3B74BDEE4453415h
 * 000000014029F6DC: mov     r10d, 1
 * 000000014029F6E2: lea     rax, [rsi+rdi]
 * 000000014029F6E6: mov     [rsi+758h], rax
 * 000000014029F6ED: lea     rax, [r12+r11]
 * 000000014029F6F1: mov     [rsi+760h], rax
 * 000000014029F6F8: movsxd  rax, dword ptr [r12]
 * 000000014029F6FC: mov     [rsi+768h], rax
 * 000000014029F703: xor     eax, eax
 * 000000014029F705: mov     [rsi+770h], r14
 * 000000014029F70C: mov     [rsi+750h], r10d
 * 000000014029F713: jmp     short loc_14029F72F
 * 000000014029F715: mov     r11, 0B3B74BDEE4453415h
 * 000000014029F71F: mov     r10d, 1
 * 000000014029F725: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014029F72F: movzx   ecx, bl
 * 000000014029F732: mov     dl, al
 * 000000014029F734: and     ecx, 7
 * 000000014029F737: mov     r9b, al
 * 000000014029F73A: sub     ecx, 1
 * 000000014029F73D: jz      short loc_14029F790
 * 000000014029F73F: cmp     ecx, 1
 * 000000014029F742: jz      short loc_14029F784
 * 000000014029F744: xor     eax, eax
 * 000000014029F746: test    bl, 7
 * 000000014029F749: jz      short loc_14029F794
 * 000000014029F74B: cmp     [rsi+750h], eax
 * 000000014029F751: jnz     short loc_14029F794
 * 000000014029F753: lea     rax, [rsi+rdi]
 * 000000014029F757: mov     [rsi+758h], rax
 * 000000014029F75E: lea     rax, [r12+r11]
 * 000000014029F762: mov     [rsi+760h], rax
 * 000000014029F769: movsxd  rax, dword ptr [r12]
 * 000000014029F76D: mov     [rsi+768h], rax
 * 000000014029F774: mov     [rsi+770h], r14
 * 000000014029F77B: mov     [rsi+750h], r10d
 * 000000014029F782: jmp     short loc_14029F792
 * 000000014029F784: mov     eax, 10h
 * 000000014029F789: mov     dl, al
 * 000000014029F78B: mov     r9b, al
 * 000000014029F78E: jmp     short loc_14029F792
 * 000000014029F790: mov     dl, 30h ; '0'
 * 000000014029F792: xor     eax, eax
 * 000000014029F794: mov     r8, [rsi+580h]
 * 000000014029F79B: movzx   ecx, bl
 * 000000014029F79E: shr     rcx, 4
 * 000000014029F7A2: or      dl, [r8+rcx*2]
 * 000000014029F7A6: cmp     dl, r15b
 * 000000014029F7A9: jz      short loc_14029F7E2
 * 000000014029F7AB: cmp     [rsi+750h], eax
 * 000000014029F7B1: jnz     short loc_14029F7E2
 * 000000014029F7B3: lea     rax, [rsi+rdi]
 * 000000014029F7B7: mov     [rsi+758h], rax
 * 000000014029F7BE: lea     rax, [r12+r11]
 * 000000014029F7C2: mov     [rsi+760h], rax
 * 000000014029F7C9: movsxd  rax, dword ptr [r12]
 * 000000014029F7CD: mov     [rsi+768h], rax
 * 000000014029F7D4: mov     [rsi+770h], r14
 * 000000014029F7DB: mov     [rsi+750h], r10d
 * 000000014029F7E2: mov     al, [r8+rcx*2+1]
 * 000000014029F7E7: or      al, r9b
 * 000000014029F7EA: cmp     al, [rbp+2150h+var_2090]
 * 000000014029F7F0: jz      short loc_14029F82B
 * 000000014029F7F2: xor     eax, eax
 * 000000014029F7F4: cmp     [rsi+750h], eax
 * 000000014029F7FA: jnz     short loc_14029F82D
 * 000000014029F7FC: lea     rax, [rsi+rdi]
 * 000000014029F800: mov     [rsi+758h], rax
 * 000000014029F807: lea     rax, [r12+r11]
 * 000000014029F80B: mov     [rsi+760h], rax
 * 000000014029F812: movsxd  rax, dword ptr [r12]
 * 000000014029F816: mov     [rsi+768h], rax
 * 000000014029F81D: mov     [rsi+770h], r14
 * 000000014029F824: mov     [rsi+750h], r10d
 * 000000014029F82B: xor     eax, eax
 * 000000014029F82D: cmp     r14, [rsi+498h]
 * 000000014029F834: jz      short loc_14029F84F
 * 000000014029F836: mov     rax, [rsi+3C0h]
 * 000000014029F83D: mov     edx, r10d
 * 000000014029F840: mov     rcx, r14
 * 000000014029F843: call    KeGuardDispatchICall
 * 000000014029F848: mov     r15, rax
 * 000000014029F84B: xor     eax, eax
 * 000000014029F84D: jmp     short loc_14029F852
 * 000000014029F84F: mov     r15, rax
 * 000000014029F852: mov     [rbp+2150h+var_2130], r15
 * 000000014029F856: test    r15, r15
 * 000000014029F859: jz      loc_14029FCF2
 * 000000014029F85F: mov     rbx, r15
 * 000000014029F862: cmp     [r15], rax
 * 000000014029F865: jz      loc_14029FCE3
 * 000000014029F86B: mov     dil, byte ptr [rbp+2150h+var_20D8]
 * 000000014029F86F: mov     r15, [rbp+2150h+var_2110]
 * 000000014029F873: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 000000014029F877: mov     rcx, [rbx]
 * 000000014029F87A: mov     rax, [rsi+1D0h]
 * 000000014029F881: call    KeGuardDispatchICall
 * 000000014029F886: mov     rcx, [rbx+8]
 * 000000014029F88A: movzx   edx, [rbp+2150h+var_2090]
 * 000000014029F891: mov     r12, rcx
 * 000000014029F894: movzx   eax, dil
 * 000000014029F898: and     r12, 0FFFFFFFFFFFF0000h
 * 000000014029F89F: cmp     r12, r15
 * 000000014029F8A2: cmovz   edx, eax
 * 000000014029F8A5: mov     rax, [rsi+3E0h]
 * 000000014029F8AC: shr     rcx, 6
 * 000000014029F8B0: and     cl, 0Fh
 * 000000014029F8B3: call    KeGuardDispatchICall
 * 000000014029F8B8: test    eax, eax
 * 000000014029F8BA: jnz     loc_14029F974
 * 000000014029F8C0: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029F8CA: lea     r9d, [rax+1]
 * 000000014029F8CE: jz      short loc_14029F911
 * 000000014029F8D0: mov     rcx, [rsi+8B0h]
 * 000000014029F8D7: lea     edx, [rax+30h]
 * 000000014029F8DA: lea     r8d, [rax+6]
 * 000000014029F8DE: mov     rax, [r13+0]
 * 000000014029F8E2: add     edx, 0FFFFFFF8h
 * 000000014029F8E5: mov     [rcx], rax
 * 000000014029F8E8: add     r13, 8
 * 000000014029F8EC: add     rcx, 8
 * 000000014029F8F0: sub     r8, r9
 * 000000014029F8F3: jnz     short loc_14029F8DE
 * 000000014029F8F5: test    edx, edx
 * 000000014029F8F7: jz      short loc_14029F90A
 * 000000014029F8F9: mov     al, [r13+0]
 * 000000014029F8FD: add     r13, r9
 * 000000014029F900: mov     [rcx], al
 * 000000014029F902: add     rcx, r9
 * 000000014029F905: add     edx, 0FFFFFFFFh
 * 000000014029F908: jnz     short loc_14029F8F9
 * 000000014029F90A: mov     r13, [rsi+8B0h]
 * 000000014029F911: mov     [r13+18h], r12
 * 000000014029F915: mov     rax, [rbx]
 * 000000014029F918: mov     [r13+20h], rax
 * 000000014029F91C: mov     eax, [rbx+8]
 * 000000014029F91F: shr     rax, 6
 * 000000014029F923: and     al, 0Fh
 * 000000014029F925: mov     [r13+28h], al
 * 000000014029F929: xor     eax, eax
 * 000000014029F92B: cmp     [rsi+750h], eax
 * 000000014029F931: jnz     short loc_14029F976
 * 000000014029F933: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029F93D: add     rax, rsi
 * 000000014029F940: mov     [rsi+758h], rax
 * 000000014029F947: mov     rax, 0B3B74BDEE4453415h
 * 000000014029F951: add     rax, r13
 * 000000014029F954: mov     [rsi+760h], rax
 * 000000014029F95B: movsxd  rax, dword ptr [r13+0]
 * 000000014029F95F: mov     [rsi+768h], rax
 * 000000014029F966: mov     [rsi+770h], r14
 * 000000014029F96D: mov     [rsi+750h], r9d
 * 000000014029F974: xor     eax, eax
 * 000000014029F976: add     rbx, 30h ; '0'
 * 000000014029F97A: cmp     [rbx], rax
 * 000000014029F97D: jnz     loc_14029F873
 * 000000014029F983: jmp     loc_14029FCDB
 * 000000014029F988: mov     rax, [rsi+3B0h]
 * 000000014029F98F: call    KeGuardDispatchICall
 * 000000014029F994: test    eax, eax
 * 000000014029F996: jz      loc_14029FD17
 * 000000014029F99C: mov     rax, [rsi+390h]
 * 000000014029F9A3: mov     rcx, r14
 * 000000014029F9A6: mov     r13, r12
 * 000000014029F9A9: call    KeGuardDispatchICall
 * 000000014029F9AE: test    eax, eax
 * 000000014029F9B0: js      loc_14029FD14
 * 000000014029F9B6: mov     rax, [rsi+3C8h]
 * 000000014029F9BD: mov     rcx, r14
 * 000000014029F9C0: call    KeGuardDispatchICall
 * 000000014029F9C5: mov     bl, al
 * 000000014029F9C7: mov     [rbp+2150h+var_1FF8], al
 * 000000014029F9CD: mov     rax, [rsi+3D0h]
 * 000000014029F9D4: lea     rdx, [rbp+2150h+var_208F]
 * 000000014029F9DB: mov     rcx, r14
 * 000000014029F9DE: call    KeGuardDispatchICall
 * 000000014029F9E3: mov     dil, al
 * 000000014029F9E6: mov     rcx, r14
 * 000000014029F9E9: mov     rax, [rsi+3D8h]
 * 000000014029F9F0: call    KeGuardDispatchICall
 * 000000014029F9F5: mov     [rbp+2150h+var_2110], rax
 * 000000014029F9F9: xor     eax, eax
 * 000000014029F9FB: cmp     bl, 61h ; 'a'
 * 000000014029F9FE: jz      short loc_14029FA71
 * 000000014029FA00: cmp     [rsi+750h], eax
 * 000000014029FA06: jnz     short loc_14029FA71
 * 000000014029FA08: mov     rax, [rsi+548h]
 * 000000014029FA0F: movzx   ecx, bl
 * 000000014029FA12: xor     rcx, 61h
 * 000000014029FA16: mov     [rax+18h], rcx
 * 000000014029FA1A: xor     eax, eax
 * 000000014029FA1C: cmp     [rsi+750h], eax
 * 000000014029FA22: jnz     short loc_14029FA71
 * 000000014029FA24: mov     r15, 0A3A03F5891C8B4E8h
 * 000000014029FA2E: mov     r11, 0B3B74BDEE4453415h
 * 000000014029FA38: mov     r10d, 1
 * 000000014029FA3E: lea     rax, [rsi+r15]
 * 000000014029FA42: mov     [rsi+758h], rax
 * 000000014029FA49: lea     rax, [r12+r11]
 * 000000014029FA4D: mov     [rsi+760h], rax
 * 000000014029FA54: movsxd  rax, dword ptr [r12]
 * 000000014029FA58: mov     [rsi+768h], rax
 * 000000014029FA5F: xor     eax, eax
 * 000000014029FA61: mov     [rsi+770h], r14
 * 000000014029FA68: mov     [rsi+750h], r10d
 * 000000014029FA6F: jmp     short loc_14029FA8B
 * 000000014029FA71: mov     r15, 0A3A03F5891C8B4E8h
 * 000000014029FA7B: mov     r11, 0B3B74BDEE4453415h
 * 000000014029FA85: mov     r10d, 1
 * 000000014029FA8B: movzx   ecx, bl
 * 000000014029FA8E: mov     dl, al
 * 000000014029FA90: and     ecx, 7
 * 000000014029FA93: mov     r9b, al
 * 000000014029FA96: sub     ecx, 1
 * 000000014029FA99: jz      short loc_14029FAEC
 * 000000014029FA9B: cmp     ecx, 1
 * 000000014029FA9E: jz      short loc_14029FAE0
 * 000000014029FAA0: xor     eax, eax
 * 000000014029FAA2: test    bl, 7
 * 000000014029FAA5: jz      short loc_14029FAF0
 * 000000014029FAA7: cmp     [rsi+750h], eax
 * 000000014029FAAD: jnz     short loc_14029FAF0
 * 000000014029FAAF: lea     rax, [rsi+r15]
 * 000000014029FAB3: mov     [rsi+758h], rax
 * 000000014029FABA: lea     rax, [r12+r11]
 * 000000014029FABE: mov     [rsi+760h], rax
 * 000000014029FAC5: movsxd  rax, dword ptr [r12]
 * 000000014029FAC9: mov     [rsi+768h], rax
 * 000000014029FAD0: mov     [rsi+770h], r14
 * 000000014029FAD7: mov     [rsi+750h], r10d
 * 000000014029FADE: jmp     short loc_14029FAEE
 * 000000014029FAE0: mov     eax, 10h
 * 000000014029FAE5: mov     dl, al
 * 000000014029FAE7: mov     r9b, al
 * 000000014029FAEA: jmp     short loc_14029FAEE
 * 000000014029FAEC: mov     dl, 30h ; '0'
 * 000000014029FAEE: xor     eax, eax
 * 000000014029FAF0: mov     r8, [rsi+580h]
 * 000000014029FAF7: movzx   ecx, bl
 * 000000014029FAFA: shr     rcx, 4
 * 000000014029FAFE: or      dl, [r8+rcx*2]
 * 000000014029FB02: cmp     dl, dil
 * 000000014029FB05: jz      short loc_14029FB3E
 * 000000014029FB07: cmp     [rsi+750h], eax
 * 000000014029FB0D: jnz     short loc_14029FB3E
 * 000000014029FB0F: lea     rax, [rsi+r15]
 * 000000014029FB13: mov     [rsi+758h], rax
 * 000000014029FB1A: lea     rax, [r12+r11]
 * 000000014029FB1E: mov     [rsi+760h], rax
 * 000000014029FB25: movsxd  rax, dword ptr [r12]
 * 000000014029FB29: mov     [rsi+768h], rax
 * 000000014029FB30: mov     [rsi+770h], r14
 * 000000014029FB37: mov     [rsi+750h], r10d
 * 000000014029FB3E: mov     al, [r8+rcx*2+1]
 * 000000014029FB43: or      al, r9b
 * 000000014029FB46: cmp     al, [rbp+2150h+var_208F]
 * 000000014029FB4C: jz      short loc_14029FB87
 * 000000014029FB4E: xor     eax, eax
 * 000000014029FB50: cmp     [rsi+750h], eax
 * 000000014029FB56: jnz     short loc_14029FB89
 * 000000014029FB58: lea     rax, [rsi+r15]
 * 000000014029FB5C: mov     [rsi+758h], rax
 * 000000014029FB63: lea     rax, [r12+r11]
 * 000000014029FB67: mov     [rsi+760h], rax
 * 000000014029FB6E: movsxd  rax, dword ptr [r12]
 * 000000014029FB72: mov     [rsi+768h], rax
 * 000000014029FB79: mov     [rsi+770h], r14
 * 000000014029FB80: mov     [rsi+750h], r10d
 * 000000014029FB87: xor     eax, eax
 * 000000014029FB89: cmp     r14, [rsi+498h]
 * 000000014029FB90: jz      short loc_14029FBAB
 * 000000014029FB92: mov     rax, [rsi+3C0h]
 * 000000014029FB99: mov     edx, r10d
 * 000000014029FB9C: mov     rcx, r14
 * 000000014029FB9F: call    KeGuardDispatchICall
 * 000000014029FBA4: mov     r15, rax
 * 000000014029FBA7: xor     eax, eax
 * 000000014029FBA9: jmp     short loc_14029FBAE
 * 000000014029FBAB: mov     r15, rax
 * 000000014029FBAE: mov     [rbp+2150h+var_2130], r15
 * 000000014029FBB2: test    r15, r15
 * 000000014029FBB5: jz      loc_14029FCF2
 * 000000014029FBBB: mov     rbx, r15
 * 000000014029FBBE: cmp     [r15], rax
 * 000000014029FBC1: jz      loc_14029FCE3
 * 000000014029FBC7: mov     r15, [rbp+2150h+var_2110]
 * 000000014029FBCB: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 000000014029FBCF: mov     rcx, [rbx]
 * 000000014029FBD2: mov     rax, [rsi+1D0h]
 * 000000014029FBD9: call    KeGuardDispatchICall
 * 000000014029FBDE: mov     rcx, [rbx+8]
 * 000000014029FBE2: movzx   edx, [rbp+2150h+var_208F]
 * 000000014029FBE9: mov     r12, rcx
 * 000000014029FBEC: movzx   eax, dil
 * 000000014029FBF0: and     r12, 0FFFFFFFFFFFF0000h
 * 000000014029FBF7: cmp     r12, r15
 * 000000014029FBFA: cmovz   edx, eax
 * 000000014029FBFD: mov     rax, [rsi+3E0h]
 * 000000014029FC04: shr     rcx, 6
 * 000000014029FC08: and     cl, 0Fh
 * 000000014029FC0B: call    KeGuardDispatchICall
 * 000000014029FC10: xor     r9d, r9d
 * 000000014029FC13: test    eax, eax
 * 000000014029FC15: jnz     loc_14029FCCE
 * 000000014029FC1B: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029FC25: lea     r10d, [r9+1]
 * 000000014029FC29: jz      short loc_14029FC6C
 * 000000014029FC2B: mov     rcx, [rsi+8B0h]
 * 000000014029FC32: lea     edx, [rax+30h]
 * 000000014029FC35: lea     r8d, [r9+6]
 * 000000014029FC39: mov     rax, [r13+0]
 * 000000014029FC3D: add     edx, 0FFFFFFF8h
 * 000000014029FC40: mov     [rcx], rax
 * 000000014029FC43: add     r13, 8
 * 000000014029FC47: add     rcx, 8
 * 000000014029FC4B: sub     r8, r10
 * 000000014029FC4E: jnz     short loc_14029FC39
 * 000000014029FC50: test    edx, edx
 * 000000014029FC52: jz      short loc_14029FC65
 * 000000014029FC54: mov     al, [r13+0]
 * 000000014029FC58: add     r13, r10
 * 000000014029FC5B: mov     [rcx], al
 * 000000014029FC5D: add     rcx, r10
 * 000000014029FC60: add     edx, 0FFFFFFFFh
 * 000000014029FC63: jnz     short loc_14029FC54
 * 000000014029FC65: mov     r13, [rsi+8B0h]
 * 000000014029FC6C: mov     [r13+18h], r12
 * 000000014029FC70: mov     rax, [rbx]
 * 000000014029FC73: mov     [r13+20h], rax
 * 000000014029FC77: mov     eax, [rbx+8]
 * 000000014029FC7A: shr     rax, 6
 * 000000014029FC7E: and     al, 0Fh
 * 000000014029FC80: mov     [r13+28h], al
 * 000000014029FC84: cmp     [rsi+750h], r9d
 * 000000014029FC8B: jnz     short loc_14029FCCE
 * 000000014029FC8D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029FC97: add     rax, rsi
 * 000000014029FC9A: mov     [rsi+758h], rax
 * 000000014029FCA1: mov     rax, 0B3B74BDEE4453415h
 * 000000014029FCAB: add     rax, r13
 * 000000014029FCAE: mov     [rsi+760h], rax
 * 000000014029FCB5: movsxd  rax, dword ptr [r13+0]
 * 000000014029FCB9: mov     [rsi+768h], rax
 * 000000014029FCC0: mov     [rsi+770h], r14
 * 000000014029FCC7: mov     [rsi+750h], r10d
 * 000000014029FCCE: add     rbx, 30h ; '0'
 * 000000014029FCD2: cmp     [rbx], r9
 * 000000014029FCD5: jnz     loc_14029FBCB
 * 000000014029FCDB: mov     r15, [rbp+2150h+var_2130]
 * 000000014029FCDF: mov     r12, [rbp+2150h+var_2138]
 * 000000014029FCE3: mov     rax, [rsi+0F0h]
 * 000000014029FCEA: mov     rcx, r15
 * 000000014029FCED: call    KeGuardDispatchICall
 * 000000014029FCF2: mov     rax, [rsi+398h]
 * 000000014029FCF9: mov     rcx, r14
 * 000000014029FCFC: call    KeGuardDispatchICall
 * 000000014029FD01: mov     r15d, [rbp+2150h+var_20F0]
 * 000000014029FD05: mov     eax, 8000h
 * 000000014029FD0A: add     [rsi+688h], eax
 * 000000014029FD10: mov     rbx, [rbp+2150h+var_2148]
 * 000000014029FD14: xor     r13d, r13d
 * 000000014029FD17: mov     rax, [rsi+3A0h]
 * 000000014029FD1E: inc     r15d
 * 000000014029FD21: mov     rcx, r14
 * 000000014029FD24: mov     [rbp+2150h+var_20F0], r15d
 * 000000014029FD28: call    KeGuardDispatchICall
 * 000000014029FD2D: mov     r14, rax
 * 000000014029FD30: test    rax, rax
 * 000000014029FD33: jnz     loc_14029F634
 * 000000014029FD39: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014029FD40: mov     r12, [rsi+498h]
 * 000000014029FD47: mov     rax, [rsi+390h]
 * 000000014029FD4E: mov     rcx, r12
 * 000000014029FD51: call    KeGuardDispatchICall
 * 000000014029FD56: test    eax, eax
 * 000000014029FD58: js      loc_1402A00D1
 * 000000014029FD5E: mov     rax, [rsi+3C8h]
 * 000000014029FD65: mov     rcx, r12
 * 000000014029FD68: call    KeGuardDispatchICall
 * 000000014029FD6D: mov     bl, al
 * 000000014029FD6F: mov     byte ptr [rbp+2150h+var_2054], al
 * 000000014029FD75: mov     rax, [rsi+3D0h]
 * 000000014029FD7C: lea     rdx, [rbp+2150h+var_20A0]
 * 000000014029FD83: mov     rcx, r12
 * 000000014029FD86: call    KeGuardDispatchICall
 * 000000014029FD8B: mov     r13b, al
 * 000000014029FD8E: mov     rcx, r12
 * 000000014029FD91: mov     rax, [rsi+3D8h]
 * 000000014029FD98: call    KeGuardDispatchICall
 * 000000014029FD9D: xor     r11d, r11d
 * 000000014029FDA0: mov     [rbp+2150h+var_2110], rax
 * 000000014029FDA4: cmp     bl, 72h ; 'r'
 * 000000014029FDA7: jz      short loc_14029FE18
 * 000000014029FDA9: cmp     [rsi+750h], r11d
 * 000000014029FDB0: jnz     short loc_14029FE18
 * 000000014029FDB2: mov     rax, [rsi+548h]
 * 000000014029FDB9: movzx   ecx, bl
 * 000000014029FDBC: xor     rcx, 72h
 * 000000014029FDC0: mov     [rax+18h], rcx
 * 000000014029FDC4: cmp     [rsi+750h], r11d
 * 000000014029FDCB: jnz     short loc_14029FE18
 * 000000014029FDCD: mov     r10, [rbp+2150h+var_2138]
 * 000000014029FDD1: lea     r14d, [r11+1]
 * 000000014029FDD5: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029FDDF: mov     r8, 0B3B74BDEE4453415h
 * 000000014029FDE9: add     rax, rsi
 * 000000014029FDEC: mov     [rsi+758h], rax
 * 000000014029FDF3: lea     rax, [r10+r8]
 * 000000014029FDF7: mov     [rsi+760h], rax
 * 000000014029FDFE: movsxd  rax, dword ptr [r10]
 * 000000014029FE01: mov     [rsi+768h], rax
 * 000000014029FE08: mov     [rsi+770h], r12
 * 000000014029FE0F: mov     [rsi+750h], r14d
 * 000000014029FE16: jmp     short loc_14029FE2C
 * 000000014029FE18: mov     r10, [rbp+2150h+var_2138]
 * 000000014029FE1C: mov     r8, 0B3B74BDEE4453415h
 * 000000014029FE26: mov     r14d, 1
 * 000000014029FE2C: movzx   ecx, bl
 * 000000014029FE2F: mov     dl, r11b
 * 000000014029FE32: and     ecx, 7
 * 000000014029FE35: mov     r9b, r11b
 * 000000014029FE38: sub     ecx, 1
 * 000000014029FE3B: jz      short loc_14029FE95
 * 000000014029FE3D: cmp     ecx, 1
 * 000000014029FE40: jz      short loc_14029FE89
 * 000000014029FE42: test    bl, 7
 * 000000014029FE45: jz      short loc_14029FE97
 * 000000014029FE47: cmp     [rsi+750h], r11d
 * 000000014029FE4E: jnz     short loc_14029FE97
 * 000000014029FE50: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014029FE5A: add     rax, rsi
 * 000000014029FE5D: mov     [rsi+758h], rax
 * 000000014029FE64: lea     rax, [r10+r8]
 * 000000014029FE68: mov     [rsi+760h], rax
 * 000000014029FE6F: movsxd  rax, dword ptr [r10]
 * 000000014029FE72: mov     [rsi+768h], rax
 * 000000014029FE79: mov     [rsi+770h], r12
 * 000000014029FE80: mov     [rsi+750h], r14d
 * 000000014029FE87: jmp     short loc_14029FE97
 * 000000014029FE89: mov     eax, 10h
 * 000000014029FE8E: mov     dl, al
 * 000000014029FE90: mov     r9b, al
 * 000000014029FE93: jmp     short loc_14029FE97
 * 000000014029FE95: mov     dl, 30h ; '0'
 * 000000014029FE97: mov     r8, [rsi+580h]
 * 000000014029FE9E: movzx   ecx, bl
 * 000000014029FEA1: mov     rbx, 0A3A03F5891C8B4E8h
 * 000000014029FEAB: shr     rcx, 4
 * 000000014029FEAF: mov     al, [r8+rcx*2]
 * 000000014029FEB3: or      al, dl
 * 000000014029FEB5: mov     rdx, 0B3B74BDEE4453415h
 * 000000014029FEBF: cmp     al, r13b
 * 000000014029FEC2: jz      short loc_14029FEFB
 * 000000014029FEC4: cmp     [rsi+750h], r11d
 * 000000014029FECB: jnz     short loc_14029FEFB
 * 000000014029FECD: lea     rax, [rsi+rbx]
 * 000000014029FED1: mov     [rsi+758h], rax
 * 000000014029FED8: lea     rax, [r10+rdx]
 * 000000014029FEDC: mov     [rsi+760h], rax
 * 000000014029FEE3: movsxd  rax, dword ptr [r10]
 * 000000014029FEE6: mov     [rsi+768h], rax
 * 000000014029FEED: mov     [rsi+770h], r12
 * 000000014029FEF4: mov     [rsi+750h], r14d
 * 000000014029FEFB: mov     al, [r8+rcx*2+1]
 * 000000014029FF00: or      al, r9b
 * 000000014029FF03: cmp     al, [rbp+2150h+var_20A0]
 * 000000014029FF09: jz      short loc_14029FF42
 * 000000014029FF0B: cmp     [rsi+750h], r11d
 * 000000014029FF12: jnz     short loc_14029FF42
 * 000000014029FF14: lea     rax, [rsi+rbx]
 * 000000014029FF18: mov     [rsi+758h], rax
 * 000000014029FF1F: lea     rax, [r10+rdx]
 * 000000014029FF23: mov     [rsi+760h], rax
 * 000000014029FF2A: movsxd  rax, dword ptr [r10]
 * 000000014029FF2D: mov     [rsi+768h], rax
 * 000000014029FF34: mov     [rsi+770h], r12
 * 000000014029FF3B: mov     [rsi+750h], r14d
 * 000000014029FF42: cmp     r12, [rsi+498h]
 * 000000014029FF49: jz      short loc_14029FF65
 * 000000014029FF4B: mov     rax, [rsi+3C0h]
 * 000000014029FF52: mov     edx, r14d
 * 000000014029FF55: mov     rcx, r12
 * 000000014029FF58: call    KeGuardDispatchICall
 * 000000014029FF5D: mov     r14, rax
 * 000000014029FF60: xor     r11d, r11d
 * 000000014029FF63: jmp     short loc_14029FF68
 * 000000014029FF65: mov     r14, r11
 * 000000014029FF68: mov     [rbp+2150h+var_2130], r14
 * 000000014029FF6C: test    r14, r14
 * 000000014029FF6F: jz      loc_1402A00B4
 * 000000014029FF75: mov     rbx, r14
 * 000000014029FF78: cmp     [r14], r11
 * 000000014029FF7B: jz      loc_1402A00A5
 * 000000014029FF81: mov     rdi, [rbp+2150h+var_2110]
 * 000000014029FF85: mov     r14, [rbp+2150h+var_2138]
 * 000000014029FF89: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 000000014029FF8D: mov     rcx, [rbx]
 * 000000014029FF90: mov     rax, [rsi+1D0h]
 * 000000014029FF97: call    KeGuardDispatchICall
 * 000000014029FF9C: mov     rcx, [rbx+8]
 * 000000014029FFA0: movzx   edx, [rbp+2150h+var_20A0]
 * 000000014029FFA7: mov     r15, rcx
 * 000000014029FFAA: movzx   eax, r13b
 * 000000014029FFAE: and     r15, 0FFFFFFFFFFFF0000h
 * 000000014029FFB5: cmp     r15, rdi
 * 000000014029FFB8: cmovz   edx, eax
 * 000000014029FFBB: mov     rax, [rsi+3E0h]
 * 000000014029FFC2: shr     rcx, 6
 * 000000014029FFC6: and     cl, 0Fh
 * 000000014029FFC9: call    KeGuardDispatchICall
 * 000000014029FFCE: xor     r9d, r9d
 * 000000014029FFD1: test    eax, eax
 * 000000014029FFD3: jnz     loc_1402A0089
 * 000000014029FFD9: test    dword ptr [rsi+7D8h], 40000000h
 * 000000014029FFE3: lea     r10d, [r9+1]
 * 000000014029FFE7: jz      short loc_1402A0028
 * 000000014029FFE9: mov     rcx, [rsi+8B0h]
 * 000000014029FFF0: lea     edx, [rax+30h]
 * 000000014029FFF3: lea     r8d, [r9+6]
 * 000000014029FFF7: mov     rax, [r14]
 * 000000014029FFFA: add     edx, 0FFFFFFF8h
 * 000000014029FFFD: mov     [rcx], rax
 * 00000001402A0000: add     r14, 8
 * 00000001402A0004: add     rcx, 8
 * 00000001402A0008: sub     r8, r10
 * 00000001402A000B: jnz     short loc_14029FFF7
 * 00000001402A000D: test    edx, edx
 * 00000001402A000F: jz      short loc_1402A0021
 * 00000001402A0011: mov     al, [r14]
 * 00000001402A0014: add     r14, r10
 * 00000001402A0017: mov     [rcx], al
 * 00000001402A0019: add     rcx, r10
 * 00000001402A001C: add     edx, 0FFFFFFFFh
 * 00000001402A001F: jnz     short loc_1402A0011
 * 00000001402A0021: mov     r14, [rsi+8B0h]
 * 00000001402A0028: mov     [r14+18h], r15
 * 00000001402A002C: mov     rax, [rbx]
 * 00000001402A002F: mov     [r14+20h], rax
 * 00000001402A0033: mov     eax, [rbx+8]
 * 00000001402A0036: shr     rax, 6
 * 00000001402A003A: and     al, 0Fh
 * 00000001402A003C: mov     [r14+28h], al
 * 00000001402A0040: cmp     [rsi+750h], r9d
 * 00000001402A0047: jnz     short loc_1402A0089
 * 00000001402A0049: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A0053: add     rax, rsi
 * 00000001402A0056: mov     [rsi+758h], rax
 * 00000001402A005D: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A0067: add     rax, r14
 * 00000001402A006A: mov     [rsi+760h], rax
 * 00000001402A0071: movsxd  rax, dword ptr [r14]
 * 00000001402A0074: mov     [rsi+768h], rax
 * 00000001402A007B: mov     [rsi+770h], r12
 * 00000001402A0082: mov     [rsi+750h], r10d
 * 00000001402A0089: add     rbx, 30h ; '0'
 * 00000001402A008D: cmp     [rbx], r9
 * 00000001402A0090: jnz     loc_14029FF89
 * 00000001402A0096: mov     r14, [rbp+2150h+var_2130]
 * 00000001402A009A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A00A1: mov     r15d, [rbp+2150h+var_20F0]
 * 00000001402A00A5: mov     rax, [rsi+0F0h]
 * 00000001402A00AC: mov     rcx, r14
 * 00000001402A00AF: call    KeGuardDispatchICall
 * 00000001402A00B4: mov     rax, [rsi+398h]
 * 00000001402A00BB: mov     rcx, r12
 * 00000001402A00BE: call    KeGuardDispatchICall
 * 00000001402A00C3: mov     eax, 8000h
 * 00000001402A00C8: add     [rsi+688h], eax
 * 00000001402A00CE: xor     r13d, r13d
 * 00000001402A00D1: mov     rcx, [rbp+2150h+var_2148]
 * 00000001402A00D5: test    rcx, rcx
 * 00000001402A00D8: jz      short loc_1402A00E6
 * 00000001402A00DA: mov     rax, [rsi+1D0h]
 * 00000001402A00E1: call    KeGuardDispatchICall
 * 00000001402A00E6: shl     r15d, 8
 * 00000001402A00EA: add     [rsi+688h], r15d
 * 00000001402A00F1: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A00F4: jmp     loc_14029B166
 * 00000001402A00F9: mov     r15d, 1
 * 00000001402A00FF: xor     r14d, r14d
 * 00000001402A0102: test    [r12+2Ah], r15b
 * 00000001402A0107: jz      short loc_1402A0144
 * 00000001402A0109: cmp     [rsi+7D0h], r14
 * 00000001402A0110: jz      loc_1402A030B
 * 00000001402A0116: mov     ecx, [rsi+7DCh]
 * 00000001402A011C: test    cl, 4
 * 00000001402A011F: jnz     loc_1402A030B
 * 00000001402A0125: cmp     [rsi+684h], r14d
 * 00000001402A012C: jnz     loc_1402A0302
 * 00000001402A0132: mov     eax, ecx
 * 00000001402A0134: shl     eax, 3
 * 00000001402A0137: xor     eax, ecx
 * 00000001402A0139: and     eax, 20h
 * 00000001402A013C: xor     eax, ecx
 * 00000001402A013E: mov     [rsi+7DCh], eax
 * 00000001402A0144: mov     r10, [r12+8]
 * 00000001402A0149: mov     r8d, [rsi+684h]
 * 00000001402A0150: mov     [rbp+2150h+var_20B8], r10
 * 00000001402A0157: lea     rax, [r8+r8*2]
 * 00000001402A015B: lea     rcx, [r10+rax*4]
 * 00000001402A015F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402A0169: lea     r9, [rcx+0Ch]
 * 00000001402A016D: mov     [rbp+2150h+var_2110], rcx
 * 00000001402A0171: mov     ecx, [r12+24h]
 * 00000001402A0176: mul     rcx
 * 00000001402A0179: mov     [rbp+2150h+var_20F8], r9
 * 00000001402A017D: mov     r11, rdx
 * 00000001402A0180: shr     r11, 3
 * 00000001402A0184: mov     eax, r11d
 * 00000001402A0187: mov     [rbp+2150h+var_2108], r11
 * 00000001402A018B: lea     ebx, [r11-1]
 * 00000001402A018F: lea     rcx, [rax+rax*2]
 * 00000001402A0193: mov     [rbp+2150h+var_2128], ebx
 * 00000001402A0196: lea     rax, [r10+rcx*4]
 * 00000001402A019A: mov     r10d, ebx
 * 00000001402A019D: add     r10, 7
 * 00000001402A01A1: mov     [rbp+2150h+var_20C8], rax
 * 00000001402A01A8: lea     rax, [r12+30h]
 * 00000001402A01AD: and     r10, 0FFFFFFFFFFFFFFF8h
 * 00000001402A01B1: add     r10, rax
 * 00000001402A01B4: lea     rdx, [r8+rax]
 * 00000001402A01B8: movzx   eax, word ptr [r12+28h]
 * 00000001402A01BE: mov     [rbp+2150h+var_2148], rdx
 * 00000001402A01C2: mov     [rbp+2150h+var_20A8], r10
 * 00000001402A01C9: lea     rcx, [rax+rax*2]
 * 00000001402A01CD: lea     rax, [r10+rcx*8]
 * 00000001402A01D1: mov     [rbp+2150h+var_20E0], rax
 * 00000001402A01D5: cmp     r8d, ebx
 * 00000001402A01D8: jnb     loc_1402A045E
 * 00000001402A01DE: mov     rdi, [rbp+2150h+var_2110]
 * 00000001402A01E2: cmp     [rdx], r14b
 * 00000001402A01E5: jl      loc_1402A03F3
 * 00000001402A01EB: mov     eax, [rdi+4]
 * 00000001402A01EE: mov     r9d, [r9]
 * 00000001402A01F1: mov     r12d, eax
 * 00000001402A01F4: sub     r9d, eax
 * 00000001402A01F7: mov     rax, [rbp+2150h+var_2138]
 * 00000001402A01FB: mov     r15d, r9d
 * 00000001402A01FE: mov     [rbp+2150h+var_2110], r15
 * 00000001402A0202: add     r12, [rax+18h]
 * 00000001402A0206: add     [rsi+688h], r9d
 * 00000001402A020D: mov     r10, r12
 * 00000001402A0210: mov     ebx, [rsi+674h]
 * 00000001402A0216: mov     rax, r12
 * 00000001402A0219: mov     r14, [rsi+678h]
 * 00000001402A0220: lea     rcx, [r9+r12]
 * 00000001402A0224: mov     [rbp+2150h+var_2080], r12
 * 00000001402A022B: cmp     r12, rcx
 * 00000001402A022E: jnb     short loc_1402A0241
 * 00000001402A0230: mov     r8d, 40h ; '@'
 * 00000001402A0236: prefetchnta byte ptr [rax]
 * 00000001402A0239: add     rax, r8
 * 00000001402A023C: cmp     rax, rcx
 * 00000001402A023F: jb      short loc_1402A0236
 * 00000001402A0241: mov     r11d, r9d
 * 00000001402A0244: mov     r8, r14
 * 00000001402A0247: shr     r11d, 7
 * 00000001402A024B: mov     r13d, 1
 * 00000001402A0251: test    r11d, r11d
 * 00000001402A0254: jz      short loc_1402A02BA
 * 00000001402A0256: mov     r15, 7010008004002001h
 * 00000001402A0260: mov     eax, 8
 * 00000001402A0265: xor     r8, [r10]
 * 00000001402A0268: mov     ecx, ebx
 * 00000001402A026A: rol     r8, cl
 * 00000001402A026D: xor     r8, [r10+8]
 * 00000001402A0271: add     r10, 10h
 * 00000001402A0275: rol     r8, cl
 * 00000001402A0278: sub     rax, r13
 * 00000001402A027B: jnz     short loc_1402A0265
 * 00000001402A027D: mov     rcx, r10
 * 00000001402A0280: sub     rcx, r12
 * 00000001402A0283: xor     rcx, r14
 * 00000001402A0286: mov     rax, rcx
 * 00000001402A0289: rol     rax, 11h
 * 00000001402A028D: xor     rcx, rax
 * 00000001402A0290: mov     rax, r15
 * 00000001402A0293: mul     rcx
 * 00000001402A0296: xor     ebx, eax
 * 00000001402A0298: mov     [rbp+2150h+var_1B88], rdx
 * 00000001402A029F: xor     ebx, edx
 * 00000001402A02A1: and     ebx, 3Fh
 * 00000001402A02A4: cmovz   ebx, r13d
 * 00000001402A02A8: add     r11d, 0FFFFFFFFh
 * 00000001402A02AC: jnz     short loc_1402A0260
 * 00000001402A02AE: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A02B2: mov     r15, [rbp+2150h+var_2110]
 * 00000001402A02B6: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A02BA: and     r9d, 7Fh
 * 00000001402A02BE: cmp     r9d, 8
 * 00000001402A02C2: jb      short loc_1402A02E0
 * 00000001402A02C4: mov     eax, r9d
 * 00000001402A02C7: shr     rax, 3
 * 00000001402A02CB: xor     r8, [r10]
 * 00000001402A02CE: mov     ecx, ebx
 * 00000001402A02D0: rol     r8, cl
 * 00000001402A02D3: add     r10, 8
 * 00000001402A02D7: add     r9d, 0FFFFFFF8h
 * 00000001402A02DB: sub     rax, r13
 * 00000001402A02DE: jnz     short loc_1402A02CB
 * 00000001402A02E0: xor     r14d, r14d
 * 00000001402A02E3: test    r9d, r9d
 * 00000001402A02E6: jz      short loc_1402A02FD
 * 00000001402A02E8: movzx   eax, byte ptr [r10]
 * 00000001402A02EC: mov     ecx, ebx
 * 00000001402A02EE: xor     r8, rax
 * 00000001402A02F1: add     r10, r13
 * 00000001402A02F4: rol     r8, cl
 * 00000001402A02F7: add     r9d, 0FFFFFFFFh
 * 00000001402A02FB: jnz     short loc_1402A02E8
 * 00000001402A02FD: mov     rax, r8
 * 00000001402A0300: jmp     short loc_1402A031D
 * 00000001402A0302: test    cl, 20h
 * 00000001402A0305: jz      loc_1402A0144
 * 00000001402A030B: xor     r13d, r13d
 * 00000001402A030E: mov     [rsi+684h], r13d
 * 00000001402A0315: jmp     loc_14029B166
 * 00000001402A031A: xor     r8b, al
 * 00000001402A031D: shr     rax, 7
 * 00000001402A0321: test    rax, rax
 * 00000001402A0324: jnz     short loc_1402A031A
 * 00000001402A0326: movzx   eax, byte ptr [rdx]
 * 00000001402A0329: movzx   r13d, r8b
 * 00000001402A032D: and     eax, 7Fh
 * 00000001402A0330: and     r13d, 7Fh
 * 00000001402A0334: cmp     r13d, eax
 * 00000001402A0337: jz      loc_1402A03DA
 * 00000001402A033D: test    r15, r15
 * 00000001402A0340: jz      loc_1402A05EC
 * 00000001402A0346: mov     eax, [rsi+7DCh]
 * 00000001402A034C: mov     ecx, 40h ; '@'
 * 00000001402A0351: test    cl, al
 * 00000001402A0353: jz      loc_1402A05EC
 * 00000001402A0359: mov     r14, cr8
 * 00000001402A035D: mov     rbx, r12
 * 00000001402A0360: dec     r15
 * 00000001402A0363: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A036A: add     r12, r15
 * 00000001402A036D: or      r12, 0FFFh
 * 00000001402A0374: lea     r15, [rbx-1]
 * 00000001402A0378: mov     eax, 2
 * 00000001402A037D: mov     cr8, rax
 * 00000001402A0381: mov     rax, [rsi+450h]
 * 00000001402A0388: xor     edx, edx
 * 00000001402A038A: mov     rcx, rbx
 * 00000001402A038D: call    KeGuardDispatchICall
 * 00000001402A0392: cmp     eax, 0C000022Dh
 * 00000001402A0397: jnz     short loc_1402A03B3
 * 00000001402A0399: mov     eax, 1
 * 00000001402A039E: cmp     r14b, al
 * 00000001402A03A1: ja      short loc_1402A03BB
 * 00000001402A03A3: movzx   eax, r14b
 * 00000001402A03A7: mov     cr8, rax
 * 00000001402A03AB: mov     al, [rbx]
 * 00000001402A03AD: mov     rax, cr8
 * 00000001402A03B1: jmp     short loc_1402A0378
 * 00000001402A03B3: test    eax, eax
 * 00000001402A03B5: js      loc_1402A05D6
 * 00000001402A03BB: mov     eax, 1000h
 * 00000001402A03C0: add     rbx, rax
 * 00000001402A03C3: add     r15, rax
 * 00000001402A03C6: cmp     r15, r12
 * 00000001402A03C9: jnz     short loc_1402A0381
 * 00000001402A03CB: movzx   eax, r14b
 * 00000001402A03CF: mov     cr8, rax
 * 00000001402A03D3: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A03D7: xor     r14d, r14d
 * 00000001402A03DA: mov     r15d, 1
 * 00000001402A03E0: mov     r9, [rbp+2150h+var_20F8]
 * 00000001402A03E4: mov     eax, 40h ; '@'
 * 00000001402A03E9: add     [rsi+688h], eax
 * 00000001402A03EF: mov     r13, [rbp+2150h+var_2130]
 * 00000001402A03F3: mov     eax, 0Ch
 * 00000001402A03F8: add     rdx, r15
 * 00000001402A03FB: add     r9, rax
 * 00000001402A03FE: mov     [rbp+2150h+var_2148], rdx
 * 00000001402A0402: add     rdi, rax
 * 00000001402A0405: mov     [rbp+2150h+var_20F8], r9
 * 00000001402A0409: cmp     r9, [rbp+2150h+var_20C8]
 * 00000001402A0410: jnb     short loc_1402A0422
 * 00000001402A0412: mov     eax, [r13+0]
 * 00000001402A0416: cmp     [rsi+688h], eax
 * 00000001402A041C: jl      loc_1402A01E2
 * 00000001402A0422: sub     rdi, [rbp+2150h+var_20B8]
 * 00000001402A0429: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001402A0433: mov     r10, [rbp+2150h+var_20A8]
 * 00000001402A043A: mov     r11, [rbp+2150h+var_2108]
 * 00000001402A043E: mov     ebx, [rbp+2150h+var_2128]
 * 00000001402A0441: imul    rdi
 * 00000001402A0444: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A044B: sar     rdx, 1
 * 00000001402A044E: mov     rax, rdx
 * 00000001402A0451: shr     rax, 3Fh
 * 00000001402A0455: add     rdx, rax
 * 00000001402A0458: mov     [rsi+684h], edx
 * 00000001402A045E: mov     ecx, [rsi+684h]
 * 00000001402A0464: cmp     ecx, ebx
 * 00000001402A0466: jb      loc_14029B6E3
 * 00000001402A046C: mov     eax, [rsi+68Ch]
 * 00000001402A0472: cmp     [rsi+688h], eax
 * 00000001402A0478: jge     loc_14029B6E3
 * 00000001402A047E: sub     ecx, r11d
 * 00000001402A0481: mov     edx, 0Ch
 * 00000001402A0486: add     ecx, r15d
 * 00000001402A0489: lea     rcx, [rcx+rcx*2]
 * 00000001402A048D: lea     rcx, [r10+rcx*8]
 * 00000001402A0491: mov     [rbp+2150h+var_20F8], rcx
 * 00000001402A0495: mov     rdi, [rbp+2150h+var_2138]
 * 00000001402A0499: lea     r15, [rcx+8]
 * 00000001402A049D: mov     eax, 2
 * 00000001402A04A2: mov     [rbp+2150h+var_2130], r15
 * 00000001402A04A6: mov     [rbp+2150h+var_2148], rax
 * 00000001402A04AA: xor     r13d, r13d
 * 00000001402A04AD: lea     ecx, [rax-1]
 * 00000001402A04B0: cmp     [r15], r13d
 * 00000001402A04B3: jl      loc_1402A0731
 * 00000001402A04B9: mov     eax, [r15-8]
 * 00000001402A04BD: mov     r8d, [r15-4]
 * 00000001402A04C1: mov     r12d, eax
 * 00000001402A04C4: add     r12, [rdi+18h]
 * 00000001402A04C8: sub     r8d, eax
 * 00000001402A04CB: add     [rsi+688h], r8d
 * 00000001402A04D2: mov     r9, r12
 * 00000001402A04D5: mov     r10d, [rsi+674h]
 * 00000001402A04DC: mov     rax, r12
 * 00000001402A04DF: mov     r14, [rsi+678h]
 * 00000001402A04E6: lea     rcx, [r12+r8]
 * 00000001402A04EA: mov     [rbp+2150h+var_2110], r12
 * 00000001402A04EE: mov     r13d, r8d
 * 00000001402A04F1: cmp     r12, rcx
 * 00000001402A04F4: jnb     short loc_1402A0506
 * 00000001402A04F6: mov     edx, 40h ; '@'
 * 00000001402A04FB: prefetchnta byte ptr [rax]
 * 00000001402A04FE: add     rax, rdx
 * 00000001402A0501: cmp     rax, rcx
 * 00000001402A0504: jb      short loc_1402A04FB
 * 00000001402A0506: mov     r11d, r8d
 * 00000001402A0509: mov     rbx, r14
 * 00000001402A050C: shr     r11d, 7
 * 00000001402A0510: test    r11d, r11d
 * 00000001402A0513: jz      short loc_1402A0586
 * 00000001402A0515: mov     rsi, 7010008004002001h
 * 00000001402A051F: mov     edx, 8
 * 00000001402A0524: lea     r15d, [rdx-7]
 * 00000001402A0528: mov     rax, [r9]
 * 00000001402A052B: mov     ecx, r10d
 * 00000001402A052E: xor     rax, rbx
 * 00000001402A0531: mov     rbx, [r9+8]
 * 00000001402A0535: rol     rax, cl
 * 00000001402A0538: add     r9, 10h
 * 00000001402A053C: xor     rbx, rax
 * 00000001402A053F: rol     rbx, cl
 * 00000001402A0542: sub     rdx, r15
 * 00000001402A0545: jnz     short loc_1402A0528
 * 00000001402A0547: mov     rcx, r9
 * 00000001402A054A: sub     rcx, r12
 * 00000001402A054D: xor     rcx, r14
 * 00000001402A0550: mov     rax, rcx
 * 00000001402A0553: rol     rax, 11h
 * 00000001402A0557: xor     rcx, rax
 * 00000001402A055A: mov     rax, rsi
 * 00000001402A055D: mul     rcx
 * 00000001402A0560: xor     r10d, eax
 * 00000001402A0563: mov     [rbp+2150h+var_1B80], rdx
 * 00000001402A056A: xor     r10d, edx
 * 00000001402A056D: mov     rax, r15
 * 00000001402A0570: and     r10d, 3Fh
 * 00000001402A0574: cmovz   r10d, eax
 * 00000001402A0578: add     r11d, 0FFFFFFFFh
 * 00000001402A057C: jnz     short loc_1402A051F
 * 00000001402A057E: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A0582: mov     r15, [rbp+2150h+var_2130]
 * 00000001402A0586: and     r8d, 7Fh
 * 00000001402A058A: mov     r11d, 1
 * 00000001402A0590: cmp     r8d, 8
 * 00000001402A0594: jb      short loc_1402A05B3
 * 00000001402A0596: mov     edx, r8d
 * 00000001402A0599: shr     rdx, 3
 * 00000001402A059D: xor     rbx, [r9]
 * 00000001402A05A0: mov     ecx, r10d
 * 00000001402A05A3: rol     rbx, cl
 * 00000001402A05A6: add     r9, 8
 * 00000001402A05AA: add     r8d, 0FFFFFFF8h
 * 00000001402A05AE: sub     rdx, r11
 * 00000001402A05B1: jnz     short loc_1402A059D
 * 00000001402A05B3: test    r8d, r8d
 * 00000001402A05B6: jz      short loc_1402A05CE
 * 00000001402A05B8: movzx   eax, byte ptr [r9]
 * 00000001402A05BC: mov     ecx, r10d
 * 00000001402A05BF: xor     rbx, rax
 * 00000001402A05C2: add     r9, r11
 * 00000001402A05C5: rol     rbx, cl
 * 00000001402A05C8: add     r8d, 0FFFFFFFFh
 * 00000001402A05CC: jnz     short loc_1402A05B8
 * 00000001402A05CE: mov     rax, rbx
 * 00000001402A05D1: jmp     loc_1402A066E
 * 00000001402A05D6: movzx   eax, r14b
 * 00000001402A05DA: mov     cr8, rax
 * 00000001402A05DE: mov     r12, [rbp+2150h+var_2080]
 * 00000001402A05E5: xor     r14d, r14d
 * 00000001402A05E8: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A05EC: movzx   eax, byte ptr [rdx]
 * 00000001402A05EF: and     eax, 7Fh
 * 00000001402A05F2: cmp     [rsi+750h], r14d
 * 00000001402A05F9: jnz     loc_1402A03DA
 * 00000001402A05FF: mov     ecx, r13d
 * 00000001402A0602: xor     rcx, rax
 * 00000001402A0605: mov     rax, [rsi+548h]
 * 00000001402A060C: mov     [rax+18h], rcx
 * 00000001402A0610: cmp     [rsi+750h], r14d
 * 00000001402A0617: jnz     loc_1402A03DA
 * 00000001402A061D: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A0621: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A062B: add     rax, rsi
 * 00000001402A062E: mov     r15d, 1
 * 00000001402A0634: mov     [rsi+758h], rax
 * 00000001402A063B: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A0645: add     rax, rcx
 * 00000001402A0648: mov     [rsi+760h], rax
 * 00000001402A064F: movsxd  rax, dword ptr [rcx]
 * 00000001402A0652: mov     [rsi+768h], rax
 * 00000001402A0659: mov     [rsi+770h], r12
 * 00000001402A0660: mov     [rsi+750h], r15d
 * 00000001402A0667: jmp     loc_1402A03E0
 * 00000001402A066C: xor     ebx, eax
 * 00000001402A066E: shr     rax, 1Fh
 * 00000001402A0672: test    rax, rax
 * 00000001402A0675: jnz     short loc_1402A066C
 * 00000001402A0677: mov     eax, [r15]
 * 00000001402A067A: btr     ebx, 1Fh
 * 00000001402A067E: btr     eax, 1Fh
 * 00000001402A0682: cmp     ebx, eax
 * 00000001402A0684: jz      loc_1402A0722
 * 00000001402A068A: test    r13, r13
 * 00000001402A068D: jz      loc_1402A0794
 * 00000001402A0693: mov     eax, [rsi+7DCh]
 * 00000001402A0699: mov     ecx, 40h ; '@'
 * 00000001402A069E: test    cl, al
 * 00000001402A06A0: jz      loc_1402A0794
 * 00000001402A06A6: mov     r15, cr8
 * 00000001402A06AA: mov     r14, r12
 * 00000001402A06AD: dec     r12
 * 00000001402A06B0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A06B7: add     r13, r12
 * 00000001402A06BA: or      r13, 0FFFh
 * 00000001402A06C1: lea     r12, [r14-1]
 * 00000001402A06C5: mov     eax, 2
 * 00000001402A06CA: mov     cr8, rax
 * 00000001402A06CE: mov     rax, [rsi+450h]
 * 00000001402A06D5: xor     edx, edx
 * 00000001402A06D7: mov     rcx, r14
 * 00000001402A06DA: call    KeGuardDispatchICall
 * 00000001402A06DF: cmp     eax, 0C000022Dh
 * 00000001402A06E4: jnz     short loc_1402A0701
 * 00000001402A06E6: mov     eax, 1
 * 00000001402A06EB: cmp     r15b, al
 * 00000001402A06EE: ja      short loc_1402A0705
 * 00000001402A06F0: movzx   eax, r15b
 * 00000001402A06F4: mov     cr8, rax
 * 00000001402A06F8: mov     al, [r14]
 * 00000001402A06FB: mov     rax, cr8
 * 00000001402A06FF: jmp     short loc_1402A06C5
 * 00000001402A0701: test    eax, eax
 * 00000001402A0703: js      short loc_1402A0784
 * 00000001402A0705: mov     r11d, 1000h
 * 00000001402A070B: add     r14, r11
 * 00000001402A070E: add     r12, r11
 * 00000001402A0711: cmp     r12, r13
 * 00000001402A0714: jnz     short loc_1402A06CE
 * 00000001402A0716: movzx   eax, r15b
 * 00000001402A071A: mov     cr8, rax
 * 00000001402A071E: mov     r15, [rbp+2150h+var_2130]
 * 00000001402A0722: xor     r13d, r13d
 * 00000001402A0725: mov     rax, [rbp+2150h+var_2148]
 * 00000001402A0729: mov     edx, 0Ch
 * 00000001402A072E: lea     ecx, [rdx-0Bh]
 * 00000001402A0731: add     r15, rdx
 * 00000001402A0734: sub     rax, rcx
 * 00000001402A0737: mov     [rbp+2150h+var_2130], r15
 * 00000001402A073B: mov     [rbp+2150h+var_2148], rax
 * 00000001402A073F: jnz     loc_1402A04B0
 * 00000001402A0745: mov     rcx, [rbp+2150h+var_20F8]
 * 00000001402A0749: mov     eax, 1
 * 00000001402A074E: add     [rsi+684h], eax
 * 00000001402A0754: add     rcx, 18h
 * 00000001402A0758: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A075F: mov     [rbp+2150h+var_20F8], rcx
 * 00000001402A0763: cmp     rcx, [rbp+2150h+var_20E0]
 * 00000001402A0767: jz      loc_1402A3A4E
 * 00000001402A076D: mov     eax, [rsi+68Ch]
 * 00000001402A0773: cmp     [rsi+688h], eax
 * 00000001402A0779: jl      loc_1402A0495
 * 00000001402A077F: jmp     loc_1402A00F1
 * 00000001402A0784: movzx   eax, r15b
 * 00000001402A0788: mov     cr8, rax
 * 00000001402A078C: mov     r12, [rbp+2150h+var_2110]
 * 00000001402A0790: mov     r15, [rbp+2150h+var_2130]
 * 00000001402A0794: mov     eax, [r15]
 * 00000001402A0797: xor     r13d, r13d
 * 00000001402A079A: btr     eax, 1Fh
 * 00000001402A079E: cmp     [rsi+750h], r13d
 * 00000001402A07A5: jnz     loc_1402A0725
 * 00000001402A07AB: mov     ecx, ebx
 * 00000001402A07AD: xor     rcx, rax
 * 00000001402A07B0: mov     rax, [rsi+548h]
 * 00000001402A07B7: mov     [rax+18h], rcx
 * 00000001402A07BB: cmp     [rsi+750h], r13d
 * 00000001402A07C2: jnz     loc_1402A0725
 * 00000001402A07C8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A07D2: add     rax, rsi
 * 00000001402A07D5: mov     [rsi+758h], rax
 * 00000001402A07DC: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A07E6: add     rax, rdi
 * 00000001402A07E9: mov     [rsi+760h], rax
 * 00000001402A07F0: movsxd  rax, dword ptr [rdi]
 * 00000001402A07F3: mov     [rsi+768h], rax
 * 00000001402A07FA: lea     eax, [r13+1]
 * 00000001402A07FE: mov     [rsi+770h], r12
 * 00000001402A0805: mov     [rsi+750h], eax
 * 00000001402A080B: jmp     loc_1402A0725
 * 00000001402A0810: mov     r14, [r12+8]
 * 00000001402A0815: mov     r8d, [r12+10h]
 * 00000001402A081A: mov     r9, r14
 * 00000001402A081D: add     [rsi+688h], r8d
 * 00000001402A0824: mov     rax, r14
 * 00000001402A0827: mov     r11d, [rsi+674h]
 * 00000001402A082E: mov     r15, [rsi+678h]
 * 00000001402A0835: lea     rcx, [r14+r8]
 * 00000001402A0839: cmp     r14, rcx
 * 00000001402A083C: jnb     short loc_1402A084E
 * 00000001402A083E: mov     edx, 40h ; '@'
 * 00000001402A0843: prefetchnta byte ptr [rax]
 * 00000001402A0846: add     rax, rdx
 * 00000001402A0849: cmp     rax, rcx
 * 00000001402A084C: jb      short loc_1402A0843
 * 00000001402A084E: xor     r13d, r13d
 * 00000001402A0851: mov     r10d, r8d
 * 00000001402A0854: shr     r10d, 7
 * 00000001402A0858: mov     rbx, r15
 * 00000001402A085B: lea     r12d, [r13+1]
 * 00000001402A085F: test    r10d, r10d
 * 00000001402A0862: jz      short loc_1402A08C9
 * 00000001402A0864: mov     rsi, 7010008004002001h
 * 00000001402A086E: mov     edx, 8
 * 00000001402A0873: mov     rax, [r9]
 * 00000001402A0876: mov     ecx, r11d
 * 00000001402A0879: xor     rax, rbx
 * 00000001402A087C: mov     rbx, [r9+8]
 * 00000001402A0880: rol     rax, cl
 * 00000001402A0883: add     r9, 10h
 * 00000001402A0887: xor     rbx, rax
 * 00000001402A088A: rol     rbx, cl
 * 00000001402A088D: sub     rdx, r12
 * 00000001402A0890: jnz     short loc_1402A0873
 * 00000001402A0892: mov     rcx, r9
 * 00000001402A0895: sub     rcx, r14
 * 00000001402A0898: xor     rcx, r15
 * 00000001402A089B: mov     rax, rcx
 * 00000001402A089E: rol     rax, 11h
 * 00000001402A08A2: xor     rcx, rax
 * 00000001402A08A5: mov     rax, rsi
 * 00000001402A08A8: mul     rcx
 * 00000001402A08AB: xor     eax, edx
 * 00000001402A08AD: mov     [rbp+2150h+var_1B78], rdx
 * 00000001402A08B4: xor     r11d, eax
 * 00000001402A08B7: and     r11d, 3Fh
 * 00000001402A08BB: cmovz   r11d, r12d
 * 00000001402A08BF: add     r10d, 0FFFFFFFFh
 * 00000001402A08C3: jnz     short loc_1402A086E
 * 00000001402A08C5: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A08C9: and     r8d, 7Fh
 * 00000001402A08CD: cmp     r8d, 8
 * 00000001402A08D1: jb      short loc_1402A08F0
 * 00000001402A08D3: mov     edx, r8d
 * 00000001402A08D6: shr     rdx, 3
 * 00000001402A08DA: xor     rbx, [r9]
 * 00000001402A08DD: mov     ecx, r11d
 * 00000001402A08E0: rol     rbx, cl
 * 00000001402A08E3: add     r9, 8
 * 00000001402A08E7: add     r8d, 0FFFFFFF8h
 * 00000001402A08EB: sub     rdx, r12
 * 00000001402A08EE: jnz     short loc_1402A08DA
 * 00000001402A08F0: test    r8d, r8d
 * 00000001402A08F3: jz      short loc_1402A090B
 * 00000001402A08F5: movzx   eax, byte ptr [r9]
 * 00000001402A08F9: mov     ecx, r11d
 * 00000001402A08FC: xor     rbx, rax
 * 00000001402A08FF: add     r9, r12
 * 00000001402A0902: rol     rbx, cl
 * 00000001402A0905: add     r8d, 0FFFFFFFFh
 * 00000001402A0909: jnz     short loc_1402A08F5
 * 00000001402A090B: mov     rax, rbx
 * 00000001402A090E: jmp     short loc_1402A0912
 * 00000001402A0910: xor     ebx, eax
 * 00000001402A0912: shr     rax, 1Fh
 * 00000001402A0916: test    rax, rax
 * 00000001402A0919: jnz     short loc_1402A0910
 * 00000001402A091B: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A091F: btr     ebx, 1Fh
 * 00000001402A0923: mov     r12d, r13d
 * 00000001402A0926: cmp     ebx, [r8+14h]
 * 00000001402A092A: jz      loc_1402A0A01
 * 00000001402A0930: cmp     [r8], r13d
 * 00000001402A0933: jnz     short loc_1402A0942
 * 00000001402A0935: cmp     [r8+18h], r13d
 * 00000001402A0939: mov     eax, 1
 * 00000001402A093E: cmovnz  r12d, eax
 * 00000001402A0942: mov     ecx, [r8+10h]
 * 00000001402A0946: mov     rdx, [r8+8]
 * 00000001402A094A: test    rcx, rcx
 * 00000001402A094D: jz      loc_1402A0BAB
 * 00000001402A0953: mov     eax, [rsi+7DCh]
 * 00000001402A0959: mov     r9d, 40h ; '@'
 * 00000001402A095F: test    r9b, al
 * 00000001402A0962: jz      loc_1402A0BAB
 * 00000001402A0968: mov     r15, cr8
 * 00000001402A096C: lea     eax, [r9-3Eh]
 * 00000001402A0970: mov     cr8, rax
 * 00000001402A0974: mov     r14, rdx
 * 00000001402A0977: lea     rax, [rcx-1]
 * 00000001402A097B: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A0982: add     rax, rdx
 * 00000001402A0985: or      rax, 0FFFh
 * 00000001402A098B: mov     [rbp+2150h+var_2110], rax
 * 00000001402A098F: lea     r13, [r14-1]
 * 00000001402A0993: mov     rax, [rsi+450h]
 * 00000001402A099A: xor     edx, edx
 * 00000001402A099C: mov     rcx, r14
 * 00000001402A099F: call    KeGuardDispatchICall
 * 00000001402A09A4: cmp     eax, 0C000022Dh
 * 00000001402A09A9: jnz     short loc_1402A09D8
 * 00000001402A09AB: test    r12d, r12d
 * 00000001402A09AE: jnz     loc_1402A0B9C
 * 00000001402A09B4: lea     eax, [r12+1]
 * 00000001402A09B9: cmp     r15b, al
 * 00000001402A09BC: ja      short loc_1402A09E0
 * 00000001402A09BE: movzx   eax, r15b
 * 00000001402A09C2: mov     cr8, rax
 * 00000001402A09C6: mov     al, [r14]
 * 00000001402A09C9: mov     rax, cr8
 * 00000001402A09CD: lea     eax, [r12+2]
 * 00000001402A09D2: mov     cr8, rax
 * 00000001402A09D6: jmp     short loc_1402A0993
 * 00000001402A09D8: test    eax, eax
 * 00000001402A09DA: js      loc_1402A0B9C
 * 00000001402A09E0: mov     r11d, 1000h
 * 00000001402A09E6: add     r14, r11
 * 00000001402A09E9: add     r13, r11
 * 00000001402A09EC: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A09F0: jnz     short loc_1402A0993
 * 00000001402A09F2: movzx   eax, r15b
 * 00000001402A09F6: mov     cr8, rax
 * 00000001402A09FA: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A09FE: xor     r13d, r13d
 * 00000001402A0A01: mov     edx, 1
 * 00000001402A0A06: mov     eax, [r8+10h]
 * 00000001402A0A0A: mov     r12, [r8+8]
 * 00000001402A0A0E: shr     eax, 4
 * 00000001402A0A11: mov     [rbp+2150h+var_2148], r12
 * 00000001402A0A15: test    eax, eax
 * 00000001402A0A17: jz      loc_1402A00F1
 * 00000001402A0A1D: mov     edi, eax
 * 00000001402A0A1F: mov     [rbp+2150h+var_2130], rdi
 * 00000001402A0A23: mov     rax, [r12]
 * 00000001402A0A27: mov     rbx, r8
 * 00000001402A0A2A: mov     r15, [rax]
 * 00000001402A0A2D: mov     [rbp+2150h+var_1E10], r13
 * 00000001402A0A34: mov     rcx, r15
 * 00000001402A0A37: mov     rax, [rsi+300h]
 * 00000001402A0A3E: mov     r13d, edx
 * 00000001402A0A41: lea     rdx, [rbp+2150h+var_1E10]
 * 00000001402A0A48: call    KeGuardDispatchICall
 * 00000001402A0A4D: mov     r14, rax
 * 00000001402A0A50: test    rax, rax
 * 00000001402A0A53: jz      loc_1402A0B6E
 * 00000001402A0A59: mov     edi, 6
 * 00000001402A0A5E: xor     r12d, r12d
 * 00000001402A0A61: mov     rax, [rsi+1F8h]
 * 00000001402A0A68: lea     rdx, [rbp+2150h+var_1B70]
 * 00000001402A0A6F: mov     rcx, r14
 * 00000001402A0A72: inc     r13d
 * 00000001402A0A75: call    KeGuardDispatchICall
 * 00000001402A0A7A: test    rax, rax
 * 00000001402A0A7D: jnz     loc_1402A0B44
 * 00000001402A0A83: test    dword ptr [rsi+7D8h], 40000000h
 * 00000001402A0A8D: lea     r9d, [rax+1]
 * 00000001402A0A91: jz      short loc_1402A0AD0
 * 00000001402A0A93: mov     rcx, [rsi+8B0h]
 * 00000001402A0A9A: lea     edx, [rax+30h]
 * 00000001402A0A9D: mov     r8, rdi
 * 00000001402A0AA0: mov     rax, [rbx]
 * 00000001402A0AA3: add     edx, 0FFFFFFF8h
 * 00000001402A0AA6: mov     [rcx], rax
 * 00000001402A0AA9: add     rbx, 8
 * 00000001402A0AAD: add     rcx, 8
 * 00000001402A0AB1: sub     r8, r9
 * 00000001402A0AB4: jnz     short loc_1402A0AA0
 * 00000001402A0AB6: test    edx, edx
 * 00000001402A0AB8: jz      short loc_1402A0AC9
 * 00000001402A0ABA: mov     al, [rbx]
 * 00000001402A0ABC: add     rbx, r9
 * 00000001402A0ABF: mov     [rcx], al
 * 00000001402A0AC1: add     rcx, r9
 * 00000001402A0AC4: add     edx, 0FFFFFFFFh
 * 00000001402A0AC7: jnz     short loc_1402A0ABA
 * 00000001402A0AC9: mov     rbx, [rsi+8B0h]
 * 00000001402A0AD0: mov     [rbx+18h], r14
 * 00000001402A0AD4: mov     [rbx+20h], r15
 * 00000001402A0AD8: mov     rax, [rsi+548h]
 * 00000001402A0ADF: mov     [rax], rbx
 * 00000001402A0AE2: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402A0AE9: mov     rax, [rsi+548h]
 * 00000001402A0AF0: mov     [rax+8], r14
 * 00000001402A0AF4: mov     dword ptr [rax+14h], 1000h
 * 00000001402A0AFB: cmp     [rsi+750h], r12d
 * 00000001402A0B02: jnz     short loc_1402A0B44
 * 00000001402A0B04: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A0B0E: add     rax, rsi
 * 00000001402A0B11: mov     [rsi+758h], rax
 * 00000001402A0B18: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A0B22: add     rax, rbx
 * 00000001402A0B25: mov     [rsi+760h], rax
 * 00000001402A0B2C: movsxd  rax, dword ptr [rbx]
 * 00000001402A0B2F: mov     [rsi+768h], rax
 * 00000001402A0B36: mov     [rsi+770h], rdi
 * 00000001402A0B3D: mov     [rsi+750h], r9d
 * 00000001402A0B44: mov     rax, [rsi+300h]
 * 00000001402A0B4B: lea     rdx, [rbp+2150h+var_1E10]
 * 00000001402A0B52: mov     rcx, r15
 * 00000001402A0B55: call    KeGuardDispatchICall
 * 00000001402A0B5A: mov     r14, rax
 * 00000001402A0B5D: test    rax, rax
 * 00000001402A0B60: jnz     loc_1402A0A61
 * 00000001402A0B66: mov     r12, [rbp+2150h+var_2148]
 * 00000001402A0B6A: mov     rdi, [rbp+2150h+var_2130]
 * 00000001402A0B6E: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A0B72: mov     edx, 1
 * 00000001402A0B77: add     r12, 10h
 * 00000001402A0B7B: sub     rdi, rdx
 * 00000001402A0B7E: mov     [rbp+2150h+var_2148], r12
 * 00000001402A0B82: mov     [rbp+2150h+var_2130], rdi
 * 00000001402A0B86: lea     r13d, [rdx-1]
 * 00000001402A0B8A: jnz     loc_1402A0A23
 * 00000001402A0B90: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A0B97: jmp     loc_1402A00F1
 * 00000001402A0B9C: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A0BA0: xor     r13d, r13d
 * 00000001402A0BA3: movzx   eax, r15b
 * 00000001402A0BA7: mov     cr8, rax
 * 00000001402A0BAB: mov     eax, [r8+14h]
 * 00000001402A0BAF: cmp     [rsi+750h], r13d
 * 00000001402A0BB6: jnz     short loc_1402A0BC8
 * 00000001402A0BB8: mov     ecx, ebx
 * 00000001402A0BBA: xor     rcx, rax
 * 00000001402A0BBD: mov     rax, [rsi+548h]
 * 00000001402A0BC4: mov     [rax+18h], rcx
 * 00000001402A0BC8: mov     edx, 1
 * 00000001402A0BCD: mov     rcx, [r8+8]
 * 00000001402A0BD1: cmp     [rsi+750h], r13d
 * 00000001402A0BD8: jnz     loc_1402A0A06
 * 00000001402A0BDE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A0BE8: add     rax, rsi
 * 00000001402A0BEB: mov     [rsi+758h], rax
 * 00000001402A0BF2: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A0BFC: add     rax, r8
 * 00000001402A0BFF: mov     [rsi+760h], rax
 * 00000001402A0C06: movsxd  rax, dword ptr [r8]
 * 00000001402A0C09: mov     [rsi+768h], rax
 * 00000001402A0C10: mov     [rsi+770h], rcx
 * 00000001402A0C17: mov     [rsi+750h], edx
 * 00000001402A0C1D: jmp     loc_1402A0A06
 * 00000001402A0C22: mov     r8d, [r12+10h]
 * 00000001402A0C27: xor     r13d, r13d
 * 00000001402A0C2A: test    r8d, r8d
 * 00000001402A0C2D: jnz     loc_1402A1201
 * 00000001402A0C33: lea     rax, [r12+30h]
 * 00000001402A0C38: xor     r9d, r9d
 * 00000001402A0C3B: mov     [rbp+2150h+var_1D48], rax
 * 00000001402A0C42: lea     rcx, [rbp+2150h+var_1D50]
 * 00000001402A0C49: movzx   eax, word ptr [r12+28h]
 * 00000001402A0C4F: xor     r8d, r8d
 * 00000001402A0C52: mov     [rbp+2150h+var_1D50], ax
 * 00000001402A0C59: xor     edx, edx
 * 00000001402A0C5B: mov     [rbp+2150h+var_1D4E], ax
 * 00000001402A0C62: lea     rax, [rbp+2150h+var_1FC8]
 * 00000001402A0C69: mov     [rsp+1120h+var_10E8], rax
 * 00000001402A0C6E: mov     rax, [rsi+4C8h]
 * 00000001402A0C75: mov     [rsp+1120h+var_10F0], r13
 * 00000001402A0C7A: mov     byte ptr [rsp+1120h+var_10F8], r13b
 * 00000001402A0C7F: mov     [rsp+1120h+BugCheckParameter4], rax
 * 00000001402A0C84: mov     rax, [rsi+1D8h]
 * 00000001402A0C8B: call    KeGuardDispatchICall
 * 00000001402A0C90: test    eax, eax
 * 00000001402A0C92: js      loc_1402A00F1
 * 00000001402A0C98: mov     rax, [rbp+2150h+var_1FC8]
 * 00000001402A0C9F: mov     ecx, [rax+10h]
 * 00000001402A0CA2: lea     eax, [r13+10h]
 * 00000001402A0CA6: test    al, cl
 * 00000001402A0CA8: jnz     short loc_1402A0CC2
 * 00000001402A0CAA: mov     rcx, [rbp+2150h+var_1FC8]
 * 00000001402A0CB1: mov     rax, [rsi+1D0h]
 * 00000001402A0CB8: call    KeGuardDispatchICall
 * 00000001402A0CBD: jmp     loc_1402A00F1
 * 00000001402A0CC2: mov     rcx, [rsi+1D8h]
 * 00000001402A0CC9: lea     r8, [rbp+2150h+var_1D68]
 * 00000001402A0CD0: mov     rax, [rsi+1F0h]
 * 00000001402A0CD7: lea     rdx, [rbp+2150h+var_1EA0]
 * 00000001402A0CDE: call    KeGuardDispatchICall
 * 00000001402A0CE3: test    rax, rax
 * 00000001402A0CE6: jz      short loc_1402A0D0B
 * 00000001402A0CE8: mov     rax, [rsi+1E8h]
 * 00000001402A0CEF: mov     rcx, [rbp+2150h+var_1EA0]
 * 00000001402A0CF6: call    KeGuardDispatchICall
 * 00000001402A0CFB: test    rax, rax
 * 00000001402A0CFE: jz      short loc_1402A0D0B
 * 00000001402A0D00: mov     r14d, [rax+50h]
 * 00000001402A0D04: mov     [rbp+2150h+var_2094], r14d
 * 00000001402A0D0B: mov     rcx, [r12+18h]
 * 00000001402A0D10: lea     r8, [rbp+2150h+var_1CF8]
 * 00000001402A0D17: mov     rax, [rsi+1F0h]
 * 00000001402A0D1E: lea     rdx, [rbp+2150h+var_1E98]
 * 00000001402A0D25: call    KeGuardDispatchICall
 * 00000001402A0D2A: test    rax, rax
 * 00000001402A0D2D: jz      short loc_1402A0D50
 * 00000001402A0D2F: mov     rax, [rsi+1E8h]
 * 00000001402A0D36: mov     rcx, [rbp+2150h+var_1E98]
 * 00000001402A0D3D: call    KeGuardDispatchICall
 * 00000001402A0D42: test    rax, rax
 * 00000001402A0D45: jz      short loc_1402A0D50
 * 00000001402A0D47: mov     ebx, [rax+50h]
 * 00000001402A0D4A: mov     [rbp+2150h+var_20C0], ebx
 * 00000001402A0D50: mov     r15d, 40000000h
 * 00000001402A0D56: test    [rsi+7D8h], r15d
 * 00000001402A0D5D: jnz     short loc_1402A0D78
 * 00000001402A0D5F: mov     rax, [rbp+2150h+var_1FC8]
 * 00000001402A0D66: add     rax, 70h ; 'p'
 * 00000001402A0D6A: mov     [r12+8], rax
 * 00000001402A0D6F: mov     dword ptr [r12+10h], 0E0h
 * 00000001402A0D78: mov     rcx, [rbp+2150h+var_1FC8]
 * 00000001402A0D7F: mov     dl, r13b
 * 00000001402A0D82: mov     r10, [rbp+2150h+var_1EA0]
 * 00000001402A0D89: mov     r11, [rbp+2150h+var_1E98]
 * 00000001402A0D90: mov     r12d, r14d
 * 00000001402A0D93: movzx   eax, dl
 * 00000001402A0D96: mov     r9, [rcx+rax*8+70h]
 * 00000001402A0D9B: test    r14d, r14d
 * 00000001402A0D9E: jz      short loc_1402A0DB1
 * 00000001402A0DA0: lea     rax, [r10-1]
 * 00000001402A0DA4: add     rax, r12
 * 00000001402A0DA7: cmp     r9, r10
 * 00000001402A0DAA: jb      short loc_1402A0DB1
 * 00000001402A0DAC: cmp     r9, rax
 * 00000001402A0DAF: jbe     short loc_1402A0DD4
 * 00000001402A0DB1: mov     eax, ebx
 * 00000001402A0DB3: test    ebx, ebx
 * 00000001402A0DB5: jz      loc_1402A1124
 * 00000001402A0DBB: lea     r8, [r11-1]
 * 00000001402A0DBF: add     r8, rax
 * 00000001402A0DC2: cmp     r9, r11
 * 00000001402A0DC5: jb      loc_1402A1124
 * 00000001402A0DCB: cmp     r9, r8
 * 00000001402A0DCE: ja      loc_1402A1124
 * 00000001402A0DD4: add     dl, 1
 * 00000001402A0DD7: cmp     dl, 1Ch
 * 00000001402A0DDA: jb      short loc_1402A0D93
 * 00000001402A0DDC: test    [rsi+7D8h], r15d
 * 00000001402A0DE3: jnz     loc_1402A0CB1
 * 00000001402A0DE9: mov     r13, [rbp+2150h+var_2138]
 * 00000001402A0DED: mov     r14, [r13+8]
 * 00000001402A0DF1: mov     r9d, [r13+10h]
 * 00000001402A0DF5: mov     r10, r14
 * 00000001402A0DF8: add     [rsi+688h], r9d
 * 00000001402A0DFF: mov     rax, r14
 * 00000001402A0E02: mov     r11d, [rsi+674h]
 * 00000001402A0E09: mov     r15, [rsi+678h]
 * 00000001402A0E10: lea     rcx, [r14+r9]
 * 00000001402A0E14: cmp     r14, rcx
 * 00000001402A0E17: jnb     short loc_1402A0E29
 * 00000001402A0E19: mov     edx, 40h ; '@'
 * 00000001402A0E1E: prefetchnta byte ptr [rax]
 * 00000001402A0E21: add     rax, rdx
 * 00000001402A0E24: cmp     rax, rcx
 * 00000001402A0E27: jb      short loc_1402A0E1E
 * 00000001402A0E29: mov     ebx, r9d
 * 00000001402A0E2C: xor     edx, edx
 * 00000001402A0E2E: shr     ebx, 7
 * 00000001402A0E31: mov     r8, r15
 * 00000001402A0E34: test    ebx, ebx
 * 00000001402A0E36: jz      short loc_1402A0EA3
 * 00000001402A0E38: lea     esi, [rdx+1]
 * 00000001402A0E3B: mov     rdi, 7010008004002001h
 * 00000001402A0E45: mov     eax, 8
 * 00000001402A0E4A: xor     r8, [r10]
 * 00000001402A0E4D: mov     ecx, r11d
 * 00000001402A0E50: rol     r8, cl
 * 00000001402A0E53: xor     r8, [r10+8]
 * 00000001402A0E57: add     r10, 10h
 * 00000001402A0E5B: rol     r8, cl
 * 00000001402A0E5E: sub     rax, rsi
 * 00000001402A0E61: jnz     short loc_1402A0E4A
 * 00000001402A0E63: mov     rcx, r10
 * 00000001402A0E66: sub     rcx, r14
 * 00000001402A0E69: xor     rcx, r15
 * 00000001402A0E6C: mov     rax, rcx
 * 00000001402A0E6F: rol     rax, 11h
 * 00000001402A0E73: xor     rcx, rax
 * 00000001402A0E76: mov     rax, rdi
 * 00000001402A0E79: mul     rcx
 * 00000001402A0E7C: xor     r11d, eax
 * 00000001402A0E7F: mov     [rbp+2150h+var_1B68], rdx
 * 00000001402A0E86: xor     r11d, edx
 * 00000001402A0E89: and     r11d, 3Fh
 * 00000001402A0E8D: cmovz   r11d, esi
 * 00000001402A0E91: add     ebx, 0FFFFFFFFh
 * 00000001402A0E94: jnz     short loc_1402A0E45
 * 00000001402A0E96: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A0E9A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A0EA1: xor     edx, edx
 * 00000001402A0EA3: and     r9d, 7Fh
 * 00000001402A0EA7: mov     ebx, 1
 * 00000001402A0EAC: cmp     r9d, 8
 * 00000001402A0EB0: jb      short loc_1402A0ECF
 * 00000001402A0EB2: mov     eax, r9d
 * 00000001402A0EB5: shr     rax, 3
 * 00000001402A0EB9: xor     r8, [r10]
 * 00000001402A0EBC: mov     ecx, r11d
 * 00000001402A0EBF: rol     r8, cl
 * 00000001402A0EC2: add     r10, 8
 * 00000001402A0EC6: add     r9d, 0FFFFFFF8h
 * 00000001402A0ECA: sub     rax, rbx
 * 00000001402A0ECD: jnz     short loc_1402A0EB9
 * 00000001402A0ECF: test    r9d, r9d
 * 00000001402A0ED2: jz      short loc_1402A0EEA
 * 00000001402A0ED4: movzx   eax, byte ptr [r10]
 * 00000001402A0ED8: mov     ecx, r11d
 * 00000001402A0EDB: xor     r8, rax
 * 00000001402A0EDE: add     r10, rbx
 * 00000001402A0EE1: rol     r8, cl
 * 00000001402A0EE4: add     r9d, 0FFFFFFFFh
 * 00000001402A0EE8: jnz     short loc_1402A0ED4
 * 00000001402A0EEA: mov     rax, r8
 * 00000001402A0EED: jmp     short loc_1402A0EF2
 * 00000001402A0EEF: xor     r8d, eax
 * 00000001402A0EF2: shr     rax, 1Fh
 * 00000001402A0EF6: test    rax, rax
 * 00000001402A0EF9: jnz     short loc_1402A0EEF
 * 00000001402A0EFB: btr     r8d, 1Fh
 * 00000001402A0F00: mov     r10d, edx
 * 00000001402A0F03: mov     [r13+14h], r8d
 * 00000001402A0F07: mov     rax, [rbp+2150h+var_1FC8]
 * 00000001402A0F0E: mov     r14, [rax+50h]
 * 00000001402A0F12: test    r14, r14
 * 00000001402A0F15: jz      loc_1402A0F9B
 * 00000001402A0F1B: mov     r10d, [r14]
 * 00000001402A0F1E: mov     r8b, dl
 * 00000001402A0F21: lea     r9d, [r10-8]
 * 00000001402A0F25: shr     r9d, 3
 * 00000001402A0F29: test    r9d, r9d
 * 00000001402A0F2C: jz      short loc_1402A0F9B
 * 00000001402A0F2E: mov     r11, [rbp+2150h+var_1EA0]
 * 00000001402A0F35: mov     rbx, [rbp+2150h+var_1E98]
 * 00000001402A0F3C: mov     r15d, [rbp+2150h+var_20C0]
 * 00000001402A0F43: movzx   eax, r8b
 * 00000001402A0F47: mov     rcx, [r14+rax*8+8]
 * 00000001402A0F4C: test    rcx, rcx
 * 00000001402A0F4F: jz      short loc_1402A0F8E
 * 00000001402A0F51: test    r12, r12
 * 00000001402A0F54: jz      short loc_1402A0F67
 * 00000001402A0F56: lea     rax, [r11-1]
 * 00000001402A0F5A: add     rax, r12
 * 00000001402A0F5D: cmp     rcx, r11
 * 00000001402A0F60: jb      short loc_1402A0F67
 * 00000001402A0F62: cmp     rcx, rax
 * 00000001402A0F65: jbe     short loc_1402A0F8E
 * 00000001402A0F67: mov     rax, r15
 * 00000001402A0F6A: test    r15d, r15d
 * 00000001402A0F6D: jz      loc_1402A1098
 * 00000001402A0F73: lea     rdx, [rbx-1]
 * 00000001402A0F77: add     rdx, rax
 * 00000001402A0F7A: cmp     rcx, rbx
 * 00000001402A0F7D: jb      loc_1402A1096
 * 00000001402A0F83: cmp     rcx, rdx
 * 00000001402A0F86: ja      loc_1402A1096
 * 00000001402A0F8C: xor     edx, edx
 * 00000001402A0F8E: add     r8b, 1
 * 00000001402A0F92: movzx   eax, r8b
 * 00000001402A0F96: cmp     eax, r9d
 * 00000001402A0F99: jb      short loc_1402A0F43
 * 00000001402A0F9B: add     [rsi+688h], r10d
 * 00000001402A0FA2: mov     r9, r14
 * 00000001402A0FA5: mov     r11d, [rsi+674h]
 * 00000001402A0FAC: mov     rax, r14
 * 00000001402A0FAF: mov     r15, [rsi+678h]
 * 00000001402A0FB6: mov     ecx, r10d
 * 00000001402A0FB9: add     rcx, r14
 * 00000001402A0FBC: cmp     r14, rcx
 * 00000001402A0FBF: jnb     short loc_1402A0FD2
 * 00000001402A0FC1: mov     r8d, 40h ; '@'
 * 00000001402A0FC7: prefetchnta byte ptr [rax]
 * 00000001402A0FCA: add     rax, r8
 * 00000001402A0FCD: cmp     rax, rcx
 * 00000001402A0FD0: jb      short loc_1402A0FC7
 * 00000001402A0FD2: mov     ebx, r10d
 * 00000001402A0FD5: mov     r8, r15
 * 00000001402A0FD8: shr     ebx, 7
 * 00000001402A0FDB: test    ebx, ebx
 * 00000001402A0FDD: jz      short loc_1402A104A
 * 00000001402A0FDF: mov     esi, 1
 * 00000001402A0FE4: mov     rdi, 7010008004002001h
 * 00000001402A0FEE: mov     eax, 8
 * 00000001402A0FF3: xor     r8, [r9]
 * 00000001402A0FF6: mov     ecx, r11d
 * 00000001402A0FF9: rol     r8, cl
 * 00000001402A0FFC: xor     r8, [r9+8]
 * 00000001402A1000: add     r9, 10h
 * 00000001402A1004: rol     r8, cl
 * 00000001402A1007: sub     rax, rsi
 * 00000001402A100A: jnz     short loc_1402A0FF3
 * 00000001402A100C: mov     rcx, r9
 * 00000001402A100F: sub     rcx, r14
 * 00000001402A1012: xor     rcx, r15
 * 00000001402A1015: mov     rax, rcx
 * 00000001402A1018: rol     rax, 11h
 * 00000001402A101C: xor     rcx, rax
 * 00000001402A101F: mov     rax, rdi
 * 00000001402A1022: mul     rcx
 * 00000001402A1025: xor     r11d, eax
 * 00000001402A1028: mov     [rbp+2150h+var_1B60], rdx
 * 00000001402A102F: xor     r11d, edx
 * 00000001402A1032: and     r11d, 3Fh
 * 00000001402A1036: cmovz   r11d, esi
 * 00000001402A103A: add     ebx, 0FFFFFFFFh
 * 00000001402A103D: jnz     short loc_1402A0FEE
 * 00000001402A103F: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A1043: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A104A: and     r10d, 7Fh
 * 00000001402A104E: mov     ebx, 1
 * 00000001402A1053: cmp     r10d, 8
 * 00000001402A1057: jb      short loc_1402A1076
 * 00000001402A1059: mov     eax, r10d
 * 00000001402A105C: shr     rax, 3
 * 00000001402A1060: xor     r8, [r9]
 * 00000001402A1063: mov     ecx, r11d
 * 00000001402A1066: rol     r8, cl
 * 00000001402A1069: add     r9, 8
 * 00000001402A106D: add     r10d, 0FFFFFFF8h
 * 00000001402A1071: sub     rax, rbx
 * 00000001402A1074: jnz     short loc_1402A1060
 * 00000001402A1076: test    r10d, r10d
 * 00000001402A1079: jz      short loc_1402A1091
 * 00000001402A107B: movzx   eax, byte ptr [r9]
 * 00000001402A107F: mov     ecx, r11d
 * 00000001402A1082: xor     r8, rax
 * 00000001402A1085: add     r9, rbx
 * 00000001402A1088: rol     r8, cl
 * 00000001402A108B: add     r10d, 0FFFFFFFFh
 * 00000001402A108F: jnz     short loc_1402A107B
 * 00000001402A1091: mov     rax, r8
 * 00000001402A1094: jmp     short loc_1402A110D
 * 00000001402A1096: xor     edx, edx
 * 00000001402A1098: mov     [r13+20h], rcx
 * 00000001402A109C: mov     r15d, 0Ch
 * 00000001402A10A2: mov     rax, [rsi+548h]
 * 00000001402A10A9: mov     [rax], r13
 * 00000001402A10AC: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402A10B3: cmp     [rsi+750h], edx
 * 00000001402A10B9: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A10BC: jnz     short loc_1402A1102
 * 00000001402A10BE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A10C8: add     rax, rsi
 * 00000001402A10CB: mov     [rsi+758h], rax
 * 00000001402A10D2: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A10DC: add     rax, r13
 * 00000001402A10DF: mov     [rsi+760h], rax
 * 00000001402A10E6: movsxd  rax, dword ptr [r13+0]
 * 00000001402A10EA: mov     [rsi+768h], rax
 * 00000001402A10F1: lea     eax, [r15-0Bh]
 * 00000001402A10F5: mov     [rsi+770h], r14
 * 00000001402A10FC: mov     [rsi+750h], eax
 * 00000001402A1102: xor     r13d, r13d
 * 00000001402A1105: jmp     loc_1402A3ADC
 * 00000001402A110A: xor     r8d, eax
 * 00000001402A110D: shr     rax, 1Fh
 * 00000001402A1111: test    rax, rax
 * 00000001402A1114: jnz     short loc_1402A110A
 * 00000001402A1116: btr     r8d, 1Fh
 * 00000001402A111B: mov     [r13+2Ch], r8d
 * 00000001402A111F: jmp     loc_14029B6E3
 * 00000001402A1124: test    [rsi+7D8h], r15d
 * 00000001402A112B: jz      short loc_1402A1183
 * 00000001402A112D: mov     rcx, [rsi+8B0h]
 * 00000001402A1134: mov     edx, 30h ; '0'
 * 00000001402A1139: mov     r10, [rbp+2150h+var_2138]
 * 00000001402A113D: lea     r8d, [rdx-2Ah]
 * 00000001402A1141: lea     esi, [rdx-2Fh]
 * 00000001402A1144: mov     rax, [r10]
 * 00000001402A1147: add     edx, 0FFFFFFF8h
 * 00000001402A114A: mov     [rcx], rax
 * 00000001402A114D: add     r10, 8
 * 00000001402A1151: add     rcx, 8
 * 00000001402A1155: sub     r8, rsi
 * 00000001402A1158: jnz     short loc_1402A1144
 * 00000001402A115A: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A115E: test    edx, edx
 * 00000001402A1160: jz      short loc_1402A117A
 * 00000001402A1162: lea     esi, [r8+1]
 * 00000001402A1166: mov     al, [r10]
 * 00000001402A1169: add     r10, rsi
 * 00000001402A116C: mov     [rcx], al
 * 00000001402A116E: add     rcx, rsi
 * 00000001402A1171: add     edx, 0FFFFFFFFh
 * 00000001402A1174: jnz     short loc_1402A1166
 * 00000001402A1176: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A117A: mov     rdx, [rsi+8B0h]
 * 00000001402A1181: jmp     short loc_1402A1187
 * 00000001402A1183: mov     rdx, [rbp+2150h+var_2138]
 * 00000001402A1187: mov     [rdx+20h], r9
 * 00000001402A118B: mov     r15d, 0Ch
 * 00000001402A1191: mov     rax, [rsi+548h]
 * 00000001402A1198: mov     r14d, 8000h
 * 00000001402A119E: mov     [rax], rdx
 * 00000001402A11A1: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402A11A8: mov     rcx, [rdx+8]
 * 00000001402A11AC: cmp     [rsi+750h], r13d
 * 00000001402A11B3: jnz     loc_1402A3C6E
 * 00000001402A11B9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A11C3: add     rax, rsi
 * 00000001402A11C6: mov     [rsi+758h], rax
 * 00000001402A11CD: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A11D7: add     rax, rdx
 * 00000001402A11DA: mov     [rsi+760h], rax
 * 00000001402A11E1: movsxd  rax, dword ptr [rdx]
 * 00000001402A11E4: mov     [rsi+768h], rax
 * 00000001402A11EB: lea     eax, [r15-0Bh]
 * 00000001402A11EF: mov     [rsi+770h], rcx
 * 00000001402A11F6: mov     [rsi+750h], eax
 * 00000001402A11FC: jmp     loc_1402A3C6E
 * 00000001402A1201: mov     r14, [r12+8]
 * 00000001402A1206: add     [rsi+688h], r8d
 * 00000001402A120D: mov     r9, r14
 * 00000001402A1210: mov     r10d, [rsi+674h]
 * 00000001402A1217: mov     rax, r14
 * 00000001402A121A: mov     r15, [rsi+678h]
 * 00000001402A1221: lea     rcx, [r14+r8]
 * 00000001402A1225: cmp     r14, rcx
 * 00000001402A1228: jnb     short loc_1402A123A
 * 00000001402A122A: mov     edx, 40h ; '@'
 * 00000001402A122F: prefetchnta byte ptr [rax]
 * 00000001402A1232: add     rax, rdx
 * 00000001402A1235: cmp     rax, rcx
 * 00000001402A1238: jb      short loc_1402A122F
 * 00000001402A123A: mov     r11d, r8d
 * 00000001402A123D: mov     rbx, r15
 * 00000001402A1240: shr     r11d, 7
 * 00000001402A1244: mov     edx, 1
 * 00000001402A1249: test    r11d, r11d
 * 00000001402A124C: jz      short loc_1402A12BA
 * 00000001402A124E: mov     rdi, 7010008004002001h
 * 00000001402A1258: mov     eax, 8
 * 00000001402A125D: xor     rbx, [r9]
 * 00000001402A1260: mov     ecx, r10d
 * 00000001402A1263: rol     rbx, cl
 * 00000001402A1266: xor     rbx, [r9+8]
 * 00000001402A126A: add     r9, 10h
 * 00000001402A126E: rol     rbx, cl
 * 00000001402A1271: sub     rax, rdx
 * 00000001402A1274: jnz     short loc_1402A125D
 * 00000001402A1276: mov     rcx, r9
 * 00000001402A1279: sub     rcx, r14
 * 00000001402A127C: xor     rcx, r15
 * 00000001402A127F: mov     rax, rcx
 * 00000001402A1282: rol     rax, 11h
 * 00000001402A1286: xor     rcx, rax
 * 00000001402A1289: mov     rax, rdi
 * 00000001402A128C: mul     rcx
 * 00000001402A128F: xor     r10d, eax
 * 00000001402A1292: mov     [rbp+2150h+var_1B58], rdx
 * 00000001402A1299: xor     r10d, edx
 * 00000001402A129C: mov     edx, 1
 * 00000001402A12A1: and     r10d, 3Fh
 * 00000001402A12A5: cmovz   r10d, edx
 * 00000001402A12A9: add     r11d, 0FFFFFFFFh
 * 00000001402A12AD: jnz     short loc_1402A1258
 * 00000001402A12AF: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A12B3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A12BA: and     r8d, 7Fh
 * 00000001402A12BE: cmp     r8d, 8
 * 00000001402A12C2: jb      short loc_1402A12E1
 * 00000001402A12C4: mov     eax, r8d
 * 00000001402A12C7: shr     rax, 3
 * 00000001402A12CB: xor     rbx, [r9]
 * 00000001402A12CE: mov     ecx, r10d
 * 00000001402A12D1: rol     rbx, cl
 * 00000001402A12D4: add     r9, 8
 * 00000001402A12D8: add     r8d, 0FFFFFFF8h
 * 00000001402A12DC: sub     rax, rdx
 * 00000001402A12DF: jnz     short loc_1402A12CB
 * 00000001402A12E1: test    r8d, r8d
 * 00000001402A12E4: jz      short loc_1402A12FC
 * 00000001402A12E6: movzx   eax, byte ptr [r9]
 * 00000001402A12EA: mov     ecx, r10d
 * 00000001402A12ED: xor     rbx, rax
 * 00000001402A12F0: add     r9, rdx
 * 00000001402A12F3: rol     rbx, cl
 * 00000001402A12F6: add     r8d, 0FFFFFFFFh
 * 00000001402A12FA: jnz     short loc_1402A12E6
 * 00000001402A12FC: mov     rax, rbx
 * 00000001402A12FF: jmp     short loc_1402A1303
 * 00000001402A1301: xor     ebx, eax
 * 00000001402A1303: shr     rax, 1Fh
 * 00000001402A1307: test    rax, rax
 * 00000001402A130A: jnz     short loc_1402A1301
 * 00000001402A130C: mov     r12d, r13d
 * 00000001402A130F: btr     ebx, 1Fh
 * 00000001402A1313: mov     r13, [rbp+2150h+var_2138]
 * 00000001402A1317: cmp     ebx, [r13+14h]
 * 00000001402A131B: jz      loc_1402A1465
 * 00000001402A1321: cmp     [r13+0], eax
 * 00000001402A1325: jnz     short loc_1402A132F
 * 00000001402A1327: cmp     [r13+18h], eax
 * 00000001402A132B: cmovnz  r12d, edx
 * 00000001402A132F: mov     ecx, [r13+10h]
 * 00000001402A1333: mov     rdx, [r13+8]
 * 00000001402A1337: test    rcx, rcx
 * 00000001402A133A: jz      loc_1402A13F3
 * 00000001402A1340: mov     eax, [rsi+7DCh]
 * 00000001402A1346: mov     r8d, 40h ; '@'
 * 00000001402A134C: test    r8b, al
 * 00000001402A134F: jz      loc_1402A13F3
 * 00000001402A1355: mov     r15, cr8
 * 00000001402A1359: lea     eax, [r8-3Eh]
 * 00000001402A135D: mov     cr8, rax
 * 00000001402A1361: mov     r14, rdx
 * 00000001402A1364: lea     rax, [rcx-1]
 * 00000001402A1368: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A136F: add     rax, rdx
 * 00000001402A1372: or      rax, 0FFFh
 * 00000001402A1378: mov     [rbp+2150h+var_2110], rax
 * 00000001402A137C: lea     r13, [r14-1]
 * 00000001402A1380: mov     rax, [rsi+450h]
 * 00000001402A1387: xor     edx, edx
 * 00000001402A1389: mov     rcx, r14
 * 00000001402A138C: call    KeGuardDispatchICall
 * 00000001402A1391: cmp     eax, 0C000022Dh
 * 00000001402A1396: jnz     short loc_1402A13C1
 * 00000001402A1398: test    r12d, r12d
 * 00000001402A139B: jnz     short loc_1402A13E7
 * 00000001402A139D: lea     eax, [r12+1]
 * 00000001402A13A2: cmp     r15b, al
 * 00000001402A13A5: ja      short loc_1402A13C5
 * 00000001402A13A7: movzx   eax, r15b
 * 00000001402A13AB: mov     cr8, rax
 * 00000001402A13AF: mov     al, [r14]
 * 00000001402A13B2: mov     rax, cr8
 * 00000001402A13B6: lea     eax, [r12+2]
 * 00000001402A13BB: mov     cr8, rax
 * 00000001402A13BF: jmp     short loc_1402A1380
 * 00000001402A13C1: test    eax, eax
 * 00000001402A13C3: js      short loc_1402A13E7
 * 00000001402A13C5: mov     eax, 1000h
 * 00000001402A13CA: add     r14, rax
 * 00000001402A13CD: add     r13, rax
 * 00000001402A13D0: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A13D4: jnz     short loc_1402A1380
 * 00000001402A13D6: movzx   eax, r15b
 * 00000001402A13DA: mov     cr8, rax
 * 00000001402A13DE: mov     r13, [rbp+2150h+var_2138]
 * 00000001402A13E2: xor     r12d, r12d
 * 00000001402A13E5: jmp     short loc_1402A1465
 * 00000001402A13E7: movzx   eax, r15b
 * 00000001402A13EB: mov     r13, [rbp+2150h+var_2138]
 * 00000001402A13EF: mov     cr8, rax
 * 00000001402A13F3: mov     eax, [r13+14h]
 * 00000001402A13F7: xor     r12d, r12d
 * 00000001402A13FA: cmp     [rsi+750h], r12d
 * 00000001402A1401: jnz     short loc_1402A1413
 * 00000001402A1403: mov     ecx, ebx
 * 00000001402A1405: xor     rcx, rax
 * 00000001402A1408: mov     rax, [rsi+548h]
 * 00000001402A140F: mov     [rax+18h], rcx
 * 00000001402A1413: mov     rcx, [r13+8]
 * 00000001402A1417: cmp     [rsi+750h], r12d
 * 00000001402A141E: jnz     short loc_1402A1465
 * 00000001402A1420: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A142A: add     rax, rsi
 * 00000001402A142D: mov     [rsi+758h], rax
 * 00000001402A1434: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A143E: add     rax, r13
 * 00000001402A1441: mov     [rsi+760h], rax
 * 00000001402A1448: movsxd  rax, dword ptr [r13+0]
 * 00000001402A144C: mov     [rsi+768h], rax
 * 00000001402A1453: mov     eax, 1
 * 00000001402A1458: mov     [rsi+770h], rcx
 * 00000001402A145F: mov     [rsi+750h], eax
 * 00000001402A1465: mov     rax, [r13+8]
 * 00000001402A1469: mov     r9d, r12d
 * 00000001402A146C: sub     rax, 70h ; 'p'
 * 00000001402A1470: mov     [rbp+2150h+var_1FC8], rax
 * 00000001402A1477: mov     r15, [rax+50h]
 * 00000001402A147B: test    r15, r15
 * 00000001402A147E: jz      short loc_1402A1483
 * 00000001402A1480: mov     r9d, [r15]
 * 00000001402A1483: add     [rsi+688h], r9d
 * 00000001402A148A: mov     r10, r15
 * 00000001402A148D: mov     r11d, [rsi+674h]
 * 00000001402A1494: mov     rax, r15
 * 00000001402A1497: mov     r14, [rsi+678h]
 * 00000001402A149E: mov     ecx, r9d
 * 00000001402A14A1: add     rcx, r15
 * 00000001402A14A4: cmp     r15, rcx
 * 00000001402A14A7: jnb     short loc_1402A14B9
 * 00000001402A14A9: mov     edx, 40h ; '@'
 * 00000001402A14AE: prefetchnta byte ptr [rax]
 * 00000001402A14B1: add     rax, rdx
 * 00000001402A14B4: cmp     rax, rcx
 * 00000001402A14B7: jb      short loc_1402A14AE
 * 00000001402A14B9: mov     ebx, r9d
 * 00000001402A14BC: mov     r8, r14
 * 00000001402A14BF: shr     ebx, 7
 * 00000001402A14C2: test    ebx, ebx
 * 00000001402A14C4: jz      short loc_1402A1537
 * 00000001402A14C6: mov     esi, 1
 * 00000001402A14CB: mov     rdi, 7010008004002001h
 * 00000001402A14D5: mov     edx, 8
 * 00000001402A14DA: mov     rax, [r10]
 * 00000001402A14DD: mov     ecx, r11d
 * 00000001402A14E0: xor     rax, r8
 * 00000001402A14E3: mov     r8, [r10+8]
 * 00000001402A14E7: rol     rax, cl
 * 00000001402A14EA: add     r10, 10h
 * 00000001402A14EE: xor     r8, rax
 * 00000001402A14F1: rol     r8, cl
 * 00000001402A14F4: sub     rdx, rsi
 * 00000001402A14F7: jnz     short loc_1402A14DA
 * 00000001402A14F9: mov     rcx, r10
 * 00000001402A14FC: sub     rcx, r15
 * 00000001402A14FF: xor     rcx, r14
 * 00000001402A1502: mov     rax, rcx
 * 00000001402A1505: rol     rax, 11h
 * 00000001402A1509: xor     rcx, rax
 * 00000001402A150C: mov     rax, rdi
 * 00000001402A150F: mul     rcx
 * 00000001402A1512: xor     r11d, eax
 * 00000001402A1515: mov     [rbp+2150h+var_1B50], rdx
 * 00000001402A151C: xor     r11d, edx
 * 00000001402A151F: and     r11d, 3Fh
 * 00000001402A1523: cmovz   r11d, esi
 * 00000001402A1527: add     ebx, 0FFFFFFFFh
 * 00000001402A152A: jnz     short loc_1402A14D5
 * 00000001402A152C: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A1530: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A1537: and     r9d, 7Fh
 * 00000001402A153B: cmp     r9d, 8
 * 00000001402A153F: jb      short loc_1402A1567
 * 00000001402A1541: mov     edx, r9d
 * 00000001402A1544: mov     esi, 1
 * 00000001402A1549: shr     rdx, 3
 * 00000001402A154D: xor     r8, [r10]
 * 00000001402A1550: mov     ecx, r11d
 * 00000001402A1553: rol     r8, cl
 * 00000001402A1556: add     r10, 8
 * 00000001402A155A: add     r9d, 0FFFFFFF8h
 * 00000001402A155E: sub     rdx, rsi
 * 00000001402A1561: jnz     short loc_1402A154D
 * 00000001402A1563: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A1567: mov     edx, 1
 * 00000001402A156C: test    r9d, r9d
 * 00000001402A156F: jz      short loc_1402A1587
 * 00000001402A1571: movzx   eax, byte ptr [r10]
 * 00000001402A1575: mov     ecx, r11d
 * 00000001402A1578: xor     r8, rax
 * 00000001402A157B: add     r10, rdx
 * 00000001402A157E: rol     r8, cl
 * 00000001402A1581: add     r9d, 0FFFFFFFFh
 * 00000001402A1585: jnz     short loc_1402A1571
 * 00000001402A1587: mov     rax, r8
 * 00000001402A158A: jmp     short loc_1402A158F
 * 00000001402A158C: xor     r8d, eax
 * 00000001402A158F: shr     rax, 1Fh
 * 00000001402A1593: test    rax, rax
 * 00000001402A1596: jnz     short loc_1402A158C
 * 00000001402A1598: mov     eax, [r13+2Ch]
 * 00000001402A159C: btr     r8d, 1Fh
 * 00000001402A15A1: cmp     r8d, eax
 * 00000001402A15A4: jz      loc_14029B6E3
 * 00000001402A15AA: cmp     [rsi+750h], r12d
 * 00000001402A15B1: jnz     loc_14029B6E3
 * 00000001402A15B7: mov     ecx, r8d
 * 00000001402A15BA: xor     rcx, rax
 * 00000001402A15BD: mov     rax, [rsi+548h]
 * 00000001402A15C4: mov     [rax+18h], rcx
 * 00000001402A15C8: cmp     [rsi+750h], r12d
 * 00000001402A15CF: jnz     loc_14029B6E3
 * 00000001402A15D5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A15DF: add     rax, rsi
 * 00000001402A15E2: mov     [rsi+758h], rax
 * 00000001402A15E9: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A15F3: add     rax, r13
 * 00000001402A15F6: mov     [rsi+760h], rax
 * 00000001402A15FD: movsxd  rax, dword ptr [r13+0]
 * 00000001402A1601: mov     [rsi+768h], rax
 * 00000001402A1608: mov     [rsi+770h], r15
 * 00000001402A160F: mov     [rsi+750h], edx
 * 00000001402A1615: jmp     loc_14029B6E3
 * 00000001402A161A: mov     eax, [rsi+690h]
 * 00000001402A1620: mov     ecx, 1
 * 00000001402A1625: xor     r13d, r13d
 * 00000001402A1628: test    cl, al
 * 00000001402A162A: jz      loc_14029B166
 * 00000001402A1630: mov     r12, [rsi+560h]
 * 00000001402A1637: mov     r14d, r13d
 * 00000001402A163A: mov     rax, [rsi+168h]
 * 00000001402A1641: mov     r15, [rsi+568h]
 * 00000001402A1648: mov     rbx, [rsi+500h]
 * 00000001402A164F: mov     [rbp+2150h+var_2148], r12
 * 00000001402A1653: call    KeGuardDispatchICall
 * 00000001402A1658: mov     rax, [rsi+118h]
 * 00000001402A165F: xor     edx, edx
 * 00000001402A1661: mov     rcx, rbx
 * 00000001402A1664: call    KeGuardDispatchICall
 * 00000001402A1669: mov     rax, [rsi+128h]
 * 00000001402A1670: xor     edx, edx
 * 00000001402A1672: mov     rcx, r12
 * 00000001402A1675: call    KeGuardDispatchICall
 * 00000001402A167A: mov     rdx, [rsi+558h]
 * 00000001402A1681: mov     rcx, [rdx]
 * 00000001402A1684: cmp     rcx, rdx
 * 00000001402A1687: jz      short loc_1402A16AD
 * 00000001402A1689: lea     r12d, [r13+1]
 * 00000001402A168D: lea     rax, [rcx-18h]
 * 00000001402A1691: cmp     rax, r15
 * 00000001402A1694: jz      short loc_1402A16A1
 * 00000001402A1696: mov     rax, [rax+10h]
 * 00000001402A169A: mov     [rax+1BEh], r12b
 * 00000001402A16A1: mov     rcx, [rcx]
 * 00000001402A16A4: cmp     rcx, rdx
 * 00000001402A16A7: jnz     short loc_1402A168D
 * 00000001402A16A9: mov     r12, [rbp+2150h+var_2148]
 * 00000001402A16AD: mov     r9, [rsi+4D8h]
 * 00000001402A16B4: mov     rdx, [r9]
 * 00000001402A16B7: cmp     rdx, r9
 * 00000001402A16BA: jz      loc_1402A1751
 * 00000001402A16C0: mov     rdi, [rbp+2150h+var_2138]
 * 00000001402A16C4: mov     r12d, 1
 * 00000001402A16CA: lea     r8, [rdx-2E8h]
 * 00000001402A16D1: cmp     [r8+1BEh], r13b
 * 00000001402A16D8: jnz     short loc_1402A1734
 * 00000001402A16DA: mov     rax, [r8+418h]
 * 00000001402A16E1: test    rax, rax
 * 00000001402A16E4: jz      short loc_1402A1734
 * 00000001402A16E6: cmp     rax, r15
 * 00000001402A16E9: jz      short loc_1402A1734
 * 00000001402A16EB: cmp     [rsi+750h], r13d
 * 00000001402A16F2: jnz     short loc_1402A1734
 * 00000001402A16F4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A16FE: add     rax, rsi
 * 00000001402A1701: mov     [rsi+758h], rax
 * 00000001402A1708: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A1712: add     rax, rdi
 * 00000001402A1715: mov     [rsi+760h], rax
 * 00000001402A171C: movsxd  rax, dword ptr [rdi]
 * 00000001402A171F: mov     [rsi+768h], rax
 * 00000001402A1726: mov     [rsi+770h], r8
 * 00000001402A172D: mov     [rsi+750h], r12d
 * 00000001402A1734: mov     [r8+1BEh], r13b
 * 00000001402A173B: add     r14d, r12d
 * 00000001402A173E: mov     rdx, [rdx]
 * 00000001402A1741: cmp     rdx, r9
 * 00000001402A1744: jnz     short loc_1402A16CA
 * 00000001402A1746: mov     r12, [rbp+2150h+var_2148]
 * 00000001402A174A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A1751: mov     rax, [rsi+130h]
 * 00000001402A1758: xor     edx, edx
 * 00000001402A175A: mov     rcx, r12
 * 00000001402A175D: call    KeGuardDispatchICall
 * 00000001402A1762: mov     rcx, [rsi+500h]
 * 00000001402A1769: xor     edx, edx
 * 00000001402A176B: mov     rax, [rsi+120h]
 * 00000001402A1772: call    KeGuardDispatchICall
 * 00000001402A1777: mov     rax, [rsi+170h]
 * 00000001402A177E: call    KeGuardDispatchICall
 * 00000001402A1783: shl     r14d, 8
 * 00000001402A1787: add     [rsi+688h], r14d
 * 00000001402A178E: jmp     loc_1402A00F1
 * 00000001402A1793: mov     ecx, [r12+28h]
 * 00000001402A1798: mov     r15d, 1
 * 00000001402A179E: and     ecx, r15d
 * 00000001402A17A1: jz      short loc_1402A17C2
 * 00000001402A17A3: xor     r13d, r13d
 * 00000001402A17A6: cmp     [rsi+7D0h], r13
 * 00000001402A17AD: jz      loc_1402A030E
 * 00000001402A17B3: mov     eax, [rsi+7DCh]
 * 00000001402A17B9: test    al, 4
 * 00000001402A17BB: jz      short loc_1402A17C5
 * 00000001402A17BD: jmp     loc_1402A030E
 * 00000001402A17C2: xor     r13d, r13d
 * 00000001402A17C5: test    ecx, ecx
 * 00000001402A17C7: jz      loc_1402A1CA6
 * 00000001402A17CD: mov     eax, [rsi+7DCh]
 * 00000001402A17D3: mov     ecx, eax
 * 00000001402A17D5: cmp     [rsi+684h], r13d
 * 00000001402A17DC: jnz     short loc_1402A17F0
 * 00000001402A17DE: shl     ecx, 3
 * 00000001402A17E1: xor     ecx, eax
 * 00000001402A17E3: and     ecx, 20h
 * 00000001402A17E6: xor     ecx, eax
 * 00000001402A17E8: mov     [rsi+7DCh], ecx
 * 00000001402A17EE: jmp     short loc_1402A17FE
 * 00000001402A17F0: shr     ecx, 3
 * 00000001402A17F3: xor     ecx, eax
 * 00000001402A17F5: test    cl, 4
 * 00000001402A17F8: jnz     loc_1402A030E
 * 00000001402A17FE: cmp     [rsi+7D0h], r13
 * 00000001402A1805: jnz     short loc_1402A1813
 * 00000001402A1807: mov     [rsi+684h], r13d
 * 00000001402A180E: jmp     loc_1402A1ADD
 * 00000001402A1813: mov     eax, [rsi+7DCh]
 * 00000001402A1819: mov     ecx, eax
 * 00000001402A181B: cmp     [rsi+684h], r13d
 * 00000001402A1822: jnz     short loc_1402A1836
 * 00000001402A1824: shl     ecx, 3
 * 00000001402A1827: xor     ecx, eax
 * 00000001402A1829: and     ecx, 20h
 * 00000001402A182C: xor     ecx, eax
 * 00000001402A182E: mov     [rsi+7DCh], ecx
 * 00000001402A1834: jmp     short loc_1402A1840
 * 00000001402A1836: shr     ecx, 3
 * 00000001402A1839: xor     ecx, eax
 * 00000001402A183B: test    cl, 4
 * 00000001402A183E: jnz     short loc_1402A1807
 * 00000001402A1840: mov     eax, [rsi+7DCh]
 * 00000001402A1846: test    al, 4
 * 00000001402A1848: jz      loc_1402A1905
 * 00000001402A184E: mov     r14d, [r12+8]
 * 00000001402A1853: mov     ecx, [r12+10h]
 * 00000001402A1858: and     r14d, 0FFFh
 * 00000001402A185F: mov     rbx, [r12+8]
 * 00000001402A1864: add     r14, 0FFFh
 * 00000001402A186B: add     r14, rcx
 * 00000001402A186E: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A1875: shr     r14, 0Ch
 * 00000001402A1879: test    r14, r14
 * 00000001402A187C: jz      loc_1402A1ADD
 * 00000001402A1882: mov     rdi, 0B3B74BDEE4453415h
 * 00000001402A188C: mov     rax, [rsi+2A0h]
 * 00000001402A1893: mov     rcx, rbx
 * 00000001402A1896: sub     r14, r15
 * 00000001402A1899: call    KeGuardDispatchICall
 * 00000001402A189E: test    al, al
 * 00000001402A18A0: jz      short loc_1402A18E3
 * 00000001402A18A2: cmp     [rsi+750h], r13d
 * 00000001402A18A9: jnz     short loc_1402A18E3
 * 00000001402A18AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A18B5: add     rax, rsi
 * 00000001402A18B8: mov     [rsi+758h], rax
 * 00000001402A18BF: lea     rax, [r12+rdi]
 * 00000001402A18C3: mov     [rsi+760h], rax
 * 00000001402A18CA: movsxd  rax, dword ptr [r12]
 * 00000001402A18CE: mov     [rsi+768h], rax
 * 00000001402A18D5: mov     [rsi+770h], rbx
 * 00000001402A18DC: mov     [rsi+750h], r15d
 * 00000001402A18E3: add     dword ptr [rsi+688h], 100h
 * 00000001402A18ED: add     rbx, 1000h
 * 00000001402A18F4: test    r14, r14
 * 00000001402A18F7: jnz     short loc_1402A188C
 * 00000001402A18F9: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A1900: jmp     loc_1402A1ADD
 * 00000001402A1905: mov     r14, [r12+8]
 * 00000001402A190A: mov     r8d, [r12+10h]
 * 00000001402A190F: mov     r9, r14
 * 00000001402A1912: add     [rsi+688h], r8d
 * 00000001402A1919: mov     rax, r14
 * 00000001402A191C: mov     r11d, [rsi+674h]
 * 00000001402A1923: mov     r15, [rsi+678h]
 * 00000001402A192A: lea     rcx, [r14+r8]
 * 00000001402A192E: cmp     r14, rcx
 * 00000001402A1931: jnb     short loc_1402A1943
 * 00000001402A1933: mov     edx, 40h ; '@'
 * 00000001402A1938: prefetchnta byte ptr [rax]
 * 00000001402A193B: add     rax, rdx
 * 00000001402A193E: cmp     rax, rcx
 * 00000001402A1941: jb      short loc_1402A1938
 * 00000001402A1943: mov     r10d, r8d
 * 00000001402A1946: mov     rbx, r15
 * 00000001402A1949: shr     r10d, 7
 * 00000001402A194D: test    r10d, r10d
 * 00000001402A1950: jz      short loc_1402A19C4
 * 00000001402A1952: mov     rdi, 7010008004002001h
 * 00000001402A195C: mov     edx, 8
 * 00000001402A1961: lea     esi, [rdx-7]
 * 00000001402A1964: mov     rax, [r9]
 * 00000001402A1967: mov     ecx, r11d
 * 00000001402A196A: xor     rax, rbx
 * 00000001402A196D: mov     rbx, [r9+8]
 * 00000001402A1971: rol     rax, cl
 * 00000001402A1974: add     r9, 10h
 * 00000001402A1978: xor     rbx, rax
 * 00000001402A197B: rol     rbx, cl
 * 00000001402A197E: sub     rdx, rsi
 * 00000001402A1981: jnz     short loc_1402A1964
 * 00000001402A1983: mov     rcx, r9
 * 00000001402A1986: sub     rcx, r14
 * 00000001402A1989: xor     rcx, r15
 * 00000001402A198C: mov     rax, rcx
 * 00000001402A198F: rol     rax, 11h
 * 00000001402A1993: xor     rcx, rax
 * 00000001402A1996: mov     rax, rdi
 * 00000001402A1999: mul     rcx
 * 00000001402A199C: xor     eax, edx
 * 00000001402A199E: mov     [rbp+2150h+var_1B48], rdx
 * 00000001402A19A5: xor     r11d, eax
 * 00000001402A19A8: mov     rax, rsi
 * 00000001402A19AB: and     r11d, 3Fh
 * 00000001402A19AF: cmovz   r11d, eax
 * 00000001402A19B3: add     r10d, 0FFFFFFFFh
 * 00000001402A19B7: jnz     short loc_1402A195C
 * 00000001402A19B9: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A19BD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A19C4: and     r8d, 7Fh
 * 00000001402A19C8: mov     r15d, 1
 * 00000001402A19CE: cmp     r8d, 8
 * 00000001402A19D2: jb      short loc_1402A19F1
 * 00000001402A19D4: mov     edx, r8d
 * 00000001402A19D7: shr     rdx, 3
 * 00000001402A19DB: xor     rbx, [r9]
 * 00000001402A19DE: mov     ecx, r11d
 * 00000001402A19E1: rol     rbx, cl
 * 00000001402A19E4: add     r9, 8
 * 00000001402A19E8: add     r8d, 0FFFFFFF8h
 * 00000001402A19EC: sub     rdx, r15
 * 00000001402A19EF: jnz     short loc_1402A19DB
 * 00000001402A19F1: test    r8d, r8d
 * 00000001402A19F4: jz      short loc_1402A1A0C
 * 00000001402A19F6: movzx   eax, byte ptr [r9]
 * 00000001402A19FA: mov     ecx, r11d
 * 00000001402A19FD: xor     rbx, rax
 * 00000001402A1A00: add     r9, r15
 * 00000001402A1A03: rol     rbx, cl
 * 00000001402A1A06: add     r8d, 0FFFFFFFFh
 * 00000001402A1A0A: jnz     short loc_1402A19F6
 * 00000001402A1A0C: mov     rax, rbx
 * 00000001402A1A0F: jmp     short loc_1402A1A13
 * 00000001402A1A11: xor     ebx, eax
 * 00000001402A1A13: shr     rax, 1Fh
 * 00000001402A1A17: test    rax, rax
 * 00000001402A1A1A: jnz     short loc_1402A1A11
 * 00000001402A1A1C: btr     ebx, 1Fh
 * 00000001402A1A20: cmp     ebx, [r12+14h]
 * 00000001402A1A25: jz      loc_1402A1ADD
 * 00000001402A1A2B: mov     ecx, [r12+10h]
 * 00000001402A1A30: mov     rdx, [r12+8]
 * 00000001402A1A35: test    rcx, rcx
 * 00000001402A1A38: jz      loc_1402A1C28
 * 00000001402A1A3E: mov     eax, [rsi+7DCh]
 * 00000001402A1A44: mov     r8d, 40h ; '@'
 * 00000001402A1A4A: test    r8b, al
 * 00000001402A1A4D: jz      loc_1402A1C28
 * 00000001402A1A53: mov     r15, cr8
 * 00000001402A1A57: mov     r14, rdx
 * 00000001402A1A5A: lea     r13, [rcx-1]
 * 00000001402A1A5E: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A1A65: add     r13, rdx
 * 00000001402A1A68: or      r13, 0FFFh
 * 00000001402A1A6F: lea     r12, [r14-1]
 * 00000001402A1A73: mov     eax, 2
 * 00000001402A1A78: mov     cr8, rax
 * 00000001402A1A7C: mov     rax, [rsi+450h]
 * 00000001402A1A83: xor     edx, edx
 * 00000001402A1A85: mov     rcx, r14
 * 00000001402A1A88: call    KeGuardDispatchICall
 * 00000001402A1A8D: cmp     eax, 0C000022Dh
 * 00000001402A1A92: jnz     short loc_1402A1AAF
 * 00000001402A1A94: mov     eax, 1
 * 00000001402A1A99: cmp     r15b, al
 * 00000001402A1A9C: ja      short loc_1402A1AB7
 * 00000001402A1A9E: movzx   eax, r15b
 * 00000001402A1AA2: mov     cr8, rax
 * 00000001402A1AA6: mov     al, [r14]
 * 00000001402A1AA9: mov     rax, cr8
 * 00000001402A1AAD: jmp     short loc_1402A1A73
 * 00000001402A1AAF: test    eax, eax
 * 00000001402A1AB1: js      loc_1402A1C19
 * 00000001402A1AB7: mov     r11d, 1000h
 * 00000001402A1ABD: add     r14, r11
 * 00000001402A1AC0: add     r12, r11
 * 00000001402A1AC3: cmp     r12, r13
 * 00000001402A1AC6: jnz     short loc_1402A1A7C
 * 00000001402A1AC8: movzx   eax, r15b
 * 00000001402A1ACC: mov     cr8, rax
 * 00000001402A1AD0: xor     r13d, r13d
 * 00000001402A1AD3: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A1AD7: mov     r15d, 1
 * 00000001402A1ADD: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402A1AE7: mov     r9, 0B3B74BDEE4453415h
 * 00000001402A1AF1: mov     eax, [r12+28h]
 * 00000001402A1AF6: mov     ecx, 2
 * 00000001402A1AFB: test    cl, al
 * 00000001402A1AFD: jz      loc_1402A00F1
 * 00000001402A1B03: mov     rdx, [r12+8]
 * 00000001402A1B08: test    al, 4
 * 00000001402A1B0A: jz      short loc_1402A1B81
 * 00000001402A1B0C: mov     rax, [rdx+70h]
 * 00000001402A1B10: mov     r8, [r12+18h]
 * 00000001402A1B15: mov     rcx, [rax]
 * 00000001402A1B18: cmp     rcx, r8
 * 00000001402A1B1B: jz      short loc_1402A1B81
 * 00000001402A1B1D: mov     rax, [rsi+548h]
 * 00000001402A1B24: mov     [rax], rcx
 * 00000001402A1B27: mov     dword ptr [rax+10h], 100h
 * 00000001402A1B2E: cmp     [rsi+750h], r13d
 * 00000001402A1B35: jnz     short loc_1402A1B45
 * 00000001402A1B37: mov     rax, [rsi+548h]
 * 00000001402A1B3E: xor     rcx, r8
 * 00000001402A1B41: mov     [rax+18h], rcx
 * 00000001402A1B45: mov     rcx, [rdx+70h]
 * 00000001402A1B49: cmp     [rsi+750h], r13d
 * 00000001402A1B50: jnz     short loc_1402A1B81
 * 00000001402A1B52: lea     rax, [rsi+r10]
 * 00000001402A1B56: mov     [rsi+758h], rax
 * 00000001402A1B5D: lea     rax, [r12+r9]
 * 00000001402A1B61: mov     [rsi+760h], rax
 * 00000001402A1B68: movsxd  rax, dword ptr [r12]
 * 00000001402A1B6C: mov     [rsi+768h], rax
 * 00000001402A1B73: mov     [rsi+770h], rcx
 * 00000001402A1B7A: mov     [rsi+750h], r15d
 * 00000001402A1B81: mov     eax, [r12+28h]
 * 00000001402A1B86: test    al, 8
 * 00000001402A1B88: jz      loc_1402A00F1
 * 00000001402A1B8E: mov     rax, [rdx+78h]
 * 00000001402A1B92: mov     r8, [r12+20h]
 * 00000001402A1B97: mov     rcx, [rax]
 * 00000001402A1B9A: cmp     rcx, r8
 * 00000001402A1B9D: jz      loc_1402A00F1
 * 00000001402A1BA3: mov     rax, [rsi+548h]
 * 00000001402A1BAA: mov     [rax], rcx
 * 00000001402A1BAD: mov     dword ptr [rax+10h], 100h
 * 00000001402A1BB4: cmp     [rsi+750h], r13d
 * 00000001402A1BBB: jnz     short loc_1402A1BCB
 * 00000001402A1BBD: mov     rax, [rsi+548h]
 * 00000001402A1BC4: xor     rcx, r8
 * 00000001402A1BC7: mov     [rax+18h], rcx
 * 00000001402A1BCB: mov     r14d, 8000h
 * 00000001402A1BD1: mov     rcx, [rdx+78h]
 * 00000001402A1BD5: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A1BD8: cmp     [rsi+750h], r13d
 * 00000001402A1BDF: jnz     loc_14029B16C
 * 00000001402A1BE5: lea     rax, [rsi+r10]
 * 00000001402A1BE9: mov     [rsi+758h], rax
 * 00000001402A1BF0: lea     rax, [r12+r9]
 * 00000001402A1BF4: mov     [rsi+760h], rax
 * 00000001402A1BFB: movsxd  rax, dword ptr [r12]
 * 00000001402A1BFF: mov     [rsi+768h], rax
 * 00000001402A1C06: mov     [rsi+770h], rcx
 * 00000001402A1C0D: mov     [rsi+750h], r15d
 * 00000001402A1C14: jmp     loc_14029B16C
 * 00000001402A1C19: movzx   eax, r15b
 * 00000001402A1C1D: mov     cr8, rax
 * 00000001402A1C21: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A1C25: xor     r13d, r13d
 * 00000001402A1C28: mov     eax, [r12+14h]
 * 00000001402A1C2D: cmp     [rsi+750h], r13d
 * 00000001402A1C34: jnz     short loc_1402A1C46
 * 00000001402A1C36: mov     ecx, ebx
 * 00000001402A1C38: xor     rcx, rax
 * 00000001402A1C3B: mov     rax, [rsi+548h]
 * 00000001402A1C42: mov     [rax+18h], rcx
 * 00000001402A1C46: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402A1C50: mov     rcx, [r12+8]
 * 00000001402A1C55: mov     r9, 0B3B74BDEE4453415h
 * 00000001402A1C5F: mov     r15d, 1
 * 00000001402A1C65: cmp     [rsi+750h], r13d
 * 00000001402A1C6C: jnz     loc_1402A1AF1
 * 00000001402A1C72: lea     rax, [rsi+r10]
 * 00000001402A1C76: mov     [rsi+758h], rax
 * 00000001402A1C7D: lea     rax, [r12+r9]
 * 00000001402A1C81: mov     [rsi+760h], rax
 * 00000001402A1C88: movsxd  rax, dword ptr [r12]
 * 00000001402A1C8C: mov     [rsi+768h], rax
 * 00000001402A1C93: mov     [rsi+770h], rcx
 * 00000001402A1C9A: mov     [rsi+750h], r15d
 * 00000001402A1CA1: jmp     loc_1402A1AF1
 * 00000001402A1CA6: mov     r14, [r12+8]
 * 00000001402A1CAB: mov     r8d, [r12+10h]
 * 00000001402A1CB0: mov     r9, r14
 * 00000001402A1CB3: add     [rsi+688h], r8d
 * 00000001402A1CBA: mov     rax, r14
 * 00000001402A1CBD: mov     r11d, [rsi+674h]
 * 00000001402A1CC4: mov     r15, [rsi+678h]
 * 00000001402A1CCB: lea     rcx, [r14+r8]
 * 00000001402A1CCF: cmp     r14, rcx
 * 00000001402A1CD2: jnb     short loc_1402A1CE4
 * 00000001402A1CD4: mov     edx, 40h ; '@'
 * 00000001402A1CD9: prefetchnta byte ptr [rax]
 * 00000001402A1CDC: add     rax, rdx
 * 00000001402A1CDF: cmp     rax, rcx
 * 00000001402A1CE2: jb      short loc_1402A1CD9
 * 00000001402A1CE4: mov     r10d, r8d
 * 00000001402A1CE7: mov     rbx, r15
 * 00000001402A1CEA: shr     r10d, 7
 * 00000001402A1CEE: mov     r12d, 1
 * 00000001402A1CF4: test    r10d, r10d
 * 00000001402A1CF7: jz      short loc_1402A1D5E
 * 00000001402A1CF9: mov     rsi, 7010008004002001h
 * 00000001402A1D03: mov     edx, 8
 * 00000001402A1D08: mov     rax, [r9]
 * 00000001402A1D0B: mov     ecx, r11d
 * 00000001402A1D0E: xor     rax, rbx
 * 00000001402A1D11: mov     rbx, [r9+8]
 * 00000001402A1D15: rol     rax, cl
 * 00000001402A1D18: add     r9, 10h
 * 00000001402A1D1C: xor     rbx, rax
 * 00000001402A1D1F: rol     rbx, cl
 * 00000001402A1D22: sub     rdx, r12
 * 00000001402A1D25: jnz     short loc_1402A1D08
 * 00000001402A1D27: mov     rcx, r9
 * 00000001402A1D2A: sub     rcx, r14
 * 00000001402A1D2D: xor     rcx, r15
 * 00000001402A1D30: mov     rax, rcx
 * 00000001402A1D33: rol     rax, 11h
 * 00000001402A1D37: xor     rcx, rax
 * 00000001402A1D3A: mov     rax, rsi
 * 00000001402A1D3D: mul     rcx
 * 00000001402A1D40: xor     eax, edx
 * 00000001402A1D42: mov     [rbp+2150h+var_1B40], rdx
 * 00000001402A1D49: xor     r11d, eax
 * 00000001402A1D4C: and     r11d, 3Fh
 * 00000001402A1D50: cmovz   r11d, r12d
 * 00000001402A1D54: add     r10d, 0FFFFFFFFh
 * 00000001402A1D58: jnz     short loc_1402A1D03
 * 00000001402A1D5A: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A1D5E: and     r8d, 7Fh
 * 00000001402A1D62: cmp     r8d, 8
 * 00000001402A1D66: jb      short loc_1402A1D85
 * 00000001402A1D68: mov     edx, r8d
 * 00000001402A1D6B: shr     rdx, 3
 * 00000001402A1D6F: xor     rbx, [r9]
 * 00000001402A1D72: mov     ecx, r11d
 * 00000001402A1D75: rol     rbx, cl
 * 00000001402A1D78: add     r9, 8
 * 00000001402A1D7C: add     r8d, 0FFFFFFF8h
 * 00000001402A1D80: sub     rdx, r12
 * 00000001402A1D83: jnz     short loc_1402A1D6F
 * 00000001402A1D85: test    r8d, r8d
 * 00000001402A1D88: jz      short loc_1402A1DA0
 * 00000001402A1D8A: movzx   eax, byte ptr [r9]
 * 00000001402A1D8E: mov     ecx, r11d
 * 00000001402A1D91: xor     rbx, rax
 * 00000001402A1D94: add     r9, r12
 * 00000001402A1D97: rol     rbx, cl
 * 00000001402A1D9A: add     r8d, 0FFFFFFFFh
 * 00000001402A1D9E: jnz     short loc_1402A1D8A
 * 00000001402A1DA0: mov     rax, rbx
 * 00000001402A1DA3: jmp     short loc_1402A1DA7
 * 00000001402A1DA5: xor     ebx, eax
 * 00000001402A1DA7: shr     rax, 1Fh
 * 00000001402A1DAB: test    rax, rax
 * 00000001402A1DAE: jnz     short loc_1402A1DA5
 * 00000001402A1DB0: mov     rax, [rbp+2150h+var_2138]
 * 00000001402A1DB4: btr     ebx, 1Fh
 * 00000001402A1DB8: mov     r12d, r13d
 * 00000001402A1DBB: cmp     ebx, [rax+14h]
 * 00000001402A1DBE: jz      loc_1402A1AD3
 * 00000001402A1DC4: cmp     [rax], r13d
 * 00000001402A1DC7: jnz     short loc_1402A1DD6
 * 00000001402A1DC9: cmp     [rax+18h], r13d
 * 00000001402A1DCD: mov     ecx, 1
 * 00000001402A1DD2: cmovnz  r12d, ecx
 * 00000001402A1DD6: mov     ecx, [rax+10h]
 * 00000001402A1DD9: mov     rdx, [rax+8]
 * 00000001402A1DDD: test    rcx, rcx
 * 00000001402A1DE0: jz      loc_1402A1E8E
 * 00000001402A1DE6: mov     eax, [rsi+7DCh]
 * 00000001402A1DEC: mov     r8d, 40h ; '@'
 * 00000001402A1DF2: test    r8b, al
 * 00000001402A1DF5: jz      loc_1402A1E8E
 * 00000001402A1DFB: mov     r15, cr8
 * 00000001402A1DFF: lea     eax, [r8-3Eh]
 * 00000001402A1E03: mov     cr8, rax
 * 00000001402A1E07: mov     r14, rdx
 * 00000001402A1E0A: lea     rax, [rcx-1]
 * 00000001402A1E0E: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A1E15: add     rax, rdx
 * 00000001402A1E18: or      rax, 0FFFh
 * 00000001402A1E1E: mov     [rbp+2150h+var_2110], rax
 * 00000001402A1E22: lea     r13, [r14-1]
 * 00000001402A1E26: mov     rax, [rsi+450h]
 * 00000001402A1E2D: xor     edx, edx
 * 00000001402A1E2F: mov     rcx, r14
 * 00000001402A1E32: call    KeGuardDispatchICall
 * 00000001402A1E37: cmp     eax, 0C000022Dh
 * 00000001402A1E3C: jnz     short loc_1402A1E67
 * 00000001402A1E3E: test    r12d, r12d
 * 00000001402A1E41: jnz     short loc_1402A1E83
 * 00000001402A1E43: lea     eax, [r12+1]
 * 00000001402A1E48: cmp     r15b, al
 * 00000001402A1E4B: ja      short loc_1402A1E6B
 * 00000001402A1E4D: movzx   eax, r15b
 * 00000001402A1E51: mov     cr8, rax
 * 00000001402A1E55: mov     al, [r14]
 * 00000001402A1E58: mov     rax, cr8
 * 00000001402A1E5C: lea     eax, [r12+2]
 * 00000001402A1E61: mov     cr8, rax
 * 00000001402A1E65: jmp     short loc_1402A1E26
 * 00000001402A1E67: test    eax, eax
 * 00000001402A1E69: js      short loc_1402A1E83
 * 00000001402A1E6B: mov     r11d, 1000h
 * 00000001402A1E71: add     r14, r11
 * 00000001402A1E74: add     r13, r11
 * 00000001402A1E77: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A1E7B: jz      loc_1402A1AC8
 * 00000001402A1E81: jmp     short loc_1402A1E26
 * 00000001402A1E83: movzx   eax, r15b
 * 00000001402A1E87: xor     r13d, r13d
 * 00000001402A1E8A: mov     cr8, rax
 * 00000001402A1E8E: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A1E92: mov     eax, [r12+14h]
 * 00000001402A1E97: cmp     [rsi+750h], r13d
 * 00000001402A1E9E: jnz     loc_1402A1C46
 * 00000001402A1EA4: mov     ecx, eax
 * 00000001402A1EA6: mov     eax, ebx
 * 00000001402A1EA8: jmp     loc_1402A1C38
 * 00000001402A1EAD: cmp     r15d, 24h ; '$'
 * 00000001402A1EB1: jz      loc_1402A4AC6
 * 00000001402A1EB7: cmp     r15d, 25h ; '%'
 * 00000001402A1EBB: jz      loc_1402A4A38
 * 00000001402A1EC1: cmp     r15d, 26h ; '&'
 * 00000001402A1EC5: jz      loc_1402A492C
 * 00000001402A1ECB: jle     loc_1402A3C7B
 * 00000001402A1ED1: cmp     r15d, 2Ah ; '*'
 * 00000001402A1ED5: jle     loc_1402A3AE7
 * 00000001402A1EDB: cmp     r15d, 2Bh ; '+'
 * 00000001402A1EDF: jz      loc_1402A2A82
 * 00000001402A1EE5: cmp     r15d, 2Ch ; ','
 * 00000001402A1EE9: jnz     loc_1402A3C7B
 * 00000001402A1EEF: mov     ecx, [r12+20h]
 * 00000001402A1EF4: mov     r14, rsi
 * 00000001402A1EF7: shr     ecx, 1
 * 00000001402A1EF9: mov     [rbp+2150h+var_2108], rsi
 * 00000001402A1EFD: and     ecx, 1
 * 00000001402A1F00: jz      short loc_1402A1F21
 * 00000001402A1F02: xor     r13d, r13d
 * 00000001402A1F05: cmp     [rsi+7D0h], r13
 * 00000001402A1F0C: jz      loc_1402A030E
 * 00000001402A1F12: mov     eax, [rsi+7DCh]
 * 00000001402A1F18: test    al, 4
 * 00000001402A1F1A: jz      short loc_1402A1F24
 * 00000001402A1F1C: jmp     loc_1402A030E
 * 00000001402A1F21: xor     r13d, r13d
 * 00000001402A1F24: test    ecx, ecx
 * 00000001402A1F26: jz      loc_1402A234E
 * 00000001402A1F2C: mov     eax, [rsi+7DCh]
 * 00000001402A1F32: mov     ecx, eax
 * 00000001402A1F34: cmp     [rsi+684h], r13d
 * 00000001402A1F3B: jnz     short loc_1402A1F4F
 * 00000001402A1F3D: shl     ecx, 3
 * 00000001402A1F40: xor     ecx, eax
 * 00000001402A1F42: and     ecx, 20h
 * 00000001402A1F45: xor     ecx, eax
 * 00000001402A1F47: mov     [rsi+7DCh], ecx
 * 00000001402A1F4D: jmp     short loc_1402A1F5D
 * 00000001402A1F4F: shr     ecx, 3
 * 00000001402A1F52: xor     ecx, eax
 * 00000001402A1F54: test    cl, 4
 * 00000001402A1F57: jnz     loc_1402A030E
 * 00000001402A1F5D: cmp     [rsi+7D0h], r13
 * 00000001402A1F64: jnz     short loc_1402A1F72
 * 00000001402A1F66: mov     [rsi+684h], r13d
 * 00000001402A1F6D: jmp     loc_1402A2241
 * 00000001402A1F72: mov     eax, [rsi+7DCh]
 * 00000001402A1F78: mov     ecx, eax
 * 00000001402A1F7A: cmp     [rsi+684h], r13d
 * 00000001402A1F81: jnz     short loc_1402A1F95
 * 00000001402A1F83: shl     ecx, 3
 * 00000001402A1F86: xor     ecx, eax
 * 00000001402A1F88: and     ecx, 20h
 * 00000001402A1F8B: xor     ecx, eax
 * 00000001402A1F8D: mov     [rsi+7DCh], ecx
 * 00000001402A1F93: jmp     short loc_1402A1F9F
 * 00000001402A1F95: shr     ecx, 3
 * 00000001402A1F98: xor     ecx, eax
 * 00000001402A1F9A: test    cl, 4
 * 00000001402A1F9D: jnz     short loc_1402A1F66
 * 00000001402A1F9F: mov     eax, [rsi+7DCh]
 * 00000001402A1FA5: test    al, 4
 * 00000001402A1FA7: jz      loc_1402A206A
 * 00000001402A1FAD: mov     r14d, [r12+8]
 * 00000001402A1FB2: mov     ecx, [r12+10h]
 * 00000001402A1FB7: and     r14d, 0FFFh
 * 00000001402A1FBE: mov     rbx, [r12+8]
 * 00000001402A1FC3: add     r14, 0FFFh
 * 00000001402A1FCA: add     r14, rcx
 * 00000001402A1FCD: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A1FD4: shr     r14, 0Ch
 * 00000001402A1FD8: test    r14, r14
 * 00000001402A1FDB: jz      loc_1402A2062
 * 00000001402A1FE1: mov     edi, 1
 * 00000001402A1FE6: mov     rax, [rsi+2A0h]
 * 00000001402A1FED: mov     rcx, rbx
 * 00000001402A1FF0: sub     r14, rdi
 * 00000001402A1FF3: call    KeGuardDispatchICall
 * 00000001402A1FF8: test    al, al
 * 00000001402A1FFA: jz      short loc_1402A2045
 * 00000001402A1FFC: cmp     [rsi+750h], r13d
 * 00000001402A2003: jnz     short loc_1402A2045
 * 00000001402A2005: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A200F: add     rax, rsi
 * 00000001402A2012: mov     [rsi+758h], rax
 * 00000001402A2019: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2023: add     rax, r12
 * 00000001402A2026: mov     [rsi+760h], rax
 * 00000001402A202D: movsxd  rax, dword ptr [r12]
 * 00000001402A2031: mov     [rsi+768h], rax
 * 00000001402A2038: mov     [rsi+770h], rbx
 * 00000001402A203F: mov     [rsi+750h], edi
 * 00000001402A2045: add     dword ptr [rsi+688h], 100h
 * 00000001402A204F: add     rbx, 1000h
 * 00000001402A2056: test    r14, r14
 * 00000001402A2059: jnz     short loc_1402A1FE6
 * 00000001402A205B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A2062: mov     r14, rsi
 * 00000001402A2065: jmp     loc_1402A2241
 * 00000001402A206A: mov     r14, [r12+8]
 * 00000001402A206F: mov     r8d, [r12+10h]
 * 00000001402A2074: mov     r9, r14
 * 00000001402A2077: add     [rsi+688h], r8d
 * 00000001402A207E: mov     rax, r14
 * 00000001402A2081: mov     r10d, [rsi+674h]
 * 00000001402A2088: mov     r15, [rsi+678h]
 * 00000001402A208F: lea     rcx, [r14+r8]
 * 00000001402A2093: cmp     r14, rcx
 * 00000001402A2096: jnb     short loc_1402A20A8
 * 00000001402A2098: mov     edx, 40h ; '@'
 * 00000001402A209D: prefetchnta byte ptr [rax]
 * 00000001402A20A0: add     rax, rdx
 * 00000001402A20A3: cmp     rax, rcx
 * 00000001402A20A6: jb      short loc_1402A209D
 * 00000001402A20A8: mov     r11d, r8d
 * 00000001402A20AB: mov     rbx, r15
 * 00000001402A20AE: shr     r11d, 7
 * 00000001402A20B2: test    r11d, r11d
 * 00000001402A20B5: jz      short loc_1402A212A
 * 00000001402A20B7: mov     rdi, 7010008004002001h
 * 00000001402A20C1: mov     edx, 8
 * 00000001402A20C6: lea     esi, [rdx-7]
 * 00000001402A20C9: mov     rax, [r9]
 * 00000001402A20CC: mov     ecx, r10d
 * 00000001402A20CF: xor     rax, rbx
 * 00000001402A20D2: mov     rbx, [r9+8]
 * 00000001402A20D6: rol     rax, cl
 * 00000001402A20D9: add     r9, 10h
 * 00000001402A20DD: xor     rbx, rax
 * 00000001402A20E0: rol     rbx, cl
 * 00000001402A20E3: sub     rdx, rsi
 * 00000001402A20E6: jnz     short loc_1402A20C9
 * 00000001402A20E8: mov     rcx, r9
 * 00000001402A20EB: sub     rcx, r14
 * 00000001402A20EE: xor     rcx, r15
 * 00000001402A20F1: mov     rax, rcx
 * 00000001402A20F4: rol     rax, 11h
 * 00000001402A20F8: xor     rcx, rax
 * 00000001402A20FB: mov     rax, rdi
 * 00000001402A20FE: mul     rcx
 * 00000001402A2101: xor     r10d, eax
 * 00000001402A2104: mov     [rbp+2150h+var_1B38], rdx
 * 00000001402A210B: xor     r10d, edx
 * 00000001402A210E: mov     rax, rsi
 * 00000001402A2111: and     r10d, 3Fh
 * 00000001402A2115: cmovz   r10d, eax
 * 00000001402A2119: add     r11d, 0FFFFFFFFh
 * 00000001402A211D: jnz     short loc_1402A20C1
 * 00000001402A211F: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A2123: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A212A: and     r8d, 7Fh
 * 00000001402A212E: mov     r14d, 1
 * 00000001402A2134: cmp     r8d, 8
 * 00000001402A2138: jb      short loc_1402A2157
 * 00000001402A213A: mov     edx, r8d
 * 00000001402A213D: shr     rdx, 3
 * 00000001402A2141: xor     rbx, [r9]
 * 00000001402A2144: mov     ecx, r10d
 * 00000001402A2147: rol     rbx, cl
 * 00000001402A214A: add     r9, 8
 * 00000001402A214E: add     r8d, 0FFFFFFF8h
 * 00000001402A2152: sub     rdx, r14
 * 00000001402A2155: jnz     short loc_1402A2141
 * 00000001402A2157: test    r8d, r8d
 * 00000001402A215A: jz      short loc_1402A2172
 * 00000001402A215C: movzx   eax, byte ptr [r9]
 * 00000001402A2160: mov     ecx, r10d
 * 00000001402A2163: xor     rbx, rax
 * 00000001402A2166: add     r9, r14
 * 00000001402A2169: rol     rbx, cl
 * 00000001402A216C: add     r8d, 0FFFFFFFFh
 * 00000001402A2170: jnz     short loc_1402A215C
 * 00000001402A2172: mov     rax, rbx
 * 00000001402A2175: jmp     short loc_1402A2179
 * 00000001402A2177: xor     ebx, eax
 * 00000001402A2179: shr     rax, 1Fh
 * 00000001402A217D: test    rax, rax
 * 00000001402A2180: jnz     short loc_1402A2177
 * 00000001402A2182: btr     ebx, 1Fh
 * 00000001402A2186: cmp     ebx, [r12+14h]
 * 00000001402A218B: jz      loc_1402A223D
 * 00000001402A2191: mov     ecx, [r12+10h]
 * 00000001402A2196: mov     rdx, [r12+8]
 * 00000001402A219B: test    rcx, rcx
 * 00000001402A219E: jz      loc_1402A22D4
 * 00000001402A21A4: mov     eax, [rsi+7DCh]
 * 00000001402A21AA: mov     r8d, 40h ; '@'
 * 00000001402A21B0: test    r8b, al
 * 00000001402A21B3: jz      loc_1402A22D4
 * 00000001402A21B9: mov     r15, cr8
 * 00000001402A21BD: mov     r14, rdx
 * 00000001402A21C0: lea     r13, [rcx-1]
 * 00000001402A21C4: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A21CB: add     r13, rdx
 * 00000001402A21CE: or      r13, 0FFFh
 * 00000001402A21D5: lea     r12, [r14-1]
 * 00000001402A21D9: mov     eax, 2
 * 00000001402A21DE: mov     cr8, rax
 * 00000001402A21E2: mov     rax, [rsi+450h]
 * 00000001402A21E9: xor     edx, edx
 * 00000001402A21EB: mov     rcx, r14
 * 00000001402A21EE: call    KeGuardDispatchICall
 * 00000001402A21F3: cmp     eax, 0C000022Dh
 * 00000001402A21F8: jnz     short loc_1402A2215
 * 00000001402A21FA: mov     eax, 1
 * 00000001402A21FF: cmp     r15b, al
 * 00000001402A2202: ja      short loc_1402A221D
 * 00000001402A2204: movzx   eax, r15b
 * 00000001402A2208: mov     cr8, rax
 * 00000001402A220C: mov     al, [r14]
 * 00000001402A220F: mov     rax, cr8
 * 00000001402A2213: jmp     short loc_1402A21D9
 * 00000001402A2215: test    eax, eax
 * 00000001402A2217: js      loc_1402A22C5
 * 00000001402A221D: mov     r10d, 1000h
 * 00000001402A2223: add     r14, r10
 * 00000001402A2226: add     r12, r10
 * 00000001402A2229: cmp     r12, r13
 * 00000001402A222C: jnz     short loc_1402A21E2
 * 00000001402A222E: movzx   eax, r15b
 * 00000001402A2232: mov     cr8, rax
 * 00000001402A2236: xor     r13d, r13d
 * 00000001402A2239: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A223D: mov     r14, [rbp+2150h+var_2108]
 * 00000001402A2241: mov     eax, [r12+20h]
 * 00000001402A2246: mov     ecx, 1
 * 00000001402A224B: test    cl, al
 * 00000001402A224D: jz      loc_1402A00F1
 * 00000001402A2253: mov     rbx, [r12+18h]
 * 00000001402A2258: mov     rax, [rsi+1E8h]
 * 00000001402A225F: mov     rcx, rbx
 * 00000001402A2262: call    KeGuardDispatchICall
 * 00000001402A2267: movzx   r15d, word ptr [rax+14h]
 * 00000001402A226C: add     r15, 18h
 * 00000001402A2270: add     r15, rax
 * 00000001402A2273: movzx   eax, word ptr [rax+6]
 * 00000001402A2277: mov     [rbp+2150h+var_2148], r15
 * 00000001402A227B: lea     rcx, [rax+rax*4]
 * 00000001402A227F: lea     rax, [r15+rcx*8]
 * 00000001402A2283: mov     [rbp+2150h+var_2130], rax
 * 00000001402A2287: cmp     r15, rax
 * 00000001402A228A: jz      loc_1402A00F1
 * 00000001402A2290: cmp     [rsi+684h], r13d
 * 00000001402A2297: jnz     short loc_1402A22A3
 * 00000001402A2299: mov     dword ptr [rsi+684h], 1000h
 * 00000001402A22A3: cmp     rbx, [rsi+5A0h]
 * 00000001402A22AA: jz      loc_1402A25BC
 * 00000001402A22B0: cmp     rbx, [rsi+5A8h]
 * 00000001402A22B7: jz      loc_1402A25BC
 * 00000001402A22BD: mov     edi, r13d
 * 00000001402A22C0: jmp     loc_1402A25C1
 * 00000001402A22C5: movzx   eax, r15b
 * 00000001402A22C9: mov     cr8, rax
 * 00000001402A22CD: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A22D1: xor     r13d, r13d
 * 00000001402A22D4: mov     eax, [r12+14h]
 * 00000001402A22D9: cmp     [rsi+750h], r13d
 * 00000001402A22E0: jnz     short loc_1402A22F2
 * 00000001402A22E2: mov     ecx, ebx
 * 00000001402A22E4: xor     rcx, rax
 * 00000001402A22E7: mov     rax, [rsi+548h]
 * 00000001402A22EE: mov     [rax+18h], rcx
 * 00000001402A22F2: mov     rcx, [r12+8]
 * 00000001402A22F7: cmp     [rsi+750h], r13d
 * 00000001402A22FE: jnz     loc_1402A223D
 * 00000001402A2304: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A230E: add     rax, rsi
 * 00000001402A2311: mov     [rsi+758h], rax
 * 00000001402A2318: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2322: add     rax, r12
 * 00000001402A2325: mov     [rsi+760h], rax
 * 00000001402A232C: movsxd  rax, dword ptr [r12]
 * 00000001402A2330: mov     [rsi+768h], rax
 * 00000001402A2337: mov     eax, 1
 * 00000001402A233C: mov     [rsi+770h], rcx
 * 00000001402A2343: mov     [rsi+750h], eax
 * 00000001402A2349: jmp     loc_1402A223D
 * 00000001402A234E: mov     r14, [r12+8]
 * 00000001402A2353: mov     r8d, [r12+10h]
 * 00000001402A2358: mov     r9, r14
 * 00000001402A235B: add     [rsi+688h], r8d
 * 00000001402A2362: mov     rax, r14
 * 00000001402A2365: mov     r10d, [rsi+674h]
 * 00000001402A236C: mov     r15, [rsi+678h]
 * 00000001402A2373: lea     rcx, [r14+r8]
 * 00000001402A2377: cmp     r14, rcx
 * 00000001402A237A: jnb     short loc_1402A238C
 * 00000001402A237C: mov     edx, 40h ; '@'
 * 00000001402A2381: prefetchnta byte ptr [rax]
 * 00000001402A2384: add     rax, rdx
 * 00000001402A2387: cmp     rax, rcx
 * 00000001402A238A: jb      short loc_1402A2381
 * 00000001402A238C: mov     r11d, r8d
 * 00000001402A238F: mov     rbx, r15
 * 00000001402A2392: shr     r11d, 7
 * 00000001402A2396: mov     r12d, 1
 * 00000001402A239C: test    r11d, r11d
 * 00000001402A239F: jz      short loc_1402A2408
 * 00000001402A23A1: mov     rdi, 7010008004002001h
 * 00000001402A23AB: mov     eax, 8
 * 00000001402A23B0: xor     rbx, [r9]
 * 00000001402A23B3: mov     ecx, r10d
 * 00000001402A23B6: rol     rbx, cl
 * 00000001402A23B9: xor     rbx, [r9+8]
 * 00000001402A23BD: add     r9, 10h
 * 00000001402A23C1: rol     rbx, cl
 * 00000001402A23C4: sub     rax, r12
 * 00000001402A23C7: jnz     short loc_1402A23B0
 * 00000001402A23C9: mov     rcx, r9
 * 00000001402A23CC: sub     rcx, r14
 * 00000001402A23CF: xor     rcx, r15
 * 00000001402A23D2: mov     rax, rcx
 * 00000001402A23D5: rol     rax, 11h
 * 00000001402A23D9: xor     rcx, rax
 * 00000001402A23DC: mov     rax, rdi
 * 00000001402A23DF: mul     rcx
 * 00000001402A23E2: xor     r10d, eax
 * 00000001402A23E5: mov     [rbp+2150h+var_1B30], rdx
 * 00000001402A23EC: xor     r10d, edx
 * 00000001402A23EF: and     r10d, 3Fh
 * 00000001402A23F3: cmovz   r10d, r12d
 * 00000001402A23F7: add     r11d, 0FFFFFFFFh
 * 00000001402A23FB: jnz     short loc_1402A23AB
 * 00000001402A23FD: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A2401: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A2408: and     r8d, 7Fh
 * 00000001402A240C: cmp     r8d, 8
 * 00000001402A2410: jb      short loc_1402A242F
 * 00000001402A2412: mov     eax, r8d
 * 00000001402A2415: shr     rax, 3
 * 00000001402A2419: xor     rbx, [r9]
 * 00000001402A241C: mov     ecx, r10d
 * 00000001402A241F: rol     rbx, cl
 * 00000001402A2422: add     r9, 8
 * 00000001402A2426: add     r8d, 0FFFFFFF8h
 * 00000001402A242A: sub     rax, r12
 * 00000001402A242D: jnz     short loc_1402A2419
 * 00000001402A242F: test    r8d, r8d
 * 00000001402A2432: jz      short loc_1402A244A
 * 00000001402A2434: movzx   eax, byte ptr [r9]
 * 00000001402A2438: mov     ecx, r10d
 * 00000001402A243B: xor     rbx, rax
 * 00000001402A243E: add     r9, r12
 * 00000001402A2441: rol     rbx, cl
 * 00000001402A2444: add     r8d, 0FFFFFFFFh
 * 00000001402A2448: jnz     short loc_1402A2434
 * 00000001402A244A: mov     rax, rbx
 * 00000001402A244D: jmp     short loc_1402A2451
 * 00000001402A244F: xor     ebx, eax
 * 00000001402A2451: shr     rax, 1Fh
 * 00000001402A2455: test    rax, rax
 * 00000001402A2458: jnz     short loc_1402A244F
 * 00000001402A245A: mov     rax, [rbp+2150h+var_2138]
 * 00000001402A245E: btr     ebx, 1Fh
 * 00000001402A2462: mov     r12d, r13d
 * 00000001402A2465: cmp     ebx, [rax+14h]
 * 00000001402A2468: jz      loc_1402A2239
 * 00000001402A246E: cmp     [rax], r13d
 * 00000001402A2471: jnz     short loc_1402A2480
 * 00000001402A2473: cmp     [rax+18h], r13d
 * 00000001402A2477: mov     ecx, 1
 * 00000001402A247C: cmovnz  r12d, ecx
 * 00000001402A2480: mov     ecx, [rax+10h]
 * 00000001402A2483: mov     rdx, [rax+8]
 * 00000001402A2487: test    rcx, rcx
 * 00000001402A248A: jz      loc_1402A2538
 * 00000001402A2490: mov     eax, [rsi+7DCh]
 * 00000001402A2496: mov     r8d, 40h ; '@'
 * 00000001402A249C: test    r8b, al
 * 00000001402A249F: jz      loc_1402A2538
 * 00000001402A24A5: mov     r15, cr8
 * 00000001402A24A9: lea     eax, [r8-3Eh]
 * 00000001402A24AD: mov     cr8, rax
 * 00000001402A24B1: mov     r14, rdx
 * 00000001402A24B4: lea     rax, [rcx-1]
 * 00000001402A24B8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A24BF: add     rax, rdx
 * 00000001402A24C2: or      rax, 0FFFh
 * 00000001402A24C8: mov     [rbp+2150h+var_2110], rax
 * 00000001402A24CC: lea     r13, [r14-1]
 * 00000001402A24D0: mov     rax, [rsi+450h]
 * 00000001402A24D7: xor     edx, edx
 * 00000001402A24D9: mov     rcx, r14
 * 00000001402A24DC: call    KeGuardDispatchICall
 * 00000001402A24E1: cmp     eax, 0C000022Dh
 * 00000001402A24E6: jnz     short loc_1402A2511
 * 00000001402A24E8: test    r12d, r12d
 * 00000001402A24EB: jnz     short loc_1402A252D
 * 00000001402A24ED: lea     eax, [r12+1]
 * 00000001402A24F2: cmp     r15b, al
 * 00000001402A24F5: ja      short loc_1402A2515
 * 00000001402A24F7: movzx   eax, r15b
 * 00000001402A24FB: mov     cr8, rax
 * 00000001402A24FF: mov     al, [r14]
 * 00000001402A2502: mov     rax, cr8
 * 00000001402A2506: lea     eax, [r12+2]
 * 00000001402A250B: mov     cr8, rax
 * 00000001402A250F: jmp     short loc_1402A24D0
 * 00000001402A2511: test    eax, eax
 * 00000001402A2513: js      short loc_1402A252D
 * 00000001402A2515: mov     r10d, 1000h
 * 00000001402A251B: add     r14, r10
 * 00000001402A251E: add     r13, r10
 * 00000001402A2521: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A2525: jz      loc_1402A222E
 * 00000001402A252B: jmp     short loc_1402A24D0
 * 00000001402A252D: movzx   eax, r15b
 * 00000001402A2531: xor     r13d, r13d
 * 00000001402A2534: mov     cr8, rax
 * 00000001402A2538: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A253C: mov     eax, [r12+14h]
 * 00000001402A2541: cmp     [rsi+750h], r13d
 * 00000001402A2548: jnz     short loc_1402A255C
 * 00000001402A254A: mov     ecx, eax
 * 00000001402A254C: mov     eax, ebx
 * 00000001402A254E: xor     rcx, rax
 * 00000001402A2551: mov     rax, [rsi+548h]
 * 00000001402A2558: mov     [rax+18h], rcx
 * 00000001402A255C: mov     rcx, [r12+8]
 * 00000001402A2561: mov     r14, [rbp+2150h+var_2108]
 * 00000001402A2565: cmp     [rsi+750h], r13d
 * 00000001402A256C: jnz     loc_1402A2241
 * 00000001402A2572: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A257C: add     rax, rsi
 * 00000001402A257F: mov     [rsi+758h], rax
 * 00000001402A2586: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2590: add     rax, r12
 * 00000001402A2593: mov     [rsi+760h], rax
 * 00000001402A259A: movsxd  rax, dword ptr [r12]
 * 00000001402A259E: mov     [rsi+768h], rax
 * 00000001402A25A5: mov     eax, 1
 * 00000001402A25AA: mov     [rsi+770h], rcx
 * 00000001402A25B1: mov     [rsi+750h], eax
 * 00000001402A25B7: jmp     loc_1402A2241
 * 00000001402A25BC: mov     edi, 1
 * 00000001402A25C1: mov     r12d, [rsi+684h]
 * 00000001402A25C8: mov     rsi, rbx
 * 00000001402A25CB: mov     [rbp+2150h+var_2128], edi
 * 00000001402A25CE: mov     eax, [r15+10h]
 * 00000001402A25D2: mov     ecx, [r15+8]
 * 00000001402A25D6: cmp     eax, ecx
 * 00000001402A25D8: mov     r11d, [r15+0Ch]
 * 00000001402A25DC: cmova   ecx, eax
 * 00000001402A25DF: lea     r13d, [rcx+0FFFh]
 * 00000001402A25E6: add     r13d, r11d
 * 00000001402A25E9: and     r13d, 0FFFFF000h
 * 00000001402A25F0: cmp     r12d, r13d
 * 00000001402A25F3: jnb     loc_1402A26FA
 * 00000001402A25F9: mov     eax, [r15+24h]
 * 00000001402A25FD: bt      eax, 19h
 * 00000001402A2601: jb      loc_1402A26F7
 * 00000001402A2607: mov     ecx, [r15]
 * 00000001402A260A: cmp     ecx, 54494E49h
 * 00000001402A2610: jnz     short loc_1402A2620
 * 00000001402A2612: cmp     dword ptr [r15+4], 4742444Bh
 * 00000001402A261A: jz      loc_1402A26F7
 * 00000001402A2620: cmp     ecx, 45474150h
 * 00000001402A2626: jnz     short loc_1402A2657
 * 00000001402A2628: movzx   eax, word ptr [r15+4]
 * 00000001402A262D: mov     edx, 7777h
 * 00000001402A2632: cmp     ax, dx
 * 00000001402A2635: jz      loc_1402A26F7
 * 00000001402A263B: mov     edx, 7277h
 * 00000001402A2640: cmp     ax, dx
 * 00000001402A2643: jz      loc_1402A26F7
 * 00000001402A2649: mov     edx, 7877h
 * 00000001402A264E: cmp     ax, dx
 * 00000001402A2651: jz      loc_1402A26F7
 * 00000001402A2657: cmp     ecx, 41525245h
 * 00000001402A265D: jnz     short loc_1402A266F
 * 00000001402A265F: mov     eax, 4154h
 * 00000001402A2664: cmp     [r15+4], ax
 * 00000001402A2669: jz      loc_1402A26F7
 * 00000001402A266F: test    r14, r14
 * 00000001402A2672: jz      short loc_1402A26AE
 * 00000001402A2674: mov     rax, [r14+790h]
 * 00000001402A267B: mov     r8, [r14+788h]
 * 00000001402A2682: mov     qword ptr [rbp+2150h+var_1E00+8], rax
 * 00000001402A2689: mov     rax, [r14+798h]
 * 00000001402A2690: mov     qword ptr [rbp+2150h+var_1DF0], rax
 * 00000001402A2697: mov     rax, [r14+7A0h]
 * 00000001402A269E: mov     qword ptr [rbp+2150h+var_1DF0+8], rax
 * 00000001402A26A5: mov     qword ptr [rbp+2150h+var_1E00], r8
 * 00000001402A26AC: jmp     short loc_1402A26D1
 * 00000001402A26AE: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 00000001402A26B5: movups  xmm1, xmmword ptr cs:off_140356590; "INIT"
 * 00000001402A26BC: movups  [rbp+2150h+var_1E00], xmm0
 * 00000001402A26C3: mov     r8, qword ptr [rbp+2150h+var_1E00]
 * 00000001402A26CA: movups  [rbp+2150h+var_1DF0], xmm1
 * 00000001402A26D1: mov     r10d, 7
 * 00000001402A26D7: mov     r9, r15
 * 00000001402A26DA: lea     r14d, [r10-6]
 * 00000001402A26DE: movzx   edx, byte ptr [r9]
 * 00000001402A26E2: add     r9, r14
 * 00000001402A26E5: movzx   eax, byte ptr [r8]
 * 00000001402A26E9: add     r8, r14
 * 00000001402A26EC: cmp     rdx, rax
 * 00000001402A26EF: jnz     short loc_1402A2718
 * 00000001402A26F1: add     r10d, 0FFFFFFFFh
 * 00000001402A26F5: jnz     short loc_1402A26DE
 * 00000001402A26F7: mov     r12d, r13d
 * 00000001402A26FA: mov     rax, [rbp+2150h+var_2130]
 * 00000001402A26FE: add     r15, 28h ; '('
 * 00000001402A2702: mov     r14, [rbp+2150h+var_2108]
 * 00000001402A2706: mov     [rbp+2150h+var_2148], r15
 * 00000001402A270A: cmp     r15, rax
 * 00000001402A270D: jnz     loc_1402A25CE
 * 00000001402A2713: jmp     loc_1402A2A4A
 * 00000001402A2718: mov     r9, qword ptr [rbp+2150h+var_1E00+8]
 * 00000001402A271F: mov     r8d, 8
 * 00000001402A2725: mov     r10, r15
 * 00000001402A2728: mov     rcx, [r10]
 * 00000001402A272B: add     r10, 8
 * 00000001402A272F: mov     rax, [r9]
 * 00000001402A2732: add     r9, 8
 * 00000001402A2736: cmp     rcx, rax
 * 00000001402A2739: jnz     short loc_1402A2767
 * 00000001402A273B: add     r8d, 0FFFFFFF8h
 * 00000001402A273F: cmp     r8d, 8
 * 00000001402A2743: jnb     short loc_1402A2728
 * 00000001402A2745: test    r8d, r8d
 * 00000001402A2748: jz      short loc_1402A26F7
 * 00000001402A274A: or      ebx, 0FFFFFFFFh
 * 00000001402A274D: movzx   edx, byte ptr [r10]
 * 00000001402A2751: add     r10, r14
 * 00000001402A2754: movzx   eax, byte ptr [r9]
 * 00000001402A2758: add     r9, r14
 * 00000001402A275B: cmp     rdx, rax
 * 00000001402A275E: jnz     short loc_1402A2767
 * 00000001402A2760: add     r8d, ebx
 * 00000001402A2763: jnz     short loc_1402A274D
 * 00000001402A2765: jmp     short loc_1402A26F7
 * 00000001402A2767: mov     r8, qword ptr [rbp+2150h+var_1DF0]
 * 00000001402A276E: mov     r10d, 4
 * 00000001402A2774: mov     r9, r15
 * 00000001402A2777: or      ebx, 0FFFFFFFFh
 * 00000001402A277A: movzx   edx, byte ptr [r9]
 * 00000001402A277E: add     r9, r14
 * 00000001402A2781: movzx   eax, byte ptr [r8]
 * 00000001402A2785: add     r8, r14
 * 00000001402A2788: cmp     rdx, rax
 * 00000001402A278B: jnz     short loc_1402A2797
 * 00000001402A278D: add     r10d, ebx
 * 00000001402A2790: jnz     short loc_1402A277A
 * 00000001402A2792: jmp     loc_1402A26F7
 * 00000001402A2797: mov     r8, qword ptr [rbp+2150h+var_1DF0+8]
 * 00000001402A279E: mov     r10d, 6
 * 00000001402A27A4: mov     r9, r15
 * 00000001402A27A7: movzx   edx, byte ptr [r9]
 * 00000001402A27AB: add     r9, r14
 * 00000001402A27AE: movzx   eax, byte ptr [r8]
 * 00000001402A27B2: add     r8, r14
 * 00000001402A27B5: cmp     rdx, rax
 * 00000001402A27B8: jnz     short loc_1402A27C4
 * 00000001402A27BA: add     r10d, ebx
 * 00000001402A27BD: jnz     short loc_1402A27A7
 * 00000001402A27BF: jmp     loc_1402A26F7
 * 00000001402A27C4: mov     eax, [r15+24h]
 * 00000001402A27C8: xor     r8d, r8d
 * 00000001402A27CB: test    eax, eax
 * 00000001402A27CD: js      loc_1402A26F7
 * 00000001402A27D3: bt      eax, 1Dh
 * 00000001402A27D7: jnb     loc_1402A26F7
 * 00000001402A27DD: test    edi, edi
 * 00000001402A27DF: jz      short loc_1402A27F4
 * 00000001402A27E1: mov     eax, [r15]
 * 00000001402A27E4: cmp     eax, 2E656461h
 * 00000001402A27E9: jz      short loc_1402A27F4
 * 00000001402A27EB: cmp     eax, 45474150h
 * 00000001402A27F0: cmovnz  r14d, r8d
 * 00000001402A27F4: mov     rdi, [rbp+2150h+var_2108]
 * 00000001402A27F8: cmp     r12d, r11d
 * 00000001402A27FB: mov     r15, [rbp+2150h+var_2138]
 * 00000001402A27FF: cmovb   r12d, r11d
 * 00000001402A2803: mov     ebx, r12d
 * 00000001402A2806: add     rbx, rsi
 * 00000001402A2809: test    byte ptr [rdi+6DBh], 4
 * 00000001402A2810: jz      short loc_1402A2874
 * 00000001402A2812: or      ecx, 0FFFFFFFFh
 * 00000001402A2815: mov     eax, ecx
 * 00000001402A2817: xbegin  $+6
 * 00000001402A281D: cmp     eax, ecx
 * 00000001402A281F: jnz     short loc_1402A2828
 * 00000001402A2821: mov     al, [rbx]
 * 00000001402A2823: xend
 * 00000001402A2826: jmp     short loc_1402A285A
 * 00000001402A2828: rdtsc
 * 00000001402A282A: shl     rdx, 20h
 * 00000001402A282E: or      rax, rdx
 * 00000001402A2831: mov     rcx, rax
 * 00000001402A2834: ror     rax, 3
 * 00000001402A2838: xor     rcx, rax
 * 00000001402A283B: mov     rax, 7010008004002001h
 * 00000001402A2845: mul     rcx
 * 00000001402A2848: mov     [rbp+2150h+var_1B28], rdx
 * 00000001402A284F: xor     dl, al
 * 00000001402A2851: mov     eax, 0Fh
 * 00000001402A2856: test    al, dl
 * 00000001402A2858: jz      short loc_1402A2874
 * 00000001402A285A: mov     eax, 1
 * 00000001402A285F: add     [rdi+69Ch], eax
 * 00000001402A2865: add     dword ptr [rdi+688h], 100h
 * 00000001402A286F: jmp     loc_1402A2A0B
 * 00000001402A2874: test    r14d, r14d
 * 00000001402A2877: jz      loc_1402A28FE
 * 00000001402A287D: mov     rax, [rdi+438h]
 * 00000001402A2884: lea     rcx, [rbp+2150h+var_1C38]
 * 00000001402A288B: mov     rdx, rbx
 * 00000001402A288E: call    KeGuardDispatchICall
 * 00000001402A2893: xor     r8d, r8d
 * 00000001402A2896: test    eax, eax
 * 00000001402A2898: jns     loc_1402A2976
 * 00000001402A289E: cmp     eax, 0C0000005h
 * 00000001402A28A3: jnz     loc_1402A2A0B
 * 00000001402A28A9: cmp     [rdi+750h], r8d
 * 00000001402A28B0: jnz     loc_1402A2A0B
 * 00000001402A28B6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A28C0: add     rax, rdi
 * 00000001402A28C3: mov     [rdi+758h], rax
 * 00000001402A28CA: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A28D4: add     rax, r15
 * 00000001402A28D7: mov     [rdi+760h], rax
 * 00000001402A28DE: movsxd  rax, dword ptr [r15]
 * 00000001402A28E1: mov     [rdi+768h], rax
 * 00000001402A28E8: lea     eax, [r8+1]
 * 00000001402A28EC: mov     [rdi+770h], rbx
 * 00000001402A28F3: mov     [rdi+750h], eax
 * 00000001402A28F9: jmp     loc_1402A2A0B
 * 00000001402A28FE: mov     edx, 0FFFh
 * 00000001402A2903: mov     [rbp+2150h+var_1C38], r8
 * 00000001402A290A: mov     [rbp+2150h+var_1C2E], r8w
 * 00000001402A2912: mov     rax, rbx
 * 00000001402A2915: and     rax, rdx
 * 00000001402A2918: mov     [rbp+2150h+var_1C10], 1000h
 * 00000001402A2922: add     rax, 1FFFh
 * 00000001402A2928: mov     rcx, rbx
 * 00000001402A292B: shr     rax, 0Ch
 * 00000001402A292F: add     ax, 6
 * 00000001402A2933: shl     ax, 3
 * 00000001402A2937: mov     [rbp+2150h+var_1C30], ax
 * 00000001402A293E: mov     rax, rbx
 * 00000001402A2941: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001402A2947: mov     [rbp+2150h+var_1C18], rax
 * 00000001402A294E: mov     eax, ebx
 * 00000001402A2950: and     eax, edx
 * 00000001402A2952: mov     [rbp+2150h+var_1C0C], eax
 * 00000001402A2958: mov     rax, [rdi+440h]
 * 00000001402A295F: call    KeGuardDispatchICall
 * 00000001402A2964: mov     [rbp+2150h+var_1B20], rax
 * 00000001402A296B: shr     rax, 0Ch
 * 00000001402A296F: mov     [rbp+2150h+var_1C08], rax
 * 00000001402A2976: mov     eax, 1
 * 00000001402A297B: add     [rdi+6A0h], eax
 * 00000001402A2981: mov     eax, [rbp+2150h+var_1C0C]
 * 00000001402A2987: add     rax, [rbp+2150h+var_1C18]
 * 00000001402A298E: mov     [rdi+898h], rax
 * 00000001402A2995: mov     [rdi+890h], r15
 * 00000001402A299C: mov     rbx, cr8
 * 00000001402A29A0: mov     eax, 2
 * 00000001402A29A5: mov     cr8, rax
 * 00000001402A29A9: mov     rax, [rdi+5B0h]
 * 00000001402A29B0: lea     rcx, [rdi+870h]
 * 00000001402A29B7: xor     r8d, r8d
 * 00000001402A29BA: mov     edx, [rax]
 * 00000001402A29BC: call    RtlInitMinimalBarrier
 * 00000001402A29C1: mov     ecx, [rdi+654h]
 * 00000001402A29C7: mov     rdx, rdi
 * 00000001402A29CA: mov     rax, [rdi+430h]
 * 00000001402A29D1: add     rcx, rdi
 * 00000001402A29D4: call    KeGuardDispatchICall
 * 00000001402A29D9: mov     rdi, rax
 * 00000001402A29DC: movzx   eax, bl
 * 00000001402A29DF: mov     cr8, rax
 * 00000001402A29E3: xor     r8d, r8d
 * 00000001402A29E6: test    r14d, r14d
 * 00000001402A29E9: jz      short loc_1402A2A01
 * 00000001402A29EB: mov     rax, [rdi+448h]
 * 00000001402A29F2: lea     rcx, [rbp+2150h+var_1C38]
 * 00000001402A29F9: call    KeGuardDispatchICall
 * 00000001402A29FE: xor     r8d, r8d
 * 00000001402A2A01: add     dword ptr [rdi+688h], 14000h
 * 00000001402A2A0B: add     r12d, 1000h
 * 00000001402A2A12: cmp     r12d, r13d
 * 00000001402A2A15: jnb     short loc_1402A2A29
 * 00000001402A2A17: mov     eax, [rdi+68Ch]
 * 00000001402A2A1D: cmp     [rdi+688h], eax
 * 00000001402A2A23: jl      loc_1402A2803
 * 00000001402A2A29: mov     eax, [rdi+68Ch]
 * 00000001402A2A2F: cmp     [rdi+688h], eax
 * 00000001402A2A35: mov     r15, [rbp+2150h+var_2148]
 * 00000001402A2A39: mov     [rbp+2150h+var_2108], rdi
 * 00000001402A2A3D: mov     edi, [rbp+2150h+var_2128]
 * 00000001402A2A40: jl      loc_1402A26FA
 * 00000001402A2A46: mov     rax, [rbp+2150h+var_2130]
 * 00000001402A2A4A: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A2A4E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A2A55: cmp     r15, rax
 * 00000001402A2A58: jnz     short loc_1402A2A72
 * 00000001402A2A5A: cmp     r12d, r13d
 * 00000001402A2A5D: jb      short loc_1402A2A72
 * 00000001402A2A5F: mov     rax, [rbp+2150h+var_2108]
 * 00000001402A2A63: xor     r13d, r13d
 * 00000001402A2A66: mov     [rax+684h], r13d
 * 00000001402A2A6D: jmp     loc_1402A00F1
 * 00000001402A2A72: mov     rax, [rbp+2150h+var_2108]
 * 00000001402A2A76: mov     [rax+684h], r12d
 * 00000001402A2A7D: jmp     loc_14029B6E3
 * 00000001402A2A82: xor     eax, eax
 * 00000001402A2A84: mov     r8d, 0Ch
 * 00000001402A2A8A: cmp     r15d, r8d
 * 00000001402A2A8D: jnz     loc_1402A2D9F
 * 00000001402A2A93: cmp     [rsi+7D0h], rax
 * 00000001402A2A9A: jz      loc_14029B15D
 * 00000001402A2AA0: cmp     [rsi+684h], eax
 * 00000001402A2AA6: mov     eax, [rsi+7DCh]
 * 00000001402A2AAC: mov     ecx, eax
 * 00000001402A2AAE: jnz     short loc_1402A2AC6
 * 00000001402A2AB0: shl     ecx, 3
 * 00000001402A2AB3: xor     ecx, eax
 * 00000001402A2AB5: and     ecx, 20h
 * 00000001402A2AB8: xor     ecx, eax
 * 00000001402A2ABA: mov     [rsi+7DCh], ecx
 * 00000001402A2AC0: jmp     short loc_1402A2AD4
 * 00000001402A2AC2: xor     eax, eax
 * 00000001402A2AC4: jmp     short loc_1402A2A8A
 * 00000001402A2AC6: shr     ecx, 3
 * 00000001402A2AC9: xor     ecx, eax
 * 00000001402A2ACB: test    cl, 4
 * 00000001402A2ACE: jnz     loc_1402A030B
 * 00000001402A2AD4: mov     eax, [rsi+7DCh]
 * 00000001402A2ADA: test    al, 4
 * 00000001402A2ADC: jz      loc_1402A2D9F
 * 00000001402A2AE2: mov     r15, [r12+20h]
 * 00000001402A2AE7: mov     eax, [r12+28h]
 * 00000001402A2AEC: test    r15, r15
 * 00000001402A2AEF: jz      short loc_1402A2B19
 * 00000001402A2AF1: mov     ebx, [rsi+684h]
 * 00000001402A2AF7: sub     eax, ebx
 * 00000001402A2AF9: mov     r14d, eax
 * 00000001402A2AFC: add     r14, 0FFFh
 * 00000001402A2B03: lea     ecx, [r15+rbx]
 * 00000001402A2B07: and     ecx, 0FFFh
 * 00000001402A2B0D: add     r14, rcx
 * 00000001402A2B10: shr     r14, 0Ch
 * 00000001402A2B14: add     rbx, r15
 * 00000001402A2B17: jmp     short loc_1402A2B3D
 * 00000001402A2B19: mov     r14d, [r12+8]
 * 00000001402A2B1E: mov     ecx, [r12+10h]
 * 00000001402A2B23: and     r14d, 0FFFh
 * 00000001402A2B2A: mov     rbx, [r12+8]
 * 00000001402A2B2F: add     r14, 0FFFh
 * 00000001402A2B36: add     r14, rcx
 * 00000001402A2B39: shr     r14, 0Ch
 * 00000001402A2B3D: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A2B44: test    r14, r14
 * 00000001402A2B47: jz      loc_1402A2BEE
 * 00000001402A2B4D: xor     edi, edi
 * 00000001402A2B4F: mov     rax, [rsi+2A0h]
 * 00000001402A2B56: mov     rcx, rbx
 * 00000001402A2B59: dec     r14
 * 00000001402A2B5C: call    KeGuardDispatchICall
 * 00000001402A2B61: test    al, al
 * 00000001402A2B63: jz      short loc_1402A2BB2
 * 00000001402A2B65: cmp     [rsi+750h], edi
 * 00000001402A2B6B: jnz     short loc_1402A2BB2
 * 00000001402A2B6D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A2B77: add     rax, rsi
 * 00000001402A2B7A: mov     [rsi+758h], rax
 * 00000001402A2B81: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2B8B: add     rax, r12
 * 00000001402A2B8E: mov     [rsi+760h], rax
 * 00000001402A2B95: movsxd  rax, dword ptr [r12]
 * 00000001402A2B99: mov     [rsi+768h], rax
 * 00000001402A2BA0: mov     eax, 1
 * 00000001402A2BA5: mov     [rsi+770h], rbx
 * 00000001402A2BAC: mov     [rsi+750h], eax
 * 00000001402A2BB2: add     dword ptr [rsi+688h], 100h
 * 00000001402A2BBC: add     rbx, 1000h
 * 00000001402A2BC3: test    r15, r15
 * 00000001402A2BC6: jz      short loc_1402A2BDE
 * 00000001402A2BC8: add     dword ptr [rsi+684h], 1000h
 * 00000001402A2BD2: mov     eax, [r13+0]
 * 00000001402A2BD6: cmp     [rsi+688h], eax
 * 00000001402A2BDC: jge     short loc_1402A2BE7
 * 00000001402A2BDE: test    r14, r14
 * 00000001402A2BE1: jnz     loc_1402A2B4F
 * 00000001402A2BE7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A2BEE: xor     r13d, r13d
 * 00000001402A2BF1: test    r15, r15
 * 00000001402A2BF4: jz      short loc_1402A2C02
 * 00000001402A2BF6: test    r14, r14
 * 00000001402A2BF9: jnz     short loc_1402A2C02
 * 00000001402A2BFB: mov     [rsi+684h], r13d
 * 00000001402A2C02: cmp     [rsi+684h], r13d
 * 00000001402A2C09: jnz     loc_1402A00F1
 * 00000001402A2C0F: mov     rcx, [rsi+4F8h]
 * 00000001402A2C16: mov     r15, cr8
 * 00000001402A2C1A: mov     eax, 0Fh
 * 00000001402A2C1F: mov     cr8, rax
 * 00000001402A2C23: mov     rax, [rsi+140h]
 * 00000001402A2C2A: call    KeGuardDispatchICall
 * 00000001402A2C2F: mov     rax, [rsi+5C8h]
 * 00000001402A2C36: mov     r14, [rbp+2150h+var_2138]
 * 00000001402A2C3A: mov     rcx, [rax]
 * 00000001402A2C3D: mov     eax, [rcx]
 * 00000001402A2C3F: lea     rbx, [rcx+10h]
 * 00000001402A2C43: mov     r12b, [rcx+0Ch]
 * 00000001402A2C47: lea     rcx, [rax+rax*2]
 * 00000001402A2C4B: lea     r13, [rbx+rcx*8]
 * 00000001402A2C4F: mov     r8d, 18h
 * 00000001402A2C55: lea     r9, [r14+18h]
 * 00000001402A2C59: mov     r10, rbx
 * 00000001402A2C5C: mov     rcx, [r10]
 * 00000001402A2C5F: add     r10, 8
 * 00000001402A2C63: mov     rax, [r9]
 * 00000001402A2C66: add     r9, 8
 * 00000001402A2C6A: cmp     rcx, rax
 * 00000001402A2C6D: jnz     short loc_1402A2C9F
 * 00000001402A2C6F: add     r8d, 0FFFFFFF8h
 * 00000001402A2C73: cmp     r8d, 8
 * 00000001402A2C77: jnb     short loc_1402A2C5C
 * 00000001402A2C79: test    r8d, r8d
 * 00000001402A2C7C: jz      short loc_1402A2CA8
 * 00000001402A2C7E: mov     r11d, 1
 * 00000001402A2C84: movzx   edx, byte ptr [r10]
 * 00000001402A2C88: add     r10, r11
 * 00000001402A2C8B: movzx   eax, byte ptr [r9]
 * 00000001402A2C8F: add     r9, r11
 * 00000001402A2C92: cmp     rdx, rax
 * 00000001402A2C95: jnz     short loc_1402A2C9F
 * 00000001402A2C97: add     r8d, 0FFFFFFFFh
 * 00000001402A2C9B: jz      short loc_1402A2CA8
 * 00000001402A2C9D: jmp     short loc_1402A2C84
 * 00000001402A2C9F: add     rbx, 18h
 * 00000001402A2CA3: cmp     rbx, r13
 * 00000001402A2CA6: jb      short loc_1402A2C4F
 * 00000001402A2CA8: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A2CAC: mov     rcx, [rsi+4F8h]
 * 00000001402A2CB3: mov     rax, [rsi+180h]
 * 00000001402A2CBA: call    KeGuardDispatchICall
 * 00000001402A2CBF: movzx   eax, r15b
 * 00000001402A2CC3: mov     cr8, rax
 * 00000001402A2CC7: xor     ecx, ecx
 * 00000001402A2CC9: test    r12b, r12b
 * 00000001402A2CCC: jz      short loc_1402A2D35
 * 00000001402A2CCE: mov     eax, [rsi+7DCh]
 * 00000001402A2CD4: lea     edx, [rcx+10h]
 * 00000001402A2CD7: test    dl, al
 * 00000001402A2CD9: lea     edx, [rcx+1]
 * 00000001402A2CDC: jz      short loc_1402A2D29
 * 00000001402A2CDE: cmp     [rsi+750h], ecx
 * 00000001402A2CE4: jnz     short loc_1402A2D29
 * 00000001402A2CE6: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A2CEA: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A2CF4: add     rax, rsi
 * 00000001402A2CF7: mov     [rsi+758h], rax
 * 00000001402A2CFE: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2D08: add     rax, rcx
 * 00000001402A2D0B: mov     [rsi+760h], rax
 * 00000001402A2D12: movsxd  rax, dword ptr [rcx]
 * 00000001402A2D15: mov     [rsi+768h], rax
 * 00000001402A2D1C: mov     [rsi+770h], rdx
 * 00000001402A2D23: mov     [rsi+750h], edx
 * 00000001402A2D29: cmp     [r14+18h], rdx
 * 00000001402A2D2D: jz      loc_14029B6E3
 * 00000001402A2D33: jmp     short loc_1402A2D3A
 * 00000001402A2D35: mov     edx, 1
 * 00000001402A2D3A: cmp     rbx, r13
 * 00000001402A2D3D: jnz     loc_14029B6E3
 * 00000001402A2D43: xor     r13d, r13d
 * 00000001402A2D46: mov     r14d, 8000h
 * 00000001402A2D4C: lea     r15d, [r13+0Ch]
 * 00000001402A2D50: cmp     [rsi+750h], r13d
 * 00000001402A2D57: jnz     loc_1402A3C6E
 * 00000001402A2D5D: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A2D61: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A2D6B: add     rax, rsi
 * 00000001402A2D6E: mov     [rsi+758h], rax
 * 00000001402A2D75: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A2D7F: add     rax, rcx
 * 00000001402A2D82: mov     [rsi+760h], rax
 * 00000001402A2D89: movsxd  rax, dword ptr [rcx]
 * 00000001402A2D8C: mov     [rsi+768h], rax
 * 00000001402A2D93: mov     [rsi+770h], rbx
 * 00000001402A2D9A: jmp     loc_1402A3C68
 * 00000001402A2D9F: xor     r13d, r13d
 * 00000001402A2DA2: cmp     [rsi+684h], r13d
 * 00000001402A2DA9: jnz     loc_1402A3071
 * 00000001402A2DAF: cmp     r15d, r8d
 * 00000001402A2DB2: jnz     loc_1402A3269
 * 00000001402A2DB8: cmp     [rsi+7D0h], r13
 * 00000001402A2DBF: jnz     short loc_1402A2DCD
 * 00000001402A2DC1: mov     [rsi+684h], r13d
 * 00000001402A2DC8: jmp     loc_1402A3071
 * 00000001402A2DCD: mov     eax, [rsi+7DCh]
 * 00000001402A2DD3: mov     ecx, eax
 * 00000001402A2DD5: shl     ecx, 3
 * 00000001402A2DD8: xor     ecx, eax
 * 00000001402A2DDA: and     ecx, 20h
 * 00000001402A2DDD: xor     ecx, eax
 * 00000001402A2DDF: mov     [rsi+7DCh], ecx
 * 00000001402A2DE5: test    cl, 4
 * 00000001402A2DE8: jz      loc_1402A2EA2
 * 00000001402A2DEE: mov     r14d, [r12+8]
 * 00000001402A2DF3: mov     ecx, [r12+10h]
 * 00000001402A2DF8: and     r14d, 0FFFh
 * 00000001402A2DFF: mov     rbx, [r12+8]
 * 00000001402A2E04: add     r14, 0FFFh
 * 00000001402A2E0B: add     r14, rcx
 * 00000001402A2E0E: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A2E15: shr     r14, 0Ch
 * 00000001402A2E19: test    r14, r14
 * 00000001402A2E1C: jz      loc_1402A3071
 * 00000001402A2E22: mov     edi, 1
 * 00000001402A2E27: mov     r15, 0B3B74BDEE4453415h
 * 00000001402A2E31: mov     rax, [rsi+2A0h]
 * 00000001402A2E38: mov     rcx, rbx
 * 00000001402A2E3B: sub     r14, rdi
 * 00000001402A2E3E: call    KeGuardDispatchICall
 * 00000001402A2E43: test    al, al
 * 00000001402A2E45: jz      short loc_1402A2E87
 * 00000001402A2E47: cmp     [rsi+750h], r13d
 * 00000001402A2E4E: jnz     short loc_1402A2E87
 * 00000001402A2E50: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A2E5A: add     rax, rsi
 * 00000001402A2E5D: mov     [rsi+758h], rax
 * 00000001402A2E64: lea     rax, [r12+r15]
 * 00000001402A2E68: mov     [rsi+760h], rax
 * 00000001402A2E6F: movsxd  rax, dword ptr [r12]
 * 00000001402A2E73: mov     [rsi+768h], rax
 * 00000001402A2E7A: mov     [rsi+770h], rbx
 * 00000001402A2E81: mov     [rsi+750h], edi
 * 00000001402A2E87: add     dword ptr [rsi+688h], 100h
 * 00000001402A2E91: add     rbx, 1000h
 * 00000001402A2E98: test    r14, r14
 * 00000001402A2E9B: jnz     short loc_1402A2E31
 * 00000001402A2E9D: jmp     loc_1402A306D
 * 00000001402A2EA2: mov     r11, [r12+8]
 * 00000001402A2EA7: mov     r8d, [r12+10h]
 * 00000001402A2EAC: mov     r9, r11
 * 00000001402A2EAF: add     [rsi+688h], r8d
 * 00000001402A2EB6: mov     rax, r11
 * 00000001402A2EB9: mov     r14d, [rsi+674h]
 * 00000001402A2EC0: mov     r15, [rsi+678h]
 * 00000001402A2EC7: lea     rcx, [r11+r8]
 * 00000001402A2ECB: cmp     r11, rcx
 * 00000001402A2ECE: jnb     short loc_1402A2EE0
 * 00000001402A2ED0: mov     edx, 40h ; '@'
 * 00000001402A2ED5: prefetchnta byte ptr [rax]
 * 00000001402A2ED8: add     rax, rdx
 * 00000001402A2EDB: cmp     rax, rcx
 * 00000001402A2EDE: jb      short loc_1402A2ED5
 * 00000001402A2EE0: mov     r10d, r8d
 * 00000001402A2EE3: mov     rbx, r15
 * 00000001402A2EE6: shr     r10d, 7
 * 00000001402A2EEA: test    r10d, r10d
 * 00000001402A2EED: jz      short loc_1402A2F5A
 * 00000001402A2EEF: mov     rdi, 7010008004002001h
 * 00000001402A2EF9: mov     edx, 8
 * 00000001402A2EFE: lea     esi, [rdx-7]
 * 00000001402A2F01: mov     rax, [r9]
 * 00000001402A2F04: mov     ecx, r14d
 * 00000001402A2F07: xor     rax, rbx
 * 00000001402A2F0A: mov     rbx, [r9+8]
 * 00000001402A2F0E: rol     rax, cl
 * 00000001402A2F11: add     r9, 10h
 * 00000001402A2F15: xor     rbx, rax
 * 00000001402A2F18: rol     rbx, cl
 * 00000001402A2F1B: sub     rdx, rsi
 * 00000001402A2F1E: jnz     short loc_1402A2F01
 * 00000001402A2F20: mov     rcx, r9
 * 00000001402A2F23: sub     rcx, r11
 * 00000001402A2F26: xor     rcx, r15
 * 00000001402A2F29: mov     rax, rcx
 * 00000001402A2F2C: rol     rax, 11h
 * 00000001402A2F30: xor     rcx, rax
 * 00000001402A2F33: mov     rax, rdi
 * 00000001402A2F36: mul     rcx
 * 00000001402A2F39: xor     eax, edx
 * 00000001402A2F3B: mov     [rbp+2150h+var_1B18], rdx
 * 00000001402A2F42: xor     r14d, eax
 * 00000001402A2F45: mov     rax, rsi
 * 00000001402A2F48: and     r14d, 3Fh
 * 00000001402A2F4C: cmovz   r14d, eax
 * 00000001402A2F50: add     r10d, 0FFFFFFFFh
 * 00000001402A2F54: jnz     short loc_1402A2EF9
 * 00000001402A2F56: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A2F5A: and     r8d, 7Fh
 * 00000001402A2F5E: mov     r10d, 1
 * 00000001402A2F64: cmp     r8d, 8
 * 00000001402A2F68: jb      short loc_1402A2F87
 * 00000001402A2F6A: mov     edx, r8d
 * 00000001402A2F6D: shr     rdx, 3
 * 00000001402A2F71: xor     rbx, [r9]
 * 00000001402A2F74: mov     ecx, r14d
 * 00000001402A2F77: rol     rbx, cl
 * 00000001402A2F7A: add     r9, 8
 * 00000001402A2F7E: add     r8d, 0FFFFFFF8h
 * 00000001402A2F82: sub     rdx, r10
 * 00000001402A2F85: jnz     short loc_1402A2F71
 * 00000001402A2F87: test    r8d, r8d
 * 00000001402A2F8A: jz      short loc_1402A2FA2
 * 00000001402A2F8C: movzx   eax, byte ptr [r9]
 * 00000001402A2F90: mov     ecx, r14d
 * 00000001402A2F93: xor     rbx, rax
 * 00000001402A2F96: add     r9, r10
 * 00000001402A2F99: rol     rbx, cl
 * 00000001402A2F9C: add     r8d, 0FFFFFFFFh
 * 00000001402A2FA0: jnz     short loc_1402A2F8C
 * 00000001402A2FA2: mov     rax, rbx
 * 00000001402A2FA5: jmp     short loc_1402A2FA9
 * 00000001402A2FA7: xor     ebx, eax
 * 00000001402A2FA9: shr     rax, 1Fh
 * 00000001402A2FAD: test    rax, rax
 * 00000001402A2FB0: jnz     short loc_1402A2FA7
 * 00000001402A2FB2: btr     ebx, 1Fh
 * 00000001402A2FB6: cmp     ebx, [r12+14h]
 * 00000001402A2FBB: jz      loc_1402A306D
 * 00000001402A2FC1: mov     ecx, [r12+10h]
 * 00000001402A2FC6: mov     rdx, [r12+8]
 * 00000001402A2FCB: test    rcx, rcx
 * 00000001402A2FCE: jz      loc_1402A31EF
 * 00000001402A2FD4: mov     eax, [rsi+7DCh]
 * 00000001402A2FDA: mov     r8d, 40h ; '@'
 * 00000001402A2FE0: test    r8b, al
 * 00000001402A2FE3: jz      loc_1402A31EF
 * 00000001402A2FE9: mov     r15, cr8
 * 00000001402A2FED: mov     r14, rdx
 * 00000001402A2FF0: lea     r13, [rcx-1]
 * 00000001402A2FF4: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A2FFB: add     r13, rdx
 * 00000001402A2FFE: or      r13, 0FFFh
 * 00000001402A3005: lea     r12, [r14-1]
 * 00000001402A3009: mov     eax, 2
 * 00000001402A300E: mov     cr8, rax
 * 00000001402A3012: mov     rax, [rsi+450h]
 * 00000001402A3019: xor     edx, edx
 * 00000001402A301B: mov     rcx, r14
 * 00000001402A301E: call    KeGuardDispatchICall
 * 00000001402A3023: cmp     eax, 0C000022Dh
 * 00000001402A3028: jnz     short loc_1402A3045
 * 00000001402A302A: mov     eax, 1
 * 00000001402A302F: cmp     r15b, al
 * 00000001402A3032: ja      short loc_1402A304D
 * 00000001402A3034: movzx   eax, r15b
 * 00000001402A3038: mov     cr8, rax
 * 00000001402A303C: mov     al, [r14]
 * 00000001402A303F: mov     rax, cr8
 * 00000001402A3043: jmp     short loc_1402A3009
 * 00000001402A3045: test    eax, eax
 * 00000001402A3047: js      loc_1402A31E0
 * 00000001402A304D: mov     r10d, 1000h
 * 00000001402A3053: add     r14, r10
 * 00000001402A3056: add     r12, r10
 * 00000001402A3059: cmp     r12, r13
 * 00000001402A305C: jnz     short loc_1402A3012
 * 00000001402A305E: movzx   eax, r15b
 * 00000001402A3062: mov     cr8, rax
 * 00000001402A3066: xor     r13d, r13d
 * 00000001402A3069: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A306D: mov     r15d, [rbp+2150h+var_2140]
 * 00000001402A3071: mov     r9, [r12+8]
 * 00000001402A3076: mov     r8d, [rsi+684h]
 * 00000001402A307D: mov     ecx, [r12+10h]
 * 00000001402A3082: mov     [rbp+2150h+var_2110], r9
 * 00000001402A3086: lea     rax, [r8+r8*2]
 * 00000001402A308A: lea     r14, [r9+rax*4]
 * 00000001402A308E: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402A3098: mul     rcx
 * 00000001402A309B: mov     [rbp+2150h+var_20F8], r14
 * 00000001402A309F: shr     rdx, 3
 * 00000001402A30A3: add     r8, 0Ch
 * 00000001402A30A7: lea     rax, [rdx+rdx*2]
 * 00000001402A30AB: lea     rcx, [r9+rax*4]
 * 00000001402A30AF: lea     rdi, [r12+r8*4]
 * 00000001402A30B3: mov     [rbp+2150h+var_2148], rcx
 * 00000001402A30B7: mov     r8, rcx
 * 00000001402A30BA: cmp     [rdi], r13d
 * 00000001402A30BD: jl      loc_1402A3841
 * 00000001402A30C3: mov     eax, [r14]
 * 00000001402A30C6: mov     ebx, eax
 * 00000001402A30C8: add     rbx, [r12+20h]
 * 00000001402A30CD: mov     r12d, [r14+4]
 * 00000001402A30D1: sub     r12d, eax
 * 00000001402A30D4: mov     [rbp+2150h+var_20C8], rbx
 * 00000001402A30DB: cmp     r15d, 2Bh ; '+'
 * 00000001402A30DF: jz      loc_1402A34E9
 * 00000001402A30E5: add     [rsi+688h], r12d
 * 00000001402A30EC: mov     r8, rbx
 * 00000001402A30EF: mov     r10d, [rsi+674h]
 * 00000001402A30F6: mov     rax, rbx
 * 00000001402A30F9: mov     r11, [rsi+678h]
 * 00000001402A3100: mov     ecx, r12d
 * 00000001402A3103: add     rcx, rbx
 * 00000001402A3106: cmp     rbx, rcx
 * 00000001402A3109: jnb     short loc_1402A311B
 * 00000001402A310B: mov     edx, 40h ; '@'
 * 00000001402A3110: prefetchnta byte ptr [rax]
 * 00000001402A3113: add     rax, rdx
 * 00000001402A3116: cmp     rax, rcx
 * 00000001402A3119: jb      short loc_1402A3110
 * 00000001402A311B: mov     r9d, r12d
 * 00000001402A311E: mov     r13, r11
 * 00000001402A3121: shr     r9d, 7
 * 00000001402A3125: mov     r15d, 1
 * 00000001402A312B: test    r9d, r9d
 * 00000001402A312E: jz      short loc_1402A3195
 * 00000001402A3130: mov     rsi, 7010008004002001h
 * 00000001402A313A: mov     edx, 8
 * 00000001402A313F: mov     rax, [r8]
 * 00000001402A3142: mov     ecx, r10d
 * 00000001402A3145: xor     rax, r13
 * 00000001402A3148: mov     r13, [r8+8]
 * 00000001402A314C: rol     rax, cl
 * 00000001402A314F: add     r8, 10h
 * 00000001402A3153: xor     r13, rax
 * 00000001402A3156: rol     r13, cl
 * 00000001402A3159: sub     rdx, r15
 * 00000001402A315C: jnz     short loc_1402A313F
 * 00000001402A315E: mov     rcx, r8
 * 00000001402A3161: sub     rcx, rbx
 * 00000001402A3164: xor     rcx, r11
 * 00000001402A3167: mov     rax, rcx
 * 00000001402A316A: rol     rax, 11h
 * 00000001402A316E: xor     rcx, rax
 * 00000001402A3171: mov     rax, rsi
 * 00000001402A3174: mul     rcx
 * 00000001402A3177: xor     eax, edx
 * 00000001402A3179: mov     [rbp+2150h+var_1B08], rdx
 * 00000001402A3180: xor     r10d, eax
 * 00000001402A3183: and     r10d, 3Fh
 * 00000001402A3187: cmovz   r10d, r15d
 * 00000001402A318B: add     r9d, 0FFFFFFFFh
 * 00000001402A318F: jnz     short loc_1402A313A
 * 00000001402A3191: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A3195: mov     edx, r12d
 * 00000001402A3198: and     edx, 7Fh
 * 00000001402A319B: cmp     edx, 8
 * 00000001402A319E: jb      short loc_1402A31BC
 * 00000001402A31A0: mov     r9d, edx
 * 00000001402A31A3: shr     r9, 3
 * 00000001402A31A7: xor     r13, [r8]
 * 00000001402A31AA: mov     ecx, r10d
 * 00000001402A31AD: rol     r13, cl
 * 00000001402A31B0: add     r8, 8
 * 00000001402A31B4: add     edx, 0FFFFFFF8h
 * 00000001402A31B7: sub     r9, r15
 * 00000001402A31BA: jnz     short loc_1402A31A7
 * 00000001402A31BC: xor     r9d, r9d
 * 00000001402A31BF: test    edx, edx
 * 00000001402A31C1: jz      short loc_1402A31D8
 * 00000001402A31C3: movzx   eax, byte ptr [r8]
 * 00000001402A31C7: mov     ecx, r10d
 * 00000001402A31CA: xor     r13, rax
 * 00000001402A31CD: add     r8, r15
 * 00000001402A31D0: rol     r13, cl
 * 00000001402A31D3: add     edx, 0FFFFFFFFh
 * 00000001402A31D6: jnz     short loc_1402A31C3
 * 00000001402A31D8: mov     rax, r13
 * 00000001402A31DB: jmp     loc_1402A34D6
 * 00000001402A31E0: movzx   eax, r15b
 * 00000001402A31E4: mov     cr8, rax
 * 00000001402A31E8: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A31EC: xor     r13d, r13d
 * 00000001402A31EF: mov     eax, [r12+14h]
 * 00000001402A31F4: cmp     [rsi+750h], r13d
 * 00000001402A31FB: jnz     short loc_1402A320D
 * 00000001402A31FD: mov     ecx, ebx
 * 00000001402A31FF: xor     rcx, rax
 * 00000001402A3202: mov     rax, [rsi+548h]
 * 00000001402A3209: mov     [rax+18h], rcx
 * 00000001402A320D: mov     rcx, [r12+8]
 * 00000001402A3212: cmp     [rsi+750h], r13d
 * 00000001402A3219: jnz     loc_1402A306D
 * 00000001402A321F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3229: add     rax, rsi
 * 00000001402A322C: mov     [rsi+758h], rax
 * 00000001402A3233: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A323D: add     rax, r12
 * 00000001402A3240: mov     [rsi+760h], rax
 * 00000001402A3247: movsxd  rax, dword ptr [r12]
 * 00000001402A324B: mov     [rsi+768h], rax
 * 00000001402A3252: mov     eax, 1
 * 00000001402A3257: mov     [rsi+770h], rcx
 * 00000001402A325E: mov     [rsi+750h], eax
 * 00000001402A3264: jmp     loc_1402A306D
 * 00000001402A3269: mov     r11, [r12+8]
 * 00000001402A326E: mov     r8d, [r12+10h]
 * 00000001402A3273: mov     r9, r11
 * 00000001402A3276: add     [rsi+688h], r8d
 * 00000001402A327D: mov     rax, r11
 * 00000001402A3280: mov     r14d, [rsi+674h]
 * 00000001402A3287: mov     r15, [rsi+678h]
 * 00000001402A328E: lea     rcx, [r11+r8]
 * 00000001402A3292: cmp     r11, rcx
 * 00000001402A3295: jnb     short loc_1402A32A7
 * 00000001402A3297: mov     edx, 40h ; '@'
 * 00000001402A329C: prefetchnta byte ptr [rax]
 * 00000001402A329F: add     rax, rdx
 * 00000001402A32A2: cmp     rax, rcx
 * 00000001402A32A5: jb      short loc_1402A329C
 * 00000001402A32A7: mov     r10d, r8d
 * 00000001402A32AA: mov     rbx, r15
 * 00000001402A32AD: shr     r10d, 7
 * 00000001402A32B1: mov     r12d, 1
 * 00000001402A32B7: test    r10d, r10d
 * 00000001402A32BA: jz      short loc_1402A3321
 * 00000001402A32BC: mov     rsi, 7010008004002001h
 * 00000001402A32C6: mov     edx, 8
 * 00000001402A32CB: mov     rax, [r9]
 * 00000001402A32CE: mov     ecx, r14d
 * 00000001402A32D1: xor     rax, rbx
 * 00000001402A32D4: mov     rbx, [r9+8]
 * 00000001402A32D8: rol     rax, cl
 * 00000001402A32DB: add     r9, 10h
 * 00000001402A32DF: xor     rbx, rax
 * 00000001402A32E2: rol     rbx, cl
 * 00000001402A32E5: sub     rdx, r12
 * 00000001402A32E8: jnz     short loc_1402A32CB
 * 00000001402A32EA: mov     rcx, r9
 * 00000001402A32ED: sub     rcx, r11
 * 00000001402A32F0: xor     rcx, r15
 * 00000001402A32F3: mov     rax, rcx
 * 00000001402A32F6: rol     rax, 11h
 * 00000001402A32FA: xor     rcx, rax
 * 00000001402A32FD: mov     rax, rsi
 * 00000001402A3300: mul     rcx
 * 00000001402A3303: xor     eax, edx
 * 00000001402A3305: mov     [rbp+2150h+var_1B10], rdx
 * 00000001402A330C: xor     r14d, eax
 * 00000001402A330F: and     r14d, 3Fh
 * 00000001402A3313: cmovz   r14d, r12d
 * 00000001402A3317: add     r10d, 0FFFFFFFFh
 * 00000001402A331B: jnz     short loc_1402A32C6
 * 00000001402A331D: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A3321: and     r8d, 7Fh
 * 00000001402A3325: cmp     r8d, 8
 * 00000001402A3329: jb      short loc_1402A3348
 * 00000001402A332B: mov     edx, r8d
 * 00000001402A332E: shr     rdx, 3
 * 00000001402A3332: xor     rbx, [r9]
 * 00000001402A3335: mov     ecx, r14d
 * 00000001402A3338: rol     rbx, cl
 * 00000001402A333B: add     r9, 8
 * 00000001402A333F: add     r8d, 0FFFFFFF8h
 * 00000001402A3343: sub     rdx, r12
 * 00000001402A3346: jnz     short loc_1402A3332
 * 00000001402A3348: test    r8d, r8d
 * 00000001402A334B: jz      short loc_1402A3363
 * 00000001402A334D: movzx   eax, byte ptr [r9]
 * 00000001402A3351: mov     ecx, r14d
 * 00000001402A3354: xor     rbx, rax
 * 00000001402A3357: add     r9, r12
 * 00000001402A335A: rol     rbx, cl
 * 00000001402A335D: add     r8d, 0FFFFFFFFh
 * 00000001402A3361: jnz     short loc_1402A334D
 * 00000001402A3363: mov     rax, rbx
 * 00000001402A3366: jmp     short loc_1402A336A
 * 00000001402A3368: xor     ebx, eax
 * 00000001402A336A: shr     rax, 1Fh
 * 00000001402A336E: test    rax, rax
 * 00000001402A3371: jnz     short loc_1402A3368
 * 00000001402A3373: mov     rax, [rbp+2150h+var_2138]
 * 00000001402A3377: btr     ebx, 1Fh
 * 00000001402A337B: mov     r12d, r13d
 * 00000001402A337E: cmp     ebx, [rax+14h]
 * 00000001402A3381: jz      loc_1402A3069
 * 00000001402A3387: cmp     [rax], r13d
 * 00000001402A338A: jnz     short loc_1402A3399
 * 00000001402A338C: cmp     [rax+18h], r13d
 * 00000001402A3390: mov     ecx, 1
 * 00000001402A3395: cmovnz  r12d, ecx
 * 00000001402A3399: mov     ecx, [rax+10h]
 * 00000001402A339C: mov     rdx, [rax+8]
 * 00000001402A33A0: test    rcx, rcx
 * 00000001402A33A3: jz      loc_1402A3451
 * 00000001402A33A9: mov     eax, [rsi+7DCh]
 * 00000001402A33AF: mov     r8d, 40h ; '@'
 * 00000001402A33B5: test    r8b, al
 * 00000001402A33B8: jz      loc_1402A3451
 * 00000001402A33BE: mov     r15, cr8
 * 00000001402A33C2: lea     eax, [r8-3Eh]
 * 00000001402A33C6: mov     cr8, rax
 * 00000001402A33CA: mov     r14, rdx
 * 00000001402A33CD: lea     rax, [rcx-1]
 * 00000001402A33D1: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A33D8: add     rax, rdx
 * 00000001402A33DB: or      rax, 0FFFh
 * 00000001402A33E1: mov     [rbp+2150h+var_2110], rax
 * 00000001402A33E5: lea     r13, [r14-1]
 * 00000001402A33E9: mov     rax, [rsi+450h]
 * 00000001402A33F0: xor     edx, edx
 * 00000001402A33F2: mov     rcx, r14
 * 00000001402A33F5: call    KeGuardDispatchICall
 * 00000001402A33FA: cmp     eax, 0C000022Dh
 * 00000001402A33FF: jnz     short loc_1402A342A
 * 00000001402A3401: test    r12d, r12d
 * 00000001402A3404: jnz     short loc_1402A3446
 * 00000001402A3406: lea     eax, [r12+1]
 * 00000001402A340B: cmp     r15b, al
 * 00000001402A340E: ja      short loc_1402A342E
 * 00000001402A3410: movzx   eax, r15b
 * 00000001402A3414: mov     cr8, rax
 * 00000001402A3418: mov     al, [r14]
 * 00000001402A341B: mov     rax, cr8
 * 00000001402A341F: lea     eax, [r12+2]
 * 00000001402A3424: mov     cr8, rax
 * 00000001402A3428: jmp     short loc_1402A33E9
 * 00000001402A342A: test    eax, eax
 * 00000001402A342C: js      short loc_1402A3446
 * 00000001402A342E: mov     r10d, 1000h
 * 00000001402A3434: add     r14, r10
 * 00000001402A3437: add     r13, r10
 * 00000001402A343A: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A343E: jz      loc_1402A305E
 * 00000001402A3444: jmp     short loc_1402A33E9
 * 00000001402A3446: movzx   eax, r15b
 * 00000001402A344A: xor     r13d, r13d
 * 00000001402A344D: mov     cr8, rax
 * 00000001402A3451: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A3455: mov     eax, [r12+14h]
 * 00000001402A345A: cmp     [rsi+750h], r13d
 * 00000001402A3461: jnz     short loc_1402A3473
 * 00000001402A3463: mov     ecx, ebx
 * 00000001402A3465: xor     rcx, rax
 * 00000001402A3468: mov     rax, [rsi+548h]
 * 00000001402A346F: mov     [rax+18h], rcx
 * 00000001402A3473: mov     rcx, [r12+8]
 * 00000001402A3478: mov     r15d, [rbp+2150h+var_2140]
 * 00000001402A347C: cmp     [rsi+750h], r13d
 * 00000001402A3483: jnz     loc_1402A3071
 * 00000001402A3489: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3493: add     rax, rsi
 * 00000001402A3496: mov     [rsi+758h], rax
 * 00000001402A349D: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A34A7: add     rax, r12
 * 00000001402A34AA: mov     [rsi+760h], rax
 * 00000001402A34B1: movsxd  rax, dword ptr [r12]
 * 00000001402A34B5: mov     [rsi+768h], rax
 * 00000001402A34BC: mov     eax, 1
 * 00000001402A34C1: mov     [rsi+770h], rcx
 * 00000001402A34C8: mov     [rsi+750h], eax
 * 00000001402A34CE: jmp     loc_1402A3071
 * 00000001402A34D3: xor     r13d, eax
 * 00000001402A34D6: shr     rax, 1Fh
 * 00000001402A34DA: test    rax, rax
 * 00000001402A34DD: jnz     short loc_1402A34D3
 * 00000001402A34DF: btr     r13d, 1Fh
 * 00000001402A34E4: jmp     loc_1402A3778
 * 00000001402A34E9: mov     r8d, r12d
 * 00000001402A34EC: mov     rdx, rbx
 * 00000001402A34EF: mov     rcx, rsi
 * 00000001402A34F2: call    sub_1402AF85C
 * 00000001402A34F7: mov     r13d, eax
 * 00000001402A34FA: xor     r9d, r9d
 * 00000001402A34FD: mov     eax, r12d
 * 00000001402A3500: shl     eax, 3
 * 00000001402A3503: add     [rsi+688h], eax
 * 00000001402A3509: mov     eax, [rsi+7DCh]
 * 00000001402A350F: bt      eax, 0Bh
 * 00000001402A3513: jnb     loc_1402A3778
 * 00000001402A3519: lea     r14, [rbx-6]
 * 00000001402A351D: cmp     byte ptr [r14], 4Ch ; 'L'
 * 00000001402A3521: jnz     loc_1402A3723
 * 00000001402A3527: cmp     byte ptr [r14+1], 87h
 * 00000001402A352C: jnz     loc_1402A3723
 * 00000001402A3532: cmp     [r14+2], r9b
 * 00000001402A3536: jnz     loc_1402A3723
 * 00000001402A353C: cmp     byte ptr [r14+3], 98h
 * 00000001402A3541: jnz     loc_1402A3723
 * 00000001402A3547: cmp     byte ptr [r14+4], 0C3h
 * 00000001402A354C: jnz     loc_1402A3723
 * 00000001402A3552: lea     rbx, [r14+5]
 * 00000001402A3556: mov     al, [rbx]
 * 00000001402A3558: cmp     al, 90h
 * 00000001402A355A: jz      short loc_1402A3564
 * 00000001402A355C: cmp     al, 0F1h
 * 00000001402A355E: jnz     loc_1402A3723
 * 00000001402A3564: mov     r15, [rsi+498h]
 * 00000001402A356B: cli
 * 00000001402A356C: mov     eax, [rsi+7D8h]
 * 00000001402A3572: shr     eax, 0Ah
 * 00000001402A3575: and     eax, 1Fh
 * 00000001402A3578: lock bts [r15], eax
 * 00000001402A357D: jnb     short loc_1402A3584
 * 00000001402A357F: sti
 * 00000001402A3580: pause
 * 00000001402A3582: jmp     short loc_1402A356B
 * 00000001402A3584: mov     edx, 26h ; '&'
 * 00000001402A3589: lea     rax, [rbp+2150h+var_1350]
 * 00000001402A3590: mov     r10d, 130h
 * 00000001402A3596: mov     ecx, r10d
 * 00000001402A3599: lea     r8d, [rdx-25h]
 * 00000001402A359D: mov     [rax], r9
 * 00000001402A35A0: add     ecx, 0FFFFFFF8h
 * 00000001402A35A3: add     rax, 8
 * 00000001402A35A7: sub     rdx, r8
 * 00000001402A35AA: jnz     short loc_1402A359D
 * 00000001402A35AC: test    ecx, ecx
 * 00000001402A35AE: jz      short loc_1402A35BB
 * 00000001402A35B0: mov     [rax], r9b
 * 00000001402A35B3: add     rax, r8
 * 00000001402A35B6: add     ecx, 0FFFFFFFFh
 * 00000001402A35B9: jnz     short loc_1402A35B0
 * 00000001402A35BB: movups  xmm0, xmmword ptr [rsi+6A8h]
 * 00000001402A35C2: lea     rax, [rbp+2150h+var_1350]
 * 00000001402A35C9: movdqu  [rbp+2150h+var_1340], xmm0
 * 00000001402A35D1: movups  xmm1, xmmword ptr [rsi+6B8h]
 * 00000001402A35D8: movdqu  [rbp+2150h+var_1330], xmm1
 * 00000001402A35E0: movups  xmm0, xmmword ptr [rsi+6C8h]
 * 00000001402A35E7: mov     [rbp+2150h+var_1DDE], rax
 * 00000001402A35EE: lea     rax, [rsi+6ECh]
 * 00000001402A35F5: mov     rcx, rax
 * 00000001402A35F8: mov     [rbp+2150h+var_1B00], rax
 * 00000001402A35FF: shr     rcx, 10h
 * 00000001402A3603: mov     word ptr [rbp+2150h+var_1340], ax
 * 00000001402A360A: shr     rax, 20h
 * 00000001402A360E: mov     dword ptr [rbp+2150h+var_1340+8], eax
 * 00000001402A3614: movdqu  [rbp+2150h+var_1230], xmm0
 * 00000001402A361C: mov     word ptr [rbp+2150h+var_1DE0], r10w
 * 00000001402A3624: mov     word ptr [rbp+2150h+var_1340+6], cx
 * 00000001402A362B: sidt    fword ptr [rbp+2150h+var_1C80]
 * 00000001402A3632: lidt    fword ptr [rbp+2150h+var_1DE0]
 * 00000001402A3639: mov     byte ptr [rbx], 0F1h
 * 00000001402A363C: mov     al, [rbx]
 * 00000001402A363E: cmp     al, 0F1h
 * 00000001402A3640: jnz     loc_1402A36E7
 * 00000001402A3646: test    dword ptr [rsi+7DCh], 20000h
 * 00000001402A3650: jnz     short loc_1402A3698
 * 00000001402A3652: mov     rdx, gs:20h
 * 00000001402A365B: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402A3665: mov     rax, [rsi+478h]
 * 00000001402A366C: add     rcx, rsi
 * 00000001402A366F: mov     [rax], rcx
 * 00000001402A3672: lea     rcx, [r14+6]
 * 00000001402A3676: mov     rax, [rsi+480h]
 * 00000001402A367D: mov     [rax], rdx
 * 00000001402A3680: mov     rax, [rsi+488h]
 * 00000001402A3687: mov     [rax], rcx
 * 00000001402A368A: mov     rax, [rsi+490h]
 * 00000001402A3691: mov     qword ptr [rax], 113h
 * 00000001402A3698: mov     rax, rbx
 * 00000001402A369B: call    KeGuardDispatchICall
 * 00000001402A36A0: xor     r9d, r9d
 * 00000001402A36A3: test    dword ptr [rsi+7DCh], 20000h
 * 00000001402A36AD: jnz     short loc_1402A36E1
 * 00000001402A36AF: mov     rax, [rsi+478h]
 * 00000001402A36B6: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402A36C0: mov     [rax], rcx
 * 00000001402A36C3: mov     rax, [rsi+480h]
 * 00000001402A36CA: mov     [rax], r9
 * 00000001402A36CD: mov     rax, [rsi+488h]
 * 00000001402A36D4: mov     [rax], r9
 * 00000001402A36D7: mov     rax, [rsi+490h]
 * 00000001402A36DE: mov     [rax], r9
 * 00000001402A36E1: mov     al, [rbx]
 * 00000001402A36E3: cmp     al, 0F1h
 * 00000001402A36E5: jz      short loc_1402A36EC
 * 00000001402A36E7: mov     r8d, r9d
 * 00000001402A36EA: jmp     short loc_1402A36FD
 * 00000001402A36EC: mov     byte ptr [rbx], 90h
 * 00000001402A36EF: mov     r8d, 1
 * 00000001402A36F5: mov     al, [rbx]
 * 00000001402A36F7: cmp     al, 90h
 * 00000001402A36F9: cmovnz  r8d, r9d
 * 00000001402A36FD: lidt    fword ptr [rbp+2150h+var_1C80]
 * 00000001402A3704: mov     ecx, [rsi+7D8h]
 * 00000001402A370A: mov     edx, 1
 * 00000001402A370F: shr     ecx, 0Ah
 * 00000001402A3712: and     ecx, 1Fh
 * 00000001402A3715: shl     edx, cl
 * 00000001402A3717: not     edx
 * 00000001402A3719: lock and [r15], edx
 * 00000001402A371D: sti
 * 00000001402A371E: test    r8d, r8d
 * 00000001402A3721: jnz     short loc_1402A3774
 * 00000001402A3723: cmp     [rsi+750h], r9d
 * 00000001402A372A: jnz     short loc_1402A3774
 * 00000001402A372C: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A3730: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A373A: add     rax, rsi
 * 00000001402A373D: mov     [rsi+758h], rax
 * 00000001402A3744: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A374E: add     rax, rcx
 * 00000001402A3751: mov     [rsi+760h], rax
 * 00000001402A3758: movsxd  rax, dword ptr [rcx]
 * 00000001402A375B: mov     [rsi+768h], rax
 * 00000001402A3762: mov     eax, 1
 * 00000001402A3767: mov     [rsi+770h], r14
 * 00000001402A376E: mov     [rsi+750h], eax
 * 00000001402A3774: mov     r14, [rbp+2150h+var_20F8]
 * 00000001402A3778: mov     eax, [rdi]
 * 00000001402A377A: btr     eax, 1Fh
 * 00000001402A377E: cmp     r13d, eax
 * 00000001402A3781: jz      loc_1402A3836
 * 00000001402A3787: mov     ecx, r12d
 * 00000001402A378A: test    r12d, r12d
 * 00000001402A378D: jz      loc_1402A392B
 * 00000001402A3793: mov     eax, [rsi+7DCh]
 * 00000001402A3799: mov     edx, 40h ; '@'
 * 00000001402A379E: test    dl, al
 * 00000001402A37A0: jz      loc_1402A392B
 * 00000001402A37A6: mov     r14, cr8
 * 00000001402A37AA: lea     eax, [rdx-3Eh]
 * 00000001402A37AD: mov     cr8, rax
 * 00000001402A37B1: mov     rax, [rbp+2150h+var_20C8]
 * 00000001402A37B8: mov     rbx, rax
 * 00000001402A37BB: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402A37C2: lea     r12, [rax-1]
 * 00000001402A37C6: add     r12, rcx
 * 00000001402A37C9: or      r12, 0FFFh
 * 00000001402A37D0: lea     r15, [rbx-1]
 * 00000001402A37D4: mov     rax, [rsi+450h]
 * 00000001402A37DB: xor     edx, edx
 * 00000001402A37DD: mov     rcx, rbx
 * 00000001402A37E0: call    KeGuardDispatchICall
 * 00000001402A37E5: cmp     eax, 0C000022Dh
 * 00000001402A37EA: jnz     short loc_1402A380F
 * 00000001402A37EC: mov     eax, 1
 * 00000001402A37F1: cmp     r14b, al
 * 00000001402A37F4: ja      short loc_1402A381A
 * 00000001402A37F6: movzx   eax, r14b
 * 00000001402A37FA: mov     cr8, rax
 * 00000001402A37FE: mov     al, [rbx]
 * 00000001402A3800: mov     rax, cr8
 * 00000001402A3804: mov     eax, 2
 * 00000001402A3809: mov     cr8, rax
 * 00000001402A380D: jmp     short loc_1402A37D4
 * 00000001402A380F: xor     r9d, r9d
 * 00000001402A3812: test    eax, eax
 * 00000001402A3814: js      loc_1402A3923
 * 00000001402A381A: mov     eax, 1000h
 * 00000001402A381F: add     rbx, rax
 * 00000001402A3822: add     r15, rax
 * 00000001402A3825: cmp     r15, r12
 * 00000001402A3828: jnz     short loc_1402A37D4
 * 00000001402A382A: movzx   eax, r14b
 * 00000001402A382E: mov     cr8, rax
 * 00000001402A3832: mov     r14, [rbp+2150h+var_20F8]
 * 00000001402A3836: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A383A: xor     r13d, r13d
 * 00000001402A383D: mov     r8, [rbp+2150h+var_2148]
 * 00000001402A3841: mov     r15d, 0Ch
 * 00000001402A3847: add     rdi, 4
 * 00000001402A384B: add     r14, r15
 * 00000001402A384E: mov     [rbp+2150h+var_20F8], r14
 * 00000001402A3852: cmp     r14, r8
 * 00000001402A3855: jnb     short loc_1402A3876
 * 00000001402A3857: mov     rax, [rbp+2150h+var_2130]
 * 00000001402A385B: mov     r15d, [rbp+2150h+var_2140]
 * 00000001402A385F: mov     eax, [rax]
 * 00000001402A3861: cmp     [rsi+688h], eax
 * 00000001402A3867: jl      loc_1402A30BA
 * 00000001402A386D: mov     r15d, 0Ch
 * 00000001402A3873: cmp     r14, r8
 * 00000001402A3876: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A387D: jnz     loc_1402A3AB5
 * 00000001402A3883: mov     rcx, [rsi+4F8h]
 * 00000001402A388A: mov     r15, cr8
 * 00000001402A388E: mov     eax, 0Fh
 * 00000001402A3893: mov     cr8, rax
 * 00000001402A3897: mov     rax, [rsi+140h]
 * 00000001402A389E: call    KeGuardDispatchICall
 * 00000001402A38A3: mov     rax, [rsi+5C8h]
 * 00000001402A38AA: mov     r14, [rbp+2150h+var_2138]
 * 00000001402A38AE: mov     rcx, [rax]
 * 00000001402A38B1: mov     eax, [rcx]
 * 00000001402A38B3: lea     rbx, [rcx+10h]
 * 00000001402A38B7: mov     r12b, [rcx+0Ch]
 * 00000001402A38BB: lea     rcx, [rax+rax*2]
 * 00000001402A38BF: lea     r13, [rbx+rcx*8]
 * 00000001402A38C3: mov     r8d, 18h
 * 00000001402A38C9: lea     r9, [r14+18h]
 * 00000001402A38CD: mov     r10, rbx
 * 00000001402A38D0: mov     rcx, [r10]
 * 00000001402A38D3: add     r10, 8
 * 00000001402A38D7: mov     rax, [r9]
 * 00000001402A38DA: add     r9, 8
 * 00000001402A38DE: cmp     rcx, rax
 * 00000001402A38E1: jnz     loc_1402A39B7
 * 00000001402A38E7: add     r8d, 0FFFFFFF8h
 * 00000001402A38EB: cmp     r8d, 8
 * 00000001402A38EF: jnb     short loc_1402A38D0
 * 00000001402A38F1: test    r8d, r8d
 * 00000001402A38F4: jz      loc_1402A39C4
 * 00000001402A38FA: mov     r11d, 1
 * 00000001402A3900: movzx   edx, byte ptr [r10]
 * 00000001402A3904: add     r10, r11
 * 00000001402A3907: movzx   eax, byte ptr [r9]
 * 00000001402A390B: add     r9, r11
 * 00000001402A390E: cmp     rdx, rax
 * 00000001402A3911: jnz     loc_1402A39B7
 * 00000001402A3917: add     r8d, 0FFFFFFFFh
 * 00000001402A391B: jz      loc_1402A39C4
 * 00000001402A3921: jmp     short loc_1402A3900
 * 00000001402A3923: movzx   eax, r14b
 * 00000001402A3927: mov     cr8, rax
 * 00000001402A392B: mov     eax, [rdi]
 * 00000001402A392D: btr     eax, 1Fh
 * 00000001402A3931: cmp     [rsi+750h], r9d
 * 00000001402A3938: jnz     short loc_1402A394B
 * 00000001402A393A: mov     ecx, r13d
 * 00000001402A393D: xor     rcx, rax
 * 00000001402A3940: mov     rax, [rsi+548h]
 * 00000001402A3947: mov     [rax+18h], rcx
 * 00000001402A394B: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A394F: xor     r13d, r13d
 * 00000001402A3952: mov     r14, [rbp+2150h+var_20F8]
 * 00000001402A3956: mov     r8, [rbp+2150h+var_2148]
 * 00000001402A395A: cmp     [rsi+750h], r13d
 * 00000001402A3961: jnz     loc_1402A3841
 * 00000001402A3967: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3971: add     rax, rsi
 * 00000001402A3974: mov     [rsi+758h], rax
 * 00000001402A397B: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A3985: add     rax, r12
 * 00000001402A3988: mov     [rsi+760h], rax
 * 00000001402A398F: movsxd  rax, dword ptr [r12]
 * 00000001402A3993: mov     [rsi+768h], rax
 * 00000001402A399A: mov     rax, [rbp+2150h+var_20C8]
 * 00000001402A39A1: mov     [rsi+770h], rax
 * 00000001402A39A8: lea     eax, [r13+1]
 * 00000001402A39AC: mov     [rsi+750h], eax
 * 00000001402A39B2: jmp     loc_1402A3841
 * 00000001402A39B7: add     rbx, 18h
 * 00000001402A39BB: cmp     rbx, r13
 * 00000001402A39BE: jb      loc_1402A38C3
 * 00000001402A39C4: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A39C8: mov     rcx, [rsi+4F8h]
 * 00000001402A39CF: mov     rax, [rsi+180h]
 * 00000001402A39D6: call    KeGuardDispatchICall
 * 00000001402A39DB: movzx   eax, r15b
 * 00000001402A39DF: mov     cr8, rax
 * 00000001402A39E3: xor     ecx, ecx
 * 00000001402A39E5: test    r12b, r12b
 * 00000001402A39E8: jz      short loc_1402A3A5A
 * 00000001402A39EA: mov     eax, [rsi+7DCh]
 * 00000001402A39F0: lea     edx, [rcx+10h]
 * 00000001402A39F3: test    dl, al
 * 00000001402A39F5: lea     edx, [rcx+1]
 * 00000001402A39F8: jz      short loc_1402A3A45
 * 00000001402A39FA: cmp     [rsi+750h], ecx
 * 00000001402A3A00: jnz     short loc_1402A3A45
 * 00000001402A3A02: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A3A06: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3A10: add     rax, rsi
 * 00000001402A3A13: mov     [rsi+758h], rax
 * 00000001402A3A1A: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A3A24: add     rax, rcx
 * 00000001402A3A27: mov     [rsi+760h], rax
 * 00000001402A3A2E: movsxd  rax, dword ptr [rcx]
 * 00000001402A3A31: mov     [rsi+768h], rax
 * 00000001402A3A38: mov     [rsi+770h], rdx
 * 00000001402A3A3F: mov     [rsi+750h], edx
 * 00000001402A3A45: cmp     [r14+18h], rdx
 * 00000001402A3A49: jnz     short loc_1402A3A5F
 * 00000001402A3A4B: xor     r13d, r13d
 * 00000001402A3A4E: mov     [rsi+684h], r13d
 * 00000001402A3A55: jmp     loc_1402A00F1
 * 00000001402A3A5A: mov     edx, 1
 * 00000001402A3A5F: cmp     rbx, r13
 * 00000001402A3A62: jnz     short loc_1402A3A4B
 * 00000001402A3A64: xor     r13d, r13d
 * 00000001402A3A67: cmp     [rsi+750h], r13d
 * 00000001402A3A6E: jnz     short loc_1402A3A4E
 * 00000001402A3A70: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A3A74: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3A7E: add     rax, rsi
 * 00000001402A3A81: mov     [rsi+758h], rax
 * 00000001402A3A88: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A3A92: add     rax, rcx
 * 00000001402A3A95: mov     [rsi+760h], rax
 * 00000001402A3A9C: movsxd  rax, dword ptr [rcx]
 * 00000001402A3A9F: mov     [rsi+768h], rax
 * 00000001402A3AA6: mov     [rsi+770h], rbx
 * 00000001402A3AAD: mov     [rsi+750h], edx
 * 00000001402A3AB3: jmp     short loc_1402A3A4E
 * 00000001402A3AB5: sub     r14, [rbp+2150h+var_2110]
 * 00000001402A3AB9: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001402A3AC3: imul    r14
 * 00000001402A3AC6: sar     rdx, 1
 * 00000001402A3AC9: mov     rax, rdx
 * 00000001402A3ACC: shr     rax, 3Fh
 * 00000001402A3AD0: add     rdx, rax
 * 00000001402A3AD3: mov     [rsi+684h], edx
 * 00000001402A3AD9: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A3ADC: mov     r14d, 8000h
 * 00000001402A3AE2: jmp     loc_14029B172
 * 00000001402A3AE7: mov     eax, [r12+24h]
 * 00000001402A3AEC: add     [rsi+688h], eax
 * 00000001402A3AF2: mov     r11d, [r12+20h]
 * 00000001402A3AF7: mov     r9d, [r12+24h]
 * 00000001402A3AFC: add     r11, rsi
 * 00000001402A3AFF: mov     r14d, [rsi+674h]
 * 00000001402A3B06: mov     r10, r11
 * 00000001402A3B09: mov     r15, [rsi+678h]
 * 00000001402A3B10: mov     rax, r11
 * 00000001402A3B13: lea     rcx, [r11+r9]
 * 00000001402A3B17: cmp     r11, rcx
 * 00000001402A3B1A: jnb     short loc_1402A3B2C
 * 00000001402A3B1C: mov     edx, 40h ; '@'
 * 00000001402A3B21: prefetchnta byte ptr [rax]
 * 00000001402A3B24: add     rax, rdx
 * 00000001402A3B27: cmp     rax, rcx
 * 00000001402A3B2A: jb      short loc_1402A3B21
 * 00000001402A3B2C: xor     r13d, r13d
 * 00000001402A3B2F: mov     ebx, r9d
 * 00000001402A3B32: shr     ebx, 7
 * 00000001402A3B35: mov     r8, r15
 * 00000001402A3B38: lea     edx, [r13+1]
 * 00000001402A3B3C: test    ebx, ebx
 * 00000001402A3B3E: jz      short loc_1402A3BAA
 * 00000001402A3B40: mov     rdi, 7010008004002001h
 * 00000001402A3B4A: mov     eax, 8
 * 00000001402A3B4F: xor     r8, [r10]
 * 00000001402A3B52: mov     ecx, r14d
 * 00000001402A3B55: rol     r8, cl
 * 00000001402A3B58: xor     r8, [r10+8]
 * 00000001402A3B5C: add     r10, 10h
 * 00000001402A3B60: rol     r8, cl
 * 00000001402A3B63: sub     rax, rdx
 * 00000001402A3B66: jnz     short loc_1402A3B4F
 * 00000001402A3B68: mov     rcx, r10
 * 00000001402A3B6B: sub     rcx, r11
 * 00000001402A3B6E: xor     rcx, r15
 * 00000001402A3B71: mov     rax, rcx
 * 00000001402A3B74: rol     rax, 11h
 * 00000001402A3B78: xor     rcx, rax
 * 00000001402A3B7B: mov     rax, rdi
 * 00000001402A3B7E: mul     rcx
 * 00000001402A3B81: xor     eax, edx
 * 00000001402A3B83: mov     [rbp+2150h+var_1AF8], rdx
 * 00000001402A3B8A: xor     r14d, eax
 * 00000001402A3B8D: mov     edx, 1
 * 00000001402A3B92: and     r14d, 3Fh
 * 00000001402A3B96: cmovz   r14d, edx
 * 00000001402A3B9A: add     ebx, 0FFFFFFFFh
 * 00000001402A3B9D: jnz     short loc_1402A3B4A
 * 00000001402A3B9F: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A3BA3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A3BAA: and     r9d, 7Fh
 * 00000001402A3BAE: cmp     r9d, 8
 * 00000001402A3BB2: jb      short loc_1402A3BD1
 * 00000001402A3BB4: mov     eax, r9d
 * 00000001402A3BB7: shr     rax, 3
 * 00000001402A3BBB: xor     r8, [r10]
 * 00000001402A3BBE: mov     ecx, r14d
 * 00000001402A3BC1: rol     r8, cl
 * 00000001402A3BC4: add     r10, 8
 * 00000001402A3BC8: add     r9d, 0FFFFFFF8h
 * 00000001402A3BCC: sub     rax, rdx
 * 00000001402A3BCF: jnz     short loc_1402A3BBB
 * 00000001402A3BD1: test    r9d, r9d
 * 00000001402A3BD4: jz      short loc_1402A3BEC
 * 00000001402A3BD6: movzx   eax, byte ptr [r10]
 * 00000001402A3BDA: mov     ecx, r14d
 * 00000001402A3BDD: xor     r8, rax
 * 00000001402A3BE0: add     r10, rdx
 * 00000001402A3BE3: rol     r8, cl
 * 00000001402A3BE6: add     r9d, 0FFFFFFFFh
 * 00000001402A3BEA: jnz     short loc_1402A3BD6
 * 00000001402A3BEC: mov     rcx, [r12+18h]
 * 00000001402A3BF1: cmp     r8, rcx
 * 00000001402A3BF4: jz      loc_1402A00F1
 * 00000001402A3BFA: cmp     [rsi+750h], r13d
 * 00000001402A3C01: jnz     short loc_1402A3C11
 * 00000001402A3C03: mov     rax, [rsi+548h]
 * 00000001402A3C0A: xor     rcx, r8
 * 00000001402A3C0D: mov     [rax+18h], rcx
 * 00000001402A3C11: mov     ecx, [r12+20h]
 * 00000001402A3C16: mov     r15d, 0Ch
 * 00000001402A3C1C: add     rcx, rsi
 * 00000001402A3C1F: mov     r14d, 8000h
 * 00000001402A3C25: cmp     [rsi+750h], r13d
 * 00000001402A3C2C: jnz     short loc_1402A3C6E
 * 00000001402A3C2E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3C38: add     rax, rsi
 * 00000001402A3C3B: mov     [rsi+758h], rax
 * 00000001402A3C42: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A3C4C: add     rax, r12
 * 00000001402A3C4F: mov     [rsi+760h], rax
 * 00000001402A3C56: movsxd  rax, dword ptr [r12]
 * 00000001402A3C5A: mov     [rsi+768h], rax
 * 00000001402A3C61: mov     [rsi+770h], rcx
 * 00000001402A3C68: mov     [rsi+750h], edx
 * 00000001402A3C6E: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A3C71: jmp     loc_14029B172
 * 00000001402A3C76: mov     ecx, 1
 * 00000001402A3C7B: mov     ebx, 0Fh
 * 00000001402A3C80: mov     r13d, 2
 * 00000001402A3C86: sub     r15d, r13d
 * 00000001402A3C89: jz      loc_1402A42DD
 * 00000001402A3C8F: sub     r15d, 1
 * 00000001402A3C93: jz      loc_1402A3F1E
 * 00000001402A3C99: cmp     r15d, 14h
 * 00000001402A3C9D: jz      short loc_1402A3CF4
 * 00000001402A3C9F: xor     r13d, r13d
 * 00000001402A3CA2: cmp     [rsi+750h], r13d
 * 00000001402A3CA9: jnz     loc_14029B166
 * 00000001402A3CAF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A3CB9: add     rax, rsi
 * 00000001402A3CBC: mov     [rsi+758h], rax
 * 00000001402A3CC3: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A3CCD: add     rax, r12
 * 00000001402A3CD0: mov     [rsi+760h], rax
 * 00000001402A3CD7: mov     qword ptr [rsi+768h], 101h
 * 00000001402A3CE2: mov     [rsi+770h], r13
 * 00000001402A3CE9: mov     [rsi+750h], ecx
 * 00000001402A3CEF: jmp     loc_14029B166
 * 00000001402A3CF4: mov     edx, [r12+28h]
 * 00000001402A3CF9: lea     rcx, [rbp+2150h+var_1820]
 * 00000001402A3D00: mov     rax, [rsi+190h]
 * 00000001402A3D07: call    KeGuardDispatchICall
 * 00000001402A3D0C: mov     rax, [rsi+1C0h]
 * 00000001402A3D13: lea     rdx, [rbp+2150h+var_1810]
 * 00000001402A3D1A: lea     rcx, [rbp+2150h+var_1820]
 * 00000001402A3D21: call    KeGuardDispatchICall
 * 00000001402A3D26: mov     rbx, [rsi+850h]
 * 00000001402A3D2D: xor     r13d, r13d
 * 00000001402A3D30: test    rbx, rbx
 * 00000001402A3D33: jz      short loc_1402A3D3D
 * 00000001402A3D35: mov     ebx, [rbx+320h]
 * 00000001402A3D3B: jmp     short loc_1402A3D4E
 * 00000001402A3D3D: mov     ecx, 832h
 * 00000001402A3D42: rdmsr
 * 00000001402A3D44: shl     rdx, 20h
 * 00000001402A3D48: or      rax, rdx
 * 00000001402A3D4B: mov     rbx, rax
 * 00000001402A3D4E: mov     r14, [rsi+850h]
 * 00000001402A3D55: mov     [rbp+2150h+var_1D18], ebx
 * 00000001402A3D5B: test    r14, r14
 * 00000001402A3D5E: jz      short loc_1402A3D69
 * 00000001402A3D60: mov     r14d, [r14+340h]
 * 00000001402A3D67: jmp     short loc_1402A3D7A
 * 00000001402A3D69: mov     ecx, 834h
 * 00000001402A3D6E: rdmsr
 * 00000001402A3D70: shl     rdx, 20h
 * 00000001402A3D74: or      rax, rdx
 * 00000001402A3D77: mov     r14, rax
 * 00000001402A3D7A: mov     rax, [rsi+188h]
 * 00000001402A3D81: lea     rcx, [rbp+2150h+var_1810]
 * 00000001402A3D88: mov     [rbp+2150h+var_1D28], r14d
 * 00000001402A3D8F: call    KeGuardDispatchICall
 * 00000001402A3D94: mov     eax, [r12+1Ch]
 * 00000001402A3D99: mov     ecx, [r12+18h]
 * 00000001402A3D9E: and     eax, ebx
 * 00000001402A3DA0: cmp     eax, ecx
 * 00000001402A3DA2: jnz     short loc_1402A3DC9
 * 00000001402A3DA4: mov     edx, 1
 * 00000001402A3DA9: bt      ebx, 10h
 * 00000001402A3DAD: jb      loc_1402A3E55
 * 00000001402A3DB3: cmp     bl, 0D1h
 * 00000001402A3DB6: jz      loc_1402A3E55
 * 00000001402A3DBC: lea     eax, [rdx+2]
 * 00000001402A3DBF: add     eax, ebx
 * 00000001402A3DC1: cmp     al, dl
 * 00000001402A3DC3: jbe     loc_1402A3E55
 * 00000001402A3DC9: mov     rdx, rcx
 * 00000001402A3DCC: mov     rax, 32000000000h
 * 00000001402A3DD6: mov     ecx, [r12+28h]
 * 00000001402A3DDB: shl     rcx, 30h
 * 00000001402A3DDF: or      rcx, rdx
 * 00000001402A3DE2: or      rcx, rax
 * 00000001402A3DE5: mov     eax, ebx
 * 00000001402A3DE7: cmp     [rsi+750h], r13d
 * 00000001402A3DEE: jnz     short loc_1402A3E50
 * 00000001402A3DF0: xor     rdx, rax
 * 00000001402A3DF3: mov     rax, [rsi+548h]
 * 00000001402A3DFA: mov     [rax+18h], rdx
 * 00000001402A3DFE: cmp     [rsi+750h], r13d
 * 00000001402A3E05: jnz     short loc_1402A3E50
 * 00000001402A3E07: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402A3E11: mov     r9, 0B3B74BDEE4453415h
 * 00000001402A3E1B: mov     edx, 1
 * 00000001402A3E20: lea     rax, [rsi+r10]
 * 00000001402A3E24: mov     [rsi+758h], rax
 * 00000001402A3E2B: lea     rax, [r12+r9]
 * 00000001402A3E2F: mov     [rsi+760h], rax
 * 00000001402A3E36: movsxd  rax, dword ptr [r12]
 * 00000001402A3E3A: mov     [rsi+768h], rax
 * 00000001402A3E41: mov     [rsi+770h], rcx
 * 00000001402A3E48: mov     [rsi+750h], edx
 * 00000001402A3E4E: jmp     short loc_1402A3E69
 * 00000001402A3E50: mov     edx, 1
 * 00000001402A3E55: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402A3E5F: mov     r9, 0B3B74BDEE4453415h
 * 00000001402A3E69: mov     eax, [r12+24h]
 * 00000001402A3E6E: mov     ecx, [r12+20h]
 * 00000001402A3E73: and     eax, r14d
 * 00000001402A3E76: cmp     eax, ecx
 * 00000001402A3E78: jnz     short loc_1402A3E97
 * 00000001402A3E7A: bt      r14d, 10h
 * 00000001402A3E7F: jb      loc_1402A3F09
 * 00000001402A3E85: cmp     r14b, 0D1h
 * 00000001402A3E89: jz      short loc_1402A3F09
 * 00000001402A3E8B: mov     eax, 3
 * 00000001402A3E90: add     eax, r14d
 * 00000001402A3E93: cmp     al, dl
 * 00000001402A3E95: jbe     short loc_1402A3F09
 * 00000001402A3E97: mov     rdx, rcx
 * 00000001402A3E9A: mov     rax, 34000000000h
 * 00000001402A3EA4: mov     ecx, [r12+28h]
 * 00000001402A3EA9: shl     rcx, 30h
 * 00000001402A3EAD: or      rcx, rdx
 * 00000001402A3EB0: or      rcx, rax
 * 00000001402A3EB3: mov     eax, r14d
 * 00000001402A3EB6: cmp     [rsi+750h], r13d
 * 00000001402A3EBD: jnz     short loc_1402A3F09
 * 00000001402A3EBF: xor     rdx, rax
 * 00000001402A3EC2: mov     rax, [rsi+548h]
 * 00000001402A3EC9: mov     [rax+18h], rdx
 * 00000001402A3ECD: cmp     [rsi+750h], r13d
 * 00000001402A3ED4: jnz     short loc_1402A3F09
 * 00000001402A3ED6: lea     rax, [rsi+r10]
 * 00000001402A3EDA: mov     [rsi+758h], rax
 * 00000001402A3EE1: lea     rax, [r12+r9]
 * 00000001402A3EE5: mov     [rsi+760h], rax
 * 00000001402A3EEC: movsxd  rax, dword ptr [r12]
 * 00000001402A3EF0: mov     [rsi+768h], rax
 * 00000001402A3EF7: mov     eax, 1
 * 00000001402A3EFC: mov     [rsi+770h], rcx
 * 00000001402A3F03: mov     [rsi+750h], eax
 * 00000001402A3F09: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A3F0C: mov     r14d, 8000h
 * 00000001402A3F12: add     [rsi+688h], r14d
 * 00000001402A3F19: jmp     loc_14029B16C
 * 00000001402A3F1E: mov     edx, [r12+28h]
 * 00000001402A3F23: lea     rcx, [rbp+2150h+var_1800]
 * 00000001402A3F2A: mov     rax, [rsi+190h]
 * 00000001402A3F31: call    KeGuardDispatchICall
 * 00000001402A3F36: mov     rax, [rsi+1C0h]
 * 00000001402A3F3D: lea     rdx, [rbp+2150h+var_17F0]
 * 00000001402A3F44: lea     rcx, [rbp+2150h+var_1800]
 * 00000001402A3F4B: call    KeGuardDispatchICall
 * 00000001402A3F50: lea     rdx, [rbp+2150h+var_1738]
 * 00000001402A3F57: lea     rcx, [rbp+2150h+var_1E50]
 * 00000001402A3F5E: call    KiGetGdtIdt
 * 00000001402A3F63: mov     r15, [rbp+2150h+var_1E4E]
 * 00000001402A3F6A: mov     r14d, [r12+10h]
 * 00000001402A3F6F: test    [rsi+6DBh], r13b
 * 00000001402A3F76: jz      loc_1402A4088
 * 00000001402A3F7C: mov     edx, 26h ; '&'
 * 00000001402A3F81: lea     rax, [rbp+2150h+var_1650]
 * 00000001402A3F88: mov     r10d, 130h
 * 00000001402A3F8E: xor     r8d, r8d
 * 00000001402A3F91: mov     ecx, r10d
 * 00000001402A3F94: lea     r9d, [rdx-25h]
 * 00000001402A3F98: mov     [rax], r8
 * 00000001402A3F9B: add     ecx, 0FFFFFFF8h
 * 00000001402A3F9E: add     rax, 8
 * 00000001402A3FA2: sub     rdx, r9
 * 00000001402A3FA5: jnz     short loc_1402A3F98
 * 00000001402A3FA7: test    ecx, ecx
 * 00000001402A3FA9: jz      short loc_1402A3FB6
 * 00000001402A3FAB: mov     [rax], r8b
 * 00000001402A3FAE: add     rax, r9
 * 00000001402A3FB1: add     ecx, 0FFFFFFFFh
 * 00000001402A3FB4: jnz     short loc_1402A3FAB
 * 00000001402A3FB6: movups  xmm0, xmmword ptr [rsi+6A8h]
 * 00000001402A3FBD: lea     rax, [rbp+2150h+var_1650]
 * 00000001402A3FC4: movdqu  [rbp+2150h+var_1640], xmm0
 * 00000001402A3FCC: movups  xmm1, xmmword ptr [rsi+6B8h]
 * 00000001402A3FD3: movdqu  [rbp+2150h+var_1630], xmm1
 * 00000001402A3FDB: movups  xmm0, xmmword ptr [rsi+6C8h]
 * 00000001402A3FE2: mov     [rbp+2150h+var_1DAE], rax
 * 00000001402A3FE9: lea     rax, [rsi+6D8h]
 * 00000001402A3FF0: mov     rcx, rax
 * 00000001402A3FF3: mov     [rbp+2150h+var_20D0], rax
 * 00000001402A3FFA: shr     rcx, 10h
 * 00000001402A3FFE: mov     word ptr [rbp+2150h+var_1640], ax
 * 00000001402A4005: shr     rax, 20h
 * 00000001402A4009: mov     dword ptr [rbp+2150h+var_1640+8], eax
 * 00000001402A400F: movdqu  [rbp+2150h+var_1530], xmm0
 * 00000001402A4017: mov     word ptr [rbp+2150h+var_1DB0], r10w
 * 00000001402A401F: mov     word ptr [rbp+2150h+var_1640+6], cx
 * 00000001402A4026: cli
 * 00000001402A4027: sidt    fword ptr [rbp+2150h+var_1C90]
 * 00000001402A402E: lidt    fword ptr [rbp+2150h+var_1DB0]
 * 00000001402A4035: mov     dr7, r8
 * 00000001402A4039: lea     rax, [rsi+6DEh]
 * 00000001402A4040: mov     rcx, rax
 * 00000001402A4043: mov     [rbp+2150h+var_20D0], rax
 * 00000001402A404A: mov     word ptr [rbp+2150h+var_1640], ax
 * 00000001402A4051: shr     rcx, 10h
 * 00000001402A4055: shr     rax, 20h
 * 00000001402A4059: mov     word ptr [rbp+2150h+var_1640+6], cx
 * 00000001402A4060: mov     dword ptr [rbp+2150h+var_1640+8], eax
 * 00000001402A4066: call    KiErrata704Present
 * 00000001402A406B: mov     [rsi+740h], rax
 * 00000001402A4072: mov     eax, gs:1A4h
 * 00000001402A407A: mov     [rsi+748h], eax
 * 00000001402A4080: lidt    fword ptr [rbp+2150h+var_1C90]
 * 00000001402A4087: sti
 * 00000001402A4088: call    KiGetLdtr
 * 00000001402A408D: movzx   r12d, ax
 * 00000001402A4091: call    KiGetTr
 * 00000001402A4096: add     [rsi+688h], r14d
 * 00000001402A409D: lea     rcx, [r15+r14]
 * 00000001402A40A1: mov     r10d, [rsi+674h]
 * 00000001402A40A8: movzx   r13d, ax
 * 00000001402A40AC: mov     r11, [rsi+678h]
 * 00000001402A40B3: mov     r8, r15
 * 00000001402A40B6: mov     rax, r15
 * 00000001402A40B9: cmp     r15, rcx
 * 00000001402A40BC: jnb     short loc_1402A40CE
 * 00000001402A40BE: mov     edx, 40h ; '@'
 * 00000001402A40C3: prefetchnta byte ptr [rax]
 * 00000001402A40C6: add     rax, rdx
 * 00000001402A40C9: cmp     rax, rcx
 * 00000001402A40CC: jb      short loc_1402A40C3
 * 00000001402A40CE: mov     r9d, r14d
 * 00000001402A40D1: mov     rbx, r11
 * 00000001402A40D4: shr     r9d, 7
 * 00000001402A40D8: mov     edx, 1
 * 00000001402A40DD: test    r9d, r9d
 * 00000001402A40E0: jz      short loc_1402A414D
 * 00000001402A40E2: mov     rdi, 7010008004002001h
 * 00000001402A40EC: mov     eax, 8
 * 00000001402A40F1: xor     rbx, [r8]
 * 00000001402A40F4: mov     ecx, r10d
 * 00000001402A40F7: rol     rbx, cl
 * 00000001402A40FA: xor     rbx, [r8+8]
 * 00000001402A40FE: add     r8, 10h
 * 00000001402A4102: rol     rbx, cl
 * 00000001402A4105: sub     rax, rdx
 * 00000001402A4108: jnz     short loc_1402A40F1
 * 00000001402A410A: mov     rcx, r8
 * 00000001402A410D: sub     rcx, r15
 * 00000001402A4110: xor     rcx, r11
 * 00000001402A4113: mov     rax, rcx
 * 00000001402A4116: rol     rax, 11h
 * 00000001402A411A: xor     rcx, rax
 * 00000001402A411D: mov     rax, rdi
 * 00000001402A4120: mul     rcx
 * 00000001402A4123: xor     eax, edx
 * 00000001402A4125: mov     [rbp+2150h+var_1AF0], rdx
 * 00000001402A412C: xor     r10d, eax
 * 00000001402A412F: mov     edx, 1
 * 00000001402A4134: and     r10d, 3Fh
 * 00000001402A4138: cmovz   r10d, edx
 * 00000001402A413C: add     r9d, 0FFFFFFFFh
 * 00000001402A4140: jnz     short loc_1402A40EC
 * 00000001402A4142: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A4146: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A414D: and     r14d, 7Fh
 * 00000001402A4151: cmp     r14d, 8
 * 00000001402A4155: jb      short loc_1402A4174
 * 00000001402A4157: mov     eax, r14d
 * 00000001402A415A: shr     rax, 3
 * 00000001402A415E: xor     rbx, [r8]
 * 00000001402A4161: mov     ecx, r10d
 * 00000001402A4164: rol     rbx, cl
 * 00000001402A4167: add     r8, 8
 * 00000001402A416B: add     r14d, 0FFFFFFF8h
 * 00000001402A416F: sub     rax, rdx
 * 00000001402A4172: jnz     short loc_1402A415E
 * 00000001402A4174: test    r14d, r14d
 * 00000001402A4177: jz      short loc_1402A418F
 * 00000001402A4179: movzx   eax, byte ptr [r8]
 * 00000001402A417D: mov     ecx, r10d
 * 00000001402A4180: xor     rbx, rax
 * 00000001402A4183: add     r8, rdx
 * 00000001402A4186: rol     rbx, cl
 * 00000001402A4189: add     r14d, 0FFFFFFFFh
 * 00000001402A418D: jnz     short loc_1402A4179
 * 00000001402A418F: mov     rax, rbx
 * 00000001402A4192: jmp     short loc_1402A4196
 * 00000001402A4194: xor     ebx, eax
 * 00000001402A4196: shr     rax, 1Fh
 * 00000001402A419A: test    rax, rax
 * 00000001402A419D: jnz     short loc_1402A4194
 * 00000001402A419F: mov     rax, [rsi+188h]
 * 00000001402A41A6: lea     rcx, [rbp+2150h+var_17F0]
 * 00000001402A41AD: btr     ebx, 1Fh
 * 00000001402A41B1: call    KeGuardDispatchICall
 * 00000001402A41B6: mov     r9, [rbp+2150h+var_2138]
 * 00000001402A41BA: mov     r11d, 40h ; '@'
 * 00000001402A41C0: cmp     ebx, [r9+14h]
 * 00000001402A41C4: jnz     short loc_1402A41E4
 * 00000001402A41C6: movzx   eax, word ptr [r9+2Ch]
 * 00000001402A41CB: cmp     [rbp+2150h+var_1E50], ax
 * 00000001402A41D2: jnz     short loc_1402A41E4
 * 00000001402A41D4: test    r12w, r12w
 * 00000001402A41D8: jnz     short loc_1402A41E4
 * 00000001402A41DA: cmp     r13w, r11w
 * 00000001402A41DE: jz      loc_1402A42D5
 * 00000001402A41E4: test    dword ptr [rsi+7D8h], 40000000h
 * 00000001402A41EE: mov     r10d, 1
 * 00000001402A41F4: jz      short loc_1402A4236
 * 00000001402A41F6: mov     rcx, [rsi+8B0h]
 * 00000001402A41FD: lea     edx, [r10+2Fh]
 * 00000001402A4201: lea     r8d, [r10+5]
 * 00000001402A4205: mov     rax, [r9]
 * 00000001402A4208: add     edx, 0FFFFFFF8h
 * 00000001402A420B: mov     [rcx], rax
 * 00000001402A420E: add     r9, 8
 * 00000001402A4212: add     rcx, 8
 * 00000001402A4216: sub     r8, r10
 * 00000001402A4219: jnz     short loc_1402A4205
 * 00000001402A421B: test    edx, edx
 * 00000001402A421D: jz      short loc_1402A422F
 * 00000001402A421F: mov     al, [r9]
 * 00000001402A4222: add     r9, r10
 * 00000001402A4225: mov     [rcx], al
 * 00000001402A4227: add     rcx, r10
 * 00000001402A422A: add     edx, 0FFFFFFFFh
 * 00000001402A422D: jnz     short loc_1402A421F
 * 00000001402A422F: mov     r9, [rsi+8B0h]
 * 00000001402A4236: mov     rax, [rbp+2150h+var_1E4E]
 * 00000001402A423D: mov     ecx, ebx
 * 00000001402A423F: mov     [r9+18h], rax
 * 00000001402A4243: mov     [r9+20h], rcx
 * 00000001402A4247: test    r12w, r12w
 * 00000001402A424B: jz      short loc_1402A4253
 * 00000001402A424D: movzx   eax, r12w
 * 00000001402A4251: jmp     short loc_1402A425D
 * 00000001402A4253: cmp     r13w, r11w
 * 00000001402A4257: jz      short loc_1402A4261
 * 00000001402A4259: movzx   eax, r13w
 * 00000001402A425D: mov     [r9+18h], rax
 * 00000001402A4261: mov     eax, [r9+14h]
 * 00000001402A4265: xor     r13d, r13d
 * 00000001402A4268: cmp     [rsi+750h], r13d
 * 00000001402A426F: jnz     short loc_1402A427F
 * 00000001402A4271: xor     rcx, rax
 * 00000001402A4274: mov     rax, [rsi+548h]
 * 00000001402A427B: mov     [rax+18h], rcx
 * 00000001402A427F: mov     rcx, [r9+8]
 * 00000001402A4283: cmp     [rsi+750h], r13d
 * 00000001402A428A: jnz     loc_1402A3F09
 * 00000001402A4290: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A429A: add     rax, rsi
 * 00000001402A429D: mov     [rsi+758h], rax
 * 00000001402A42A4: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A42AE: add     rax, r9
 * 00000001402A42B1: mov     [rsi+760h], rax
 * 00000001402A42B8: movsxd  rax, dword ptr [r9]
 * 00000001402A42BB: mov     [rsi+768h], rax
 * 00000001402A42C2: mov     [rsi+770h], rcx
 * 00000001402A42C9: mov     [rsi+750h], r10d
 * 00000001402A42D0: jmp     loc_1402A3F09
 * 00000001402A42D5: xor     r13d, r13d
 * 00000001402A42D8: jmp     loc_1402A3F09
 * 00000001402A42DD: mov     edx, [r12+28h]
 * 00000001402A42E2: lea     rcx, [rbp+2150h+var_17E0]
 * 00000001402A42E9: mov     rax, [rsi+190h]
 * 00000001402A42F0: xor     r13d, r13d
 * 00000001402A42F3: mov     [rbp+2150h+var_2140], r13d
 * 00000001402A42F7: call    KeGuardDispatchICall
 * 00000001402A42FC: mov     rax, [rsi+1C0h]
 * 00000001402A4303: lea     rdx, [rbp+2150h+var_17D0]
 * 00000001402A430A: lea     rcx, [rbp+2150h+var_17E0]
 * 00000001402A4311: call    KeGuardDispatchICall
 * 00000001402A4316: lea     rdx, [rbp+2150h+var_1DD0]
 * 00000001402A431D: lea     rcx, [rbp+2150h+var_1728]
 * 00000001402A4324: call    KiGetGdtIdt
 * 00000001402A4329: mov     rcx, [rbp+2150h+var_1DCE]
 * 00000001402A4330: mov     edi, r13d
 * 00000001402A4333: mov     [rbp+2150h+var_2110], rcx
 * 00000001402A4337: add     rcx, 4
 * 00000001402A433B: mov     [rbp+2150h+var_2148], rcx
 * 00000001402A433F: mov     rax, [rsi+728h]
 * 00000001402A4346: xor     r10d, r10d
 * 00000001402A4349: mov     [rbp+2150h+var_1F98], rax
 * 00000001402A4350: mov     r9, r13
 * 00000001402A4353: mov     eax, [rsi+710h]
 * 00000001402A4359: mov     r14d, r10d
 * 00000001402A435C: mov     r15d, [rsi+70Ch]
 * 00000001402A4363: mov     [rbp+2150h+var_20E0], r13
 * 00000001402A4367: mov     r13, [rsi+730h]
 * 00000001402A436E: mov     [rbp+2150h+var_2128], eax
 * 00000001402A4371: mov     r12, cr8
 * 00000001402A4375: mov     cr8, rbx
 * 00000001402A4379: movzx   eax, word ptr [rcx-4]
 * 00000001402A437D: movzx   r8d, word ptr [rcx]
 * 00000001402A4381: mov     word ptr [rbp+2150h+var_20E8], ax
 * 00000001402A4385: movzx   eax, word ptr [rcx+2]
 * 00000001402A4389: mov     word ptr [rbp+2150h+var_20E8+2], ax
 * 00000001402A438D: mov     eax, [rcx+4]
 * 00000001402A4390: mov     rcx, [rsi+5D0h]
 * 00000001402A4397: mov     dword ptr [rbp+2150h+var_20E8+4], eax
 * 00000001402A439A: mov     rbx, [rbp+2150h+var_20E8]
 * 00000001402A439E: shr     r8w, 0Dh
 * 00000001402A43A3: and     r8w, 3
 * 00000001402A43A8: mov     eax, edi
 * 00000001402A43AA: mov     word ptr [rbp+2150h+var_20D8], r8w
 * 00000001402A43AF: lea     rdx, [rcx+rax*8]
 * 00000001402A43B3: cmp     rbx, rdx
 * 00000001402A43B6: jnz     loc_1402A4621
 * 00000001402A43BC: test    r8w, r8w
 * 00000001402A43C0: jnz     short loc_1402A43F1
 * 00000001402A43C2: mov     rax, [rsi+458h]
 * 00000001402A43C9: mov     ecx, edi
 * 00000001402A43CB: call    KeGuardDispatchICall
 * 00000001402A43D0: mov     r14, [rax]
 * 00000001402A43D3: test    r14, r14
 * 00000001402A43D6: jz      loc_1402A461D
 * 00000001402A43DC: mov     r15, [r15+r14]
 * 00000001402A43E0: mov     [rbp+2150h+var_20E0], r15
 * 00000001402A43E4: cmp     edi, 30h ; '0'
 * 00000001402A43E7: jnb     loc_1402A4625
 * 00000001402A43ED: mov     r9, [rbp+2150h+var_20E0]
 * 00000001402A43F1: xor     r13d, r13d
 * 00000001402A43F4: mov     rax, [rsi+548h]
 * 00000001402A43FB: mov     [rax], rbx
 * 00000001402A43FE: mov     dword ptr [rax+10h], 80h
 * 00000001402A4405: test    r9, r9
 * 00000001402A4408: jz      short loc_1402A441C
 * 00000001402A440A: mov     rax, [rsi+548h]
 * 00000001402A4411: mov     [rax+8], r9
 * 00000001402A4415: mov     dword ptr [rax+14h], 80h
 * 00000001402A441C: mov     [rbp+2150h+var_2140], 1
 * 00000001402A4423: mov     rcx, [rbp+2150h+var_2148]
 * 00000001402A4427: inc     edi
 * 00000001402A4429: add     rcx, 10h
 * 00000001402A442D: mov     ebx, 0Fh
 * 00000001402A4432: mov     [rbp+2150h+var_2148], rcx
 * 00000001402A4436: cmp     edi, 0FFh
 * 00000001402A443C: jbe     loc_1402A433F
 * 00000001402A4442: lea     ecx, [rbx-0Eh]
 * 00000001402A4445: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A444C: test    [rsi+6DBh], cl
 * 00000001402A4452: jz      loc_1402A4526
 * 00000001402A4458: cli
 * 00000001402A4459: mov     r14d, 0C0000082h
 * 00000001402A445F: mov     ecx, r14d
 * 00000001402A4462: rdmsr
 * 00000001402A4464: shl     rdx, 20h
 * 00000001402A4468: or      rax, rdx
 * 00000001402A446B: lea     rdx, [rsi+6DAh]
 * 00000001402A4472: mov     rbx, rax
 * 00000001402A4475: mov     rax, rdx
 * 00000001402A4478: shr     rdx, 20h
 * 00000001402A447C: wrmsr
 * 00000001402A447E: mov     r15d, 20000h
 * 00000001402A4484: test    [rsi+7DCh], r15d
 * 00000001402A448B: jnz     short loc_1402A44CF
 * 00000001402A448D: mov     rdx, gs:20h
 * 00000001402A4496: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402A44A0: mov     rax, [rsi+478h]
 * 00000001402A44A7: add     rcx, rsi
 * 00000001402A44AA: mov     [rax], rcx
 * 00000001402A44AD: mov     rax, [rsi+480h]
 * 00000001402A44B4: mov     [rax], rdx
 * 00000001402A44B7: mov     rax, [rsi+488h]
 * 00000001402A44BE: mov     [rax], r14
 * 00000001402A44C1: mov     rax, [rsi+490h]
 * 00000001402A44C8: mov     qword ptr [rax], 112h
 * 00000001402A44CF: lea     rax, [rsi+6DCh]
 * 00000001402A44D6: call    KeGuardDispatchICall
 * 00000001402A44DB: test    [rsi+7DCh], r15d
 * 00000001402A44E2: jnz     short loc_1402A4516
 * 00000001402A44E4: mov     rax, [rsi+478h]
 * 00000001402A44EB: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402A44F5: mov     [rax], rcx
 * 00000001402A44F8: mov     rax, [rsi+480h]
 * 00000001402A44FF: mov     [rax], r13
 * 00000001402A4502: mov     rax, [rsi+488h]
 * 00000001402A4509: mov     [rax], r13
 * 00000001402A450C: mov     rax, [rsi+490h]
 * 00000001402A4513: mov     [rax], r13
 * 00000001402A4516: mov     rdx, rbx
 * 00000001402A4519: mov     rax, rbx
 * 00000001402A451C: shr     rdx, 20h
 * 00000001402A4520: mov     ecx, r14d
 * 00000001402A4523: wrmsr
 * 00000001402A4525: sti
 * 00000001402A4526: mov     r15, [rbp+2150h+var_2110]
 * 00000001402A452A: add     dword ptr [rsi+688h], 350h
 * 00000001402A4534: mov     r8, r15
 * 00000001402A4537: mov     r14d, [rsi+688h]
 * 00000001402A453E: mov     rax, r15
 * 00000001402A4541: mov     r9d, [rsi+674h]
 * 00000001402A4548: mov     r11, [rsi+678h]
 * 00000001402A454F: lea     rcx, [r15+350h]
 * 00000001402A4556: cmp     r15, rcx
 * 00000001402A4559: jnb     short loc_1402A456B
 * 00000001402A455B: mov     edx, 40h ; '@'
 * 00000001402A4560: prefetchnta byte ptr [rax]
 * 00000001402A4563: add     rax, rdx
 * 00000001402A4566: cmp     rax, rcx
 * 00000001402A4569: jb      short loc_1402A4560
 * 00000001402A456B: mov     r10d, 6
 * 00000001402A4571: mov     rbx, r11
 * 00000001402A4574: mov     rsi, 7010008004002001h
 * 00000001402A457E: lea     r12d, [r10-5]
 * 00000001402A4582: mov     eax, 8
 * 00000001402A4587: xor     rbx, [r8]
 * 00000001402A458A: mov     ecx, r9d
 * 00000001402A458D: rol     rbx, cl
 * 00000001402A4590: xor     rbx, [r8+8]
 * 00000001402A4594: add     r8, 10h
 * 00000001402A4598: rol     rbx, cl
 * 00000001402A459B: sub     rax, r12
 * 00000001402A459E: jnz     short loc_1402A4587
 * 00000001402A45A0: mov     rcx, r8
 * 00000001402A45A3: sub     rcx, r15
 * 00000001402A45A6: xor     rcx, r11
 * 00000001402A45A9: mov     rax, rcx
 * 00000001402A45AC: rol     rax, 11h
 * 00000001402A45B0: xor     rcx, rax
 * 00000001402A45B3: mov     rax, rsi
 * 00000001402A45B6: mul     rcx
 * 00000001402A45B9: xor     r9d, eax
 * 00000001402A45BC: mov     [rbp+2150h+var_1AD8], rdx
 * 00000001402A45C3: xor     r9d, edx
 * 00000001402A45C6: and     r9d, 3Fh
 * 00000001402A45CA: cmovz   r9d, r12d
 * 00000001402A45CE: add     r10d, 0FFFFFFFFh
 * 00000001402A45D2: jnz     short loc_1402A4582
 * 00000001402A45D4: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A45D8: lea     edx, [r10+50h]
 * 00000001402A45DC: mov     r12d, [rbp+2150h+var_2140]
 * 00000001402A45E0: lea     eax, [rdx-46h]
 * 00000001402A45E3: lea     r11d, [r10+1]
 * 00000001402A45E7: xor     rbx, [r8]
 * 00000001402A45EA: mov     ecx, r9d
 * 00000001402A45ED: rol     rbx, cl
 * 00000001402A45F0: add     r8, 8
 * 00000001402A45F4: add     edx, 0FFFFFFF8h
 * 00000001402A45F7: sub     rax, r11
 * 00000001402A45FA: jnz     short loc_1402A45E7
 * 00000001402A45FC: test    edx, edx
 * 00000001402A45FE: jz      short loc_1402A4615
 * 00000001402A4600: movzx   eax, byte ptr [r8]
 * 00000001402A4604: mov     ecx, r9d
 * 00000001402A4607: xor     rbx, rax
 * 00000001402A460A: add     r8, r11
 * 00000001402A460D: rol     rbx, cl
 * 00000001402A4610: add     edx, 0FFFFFFFFh
 * 00000001402A4613: jnz     short loc_1402A4600
 * 00000001402A4615: mov     rax, rbx
 * 00000001402A4618: jmp     loc_1402A47B8
 * 00000001402A461D: or      r14, 0FFFFFFFFFFFFFFFFh
 * 00000001402A4621: mov     r15, [rbp+2150h+var_20E0]
 * 00000001402A4625: movzx   eax, r12b
 * 00000001402A4629: mov     cr8, rax
 * 00000001402A462D: test    r14, r14
 * 00000001402A4630: jnz     short loc_1402A4687
 * 00000001402A4632: mov     rdx, [rbp+2150h+var_1F98]
 * 00000001402A4639: cmp     rbx, rdx
 * 00000001402A463C: jb      loc_1402A43ED
 * 00000001402A4642: cmp     rbx, r13
 * 00000001402A4645: ja      loc_1402A43ED
 * 00000001402A464B: mov     r8d, dword ptr [rbp+2150h+var_20E8]
 * 00000001402A464F: mov     rcx, [rsi+738h]
 * 00000001402A4656: sub     r8d, edx
 * 00000001402A4659: mov     rax, [rsi+200h]
 * 00000001402A4660: mov     [rbp+2150h+var_1AE8], rdx
 * 00000001402A4667: call    KeGuardDispatchICall
 * 00000001402A466C: xor     r13d, r13d
 * 00000001402A466F: test    rax, rax
 * 00000001402A4672: jz      loc_1402A47AD
 * 00000001402A4678: mov     eax, [rax+24h]
 * 00000001402A467B: bt      eax, 19h
 * 00000001402A467F: jb      loc_1402A47AD
 * 00000001402A4685: jmp     short loc_1402A468A
 * 00000001402A4687: xor     r13d, r13d
 * 00000001402A468A: mov     rax, [rbp+2150h+var_2148]
 * 00000001402A468E: mov     ecx, 10h
 * 00000001402A4693: cmp     [rax-2], cx
 * 00000001402A4697: jnz     loc_1402A47AD
 * 00000001402A469D: movzx   ecx, word ptr [rax]
 * 00000001402A46A0: mov     edx, 1F00h
 * 00000001402A46A5: movzx   eax, cx
 * 00000001402A46A8: and     ax, dx
 * 00000001402A46AB: mov     edx, 0E00h
 * 00000001402A46B0: cmp     ax, dx
 * 00000001402A46B3: jnz     loc_1402A47AD
 * 00000001402A46B9: mov     eax, 8000h
 * 00000001402A46BE: test    ax, cx
 * 00000001402A46C1: jz      loc_1402A47AD
 * 00000001402A46C7: mov     rax, [rsi+250h]
 * 00000001402A46CE: lea     rdx, [rbp+2150h+var_1F98]
 * 00000001402A46D5: xor     r8d, r8d
 * 00000001402A46D8: mov     rcx, rbx
 * 00000001402A46DB: call    KeGuardDispatchICall
 * 00000001402A46E0: test    rax, rax
 * 00000001402A46E3: jz      short loc_1402A4709
 * 00000001402A46E5: mov     eax, [rax]
 * 00000001402A46E7: mov     rcx, [rbp+2150h+var_1F98]
 * 00000001402A46EE: add     rax, rcx
 * 00000001402A46F1: cmp     rax, rbx
 * 00000001402A46F4: jnz     short loc_1402A4709
 * 00000001402A46F6: cmp     rcx, [rsi+728h]
 * 00000001402A46FD: jnz     short loc_1402A4709
 * 00000001402A46FF: test    r14, r14
 * 00000001402A4702: jnz     short loc_1402A4712
 * 00000001402A4704: jmp     loc_1402A4423
 * 00000001402A4709: test    r14, r14
 * 00000001402A470C: jz      loc_1402A47AD
 * 00000001402A4712: cmp     word ptr [rbp+2150h+var_20D8], r13w
 * 00000001402A4717: jnz     loc_1402A47AD
 * 00000001402A471D: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 00000001402A4721: jz      loc_1402A4423
 * 00000001402A4727: mov     rax, [rsi+250h]
 * 00000001402A472E: lea     rdx, [rbp+2150h+var_1F98]
 * 00000001402A4735: xor     r8d, r8d
 * 00000001402A4738: mov     rcx, r15
 * 00000001402A473B: call    KeGuardDispatchICall
 * 00000001402A4740: test    rax, rax
 * 00000001402A4743: jz      short loc_1402A47AD
 * 00000001402A4745: mov     eax, [rax]
 * 00000001402A4747: mov     rdx, [rbp+2150h+var_1F98]
 * 00000001402A474E: add     rax, rdx
 * 00000001402A4751: cmp     rax, r15
 * 00000001402A4754: jnz     short loc_1402A47AD
 * 00000001402A4756: cmp     rdx, [rsi+728h]
 * 00000001402A475D: jnz     short loc_1402A47AD
 * 00000001402A475F: mov     rcx, [rsi+738h]
 * 00000001402A4766: mov     r8d, r15d
 * 00000001402A4769: mov     rax, [rsi+200h]
 * 00000001402A4770: sub     r8d, edx
 * 00000001402A4773: mov     [rbp+2150h+var_1AE0], rdx
 * 00000001402A477A: call    KeGuardDispatchICall
 * 00000001402A477F: test    rax, rax
 * 00000001402A4782: jz      short loc_1402A47AD
 * 00000001402A4784: mov     eax, [rax+24h]
 * 00000001402A4787: bt      eax, 19h
 * 00000001402A478B: jb      short loc_1402A47AD
 * 00000001402A478D: cmp     edi, 0FEh
 * 00000001402A4793: jnz     loc_1402A4423
 * 00000001402A4799: mov     eax, [rbp+2150h+var_2128]
 * 00000001402A479C: mov     rcx, [rax+r14]
 * 00000001402A47A0: cmp     rcx, [rsi+718h]
 * 00000001402A47A7: jz      loc_1402A4423
 * 00000001402A47AD: mov     r9, [rbp+2150h+var_20E0]
 * 00000001402A47B1: jmp     loc_1402A43F4
 * 00000001402A47B6: xor     ebx, eax
 * 00000001402A47B8: shr     rax, 1Fh
 * 00000001402A47BC: test    rax, rax
 * 00000001402A47BF: jnz     short loc_1402A47B6
 * 00000001402A47C1: lea     rdx, [r15+0E10h]
 * 00000001402A47C8: btr     ebx, 1Fh
 * 00000001402A47CC: lea     eax, [r14+10h]
 * 00000001402A47D0: mov     [rsi+688h], eax
 * 00000001402A47D6: lea     rcx, [rdx+10h]
 * 00000001402A47DA: mov     r10d, [rsi+674h]
 * 00000001402A47E1: mov     rax, rdx
 * 00000001402A47E4: mov     r14, [rsi+678h]
 * 00000001402A47EB: cmp     rdx, rcx
 * 00000001402A47EE: jnb     short loc_1402A4801
 * 00000001402A47F0: mov     r8d, 40h ; '@'
 * 00000001402A47F6: prefetchnta byte ptr [rax]
 * 00000001402A47F9: add     rax, r8
 * 00000001402A47FC: cmp     rax, rcx
 * 00000001402A47FF: jb      short loc_1402A47F6
 * 00000001402A4801: mov     r8d, 10h
 * 00000001402A4807: lea     r9d, [r8-0Eh]
 * 00000001402A480B: xor     r14, [rdx]
 * 00000001402A480E: mov     ecx, r10d
 * 00000001402A4811: rol     r14, cl
 * 00000001402A4814: add     rdx, 8
 * 00000001402A4818: add     r8d, 0FFFFFFF8h
 * 00000001402A481C: sub     r9, r11
 * 00000001402A481F: jnz     short loc_1402A480B
 * 00000001402A4821: test    r8d, r8d
 * 00000001402A4824: jz      short loc_1402A483B
 * 00000001402A4826: movzx   eax, byte ptr [rdx]
 * 00000001402A4829: mov     ecx, r10d
 * 00000001402A482C: xor     r14, rax
 * 00000001402A482F: add     rdx, r11
 * 00000001402A4832: rol     r14, cl
 * 00000001402A4835: add     r8d, 0FFFFFFFFh
 * 00000001402A4839: jnz     short loc_1402A4826
 * 00000001402A483B: mov     rax, r14
 * 00000001402A483E: jmp     short loc_1402A4843
 * 00000001402A4840: xor     r14d, eax
 * 00000001402A4843: shr     rax, 1Fh
 * 00000001402A4847: test    rax, rax
 * 00000001402A484A: jnz     short loc_1402A4840
 * 00000001402A484C: mov     rax, [rsi+188h]
 * 00000001402A4853: lea     rcx, [rbp+2150h+var_17D0]
 * 00000001402A485A: btr     r14d, 1Fh
 * 00000001402A485F: call    KeGuardDispatchICall
 * 00000001402A4864: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A4868: mov     edx, [r8+14h]
 * 00000001402A486C: cmp     ebx, edx
 * 00000001402A486E: jnz     short loc_1402A4890
 * 00000001402A4870: mov     eax, r14d
 * 00000001402A4873: cmp     rax, [r8+18h]
 * 00000001402A4877: jnz     short loc_1402A4890
 * 00000001402A4879: movzx   eax, word ptr [r8+2Ch]
 * 00000001402A487E: cmp     [rbp+2150h+var_1DD0], ax
 * 00000001402A4885: jnz     short loc_1402A4890
 * 00000001402A4887: test    r12d, r12d
 * 00000001402A488A: jz      loc_1402A491D
 * 00000001402A4890: test    r12d, r12d
 * 00000001402A4893: jnz     short loc_1402A48CC
 * 00000001402A4895: mov     eax, r14d
 * 00000001402A4898: cmp     rax, [r8+18h]
 * 00000001402A489C: jnz     short loc_1402A48AE
 * 00000001402A489E: cmp     [rsi+750h], r13d
 * 00000001402A48A5: jnz     short loc_1402A48CC
 * 00000001402A48A7: mov     ecx, ebx
 * 00000001402A48A9: xor     rcx, rdx
 * 00000001402A48AC: jmp     short loc_1402A48C1
 * 00000001402A48AE: mov     eax, [r8+18h]
 * 00000001402A48B2: cmp     [rsi+750h], r13d
 * 00000001402A48B9: jnz     short loc_1402A48CC
 * 00000001402A48BB: mov     ecx, r14d
 * 00000001402A48BE: xor     rcx, rax
 * 00000001402A48C1: mov     rax, [rsi+548h]
 * 00000001402A48C8: mov     [rax+18h], rcx
 * 00000001402A48CC: mov     rcx, [r8+8]
 * 00000001402A48D0: cmp     [rsi+750h], r13d
 * 00000001402A48D7: jnz     short loc_1402A491D
 * 00000001402A48D9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A48E3: add     rax, rsi
 * 00000001402A48E6: mov     [rsi+758h], rax
 * 00000001402A48ED: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A48F7: add     rax, r8
 * 00000001402A48FA: mov     [rsi+760h], rax
 * 00000001402A4901: movsxd  rax, dword ptr [r8]
 * 00000001402A4904: mov     [rsi+768h], rax
 * 00000001402A490B: mov     eax, 1
 * 00000001402A4910: mov     [rsi+770h], rcx
 * 00000001402A4917: mov     [rsi+750h], eax
 * 00000001402A491D: add     dword ptr [rsi+688h], 10000h
 * 00000001402A4927: jmp     loc_1402A00F1
 * 00000001402A492C: mov     edx, [r12+2Ch]
 * 00000001402A4931: lea     rcx, [rbp+2150h+var_17C0]
 * 00000001402A4938: mov     rax, [rsi+190h]
 * 00000001402A493F: mov     ebx, [r12+28h]
 * 00000001402A4944: call    KeGuardDispatchICall
 * 00000001402A4949: mov     rax, [rsi+1C0h]
 * 00000001402A4950: lea     rdx, [rbp+2150h+var_17B0]
 * 00000001402A4957: lea     rcx, [rbp+2150h+var_17C0]
 * 00000001402A495E: call    KeGuardDispatchICall
 * 00000001402A4963: cmp     r15d, 26h ; '&'
 * 00000001402A4967: jz      short loc_1402A497A
 * 00000001402A4969: xor     r13d, r13d
 * 00000001402A496C: test    ebx, ebx
 * 00000001402A496E: jz      short loc_1402A4975
 * 00000001402A4970: mov     rbx, cr4
 * 00000001402A4973: jmp     short loc_1402A498C
 * 00000001402A4975: mov     rbx, cr0
 * 00000001402A4978: jmp     short loc_1402A498C
 * 00000001402A497A: xor     ecx, ecx
 * 00000001402A497C: xgetbv
 * 00000001402A497F: shl     rdx, 20h
 * 00000001402A4983: or      rdx, rax
 * 00000001402A4986: mov     rbx, rdx
 * 00000001402A4989: xor     r13d, r13d
 * 00000001402A498C: mov     rax, [rsi+188h]
 * 00000001402A4993: lea     rcx, [rbp+2150h+var_17B0]
 * 00000001402A499A: call    KeGuardDispatchICall
 * 00000001402A499F: mov     r8, [r12+18h]
 * 00000001402A49A4: mov     rdx, [r12+20h]
 * 00000001402A49A9: and     r8, rbx
 * 00000001402A49AC: cmp     r8, rdx
 * 00000001402A49AF: jz      loc_1402A00F1
 * 00000001402A49B5: mov     ecx, [r12+2Ch]
 * 00000001402A49BA: mov     eax, [r12+28h]
 * 00000001402A49BF: shl     rcx, 20h
 * 00000001402A49C3: or      rcx, rax
 * 00000001402A49C6: cmp     [rsi+750h], r13d
 * 00000001402A49CD: jnz     loc_1402A00F1
 * 00000001402A49D3: mov     rax, [rsi+548h]
 * 00000001402A49DA: xor     rdx, r8
 * 00000001402A49DD: mov     [rax+18h], rdx
 * 00000001402A49E1: cmp     [rsi+750h], r13d
 * 00000001402A49E8: jnz     loc_1402A00F1
 * 00000001402A49EE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A49F8: add     rax, rsi
 * 00000001402A49FB: mov     [rsi+758h], rax
 * 00000001402A4A02: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4A0C: add     rax, r12
 * 00000001402A4A0F: mov     [rsi+760h], rax
 * 00000001402A4A16: movsxd  rax, dword ptr [r12]
 * 00000001402A4A1A: mov     [rsi+768h], rax
 * 00000001402A4A21: mov     eax, 1
 * 00000001402A4A26: mov     [rsi+770h], rcx
 * 00000001402A4A2D: mov     [rsi+750h], eax
 * 00000001402A4A33: jmp     loc_1402A00F1
 * 00000001402A4A38: mov     eax, [rsi+7DCh]
 * 00000001402A4A3E: mov     ecx, 2
 * 00000001402A4A43: test    cl, al
 * 00000001402A4A45: jnz     loc_14029B163
 * 00000001402A4A4B: mov     rax, [rsi+410h]
 * 00000001402A4A52: call    KeGuardDispatchICall
 * 00000001402A4A57: xor     r13d, r13d
 * 00000001402A4A5A: test    al, al
 * 00000001402A4A5C: jz      loc_1402A00F1
 * 00000001402A4A62: lea     r15d, [r13+0Ch]
 * 00000001402A4A66: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A4A69: mov     r14d, 8000h
 * 00000001402A4A6F: cmp     [rsi+750h], r13d
 * 00000001402A4A76: jnz     loc_14029B172
 * 00000001402A4A7C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A4A86: add     rax, rsi
 * 00000001402A4A89: mov     [rsi+758h], rax
 * 00000001402A4A90: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4A9A: add     rax, r12
 * 00000001402A4A9D: mov     [rsi+760h], rax
 * 00000001402A4AA4: movsxd  rax, dword ptr [r12]
 * 00000001402A4AA8: mov     [rsi+768h], rax
 * 00000001402A4AAF: mov     [rsi+770h], r13
 * 00000001402A4AB6: mov     eax, 1
 * 00000001402A4ABB: mov     [rsi+750h], eax
 * 00000001402A4AC1: jmp     loc_14029B172
 * 00000001402A4AC6: mov     r14, [r12+8]
 * 00000001402A4ACB: mov     r8d, [r12+10h]
 * 00000001402A4AD0: mov     r9, r14
 * 00000001402A4AD3: add     [rsi+688h], r8d
 * 00000001402A4ADA: mov     rax, r14
 * 00000001402A4ADD: mov     r10d, [rsi+674h]
 * 00000001402A4AE4: mov     r15, [rsi+678h]
 * 00000001402A4AEB: lea     rcx, [r14+r8]
 * 00000001402A4AEF: cmp     r14, rcx
 * 00000001402A4AF2: jnb     short loc_1402A4B04
 * 00000001402A4AF4: mov     edx, 40h ; '@'
 * 00000001402A4AF9: prefetchnta byte ptr [rax]
 * 00000001402A4AFC: add     rax, rdx
 * 00000001402A4AFF: cmp     rax, rcx
 * 00000001402A4B02: jb      short loc_1402A4AF9
 * 00000001402A4B04: xor     r13d, r13d
 * 00000001402A4B07: mov     r11d, r8d
 * 00000001402A4B0A: shr     r11d, 7
 * 00000001402A4B0E: mov     rbx, r15
 * 00000001402A4B11: lea     r12d, [r13+1]
 * 00000001402A4B15: test    r11d, r11d
 * 00000001402A4B18: jz      short loc_1402A4B80
 * 00000001402A4B1A: mov     rsi, 7010008004002001h
 * 00000001402A4B24: mov     edx, 8
 * 00000001402A4B29: mov     rax, [r9]
 * 00000001402A4B2C: mov     ecx, r10d
 * 00000001402A4B2F: xor     rax, rbx
 * 00000001402A4B32: mov     rbx, [r9+8]
 * 00000001402A4B36: rol     rax, cl
 * 00000001402A4B39: add     r9, 10h
 * 00000001402A4B3D: xor     rbx, rax
 * 00000001402A4B40: rol     rbx, cl
 * 00000001402A4B43: sub     rdx, r12
 * 00000001402A4B46: jnz     short loc_1402A4B29
 * 00000001402A4B48: mov     rcx, r9
 * 00000001402A4B4B: sub     rcx, r14
 * 00000001402A4B4E: xor     rcx, r15
 * 00000001402A4B51: mov     rax, rcx
 * 00000001402A4B54: rol     rax, 11h
 * 00000001402A4B58: xor     rcx, rax
 * 00000001402A4B5B: mov     rax, rsi
 * 00000001402A4B5E: mul     rcx
 * 00000001402A4B61: xor     r10d, eax
 * 00000001402A4B64: mov     [rbp+2150h+var_1AD0], rdx
 * 00000001402A4B6B: xor     r10d, edx
 * 00000001402A4B6E: and     r10d, 3Fh
 * 00000001402A4B72: cmovz   r10d, r12d
 * 00000001402A4B76: add     r11d, 0FFFFFFFFh
 * 00000001402A4B7A: jnz     short loc_1402A4B24
 * 00000001402A4B7C: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A4B80: and     r8d, 7Fh
 * 00000001402A4B84: cmp     r8d, 8
 * 00000001402A4B88: jb      short loc_1402A4BA7
 * 00000001402A4B8A: mov     edx, r8d
 * 00000001402A4B8D: shr     rdx, 3
 * 00000001402A4B91: xor     rbx, [r9]
 * 00000001402A4B94: mov     ecx, r10d
 * 00000001402A4B97: rol     rbx, cl
 * 00000001402A4B9A: add     r9, 8
 * 00000001402A4B9E: add     r8d, 0FFFFFFF8h
 * 00000001402A4BA2: sub     rdx, r12
 * 00000001402A4BA5: jnz     short loc_1402A4B91
 * 00000001402A4BA7: test    r8d, r8d
 * 00000001402A4BAA: jz      short loc_1402A4BC2
 * 00000001402A4BAC: movzx   eax, byte ptr [r9]
 * 00000001402A4BB0: mov     ecx, r10d
 * 00000001402A4BB3: xor     rbx, rax
 * 00000001402A4BB6: add     r9, r12
 * 00000001402A4BB9: rol     rbx, cl
 * 00000001402A4BBC: add     r8d, 0FFFFFFFFh
 * 00000001402A4BC0: jnz     short loc_1402A4BAC
 * 00000001402A4BC2: mov     rax, rbx
 * 00000001402A4BC5: jmp     short loc_1402A4BC9
 * 00000001402A4BC7: xor     ebx, eax
 * 00000001402A4BC9: shr     rax, 1Fh
 * 00000001402A4BCD: test    rax, rax
 * 00000001402A4BD0: jnz     short loc_1402A4BC7
 * 00000001402A4BD2: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A4BD6: btr     ebx, 1Fh
 * 00000001402A4BDA: mov     r12d, r13d
 * 00000001402A4BDD: cmp     ebx, [r8+14h]
 * 00000001402A4BE1: jz      loc_1402A4D27
 * 00000001402A4BE7: cmp     [r8], r13d
 * 00000001402A4BEA: jnz     short loc_1402A4BF9
 * 00000001402A4BEC: cmp     [r8+18h], r13d
 * 00000001402A4BF0: mov     eax, 1
 * 00000001402A4BF5: cmovnz  r12d, eax
 * 00000001402A4BF9: mov     ecx, [r8+10h]
 * 00000001402A4BFD: mov     rdx, [r8+8]
 * 00000001402A4C01: test    rcx, rcx
 * 00000001402A4C04: jz      loc_1402A4CB9
 * 00000001402A4C0A: mov     eax, [rsi+7DCh]
 * 00000001402A4C10: mov     r9d, 40h ; '@'
 * 00000001402A4C16: test    r9b, al
 * 00000001402A4C19: jz      loc_1402A4CB9
 * 00000001402A4C1F: mov     r15, cr8
 * 00000001402A4C23: lea     eax, [r9-3Eh]
 * 00000001402A4C27: mov     cr8, rax
 * 00000001402A4C2B: mov     r14, rdx
 * 00000001402A4C2E: lea     rax, [rcx-1]
 * 00000001402A4C32: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402A4C39: add     rax, rdx
 * 00000001402A4C3C: or      rax, 0FFFh
 * 00000001402A4C42: mov     [rbp+2150h+var_2110], rax
 * 00000001402A4C46: lea     r13, [r14-1]
 * 00000001402A4C4A: mov     rax, [rsi+450h]
 * 00000001402A4C51: xor     edx, edx
 * 00000001402A4C53: mov     rcx, r14
 * 00000001402A4C56: call    KeGuardDispatchICall
 * 00000001402A4C5B: cmp     eax, 0C000022Dh
 * 00000001402A4C60: jnz     short loc_1402A4C8B
 * 00000001402A4C62: test    r12d, r12d
 * 00000001402A4C65: jnz     short loc_1402A4CAA
 * 00000001402A4C67: lea     eax, [r12+1]
 * 00000001402A4C6C: cmp     r15b, al
 * 00000001402A4C6F: ja      short loc_1402A4C8F
 * 00000001402A4C71: movzx   eax, r15b
 * 00000001402A4C75: mov     cr8, rax
 * 00000001402A4C79: mov     al, [r14]
 * 00000001402A4C7C: mov     rax, cr8
 * 00000001402A4C80: lea     eax, [r12+2]
 * 00000001402A4C85: mov     cr8, rax
 * 00000001402A4C89: jmp     short loc_1402A4C4A
 * 00000001402A4C8B: test    eax, eax
 * 00000001402A4C8D: js      short loc_1402A4CAA
 * 00000001402A4C8F: mov     eax, 1000h
 * 00000001402A4C94: add     r14, rax
 * 00000001402A4C97: add     r13, rax
 * 00000001402A4C9A: cmp     r13, [rbp+2150h+var_2110]
 * 00000001402A4C9E: jnz     short loc_1402A4C4A
 * 00000001402A4CA0: movzx   eax, r15b
 * 00000001402A4CA4: mov     cr8, rax
 * 00000001402A4CA8: jmp     short loc_1402A4D27
 * 00000001402A4CAA: mov     r8, [rbp+2150h+var_2138]
 * 00000001402A4CAE: xor     r13d, r13d
 * 00000001402A4CB1: movzx   eax, r15b
 * 00000001402A4CB5: mov     cr8, rax
 * 00000001402A4CB9: mov     eax, [r8+14h]
 * 00000001402A4CBD: cmp     [rsi+750h], r13d
 * 00000001402A4CC4: jnz     short loc_1402A4CD6
 * 00000001402A4CC6: mov     ecx, ebx
 * 00000001402A4CC8: xor     rcx, rax
 * 00000001402A4CCB: mov     rax, [rsi+548h]
 * 00000001402A4CD2: mov     [rax+18h], rcx
 * 00000001402A4CD6: mov     rcx, [r8+8]
 * 00000001402A4CDA: cmp     [rsi+750h], r13d
 * 00000001402A4CE1: jnz     short loc_1402A4D27
 * 00000001402A4CE3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A4CED: add     rax, rsi
 * 00000001402A4CF0: mov     [rsi+758h], rax
 * 00000001402A4CF7: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4D01: add     rax, r8
 * 00000001402A4D04: mov     [rsi+760h], rax
 * 00000001402A4D0B: movsxd  rax, dword ptr [r8]
 * 00000001402A4D0E: mov     [rsi+768h], rax
 * 00000001402A4D15: mov     eax, 1
 * 00000001402A4D1A: mov     [rsi+770h], rcx
 * 00000001402A4D21: mov     [rsi+750h], eax
 * 00000001402A4D27: mov     rcx, [rsi+4F8h]
 * 00000001402A4D2E: mov     r15, cr8
 * 00000001402A4D32: mov     eax, 0Fh
 * 00000001402A4D37: mov     cr8, rax
 * 00000001402A4D3B: mov     rax, [rsi+140h]
 * 00000001402A4D42: call    KeGuardDispatchICall
 * 00000001402A4D47: mov     rax, [rsi+5C8h]
 * 00000001402A4D4E: mov     r14, [rbp+2150h+var_2138]
 * 00000001402A4D52: mov     rcx, [rax]
 * 00000001402A4D55: mov     eax, [rcx]
 * 00000001402A4D57: lea     rbx, [rcx+10h]
 * 00000001402A4D5B: mov     r12b, [rcx+0Ch]
 * 00000001402A4D5F: lea     rcx, [rax+rax*2]
 * 00000001402A4D63: lea     r13, [rbx+rcx*8]
 * 00000001402A4D67: mov     r8d, 18h
 * 00000001402A4D6D: lea     r9, [r14+18h]
 * 00000001402A4D71: mov     r10, rbx
 * 00000001402A4D74: mov     rcx, [r10]
 * 00000001402A4D77: add     r10, 8
 * 00000001402A4D7B: mov     rax, [r9]
 * 00000001402A4D7E: add     r9, 8
 * 00000001402A4D82: cmp     rcx, rax
 * 00000001402A4D85: jnz     short loc_1402A4DB7
 * 00000001402A4D87: add     r8d, 0FFFFFFF8h
 * 00000001402A4D8B: cmp     r8d, 8
 * 00000001402A4D8F: jnb     short loc_1402A4D74
 * 00000001402A4D91: test    r8d, r8d
 * 00000001402A4D94: jz      short loc_1402A4DC0
 * 00000001402A4D96: mov     r11d, 1
 * 00000001402A4D9C: movzx   edx, byte ptr [r10]
 * 00000001402A4DA0: add     r10, r11
 * 00000001402A4DA3: movzx   eax, byte ptr [r9]
 * 00000001402A4DA7: add     r9, r11
 * 00000001402A4DAA: cmp     rdx, rax
 * 00000001402A4DAD: jnz     short loc_1402A4DB7
 * 00000001402A4DAF: add     r8d, 0FFFFFFFFh
 * 00000001402A4DB3: jz      short loc_1402A4DC0
 * 00000001402A4DB5: jmp     short loc_1402A4D9C
 * 00000001402A4DB7: add     rbx, 18h
 * 00000001402A4DBB: cmp     rbx, r13
 * 00000001402A4DBE: jb      short loc_1402A4D67
 * 00000001402A4DC0: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A4DC4: mov     rcx, [rsi+4F8h]
 * 00000001402A4DCB: mov     rax, [rsi+180h]
 * 00000001402A4DD2: call    KeGuardDispatchICall
 * 00000001402A4DD7: movzx   eax, r15b
 * 00000001402A4DDB: mov     cr8, rax
 * 00000001402A4DDF: xor     ecx, ecx
 * 00000001402A4DE1: test    r12b, r12b
 * 00000001402A4DE4: jz      loc_1402A4E99
 * 00000001402A4DEA: mov     eax, [rsi+7DCh]
 * 00000001402A4DF0: lea     edx, [rcx+10h]
 * 00000001402A4DF3: test    dl, al
 * 00000001402A4DF5: jz      short loc_1402A4E47
 * 00000001402A4DF7: cmp     [rsi+750h], ecx
 * 00000001402A4DFD: jnz     short loc_1402A4E47
 * 00000001402A4DFF: mov     rcx, [rbp+2150h+var_2138]
 * 00000001402A4E03: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A4E0D: add     rax, rsi
 * 00000001402A4E10: mov     [rsi+758h], rax
 * 00000001402A4E17: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4E21: add     rax, rcx
 * 00000001402A4E24: mov     [rsi+760h], rax
 * 00000001402A4E2B: movsxd  rax, dword ptr [rcx]
 * 00000001402A4E2E: lea     ecx, [rdx-0Fh]
 * 00000001402A4E31: mov     [rsi+768h], rax
 * 00000001402A4E38: mov     [rsi+770h], rcx
 * 00000001402A4E3F: mov     [rsi+750h], ecx
 * 00000001402A4E45: jmp     short loc_1402A4E4C
 * 00000001402A4E47: mov     ecx, 1
 * 00000001402A4E4C: cmp     [r14+18h], rcx
 * 00000001402A4E50: jnz     short loc_1402A4E9E
 * 00000001402A4E52: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A4E56: xor     r13d, r13d
 * 00000001402A4E59: mov     rcx, [rsi+4F8h]
 * 00000001402A4E60: mov     r15, cr8
 * 00000001402A4E64: mov     eax, 0Fh
 * 00000001402A4E69: mov     cr8, rax
 * 00000001402A4E6D: mov     rax, [rsi+140h]
 * 00000001402A4E74: call    KeGuardDispatchICall
 * 00000001402A4E79: mov     rax, [rsi+5C8h]
 * 00000001402A4E80: mov     rdx, r13
 * 00000001402A4E83: mov     rcx, [rax]
 * 00000001402A4E86: mov     eax, [rcx]
 * 00000001402A4E88: lea     rbx, [rcx+10h]
 * 00000001402A4E8C: lea     rcx, [rax+rax*2]
 * 00000001402A4E90: lea     r14, [rbx+rcx*8]
 * 00000001402A4E94: jmp     loc_1402A4F22
 * 00000001402A4E99: mov     ecx, 1
 * 00000001402A4E9E: cmp     rbx, r13
 * 00000001402A4EA1: jnz     short loc_1402A4E52
 * 00000001402A4EA3: mov     r12, [rbp+2150h+var_2138]
 * 00000001402A4EA7: xor     r13d, r13d
 * 00000001402A4EAA: cmp     [rsi+750h], r13d
 * 00000001402A4EB1: jnz     short loc_1402A4E59
 * 00000001402A4EB3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A4EBD: add     rax, rsi
 * 00000001402A4EC0: mov     [rsi+758h], rax
 * 00000001402A4EC7: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4ED1: add     rax, r12
 * 00000001402A4ED4: mov     [rsi+760h], rax
 * 00000001402A4EDB: movsxd  rax, dword ptr [r12]
 * 00000001402A4EDF: mov     [rsi+768h], rax
 * 00000001402A4EE6: mov     [rsi+770h], rbx
 * 00000001402A4EED: mov     [rsi+750h], ecx
 * 00000001402A4EF3: jmp     loc_1402A4E59
 * 00000001402A4EF8: mov     rcx, [rbx+8]
 * 00000001402A4EFC: cmp     rcx, rdx
 * 00000001402A4EFF: jb      short loc_1402A4F2B
 * 00000001402A4F01: mov     rax, rcx
 * 00000001402A4F04: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001402A4F0A: cmp     rax, rcx
 * 00000001402A4F0D: jnz     short loc_1402A4F2B
 * 00000001402A4F0F: mov     eax, [rbx+10h]
 * 00000001402A4F12: add     rax, rcx
 * 00000001402A4F15: cmp     rax, rcx
 * 00000001402A4F18: jbe     short loc_1402A4F2B
 * 00000001402A4F1A: cmp     rax, rdx
 * 00000001402A4F1D: jz      short loc_1402A4F2B
 * 00000001402A4F1F: mov     rdx, rax
 * 00000001402A4F22: add     rbx, 18h
 * 00000001402A4F26: cmp     rbx, r14
 * 00000001402A4F29: jb      short loc_1402A4EF8
 * 00000001402A4F2B: mov     rcx, [rsi+4F8h]
 * 00000001402A4F32: mov     rax, [rsi+180h]
 * 00000001402A4F39: call    KeGuardDispatchICall
 * 00000001402A4F3E: movzx   eax, r15b
 * 00000001402A4F42: mov     cr8, rax
 * 00000001402A4F46: cmp     rbx, r14
 * 00000001402A4F49: jz      loc_1402A00F1
 * 00000001402A4F4F: mov     r15d, 0Ch
 * 00000001402A4F55: mov     edx, [rbp+2150h+var_2150]
 * 00000001402A4F58: mov     r14d, 8000h
 * 00000001402A4F5E: cmp     [rsi+750h], r13d
 * 00000001402A4F65: jnz     loc_14029B172
 * 00000001402A4F6B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A4F75: add     rax, rsi
 * 00000001402A4F78: mov     [rsi+758h], rax
 * 00000001402A4F7F: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A4F89: add     rax, r12
 * 00000001402A4F8C: mov     [rsi+760h], rax
 * 00000001402A4F93: movsxd  rax, dword ptr [r12]
 * 00000001402A4F97: mov     [rsi+768h], rax
 * 00000001402A4F9E: mov     [rsi+770h], rbx
 * 00000001402A4FA5: jmp     loc_1402A4AB6
 * 00000001402A4FAA: xor     r13d, r13d
 * 00000001402A4FAD: or      r12d, 0FFFFFFFFh
 * 00000001402A4FB1: mov     [rsi+680h], edx
 * 00000001402A4FB7: cmp     [rbp+2150h+var_2058], r13d
 * 00000001402A4FBE: jz      short loc_1402A5014
 * 00000001402A4FC0: mov     rax, gs:188h
 * 00000001402A4FC9: lea     rcx, [rbp+2150h+var_17A0]
 * 00000001402A4FD0: mov     rbx, [rax+0B8h]
 * 00000001402A4FD7: mov     rax, [rsi+188h]
 * 00000001402A4FDE: call    KeGuardDispatchICall
 * 00000001402A4FE3: mov     rax, [rsi+428h]
 * 00000001402A4FEA: lea     rcx, [rbp+2150h+var_1BF0]
 * 00000001402A4FF1: call    KeGuardDispatchICall
 * 00000001402A4FF6: mov     rax, [rsi+398h]
 * 00000001402A4FFD: mov     rcx, rbx
 * 00000001402A5000: call    KeGuardDispatchICall
 * 00000001402A5005: mov     rax, [rsi+3A8h]
 * 00000001402A500C: mov     rcx, rbx
 * 00000001402A500F: call    KeGuardDispatchICall
 * 00000001402A5014: cmp     [rbp+2150h+var_2118], r13d
 * 00000001402A5018: jz      loc_1402A50C5
 * 00000001402A501E: test    [rsi+7D8h], r14d
 * 00000001402A5025: jnz     short loc_1402A5034
 * 00000001402A5027: cmp     [rsi+750h], r13d
 * 00000001402A502E: jnz     loc_1402A50C5
 * 00000001402A5034: mov     rbx, [rsi+7D0h]
 * 00000001402A503B: lea     rdx, [rbp+2150h+var_1BF0]
 * 00000001402A5042: mov     [rsi+7D0h], r13
 * 00000001402A5049: mov     rcx, rbx
 * 00000001402A504C: mov     rax, [rsi+288h]
 * 00000001402A5053: call    KeGuardDispatchICall
 * 00000001402A5058: mov     eax, [rsi+7D8h]
 * 00000001402A505E: mov     r14d, 1
 * 00000001402A5064: test    r14b, al
 * 00000001402A5067: jz      short loc_1402A50AF
 * 00000001402A5069: and     eax, 0FFFFFFFEh
 * 00000001402A506C: mov     rcx, rbx
 * 00000001402A506F: mov     [rsi+7D8h], eax
 * 00000001402A5075: mov     rax, [rsi+270h]
 * 00000001402A507C: call    KeGuardDispatchICall
 * 00000001402A5081: mov     rbx, rax
 * 00000001402A5084: test    rax, rax
 * 00000001402A5087: jz      short loc_1402A50A8
 * 00000001402A5089: mov     rax, [rsi+290h]
 * 00000001402A5090: mov     rcx, rbx
 * 00000001402A5093: call    KeGuardDispatchICall
 * 00000001402A5098: mov     [rsi+7C0h], eax
 * 00000001402A509E: jmp     short loc_1402A50AF
 * 00000001402A50A0: xor     r13d, r13d
 * 00000001402A50A3: jmp     loc_1402A4FB1
 * 00000001402A50A8: mov     [rsi+7C0h], r12d
 * 00000001402A50AF: test    rbx, rbx
 * 00000001402A50B2: jz      short loc_1402A50CB
 * 00000001402A50B4: mov     rax, [rsi+278h]
 * 00000001402A50BB: mov     rcx, rbx
 * 00000001402A50BE: call    KeGuardDispatchICall
 * 00000001402A50C3: jmp     short loc_1402A50CB
 * 00000001402A50C5: mov     r14d, 1
 * 00000001402A50CB: mov     eax, [rsi+7D8h]
 * 00000001402A50D1: mov     ecx, 800008h
 * 00000001402A50D6: and     eax, ecx
 * 00000001402A50D8: cmp     eax, ecx
 * 00000001402A50DA: jnz     loc_1402A54C4
 * 00000001402A50E0: mov     eax, [rsi+7DCh]
 * 00000001402A50E6: mov     r9d, [rsi+668h]
 * 00000001402A50ED: and     eax, r14d
 * 00000001402A50F0: mov     r10, [rsi+8A0h]
 * 00000001402A50F7: mov     r14d, [rsi+644h]
 * 00000001402A50FE: mov     r12, [rsi+840h]
 * 00000001402A5105: mov     [rbp+2150h+var_2118], r9d
 * 00000001402A5109: mov     [rbp+2150h+var_2110], r10
 * 00000001402A510D: jz      short loc_1402A5116
 * 00000001402A510F: mov     r12, [rsi+590h]
 * 00000001402A5116: mov     rax, [rsi+2B8h]
 * 00000001402A511D: mov     r11, [rsi+150h]
 * 00000001402A5124: mov     [rbp+2150h+var_2148], rax
 * 00000001402A5128: mov     rax, [rsi+330h]
 * 00000001402A512F: mov     [rbp+2150h+var_20E8], rax
 * 00000001402A5133: mov     [rbp+2150h+var_2080], r11
 * 00000001402A513A: rdtsc
 * 00000001402A513C: shl     rdx, 20h
 * 00000001402A5140: mov     rbx, 7010008004002001h
 * 00000001402A514A: or      rax, rdx
 * 00000001402A514D: mov     rcx, rax
 * 00000001402A5150: ror     rax, 3
 * 00000001402A5154: xor     rcx, rax
 * 00000001402A5157: mov     rax, rbx
 * 00000001402A515A: mul     rcx
 * 00000001402A515D: mov     rcx, rdi
 * 00000001402A5160: mov     r8, rdx
 * 00000001402A5163: mov     [rbp+2150h+var_1AC8], rdx
 * 00000001402A516A: xor     r8, rax
 * 00000001402A516D: mov     rax, 0ABCC77118461CEFDh
 * 00000001402A5177: mul     r8
 * 00000001402A517A: shr     rdx, 1Ah
 * 00000001402A517E: imul    rax, rdx, 5F5E100h
 * 00000001402A5185: sub     r8, rax
 * 00000001402A5188: sub     rcx, r8
 * 00000001402A518B: mov     [rbp+2150h+var_1F30], rcx
 * 00000001402A5192: test    dword ptr [rsi+7D8h], 4000000h
 * 00000001402A519C: jz      loc_1402A523F
 * 00000001402A51A2: rdtsc
 * 00000001402A51A4: shl     rdx, 20h
 * 00000001402A51A8: mov     r15, 0CCCCCCCCCCCCCCCDh
 * 00000001402A51B2: or      rax, rdx
 * 00000001402A51B5: mov     rdx, rax
 * 00000001402A51B8: ror     rax, 3
 * 00000001402A51BC: xor     rdx, rax
 * 00000001402A51BF: mov     rax, rbx
 * 00000001402A51C2: mul     rdx
 * 00000001402A51C5: mov     r8, rdx
 * 00000001402A51C8: mov     [rbp+2150h+var_1AC0], rdx
 * 00000001402A51CF: xor     r8, rax
 * 00000001402A51D2: mov     rax, r15
 * 00000001402A51D5: mul     r8
 * 00000001402A51D8: shr     rdx, 3
 * 00000001402A51DC: lea     rax, [rdx+rdx*4]
 * 00000001402A51E0: add     rax, rax
 * 00000001402A51E3: sub     r8, rax
 * 00000001402A51E6: mov     eax, 2
 * 00000001402A51EB: cmp     r8, rax
 * 00000001402A51EE: jnb     short loc_1402A523F
 * 00000001402A51F0: rdtsc
 * 00000001402A51F2: shl     rdx, 20h
 * 00000001402A51F6: or      rax, rdx
 * 00000001402A51F9: mov     rdx, rax
 * 00000001402A51FC: ror     rax, 3
 * 00000001402A5200: xor     rdx, rax
 * 00000001402A5203: mov     rax, rbx
 * 00000001402A5206: mul     rdx
 * 00000001402A5209: mov     r8, rdx
 * 00000001402A520C: mov     [rbp+2150h+var_1AB8], rdx
 * 00000001402A5213: xor     r8, rax
 * 00000001402A5216: mov     rax, r15
 * 00000001402A5219: mul     r8
 * 00000001402A521C: shr     rdx, 3
 * 00000001402A5220: lea     rax, [rdx+rdx*4]
 * 00000001402A5224: mov     edx, 1
 * 00000001402A5229: add     rax, rax
 * 00000001402A522C: sub     r8, rax
 * 00000001402A522F: add     r8, rdx
 * 00000001402A5232: imul    rcx, r8
 * 00000001402A5236: mov     [rbp+2150h+var_1F30], rcx
 * 00000001402A523D: jmp     short loc_1402A5244
 * 00000001402A523F: mov     edx, 1
 * 00000001402A5244: mov     eax, [rsi+7D8h]
 * 00000001402A524A: mov     ecx, 2
 * 00000001402A524F: test    cl, al
 * 00000001402A5251: mov     rbx, r13
 * 00000001402A5254: mov     r15, r13
 * 00000001402A5257: cmovz   r14d, r9d
 * 00000001402A525B: test    al, al
 * 00000001402A525D: jns     loc_1402A5349
 * 00000001402A5263: mov     r13d, edx
 * 00000001402A5266: rdtsc
 * 00000001402A5268: shl     rdx, 20h
 * 00000001402A526C: mov     r8d, 1
 * 00000001402A5272: or      rax, rdx
 * 00000001402A5275: mov     rcx, rax
 * 00000001402A5278: ror     rax, 3
 * 00000001402A527C: xor     rcx, rax
 * 00000001402A527F: mov     rax, 7010008004002001h
 * 00000001402A5289: mul     rcx
 * 00000001402A528C: mov     ecx, 11Ah
 * 00000001402A5291: mov     rbx, rdx
 * 00000001402A5294: mov     [rbp+2150h+var_1AB0], rdx
 * 00000001402A529B: xor     rbx, rax
 * 00000001402A529E: lea     rax, [rsi+8C8h]
 * 00000001402A52A5: mov     r15, rbx
 * 00000001402A52A8: mov     r10, rbx
 * 00000001402A52AB: xor     r15, rsi
 * 00000001402A52AE: xor     [rax], r10
 * 00000001402A52B1: lea     rax, [rax-8]
 * 00000001402A52B5: ror     r10, cl
 * 00000001402A52B8: sub     ecx, r8d
 * 00000001402A52BB: jnz     short loc_1402A52AE
 * 00000001402A52BD: lea     r8, [r9-8D0h]
 * 00000001402A52C4: mov     [rbp+2150h+var_20D0], r9
 * 00000001402A52CB: shr     r8, 3
 * 00000001402A52CF: mov     r11, r9
 * 00000001402A52D2: test    r8d, r8d
 * 00000001402A52D5: jz      short loc_1402A5312
 * 00000001402A52D7: add     rsi, 8C8h
 * 00000001402A52DE: movsxd  r9, r8d
 * 00000001402A52E1: lea     r9, [rsi+r9*8]
 * 00000001402A52E5: lea     esi, [rcx+1]
 * 00000001402A52E8: mov     rdx, [r9]
 * 00000001402A52EB: lea     rax, [r15+r15]
 * 00000001402A52EF: mov     ecx, r8d
 * 00000001402A52F2: lea     r9, [r9-8]
 * 00000001402A52F6: ror     rdx, cl
 * 00000001402A52F9: mov     r15, rdx
 * 00000001402A52FC: xor     r15, rax
 * 00000001402A52FF: sub     r8d, esi
 * 00000001402A5302: jnz     short loc_1402A52E8
 * 00000001402A5304: mov     r11, [rbp+2150h+var_20D0]
 * 00000001402A530B: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A530F: mov     r9d, r11d
 * 00000001402A5312: mov     ecx, r14d
 * 00000001402A5315: lea     rdx, [r11+rsi]
 * 00000001402A5319: sub     ecx, r9d
 * 00000001402A531C: shr     ecx, 3
 * 00000001402A531F: test    ecx, ecx
 * 00000001402A5321: jz      short loc_1402A533E
 * 00000001402A5323: lea     rdx, [rdx+rcx*8]
 * 00000001402A5327: mov     eax, 1
 * 00000001402A532C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001402A5330: xor     [rdx], r10
 * 00000001402A5333: lea     rdx, [rdx-8]
 * 00000001402A5337: ror     r10, cl
 * 00000001402A533A: sub     ecx, eax
 * 00000001402A533C: jnz     short loc_1402A5330
 * 00000001402A533E: mov     r10, [rbp+2150h+var_2110]
 * 00000001402A5342: mov     r11, [rbp+2150h+var_2080]
 * 00000001402A5349: test    r10, r10
 * 00000001402A534C: jz      short loc_1402A536E
 * 00000001402A534E: mov     rax, [rbp+2150h+var_20E8]
 * 00000001402A5352: lea     r8, [rbp+2150h+var_1F30]
 * 00000001402A5359: mov     r9, r11
 * 00000001402A535C: mov     [rsp+1120h+BugCheckParameter4], r10
 * 00000001402A5361: mov     edx, r14d
 * 00000001402A5364: mov     rcx, rsi
 * 00000001402A5367: call    KeGuardDispatchICall
 * 00000001402A536C: jmp     short loc_1402A53A6
 * 00000001402A536E: xor     edx, edx
 * 00000001402A5370: test    r12, r12
 * 00000001402A5373: jnz     short loc_1402A5388
 * 00000001402A5375: lea     r8, [rbp+2150h+var_1F30]
 * 00000001402A537C: xor     ecx, ecx
 * 00000001402A537E: mov     rax, r11
 * 00000001402A5381: call    KeGuardDispatchICall
 * 00000001402A5386: jmp     short loc_1402A53A6
 * 00000001402A5388: lea     rax, [rbp+2150h+var_1F30]
 * 00000001402A538F: xor     r9d, r9d
 * 00000001402A5392: mov     [rsp+1120h+BugCheckParameter4], rax
 * 00000001402A5397: xor     r8d, r8d
 * 00000001402A539A: mov     rax, [rbp+2150h+var_2148]
 * 00000001402A539E: mov     rcx, r12
 * 00000001402A53A1: call    KeGuardDispatchICall
 * 00000001402A53A6: test    r13d, r13d
 * 00000001402A53A9: jz      loc_1402A54C1
 * 00000001402A53AF: mov     r9, rbx
 * 00000001402A53B2: lea     rax, [rsi+8C8h]
 * 00000001402A53B9: xor     r9, rsi
 * 00000001402A53BC: mov     ecx, 11Ah
 * 00000001402A53C1: xor     r13d, r13d
 * 00000001402A53C4: lea     r10d, [r13+1]
 * 00000001402A53C8: xor     [rax], rbx
 * 00000001402A53CB: lea     rax, [rax-8]
 * 00000001402A53CF: ror     rbx, cl
 * 00000001402A53D2: sub     ecx, r10d
 * 00000001402A53D5: jnz     short loc_1402A53C8
 * 00000001402A53D7: mov     r12d, [rbp+2150h+var_2118]
 * 00000001402A53DB: mov     r11d, r12d
 * 00000001402A53DE: lea     r8, [r12-8D0h]
 * 00000001402A53E6: shr     r8, 3
 * 00000001402A53EA: test    r8d, r8d
 * 00000001402A53ED: jz      short loc_1402A5424
 * 00000001402A53EF: movsxd  r10, r8d
 * 00000001402A53F2: lea     r11d, [rcx+1]
 * 00000001402A53F6: add     r10, 119h
 * 00000001402A53FD: lea     r10, [rsi+r10*8]
 * 00000001402A5401: mov     rdx, [r10]
 * 00000001402A5404: lea     rax, [r9+r9]
 * 00000001402A5408: mov     ecx, r8d
 * 00000001402A540B: lea     r10, [r10-8]
 * 00000001402A540F: ror     rdx, cl
 * 00000001402A5412: mov     r9, rdx
 * 00000001402A5415: xor     r9, rax
 * 00000001402A5418: sub     r8d, r11d
 * 00000001402A541B: jnz     short loc_1402A5401
 * 00000001402A541D: mov     r11, r12
 * 00000001402A5420: lea     r10d, [r8+1]
 * 00000001402A5424: sub     r14d, r12d
 * 00000001402A5427: lea     rcx, [r11+rsi]
 * 00000001402A542B: shr     r14d, 3
 * 00000001402A542F: test    r14d, r14d
 * 00000001402A5432: jz      short loc_1402A5450
 * 00000001402A5434: mov     edx, r14d
 * 00000001402A5437: dec     rdx
 * 00000001402A543A: lea     rdx, [rcx+rdx*8]
 * 00000001402A543E: xor     [rdx], rbx
 * 00000001402A5441: mov     ecx, r14d
 * 00000001402A5444: ror     rbx, cl
 * 00000001402A5447: lea     rdx, [rdx-8]
 * 00000001402A544B: sub     r14d, r10d
 * 00000001402A544E: jnz     short loc_1402A543E
 * 00000001402A5450: cmp     r9, r15
 * 00000001402A5453: jz      short loc_1402A54C4
 * 00000001402A5455: mov     rax, [rsi+548h]
 * 00000001402A545C: mov     ecx, [rsi+644h]
 * 00000001402A5462: mov     [rax], rsi
 * 00000001402A5465: mov     [rax+10h], ecx
 * 00000001402A5468: cmp     [rsi+750h], r13d
 * 00000001402A546F: jnz     short loc_1402A54C4
 * 00000001402A5471: mov     rax, [rsi+548h]
 * 00000001402A5478: mov     rcx, r9
 * 00000001402A547B: xor     rcx, r15
 * 00000001402A547E: mov     [rax+18h], rcx
 * 00000001402A5482: cmp     [rsi+750h], r13d
 * 00000001402A5489: jnz     short loc_1402A54C4
 * 00000001402A548B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A5495: add     rax, rsi
 * 00000001402A5498: mov     [rsi+758h], rax
 * 00000001402A549F: mov     [rsi+760h], r13
 * 00000001402A54A6: mov     qword ptr [rsi+768h], 10Eh
 * 00000001402A54B1: mov     [rsi+770h], r9
 * 00000001402A54B8: mov     [rsi+750h], r10d
 * 00000001402A54BF: jmp     short loc_1402A54C4
 * 00000001402A54C1: xor     r13d, r13d
 * 00000001402A54C4: mov     eax, [rsi+7A8h]
 * 00000001402A54CA: mov     r12d, 1
 * 00000001402A54D0: cmp     eax, 0Bh
 * 00000001402A54D3: jz      loc_1402A9C83
 * 00000001402A54D9: cmp     eax, r12d
 * 00000001402A54DC: jz      loc_1402A9C83
 * 00000001402A54E2: cmp     [rsi+750h], r13d
 * 00000001402A54E9: jnz     loc_1402A9C87
 * 00000001402A54EF: mov     rax, [rsi+7B0h]
 * 00000001402A54F6: mov     rcx, [rax]
 * 00000001402A54F9: cmp     rcx, [rsi+7B8h]
 * 00000001402A5500: jz      loc_1402A9A52
 * 00000001402A5506: mov     ecx, [rsi+7C0h]
 * 00000001402A550C: or      r15d, 0FFFFFFFFh
 * 00000001402A5510: mov     rbx, rsi
 * 00000001402A5513: mov     [rbp+2150h+var_20C8], rbx
 * 00000001402A551A: cmp     ecx, r15d
 * 00000001402A551D: jz      short loc_1402A5530
 * 00000001402A551F: mov     rax, [rsi+268h]
 * 00000001402A5526: call    KeGuardDispatchICall
 * 00000001402A552B: mov     r14, rax
 * 00000001402A552E: jmp     short loc_1402A5533
 * 00000001402A5530: mov     r14, r13
 * 00000001402A5533: test    r14, r14
 * 00000001402A5536: jnz     short loc_1402A5552
 * 00000001402A5538: mov     rax, [rsi+270h]
 * 00000001402A553F: xor     ecx, ecx
 * 00000001402A5541: call    KeGuardDispatchICall
 * 00000001402A5546: mov     r14, rax
 * 00000001402A5549: test    rax, rax
 * 00000001402A554C: jz      loc_1402A9C83
 * 00000001402A5552: mov     rax, [rsi+280h]
 * 00000001402A5559: lea     rdx, [rbp+2150h+var_1BF0]
 * 00000001402A5560: mov     rcx, r14
 * 00000001402A5563: call    KeGuardDispatchICall
 * 00000001402A5568: mov     r15d, eax
 * 00000001402A556B: test    eax, eax
 * 00000001402A556D: jns     short loc_1402A5580
 * 00000001402A556F: mov     rax, [rsi+278h]
 * 00000001402A5576: mov     rcx, r14
 * 00000001402A5579: call    KeGuardDispatchICall
 * 00000001402A557E: jmp     short loc_1402A55E2
 * 00000001402A5580: mov     [rsi+7D0h], r14
 * 00000001402A5587: mov     rax, [rsi+2A8h]
 * 00000001402A558E: call    KeGuardDispatchICall
 * 00000001402A5593: mov     r14, rax
 * 00000001402A5596: mov     rax, [rsi+2C8h]
 * 00000001402A559D: mov     rcx, r14
 * 00000001402A55A0: call    KeGuardDispatchICall
 * 00000001402A55A5: mov     rdx, rax
 * 00000001402A55A8: test    rax, rax
 * 00000001402A55AB: jnz     short loc_1402A55B2
 * 00000001402A55AD: lea     ecx, [rax+4]
 * 00000001402A55B0: jmp     short loc_1402A55C4
 * 00000001402A55B2: mov     rax, [rsi+2D8h]
 * 00000001402A55B9: mov     rcx, r14
 * 00000001402A55BC: call    KeGuardDispatchICall
 * 00000001402A55C1: mov     ecx, r13d
 * 00000001402A55C4: mov     eax, [rsi+7DCh]
 * 00000001402A55CA: mov     r15d, r13d
 * 00000001402A55CD: and     eax, 0FFFFFFFBh
 * 00000001402A55D0: or      eax, ecx
 * 00000001402A55D2: mov     [rsi+7DCh], eax
 * 00000001402A55D8: add     dword ptr [rsi+688h], 10000h
 * 00000001402A55E2: test    r15d, r15d
 * 00000001402A55E5: js      loc_1402A9C83
 * 00000001402A55EB: mov     rax, [rsi+290h]
 * 00000001402A55F2: mov     rcx, [rsi+7D0h]
 * 00000001402A55F9: call    KeGuardDispatchICall
 * 00000001402A55FE: test    eax, eax
 * 00000001402A5600: jnz     loc_1402A93F4
 * 00000001402A5606: mov     rax, [rsi+530h]
 * 00000001402A560D: lea     rdi, [rbp+2150h+var_1D08]
 * 00000001402A5614: mov     ecx, 20h ; ' '
 * 00000001402A5619: mov     [rbp+2150h+var_20F8], 2
 * 00000001402A5621: add     rax, rcx
 * 00000001402A5624: mov     r15, r13
 * 00000001402A5627: mov     [rbp+2150h+var_1D08], rax
 * 00000001402A562E: mov     rax, [rsi+528h]
 * 00000001402A5635: add     rax, rcx
 * 00000001402A5638: mov     [rbp+2150h+var_1D00], rax
 * 00000001402A563F: mov     rax, [rsi+7B0h]
 * 00000001402A5646: mov     [rbp+2150h+var_20E8], rax
 * 00000001402A564A: mov     rax, [rsi+7B8h]
 * 00000001402A5651: mov     rsi, [rbp+2150h+var_20E8]
 * 00000001402A5655: mov     rbx, rax
 * 00000001402A5658: mov     [rbp+2150h+var_2148], rax
 * 00000001402A565C: mov     r12, [rdi]
 * 00000001402A565F: xor     r15, rsi
 * 00000001402A5662: mov     r11d, r15d
 * 00000001402A5665: mov     [rbp+2150h+var_20D0], r12
 * 00000001402A566C: and     r11d, 3Fh
 * 00000001402A5670: mov     [rbp+2150h+var_2130], r15
 * 00000001402A5674: mov     r13, [r12]
 * 00000001402A5678: mov     r14d, [r12+10h]
 * 00000001402A567D: mov     r9, r13
 * 00000001402A5680: mov     r10d, r14d
 * 00000001402A5683: mov     [rbp+2150h+var_2110], r13
 * 00000001402A5687: shl     r10d, 2
 * 00000001402A568B: mov     rax, r13
 * 00000001402A568E: mov     ecx, r10d
 * 00000001402A5691: add     rcx, r13
 * 00000001402A5694: cmp     r13, rcx
 * 00000001402A5697: jnb     short loc_1402A56A9
 * 00000001402A5699: mov     edx, 40h ; '@'
 * 00000001402A569E: prefetchnta byte ptr [rax]
 * 00000001402A56A1: add     rax, rdx
 * 00000001402A56A4: cmp     rax, rcx
 * 00000001402A56A7: jb      short loc_1402A569E
 * 00000001402A56A9: mov     r8, r15
 * 00000001402A56AC: mov     r15d, r10d
 * 00000001402A56AF: shr     r15d, 7
 * 00000001402A56B3: test    r15d, r15d
 * 00000001402A56B6: jz      short loc_1402A5732
 * 00000001402A56B8: mov     rsi, [rbp+2150h+var_2130]
 * 00000001402A56BC: mov     r12, 7010008004002001h
 * 00000001402A56C6: mov     edx, 8
 * 00000001402A56CB: lea     ebx, [rdx-7]
 * 00000001402A56CE: mov     rax, [r9]
 * 00000001402A56D1: mov     ecx, r11d
 * 00000001402A56D4: xor     rax, r8
 * 00000001402A56D7: mov     r8, [r9+8]
 * 00000001402A56DB: rol     rax, cl
 * 00000001402A56DE: add     r9, 10h
 * 00000001402A56E2: xor     r8, rax
 * 00000001402A56E5: rol     r8, cl
 * 00000001402A56E8: sub     rdx, rbx
 * 00000001402A56EB: jnz     short loc_1402A56CE
 * 00000001402A56ED: mov     rcx, r9
 * 00000001402A56F0: sub     rcx, r13
 * 00000001402A56F3: xor     rcx, rsi
 * 00000001402A56F6: mov     rax, rcx
 * 00000001402A56F9: rol     rax, 11h
 * 00000001402A56FD: xor     rcx, rax
 * 00000001402A5700: mov     rax, r12
 * 00000001402A5703: mul     rcx
 * 00000001402A5706: xor     eax, edx
 * 00000001402A5708: mov     [rbp+2150h+var_1AA8], rdx
 * 00000001402A570F: xor     r11d, eax
 * 00000001402A5712: mov     rax, rbx
 * 00000001402A5715: and     r11d, 3Fh
 * 00000001402A5719: cmovz   r11d, eax
 * 00000001402A571D: add     r15d, 0FFFFFFFFh
 * 00000001402A5721: jnz     short loc_1402A56C6
 * 00000001402A5723: mov     r12, [rbp+2150h+var_20D0]
 * 00000001402A572A: mov     rsi, [rbp+2150h+var_20E8]
 * 00000001402A572E: mov     rbx, [rbp+2150h+var_2148]
 * 00000001402A5732: and     r10d, 7Fh
 * 00000001402A5736: mov     r15d, 1
 * 00000001402A573C: cmp     r10d, 8
 * 00000001402A5740: jb      short loc_1402A575F
 * 00000001402A5742: mov     edx, r10d
 * 00000001402A5745: shr     rdx, 3
 * 00000001402A5749: xor     r8, [r9]
 * 00000001402A574C: mov     ecx, r11d
 * 00000001402A574F: rol     r8, cl
 * 00000001402A5752: add     r9, 8
 * 00000001402A5756: add     r10d, 0FFFFFFF8h
 * 00000001402A575A: sub     rdx, r15
 * 00000001402A575D: jnz     short loc_1402A5749
 * 00000001402A575F: test    r10d, r10d
 * 00000001402A5762: jz      short loc_1402A577A
 * 00000001402A5764: movzx   eax, byte ptr [r9]
 * 00000001402A5768: mov     ecx, r11d
 * 00000001402A576B: xor     r8, rax
 * 00000001402A576E: add     r9, r15
 * 00000001402A5771: rol     r8, cl
 * 00000001402A5774: add     r10d, 0FFFFFFFFh
 * 00000001402A5778: jnz     short loc_1402A5764
 * 00000001402A577A: mov     r12, [r12+18h]
 * 00000001402A577F: mov     r15, rbx
 * 00000001402A5782: xor     r15, r8
 * 00000001402A5785: mov     r9, r12
 * 00000001402A5788: mov     r10d, r15d
 * 00000001402A578B: mov     rax, r12
 * 00000001402A578E: and     r10d, 3Fh
 * 00000001402A5792: mov     r13, r14
 * 00000001402A5795: lea     rcx, [r12+r14]
 * 00000001402A5799: cmp     r12, rcx
 * 00000001402A579C: jnb     short loc_1402A57AF
 * 00000001402A579E: mov     r8d, 40h ; '@'
 * 00000001402A57A4: prefetchnta byte ptr [rax]
 * 00000001402A57A7: add     rax, r8
 * 00000001402A57AA: cmp     rax, rcx
 * 00000001402A57AD: jb      short loc_1402A57A4
 * 00000001402A57AF: mov     r11d, r14d
 * 00000001402A57B2: mov     r8, r15
 * 00000001402A57B5: shr     r11d, 7
 * 00000001402A57B9: test    r11d, r11d
 * 00000001402A57BC: jz      short loc_1402A582D
 * 00000001402A57BE: mov     rbx, 7010008004002001h
 * 00000001402A57C8: mov     edx, 8
 * 00000001402A57CD: lea     esi, [rdx-7]
 * 00000001402A57D0: mov     rax, [r9]
 * 00000001402A57D3: mov     ecx, r10d
 * 00000001402A57D6: xor     rax, r8
 * 00000001402A57D9: mov     r8, [r9+8]
 * 00000001402A57DD: rol     rax, cl
 * 00000001402A57E0: add     r9, 10h
 * 00000001402A57E4: xor     r8, rax
 * 00000001402A57E7: rol     r8, cl
 * 00000001402A57EA: sub     rdx, rsi
 * 00000001402A57ED: jnz     short loc_1402A57D0
 * 00000001402A57EF: mov     rcx, r9
 * 00000001402A57F2: sub     rcx, r12
 * 00000001402A57F5: xor     rcx, r15
 * 00000001402A57F8: mov     rax, rcx
 * 00000001402A57FB: rol     rax, 11h
 * 00000001402A57FF: xor     rcx, rax
 * 00000001402A5802: mov     rax, rbx
 * 00000001402A5805: mul     rcx
 * 00000001402A5808: xor     eax, edx
 * 00000001402A580A: mov     [rbp+2150h+var_1AA0], rdx
 * 00000001402A5811: xor     r10d, eax
 * 00000001402A5814: mov     rax, rsi
 * 00000001402A5817: and     r10d, 3Fh
 * 00000001402A581B: cmovz   r10d, eax
 * 00000001402A581F: add     r11d, 0FFFFFFFFh
 * 00000001402A5823: jnz     short loc_1402A57C8
 * 00000001402A5825: mov     rsi, [rbp+2150h+var_20E8]
 * 00000001402A5829: mov     rbx, [rbp+2150h+var_2148]
 * 00000001402A582D: and     r14d, 7Fh
 * 00000001402A5831: mov     r12d, 1
 * 00000001402A5837: cmp     r14d, 8
 * 00000001402A583B: jb      short loc_1402A585A
 * 00000001402A583D: mov     edx, r14d
 * 00000001402A5840: shr     rdx, 3
 * 00000001402A5844: xor     r8, [r9]
 * 00000001402A5847: mov     ecx, r10d
 * 00000001402A584A: rol     r8, cl
 * 00000001402A584D: add     r9, 8
 * 00000001402A5851: add     r14d, 0FFFFFFF8h
 * 00000001402A5855: sub     rdx, r12
 * 00000001402A5858: jnz     short loc_1402A5844
 * 00000001402A585A: test    r14d, r14d
 * 00000001402A585D: jz      short loc_1402A5875
 * 00000001402A585F: movzx   eax, byte ptr [r9]
 * 00000001402A5863: mov     ecx, r10d
 * 00000001402A5866: xor     r8, rax
 * 00000001402A5869: add     r9, r12
 * 00000001402A586C: rol     r8, cl
 * 00000001402A586F: add     r14d, 0FFFFFFFFh
 * 00000001402A5873: jnz     short loc_1402A585F
 * 00000001402A5875: mov     rcx, [rbp+2150h+var_2110]
 * 00000001402A5879: add     rdi, 8
 * 00000001402A587D: mov     r15, rcx
 * 00000001402A5880: xor     r15, r13
 * 00000001402A5883: xor     r15, r8
 * 00000001402A5886: sub     [rbp+2150h+var_20F8], r12
 * 00000001402A588A: mov     [rbp+2150h+var_2130], r15
 * 00000001402A588E: jnz     loc_1402A565C
 * 00000001402A5894: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A5898: lea     r8, [rbp+2150h+var_1D40]
 * 00000001402A589F: lea     rdx, [rbp+2150h+var_1CF0]
 * 00000001402A58A6: mov     rax, [rsi+1F0h]
 * 00000001402A58AD: call    KeGuardDispatchICall
 * 00000001402A58B2: mov     rbx, [rbp+2150h+var_20C8]
 * 00000001402A58B9: xor     r13d, r13d
 * 00000001402A58BC: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A58C3: test    rax, rax
 * 00000001402A58C6: jz      loc_1402A6053
 * 00000001402A58CC: rdtsc
 * 00000001402A58CE: shl     rdx, 20h
 * 00000001402A58D2: mov     r8, 7010008004002001h
 * 00000001402A58DC: or      rax, rdx
 * 00000001402A58DF: mov     rcx, rax
 * 00000001402A58E2: ror     rax, 3
 * 00000001402A58E6: xor     rcx, rax
 * 00000001402A58E9: mov     rax, r8
 * 00000001402A58EC: mul     rcx
 * 00000001402A58EF: mov     rcx, rdx
 * 00000001402A58F2: mov     [rbp+2150h+var_1A98], rdx
 * 00000001402A58F9: xor     rcx, rax
 * 00000001402A58FC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 00000001402A5906: mul     rcx
 * 00000001402A5909: shr     rdx, 1
 * 00000001402A590C: imul    rax, rdx, 0Bh
 * 00000001402A5910: sub     rcx, rax
 * 00000001402A5913: lea     eax, [r13+5]
 * 00000001402A5917: cmp     ecx, eax
 * 00000001402A5919: ja      loc_1402A59D7
 * 00000001402A591F: jz      loc_1402A59BD
 * 00000001402A5925: test    ecx, ecx
 * 00000001402A5927: jz      short loc_1402A59A3
 * 00000001402A5929: sub     ecx, 1
 * 00000001402A592C: jz      short loc_1402A598A
 * 00000001402A592E: sub     ecx, 1
 * 00000001402A5931: jz      short loc_1402A5970
 * 00000001402A5933: cmp     ecx, 1
 * 00000001402A5936: jz      short loc_1402A5952
 * 00000001402A5938: mov     [rbp+2150h+var_1ECC], 67076494h
 * 00000001402A5942: mov     r9d, [rbp+2150h+var_1ECC]
 * 00000001402A5949: rol     r9d, 4
 * 00000001402A594D: jmp     loc_1402A5AFE
 * 00000001402A5952: mov     [rbp+2150h+var_1F00], 0A8223938h
 * 00000001402A595C: mov     r9d, [rbp+2150h+var_1F00]
 * 00000001402A5963: xor     r9d, 3
 * 00000001402A5967: ror     r9d, 0Fh
 * 00000001402A596B: jmp     loc_1402A5AFE
 * 00000001402A5970: mov     [rbp+2150h+var_1EFC], 85B5910Dh
 * 00000001402A597A: mov     r9d, [rbp+2150h+var_1EFC]
 * 00000001402A5981: ror     r9d, 2
 * 00000001402A5985: jmp     loc_1402A5AFE
 * 00000001402A598A: mov     [rbp+2150h+var_1EF8], 0B2AD31A1h
 * 00000001402A5994: mov     r9d, [rbp+2150h+var_1EF8]
 * 00000001402A599B: rol     r9d, 1
 * 00000001402A599E: jmp     loc_1402A5AFE
 * 00000001402A59A3: mov     [rbp+2150h+var_1EF4], 0D098D0D8h
 * 00000001402A59AD: mov     r9d, [rbp+2150h+var_1EF4]
 * 00000001402A59B4: ror     r9d, 6
 * 00000001402A59B8: jmp     loc_1402A5AFE
 * 00000001402A59BD: mov     [rbp+2150h+var_1EBC], 288C49EDh
 * 00000001402A59C7: mov     r9d, [rbp+2150h+var_1EBC]
 * 00000001402A59CE: ror     r9d, 5
 * 00000001402A59D2: jmp     loc_1402A5AFE
 * 00000001402A59D7: mov     edx, 6
 * 00000001402A59DC: sub     ecx, edx
 * 00000001402A59DE: jz      loc_1402A5AE6
 * 00000001402A59E4: sub     ecx, 1
 * 00000001402A59E7: jz      loc_1402A5ACF
 * 00000001402A59ED: sub     ecx, 1
 * 00000001402A59F0: jz      loc_1402A5AB8
 * 00000001402A59F6: cmp     ecx, 1
 * 00000001402A59F9: jz      loc_1402A5A9D
 * 00000001402A59FF: rdtsc
 * 00000001402A5A01: shl     rdx, 20h
 * 00000001402A5A05: mov     r10d, 4EC4EC4Fh
 * 00000001402A5A0B: or      rax, rdx
 * 00000001402A5A0E: mov     rcx, rax
 * 00000001402A5A11: ror     rax, 3
 * 00000001402A5A15: xor     rcx, rax
 * 00000001402A5A18: mov     rax, r8
 * 00000001402A5A1B: mul     rcx
 * 00000001402A5A1E: mov     r9, rax
 * 00000001402A5A21: mov     [rbp+2150h+var_1A90], rdx
 * 00000001402A5A28: xor     r9d, edx
 * 00000001402A5A2B: mov     eax, r10d
 * 00000001402A5A2E: mul     r9d
 * 00000001402A5A31: mov     ecx, r9d
 * 00000001402A5A34: shr     r9d, 5
 * 00000001402A5A38: shr     edx, 3
 * 00000001402A5A3B: mov     r8d, r9d
 * 00000001402A5A3E: imul    eax, edx, 1Ah
 * 00000001402A5A41: sub     ecx, eax
 * 00000001402A5A43: mov     eax, r10d
 * 00000001402A5A46: mul     r9d
 * 00000001402A5A49: add     ecx, 61h ; 'a'
 * 00000001402A5A4C: shr     r9d, 5
 * 00000001402A5A50: shl     ecx, 8
 * 00000001402A5A53: shr     edx, 3
 * 00000001402A5A56: imul    eax, edx, 1Ah
 * 00000001402A5A59: sub     r8d, eax
 * 00000001402A5A5C: mov     eax, r10d
 * 00000001402A5A5F: mul     r9d
 * 00000001402A5A62: add     r8d, 41h ; 'A'
 * 00000001402A5A66: or      r8d, ecx
 * 00000001402A5A69: shr     edx, 3
 * 00000001402A5A6C: imul    eax, edx, 1Ah
 * 00000001402A5A6F: mov     ecx, r9d
 * 00000001402A5A72: shr     r9d, 5
 * 00000001402A5A76: shl     r8d, 8
 * 00000001402A5A7A: sub     ecx, eax
 * 00000001402A5A7C: mov     eax, r10d
 * 00000001402A5A7F: mul     r9d
 * 00000001402A5A82: add     ecx, 61h ; 'a'
 * 00000001402A5A85: shr     edx, 3
 * 00000001402A5A88: or      ecx, r8d
 * 00000001402A5A8B: imul    eax, edx, 1Ah
 * 00000001402A5A8E: shl     ecx, 8
 * 00000001402A5A91: sub     r9d, eax
 * 00000001402A5A94: add     r9d, 41h ; 'A'
 * 00000001402A5A98: or      r9d, ecx
 * 00000001402A5A9B: jmp     short loc_1402A5AFE
 * 00000001402A5A9D: mov     [rbp+2150h+var_1EC4], 0B0869E85h
 * 00000001402A5AA7: mov     r9d, [rbp+2150h+var_1EC4]
 * 00000001402A5AAE: xor     r9d, 9
 * 00000001402A5AB2: ror     r9d, 21h
 * 00000001402A5AB6: jmp     short loc_1402A5AFE
 * 00000001402A5AB8: mov     [rbp+2150h+var_1EC8], 64664142h
 * 00000001402A5AC2: mov     r9d, [rbp+2150h+var_1EC8]
 * 00000001402A5AC9: ror     r9d, 8
 * 00000001402A5ACD: jmp     short loc_1402A5AFE
 * 00000001402A5ACF: mov     [rbp+2150h+var_1E88], 82C6A6D8h
 * 00000001402A5AD9: mov     r9d, [rbp+2150h+var_1E88]
 * 00000001402A5AE0: rol     r9d, 7
 * 00000001402A5AE4: jmp     short loc_1402A5AFE
 * 00000001402A5AE6: mov     [rbp+2150h+var_1ED4], 4E574672h
 * 00000001402A5AF0: mov     r9d, [rbp+2150h+var_1ED4]
 * 00000001402A5AF7: xor     r9d, edx
 * 00000001402A5AFA: ror     r9d, 18h
 * 00000001402A5AFE: mov     rax, [rsi+0E8h]
 * 00000001402A5B05: mov     r14d, 80h
 * 00000001402A5B0B: mov     edx, r14d
 * 00000001402A5B0E: mov     r8d, r9d
 * 00000001402A5B11: mov     ecx, 200h
 * 00000001402A5B16: call    KeGuardDispatchICall
 * 00000001402A5B1B: mov     [rbp+2150h+var_20F8], rax
 * 00000001402A5B1F: mov     r9, rax
 * 00000001402A5B22: test    rax, rax
 * 00000001402A5B25: jz      loc_1402A93F4
 * 00000001402A5B2B: mov     ecx, r14d
 * 00000001402A5B2E: lea     edx, [r14-70h]
 * 00000001402A5B32: mov     [rax], r13
 * 00000001402A5B35: add     ecx, 0FFFFFFF8h
 * 00000001402A5B38: add     rax, 8
 * 00000001402A5B3C: sub     rdx, r12
 * 00000001402A5B3F: jnz     short loc_1402A5B32
 * 00000001402A5B41: test    ecx, ecx
 * 00000001402A5B43: jz      short loc_1402A5B50
 * 00000001402A5B45: mov     [rax], r13b
 * 00000001402A5B48: add     rax, r12
 * 00000001402A5B4B: add     ecx, 0FFFFFFFFh
 * 00000001402A5B4E: jnz     short loc_1402A5B45
 * 00000001402A5B50: mov     rax, [rbp+2150h+var_1CF0]
 * 00000001402A5B57: mov     [rbp+2150h+var_1FD0], rax
 * 00000001402A5B5E: mov     [r9], rax
 * 00000001402A5B61: mov     rax, r13
 * 00000001402A5B64: mov     [rbp+2150h+var_20B8], rax
 * 00000001402A5B6B: mov     [rbp+2150h+var_20E8], r15
 * 00000001402A5B6F: mov     [rbp+2150h+var_2128], r13d
 * 00000001402A5B73: mov     rcx, [r9+rax*8]
 * 00000001402A5B77: mov     [rbp+2150h+var_1FD0], rcx
 * 00000001402A5B7E: test    rcx, rcx
 * 00000001402A5B81: jz      loc_1402A6028
 * 00000001402A5B87: mov     eax, r15d
 * 00000001402A5B8A: and     eax, 3Fh
 * 00000001402A5B8D: mov     [rbp+2150h+var_2118], eax
 * 00000001402A5B90: mov     rax, [rsi+1E8h]
 * 00000001402A5B97: call    KeGuardDispatchICall
 * 00000001402A5B9C: mov     [rbp+2150h+var_2110], rax
 * 00000001402A5BA0: test    rax, rax
 * 00000001402A5BA3: jz      loc_1402A5FD6
 * 00000001402A5BA9: movzx   r15d, word ptr [rax+14h]
 * 00000001402A5BAE: mov     rdx, [rbp+2150h+var_1FD0]
 * 00000001402A5BB5: add     r15, 18h
 * 00000001402A5BB9: mov     ebx, [rbp+2150h+var_2118]
 * 00000001402A5BBC: add     r15, rax
 * 00000001402A5BBF: movzx   eax, word ptr [rax+6]
 * 00000001402A5BC3: mov     rdi, [rbp+2150h+var_20E8]
 * 00000001402A5BC7: mov     [rbp+2150h+var_2148], rdx
 * 00000001402A5BCB: lea     rcx, [rax+rax*4]
 * 00000001402A5BCF: lea     rax, [r15+rcx*8]
 * 00000001402A5BD3: mov     [rbp+2150h+var_20D0], rax
 * 00000001402A5BDA: mov     eax, [r15+24h]
 * 00000001402A5BDE: bt      eax, 19h
 * 00000001402A5BE2: jb      loc_1402A5D4C
 * 00000001402A5BE8: mov     ecx, [r15]
 * 00000001402A5BEB: cmp     ecx, 54494E49h
 * 00000001402A5BF1: jnz     short loc_1402A5C01
 * 00000001402A5BF3: cmp     dword ptr [r15+4], 4742444Bh
 * 00000001402A5BFB: jz      loc_1402A5D4C
 * 00000001402A5C01: cmp     ecx, 45474150h
 * 00000001402A5C07: jnz     short loc_1402A5C3E
 * 00000001402A5C09: movzx   eax, word ptr [r15+4]
 * 00000001402A5C0E: mov     r8d, 7777h
 * 00000001402A5C14: cmp     ax, r8w
 * 00000001402A5C18: jz      loc_1402A5D4C
 * 00000001402A5C1E: mov     r8d, 7277h
 * 00000001402A5C24: cmp     ax, r8w
 * 00000001402A5C28: jz      loc_1402A5D4C
 * 00000001402A5C2E: mov     r8d, 7877h
 * 00000001402A5C34: cmp     ax, r8w
 * 00000001402A5C38: jz      loc_1402A5D4C
 * 00000001402A5C3E: cmp     ecx, 41525245h
 * 00000001402A5C44: jnz     short loc_1402A5C56
 * 00000001402A5C46: mov     eax, 4154h
 * 00000001402A5C4B: cmp     [r15+4], ax
 * 00000001402A5C50: jz      loc_1402A5D4C
 * 00000001402A5C56: mov     r8, [rsi+788h]
 * 00000001402A5C5D: mov     r9, r15
 * 00000001402A5C60: mov     r10, [rsi+790h]
 * 00000001402A5C67: sub     r9, r8
 * 00000001402A5C6A: mov     r14, [rsi+798h]
 * 00000001402A5C71: mov     r11d, 7
 * 00000001402A5C77: mov     r12, [rsi+7A0h]
 * 00000001402A5C7E: movzx   edx, byte ptr [r8+r9]
 * 00000001402A5C83: movzx   eax, byte ptr [r8]
 * 00000001402A5C87: inc     r8
 * 00000001402A5C8A: cmp     rdx, rax
 * 00000001402A5C8D: jnz     short loc_1402A5C9A
 * 00000001402A5C8F: add     r11d, 0FFFFFFFFh
 * 00000001402A5C93: jnz     short loc_1402A5C7E
 * 00000001402A5C95: jmp     loc_1402A5D3B
 * 00000001402A5C9A: mov     r8d, 8
 * 00000001402A5CA0: mov     r9, r15
 * 00000001402A5CA3: mov     rcx, [r9]
 * 00000001402A5CA6: add     r9, 8
 * 00000001402A5CAA: mov     rax, [r10]
 * 00000001402A5CAD: add     r10, 8
 * 00000001402A5CB1: cmp     rcx, rax
 * 00000001402A5CB4: jnz     short loc_1402A5CE6
 * 00000001402A5CB6: add     r8d, 0FFFFFFF8h
 * 00000001402A5CBA: cmp     r8d, 8
 * 00000001402A5CBE: jnb     short loc_1402A5CA3
 * 00000001402A5CC0: test    r8d, r8d
 * 00000001402A5CC3: jz      short loc_1402A5D3B
 * 00000001402A5CC5: mov     r11d, 1
 * 00000001402A5CCB: movzx   edx, byte ptr [r9]
 * 00000001402A5CCF: add     r9, r11
 * 00000001402A5CD2: movzx   eax, byte ptr [r10]
 * 00000001402A5CD6: add     r10, r11
 * 00000001402A5CD9: cmp     rdx, rax
 * 00000001402A5CDC: jnz     short loc_1402A5CEC
 * 00000001402A5CDE: add     r8d, 0FFFFFFFFh
 * 00000001402A5CE2: jnz     short loc_1402A5CCB
 * 00000001402A5CE4: jmp     short loc_1402A5D3B
 * 00000001402A5CE6: mov     r11d, 1
 * 00000001402A5CEC: mov     r8, r15
 * 00000001402A5CEF: mov     r9d, 4
 * 00000001402A5CF5: sub     r8, r14
 * 00000001402A5CF8: or      r10d, 0FFFFFFFFh
 * 00000001402A5CFC: movzx   edx, byte ptr [r14+r8]
 * 00000001402A5D01: movzx   eax, byte ptr [r14]
 * 00000001402A5D05: add     r14, r11
 * 00000001402A5D08: cmp     rdx, rax
 * 00000001402A5D0B: jnz     short loc_1402A5D14
 * 00000001402A5D0D: add     r9d, r10d
 * 00000001402A5D10: jnz     short loc_1402A5CFC
 * 00000001402A5D12: jmp     short loc_1402A5D3B
 * 00000001402A5D14: mov     r8, r15
 * 00000001402A5D17: mov     r9d, 6
 * 00000001402A5D1D: sub     r8, r12
 * 00000001402A5D20: movzx   edx, byte ptr [r12+r8]
 * 00000001402A5D25: movzx   eax, byte ptr [r12]
 * 00000001402A5D2A: add     r12, r11
 * 00000001402A5D2D: cmp     rdx, rax
 * 00000001402A5D30: jnz     loc_1402A5E66
 * 00000001402A5D36: add     r9d, r10d
 * 00000001402A5D39: jnz     short loc_1402A5D20
 * 00000001402A5D3B: mov     rdx, [rbp+2150h+var_1FD0]
 * 00000001402A5D42: mov     r12d, 1
 * 00000001402A5D48: mov     [rbp+2150h+var_2148], rdx
 * 00000001402A5D4C: mov     r13d, r12d
 * 00000001402A5D4F: mov     eax, [r15+10h]
 * 00000001402A5D53: xor     ecx, ecx
 * 00000001402A5D55: cmp     [r15+24h], ecx
 * 00000001402A5D59: mov     r9d, [r15+8]
 * 00000001402A5D5D: cmovl   r13d, r12d
 * 00000001402A5D61: cmp     eax, r9d
 * 00000001402A5D64: cmova   r9d, eax
 * 00000001402A5D68: mov     eax, [r15+0Ch]
 * 00000001402A5D6C: test    r13d, r13d
 * 00000001402A5D6F: jnz     loc_1402A5E7C
 * 00000001402A5D75: lea     r14, [rdx+rax]
 * 00000001402A5D79: mov     ecx, r9d
 * 00000001402A5D7C: add     rcx, r14
 * 00000001402A5D7F: mov     r11d, ebx
 * 00000001402A5D82: mov     r10, r14
 * 00000001402A5D85: mov     rax, r14
 * 00000001402A5D88: cmp     r14, rcx
 * 00000001402A5D8B: jnb     short loc_1402A5D9C
 * 00000001402A5D8D: lea     r8d, [r13+40h]
 * 00000001402A5D91: prefetchnta byte ptr [rax]
 * 00000001402A5D94: add     rax, r8
 * 00000001402A5D97: cmp     rax, rcx
 * 00000001402A5D9A: jb      short loc_1402A5D91
 * 00000001402A5D9C: mov     r12d, r9d
 * 00000001402A5D9F: xor     r13d, r13d
 * 00000001402A5DA2: shr     r12d, 7
 * 00000001402A5DA6: mov     r8, rdi
 * 00000001402A5DA9: test    r12d, r12d
 * 00000001402A5DAC: jz      short loc_1402A5E19
 * 00000001402A5DAE: lea     esi, [r13+1]
 * 00000001402A5DB2: mov     rbx, 7010008004002001h
 * 00000001402A5DBC: mov     eax, 8
 * 00000001402A5DC1: xor     r8, [r10]
 * 00000001402A5DC4: mov     ecx, r11d
 * 00000001402A5DC7: rol     r8, cl
 * 00000001402A5DCA: xor     r8, [r10+8]
 * 00000001402A5DCE: add     r10, 10h
 * 00000001402A5DD2: rol     r8, cl
 * 00000001402A5DD5: sub     rax, rsi
 * 00000001402A5DD8: jnz     short loc_1402A5DC1
 * 00000001402A5DDA: mov     rcx, r10
 * 00000001402A5DDD: sub     rcx, r14
 * 00000001402A5DE0: xor     rcx, rdi
 * 00000001402A5DE3: mov     rax, rcx
 * 00000001402A5DE6: rol     rax, 11h
 * 00000001402A5DEA: xor     rcx, rax
 * 00000001402A5DED: mov     rax, rbx
 * 00000001402A5DF0: mul     rcx
 * 00000001402A5DF3: xor     r11d, eax
 * 00000001402A5DF6: mov     [rbp+2150h+var_1A88], rdx
 * 00000001402A5DFD: xor     r11d, edx
 * 00000001402A5E00: and     r11d, 3Fh
 * 00000001402A5E04: cmovz   r11d, esi
 * 00000001402A5E08: add     r12d, 0FFFFFFFFh
 * 00000001402A5E0C: jnz     short loc_1402A5DBC
 * 00000001402A5E0E: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A5E12: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A5E16: mov     ebx, [rbp+2150h+var_2118]
 * 00000001402A5E19: and     r9d, 7Fh
 * 00000001402A5E1D: mov     r12d, 1
 * 00000001402A5E23: cmp     r9d, 8
 * 00000001402A5E27: jb      short loc_1402A5E46
 * 00000001402A5E29: mov     eax, r9d
 * 00000001402A5E2C: shr     rax, 3
 * 00000001402A5E30: xor     r8, [r10]
 * 00000001402A5E33: mov     ecx, r11d
 * 00000001402A5E36: rol     r8, cl
 * 00000001402A5E39: add     r10, 8
 * 00000001402A5E3D: add     r9d, 0FFFFFFF8h
 * 00000001402A5E41: sub     rax, r12
 * 00000001402A5E44: jnz     short loc_1402A5E30
 * 00000001402A5E46: test    r9d, r9d
 * 00000001402A5E49: jz      short loc_1402A5E61
 * 00000001402A5E4B: movzx   eax, byte ptr [r10]
 * 00000001402A5E4F: mov     ecx, r11d
 * 00000001402A5E52: xor     r8, rax
 * 00000001402A5E55: add     r10, r12
 * 00000001402A5E58: rol     r8, cl
 * 00000001402A5E5B: add     r9d, 0FFFFFFFFh
 * 00000001402A5E5F: jnz     short loc_1402A5E4B
 * 00000001402A5E61: mov     rdi, r8
 * 00000001402A5E64: jmp     short loc_1402A5E7F
 * 00000001402A5E66: mov     rdx, [rbp+2150h+var_1FD0]
 * 00000001402A5E6D: mov     r12d, 1
 * 00000001402A5E73: mov     [rbp+2150h+var_2148], rdx
 * 00000001402A5E77: jmp     loc_1402A5D4F
 * 00000001402A5E7C: xor     r13d, r13d
 * 00000001402A5E7F: add     r15, 28h ; '('
 * 00000001402A5E83: cmp     r15, [rbp+2150h+var_20D0]
 * 00000001402A5E8A: jnz     loc_1402A5BDA
 * 00000001402A5E90: mov     r13d, [rbp+2150h+var_2128]
 * 00000001402A5E94: xor     r10d, r10d
 * 00000001402A5E97: mov     [rbp+2150h+var_20E8], rdi
 * 00000001402A5E9B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A5EA2: test    r13d, r13d
 * 00000001402A5EA5: jnz     loc_1402A5F9F
 * 00000001402A5EAB: mov     rax, [rbp+2150h+var_2110]
 * 00000001402A5EAF: mov     ecx, [rax+94h]
 * 00000001402A5EB5: cmp     ecx, 14h
 * 00000001402A5EB8: jb      loc_1402A5F9F
 * 00000001402A5EBE: mov     eax, [rax+90h]
 * 00000001402A5EC4: lea     r12, [rdx+rcx]
 * 00000001402A5EC8: add     r12, rax
 * 00000001402A5ECB: lea     r14, [rdx+rax]
 * 00000001402A5ECF: cmp     r14, r12
 * 00000001402A5ED2: jz      loc_1402A5F99
 * 00000001402A5ED8: cmp     [r14+0Ch], r10d
 * 00000001402A5EDC: jz      loc_1402A5F99
 * 00000001402A5EE2: mov     eax, [r14+10h]
 * 00000001402A5EE6: test    eax, eax
 * 00000001402A5EE8: jz      loc_1402A5F99
 * 00000001402A5EEE: mov     r15, [rax+rdx]
 * 00000001402A5EF2: test    r15, r15
 * 00000001402A5EF5: jz      loc_1402A5F7E
 * 00000001402A5EFB: mov     rax, [rsi+298h]
 * 00000001402A5F02: mov     rcx, r15
 * 00000001402A5F05: call    KeGuardDispatchICall
 * 00000001402A5F0A: xor     r10d, r10d
 * 00000001402A5F0D: test    eax, eax
 * 00000001402A5F0F: jz      short loc_1402A5F7A
 * 00000001402A5F11: mov     rax, [rsi+1F0h]
 * 00000001402A5F18: lea     r8, [rbp+2150h+var_1D58]
 * 00000001402A5F1F: lea     rdx, [rbp+2150h+var_1FD0]
 * 00000001402A5F26: mov     rcx, r15
 * 00000001402A5F29: call    KeGuardDispatchICall
 * 00000001402A5F2E: xor     r10d, r10d
 * 00000001402A5F31: lea     r11d, [r10+10h]
 * 00000001402A5F35: test    rax, rax
 * 00000001402A5F38: jz      short loc_1402A5F74
 * 00000001402A5F3A: mov     r9, [rbp+2150h+var_20F8]
 * 00000001402A5F3E: mov     ecx, r10d
 * 00000001402A5F41: mov     r8, [rbp+2150h+var_1FD0]
 * 00000001402A5F48: mov     rax, r9
 * 00000001402A5F4B: mov     rdx, [rax]
 * 00000001402A5F4E: cmp     rdx, r8
 * 00000001402A5F51: jz      short loc_1402A5F6B
 * 00000001402A5F53: test    rdx, rdx
 * 00000001402A5F56: jz      short loc_1402A5F65
 * 00000001402A5F58: inc     ecx
 * 00000001402A5F5A: add     rax, 8
 * 00000001402A5F5E: cmp     ecx, r11d
 * 00000001402A5F61: jb      short loc_1402A5F4B
 * 00000001402A5F63: jmp     short loc_1402A5F6B
 * 00000001402A5F65: mov     eax, ecx
 * 00000001402A5F67: mov     [r9+rax*8], r8
 * 00000001402A5F6B: cmp     ecx, r11d
 * 00000001402A5F6E: jz      loc_1402A601D
 * 00000001402A5F74: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A5F78: jmp     short loc_1402A5F84
 * 00000001402A5F7A: mov     rdx, [rbp+2150h+var_2148]
 * 00000001402A5F7E: mov     r11d, 10h
 * 00000001402A5F84: add     r14, 14h
 * 00000001402A5F88: cmp     r14, r12
 * 00000001402A5F8B: jnz     loc_1402A5ED8
 * 00000001402A5F91: mov     r12d, 1
 * 00000001402A5F97: jmp     short loc_1402A5FA5
 * 00000001402A5F99: mov     r12d, 1
 * 00000001402A5F9F: mov     r11d, 10h
 * 00000001402A5FA5: mov     rax, [rbp+2150h+var_20B8]
 * 00000001402A5FAC: add     r13d, r12d
 * 00000001402A5FAF: mov     r15, [rbp+2150h+var_20E8]
 * 00000001402A5FB3: add     rax, r12
 * 00000001402A5FB6: mov     r9, [rbp+2150h+var_20F8]
 * 00000001402A5FBA: cmp     r13d, r11d
 * 00000001402A5FBD: mov     [rbp+2150h+var_2128], r13d
 * 00000001402A5FC1: mov     r13d, 0
 * 00000001402A5FC7: mov     [rbp+2150h+var_20B8], rax
 * 00000001402A5FCE: jb      loc_1402A5B73
 * 00000001402A5FD4: jmp     short loc_1402A6028
 * 00000001402A5FD6: mov     r15, [rbp+2150h+var_2130]
 * 00000001402A5FDA: cmp     [rsi+750h], r13d
 * 00000001402A5FE1: jnz     short loc_1402A6028
 * 00000001402A5FE3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A5FED: add     rax, rsi
 * 00000001402A5FF0: mov     [rsi+758h], rax
 * 00000001402A5FF7: mov     [rsi+760h], r13
 * 00000001402A5FFE: mov     qword ptr [rsi+768h], 102h
 * 00000001402A6009: mov     qword ptr [rsi+770h], 0FFFFFFFFC000007Bh
 * 00000001402A6014: mov     [rsi+750h], r12d
 * 00000001402A601B: jmp     short loc_1402A6028
 * 00000001402A601D: mov     r15, [rbp+2150h+var_20E8]
 * 00000001402A6021: xor     r13d, r13d
 * 00000001402A6024: lea     r12d, [r13+1]
 * 00000001402A6028: cmp     r15, [rsi+7B8h]
 * 00000001402A602F: jz      short loc_1402A6036
 * 00000001402A6031: test    r15, r15
 * 00000001402A6034: jnz     short loc_1402A6043
 * 00000001402A6036: mov     rax, 95EA5DE843D5D824h
 * 00000001402A6040: xor     r15, rax
 * 00000001402A6043: mov     rax, [rsi+0F0h]
 * 00000001402A604A: mov     rcx, [rbp+2150h+var_20F8]
 * 00000001402A604E: call    KeGuardDispatchICall
 * 00000001402A6053: mov     rax, [rsi+7B0h]
 * 00000001402A605A: mov     rcx, [rax]
 * 00000001402A605D: cmp     r15, rcx
 * 00000001402A6060: jz      short loc_1402A60D2
 * 00000001402A6062: mov     eax, [rsi+7DCh]
 * 00000001402A6068: mov     ecx, 40h ; '@'
 * 00000001402A606D: test    cl, al
 * 00000001402A606F: jnz     short loc_1402A60D2
 * 00000001402A6071: mov     rax, [rsi+7B0h]
 * 00000001402A6078: mov     rdx, [rax]
 * 00000001402A607B: cmp     [rsi+750h], r13d
 * 00000001402A6082: jnz     short loc_1402A60D2
 * 00000001402A6084: mov     rax, [rsi+548h]
 * 00000001402A608B: mov     rcx, r15
 * 00000001402A608E: xor     rcx, rdx
 * 00000001402A6091: mov     [rax+18h], rcx
 * 00000001402A6095: cmp     [rsi+750h], r13d
 * 00000001402A609C: jnz     short loc_1402A60D2
 * 00000001402A609E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A60A8: add     rax, rsi
 * 00000001402A60AB: mov     [rsi+758h], rax
 * 00000001402A60B2: mov     [rsi+760h], r13
 * 00000001402A60B9: mov     qword ptr [rsi+768h], 102h
 * 00000001402A60C4: mov     [rsi+770h], r15
 * 00000001402A60CB: mov     [rsi+750h], r12d
 * 00000001402A60D2: mov     r10d, r13d
 * 00000001402A60D5: lea     r15, [rbp+2150h+var_1D00]
 * 00000001402A60DC: mov     r12d, 2
 * 00000001402A60E2: mov     rax, [r15]
 * 00000001402A60E5: xor     esi, esi
 * 00000001402A60E7: mov     r9d, esi
 * 00000001402A60EA: mov     r11, [rax]
 * 00000001402A60ED: mov     r13d, [rax+10h]
 * 00000001402A60F1: lea     r8d, [r10+r11]
 * 00000001402A60F5: add     r8d, eax
 * 00000001402A60F8: test    r13d, r13d
 * 00000001402A60FB: jz      short loc_1402A6123
 * 00000001402A60FD: mov     r14, r11
 * 00000001402A6100: movsxd  rdx, dword ptr [r14]
 * 00000001402A6103: inc     r9d
 * 00000001402A6106: mov     rax, rdx
 * 00000001402A6109: lea     r14, [r14+4]
 * 00000001402A610D: sar     rax, 4
 * 00000001402A6111: mov     ecx, [rax+r11]
 * 00000001402A6115: add     ecx, edx
 * 00000001402A6117: xor     r8d, ecx
 * 00000001402A611A: imul    r8d, r9d
 * 00000001402A611E: cmp     r9d, r13d
 * 00000001402A6121: jb      short loc_1402A6100
 * 00000001402A6123: lea     r10d, [r10+r8*2]
 * 00000001402A6127: sub     r15, 8
 * 00000001402A612B: add     r8d, r8d
 * 00000001402A612E: xor     r13d, r13d
 * 00000001402A6131: add     r12d, 0FFFFFFFFh
 * 00000001402A6135: jnz     short loc_1402A60E2
 * 00000001402A6137: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A613B: mov     rbx, [rbp+2150h+var_20C8]
 * 00000001402A6142: mov     rax, [rsi+550h]
 * 00000001402A6149: mov     edx, [rax]
 * 00000001402A614B: cmp     r10d, edx
 * 00000001402A614E: jz      short loc_1402A61B9
 * 00000001402A6150: test    dword ptr [rsi+7D8h], 20000h
 * 00000001402A615A: jz      short loc_1402A61B9
 * 00000001402A615C: cmp     [rsi+750h], r13d
 * 00000001402A6163: jnz     short loc_1402A61B9
 * 00000001402A6165: mov     rax, [rsi+548h]
 * 00000001402A616C: mov     ecx, r8d
 * 00000001402A616F: xor     rcx, rdx
 * 00000001402A6172: mov     [rax+18h], rcx
 * 00000001402A6176: cmp     [rsi+750h], r13d
 * 00000001402A617D: jnz     short loc_1402A61B9
 * 00000001402A617F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A6189: add     rax, rsi
 * 00000001402A618C: mov     [rsi+758h], rax
 * 00000001402A6193: mov     [rsi+760h], r13
 * 00000001402A619A: mov     eax, r8d
 * 00000001402A619D: mov     qword ptr [rsi+768h], 107h
 * 00000001402A61A8: mov     [rsi+770h], rax
 * 00000001402A61AF: lea     eax, [r13+1]
 * 00000001402A61B3: mov     [rsi+750h], eax
 * 00000001402A61B9: mov     eax, [rsi+7A8h]
 * 00000001402A61BF: cmp     eax, 7
 * 00000001402A61C2: jl      short loc_1402A61E1
 * 00000001402A61C4: jz      loc_1402A72EE
 * 00000001402A61CA: cmp     eax, 8
 * 00000001402A61CD: jz      loc_1402A92B1
 * 00000001402A61D3: cmp     eax, 9
 * 00000001402A61D6: jz      loc_1402A955F
 * 00000001402A61DC: jmp     loc_1402A99DB
 * 00000001402A61E1: mov     rcx, [rsi+530h]
 * 00000001402A61E8: mov     r15d, 20h ; ' '
 * 00000001402A61EE: mov     r13, [rsi+528h]
 * 00000001402A61F5: add     rcx, r15
 * 00000001402A61F8: add     r13, r15
 * 00000001402A61FB: mov     [rbp+2150h+var_2148], rcx
 * 00000001402A61FF: mov     [rbp+2150h+var_20E8], r13
 * 00000001402A6203: lea     ecx, [r15-1Eh]
 * 00000001402A6207: cmp     eax, ecx
 * 00000001402A6209: jge     loc_1402A64B4
 * 00000001402A620F: mov     r12d, [r13+10h]
 * 00000001402A6213: mov     r15, [r13+0]
 * 00000001402A6217: mov     r13d, [rsi+644h]
 * 00000001402A621E: mov     r8d, [rsi+77Ch]
 * 00000001402A6225: shl     r12d, 2
 * 00000001402A6229: lea     eax, [r13+30h]
 * 00000001402A622D: cmp     eax, [rsi+85Ch]
 * 00000001402A6233: jbe     loc_1402A6319
 * 00000001402A6239: mov     edx, eax
 * 00000001402A623B: mov     rcx, rsi
 * 00000001402A623E: call    sub_1402AEFBC
 * 00000001402A6243: xor     r10d, r10d
 * 00000001402A6246: mov     r14, rax
 * 00000001402A6249: test    rax, rax
 * 00000001402A624C: jz      loc_1402A742B
 * 00000001402A6252: mov     edx, [rsi+7D8h]
 * 00000001402A6258: test    dl, 4
 * 00000001402A625B: jnz     loc_1402A630F
 * 00000001402A6261: mov     ecx, [rsi+644h]
 * 00000001402A6267: and     edx, 20000000h
 * 00000001402A626D: mov     r9, [rsi+628h]
 * 00000001402A6274: neg     edx
 * 00000001402A6276: lea     edx, [r10+1]
 * 00000001402A627A: sbb     r8d, r8d
 * 00000001402A627D: and     r8d, [rsi+77Ch]
 * 00000001402A6284: cmp     ecx, 8
 * 00000001402A6287: jb      short loc_1402A629E
 * 00000001402A6289: mov     eax, ecx
 * 00000001402A628B: shr     rax, 3
 * 00000001402A628F: mov     [rsi], r10
 * 00000001402A6292: add     ecx, 0FFFFFFF8h
 * 00000001402A6295: add     rsi, 8
 * 00000001402A6299: sub     rax, rdx
 * 00000001402A629C: jnz     short loc_1402A628F
 * 00000001402A629E: test    ecx, ecx
 * 00000001402A62A0: jz      short loc_1402A62AD
 * 00000001402A62A2: mov     [rsi], r10b
 * 00000001402A62A5: add     rsi, rdx
 * 00000001402A62A8: add     ecx, 0FFFFFFFFh
 * 00000001402A62AB: jnz     short loc_1402A62A2
 * 00000001402A62AD: mov     ebx, [r14+77Ch]
 * 00000001402A62B4: mov     eax, 3
 * 00000001402A62B9: mov     [r14+77Ch], r8d
 * 00000001402A62C0: cmp     r8d, eax
 * 00000001402A62C3: jz      short loc_1402A62F9
 * 00000001402A62C5: test    dword ptr [r14+7D8h], 10000000h
 * 00000001402A62D0: mov     ecx, r10d
 * 00000001402A62D3: cmovz   ecx, r8d
 * 00000001402A62D7: test    ecx, ecx
 * 00000001402A62D9: jz      short loc_1402A62F0
 * 00000001402A62DB: mov     rax, [r14+218h]
 * 00000001402A62E2: lea     rcx, [r9-8]
 * 00000001402A62E6: mov     rdx, [rcx]
 * 00000001402A62E9: call    KeGuardDispatchICall
 * 00000001402A62EE: jmp     short loc_1402A6308
 * 00000001402A62F0: mov     rax, [r14+0F0h]
 * 00000001402A62F7: jmp     short loc_1402A6300
 * 00000001402A62F9: mov     rax, [r14+358h]
 * 00000001402A6300: mov     rcx, r9
 * 00000001402A6303: call    KeGuardDispatchICall
 * 00000001402A6308: mov     [r14+77Ch], ebx
 * 00000001402A630F: and     dword ptr [r14+7D8h], 0FFFFFFFBh
 * 00000001402A6317: jmp     short loc_1402A6322
 * 00000001402A6319: mov     r14, rsi
 * 00000001402A631C: mov     [rsi+644h], eax
 * 00000001402A6322: lea     rbx, [r14+r13]
 * 00000001402A6326: mov     r8d, 1
 * 00000001402A632C: add     [r14+66Ch], r8d
 * 00000001402A6333: mov     rax, rbx
 * 00000001402A6336: mov     [rbp+2150h+var_20D0], rbx
 * 00000001402A633D: xor     r13d, r13d
 * 00000001402A6340: mov     [rbp+2150h+var_1A80], rbx
 * 00000001402A6347: lea     ecx, [r8+2Fh]
 * 00000001402A634B: lea     edx, [rcx-2Ah]
 * 00000001402A634E: mov     [rax], r13
 * 00000001402A6351: add     ecx, 0FFFFFFF8h
 * 00000001402A6354: add     rax, 8
 * 00000001402A6358: sub     rdx, r8
 * 00000001402A635B: jnz     short loc_1402A634E
 * 00000001402A635D: test    ecx, ecx
 * 00000001402A635F: jz      short loc_1402A636C
 * 00000001402A6361: mov     [rax], r13b
 * 00000001402A6364: add     rax, r8
 * 00000001402A6367: add     ecx, 0FFFFFFFFh
 * 00000001402A636A: jnz     short loc_1402A6361
 * 00000001402A636C: mov     dword ptr [rbx], 0Bh
 * 00000001402A6372: mov     r9, r15
 * 00000001402A6375: mov     [rbx+8], r15
 * 00000001402A6379: mov     rax, r15
 * 00000001402A637C: mov     [rbx+10h], r12d
 * 00000001402A6380: add     [r14+688h], r12d
 * 00000001402A6387: mov     r10d, [r14+674h]
 * 00000001402A638E: mov     rsi, [r14+678h]
 * 00000001402A6395: mov     ecx, r12d
 * 00000001402A6398: add     rcx, r15
 * 00000001402A639B: cmp     r15, rcx
 * 00000001402A639E: jnb     short loc_1402A63B0
 * 00000001402A63A0: mov     edx, 40h ; '@'
 * 00000001402A63A5: prefetchnta byte ptr [rax]
 * 00000001402A63A8: add     rax, rdx
 * 00000001402A63AB: cmp     rax, rcx
 * 00000001402A63AE: jb      short loc_1402A63A5
 * 00000001402A63B0: mov     r11d, r12d
 * 00000001402A63B3: mov     r8, rsi
 * 00000001402A63B6: shr     r11d, 7
 * 00000001402A63BA: test    r11d, r11d
 * 00000001402A63BD: jz      short loc_1402A642E
 * 00000001402A63BF: mov     edi, 1
 * 00000001402A63C4: mov     rbx, 7010008004002001h
 * 00000001402A63CE: mov     eax, 8
 * 00000001402A63D3: xor     r8, [r9]
 * 00000001402A63D6: mov     ecx, r10d
 * 00000001402A63D9: rol     r8, cl
 * 00000001402A63DC: xor     r8, [r9+8]
 * 00000001402A63E0: add     r9, 10h
 * 00000001402A63E4: rol     r8, cl
 * 00000001402A63E7: sub     rax, rdi
 * 00000001402A63EA: jnz     short loc_1402A63D3
 * 00000001402A63EC: mov     rcx, r9
 * 00000001402A63EF: sub     rcx, r15
 * 00000001402A63F2: xor     rcx, rsi
 * 00000001402A63F5: mov     rax, rcx
 * 00000001402A63F8: rol     rax, 11h
 * 00000001402A63FC: xor     rcx, rax
 * 00000001402A63FF: mov     rax, rbx
 * 00000001402A6402: mul     rcx
 * 00000001402A6405: xor     r10d, eax
 * 00000001402A6408: mov     [rbp+2150h+var_1A78], rdx
 * 00000001402A640F: xor     r10d, edx
 * 00000001402A6412: and     r10d, 3Fh
 * 00000001402A6416: cmovz   r10d, edi
 * 00000001402A641A: add     r11d, 0FFFFFFFFh
 * 00000001402A641E: jnz     short loc_1402A63CE
 * 00000001402A6420: mov     rbx, [rbp+2150h+var_20D0]
 * 00000001402A6427: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A642E: mov     edx, r12d
 * 00000001402A6431: mov     r11d, 1
 * 00000001402A6437: and     edx, 7Fh
 * 00000001402A643A: cmp     edx, 8
 * 00000001402A643D: jb      short loc_1402A645A
 * 00000001402A643F: mov     eax, edx
 * 00000001402A6441: shr     rax, 3
 * 00000001402A6445: xor     r8, [r9]
 * 00000001402A6448: mov     ecx, r10d
 * 00000001402A644B: rol     r8, cl
 * 00000001402A644E: add     r9, 8
 * 00000001402A6452: add     edx, 0FFFFFFF8h
 * 00000001402A6455: sub     rax, r11
 * 00000001402A6458: jnz     short loc_1402A6445
 * 00000001402A645A: test    edx, edx
 * 00000001402A645C: jz      short loc_1402A6473
 * 00000001402A645E: movzx   eax, byte ptr [r9]
 * 00000001402A6462: mov     ecx, r10d
 * 00000001402A6465: xor     r8, rax
 * 00000001402A6468: add     r9, r11
 * 00000001402A646B: rol     r8, cl
 * 00000001402A646E: add     edx, 0FFFFFFFFh
 * 00000001402A6471: jnz     short loc_1402A645E
 * 00000001402A6473: mov     rax, r8
 * 00000001402A6476: shr     rax, 1Fh
 * 00000001402A647A: xor     r10d, r10d
 * 00000001402A647D: jmp     short loc_1402A6486
 * 00000001402A647F: xor     r8d, eax
 * 00000001402A6482: shr     rax, 1Fh
 * 00000001402A6486: test    rax, rax
 * 00000001402A6489: jnz     short loc_1402A647F
 * 00000001402A648B: mov     r13, [rbp+2150h+var_20E8]
 * 00000001402A648F: mov     eax, 2
 * 00000001402A6494: btr     r8d, 1Fh
 * 00000001402A6499: mov     [rbx+14h], r8d
 * 00000001402A649D: mov     rbx, r14
 * 00000001402A64A0: add     [r14+688h], r12d
 * 00000001402A64A7: lea     r15d, [rax+1Eh]
 * 00000001402A64AB: mov     [r14+7A8h], eax
 * 00000001402A64B2: jmp     short loc_1402A64B7
 * 00000001402A64B4: xor     r10d, r10d
 * 00000001402A64B7: mov     eax, 3
 * 00000001402A64BC: cmp     [rbx+7A8h], eax
 * 00000001402A64C2: jge     loc_1402A66F0
 * 00000001402A64C8: mov     r14d, [rbx+644h]
 * 00000001402A64CF: mov     r12d, [rbx+698h]
 * 00000001402A64D6: cmp     r12d, 7
 * 00000001402A64DA: mov     r8d, [rbx+77Ch]
 * 00000001402A64E1: cmovnz  r15d, r10d
 * 00000001402A64E5: lea     eax, [r14+30h]
 * 00000001402A64E9: cmp     eax, [rbx+85Ch]
 * 00000001402A64EF: jbe     loc_1402A65D4
 * 00000001402A64F5: mov     edx, eax
 * 00000001402A64F7: mov     rcx, rbx
 * 00000001402A64FA: call    sub_1402AEFBC
 * 00000001402A64FF: xor     r10d, r10d
 * 00000001402A6502: mov     rsi, rax
 * 00000001402A6505: test    rax, rax
 * 00000001402A6508: jz      loc_1402A742B
 * 00000001402A650E: mov     edx, [rbx+7D8h]
 * 00000001402A6514: test    dl, 4
 * 00000001402A6517: jnz     loc_1402A65CB
 * 00000001402A651D: mov     ecx, [rbx+644h]
 * 00000001402A6523: and     edx, 20000000h
 * 00000001402A6529: mov     r9, [rbx+628h]
 * 00000001402A6530: neg     edx
 * 00000001402A6532: lea     edx, [r10+1]
 * 00000001402A6536: sbb     r8d, r8d
 * 00000001402A6539: and     r8d, [rbx+77Ch]
 * 00000001402A6540: cmp     ecx, 8
 * 00000001402A6543: jb      short loc_1402A655A
 * 00000001402A6545: mov     eax, ecx
 * 00000001402A6547: shr     rax, 3
 * 00000001402A654B: mov     [rbx], r10
 * 00000001402A654E: add     ecx, 0FFFFFFF8h
 * 00000001402A6551: add     rbx, 8
 * 00000001402A6555: sub     rax, rdx
 * 00000001402A6558: jnz     short loc_1402A654B
 * 00000001402A655A: test    ecx, ecx
 * 00000001402A655C: jz      short loc_1402A6569
 * 00000001402A655E: mov     [rbx], r10b
 * 00000001402A6561: add     rbx, rdx
 * 00000001402A6564: add     ecx, 0FFFFFFFFh
 * 00000001402A6567: jnz     short loc_1402A655E
 * 00000001402A6569: mov     ebx, [rsi+77Ch]
 * 00000001402A656F: mov     eax, 3
 * 00000001402A6574: mov     [rsi+77Ch], r8d
 * 00000001402A657B: cmp     r8d, eax
 * 00000001402A657E: jz      short loc_1402A65B3
 * 00000001402A6580: test    dword ptr [rsi+7D8h], 10000000h
 * 00000001402A658A: mov     ecx, r10d
 * 00000001402A658D: cmovz   ecx, r8d
 * 00000001402A6591: test    ecx, ecx
 * 00000001402A6593: jz      short loc_1402A65AA
 * 00000001402A6595: mov     rax, [rsi+218h]
 * 00000001402A659C: lea     rcx, [r9-8]
 * 00000001402A65A0: mov     rdx, [rcx]
 * 00000001402A65A3: call    KeGuardDispatchICall
 * 00000001402A65A8: jmp     short loc_1402A65C2
 * 00000001402A65AA: mov     rax, [rsi+0F0h]
 * 00000001402A65B1: jmp     short loc_1402A65BA
 * 00000001402A65B3: mov     rax, [rsi+358h]
 * 00000001402A65BA: mov     rcx, r9
 * 00000001402A65BD: call    KeGuardDispatchICall
 * 00000001402A65C2: mov     [rsi+77Ch], ebx
 * 00000001402A65C8: xor     r10d, r10d
 * 00000001402A65CB: and     dword ptr [rsi+7D8h], 0FFFFFFFBh
 * 00000001402A65D2: jmp     short loc_1402A65DD
 * 00000001402A65D4: mov     rsi, rbx
 * 00000001402A65D7: mov     [rbx+644h], eax
 * 00000001402A65DD: lea     rbx, [rsi+r14]
 * 00000001402A65E1: mov     r11d, 1
 * 00000001402A65E7: add     [rsi+66Ch], r11d
 * 00000001402A65EE: mov     rax, rbx
 * 00000001402A65F1: mov     [rbp+2150h+var_1A70], rbx
 * 00000001402A65F8: mov     r14d, 0FFFFFFF8h
 * 00000001402A65FE: lea     ecx, [r11+2Fh]
 * 00000001402A6602: lea     edx, [rcx-2Ah]
 * 00000001402A6605: mov     [rax], r10
 * 00000001402A6608: add     ecx, r14d
 * 00000001402A660B: add     rax, 8
 * 00000001402A660F: sub     rdx, r11
 * 00000001402A6612: jnz     short loc_1402A6605
 * 00000001402A6614: test    ecx, ecx
 * 00000001402A6616: jz      short loc_1402A6623
 * 00000001402A6618: mov     [rax], r10b
 * 00000001402A661B: add     rax, r11
 * 00000001402A661E: add     ecx, 0FFFFFFFFh
 * 00000001402A6621: jnz     short loc_1402A6618
 * 00000001402A6623: mov     [rbx], r15d
 * 00000001402A6626: mov     r15d, 20h ; ' '
 * 00000001402A662C: mov     [rbx+8], r13
 * 00000001402A6630: cmp     r12d, 7
 * 00000001402A6634: jnz     short loc_1402A664C
 * 00000001402A6636: lea     r9, [rbx+18h]
 * 00000001402A663A: mov     r8d, r15d
 * 00000001402A663D: mov     rdx, r13
 * 00000001402A6640: mov     rcx, rsi
 * 00000001402A6643: call    sub_14017573C
 * 00000001402A6648: lea     r11d, [r15-1Fh]
 * 00000001402A664C: mov     [rbx+10h], r15d
 * 00000001402A6650: lea     rcx, [r13+20h]
 * 00000001402A6654: add     [rsi+688h], r15d
 * 00000001402A665B: mov     r8, r13
 * 00000001402A665E: mov     r10d, [rsi+674h]
 * 00000001402A6665: mov     rax, r13
 * 00000001402A6668: mov     rdx, [rsi+678h]
 * 00000001402A666F: cmp     r13, rcx
 * 00000001402A6672: jnb     short loc_1402A6685
 * 00000001402A6674: mov     r9d, 40h ; '@'
 * 00000001402A667A: prefetchnta byte ptr [rax]
 * 00000001402A667D: add     rax, r9
 * 00000001402A6680: cmp     rax, rcx
 * 00000001402A6683: jb      short loc_1402A667A
 * 00000001402A6685: mov     r9d, r15d
 * 00000001402A6688: mov     eax, 4
 * 00000001402A668D: xor     rdx, [r8]
 * 00000001402A6690: mov     ecx, r10d
 * 00000001402A6693: rol     rdx, cl
 * 00000001402A6696: add     r8, 8
 * 00000001402A669A: add     r9d, r14d
 * 00000001402A669D: sub     rax, r11
 * 00000001402A66A0: jnz     short loc_1402A668D
 * 00000001402A66A2: test    r9d, r9d
 * 00000001402A66A5: jz      short loc_1402A66BD
 * 00000001402A66A7: movzx   eax, byte ptr [r8]
 * 00000001402A66AB: mov     ecx, r10d
 * 00000001402A66AE: xor     rdx, rax
 * 00000001402A66B1: add     r8, r11
 * 00000001402A66B4: rol     rdx, cl
 * 00000001402A66B7: add     r9d, 0FFFFFFFFh
 * 00000001402A66BB: jnz     short loc_1402A66A7
 * 00000001402A66BD: mov     rax, rdx
 * 00000001402A66C0: shr     rax, 1Fh
 * 00000001402A66C4: xor     r10d, r10d
 * 00000001402A66C7: jmp     short loc_1402A66CF
 * 00000001402A66C9: xor     edx, eax
 * 00000001402A66CB: shr     rax, 1Fh
 * 00000001402A66CF: test    rax, rax
 * 00000001402A66D2: jnz     short loc_1402A66C9
 * 00000001402A66D4: btr     edx, 1Fh
 * 00000001402A66D8: mov     eax, 3
 * 00000001402A66DD: mov     [rbx+14h], edx
 * 00000001402A66E0: mov     rbx, rsi
 * 00000001402A66E3: add     [rsi+688h], r15d
 * 00000001402A66EA: mov     [rsi+7A8h], eax
 * 00000001402A66F0: cmp     dword ptr [rbx+7A8h], 4
 * 00000001402A66F7: mov     r13, [rbp+2150h+var_2148]
 * 00000001402A66FB: jge     loc_1402A6999
 * 00000001402A6701: mov     r14d, [rbx+644h]
 * 00000001402A6708: mov     r12d, [r13+10h]
 * 00000001402A670C: mov     r15, [r13+0]
 * 00000001402A6710: mov     r8d, [rbx+77Ch]
 * 00000001402A6717: lea     eax, [r14+30h]
 * 00000001402A671B: shl     r12d, 2
 * 00000001402A671F: cmp     eax, [rbx+85Ch]
 * 00000001402A6725: jbe     loc_1402A680A
 * 00000001402A672B: mov     edx, eax
 * 00000001402A672D: mov     rcx, rbx
 * 00000001402A6730: call    sub_1402AEFBC
 * 00000001402A6735: xor     r10d, r10d
 * 00000001402A6738: mov     rsi, rax
 * 00000001402A673B: test    rax, rax
 * 00000001402A673E: jz      loc_1402A742B
 * 00000001402A6744: mov     edx, [rbx+7D8h]
 * 00000001402A674A: test    dl, 4
 * 00000001402A674D: jnz     loc_1402A6801
 * 00000001402A6753: mov     ecx, [rbx+644h]
 * 00000001402A6759: and     edx, 20000000h
 * 00000001402A675F: mov     r9, [rbx+628h]
 * 00000001402A6766: neg     edx
 * 00000001402A6768: lea     edx, [r10+1]
 * 00000001402A676C: sbb     r8d, r8d
 * 00000001402A676F: and     r8d, [rbx+77Ch]
 * 00000001402A6776: cmp     ecx, 8
 * 00000001402A6779: jb      short loc_1402A6790
 * 00000001402A677B: mov     eax, ecx
 * 00000001402A677D: shr     rax, 3
 * 00000001402A6781: mov     [rbx], r10
 * 00000001402A6784: add     ecx, 0FFFFFFF8h
 * 00000001402A6787: add     rbx, 8
 * 00000001402A678B: sub     rax, rdx
 * 00000001402A678E: jnz     short loc_1402A6781
 * 00000001402A6790: test    ecx, ecx
 * 00000001402A6792: jz      short loc_1402A679F
 * 00000001402A6794: mov     [rbx], r10b
 * 00000001402A6797: add     rbx, rdx
 * 00000001402A679A: add     ecx, 0FFFFFFFFh
 * 00000001402A679D: jnz     short loc_1402A6794
 * 00000001402A679F: mov     ebx, [rsi+77Ch]
 * 00000001402A67A5: mov     eax, 3
 * 00000001402A67AA: mov     [rsi+77Ch], r8d
 * 00000001402A67B1: cmp     r8d, eax
 * 00000001402A67B4: jz      short loc_1402A67E9
 * 00000001402A67B6: test    dword ptr [rsi+7D8h], 10000000h
 * 00000001402A67C0: mov     ecx, r10d
 * 00000001402A67C3: cmovz   ecx, r8d
 * 00000001402A67C7: test    ecx, ecx
 * 00000001402A67C9: jz      short loc_1402A67E0
 * 00000001402A67CB: mov     rax, [rsi+218h]
 * 00000001402A67D2: lea     rcx, [r9-8]
 * 00000001402A67D6: mov     rdx, [rcx]
 * 00000001402A67D9: call    KeGuardDispatchICall
 * 00000001402A67DE: jmp     short loc_1402A67F8
 * 00000001402A67E0: mov     rax, [rsi+0F0h]
 * 00000001402A67E7: jmp     short loc_1402A67F0
 * 00000001402A67E9: mov     rax, [rsi+358h]
 * 00000001402A67F0: mov     rcx, r9
 * 00000001402A67F3: call    KeGuardDispatchICall
 * 00000001402A67F8: mov     [rsi+77Ch], ebx
 * 00000001402A67FE: xor     r10d, r10d
 * 00000001402A6801: and     dword ptr [rsi+7D8h], 0FFFFFFFBh
 * 00000001402A6808: jmp     short loc_1402A6813
 * 00000001402A680A: mov     rsi, rbx
 * 00000001402A680D: mov     [rbx+644h], eax
 * 00000001402A6813: mov     r8d, 1
 * 00000001402A6819: lea     rbx, [rsi+r14]
 * 00000001402A681D: add     [rsi+66Ch], r8d
 * 00000001402A6824: mov     rax, rbx
 * 00000001402A6827: mov     [rbp+2150h+var_1A68], rbx
 * 00000001402A682E: lea     ecx, [r8+2Fh]
 * 00000001402A6832: lea     edx, [rcx-2Ah]
 * 00000001402A6835: mov     [rax], r10
 * 00000001402A6838: add     ecx, 0FFFFFFF8h
 * 00000001402A683B: add     rax, 8
 * 00000001402A683F: sub     rdx, r8
 * 00000001402A6842: jnz     short loc_1402A6835
 * 00000001402A6844: test    ecx, ecx
 * 00000001402A6846: jz      short loc_1402A6853
 * 00000001402A6848: mov     [rax], r10b
 * 00000001402A684B: add     rax, r8
 * 00000001402A684E: add     ecx, 0FFFFFFFFh
 * 00000001402A6851: jnz     short loc_1402A6848
 * 00000001402A6853: mov     dword ptr [rbx], 0Bh
 * 00000001402A6859: mov     r9, r15
 * 00000001402A685C: mov     [rbx+8], r15
 * 00000001402A6860: mov     rax, r15
 * 00000001402A6863: mov     [rbx+10h], r12d
 * 00000001402A6867: add     [rsi+688h], r12d
 * 00000001402A686E: mov     r10d, [rsi+674h]
 * 00000001402A6875: mov     r14, [rsi+678h]
 * 00000001402A687C: mov     ecx, r12d
 * 00000001402A687F: add     rcx, r15
 * 00000001402A6882: cmp     r15, rcx
 * 00000001402A6885: jnb     short loc_1402A6897
 * 00000001402A6887: mov     edx, 40h ; '@'
 * 00000001402A688C: prefetchnta byte ptr [rax]
 * 00000001402A688F: add     rax, rdx
 * 00000001402A6892: cmp     rax, rcx
 * 00000001402A6895: jb      short loc_1402A688C
 * 00000001402A6897: mov     r11d, r12d
 * 00000001402A689A: mov     r8, r14
 * 00000001402A689D: shr     r11d, 7
 * 00000001402A68A1: test    r11d, r11d
 * 00000001402A68A4: jz      short loc_1402A691A
 * 00000001402A68A6: mov     rdi, 7010008004002001h
 * 00000001402A68B0: mov     edx, 8
 * 00000001402A68B5: lea     r13d, [rdx-7]
 * 00000001402A68B9: mov     rax, [r9]
 * 00000001402A68BC: mov     ecx, r10d
 * 00000001402A68BF: xor     rax, r8
 * 00000001402A68C2: mov     r8, [r9+8]
 * 00000001402A68C6: rol     rax, cl
 * 00000001402A68C9: add     r9, 10h
 * 00000001402A68CD: xor     r8, rax
 * 00000001402A68D0: rol     r8, cl
 * 00000001402A68D3: sub     rdx, r13
 * 00000001402A68D6: jnz     short loc_1402A68B9
 * 00000001402A68D8: mov     rcx, r9
 * 00000001402A68DB: sub     rcx, r15
 * 00000001402A68DE: xor     rcx, r14
 * 00000001402A68E1: mov     rax, rcx
 * 00000001402A68E4: rol     rax, 11h
 * 00000001402A68E8: xor     rcx, rax
 * 00000001402A68EB: mov     rax, rdi
 * 00000001402A68EE: mul     rcx
 * 00000001402A68F1: xor     r10d, eax
 * 00000001402A68F4: mov     [rbp+2150h+var_1A60], rdx
 * 00000001402A68FB: xor     r10d, edx
 * 00000001402A68FE: mov     rax, r13
 * 00000001402A6901: and     r10d, 3Fh
 * 00000001402A6905: cmovz   r10d, eax
 * 00000001402A6909: add     r11d, 0FFFFFFFFh
 * 00000001402A690D: jnz     short loc_1402A68B0
 * 00000001402A690F: mov     r13, [rbp+2150h+var_2148]
 * 00000001402A6913: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A691A: mov     edx, r12d
 * 00000001402A691D: mov     r14d, 1
 * 00000001402A6923: and     edx, 7Fh
 * 00000001402A6926: cmp     edx, 8
 * 00000001402A6929: jb      short loc_1402A6947
 * 00000001402A692B: mov     r11d, edx
 * 00000001402A692E: shr     r11, 3
 * 00000001402A6932: xor     r8, [r9]
 * 00000001402A6935: mov     ecx, r10d
 * 00000001402A6938: rol     r8, cl
 * 00000001402A693B: add     r9, 8
 * 00000001402A693F: add     edx, 0FFFFFFF8h
 * 00000001402A6942: sub     r11, r14
 * 00000001402A6945: jnz     short loc_1402A6932
 * 00000001402A6947: test    edx, edx
 * 00000001402A6949: jz      short loc_1402A6960
 * 00000001402A694B: movzx   eax, byte ptr [r9]
 * 00000001402A694F: mov     ecx, r10d
 * 00000001402A6952: xor     r8, rax
 * 00000001402A6955: add     r9, r14
 * 00000001402A6958: rol     r8, cl
 * 00000001402A695B: add     edx, 0FFFFFFFFh
 * 00000001402A695E: jnz     short loc_1402A694B
 * 00000001402A6960: mov     rax, r8
 * 00000001402A6963: shr     rax, 1Fh
 * 00000001402A6967: xor     r10d, r10d
 * 00000001402A696A: jmp     short loc_1402A6973
 * 00000001402A696C: xor     r8d, eax
 * 00000001402A696F: shr     rax, 1Fh
 * 00000001402A6973: test    rax, rax
 * 00000001402A6976: jnz     short loc_1402A696C
 * 00000001402A6978: btr     r8d, 1Fh
 * 00000001402A697D: lea     r15d, [rax+20h]
 * 00000001402A6981: mov     [rbx+14h], r8d
 * 00000001402A6985: mov     rbx, rsi
 * 00000001402A6988: add     [rsi+688h], r12d
 * 00000001402A698F: mov     dword ptr [rsi+7A8h], 4
 * 00000001402A6999: cmp     dword ptr [rbx+7A8h], 5
 * 00000001402A69A0: jge     loc_1402A6BC4
 * 00000001402A69A6: mov     r14d, [rbx+644h]
 * 00000001402A69AD: mov     r12d, [rbx+698h]
 * 00000001402A69B4: cmp     r12d, 7
 * 00000001402A69B8: mov     r8d, [rbx+77Ch]
 * 00000001402A69BF: cmovnz  r15d, r10d
 * 00000001402A69C3: lea     eax, [r14+30h]
 * 00000001402A69C7: cmp     eax, [rbx+85Ch]
 * 00000001402A69CD: jbe     loc_1402A6AB2
 * 00000001402A69D3: mov     edx, eax
 * 00000001402A69D5: mov     rcx, rbx
 * 00000001402A69D8: call    sub_1402AEFBC
 * 00000001402A69DD: xor     r10d, r10d
 * 00000001402A69E0: mov     rsi, rax
 * 00000001402A69E3: test    rax, rax
 * 00000001402A69E6: jz      loc_1402A742B
 * 00000001402A69EC: mov     edx, [rbx+7D8h]
 * 00000001402A69F2: test    dl, 4
 * 00000001402A69F5: jnz     loc_1402A6AA9
 * 00000001402A69FB: mov     ecx, [rbx+644h]
 * 00000001402A6A01: and     edx, 20000000h
 * 00000001402A6A07: mov     r9, [rbx+628h]
 * 00000001402A6A0E: neg     edx
 * 00000001402A6A10: lea     edx, [r10+1]
 * 00000001402A6A14: sbb     r8d, r8d
 * 00000001402A6A17: and     r8d, [rbx+77Ch]
 * 00000001402A6A1E: cmp     ecx, 8
 * 00000001402A6A21: jb      short loc_1402A6A38
 * 00000001402A6A23: mov     eax, ecx
 * 00000001402A6A25: shr     rax, 3
 * 00000001402A6A29: mov     [rbx], r10
 * 00000001402A6A2C: add     ecx, 0FFFFFFF8h
 * 00000001402A6A2F: add     rbx, 8
 * 00000001402A6A33: sub     rax, rdx
 * 00000001402A6A36: jnz     short loc_1402A6A29
 * 00000001402A6A38: test    ecx, ecx
 * 00000001402A6A3A: jz      short loc_1402A6A47
 * 00000001402A6A3C: mov     [rbx], r10b
 * 00000001402A6A3F: add     rbx, rdx
 * 00000001402A6A42: add     ecx, 0FFFFFFFFh
 * 00000001402A6A45: jnz     short loc_1402A6A3C
 * 00000001402A6A47: mov     ebx, [rsi+77Ch]
 * 00000001402A6A4D: mov     eax, 3
 * 00000001402A6A52: mov     [rsi+77Ch], r8d
 * 00000001402A6A59: cmp     r8d, eax
 * 00000001402A6A5C: jz      short loc_1402A6A91
 * 00000001402A6A5E: test    dword ptr [rsi+7D8h], 10000000h
 * 00000001402A6A68: mov     ecx, r10d
 * 00000001402A6A6B: cmovz   ecx, r8d
 * 00000001402A6A6F: test    ecx, ecx
 * 00000001402A6A71: jz      short loc_1402A6A88
 * 00000001402A6A73: mov     rax, [rsi+218h]
 * 00000001402A6A7A: lea     rcx, [r9-8]
 * 00000001402A6A7E: mov     rdx, [rcx]
 * 00000001402A6A81: call    KeGuardDispatchICall
 * 00000001402A6A86: jmp     short loc_1402A6AA0
 * 00000001402A6A88: mov     rax, [rsi+0F0h]
 * 00000001402A6A8F: jmp     short loc_1402A6A98
 * 00000001402A6A91: mov     rax, [rsi+358h]
 * 00000001402A6A98: mov     rcx, r9
 * 00000001402A6A9B: call    KeGuardDispatchICall
 * 00000001402A6AA0: mov     [rsi+77Ch], ebx
 * 00000001402A6AA6: xor     r10d, r10d
 * 00000001402A6AA9: and     dword ptr [rsi+7D8h], 0FFFFFFFBh
 * 00000001402A6AB0: jmp     short loc_1402A6ABB
 * 00000001402A6AB2: mov     rsi, rbx
 * 00000001402A6AB5: mov     [rbx+644h], eax
 * 00000001402A6ABB: mov     eax, 1
 * 00000001402A6AC0: lea     rbx, [rsi+r14]
 * 00000001402A6AC4: add     [rsi+66Ch], eax
 * 00000001402A6ACA: mov     [rbp+2150h+var_1A58], rbx
 * 00000001402A6AD1: lea     ecx, [rax+2Fh]
 * 00000001402A6AD4: mov     rax, rbx
 * 00000001402A6AD7: lea     edx, [rcx-2Ah]
 * 00000001402A6ADA: lea     r14d, [rcx-2Fh]
 * 00000001402A6ADE: mov     [rax], r10
 * 00000001402A6AE1: add     ecx, 0FFFFFFF8h
 * 00000001402A6AE4: add     rax, 8
 * 00000001402A6AE8: sub     rdx, r14
 * 00000001402A6AEB: jnz     short loc_1402A6ADE
 * 00000001402A6AED: test    ecx, ecx
 * 00000001402A6AEF: jz      short loc_1402A6AFC
 * 00000001402A6AF1: mov     [rax], r10b
 * 00000001402A6AF4: add     rax, r14
 * 00000001402A6AF7: add     ecx, 0FFFFFFFFh
 * 00000001402A6AFA: jnz     short loc_1402A6AF1
 * 00000001402A6AFC: mov     [rbx], r15d
 * 00000001402A6AFF: mov     r15d, 20h ; ' '
 * 00000001402A6B05: mov     [rbx+8], r13
 * 00000001402A6B09: cmp     r12d, 7
 * 00000001402A6B0D: jnz     short loc_1402A6B21
 * 00000001402A6B0F: lea     r9, [rbx+18h]
 * 00000001402A6B13: mov     r8d, r15d
 * 00000001402A6B16: mov     rdx, r13
 * 00000001402A6B19: mov     rcx, rsi
 * 00000001402A6B1C: call    sub_14017573C
 * 00000001402A6B21: mov     [rbx+10h], r15d
 * 00000001402A6B25: lea     rcx, [r13+20h]
 * 00000001402A6B29: add     [rsi+688h], r15d
 * 00000001402A6B30: mov     r8, r13
 * 00000001402A6B33: mov     r11d, [rsi+674h]
 * 00000001402A6B3A: mov     rax, r13
 * 00000001402A6B3D: mov     rdx, [rsi+678h]
 * 00000001402A6B44: cmp     r13, rcx
 * 00000001402A6B47: jnb     short loc_1402A6B5A
 * 00000001402A6B49: mov     r9d, 40h ; '@'
 * 00000001402A6B4F: prefetchnta byte ptr [rax]
 * 00000001402A6B52: add     rax, r9
 * 00000001402A6B55: cmp     rax, rcx
 * 00000001402A6B58: jb      short loc_1402A6B4F
 * 00000001402A6B5A: mov     r9d, r15d
 * 00000001402A6B5D: mov     r10d, 4
 * 00000001402A6B63: xor     rdx, [r8]
 * 00000001402A6B66: mov     ecx, r11d
 * 00000001402A6B69: rol     rdx, cl
 * 00000001402A6B6C: add     r8, 8
 * 00000001402A6B70: add     r9d, 0FFFFFFF8h
 * 00000001402A6B74: sub     r10, r14
 * 00000001402A6B77: jnz     short loc_1402A6B63
 * 00000001402A6B79: xor     r13d, r13d
 * 00000001402A6B7C: test    r9d, r9d
 * 00000001402A6B7F: jz      short loc_1402A6B97
 * 00000001402A6B81: movzx   eax, byte ptr [r8]
 * 00000001402A6B85: mov     ecx, r11d
 * 00000001402A6B88: xor     rdx, rax
 * 00000001402A6B8B: add     r8, r14
 * 00000001402A6B8E: rol     rdx, cl
 * 00000001402A6B91: add     r9d, 0FFFFFFFFh
 * 00000001402A6B95: jnz     short loc_1402A6B81
 * 00000001402A6B97: mov     rax, rdx
 * 00000001402A6B9A: jmp     short loc_1402A6B9E
 * 00000001402A6B9C: xor     edx, eax
 * 00000001402A6B9E: shr     rax, 1Fh
 * 00000001402A6BA2: test    rax, rax
 * 00000001402A6BA5: jnz     short loc_1402A6B9C
 * 00000001402A6BA7: btr     edx, 1Fh
 * 00000001402A6BAB: mov     [rbx+14h], edx
 * 00000001402A6BAE: mov     rbx, rsi
 * 00000001402A6BB1: add     [rsi+688h], r15d
 * 00000001402A6BB8: mov     dword ptr [rsi+7A8h], 5
 * 00000001402A6BC2: jmp     short loc_1402A6BC7
 * 00000001402A6BC4: xor     r13d, r13d
 * 00000001402A6BC7: lea     rax, [rbx+7A8h]
 * 00000001402A6BCE: mov     r12d, 6
 * 00000001402A6BD4: mov     rsi, rbx
 * 00000001402A6BD7: mov     r14, rbx
 * 00000001402A6BDA: cmp     [rax], r12d
 * 00000001402A6BDD: jge     loc_1402A6F98
 * 00000001402A6BE3: test    dword ptr [rbx+7D8h], 40000000h
 * 00000001402A6BED: mov     r15, [rbp+2150h+var_20E8]
 * 00000001402A6BF1: mov     rax, [r15]
 * 00000001402A6BF4: mov     [rbp+2150h+var_2130], rax
 * 00000001402A6BF8: jnz     loc_1402A6F7D
 * 00000001402A6BFE: xor     eax, eax
 * 00000001402A6C00: mov     ebx, eax
 * 00000001402A6C02: cmp     [r15+10h], eax
 * 00000001402A6C06: jbe     loc_1402A6F7D
 * 00000001402A6C0C: mov     rdi, [rbp+2150h+var_2130]
 * 00000001402A6C10: mov     eax, ebx
 * 00000001402A6C12: lea     rdx, [rbp+2150h+var_1DA0]
 * 00000001402A6C19: xor     r8d, r8d
 * 00000001402A6C1C: movsxd  rcx, dword ptr [rdi+rax*4]
 * 00000001402A6C20: mov     rax, [rsi+250h]
 * 00000001402A6C27: sar     rcx, 4
 * 00000001402A6C2B: add     rcx, rdi
 * 00000001402A6C2E: call    KeGuardDispatchICall
 * 00000001402A6C33: xor     r10d, r10d
 * 00000001402A6C36: lea     r9d, [r10+1]
 * 00000001402A6C3A: test    rax, rax
 * 00000001402A6C3D: jnz     short loc_1402A6C42
 * 00000001402A6C3F: add     r13d, r9d
 * 00000001402A6C42: add     ebx, r9d
 * 00000001402A6C45: cmp     ebx, [r15+10h]
 * 00000001402A6C49: jb      short loc_1402A6C10
 * 00000001402A6C4B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A6C52: test    r13d, r13d
 * 00000001402A6C55: jz      loc_1402A6F7D
 * 00000001402A6C5B: mov     r14d, [rsi+644h]
 * 00000001402A6C62: mov     ecx, r13d
 * 00000001402A6C65: mov     r8d, [rsi+77Ch]
 * 00000001402A6C6C: shl     ecx, 4
 * 00000001402A6C6F: add     ecx, 30h ; '0'
 * 00000001402A6C72: add     ecx, r14d
 * 00000001402A6C75: cmp     ecx, [rsi+85Ch]
 * 00000001402A6C7B: jbe     loc_1402A6D76
 * 00000001402A6C81: mov     edx, ecx
 * 00000001402A6C83: mov     rcx, rsi
 * 00000001402A6C86: call    sub_1402AEFBC
 * 00000001402A6C8B: xor     r10d, r10d
 * 00000001402A6C8E: mov     rbx, rax
 * 00000001402A6C91: test    rax, rax
 * 00000001402A6C94: jz      loc_1402A6D66
 * 00000001402A6C9A: mov     edx, [rsi+7D8h]
 * 00000001402A6CA0: test    dl, 4
 * 00000001402A6CA3: jnz     loc_1402A6D57
 * 00000001402A6CA9: mov     ecx, [rsi+644h]
 * 00000001402A6CAF: and     edx, 20000000h
 * 00000001402A6CB5: mov     r9, [rsi+628h]
 * 00000001402A6CBC: neg     edx
 * 00000001402A6CBE: lea     edx, [r10+1]
 * 00000001402A6CC2: sbb     r8d, r8d
 * 00000001402A6CC5: and     r8d, [rsi+77Ch]
 * 00000001402A6CCC: cmp     ecx, 8
 * 00000001402A6CCF: jb      short loc_1402A6CE6
 * 00000001402A6CD1: mov     eax, ecx
 * 00000001402A6CD3: shr     rax, 3
 * 00000001402A6CD7: mov     [rsi], r10
 * 00000001402A6CDA: add     ecx, 0FFFFFFF8h
 * 00000001402A6CDD: add     rsi, 8
 * 00000001402A6CE1: sub     rax, rdx
 * 00000001402A6CE4: jnz     short loc_1402A6CD7
 * 00000001402A6CE6: test    ecx, ecx
 * 00000001402A6CE8: jz      short loc_1402A6CF5
 * 00000001402A6CEA: mov     [rsi], r10b
 * 00000001402A6CED: add     rsi, rdx
 * 00000001402A6CF0: add     ecx, 0FFFFFFFFh
 * 00000001402A6CF3: jnz     short loc_1402A6CEA
 * 00000001402A6CF5: mov     esi, [rbx+77Ch]
 * 00000001402A6CFB: mov     eax, 3
 * 00000001402A6D00: mov     [rbx+77Ch], r8d
 * 00000001402A6D07: cmp     r8d, eax
 * 00000001402A6D0A: jz      short loc_1402A6D3F
 * 00000001402A6D0C: test    dword ptr [rbx+7D8h], 10000000h
 * 00000001402A6D16: mov     ecx, r10d
 * 00000001402A6D19: cmovz   ecx, r8d
 * 00000001402A6D1D: test    ecx, ecx
 * 00000001402A6D1F: jz      short loc_1402A6D36
 * 00000001402A6D21: mov     rax, [rbx+218h]
 * 00000001402A6D28: lea     rcx, [r9-8]
 * 00000001402A6D2C: mov     rdx, [rcx]
 * 00000001402A6D2F: call    KeGuardDispatchICall
 * 00000001402A6D34: jmp     short loc_1402A6D4E
 * 00000001402A6D36: mov     rax, [rbx+0F0h]
 * 00000001402A6D3D: jmp     short loc_1402A6D46
 * 00000001402A6D3F: mov     rax, [rbx+358h]
 * 00000001402A6D46: mov     rcx, r9
 * 00000001402A6D49: call    KeGuardDispatchICall
 * 00000001402A6D4E: mov     [rbx+77Ch], esi
 * 00000001402A6D54: xor     r10d, r10d
 * 00000001402A6D57: and     dword ptr [rbx+7D8h], 0FFFFFFFBh
 * 00000001402A6D5E: mov     r9d, 1
 * 00000001402A6D64: jmp     short loc_1402A6D7F
 * 00000001402A6D66: mov     eax, 0C000022Dh
 * 00000001402A6D6B: mov     r14, rsi
 * 00000001402A6D6E: xor     r13d, r13d
 * 00000001402A6D71: jmp     loc_1402A6F83
 * 00000001402A6D76: mov     rbx, rsi
 * 00000001402A6D79: mov     [rsi+644h], ecx
 * 00000001402A6D7F: add     [rbx+66Ch], r9d
 * 00000001402A6D86: lea     rcx, [rbx+r14]
 * 00000001402A6D8A: mov     [rbp+2150h+var_1CE8], rcx
 * 00000001402A6D91: mov     rax, rcx
 * 00000001402A6D94: mov     edx, 30h ; '0'
 * 00000001402A6D99: mov     r8, r12
 * 00000001402A6D9C: mov     [rax], r10
 * 00000001402A6D9F: add     edx, 0FFFFFFF8h
 * 00000001402A6DA2: add     rax, 8
 * 00000001402A6DA6: sub     r8, r9
 * 00000001402A6DA9: jnz     short loc_1402A6D9C
 * 00000001402A6DAB: test    edx, edx
 * 00000001402A6DAD: jz      short loc_1402A6DBA
 * 00000001402A6DAF: mov     [rax], r10b
 * 00000001402A6DB2: add     rax, r9
 * 00000001402A6DB5: add     edx, 0FFFFFFFFh
 * 00000001402A6DB8: jnz     short loc_1402A6DAF
 * 00000001402A6DBA: mov     dword ptr [rcx], 0Ah
 * 00000001402A6DC0: mov     [rcx+8], r10
 * 00000001402A6DC4: mov     [rcx+10h], r10d
 * 00000001402A6DC8: mov     rdx, [rbx+678h]
 * 00000001402A6DCF: mov     rax, rdx
 * 00000001402A6DD2: jmp     short loc_1402A6DD6
 * 00000001402A6DD4: xor     edx, eax
 * 00000001402A6DD6: shr     rax, 1Fh
 * 00000001402A6DDA: test    rax, rax
 * 00000001402A6DDD: jnz     short loc_1402A6DD4
 * 00000001402A6DDF: btr     edx, 1Fh
 * 00000001402A6DE3: mov     r14, rbx
 * 00000001402A6DE6: mov     [rcx+14h], edx
 * 00000001402A6DE9: mov     r12d, r10d
 * 00000001402A6DEC: mov     rax, [rbp+2150h+var_1CE8]
 * 00000001402A6DF3: mov     [rbp+2150h+var_1EF0], rax
 * 00000001402A6DFA: mov     [rax+18h], r9d
 * 00000001402A6DFE: mov     rax, [rbp+2150h+var_1EF0]
 * 00000001402A6E05: mov     [rax+1Ch], r13d
 * 00000001402A6E09: mov     rax, [rbp+2150h+var_20E8]
 * 00000001402A6E0D: mov     rcx, [rbp+2150h+var_1EF0]
 * 00000001402A6E14: lea     r15, [rcx+30h]
 * 00000001402A6E18: cmp     [rax+10h], r10d
 * 00000001402A6E1C: jbe     loc_1402A6F01
 * 00000001402A6E22: mov     rcx, [rbp+2150h+var_2130]
 * 00000001402A6E26: lea     rdx, [rbp+2150h+var_1DA0]
 * 00000001402A6E2D: mov     eax, r12d
 * 00000001402A6E30: xor     r8d, r8d
 * 00000001402A6E33: movsxd  rsi, dword ptr [rcx+rax*4]
 * 00000001402A6E37: mov     rax, [rbx+250h]
 * 00000001402A6E3E: sar     rsi, 4
 * 00000001402A6E42: add     rsi, rcx
 * 00000001402A6E45: mov     rcx, rsi
 * 00000001402A6E48: call    KeGuardDispatchICall
 * 00000001402A6E4D: test    rax, rax
 * 00000001402A6E50: jnz     loc_1402A6EE3
 * 00000001402A6E56: lea     r11d, [rax+4]
 * 00000001402A6E5A: mov     r8, rsi
 * 00000001402A6E5D: add     [rbx+688h], r11d
 * 00000001402A6E64: lea     rcx, [rsi+4]
 * 00000001402A6E68: mov     r10d, [rbx+674h]
 * 00000001402A6E6F: mov     rax, rsi
 * 00000001402A6E72: mov     rdx, [rbx+678h]
 * 00000001402A6E79: cmp     rsi, rcx
 * 00000001402A6E7C: jnb     short loc_1402A6E8D
 * 00000001402A6E7E: lea     r9d, [r11+3Ch]
 * 00000001402A6E82: prefetchnta byte ptr [rax]
 * 00000001402A6E85: add     rax, r9
 * 00000001402A6E88: cmp     rax, rcx
 * 00000001402A6E8B: jb      short loc_1402A6E82
 * 00000001402A6E8D: mov     r9d, r11d
 * 00000001402A6E90: mov     edi, 1
 * 00000001402A6E95: movzx   eax, byte ptr [r8]
 * 00000001402A6E99: mov     ecx, r10d
 * 00000001402A6E9C: xor     rdx, rax
 * 00000001402A6E9F: add     r8, rdi
 * 00000001402A6EA2: rol     rdx, cl
 * 00000001402A6EA5: or      ecx, 0FFFFFFFFh
 * 00000001402A6EA8: add     r9d, ecx
 * 00000001402A6EAB: jnz     short loc_1402A6E95
 * 00000001402A6EAD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A6EB4: mov     rax, rdx
 * 00000001402A6EB7: jmp     short loc_1402A6EBB
 * 00000001402A6EB9: xor     edx, eax
 * 00000001402A6EBB: shr     rax, 1Fh
 * 00000001402A6EBF: test    rax, rax
 * 00000001402A6EC2: jnz     short loc_1402A6EB9
 * 00000001402A6EC4: xor     edx, [r15]
 * 00000001402A6EC7: btr     edx, 1Fh
 * 00000001402A6ECB: xor     [r15], edx
 * 00000001402A6ECE: mov     [r15+4], r11d
 * 00000001402A6ED2: mov     [r15+8], rsi
 * 00000001402A6ED6: add     r15, 10h
 * 00000001402A6EDA: add     r13d, ecx
 * 00000001402A6EDD: jz      loc_1402A6F77
 * 00000001402A6EE3: mov     rax, [rbp+2150h+var_20E8]
 * 00000001402A6EE7: mov     r9d, 1
 * 00000001402A6EED: add     r12d, r9d
 * 00000001402A6EF0: cmp     r12d, [rax+10h]
 * 00000001402A6EF4: jb      loc_1402A6E22
 * 00000001402A6EFA: mov     rcx, [rbp+2150h+var_1EF0]
 * 00000001402A6F01: test    r13d, r13d
 * 00000001402A6F04: jz      short loc_1402A6F77
 * 00000001402A6F06: xor     r13d, r13d
 * 00000001402A6F09: cmp     [rbx+750h], r13d
 * 00000001402A6F10: jnz     loc_1402A742E
 * 00000001402A6F16: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A6F20: add     rax, rbx
 * 00000001402A6F23: mov     [rbx+758h], rax
 * 00000001402A6F2A: test    rcx, rcx
 * 00000001402A6F2D: jz      short loc_1402A6F45
 * 00000001402A6F2F: mov     rax, 0B3B74BDEE4453415h
 * 00000001402A6F39: add     rax, rcx
 * 00000001402A6F3C: mov     [rbx+760h], rax
 * 00000001402A6F43: jmp     short loc_1402A6F4C
 * 00000001402A6F45: mov     [rbx+760h], r13
 * 00000001402A6F4C: test    rcx, rcx
 * 00000001402A6F4F: jz      short loc_1402A6F5D
 * 00000001402A6F51: movsxd  rax, dword ptr [rcx]
 * 00000001402A6F54: mov     [rbx+768h], rax
 * 00000001402A6F5B: jmp     short loc_1402A6F64
 * 00000001402A6F5D: mov     [rbx+768h], r13
 * 00000001402A6F64: mov     [rbx+770h], r13
 * 00000001402A6F6B: mov     [rbx+750h], r9d
 * 00000001402A6F72: jmp     loc_1402A742E
 * 00000001402A6F77: mov     r12d, 6
 * 00000001402A6F7D: xor     r13d, r13d
 * 00000001402A6F80: mov     eax, r13d
 * 00000001402A6F83: mov     rbx, r14
 * 00000001402A6F86: test    eax, eax
 * 00000001402A6F88: js      loc_1402A742E
 * 00000001402A6F8E: lea     rax, [r14+7A8h]
 * 00000001402A6F95: mov     [rax], r12d
 * 00000001402A6F98: cmp     dword ptr [rax], 7
 * 00000001402A6F9B: jge     loc_1402A72E0
 * 00000001402A6FA1: test    dword ptr [r14+7D8h], 40000000h
 * 00000001402A6FAC: mov     r15, [rbp+2150h+var_2148]
 * 00000001402A6FB0: mov     rsi, [r15]
 * 00000001402A6FB3: mov     [rbp+2150h+var_20E8], rsi
 * 00000001402A6FB7: jnz     loc_1402A72C4
 * 00000001402A6FBD: xor     eax, eax
 * 00000001402A6FBF: mov     ebx, eax
 * 00000001402A6FC1: cmp     [r15+10h], eax
 * 00000001402A6FC5: jbe     loc_1402A72C4
 * 00000001402A6FCB: lea     edi, [rax+1]
 * 00000001402A6FCE: mov     eax, ebx
 * 00000001402A6FD0: lea     rdx, [rbp+2150h+var_1D90]
 * 00000001402A6FD7: xor     r8d, r8d
 * 00000001402A6FDA: movsxd  rcx, dword ptr [rsi+rax*4]
 * 00000001402A6FDE: mov     rax, [r14+250h]
 * 00000001402A6FE5: sar     rcx, 4
 * 00000001402A6FE9: add     rcx, rsi
 * 00000001402A6FEC: call    KeGuardDispatchICall
 * 00000001402A6FF1: xor     r10d, r10d
 * 00000001402A6FF4: test    rax, rax
 * 00000001402A6FF7: jnz     short loc_1402A6FFC
 * 00000001402A6FF9: add     r13d, edi
 * 00000001402A6FFC: add     ebx, edi
 * 00000001402A6FFE: cmp     ebx, [r15+10h]
 * 00000001402A7002: jb      short loc_1402A6FCE
 * 00000001402A7004: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A700B: test    r13d, r13d
 * 00000001402A700E: jz      loc_1402A72C4
 * 00000001402A7014: mov     r15d, [r14+644h]
 * 00000001402A701B: mov     ecx, r13d
 * 00000001402A701E: mov     r8d, [r14+77Ch]
 * 00000001402A7025: shl     ecx, 4
 * 00000001402A7028: add     ecx, 30h ; '0'
 * 00000001402A702B: add     ecx, r15d
 * 00000001402A702E: cmp     ecx, [r14+85Ch]
 * 00000001402A7035: jbe     loc_1402A712D
 * 00000001402A703B: mov     edx, ecx
 * 00000001402A703D: mov     rcx, r14
 * 00000001402A7040: call    sub_1402AEFBC
 * 00000001402A7045: xor     r10d, r10d
 * 00000001402A7048: mov     rbx, rax
 * 00000001402A704B: test    rax, rax
 * 00000001402A704E: jz      loc_1402A7120
 * 00000001402A7054: mov     edx, [r14+7D8h]
 * 00000001402A705B: test    dl, 4
 * 00000001402A705E: jnz     loc_1402A7117
 * 00000001402A7064: mov     ecx, [r14+644h]
 * 00000001402A706B: and     edx, 20000000h
 * 00000001402A7071: mov     r9, [r14+628h]
 * 00000001402A7078: neg     edx
 * 00000001402A707A: lea     edx, [r10+1]
 * 00000001402A707E: sbb     r8d, r8d
 * 00000001402A7081: and     r8d, [r14+77Ch]
 * 00000001402A7088: cmp     ecx, 8
 * 00000001402A708B: jb      short loc_1402A70A2
 * 00000001402A708D: mov     eax, ecx
 * 00000001402A708F: shr     rax, 3
 * 00000001402A7093: mov     [r14], r10
 * 00000001402A7096: add     ecx, 0FFFFFFF8h
 * 00000001402A7099: add     r14, 8
 * 00000001402A709D: sub     rax, rdx
 * 00000001402A70A0: jnz     short loc_1402A7093
 * 00000001402A70A2: test    ecx, ecx
 * 00000001402A70A4: jz      short loc_1402A70B1
 * 00000001402A70A6: mov     [r14], r10b
 * 00000001402A70A9: add     r14, rdx
 * 00000001402A70AC: add     ecx, 0FFFFFFFFh
 * 00000001402A70AF: jnz     short loc_1402A70A6
 * 00000001402A70B1: mov     esi, [rbx+77Ch]
 * 00000001402A70B7: mov     eax, 3
 * 00000001402A70BC: mov     [rbx+77Ch], r8d
 * 00000001402A70C3: cmp     r8d, eax
 * 00000001402A70C6: jz      short loc_1402A70FB
 * 00000001402A70C8: test    dword ptr [rbx+7D8h], 10000000h
 * 00000001402A70D2: mov     ecx, r10d
 * 00000001402A70D5: cmovz   ecx, r8d
 * 00000001402A70D9: test    ecx, ecx
 * 00000001402A70DB: jz      short loc_1402A70F2
 * 00000001402A70DD: mov     rax, [rbx+218h]
 * 00000001402A70E4: lea     rcx, [r9-8]
 * 00000001402A70E8: mov     rdx, [rcx]
 * 00000001402A70EB: call    KeGuardDispatchICall
 * 00000001402A70F0: jmp     short loc_1402A710A
 * 00000001402A70F2: mov     rax, [rbx+0F0h]
 * 00000001402A70F9: jmp     short loc_1402A7102
 * 00000001402A70FB: mov     rax, [rbx+358h]
 * 00000001402A7102: mov     rcx, r9
 * 00000001402A7105: call    KeGuardDispatchICall
 * 00000001402A710A: mov     [rbx+77Ch], esi
 * 00000001402A7110: xor     r10d, r10d
 * 00000001402A7113: mov     rsi, [rbp+2150h+var_20E8]
 * 00000001402A7117: and     dword ptr [rbx+7D8h], 0FFFFFFFBh
 * 00000001402A711E: jmp     short loc_1402A7137
 * 00000001402A7120: mov     eax, 0C000022Dh
 * 00000001402A7125: xor     r13d, r13d
 * 00000001402A7128: jmp     loc_1402A72CA
 * 00000001402A712D: mov     rbx, r14
 * 00000001402A7130: mov     [r14+644h], ecx
 * 00000001402A7137: mov     r9d, 1
 * 00000001402A713D: lea     rcx, [rbx+r15]
 * 00000001402A7141: add     [rbx+66Ch], r9d
 * 00000001402A7148: mov     rax, rcx
 * 00000001402A714B: mov     [rbp+2150h+var_1D98], rcx
 * 00000001402A7152: mov     r8, r12
 * 00000001402A7155: lea     edx, [r9+2Fh]
 * 00000001402A7159: mov     [rax], r10
 * 00000001402A715C: add     edx, 0FFFFFFF8h
 * 00000001402A715F: add     rax, 8
 * 00000001402A7163: sub     r8, r9
 * 00000001402A7166: jnz     short loc_1402A7159
 * 00000001402A7168: test    edx, edx
 * 00000001402A716A: jz      short loc_1402A7177
 * 00000001402A716C: mov     [rax], r10b
 * 00000001402A716F: add     rax, r9
 * 00000001402A7172: add     edx, 0FFFFFFFFh
 * 00000001402A7175: jnz     short loc_1402A716C
 * 00000001402A7177: mov     dword ptr [rcx], 0Ah
 * 00000001402A717D: mov     [rcx+8], r10
 * 00000001402A7181: mov     [rcx+10h], r10d
 * 00000001402A7185: mov     rdx, [rbx+678h]
 * 00000001402A718C: mov     rax, rdx
 * 00000001402A718F: jmp     short loc_1402A7193
 * 00000001402A7191: xor     edx, eax
 * 00000001402A7193: shr     rax, 1Fh
 * 00000001402A7197: test    rax, rax
 * 00000001402A719A: jnz     short loc_1402A7191
 * 00000001402A719C: btr     edx, 1Fh
 * 00000001402A71A0: mov     r14, rbx
 * 00000001402A71A3: mov     [rcx+14h], edx
 * 00000001402A71A6: mov     r12d, r10d
 * 00000001402A71A9: mov     rax, [rbp+2150h+var_1D98]
 * 00000001402A71B0: mov     [rbp+2150h+var_1EE8], rax
 * 00000001402A71B7: mov     [rax+18h], r9d
 * 00000001402A71BB: mov     rax, [rbp+2150h+var_1EE8]
 * 00000001402A71C2: mov     [rax+1Ch], r13d
 * 00000001402A71C6: mov     rax, [rbp+2150h+var_2148]
 * 00000001402A71CA: mov     rcx, [rbp+2150h+var_1EE8]
 * 00000001402A71D1: lea     r15, [rcx+30h]
 * 00000001402A71D5: cmp     [rax+10h], r10d
 * 00000001402A71D9: jbe     loc_1402A72BB
 * 00000001402A71DF: mov     eax, r12d
 * 00000001402A71E2: lea     rdx, [rbp+2150h+var_1D90]
 * 00000001402A71E9: xor     r8d, r8d
 * 00000001402A71EC: movsxd  rsi, dword ptr [rsi+rax*4]
 * 00000001402A71F0: mov     rax, [rbx+250h]
 * 00000001402A71F7: sar     rsi, 4
 * 00000001402A71FB: add     rsi, [rbp+2150h+var_20E8]
 * 00000001402A71FF: mov     rcx, rsi
 * 00000001402A7202: call    KeGuardDispatchICall
 * 00000001402A7207: test    rax, rax
 * 00000001402A720A: jnz     loc_1402A7299
 * 00000001402A7210: lea     r11d, [rax+4]
 * 00000001402A7214: mov     r8, rsi
 * 00000001402A7217: add     [rbx+688h], r11d
 * 00000001402A721E: lea     rcx, [rsi+4]
 * 00000001402A7222: mov     r10d, [rbx+674h]
 * 00000001402A7229: mov     rax, rsi
 * 00000001402A722C: mov     rdx, [rbx+678h]
 * 00000001402A7233: cmp     rsi, rcx
 * 00000001402A7236: jnb     short loc_1402A7247
 * 00000001402A7238: lea     r9d, [r11+3Ch]
 * 00000001402A723C: prefetchnta byte ptr [rax]
 * 00000001402A723F: add     rax, r9
 * 00000001402A7242: cmp     rax, rcx
 * 00000001402A7245: jb      short loc_1402A723C
 * 00000001402A7247: mov     r9d, r11d
 * 00000001402A724A: mov     edi, 1
 * 00000001402A724F: movzx   eax, byte ptr [r8]
 * 00000001402A7253: mov     ecx, r10d
 * 00000001402A7256: xor     rdx, rax
 * 00000001402A7259: add     r8, rdi
 * 00000001402A725C: rol     rdx, cl
 * 00000001402A725F: or      ecx, 0FFFFFFFFh
 * 00000001402A7262: add     r9d, ecx
 * 00000001402A7265: jnz     short loc_1402A724F
 * 00000001402A7267: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A726E: mov     rax, rdx
 * 00000001402A7271: jmp     short loc_1402A7275
 * 00000001402A7273: xor     edx, eax
 * 00000001402A7275: shr     rax, 1Fh
 * 00000001402A7279: test    rax, rax
 * 00000001402A727C: jnz     short loc_1402A7273
 * 00000001402A727E: xor     edx, [r15]
 * 00000001402A7281: btr     edx, 1Fh
 * 00000001402A7285: xor     [r15], edx
 * 00000001402A7288: mov     [r15+4], r11d
 * 00000001402A728C: mov     [r15+8], rsi
 * 00000001402A7290: add     r15, 10h
 * 00000001402A7294: add     r13d, ecx
 * 00000001402A7297: jz      short loc_1402A72C4
 * 00000001402A7299: mov     rax, [rbp+2150h+var_2148]
 * 00000001402A729D: mov     r9d, 1
 * 00000001402A72A3: mov     rsi, [rbp+2150h+var_20E8]
 * 00000001402A72A7: add     r12d, r9d
 * 00000001402A72AA: cmp     r12d, [rax+10h]
 * 00000001402A72AE: jb      loc_1402A71DF
 * 00000001402A72B4: mov     rcx, [rbp+2150h+var_1EE8]
 * 00000001402A72BB: test    r13d, r13d
 * 00000001402A72BE: jnz     loc_1402A6F06
 * 00000001402A72C4: xor     r13d, r13d
 * 00000001402A72C7: mov     eax, r13d
 * 00000001402A72CA: mov     rbx, r14
 * 00000001402A72CD: test    eax, eax
 * 00000001402A72CF: js      loc_1402A742E
 * 00000001402A72D5: mov     dword ptr [r14+7A8h], 7
 * 00000001402A72E0: mov     eax, r13d
 * 00000001402A72E3: mov     rsi, rbx
 * 00000001402A72E6: test    eax, eax
 * 00000001402A72E8: js      loc_1402A93EE
 * 00000001402A72EE: mov     rax, [rbx+528h]
 * 00000001402A72F5: lea     r8, [rbp+2150h+var_1ED8]
 * 00000001402A72FC: lea     rdx, [rbp+2150h+var_1F50]
 * 00000001402A7303: mov     [rbp+2150h+var_2120], rbx
 * 00000001402A7307: mov     rsi, rbx
 * 00000001402A730A: mov     [rbp+2150h+var_2048], rbx
 * 00000001402A7311: mov     rcx, [rax+20h]
 * 00000001402A7315: mov     rax, [rbx+1F0h]
 * 00000001402A731C: mov     [rbp+2150h+var_20E8], rcx
 * 00000001402A7320: call    KeGuardDispatchICall
 * 00000001402A7325: mov     [rbp+2150h+var_2110], rax
 * 00000001402A7329: mov     r12, rax
 * 00000001402A732C: test    rax, rax
 * 00000001402A732F: jz      loc_1402A93EE
 * 00000001402A7335: mov     eax, [rbp+2150h+var_1ED8]
 * 00000001402A733B: xor     edx, edx
 * 00000001402A733D: mov     r13, [rbp+2150h+var_1F50]
 * 00000001402A7344: mov     [rbp+2150h+var_2128], eax
 * 00000001402A7347: lea     rax, [rbp+2150h+var_1F68]
 * 00000001402A734E: mov     [rbp+2150h+var_2080], r13
 * 00000001402A7355: lea     ecx, [rdx+4]
 * 00000001402A7358: mov     [rbp+2150h+var_1F70], rdx
 * 00000001402A735F: lea     r8d, [rdx+1]
 * 00000001402A7363: mov     [rax], dl
 * 00000001402A7365: add     rax, r8
 * 00000001402A7368: add     ecx, 0FFFFFFFFh
 * 00000001402A736B: jnz     short loc_1402A7363
 * 00000001402A736D: mov     r15d, edx
 * 00000001402A7370: mov     [rbp+2150h+var_2118], edx
 * 00000001402A7373: cmp     [rbx+66Ch], edx
 * 00000001402A7379: jbe     loc_1402A7593
 * 00000001402A737F: mov     ecx, [rbp+2150h+var_1F68]
 * 00000001402A7385: mov     r9d, dword ptr [rbp+2150h+var_1F70+4]
 * 00000001402A738C: mov     r10d, dword ptr [rbp+2150h+var_1F70]
 * 00000001402A7393: mov     rax, [rbx+8A8h]
 * 00000001402A739A: mov     r14, rbx
 * 00000001402A739D: test    rax, rax
 * 00000001402A73A0: mov     r11d, edx
 * 00000001402A73A3: cmovnz  r14, rax
 * 00000001402A73A7: mov     [rbp+2150h+var_20D0], r14
 * 00000001402A73AE: mov     r8d, [r14+668h]
 * 00000001402A73B5: add     r8, r14
 * 00000001402A73B8: test    r10d, r10d
 * 00000001402A73BB: jz      short loc_1402A73CB
 * 00000001402A73BD: cmp     r9d, r15d
 * 00000001402A73C0: ja      short loc_1402A73CB
 * 00000001402A73C2: mov     r8d, ecx
 * 00000001402A73C5: mov     r11d, r9d
 * 00000001402A73C8: add     r8, r14
 * 00000001402A73CB: cmp     r11d, r15d
 * 00000001402A73CE: jz      loc_1402A751A
 * 00000001402A73D4: mov     eax, r15d
 * 00000001402A73D7: mov     esi, 2
 * 00000001402A73DC: sub     eax, r11d
 * 00000001402A73DF: add     r11d, eax
 * 00000001402A73E2: mov     r9d, eax
 * 00000001402A73E5: mov     [rbp+2150h+var_20EC], r11d
 * 00000001402A73E9: mov     r11, 0AAAAAAAAAAAAAAABh
 * 00000001402A73F3: lea     r14d, [rsi+1]
 * 00000001402A73F7: lea     r15d, [rsi+0Ah]
 * 00000001402A73FB: mov     ecx, [r8]
 * 00000001402A73FE: cmp     ecx, r15d
 * 00000001402A7401: jg      short loc_1402A7453
 * 00000001402A7403: jz      short loc_1402A746C
 * 00000001402A7405: sub     ecx, 1
 * 00000001402A7408: jz      short loc_1402A746C
 * 00000001402A740A: sub     ecx, 6
 * 00000001402A740D: jz      short loc_1402A7442
 * 00000001402A740F: sub     ecx, 1
 * 00000001402A7412: jz      short loc_1402A7438
 * 00000001402A7414: cmp     ecx, esi
 * 00000001402A7416: jnz     loc_1402A74AB
 * 00000001402A741C: mov     eax, [r8+1Ch]
 * 00000001402A7420: add     eax, r14d
 * 00000001402A7423: shl     eax, 4
 * 00000001402A7426: jmp     loc_1402A74E2
 * 00000001402A742B: xor     r13d, r13d
 * 00000001402A742E: mov     eax, 0C000022Dh
 * 00000001402A7433: jmp     loc_1402A72E3
 * 00000001402A7438: movzx   eax, word ptr [r8+20h]
 * 00000001402A743D: jmp     loc_1402A74DC
 * 00000001402A7442: mov     eax, [r8+18h]
 * 00000001402A7446: add     eax, esi
 * 00000001402A7448: lea     eax, [rax+rax*2]
 * 00000001402A744B: shl     eax, 3
 * 00000001402A744E: jmp     loc_1402A74E2
 * 00000001402A7453: cmp     ecx, 1Ch
 * 00000001402A7456: jz      short loc_1402A74D7
 * 00000001402A7458: cmp     ecx, 1Eh
 * 00000001402A745B: jz      short loc_1402A74B2
 * 00000001402A745D: cmp     ecx, 20h ; ' '
 * 00000001402A7460: jle     short loc_1402A74AB
 * 00000001402A7462: cmp     ecx, 22h ; '"'
 * 00000001402A7465: jle     short loc_1402A7483
 * 00000001402A7467: cmp     ecx, 2Bh ; '+'
 * 00000001402A746A: jnz     short loc_1402A74AB
 * 00000001402A746C: mov     ecx, [r8+10h]
 * 00000001402A7470: mov     rax, r11
 * 00000001402A7473: mul     rcx
 * 00000001402A7476: shr     rdx, 3
 * 00000001402A747A: lea     eax, ds:30h[rdx*4]
 * 00000001402A7481: jmp     short loc_1402A74E2
 * 00000001402A7483: mov     ecx, [r8+20h]
 * 00000001402A7487: mov     edx, [r8+28h]
 * 00000001402A748B: and     ecx, 0FFFh
 * 00000001402A7491: add     rdx, 0FFFh
 * 00000001402A7498: add     rdx, rcx
 * 00000001402A749B: shr     rdx, 0Ch
 * 00000001402A749F: lea     eax, [rdx+rdx*4]
 * 00000001402A74A2: lea     eax, ds:30h[rax*4]
 * 00000001402A74A9: jmp     short loc_1402A74E2
 * 00000001402A74AB: mov     eax, 30h ; '0'
 * 00000001402A74B0: jmp     short loc_1402A74E2
 * 00000001402A74B2: mov     ecx, [r8+24h]
 * 00000001402A74B6: mov     rax, r11
 * 00000001402A74B9: dec     ecx
 * 00000001402A74BB: mul     rcx
 * 00000001402A74BE: movzx   eax, word ptr [r8+28h]
 * 00000001402A74C3: shr     rdx, 3
 * 00000001402A74C7: add     edx, 7
 * 00000001402A74CA: and     edx, 0FFFFFFF8h
 * 00000001402A74CD: add     eax, esi
 * 00000001402A74CF: lea     eax, [rax+rax*2]
 * 00000001402A74D2: lea     eax, [rdx+rax*8]
 * 00000001402A74D5: jmp     short loc_1402A74E2
 * 00000001402A74D7: movzx   eax, word ptr [r8+28h]
 * 00000001402A74DC: add     eax, 37h ; '7'
 * 00000001402A74DF: and     eax, 0FFFFFFF8h
 * 00000001402A74E2: add     r8, rax
 * 00000001402A74E5: mov     eax, 1
 * 00000001402A74EA: sub     r9, rax
 * 00000001402A74ED: jnz     loc_1402A73FB
 * 00000001402A74F3: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A74F7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A74FE: mov     r11d, [rbp+2150h+var_20EC]
 * 00000001402A7502: mov     r14, [rbp+2150h+var_20D0]
 * 00000001402A7509: mov     r15d, [rbp+2150h+var_2118]
 * 00000001402A750D: mov     r12, [rbp+2150h+var_2110]
 * 00000001402A7511: mov     r13, [rbp+2150h+var_2080]
 * 00000001402A7518: jmp     short loc_1402A751F
 * 00000001402A751A: mov     eax, 1
 * 00000001402A751F: mov     ecx, r8d
 * 00000001402A7522: mov     dword ptr [rbp+2150h+var_1F70], eax
 * 00000001402A7528: sub     ecx, r14d
 * 00000001402A752B: mov     dword ptr [rbp+2150h+var_1F70+4], r11d
 * 00000001402A7532: mov     [rbp+2150h+var_1F68], ecx
 * 00000001402A7538: mov     r10d, eax
 * 00000001402A753B: movsxd  rdx, dword ptr [r8]
 * 00000001402A753E: mov     r9d, r11d
 * 00000001402A7541: cmp     edx, 2Bh ; '+'
 * 00000001402A7544: ja      short loc_1402A7565
 * 00000001402A7546: mov     r11, 80000001002h
 * 00000001402A7550: bt      r11, rdx
 * 00000001402A7554: jnb     short loc_1402A7565
 * 00000001402A7556: cmp     [r8+8], r12
 * 00000001402A755A: jnz     short loc_1402A7565
 * 00000001402A755C: mov     eax, [rbp+2150h+var_2128]
 * 00000001402A755F: cmp     [r8+10h], eax
 * 00000001402A7563: jz      short loc_1402A758E
 * 00000001402A7565: lea     eax, [rdx-21h]
 * 00000001402A7568: mov     edx, 1
 * 00000001402A756D: cmp     eax, edx
 * 00000001402A756F: ja      short loc_1402A7577
 * 00000001402A7571: cmp     [r8+20h], r13
 * 00000001402A7575: jz      short loc_1402A758E
 * 00000001402A7577: add     r15d, edx
 * 00000001402A757A: mov     [rbp+2150h+var_2118], r15d
 * 00000001402A757E: cmp     r15d, [rbx+66Ch]
 * 00000001402A7585: jnb     short loc_1402A7593
 * 00000001402A7587: xor     edx, edx
 * 00000001402A7589: jmp     loc_1402A7393
 * 00000001402A758E: xor     r13d, r13d
 * 00000001402A7591: jmp     short loc_1402A7599
 * 00000001402A7593: xor     r13d, r13d
 * 00000001402A7596: mov     r8d, r13d
 * 00000001402A7599: test    r8, r8
 * 00000001402A759C: jz      short loc_1402A75A6
 * 00000001402A759E: mov     rsi, rbx
 * 00000001402A75A1: jmp     loc_1402A9255
 * 00000001402A75A6: mov     rax, [rbx+1F0h]
 * 00000001402A75AD: lea     r8, [rbp+2150h+var_2098]
 * 00000001402A75B4: mov     rcx, [rbp+2150h+var_20E8]
 * 00000001402A75B8: lea     rdx, [rbp+2150h+var_2068]
 * 00000001402A75BF: mov     [rbp+2150h+var_2050], rbx
 * 00000001402A75C6: call    KeGuardDispatchICall
 * 00000001402A75CB: mov     [rbp+2150h+var_2108], rax
 * 00000001402A75CF: test    rax, rax
 * 00000001402A75D2: jnz     short loc_1402A75E6
 * 00000001402A75D4: mov     [rbp+2150h+var_2100], 0C000007Bh
 * 00000001402A75DB: mov     r12d, 80000000h
 * 00000001402A75E1: jmp     loc_1402A919E
 * 00000001402A75E6: mov     r12, [rbp+2150h+var_2068]
 * 00000001402A75ED: lea     rax, [rbp+2150h+var_1F78]
 * 00000001402A75F4: mov     r13d, [rbp+2150h+var_2098]
 * 00000001402A75FB: xor     edx, edx
 * 00000001402A75FD: mov     [rbp+2150h+var_2128], r13d
 * 00000001402A7601: mov     [rbp+2150h+var_2110], r12
 * 00000001402A7605: mov     [rbp+2150h+var_1F80], rdx
 * 00000001402A760C: lea     ecx, [rdx+4]
 * 00000001402A760F: lea     r8d, [rdx+1]
 * 00000001402A7613: mov     [rax], dl
 * 00000001402A7615: add     rax, r8
 * 00000001402A7618: add     ecx, 0FFFFFFFFh
 * 00000001402A761B: jnz     short loc_1402A7613
 * 00000001402A761D: mov     r15d, edx
 * 00000001402A7620: mov     [rbp+2150h+var_2118], edx
 * 00000001402A7623: cmp     [rbx+66Ch], edx
 * 00000001402A7629: jbe     loc_1402A7834
 * 00000001402A762F: mov     ecx, [rbp+2150h+var_1F78]
 * 00000001402A7635: mov     r9d, dword ptr [rbp+2150h+var_1F80+4]
 * 00000001402A763C: mov     r10d, dword ptr [rbp+2150h+var_1F80]
 * 00000001402A7643: mov     rax, [rbx+8A8h]
 * 00000001402A764A: mov     r14, rbx
 * 00000001402A764D: test    rax, rax
 * 00000001402A7650: mov     r11d, edx
 * 00000001402A7653: cmovnz  r14, rax
 * 00000001402A7657: mov     [rbp+2150h+var_20D0], r14
 * 00000001402A765E: mov     r8d, [r14+668h]
 * 00000001402A7665: add     r8, r14
 * 00000001402A7668: test    r10d, r10d
 * 00000001402A766B: jz      short loc_1402A767B
 * 00000001402A766D: cmp     r9d, r15d
 * 00000001402A7670: ja      short loc_1402A767B
 * 00000001402A7672: mov     r8d, ecx
 * 00000001402A7675: mov     r11d, r9d
 * 00000001402A7678: add     r8, r14
 * 00000001402A767B: cmp     r11d, r15d
 * 00000001402A767E: jz      loc_1402A77BA
 * 00000001402A7684: mov     eax, r15d
 * 00000001402A7687: mov     esi, 2
 * 00000001402A768C: sub     eax, r11d
 * 00000001402A768F: add     r11d, eax
 * 00000001402A7692: mov     r9d, eax
 * 00000001402A7695: mov     [rbp+2150h+var_20EC], r11d
 * 00000001402A7699: mov     r11, 0AAAAAAAAAAAAAAABh
 * 00000001402A76A3: lea     r14d, [rsi+1]
 * 00000001402A76A7: lea     r15d, [rsi+0Ah]
 * 00000001402A76AB: mov     ecx, [r8]
 * 00000001402A76AE: cmp     ecx, r15d
 * 00000001402A76B1: jg      short loc_1402A76F6
 * 00000001402A76B3: jz      short loc_1402A770F
 * 00000001402A76B5: sub     ecx, 1
 * 00000001402A76B8: jz      short loc_1402A770F
 * 00000001402A76BA: sub     ecx, 6
 * 00000001402A76BD: jz      short loc_1402A76E5
 * 00000001402A76BF: sub     ecx, 1
 * 00000001402A76C2: jz      short loc_1402A76DB
 * 00000001402A76C4: cmp     ecx, esi
 * 00000001402A76C6: jnz     loc_1402A774E
 * 00000001402A76CC: mov     eax, [r8+1Ch]
 * 00000001402A76D0: add     eax, r14d
 * 00000001402A76D3: shl     eax, 4
 * 00000001402A76D6: jmp     loc_1402A7785
 * 00000001402A76DB: movzx   eax, word ptr [r8+20h]
 * 00000001402A76E0: jmp     loc_1402A777F
 * 00000001402A76E5: mov     eax, [r8+18h]
 * 00000001402A76E9: add     eax, esi
 * 00000001402A76EB: lea     eax, [rax+rax*2]
 * 00000001402A76EE: shl     eax, 3
 * 00000001402A76F1: jmp     loc_1402A7785
 * 00000001402A76F6: cmp     ecx, 1Ch
 * 00000001402A76F9: jz      short loc_1402A777A
 * 00000001402A76FB: cmp     ecx, 1Eh
 * 00000001402A76FE: jz      short loc_1402A7755
 * 00000001402A7700: cmp     ecx, 20h ; ' '
 * 00000001402A7703: jle     short loc_1402A774E
 * 00000001402A7705: cmp     ecx, 22h ; '"'
 * 00000001402A7708: jle     short loc_1402A7726
 * 00000001402A770A: cmp     ecx, 2Bh ; '+'
 * 00000001402A770D: jnz     short loc_1402A774E
 * 00000001402A770F: mov     ecx, [r8+10h]
 * 00000001402A7713: mov     rax, r11
 * 00000001402A7716: mul     rcx
 * 00000001402A7719: shr     rdx, 3
 * 00000001402A771D: lea     eax, ds:30h[rdx*4]
 * 00000001402A7724: jmp     short loc_1402A7785
 * 00000001402A7726: mov     ecx, [r8+20h]
 * 00000001402A772A: mov     edx, [r8+28h]
 * 00000001402A772E: and     ecx, 0FFFh
 * 00000001402A7734: add     rdx, 0FFFh
 * 00000001402A773B: add     rdx, rcx
 * 00000001402A773E: shr     rdx, 0Ch
 * 00000001402A7742: lea     eax, [rdx+rdx*4]
 * 00000001402A7745: lea     eax, ds:30h[rax*4]
 * 00000001402A774C: jmp     short loc_1402A7785
 * 00000001402A774E: mov     eax, 30h ; '0'
 * 00000001402A7753: jmp     short loc_1402A7785
 * 00000001402A7755: mov     ecx, [r8+24h]
 * 00000001402A7759: mov     rax, r11
 * 00000001402A775C: dec     ecx
 * 00000001402A775E: mul     rcx
 * 00000001402A7761: movzx   eax, word ptr [r8+28h]
 * 00000001402A7766: shr     rdx, 3
 * 00000001402A776A: add     edx, 7
 * 00000001402A776D: and     edx, 0FFFFFFF8h
 * 00000001402A7770: add     eax, esi
 * 00000001402A7772: lea     eax, [rax+rax*2]
 * 00000001402A7775: lea     eax, [rdx+rax*8]
 * 00000001402A7778: jmp     short loc_1402A7785
 * 00000001402A777A: movzx   eax, word ptr [r8+28h]
 * 00000001402A777F: add     eax, 37h ; '7'
 * 00000001402A7782: and     eax, 0FFFFFFF8h
 * 00000001402A7785: add     r8, rax
 * 00000001402A7788: mov     eax, 1
 * 00000001402A778D: sub     r9, rax
 * 00000001402A7790: jnz     loc_1402A76AB
 * 00000001402A7796: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402A779A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A77A1: mov     r11d, [rbp+2150h+var_20EC]
 * 00000001402A77A5: mov     r14, [rbp+2150h+var_20D0]
 * 00000001402A77AC: mov     r15d, [rbp+2150h+var_2118]
 * 00000001402A77B0: mov     r12, [rbp+2150h+var_2110]
 * 00000001402A77B4: mov     r13d, [rbp+2150h+var_2128]
 * 00000001402A77B8: jmp     short loc_1402A77BF
 * 00000001402A77BA: mov     eax, 1
 * 00000001402A77BF: mov     ecx, r8d
 * 00000001402A77C2: mov     dword ptr [rbp+2150h+var_1F80], eax
 * 00000001402A77C8: sub     ecx, r14d
 * 00000001402A77CB: mov     dword ptr [rbp+2150h+var_1F80+4], r11d
 * 00000001402A77D2: mov     [rbp+2150h+var_1F78], ecx
 * 00000001402A77D8: mov     r10d, eax
 * 00000001402A77DB: movsxd  rdx, dword ptr [r8]
 * 00000001402A77DE: mov     r9d, r11d
 * 00000001402A77E1: cmp     edx, 2Bh ; '+'
 * 00000001402A77E4: ja      short loc_1402A7806
 * 00000001402A77E6: mov     r11, 80000001002h
 * 00000001402A77F0: bt      r11, rdx
 * 00000001402A77F4: jnb     short loc_1402A7806
 * 00000001402A77F6: mov     rax, [rbp+2150h+var_2108]
 * 00000001402A77FA: cmp     [r8+8], rax
 * 00000001402A77FE: jnz     short loc_1402A7806
 * 00000001402A7800: cmp     [r8+10h], r13d
 * 00000001402A7804: jz      short loc_1402A782F
 * 00000001402A7806: lea     eax, [rdx-21h]
 * 00000001402A7809: mov     edx, 1
 * 00000001402A780E: cmp     eax, edx
 * 00000001402A7810: ja      short loc_1402A7818
 * 00000001402A7812: cmp     [r8+20h], r12
 * 00000001402A7816: jz      short loc_1402A782F
 * 00000001402A7818: add     r15d, edx
 * 00000001402A781B: mov     [rbp+2150h+var_2118], r15d
 * 00000001402A781F: cmp     r15d, [rbx+66Ch]
 * 00000001402A7826: jnb     short loc_1402A7834
 * 00000001402A7828: xor     edx, edx
 * 00000001402A782A: jmp     loc_1402A7643
 * 00000001402A782F: xor     r13d, r13d
 * 00000001402A7832: jmp     short loc_1402A783A
 * 00000001402A7834: xor     r13d, r13d
 * 00000001402A7837: mov     r8d, r13d
 * 00000001402A783A: mov     [rbp+2150h+var_1FD8], r8
 * 00000001402A7841: test    r8, r8
 * 00000001402A7844: jnz     loc_1402A91A6
 * 00000001402A784A: mov     rax, [rbx+298h]
 * 00000001402A7851: mov     rcx, [rbp+2150h+var_20E8]
 * 00000001402A7855: call    KeGuardDispatchICall
 * 00000001402A785A: mov     ecx, [rbp+2150h+var_2098]
 * 00000001402A7860: mov     [rbp+2150h+var_20B0], ecx
 * 00000001402A7866: mov     [rbp+2150h+var_2118], eax
 * 00000001402A7869: test    eax, eax
 * 00000001402A786B: jz      loc_1402A91A6
 * 00000001402A7871: test    dword ptr [rbx+7D8h], 40000000h
 * 00000001402A787B: jz      short loc_1402A78A7
 * 00000001402A787D: mov     rdx, [rbp+2150h+var_2068]
 * 00000001402A7884: lea     rcx, [rbp+2150h+var_2048]
 * 00000001402A788B: mov     r8d, 0Fh
 * 00000001402A7891: call    sub_14080CF60
 * 00000001402A7896: mov     rsi, [rbp+2150h+var_2048]
 * 00000001402A789D: mov     ecx, eax
 * 00000001402A789F: mov     [rbp+2150h+var_2100], eax
 * 00000001402A78A2: jmp     loc_1402A9184
 * 00000001402A78A7: mov     rax, [rbx+1E0h]
 * 00000001402A78AE: lea     r9, [rbp+2150h+var_2098]
 * 00000001402A78B5: mov     rcx, [rbp+2150h+var_2068]
 * 00000001402A78BC: xor     r8d, r8d
 * 00000001402A78BF: mov     [rbp+2150h+var_1C98], r13
 * 00000001402A78C6: mov     [rbp+2150h+var_1E58], r13d
 * 00000001402A78CD: lea     r15d, [r8+1]
 * 00000001402A78D1: mov     dl, r15b
 * 00000001402A78D4: call    KeGuardDispatchICall
 * 00000001402A78D9: mov     rdx, rax
 * 00000001402A78DC: lea     r8d, [r15+0Bh]
 * 00000001402A78E0: neg     rax
 * 00000001402A78E3: mov     [rbp+2150h+var_1CB0], rdx
 * 00000001402A78EA: lea     r9, [rbp+2150h+var_2098]
 * 00000001402A78F1: mov     dl, r15b
 * 00000001402A78F4: sbb     ecx, ecx
 * 00000001402A78F6: and     ecx, [rbp+2150h+var_2098]
 * 00000001402A78FC: mov     [rbp+2150h+var_2098], ecx
 * 00000001402A7902: mov     rax, [rbx+1E0h]
 * 00000001402A7909: mov     [rbp+2150h+var_1E64], ecx
 * 00000001402A790F: mov     rcx, [rbp+2150h+var_2068]
 * 00000001402A7916: call    KeGuardDispatchICall
 * 00000001402A791B: mov     rdx, rax
 * 00000001402A791E: mov     [rbp+2150h+var_2130], rax
 * 00000001402A7922: neg     rax
 * 00000001402A7925: mov     [rbp+2150h+var_1CA8], rdx
 * 00000001402A792C: lea     r8d, [r15+9]
 * 00000001402A7930: mov     dl, r15b
 * 00000001402A7933: sbb     ecx, ecx
 * 00000001402A7935: lea     r9, [rbp+2150h+var_2098]
 * 00000001402A793C: and     ecx, [rbp+2150h+var_2098]
 * 00000001402A7942: mov     [rbp+2150h+var_2098], ecx
 * 00000001402A7948: mov     rax, [rbx+1E0h]
 * 00000001402A794F: mov     [rbp+2150h+var_2094], ecx
 * 00000001402A7955: mov     [rbp+2150h+var_1E60], ecx
 * 00000001402A795B: mov     rcx, [rbp+2150h+var_2068]
 * 00000001402A7962: call    KeGuardDispatchICall
 * 00000001402A7967: mov     rdx, rax
 * 00000001402A796A: neg     rax
 * 00000001402A796D: mov     [rbp+2150h+var_1CA0], rdx
 * 00000001402A7974: sbb     ecx, ecx
 * 00000001402A7976: and     ecx, [rbp+2150h+var_2098]
 * 00000001402A797C: mov     [rbp+2150h+var_2098], ecx
 * 00000001402A7982: mov     rax, [rbx+1E8h]
 * 00000001402A7989: mov     [rbp+2150h+var_1E5C], ecx
 * 00000001402A798F: mov     rcx, [rbp+2150h+var_2068]
 * 00000001402A7996: call    KeGuardDispatchICall
 * 00000001402A799B: mov     rcx, rax
 * 00000001402A799E: test    rax, rax
 * 00000001402A79A1: jz      loc_1402A75D4
 * 00000001402A79A7: mov     rax, [rbp+2150h+var_2068]
 * 00000001402A79AE: mov     r15d, [rbx+644h]
 * 00000001402A79B5: mov     r8d, [rbx+77Ch]
 * 00000001402A79BC: mov     [rbp+2150h+var_1CB8], rax
 * 00000001402A79C3: mov     eax, [rcx+54h]
 * 00000001402A79C6: mov     [rbp+2150h+var_1E68], eax
 * 00000001402A79CC: lea     eax, [r15+0F0h]
 * 00000001402A79D3: cmp     eax, [rbx+85Ch]
 * 00000001402A79D9: jbe     loc_1402A7ACD
 * 00000001402A79DF: mov     edx, eax
 * 00000001402A79E1: mov     rcx, rbx
 * 00000001402A79E4: call    sub_1402AEFBC
 * 00000001402A79E9: mov     [rbp+2150h+var_20E8], rax
 * 00000001402A79ED: mov     r14, rax
 * 00000001402A79F0: test    rax, rax
 * 00000001402A79F3: jz      loc_1402A7AC1
 * 00000001402A79F9: mov     edx, [rbx+7D8h]
 * 00000001402A79FF: test    dl, 4
 * 00000001402A7A02: jnz     loc_1402A7AB7
 * 00000001402A7A08: mov     ecx, [rbx+644h]
 * 00000001402A7A0E: and     edx, 20000000h
 * 00000001402A7A14: mov     r9, [rbx+628h]
 * 00000001402A7A1B: neg     edx
 * 00000001402A7A1D: mov     edx, 1
 * 00000001402A7A22: sbb     r8d, r8d
 * 00000001402A7A25: and     r8d, [rbx+77Ch]
 * 00000001402A7A2C: cmp     ecx, 8
 * 00000001402A7A2F: jb      short loc_1402A7A46
 * 00000001402A7A31: mov     eax, ecx
 * 00000001402A7A33: shr     rax, 3
 * 00000001402A7A37: mov     [rbx], r13
 * 00000001402A7A3A: add     ecx, 0FFFFFFF8h
 * 00000001402A7A3D: add     rbx, 8
 * 00000001402A7A41: sub     rax, rdx
 * 00000001402A7A44: jnz     short loc_1402A7A37
 * 00000001402A7A46: test    ecx, ecx
 * 00000001402A7A48: jz      short loc_1402A7A55
 * 00000001402A7A4A: mov     [rbx], r13b
 * 00000001402A7A4D: add     rbx, rdx
 * 00000001402A7A50: add     ecx, 0FFFFFFFFh
 * 00000001402A7A53: jnz     short loc_1402A7A4A
 * 00000001402A7A55: mov     ebx, [r14+77Ch]
 * 00000001402A7A5C: mov     eax, 3
 * 00000001402A7A61: mov     [r14+77Ch], r8d
 * 00000001402A7A68: cmp     r8d, eax
 * 00000001402A7A6B: jz      short loc_1402A7AA1
 * 00000001402A7A6D: test    dword ptr [r14+7D8h], 10000000h
 * 00000001402A7A78: mov     ecx, r13d
 * 00000001402A7A7B: cmovz   ecx, r8d
 * 00000001402A7A7F: test    ecx, ecx
 * 00000001402A7A81: jz      short loc_1402A7A98
 * 00000001402A7A83: mov     rax, [r14+218h]
 * 00000001402A7A8A: lea     rcx, [r9-8]
 * 00000001402A7A8E: mov     rdx, [rcx]
 * 00000001402A7A91: call    KeGuardDispatchICall
 * 00000001402A7A96: jmp     short loc_1402A7AB0
 * 00000001402A7A98: mov     rax, [r14+0F0h]
 * 00000001402A7A9F: jmp     short loc_1402A7AA8
 * 00000001402A7AA1: mov     rax, [r14+358h]
 * 00000001402A7AA8: mov     rcx, r9
 * 00000001402A7AAB: call    KeGuardDispatchICall
 * 00000001402A7AB0: mov     [r14+77Ch], ebx
 * 00000001402A7AB7: and     dword ptr [r14+7D8h], 0FFFFFFFBh
 * 00000001402A7ABF: jmp     short loc_1402A7ADA
 * 00000001402A7AC1: mov     [rbp+2150h+var_2050], r13
 * 00000001402A7AC8: jmp     loc_1402A75DB
 * 00000001402A7ACD: mov     r14, rbx
 * 00000001402A7AD0: mov     [rbp+2150h+var_20E8], rbx
 * 00000001402A7AD4: mov     [rbx+644h], eax
 * 00000001402A7ADA: mov     eax, 5
 * 00000001402A7ADF: lea     r10, [r14+r15]
 * 00000001402A7AE3: add     [r14+66Ch], eax
 * 00000001402A7AEA: lea     r13, [rbp+2150h+var_1CB8]
 * 00000001402A7AF1: xor     ebx, ebx
 * 00000001402A7AF3: mov     [rbp+2150h+var_1E08], r10
 * 00000001402A7AFA: mov     [rbp+2150h+var_1FD8], r10
 * 00000001402A7B01: lea     rdi, [rbp+2150h+var_1E68]
 * 00000001402A7B08: mov     [rbp+2150h+var_2148], rax
 * 00000001402A7B0C: mov     r15d, [rdi]
 * 00000001402A7B0F: mov     ecx, 30h ; '0'
 * 00000001402A7B14: mov     rsi, [r13+0]
 * 00000001402A7B18: mov     rax, r10
 * 00000001402A7B1B: mov     [rbp+2150h+var_20EC], r15d
 * 00000001402A7B1F: lea     edx, [rcx-2Ah]
 * 00000001402A7B22: lea     r8d, [rcx-2Fh]
 * 00000001402A7B26: mov     [rax], rbx
 * 00000001402A7B29: add     ecx, 0FFFFFFF8h
 * 00000001402A7B2C: add     rax, 8
 * 00000001402A7B30: sub     rdx, r8
 * 00000001402A7B33: jnz     short loc_1402A7B26
 * 00000001402A7B35: mov     rdx, r8
 * 00000001402A7B38: test    ecx, ecx
 * 00000001402A7B3A: jz      short loc_1402A7B46
 * 00000001402A7B3C: mov     [rax], bl
 * 00000001402A7B3E: add     rax, rdx
 * 00000001402A7B41: add     ecx, 0FFFFFFFFh
 * 00000001402A7B44: jnz     short loc_1402A7B3C
 * 00000001402A7B46: mov     dword ptr [r10], 0Bh
 * 00000001402A7B4D: lea     rcx, [rsi+r15]
 * 00000001402A7B51: mov     [r10+8], rsi
 * 00000001402A7B55: mov     r9, rsi
 * 00000001402A7B58: mov     [r10+10h], r15d
 * 00000001402A7B5C: mov     rax, rsi
 * 00000001402A7B5F: add     [r14+688h], r15d
 * 00000001402A7B66: mov     r11d, [r14+674h]
 * 00000001402A7B6D: mov     r12, [r14+678h]
 * 00000001402A7B74: cmp     rsi, rcx
 * 00000001402A7B77: jnb     short loc_1402A7B8A
 * 00000001402A7B79: mov     r8d, 40h ; '@'
 * 00000001402A7B7F: prefetchnta byte ptr [rax]
 * 00000001402A7B82: add     rax, r8
 * 00000001402A7B85: cmp     rax, rcx
 * 00000001402A7B88: jb      short loc_1402A7B7F
 * 00000001402A7B8A: mov     ebx, r15d
 * 00000001402A7B8D: mov     r8, r12
 * 00000001402A7B90: shr     ebx, 7
 * 00000001402A7B93: test    ebx, ebx
 * 00000001402A7B95: jz      short loc_1402A7BFE
 * 00000001402A7B97: mov     r15, 7010008004002001h
 * 00000001402A7BA1: mov     eax, 8
 * 00000001402A7BA6: xor     r8, [r9]
 * 00000001402A7BA9: mov     ecx, r11d
 * 00000001402A7BAC: rol     r8, cl
 * 00000001402A7BAF: xor     r8, [r9+8]
 * 00000001402A7BB3: add     r9, 10h
 * 00000001402A7BB7: rol     r8, cl
 * 00000001402A7BBA: sub     rax, rdx
 * 00000001402A7BBD: jnz     short loc_1402A7BA6
 * 00000001402A7BBF: mov     rcx, r9
 * 00000001402A7BC2: sub     rcx, rsi
 * 00000001402A7BC5: xor     rcx, r12
 * 00000001402A7BC8: mov     rax, rcx
 * 00000001402A7BCB: rol     rax, 11h
 * 00000001402A7BCF: xor     rcx, rax
 * 00000001402A7BD2: mov     rax, r15
 * 00000001402A7BD5: mul     rcx
 * 00000001402A7BD8: xor     eax, edx
 * 00000001402A7BDA: mov     [rbp+2150h+var_1A50], rdx
 * 00000001402A7BE1: xor     r11d, eax
 * 00000001402A7BE4: mov     edx, 1
 * 00000001402A7BE9: and     r11d, 3Fh
 * 00000001402A7BED: cmovz   r11d, edx
 * 00000001402A7BF1: add     ebx, 0FFFFFFFFh
 * 00000001402A7BF4: jnz     short loc_1402A7BA1
 * 00000001402A7BF6: mov     r14, [rbp+2150h+var_20E8]
 * 00000001402A7BFA: mov     r15d, [rbp+2150h+var_20EC]
 * 00000001402A7BFE: mov     edx, r15d
 * 00000001402A7C01: mov     esi, 1
 * 00000001402A7C06: and     edx, 7Fh
 * 00000001402A7C09: cmp     edx, 8
 * 00000001402A7C0C: jb      short loc_1402A7C29
 * 00000001402A7C0E: mov     eax, edx
 * 00000001402A7C10: shr     rax, 3
 * 00000001402A7C14: xor     r8, [r9]
 * 00000001402A7C17: mov     ecx, r11d
 * 00000001402A7C1A: rol     r8, cl
 * 00000001402A7C1D: add     r9, 8
 * 00000001402A7C21: add     edx, 0FFFFFFF8h
 * 00000001402A7C24: sub     rax, rsi
 * 00000001402A7C27: jnz     short loc_1402A7C14
 * 00000001402A7C29: xor     ebx, ebx
 * 00000001402A7C2B: test    edx, edx
 * 00000001402A7C2D: jz      short loc_1402A7C44
 * 00000001402A7C2F: movzx   eax, byte ptr [r9]
 * 00000001402A7C33: mov     ecx, r11d
 * 00000001402A7C36: xor     r8, rax
 * 00000001402A7C39: add     r9, rsi
 * 00000001402A7C3C: rol     r8, cl
 * 00000001402A7C3F: add     edx, 0FFFFFFFFh
 * 00000001402A7C42: jnz     short loc_1402A7C2F
 * 00000001402A7C44: mov     rax, r8
 * 00000001402A7C47: jmp     short loc_1402A7C4C
 * 00000001402A7C49: xor     r8d, eax
 * 00000001402A7C4C: shr     rax, 1Fh
 * 00000001402A7C50: test    rax, rax
 * 00000001402A7C53: jnz     short loc_1402A7C49
 * 00000001402A7C55: btr     r8d, 1Fh
 * 00000001402A7C5A: add     rdi, 4
 * 00000001402A7C5E: mov     [r10+14h], r8d
 * 00000001402A7C62: add     r13, 8
 * 00000001402A7C66: add     [r14+688h], r15d
 * 00000001402A7C6D: lea     r15d, [rax+1]
 * 00000001402A7C71: mov     r10, [rbp+2150h+var_1E08]
 * 00000001402A7C78: add     r10, 30h ; '0'
 * 00000001402A7C7C: sub     [rbp+2150h+var_2148], r15
 * 00000001402A7C80: mov     [rbp+2150h+var_1E08], r10
 * 00000001402A7C87: jnz     loc_1402A7B0C
 * 00000001402A7C8D: mov     rax, [rbp+2150h+var_2068]
 * 00000001402A7C94: mov     rsi, r14
 * 00000001402A7C97: mov     rcx, [rbp+2150h+var_1FD8]
 * 00000001402A7C9E: mov     r8d, [rbp+2150h+var_20B0]
 * 00000001402A7CA5: mov     rdx, [rbp+2150h+var_2108]
 * 00000001402A7CA9: mov     [rbp+2150h+var_2050], r14
 * 00000001402A7CB0: mov     dword ptr [rcx], 2Ch ; ','
 * 00000001402A7CB6: mov     [rcx+18h], rax
 * 00000001402A7CBA: lea     eax, [r15+1]
 * 00000001402A7CBE: or      [rcx+20h], eax
 * 00000001402A7CC1: lea     rax, [rbp+2150h+var_1EDC]
 * 00000001402A7CC8: mov     r9, [rbp+2150h+var_2068]
 * 00000001402A7CCF: lea     rcx, [rbp+2150h+var_2050]
 * 00000001402A7CD6: mov     [rsp+1120h+var_10E8], rax
 * 00000001402A7CDB: lea     rax, [rbp+2150h+var_1FB0]
 * 00000001402A7CE2: mov     [rsp+1120h+var_10F0], rax
 * 00000001402A7CE7: lea     eax, [r15+0Eh]
 * 00000001402A7CEB: mov     dword ptr [rsp+1120h+var_10F8], eax
 * 00000001402A7CEF: mov     eax, [rbp+2150h+var_2118]
 * 00000001402A7CF2: mov     dword ptr [rsp+1120h+BugCheckParameter4], eax
 * 00000001402A7CF6: mov     [rbp+2150h+var_2048], r14
 * 00000001402A7CFD: call    sub_1402AE570
 * 00000001402A7D02: xor     r13d, r13d
 * 00000001402A7D05: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A7D0C: test    eax, eax
 * 00000001402A7D0E: jns     short loc_1402A7D1A
 * 00000001402A7D10: mov     ecx, eax
 * 00000001402A7D12: mov     [rbp+2150h+var_2100], eax
 * 00000001402A7D15: jmp     loc_1402A9184
 * 00000001402A7D1A: mov     rsi, [rbp+2150h+var_2050]
 * 00000001402A7D21: mov     rcx, [rbp+2150h+var_1FD8]
 * 00000001402A7D28: mov     rax, rsi
 * 00000001402A7D2B: mov     r9d, [rbp+2150h+var_1EDC]
 * 00000001402A7D32: sub     rax, r14
 * 00000001402A7D35: mov     ebx, [rbp+2150h+var_1FB0]
 * 00000001402A7D3B: add     rcx, rax
 * 00000001402A7D3E: sub     r9d, [rbp+2150h+var_1FB0]
 * 00000001402A7D45: add     rbx, [rbp+2150h+var_2068]
 * 00000001402A7D4C: mov     [rbp+2150h+var_1FD8], rcx
 * 00000001402A7D53: xor     r8d, r8d
 * 00000001402A7D56: lea     r12, [rcx+0C0h]
 * 00000001402A7D5D: mov     [rbp+2150h+var_2048], rsi
 * 00000001402A7D64: mov     ecx, 30h ; '0'
 * 00000001402A7D69: mov     [rbp+2150h+var_20D0], r12
 * 00000001402A7D70: mov     rax, r12
 * 00000001402A7D73: lea     r13d, [rcx-2Ah]
 * 00000001402A7D77: mov     edx, r13d
 * 00000001402A7D7A: mov     [rax], r8
 * 00000001402A7D7D: add     ecx, 0FFFFFFF8h
 * 00000001402A7D80: add     rax, 8
 * 00000001402A7D84: sub     rdx, r15
 * 00000001402A7D87: jnz     short loc_1402A7D7A
 * 00000001402A7D89: test    ecx, ecx
 * 00000001402A7D8B: jz      short loc_1402A7D97
 * 00000001402A7D8D: mov     [rax], dl
 * 00000001402A7D8F: add     rax, r15
 * 00000001402A7D92: add     ecx, 0FFFFFFFFh
 * 00000001402A7D95: jnz     short loc_1402A7D8D
 * 00000001402A7D97: mov     dword ptr [r12], 0Bh
 * 00000001402A7D9F: mov     r10, rbx
 * 00000001402A7DA2: mov     [r12+8], rbx
 * 00000001402A7DA7: mov     rax, rbx
 * 00000001402A7DAA: mov     [r12+10h], r9d
 * 00000001402A7DAF: add     [rsi+688h], r9d
 * 00000001402A7DB6: mov     r11d, [rsi+674h]
 * 00000001402A7DBD: mov     r15, [rsi+678h]
 * 00000001402A7DC4: mov     ecx, r9d
 * 00000001402A7DC7: add     rcx, rbx
 * 00000001402A7DCA: cmp     rbx, rcx
 * 00000001402A7DCD: jnb     short loc_1402A7DE0
 * 00000001402A7DCF: mov     r8d, 40h ; '@'
 * 00000001402A7DD5: prefetchnta byte ptr [rax]
 * 00000001402A7DD8: add     rax, r8
 * 00000001402A7DDB: cmp     rax, rcx
 * 00000001402A7DDE: jb      short loc_1402A7DD5
 * 00000001402A7DE0: mov     r14d, r9d
 * 00000001402A7DE3: mov     r8, r15
 * 00000001402A7DE6: shr     r14d, 7
 * 00000001402A7DEA: test    r14d, r14d
 * 00000001402A7DED: jz      short loc_1402A7E64
 * 00000001402A7DEF: mov     r12, 7010008004002001h
 * 00000001402A7DF9: mov     edx, 8
 * 00000001402A7DFE: lea     edi, [rdx-7]
 * 00000001402A7E01: mov     rax, [r10]
 * 00000001402A7E04: mov     ecx, r11d
 * 00000001402A7E07: xor     rax, r8
 * 00000001402A7E0A: mov     r8, [r10+8]
 * 00000001402A7E0E: rol     rax, cl
 * 00000001402A7E11: add     r10, 10h
 * 00000001402A7E15: xor     r8, rax
 * 00000001402A7E18: rol     r8, cl
 * 00000001402A7E1B: sub     rdx, rdi
 * 00000001402A7E1E: jnz     short loc_1402A7E01
 * 00000001402A7E20: mov     rcx, r10
 * 00000001402A7E23: sub     rcx, rbx
 * 00000001402A7E26: xor     rcx, r15
 * 00000001402A7E29: mov     rax, rcx
 * 00000001402A7E2C: rol     rax, 11h
 * 00000001402A7E30: xor     rcx, rax
 * 00000001402A7E33: mov     rax, r12
 * 00000001402A7E36: mul     rcx
 * 00000001402A7E39: xor     eax, edx
 * 00000001402A7E3B: mov     [rbp+2150h+var_1A48], rdx
 * 00000001402A7E42: xor     r11d, eax
 * 00000001402A7E45: mov     rax, rdi
 * 00000001402A7E48: and     r11d, 3Fh
 * 00000001402A7E4C: cmovz   r11d, eax
 * 00000001402A7E50: add     r14d, 0FFFFFFFFh
 * 00000001402A7E54: jnz     short loc_1402A7DF9
 * 00000001402A7E56: mov     r12, [rbp+2150h+var_20D0]
 * 00000001402A7E5D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A7E64: and     r9d, 7Fh
 * 00000001402A7E68: mov     r15d, 1
 * 00000001402A7E6E: cmp     r9d, 8
 * 00000001402A7E72: jb      short loc_1402A7E91
 * 00000001402A7E74: mov     edx, r9d
 * 00000001402A7E77: shr     rdx, 3
 * 00000001402A7E7B: xor     r8, [r10]
 * 00000001402A7E7E: mov     ecx, r11d
 * 00000001402A7E81: rol     r8, cl
 * 00000001402A7E84: add     r10, 8
 * 00000001402A7E88: add     r9d, 0FFFFFFF8h
 * 00000001402A7E8C: sub     rdx, r15
 * 00000001402A7E8F: jnz     short loc_1402A7E7B
 * 00000001402A7E91: test    r9d, r9d
 * 00000001402A7E94: jz      short loc_1402A7EAC
 * 00000001402A7E96: movzx   eax, byte ptr [r10]
 * 00000001402A7E9A: mov     ecx, r11d
 * 00000001402A7E9D: xor     r8, rax
 * 00000001402A7EA0: add     r10, r15
 * 00000001402A7EA3: rol     r8, cl
 * 00000001402A7EA6: add     r9d, 0FFFFFFFFh
 * 00000001402A7EAA: jnz     short loc_1402A7E96
 * 00000001402A7EAC: mov     rax, r8
 * 00000001402A7EAF: shr     rax, 1Fh
 * 00000001402A7EB3: xor     r11d, r11d
 * 00000001402A7EB6: jmp     short loc_1402A7EBF
 * 00000001402A7EB8: xor     r8d, eax
 * 00000001402A7EBB: shr     rax, 1Fh
 * 00000001402A7EBF: test    rax, rax
 * 00000001402A7EC2: jnz     short loc_1402A7EB8
 * 00000001402A7EC4: btr     r8d, 1Fh
 * 00000001402A7EC9: mov     [r12+14h], r8d
 * 00000001402A7ECE: mov     rax, [rbp+2150h+var_1FD8]
 * 00000001402A7ED5: add     rax, 60h ; '`'
 * 00000001402A7ED9: mov     [rbp+2150h+var_1F28], rax
 * 00000001402A7EE0: jnz     loc_1402A8177
 * 00000001402A7EE6: mov     r14d, [rsi+644h]
 * 00000001402A7EED: mov     r8d, [rsi+77Ch]
 * 00000001402A7EF4: lea     eax, [r14+30h]
 * 00000001402A7EF8: cmp     eax, [rsi+85Ch]
 * 00000001402A7EFE: jbe     loc_1402A7FF8
 * 00000001402A7F04: mov     edx, eax
 * 00000001402A7F06: mov     rcx, rsi
 * 00000001402A7F09: call    sub_1402AEFBC
 * 00000001402A7F0E: xor     r11d, r11d
 * 00000001402A7F11: mov     rbx, rax
 * 00000001402A7F14: test    rax, rax
 * 00000001402A7F17: jz      loc_1402A7FDF
 * 00000001402A7F1D: mov     edx, [rsi+7D8h]
 * 00000001402A7F23: test    dl, 4
 * 00000001402A7F26: jnz     loc_1402A7FD6
 * 00000001402A7F2C: mov     ecx, [rsi+644h]
 * 00000001402A7F32: and     edx, 20000000h
 * 00000001402A7F38: mov     r9, [rsi+628h]
 * 00000001402A7F3F: neg     edx
 * 00000001402A7F41: sbb     r8d, r8d
 * 00000001402A7F44: and     r8d, [rsi+77Ch]
 * 00000001402A7F4B: cmp     ecx, 8
 * 00000001402A7F4E: jb      short loc_1402A7F65
 * 00000001402A7F50: mov     eax, ecx
 * 00000001402A7F52: shr     rax, 3
 * 00000001402A7F56: mov     [rsi], r11
 * 00000001402A7F59: add     ecx, 0FFFFFFF8h
 * 00000001402A7F5C: add     rsi, 8
 * 00000001402A7F60: sub     rax, r15
 * 00000001402A7F63: jnz     short loc_1402A7F56
 * 00000001402A7F65: test    ecx, ecx
 * 00000001402A7F67: jz      short loc_1402A7F74
 * 00000001402A7F69: mov     [rsi], r11b
 * 00000001402A7F6C: add     rsi, r15
 * 00000001402A7F6F: add     ecx, 0FFFFFFFFh
 * 00000001402A7F72: jnz     short loc_1402A7F69
 * 00000001402A7F74: mov     esi, [rbx+77Ch]
 * 00000001402A7F7A: mov     eax, 3
 * 00000001402A7F7F: mov     [rbx+77Ch], r8d
 * 00000001402A7F86: cmp     r8d, eax
 * 00000001402A7F89: jz      short loc_1402A7FBE
 * 00000001402A7F8B: test    dword ptr [rbx+7D8h], 10000000h
 * 00000001402A7F95: mov     ecx, r11d
 * 00000001402A7F98: cmovz   ecx, r8d
 * 00000001402A7F9C: test    ecx, ecx
 * 00000001402A7F9E: jz      short loc_1402A7FB5
 * 00000001402A7FA0: mov     rax, [rbx+218h]
 * 00000001402A7FA7: lea     rcx, [r9-8]
 * 00000001402A7FAB: mov     rdx, [rcx]
 * 00000001402A7FAE: call    KeGuardDispatchICall
 * 00000001402A7FB3: jmp     short loc_1402A7FCD
 * 00000001402A7FB5: mov     rax, [rbx+0F0h]
 * 00000001402A7FBC: jmp     short loc_1402A7FC5
 * 00000001402A7FBE: mov     rax, [rbx+358h]
 * 00000001402A7FC5: mov     rcx, r9
 * 00000001402A7FC8: call    KeGuardDispatchICall
 * 00000001402A7FCD: mov     [rbx+77Ch], esi
 * 00000001402A7FD3: xor     r11d, r11d
 * 00000001402A7FD6: and     dword ptr [rbx+7D8h], 0FFFFFFFBh
 * 00000001402A7FDD: jmp     short loc_1402A8001
 * 00000001402A7FDF: xor     r13d, r13d
 * 00000001402A7FE2: mov     [rbp+2150h+var_2100], 0C000009Ah
 * 00000001402A7FE9: mov     [rbp+2150h+var_2050], r13
 * 00000001402A7FF0: mov     rbx, rsi
 * 00000001402A7FF3: jmp     loc_1402A75DB
 * 00000001402A7FF8: mov     rbx, rsi
 * 00000001402A7FFB: mov     [rsi+644h], eax
 * 00000001402A8001: add     [rbx+66Ch], r15d
 * 00000001402A8008: lea     rsi, [rbx+r14]
 * 00000001402A800C: mov     [rbp+2150h+var_1D88], rsi
 * 00000001402A8013: mov     rax, rsi
 * 00000001402A8016: mov     ecx, 30h ; '0'
 * 00000001402A801B: mov     rdx, r13
 * 00000001402A801E: mov     [rax], r11
 * 00000001402A8021: add     ecx, 0FFFFFFF8h
 * 00000001402A8024: add     rax, 8
 * 00000001402A8028: sub     rdx, r15
 * 00000001402A802B: jnz     short loc_1402A801E
 * 00000001402A802D: test    ecx, ecx
 * 00000001402A802F: jz      short loc_1402A803C
 * 00000001402A8031: mov     [rax], r11b
 * 00000001402A8034: add     rax, r15
 * 00000001402A8037: add     ecx, 0FFFFFFFFh
 * 00000001402A803A: jnz     short loc_1402A8031
 * 00000001402A803C: mov     r12, [rbp+2150h+var_2130]
 * 00000001402A8040: mov     r15d, [rbp+2150h+var_2094]
 * 00000001402A8047: mov     r9, r12
 * 00000001402A804A: mov     dword ptr [rsi], 0Eh
 * 00000001402A8050: mov     rax, r12
 * 00000001402A8053: mov     [rsi+8], r12
 * 00000001402A8057: mov     [rsi+10h], r15d
 * 00000001402A805B: add     [rbx+688h], r15d
 * 00000001402A8062: lea     rcx, [r12+r15]
 * 00000001402A8066: mov     r10d, [rbx+674h]
 * 00000001402A806D: mov     r14, [rbx+678h]
 * 00000001402A8074: cmp     r12, rcx
 * 00000001402A8077: jnb     short loc_1402A8089
 * 00000001402A8079: mov     edx, 40h ; '@'
 * 00000001402A807E: prefetchnta byte ptr [rax]
 * 00000001402A8081: add     rax, rdx
 * 00000001402A8084: cmp     rax, rcx
 * 00000001402A8087: jb      short loc_1402A807E
 * 00000001402A8089: mov     r11d, r15d
 * 00000001402A808C: mov     r8, r14
 * 00000001402A808F: shr     r11d, 7
 * 00000001402A8093: mov     r13d, 1
 * 00000001402A8099: test    r11d, r11d
 * 00000001402A809C: jz      short loc_1402A8106
 * 00000001402A809E: mov     r15, 7010008004002001h
 * 00000001402A80A8: mov     edx, 8
 * 00000001402A80AD: mov     rax, [r9]
 * 00000001402A80B0: mov     ecx, r10d
 * 00000001402A80B3: xor     rax, r8
 * 00000001402A80B6: mov     r8, [r9+8]
 * 00000001402A80BA: rol     rax, cl
 * 00000001402A80BD: add     r9, 10h
 * 00000001402A80C1: xor     r8, rax
 * 00000001402A80C4: rol     r8, cl
 * 00000001402A80C7: sub     rdx, r13
 * 00000001402A80CA: jnz     short loc_1402A80AD
 * 00000001402A80CC: mov     rcx, r9
 * 00000001402A80CF: sub     rcx, r12
 * 00000001402A80D2: xor     rcx, r14
 * 00000001402A80D5: mov     rax, rcx
 * 00000001402A80D8: rol     rax, 11h
 * 00000001402A80DC: xor     rcx, rax
 * 00000001402A80DF: mov     rax, r15
 * 00000001402A80E2: mul     rcx
 * 00000001402A80E5: xor     eax, edx
 * 00000001402A80E7: mov     [rbp+2150h+var_1A40], rdx
 * 00000001402A80EE: xor     r10d, eax
 * 00000001402A80F1: and     r10d, 3Fh
 * 00000001402A80F5: cmovz   r10d, r13d
 * 00000001402A80F9: add     r11d, 0FFFFFFFFh
 * 00000001402A80FD: jnz     short loc_1402A80A8
 * 00000001402A80FF: mov     r15d, [rbp+2150h+var_2094]
 * 00000001402A8106: mov     edx, r15d
 * 00000001402A8109: and     edx, 7Fh
 * 00000001402A810C: cmp     edx, 8
 * 00000001402A810F: jb      short loc_1402A812D
 * 00000001402A8111: mov     r11d, edx
 * 00000001402A8114: shr     r11, 3
 * 00000001402A8118: xor     r8, [r9]
 * 00000001402A811B: mov     ecx, r10d
 * 00000001402A811E: rol     r8, cl
 * 00000001402A8121: add     r9, 8
 * 00000001402A8125: add     edx, 0FFFFFFF8h
 * 00000001402A8128: sub     r11, r13
 * 00000001402A812B: jnz     short loc_1402A8118
 * 00000001402A812D: test    edx, edx
 * 00000001402A812F: jz      short loc_1402A8146
 * 00000001402A8131: movzx   eax, byte ptr [r9]
 * 00000001402A8135: mov     ecx, r10d
 * 00000001402A8138: xor     r8, rax
 * 00000001402A813B: add     r9, r13
 * 00000001402A813E: rol     r8, cl
 * 00000001402A8141: add     edx, 0FFFFFFFFh
 * 00000001402A8144: jnz     short loc_1402A8131
 * 00000001402A8146: mov     rax, r8
 * 00000001402A8149: jmp     short loc_1402A814E
 * 00000001402A814B: xor     r8d, eax
 * 00000001402A814E: shr     rax, 1Fh
 * 00000001402A8152: test    rax, rax
 * 00000001402A8155: jnz     short loc_1402A814B
 * 00000001402A8157: btr     r8d, 1Fh
 * 00000001402A815C: mov     [rsi+14h], r8d
 * 00000001402A8160: mov     rax, [rbp+2150h+var_1D88]
 * 00000001402A8167: mov     [rbp+2150h+var_1F28], rax
 * 00000001402A816E: add     [rbx+688h], r15d
 * 00000001402A8175: jmp     short loc_1402A818B
 * 00000001402A8177: mov     r15d, [rbp+2150h+var_2094]
 * 00000001402A817E: mov     rbx, rsi
 * 00000001402A8181: mov     r12, [rbp+2150h+var_2130]
 * 00000001402A8185: mov     dword ptr [rax], 0Eh
 * 00000001402A818B: test    dword ptr [rbx+7D8h], 40000000h
 * 00000001402A8195: jz      short loc_1402A81B5
 * 00000001402A8197: test    r15d, r15d
 * 00000001402A819A: jz      short loc_1402A81B5
 * 00000001402A819C: mov     r9, [rbp+2150h+var_1F28]
 * 00000001402A81A3: mov     r8d, r15d
 * 00000001402A81A6: add     r9, 1Ch
 * 00000001402A81AA: mov     rdx, r12
 * 00000001402A81AD: mov     rcx, rbx
 * 00000001402A81B0: call    sub_14017573C
 * 00000001402A81B5: mov     rax, [rbp+2150h+var_1F28]
 * 00000001402A81BC: xor     r12d, r12d
 * 00000001402A81BF: mov     rsi, rbx
 * 00000001402A81C2: mov     [rbp+2150h+var_2048], rbx
 * 00000001402A81C9: mov     [rax+18h], r12d
 * 00000001402A81CD: lea     ecx, [r12+1]
 * 00000001402A81D2: mov     rax, [rbp+2150h+var_1F28]
 * 00000001402A81D9: or      [rax+18h], ecx
 * 00000001402A81DC: mov     r14, [rbp+2150h+var_1FD8]
 * 00000001402A81E3: mov     r15, [rbp+2150h+var_2068]
 * 00000001402A81EA: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001402A81F5: or      [r14+0B8h], ecx
 * 00000001402A81FC: cmp     dword ptr [r14+0A0h], 94h
 * 00000001402A8207: jb      loc_1402A8290
 * 00000001402A820D: mov     rax, [rbx+1E8h]
 * 00000001402A8214: mov     rcx, r15
 * 00000001402A8217: mov     r13, [r14+98h]
 * 00000001402A821E: call    KeGuardDispatchICall
 * 00000001402A8223: test    rax, rax
 * 00000001402A8226: jnz     short loc_1402A823E
 * 00000001402A8228: xor     r13d, r13d
 * 00000001402A822B: mov     [rbp+2150h+var_2100], 0C000009Ah
 * 00000001402A8232: mov     [rbp+2150h+var_2050], r13
 * 00000001402A8239: jmp     loc_1402A75DB
 * 00000001402A823E: mov     ecx, [rax+50h]
 * 00000001402A8241: mov     eax, 2
 * 00000001402A8246: or      [r14+0B8h], eax
 * 00000001402A824D: add     rcx, r15
 * 00000001402A8250: mov     rax, [r13+70h]
 * 00000001402A8254: cmp     rax, r15
 * 00000001402A8257: jb      short loc_1402A8270
 * 00000001402A8259: cmp     rax, rcx
 * 00000001402A825C: jnb     short loc_1402A8270
 * 00000001402A825E: mov     rax, [rax]
 * 00000001402A8261: mov     [r14+0A8h], rax
 * 00000001402A8268: or      dword ptr [r14+0B8h], 4
 * 00000001402A8270: mov     rax, [r13+78h]
 * 00000001402A8274: cmp     rax, r15
 * 00000001402A8277: jb      short loc_1402A8290
 * 00000001402A8279: cmp     rax, rcx
 * 00000001402A827C: jnb     short loc_1402A8290
 * 00000001402A827E: mov     rax, [rax]
 * 00000001402A8281: mov     [r14+0B0h], rax
 * 00000001402A8288: or      dword ptr [r14+0B8h], 8
 * 00000001402A8290: test    dword ptr [rbx+7D8h], 400000h
 * 00000001402A829A: mov     r12, [rbp+2150h+var_2068]
 * 00000001402A82A1: mov     [rbp+2150h+var_2120], r12
 * 00000001402A82A5: mov     [rbp+2150h+var_2050], rbx
 * 00000001402A82AC: mov     [rbp+2150h+var_2048], rbx
 * 00000001402A82B3: jz      loc_1402A9171
 * 00000001402A82B9: mov     rax, [rbx+1E8h]
 * 00000001402A82C0: mov     rcx, r12
 * 00000001402A82C3: call    KeGuardDispatchICall
 * 00000001402A82C8: xor     r15d, r15d
 * 00000001402A82CB: mov     [rbp+2150h+var_20D0], rax
 * 00000001402A82D2: mov     r13, rax
 * 00000001402A82D5: test    rax, rax
 * 00000001402A82D8: jnz     short loc_1402A82E7
 * 00000001402A82DA: mov     ecx, 0C000007Bh
 * 00000001402A82DF: xor     r13d, r13d
 * 00000001402A82E2: jmp     loc_1402A9181
 * 00000001402A82E7: movzx   r8d, word ptr [r13+6]
 * 00000001402A82EC: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402A82F6: mov     ecx, [rbp+2150h+var_20B0]
 * 00000001402A82FC: mul     rcx
 * 00000001402A82FF: mov     [rbp+2150h+var_2054], r8w
 * 00000001402A8307: mov     r10, rdx
 * 00000001402A830A: shr     r10, 3
 * 00000001402A830E: mov     [rbp+2150h+var_20E8], r10
 * 00000001402A8312: test    r8w, r8w
 * 00000001402A8316: jnz     short loc_1402A8376
 * 00000001402A8318: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A8322: jz      loc_1402AC209
 * 00000001402A8328: xor     r13d, r13d
 * 00000001402A832B: cmp     [rbx+750h], r13d
 * 00000001402A8332: jnz     short loc_1402A836C
 * 00000001402A8334: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A833E: add     rax, rbx
 * 00000001402A8341: mov     [rbx+758h], rax
 * 00000001402A8348: mov     eax, 1
 * 00000001402A834D: mov     [rbx+760h], r13
 * 00000001402A8354: mov     qword ptr [rbx+768h], 10Fh
 * 00000001402A835F: mov     [rbx+770h], r12
 * 00000001402A8366: mov     [rbx+750h], eax
 * 00000001402A836C: mov     ecx, 0C000007Bh
 * 00000001402A8371: jmp     loc_1402A9181
 * 00000001402A8376: mov     r14, [rbp+2150h+var_2108]
 * 00000001402A837A: lea     r11, [r13+18h]
 * 00000001402A837E: movzx   r9d, r8w
 * 00000001402A8382: mov     edx, r15d
 * 00000001402A8385: mov     eax, r10d
 * 00000001402A8388: mov     [rbp+2150h+var_20C0], edx
 * 00000001402A838E: mov     [rbp+2150h+var_2118], r9d
 * 00000001402A8392: lea     rax, [rax+rax*2]
 * 00000001402A8396: shl     rax, 2
 * 00000001402A839A: mov     [rbp+2150h+var_2110], rax
 * 00000001402A839E: add     rax, r14
 * 00000001402A83A1: mov     [rbp+2150h+var_20B8], rax
 * 00000001402A83A8: movzx   eax, word ptr [r13+14h]
 * 00000001402A83AD: add     r11, rax
 * 00000001402A83B0: mov     [rbp+2150h+var_2148], r11
 * 00000001402A83B4: test    r9d, r9d
 * 00000001402A83B7: jz      loc_1402A85D5
 * 00000001402A83BD: xor     r13d, r13d
 * 00000001402A83C0: lea     r15, [r11+8]
 * 00000001402A83C4: lea     r10d, [r13+1]
 * 00000001402A83C8: mov     eax, [r15+8]
 * 00000001402A83CC: mov     ecx, [r15]
 * 00000001402A83CF: cmp     eax, ecx
 * 00000001402A83D1: mov     r9d, [r15+4]
 * 00000001402A83D5: cmova   ecx, eax
 * 00000001402A83D8: mov     dword ptr [rbp+2150h+var_20E0], r9d
 * 00000001402A83DC: lea     r8d, [rcx+r9]
 * 00000001402A83E0: mov     [rbp+2150h+var_2094], r8d
 * 00000001402A83E7: test    edx, edx
 * 00000001402A83E9: jz      short loc_1402A83FD
 * 00000001402A83EB: lea     eax, [rdx-1]
 * 00000001402A83EE: lea     rax, [rax+rax*4]
 * 00000001402A83F2: cmp     r8d, [r11+rax*8+0Ch]
 * 00000001402A83F7: jb      loc_1402A85F7
 * 00000001402A83FD: cmp     r14, [rbp+2150h+var_20B8]
 * 00000001402A8404: jz      loc_1402A85AD
 * 00000001402A840A: mov     ecx, [r14]
 * 00000001402A840D: mov     eax, [r14+4]
 * 00000001402A8411: cmp     ecx, r8d
 * 00000001402A8414: jnb     loc_1402A859D
 * 00000001402A841A: cmp     eax, r9d
 * 00000001402A841D: jbe     loc_1402A859D
 * 00000001402A8423: cmp     ecx, r9d
 * 00000001402A8426: jb      loc_1402A864D
 * 00000001402A842C: cmp     eax, r8d
 * 00000001402A842F: ja      loc_1402A864D
 * 00000001402A8435: mov     eax, [r14+8]
 * 00000001402A8439: mov     ecx, 1
 * 00000001402A843E: test    cl, al
 * 00000001402A8440: jnz     short loc_1402A844E
 * 00000001402A8442: mov     al, [rax+r12]
 * 00000001402A8446: test    al, 20h
 * 00000001402A8448: jz      loc_1402A858C
 * 00000001402A844E: mov     eax, [r15+8]
 * 00000001402A8452: mov     ecx, [r15]
 * 00000001402A8455: cmp     eax, ecx
 * 00000001402A8457: mov     r12d, [r15+4]
 * 00000001402A845B: mov     rdx, [rbp+2150h+var_2120]
 * 00000001402A845F: cmova   ecx, eax
 * 00000001402A8462: mov     rax, [rbx+400h]
 * 00000001402A8469: lea     r13d, [r12+rcx]
 * 00000001402A846D: mov     rcx, r14
 * 00000001402A8470: call    KeGuardDispatchICall
 * 00000001402A8475: mov     rcx, rax
 * 00000001402A8478: cmp     [rax], r12d
 * 00000001402A847B: jb      short loc_1402A8483
 * 00000001402A847D: cmp     [rax+4], r13d
 * 00000001402A8481: jb      short loc_1402A84E5
 * 00000001402A8483: mov     r10, [rbp+2150h+var_2120]
 * 00000001402A8487: mov     edx, ecx
 * 00000001402A8489: sub     edx, r10d
 * 00000001402A848C: mov     eax, 80000000h
 * 00000001402A8491: or      edx, eax
 * 00000001402A8493: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A849D: jz      loc_1402AC2AE
 * 00000001402A84A3: xor     edx, edx
 * 00000001402A84A5: cmp     [rbx+750h], edx
 * 00000001402A84AB: jnz     short loc_1402A84E9
 * 00000001402A84AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A84B7: add     rax, rbx
 * 00000001402A84BA: mov     [rbx+758h], rax
 * 00000001402A84C1: lea     eax, [rdx+1]
 * 00000001402A84C4: mov     [rbx+760h], rdx
 * 00000001402A84CB: mov     qword ptr [rbx+768h], 10Fh
 * 00000001402A84D6: mov     [rbx+770h], r10
 * 00000001402A84DD: mov     [rbx+750h], eax
 * 00000001402A84E3: jmp     short loc_1402A84E9
 * 00000001402A84E5: mov     r10, [rbp+2150h+var_2120]
 * 00000001402A84E9: mov     r8d, [rcx]
 * 00000001402A84EC: mov     rdx, r10
 * 00000001402A84EF: mov     rax, [rbx+408h]
 * 00000001402A84F6: add     r8, r10
 * 00000001402A84F9: call    KeGuardDispatchICall
 * 00000001402A84FE: mov     rdx, rax
 * 00000001402A8501: cmp     [rax], r12d
 * 00000001402A8504: jb      short loc_1402A850C
 * 00000001402A8506: cmp     [rax+4], r13d
 * 00000001402A850A: jb      short loc_1402A857A
 * 00000001402A850C: mov     r12, [rbp+2150h+var_2120]
 * 00000001402A8510: mov     eax, 80000000h
 * 00000001402A8515: sub     edx, r12d
 * 00000001402A8518: or      edx, eax
 * 00000001402A851A: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A8524: jz      loc_1402AC285
 * 00000001402A852A: mov     r8d, [rbp+2150h+var_2094]
 * 00000001402A8531: xor     r13d, r13d
 * 00000001402A8534: mov     r9d, dword ptr [rbp+2150h+var_20E0]
 * 00000001402A8538: cmp     [rbx+750h], r13d
 * 00000001402A853F: jnz     short loc_1402A858C
 * 00000001402A8541: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A854B: add     rax, rbx
 * 00000001402A854E: mov     [rbx+758h], rax
 * 00000001402A8555: lea     eax, [r13+1]
 * 00000001402A8559: mov     [rbx+760h], r13
 * 00000001402A8560: mov     qword ptr [rbx+768h], 10Fh
 * 00000001402A856B: mov     [rbx+770h], r12
 * 00000001402A8572: mov     [rbx+750h], eax
 * 00000001402A8578: jmp     short loc_1402A858C
 * 00000001402A857A: mov     r8d, [rbp+2150h+var_2094]
 * 00000001402A8581: xor     r13d, r13d
 * 00000001402A8584: mov     r9d, dword ptr [rbp+2150h+var_20E0]
 * 00000001402A8588: mov     r12, [rbp+2150h+var_2120]
 * 00000001402A858C: add     r14, 0Ch
 * 00000001402A8590: cmp     r14, [rbp+2150h+var_20B8]
 * 00000001402A8597: jnz     loc_1402A840A
 * 00000001402A859D: mov     edx, [rbp+2150h+var_20C0]
 * 00000001402A85A3: mov     r10d, 1
 * 00000001402A85A9: mov     r11, [rbp+2150h+var_2148]
 * 00000001402A85AD: mov     r9d, [rbp+2150h+var_2118]
 * 00000001402A85B1: add     edx, r10d
 * 00000001402A85B4: add     r15, 28h ; '('
 * 00000001402A85B8: mov     [rbp+2150h+var_20C0], edx
 * 00000001402A85BE: cmp     edx, r9d
 * 00000001402A85C1: jb      loc_1402A83C8
 * 00000001402A85C7: mov     r10, [rbp+2150h+var_20E8]
 * 00000001402A85CB: xor     r15d, r15d
 * 00000001402A85CE: mov     r13, [rbp+2150h+var_20D0]
 * 00000001402A85D5: cmp     r14, [rbp+2150h+var_20B8]
 * 00000001402A85DC: jz      loc_1402A8662
 * 00000001402A85E2: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A85EC: jnz     loc_1402A8328
 * 00000001402A85F2: jmp     loc_1402AC231
 * 00000001402A85F7: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A8601: jz      loc_1402AC25C
 * 00000001402A8607: cmp     [rbx+750h], r13d
 * 00000001402A860E: jnz     loc_1402A836C
 * 00000001402A8614: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A861E: add     rax, rbx
 * 00000001402A8621: mov     [rbx+758h], rax
 * 00000001402A8628: mov     [rbx+760h], r13
 * 00000001402A862F: mov     qword ptr [rbx+768h], 10Fh
 * 00000001402A863A: mov     [rbx+770h], r12
 * 00000001402A8641: mov     [rbx+750h], r10d
 * 00000001402A8648: jmp     loc_1402A836C
 * 00000001402A864D: test    dword ptr [rbx+7D8h], 200000h
 * 00000001402A8657: jnz     loc_1402A832B
 * 00000001402A865D: jmp     loc_1402AC2D7
 * 00000001402A8662: mov     r15d, [rbx+644h]
 * 00000001402A8669: lea     ecx, [r10+6]
 * 00000001402A866D: mov     r8d, [rbx+77Ch]
 * 00000001402A8674: lea     eax, [r9+2]
 * 00000001402A8678: and     ecx, 0FFFFFFF8h
 * 00000001402A867B: lea     eax, [rax+rax*2]
 * 00000001402A867E: lea     eax, [rcx+rax*8]
 * 00000001402A8681: add     eax, r15d
 * 00000001402A8684: cmp     eax, [rbx+85Ch]
 * 00000001402A868A: jbe     loc_1402A8786
 * 00000001402A8690: mov     edx, eax
 * 00000001402A8692: mov     rcx, rbx
 * 00000001402A8695: call    sub_1402AEFBC
 * 00000001402A869A: xor     r10d, r10d
 * 00000001402A869D: mov     [rbp+2150h+var_20F8], rax
 * 00000001402A86A1: mov     r14, rax
 * 00000001402A86A4: test    rax, rax
 * 00000001402A86A7: jz      loc_1402A877C
 * 00000001402A86AD: mov     edx, [rbx+7D8h]
 * 00000001402A86B3: test    dl, 4
 * 00000001402A86B6: jnz     loc_1402A876A
 * 00000001402A86BC: mov     ecx, [rbx+644h]
 * 00000001402A86C2: and     edx, 20000000h
 * 00000001402A86C8: mov     r9, [rbx+628h]
 * 00000001402A86CF: neg     edx
 * 00000001402A86D1: lea     edx, [r10+1]
 * 00000001402A86D5: sbb     r8d, r8d
 * 00000001402A86D8: and     r8d, [rbx+77Ch]
 * 00000001402A86DF: cmp     ecx, 8
 * 00000001402A86E2: jb      short loc_1402A86F9
 * 00000001402A86E4: mov     eax, ecx
 * 00000001402A86E6: shr     rax, 3
 * 00000001402A86EA: mov     [rbx], r10
 * 00000001402A86ED: add     ecx, 0FFFFFFF8h
 * 00000001402A86F0: add     rbx, 8
 * 00000001402A86F4: sub     rax, rdx
 * 00000001402A86F7: jnz     short loc_1402A86EA
 * 00000001402A86F9: test    ecx, ecx
 * 00000001402A86FB: jz      short loc_1402A8708
 * 00000001402A86FD: mov     [rbx], r10b
 * 00000001402A8700: add     rbx, rdx
 * 00000001402A8703: add     ecx, 0FFFFFFFFh
 * 00000001402A8706: jnz     short loc_1402A86FD
 * 00000001402A8708: mov     ebx, [r14+77Ch]
 * 00000001402A870F: mov     eax, 3
 * 00000001402A8714: mov     [r14+77Ch], r8d
 * 00000001402A871B: cmp     r8d, eax
 * 00000001402A871E: jz      short loc_1402A8754
 * 00000001402A8720: test    dword ptr [r14+7D8h], 10000000h
 * 00000001402A872B: mov     ecx, r10d
 * 00000001402A872E: cmovz   ecx, r8d
 * 00000001402A8732: test    ecx, ecx
 * 00000001402A8734: jz      short loc_1402A874B
 * 00000001402A8736: mov     rax, [r14+218h]
 * 00000001402A873D: lea     rcx, [r9-8]
 * 00000001402A8741: mov     rdx, [rcx]
 * 00000001402A8744: call    KeGuardDispatchICall
 * 00000001402A8749: jmp     short loc_1402A8763
 * 00000001402A874B: mov     rax, [r14+0F0h]
 * 00000001402A8752: jmp     short loc_1402A875B
 * 00000001402A8754: mov     rax, [r14+358h]
 * 00000001402A875B: mov     rcx, r9
 * 00000001402A875E: call    KeGuardDispatchICall
 * 00000001402A8763: mov     [r14+77Ch], ebx
 * 00000001402A876A: and     dword ptr [r14+7D8h], 0FFFFFFFBh
 * 00000001402A8772: mov     r9d, [rbp+2150h+var_2118]
 * 00000001402A8776: mov     r10, [rbp+2150h+var_20E8]
 * 00000001402A877A: jmp     short loc_1402A8793
 * 00000001402A877C: mov     ecx, 0C000009Ah
 * 00000001402A8781: jmp     loc_1402A82DF
 * 00000001402A8786: mov     r14, rbx
 * 00000001402A8789: mov     [rbp+2150h+var_20F8], rbx
 * 00000001402A878D: mov     [rbx+644h], eax
 * 00000001402A8793: mov     eax, 1
 * 00000001402A8798: lea     rcx, [r14+r15]
 * 00000001402A879C: add     [r14+66Ch], eax
 * 00000001402A87A3: mov     [rbp+2150h+var_1D80], rcx
 * 00000001402A87AA: xor     r11d, r11d
 * 00000001402A87AD: lea     edx, [rax+2Fh]
 * 00000001402A87B0: mov     rax, rcx
 * 00000001402A87B3: lea     r8d, [rdx-2Ah]
 * 00000001402A87B7: lea     r15d, [rdx-2Fh]
 * 00000001402A87BB: mov     [rax], r11
 * 00000001402A87BE: add     edx, 0FFFFFFF8h
 * 00000001402A87C1: add     rax, 8
 * 00000001402A87C5: sub     r8, r15
 * 00000001402A87C8: jnz     short loc_1402A87BB
 * 00000001402A87CA: test    edx, edx
 * 00000001402A87CC: jz      short loc_1402A87D9
 * 00000001402A87CE: mov     [rax], r11b
 * 00000001402A87D1: add     rax, r15
 * 00000001402A87D4: add     edx, 0FFFFFFFFh
 * 00000001402A87D7: jnz     short loc_1402A87CE
 * 00000001402A87D9: mov     rax, [rbp+2150h+var_2108]
 * 00000001402A87DD: mov     dword ptr [rcx], 1Eh
 * 00000001402A87E3: mov     [rcx+8], rax
 * 00000001402A87E7: mov     [rcx+10h], r11d
 * 00000001402A87EB: mov     rdx, [r14+678h]
 * 00000001402A87F2: mov     rax, rdx
 * 00000001402A87F5: jmp     short loc_1402A87F9
 * 00000001402A87F7: xor     edx, eax
 * 00000001402A87F9: shr     rax, 1Fh
 * 00000001402A87FD: test    rax, rax
 * 00000001402A8800: jnz     short loc_1402A87F7
 * 00000001402A8802: btr     edx, 1Fh
 * 00000001402A8806: lea     esi, [r10-1]
 * 00000001402A880A: mov     [rcx+14h], edx
 * 00000001402A880D: add     rsi, 7
 * 00000001402A8811: mov     rax, [rbp+2150h+var_1D80]
 * 00000001402A8818: and     rsi, 0FFFFFFFFFFFFFFF8h
 * 00000001402A881C: mov     [rbp+2150h+var_1FA0], rax
 * 00000001402A8823: mov     r11d, 0Ch
 * 00000001402A8829: mov     rbx, r14
 * 00000001402A882C: mov     [rbp+2150h+var_2050], rbx
 * 00000001402A8833: mov     [rax+18h], r12
 * 00000001402A8837: mov     ecx, [r13+50h]
 * 00000001402A883B: xor     r13d, r13d
 * 00000001402A883E: mov     rax, [rbp+2150h+var_1FA0]
 * 00000001402A8845: mov     [rax+20h], ecx
 * 00000001402A8848: mov     rax, [rbp+2150h+var_1FA0]
 * 00000001402A884F: mov     ecx, [rbp+2150h+var_20B0]
 * 00000001402A8855: mov     [rax+24h], ecx
 * 00000001402A8858: mov     rax, [rbp+2150h+var_1FA0]
 * 00000001402A885F: movzx   ecx, [rbp+2150h+var_2054]
 * 00000001402A8866: mov     [rax+28h], cx
 * 00000001402A886A: mov     rax, [rbp+2150h+var_1FA0]
 * 00000001402A8871: or      [rax+2Ah], r15w
 * 00000001402A8876: mov     rcx, [rbp+2150h+var_1FA0]
 * 00000001402A887D: movzx   eax, word ptr [rcx+28h]
 * 00000001402A8881: lea     rdx, [rcx+30h]
 * 00000001402A8885: add     rsi, rdx
 * 00000001402A8888: mov     [rbp+2150h+var_20C8], rdx
 * 00000001402A888F: test    r10d, r10d
 * 00000001402A8892: mov     [rbp+2150h+var_20A8], rsi
 * 00000001402A8899: mov     r10, [rbp+2150h+var_2108]
 * 00000001402A889D: lea     rcx, [rax+rax*2]
 * 00000001402A88A1: lea     r8, [rsi+rcx*8]
 * 00000001402A88A5: mov     ecx, r11d
 * 00000001402A88A8: cmovz   rcx, [rbp+2150h+var_2110]
 * 00000001402A88AD: add     rcx, r10
 * 00000001402A88B0: mov     [rbp+2150h+var_20D0], r8
 * 00000001402A88B7: mov     [rbp+2150h+var_2130], rcx
 * 00000001402A88BB: test    r9d, r9d
 * 00000001402A88BE: jz      short loc_1402A88F0
 * 00000001402A88C0: mov     edx, r9d
 * 00000001402A88C3: lea     rax, [rsi+8]
 * 00000001402A88C7: mov     r9d, 80000000h
 * 00000001402A88CD: lea     r12d, [r11-0Ah]
 * 00000001402A88D1: mov     rcx, r12
 * 00000001402A88D4: mov     [rax-8], r13d
 * 00000001402A88D8: mov     [rax-4], r13d
 * 00000001402A88DC: mov     [rax], r9d
 * 00000001402A88DF: add     rax, r11
 * 00000001402A88E2: sub     rcx, r15
 * 00000001402A88E5: jnz     short loc_1402A88D4
 * 00000001402A88E7: sub     rdx, r15
 * 00000001402A88EA: jnz     short loc_1402A88D1
 * 00000001402A88EC: mov     r12, [rbp+2150h+var_2120]
 * 00000001402A88F0: cmp     rsi, r8
 * 00000001402A88F3: jz      loc_1402A9174
 * 00000001402A88F9: mov     r13, [rbp+2150h+var_2148]
 * 00000001402A88FD: xor     r8d, r8d
 * 00000001402A8900: mov     eax, [r13+24h]
 * 00000001402A8904: mov     r15d, r8d
 * 00000001402A8907: bt      eax, 19h
 * 00000001402A890B: jb      loc_1402A8B1E
 * 00000001402A8911: mov     ecx, [r13+0]
 * 00000001402A8915: cmp     ecx, 54494E49h
 * 00000001402A891B: jnz     short loc_1402A892B
 * 00000001402A891D: cmp     dword ptr [r13+4], 4742444Bh
 * 00000001402A8925: jz      loc_1402A8B1E
 * 00000001402A892B: cmp     ecx, 45474150h
 * 00000001402A8931: jnz     short loc_1402A8962
 * 00000001402A8933: movzx   eax, word ptr [r13+4]
 * 00000001402A8938: mov     edx, 7777h
 * 00000001402A893D: cmp     ax, dx
 * 00000001402A8940: jz      loc_1402A8B1E
 * 00000001402A8946: mov     edx, 7277h
 * 00000001402A894B: cmp     ax, dx
 * 00000001402A894E: jz      loc_1402A8B1E
 * 00000001402A8954: mov     edx, 7877h
 * 00000001402A8959: cmp     ax, dx
 * 00000001402A895C: jz      loc_1402A8B1E
 * 00000001402A8962: cmp     ecx, 41525245h
 * 00000001402A8968: jnz     short loc_1402A897A
 * 00000001402A896A: mov     eax, 4154h
 * 00000001402A896F: cmp     [r13+4], ax
 * 00000001402A8974: jz      loc_1402A8B1E
 * 00000001402A897A: mov     r8, [r14+788h]
 * 00000001402A8981: mov     r9, r13
 * 00000001402A8984: mov     r10, [r14+790h]
 * 00000001402A898B: sub     r9, r8
 * 00000001402A898E: mov     r11, [r14+798h]
 * 00000001402A8995: mov     esi, 7
 * 00000001402A899A: mov     rbx, [r14+7A0h]
 * 00000001402A89A1: movzx   edx, byte ptr [r8+r9]
 * 00000001402A89A6: movzx   eax, byte ptr [r8]
 * 00000001402A89AA: inc     r8
 * 00000001402A89AD: cmp     rdx, rax
 * 00000001402A89B0: jnz     loc_1402A8A72
 * 00000001402A89B6: add     esi, 0FFFFFFFFh
 * 00000001402A89B9: jnz     short loc_1402A89A1
 * 00000001402A89BB: mov     esi, 1
 * 00000001402A89C0: mov     r15d, esi
 * 00000001402A89C3: mov     r10, [rbp+2150h+var_2108]
 * 00000001402A89C7: mov     r9d, 1
 * 00000001402A89CD: mov     rsi, [rbp+2150h+var_20A8]
 * 00000001402A89D4: xor     r8d, r8d
 * 00000001402A89D7: mov     ecx, [r13+24h]
 * 00000001402A89DB: test    ecx, ecx
 * 00000001402A89DD: cmovs   r15d, r9d
 * 00000001402A89E1: mov     [rbp+2150h+var_2100], r15d
 * 00000001402A89E5: test    r15d, r15d
 * 00000001402A89E8: jz      short loc_1402A8A11
 * 00000001402A89EA: cmp     dword ptr [r13+0], 54494E49h
 * 00000001402A89F2: jnz     short loc_1402A8A11
 * 00000001402A89F4: cmp     dword ptr [r13+4], 4742444Bh
 * 00000001402A89FC: jnz     short loc_1402A8A11
 * 00000001402A89FE: test    dword ptr [r14+7DCh], 2000h
 * 00000001402A8A09: cmovnz  r15d, r8d
 * 00000001402A8A0D: mov     [rbp+2150h+var_2100], r15d
 * 00000001402A8A11: test    dword ptr [r14+7DCh], 4000h
 * 00000001402A8A1C: jz      short loc_1402A8A3D
 * 00000001402A8A1E: bt      ecx, 1Dh
 * 00000001402A8A22: jnb     short loc_1402A8A3D
 * 00000001402A8A24: cmp     r12, [r14+5A0h]
 * 00000001402A8A2B: jz      short loc_1402A8A36
 * 00000001402A8A2D: cmp     r12, [r14+5A8h]
 * 00000001402A8A34: jnz     short loc_1402A8A3D
 * 00000001402A8A36: mov     r15d, r9d
 * 00000001402A8A39: mov     [rbp+2150h+var_2100], r9d
 * 00000001402A8A3D: mov     eax, [r13+10h]
 * 00000001402A8A41: mov     ecx, [r13+8]
 * 00000001402A8A45: cmp     eax, ecx
 * 00000001402A8A47: mov     ebx, [r13+0Ch]
 * 00000001402A8A4B: cmova   ecx, eax
 * 00000001402A8A4E: mov     [rbp+2150h+var_2118], ebx
 * 00000001402A8A51: mov     rax, [rbp+2150h+var_20B8]
 * 00000001402A8A58: add     ecx, ebx
 * 00000001402A8A5A: mov     [rbp+2150h+var_2140], ecx
 * 00000001402A8A5D: cmp     r10, rax
 * 00000001402A8A60: jz      loc_1402A8B2C
 * 00000001402A8A66: mov     r12d, [r10]
 * 00000001402A8A69: mov     r13d, [r10+4]
 * 00000001402A8A6D: jmp     loc_1402A8B32
 * 00000001402A8A72: mov     r8d, 8
 * 00000001402A8A78: mov     r9, r13
 * 00000001402A8A7B: mov     rcx, [r9]
 * 00000001402A8A7E: add     r9, 8
 * 00000001402A8A82: mov     rax, [r10]
 * 00000001402A8A85: add     r10, 8
 * 00000001402A8A89: cmp     rcx, rax
 * 00000001402A8A8C: jnz     short loc_1402A8AC4
 * 00000001402A8A8E: add     r8d, 0FFFFFFF8h
 * 00000001402A8A92: cmp     r8d, 8
 * 00000001402A8A96: jnb     short loc_1402A8A7B
 * 00000001402A8A98: test    r8d, r8d
 * 00000001402A8A9B: jz      loc_1402A89BB
 * 00000001402A8AA1: mov     esi, 1
 * 00000001402A8AA6: movzx   edx, byte ptr [r9]
 * 00000001402A8AAA: add     r9, rsi
 * 00000001402A8AAD: movzx   eax, byte ptr [r10]
 * 00000001402A8AB1: add     r10, rsi
 * 00000001402A8AB4: cmp     rdx, rax
 * 00000001402A8AB7: jnz     short loc_1402A8AC9
 * 00000001402A8AB9: add     r8d, 0FFFFFFFFh
 * 00000001402A8ABD: jnz     short loc_1402A8AA6
 * 00000001402A8ABF: jmp     loc_1402A89C0
 * 00000001402A8AC4: mov     esi, 1
 * 00000001402A8AC9: mov     r8, r13
 * 00000001402A8ACC: mov     r9d, 4
 * 00000001402A8AD2: sub     r8, r11
 * 00000001402A8AD5: or      r10d, 0FFFFFFFFh
 * 00000001402A8AD9: movzx   edx, byte ptr [r11+r8]
 * 00000001402A8ADE: movzx   eax, byte ptr [r11]
 * 00000001402A8AE2: add     r11, rsi
 * 00000001402A8AE5: cmp     rdx, rax
 * 00000001402A8AE8: jnz     short loc_1402A8AF4
 * 00000001402A8AEA: add     r9d, r10d
 * 00000001402A8AED: jnz     short loc_1402A8AD9
 * 00000001402A8AEF: jmp     loc_1402A89C0
 * 00000001402A8AF4: mov     r8, r13
 * 00000001402A8AF7: mov     r9d, 6
 * 00000001402A8AFD: sub     r8, rbx
 * 00000001402A8B00: movzx   edx, byte ptr [rbx+r8]
 * 00000001402A8B05: movzx   eax, byte ptr [rbx]
 * 00000001402A8B08: add     rbx, rsi
 * 00000001402A8B0B: cmp     rdx, rax
 * 00000001402A8B0E: jnz     loc_1402A89C3
 * 00000001402A8B14: add     r9d, r10d
 * 00000001402A8B17: jnz     short loc_1402A8B00
 * 00000001402A8B19: jmp     loc_1402A89C0
 * 00000001402A8B1E: mov     r9d, 1
 * 00000001402A8B24: mov     r15d, r9d
 * 00000001402A8B27: jmp     loc_1402A89D7
 * 00000001402A8B2C: mov     r12d, r8d
 * 00000001402A8B2F: mov     r13d, r8d
 * 00000001402A8B32: mov     r11d, ebx
 * 00000001402A8B35: cmp     r10, rax
 * 00000001402A8B38: jz      loc_1402A8D32
 * 00000001402A8B3E: cmp     r12d, ebx
 * 00000001402A8B41: jbe     loc_1402A8D32
 * 00000001402A8B47: cmp     r13d, ecx
 * 00000001402A8B4A: ja      loc_1402A8D32
 * 00000001402A8B50: test    r15d, r15d
 * 00000001402A8B53: mov     r15, [rbp+2150h+var_2120]
 * 00000001402A8B57: jnz     loc_1402A8CDC
 * 00000001402A8B5D: mov     [rsi], ebx
 * 00000001402A8B5F: lea     rcx, [rbp+2150h+var_1E68]
 * 00000001402A8B66: mov     [rsi+4], r12d
 * 00000001402A8B6A: lea     rdx, [rbp+2150h+var_1CB8]
 * 00000001402A8B71: mov     eax, [rsi]
 * 00000001402A8B73: mov     r9d, r12d
 * 00000001402A8B76: sub     r9d, eax
 * 00000001402A8B79: mov     esi, r9d
 * 00000001402A8B7C: lea     r11, [r15+rax]
 * 00000001402A8B80: add     rsi, r11
 * 00000001402A8B83: mov     r10, [rdx]
 * 00000001402A8B86: mov     eax, [rcx]
 * 00000001402A8B88: add     rax, r10
 * 00000001402A8B8B: cmp     r11, rax
 * 00000001402A8B8E: jnb     short loc_1402A8B99
 * 00000001402A8B90: cmp     rsi, r10
 * 00000001402A8B93: ja      loc_1402A8CC2
 * 00000001402A8B99: inc     r8d
 * 00000001402A8B9C: add     rdx, 8
 * 00000001402A8BA0: add     rcx, 4
 * 00000001402A8BA4: cmp     r8d, 5
 * 00000001402A8BA8: jb      short loc_1402A8B83
 * 00000001402A8BAA: add     [r14+688h], r9d
 * 00000001402A8BB1: mov     r10, r11
 * 00000001402A8BB4: mov     ebx, [r14+674h]
 * 00000001402A8BBB: mov     rax, r11
 * 00000001402A8BBE: mov     r15, [r14+678h]
 * 00000001402A8BC5: cmp     r11, rsi
 * 00000001402A8BC8: jnb     short loc_1402A8BDA
 * 00000001402A8BCA: mov     ecx, 40h ; '@'
 * 00000001402A8BCF: prefetchnta byte ptr [rax]
 * 00000001402A8BD2: add     rax, rcx
 * 00000001402A8BD5: cmp     rax, rsi
 * 00000001402A8BD8: jb      short loc_1402A8BCF
 * 00000001402A8BDA: mov     esi, r9d
 * 00000001402A8BDD: mov     r8, r15
 * 00000001402A8BE0: shr     esi, 7
 * 00000001402A8BE3: test    esi, esi
 * 00000001402A8BE5: jz      short loc_1402A8C54
 * 00000001402A8BE7: mov     r14, 7010008004002001h
 * 00000001402A8BF1: mov     edx, 8
 * 00000001402A8BF6: lea     edi, [rdx-7]
 * 00000001402A8BF9: mov     rax, [r10]
 * 00000001402A8BFC: mov     ecx, ebx
 * 00000001402A8BFE: xor     rax, r8
 * 00000001402A8C01: mov     r8, [r10+8]
 * 00000001402A8C05: rol     rax, cl
 * 00000001402A8C08: add     r10, 10h
 * 00000001402A8C0C: xor     r8, rax
 * 00000001402A8C0F: rol     r8, cl
 * 00000001402A8C12: sub     rdx, rdi
 * 00000001402A8C15: jnz     short loc_1402A8BF9
 * 00000001402A8C17: mov     rcx, r10
 * 00000001402A8C1A: sub     rcx, r11
 * 00000001402A8C1D: xor     rcx, r15
 * 00000001402A8C20: mov     rax, rcx
 * 00000001402A8C23: rol     rax, 11h
 * 00000001402A8C27: xor     rcx, rax
 * 00000001402A8C2A: mov     rax, r14
 * 00000001402A8C2D: mul     rcx
 * 00000001402A8C30: xor     eax, edx
 * 00000001402A8C32: mov     [rbp+2150h+var_1A38], rdx
 * 00000001402A8C39: xor     ebx, eax
 * 00000001402A8C3B: mov     rax, rdi
 * 00000001402A8C3E: and     ebx, 3Fh
 * 00000001402A8C41: cmovz   ebx, eax
 * 00000001402A8C44: add     esi, 0FFFFFFFFh
 * 00000001402A8C47: jnz     short loc_1402A8BF1
 * 00000001402A8C49: mov     r14, [rbp+2150h+var_20F8]
 * 00000001402A8C4D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A8C54: and     r9d, 7Fh
 * 00000001402A8C58: mov     r11d, 1
 * 00000001402A8C5E: cmp     r9d, 8
 * 00000001402A8C62: jb      short loc_1402A8C80
 * 00000001402A8C64: mov     edx, r9d
 * 00000001402A8C67: shr     rdx, 3
 * 00000001402A8C6B: xor     r8, [r10]
 * 00000001402A8C6E: mov     ecx, ebx
 * 00000001402A8C70: rol     r8, cl
 * 00000001402A8C73: add     r10, 8
 * 00000001402A8C77: add     r9d, 0FFFFFFF8h
 * 00000001402A8C7B: sub     rdx, r11
 * 00000001402A8C7E: jnz     short loc_1402A8C6B
 * 00000001402A8C80: test    r9d, r9d
 * 00000001402A8C83: jz      short loc_1402A8C9A
 * 00000001402A8C85: movzx   eax, byte ptr [r10]
 * 00000001402A8C89: mov     ecx, ebx
 * 00000001402A8C8B: xor     r8, rax
 * 00000001402A8C8E: add     r10, r11
 * 00000001402A8C91: rol     r8, cl
 * 00000001402A8C94: add     r9d, 0FFFFFFFFh
 * 00000001402A8C98: jnz     short loc_1402A8C85
 * 00000001402A8C9A: mov     rax, r8
 * 00000001402A8C9D: jmp     short loc_1402A8CA2
 * 00000001402A8C9F: xor     r8d, eax
 * 00000001402A8CA2: shr     rax, 1Fh
 * 00000001402A8CA6: test    rax, rax
 * 00000001402A8CA9: jnz     short loc_1402A8C9F
 * 00000001402A8CAB: mov     rax, [rbp+2150h+var_20A8]
 * 00000001402A8CB2: btr     r8d, 1Fh
 * 00000001402A8CB7: mov     r15, [rbp+2150h+var_2120]
 * 00000001402A8CBB: mov     ebx, [rbp+2150h+var_2118]
 * 00000001402A8CBE: mov     [rax+8], r8d
 * 00000001402A8CC2: mov     r10, [rbp+2150h+var_2108]
 * 00000001402A8CC6: mov     r9d, 1
 * 00000001402A8CCC: mov     rax, [rbp+2150h+var_20B8]
 * 00000001402A8CD3: xor     r8d, r8d
 * 00000001402A8CD6: mov     ecx, [rbp+2150h+var_2140]
 * 00000001402A8CD9: mov     r11d, r12d
 * 00000001402A8CDC: cmp     r12d, ebx
 * 00000001402A8CDF: jb      loc_1402A8F64
 * 00000001402A8CE5: cmp     r13d, ecx
 * 00000001402A8CE8: mov     r13d, [rbp+2150h+var_2100]
 * 00000001402A8CEC: ja      loc_1402A8F68
 * 00000001402A8CF2: cmp     r10, rax
 * 00000001402A8CF5: jz      loc_1402A8F68
 * 00000001402A8CFB: mov     rax, [rbp+2150h+var_2130]
 * 00000001402A8CFF: mov     r12d, [rax+4]
 * 00000001402A8D03: cmp     r12d, ecx
 * 00000001402A8D06: ja      loc_1402A8F68
 * 00000001402A8D0C: mov     rdx, [rbp+2150h+var_20C8]
 * 00000001402A8D13: mov     ebx, 0Ch
 * 00000001402A8D18: cmp     rax, [rbp+2150h+var_20B8]
 * 00000001402A8D1F: jz      loc_1402A8F68
 * 00000001402A8D25: test    r13d, r13d
 * 00000001402A8D28: jz      short loc_1402A8D38
 * 00000001402A8D2A: mov     byte ptr [rdx], 80h
 * 00000001402A8D2D: jmp     loc_1402A8F30
 * 00000001402A8D32: mov     r15, [rbp+2150h+var_2120]
 * 00000001402A8D36: jmp     short loc_1402A8CDC
 * 00000001402A8D38: mov     r11d, [rax]
 * 00000001402A8D3B: mov     ecx, [r10+4]
 * 00000001402A8D3F: mov     [rbp+2150h+var_20C0], r11d
 * 00000001402A8D46: cmp     r11d, ecx
 * 00000001402A8D49: jnb     short loc_1402A8D99
 * 00000001402A8D4B: test    dword ptr [r14+7D8h], 200000h
 * 00000001402A8D56: jz      loc_1402AC302
 * 00000001402A8D5C: cmp     [r14+750h], r8d
 * 00000001402A8D63: jnz     short loc_1402A8D99
 * 00000001402A8D65: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A8D6F: add     rax, r14
 * 00000001402A8D72: mov     [r14+758h], rax
 * 00000001402A8D79: mov     [r14+760h], r8
 * 00000001402A8D80: mov     qword ptr [r14+768h], 10Fh
 * 00000001402A8D8B: mov     [r14+770h], r15
 * 00000001402A8D92: mov     [r14+750h], r9d
 * 00000001402A8D99: lea     rbx, [r15+rcx]
 * 00000001402A8D9D: mov     r9d, r11d
 * 00000001402A8DA0: sub     r9d, ecx
 * 00000001402A8DA3: lea     rdx, [rbp+2150h+var_1CB8]
 * 00000001402A8DAA: mov     esi, r9d
 * 00000001402A8DAD: lea     rcx, [rbp+2150h+var_1E68]
 * 00000001402A8DB4: add     rsi, rbx
 * 00000001402A8DB7: mov     r10, [rdx]
 * 00000001402A8DBA: mov     eax, [rcx]
 * 00000001402A8DBC: add     rax, r10
 * 00000001402A8DBF: cmp     rbx, rax
 * 00000001402A8DC2: jnb     short loc_1402A8DCD
 * 00000001402A8DC4: cmp     rsi, r10
 * 00000001402A8DC7: ja      loc_1402A8F09
 * 00000001402A8DCD: mov     eax, 4
 * 00000001402A8DD2: inc     r8d
 * 00000001402A8DD5: add     rcx, rax
 * 00000001402A8DD8: add     rdx, 8
 * 00000001402A8DDC: cmp     r8d, 5
 * 00000001402A8DE0: jb      short loc_1402A8DB7
 * 00000001402A8DE2: cmp     r9d, eax
 * 00000001402A8DE5: jb      loc_1402A8F09
 * 00000001402A8DEB: add     [r14+688h], r9d
 * 00000001402A8DF2: mov     r10, rbx
 * 00000001402A8DF5: mov     r11d, [r14+674h]
 * 00000001402A8DFC: mov     rax, rbx
 * 00000001402A8DFF: mov     r15, [r14+678h]
 * 00000001402A8E06: cmp     rbx, rsi
 * 00000001402A8E09: jnb     short loc_1402A8E1B
 * 00000001402A8E0B: mov     ecx, 40h ; '@'
 * 00000001402A8E10: prefetchnta byte ptr [rax]
 * 00000001402A8E13: add     rax, rcx
 * 00000001402A8E16: cmp     rax, rsi
 * 00000001402A8E19: jb      short loc_1402A8E10
 * 00000001402A8E1B: mov     esi, r9d
 * 00000001402A8E1E: mov     r8, r15
 * 00000001402A8E21: shr     esi, 7
 * 00000001402A8E24: test    esi, esi
 * 00000001402A8E26: jz      short loc_1402A8E9A
 * 00000001402A8E28: mov     rdi, 7010008004002001h
 * 00000001402A8E32: mov     edx, 8
 * 00000001402A8E37: lea     r13d, [rdx-7]
 * 00000001402A8E3B: mov     rax, [r10]
 * 00000001402A8E3E: mov     ecx, r11d
 * 00000001402A8E41: xor     rax, r8
 * 00000001402A8E44: mov     r8, [r10+8]
 * 00000001402A8E48: rol     rax, cl
 * 00000001402A8E4B: add     r10, 10h
 * 00000001402A8E4F: xor     r8, rax
 * 00000001402A8E52: rol     r8, cl
 * 00000001402A8E55: sub     rdx, r13
 * 00000001402A8E58: jnz     short loc_1402A8E3B
 * 00000001402A8E5A: mov     rcx, r10
 * 00000001402A8E5D: sub     rcx, rbx
 * 00000001402A8E60: xor     rcx, r15
 * 00000001402A8E63: mov     rax, rcx
 * 00000001402A8E66: rol     rax, 11h
 * 00000001402A8E6A: xor     rcx, rax
 * 00000001402A8E6D: mov     rax, rdi
 * 00000001402A8E70: mul     rcx
 * 00000001402A8E73: xor     eax, edx
 * 00000001402A8E75: mov     [rbp+2150h+var_1A30], rdx
 * 00000001402A8E7C: xor     r11d, eax
 * 00000001402A8E7F: mov     rax, r13
 * 00000001402A8E82: and     r11d, 3Fh
 * 00000001402A8E86: cmovz   r11d, eax
 * 00000001402A8E8A: add     esi, 0FFFFFFFFh
 * 00000001402A8E8D: jnz     short loc_1402A8E32
 * 00000001402A8E8F: mov     r13d, [rbp+2150h+var_2100]
 * 00000001402A8E93: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A8E9A: and     r9d, 7Fh
 * 00000001402A8E9E: mov     ebx, 1
 * 00000001402A8EA3: cmp     r9d, 8
 * 00000001402A8EA7: jb      short loc_1402A8EC6
 * 00000001402A8EA9: mov     edx, r9d
 * 00000001402A8EAC: shr     rdx, 3
 * 00000001402A8EB0: xor     r8, [r10]
 * 00000001402A8EB3: mov     ecx, r11d
 * 00000001402A8EB6: rol     r8, cl
 * 00000001402A8EB9: add     r10, 8
 * 00000001402A8EBD: add     r9d, 0FFFFFFF8h
 * 00000001402A8EC1: sub     rdx, rbx
 * 00000001402A8EC4: jnz     short loc_1402A8EB0
 * 00000001402A8EC6: test    r9d, r9d
 * 00000001402A8EC9: jz      short loc_1402A8EE1
 * 00000001402A8ECB: movzx   eax, byte ptr [r10]
 * 00000001402A8ECF: mov     ecx, r11d
 * 00000001402A8ED2: xor     r8, rax
 * 00000001402A8ED5: add     r10, rbx
 * 00000001402A8ED8: rol     r8, cl
 * 00000001402A8EDB: add     r9d, 0FFFFFFFFh
 * 00000001402A8EDF: jnz     short loc_1402A8ECB
 * 00000001402A8EE1: mov     rax, r8
 * 00000001402A8EE4: jmp     short loc_1402A8EE9
 * 00000001402A8EE6: xor     r8b, al
 * 00000001402A8EE9: shr     rax, 7
 * 00000001402A8EED: test    rax, rax
 * 00000001402A8EF0: jnz     short loc_1402A8EE6
 * 00000001402A8EF2: mov     rax, [rbp+2150h+var_20C8]
 * 00000001402A8EF9: and     r8b, 7Fh
 * 00000001402A8EFD: mov     r11d, [rbp+2150h+var_20C0]
 * 00000001402A8F04: mov     [rax], r8b
 * 00000001402A8F07: jmp     short loc_1402A8F13
 * 00000001402A8F09: mov     rax, [rbp+2150h+var_20C8]
 * 00000001402A8F10: mov     byte ptr [rax], 80h
 * 00000001402A8F13: mov     ecx, [rbp+2150h+var_2140]
 * 00000001402A8F16: xor     r8d, r8d
 * 00000001402A8F19: mov     rax, [rbp+2150h+var_2130]
 * 00000001402A8F1D: mov     rdx, [rbp+2150h+var_20C8]
 * 00000001402A8F24: mov     r10, [rbp+2150h+var_2108]
 * 00000001402A8F28: lea     ebx, [r8+0Ch]
 * 00000001402A8F2C: lea     r9d, [r8+1]
 * 00000001402A8F30: add     r10, rbx
 * 00000001402A8F33: add     rdx, r9
 * 00000001402A8F36: add     rax, rbx
 * 00000001402A8F39: mov     [rbp+2150h+var_2108], r10
 * 00000001402A8F3D: mov     [rbp+2150h+var_20C8], rdx
 * 00000001402A8F44: mov     [rbp+2150h+var_2130], rax
 * 00000001402A8F48: cmp     rax, [rbp+2150h+var_20B8]
 * 00000001402A8F4F: jz      short loc_1402A8F55
 * 00000001402A8F51: mov     r12d, [rax+4]
 * 00000001402A8F55: mov     r15, [rbp+2150h+var_2120]
 * 00000001402A8F59: cmp     r12d, ecx
 * 00000001402A8F5C: jbe     loc_1402A8D18
 * 00000001402A8F62: jmp     short loc_1402A8F68
 * 00000001402A8F64: mov     r13d, [rbp+2150h+var_2100]
 * 00000001402A8F68: mov     r12, [rbp+2150h+var_2120]
 * 00000001402A8F6C: test    r13d, r13d
 * 00000001402A8F6F: jnz     loc_1402A90E1
 * 00000001402A8F75: cmp     r11d, ecx
 * 00000001402A8F78: jz      loc_1402A90E1
 * 00000001402A8F7E: mov     rax, [rbp+2150h+var_20A8]
 * 00000001402A8F85: lea     rdx, [rbp+2150h+var_1CB8]
 * 00000001402A8F8C: mov     r9d, ecx
 * 00000001402A8F8F: mov     r13d, 1
 * 00000001402A8F95: mov     [rax+0Ch], r11d
 * 00000001402A8F99: mov     [rax+10h], ecx
 * 00000001402A8F9C: lea     rcx, [rbp+2150h+var_1E68]
 * 00000001402A8FA3: mov     eax, [rax+0Ch]
 * 00000001402A8FA6: sub     r9d, eax
 * 00000001402A8FA9: mov     esi, r9d
 * 00000001402A8FAC: lea     rbx, [r12+rax]
 * 00000001402A8FB0: add     rsi, rbx
 * 00000001402A8FB3: mov     r10, [rdx]
 * 00000001402A8FB6: mov     eax, [rcx]
 * 00000001402A8FB8: add     rax, r10
 * 00000001402A8FBB: cmp     rbx, rax
 * 00000001402A8FBE: jnb     short loc_1402A8FC9
 * 00000001402A8FC0: cmp     rsi, r10
 * 00000001402A8FC3: ja      loc_1402A90EA
 * 00000001402A8FC9: add     r8d, r13d
 * 00000001402A8FCC: add     rdx, 8
 * 00000001402A8FD0: add     rcx, 4
 * 00000001402A8FD4: cmp     r8d, 5
 * 00000001402A8FD8: jb      short loc_1402A8FB3
 * 00000001402A8FDA: add     [r14+688h], r9d
 * 00000001402A8FE1: mov     r10, rbx
 * 00000001402A8FE4: mov     r11d, [r14+674h]
 * 00000001402A8FEB: mov     rax, rbx
 * 00000001402A8FEE: mov     r15, [r14+678h]
 * 00000001402A8FF5: cmp     rbx, rsi
 * 00000001402A8FF8: jnb     short loc_1402A900A
 * 00000001402A8FFA: mov     ecx, 40h ; '@'
 * 00000001402A8FFF: prefetchnta byte ptr [rax]
 * 00000001402A9002: add     rax, rcx
 * 00000001402A9005: cmp     rax, rsi
 * 00000001402A9008: jb      short loc_1402A8FFF
 * 00000001402A900A: mov     esi, r9d
 * 00000001402A900D: mov     r8, r15
 * 00000001402A9010: shr     esi, 7
 * 00000001402A9013: test    esi, esi
 * 00000001402A9015: jz      short loc_1402A907C
 * 00000001402A9017: mov     rdi, 7010008004002001h
 * 00000001402A9021: mov     eax, 8
 * 00000001402A9026: xor     r8, [r10]
 * 00000001402A9029: mov     ecx, r11d
 * 00000001402A902C: rol     r8, cl
 * 00000001402A902F: xor     r8, [r10+8]
 * 00000001402A9033: add     r10, 10h
 * 00000001402A9037: rol     r8, cl
 * 00000001402A903A: sub     rax, r13
 * 00000001402A903D: jnz     short loc_1402A9026
 * 00000001402A903F: mov     rcx, r10
 * 00000001402A9042: sub     rcx, rbx
 * 00000001402A9045: xor     rcx, r15
 * 00000001402A9048: mov     rax, rcx
 * 00000001402A904B: rol     rax, 11h
 * 00000001402A904F: xor     rcx, rax
 * 00000001402A9052: mov     rax, rdi
 * 00000001402A9055: mul     rcx
 * 00000001402A9058: xor     eax, edx
 * 00000001402A905A: mov     [rbp+2150h+var_1A28], rdx
 * 00000001402A9061: xor     r11d, eax
 * 00000001402A9064: and     r11d, 3Fh
 * 00000001402A9068: cmovz   r11d, r13d
 * 00000001402A906C: add     esi, 0FFFFFFFFh
 * 00000001402A906F: jnz     short loc_1402A9021
 * 00000001402A9071: mov     r12, [rbp+2150h+var_2120]
 * 00000001402A9075: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A907C: and     r9d, 7Fh
 * 00000001402A9080: cmp     r9d, 8
 * 00000001402A9084: jb      short loc_1402A90A3
 * 00000001402A9086: mov     eax, r9d
 * 00000001402A9089: shr     rax, 3
 * 00000001402A908D: xor     r8, [r10]
 * 00000001402A9090: mov     ecx, r11d
 * 00000001402A9093: rol     r8, cl
 * 00000001402A9096: add     r10, 8
 * 00000001402A909A: add     r9d, 0FFFFFFF8h
 * 00000001402A909E: sub     rax, r13
 * 00000001402A90A1: jnz     short loc_1402A908D
 * 00000001402A90A3: test    r9d, r9d
 * 00000001402A90A6: jz      short loc_1402A90BE
 * 00000001402A90A8: movzx   eax, byte ptr [r10]
 * 00000001402A90AC: mov     ecx, r11d
 * 00000001402A90AF: xor     r8, rax
 * 00000001402A90B2: add     r10, r13
 * 00000001402A90B5: rol     r8, cl
 * 00000001402A90B8: add     r9d, 0FFFFFFFFh
 * 00000001402A90BC: jnz     short loc_1402A90A8
 * 00000001402A90BE: mov     rax, r8
 * 00000001402A90C1: jmp     short loc_1402A90C6
 * 00000001402A90C3: xor     r8d, eax
 * 00000001402A90C6: shr     rax, 1Fh
 * 00000001402A90CA: test    rax, rax
 * 00000001402A90CD: jnz     short loc_1402A90C3
 * 00000001402A90CF: mov     rsi, [rbp+2150h+var_20A8]
 * 00000001402A90D6: btr     r8d, 1Fh
 * 00000001402A90DB: mov     [rsi+14h], r8d
 * 00000001402A90DF: jmp     short loc_1402A90F1
 * 00000001402A90E1: mov     rsi, [rbp+2150h+var_20A8]
 * 00000001402A90E8: jmp     short loc_1402A90F8
 * 00000001402A90EA: mov     rsi, [rbp+2150h+var_20A8]
 * 00000001402A90F1: mov     r10, [rbp+2150h+var_2108]
 * 00000001402A90F5: xor     r8d, r8d
 * 00000001402A90F8: mov     rdx, [rbp+2150h+var_20B8]
 * 00000001402A90FF: cmp     r10, rdx
 * 00000001402A9102: jz      short loc_1402A9146
 * 00000001402A9104: mov     eax, [r10]
 * 00000001402A9107: mov     ecx, [r10+4]
 * 00000001402A910B: cmp     eax, [rbp+2150h+var_2118]
 * 00000001402A910E: jb      short loc_1402A9146
 * 00000001402A9110: cmp     ecx, [rbp+2150h+var_2140]
 * 00000001402A9113: ja      short loc_1402A9146
 * 00000001402A9115: mov     rcx, [rbp+2150h+var_2130]
 * 00000001402A9119: mov     r11d, 0Ch
 * 00000001402A911F: cmp     rcx, rdx
 * 00000001402A9122: jz      short loc_1402A913F
 * 00000001402A9124: mov     rax, [rbp+2150h+var_20C8]
 * 00000001402A912B: mov     byte ptr [rax], 80h
 * 00000001402A912E: inc     rax
 * 00000001402A9131: add     rcx, r11
 * 00000001402A9134: mov     [rbp+2150h+var_20C8], rax
 * 00000001402A913B: mov     [rbp+2150h+var_2130], rcx
 * 00000001402A913F: add     r10, r11
 * 00000001402A9142: mov     [rbp+2150h+var_2108], r10
 * 00000001402A9146: mov     r13, [rbp+2150h+var_2148]
 * 00000001402A914A: add     rsi, 18h
 * 00000001402A914E: add     r13, 28h ; '('
 * 00000001402A9152: mov     [rbp+2150h+var_20A8], rsi
 * 00000001402A9159: mov     [rbp+2150h+var_2148], r13
 * 00000001402A915D: cmp     rsi, [rbp+2150h+var_20D0]
 * 00000001402A9164: jnz     loc_1402A8900
 * 00000001402A916A: mov     rbx, [rbp+2150h+var_2050]
 * 00000001402A9171: xor     r13d, r13d
 * 00000001402A9174: mov     rsi, rbx
 * 00000001402A9177: mov     [rbp+2150h+var_2048], rbx
 * 00000001402A917E: mov     ecx, r13d
 * 00000001402A9181: mov     [rbp+2150h+var_2100], ecx
 * 00000001402A9184: mov     r12d, 80000000h
 * 00000001402A918A: mov     rbx, rsi
 * 00000001402A918D: lea     eax, [rcx+r12]
 * 00000001402A9191: test    r12d, eax
 * 00000001402A9194: jnz     short loc_1402A91AC
 * 00000001402A9196: cmp     ecx, 0C000010Eh
 * 00000001402A919C: jz      short loc_1402A91AC
 * 00000001402A919E: mov     ecx, [rbp+2150h+var_2100]
 * 00000001402A91A1: jmp     loc_1402A9240
 * 00000001402A91A6: mov     r12d, 80000000h
 * 00000001402A91AC: mov     rax, [rsi+1E8h]
 * 00000001402A91B3: mov     rcx, [rbp+2150h+var_1F50]
 * 00000001402A91BA: call    KeGuardDispatchICall
 * 00000001402A91BF: mov     ecx, [rax+94h]
 * 00000001402A91C5: cmp     ecx, 14h
 * 00000001402A91C8: jb      loc_1402A759E
 * 00000001402A91CE: mov     eax, [rax+90h]
 * 00000001402A91D4: lea     r15, [rax+rcx]
 * 00000001402A91D8: mov     rcx, [rbp+2150h+var_1F50]
 * 00000001402A91DF: add     r15, rcx
 * 00000001402A91E2: lea     r14, [rax+rcx]
 * 00000001402A91E6: jmp     short loc_1402A9238
 * 00000001402A91E8: cmp     [r14+0Ch], r13d
 * 00000001402A91EC: jz      short loc_1402A923D
 * 00000001402A91EE: mov     eax, [r14+10h]
 * 00000001402A91F2: test    eax, eax
 * 00000001402A91F4: jz      short loc_1402A923D
 * 00000001402A91F6: mov     rdx, [rax+rcx]
 * 00000001402A91FA: test    rdx, rdx
 * 00000001402A91FD: jz      short loc_1402A9234
 * 00000001402A91FF: mov     r8d, 8000000Fh
 * 00000001402A9205: lea     rcx, [rbp+2150h+var_2048]
 * 00000001402A920C: call    sub_1402AC5F8
 * 00000001402A9211: mov     rsi, [rbp+2150h+var_2048]
 * 00000001402A9218: mov     ecx, eax
 * 00000001402A921A: add     eax, r12d
 * 00000001402A921D: mov     rbx, rsi
 * 00000001402A9220: test    r12d, eax
 * 00000001402A9223: jnz     short loc_1402A922D
 * 00000001402A9225: cmp     ecx, 0C000010Eh
 * 00000001402A922B: jnz     short loc_1402A9240
 * 00000001402A922D: mov     rcx, [rbp+2150h+var_1F50]
 * 00000001402A9234: add     r14, 14h
 * 00000001402A9238: cmp     r14, r15
 * 00000001402A923B: jnz     short loc_1402A91E8
 * 00000001402A923D: mov     ecx, r13d
 * 00000001402A9240: lea     eax, [rcx+r12]
 * 00000001402A9244: test    r12d, eax
 * 00000001402A9247: jnz     short loc_1402A9255
 * 00000001402A9249: cmp     ecx, 0C000010Eh
 * 00000001402A924F: jnz     loc_1402A93EE
 * 00000001402A9255: mov     rax, [rbx+528h]
 * 00000001402A925C: lea     r14, [rbx+7C8h]
 * 00000001402A9263: lea     r8, [rbp+2150h+var_1D5C]
 * 00000001402A926A: mov     rdx, r14
 * 00000001402A926D: mov     rcx, [rax+20h]
 * 00000001402A9271: mov     rax, [rbx+1F0h]
 * 00000001402A9278: call    KeGuardDispatchICall
 * 00000001402A927D: test    rax, rax
 * 00000001402A9280: jz      loc_1402A99EA
 * 00000001402A9286: mov     rax, [rbx+1E8h]
 * 00000001402A928D: mov     rcx, [r14]
 * 00000001402A9290: call    KeGuardDispatchICall
 * 00000001402A9295: test    rax, rax
 * 00000001402A9298: jz      loc_1402A99EA
 * 00000001402A929E: mov     eax, [rax+50h]
 * 00000001402A92A1: mov     [rbx+7C4h], eax
 * 00000001402A92A7: mov     dword ptr [rbx+7A8h], 8
 * 00000001402A92B1: mov     r15, [rbx+5B8h]
 * 00000001402A92B8: test    r15, r15
 * 00000001402A92BB: jz      loc_1402A9555
 * 00000001402A92C1: cmp     [r15], r13
 * 00000001402A92C4: jz      loc_1402A9555
 * 00000001402A92CA: mov     r9d, [rbx+698h]
 * 00000001402A92D1: mov     r12d, 20h ; ' '
 * 00000001402A92D7: mov     r8d, [rbx+77Ch]
 * 00000001402A92DE: cmp     r9d, 7
 * 00000001402A92E2: mov     [rbp+2150h+var_20EC], r9d
 * 00000001402A92E6: cmovnz  r12d, r13d
 * 00000001402A92EA: mov     r13d, [rbx+644h]
 * 00000001402A92F1: lea     eax, [r13+30h]
 * 00000001402A92F5: cmp     eax, [rbx+85Ch]
 * 00000001402A92FB: jbe     loc_1402A947F
 * 00000001402A9301: mov     edx, eax
 * 00000001402A9303: mov     rcx, rbx
 * 00000001402A9306: call    sub_1402AEFBC
 * 00000001402A930B: xor     r10d, r10d
 * 00000001402A930E: mov     r14, rax
 * 00000001402A9311: test    rax, rax
 * 00000001402A9314: jz      loc_1402A93E8
 * 00000001402A931A: mov     edx, [rbx+7D8h]
 * 00000001402A9320: test    dl, 4
 * 00000001402A9323: jnz     loc_1402A93D7
 * 00000001402A9329: mov     ecx, [rbx+644h]
 * 00000001402A932F: and     edx, 20000000h
 * 00000001402A9335: mov     r9, [rbx+628h]
 * 00000001402A933C: neg     edx
 * 00000001402A933E: lea     edx, [r10+1]
 * 00000001402A9342: sbb     r8d, r8d
 * 00000001402A9345: and     r8d, [rbx+77Ch]
 * 00000001402A934C: cmp     ecx, 8
 * 00000001402A934F: jb      short loc_1402A9366
 * 00000001402A9351: mov     eax, ecx
 * 00000001402A9353: shr     rax, 3
 * 00000001402A9357: mov     [rbx], r10
 * 00000001402A935A: add     ecx, 0FFFFFFF8h
 * 00000001402A935D: add     rbx, 8
 * 00000001402A9361: sub     rax, rdx
 * 00000001402A9364: jnz     short loc_1402A9357
 * 00000001402A9366: test    ecx, ecx
 * 00000001402A9368: jz      short loc_1402A9375
 * 00000001402A936A: mov     [rbx], r10b
 * 00000001402A936D: add     rbx, rdx
 * 00000001402A9370: add     ecx, 0FFFFFFFFh
 * 00000001402A9373: jnz     short loc_1402A936A
 * 00000001402A9375: mov     ebx, [r14+77Ch]
 * 00000001402A937C: mov     eax, 3
 * 00000001402A9381: mov     [r14+77Ch], r8d
 * 00000001402A9388: cmp     r8d, eax
 * 00000001402A938B: jz      short loc_1402A93C1
 * 00000001402A938D: test    dword ptr [r14+7D8h], 10000000h
 * 00000001402A9398: mov     ecx, r10d
 * 00000001402A939B: cmovz   ecx, r8d
 * 00000001402A939F: test    ecx, ecx
 * 00000001402A93A1: jz      short loc_1402A93B8
 * 00000001402A93A3: mov     rax, [r14+218h]
 * 00000001402A93AA: lea     rcx, [r9-8]
 * 00000001402A93AE: mov     rdx, [rcx]
 * 00000001402A93B1: call    KeGuardDispatchICall
 * 00000001402A93B6: jmp     short loc_1402A93D0
 * 00000001402A93B8: mov     rax, [r14+0F0h]
 * 00000001402A93BF: jmp     short loc_1402A93C8
 * 00000001402A93C1: mov     rax, [r14+358h]
 * 00000001402A93C8: mov     rcx, r9
 * 00000001402A93CB: call    KeGuardDispatchICall
 * 00000001402A93D0: mov     [r14+77Ch], ebx
 * 00000001402A93D7: and     dword ptr [r14+7D8h], 0FFFFFFFBh
 * 00000001402A93DF: mov     r9d, [rbp+2150h+var_20EC]
 * 00000001402A93E3: jmp     loc_1402A9488
 * 00000001402A93E8: mov     rbx, rsi
 * 00000001402A93EB: xor     r13d, r13d
 * 00000001402A93EE: mov     r12d, 1
 * 00000001402A93F4: mov     ecx, 8000h
 * 00000001402A93F9: test    [rbx+7D8h], ecx
 * 00000001402A93FF: jnz     short loc_1402A940E
 * 00000001402A9401: cmp     [rbx+750h], r13d
 * 00000001402A9408: jnz     loc_1402A9C83
 * 00000001402A940E: mov     r14, [rbx+7D0h]
 * 00000001402A9415: lea     rdx, [rbp+2150h+var_1BF0]
 * 00000001402A941C: mov     [rbx+7D0h], r13
 * 00000001402A9423: mov     rcx, r14
 * 00000001402A9426: mov     rax, [rbx+288h]
 * 00000001402A942D: call    KeGuardDispatchICall
 * 00000001402A9432: mov     eax, [rbx+7D8h]
 * 00000001402A9438: test    r12b, al
 * 00000001402A943B: jz      loc_1402A9A3A
 * 00000001402A9441: and     eax, 0FFFFFFFEh
 * 00000001402A9444: mov     rcx, r14
 * 00000001402A9447: mov     [rbx+7D8h], eax
 * 00000001402A944D: mov     rax, [rbx+270h]
 * 00000001402A9454: call    KeGuardDispatchICall
 * 00000001402A9459: mov     r14, rax
 * 00000001402A945C: test    rax, rax
 * 00000001402A945F: jz      loc_1402A9A33
 * 00000001402A9465: mov     rax, [rbx+290h]
 * 00000001402A946C: mov     rcx, r14
 * 00000001402A946F: call    KeGuardDispatchICall
 * 00000001402A9474: mov     [rbx+7C0h], eax
 * 00000001402A947A: jmp     loc_1402A9A3A
 * 00000001402A947F: mov     r14, rbx
 * 00000001402A9482: mov     [rbx+644h], eax
 * 00000001402A9488: lea     rbx, [r14+r13]
 * 00000001402A948C: mov     r8d, 1
 * 00000001402A9492: add     [r14+66Ch], r8d
 * 00000001402A9499: mov     rax, rbx
 * 00000001402A949C: mov     [rbp+2150h+var_1A20], rbx
 * 00000001402A94A3: xor     r13d, r13d
 * 00000001402A94A6: lea     ecx, [r8+2Fh]
 * 00000001402A94AA: lea     edx, [rcx-2Ah]
 * 00000001402A94AD: mov     [rax], r13
 * 00000001402A94B0: add     ecx, 0FFFFFFF8h
 * 00000001402A94B3: add     rax, 8
 * 00000001402A94B7: sub     rdx, r8
 * 00000001402A94BA: jnz     short loc_1402A94AD
 * 00000001402A94BC: test    ecx, ecx
 * 00000001402A94BE: jz      short loc_1402A94CB
 * 00000001402A94C0: mov     [rax], r13b
 * 00000001402A94C3: add     rax, r8
 * 00000001402A94C6: add     ecx, 0FFFFFFFFh
 * 00000001402A94C9: jnz     short loc_1402A94C0
 * 00000001402A94CB: mov     [rbx], r12d
 * 00000001402A94CE: mov     [rbx+8], r15
 * 00000001402A94D2: cmp     r9d, 7
 * 00000001402A94D6: jnz     short loc_1402A94ED
 * 00000001402A94D8: lea     r9, [rbx+18h]
 * 00000001402A94DC: mov     r8d, 8
 * 00000001402A94E2: mov     rdx, r15
 * 00000001402A94E5: mov     rcx, r14
 * 00000001402A94E8: call    sub_14017573C
 * 00000001402A94ED: mov     dword ptr [rbx+10h], 8
 * 00000001402A94F4: lea     rdx, [r15+8]
 * 00000001402A94F8: add     dword ptr [r14+688h], 8
 * 00000001402A9500: mov     rax, r15
 * 00000001402A9503: mov     ecx, [r14+674h]
 * 00000001402A950A: mov     r8, [r14+678h]
 * 00000001402A9511: cmp     r15, rdx
 * 00000001402A9514: jnb     short loc_1402A9527
 * 00000001402A9516: mov     r9d, 40h ; '@'
 * 00000001402A951C: prefetchnta byte ptr [rax]
 * 00000001402A951F: add     rax, r9
 * 00000001402A9522: cmp     rax, rdx
 * 00000001402A9525: jb      short loc_1402A951C
 * 00000001402A9527: mov     rax, [r15]
 * 00000001402A952A: xor     rax, r8
 * 00000001402A952D: rol     rax, cl
 * 00000001402A9530: mov     rcx, rax
 * 00000001402A9533: jmp     short loc_1402A9537
 * 00000001402A9535: xor     eax, ecx
 * 00000001402A9537: shr     rcx, 1Fh
 * 00000001402A953B: test    rcx, rcx
 * 00000001402A953E: jnz     short loc_1402A9535
 * 00000001402A9540: btr     eax, 1Fh
 * 00000001402A9544: mov     rsi, r14
 * 00000001402A9547: mov     [rbx+14h], eax
 * 00000001402A954A: mov     rbx, r14
 * 00000001402A954D: add     dword ptr [r14+688h], 8
 * 00000001402A9555: mov     dword ptr [rbx+7A8h], 9
 * 00000001402A955F: mov     r15, [rbx+5B8h]
 * 00000001402A9566: test    r15, r15
 * 00000001402A9569: jz      loc_1402A99D1
 * 00000001402A956F: mov     r15, [r15]
 * 00000001402A9572: test    r15, r15
 * 00000001402A9575: jz      loc_1402A99D1
 * 00000001402A957B: lock or [rsp+1120h+var_1120], r13d
 * 00000001402A9580: mov     r12d, [r15+644h]
 * 00000001402A9587: mov     r9, r15
 * 00000001402A958A: mov     r10d, [r15+674h]
 * 00000001402A9591: mov     rax, r15
 * 00000001402A9594: mov     r14, [r15+678h]
 * 00000001402A959B: mov     [rbp+2150h+var_20EC], r12d
 * 00000001402A959F: lea     rcx, [r15+r12]
 * 00000001402A95A3: cmp     r15, rcx
 * 00000001402A95A6: jnb     short loc_1402A95B8
 * 00000001402A95A8: mov     edx, 40h ; '@'
 * 00000001402A95AD: prefetchnta byte ptr [rax]
 * 00000001402A95B0: add     rax, rdx
 * 00000001402A95B3: cmp     rax, rcx
 * 00000001402A95B6: jb      short loc_1402A95AD
 * 00000001402A95B8: mov     r11d, r12d
 * 00000001402A95BB: mov     r8, r14
 * 00000001402A95BE: shr     r11d, 7
 * 00000001402A95C2: test    r11d, r11d
 * 00000001402A95C5: jz      short loc_1402A9639
 * 00000001402A95C7: mov     r12, 7010008004002001h
 * 00000001402A95D1: mov     edx, 8
 * 00000001402A95D6: lea     edi, [rdx-7]
 * 00000001402A95D9: mov     rax, [r9]
 * 00000001402A95DC: mov     ecx, r10d
 * 00000001402A95DF: xor     rax, r8
 * 00000001402A95E2: mov     r8, [r9+8]
 * 00000001402A95E6: rol     rax, cl
 * 00000001402A95E9: add     r9, 10h
 * 00000001402A95ED: xor     r8, rax
 * 00000001402A95F0: rol     r8, cl
 * 00000001402A95F3: sub     rdx, rdi
 * 00000001402A95F6: jnz     short loc_1402A95D9
 * 00000001402A95F8: mov     rcx, r9
 * 00000001402A95FB: sub     rcx, r15
 * 00000001402A95FE: xor     rcx, r14
 * 00000001402A9601: mov     rax, rcx
 * 00000001402A9604: rol     rax, 11h
 * 00000001402A9608: xor     rcx, rax
 * 00000001402A960B: mov     rax, r12
 * 00000001402A960E: mul     rcx
 * 00000001402A9611: xor     eax, edx
 * 00000001402A9613: mov     [rbp+2150h+var_1A18], rdx
 * 00000001402A961A: xor     r10d, eax
 * 00000001402A961D: mov     rax, rdi
 * 00000001402A9620: and     r10d, 3Fh
 * 00000001402A9624: cmovz   r10d, eax
 * 00000001402A9628: add     r11d, 0FFFFFFFFh
 * 00000001402A962C: jnz     short loc_1402A95D1
 * 00000001402A962E: mov     r12d, [rbp+2150h+var_20EC]
 * 00000001402A9632: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A9639: mov     edx, r12d
 * 00000001402A963C: mov     r14d, 1
 * 00000001402A9642: and     edx, 7Fh
 * 00000001402A9645: cmp     edx, 8
 * 00000001402A9648: jb      short loc_1402A9666
 * 00000001402A964A: mov     r11d, edx
 * 00000001402A964D: shr     r11, 3
 * 00000001402A9651: xor     r8, [r9]
 * 00000001402A9654: mov     ecx, r10d
 * 00000001402A9657: rol     r8, cl
 * 00000001402A965A: add     r9, 8
 * 00000001402A965E: add     edx, 0FFFFFFF8h
 * 00000001402A9661: sub     r11, r14
 * 00000001402A9664: jnz     short loc_1402A9651
 * 00000001402A9666: test    edx, edx
 * 00000001402A9668: jz      short loc_1402A967F
 * 00000001402A966A: movzx   eax, byte ptr [r9]
 * 00000001402A966E: mov     ecx, r10d
 * 00000001402A9671: xor     r8, rax
 * 00000001402A9674: add     r9, r14
 * 00000001402A9677: rol     r8, cl
 * 00000001402A967A: add     edx, 0FFFFFFFFh
 * 00000001402A967D: jnz     short loc_1402A966A
 * 00000001402A967F: mov     rax, [rbx+5C0h]
 * 00000001402A9686: cmp     r8, [rax]
 * 00000001402A9689: jz      short loc_1402A970A
 * 00000001402A968B: mov     rax, [rbx+548h]
 * 00000001402A9692: mov     [rax], r15
 * 00000001402A9695: mov     [rax+10h], r12d
 * 00000001402A9699: mov     rax, [rbx+5C0h]
 * 00000001402A96A0: mov     rcx, [rax]
 * 00000001402A96A3: cmp     [rbx+750h], r13d
 * 00000001402A96AA: jnz     loc_1402A93EE
 * 00000001402A96B0: mov     rax, [rbx+548h]
 * 00000001402A96B7: xor     rcx, r8
 * 00000001402A96BA: mov     [rax+18h], rcx
 * 00000001402A96BE: cmp     [rbx+750h], r13d
 * 00000001402A96C5: jnz     loc_1402A93EE
 * 00000001402A96CB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A96D5: mov     r12d, 1
 * 00000001402A96DB: add     rax, rbx
 * 00000001402A96DE: mov     [rbx+758h], rax
 * 00000001402A96E5: mov     [rbx+760h], r13
 * 00000001402A96EC: mov     qword ptr [rbx+768h], 111h
 * 00000001402A96F7: mov     [rbx+770h], r8
 * 00000001402A96FE: mov     [rbx+750h], r12d
 * 00000001402A9705: jmp     loc_1402A93F4
 * 00000001402A970A: mov     r9d, [rbx+698h]
 * 00000001402A9711: mov     r13d, 20h ; ' '
 * 00000001402A9717: mov     eax, [rbx+644h]
 * 00000001402A971D: cmp     r9d, 7
 * 00000001402A9721: mov     r8d, [rbx+77Ch]
 * 00000001402A9728: mov     [rbp+2150h+var_2118], eax
 * 00000001402A972B: lea     r10d, [r13-20h]
 * 00000001402A972F: mov     [rbp+2150h+var_20EC], r9d
 * 00000001402A9733: cmovnz  r13d, r10d
 * 00000001402A9737: add     eax, 30h ; '0'
 * 00000001402A973A: cmp     eax, [rbx+85Ch]
 * 00000001402A9740: jbe     loc_1402A982D
 * 00000001402A9746: mov     edx, eax
 * 00000001402A9748: mov     rcx, rbx
 * 00000001402A974B: call    sub_1402AEFBC
 * 00000001402A9750: xor     r10d, r10d
 * 00000001402A9753: mov     r14, rax
 * 00000001402A9756: test    rax, rax
 * 00000001402A9759: jz      loc_1402A93E8
 * 00000001402A975F: mov     edx, [rbx+7D8h]
 * 00000001402A9765: test    dl, 4
 * 00000001402A9768: jnz     loc_1402A981F
 * 00000001402A976E: mov     ecx, [rbx+644h]
 * 00000001402A9774: and     edx, 20000000h
 * 00000001402A977A: mov     r9, [rbx+628h]
 * 00000001402A9781: neg     edx
 * 00000001402A9783: lea     edx, [r10+1]
 * 00000001402A9787: sbb     r8d, r8d
 * 00000001402A978A: and     r8d, [rbx+77Ch]
 * 00000001402A9791: cmp     ecx, 8
 * 00000001402A9794: jb      short loc_1402A97AB
 * 00000001402A9796: mov     eax, ecx
 * 00000001402A9798: shr     rax, 3
 * 00000001402A979C: mov     [rbx], r10
 * 00000001402A979F: add     ecx, 0FFFFFFF8h
 * 00000001402A97A2: add     rbx, 8
 * 00000001402A97A6: sub     rax, rdx
 * 00000001402A97A9: jnz     short loc_1402A979C
 * 00000001402A97AB: test    ecx, ecx
 * 00000001402A97AD: jz      short loc_1402A97BA
 * 00000001402A97AF: mov     [rbx], r10b
 * 00000001402A97B2: add     rbx, rdx
 * 00000001402A97B5: add     ecx, 0FFFFFFFFh
 * 00000001402A97B8: jnz     short loc_1402A97AF
 * 00000001402A97BA: mov     ebx, [r14+77Ch]
 * 00000001402A97C1: mov     eax, 3
 * 00000001402A97C6: mov     [r14+77Ch], r8d
 * 00000001402A97CD: cmp     r8d, eax
 * 00000001402A97D0: jz      short loc_1402A9806
 * 00000001402A97D2: test    dword ptr [r14+7D8h], 10000000h
 * 00000001402A97DD: mov     ecx, r10d
 * 00000001402A97E0: cmovz   ecx, r8d
 * 00000001402A97E4: test    ecx, ecx
 * 00000001402A97E6: jz      short loc_1402A97FD
 * 00000001402A97E8: mov     rax, [r14+218h]
 * 00000001402A97EF: lea     rcx, [r9-8]
 * 00000001402A97F3: mov     rdx, [rcx]
 * 00000001402A97F6: call    KeGuardDispatchICall
 * 00000001402A97FB: jmp     short loc_1402A9815
 * 00000001402A97FD: mov     rax, [r14+0F0h]
 * 00000001402A9804: jmp     short loc_1402A980D
 * 00000001402A9806: mov     rax, [r14+358h]
 * 00000001402A980D: mov     rcx, r9
 * 00000001402A9810: call    KeGuardDispatchICall
 * 00000001402A9815: mov     [r14+77Ch], ebx
 * 00000001402A981C: xor     r10d, r10d
 * 00000001402A981F: and     dword ptr [r14+7D8h], 0FFFFFFFBh
 * 00000001402A9827: mov     r9d, [rbp+2150h+var_20EC]
 * 00000001402A982B: jmp     short loc_1402A9836
 * 00000001402A982D: mov     r14, rbx
 * 00000001402A9830: mov     [rbx+644h], eax
 * 00000001402A9836: mov     ebx, [rbp+2150h+var_2118]
 * 00000001402A9839: mov     r8d, 1
 * 00000001402A983F: add     [r14+66Ch], r8d
 * 00000001402A9846: add     rbx, r14
 * 00000001402A9849: mov     [rbp+2150h+var_20D0], rbx
 * 00000001402A9850: mov     rax, rbx
 * 00000001402A9853: lea     ecx, [r8+2Fh]
 * 00000001402A9857: mov     [rbp+2150h+var_1A10], rbx
 * 00000001402A985E: lea     edx, [rcx-2Ah]
 * 00000001402A9861: mov     [rax], r10
 * 00000001402A9864: add     ecx, 0FFFFFFF8h
 * 00000001402A9867: add     rax, 8
 * 00000001402A986B: sub     rdx, r8
 * 00000001402A986E: jnz     short loc_1402A9861
 * 00000001402A9870: test    ecx, ecx
 * 00000001402A9872: jz      short loc_1402A987F
 * 00000001402A9874: mov     [rax], r10b
 * 00000001402A9877: add     rax, r8
 * 00000001402A987A: add     ecx, 0FFFFFFFFh
 * 00000001402A987D: jnz     short loc_1402A9874
 * 00000001402A987F: mov     [rbx], r13d
 * 00000001402A9882: xor     r13d, r13d
 * 00000001402A9885: mov     [rbx+8], r15
 * 00000001402A9889: cmp     r9d, 7
 * 00000001402A988D: jnz     short loc_1402A98A6
 * 00000001402A988F: test    r12d, r12d
 * 00000001402A9892: jz      short loc_1402A98A6
 * 00000001402A9894: lea     r9, [rbx+18h]
 * 00000001402A9898: mov     r8d, r12d
 * 00000001402A989B: mov     rdx, r15
 * 00000001402A989E: mov     rcx, r14
 * 00000001402A98A1: call    sub_14017573C
 * 00000001402A98A6: mov     [rbx+10h], r12d
 * 00000001402A98AA: mov     r9, r15
 * 00000001402A98AD: add     [r14+688h], r12d
 * 00000001402A98B4: mov     rax, r15
 * 00000001402A98B7: mov     r10d, [r14+674h]
 * 00000001402A98BE: mov     rsi, [r14+678h]
 * 00000001402A98C5: mov     ecx, r12d
 * 00000001402A98C8: add     rcx, r15
 * 00000001402A98CB: cmp     r15, rcx
 * 00000001402A98CE: jnb     short loc_1402A98E0
 * 00000001402A98D0: mov     edx, 40h ; '@'
 * 00000001402A98D5: prefetchnta byte ptr [rax]
 * 00000001402A98D8: add     rax, rdx
 * 00000001402A98DB: cmp     rax, rcx
 * 00000001402A98DE: jb      short loc_1402A98D5
 * 00000001402A98E0: mov     r11d, r12d
 * 00000001402A98E3: mov     r8, rsi
 * 00000001402A98E6: shr     r11d, 7
 * 00000001402A98EA: test    r11d, r11d
 * 00000001402A98ED: jz      short loc_1402A9965
 * 00000001402A98EF: mov     rbx, 7010008004002001h
 * 00000001402A98F9: mov     edx, 8
 * 00000001402A98FE: lea     edi, [rdx-7]
 * 00000001402A9901: mov     rax, [r9]
 * 00000001402A9904: mov     ecx, r10d
 * 00000001402A9907: xor     rax, r8
 * 00000001402A990A: mov     r8, [r9+8]
 * 00000001402A990E: rol     rax, cl
 * 00000001402A9911: add     r9, 10h
 * 00000001402A9915: xor     r8, rax
 * 00000001402A9918: rol     r8, cl
 * 00000001402A991B: sub     rdx, rdi
 * 00000001402A991E: jnz     short loc_1402A9901
 * 00000001402A9920: mov     rcx, r9
 * 00000001402A9923: sub     rcx, r15
 * 00000001402A9926: xor     rcx, rsi
 * 00000001402A9929: mov     rax, rcx
 * 00000001402A992C: rol     rax, 11h
 * 00000001402A9930: xor     rcx, rax
 * 00000001402A9933: mov     rax, rbx
 * 00000001402A9936: mul     rcx
 * 00000001402A9939: xor     r10d, eax
 * 00000001402A993C: mov     [rbp+2150h+var_1A08], rdx
 * 00000001402A9943: xor     r10d, edx
 * 00000001402A9946: mov     rax, rdi
 * 00000001402A9949: and     r10d, 3Fh
 * 00000001402A994D: cmovz   r10d, eax
 * 00000001402A9951: add     r11d, 0FFFFFFFFh
 * 00000001402A9955: jnz     short loc_1402A98F9
 * 00000001402A9957: mov     rbx, [rbp+2150h+var_20D0]
 * 00000001402A995E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A9965: mov     edx, r12d
 * 00000001402A9968: mov     esi, 1
 * 00000001402A996D: and     edx, 7Fh
 * 00000001402A9970: cmp     edx, 8
 * 00000001402A9973: jb      short loc_1402A9991
 * 00000001402A9975: mov     r11d, edx
 * 00000001402A9978: shr     r11, 3
 * 00000001402A997C: xor     r8, [r9]
 * 00000001402A997F: mov     ecx, r10d
 * 00000001402A9982: rol     r8, cl
 * 00000001402A9985: add     r9, 8
 * 00000001402A9989: add     edx, 0FFFFFFF8h
 * 00000001402A998C: sub     r11, rsi
 * 00000001402A998F: jnz     short loc_1402A997C
 * 00000001402A9991: test    edx, edx
 * 00000001402A9993: jz      short loc_1402A99AA
 * 00000001402A9995: movzx   eax, byte ptr [r9]
 * 00000001402A9999: mov     ecx, r10d
 * 00000001402A999C: xor     r8, rax
 * 00000001402A999F: add     r9, rsi
 * 00000001402A99A2: rol     r8, cl
 * 00000001402A99A5: add     edx, 0FFFFFFFFh
 * 00000001402A99A8: jnz     short loc_1402A9995
 * 00000001402A99AA: mov     rax, r8
 * 00000001402A99AD: jmp     short loc_1402A99B2
 * 00000001402A99AF: xor     r8d, eax
 * 00000001402A99B2: shr     rax, 1Fh
 * 00000001402A99B6: test    rax, rax
 * 00000001402A99B9: jnz     short loc_1402A99AF
 * 00000001402A99BB: btr     r8d, 1Fh
 * 00000001402A99C0: mov     rsi, r14
 * 00000001402A99C3: mov     [rbx+14h], r8d
 * 00000001402A99C7: mov     rbx, r14
 * 00000001402A99CA: add     [r14+688h], r12d
 * 00000001402A99D1: mov     dword ptr [rbx+7A8h], 0Ah
 * 00000001402A99DB: mov     dword ptr [rbx+7A8h], 0Bh
 * 00000001402A99E5: jmp     loc_1402A93EE
 * 00000001402A99EA: mov     r12d, 1
 * 00000001402A99F0: cmp     [rbx+750h], r13d
 * 00000001402A99F7: jnz     loc_1402A93F4
 * 00000001402A99FD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A9A07: add     rax, rbx
 * 00000001402A9A0A: mov     [rbx+758h], rax
 * 00000001402A9A11: mov     [rbx+760h], r13
 * 00000001402A9A18: mov     qword ptr [rbx+768h], 105h
 * 00000001402A9A23: mov     qword ptr [rbx+770h], 0FFFFFFFFC000007Bh
 * 00000001402A9A2E: jmp     loc_1402A96FE
 * 00000001402A9A33: or      dword ptr [rbx+7C0h], 0FFFFFFFFh
 * 00000001402A9A3A: test    r14, r14
 * 00000001402A9A3D: jz      loc_1402A9C83
 * 00000001402A9A43: mov     rax, [rbx+278h]
 * 00000001402A9A4A: mov     rcx, r14
 * 00000001402A9A4D: jmp     loc_1402A9C7E
 * 00000001402A9A52: mov     eax, [rsi+690h]
 * 00000001402A9A58: test    r12b, al
 * 00000001402A9A5B: jz      loc_1402A9C83
 * 00000001402A9A61: mov     ecx, [rsi+7C0h]
 * 00000001402A9A67: or      r15d, 0FFFFFFFFh
 * 00000001402A9A6B: cmp     ecx, r15d
 * 00000001402A9A6E: jz      short loc_1402A9A81
 * 00000001402A9A70: mov     rax, [rsi+268h]
 * 00000001402A9A77: call    KeGuardDispatchICall
 * 00000001402A9A7C: mov     rbx, rax
 * 00000001402A9A7F: jmp     short loc_1402A9A84
 * 00000001402A9A81: mov     rbx, r13
 * 00000001402A9A84: test    rbx, rbx
 * 00000001402A9A87: jnz     short loc_1402A9AA3
 * 00000001402A9A89: mov     rax, [rsi+270h]
 * 00000001402A9A90: xor     ecx, ecx
 * 00000001402A9A92: call    KeGuardDispatchICall
 * 00000001402A9A97: mov     rbx, rax
 * 00000001402A9A9A: test    rax, rax
 * 00000001402A9A9D: jz      loc_1402A9C83
 * 00000001402A9AA3: mov     rax, [rsi+280h]
 * 00000001402A9AAA: lea     rdx, [rbp+2150h+var_1BF0]
 * 00000001402A9AB1: mov     rcx, rbx
 * 00000001402A9AB4: call    KeGuardDispatchICall
 * 00000001402A9AB9: mov     r14d, eax
 * 00000001402A9ABC: test    eax, eax
 * 00000001402A9ABE: jns     short loc_1402A9AD1
 * 00000001402A9AC0: mov     rax, [rsi+278h]
 * 00000001402A9AC7: mov     rcx, rbx
 * 00000001402A9ACA: call    KeGuardDispatchICall
 * 00000001402A9ACF: jmp     short loc_1402A9B33
 * 00000001402A9AD1: mov     [rsi+7D0h], rbx
 * 00000001402A9AD8: mov     rax, [rsi+2A8h]
 * 00000001402A9ADF: call    KeGuardDispatchICall
 * 00000001402A9AE4: mov     rbx, rax
 * 00000001402A9AE7: mov     rax, [rsi+2C8h]
 * 00000001402A9AEE: mov     rcx, rbx
 * 00000001402A9AF1: call    KeGuardDispatchICall
 * 00000001402A9AF6: mov     rdx, rax
 * 00000001402A9AF9: test    rax, rax
 * 00000001402A9AFC: jnz     short loc_1402A9B03
 * 00000001402A9AFE: lea     ecx, [rax+4]
 * 00000001402A9B01: jmp     short loc_1402A9B15
 * 00000001402A9B03: mov     rax, [rsi+2D8h]
 * 00000001402A9B0A: mov     rcx, rbx
 * 00000001402A9B0D: call    KeGuardDispatchICall
 * 00000001402A9B12: mov     ecx, r13d
 * 00000001402A9B15: mov     eax, [rsi+7DCh]
 * 00000001402A9B1B: mov     r14d, r13d
 * 00000001402A9B1E: and     eax, 0FFFFFFFBh
 * 00000001402A9B21: or      eax, ecx
 * 00000001402A9B23: mov     [rsi+7DCh], eax
 * 00000001402A9B29: add     dword ptr [rsi+688h], 10000h
 * 00000001402A9B33: test    r14d, r14d
 * 00000001402A9B36: js      loc_1402A9C83
 * 00000001402A9B3C: mov     rax, [rsi+7B0h]
 * 00000001402A9B43: mov     rcx, [rax]
 * 00000001402A9B46: cmp     rcx, [rsi+7B8h]
 * 00000001402A9B4D: jnz     loc_1402A9BE8
 * 00000001402A9B53: mov     rax, [rsi+528h]
 * 00000001402A9B5A: cmp     [rax+30h], r13d
 * 00000001402A9B5E: jz      loc_1402A9BE8
 * 00000001402A9B64: lock or [rsp+1120h+var_1120], r13d
 * 00000001402A9B69: mov     rax, [rsi+7B0h]
 * 00000001402A9B70: mov     rcx, [rax]
 * 00000001402A9B73: cmp     rcx, [rsi+7B8h]
 * 00000001402A9B7A: jnz     short loc_1402A9BE8
 * 00000001402A9B7C: mov     rax, [rsi+7B0h]
 * 00000001402A9B83: mov     rdx, [rax]
 * 00000001402A9B86: mov     rcx, [rsi+7B8h]
 * 00000001402A9B8D: cmp     [rsi+750h], r13d
 * 00000001402A9B94: jnz     short loc_1402A9BA4
 * 00000001402A9B96: mov     rax, [rsi+548h]
 * 00000001402A9B9D: xor     rcx, rdx
 * 00000001402A9BA0: mov     [rax+18h], rcx
 * 00000001402A9BA4: mov     rcx, [rsi+7B8h]
 * 00000001402A9BAB: cmp     [rsi+750h], r13d
 * 00000001402A9BB2: jnz     short loc_1402A9BE8
 * 00000001402A9BB4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A9BBE: add     rax, rsi
 * 00000001402A9BC1: mov     [rsi+758h], rax
 * 00000001402A9BC8: mov     [rsi+760h], r13
 * 00000001402A9BCF: mov     qword ptr [rsi+768h], 103h
 * 00000001402A9BDA: mov     [rsi+770h], rcx
 * 00000001402A9BE1: mov     [rsi+750h], r12d
 * 00000001402A9BE8: mov     ecx, 8000h
 * 00000001402A9BED: test    [rsi+7D8h], ecx
 * 00000001402A9BF3: jnz     short loc_1402A9C02
 * 00000001402A9BF5: cmp     [rsi+750h], r13d
 * 00000001402A9BFC: jnz     loc_1402A9C83
 * 00000001402A9C02: mov     rbx, [rsi+7D0h]
 * 00000001402A9C09: lea     rdx, [rbp+2150h+var_1BF0]
 * 00000001402A9C10: mov     [rsi+7D0h], r13
 * 00000001402A9C17: mov     rcx, rbx
 * 00000001402A9C1A: mov     rax, [rsi+288h]
 * 00000001402A9C21: call    KeGuardDispatchICall
 * 00000001402A9C26: mov     eax, [rsi+7D8h]
 * 00000001402A9C2C: test    r12b, al
 * 00000001402A9C2F: jz      short loc_1402A9C6F
 * 00000001402A9C31: and     eax, 0FFFFFFFEh
 * 00000001402A9C34: mov     rcx, rbx
 * 00000001402A9C37: mov     [rsi+7D8h], eax
 * 00000001402A9C3D: mov     rax, [rsi+270h]
 * 00000001402A9C44: call    KeGuardDispatchICall
 * 00000001402A9C49: mov     rbx, rax
 * 00000001402A9C4C: test    rax, rax
 * 00000001402A9C4F: jz      short loc_1402A9C68
 * 00000001402A9C51: mov     rax, [rsi+290h]
 * 00000001402A9C58: mov     rcx, rbx
 * 00000001402A9C5B: call    KeGuardDispatchICall
 * 00000001402A9C60: mov     [rsi+7C0h], eax
 * 00000001402A9C66: jmp     short loc_1402A9C6F
 * 00000001402A9C68: mov     [rsi+7C0h], r15d
 * 00000001402A9C6F: test    rbx, rbx
 * 00000001402A9C72: jz      short loc_1402A9C83
 * 00000001402A9C74: mov     rax, [rsi+278h]
 * 00000001402A9C7B: mov     rcx, rbx
 * 00000001402A9C7E: call    KeGuardDispatchICall
 * 00000001402A9C83: mov     [rbp+2150h+var_2120], rsi
 * 00000001402A9C87: test    dword ptr [rsi+7D8h], 2000000h
 * 00000001402A9C91: jz      short loc_1402A9D06
 * 00000001402A9C93: mov     rbx, [rsi+7E0h]
 * 00000001402A9C9A: mov     rax, [rsi+380h]
 * 00000001402A9CA1: mov     rcx, rbx
 * 00000001402A9CA4: call    KeGuardDispatchICall
 * 00000001402A9CA9: test    eax, eax
 * 00000001402A9CAB: jz      short loc_1402A9CEA
 * 00000001402A9CAD: cmp     [rsi+750h], r13d
 * 00000001402A9CB4: jnz     short loc_1402A9CEA
 * 00000001402A9CB6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A9CC0: add     rax, rsi
 * 00000001402A9CC3: mov     [rsi+758h], rax
 * 00000001402A9CCA: mov     [rsi+760h], r13
 * 00000001402A9CD1: mov     qword ptr [rsi+768h], 110h
 * 00000001402A9CDC: mov     [rsi+770h], r13
 * 00000001402A9CE3: mov     [rsi+750h], r12d
 * 00000001402A9CEA: mov     rax, [rsi+378h]
 * 00000001402A9CF1: lea     rdx, sub_1402B1080
 * 00000001402A9CF8: xor     r9d, r9d
 * 00000001402A9CFB: mov     r8, rsi
 * 00000001402A9CFE: mov     rcx, rbx
 * 00000001402A9D01: call    KeGuardDispatchICall
 * 00000001402A9D06: test    dword ptr [rsi+7DCh], 100h
 * 00000001402A9D10: jz      short loc_1402A9D21
 * 00000001402A9D12: mov     rax, [rbp+2150h+var_2078]
 * 00000001402A9D19: mov     [rsp+1128h], rax
 * 00000001402A9D21: test    dword ptr [rsi+7D8h], 40000h
 * 00000001402A9D2B: jz      loc_1402A9DC0
 * 00000001402A9D31: rdtsc
 * 00000001402A9D33: shl     rdx, 20h
 * 00000001402A9D37: or      rax, rdx
 * 00000001402A9D3A: mov     rcx, rax
 * 00000001402A9D3D: ror     rax, 3
 * 00000001402A9D41: xor     rcx, rax
 * 00000001402A9D44: mov     rax, 7010008004002001h
 * 00000001402A9D4E: mul     rcx
 * 00000001402A9D51: mov     rcx, rdx
 * 00000001402A9D54: mov     [rbp+2150h+var_1A00], rdx
 * 00000001402A9D5B: xor     rcx, rax
 * 00000001402A9D5E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402A9D68: mul     rcx
 * 00000001402A9D6B: shr     rdx, 3
 * 00000001402A9D6F: lea     rax, [rdx+rdx*4]
 * 00000001402A9D73: add     rax, rax
 * 00000001402A9D76: sub     rcx, rax
 * 00000001402A9D79: mov     eax, 2
 * 00000001402A9D7E: cmp     rcx, rax
 * 00000001402A9D81: jnb     short loc_1402A9DC0
 * 00000001402A9D83: cmp     [rsi+750h], r13d
 * 00000001402A9D8A: jnz     short loc_1402A9DC0
 * 00000001402A9D8C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402A9D96: add     rax, rsi
 * 00000001402A9D99: mov     [rsi+758h], rax
 * 00000001402A9DA0: mov     [rsi+760h], r13
 * 00000001402A9DA7: mov     qword ptr [rsi+768h], 108h
 * 00000001402A9DB2: mov     [rsi+770h], r13
 * 00000001402A9DB9: mov     [rsi+750h], r12d
 * 00000001402A9DC0: mov     eax, [rsi+7D8h]
 * 00000001402A9DC6: mov     r11d, 8000h
 * 00000001402A9DCC: bt      eax, 1Eh
 * 00000001402A9DD0: jb      short loc_1402A9E3A
 * 00000001402A9DD2: test    r11d, eax
 * 00000001402A9DD5: jnz     short loc_1402A9DE0
 * 00000001402A9DD7: cmp     [rsi+750h], r13d
 * 00000001402A9DDE: jnz     short loc_1402A9E3A
 * 00000001402A9DE0: mov     rcx, [rsp+1120h+arg_0]
 * 00000001402A9DE8: test    [rcx+7D8h], r11d
 * 00000001402A9DEF: jnz     short loc_1402A9E3A
 * 00000001402A9DF1: add     rcx, 750h
 * 00000001402A9DF8: cmp     [rcx], r13d
 * 00000001402A9DFB: jz      short loc_1402A9E3A
 * 00000001402A9DFD: mov     r8d, 28h ; '('
 * 00000001402A9E03: lea     rdx, [rsi+750h]
 * 00000001402A9E0A: lea     r9d, [r8-23h]
 * 00000001402A9E0E: mov     rax, [rdx]
 * 00000001402A9E11: add     r8d, 0FFFFFFF8h
 * 00000001402A9E15: mov     [rcx], rax
 * 00000001402A9E18: add     rdx, 8
 * 00000001402A9E1C: add     rcx, 8
 * 00000001402A9E20: sub     r9, r12
 * 00000001402A9E23: jnz     short loc_1402A9E0E
 * 00000001402A9E25: test    r8d, r8d
 * 00000001402A9E28: jz      short loc_1402A9E3A
 * 00000001402A9E2A: mov     al, [rdx]
 * 00000001402A9E2C: add     rdx, r12
 * 00000001402A9E2F: mov     [rcx], al
 * 00000001402A9E31: add     rcx, r12
 * 00000001402A9E34: add     r8d, 0FFFFFFFFh
 * 00000001402A9E38: jnz     short loc_1402A9E2A
 * 00000001402A9E3A: test    [rsi+7D8h], r11d
 * 00000001402A9E41: jnz     short loc_1402A9E50
 * 00000001402A9E43: cmp     [rsi+750h], r13d
 * 00000001402A9E4A: jnz     loc_1402AA988
 * 00000001402A9E50: mov     eax, [rsi+868h]
 * 00000001402A9E56: test    eax, eax
 * 00000001402A9E58: jz      loc_1402AA988
 * 00000001402A9E5E: lea     r14, [rsi+rax]
 * 00000001402A9E62: mov     r11, [r14+8]
 * 00000001402A9E66: mov     [rbp+2150h+var_2130], r14
 * 00000001402A9E6A: test    r11, r11
 * 00000001402A9E6D: jz      loc_1402AA124
 * 00000001402A9E73: mov     r9d, [r14+10h]
 * 00000001402A9E77: mov     r8, r11
 * 00000001402A9E7A: add     [rsi+688h], r9d
 * 00000001402A9E81: mov     rax, r11
 * 00000001402A9E84: mov     r10d, [rsi+674h]
 * 00000001402A9E8B: mov     r12, [rsi+678h]
 * 00000001402A9E92: lea     rcx, [r11+r9]
 * 00000001402A9E96: cmp     r11, rcx
 * 00000001402A9E99: jnb     short loc_1402A9EAB
 * 00000001402A9E9B: mov     edx, 40h ; '@'
 * 00000001402A9EA0: prefetchnta byte ptr [rax]
 * 00000001402A9EA3: add     rax, rdx
 * 00000001402A9EA6: cmp     rax, rcx
 * 00000001402A9EA9: jb      short loc_1402A9EA0
 * 00000001402A9EAB: mov     r15d, r9d
 * 00000001402A9EAE: mov     rbx, r12
 * 00000001402A9EB1: shr     r15d, 7
 * 00000001402A9EB5: test    r15d, r15d
 * 00000001402A9EB8: jz      short loc_1402A9F2E
 * 00000001402A9EBA: mov     rdi, 7010008004002001h
 * 00000001402A9EC4: mov     edx, 8
 * 00000001402A9EC9: lea     r14d, [rdx-7]
 * 00000001402A9ECD: mov     rax, [r8]
 * 00000001402A9ED0: mov     ecx, r10d
 * 00000001402A9ED3: xor     rax, rbx
 * 00000001402A9ED6: mov     rbx, [r8+8]
 * 00000001402A9EDA: rol     rax, cl
 * 00000001402A9EDD: add     r8, 10h
 * 00000001402A9EE1: xor     rbx, rax
 * 00000001402A9EE4: rol     rbx, cl
 * 00000001402A9EE7: sub     rdx, r14
 * 00000001402A9EEA: jnz     short loc_1402A9ECD
 * 00000001402A9EEC: mov     rcx, r8
 * 00000001402A9EEF: sub     rcx, r11
 * 00000001402A9EF2: xor     rcx, r12
 * 00000001402A9EF5: mov     rax, rcx
 * 00000001402A9EF8: rol     rax, 11h
 * 00000001402A9EFC: xor     rcx, rax
 * 00000001402A9EFF: mov     rax, rdi
 * 00000001402A9F02: mul     rcx
 * 00000001402A9F05: xor     r10d, eax
 * 00000001402A9F08: mov     [rbp+2150h+var_19F8], rdx
 * 00000001402A9F0F: xor     r10d, edx
 * 00000001402A9F12: mov     rax, r14
 * 00000001402A9F15: and     r10d, 3Fh
 * 00000001402A9F19: cmovz   r10d, eax
 * 00000001402A9F1D: add     r15d, 0FFFFFFFFh
 * 00000001402A9F21: jnz     short loc_1402A9EC4
 * 00000001402A9F23: mov     r14, [rbp+2150h+var_2130]
 * 00000001402A9F27: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402A9F2E: and     r9d, 7Fh
 * 00000001402A9F32: mov     r11d, 1
 * 00000001402A9F38: cmp     r9d, 8
 * 00000001402A9F3C: jb      short loc_1402A9F5B
 * 00000001402A9F3E: mov     edx, r9d
 * 00000001402A9F41: shr     rdx, 3
 * 00000001402A9F45: xor     rbx, [r8]
 * 00000001402A9F48: mov     ecx, r10d
 * 00000001402A9F4B: rol     rbx, cl
 * 00000001402A9F4E: add     r8, 8
 * 00000001402A9F52: add     r9d, 0FFFFFFF8h
 * 00000001402A9F56: sub     rdx, r11
 * 00000001402A9F59: jnz     short loc_1402A9F45
 * 00000001402A9F5B: test    r9d, r9d
 * 00000001402A9F5E: jz      short loc_1402A9F76
 * 00000001402A9F60: movzx   eax, byte ptr [r8]
 * 00000001402A9F64: mov     ecx, r10d
 * 00000001402A9F67: xor     rbx, rax
 * 00000001402A9F6A: add     r8, r11
 * 00000001402A9F6D: rol     rbx, cl
 * 00000001402A9F70: add     r9d, 0FFFFFFFFh
 * 00000001402A9F74: jnz     short loc_1402A9F60
 * 00000001402A9F76: mov     rax, rbx
 * 00000001402A9F79: jmp     short loc_1402A9F7D
 * 00000001402A9F7B: xor     ebx, eax
 * 00000001402A9F7D: shr     rax, 1Fh
 * 00000001402A9F81: test    rax, rax
 * 00000001402A9F84: jnz     short loc_1402A9F7B
 * 00000001402A9F86: btr     ebx, 1Fh
 * 00000001402A9F8A: cmp     ebx, [r14+14h]
 * 00000001402A9F8E: jz      loc_1402AA069
 * 00000001402A9F94: cmp     [r14], eax
 * 00000001402A9F97: jnz     short loc_1402A9FA1
 * 00000001402A9F99: cmp     [r14+18h], eax
 * 00000001402A9F9D: cmovnz  r13d, r11d
 * 00000001402A9FA1: mov     ecx, [r14+10h]
 * 00000001402A9FA5: mov     rdx, [r14+8]
 * 00000001402A9FA9: test    rcx, rcx
 * 00000001402A9FAC: jz      loc_1402AA09B
 * 00000001402A9FB2: mov     eax, [rsi+7DCh]
 * 00000001402A9FB8: mov     r8d, 40h ; '@'
 * 00000001402A9FBE: test    r8b, al
 * 00000001402A9FC1: jz      loc_1402AA09B
 * 00000001402A9FC7: mov     r12, cr8
 * 00000001402A9FCB: lea     eax, [r8-3Eh]
 * 00000001402A9FCF: mov     cr8, rax
 * 00000001402A9FD3: mov     r15, rdx
 * 00000001402A9FD6: lea     rax, [rcx-1]
 * 00000001402A9FDA: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001402A9FE1: add     rax, rdx
 * 00000001402A9FE4: or      rax, 0FFFh
 * 00000001402A9FEA: mov     [rbp+2150h+var_20D0], rax
 * 00000001402A9FF1: lea     rax, [r15-1]
 * 00000001402A9FF5: mov     [rbp+2150h+var_2078], rax
 * 00000001402A9FFC: mov     rax, [rsi+450h]
 * 00000001402AA003: xor     edx, edx
 * 00000001402AA005: mov     rcx, r15
 * 00000001402AA008: call    KeGuardDispatchICall
 * 00000001402AA00D: cmp     eax, 0C000022Dh
 * 00000001402AA012: jnz     short loc_1402AA03B
 * 00000001402AA014: test    r13d, r13d
 * 00000001402AA017: jnz     short loc_1402AA093
 * 00000001402AA019: lea     eax, [r13+1]
 * 00000001402AA01D: cmp     r12b, al
 * 00000001402AA020: ja      short loc_1402AA03F
 * 00000001402AA022: movzx   eax, r12b
 * 00000001402AA026: mov     cr8, rax
 * 00000001402AA02A: mov     al, [r15]
 * 00000001402AA02D: mov     rax, cr8
 * 00000001402AA031: lea     eax, [r13+2]
 * 00000001402AA035: mov     cr8, rax
 * 00000001402AA039: jmp     short loc_1402A9FFC
 * 00000001402AA03B: test    eax, eax
 * 00000001402AA03D: js      short loc_1402AA093
 * 00000001402AA03F: mov     rax, [rbp+2150h+var_2078]
 * 00000001402AA046: mov     ecx, 1000h
 * 00000001402AA04B: add     rax, rcx
 * 00000001402AA04E: add     r15, rcx
 * 00000001402AA051: mov     [rbp+2150h+var_2078], rax
 * 00000001402AA058: cmp     rax, [rbp+2150h+var_20D0]
 * 00000001402AA05F: jnz     short loc_1402A9FFC
 * 00000001402AA061: movzx   eax, r12b
 * 00000001402AA065: mov     cr8, rax
 * 00000001402AA069: xor     r13d, r13d
 * 00000001402AA06C: mov     rcx, [r14+18h]
 * 00000001402AA070: mov     rax, [rsi+0F0h]
 * 00000001402AA077: call    KeGuardDispatchICall
 * 00000001402AA07C: mov     [r14+8], r13
 * 00000001402AA080: mov     [r14+10h], r13d
 * 00000001402AA084: mov     rcx, [rsi+678h]
 * 00000001402AA08B: mov     rax, rcx
 * 00000001402AA08E: jmp     loc_1402AA113
 * 00000001402AA093: movzx   eax, r12b
 * 00000001402AA097: mov     cr8, rax
 * 00000001402AA09B: mov     eax, [r14+14h]
 * 00000001402AA09F: xor     r13d, r13d
 * 00000001402AA0A2: cmp     [rsi+750h], r13d
 * 00000001402AA0A9: jnz     short loc_1402AA0BB
 * 00000001402AA0AB: mov     ecx, ebx
 * 00000001402AA0AD: xor     rcx, rax
 * 00000001402AA0B0: mov     rax, [rsi+548h]
 * 00000001402AA0B7: mov     [rax+18h], rcx
 * 00000001402AA0BB: mov     rcx, [r14+8]
 * 00000001402AA0BF: cmp     [rsi+750h], r13d
 * 00000001402AA0C6: jnz     short loc_1402AA06C
 * 00000001402AA0C8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402AA0D2: add     rax, rsi
 * 00000001402AA0D5: mov     [rsi+758h], rax
 * 00000001402AA0DC: mov     rax, 0B3B74BDEE4453415h
 * 00000001402AA0E6: add     rax, r14
 * 00000001402AA0E9: mov     [rsi+760h], rax
 * 00000001402AA0F0: movsxd  rax, dword ptr [r14]
 * 00000001402AA0F3: mov     [rsi+768h], rax
 * 00000001402AA0FA: mov     eax, 1
 * 00000001402AA0FF: mov     [rsi+770h], rcx
 * 00000001402AA106: mov     [rsi+750h], eax
 * 00000001402AA10C: jmp     loc_1402AA06C
 * 00000001402AA111: xor     ecx, eax
 * 00000001402AA113: shr     rax, 1Fh
 * 00000001402AA117: test    rax, rax
 * 00000001402AA11A: jnz     short loc_1402AA111
 * 00000001402AA11C: btr     ecx, 1Fh
 * 00000001402AA120: mov     [r14+14h], ecx
 * 00000001402AA124: rdtsc
 * 00000001402AA126: shl     rdx, 20h
 * 00000001402AA12A: mov     r9, 7010008004002001h
 * 00000001402AA134: or      rax, rdx
 * 00000001402AA137: mov     rcx, rax
 * 00000001402AA13A: ror     rax, 3
 * 00000001402AA13E: xor     rcx, rax
 * 00000001402AA141: mov     rax, r9
 * 00000001402AA144: mul     rcx
 * 00000001402AA147: mov     rcx, rdx
 * 00000001402AA14A: mov     [rbp+2150h+var_19F0], rdx
 * 00000001402AA151: xor     rcx, rax
 * 00000001402AA154: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402AA15E: mul     rcx
 * 00000001402AA161: shr     rdx, 1
 * 00000001402AA164: lea     rax, [rdx+rdx*2]
 * 00000001402AA168: cmp     rcx, rax
 * 00000001402AA16B: jnz     loc_1402AA9A4
 * 00000001402AA171: mov     r8d, [rsi+670h]
 * 00000001402AA178: lea     r12, [r14+18h]
 * 00000001402AA17C: mov     [rbp+2150h+var_20D0], r12
 * 00000001402AA183: rdtsc
 * 00000001402AA185: shl     rdx, 20h
 * 00000001402AA189: or      rax, rdx
 * 00000001402AA18C: mov     rcx, rax
 * 00000001402AA18F: ror     rax, 3
 * 00000001402AA193: xor     rcx, rax
 * 00000001402AA196: mov     rax, r9
 * 00000001402AA199: mul     rcx
 * 00000001402AA19C: mov     rbx, rax
 * 00000001402AA19F: mov     [rbp+2150h+var_19E8], rdx
 * 00000001402AA1A6: xor     ebx, edx
 * 00000001402AA1A8: and     ebx, 7FFh
 * 00000001402AA1AE: rdtsc
 * 00000001402AA1B0: shl     rdx, 20h
 * 00000001402AA1B4: or      rax, rdx
 * 00000001402AA1B7: mov     rcx, rax
 * 00000001402AA1BA: ror     rax, 3
 * 00000001402AA1BE: xor     rcx, rax
 * 00000001402AA1C1: mov     rax, r9
 * 00000001402AA1C4: mul     rcx
 * 00000001402AA1C7: mov     ecx, [rsi+7D8h]
 * 00000001402AA1CD: lea     r9d, [rbx+1]
 * 00000001402AA1D1: xor     rax, rdx
 * 00000001402AA1D4: mov     [rbp+2150h+var_19E0], rdx
 * 00000001402AA1DB: xor     edx, edx
 * 00000001402AA1DD: shr     ecx, 13h
 * 00000001402AA1E0: div     r9
 * 00000001402AA1E3: mov     rax, [rsi+0E8h]
 * 00000001402AA1EA: and     ecx, 200h
 * 00000001402AA1F0: mov     r15, rdx
 * 00000001402AA1F3: lea     edx, [rbx+8D0h]
 * 00000001402AA1F9: call    KeGuardDispatchICall
 * 00000001402AA1FE: mov     r11, rax
 * 00000001402AA201: test    rax, rax
 * 00000001402AA204: jnz     short loc_1402AA220
 * 00000001402AA206: lea     r12d, [rax+1]
 * 00000001402AA20A: add     [rsi+858h], r12d
 * 00000001402AA211: mov     r9, 7010008004002001h
 * 00000001402AA21B: jmp     loc_1402AA9AA
 * 00000001402AA220: mov     r9d, r15d
 * 00000001402AA223: mov     r8, r11
 * 00000001402AA226: cmp     r15d, 8
 * 00000001402AA22A: jb      short loc_1402AA281
 * 00000001402AA22C: mov     r10d, r15d
 * 00000001402AA22F: mov     r14d, 1
 * 00000001402AA235: shr     r10, 3
 * 00000001402AA239: mov     r12, 7010008004002001h
 * 00000001402AA243: rdtsc
 * 00000001402AA245: shl     rdx, 20h
 * 00000001402AA249: add     r9d, 0FFFFFFF8h
 * 00000001402AA24D: or      rax, rdx
 * 00000001402AA250: mov     rcx, rax
 * 00000001402AA253: ror     rax, 3
 * 00000001402AA257: xor     rcx, rax
 * 00000001402AA25A: mov     rax, r12
 * 00000001402AA25D: mul     rcx
 * 00000001402AA260: mov     [rbp+2150h+var_19D8], rdx
 * 00000001402AA267: xor     rdx, rax
 * 00000001402AA26A: mov     [r8], rdx
 * 00000001402AA26D: add     r8, 8
 * 00000001402AA271: sub     r10, r14
 * 00000001402AA274: jnz     short loc_1402AA243
 * 00000001402AA276: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA27A: mov     r12, [rbp+2150h+var_20D0]
 * 00000001402AA281: test    r9d, r9d
 * 00000001402AA284: jz      short loc_1402AA2C5
 * 00000001402AA286: rdtsc
 * 00000001402AA288: shl     rdx, 20h
 * 00000001402AA28C: or      rax, rdx
 * 00000001402AA28F: mov     rcx, rax
 * 00000001402AA292: ror     rax, 3
 * 00000001402AA296: xor     rcx, rax
 * 00000001402AA299: mov     rax, 7010008004002001h
 * 00000001402AA2A3: mul     rcx
 * 00000001402AA2A6: mov     [rbp+2150h+var_19D0], rdx
 * 00000001402AA2AD: xor     rdx, rax
 * 00000001402AA2B0: mov     eax, 1
 * 00000001402AA2B5: mov     [r8], dl
 * 00000001402AA2B8: add     r8, rax
 * 00000001402AA2BB: shr     rdx, 8
 * 00000001402AA2BF: add     r9d, 0FFFFFFFFh
 * 00000001402AA2C3: jnz     short loc_1402AA2B5
 * 00000001402AA2C5: mov     r9d, r15d
 * 00000001402AA2C8: sub     ebx, r15d
 * 00000001402AA2CB: add     r9, r11
 * 00000001402AA2CE: mov     r15d, 1
 * 00000001402AA2D4: lea     r8, [r9+8D0h]
 * 00000001402AA2DB: cmp     ebx, 8
 * 00000001402AA2DE: jb      short loc_1402AA327
 * 00000001402AA2E0: mov     r10d, ebx
 * 00000001402AA2E3: mov     r12, 7010008004002001h
 * 00000001402AA2ED: shr     r10, 3
 * 00000001402AA2F1: rdtsc
 * 00000001402AA2F3: shl     rdx, 20h
 * 00000001402AA2F7: add     ebx, 0FFFFFFF8h
 * 00000001402AA2FA: or      rax, rdx
 * 00000001402AA2FD: mov     rcx, rax
 * 00000001402AA300: ror     rax, 3
 * 00000001402AA304: xor     rcx, rax
 * 00000001402AA307: mov     rax, r12
 * 00000001402AA30A: mul     rcx
 * 00000001402AA30D: mov     [rbp+2150h+var_19C8], rdx
 * 00000001402AA314: xor     rdx, rax
 * 00000001402AA317: mov     [r8], rdx
 * 00000001402AA31A: add     r8, 8
 * 00000001402AA31E: sub     r10, r15
 * 00000001402AA321: jnz     short loc_1402AA2F1
 * 00000001402AA323: lea     r12, [r14+18h]
 * 00000001402AA327: test    ebx, ebx
 * 00000001402AA329: jz      short loc_1402AA364
 * 00000001402AA32B: rdtsc
 * 00000001402AA32D: shl     rdx, 20h
 * 00000001402AA331: or      rax, rdx
 * 00000001402AA334: mov     rcx, rax
 * 00000001402AA337: ror     rax, 3
 * 00000001402AA33B: xor     rcx, rax
 * 00000001402AA33E: mov     rax, 7010008004002001h
 * 00000001402AA348: mul     rcx
 * 00000001402AA34B: mov     [rbp+2150h+var_19C0], rdx
 * 00000001402AA352: xor     rdx, rax
 * 00000001402AA355: mov     [r8], dl
 * 00000001402AA358: add     r8, r15
 * 00000001402AA35B: shr     rdx, 8
 * 00000001402AA35F: add     ebx, 0FFFFFFFFh
 * 00000001402AA362: jnz     short loc_1402AA355
 * 00000001402AA364: test    r12, r12
 * 00000001402AA367: jz      short loc_1402AA36D
 * 00000001402AA369: mov     [r12], r11
 * 00000001402AA36D: test    r9, r9
 * 00000001402AA370: jz      loc_1402AA99A
 * 00000001402AA376: mov     r10d, 8D0h
 * 00000001402AA37C: mov     [r14+8], r9
 * 00000001402AA380: mov     [r14+10h], r10d
 * 00000001402AA384: mov     r8d, r10d
 * 00000001402AA387: mov     rcx, rsi
 * 00000001402AA38A: mov     rdx, r9
 * 00000001402AA38D: mov     edi, 11Ah
 * 00000001402AA392: mov     rax, [rcx]
 * 00000001402AA395: add     r8d, 0FFFFFFF8h
 * 00000001402AA399: mov     [rdx], rax
 * 00000001402AA39C: add     rcx, 8
 * 00000001402AA3A0: add     rdx, 8
 * 00000001402AA3A4: sub     rdi, r15
 * 00000001402AA3A7: jnz     short loc_1402AA392
 * 00000001402AA3A9: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AA3B0: test    r8d, r8d
 * 00000001402AA3B3: jz      short loc_1402AA3C5
 * 00000001402AA3B5: mov     al, [rcx]
 * 00000001402AA3B7: add     rcx, r15
 * 00000001402AA3BA: mov     [rdx], al
 * 00000001402AA3BC: add     rdx, r15
 * 00000001402AA3BF: add     r8d, 0FFFFFFFFh
 * 00000001402AA3C3: jnz     short loc_1402AA3B5
 * 00000001402AA3C5: bts     dword ptr [r9+7D8h], 13h
 * 00000001402AA3CE: mov     r12d, r10d
 * 00000001402AA3D1: mov     [r9+644h], r10d
 * 00000001402AA3D8: add     r12d, 0FFFFFF38h
 * 00000001402AA3DF: mov     [r9+668h], r10d
 * 00000001402AA3E6: mov     eax, [r9+7D8h]
 * 00000001402AA3ED: and     eax, 0FFFFFFFDh
 * 00000001402AA3F0: mov     [r9+7D8h], eax
 * 00000001402AA3F7: mov     [rbp+2150h+var_2118], eax
 * 00000001402AA3FA: mov     rax, [r9+4A0h]
 * 00000001402AA401: shr     r12d, 3
 * 00000001402AA405: mov     [rbp+2150h+var_20E8], rax
 * 00000001402AA409: mov     rax, [r9+578h]
 * 00000001402AA410: mov     [rbp+2150h+var_2078], rax
 * 00000001402AA417: mov     [rbp+2150h+var_20EC], r12d
 * 00000001402AA41B: mov     [r9+0C4h], r12d
 * 00000001402AA422: rdtsc
 * 00000001402AA424: shl     rdx, 20h
 * 00000001402AA428: lea     r13, [r9+5F8h]
 * 00000001402AA42F: or      rax, rdx
 * 00000001402AA432: lea     r8, [rbp+2150h+var_1680]
 * 00000001402AA439: mov     rcx, rax
 * 00000001402AA43C: mov     ebx, 20h ; ' '
 * 00000001402AA441: ror     rax, 3
 * 00000001402AA445: mov     r10d, ebx
 * 00000001402AA448: xor     rcx, rax
 * 00000001402AA44B: mov     rax, 7010008004002001h
 * 00000001402AA455: mul     rcx
 * 00000001402AA458: lea     r11d, [rbx-1Ch]
 * 00000001402AA45C: mov     rcx, r13
 * 00000001402AA45F: mov     [rbp+2150h+var_19B8], rdx
 * 00000001402AA466: xor     rdx, rax
 * 00000001402AA469: mov     rax, [r9+618h]
 * 00000001402AA470: mov     [rbp+2150h+var_2110], rax
 * 00000001402AA474: mov     eax, [r9+688h]
 * 00000001402AA47B: mov     [rbp+2150h+var_2080], rdx
 * 00000001402AA482: mov     edx, r11d
 * 00000001402AA485: mov     [rbp+2150h+var_2128], eax
 * 00000001402AA488: mov     rax, [rcx]
 * 00000001402AA48B: add     r10d, 0FFFFFFF8h
 * 00000001402AA48F: mov     [r8], rax
 * 00000001402AA492: add     rcx, 8
 * 00000001402AA496: add     r8, 8
 * 00000001402AA49A: sub     rdx, r15
 * 00000001402AA49D: jnz     short loc_1402AA488
 * 00000001402AA49F: xor     r15d, r15d
 * 00000001402AA4A2: test    r10d, r10d
 * 00000001402AA4A5: jz      short loc_1402AA4C0
 * 00000001402AA4A7: lea     r14d, [rdx+1]
 * 00000001402AA4AB: mov     al, [rcx]
 * 00000001402AA4AD: add     rcx, r14
 * 00000001402AA4B0: mov     [r8], al
 * 00000001402AA4B3: add     r8, r14
 * 00000001402AA4B6: add     r10d, 0FFFFFFFFh
 * 00000001402AA4BA: jnz     short loc_1402AA4AB
 * 00000001402AA4BC: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA4C0: mov     [r9+618h], r15
 * 00000001402AA4C7: mov     ecx, ebx
 * 00000001402AA4C9: mov     [r9+688h], r15d
 * 00000001402AA4D0: mov     rax, r13
 * 00000001402AA4D3: mov     rdx, r11
 * 00000001402AA4D6: mov     r8d, 1
 * 00000001402AA4DC: mov     [rax], r15
 * 00000001402AA4DF: add     ecx, 0FFFFFFF8h
 * 00000001402AA4E2: add     rax, 8
 * 00000001402AA4E6: sub     rdx, r8
 * 00000001402AA4E9: jnz     short loc_1402AA4DC
 * 00000001402AA4EB: test    ecx, ecx
 * 00000001402AA4ED: jz      short loc_1402AA4FA
 * 00000001402AA4EF: mov     [rax], r15b
 * 00000001402AA4F2: add     rax, r8
 * 00000001402AA4F5: add     ecx, 0FFFFFFFFh
 * 00000001402AA4F8: jnz     short loc_1402AA4EF
 * 00000001402AA4FA: mov     eax, [r9+644h]
 * 00000001402AA501: mov     r10, r9
 * 00000001402AA504: add     [r9+688h], eax
 * 00000001402AA50B: mov     rax, r9
 * 00000001402AA50E: mov     r11d, [r9+644h]
 * 00000001402AA515: mov     ebx, [r9+674h]
 * 00000001402AA51C: mov     rdx, [r9+678h]
 * 00000001402AA523: lea     rcx, [r9+r11]
 * 00000001402AA527: cmp     r9, rcx
 * 00000001402AA52A: jnb     short loc_1402AA53D
 * 00000001402AA52C: mov     r8d, 40h ; '@'
 * 00000001402AA532: prefetchnta byte ptr [rax]
 * 00000001402AA535: add     rax, r8
 * 00000001402AA538: cmp     rax, rcx
 * 00000001402AA53B: jb      short loc_1402AA532
 * 00000001402AA53D: mov     r15d, r11d
 * 00000001402AA540: mov     r8, rdx
 * 00000001402AA543: shr     r15d, 7
 * 00000001402AA547: test    r15d, r15d
 * 00000001402AA54A: jz      short loc_1402AA5C2
 * 00000001402AA54C: mov     rdi, rdx
 * 00000001402AA54F: mov     r12, 7010008004002001h
 * 00000001402AA559: mov     edx, 8
 * 00000001402AA55E: lea     r14d, [rdx-7]
 * 00000001402AA562: mov     rax, [r10]
 * 00000001402AA565: mov     ecx, ebx
 * 00000001402AA567: xor     rax, r8
 * 00000001402AA56A: mov     r8, [r10+8]
 * 00000001402AA56E: rol     rax, cl
 * 00000001402AA571: add     r10, 10h
 * 00000001402AA575: xor     r8, rax
 * 00000001402AA578: rol     r8, cl
 * 00000001402AA57B: sub     rdx, r14
 * 00000001402AA57E: jnz     short loc_1402AA562
 * 00000001402AA580: mov     rcx, r10
 * 00000001402AA583: sub     rcx, r9
 * 00000001402AA586: xor     rcx, rdi
 * 00000001402AA589: mov     rax, rcx
 * 00000001402AA58C: rol     rax, 11h
 * 00000001402AA590: xor     rcx, rax
 * 00000001402AA593: mov     rax, r12
 * 00000001402AA596: mul     rcx
 * 00000001402AA599: xor     eax, edx
 * 00000001402AA59B: mov     [rbp+2150h+var_19B0], rdx
 * 00000001402AA5A2: xor     ebx, eax
 * 00000001402AA5A4: mov     rax, r14
 * 00000001402AA5A7: and     ebx, 3Fh
 * 00000001402AA5AA: cmovz   ebx, eax
 * 00000001402AA5AD: add     r15d, 0FFFFFFFFh
 * 00000001402AA5B1: jnz     short loc_1402AA559
 * 00000001402AA5B3: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA5B7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AA5BE: mov     r12d, [rbp+2150h+var_20EC]
 * 00000001402AA5C2: and     r11d, 7Fh
 * 00000001402AA5C6: cmp     r11d, 8
 * 00000001402AA5CA: jb      short loc_1402AA5F2
 * 00000001402AA5CC: mov     edx, r11d
 * 00000001402AA5CF: mov     r14d, 1
 * 00000001402AA5D5: shr     rdx, 3
 * 00000001402AA5D9: xor     r8, [r10]
 * 00000001402AA5DC: mov     ecx, ebx
 * 00000001402AA5DE: rol     r8, cl
 * 00000001402AA5E1: add     r10, 8
 * 00000001402AA5E5: add     r11d, 0FFFFFFF8h
 * 00000001402AA5E9: sub     rdx, r14
 * 00000001402AA5EC: jnz     short loc_1402AA5D9
 * 00000001402AA5EE: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA5F2: xor     r15d, r15d
 * 00000001402AA5F5: test    r11d, r11d
 * 00000001402AA5F8: jz      short loc_1402AA617
 * 00000001402AA5FA: lea     r14d, [r15+1]
 * 00000001402AA5FE: movzx   eax, byte ptr [r10]
 * 00000001402AA602: mov     ecx, ebx
 * 00000001402AA604: xor     r8, rax
 * 00000001402AA607: add     r10, r14
 * 00000001402AA60A: rol     r8, cl
 * 00000001402AA60D: add     r11d, 0FFFFFFFFh
 * 00000001402AA611: jnz     short loc_1402AA5FE
 * 00000001402AA613: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA617: mov     rax, [rbp+2150h+var_2110]
 * 00000001402AA61B: lea     rcx, [rbp+2150h+var_1680]
 * 00000001402AA622: mov     edx, 20h ; ' '
 * 00000001402AA627: mov     [r9+618h], rax
 * 00000001402AA62E: mov     eax, [rbp+2150h+var_2128]
 * 00000001402AA631: add     [r9+688h], eax
 * 00000001402AA638: lea     r11d, [rdx-1Ch]
 * 00000001402AA63C: mov     r10d, r11d
 * 00000001402AA63F: lea     ebx, [rdx-1Fh]
 * 00000001402AA642: mov     rax, [rcx]
 * 00000001402AA645: add     edx, 0FFFFFFF8h
 * 00000001402AA648: mov     [r13+0], rax
 * 00000001402AA64C: add     rcx, 8
 * 00000001402AA650: add     r13, 8
 * 00000001402AA654: sub     r10, rbx
 * 00000001402AA657: jnz     short loc_1402AA642
 * 00000001402AA659: test    edx, edx
 * 00000001402AA65B: jz      short loc_1402AA66E
 * 00000001402AA65D: mov     al, [rcx]
 * 00000001402AA65F: add     rcx, rbx
 * 00000001402AA662: mov     [r13+0], al
 * 00000001402AA666: add     r13, rbx
 * 00000001402AA669: add     edx, 0FFFFFFFFh
 * 00000001402AA66C: jnz     short loc_1402AA65D
 * 00000001402AA66E: xor     r13d, r13d
 * 00000001402AA671: mov     [r9+618h], r8
 * 00000001402AA678: test    dword ptr [r9+7D8h], 40000000h
 * 00000001402AA683: jnz     loc_1402AA866
 * 00000001402AA689: mov     r8, [rbp+2150h+var_2080]
 * 00000001402AA690: mov     rcx, r9
 * 00000001402AA693: mov     eax, r13d
 * 00000001402AA696: xor     [rcx], r8
 * 00000001402AA699: add     eax, ebx
 * 00000001402AA69B: lea     rcx, [rcx+8]
 * 00000001402AA69F: cmp     eax, 19h
 * 00000001402AA6A2: jb      short loc_1402AA696
 * 00000001402AA6A4: test    r12d, r12d
 * 00000001402AA6A7: jz      short loc_1402AA6C5
 * 00000001402AA6A9: mov     edx, r12d
 * 00000001402AA6AC: dec     rdx
 * 00000001402AA6AF: lea     rdx, [rcx+rdx*8]
 * 00000001402AA6B3: xor     [rdx], r8
 * 00000001402AA6B6: mov     ecx, r12d
 * 00000001402AA6B9: ror     r8, cl
 * 00000001402AA6BC: lea     rdx, [rdx-8]
 * 00000001402AA6C0: sub     r12d, ebx
 * 00000001402AA6C3: jnz     short loc_1402AA6B3
 * 00000001402AA6C5: mov     r12d, [rbp+2150h+var_2118]
 * 00000001402AA6C9: bt      r12d, 13h
 * 00000001402AA6CE: jnb     short loc_1402AA71B
 * 00000001402AA6D0: rdtsc
 * 00000001402AA6D2: shl     rdx, 20h
 * 00000001402AA6D6: or      rax, rdx
 * 00000001402AA6D9: mov     rcx, rax
 * 00000001402AA6DC: ror     rax, 3
 * 00000001402AA6E0: xor     rcx, rax
 * 00000001402AA6E3: mov     rax, 7010008004002001h
 * 00000001402AA6ED: mul     rcx
 * 00000001402AA6F0: mov     rcx, rdx
 * 00000001402AA6F3: mov     [rbp+2150h+var_19A8], rdx
 * 00000001402AA6FA: xor     rcx, rax
 * 00000001402AA6FD: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402AA707: mul     rcx
 * 00000001402AA70A: shr     rdx, 1
 * 00000001402AA70D: lea     rax, [rdx+rdx*2]
 * 00000001402AA711: cmp     rcx, rax
 * 00000001402AA714: jz      short loc_1402AA726
 * 00000001402AA716: jmp     loc_1402AA866
 * 00000001402AA71B: bt      r12d, 8
 * 00000001402AA720: jb      loc_1402AA866
 * 00000001402AA726: mov     rdi, [rbp+2150h+var_20E8]
 * 00000001402AA72A: mov     eax, 2
 * 00000001402AA72F: mov     [rbp+2150h+var_2003], al
 * 00000001402AA735: mov     ecx, r9d
 * 00000001402AA738: mov     eax, 3
 * 00000001402AA73D: mov     [rbp+2150h+var_2005], bl
 * 00000001402AA743: mov     [rbp+2150h+var_2000], al
 * 00000001402AA749: mov     r10, r9
 * 00000001402AA74C: mov     eax, 0Ch
 * 00000001402AA751: mov     [rbp+2150h+var_2008], r13b
 * 00000001402AA758: mov     [rbp+2150h+var_2007], al
 * 00000001402AA75E: mov     ebx, r13d
 * 00000001402AA761: mov     r13, [rbp+2150h+var_2078]
 * 00000001402AA768: mov     eax, 0Fh
 * 00000001402AA76D: mov     [rbp+2150h+var_2002], r11b
 * 00000001402AA774: mov     r11, r9
 * 00000001402AA777: mov     [rbp+2150h+var_1FFF], 5
 * 00000001402AA77E: mov     [rbp+2150h+var_1FFC], 6
 * 00000001402AA785: lea     esi, [rax+1]
 * 00000001402AA788: mov     [rbp+2150h+var_2001], 7
 * 00000001402AA78F: mov     [rbp+2150h+var_1FFB], 8
 * 00000001402AA796: mov     [rbp+2150h+var_1FFE], 9
 * 00000001402AA79D: mov     [rbp+2150h+var_1FFA], 0Ah
 * 00000001402AA7A4: mov     [rbp+2150h+var_2004], 0Bh
 * 00000001402AA7AB: mov     [rbp+2150h+var_1FF9], 0Dh
 * 00000001402AA7B2: mov     [rbp+2150h+var_1FFD], 0Eh
 * 00000001402AA7B9: mov     [rbp+2150h+var_2006], al
 * 00000001402AA7BF: ror     r10, cl
 * 00000001402AA7C2: mov     rdx, [r11]
 * 00000001402AA7C5: mov     r14d, 1
 * 00000001402AA7CB: mov     r8, rsi
 * 00000001402AA7CE: lea     r12d, [r14+0Eh]
 * 00000001402AA7D2: movzx   eax, byte ptr [r11]
 * 00000001402AA7D6: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402AA7DA: and     rax, r12
 * 00000001402AA7DD: movzx   ecx, [rbp+rax+2150h+var_2008]
 * 00000001402AA7E5: or      rdx, rcx
 * 00000001402AA7E8: ror     rdx, 4
 * 00000001402AA7EC: mov     [r11], rdx
 * 00000001402AA7EF: sub     r8, r14
 * 00000001402AA7F2: jnz     short loc_1402AA7D2
 * 00000001402AA7F4: sub     rdx, r15
 * 00000001402AA7F7: test    [rbp+2150h+var_2118], 200h
 * 00000001402AA7FE: mov     [r11], rdx
 * 00000001402AA801: jnz     short loc_1402AA81A
 * 00000001402AA803: mov     rax, rdi
 * 00000001402AA806: mov     ecx, r13d
 * 00000001402AA809: xor     rax, rdx
 * 00000001402AA80C: bswap   rax
 * 00000001402AA80F: xor     rax, r10
 * 00000001402AA812: ror     rax, cl
 * 00000001402AA815: xor     rax, r13
 * 00000001402AA818: jmp     short loc_1402AA820
 * 00000001402AA81A: mov     rax, r10
 * 00000001402AA81D: xor     rax, rdx
 * 00000001402AA820: mov     edx, 0C8h
 * 00000001402AA825: mov     [r11], rax
 * 00000001402AA828: sub     edx, ebx
 * 00000001402AA82A: mov     ecx, eax
 * 00000001402AA82C: imul    edx, ebx
 * 00000001402AA82F: not     ecx
 * 00000001402AA831: add     r11, 8
 * 00000001402AA835: inc     ebx
 * 00000001402AA837: add     r15, r9
 * 00000001402AA83A: mov     r8d, eax
 * 00000001402AA83D: ror     rdx, cl
 * 00000001402AA840: mov     ecx, eax
 * 00000001402AA842: xor     r10, rdx
 * 00000001402AA845: rol     r10, cl
 * 00000001402AA848: add     r10, r9
 * 00000001402AA84B: cmp     ebx, 19h
 * 00000001402AA84E: jb      loc_1402AA7C2
 * 00000001402AA854: mov     rsi, [rbp+2150h+var_2120]
 * 00000001402AA858: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AA85F: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA863: xor     r13d, r13d
 * 00000001402AA866: mov     r15, [r14+8]
 * 00000001402AA86A: mov     r10d, [r14+10h]
 * 00000001402AA86E: mov     r9, r15
 * 00000001402AA871: add     [rsi+688h], r10d
 * 00000001402AA878: mov     rax, r15
 * 00000001402AA87B: mov     r11d, [rsi+674h]
 * 00000001402AA882: mov     r12, [rsi+678h]
 * 00000001402AA889: lea     rcx, [r15+r10]
 * 00000001402AA88D: cmp     r15, rcx
 * 00000001402AA890: jnb     short loc_1402AA8A2
 * 00000001402AA892: mov     edx, 40h ; '@'
 * 00000001402AA897: prefetchnta byte ptr [rax]
 * 00000001402AA89A: add     rax, rdx
 * 00000001402AA89D: cmp     rax, rcx
 * 00000001402AA8A0: jb      short loc_1402AA897
 * 00000001402AA8A2: mov     ebx, r10d
 * 00000001402AA8A5: mov     r8, r12
 * 00000001402AA8A8: shr     ebx, 7
 * 00000001402AA8AB: test    ebx, ebx
 * 00000001402AA8AD: jz      short loc_1402AA921
 * 00000001402AA8AF: mov     rdi, 7010008004002001h
 * 00000001402AA8B9: mov     edx, 8
 * 00000001402AA8BE: lea     r14d, [rdx-7]
 * 00000001402AA8C2: mov     rax, [r9]
 * 00000001402AA8C5: mov     ecx, r11d
 * 00000001402AA8C8: xor     rax, r8
 * 00000001402AA8CB: mov     r8, [r9+8]
 * 00000001402AA8CF: rol     rax, cl
 * 00000001402AA8D2: add     r9, 10h
 * 00000001402AA8D6: xor     r8, rax
 * 00000001402AA8D9: rol     r8, cl
 * 00000001402AA8DC: sub     rdx, r14
 * 00000001402AA8DF: jnz     short loc_1402AA8C2
 * 00000001402AA8E1: mov     rcx, r9
 * 00000001402AA8E4: sub     rcx, r15
 * 00000001402AA8E7: xor     rcx, r12
 * 00000001402AA8EA: mov     rax, rcx
 * 00000001402AA8ED: rol     rax, 11h
 * 00000001402AA8F1: xor     rcx, rax
 * 00000001402AA8F4: mov     rax, rdi
 * 00000001402AA8F7: mul     rcx
 * 00000001402AA8FA: xor     eax, edx
 * 00000001402AA8FC: mov     [rbp+2150h+var_1890], rdx
 * 00000001402AA903: xor     r11d, eax
 * 00000001402AA906: mov     rax, r14
 * 00000001402AA909: and     r11d, 3Fh
 * 00000001402AA90D: cmovz   r11d, eax
 * 00000001402AA911: add     ebx, 0FFFFFFFFh
 * 00000001402AA914: jnz     short loc_1402AA8B9
 * 00000001402AA916: mov     r14, [rbp+2150h+var_2130]
 * 00000001402AA91A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AA921: and     r10d, 7Fh
 * 00000001402AA925: mov     r12d, 1
 * 00000001402AA92B: cmp     r10d, 8
 * 00000001402AA92F: jb      short loc_1402AA94E
 * 00000001402AA931: mov     edx, r10d
 * 00000001402AA934: shr     rdx, 3
 * 00000001402AA938: xor     r8, [r9]
 * 00000001402AA93B: mov     ecx, r11d
 * 00000001402AA93E: rol     r8, cl
 * 00000001402AA941: add     r9, 8
 * 00000001402AA945: add     r10d, 0FFFFFFF8h
 * 00000001402AA949: sub     rdx, r12
 * 00000001402AA94C: jnz     short loc_1402AA938
 * 00000001402AA94E: test    r10d, r10d
 * 00000001402AA951: jz      short loc_1402AA969
 * 00000001402AA953: movzx   eax, byte ptr [r9]
 * 00000001402AA957: mov     ecx, r11d
 * 00000001402AA95A: xor     r8, rax
 * 00000001402AA95D: add     r9, r12
 * 00000001402AA960: rol     r8, cl
 * 00000001402AA963: add     r10d, 0FFFFFFFFh
 * 00000001402AA967: jnz     short loc_1402AA953
 * 00000001402AA969: mov     rax, r8
 * 00000001402AA96C: jmp     short loc_1402AA971
 * 00000001402AA96E: xor     r8d, eax
 * 00000001402AA971: shr     rax, 1Fh
 * 00000001402AA975: test    rax, rax
 * 00000001402AA978: jnz     short loc_1402AA96E
 * 00000001402AA97A: btr     r8d, 1Fh
 * 00000001402AA97F: mov     [r14+14h], r8d
 * 00000001402AA983: jmp     loc_1402AA211
 * 00000001402AA988: mov     r12d, 1
 * 00000001402AA98E: mov     r9, 7010008004002001h
 * 00000001402AA998: jmp     short loc_1402AA9B0
 * 00000001402AA99A: mov     r9, 7010008004002001h
 * 00000001402AA9A4: mov     r12d, 1
 * 00000001402AA9AA: mov     r11d, 8000h
 * 00000001402AA9B0: mov     [rbp+2150h+var_2128], r13d
 * 00000001402AA9B4: mov     [rbp+2150h+var_20E8], r13
 * 00000001402AA9B8: mov     r13d, [rsi+7D8h]
 * 00000001402AA9BF: mov     [rbp+2150h+var_2118], r13d
 * 00000001402AA9C3: bt      r13d, 1Eh
 * 00000001402AA9C8: jb      loc_1402AB550
 * 00000001402AA9CE: mov     r14, [rsp+1120h+arg_0]
 * 00000001402AA9D6: cmp     rsi, r14
 * 00000001402AA9D9: jnz     loc_1402AB0B7
 * 00000001402AA9DF: xor     r15d, r15d
 * 00000001402AA9E2: test    r11d, r13d
 * 00000001402AA9E5: jnz     short loc_1402AA9F4
 * 00000001402AA9E7: cmp     [rsi+750h], r15d
 * 00000001402AA9EE: jnz     loc_1402AAE88
 * 00000001402AA9F4: mov     r8d, [r14+77Ch]
 * 00000001402AA9FB: mov     rcx, r14
 * 00000001402AA9FE: mov     edx, [r14+644h]
 * 00000001402AAA05: call    sub_1402AEFBC
 * 00000001402AAA0A: mov     rsi, rax
 * 00000001402AAA0D: test    rax, rax
 * 00000001402AAA10: jz      loc_1402AAE88
 * 00000001402AAA16: mov     rax, [rax+628h]
 * 00000001402AAA1D: mov     ecx, 2
 * 00000001402AAA22: mov     [rbp+2150h+var_20E8], rax
 * 00000001402AAA26: mov     eax, [rsi+7D8h]
 * 00000001402AAA2C: mov     [rbp+2150h+var_2118], eax
 * 00000001402AAA2F: test    cl, al
 * 00000001402AAA31: jz      short loc_1402AAA3B
 * 00000001402AAA33: mov     ebx, [rsi+644h]
 * 00000001402AAA39: jmp     short loc_1402AAA41
 * 00000001402AAA3B: mov     ebx, [rsi+668h]
 * 00000001402AAA41: mov     rax, [rsi+4A0h]
 * 00000001402AAA48: add     ebx, 0FFFFFF38h
 * 00000001402AAA4E: shr     ebx, 3
 * 00000001402AAA51: mov     [rbp+2150h+var_2110], rax
 * 00000001402AAA55: mov     rax, [rsi+578h]
 * 00000001402AAA5C: mov     [rbp+2150h+var_2080], rax
 * 00000001402AAA63: mov     [rbp+2150h+var_20EC], ebx
 * 00000001402AAA66: mov     [rsi+0C4h], ebx
 * 00000001402AAA6C: rdtsc
 * 00000001402AAA6E: shl     rdx, 20h
 * 00000001402AAA72: lea     r15, [rsi+5F8h]
 * 00000001402AAA79: or      rax, rdx
 * 00000001402AAA7C: lea     r8, [rbp+2150h+var_1700]
 * 00000001402AAA83: mov     rcx, rax
 * 00000001402AAA86: mov     r11d, 20h ; ' '
 * 00000001402AAA8C: ror     rax, 3
 * 00000001402AAA90: mov     r13d, 0FFFFFFF8h
 * 00000001402AAA96: xor     rcx, rax
 * 00000001402AAA99: mov     rax, 7010008004002001h
 * 00000001402AAAA3: mul     rcx
 * 00000001402AAAA6: lea     r10d, [r11-1Ch]
 * 00000001402AAAAA: mov     rcx, r15
 * 00000001402AAAAD: mov     r14, rdx
 * 00000001402AAAB0: mov     [rbp+2150h+var_1998], rdx
 * 00000001402AAAB7: xor     r14, rax
 * 00000001402AAABA: mov     edx, r11d
 * 00000001402AAABD: mov     rax, [rsi+618h]
 * 00000001402AAAC4: mov     r9d, r10d
 * 00000001402AAAC7: mov     [rbp+2150h+var_20D0], rax
 * 00000001402AAACE: mov     eax, [rsi+688h]
 * 00000001402AAAD4: mov     [rbp+2150h+var_2128], eax
 * 00000001402AAAD7: mov     rax, [rcx]
 * 00000001402AAADA: add     edx, r13d
 * 00000001402AAADD: mov     [r8], rax
 * 00000001402AAAE0: add     rcx, 8
 * 00000001402AAAE4: add     r8, 8
 * 00000001402AAAE8: sub     r9, r12
 * 00000001402AAAEB: jnz     short loc_1402AAAD7
 * 00000001402AAAED: test    edx, edx
 * 00000001402AAAEF: jz      short loc_1402AAB01
 * 00000001402AAAF1: mov     al, [rcx]
 * 00000001402AAAF3: add     rcx, r12
 * 00000001402AAAF6: mov     [r8], al
 * 00000001402AAAF9: add     r8, r12
 * 00000001402AAAFC: add     edx, 0FFFFFFFFh
 * 00000001402AAAFF: jnz     short loc_1402AAAF1
 * 00000001402AAB01: mov     [rsi+618h], r9
 * 00000001402AAB08: mov     ecx, r11d
 * 00000001402AAB0B: mov     [rsi+688h], r9d
 * 00000001402AAB12: mov     rax, r15
 * 00000001402AAB15: mov     rdx, r10
 * 00000001402AAB18: mov     [rax], r9
 * 00000001402AAB1B: add     ecx, r13d
 * 00000001402AAB1E: add     rax, 8
 * 00000001402AAB22: sub     rdx, r12
 * 00000001402AAB25: jnz     short loc_1402AAB18
 * 00000001402AAB27: test    ecx, ecx
 * 00000001402AAB29: jz      short loc_1402AAB36
 * 00000001402AAB2B: mov     [rax], r9b
 * 00000001402AAB2E: add     rax, r12
 * 00000001402AAB31: add     ecx, 0FFFFFFFFh
 * 00000001402AAB34: jnz     short loc_1402AAB2B
 * 00000001402AAB36: mov     eax, [rsi+644h]
 * 00000001402AAB3C: mov     r9, rsi
 * 00000001402AAB3F: add     [rsi+688h], eax
 * 00000001402AAB45: mov     rax, rsi
 * 00000001402AAB48: mov     r10d, [rsi+644h]
 * 00000001402AAB4F: mov     r11d, [rsi+674h]
 * 00000001402AAB56: mov     r13, [rsi+678h]
 * 00000001402AAB5D: lea     rcx, [rsi+r10]
 * 00000001402AAB61: cmp     rsi, rcx
 * 00000001402AAB64: jnb     short loc_1402AAB76
 * 00000001402AAB66: mov     edx, 40h ; '@'
 * 00000001402AAB6B: prefetchnta byte ptr [rax]
 * 00000001402AAB6E: add     rax, rdx
 * 00000001402AAB71: cmp     rax, rcx
 * 00000001402AAB74: jb      short loc_1402AAB6B
 * 00000001402AAB76: mov     r12d, r10d
 * 00000001402AAB79: mov     r8, r13
 * 00000001402AAB7C: shr     r12d, 7
 * 00000001402AAB80: mov     edx, 1
 * 00000001402AAB85: test    r12d, r12d
 * 00000001402AAB88: jz      short loc_1402AABF4
 * 00000001402AAB8A: mov     rbx, 7010008004002001h
 * 00000001402AAB94: mov     eax, 8
 * 00000001402AAB99: xor     r8, [r9]
 * 00000001402AAB9C: mov     ecx, r11d
 * 00000001402AAB9F: rol     r8, cl
 * 00000001402AABA2: xor     r8, [r9+8]
 * 00000001402AABA6: add     r9, 10h
 * 00000001402AABAA: rol     r8, cl
 * 00000001402AABAD: sub     rax, rdx
 * 00000001402AABB0: jnz     short loc_1402AAB99
 * 00000001402AABB2: mov     rcx, r9
 * 00000001402AABB5: sub     rcx, rsi
 * 00000001402AABB8: xor     rcx, r13
 * 00000001402AABBB: mov     rax, rcx
 * 00000001402AABBE: rol     rax, 11h
 * 00000001402AABC2: xor     rcx, rax
 * 00000001402AABC5: mov     rax, rbx
 * 00000001402AABC8: mul     rcx
 * 00000001402AABCB: xor     eax, edx
 * 00000001402AABCD: mov     [rbp+2150h+var_1990], rdx
 * 00000001402AABD4: xor     r11d, eax
 * 00000001402AABD7: mov     edx, 1
 * 00000001402AABDC: and     r11d, 3Fh
 * 00000001402AABE0: cmovz   r11d, edx
 * 00000001402AABE4: add     r12d, 0FFFFFFFFh
 * 00000001402AABE8: jnz     short loc_1402AAB94
 * 00000001402AABEA: mov     ebx, [rbp+2150h+var_20EC]
 * 00000001402AABED: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AABF4: and     r10d, 7Fh
 * 00000001402AABF8: cmp     r10d, 8
 * 00000001402AABFC: jb      short loc_1402AAC1B
 * 00000001402AABFE: mov     eax, r10d
 * 00000001402AAC01: shr     rax, 3
 * 00000001402AAC05: xor     r8, [r9]
 * 00000001402AAC08: mov     ecx, r11d
 * 00000001402AAC0B: rol     r8, cl
 * 00000001402AAC0E: add     r9, 8
 * 00000001402AAC12: add     r10d, 0FFFFFFF8h
 * 00000001402AAC16: sub     rax, rdx
 * 00000001402AAC19: jnz     short loc_1402AAC05
 * 00000001402AAC1B: xor     r12d, r12d
 * 00000001402AAC1E: test    r10d, r10d
 * 00000001402AAC21: jz      short loc_1402AAC39
 * 00000001402AAC23: movzx   eax, byte ptr [r9]
 * 00000001402AAC27: mov     ecx, r11d
 * 00000001402AAC2A: xor     r8, rax
 * 00000001402AAC2D: add     r9, rdx
 * 00000001402AAC30: rol     r8, cl
 * 00000001402AAC33: add     r10d, 0FFFFFFFFh
 * 00000001402AAC37: jnz     short loc_1402AAC23
 * 00000001402AAC39: mov     rax, [rbp+2150h+var_20D0]
 * 00000001402AAC40: lea     rcx, [rbp+2150h+var_1700]
 * 00000001402AAC47: mov     r9d, 4
 * 00000001402AAC4D: mov     [rsi+618h], rax
 * 00000001402AAC54: mov     eax, [rbp+2150h+var_2128]
 * 00000001402AAC57: mov     edx, r9d
 * 00000001402AAC5A: add     [rsi+688h], eax
 * 00000001402AAC60: lea     r10d, [r9+1Ch]
 * 00000001402AAC64: lea     r11d, [r9-3]
 * 00000001402AAC68: mov     rax, [rcx]
 * 00000001402AAC6B: add     r10d, 0FFFFFFF8h
 * 00000001402AAC6F: mov     [r15], rax
 * 00000001402AAC72: add     rcx, 8
 * 00000001402AAC76: add     r15, 8
 * 00000001402AAC7A: sub     rdx, r11
 * 00000001402AAC7D: jnz     short loc_1402AAC68
 * 00000001402AAC7F: test    r10d, r10d
 * 00000001402AAC82: jz      short loc_1402AAC95
 * 00000001402AAC84: mov     al, [rcx]
 * 00000001402AAC86: add     rcx, r11
 * 00000001402AAC89: mov     [r15], al
 * 00000001402AAC8C: add     r15, r11
 * 00000001402AAC8F: add     r10d, 0FFFFFFFFh
 * 00000001402AAC93: jnz     short loc_1402AAC84
 * 00000001402AAC95: mov     [rsi+618h], r8
 * 00000001402AAC9C: test    dword ptr [rsi+7D8h], 40000000h
 * 00000001402AACA6: jnz     loc_1402AAD36
 * 00000001402AACAC: mov     rcx, rsi
 * 00000001402AACAF: mov     eax, r12d
 * 00000001402AACB2: mov     r13d, 19h
 * 00000001402AACB8: xor     [rcx], r14
 * 00000001402AACBB: add     eax, r11d
 * 00000001402AACBE: lea     rcx, [rcx+8]
 * 00000001402AACC2: cmp     eax, r13d
 * 00000001402AACC5: jb      short loc_1402AACB8
 * 00000001402AACC7: test    ebx, ebx
 * 00000001402AACC9: jz      short loc_1402AACE5
 * 00000001402AACCB: mov     edx, ebx
 * 00000001402AACCD: dec     rdx
 * 00000001402AACD0: lea     rdx, [rcx+rdx*8]
 * 00000001402AACD4: xor     [rdx], r14
 * 00000001402AACD7: mov     ecx, ebx
 * 00000001402AACD9: ror     r14, cl
 * 00000001402AACDC: lea     rdx, [rdx-8]
 * 00000001402AACE0: sub     ebx, r11d
 * 00000001402AACE3: jnz     short loc_1402AACD4
 * 00000001402AACE5: mov     r14d, [rbp+2150h+var_2118]
 * 00000001402AACE9: bt      r14d, 13h
 * 00000001402AACEE: jnb     short loc_1402AAD3E
 * 00000001402AACF0: rdtsc
 * 00000001402AACF2: shl     rdx, 20h
 * 00000001402AACF6: or      rax, rdx
 * 00000001402AACF9: mov     rcx, rax
 * 00000001402AACFC: ror     rax, 3
 * 00000001402AAD00: xor     rcx, rax
 * 00000001402AAD03: mov     rax, 7010008004002001h
 * 00000001402AAD0D: mul     rcx
 * 00000001402AAD10: mov     rcx, rdx
 * 00000001402AAD13: mov     [rbp+2150h+var_1988], rdx
 * 00000001402AAD1A: xor     rcx, rax
 * 00000001402AAD1D: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402AAD27: mul     rcx
 * 00000001402AAD2A: shr     rdx, 1
 * 00000001402AAD2D: lea     rax, [rdx+rdx*2]
 * 00000001402AAD31: cmp     rcx, rax
 * 00000001402AAD34: jz      short loc_1402AAD45
 * 00000001402AAD36: mov     r12, r11
 * 00000001402AAD39: jmp     loc_1402AB3C7
 * 00000001402AAD3E: bt      r14d, 8
 * 00000001402AAD43: jb      short loc_1402AAD36
 * 00000001402AAD45: mov     eax, 2
 * 00000001402AAD4A: mov     [rbp+2150h+var_2012], r9b
 * 00000001402AAD51: mov     [rbp+2150h+var_2013], al
 * 00000001402AAD57: mov     ecx, esi
 * 00000001402AAD59: mov     eax, 3
 * 00000001402AAD5E: mov     [rbp+2150h+var_2015], r11b
 * 00000001402AAD65: mov     [rbp+2150h+var_2010], al
 * 00000001402AAD6B: mov     r9, rsi
 * 00000001402AAD6E: mov     eax, 0Ch
 * 00000001402AAD73: mov     [rbp+2150h+var_2018], r12b
 * 00000001402AAD7A: mov     [rbp+2150h+var_2017], al
 * 00000001402AAD80: mov     r11d, r12d
 * 00000001402AAD83: mov     eax, 0Fh
 * 00000001402AAD88: mov     [rbp+2150h+var_200F], 5
 * 00000001402AAD8F: mov     rbx, r12
 * 00000001402AAD92: mov     [rbp+2150h+var_200C], 6
 * 00000001402AAD99: mov     r12, [rbp+2150h+var_2110]
 * 00000001402AAD9D: mov     r10, rsi
 * 00000001402AADA0: mov     [rbp+2150h+var_2011], 7
 * 00000001402AADA7: lea     edi, [rax+1]
 * 00000001402AADAA: mov     [rbp+2150h+var_200B], 8
 * 00000001402AADB1: mov     [rbp+2150h+var_200E], 9
 * 00000001402AADB8: mov     [rbp+2150h+var_200A], 0Ah
 * 00000001402AADBF: mov     [rbp+2150h+var_2014], 0Bh
 * 00000001402AADC6: mov     [rbp+2150h+var_2009], 0Dh
 * 00000001402AADCD: mov     [rbp+2150h+var_200D], 0Eh
 * 00000001402AADD4: mov     [rbp+2150h+var_2016], al
 * 00000001402AADDA: ror     r9, cl
 * 00000001402AADDD: mov     rdx, [r10]
 * 00000001402AADE0: mov     r14d, 1
 * 00000001402AADE6: mov     r8, rdi
 * 00000001402AADE9: lea     r15d, [r14+0Eh]
 * 00000001402AADED: movzx   eax, byte ptr [r10]
 * 00000001402AADF1: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402AADF5: and     rax, r15
 * 00000001402AADF8: movzx   ecx, [rbp+rax+2150h+var_2018]
 * 00000001402AAE00: or      rdx, rcx
 * 00000001402AAE03: ror     rdx, 4
 * 00000001402AAE07: mov     [r10], rdx
 * 00000001402AAE0A: sub     r8, r14
 * 00000001402AAE0D: jnz     short loc_1402AADED
 * 00000001402AAE0F: mov     r15, [rbp+2150h+var_2080]
 * 00000001402AAE16: sub     rdx, rbx
 * 00000001402AAE19: test    [rbp+2150h+var_2118], 200h
 * 00000001402AAE20: mov     [r10], rdx
 * 00000001402AAE23: jnz     short loc_1402AAE3C
 * 00000001402AAE25: mov     rax, r12
 * 00000001402AAE28: mov     ecx, r15d
 * 00000001402AAE2B: xor     rax, rdx
 * 00000001402AAE2E: bswap   rax
 * 00000001402AAE31: xor     rax, r9
 * 00000001402AAE34: ror     rax, cl
 * 00000001402AAE37: xor     rax, r15
 * 00000001402AAE3A: jmp     short loc_1402AAE42
 * 00000001402AAE3C: mov     rax, r9
 * 00000001402AAE3F: xor     rax, rdx
 * 00000001402AAE42: mov     edx, 0C8h
 * 00000001402AAE47: mov     [r10], rax
 * 00000001402AAE4A: sub     edx, r11d
 * 00000001402AAE4D: mov     ecx, eax
 * 00000001402AAE4F: imul    edx, r11d
 * 00000001402AAE53: not     ecx
 * 00000001402AAE55: add     r10, 8
 * 00000001402AAE59: inc     r11d
 * 00000001402AAE5C: add     rbx, rsi
 * 00000001402AAE5F: mov     r8d, eax
 * 00000001402AAE62: ror     rdx, cl
 * 00000001402AAE65: mov     ecx, eax
 * 00000001402AAE67: xor     r9, rdx
 * 00000001402AAE6A: rol     r9, cl
 * 00000001402AAE6D: add     r9, rsi
 * 00000001402AAE70: cmp     r11d, r13d
 * 00000001402AAE73: jb      loc_1402AADDD
 * 00000001402AAE79: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AAE80: mov     r12, r14
 * 00000001402AAE83: jmp     loc_1402AB3C7
 * 00000001402AAE88: mov     r11d, 20h ; ' '
 * 00000001402AAE8E: mov     [r14+0C4h], r12d
 * 00000001402AAE95: mov     r12, [r14+618h]
 * 00000001402AAE9C: lea     rbx, [r14+5F8h]
 * 00000001402AAEA3: mov     r13d, [r14+688h]
 * 00000001402AAEAA: lea     rdx, [rbp+2150h+var_16E0]
 * 00000001402AAEB1: mov     [rbp+2150h+var_2078], r12
 * 00000001402AAEB8: mov     rsi, r14
 * 00000001402AAEBB: lea     r10d, [r11-1Ch]
 * 00000001402AAEBF: mov     [rbp+2150h+var_20EC], r13d
 * 00000001402AAEC3: mov     r9d, r10d
 * 00000001402AAEC6: lea     r12d, [r11-1Fh]
 * 00000001402AAECA: mov     r8d, r11d
 * 00000001402AAECD: mov     rcx, rbx
 * 00000001402AAED0: mov     rax, [rcx]
 * 00000001402AAED3: add     r8d, 0FFFFFFF8h
 * 00000001402AAED7: mov     [rdx], rax
 * 00000001402AAEDA: add     rcx, 8
 * 00000001402AAEDE: add     rdx, 8
 * 00000001402AAEE2: sub     r9, r12
 * 00000001402AAEE5: jnz     short loc_1402AAED0
 * 00000001402AAEE7: mov     r12, [rbp+2150h+var_2078]
 * 00000001402AAEEE: mov     r9d, 1
 * 00000001402AAEF4: test    r8d, r8d
 * 00000001402AAEF7: jz      short loc_1402AAF09
 * 00000001402AAEF9: mov     al, [rcx]
 * 00000001402AAEFB: add     rcx, r9
 * 00000001402AAEFE: mov     [rdx], al
 * 00000001402AAF00: add     rdx, r9
 * 00000001402AAF03: add     r8d, 0FFFFFFFFh
 * 00000001402AAF07: jnz     short loc_1402AAEF9
 * 00000001402AAF09: mov     [r14+618h], r15
 * 00000001402AAF10: mov     ecx, r11d
 * 00000001402AAF13: mov     [r14+688h], r15d
 * 00000001402AAF1A: mov     rax, rbx
 * 00000001402AAF1D: mov     rdx, r10
 * 00000001402AAF20: mov     [rax], r15
 * 00000001402AAF23: add     ecx, 0FFFFFFF8h
 * 00000001402AAF26: add     rax, 8
 * 00000001402AAF2A: sub     rdx, r9
 * 00000001402AAF2D: jnz     short loc_1402AAF20
 * 00000001402AAF2F: test    ecx, ecx
 * 00000001402AAF31: jz      short loc_1402AAF3E
 * 00000001402AAF33: mov     [rax], r15b
 * 00000001402AAF36: add     rax, r9
 * 00000001402AAF39: add     ecx, 0FFFFFFFFh
 * 00000001402AAF3C: jnz     short loc_1402AAF33
 * 00000001402AAF3E: mov     eax, [r14+644h]
 * 00000001402AAF45: mov     r9, r14
 * 00000001402AAF48: add     [r14+688h], eax
 * 00000001402AAF4F: mov     rax, r14
 * 00000001402AAF52: mov     r10d, [r14+644h]
 * 00000001402AAF59: mov     r11d, [r14+674h]
 * 00000001402AAF60: mov     r15, [r14+678h]
 * 00000001402AAF67: lea     rcx, [r14+r10]
 * 00000001402AAF6B: cmp     r14, rcx
 * 00000001402AAF6E: jnb     short loc_1402AAF80
 * 00000001402AAF70: mov     edx, 40h ; '@'
 * 00000001402AAF75: prefetchnta byte ptr [rax]
 * 00000001402AAF78: add     rax, rdx
 * 00000001402AAF7B: cmp     rax, rcx
 * 00000001402AAF7E: jb      short loc_1402AAF75
 * 00000001402AAF80: mov     r14d, r10d
 * 00000001402AAF83: mov     r8, r15
 * 00000001402AAF86: shr     r14d, 7
 * 00000001402AAF8A: test    r14d, r14d
 * 00000001402AAF8D: jz      short loc_1402AB00A
 * 00000001402AAF8F: mov     rdi, [rsp+1120h+arg_0]
 * 00000001402AAF97: mov     r12d, 1
 * 00000001402AAF9D: mov     r13, 7010008004002001h
 * 00000001402AAFA7: mov     eax, 8
 * 00000001402AAFAC: xor     r8, [r9]
 * 00000001402AAFAF: mov     ecx, r11d
 * 00000001402AAFB2: rol     r8, cl
 * 00000001402AAFB5: xor     r8, [r9+8]
 * 00000001402AAFB9: add     r9, 10h
 * 00000001402AAFBD: rol     r8, cl
 * 00000001402AAFC0: sub     rax, r12
 * 00000001402AAFC3: jnz     short loc_1402AAFAC
 * 00000001402AAFC5: mov     rcx, r9
 * 00000001402AAFC8: sub     rcx, rdi
 * 00000001402AAFCB: xor     rcx, r15
 * 00000001402AAFCE: mov     rax, rcx
 * 00000001402AAFD1: rol     rax, 11h
 * 00000001402AAFD5: xor     rcx, rax
 * 00000001402AAFD8: mov     rax, r13
 * 00000001402AAFDB: mul     rcx
 * 00000001402AAFDE: xor     eax, edx
 * 00000001402AAFE0: mov     [rbp+2150h+var_1980], rdx
 * 00000001402AAFE7: xor     r11d, eax
 * 00000001402AAFEA: and     r11d, 3Fh
 * 00000001402AAFEE: cmovz   r11d, r12d
 * 00000001402AAFF2: add     r14d, 0FFFFFFFFh
 * 00000001402AAFF6: jnz     short loc_1402AAFA7
 * 00000001402AAFF8: mov     r12, [rbp+2150h+var_2078]
 * 00000001402AAFFF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AB006: mov     r13d, [rbp+2150h+var_20EC]
 * 00000001402AB00A: and     r10d, 7Fh
 * 00000001402AB00E: mov     r14d, 1
 * 00000001402AB014: cmp     r10d, 8
 * 00000001402AB018: jb      short loc_1402AB037
 * 00000001402AB01A: mov     eax, r10d
 * 00000001402AB01D: shr     rax, 3
 * 00000001402AB021: xor     r8, [r9]
 * 00000001402AB024: mov     ecx, r11d
 * 00000001402AB027: rol     r8, cl
 * 00000001402AB02A: add     r9, 8
 * 00000001402AB02E: add     r10d, 0FFFFFFF8h
 * 00000001402AB032: sub     rax, r14
 * 00000001402AB035: jnz     short loc_1402AB021
 * 00000001402AB037: test    r10d, r10d
 * 00000001402AB03A: jz      short loc_1402AB052
 * 00000001402AB03C: movzx   eax, byte ptr [r9]
 * 00000001402AB040: mov     ecx, r11d
 * 00000001402AB043: xor     r8, rax
 * 00000001402AB046: add     r9, r14
 * 00000001402AB049: rol     r8, cl
 * 00000001402AB04C: add     r10d, 0FFFFFFFFh
 * 00000001402AB050: jnz     short loc_1402AB03C
 * 00000001402AB052: mov     r9, [rsp+1120h+arg_0]
 * 00000001402AB05A: lea     rcx, [rbp+2150h+var_16E0]
 * 00000001402AB061: mov     edx, 4
 * 00000001402AB066: mov     [r9+618h], r12
 * 00000001402AB06D: add     [r9+688h], r13d
 * 00000001402AB074: lea     r12d, [rdx-3]
 * 00000001402AB078: lea     r10d, [rdx+1Ch]
 * 00000001402AB07C: mov     rax, [rcx]
 * 00000001402AB07F: add     r10d, 0FFFFFFF8h
 * 00000001402AB083: mov     [rbx], rax
 * 00000001402AB086: add     rcx, 8
 * 00000001402AB08A: add     rbx, 8
 * 00000001402AB08E: sub     rdx, r12
 * 00000001402AB091: jnz     short loc_1402AB07C
 * 00000001402AB093: xor     r11d, r11d
 * 00000001402AB096: test    r10d, r10d
 * 00000001402AB099: jz      short loc_1402AB0AB
 * 00000001402AB09B: mov     al, [rcx]
 * 00000001402AB09D: add     rcx, r12
 * 00000001402AB0A0: mov     [rbx], al
 * 00000001402AB0A2: add     rbx, r12
 * 00000001402AB0A5: add     r10d, 0FFFFFFFFh
 * 00000001402AB0A9: jnz     short loc_1402AB09B
 * 00000001402AB0AB: mov     [r9+618h], r8
 * 00000001402AB0B2: jmp     loc_1402AB553
 * 00000001402AB0B7: mov     rax, [rsi+628h]
 * 00000001402AB0BE: mov     [rbp+2150h+var_20E8], rax
 * 00000001402AB0C2: mov     eax, 2
 * 00000001402AB0C7: test    al, r13b
 * 00000001402AB0CA: jz      short loc_1402AB0D4
 * 00000001402AB0CC: mov     ebx, [rsi+644h]
 * 00000001402AB0D2: jmp     short loc_1402AB0DA
 * 00000001402AB0D4: mov     ebx, [rsi+668h]
 * 00000001402AB0DA: mov     rax, [rsi+4A0h]
 * 00000001402AB0E1: add     ebx, 0FFFFFF38h
 * 00000001402AB0E7: shr     ebx, 3
 * 00000001402AB0EA: mov     [rbp+2150h+var_2080], rax
 * 00000001402AB0F1: mov     rax, [rsi+578h]
 * 00000001402AB0F8: mov     [rbp+2150h+var_2078], rax
 * 00000001402AB0FF: mov     [rbp+2150h+var_20EC], ebx
 * 00000001402AB102: mov     [rsi+0C4h], ebx
 * 00000001402AB108: rdtsc
 * 00000001402AB10A: shl     rdx, 20h
 * 00000001402AB10E: lea     r15, [rsi+5F8h]
 * 00000001402AB115: or      rax, rdx
 * 00000001402AB118: lea     r8, [rbp+2150h+var_16C0]
 * 00000001402AB11F: mov     rcx, rax
 * 00000001402AB122: mov     r11d, 20h ; ' '
 * 00000001402AB128: ror     rax, 3
 * 00000001402AB12C: xor     rcx, rax
 * 00000001402AB12F: mov     rax, r9
 * 00000001402AB132: mul     rcx
 * 00000001402AB135: lea     r10d, [r11-1Ch]
 * 00000001402AB139: mov     rcx, r15
 * 00000001402AB13C: mov     r14, rdx
 * 00000001402AB13F: mov     [rbp+2150h+var_1978], rdx
 * 00000001402AB146: xor     r14, rax
 * 00000001402AB149: mov     edx, r11d
 * 00000001402AB14C: mov     rax, [rsi+618h]
 * 00000001402AB153: mov     r9d, r10d
 * 00000001402AB156: mov     [rbp+2150h+var_2110], rax
 * 00000001402AB15A: mov     eax, [rsi+688h]
 * 00000001402AB160: mov     [rbp+2150h+var_2128], eax
 * 00000001402AB163: mov     rax, [rcx]
 * 00000001402AB166: add     edx, 0FFFFFFF8h
 * 00000001402AB169: mov     [r8], rax
 * 00000001402AB16C: add     rcx, 8
 * 00000001402AB170: add     r8, 8
 * 00000001402AB174: sub     r9, r12
 * 00000001402AB177: jnz     short loc_1402AB163
 * 00000001402AB179: test    edx, edx
 * 00000001402AB17B: jz      short loc_1402AB18D
 * 00000001402AB17D: mov     al, [rcx]
 * 00000001402AB17F: add     rcx, r12
 * 00000001402AB182: mov     [r8], al
 * 00000001402AB185: add     r8, r12
 * 00000001402AB188: add     edx, 0FFFFFFFFh
 * 00000001402AB18B: jnz     short loc_1402AB17D
 * 00000001402AB18D: mov     [rsi+618h], r9
 * 00000001402AB194: mov     ecx, r11d
 * 00000001402AB197: mov     [rsi+688h], r9d
 * 00000001402AB19E: mov     rax, r15
 * 00000001402AB1A1: mov     rdx, r10
 * 00000001402AB1A4: mov     [rax], r9
 * 00000001402AB1A7: add     ecx, 0FFFFFFF8h
 * 00000001402AB1AA: add     rax, 8
 * 00000001402AB1AE: sub     rdx, r12
 * 00000001402AB1B1: jnz     short loc_1402AB1A4
 * 00000001402AB1B3: test    ecx, ecx
 * 00000001402AB1B5: jz      short loc_1402AB1C2
 * 00000001402AB1B7: mov     [rax], r9b
 * 00000001402AB1BA: add     rax, r12
 * 00000001402AB1BD: add     ecx, 0FFFFFFFFh
 * 00000001402AB1C0: jnz     short loc_1402AB1B7
 * 00000001402AB1C2: mov     eax, [rsi+644h]
 * 00000001402AB1C8: mov     r9, rsi
 * 00000001402AB1CB: add     [rsi+688h], eax
 * 00000001402AB1D1: mov     rax, rsi
 * 00000001402AB1D4: mov     r11d, [rsi+644h]
 * 00000001402AB1DB: mov     r10d, [rsi+674h]
 * 00000001402AB1E2: mov     r8, [rsi+678h]
 * 00000001402AB1E9: lea     rcx, [rsi+r11]
 * 00000001402AB1ED: cmp     rsi, rcx
 * 00000001402AB1F0: jnb     short loc_1402AB202
 * 00000001402AB1F2: mov     edx, 40h ; '@'
 * 00000001402AB1F7: prefetchnta byte ptr [rax]
 * 00000001402AB1FA: add     rax, rdx
 * 00000001402AB1FD: cmp     rax, rcx
 * 00000001402AB200: jb      short loc_1402AB1F7
 * 00000001402AB202: mov     r12d, r11d
 * 00000001402AB205: shr     r12d, 7
 * 00000001402AB209: test    r12d, r12d
 * 00000001402AB20C: jz      short loc_1402AB281
 * 00000001402AB20E: mov     rdi, r8
 * 00000001402AB211: mov     rbx, 7010008004002001h
 * 00000001402AB21B: mov     r13d, 1
 * 00000001402AB221: mov     eax, 8
 * 00000001402AB226: xor     r8, [r9]
 * 00000001402AB229: mov     ecx, r10d
 * 00000001402AB22C: rol     r8, cl
 * 00000001402AB22F: xor     r8, [r9+8]
 * 00000001402AB233: add     r9, 10h
 * 00000001402AB237: rol     r8, cl
 * 00000001402AB23A: sub     rax, r13
 * 00000001402AB23D: jnz     short loc_1402AB226
 * 00000001402AB23F: mov     rcx, r9
 * 00000001402AB242: sub     rcx, rsi
 * 00000001402AB245: xor     rcx, rdi
 * 00000001402AB248: mov     rax, rcx
 * 00000001402AB24B: rol     rax, 11h
 * 00000001402AB24F: xor     rcx, rax
 * 00000001402AB252: mov     rax, rbx
 * 00000001402AB255: mul     rcx
 * 00000001402AB258: xor     r10d, eax
 * 00000001402AB25B: mov     [rbp+2150h+var_1970], rdx
 * 00000001402AB262: xor     r10d, edx
 * 00000001402AB265: and     r10d, 3Fh
 * 00000001402AB269: cmovz   r10d, r13d
 * 00000001402AB26D: add     r12d, 0FFFFFFFFh
 * 00000001402AB271: jnz     short loc_1402AB221
 * 00000001402AB273: mov     ebx, [rbp+2150h+var_20EC]
 * 00000001402AB276: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AB27D: mov     r13d, [rbp+2150h+var_2118]
 * 00000001402AB281: and     r11d, 7Fh
 * 00000001402AB285: mov     r12d, 1
 * 00000001402AB28B: cmp     r11d, 8
 * 00000001402AB28F: jb      short loc_1402AB2AE
 * 00000001402AB291: mov     eax, r11d
 * 00000001402AB294: shr     rax, 3
 * 00000001402AB298: xor     r8, [r9]
 * 00000001402AB29B: mov     ecx, r10d
 * 00000001402AB29E: rol     r8, cl
 * 00000001402AB2A1: add     r9, 8
 * 00000001402AB2A5: add     r11d, 0FFFFFFF8h
 * 00000001402AB2A9: sub     rax, r12
 * 00000001402AB2AC: jnz     short loc_1402AB298
 * 00000001402AB2AE: test    r11d, r11d
 * 00000001402AB2B1: jz      short loc_1402AB2C9
 * 00000001402AB2B3: movzx   eax, byte ptr [r9]
 * 00000001402AB2B7: mov     ecx, r10d
 * 00000001402AB2BA: xor     r8, rax
 * 00000001402AB2BD: add     r9, r12
 * 00000001402AB2C0: rol     r8, cl
 * 00000001402AB2C3: add     r11d, 0FFFFFFFFh
 * 00000001402AB2C7: jnz     short loc_1402AB2B3
 * 00000001402AB2C9: mov     rax, [rbp+2150h+var_2110]
 * 00000001402AB2CD: lea     rcx, [rbp+2150h+var_16C0]
 * 00000001402AB2D4: mov     r9d, 4
 * 00000001402AB2DA: mov     [rsi+618h], rax
 * 00000001402AB2E1: mov     eax, [rbp+2150h+var_2128]
 * 00000001402AB2E4: mov     edx, r9d
 * 00000001402AB2E7: add     [rsi+688h], eax
 * 00000001402AB2ED: lea     r10d, [r9+1Ch]
 * 00000001402AB2F1: mov     rax, [rcx]
 * 00000001402AB2F4: add     r10d, 0FFFFFFF8h
 * 00000001402AB2F8: mov     [r15], rax
 * 00000001402AB2FB: add     rcx, 8
 * 00000001402AB2FF: add     r15, 8
 * 00000001402AB303: sub     rdx, r12
 * 00000001402AB306: jnz     short loc_1402AB2F1
 * 00000001402AB308: test    r10d, r10d
 * 00000001402AB30B: jz      short loc_1402AB31E
 * 00000001402AB30D: mov     al, [rcx]
 * 00000001402AB30F: add     rcx, r12
 * 00000001402AB312: mov     [r15], al
 * 00000001402AB315: add     r15, r12
 * 00000001402AB318: add     r10d, 0FFFFFFFFh
 * 00000001402AB31C: jnz     short loc_1402AB30D
 * 00000001402AB31E: mov     [rsi+618h], r8
 * 00000001402AB325: test    dword ptr [rsi+7D8h], 40000000h
 * 00000001402AB32F: jnz     loc_1402AB3C7
 * 00000001402AB335: xor     r8d, r8d
 * 00000001402AB338: mov     rcx, rsi
 * 00000001402AB33B: mov     eax, r8d
 * 00000001402AB33E: lea     r12d, [r8+19h]
 * 00000001402AB342: lea     r10d, [r8+1]
 * 00000001402AB346: xor     [rcx], r14
 * 00000001402AB349: add     eax, r10d
 * 00000001402AB34C: lea     rcx, [rcx+8]
 * 00000001402AB350: cmp     eax, r12d
 * 00000001402AB353: jb      short loc_1402AB346
 * 00000001402AB355: test    ebx, ebx
 * 00000001402AB357: jz      short loc_1402AB373
 * 00000001402AB359: mov     edx, ebx
 * 00000001402AB35B: dec     rdx
 * 00000001402AB35E: lea     rdx, [rcx+rdx*8]
 * 00000001402AB362: xor     [rdx], r14
 * 00000001402AB365: mov     ecx, ebx
 * 00000001402AB367: ror     r14, cl
 * 00000001402AB36A: lea     rdx, [rdx-8]
 * 00000001402AB36E: sub     ebx, r10d
 * 00000001402AB371: jnz     short loc_1402AB362
 * 00000001402AB373: bt      r13d, 13h
 * 00000001402AB378: jnb     loc_1402AB403
 * 00000001402AB37E: rdtsc
 * 00000001402AB380: shl     rdx, 20h
 * 00000001402AB384: or      rax, rdx
 * 00000001402AB387: mov     rcx, rax
 * 00000001402AB38A: ror     rax, 3
 * 00000001402AB38E: xor     rcx, rax
 * 00000001402AB391: mov     rax, 7010008004002001h
 * 00000001402AB39B: mul     rcx
 * 00000001402AB39E: mov     rcx, rdx
 * 00000001402AB3A1: mov     [rbp+2150h+var_1968], rdx
 * 00000001402AB3A8: xor     rcx, rax
 * 00000001402AB3AB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402AB3B5: mul     rcx
 * 00000001402AB3B8: shr     rdx, 1
 * 00000001402AB3BB: lea     rax, [rdx+rdx*2]
 * 00000001402AB3BF: cmp     rcx, rax
 * 00000001402AB3C2: jz      short loc_1402AB40A
 * 00000001402AB3C4: mov     r12, r10
 * 00000001402AB3C7: rdtsc
 * 00000001402AB3C9: shl     rdx, 20h
 * 00000001402AB3CD: mov     r9, 7010008004002001h
 * 00000001402AB3D7: or      rax, rdx
 * 00000001402AB3DA: mov     [rbp+2150h+var_2128], r12d
 * 00000001402AB3DE: mov     rcx, rax
 * 00000001402AB3E1: ror     rax, 3
 * 00000001402AB3E5: xor     rcx, rax
 * 00000001402AB3E8: mov     rax, r9
 * 00000001402AB3EB: mul     rcx
 * 00000001402AB3EE: mov     r15, rax
 * 00000001402AB3F1: mov     [rbp+2150h+var_1960], rdx
 * 00000001402AB3F8: xor     r15, rdx
 * 00000001402AB3FB: xor     r11d, r11d
 * 00000001402AB3FE: jmp     loc_1402AB6DB
 * 00000001402AB403: bt      r13d, 8
 * 00000001402AB408: jb      short loc_1402AB3C4
 * 00000001402AB40A: mov     r15, [rbp+2150h+var_2080]
 * 00000001402AB411: mov     eax, 2
 * 00000001402AB416: mov     [rbp+2150h+var_2023], al
 * 00000001402AB41C: mov     ecx, esi
 * 00000001402AB41E: mov     eax, 3
 * 00000001402AB423: mov     [rbp+2150h+var_2022], r9b
 * 00000001402AB42A: mov     [rbp+2150h+var_2020], al
 * 00000001402AB430: mov     r9, rsi
 * 00000001402AB433: mov     eax, 0Ch
 * 00000001402AB438: mov     [rbp+2150h+var_2025], r10b
 * 00000001402AB43F: mov     [rbp+2150h+var_2027], al
 * 00000001402AB445: mov     r10, rsi
 * 00000001402AB448: mov     eax, 0Fh
 * 00000001402AB44D: mov     [rbp+2150h+var_2028], r8b
 * 00000001402AB454: mov     [rbp+2150h+var_201F], 5
 * 00000001402AB45B: mov     r11d, r8d
 * 00000001402AB45E: mov     [rbp+2150h+var_201C], 6
 * 00000001402AB465: mov     rbx, r8
 * 00000001402AB468: mov     [rbp+2150h+var_2021], 7
 * 00000001402AB46F: lea     edi, [rax+1]
 * 00000001402AB472: mov     [rbp+2150h+var_201B], 8
 * 00000001402AB479: mov     [rbp+2150h+var_201E], 9
 * 00000001402AB480: mov     [rbp+2150h+var_201A], 0Ah
 * 00000001402AB487: mov     [rbp+2150h+var_2024], 0Bh
 * 00000001402AB48E: mov     [rbp+2150h+var_2019], 0Dh
 * 00000001402AB495: mov     [rbp+2150h+var_201D], 0Eh
 * 00000001402AB49C: mov     [rbp+2150h+var_2026], al
 * 00000001402AB4A2: ror     r9, cl
 * 00000001402AB4A5: mov     rdx, [r10]
 * 00000001402AB4A8: mov     r13d, 1
 * 00000001402AB4AE: mov     r8, rdi
 * 00000001402AB4B1: lea     r14d, [r13+0Eh]
 * 00000001402AB4B5: movzx   eax, byte ptr [r10]
 * 00000001402AB4B9: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402AB4BD: and     rax, r14
 * 00000001402AB4C0: movzx   ecx, [rbp+rax+2150h+var_2028]
 * 00000001402AB4C8: or      rdx, rcx
 * 00000001402AB4CB: ror     rdx, 4
 * 00000001402AB4CF: mov     [r10], rdx
 * 00000001402AB4D2: sub     r8, r13
 * 00000001402AB4D5: jnz     short loc_1402AB4B5
 * 00000001402AB4D7: mov     r14, [rbp+2150h+var_2078]
 * 00000001402AB4DE: sub     rdx, rbx
 * 00000001402AB4E1: test    [rbp+2150h+var_2118], 200h
 * 00000001402AB4E8: mov     [r10], rdx
 * 00000001402AB4EB: jnz     short loc_1402AB504
 * 00000001402AB4ED: mov     rax, r15
 * 00000001402AB4F0: mov     ecx, r14d
 * 00000001402AB4F3: xor     rax, rdx
 * 00000001402AB4F6: bswap   rax
 * 00000001402AB4F9: xor     rax, r9
 * 00000001402AB4FC: ror     rax, cl
 * 00000001402AB4FF: xor     rax, r14
 * 00000001402AB502: jmp     short loc_1402AB50A
 * 00000001402AB504: mov     rax, r9
 * 00000001402AB507: xor     rax, rdx
 * 00000001402AB50A: mov     edx, 0C8h
 * 00000001402AB50F: mov     [r10], rax
 * 00000001402AB512: sub     edx, r11d
 * 00000001402AB515: mov     ecx, eax
 * 00000001402AB517: imul    edx, r11d
 * 00000001402AB51B: not     ecx
 * 00000001402AB51D: add     r10, 8
 * 00000001402AB521: inc     r11d
 * 00000001402AB524: add     rbx, rsi
 * 00000001402AB527: mov     r8d, eax
 * 00000001402AB52A: ror     rdx, cl
 * 00000001402AB52D: mov     ecx, eax
 * 00000001402AB52F: xor     r9, rdx
 * 00000001402AB532: rol     r9, cl
 * 00000001402AB535: add     r9, rsi
 * 00000001402AB538: cmp     r11d, r12d
 * 00000001402AB53B: jb      loc_1402AB4A5
 * 00000001402AB541: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AB548: mov     r12, r13
 * 00000001402AB54B: jmp     loc_1402AB3C7
 * 00000001402AB550: xor     r11d, r11d
 * 00000001402AB553: mov     ebx, [rsi+7D8h]
 * 00000001402AB559: mov     r15, r11
 * 00000001402AB55C: mov     [rbp+2150h+var_20D0], r11
 * 00000001402AB563: bt      ebx, 1Eh
 * 00000001402AB567: jb      loc_1402AB6D1
 * 00000001402AB56D: bt      ebx, 8
 * 00000001402AB571: jb      loc_1402AB6BB
 * 00000001402AB577: mov     r12, [rsi+578h]
 * 00000001402AB57E: mov     edi, 1
 * 00000001402AB583: mov     r13, [rsi+4A0h]
 * 00000001402AB58A: mov     ecx, esi
 * 00000001402AB58C: mov     r9, rsi
 * 00000001402AB58F: mov     [rbp+2150h+var_2038], r11b
 * 00000001402AB596: ror     r9, cl
 * 00000001402AB599: mov     r10, rsi
 * 00000001402AB59C: lea     eax, [rdi+1]
 * 00000001402AB59F: mov     [rbp+2150h+var_2035], dil
 * 00000001402AB5A6: mov     [rbp+2150h+var_2033], al
 * 00000001402AB5AC: lea     r15d, [rdi+0Eh]
 * 00000001402AB5B0: lea     eax, [rdi+2]
 * 00000001402AB5B3: mov     [rbp+2150h+var_2032], 4
 * 00000001402AB5BA: mov     [rbp+2150h+var_2030], al
 * 00000001402AB5C0: lea     eax, [rdi+0Bh]
 * 00000001402AB5C3: mov     [rbp+2150h+var_2037], al
 * 00000001402AB5C9: lea     eax, [rdi+0Eh]
 * 00000001402AB5CC: mov     [rbp+2150h+var_2036], al
 * 00000001402AB5D2: xor     eax, eax
 * 00000001402AB5D4: mov     r14d, eax
 * 00000001402AB5D7: mov     [rbp+2150h+var_202F], 5
 * 00000001402AB5DE: mov     [rbp+2150h+var_202C], 6
 * 00000001402AB5E5: mov     [rbp+2150h+var_2031], 7
 * 00000001402AB5EC: mov     [rbp+2150h+var_202B], 8
 * 00000001402AB5F3: mov     [rbp+2150h+var_202E], 9
 * 00000001402AB5FA: mov     [rbp+2150h+var_202A], 0Ah
 * 00000001402AB601: mov     [rbp+2150h+var_2034], 0Bh
 * 00000001402AB608: mov     [rbp+2150h+var_2029], 0Dh
 * 00000001402AB60F: mov     [rbp+2150h+var_202D], 0Eh
 * 00000001402AB616: mov     rdx, [r10]
 * 00000001402AB619: mov     r8d, 10h
 * 00000001402AB61F: movzx   eax, byte ptr [r10]
 * 00000001402AB623: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402AB627: and     rax, r15
 * 00000001402AB62A: movzx   ecx, [rbp+rax+2150h+var_2038]
 * 00000001402AB632: or      rdx, rcx
 * 00000001402AB635: ror     rdx, 4
 * 00000001402AB639: mov     [r10], rdx
 * 00000001402AB63C: sub     r8, rdi
 * 00000001402AB63F: jnz     short loc_1402AB61F
 * 00000001402AB641: sub     rdx, r14
 * 00000001402AB644: mov     [r10], rdx
 * 00000001402AB647: bt      ebx, 9
 * 00000001402AB64B: jb      short loc_1402AB664
 * 00000001402AB64D: mov     rax, r13
 * 00000001402AB650: mov     ecx, r12d
 * 00000001402AB653: xor     rax, rdx
 * 00000001402AB656: bswap   rax
 * 00000001402AB659: xor     rax, r9
 * 00000001402AB65C: ror     rax, cl
 * 00000001402AB65F: xor     rax, r12
 * 00000001402AB662: jmp     short loc_1402AB66A
 * 00000001402AB664: mov     rax, r9
 * 00000001402AB667: xor     rax, rdx
 * 00000001402AB66A: mov     edx, 0C8h
 * 00000001402AB66F: mov     [r10], rax
 * 00000001402AB672: sub     edx, r11d
 * 00000001402AB675: mov     ecx, eax
 * 00000001402AB677: imul    edx, r11d
 * 00000001402AB67B: not     ecx
 * 00000001402AB67D: add     r10, 8
 * 00000001402AB681: inc     r11d
 * 00000001402AB684: add     r14, rsi
 * 00000001402AB687: mov     r8d, eax
 * 00000001402AB68A: mov     edi, 1
 * 00000001402AB68F: ror     rdx, cl
 * 00000001402AB692: mov     ecx, eax
 * 00000001402AB694: xor     r9, rdx
 * 00000001402AB697: rol     r9, cl
 * 00000001402AB69A: add     r9, rsi
 * 00000001402AB69D: cmp     r11d, 19h
 * 00000001402AB6A1: jb      loc_1402AB616
 * 00000001402AB6A7: mov     r15, [rbp+2150h+var_20D0]
 * 00000001402AB6AE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402AB6B5: mov     r12d, 1
 * 00000001402AB6BB: mov     rax, [rsi+258h]
 * 00000001402AB6C2: lea     rcx, [rsi+660h]
 * 00000001402AB6C9: call    KeGuardDispatchICall
 * 00000001402AB6CE: xor     r11d, r11d
 * 00000001402AB6D1: mov     r9, 7010008004002001h
 * 00000001402AB6DB: mov     r13, [rsp+1120h+arg_0]
 * 00000001402AB6E3: test    dword ptr [r13+7D8h], 10000000h
 * 00000001402AB6EE: mov     r14, [r13+638h]
 * 00000001402AB6F5: jz      short loc_1402AB72C
 * 00000001402AB6F7: rdtsc
 * 00000001402AB6F9: shl     rdx, 20h
 * 00000001402AB6FD: or      rax, rdx
 * 00000001402AB700: mov     rcx, rax
 * 00000001402AB703: ror     rax, 3
 * 00000001402AB707: xor     rcx, rax
 * 00000001402AB70A: mov     rax, r9
 * 00000001402AB70D: mul     rcx
 * 00000001402AB710: mov     r14, rdx
 * 00000001402AB713: mov     [rbp+2150h+var_1958], rdx
 * 00000001402AB71A: xor     r14, rax
 * 00000001402AB71D: and     r14, 0Fh
 * 00000001402AB721: shl     r14, 4
 * 00000001402AB725: add     r14, [r13+588h]
 * 00000001402AB72C: mov     r8d, 28h ; '('
 * 00000001402AB732: lea     rbx, [r13+750h]
 * 00000001402AB739: mov     rcx, rbx
 * 00000001402AB73C: lea     rdx, [rbp+2150h+var_1C60]
 * 00000001402AB743: lea     r9d, [r8-23h]
 * 00000001402AB747: mov     rax, [rcx]
 * 00000001402AB74A: add     r8d, 0FFFFFFF8h
 * 00000001402AB74E: mov     [rdx], rax
 * 00000001402AB751: add     rcx, 8
 * 00000001402AB755: add     rdx, 8
 * 00000001402AB759: sub     r9, r12
 * 00000001402AB75C: jnz     short loc_1402AB747
 * 00000001402AB75E: test    r8d, r8d
 * 00000001402AB761: jz      short loc_1402AB773
 * 00000001402AB763: mov     al, [rcx]
 * 00000001402AB765: add     rcx, r12
 * 00000001402AB768: mov     [rdx], al
 * 00000001402AB76A: add     rdx, r12
 * 00000001402AB76D: add     r8d, 0FFFFFFFFh
 * 00000001402AB771: jnz     short loc_1402AB763
 * 00000001402AB773: mov     eax, [r13+7D8h]
 * 00000001402AB77A: mov     ecx, 8000h
 * 00000001402AB77F: test    ecx, eax
 * 00000001402AB781: jnz     short loc_1402AB78C
 * 00000001402AB783: cmp     [rbx], r11d
 * 00000001402AB786: jnz     loc_1402ABDC6
 * 00000001402AB78C: bt      eax, 1Eh
 * 00000001402AB790: jb      loc_1402AC066
 * 00000001402AB796: mov     al, [r13+778h]
 * 00000001402AB79D: mov     r8, r15
 * 00000001402AB7A0: sub     al, r12b
 * 00000001402AB7A3: xor     r8, rsi
 * 00000001402AB7A6: movzx   r10d, al
 * 00000001402AB7AA: mov     r11d, 3Fh ; '?'
 * 00000001402AB7B0: sub     r11d, r10d
 * 00000001402AB7B3: rdtsc
 * 00000001402AB7B5: shl     rdx, 20h
 * 00000001402AB7B9: mov     rsi, 7010008004002001h
 * 00000001402AB7C3: or      rax, rdx
 * 00000001402AB7C6: mov     rcx, rax
 * 00000001402AB7C9: ror     rax, 3
 * 00000001402AB7CD: xor     rcx, rax
 * 00000001402AB7D0: mov     rax, rsi
 * 00000001402AB7D3: mul     rcx
 * 00000001402AB7D6: mov     [rbp+2150h+var_1950], rdx
 * 00000001402AB7DD: xor     rax, rdx
 * 00000001402AB7E0: xor     edx, edx
 * 00000001402AB7E2: div     r11
 * 00000001402AB7E5: lea     r9d, [r10+rdx]
 * 00000001402AB7E9: rdtsc
 * 00000001402AB7EB: shl     rdx, 20h
 * 00000001402AB7EF: or      rax, rdx
 * 00000001402AB7F2: mov     rcx, rax
 * 00000001402AB7F5: ror     rax, 3
 * 00000001402AB7F9: xor     rcx, rax
 * 00000001402AB7FC: mov     rax, rsi
 * 00000001402AB7FF: mul     rcx
 * 00000001402AB802: xor     rax, rdx
 * 00000001402AB805: mov     [rbp+2150h+var_1948], rdx
 * 00000001402AB80C: xor     edx, edx
 * 00000001402AB80E: div     r11
 * 00000001402AB811: add     edx, r10d
 * 00000001402AB814: cmp     edx, r9d
 * 00000001402AB817: jz      short loc_1402AB7E9
 * 00000001402AB819: mov     rsi, [r13+5F0h]
 * 00000001402AB820: xor     r11d, r11d
 * 00000001402AB823: mov     r12, [r13+5E8h]
 * 00000001402AB82A: mov     eax, r9d
 * 00000001402AB82D: bts     r8, rax
 * 00000001402AB831: mov     eax, edx
 * 00000001402AB833: btr     r8, rax
 * 00000001402AB837: mov     eax, 3
 * 00000001402AB83C: cmp     [r13+77Ch], eax
 * 00000001402AB843: jnz     loc_1402AB9E0
 * 00000001402AB849: mov     r13, [rbp+2150h+var_20E8]
 * 00000001402AB84D: test    r13, r13
 * 00000001402AB850: jz      loc_1402AB9D8
 * 00000001402AB856: mov     rcx, [rsp+1120h+arg_0]
 * 00000001402AB85E: lea     edx, [r11+1]
 * 00000001402AB862: mov     rax, [rcx+360h]
 * 00000001402AB869: mov     byte ptr [rsi], 13h
 * 00000001402AB86C: mov     [rsi+1], dl
 * 00000001402AB86F: mov     [rsi+2], r11w
 * 00000001402AB874: mov     [rsi+18h], rax
 * 00000001402AB878: mov     [rsi+20h], r13
 * 00000001402AB87C: mov     [rsi+38h], r11
 * 00000001402AB880: mov     [rsi+10h], r11
 * 00000001402AB884: mov     [rsi+28h], r8
 * 00000001402AB888: mov     rax, [rcx+350h]
 * 00000001402AB88F: mov     rcx, [r13+8]
 * 00000001402AB893: mov     r8, [r13+0]
 * 00000001402AB897: mov     edx, [r13+10h]
 * 00000001402AB89B: call    KeGuardDispatchICall
 * 00000001402AB8A0: mov     r9, [r13+0]
 * 00000001402AB8A4: mov     rcx, r13
 * 00000001402AB8A7: rol     rcx, 11h
 * 00000001402AB8AB: mov     rax, 7010008004002001h
 * 00000001402AB8B5: xor     rcx, r13
 * 00000001402AB8B8: mov     r10d, 4
 * 00000001402AB8BE: mul     rcx
 * 00000001402AB8C1: mov     [rbp+2150h+var_1940], rdx
 * 00000001402AB8C8: xor     rdx, rax
 * 00000001402AB8CB: lea     rax, [r13+18h]
 * 00000001402AB8CF: mov     r8, rdx
 * 00000001402AB8D2: xor     r11d, r11d
 * 00000001402AB8D5: lea     r13d, [r10-3]
 * 00000001402AB8D9: xor     [rax], r8
 * 00000001402AB8DC: mov     ecx, r10d
 * 00000001402AB8DF: rol     r8, cl
 * 00000001402AB8E2: lea     rax, [rax-8]
 * 00000001402AB8E6: sub     r10d, r13d
 * 00000001402AB8E9: jnz     short loc_1402AB8D9
 * 00000001402AB8EB: and     dl, 0Fh
 * 00000001402AB8EE: cmp     dl, 7
 * 00000001402AB8F1: jnb     short loc_1402AB960
 * 00000001402AB8F3: mov     rcx, r9
 * 00000001402AB8F6: mov     rax, 7010008004002001h
 * 00000001402AB900: rol     rcx, 11h
 * 00000001402AB904: mov     r10d, 6
 * 00000001402AB90A: xor     rcx, r9
 * 00000001402AB90D: mul     rcx
 * 00000001402AB910: mov     [rbp+2150h+var_1938], rdx
 * 00000001402AB917: xor     rdx, rax
 * 00000001402AB91A: add     r8, rdx
 * 00000001402AB91D: lea     rax, [r9+28h]
 * 00000001402AB921: movsx   edx, word ptr [r9+8]
 * 00000001402AB926: xor     [rax], r8
 * 00000001402AB929: mov     ecx, r10d
 * 00000001402AB92C: rol     r8, cl
 * 00000001402AB92F: lea     rax, [rax-8]
 * 00000001402AB933: sub     r10d, r13d
 * 00000001402AB936: jnz     short loc_1402AB926
 * 00000001402AB938: sub     rdx, 30h ; '0'
 * 00000001402AB93C: shr     rdx, 3
 * 00000001402AB940: test    edx, edx
 * 00000001402AB942: jz      short loc_1402AB960
 * 00000001402AB944: movsxd  r10, edx
 * 00000001402AB947: add     r10, 5
 * 00000001402AB94B: lea     r10, [r9+r10*8]
 * 00000001402AB94F: xor     [r10], r8
 * 00000001402AB952: mov     ecx, edx
 * 00000001402AB954: rol     r8, cl
 * 00000001402AB957: lea     r10, [r10-8]
 * 00000001402AB95B: sub     edx, r13d
 * 00000001402AB95E: jnz     short loc_1402AB94F
 * 00000001402AB960: mov     r13, [rsp+1120h+arg_0]
 * 00000001402AB968: mov     r10d, 1
 * 00000001402AB96E: mov     [rsi+40h], r15
 * 00000001402AB972: mov     r15, 7010008004002001h
 * 00000001402AB97C: test    dword ptr [r13+7D8h], 100h
 * 00000001402AB987: jz      short loc_1402ABA07
 * 00000001402AB989: lea     r9, [r14-48h]
 * 00000001402AB98D: mov     [r9+40h], rsi
 * 00000001402AB991: rdtsc
 * 00000001402AB993: shl     rdx, 20h
 * 00000001402AB997: mov     r8d, 19h
 * 00000001402AB99D: or      rax, rdx
 * 00000001402AB9A0: mov     rcx, rax
 * 00000001402AB9A3: ror     rax, 3
 * 00000001402AB9A7: xor     rcx, rax
 * 00000001402AB9AA: mov     rax, r15
 * 00000001402AB9AD: mul     rcx
 * 00000001402AB9B0: mov     [rbp+2150h+var_1930], rdx
 * 00000001402AB9B7: xor     rdx, rax
 * 00000001402AB9BA: lea     rax, [r9+48h]
 * 00000001402AB9BE: xor     [rax], rdx
 * 00000001402AB9C1: lea     rax, [rax+8]
 * 00000001402AB9C5: sub     r8, r10
 * 00000001402AB9C8: jnz     short loc_1402AB9BE
 * 00000001402AB9CA: mov     dword ptr [r9+48h], 48513148h
 * 00000001402AB9D2: mov     [r9+20h], rdx
 * 00000001402AB9D6: jmp     short loc_1402ABA0A
 * 00000001402AB9D8: mov     r13, [rsp+1120h+arg_0]
 * 00000001402AB9E0: mov     byte ptr [rsi], 13h
 * 00000001402AB9E3: mov     r10d, 1
 * 00000001402AB9E9: mov     [rsi+1], r10b
 * 00000001402AB9ED: mov     [rsi+2], r11w
 * 00000001402AB9F2: mov     [rsi+18h], r14
 * 00000001402AB9F6: mov     [rsi+20h], r8
 * 00000001402AB9FA: mov     [rsi+38h], r11
 * 00000001402AB9FE: mov     [rsi+10h], r11
 * 00000001402ABA02: jmp     loc_1402AB96E
 * 00000001402ABA07: mov     r9, rsi
 * 00000001402ABA0A: mov     r8, [r13+8C8h]
 * 00000001402ABA11: test    r8, r8
 * 00000001402ABA14: jz      loc_1402ABAA2
 * 00000001402ABA1A: mov     r8, [r8+20h]
 * 00000001402ABA1E: mov     rcx, r8
 * 00000001402ABA21: shr     rcx, 4
 * 00000001402ABA25: xor     rcx, r8
 * 00000001402ABA28: shr     rcx, 4
 * 00000001402ABA2C: xor     rcx, [r13+548h]
 * 00000001402ABA33: mov     al, cl
 * 00000001402ABA35: mov     r10, rcx
 * 00000001402ABA38: and     al, 0Fh
 * 00000001402ABA3A: mov     r14, rcx
 * 00000001402ABA3D: movzx   r11d, al
 * 00000001402ABA41: mov     eax, 1
 * 00000001402ABA46: cmovz   r11d, eax
 * 00000001402ABA4A: xor     eax, eax
 * 00000001402ABA4C: mov     edx, eax
 * 00000001402ABA4E: test    r11b, r11b
 * 00000001402ABA51: jz      short loc_1402ABA84
 * 00000001402ABA53: lea     r15d, [rax+0Fh]
 * 00000001402ABA57: mov     rdx, rcx
 * 00000001402ABA5A: and     rdx, r15
 * 00000001402ABA5D: add     rdx, r8
 * 00000001402ABA60: mov     r8, [rdx]
 * 00000001402ABA63: mov     rax, r8
 * 00000001402ABA66: shr     rax, 4
 * 00000001402ABA6A: xor     rax, r8
 * 00000001402ABA6D: shr     rax, 4
 * 00000001402ABA71: xor     rcx, rax
 * 00000001402ABA74: add     r11b, 0FFh
 * 00000001402ABA78: jnz     short loc_1402ABA57
 * 00000001402ABA7A: mov     r15, 7010008004002001h
 * 00000001402ABA84: xor     r10, r9
 * 00000001402ABA87: and     r14d, 1000h
 * 00000001402ABA8E: xor     r11d, r11d
 * 00000001402ABA91: test    r14, r14
 * 00000001402ABA94: cmovz   r10, r9
 * 00000001402ABA98: mov     [rdx], r10
 * 00000001402ABA9B: mov     r9, [r13+8C8h]
 * 00000001402ABAA2: lock or [rsp+1120h+var_1120], r11d
 * 00000001402ABAA7: mov     ecx, [r13+698h]
 * 00000001402ABAAE: test    ecx, ecx
 * 00000001402ABAB0: jz      loc_1402ABD16
 * 00000001402ABAB6: sub     ecx, 1
 * 00000001402ABAB9: jz      loc_1402ABD03
 * 00000001402ABABF: sub     ecx, 1
 * 00000001402ABAC2: jz      loc_1402ABCF0
 * 00000001402ABAC8: sub     ecx, 1
 * 00000001402ABACB: jz      loc_1402ABC48
 * 00000001402ABAD1: cmp     ecx, 1
 * 00000001402ABAD4: jz      loc_1402ABB5B
 * 00000001402ABADA: mov     r8, [r13+7E0h]
 * 00000001402ABAE1: mov     [r8+48h], r9
 * 00000001402ABAE5: lock or [rsp+1120h+var_1120], r11d
 * 00000001402ABAEA: rdtsc
 * 00000001402ABAEC: shl     rdx, 20h
 * 00000001402ABAF0: or      rax, rdx
 * 00000001402ABAF3: mov     rcx, rax
 * 00000001402ABAF6: mov     rdx, rax
 * 00000001402ABAF9: ror     rcx, 3
 * 00000001402ABAFD: mov     rax, r15
 * 00000001402ABB00: xor     rdx, rcx
 * 00000001402ABB03: mul     rdx
 * 00000001402ABB06: mov     rcx, rdx
 * 00000001402ABB09: mov     [rbp+2150h+var_1928], rdx
 * 00000001402ABB10: xor     rcx, rax
 * 00000001402ABB13: mov     rax, 0ABCC77118461CEFDh
 * 00000001402ABB1D: mul     rcx
 * 00000001402ABB20: shr     rdx, 1Ah
 * 00000001402ABB24: imul    rax, rdx, 5F5E100h
 * 00000001402ABB2B: sub     rcx, rax
 * 00000001402ABB2E: mov     rax, 0D6BF94D5E57A42BDh
 * 00000001402ABB38: add     rcx, 47868C00h
 * 00000001402ABB3F: imul    rcx
 * 00000001402ABB42: add     rdx, rcx
 * 00000001402ABB45: sar     rdx, 17h
 * 00000001402ABB49: mov     rax, rdx
 * 00000001402ABB4C: shr     rax, 3Fh
 * 00000001402ABB50: add     rdx, rax
 * 00000001402ABB53: mov     [r8], edx
 * 00000001402ABB56: jmp     loc_1402ABDC1
 * 00000001402ABB5B: mov     rdx, [r13+828h]
 * 00000001402ABB62: xor     r9d, r9d
 * 00000001402ABB65: mov     rcx, [r13+838h]
 * 00000001402ABB6C: xor     r8d, r8d
 * 00000001402ABB6F: mov     rax, [r13+830h]
 * 00000001402ABB76: mov     rdi, [r13+7E0h]
 * 00000001402ABB7D: mov     byte ptr [rdx], 12h
 * 00000001402ABB80: mov     byte ptr [rdx+2], 58h ; 'X'
 * 00000001402ABB84: mov     [rdx+50h], r11b
 * 00000001402ABB88: mov     [rdx+8], rdi
 * 00000001402ABB8C: mov     [rdx+20h], rax
 * 00000001402ABB90: mov     [rdx+28h], r11
 * 00000001402ABB94: mov     [rdx+30h], rcx
 * 00000001402ABB98: mov     [rdx+51h], r11b
 * 00000001402ABB9C: mov     [rdx+38h], r11
 * 00000001402ABBA0: mov     [rdx+52h], r11b
 * 00000001402ABBA4: mov     rdx, rsi
 * 00000001402ABBA7: mov     rax, [r13+2B0h]
 * 00000001402ABBAE: mov     rcx, [r13+828h]
 * 00000001402ABBB5: call    KeGuardDispatchICall
 * 00000001402ABBBA: xor     r11d, r11d
 * 00000001402ABBBD: test    al, al
 * 00000001402ABBBF: jnz     loc_1402ABDC1
 * 00000001402ABBC5: lea     r12d, [r11+1]
 * 00000001402ABBC9: cmp     [rbx], r11d
 * 00000001402ABBCC: jnz     short loc_1402ABBFE
 * 00000001402ABBCE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402ABBD8: add     rax, r13
 * 00000001402ABBDB: mov     [r13+758h], rax
 * 00000001402ABBE2: mov     [r13+760h], r11
 * 00000001402ABBE9: mov     qword ptr [r13+768h], 104h
 * 00000001402ABBF4: mov     [r13+770h], rdi
 * 00000001402ABBFB: mov     [rbx], r12d
 * 00000001402ABBFE: mov     edx, 28h ; '('
 * 00000001402ABC03: lea     rcx, [rbp+2150h+var_1C60]
 * 00000001402ABC0A: lea     r13d, [rdx-23h]
 * 00000001402ABC0E: mov     rax, [rbx]
 * 00000001402ABC11: add     edx, 0FFFFFFF8h
 * 00000001402ABC14: mov     [rcx], rax
 * 00000001402ABC17: add     rbx, 8
 * 00000001402ABC1B: add     rcx, 8
 * 00000001402ABC1F: sub     r13, r12
 * 00000001402ABC22: jnz     short loc_1402ABC0E
 * 00000001402ABC24: mov     r13, [rsp+1120h+arg_0]
 * 00000001402ABC2C: test    edx, edx
 * 00000001402ABC2E: jz      loc_1402ABDC1
 * 00000001402ABC34: mov     al, [rbx]
 * 00000001402ABC36: add     rbx, r12
 * 00000001402ABC39: mov     [rcx], al
 * 00000001402ABC3B: add     rcx, r12
 * 00000001402ABC3E: add     edx, 0FFFFFFFFh
 * 00000001402ABC41: jnz     short loc_1402ABC34
 * 00000001402ABC43: jmp     loc_1402ABDC1
 * 00000001402ABC48: mov     rdx, [r13+7E0h]
 * 00000001402ABC4F: mov     rcx, [rdx+618h]
 * 00000001402ABC56: test    rcx, rcx
 * 00000001402ABC59: jz      loc_1402ABCDF
 * 00000001402ABC5F: mov     r12d, 1
 * 00000001402ABC65: cmp     [rbx], r11d
 * 00000001402ABC68: jnz     short loc_1402ABC9A
 * 00000001402ABC6A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402ABC74: add     rax, r13
 * 00000001402ABC77: mov     [r13+758h], rax
 * 00000001402ABC7E: mov     [r13+760h], r11
 * 00000001402ABC85: mov     qword ptr [r13+768h], 104h
 * 00000001402ABC90: mov     [r13+770h], rcx
 * 00000001402ABC97: mov     [rbx], r12d
 * 00000001402ABC9A: mov     r13d, 5
 * 00000001402ABCA0: lea     rcx, [rbp+2150h+var_1C60]
 * 00000001402ABCA7: lea     r8d, [r13+23h]
 * 00000001402ABCAB: mov     rax, [rbx]
 * 00000001402ABCAE: add     r8d, 0FFFFFFF8h
 * 00000001402ABCB2: mov     [rcx], rax
 * 00000001402ABCB5: add     rbx, 8
 * 00000001402ABCB9: add     rcx, 8
 * 00000001402ABCBD: sub     r13, r12
 * 00000001402ABCC0: jnz     short loc_1402ABCAB
 * 00000001402ABCC2: mov     r13, [rsp+1120h+arg_0]
 * 00000001402ABCCA: test    r8d, r8d
 * 00000001402ABCCD: jz      short loc_1402ABCDF
 * 00000001402ABCCF: mov     al, [rbx]
 * 00000001402ABCD1: add     rbx, r12
 * 00000001402ABCD4: mov     [rcx], al
 * 00000001402ABCD6: add     rcx, r12
 * 00000001402ABCD9: add     r8d, 0FFFFFFFFh
 * 00000001402ABCDD: jnz     short loc_1402ABCCF
 * 00000001402ABCDF: lock or [rsp+1120h+var_1120], r11d
 * 00000001402ABCE4: mov     [rdx+618h], rsi
 * 00000001402ABCEB: jmp     loc_1402ABDC1
 * 00000001402ABCF0: mov     rax, [r13+620h]
 * 00000001402ABCF7: mov     [rax+80h], r9
 * 00000001402ABCFE: jmp     loc_1402ABDC1
 * 00000001402ABD03: mov     rax, [r13+620h]
 * 00000001402ABD0A: mov     [rax+0E0h], r9
 * 00000001402ABD11: jmp     loc_1402ABDC1
 * 00000001402ABD16: rdtsc
 * 00000001402ABD18: shl     rdx, 20h
 * 00000001402ABD1C: or      rax, rdx
 * 00000001402ABD1F: mov     rcx, rax
 * 00000001402ABD22: mov     rdx, rax
 * 00000001402ABD25: ror     rcx, 3
 * 00000001402ABD29: mov     rax, r15
 * 00000001402ABD2C: xor     rdx, rcx
 * 00000001402ABD2F: mul     rdx
 * 00000001402ABD32: mov     rcx, rdx
 * 00000001402ABD35: mov     [rbp+2150h+var_1920], rdx
 * 00000001402ABD3C: xor     rcx, rax
 * 00000001402ABD3F: mov     rax, 0ABCC77118461CEFDh
 * 00000001402ABD49: mul     rcx
 * 00000001402ABD4C: shr     rdx, 1Ah
 * 00000001402ABD50: imul    rax, rdx, 5F5E100h
 * 00000001402ABD57: sub     rcx, rax
 * 00000001402ABD5A: sub     rdi, rcx
 * 00000001402ABD5D: rdtsc
 * 00000001402ABD5F: shl     rdx, 20h
 * 00000001402ABD63: or      rax, rdx
 * 00000001402ABD66: mov     [rsp+1120h+BugCheckParameter4], r9
 * 00000001402ABD6B: mov     rcx, rax
 * 00000001402ABD6E: mov     rdx, rax
 * 00000001402ABD71: ror     rcx, 3
 * 00000001402ABD75: mov     rax, r15
 * 00000001402ABD78: xor     rdx, rcx
 * 00000001402ABD7B: mov     rcx, r12
 * 00000001402ABD7E: mul     rdx
 * 00000001402ABD81: mov     r8, rdx
 * 00000001402ABD84: mov     [rbp+2150h+var_1918], rdx
 * 00000001402ABD8B: xor     r8, rax
 * 00000001402ABD8E: mov     rax, 346DC5D63886594Bh
 * 00000001402ABD98: mul     r8
 * 00000001402ABD9B: shr     rdx, 0Bh
 * 00000001402ABD9F: imul    rax, rdx, 2710h
 * 00000001402ABDA6: mov     rdx, rdi
 * 00000001402ABDA9: sub     r8, rax
 * 00000001402ABDAC: mov     rax, [r13+1C8h]
 * 00000001402ABDB3: mov     r9d, r8d
 * 00000001402ABDB6: xor     r8d, r8d
 * 00000001402ABDB9: call    KeGuardDispatchICall
 * 00000001402ABDBE: xor     r11d, r11d
 * 00000001402ABDC1: mov     ecx, 8000h
 * 00000001402ABDC6: cmp     [rbp+2150h+var_1C60], r11d
 * 00000001402ABDCD: jz      loc_1402AC066
 * 00000001402ABDD3: test    [r13+7D8h], ecx
 * 00000001402ABDDA: jnz     loc_1402AC066
 * 00000001402ABDE0: mov     r13, [rbp+2150h+var_1C48]
 * 00000001402ABDE7: mov     rbx, [rbp+2150h+var_1C40]
 * 00000001402ABDEE: mov     rdi, [rbp+2150h+var_1C50]
 * 00000001402ABDF5: mov     rsi, [rbp+2150h+var_1C58]
 * 00000001402ABDFC: mov     rax, [rsp+1120h+arg_0]
 * 00000001402ABE04: mov     [rbp+2150h+var_2078], r13
 * 00000001402ABE0B: mov     [rbp+2150h+var_20E8], rbx
 * 00000001402ABE0F: mov     [rbp+2150h+var_2110], rdi
 * 00000001402ABE13: mov     [rbp+2150h+var_2080], rsi
 * 00000001402ABE1A: mov     [rbp+2150h+var_1FE0], rax
 * 00000001402ABE21: mov     rax, cr8
 * 00000001402ABE25: mov     r8d, 2
 * 00000001402ABE2B: cmp     al, r8b
 * 00000001402ABE2E: jnb     short loc_1402ABE38
 * 00000001402ABE30: mov     rax, cr8
 * 00000001402ABE34: mov     cr8, r8
 * 00000001402ABE38: mov     rax, gs:20h
 * 00000001402ABE41: mov     r15, gs:188h
 * 00000001402ABE4A: mov     [rbp+2150h+var_20D0], r15
 * 00000001402ABE51: mov     r14, [rax+2E50h]
 * 00000001402ABE58: mov     al, [rax+2E6Ah]
 * 00000001402ABE5E: test    al, al
 * 00000001402ABE60: jz      short loc_1402ABE81
 * 00000001402ABE62: lea     rax, [rbp+2150h+var_1FE0]
 * 00000001402ABE69: cmp     rax, r14
 * 00000001402ABE6C: ja      short loc_1402ABE81
 * 00000001402ABE6E: lea     rax, [r14-6000h]
 * 00000001402ABE75: lea     rcx, [rbp+2150h+var_1FE0]
 * 00000001402ABE7C: cmp     rcx, rax
 * 00000001402ABE7F: jnb     short loc_1402ABE85
 * 00000001402ABE81: mov     r14, [r15+28h]
 * 00000001402ABE85: mov     rdx, [rbp+2150h+var_1FE0]
 * 00000001402ABE8C: test    dword ptr [rdx+7D8h], 8000000h
 * 00000001402ABE96: jnz     loc_1402ABFAD
 * 00000001402ABE9C: mov     r12, cr0
 * 00000001402ABEA0: mov     rax, r12
 * 00000001402ABEA3: btr     rax, 10h
 * 00000001402ABEA8: mov     cr0, rax
 * 00000001402ABEAB: mov     r10d, [rdx+8D0h]
 * 00000001402ABEB2: lea     r8, [rdx+8D8h]
 * 00000001402ABEB9: shl     r10, 4
 * 00000001402ABEBD: xor     eax, eax
 * 00000001402ABEBF: add     r10, r8
 * 00000001402ABEC2: mov     r9, r10
 * 00000001402ABEC5: cmp     [rdx+8D4h], eax
 * 00000001402ABECB: jbe     short loc_1402ABF1A
 * 00000001402ABECD: lea     ebx, [rax+10h]
 * 00000001402ABED0: lea     r13d, [rax+1]
 * 00000001402ABED4: mov     rcx, [r9]
 * 00000001402ABED7: mov     rax, [r9+8]
 * 00000001402ABEDB: mov     [rcx], rax
 * 00000001402ABEDE: mov     rcx, cr4
 * 00000001402ABEE1: test    rcx, 20080h
 * 00000001402ABEE8: jz      short loc_1402ABEFA
 * 00000001402ABEEA: mov     rax, rcx
 * 00000001402ABEED: btc     rax, 7
 * 00000001402ABEF2: mov     cr4, rax
 * 00000001402ABEF5: mov     cr4, rcx
 * 00000001402ABEF8: jmp     short loc_1402ABF00
 * 00000001402ABEFA: mov     rax, cr3
 * 00000001402ABEFD: mov     cr3, rax
 * 00000001402ABF00: add     r9, rbx
 * 00000001402ABF03: add     r11d, r13d
 * 00000001402ABF06: cmp     r11d, [rdx+8D4h]
 * 00000001402ABF0D: jb      short loc_1402ABED4
 * 00000001402ABF0F: mov     r13, [rbp+2150h+var_2078]
 * 00000001402ABF16: mov     rbx, [rbp+2150h+var_20E8]
 * 00000001402ABF1A: cmp     r8, r10
 * 00000001402ABF1D: jnb     short loc_1402ABF91
 * 00000001402ABF1F: xor     r13d, r13d
 * 00000001402ABF22: lea     r15d, [r13+1]
 * 00000001402ABF26: mov     esi, [r8+8]
 * 00000001402ABF2A: mov     rcx, r9
 * 00000001402ABF2D: mov     r11, [r8]
 * 00000001402ABF30: mov     ebx, esi
 * 00000001402ABF32: cmp     esi, 8
 * 00000001402ABF35: jb      short loc_1402ABF53
 * 00000001402ABF37: mov     edi, esi
 * 00000001402ABF39: shr     rdi, 3
 * 00000001402ABF3D: mov     rax, [rcx]
 * 00000001402ABF40: add     ebx, 0FFFFFFF8h
 * 00000001402ABF43: mov     [r11], rax
 * 00000001402ABF46: add     rcx, 8
 * 00000001402ABF4A: add     r11, 8
 * 00000001402ABF4E: sub     rdi, r15
 * 00000001402ABF51: jnz     short loc_1402ABF3D
 * 00000001402ABF53: test    ebx, ebx
 * 00000001402ABF55: jz      short loc_1402ABF68
 * 00000001402ABF57: sub     r11, rcx
 * 00000001402ABF5A: mov     al, [rcx]
 * 00000001402ABF5C: mov     [rcx+r11], al
 * 00000001402ABF60: add     rcx, r15
 * 00000001402ABF63: add     ebx, 0FFFFFFFFh
 * 00000001402ABF66: jnz     short loc_1402ABF5A
 * 00000001402ABF68: add     r9, rsi
 * 00000001402ABF6B: add     r8, 10h
 * 00000001402ABF6F: cmp     r8, r10
 * 00000001402ABF72: jb      short loc_1402ABF26
 * 00000001402ABF74: mov     r15, [rbp+2150h+var_20D0]
 * 00000001402ABF7B: mov     r13, [rbp+2150h+var_2078]
 * 00000001402ABF82: mov     rbx, [rbp+2150h+var_20E8]
 * 00000001402ABF86: mov     rdi, [rbp+2150h+var_2110]
 * 00000001402ABF8A: mov     rsi, [rbp+2150h+var_2080]
 * 00000001402ABF91: mov     rax, [rdx+208h]
 * 00000001402ABF98: mov     byte ptr [rax], 0C3h
 * 00000001402ABF9B: mov     cr0, r12
 * 00000001402ABF9F: mov     rdx, [rbp+2150h+var_1FE0]
 * 00000001402ABFA6: xor     r11d, r11d
 * 00000001402ABFA9: lea     r8d, [r11+2]
 * 00000001402ABFAD: cmp     [rdx+780h], r11d
 * 00000001402ABFB4: jz      short loc_1402ABFC7
 * 00000001402ABFB6: mov     rax, cr8
 * 00000001402ABFBA: cmp     al, r8b
 * 00000001402ABFBD: jnb     short loc_1402ABFC7
 * 00000001402ABFBF: mov     rax, cr8
 * 00000001402ABFC3: mov     cr8, r8
 * 00000001402ABFC7: mov     ecx, [rdx+780h]
 * 00000001402ABFCD: test    ecx, ecx
 * 00000001402ABFCF: jz      loc_1402AC33A
 * 00000001402ABFD5: sub     ecx, 1
 * 00000001402ABFD8: jz      loc_1402AC32D
 * 00000001402ABFDE: sub     ecx, 1
 * 00000001402ABFE1: jz      short loc_1402AC05A
 * 00000001402ABFE3: sub     ecx, 1
 * 00000001402ABFE6: jz      short loc_1402AC04E
 * 00000001402ABFE8: sub     ecx, 1
 * 00000001402ABFEB: jz      short loc_1402AC029
 * 00000001402ABFED: cmp     ecx, 1
 * 00000001402ABFF0: jz      short loc_1402AC00B
 * 00000001402ABFF2: mov     rax, [rdx+570h]
 * 00000001402ABFF9: mov     ecx, 1
 * 00000001402ABFFE: lock or [rax+340h], rcx
 * 00000001402AC006: jmp     loc_1402AC33A
 * 00000001402AC00B: mov     ecx, [rdx+7D8h]
 * 00000001402AC011: mov     rax, gs:188h
 * 00000001402AC01A: shr     ecx, 0Ah
 * 00000001402AC01D: and     ecx, 1Fh
 * 00000001402AC020: lock bts [rax], ecx
 * 00000001402AC024: jmp     loc_1402AC33A
 * 00000001402AC029: mov     edx, [rdx+7D8h]
 * 00000001402AC02F: mov     rax, gs:188h
 * 00000001402AC038: shr     edx, 0Ah
 * 00000001402AC03B: and     edx, 1Fh
 * 00000001402AC03E: mov     rcx, [rax+0B8h]
 * 00000001402AC045: lock bts [rcx], edx
 * 00000001402AC049: jmp     loc_1402AC33A
 * 00000001402AC04E: mov     rax, [rdx+518h]
 * 00000001402AC055: jmp     loc_1402AC334
 * 00000001402AC05A: mov     rax, [rdx+510h]
 * 00000001402AC061: jmp     loc_1402AC334
 * 00000001402AC066: test    dword ptr [r13+7D8h], 40000000h
 * 00000001402AC071: jnz     short loc_1402AC0BD
 * 00000001402AC073: cmp     [rbp+2150h+var_2128], r11d
 * 00000001402AC077: jz      short loc_1402AC0BD
 * 00000001402AC079: mov     ecx, [r13+77Ch]
 * 00000001402AC080: sub     ecx, 1
 * 00000001402AC083: jz      short loc_1402AC097
 * 00000001402AC085: mov     eax, 2
 * 00000001402AC08A: cmp     ecx, eax
 * 00000001402AC08C: jnz     short loc_1402AC0BD
 * 00000001402AC08E: mov     rax, [r13+358h]
 * 00000001402AC095: jmp     short loc_1402AC0B6
 * 00000001402AC097: add     qword ptr [r13+628h], 0FFFFFFFFFFFFFFF8h
 * 00000001402AC09F: mov     rax, [r13+628h]
 * 00000001402AC0A6: mov     ecx, [rax]
 * 00000001402AC0A8: mov     [r13+630h], ecx
 * 00000001402AC0AF: mov     rax, [r13+218h]
 * 00000001402AC0B6: mov     [r13+0F0h], rax
 * 00000001402AC0BD: mov     rax, r13
 * 00000001402AC0C0: lea     r11, [rsp+1120h+var_20]
 * 00000001402AC0C8: mov     rbx, [r11+38h]
 * 00000001402AC0CC: mov     rsi, [r11+40h]
 * 00000001402AC0D0: mov     rdi, [r11+48h]
 * 00000001402AC0D4: mov     rsp, r11
 * 00000001402AC0D7: pop     r15
 * 00000001402AC0D9: pop     r14
 * 00000001402AC0DB: pop     r13
 * 00000001402AC0DD: pop     r12
 * 00000001402AC0DF: pop     rbp
 * 00000001402AC0E0: retn
 * 00000001402AC0E1: mov     r9d, 3; BugCheckParameter3
 * 00000001402AC0E7: mov     [rbp+2150h+var_1F08], 0F4000004h
 * 00000001402AC0F1: mov     ecx, [rbp+2150h+var_1F08]
 * 00000001402AC0F7: mov     r8, r14; BugCheckParameter2
 * 00000001402AC0FA: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC0FD: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC102: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001402AC106: call    KeBugCheckEx
 * 00000001402AC10C: xor     r9d, r9d; BugCheckParameter3
 * 00000001402AC10F: mov     [rbp+2150h+var_1F1C], 0F4000004h
 * 00000001402AC119: mov     ecx, [rbp+2150h+var_1F1C]
 * 00000001402AC11F: mov     r8, r14; BugCheckParameter2
 * 00000001402AC122: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC125: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC12A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001402AC12E: call    KeBugCheckEx
 * 00000001402AC134: mov     [rbp+2150h+var_1F18], 0F4000004h
 * 00000001402AC13E: mov     r9, r10; BugCheckParameter3
 * 00000001402AC141: mov     ecx, [rbp+2150h+var_1F18]
 * 00000001402AC147: mov     r8, r14; BugCheckParameter2
 * 00000001402AC14A: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC14D: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402AC152: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC157: call    KeBugCheckEx
 * 00000001402AC15D: mov     [rbp+2150h+var_1F14], 0F4000004h
 * 00000001402AC167: mov     r8, r14; BugCheckParameter2
 * 00000001402AC16A: mov     ecx, [rbp+2150h+var_1F14]
 * 00000001402AC170: mov     r9d, edx; BugCheckParameter3
 * 00000001402AC173: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402AC178: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC17B: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC180: call    KeBugCheckEx
 * 00000001402AC186: mov     [rbp+2150h+var_1F10], 0F4000004h
 * 00000001402AC190: mov     r8, r10; BugCheckParameter2
 * 00000001402AC193: mov     ecx, [rbp+2150h+var_1F10]
 * 00000001402AC199: mov     r9d, edx; BugCheckParameter3
 * 00000001402AC19C: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402AC1A1: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC1A4: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC1A9: call    KeBugCheckEx
 * 00000001402AC1AF: mov     r9d, 2; BugCheckParameter3
 * 00000001402AC1B5: mov     [rbp+2150h+var_1F0C], 0F4000004h
 * 00000001402AC1BF: mov     ecx, [rbp+2150h+var_1F0C]
 * 00000001402AC1C5: mov     r8, r14; BugCheckParameter2
 * 00000001402AC1C8: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC1CB: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC1D0: lea     edx, [r9+8]; BugCheckParameter1
 * 00000001402AC1D4: call    KeBugCheckEx
 * 00000001402AC1DA: mov     r8, [rbp+2150h+var_20B8]; BugCheckParameter2
 * 00000001402AC1E1: mov     r9d, 6; BugCheckParameter3
 * 00000001402AC1E7: mov     [rbp+2150h+var_1F04], 0F4000004h
 * 00000001402AC1F1: mov     ecx, [rbp+2150h+var_1F04]
 * 00000001402AC1F7: mov     [rsp+1120h+BugCheckParameter4], rdx; BugCheckParameter4
 * 00000001402AC1FC: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001402AC200: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC203: call    KeBugCheckEx
 * 00000001402AC209: xor     r9d, r9d; BugCheckParameter3
 * 00000001402AC20C: mov     [rbp+2150h+var_1EE0], 0F4000004h
 * 00000001402AC216: mov     ecx, [rbp+2150h+var_1EE0]
 * 00000001402AC21C: mov     r8, r12; BugCheckParameter2
 * 00000001402AC21F: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC222: mov     [rsp+1120h+BugCheckParameter4], r15; BugCheckParameter4
 * 00000001402AC227: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001402AC22B: call    KeBugCheckEx
 * 00000001402AC231: mov     r9d, 3; BugCheckParameter3
 * 00000001402AC237: mov     [rbp+2150h+var_1EC0], 0F4000004h
 * 00000001402AC241: mov     ecx, [rbp+2150h+var_1EC0]
 * 00000001402AC247: mov     r8, r12; BugCheckParameter2
 * 00000001402AC24A: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC24D: mov     [rsp+1120h+BugCheckParameter4], r15; BugCheckParameter4
 * 00000001402AC252: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001402AC256: call    KeBugCheckEx
 * 00000001402AC25C: mov     [rbp+2150h+var_1E8C], 0F4000004h
 * 00000001402AC266: mov     r9, r10; BugCheckParameter3
 * 00000001402AC269: mov     ecx, [rbp+2150h+var_1E8C]
 * 00000001402AC26F: mov     r8, r12; BugCheckParameter2
 * 00000001402AC272: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC275: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402AC27A: mov     [rsp+1120h+BugCheckParameter4], r13; BugCheckParameter4
 * 00000001402AC27F: call    KeBugCheckEx
 * 00000001402AC285: xor     eax, eax
 * 00000001402AC287: mov     [rbp+2150h+var_1E90], 0F4000004h
 * 00000001402AC291: mov     ecx, [rbp+2150h+var_1E90]
 * 00000001402AC297: mov     r8, r12; BugCheckParameter2
 * 00000001402AC29A: mov     r9d, edx; BugCheckParameter3
 * 00000001402AC29D: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC2A0: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402AC2A3: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC2A8: call    KeBugCheckEx
 * 00000001402AC2AE: xor     eax, eax
 * 00000001402AC2B0: mov     [rbp+2150h+var_1EB8], 0F4000004h
 * 00000001402AC2BA: mov     ecx, [rbp+2150h+var_1EB8]
 * 00000001402AC2C0: mov     r8, r10; BugCheckParameter2
 * 00000001402AC2C3: mov     r9d, edx; BugCheckParameter3
 * 00000001402AC2C6: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC2C9: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402AC2CC: mov     [rsp+1120h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402AC2D1: call    KeBugCheckEx
 * 00000001402AC2D7: mov     r9d, 2; BugCheckParameter3
 * 00000001402AC2DD: mov     [rbp+2150h+var_1EB4], 0F4000004h
 * 00000001402AC2E7: mov     ecx, [rbp+2150h+var_1EB4]
 * 00000001402AC2ED: mov     r8, r12; BugCheckParameter2
 * 00000001402AC2F0: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC2F3: mov     [rsp+1120h+BugCheckParameter4], r13; BugCheckParameter4
 * 00000001402AC2F8: lea     edx, [r9+8]; BugCheckParameter1
 * 00000001402AC2FC: call    KeBugCheckEx
 * 00000001402AC302: mov     r9d, 6; BugCheckParameter3
 * 00000001402AC308: mov     [rbp+2150h+var_1ED0], 0F4000004h
 * 00000001402AC312: mov     ecx, [rbp+2150h+var_1ED0]
 * 00000001402AC318: mov     [rsp+1120h+BugCheckParameter4], r8; BugCheckParameter4
 * 00000001402AC31D: mov     r8, r15; BugCheckParameter2
 * 00000001402AC320: ror     ecx, 5Ah; BugCheckCode
 * 00000001402AC323: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001402AC327: call    KeBugCheckEx
 * 00000001402AC32D: mov     rax, [rdx+500h]
 * 00000001402AC334: lock bts qword ptr [rax], 0
 * 00000001402AC33A: mov     [r15+610h], r11
 * 00000001402AC341: mov     [r15+690h], r11
 * 00000001402AC348: mov     rcx, [rbp+2150h+var_1FE0]
 * 00000001402AC34F: mov     rcx, [rcx+148h]; Target
 * 00000001402AC356: call    KeGuardCheckICall
 * 00000001402AC35B: mov     rax, [rbp+2150h+var_1FE0]
 * 00000001402AC362: mov     r9, rbx
 * 00000001402AC365: mov     [rsp+1120h+var_10F0], r14
 * 00000001402AC36A: mov     r8, rdi
 * 00000001402AC36D: mov     rdx, rsi
 * 00000001402AC370: mov     ecx, 109h
 * 00000001402AC375: mov     r10, [rax+148h]
 * 00000001402AC37C: mov     [rsp+1120h+var_10F8], r10
 * 00000001402AC381: mov     [rsp+1120h+BugCheckParameter4], r13
 * 00000001402AC386: call    SdbpCheckDll
 */
