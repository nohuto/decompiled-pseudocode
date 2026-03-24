/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x1402D2010
 * Callers:
 *     KiDecodeMcaFault @ 0x140192740 (KiDecodeMcaFault.c)
 *     sub_14019FCB0 @ 0x14019FCB0 (sub_14019FCB0.c)
 *     FsRtlUninitializeSmallMcb @ 0x1402E9570 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_14019FEBC @ 0x14019FEBC (sub_14019FEBC.c)
 *     sub_14019FF9C @ 0x14019FF9C (sub_14019FF9C.c)
 *     sub_1401A0EC4 @ 0x1401A0EC4 (sub_1401A0EC4.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     sub_1402E68D4 @ 0x1402E68D4 (sub_1402E68D4.c)
 *     sub_1402E732C @ 0x1402E732C (sub_1402E732C.c)
 *     sub_1402E7BC8 @ 0x1402E7BC8 (sub_1402E7BC8.c)
 *     KiGetGdtIdt @ 0x1402E9440 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x1402E9450 (KiGetLdtr.c)
 *     KiGetTr @ 0x1402E9460 (KiGetTr.c)
 *     KiErrata704Present @ 0x1402E9470 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x1402E9520 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402E97E0 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x1402E9954 (RtlInitMinimalBarrier.c)
 *     sub_14087CF84 @ 0x14087CF84 (sub_14087CF84.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x1402D2010
 * Reason: Hex-Rays returned no pseudocode for 0x1402D2010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402D2010: mov     rax, rsp
 * 00000001402D2013: mov     [rax+10h], rbx
 * 00000001402D2017: mov     [rax+18h], rsi
 * 00000001402D201B: mov     [rax+20h], rdi
 * 00000001402D201F: mov     [rax+8], rcx
 * 00000001402D2023: push    rbp
 * 00000001402D2024: push    r12
 * 00000001402D2026: push    r13
 * 00000001402D2028: push    r14
 * 00000001402D202A: push    r15
 * 00000001402D202C: sub     rsp, 1180h
 * 00000001402D2033: lea     rbp, [rax-10D8h]
 * 00000001402D203A: and     rbp, 0FFFFFFFFFFFFFF80h
 * 00000001402D203E: mov     eax, [rcx+828h]
 * 00000001402D2044: xor     r8d, r8d
 * 00000001402D2047: mov     r12, rcx
 * 00000001402D204A: mov     [rbp+2250h+var_1AA8], rcx
 * 00000001402D2051: mov     ecx, 110000h
 * 00000001402D2056: or      r10d, 0FFFFFFFFh
 * 00000001402D205A: and     eax, ecx
 * 00000001402D205C: mov     r9d, 130h
 * 00000001402D2062: lea     esi, [r8+1]
 * 00000001402D2066: mov     r11d, 0FFFFFFF8h
 * 00000001402D206C: cmp     eax, ecx
 * 00000001402D206E: jz      loc_1402D213C
 * 00000001402D2074: mov     ecx, r9d
 * 00000001402D2077: lea     rax, [rbp+2250h+var_1550]
 * 00000001402D207E: lea     edx, [rsi+25h]
 * 00000001402D2081: mov     [rax], r8
 * 00000001402D2084: add     ecx, r11d
 * 00000001402D2087: add     rax, 8
 * 00000001402D208B: sub     rdx, rsi
 * 00000001402D208E: jnz     short loc_1402D2081
 * 00000001402D2090: test    ecx, ecx
 * 00000001402D2092: jz      short loc_1402D209F
 * 00000001402D2094: mov     [rax], r8b
 * 00000001402D2097: add     rax, rsi
 * 00000001402D209A: add     ecx, r10d
 * 00000001402D209D: jnz     short loc_1402D2094
 * 00000001402D209F: movups  xmm0, xmmword ptr [r12+6E8h]
 * 00000001402D20A8: lea     rax, [rbp+2250h+var_1550]
 * 00000001402D20AF: movdqu  [rbp+2250h+var_1540], xmm0
 * 00000001402D20B7: movups  xmm1, xmmword ptr [r12+6F8h]
 * 00000001402D20C0: movdqu  [rbp+2250h+var_1530], xmm1
 * 00000001402D20C8: movups  xmm0, xmmword ptr [r12+708h]
 * 00000001402D20D1: mov     [rbp+2250h+var_1ED6], rax
 * 00000001402D20D8: lea     rax, [r12+718h]
 * 00000001402D20E0: mov     rcx, rax
 * 00000001402D20E3: mov     word ptr [rbp+2250h+var_1540], ax
 * 00000001402D20EA: shr     rcx, 10h
 * 00000001402D20EE: shr     rax, 20h
 * 00000001402D20F2: mov     dword ptr [rbp+2250h+var_1540+8], eax
 * 00000001402D20F8: movdqu  [rbp+2250h+var_1430], xmm0
 * 00000001402D2100: mov     word ptr [rbp+2250h+var_1ED8], r9w
 * 00000001402D2108: mov     word ptr [rbp+2250h+var_1540+6], cx
 * 00000001402D210F: cli
 * 00000001402D2110: xor     eax, eax
 * 00000001402D2112: cmp     [r12+828h], eax
 * 00000001402D211A: jge     short loc_1402D2122
 * 00000001402D211C: mov     dr7, rax
 * 00000001402D211F: sti
 * 00000001402D2120: jmp     short loc_1402D213E
 * 00000001402D2122: sidt    fword ptr [rbp+2250h+var_1D70]
 * 00000001402D2129: lidt    fword ptr [rbp+2250h+var_1ED8]
 * 00000001402D2130: mov     dr7, rax
 * 00000001402D2133: lidt    fword ptr [rbp+2250h+var_1D70]
 * 00000001402D213A: jmp     short loc_1402D211F
 * 00000001402D213C: xor     eax, eax
 * 00000001402D213E: test    dword ptr [r12+82Ch], 100h
 * 00000001402D214A: mov     [rbp+2250h+var_2170], rax
 * 00000001402D2151: jz      short loc_1402D216C
 * 00000001402D2153: lea     rcx, [rsp+11A8h]
 * 00000001402D215B: mov     rax, [rcx]
 * 00000001402D215E: mov     [rbp+2250h+var_2170], rax
 * 00000001402D2165: xor     eax, eax
 * 00000001402D2167: mov     [rcx], rax
 * 00000001402D216A: jmp     short loc_1402D216E
 * 00000001402D216C: xor     eax, eax
 * 00000001402D216E: mov     edi, 40h ; '@'
 * 00000001402D2173: mov     [r12+6C8h], eax
 * 00000001402D217B: test    dword ptr [r12+828h], 40000000h
 * 00000001402D2187: mov     r14, 7010008004002001h
 * 00000001402D2191: lea     r13d, [rdi-20h]
 * 00000001402D2195: lea     r15d, [rdi-3Ch]
 * 00000001402D2199: jz      short loc_1402D21AB
 * 00000001402D219B: xor     eax, eax
 * 00000001402D219D: cmp     [r12+900h], rax
 * 00000001402D21A5: jnz     loc_1402D241E
 * 00000001402D21AB: mov     r14, [r12+658h]
 * 00000001402D21B3: lea     rbx, [r12+638h]
 * 00000001402D21BB: mov     [rbp+2250h+var_2250], r14
 * 00000001402D21BF: lea     rdx, [rbp+2250h+var_17A0]
 * 00000001402D21C6: mov     rcx, rbx
 * 00000001402D21C9: mov     r8d, r13d
 * 00000001402D21CC: mov     r9, r15
 * 00000001402D21CF: mov     rax, [rcx]
 * 00000001402D21D2: add     r8d, r11d
 * 00000001402D21D5: mov     [rdx], rax
 * 00000001402D21D8: add     rcx, 8
 * 00000001402D21DC: add     rdx, 8
 * 00000001402D21E0: sub     r9, rsi
 * 00000001402D21E3: jnz     short loc_1402D21CF
 * 00000001402D21E5: xor     eax, eax
 * 00000001402D21E7: test    r8d, r8d
 * 00000001402D21EA: jz      short loc_1402D21FD
 * 00000001402D21EC: mov     al, [rcx]
 * 00000001402D21EE: add     rcx, rsi
 * 00000001402D21F1: mov     [rdx], al
 * 00000001402D21F3: add     rdx, rsi
 * 00000001402D21F6: add     r8d, r10d
 * 00000001402D21F9: jnz     short loc_1402D21EC
 * 00000001402D21FB: xor     eax, eax
 * 00000001402D21FD: mov     [r12+658h], rax
 * 00000001402D2205: mov     ecx, r13d
 * 00000001402D2208: mov     [r12+6C8h], eax
 * 00000001402D2210: mov     rdx, r15
 * 00000001402D2213: mov     rax, rbx
 * 00000001402D2216: xor     r8d, r8d
 * 00000001402D2219: mov     [rax], r8
 * 00000001402D221C: add     ecx, r11d
 * 00000001402D221F: add     rax, 8
 * 00000001402D2223: sub     rdx, rsi
 * 00000001402D2226: jnz     short loc_1402D2219
 * 00000001402D2228: test    ecx, ecx
 * 00000001402D222A: jz      short loc_1402D2237
 * 00000001402D222C: mov     [rax], r8b
 * 00000001402D222F: add     rax, rsi
 * 00000001402D2232: add     ecx, r10d
 * 00000001402D2235: jnz     short loc_1402D222C
 * 00000001402D2237: mov     eax, [r12+684h]
 * 00000001402D223F: mov     r9, r12
 * 00000001402D2242: add     [r12+6C8h], eax
 * 00000001402D224A: mov     rax, r12
 * 00000001402D224D: mov     r10d, [r12+684h]
 * 00000001402D2255: mov     r11d, [r12+6B4h]
 * 00000001402D225D: mov     rsi, [r12+6B8h]
 * 00000001402D2265: lea     rcx, [r12+r10]
 * 00000001402D2269: cmp     r12, rcx
 * 00000001402D226C: jnb     short loc_1402D2279
 * 00000001402D226E: prefetchnta byte ptr [rax]
 * 00000001402D2271: add     rax, rdi
 * 00000001402D2274: cmp     rax, rcx
 * 00000001402D2277: jb      short loc_1402D226E
 * 00000001402D2279: mov     edi, r10d
 * 00000001402D227C: mov     r8, rsi
 * 00000001402D227F: shr     edi, 7
 * 00000001402D2282: test    edi, edi
 * 00000001402D2284: jz      short loc_1402D22FB
 * 00000001402D2286: mov     r14, 7010008004002001h
 * 00000001402D2290: mov     edx, 8
 * 00000001402D2295: lea     r12d, [rdx-7]
 * 00000001402D2299: mov     rax, [r9]
 * 00000001402D229C: mov     ecx, r11d
 * 00000001402D229F: xor     rax, r8
 * 00000001402D22A2: mov     r8, [r9+8]
 * 00000001402D22A6: rol     rax, cl
 * 00000001402D22A9: add     r9, 10h
 * 00000001402D22AD: xor     r8, rax
 * 00000001402D22B0: rol     r8, cl
 * 00000001402D22B3: sub     rdx, r12
 * 00000001402D22B6: jnz     short loc_1402D2299
 * 00000001402D22B8: mov     r12, [rsp+11A0h+arg_0]
 * 00000001402D22C0: mov     rcx, r9
 * 00000001402D22C3: sub     rcx, r12
 * 00000001402D22C6: xor     rcx, rsi
 * 00000001402D22C9: mov     rax, rcx
 * 00000001402D22CC: rol     rax, 11h
 * 00000001402D22D0: xor     rcx, rax
 * 00000001402D22D3: mov     rax, r14
 * 00000001402D22D6: mul     rcx
 * 00000001402D22D9: xor     eax, edx
 * 00000001402D22DB: mov     [rbp+2250h+var_1A10], rdx
 * 00000001402D22E2: xor     r11d, eax
 * 00000001402D22E5: mov     eax, 1
 * 00000001402D22EA: and     r11d, 3Fh
 * 00000001402D22EE: cmovz   r11d, eax
 * 00000001402D22F2: add     edi, 0FFFFFFFFh
 * 00000001402D22F5: jnz     short loc_1402D2290
 * 00000001402D22F7: mov     r14, [rbp+2250h+var_2250]
 * 00000001402D22FB: and     r10d, 7Fh
 * 00000001402D22FF: mov     esi, 1
 * 00000001402D2304: cmp     r10d, 8
 * 00000001402D2308: jb      short loc_1402D2327
 * 00000001402D230A: mov     edx, r10d
 * 00000001402D230D: shr     rdx, 3
 * 00000001402D2311: xor     r8, [r9]
 * 00000001402D2314: mov     ecx, r11d
 * 00000001402D2317: rol     r8, cl
 * 00000001402D231A: add     r9, 8
 * 00000001402D231E: add     r10d, 0FFFFFFF8h
 * 00000001402D2322: sub     rdx, rsi
 * 00000001402D2325: jnz     short loc_1402D2311
 * 00000001402D2327: test    r10d, r10d
 * 00000001402D232A: jz      short loc_1402D2342
 * 00000001402D232C: movzx   eax, byte ptr [r9]
 * 00000001402D2330: mov     ecx, r11d
 * 00000001402D2333: xor     r8, rax
 * 00000001402D2336: add     r9, rsi
 * 00000001402D2339: rol     r8, cl
 * 00000001402D233C: add     r10d, 0FFFFFFFFh
 * 00000001402D2340: jnz     short loc_1402D232C
 * 00000001402D2342: mov     [r12+658h], r14
 * 00000001402D234A: lea     rcx, [rbp+2250h+var_17A0]
 * 00000001402D2351: mov     edx, r13d
 * 00000001402D2354: mov     r9, r15
 * 00000001402D2357: mov     r11d, 0FFFFFFF8h
 * 00000001402D235D: mov     rax, [rcx]
 * 00000001402D2360: add     edx, r11d
 * 00000001402D2363: mov     [rbx], rax
 * 00000001402D2366: add     rcx, 8
 * 00000001402D236A: add     rbx, 8
 * 00000001402D236E: sub     r9, rsi
 * 00000001402D2371: jnz     short loc_1402D235D
 * 00000001402D2373: test    edx, edx
 * 00000001402D2375: jz      short loc_1402D2386
 * 00000001402D2377: mov     al, [rcx]
 * 00000001402D2379: add     rcx, rsi
 * 00000001402D237C: mov     [rbx], al
 * 00000001402D237E: add     rbx, rsi
 * 00000001402D2381: add     edx, 0FFFFFFFFh
 * 00000001402D2384: jnz     short loc_1402D2377
 * 00000001402D2386: cmp     [r12+658h], r8
 * 00000001402D238E: jz      loc_1402D2414
 * 00000001402D2394: mov     rax, [r12+588h]
 * 00000001402D239C: mov     ecx, [r12+684h]
 * 00000001402D23A4: mov     [rax], r12
 * 00000001402D23A7: mov     [rax+10h], ecx
 * 00000001402D23AA: mov     eax, [r12+790h]
 * 00000001402D23B2: mov     rcx, [r12+658h]
 * 00000001402D23BA: test    eax, eax
 * 00000001402D23BC: jnz     short loc_1402D2414
 * 00000001402D23BE: mov     rax, [r12+588h]
 * 00000001402D23C6: xor     rcx, r8
 * 00000001402D23C9: mov     [rax+18h], rcx
 * 00000001402D23CD: mov     eax, [r12+790h]
 * 00000001402D23D5: test    eax, eax
 * 00000001402D23D7: jnz     short loc_1402D2414
 * 00000001402D23D9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D23E3: add     rax, r12
 * 00000001402D23E6: mov     [r12+798h], rax
 * 00000001402D23EE: xor     eax, eax
 * 00000001402D23F0: mov     [r12+7A0h], rax
 * 00000001402D23F8: mov     qword ptr [r12+7A8h], 101h
 * 00000001402D2404: mov     [r12+7B0h], r8
 * 00000001402D240C: mov     [r12+790h], esi
 * 00000001402D2414: mov     r14, 7010008004002001h
 * 00000001402D241E: or      [r12+828h], r15d
 * 00000001402D2426: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D242D: add     [r12+6D4h], esi
 * 00000001402D2435: mov     r8, 0ABCC77118461CEFDh
 * 00000001402D243F: mov     eax, [r12+828h]
 * 00000001402D2447: test    al, 8
 * 00000001402D2449: jz      loc_1402D2865
 * 00000001402D244F: bt      eax, 17h
 * 00000001402D2453: jb      loc_1402D2865
 * 00000001402D2459: mov     eax, [r12+82Ch]
 * 00000001402D2461: mov     r10, [r12+8F8h]
 * 00000001402D2469: mov     r13d, [r12+684h]
 * 00000001402D2471: mov     r11, [r12+890h]
 * 00000001402D2479: mov     r15d, [r12+6A8h]
 * 00000001402D2481: mov     [rbp+2250h+var_2250], r10
 * 00000001402D2485: and     eax, esi
 * 00000001402D2487: jz      short loc_1402D2491
 * 00000001402D2489: mov     r11, [r12+5D0h]
 * 00000001402D2491: mov     rbx, [rsp+11A0h+arg_0]
 * 00000001402D2499: mov     r12, [r12+160h]
 * 00000001402D24A1: mov     [rbp+2250h+var_2248], r12
 * 00000001402D24A5: mov     rax, [rbx+2C8h]
 * 00000001402D24AC: mov     [rbp+2250h+var_21C0], rax
 * 00000001402D24B3: mov     rax, [rbx+340h]
 * 00000001402D24BA: mov     [rbp+2250h+var_2208], rax
 * 00000001402D24BE: rdtsc
 * 00000001402D24C0: shl     rdx, 20h
 * 00000001402D24C4: mov     r9, rdi
 * 00000001402D24C7: or      rax, rdx
 * 00000001402D24CA: mov     rcx, rax
 * 00000001402D24CD: ror     rax, 3
 * 00000001402D24D1: xor     rcx, rax
 * 00000001402D24D4: mov     rax, r14
 * 00000001402D24D7: mul     rcx
 * 00000001402D24DA: mov     rcx, rdx
 * 00000001402D24DD: mov     [rbp+2250h+var_1A08], rdx
 * 00000001402D24E4: xor     rcx, rax
 * 00000001402D24E7: mov     rax, r8
 * 00000001402D24EA: mul     rcx
 * 00000001402D24ED: shr     rdx, 1Ah
 * 00000001402D24F1: imul    rax, rdx, 5F5E100h
 * 00000001402D24F8: sub     rcx, rax
 * 00000001402D24FB: sub     r9, rcx
 * 00000001402D24FE: mov     [rbp+2250h+var_2060], r9
 * 00000001402D2505: mov     r8d, [rbx+828h]
 * 00000001402D250C: bt      r8d, 1Ah
 * 00000001402D2511: jnb     loc_1402D25B8
 * 00000001402D2517: rdtsc
 * 00000001402D2519: shl     rdx, 20h
 * 00000001402D251D: or      rax, rdx
 * 00000001402D2520: mov     rcx, rax
 * 00000001402D2523: ror     rax, 3
 * 00000001402D2527: xor     rcx, rax
 * 00000001402D252A: mov     rax, r14
 * 00000001402D252D: mul     rcx
 * 00000001402D2530: mov     rcx, rdx
 * 00000001402D2533: mov     [rbp+2250h+var_1A00], rdx
 * 00000001402D253A: xor     rcx, rax
 * 00000001402D253D: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402D2547: mul     rcx
 * 00000001402D254A: shr     rdx, 3
 * 00000001402D254E: lea     rax, [rdx+rdx*4]
 * 00000001402D2552: add     rax, rax
 * 00000001402D2555: sub     rcx, rax
 * 00000001402D2558: mov     eax, 2
 * 00000001402D255D: cmp     rcx, rax
 * 00000001402D2560: jnb     short loc_1402D25B8
 * 00000001402D2562: rdtsc
 * 00000001402D2564: shl     rdx, 20h
 * 00000001402D2568: or      rax, rdx
 * 00000001402D256B: mov     rcx, rax
 * 00000001402D256E: ror     rax, 3
 * 00000001402D2572: xor     rcx, rax
 * 00000001402D2575: mov     rax, r14
 * 00000001402D2578: mul     rcx
 * 00000001402D257B: mov     rcx, rdx
 * 00000001402D257E: mov     [rbp+2250h+var_19F8], rdx
 * 00000001402D2585: xor     rcx, rax
 * 00000001402D2588: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402D2592: mul     rcx
 * 00000001402D2595: shr     rdx, 3
 * 00000001402D2599: lea     rax, [rdx+rdx*4]
 * 00000001402D259D: add     rax, rax
 * 00000001402D25A0: sub     rcx, rax
 * 00000001402D25A3: add     rcx, rsi
 * 00000001402D25A6: imul    rcx, r9
 * 00000001402D25AA: mov     [rbp+2250h+var_2060], rcx
 * 00000001402D25B1: mov     r8d, [rbx+828h]
 * 00000001402D25B8: xor     eax, eax
 * 00000001402D25BA: mov     esi, r15d
 * 00000001402D25BD: mov     ebx, eax
 * 00000001402D25BF: mov     r14d, eax
 * 00000001402D25C2: lea     ecx, [rax+2]
 * 00000001402D25C5: test    cl, r8b
 * 00000001402D25C8: cmovnz  esi, r13d
 * 00000001402D25CC: test    r8b, r8b
 * 00000001402D25CF: js      short loc_1402D25D9
 * 00000001402D25D1: mov     r13d, eax
 * 00000001402D25D4: jmp     loc_1402D26B7
 * 00000001402D25D9: mov     r9d, 1
 * 00000001402D25DF: mov     r13d, r9d
 * 00000001402D25E2: rdtsc
 * 00000001402D25E4: shl     rdx, 20h
 * 00000001402D25E8: or      rax, rdx
 * 00000001402D25EB: mov     rcx, rax
 * 00000001402D25EE: ror     rax, 3
 * 00000001402D25F2: xor     rcx, rax
 * 00000001402D25F5: mov     rax, 7010008004002001h
 * 00000001402D25FF: mul     rcx
 * 00000001402D2602: mov     ecx, 125h
 * 00000001402D2607: mov     rbx, rdx
 * 00000001402D260A: mov     [rbp+2250h+var_19F0], rdx
 * 00000001402D2611: mov     rdx, [rsp+11A0h+arg_0]
 * 00000001402D2619: xor     rbx, rax
 * 00000001402D261C: mov     r14, rbx
 * 00000001402D261F: mov     r8, rbx
 * 00000001402D2622: xor     r14, rdx
 * 00000001402D2625: lea     rax, [rdx+920h]
 * 00000001402D262C: xor     [rax], r8
 * 00000001402D262F: lea     rax, [rax-8]
 * 00000001402D2633: ror     r8, cl
 * 00000001402D2636: sub     ecx, r9d
 * 00000001402D2639: jnz     short loc_1402D262C
 * 00000001402D263B: lea     r9, [r15-928h]
 * 00000001402D2642: mov     r12, r15
 * 00000001402D2645: shr     r9, 3
 * 00000001402D2649: test    r9d, r9d
 * 00000001402D264C: jz      short loc_1402D268A
 * 00000001402D264E: movsxd  r10, r9d
 * 00000001402D2651: mov     rdi, r13
 * 00000001402D2654: add     r10, 124h
 * 00000001402D265B: lea     r10, [rdx+r10*8]
 * 00000001402D265F: mov     rdx, [r10]
 * 00000001402D2662: lea     rax, [r14+r14]
 * 00000001402D2666: mov     ecx, r9d
 * 00000001402D2669: lea     r10, [r10-8]
 * 00000001402D266D: ror     rdx, cl
 * 00000001402D2670: mov     r14, rdx
 * 00000001402D2673: xor     r14, rax
 * 00000001402D2676: sub     r9d, edi
 * 00000001402D2679: jnz     short loc_1402D265F
 * 00000001402D267B: mov     r10, [rbp+2250h+var_2250]
 * 00000001402D267F: mov     r12, r15
 * 00000001402D2682: mov     rdx, [rsp+11A0h+arg_0]
 * 00000001402D268A: mov     ecx, esi
 * 00000001402D268C: add     rdx, r12
 * 00000001402D268F: sub     ecx, r15d
 * 00000001402D2692: shr     ecx, 3
 * 00000001402D2695: test    ecx, ecx
 * 00000001402D2697: jz      short loc_1402D26B3
 * 00000001402D2699: lea     rdx, [rdx+rcx*8]
 * 00000001402D269D: mov     r9, r13
 * 00000001402D26A0: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001402D26A4: xor     [rdx], r8
 * 00000001402D26A7: lea     rdx, [rdx-8]
 * 00000001402D26AB: ror     r8, cl
 * 00000001402D26AE: sub     ecx, r9d
 * 00000001402D26B1: jnz     short loc_1402D26A4
 * 00000001402D26B3: mov     r12, [rbp+2250h+var_2248]
 * 00000001402D26B7: test    r10, r10
 * 00000001402D26BA: jz      short loc_1402D26E3
 * 00000001402D26BC: mov     rax, [rbp+2250h+var_2208]
 * 00000001402D26C0: lea     r8, [rbp+2250h+var_2060]
 * 00000001402D26C7: mov     r9, r12
 * 00000001402D26CA: mov     [rsp+11A0h+BugCheckParameter4], r10
 * 00000001402D26CF: mov     r12, [rsp+11A0h+arg_0]
 * 00000001402D26D7: mov     edx, esi
 * 00000001402D26D9: mov     rcx, r12
 * 00000001402D26DC: call    KeGuardDispatchICall
 * 00000001402D26E1: jmp     short loc_1402D2726
 * 00000001402D26E3: xor     edx, edx
 * 00000001402D26E5: test    r11, r11
 * 00000001402D26E8: jnz     short loc_1402D26FD
 * 00000001402D26EA: lea     r8, [rbp+2250h+var_2060]
 * 00000001402D26F1: xor     ecx, ecx
 * 00000001402D26F3: mov     rax, r12
 * 00000001402D26F6: call    KeGuardDispatchICall
 * 00000001402D26FB: jmp     short loc_1402D271E
 * 00000001402D26FD: lea     rax, [rbp+2250h+var_2060]
 * 00000001402D2704: xor     r9d, r9d
 * 00000001402D2707: mov     [rsp+11A0h+BugCheckParameter4], rax
 * 00000001402D270C: xor     r8d, r8d
 * 00000001402D270F: mov     rax, [rbp+2250h+var_21C0]
 * 00000001402D2716: mov     rcx, r11
 * 00000001402D2719: call    KeGuardDispatchICall
 * 00000001402D271E: mov     r12, [rsp+11A0h+arg_0]
 * 00000001402D2726: xor     eax, eax
 * 00000001402D2728: test    r13d, r13d
 * 00000001402D272B: jz      loc_1402D2859
 * 00000001402D2731: mov     r8, rbx
 * 00000001402D2734: lea     rax, [r12+920h]
 * 00000001402D273C: xor     r8, r12
 * 00000001402D273F: mov     ecx, 125h
 * 00000001402D2744: mov     r13d, 1
 * 00000001402D274A: xor     [rax], rbx
 * 00000001402D274D: lea     rax, [rax-8]
 * 00000001402D2751: ror     rbx, cl
 * 00000001402D2754: sub     ecx, r13d
 * 00000001402D2757: jnz     short loc_1402D274A
 * 00000001402D2759: lea     r9, [r15-928h]
 * 00000001402D2760: mov     r11, r15
 * 00000001402D2763: shr     r9, 3
 * 00000001402D2767: test    r9d, r9d
 * 00000001402D276A: jz      short loc_1402D2799
 * 00000001402D276C: movsxd  r10, r9d
 * 00000001402D276F: add     r10, 124h
 * 00000001402D2776: lea     r10, [r12+r10*8]
 * 00000001402D277A: mov     rdx, [r10]
 * 00000001402D277D: lea     rax, [r8+r8]
 * 00000001402D2781: mov     ecx, r9d
 * 00000001402D2784: lea     r10, [r10-8]
 * 00000001402D2788: ror     rdx, cl
 * 00000001402D278B: mov     r8, rdx
 * 00000001402D278E: xor     r8, rax
 * 00000001402D2791: sub     r9d, r13d
 * 00000001402D2794: jnz     short loc_1402D277A
 * 00000001402D2796: mov     r11, r15
 * 00000001402D2799: sub     esi, r15d
 * 00000001402D279C: lea     rcx, [r11+r12]
 * 00000001402D27A0: shr     esi, 3
 * 00000001402D27A3: test    esi, esi
 * 00000001402D27A5: jz      short loc_1402D27C1
 * 00000001402D27A7: mov     eax, esi
 * 00000001402D27A9: dec     rax
 * 00000001402D27AC: lea     rdx, [rcx+rax*8]
 * 00000001402D27B0: xor     [rdx], rbx
 * 00000001402D27B3: mov     ecx, esi
 * 00000001402D27B5: ror     rbx, cl
 * 00000001402D27B8: lea     rdx, [rdx-8]
 * 00000001402D27BC: sub     esi, r13d
 * 00000001402D27BF: jnz     short loc_1402D27B0
 * 00000001402D27C1: cmp     r8, r14
 * 00000001402D27C4: jz      loc_1402D284E
 * 00000001402D27CA: mov     rax, [r12+588h]
 * 00000001402D27D2: mov     ecx, [r12+684h]
 * 00000001402D27DA: mov     [rax], r12
 * 00000001402D27DD: mov     [rax+10h], ecx
 * 00000001402D27E0: mov     eax, [r12+790h]
 * 00000001402D27E8: test    eax, eax
 * 00000001402D27EA: jnz     short loc_1402D284E
 * 00000001402D27EC: mov     rax, [r12+588h]
 * 00000001402D27F4: mov     rcx, r8
 * 00000001402D27F7: xor     rcx, r14
 * 00000001402D27FA: mov     [rax+18h], rcx
 * 00000001402D27FE: mov     eax, [r12+790h]
 * 00000001402D2806: test    eax, eax
 * 00000001402D2808: jnz     short loc_1402D284E
 * 00000001402D280A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D2814: mov     r14, r13
 * 00000001402D2817: add     rax, r12
 * 00000001402D281A: mov     [r12+798h], rax
 * 00000001402D2822: xor     eax, eax
 * 00000001402D2824: mov     [r12+7A0h], rax
 * 00000001402D282C: mov     qword ptr [r12+7A8h], 10Eh
 * 00000001402D2838: mov     [r12+7B0h], r8
 * 00000001402D2840: mov     [r12+790h], r14d
 * 00000001402D2848: lea     r15d, [rax+4]
 * 00000001402D284C: jmp     short loc_1402D286D
 * 00000001402D284E: mov     r15d, 4
 * 00000001402D2854: mov     r14, r13
 * 00000001402D2857: jmp     short loc_1402D286B
 * 00000001402D2859: mov     r15d, 4
 * 00000001402D285F: lea     r14d, [r15-3]
 * 00000001402D2863: jmp     short loc_1402D286D
 * 00000001402D2865: mov     r14d, 1
 * 00000001402D286B: xor     eax, eax
 * 00000001402D286D: mov     esi, [r12+0C4h]
 * 00000001402D2875: lea     rcx, [r12+618h]
 * 00000001402D287D: mov     [r12+0C4h], eax
 * 00000001402D2885: mov     r9, r12
 * 00000001402D2888: add     dword ptr [r12+6C8h], 618h
 * 00000001402D2894: mov     rax, r12
 * 00000001402D2897: mov     r10d, [r12+6B4h]
 * 00000001402D289F: mov     r11, [r12+6B8h]
 * 00000001402D28A7: cmp     r12, rcx
 * 00000001402D28AA: jnb     short loc_1402D28BC
 * 00000001402D28AC: mov     edx, 40h ; '@'
 * 00000001402D28B1: prefetchnta byte ptr [rax]
 * 00000001402D28B4: add     rax, rdx
 * 00000001402D28B7: cmp     rax, rcx
 * 00000001402D28BA: jb      short loc_1402D28B1
 * 00000001402D28BC: mov     r8, r11
 * 00000001402D28BF: mov     ebx, 0Ch
 * 00000001402D28C4: mov     rdi, 7010008004002001h
 * 00000001402D28CE: mov     edx, 8
 * 00000001402D28D3: mov     rax, [r9]
 * 00000001402D28D6: mov     ecx, r10d
 * 00000001402D28D9: xor     rax, r8
 * 00000001402D28DC: mov     r8, [r9+8]
 * 00000001402D28E0: rol     rax, cl
 * 00000001402D28E3: add     r9, 10h
 * 00000001402D28E7: xor     r8, rax
 * 00000001402D28EA: rol     r8, cl
 * 00000001402D28ED: sub     rdx, r14
 * 00000001402D28F0: jnz     short loc_1402D28D3
 * 00000001402D28F2: mov     rcx, r9
 * 00000001402D28F5: sub     rcx, r12
 * 00000001402D28F8: xor     rcx, r11
 * 00000001402D28FB: mov     rax, rcx
 * 00000001402D28FE: rol     rax, 11h
 * 00000001402D2902: xor     rcx, rax
 * 00000001402D2905: mov     rax, rdi
 * 00000001402D2908: mul     rcx
 * 00000001402D290B: xor     eax, edx
 * 00000001402D290D: mov     [rbp+2250h+var_19E8], rdx
 * 00000001402D2914: xor     r10d, eax
 * 00000001402D2917: and     r10d, 3Fh
 * 00000001402D291B: cmovz   r10d, r14d
 * 00000001402D291F: add     ebx, 0FFFFFFFFh
 * 00000001402D2922: jnz     short loc_1402D28CE
 * 00000001402D2924: lea     edx, [rbx+18h]
 * 00000001402D2927: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D292E: lea     ebx, [rdx-15h]
 * 00000001402D2931: mov     r13d, 0FFFFFFF8h
 * 00000001402D2937: mov     r11d, ebx
 * 00000001402D293A: xor     r8, [r9]
 * 00000001402D293D: mov     ecx, r10d
 * 00000001402D2940: rol     r8, cl
 * 00000001402D2943: add     r9, 8
 * 00000001402D2947: add     edx, r13d
 * 00000001402D294A: sub     r11, r14
 * 00000001402D294D: jnz     short loc_1402D293A
 * 00000001402D294F: test    edx, edx
 * 00000001402D2951: jz      short loc_1402D2968
 * 00000001402D2953: movzx   eax, byte ptr [r9]
 * 00000001402D2957: mov     ecx, r10d
 * 00000001402D295A: xor     r8, rax
 * 00000001402D295D: add     r9, r14
 * 00000001402D2960: rol     r8, cl
 * 00000001402D2963: add     edx, 0FFFFFFFFh
 * 00000001402D2966: jnz     short loc_1402D2953
 * 00000001402D2968: mov     [r12+0C4h], esi
 * 00000001402D2970: cmp     [r12+8B8h], r8
 * 00000001402D2978: jz      loc_1402D2A03
 * 00000001402D297E: mov     rax, [r12+588h]
 * 00000001402D2986: mov     ecx, [r12+684h]
 * 00000001402D298E: mov     [rax], r12
 * 00000001402D2991: mov     [rax+10h], ecx
 * 00000001402D2994: mov     eax, [r12+790h]
 * 00000001402D299C: mov     rdx, [r12+8B8h]
 * 00000001402D29A4: test    eax, eax
 * 00000001402D29A6: jnz     short loc_1402D2A03
 * 00000001402D29A8: mov     rax, [r12+588h]
 * 00000001402D29B0: mov     rcx, r8
 * 00000001402D29B3: xor     rcx, rdx
 * 00000001402D29B6: mov     [rax+18h], rcx
 * 00000001402D29BA: mov     eax, [r12+790h]
 * 00000001402D29C2: test    eax, eax
 * 00000001402D29C4: jnz     short loc_1402D2A03
 * 00000001402D29C6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D29D0: add     rax, r12
 * 00000001402D29D3: mov     [r12+798h], rax
 * 00000001402D29DB: xor     eax, eax
 * 00000001402D29DD: mov     [r12+7A0h], rax
 * 00000001402D29E5: mov     qword ptr [r12+7A8h], 109h
 * 00000001402D29F1: mov     [r12+7B0h], r8
 * 00000001402D29F9: mov     [r12+790h], r14d
 * 00000001402D2A01: jmp     short loc_1402D2A05
 * 00000001402D2A03: xor     eax, eax
 * 00000001402D2A05: mov     ecx, [r12+808h]
 * 00000001402D2A0D: mov     rsi, r12
 * 00000001402D2A10: mov     [rbp+2250h+var_2220], r12
 * 00000001402D2A14: mov     [rbp+2250h+var_21FC], eax
 * 00000001402D2A17: mov     [rbp+2250h+var_2234], eax
 * 00000001402D2A1A: cmp     ecx, 0FFFFFFFFh
 * 00000001402D2A1D: jz      loc_1402D2B0D
 * 00000001402D2A23: mov     rax, [r12+278h]
 * 00000001402D2A2B: call    KeGuardDispatchICall
 * 00000001402D2A30: mov     rbx, rax
 * 00000001402D2A33: test    rax, rax
 * 00000001402D2A36: jnz     short loc_1402D2A53
 * 00000001402D2A38: mov     rax, [r12+280h]
 * 00000001402D2A40: xor     ecx, ecx
 * 00000001402D2A42: call    KeGuardDispatchICall
 * 00000001402D2A47: mov     rbx, rax
 * 00000001402D2A4A: test    rax, rax
 * 00000001402D2A4D: jz      loc_1402D2B08
 * 00000001402D2A53: mov     rax, [r12+290h]
 * 00000001402D2A5B: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402D2A62: mov     rcx, rbx
 * 00000001402D2A65: call    KeGuardDispatchICall
 * 00000001402D2A6A: mov     r14d, eax
 * 00000001402D2A6D: test    eax, eax
 * 00000001402D2A6F: jns     short loc_1402D2A85
 * 00000001402D2A71: mov     rax, [r12+288h]
 * 00000001402D2A79: mov     rcx, rbx
 * 00000001402D2A7C: call    KeGuardDispatchICall
 * 00000001402D2A81: xor     eax, eax
 * 00000001402D2A83: jmp     short loc_1402D2AF4
 * 00000001402D2A85: mov     [r12+818h], rbx
 * 00000001402D2A8D: mov     rax, [r12+2B8h]
 * 00000001402D2A95: call    KeGuardDispatchICall
 * 00000001402D2A9A: mov     rbx, rax
 * 00000001402D2A9D: mov     rax, [r12+2D8h]
 * 00000001402D2AA5: mov     rcx, rbx
 * 00000001402D2AA8: call    KeGuardDispatchICall
 * 00000001402D2AAD: mov     rdx, rax
 * 00000001402D2AB0: test    rax, rax
 * 00000001402D2AB3: jnz     short loc_1402D2ABA
 * 00000001402D2AB5: mov     ecx, r15d
 * 00000001402D2AB8: jmp     short loc_1402D2ACE
 * 00000001402D2ABA: mov     rax, [r12+2E8h]
 * 00000001402D2AC2: mov     rcx, rbx
 * 00000001402D2AC5: call    KeGuardDispatchICall
 * 00000001402D2ACA: xor     eax, eax
 * 00000001402D2ACC: mov     ecx, eax
 * 00000001402D2ACE: mov     eax, [r12+82Ch]
 * 00000001402D2AD6: and     eax, 0FFFFFFFBh
 * 00000001402D2AD9: or      eax, ecx
 * 00000001402D2ADB: mov     [r12+82Ch], eax
 * 00000001402D2AE3: add     dword ptr [r12+6C8h], 10000h
 * 00000001402D2AEF: xor     eax, eax
 * 00000001402D2AF1: mov     r14d, eax
 * 00000001402D2AF4: test    r14d, r14d
 * 00000001402D2AF7: js      short loc_1402D2B08
 * 00000001402D2AF9: mov     r14d, 1
 * 00000001402D2AFF: mov     [rbp+2250h+var_2234], r14d
 * 00000001402D2B03: jmp     loc_1402D2D3D
 * 00000001402D2B08: mov     ebx, 3
 * 00000001402D2B0D: mov     eax, [r12+82Ch]
 * 00000001402D2B15: test    al, 8
 * 00000001402D2B17: jz      loc_1402D2D32
 * 00000001402D2B1D: bt      eax, 0Ch
 * 00000001402D2B21: jb      loc_1402D2D32
 * 00000001402D2B27: rdtsc
 * 00000001402D2B29: shl     rdx, 20h
 * 00000001402D2B2D: mov     r15, 7010008004002001h
 * 00000001402D2B37: or      rax, rdx
 * 00000001402D2B3A: mov     rcx, rax
 * 00000001402D2B3D: ror     rax, 3
 * 00000001402D2B41: xor     rcx, rax
 * 00000001402D2B44: mov     rax, r15
 * 00000001402D2B47: mul     rcx
 * 00000001402D2B4A: mov     [rbp+2250h+var_19E0], rdx
 * 00000001402D2B51: xor     dl, al
 * 00000001402D2B53: test    bl, dl
 * 00000001402D2B55: jnz     loc_1402D2D32
 * 00000001402D2B5B: mov     rax, [r12+510h]
 * 00000001402D2B63: mov     r14d, [rax+2Ch]
 * 00000001402D2B67: test    r14d, r14d
 * 00000001402D2B6A: jz      short loc_1402D2B97
 * 00000001402D2B6C: rdtsc
 * 00000001402D2B6E: shl     rdx, 20h
 * 00000001402D2B72: or      rax, rdx
 * 00000001402D2B75: mov     rcx, rax
 * 00000001402D2B78: ror     rax, 3
 * 00000001402D2B7C: xor     rcx, rax
 * 00000001402D2B7F: mov     rax, r15
 * 00000001402D2B82: mul     rcx
 * 00000001402D2B85: mov     [rbp+2250h+var_19D8], rdx
 * 00000001402D2B8C: xor     rax, rdx
 * 00000001402D2B8F: xor     edx, edx
 * 00000001402D2B91: div     r14
 * 00000001402D2B94: mov     r14, rdx
 * 00000001402D2B97: mov     rax, [r12+3B0h]
 * 00000001402D2B9F: xor     ecx, ecx
 * 00000001402D2BA1: call    KeGuardDispatchICall
 * 00000001402D2BA6: mov     rbx, rax
 * 00000001402D2BA9: xor     eax, eax
 * 00000001402D2BAB: test    rbx, rbx
 * 00000001402D2BAE: jz      short loc_1402D2C09
 * 00000001402D2BB0: test    r14d, r14d
 * 00000001402D2BB3: jz      short loc_1402D2BD0
 * 00000001402D2BB5: mov     rax, [r12+3B0h]
 * 00000001402D2BBD: mov     rcx, rbx
 * 00000001402D2BC0: dec     r14d
 * 00000001402D2BC3: call    KeGuardDispatchICall
 * 00000001402D2BC8: mov     rbx, rax
 * 00000001402D2BCB: test    rax, rax
 * 00000001402D2BCE: jnz     short loc_1402D2BB0
 * 00000001402D2BD0: mov     rsi, r12
 * 00000001402D2BD3: test    rbx, rbx
 * 00000001402D2BD6: jz      short loc_1402D2C02
 * 00000001402D2BD8: mov     rax, [r12+3A0h]
 * 00000001402D2BE0: mov     rcx, rbx
 * 00000001402D2BE3: call    KeGuardDispatchICall
 * 00000001402D2BE8: test    eax, eax
 * 00000001402D2BEA: jns     short loc_1402D2C02
 * 00000001402D2BEC: mov     rax, [r12+3B8h]
 * 00000001402D2BF4: mov     rcx, rbx
 * 00000001402D2BF7: call    KeGuardDispatchICall
 * 00000001402D2BFC: xor     eax, eax
 * 00000001402D2BFE: mov     ebx, eax
 * 00000001402D2C00: jmp     short loc_1402D2C04
 * 00000001402D2C02: xor     eax, eax
 * 00000001402D2C04: test    rbx, rbx
 * 00000001402D2C07: jnz     short loc_1402D2C13
 * 00000001402D2C09: mov     [rbp+2250h+var_21FC], eax
 * 00000001402D2C0C: xor     eax, eax
 * 00000001402D2C0E: jmp     loc_1402D2D37
 * 00000001402D2C13: mov     rax, [r12+438h]
 * 00000001402D2C1B: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402D2C22: mov     rcx, rbx
 * 00000001402D2C25: call    KeGuardDispatchICall
 * 00000001402D2C2A: mov     rax, [r12+1C0h]
 * 00000001402D2C32: lea     rdx, [rbp+2250h+var_1250]
 * 00000001402D2C39: xor     r9d, r9d
 * 00000001402D2C3C: xor     r8d, r8d
 * 00000001402D2C3F: mov     rcx, rbx
 * 00000001402D2C42: call    KeGuardDispatchICall
 * 00000001402D2C47: rdtsc
 * 00000001402D2C49: shl     rdx, 20h
 * 00000001402D2C4D: or      rax, rdx
 * 00000001402D2C50: mov     rcx, rax
 * 00000001402D2C53: ror     rax, 3
 * 00000001402D2C57: xor     rcx, rax
 * 00000001402D2C5A: mov     rax, r15
 * 00000001402D2C5D: mul     rcx
 * 00000001402D2C60: lea     rcx, [rbp+2250h+var_1250]
 * 00000001402D2C67: mov     rbx, rdx
 * 00000001402D2C6A: mov     [rbp+2250h+var_19D0], rdx
 * 00000001402D2C71: xor     rbx, rax
 * 00000001402D2C74: mov     rax, [r12+1B8h]
 * 00000001402D2C7C: call    KeGuardDispatchICall
 * 00000001402D2C81: mov     ecx, eax
 * 00000001402D2C83: xor     edx, edx
 * 00000001402D2C85: mov     rax, rbx
 * 00000001402D2C88: div     rcx
 * 00000001402D2C8B: mov     rcx, gs:188h
 * 00000001402D2C94: mov     rax, [r12+1C8h]
 * 00000001402D2C9C: mov     rbx, rdx
 * 00000001402D2C9F: lea     rdx, [rbp+2250h+var_1D00]
 * 00000001402D2CA6: call    KeGuardDispatchICall
 * 00000001402D2CAB: mov     rax, [r12+1A8h]
 * 00000001402D2CB3: lea     rdx, [rbp+2250h+var_1250]
 * 00000001402D2CBA: lea     rcx, [rbp+2250h+var_1880]
 * 00000001402D2CC1: call    KeGuardDispatchICall
 * 00000001402D2CC6: jmp     short loc_1402D2CCE
 * 00000001402D2CC8: test    ebx, ebx
 * 00000001402D2CCA: jz      short loc_1402D2CEF
 * 00000001402D2CCC: dec     ebx
 * 00000001402D2CCE: mov     rax, [r12+1B0h]
 * 00000001402D2CD6: lea     rdx, [rbp+2250h+var_1880]
 * 00000001402D2CDD: lea     rcx, [rbp+2250h+var_20B4]
 * 00000001402D2CE4: call    KeGuardDispatchICall
 * 00000001402D2CE9: test    eax, eax
 * 00000001402D2CEB: jns     short loc_1402D2CC8
 * 00000001402D2CED: jmp     short loc_1402D2D09
 * 00000001402D2CEF: mov     rax, [r12+1A0h]
 * 00000001402D2CF7: lea     rcx, [rbp+2250h+var_1D00]
 * 00000001402D2CFE: mov     edx, [rbp+2250h+var_20B4]
 * 00000001402D2D04: call    KeGuardDispatchICall
 * 00000001402D2D09: mov     rax, [r12+1D0h]
 * 00000001402D2D11: lea     rdx, [rbp+2250h+var_18A0]
 * 00000001402D2D18: lea     rcx, [rbp+2250h+var_1D00]
 * 00000001402D2D1F: call    KeGuardDispatchICall
 * 00000001402D2D24: mov     r14d, 1
 * 00000001402D2D2A: xor     eax, eax
 * 00000001402D2D2C: mov     [rbp+2250h+var_21FC], r14d
 * 00000001402D2D30: jmp     short loc_1402D2D3D
 * 00000001402D2D32: xor     eax, eax
 * 00000001402D2D34: mov     [rbp+2250h+var_21FC], eax
 * 00000001402D2D37: mov     r14d, 1
 * 00000001402D2D3D: mov     [rbp+2250h+var_20A0], rax
 * 00000001402D2D44: mov     ecx, 4
 * 00000001402D2D49: lea     rax, [rbp+2250h+var_2098]
 * 00000001402D2D50: xor     r15d, r15d
 * 00000001402D2D53: mov     [rax], r15b
 * 00000001402D2D56: add     rax, r14
 * 00000001402D2D59: add     ecx, 0FFFFFFFFh
 * 00000001402D2D5C: jnz     short loc_1402D2D53
 * 00000001402D2D5E: mov     ecx, [r12+6C0h]
 * 00000001402D2D66: mov     r11d, 6
 * 00000001402D2D6C: mov     rdx, [rsp+11A0h+arg_0]
 * 00000001402D2D74: add     r12, 6CCh
 * 00000001402D2D7B: mov     [rbp+2250h+var_21C0], r12
 * 00000001402D2D82: mov     r13d, 8000h
 * 00000001402D2D88: mov     [rbp+2250h+var_2210], 0C000009Ah
 * 00000001402D2D8F: lea     r10d, [r11-1]
 * 00000001402D2D93: mov     eax, [r12]
 * 00000001402D2D97: cmp     [rdx+6C8h], eax
 * 00000001402D2D9D: jge     loc_1402DD328
 * 00000001402D2DA3: mov     r14d, [rbp+2250h+var_1E98]
 * 00000001402D2DAA: lea     edx, [r11-5]
 * 00000001402D2DAE: mov     ebx, [rbp+2250h+var_1E18]
 * 00000001402D2DB4: mov     [rbp+2250h+var_2228], r14d
 * 00000001402D2DB8: mov     [rbp+2250h+var_2190], ebx
 * 00000001402D2DBE: mov     eax, [rsi+828h]
 * 00000001402D2DC4: mov     r8d, 110000h
 * 00000001402D2DCA: and     eax, r8d
 * 00000001402D2DCD: cmp     eax, r8d
 * 00000001402D2DD0: jz      short loc_1402D2DD9
 * 00000001402D2DD2: xor     eax, eax
 * 00000001402D2DD4: mov     dr7, rax
 * 00000001402D2DD7: jmp     short loc_1402D2DDB
 * 00000001402D2DD9: xor     eax, eax
 * 00000001402D2DDB: cmp     ecx, [rsi+6ACh]
 * 00000001402D2DE1: jnz     short loc_1402D2E19
 * 00000001402D2DE3: add     [rsi+6D0h], edx
 * 00000001402D2DE9: mov     ecx, eax
 * 00000001402D2DEB: cmp     dword ptr [rsi+7ECh], 0Bh
 * 00000001402D2DF2: jnz     short loc_1402D2E19
 * 00000001402D2DF4: mov     eax, [rsi+828h]
 * 00000001402D2DFA: test    dl, al
 * 00000001402D2DFC: jnz     short loc_1402D2E19
 * 00000001402D2DFE: cmp     dword ptr [rsi+808h], 0FFFFFFFFh
 * 00000001402D2E05: jnz     short loc_1402D2E11
 * 00000001402D2E07: xor     eax, eax
 * 00000001402D2E09: mov     [rsi+808h], eax
 * 00000001402D2E0F: jmp     short loc_1402D2E19
 * 00000001402D2E11: or      eax, edx
 * 00000001402D2E13: mov     [rsi+828h], eax
 * 00000001402D2E19: mov     rax, [rsi+900h]
 * 00000001402D2E20: mov     r9, rsi
 * 00000001402D2E23: test    rax, rax
 * 00000001402D2E26: mov     [rbp+2250h+var_21F8], ecx
 * 00000001402D2E29: cmovnz  r9, rax
 * 00000001402D2E2D: xor     eax, eax
 * 00000001402D2E2F: mov     [rbp+2250h+var_2250], r9
 * 00000001402D2E33: mov     r8d, eax
 * 00000001402D2E36: mov     r13d, [r9+6A8h]
 * 00000001402D2E3D: add     r13, r9
 * 00000001402D2E40: mov     [rbp+2250h+var_2240], r13
 * 00000001402D2E44: cmp     dword ptr [rbp+2250h+var_20A0], eax
 * 00000001402D2E4A: jz      short loc_1402D2E69
 * 00000001402D2E4C: cmp     dword ptr [rbp+2250h+var_20A0+4], ecx
 * 00000001402D2E52: ja      short loc_1402D2E69
 * 00000001402D2E54: mov     r13d, [rbp+2250h+var_2098]
 * 00000001402D2E5B: mov     r8d, dword ptr [rbp+2250h+var_20A0+4]
 * 00000001402D2E62: add     r13, r9
 * 00000001402D2E65: mov     [rbp+2250h+var_2240], r13
 * 00000001402D2E69: mov     edx, 1
 * 00000001402D2E6E: cmp     r8d, ecx
 * 00000001402D2E71: jz      loc_1402D2FA9
 * 00000001402D2E77: sub     ecx, r8d
 * 00000001402D2E7A: lea     esi, [rdx+2]
 * 00000001402D2E7D: mov     r10d, ecx
 * 00000001402D2E80: lea     edi, [rdx+0Bh]
 * 00000001402D2E83: add     r8d, ecx
 * 00000001402D2E86: lea     r14d, [rdx+1]
 * 00000001402D2E8A: mov     ebx, 0FFFh
 * 00000001402D2E8F: mov     r9, 0AAAAAAAAAAAAAAABh
 * 00000001402D2E99: mov     ecx, [r13+0]
 * 00000001402D2E9D: cmp     ecx, edi
 * 00000001402D2E9F: jg      short loc_1402D2EE5
 * 00000001402D2EA1: jz      short loc_1402D2EFE
 * 00000001402D2EA3: sub     ecx, 1
 * 00000001402D2EA6: jz      short loc_1402D2EFE
 * 00000001402D2EA8: sub     ecx, r11d
 * 00000001402D2EAB: jz      short loc_1402D2ED3
 * 00000001402D2EAD: sub     ecx, 1
 * 00000001402D2EB0: jz      short loc_1402D2EC9
 * 00000001402D2EB2: cmp     ecx, r14d
 * 00000001402D2EB5: jnz     loc_1402D2F3B
 * 00000001402D2EBB: mov     eax, [r13+1Ch]
 * 00000001402D2EBF: add     eax, esi
 * 00000001402D2EC1: shl     eax, 4
 * 00000001402D2EC4: jmp     loc_1402D2F73
 * 00000001402D2EC9: movzx   eax, word ptr [r13+20h]
 * 00000001402D2ECE: jmp     loc_1402D2F6D
 * 00000001402D2ED3: mov     eax, [r13+18h]
 * 00000001402D2ED7: add     eax, r14d
 * 00000001402D2EDA: lea     eax, [rax+rax*2]
 * 00000001402D2EDD: shl     eax, 3
 * 00000001402D2EE0: jmp     loc_1402D2F73
 * 00000001402D2EE5: cmp     ecx, 1Ch
 * 00000001402D2EE8: jz      short loc_1402D2F68
 * 00000001402D2EEA: cmp     ecx, 1Eh
 * 00000001402D2EED: jz      short loc_1402D2F42
 * 00000001402D2EEF: cmp     ecx, 20h ; ' '
 * 00000001402D2EF2: jle     short loc_1402D2F3B
 * 00000001402D2EF4: cmp     ecx, 22h ; '"'
 * 00000001402D2EF7: jle     short loc_1402D2F1A
 * 00000001402D2EF9: cmp     ecx, 2Bh ; '+'
 * 00000001402D2EFC: jnz     short loc_1402D2F3B
 * 00000001402D2EFE: mov     ecx, [r13+10h]
 * 00000001402D2F02: mov     rax, r9
 * 00000001402D2F05: mul     rcx
 * 00000001402D2F08: shr     rdx, 3
 * 00000001402D2F0C: lea     eax, ds:30h[rdx*4]
 * 00000001402D2F13: mov     edx, 1
 * 00000001402D2F18: jmp     short loc_1402D2F73
 * 00000001402D2F1A: mov     ecx, [r13+20h]
 * 00000001402D2F1E: mov     edx, [r13+28h]
 * 00000001402D2F22: and     rcx, rbx
 * 00000001402D2F25: add     rdx, rbx
 * 00000001402D2F28: add     rdx, rcx
 * 00000001402D2F2B: shr     rdx, 0Ch
 * 00000001402D2F2F: lea     eax, [rdx+rdx*4]
 * 00000001402D2F32: lea     eax, ds:30h[rax*4]
 * 00000001402D2F39: jmp     short loc_1402D2F13
 * 00000001402D2F3B: mov     eax, 30h ; '0'
 * 00000001402D2F40: jmp     short loc_1402D2F73
 * 00000001402D2F42: mov     ecx, [r13+24h]
 * 00000001402D2F46: mov     rax, r9
 * 00000001402D2F49: sub     ecx, edx
 * 00000001402D2F4B: mul     rcx
 * 00000001402D2F4E: movzx   eax, word ptr [r13+28h]
 * 00000001402D2F53: shr     rdx, 3
 * 00000001402D2F57: add     edx, 7
 * 00000001402D2F5A: and     edx, 0FFFFFFF8h
 * 00000001402D2F5D: add     eax, r14d
 * 00000001402D2F60: lea     eax, [rax+rax*2]
 * 00000001402D2F63: lea     eax, [rdx+rax*8]
 * 00000001402D2F66: jmp     short loc_1402D2F13
 * 00000001402D2F68: movzx   eax, word ptr [r13+28h]
 * 00000001402D2F6D: add     eax, 37h ; '7'
 * 00000001402D2F70: and     eax, 0FFFFFFF8h
 * 00000001402D2F73: add     r13, rax
 * 00000001402D2F76: sub     r10, rdx
 * 00000001402D2F79: jnz     loc_1402D2E99
 * 00000001402D2F7F: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D2F83: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D2F8A: mov     r9, [rbp+2250h+var_2250]
 * 00000001402D2F8E: mov     r10d, 5
 * 00000001402D2F94: mov     r12, [rbp+2250h+var_21C0]
 * 00000001402D2F9B: mov     ebx, [rbp+2250h+var_2190]
 * 00000001402D2FA1: mov     r14d, [rbp+2250h+var_2228]
 * 00000001402D2FA5: mov     [rbp+2250h+var_2240], r13
 * 00000001402D2FA9: mov     eax, r13d
 * 00000001402D2FAC: mov     dword ptr [rbp+2250h+var_20A0], edx
 * 00000001402D2FB2: sub     eax, r9d
 * 00000001402D2FB5: mov     dword ptr [rbp+2250h+var_20A0+4], r8d
 * 00000001402D2FBC: mov     [rbp+2250h+var_2098], eax
 * 00000001402D2FC2: mov     r15d, [r13+0]
 * 00000001402D2FC6: mov     [rbp+2250h+var_2238], r15d
 * 00000001402D2FCA: cmp     r15d, 1Bh
 * 00000001402D2FCE: jg      loc_1402D7882
 * 00000001402D2FD4: jz      loc_1402D76ED
 * 00000001402D2FDA: cmp     r15d, 0Bh
 * 00000001402D2FDE: jg      loc_1402D43E7
 * 00000001402D2FE4: jz      loc_1402D40E8
 * 00000001402D2FEA: xor     eax, eax
 * 00000001402D2FEC: mov     ecx, r15d
 * 00000001402D2FEF: test    r15d, r15d
 * 00000001402D2FF2: jz      loc_1402D3E76
 * 00000001402D2FF8: sub     ecx, 1
 * 00000001402D2FFB: jz      loc_1402DB3A4
 * 00000001402D3001: lea     ebx, [rax+3]
 * 00000001402D3004: sub     ecx, ebx
 * 00000001402D3006: jz      loc_1402D3C35
 * 00000001402D300C: sub     ecx, 1
 * 00000001402D300F: jz      loc_1402D394A
 * 00000001402D3015: lea     r14d, [rax+2]
 * 00000001402D3019: sub     ecx, r14d
 * 00000001402D301C: jz      loc_1402D37EA
 * 00000001402D3022: sub     ecx, 1
 * 00000001402D3025: jz      loc_1402D33D7
 * 00000001402D302B: cmp     ecx, r14d
 * 00000001402D302E: jnz     loc_1402DC52E
 * 00000001402D3034: cmp     [r13+18h], eax
 * 00000001402D3038: jz      short loc_1402D3079
 * 00000001402D303A: cmp     [rsi+818h], rax
 * 00000001402D3041: jz      loc_1402D31CB
 * 00000001402D3047: mov     ecx, [rsi+82Ch]
 * 00000001402D304D: test    cl, 4
 * 00000001402D3050: jnz     loc_1402D31CB
 * 00000001402D3056: lea     rax, [rsi+6C4h]
 * 00000001402D305D: xor     edx, edx
 * 00000001402D305F: cmp     [rax], edx
 * 00000001402D3061: jnz     loc_1402D31BB
 * 00000001402D3067: mov     eax, ecx
 * 00000001402D3069: shl     eax, 3
 * 00000001402D306C: xor     eax, ecx
 * 00000001402D306E: and     eax, 20h
 * 00000001402D3071: xor     eax, ecx
 * 00000001402D3073: mov     [rsi+82Ch], eax
 * 00000001402D3079: mov     ecx, [r13+1Ch]
 * 00000001402D307D: lea     rax, [rsi+6C4h]
 * 00000001402D3084: mov     ebx, [rax]
 * 00000001402D3086: lea     rdx, [r13+30h]
 * 00000001402D308A: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D308E: shl     rbx, 4
 * 00000001402D3092: add     rbx, rdx
 * 00000001402D3095: shl     rcx, 4
 * 00000001402D3099: add     rcx, rdx
 * 00000001402D309C: mov     [rbp+2250h+var_21E0], rax
 * 00000001402D30A0: mov     [rbp+2250h+var_2250], rcx
 * 00000001402D30A4: xor     eax, eax
 * 00000001402D30A6: cmp     [rbx], eax
 * 00000001402D30A8: jl      loc_1402D3335
 * 00000001402D30AE: mov     r13, [rbx+8]
 * 00000001402D30B2: mov     r8d, [rbx+4]
 * 00000001402D30B6: mov     r9, r13
 * 00000001402D30B9: add     [rsi+6C8h], r8d
 * 00000001402D30C0: mov     rax, r13
 * 00000001402D30C3: mov     r11d, [rsi+6B4h]
 * 00000001402D30CA: mov     r12d, r8d
 * 00000001402D30CD: mov     r15, [rsi+6B8h]
 * 00000001402D30D4: lea     rcx, [r8+r13]
 * 00000001402D30D8: mov     [rbp+2250h+var_2208], r13
 * 00000001402D30DC: cmp     r13, rcx
 * 00000001402D30DF: jnb     short loc_1402D30F1
 * 00000001402D30E1: mov     edx, 40h ; '@'
 * 00000001402D30E6: prefetchnta byte ptr [rax]
 * 00000001402D30E9: add     rax, rdx
 * 00000001402D30EC: cmp     rax, rcx
 * 00000001402D30EF: jb      short loc_1402D30E6
 * 00000001402D30F1: mov     r10d, r8d
 * 00000001402D30F4: mov     r14, r15
 * 00000001402D30F7: shr     r10d, 7
 * 00000001402D30FB: test    r10d, r10d
 * 00000001402D30FE: jz      short loc_1402D316E
 * 00000001402D3100: mov     r12, 7010008004002001h
 * 00000001402D310A: mov     edx, 8
 * 00000001402D310F: lea     esi, [rdx-7]
 * 00000001402D3112: mov     rax, [r9]
 * 00000001402D3115: mov     ecx, r11d
 * 00000001402D3118: xor     rax, r14
 * 00000001402D311B: mov     r14, [r9+8]
 * 00000001402D311F: rol     rax, cl
 * 00000001402D3122: add     r9, 10h
 * 00000001402D3126: xor     r14, rax
 * 00000001402D3129: rol     r14, cl
 * 00000001402D312C: sub     rdx, rsi
 * 00000001402D312F: jnz     short loc_1402D3112
 * 00000001402D3131: mov     rcx, r9
 * 00000001402D3134: sub     rcx, r13
 * 00000001402D3137: xor     rcx, r15
 * 00000001402D313A: mov     rax, rcx
 * 00000001402D313D: rol     rax, 11h
 * 00000001402D3141: xor     rcx, rax
 * 00000001402D3144: mov     rax, r12
 * 00000001402D3147: mul     rcx
 * 00000001402D314A: xor     eax, edx
 * 00000001402D314C: mov     [rbp+2250h+var_19C8], rdx
 * 00000001402D3153: xor     r11d, eax
 * 00000001402D3156: mov     rax, rsi
 * 00000001402D3159: and     r11d, 3Fh
 * 00000001402D315D: cmovz   r11d, eax
 * 00000001402D3161: add     r10d, 0FFFFFFFFh
 * 00000001402D3165: jnz     short loc_1402D310A
 * 00000001402D3167: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D316B: mov     r12, r8
 * 00000001402D316E: and     r8d, 7Fh
 * 00000001402D3172: mov     r10d, 1
 * 00000001402D3178: cmp     r8d, 8
 * 00000001402D317C: jb      short loc_1402D319B
 * 00000001402D317E: mov     edx, r8d
 * 00000001402D3181: shr     rdx, 3
 * 00000001402D3185: xor     r14, [r9]
 * 00000001402D3188: mov     ecx, r11d
 * 00000001402D318B: rol     r14, cl
 * 00000001402D318E: add     r9, 8
 * 00000001402D3192: add     r8d, 0FFFFFFF8h
 * 00000001402D3196: sub     rdx, r10
 * 00000001402D3199: jnz     short loc_1402D3185
 * 00000001402D319B: test    r8d, r8d
 * 00000001402D319E: jz      short loc_1402D31B6
 * 00000001402D31A0: movzx   eax, byte ptr [r9]
 * 00000001402D31A4: mov     ecx, r11d
 * 00000001402D31A7: xor     r14, rax
 * 00000001402D31AA: add     r9, r10
 * 00000001402D31AD: rol     r14, cl
 * 00000001402D31B0: add     r8d, 0FFFFFFFFh
 * 00000001402D31B4: jnz     short loc_1402D31A0
 * 00000001402D31B6: mov     rax, r14
 * 00000001402D31B9: jmp     short loc_1402D31DC
 * 00000001402D31BB: test    cl, 20h
 * 00000001402D31BE: jz      loc_1402D3079
 * 00000001402D31C4: mov     ebx, edx
 * 00000001402D31C6: jmp     loc_1402D3373
 * 00000001402D31CB: mov     ebx, eax
 * 00000001402D31CD: lea     rax, [rsi+6C4h]
 * 00000001402D31D4: jmp     loc_1402D3373
 * 00000001402D31D9: xor     r14d, eax
 * 00000001402D31DC: shr     rax, 1Fh
 * 00000001402D31E0: test    rax, rax
 * 00000001402D31E3: jnz     short loc_1402D31D9
 * 00000001402D31E5: mov     ecx, [rbx]
 * 00000001402D31E7: btr     r14d, 1Fh
 * 00000001402D31EC: mov     eax, ecx
 * 00000001402D31EE: btr     eax, 1Fh
 * 00000001402D31F2: cmp     r14d, eax
 * 00000001402D31F5: jz      loc_1402D332A
 * 00000001402D31FB: test    r12, r12
 * 00000001402D31FE: jz      loc_1402D32BD
 * 00000001402D3204: mov     eax, [rsi+82Ch]
 * 00000001402D320A: mov     edx, 40h ; '@'
 * 00000001402D320F: test    dl, al
 * 00000001402D3211: jz      loc_1402D32BD
 * 00000001402D3217: mov     r13, cr8
 * 00000001402D321B: lea     eax, [rdx-3Eh]
 * 00000001402D321E: mov     cr8, rax
 * 00000001402D3222: mov     rax, [rbp+2250h+var_2208]
 * 00000001402D3226: mov     ecx, 0FFFh
 * 00000001402D322B: mov     r15, rax
 * 00000001402D322E: dec     rax
 * 00000001402D3231: add     rax, r12
 * 00000001402D3234: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001402D323B: or      rax, rcx
 * 00000001402D323E: mov     [rbp+2250h+var_21B0], rax
 * 00000001402D3245: lea     rax, [r15-1]
 * 00000001402D3249: mov     [rbp+2250h+var_2248], rax
 * 00000001402D324D: movzx   r12d, r13b
 * 00000001402D3251: mov     rax, [rsi+468h]
 * 00000001402D3258: xor     edx, edx
 * 00000001402D325A: mov     rcx, r15
 * 00000001402D325D: call    KeGuardDispatchICall
 * 00000001402D3262: cmp     eax, 0C000022Dh
 * 00000001402D3267: jnz     short loc_1402D328D
 * 00000001402D3269: mov     eax, 1
 * 00000001402D326E: cmp     r13b, al
 * 00000001402D3271: ja      short loc_1402D3291
 * 00000001402D3273: movzx   r12d, r13b
 * 00000001402D3277: mov     cr8, r12
 * 00000001402D327B: mov     al, [r15]
 * 00000001402D327E: mov     rax, cr8
 * 00000001402D3282: mov     eax, 2
 * 00000001402D3287: mov     cr8, rax
 * 00000001402D328B: jmp     short loc_1402D3251
 * 00000001402D328D: test    eax, eax
 * 00000001402D328F: js      short loc_1402D32B3
 * 00000001402D3291: mov     rax, [rbp+2250h+var_2248]
 * 00000001402D3295: mov     ecx, 1000h
 * 00000001402D329A: add     rax, rcx
 * 00000001402D329D: add     r15, rcx
 * 00000001402D32A0: mov     [rbp+2250h+var_2248], rax
 * 00000001402D32A4: cmp     rax, [rbp+2250h+var_21B0]
 * 00000001402D32AB: jnz     short loc_1402D324D
 * 00000001402D32AD: mov     cr8, r12
 * 00000001402D32B1: jmp     short loc_1402D332A
 * 00000001402D32B3: mov     cr8, r12
 * 00000001402D32B7: mov     ecx, [rbx]
 * 00000001402D32B9: mov     r13, [rbp+2250h+var_2208]
 * 00000001402D32BD: mov     eax, ecx
 * 00000001402D32BF: mov     ecx, [rsi+790h]
 * 00000001402D32C5: btr     eax, 1Fh
 * 00000001402D32C9: test    ecx, ecx
 * 00000001402D32CB: jnz     short loc_1402D332A
 * 00000001402D32CD: mov     ecx, r14d
 * 00000001402D32D0: xor     rcx, rax
 * 00000001402D32D3: mov     rax, [rsi+588h]
 * 00000001402D32DA: mov     [rax+18h], rcx
 * 00000001402D32DE: mov     ecx, [rsi+790h]
 * 00000001402D32E4: test    ecx, ecx
 * 00000001402D32E6: jnz     short loc_1402D332A
 * 00000001402D32E8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D32F2: add     rax, rsi
 * 00000001402D32F5: mov     [rsi+798h], rax
 * 00000001402D32FC: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D3306: add     rax, rdi
 * 00000001402D3309: mov     [rsi+7A0h], rax
 * 00000001402D3310: movsxd  rax, dword ptr [rdi]
 * 00000001402D3313: mov     [rsi+7A8h], rax
 * 00000001402D331A: lea     eax, [rcx+1]
 * 00000001402D331D: mov     [rsi+7B0h], r13
 * 00000001402D3324: mov     [rsi+790h], eax
 * 00000001402D332A: mov     r12, [rbp+2250h+var_21C0]
 * 00000001402D3331: mov     rcx, [rbp+2250h+var_2250]
 * 00000001402D3335: add     rbx, 10h
 * 00000001402D3339: cmp     rbx, rcx
 * 00000001402D333C: jnb     short loc_1402D3351
 * 00000001402D333E: mov     eax, [r12]
 * 00000001402D3342: cmp     [rsi+6C8h], eax
 * 00000001402D3348: jl      loc_1402D30A4
 * 00000001402D334E: cmp     rbx, rcx
 * 00000001402D3351: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3358: jnz     short loc_1402D3360
 * 00000001402D335A: xor     eax, eax
 * 00000001402D335C: mov     ebx, eax
 * 00000001402D335E: jmp     short loc_1402D336F
 * 00000001402D3360: mov     rax, [rbp+2250h+var_2240]
 * 00000001402D3364: add     rax, 30h ; '0'
 * 00000001402D3368: sub     rbx, rax
 * 00000001402D336B: sar     rbx, 4
 * 00000001402D336F: mov     rax, [rbp+2250h+var_21E0]
 * 00000001402D3373: mov     [rax], ebx
 * 00000001402D3375: xor     r15d, r15d
 * 00000001402D3378: mov     r13d, 8000h
 * 00000001402D337E: mov     edx, [rbp+2250h+var_21F8]
 * 00000001402D3381: cmp     dword ptr [rsi+6C4h], 0
 * 00000001402D3388: lea     ecx, [rdx-1]
 * 00000001402D338B: cmovz   ecx, edx
 * 00000001402D338E: mov     edx, 1
 * 00000001402D3393: add     ecx, edx
 * 00000001402D3395: cmp     [rsi+790h], r15d
 * 00000001402D339C: jnz     loc_1402DD325
 * 00000001402D33A2: lea     r12, [rsi+6CCh]
 * 00000001402D33A9: mov     eax, [r12]
 * 00000001402D33AD: mov     [rbp+2250h+var_21C0], r12
 * 00000001402D33B4: cmp     [rsi+6C8h], eax
 * 00000001402D33BA: jge     loc_1402DD325
 * 00000001402D33C0: mov     ebx, [rbp+2250h+var_2190]
 * 00000001402D33C6: lea     r11d, [rdx+5]
 * 00000001402D33CA: mov     r14d, [rbp+2250h+var_2228]
 * 00000001402D33CE: lea     r10d, [rdx+4]
 * 00000001402D33D2: jmp     loc_1402D2DBE
 * 00000001402D33D7: mov     rcx, [r13+18h]
 * 00000001402D33DB: mov     r8, 0B3B74BDEE4453415h
 * 00000001402D33E5: movzx   eax, word ptr [r13+22h]
 * 00000001402D33EA: mov     r9, 0A3A03F5891C8B4E8h
 * 00000001402D33F4: cmp     [rcx+42h], ax
 * 00000001402D33F8: jz      short loc_1402D343C
 * 00000001402D33FA: xor     edx, edx
 * 00000001402D33FC: cmp     [rsi+790h], edx
 * 00000001402D3402: mov     edx, 1
 * 00000001402D3407: jnz     short loc_1402D343C
 * 00000001402D3409: lea     rax, [rsi+r9]
 * 00000001402D340D: mov     [rsi+798h], rax
 * 00000001402D3414: lea     rax, [r8+r13]
 * 00000001402D3418: mov     [rsi+7A0h], rax
 * 00000001402D341F: movsxd  rax, dword ptr [r13+0]
 * 00000001402D3423: mov     [rsi+7A8h], rax
 * 00000001402D342A: mov     [rsi+7B0h], rcx
 * 00000001402D3431: mov     [rsi+790h], edx
 * 00000001402D3437: movzx   eax, word ptr [r13+22h]
 * 00000001402D343C: mov     r11d, 40h ; '@'
 * 00000001402D3442: test    r11b, al
 * 00000001402D3445: jnz     short loc_1402D348B
 * 00000001402D3447: lea     rax, [rcx+0C8h]
 * 00000001402D344E: cmp     [rax], rax
 * 00000001402D3451: jz      short loc_1402D348B
 * 00000001402D3453: xor     eax, eax
 * 00000001402D3455: cmp     [rsi+790h], eax
 * 00000001402D345B: jnz     short loc_1402D348B
 * 00000001402D345D: lea     rax, [rsi+r9]
 * 00000001402D3461: mov     [rsi+798h], rax
 * 00000001402D3468: lea     rax, [r8+r13]
 * 00000001402D346C: mov     [rsi+7A0h], rax
 * 00000001402D3473: movsxd  rax, dword ptr [r13+0]
 * 00000001402D3477: mov     [rsi+7A8h], rax
 * 00000001402D347E: mov     [rsi+7B0h], rcx
 * 00000001402D3485: mov     [rsi+790h], edx
 * 00000001402D348B: mov     r14, [r13+8]
 * 00000001402D348F: mov     r8d, [r13+10h]
 * 00000001402D3493: mov     r9, r14
 * 00000001402D3496: add     [rsi+6C8h], r8d
 * 00000001402D349D: mov     rax, r14
 * 00000001402D34A0: mov     r10d, [rsi+6B4h]
 * 00000001402D34A7: mov     r15, [rsi+6B8h]
 * 00000001402D34AE: lea     rcx, [r14+r8]
 * 00000001402D34B2: cmp     r14, rcx
 * 00000001402D34B5: jnb     short loc_1402D34C2
 * 00000001402D34B7: prefetchnta byte ptr [rax]
 * 00000001402D34BA: add     rax, r11
 * 00000001402D34BD: cmp     rax, rcx
 * 00000001402D34C0: jb      short loc_1402D34B7
 * 00000001402D34C2: mov     r11d, r8d
 * 00000001402D34C5: mov     rbx, r15
 * 00000001402D34C8: shr     r11d, 7
 * 00000001402D34CC: test    r11d, r11d
 * 00000001402D34CF: jz      short loc_1402D3544
 * 00000001402D34D1: mov     rdi, 7010008004002001h
 * 00000001402D34DB: mov     edx, 8
 * 00000001402D34E0: lea     esi, [rdx-7]
 * 00000001402D34E3: mov     rax, [r9]
 * 00000001402D34E6: mov     ecx, r10d
 * 00000001402D34E9: xor     rax, rbx
 * 00000001402D34EC: mov     rbx, [r9+8]
 * 00000001402D34F0: rol     rax, cl
 * 00000001402D34F3: add     r9, 10h
 * 00000001402D34F7: xor     rbx, rax
 * 00000001402D34FA: rol     rbx, cl
 * 00000001402D34FD: sub     rdx, rsi
 * 00000001402D3500: jnz     short loc_1402D34E3
 * 00000001402D3502: mov     rcx, r9
 * 00000001402D3505: sub     rcx, r14
 * 00000001402D3508: xor     rcx, r15
 * 00000001402D350B: mov     rax, rcx
 * 00000001402D350E: rol     rax, 11h
 * 00000001402D3512: xor     rcx, rax
 * 00000001402D3515: mov     rax, rdi
 * 00000001402D3518: mul     rcx
 * 00000001402D351B: xor     r10d, eax
 * 00000001402D351E: mov     [rbp+2250h+var_19C0], rdx
 * 00000001402D3525: xor     r10d, edx
 * 00000001402D3528: mov     rdx, rsi
 * 00000001402D352B: and     r10d, 3Fh
 * 00000001402D352F: cmovz   r10d, edx
 * 00000001402D3533: add     r11d, 0FFFFFFFFh
 * 00000001402D3537: jnz     short loc_1402D34DB
 * 00000001402D3539: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D353D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3544: and     r8d, 7Fh
 * 00000001402D3548: cmp     r8d, 8
 * 00000001402D354C: jb      short loc_1402D3579
 * 00000001402D354E: mov     edx, r8d
 * 00000001402D3551: mov     esi, 1
 * 00000001402D3556: shr     rdx, 3
 * 00000001402D355A: xor     rbx, [r9]
 * 00000001402D355D: mov     ecx, r10d
 * 00000001402D3560: rol     rbx, cl
 * 00000001402D3563: add     r9, 8
 * 00000001402D3567: add     r8d, 0FFFFFFF8h
 * 00000001402D356B: sub     rdx, rsi
 * 00000001402D356E: jnz     short loc_1402D355A
 * 00000001402D3570: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D3574: mov     edx, 1
 * 00000001402D3579: test    r8d, r8d
 * 00000001402D357C: jz      short loc_1402D3594
 * 00000001402D357E: movzx   eax, byte ptr [r9]
 * 00000001402D3582: mov     ecx, r10d
 * 00000001402D3585: xor     rbx, rax
 * 00000001402D3588: add     r9, rdx
 * 00000001402D358B: rol     rbx, cl
 * 00000001402D358E: add     r8d, 0FFFFFFFFh
 * 00000001402D3592: jnz     short loc_1402D357E
 * 00000001402D3594: mov     rax, rbx
 * 00000001402D3597: jmp     short loc_1402D359B
 * 00000001402D3599: xor     ebx, eax
 * 00000001402D359B: shr     rax, 1Fh
 * 00000001402D359F: test    rax, rax
 * 00000001402D35A2: jnz     short loc_1402D3599
 * 00000001402D35A4: btr     ebx, 1Fh
 * 00000001402D35A8: mov     r12d, eax
 * 00000001402D35AB: cmp     ebx, [r13+14h]
 * 00000001402D35AF: jz      loc_1402D368C
 * 00000001402D35B5: cmp     [r13+0], eax
 * 00000001402D35B9: jnz     short loc_1402D35C3
 * 00000001402D35BB: cmp     [r13+18h], eax
 * 00000001402D35BF: cmovnz  r12d, edx
 * 00000001402D35C3: mov     ecx, [r13+10h]
 * 00000001402D35C7: mov     rdx, [r13+8]
 * 00000001402D35CB: test    rcx, rcx
 * 00000001402D35CE: jz      loc_1402D376E
 * 00000001402D35D4: mov     eax, [rsi+82Ch]
 * 00000001402D35DA: mov     r8d, 40h ; '@'
 * 00000001402D35E0: test    r8b, al
 * 00000001402D35E3: jz      loc_1402D376E
 * 00000001402D35E9: mov     r13, cr8
 * 00000001402D35ED: lea     eax, [r8-3Eh]
 * 00000001402D35F1: mov     cr8, rax
 * 00000001402D35F5: lea     rax, [rcx-1]
 * 00000001402D35F9: mov     r14, rdx
 * 00000001402D35FC: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D3603: add     rax, rdx
 * 00000001402D3606: mov     ecx, 0FFFh
 * 00000001402D360B: or      rax, rcx
 * 00000001402D360E: mov     [rbp+2250h+var_2248], rax
 * 00000001402D3612: lea     rax, [r14-1]
 * 00000001402D3616: mov     [rbp+2250h+var_2250], rax
 * 00000001402D361A: movzx   r15d, r13b
 * 00000001402D361E: mov     rax, [rsi+468h]
 * 00000001402D3625: xor     edx, edx
 * 00000001402D3627: mov     rcx, r14
 * 00000001402D362A: call    KeGuardDispatchICall
 * 00000001402D362F: cmp     eax, 0C000022Dh
 * 00000001402D3634: jnz     short loc_1402D3663
 * 00000001402D3636: test    r12d, r12d
 * 00000001402D3639: jnz     loc_1402D3766
 * 00000001402D363F: lea     eax, [r12+1]
 * 00000001402D3644: cmp     r13b, al
 * 00000001402D3647: ja      short loc_1402D366B
 * 00000001402D3649: movzx   r15d, r13b
 * 00000001402D364D: mov     cr8, r15
 * 00000001402D3651: mov     al, [r14]
 * 00000001402D3654: mov     rax, cr8
 * 00000001402D3658: lea     eax, [r12+2]
 * 00000001402D365D: mov     cr8, rax
 * 00000001402D3661: jmp     short loc_1402D361E
 * 00000001402D3663: test    eax, eax
 * 00000001402D3665: js      loc_1402D3766
 * 00000001402D366B: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D366F: mov     ecx, 1000h
 * 00000001402D3674: add     rax, rcx
 * 00000001402D3677: add     r14, rcx
 * 00000001402D367A: mov     [rbp+2250h+var_2250], rax
 * 00000001402D367E: cmp     rax, [rbp+2250h+var_2248]
 * 00000001402D3682: jnz     short loc_1402D361A
 * 00000001402D3684: mov     cr8, r15
 * 00000001402D3688: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D368C: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001402D3696: mov     r14, 0B3B74BDEE4453415h
 * 00000001402D36A0: mov     ebx, 1
 * 00000001402D36A5: lea     rax, [r13+30h]
 * 00000001402D36A9: xor     r9d, r9d
 * 00000001402D36AC: mov     [rbp+2250h+var_1E58], rax
 * 00000001402D36B3: lea     rcx, [rbp+2250h+var_1E60]
 * 00000001402D36BA: movzx   eax, word ptr [r13+20h]
 * 00000001402D36BF: xor     r8d, r8d
 * 00000001402D36C2: mov     [rbp+2250h+var_1E60], ax
 * 00000001402D36C9: xor     edx, edx
 * 00000001402D36CB: mov     [rbp+2250h+var_1E5E], ax
 * 00000001402D36D2: lea     rax, [rbp+2250h+var_1F00]
 * 00000001402D36D9: mov     [rsp+11A0h+var_1168], rax
 * 00000001402D36DE: xor     eax, eax
 * 00000001402D36E0: mov     [rsp+11A0h+var_1170], rax
 * 00000001402D36E5: mov     byte ptr [rsp+11A0h+var_1178], al
 * 00000001402D36E9: mov     rax, [rsi+500h]
 * 00000001402D36F0: mov     [rsp+11A0h+BugCheckParameter4], rax
 * 00000001402D36F5: mov     rax, [rsi+1E8h]
 * 00000001402D36FC: call    KeGuardDispatchICall
 * 00000001402D3701: test    eax, eax
 * 00000001402D3703: js      loc_1402D3375
 * 00000001402D3709: mov     rcx, [rbp+2250h+var_1F00]
 * 00000001402D3710: cmp     rcx, [r13+18h]
 * 00000001402D3714: jz      short loc_1402D3755
 * 00000001402D3716: xor     eax, eax
 * 00000001402D3718: cmp     [rsi+790h], eax
 * 00000001402D371E: jnz     short loc_1402D3755
 * 00000001402D3720: lea     rax, [rsi+r15]
 * 00000001402D3724: mov     [rsi+798h], rax
 * 00000001402D372B: lea     rax, [r14+r13]
 * 00000001402D372F: mov     [rsi+7A0h], rax
 * 00000001402D3736: movsxd  rax, dword ptr [r13+0]
 * 00000001402D373A: mov     [rsi+7A8h], rax
 * 00000001402D3741: mov     [rsi+7B0h], rcx
 * 00000001402D3748: mov     [rsi+790h], ebx
 * 00000001402D374E: mov     rcx, [rbp+2250h+var_1F00]
 * 00000001402D3755: mov     rax, [rsi+1E0h]
 * 00000001402D375C: call    KeGuardDispatchICall
 * 00000001402D3761: jmp     loc_1402D3375
 * 00000001402D3766: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D376A: mov     cr8, r15
 * 00000001402D376E: mov     eax, [rsi+790h]
 * 00000001402D3774: mov     edx, [r13+14h]
 * 00000001402D3778: test    eax, eax
 * 00000001402D377A: jnz     short loc_1402D3792
 * 00000001402D377C: mov     rax, [rsi+588h]
 * 00000001402D3783: mov     ecx, ebx
 * 00000001402D3785: xor     rcx, rdx
 * 00000001402D3788: mov     [rax+18h], rcx
 * 00000001402D378C: mov     eax, [rsi+790h]
 * 00000001402D3792: mov     rcx, [r13+8]
 * 00000001402D3796: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001402D37A0: mov     r14, 0B3B74BDEE4453415h
 * 00000001402D37AA: mov     ebx, 1
 * 00000001402D37AF: test    eax, eax
 * 00000001402D37B1: jnz     loc_1402D36A5
 * 00000001402D37B7: lea     rax, [rsi+r15]
 * 00000001402D37BB: mov     [rsi+798h], rax
 * 00000001402D37C2: lea     rax, [r14+r13]
 * 00000001402D37C6: mov     [rsi+7A0h], rax
 * 00000001402D37CD: movsxd  rax, dword ptr [r13+0]
 * 00000001402D37D1: mov     [rsi+7A8h], rax
 * 00000001402D37D8: mov     [rsi+7B0h], rcx
 * 00000001402D37DF: mov     [rsi+790h], ebx
 * 00000001402D37E5: jmp     loc_1402D36A5
 * 00000001402D37EA: mov     rax, [rsi+1A0h]
 * 00000001402D37F1: lea     rcx, [rbp+2250h+var_1970]
 * 00000001402D37F8: mov     edx, [r13+1Ch]
 * 00000001402D37FC: call    KeGuardDispatchICall
 * 00000001402D3801: mov     rax, [rsi+1D0h]
 * 00000001402D3808: lea     rdx, [rbp+2250h+var_1960]
 * 00000001402D380F: lea     rcx, [rbp+2250h+var_1970]
 * 00000001402D3816: call    KeGuardDispatchICall
 * 00000001402D381B: xor     eax, eax
 * 00000001402D381D: mov     r11d, eax
 * 00000001402D3820: cmp     [r13+18h], eax
 * 00000001402D3824: jbe     loc_1402D3925
 * 00000001402D382A: mov     eax, r11d
 * 00000001402D382D: lea     r10, [rax+rax*2]
 * 00000001402D3831: mov     r9d, [r13+r10*8+40h]
 * 00000001402D3836: test    [rsi+71Bh], r14b
 * 00000001402D383D: jz      short loc_1402D3862
 * 00000001402D383F: mov     eax, 0C0000082h
 * 00000001402D3844: cmp     r9d, eax
 * 00000001402D3847: jnz     short loc_1402D3862
 * 00000001402D3849: mov     eax, gs:1A4h
 * 00000001402D3851: cmp     eax, [rsi+788h]
 * 00000001402D3857: jnz     short loc_1402D3862
 * 00000001402D3859: mov     rdx, [rsi+780h]
 * 00000001402D3860: jmp     short loc_1402D386E
 * 00000001402D3862: mov     ecx, r9d
 * 00000001402D3865: rdmsr
 * 00000001402D3867: shl     rdx, 20h
 * 00000001402D386B: or      rdx, rax
 * 00000001402D386E: mov     r8, [r13+r10*8+30h]
 * 00000001402D3873: mov     rcx, [r13+r10*8+38h]
 * 00000001402D3878: and     rdx, r8
 * 00000001402D387B: cmp     rdx, rcx
 * 00000001402D387E: jz      short loc_1402D38F3
 * 00000001402D3880: mov     r8d, [r13+1Ch]
 * 00000001402D3884: mov     eax, [rsi+790h]
 * 00000001402D388A: shl     r8, 20h
 * 00000001402D388E: or      r8, r9
 * 00000001402D3891: test    eax, eax
 * 00000001402D3893: jnz     short loc_1402D3911
 * 00000001402D3895: mov     rax, [rsi+588h]
 * 00000001402D389C: xor     rcx, rdx
 * 00000001402D389F: mov     [rax+18h], rcx
 * 00000001402D38A3: mov     eax, [rsi+790h]
 * 00000001402D38A9: test    eax, eax
 * 00000001402D38AB: jnz     short loc_1402D3911
 * 00000001402D38AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D38B7: add     rax, rsi
 * 00000001402D38BA: mov     [rsi+798h], rax
 * 00000001402D38C1: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D38CB: add     rax, r13
 * 00000001402D38CE: mov     [rsi+7A0h], rax
 * 00000001402D38D5: movsxd  rax, dword ptr [r13+0]
 * 00000001402D38D9: mov     [rsi+7A8h], rax
 * 00000001402D38E0: mov     [rsi+7B0h], r8
 * 00000001402D38E7: mov     dword ptr [rsi+790h], 1
 * 00000001402D38F1: jmp     short loc_1402D3911
 * 00000001402D38F3: test    dword ptr [rsi+82Ch], 200h
 * 00000001402D38FD: jz      short loc_1402D3911
 * 00000001402D38FF: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001402D3903: jnz     short loc_1402D3911
 * 00000001402D3905: mov     rax, rdx
 * 00000001402D3908: mov     ecx, r9d
 * 00000001402D390B: shr     rdx, 20h
 * 00000001402D390F: wrmsr
 * 00000001402D3911: inc     r11d
 * 00000001402D3914: cmp     r11d, [r13+18h]
 * 00000001402D3918: jb      loc_1402D382A
 * 00000001402D391E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3925: mov     rax, [rsi+198h]
 * 00000001402D392C: lea     rcx, [rbp+2250h+var_1960]
 * 00000001402D3933: call    KeGuardDispatchICall
 * 00000001402D3938: mov     eax, [r13+18h]
 * 00000001402D393C: shl     eax, 0Fh
 * 00000001402D393F: add     [rsi+6C8h], eax
 * 00000001402D3945: jmp     loc_1402D3375
 * 00000001402D394A: mov     ecx, [rsi+6D0h]
 * 00000001402D3950: test    dl, cl
 * 00000001402D3952: jz      loc_1402D3375
 * 00000001402D3958: mov     r15d, 40000000h
 * 00000001402D395E: test    [rsi+828h], r15d
 * 00000001402D3965: jnz     short loc_1402D3978
 * 00000001402D3967: mov     r14d, eax
 * 00000001402D396A: and     ecx, ebx
 * 00000001402D396C: cmp     cl, bl
 * 00000001402D396E: setz    r14b
 * 00000001402D3972: mov     dword ptr [rbp+2250h+var_2218], r14d
 * 00000001402D3976: jmp     short loc_1402D39C9
 * 00000001402D3978: rdtsc
 * 00000001402D397A: shl     rdx, 20h
 * 00000001402D397E: or      rax, rdx
 * 00000001402D3981: mov     rcx, rax
 * 00000001402D3984: ror     rax, 3
 * 00000001402D3988: xor     rcx, rax
 * 00000001402D398B: mov     rax, 7010008004002001h
 * 00000001402D3995: mul     rcx
 * 00000001402D3998: mov     rcx, rdx
 * 00000001402D399B: mov     [rbp+2250h+var_19B8], rdx
 * 00000001402D39A2: xor     rcx, rax
 * 00000001402D39A5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402D39AF: mul     rcx
 * 00000001402D39B2: shr     rdx, 1
 * 00000001402D39B5: lea     rax, [rdx+rdx*2]
 * 00000001402D39B9: cmp     rcx, rax
 * 00000001402D39BC: mov     eax, 0
 * 00000001402D39C1: setz    al
 * 00000001402D39C4: mov     dword ptr [rbp+2250h+var_2218], eax
 * 00000001402D39C7: xor     eax, eax
 * 00000001402D39C9: mov     rbx, [rsi+540h]
 * 00000001402D39D0: mov     r12d, eax
 * 00000001402D39D3: mov     [rbp+2250h+var_21D0], eax
 * 00000001402D39D9: mov     rax, [rsi+178h]
 * 00000001402D39E0: call    KeGuardDispatchICall
 * 00000001402D39E5: test    [rsi+828h], r15d
 * 00000001402D39EC: jnz     short loc_1402D3A07
 * 00000001402D39EE: mov     ecx, [rsi+7E8h]
 * 00000001402D39F4: cmp     ecx, 7
 * 00000001402D39F7: jnb     short loc_1402D3A07
 * 00000001402D39F9: mov     r15d, 1
 * 00000001402D39FF: mov     r14d, r15d
 * 00000001402D3A02: shl     r14b, cl
 * 00000001402D3A05: jmp     short loc_1402D3A25
 * 00000001402D3A07: mov     rax, [rsi+128h]
 * 00000001402D3A0E: xor     edx, edx
 * 00000001402D3A10: mov     rcx, [rsi+898h]
 * 00000001402D3A17: call    KeGuardDispatchICall
 * 00000001402D3A1C: mov     r14b, 80h
 * 00000001402D3A1F: mov     r15d, 1
 * 00000001402D3A25: mov     rax, [rsi+138h]
 * 00000001402D3A2C: xor     edx, edx
 * 00000001402D3A2E: mov     rcx, rbx
 * 00000001402D3A31: call    KeGuardDispatchICall
 * 00000001402D3A36: mov     rcx, [rsi+518h]
 * 00000001402D3A3D: mov     rax, [rcx]
 * 00000001402D3A40: cmp     rax, rcx
 * 00000001402D3A43: jz      short loc_1402D3A5F
 * 00000001402D3A45: lock or [rax-12Ah], r14b
 * 00000001402D3A4D: mov     rax, [rax]
 * 00000001402D3A50: add     r12d, r15d
 * 00000001402D3A53: cmp     rax, rcx
 * 00000001402D3A56: jnz     short loc_1402D3A45
 * 00000001402D3A58: mov     [rbp+2250h+var_21D0], r12d
 * 00000001402D3A5F: mov     rax, [rsi+548h]
 * 00000001402D3A66: mov     ebx, 4
 * 00000001402D3A6B: mov     edi, dword ptr [rbp+2250h+var_2218]
 * 00000001402D3A6E: mov     r12, [rbp+2250h+var_2240]
 * 00000001402D3A72: mov     r15, [rax]
 * 00000001402D3A75: mov     r13d, [r15]
 * 00000001402D3A78: mov     rax, [rsi+108h]
 * 00000001402D3A7F: mov     rdx, rbx
 * 00000001402D3A82: mov     rcx, r15
 * 00000001402D3A85: call    KeGuardDispatchICall
 * 00000001402D3A8A: mov     rdx, rax
 * 00000001402D3A8D: xor     eax, eax
 * 00000001402D3A8F: test    rdx, rdx
 * 00000001402D3A92: jz      loc_1402D3BC7
 * 00000001402D3A98: mov     rcx, [rdx]
 * 00000001402D3A9B: sar     rcx, 10h
 * 00000001402D3A9F: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 00000001402D3AA3: mov     al, [rcx]
 * 00000001402D3AA5: and     al, 7Fh
 * 00000001402D3AA7: cmp     al, 3
 * 00000001402D3AA9: jnz     short loc_1402D3B20
 * 00000001402D3AAB: test    [rcx+1BEh], r14b
 * 00000001402D3AB2: jnz     short loc_1402D3B0F
 * 00000001402D3AB4: test    dword ptr [rcx+304h], 4000000h
 * 00000001402D3ABE: jz      short loc_1402D3B0F
 * 00000001402D3AC0: xor     eax, eax
 * 00000001402D3AC2: cmp     [rsi+790h], eax
 * 00000001402D3AC8: jnz     short loc_1402D3B0F
 * 00000001402D3ACA: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D3AD4: add     rax, rsi
 * 00000001402D3AD7: mov     [rsi+798h], rax
 * 00000001402D3ADE: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D3AE8: add     rax, r12
 * 00000001402D3AEB: mov     [rsi+7A0h], rax
 * 00000001402D3AF2: movsxd  rax, dword ptr [r12]
 * 00000001402D3AF6: mov     [rsi+7A8h], rax
 * 00000001402D3AFD: mov     eax, 1
 * 00000001402D3B02: mov     [rsi+7B0h], rcx
 * 00000001402D3B09: mov     [rsi+790h], eax
 * 00000001402D3B0F: mov     al, r14b
 * 00000001402D3B12: not     al
 * 00000001402D3B14: lock and [rcx+1BEh], al
 * 00000001402D3B1B: jmp     loc_1402D3BB8
 * 00000001402D3B20: cmp     al, 6
 * 00000001402D3B22: jnz     short loc_1402D3B65
 * 00000001402D3B24: test    edi, edi
 * 00000001402D3B26: jz      loc_1402D3BB8
 * 00000001402D3B2C: mov     rax, [rcx+2A8h]
 * 00000001402D3B33: cmp     rax, [rsi+320h]
 * 00000001402D3B3A: jz      short loc_1402D3B45
 * 00000001402D3B3C: cmp     rax, [rsi+328h]
 * 00000001402D3B43: jnz     short loc_1402D3B69
 * 00000001402D3B45: mov     rax, [rsi+330h]
 * 00000001402D3B4C: cmp     [rcx+2B8h], rax
 * 00000001402D3B53: jnz     short loc_1402D3B69
 * 00000001402D3B55: mov     rax, [rsi+338h]
 * 00000001402D3B5C: cmp     [rcx+2B0h], rax
 * 00000001402D3B63: jmp     short loc_1402D3B67
 * 00000001402D3B65: test    al, al
 * 00000001402D3B67: jz      short loc_1402D3BB8
 * 00000001402D3B69: xor     eax, eax
 * 00000001402D3B6B: cmp     [rsi+790h], eax
 * 00000001402D3B71: jnz     short loc_1402D3BB8
 * 00000001402D3B73: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D3B7D: add     rax, rsi
 * 00000001402D3B80: mov     [rsi+798h], rax
 * 00000001402D3B87: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D3B91: add     rax, r12
 * 00000001402D3B94: mov     [rsi+7A0h], rax
 * 00000001402D3B9B: movsxd  rax, dword ptr [r12]
 * 00000001402D3B9F: mov     [rsi+7A8h], rax
 * 00000001402D3BA6: mov     eax, 1
 * 00000001402D3BAB: mov     [rsi+7B0h], rcx
 * 00000001402D3BB2: mov     [rsi+790h], eax
 * 00000001402D3BB8: mov     rax, [rsi+120h]
 * 00000001402D3BBF: mov     rcx, r15
 * 00000001402D3BC2: call    KeGuardDispatchICall
 * 00000001402D3BC7: add     rbx, 4
 * 00000001402D3BCB: cmp     rbx, r13
 * 00000001402D3BCE: jb      loc_1402D3A78
 * 00000001402D3BD4: mov     r12d, [rbp+2250h+var_21D0]
 * 00000001402D3BDB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3BE2: cmp     r14b, 80h
 * 00000001402D3BE6: jnz     short loc_1402D3BFD
 * 00000001402D3BE8: mov     rax, [rsi+130h]
 * 00000001402D3BEF: xor     edx, edx
 * 00000001402D3BF1: mov     rcx, [rsi+898h]
 * 00000001402D3BF8: call    KeGuardDispatchICall
 * 00000001402D3BFD: mov     rcx, [rsi+540h]
 * 00000001402D3C04: xor     edx, edx
 * 00000001402D3C06: mov     rax, [rsi+140h]
 * 00000001402D3C0D: call    KeGuardDispatchICall
 * 00000001402D3C12: mov     rax, [rsi+180h]
 * 00000001402D3C19: call    KeGuardDispatchICall
 * 00000001402D3C1E: shr     r13, 2
 * 00000001402D3C22: add     r12d, r13d
 * 00000001402D3C25: shl     r12d, 8
 * 00000001402D3C29: add     [rsi+6C8h], r12d
 * 00000001402D3C30: jmp     loc_1402D3375
 * 00000001402D3C35: mov     eax, [rsi+6D0h]
 * 00000001402D3C3B: test    dl, al
 * 00000001402D3C3D: jnz     loc_1402D3375
 * 00000001402D3C43: mov     r14, [rsi+540h]
 * 00000001402D3C4A: xor     eax, eax
 * 00000001402D3C4C: mov     r15d, eax
 * 00000001402D3C4F: mov     rax, [rsi+178h]
 * 00000001402D3C56: call    KeGuardDispatchICall
 * 00000001402D3C5B: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D3C65: jnz     short loc_1402D3C7F
 * 00000001402D3C67: mov     ecx, [rsi+7E8h]
 * 00000001402D3C6D: cmp     ecx, 7
 * 00000001402D3C70: jnb     short loc_1402D3C7F
 * 00000001402D3C72: mov     r12d, 1
 * 00000001402D3C78: mov     ebx, r12d
 * 00000001402D3C7B: shl     bl, cl
 * 00000001402D3C7D: jmp     short loc_1402D3C9C
 * 00000001402D3C7F: mov     rax, [rsi+128h]
 * 00000001402D3C86: xor     edx, edx
 * 00000001402D3C88: mov     rcx, [rsi+898h]
 * 00000001402D3C8F: call    KeGuardDispatchICall
 * 00000001402D3C94: mov     bl, 80h
 * 00000001402D3C96: mov     r12d, 1
 * 00000001402D3C9C: mov     rax, [rsi+138h]
 * 00000001402D3CA3: xor     edx, edx
 * 00000001402D3CA5: mov     rcx, r14
 * 00000001402D3CA8: mov     dword ptr [rbp+2250h+var_2218], ebx
 * 00000001402D3CAB: call    KeGuardDispatchICall
 * 00000001402D3CB0: mov     r9, [rsi+518h]
 * 00000001402D3CB7: mov     r8, [r9]
 * 00000001402D3CBA: cmp     r8, r9
 * 00000001402D3CBD: jz      loc_1402D3D4A
 * 00000001402D3CC3: xor     edi, edi
 * 00000001402D3CC5: cmp     bl, 80h
 * 00000001402D3CC8: jz      short loc_1402D3D30
 * 00000001402D3CCA: test    [r8-12Ah], bl
 * 00000001402D3CD1: jz      short loc_1402D3D30
 * 00000001402D3CD3: test    dword ptr [r8+1Ch], 4000000h
 * 00000001402D3CDB: jz      short loc_1402D3D30
 * 00000001402D3CDD: cmp     [rsi+790h], edi
 * 00000001402D3CE3: jnz     short loc_1402D3D30
 * 00000001402D3CE5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D3CEF: add     rax, rsi
 * 00000001402D3CF2: mov     [rsi+798h], rax
 * 00000001402D3CF9: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D3D03: add     rax, r13
 * 00000001402D3D06: mov     [rsi+7A0h], rax
 * 00000001402D3D0D: movsxd  rax, dword ptr [r13+0]
 * 00000001402D3D11: mov     [rsi+7A8h], rax
 * 00000001402D3D18: lea     rax, [r8-2E8h]
 * 00000001402D3D1F: or      rax, r12
 * 00000001402D3D22: mov     [rsi+7B0h], rax
 * 00000001402D3D29: mov     [rsi+790h], r12d
 * 00000001402D3D30: lock or [r8-12Ah], bl
 * 00000001402D3D38: mov     r8, [r8]
 * 00000001402D3D3B: add     r15d, r12d
 * 00000001402D3D3E: cmp     r8, r9
 * 00000001402D3D41: jnz     short loc_1402D3CC5
 * 00000001402D3D43: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3D4A: mov     rcx, [rsi+4F8h]
 * 00000001402D3D51: mov     r14, cr8
 * 00000001402D3D55: mov     [rbp+2250h+var_2250], r14
 * 00000001402D3D59: mov     eax, 0Ch
 * 00000001402D3D5E: mov     cr8, rax
 * 00000001402D3D62: mov     rax, [rsi+148h]
 * 00000001402D3D69: lea     rdx, [rbp+2250h+var_1818]
 * 00000001402D3D70: call    KeGuardDispatchICall
 * 00000001402D3D75: mov     r9, [rsi+4F0h]
 * 00000001402D3D7C: mov     rdx, [r9]
 * 00000001402D3D7F: cmp     rdx, r9
 * 00000001402D3D82: jz      loc_1402D3E10
 * 00000001402D3D88: mov     r8b, bl
 * 00000001402D3D8B: movzx   r10d, bl
 * 00000001402D3D8F: not     r8b
 * 00000001402D3D92: xor     edi, edi
 * 00000001402D3D94: mov     rbx, 0A3A03F5891C8B4E8h
 * 00000001402D3D9E: mov     r14, 0B3B74BDEE4453415h
 * 00000001402D3DA8: lea     rcx, [rdx-240h]
 * 00000001402D3DAF: movsx   eax, byte ptr [rcx+1BEh]
 * 00000001402D3DB6: test    r10d, eax
 * 00000001402D3DB9: jnz     short loc_1402D3DF2
 * 00000001402D3DBB: cmp     [rsi+790h], edi
 * 00000001402D3DC1: jnz     short loc_1402D3DF2
 * 00000001402D3DC3: lea     rax, [rsi+rbx]
 * 00000001402D3DC7: mov     [rsi+798h], rax
 * 00000001402D3DCE: lea     rax, [r14+r13]
 * 00000001402D3DD2: mov     [rsi+7A0h], rax
 * 00000001402D3DD9: movsxd  rax, dword ptr [r13+0]
 * 00000001402D3DDD: mov     [rsi+7A8h], rax
 * 00000001402D3DE4: mov     [rsi+7B0h], rcx
 * 00000001402D3DEB: mov     [rsi+790h], r12d
 * 00000001402D3DF2: lock and [rcx+1BEh], r8b
 * 00000001402D3DFA: mov     rdx, [rdx]
 * 00000001402D3DFD: cmp     rdx, r9
 * 00000001402D3E00: jnz     short loc_1402D3DA8
 * 00000001402D3E02: mov     ebx, dword ptr [rbp+2250h+var_2218]
 * 00000001402D3E05: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3E0C: mov     r14, [rbp+2250h+var_2250]
 * 00000001402D3E10: mov     rax, [rsi+188h]
 * 00000001402D3E17: lea     rcx, [rbp+2250h+var_1818]
 * 00000001402D3E1E: call    KeGuardDispatchICall
 * 00000001402D3E23: movzx   eax, r14b
 * 00000001402D3E27: mov     cr8, rax
 * 00000001402D3E2B: cmp     bl, 80h
 * 00000001402D3E2E: jnz     short loc_1402D3E45
 * 00000001402D3E30: mov     rax, [rsi+130h]
 * 00000001402D3E37: xor     edx, edx
 * 00000001402D3E39: mov     rcx, [rsi+898h]
 * 00000001402D3E40: call    KeGuardDispatchICall
 * 00000001402D3E45: mov     rcx, [rsi+540h]
 * 00000001402D3E4C: xor     edx, edx
 * 00000001402D3E4E: mov     rax, [rsi+140h]
 * 00000001402D3E55: call    KeGuardDispatchICall
 * 00000001402D3E5A: mov     rax, [rsi+180h]
 * 00000001402D3E61: call    KeGuardDispatchICall
 * 00000001402D3E66: shl     r15d, 8
 * 00000001402D3E6A: add     [rsi+6C8h], r15d
 * 00000001402D3E71: jmp     loc_1402D3375
 * 00000001402D3E76: mov     r14, [r13+8]
 * 00000001402D3E7A: mov     r8d, [r13+10h]
 * 00000001402D3E7E: mov     r9, r14
 * 00000001402D3E81: add     [rsi+6C8h], r8d
 * 00000001402D3E88: mov     rax, r14
 * 00000001402D3E8B: mov     r10d, [rsi+6B4h]
 * 00000001402D3E92: mov     r15, [rsi+6B8h]
 * 00000001402D3E99: lea     rcx, [r14+r8]
 * 00000001402D3E9D: cmp     r14, rcx
 * 00000001402D3EA0: jnb     short loc_1402D3EB3
 * 00000001402D3EA2: mov     r11d, 40h ; '@'
 * 00000001402D3EA8: prefetchnta byte ptr [rax]
 * 00000001402D3EAB: add     rax, r11
 * 00000001402D3EAE: cmp     rax, rcx
 * 00000001402D3EB1: jb      short loc_1402D3EA8
 * 00000001402D3EB3: mov     r11d, r8d
 * 00000001402D3EB6: mov     rbx, r15
 * 00000001402D3EB9: shr     r11d, 7
 * 00000001402D3EBD: test    r11d, r11d
 * 00000001402D3EC0: jz      short loc_1402D3F2E
 * 00000001402D3EC2: mov     rdi, 7010008004002001h
 * 00000001402D3ECC: mov     eax, 8
 * 00000001402D3ED1: xor     rbx, [r9]
 * 00000001402D3ED4: mov     ecx, r10d
 * 00000001402D3ED7: rol     rbx, cl
 * 00000001402D3EDA: xor     rbx, [r9+8]
 * 00000001402D3EDE: add     r9, 10h
 * 00000001402D3EE2: rol     rbx, cl
 * 00000001402D3EE5: sub     rax, rdx
 * 00000001402D3EE8: jnz     short loc_1402D3ED1
 * 00000001402D3EEA: mov     rcx, r9
 * 00000001402D3EED: sub     rcx, r14
 * 00000001402D3EF0: xor     rcx, r15
 * 00000001402D3EF3: mov     rax, rcx
 * 00000001402D3EF6: rol     rax, 11h
 * 00000001402D3EFA: xor     rcx, rax
 * 00000001402D3EFD: mov     rax, rdi
 * 00000001402D3F00: mul     rcx
 * 00000001402D3F03: xor     r10d, eax
 * 00000001402D3F06: mov     [rbp+2250h+var_19B0], rdx
 * 00000001402D3F0D: xor     r10d, edx
 * 00000001402D3F10: mov     edx, 1
 * 00000001402D3F15: and     r10d, 3Fh
 * 00000001402D3F19: cmovz   r10d, edx
 * 00000001402D3F1D: add     r11d, 0FFFFFFFFh
 * 00000001402D3F21: jnz     short loc_1402D3ECC
 * 00000001402D3F23: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D3F27: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D3F2E: and     r8d, 7Fh
 * 00000001402D3F32: cmp     r8d, 8
 * 00000001402D3F36: jb      short loc_1402D3F55
 * 00000001402D3F38: mov     eax, r8d
 * 00000001402D3F3B: shr     rax, 3
 * 00000001402D3F3F: xor     rbx, [r9]
 * 00000001402D3F42: mov     ecx, r10d
 * 00000001402D3F45: rol     rbx, cl
 * 00000001402D3F48: add     r9, 8
 * 00000001402D3F4C: add     r8d, 0FFFFFFF8h
 * 00000001402D3F50: sub     rax, rdx
 * 00000001402D3F53: jnz     short loc_1402D3F3F
 * 00000001402D3F55: test    r8d, r8d
 * 00000001402D3F58: jz      short loc_1402D3F70
 * 00000001402D3F5A: movzx   eax, byte ptr [r9]
 * 00000001402D3F5E: mov     ecx, r10d
 * 00000001402D3F61: xor     rbx, rax
 * 00000001402D3F64: add     r9, rdx
 * 00000001402D3F67: rol     rbx, cl
 * 00000001402D3F6A: add     r8d, 0FFFFFFFFh
 * 00000001402D3F6E: jnz     short loc_1402D3F5A
 * 00000001402D3F70: mov     rax, rbx
 * 00000001402D3F73: jmp     short loc_1402D3F77
 * 00000001402D3F75: xor     ebx, eax
 * 00000001402D3F77: shr     rax, 1Fh
 * 00000001402D3F7B: test    rax, rax
 * 00000001402D3F7E: jnz     short loc_1402D3F75
 * 00000001402D3F80: btr     ebx, 1Fh
 * 00000001402D3F84: mov     r12d, eax
 * 00000001402D3F87: cmp     ebx, [r13+14h]
 * 00000001402D3F8B: jz      loc_1402D3375
 * 00000001402D3F91: cmp     [r13+0], eax
 * 00000001402D3F95: jnz     short loc_1402D3F9F
 * 00000001402D3F97: cmp     [r13+18h], eax
 * 00000001402D3F9B: cmovnz  r12d, edx
 * 00000001402D3F9F: mov     ecx, [r13+10h]
 * 00000001402D3FA3: mov     rdx, [r13+8]
 * 00000001402D3FA7: test    rcx, rcx
 * 00000001402D3FAA: jz      loc_1402D406B
 * 00000001402D3FB0: mov     eax, [rsi+82Ch]
 * 00000001402D3FB6: mov     r8d, 40h ; '@'
 * 00000001402D3FBC: test    r8b, al
 * 00000001402D3FBF: jz      loc_1402D406B
 * 00000001402D3FC5: mov     r13, cr8
 * 00000001402D3FC9: lea     eax, [r8-3Eh]
 * 00000001402D3FCD: mov     cr8, rax
 * 00000001402D3FD1: lea     rax, [rcx-1]
 * 00000001402D3FD5: mov     r14, rdx
 * 00000001402D3FD8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D3FDF: add     rax, rdx
 * 00000001402D3FE2: mov     ecx, 0FFFh
 * 00000001402D3FE7: or      rax, rcx
 * 00000001402D3FEA: mov     [rbp+2250h+var_2248], rax
 * 00000001402D3FEE: lea     rax, [r14-1]
 * 00000001402D3FF2: mov     [rbp+2250h+var_2250], rax
 * 00000001402D3FF6: movzx   r15d, r13b
 * 00000001402D3FFA: mov     rax, [rsi+468h]
 * 00000001402D4001: xor     edx, edx
 * 00000001402D4003: mov     rcx, r14
 * 00000001402D4006: call    KeGuardDispatchICall
 * 00000001402D400B: cmp     eax, 0C000022Dh
 * 00000001402D4010: jnz     short loc_1402D403B
 * 00000001402D4012: test    r12d, r12d
 * 00000001402D4015: jnz     short loc_1402D4063
 * 00000001402D4017: lea     eax, [r12+1]
 * 00000001402D401C: cmp     r13b, al
 * 00000001402D401F: ja      short loc_1402D403F
 * 00000001402D4021: movzx   r15d, r13b
 * 00000001402D4025: mov     cr8, r15
 * 00000001402D4029: mov     al, [r14]
 * 00000001402D402C: mov     rax, cr8
 * 00000001402D4030: lea     eax, [r12+2]
 * 00000001402D4035: mov     cr8, rax
 * 00000001402D4039: jmp     short loc_1402D3FFA
 * 00000001402D403B: test    eax, eax
 * 00000001402D403D: js      short loc_1402D4063
 * 00000001402D403F: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D4043: add     r14, 1000h
 * 00000001402D404A: add     rax, 1000h
 * 00000001402D4050: mov     [rbp+2250h+var_2250], rax
 * 00000001402D4054: cmp     rax, [rbp+2250h+var_2248]
 * 00000001402D4058: jnz     short loc_1402D3FF6
 * 00000001402D405A: mov     cr8, r15
 * 00000001402D405E: jmp     loc_1402D3375
 * 00000001402D4063: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D4067: mov     cr8, r15
 * 00000001402D406B: mov     eax, [rsi+790h]
 * 00000001402D4071: xor     r15d, r15d
 * 00000001402D4074: mov     ecx, [r13+14h]
 * 00000001402D4078: test    eax, eax
 * 00000001402D407A: jnz     short loc_1402D4092
 * 00000001402D407C: mov     eax, ebx
 * 00000001402D407E: xor     rcx, rax
 * 00000001402D4081: mov     rax, [rsi+588h]
 * 00000001402D4088: mov     [rax+18h], rcx
 * 00000001402D408C: mov     eax, [rsi+790h]
 * 00000001402D4092: mov     rcx, [r13+8]
 * 00000001402D4096: test    eax, eax
 * 00000001402D4098: jnz     loc_1402D3378
 * 00000001402D409E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D40A8: add     rax, rsi
 * 00000001402D40AB: mov     [rsi+798h], rax
 * 00000001402D40B2: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D40BC: add     rax, r13
 * 00000001402D40BF: mov     [rsi+7A0h], rax
 * 00000001402D40C6: movsxd  rax, dword ptr [r13+0]
 * 00000001402D40CA: mov     [rsi+7A8h], rax
 * 00000001402D40D1: mov     [rsi+7B0h], rcx
 * 00000001402D40D8: mov     eax, 1
 * 00000001402D40DD: mov     [rsi+790h], eax
 * 00000001402D40E3: jmp     loc_1402D3378
 * 00000001402D40E8: xor     eax, eax
 * 00000001402D40EA: cmp     [rsi+818h], rax
 * 00000001402D40F1: jnz     short loc_1402D40FE
 * 00000001402D40F3: mov     [rsi+6C4h], eax
 * 00000001402D40F9: jmp     loc_1402D3375
 * 00000001402D40FE: mov     edx, [rsi+82Ch]
 * 00000001402D4104: mov     ecx, edx
 * 00000001402D4106: cmp     [rsi+6C4h], eax
 * 00000001402D410C: jnz     loc_1402D41DF
 * 00000001402D4112: shl     ecx, 3
 * 00000001402D4115: xor     ecx, edx
 * 00000001402D4117: and     ecx, 20h
 * 00000001402D411A: xor     ecx, edx
 * 00000001402D411C: mov     [rsi+82Ch], ecx
 * 00000001402D4122: test    cl, 4
 * 00000001402D4125: jz      loc_1402D41F5
 * 00000001402D412B: mov     rcx, [r13+8]
 * 00000001402D412F: mov     eax, 0FFFh
 * 00000001402D4134: mov     r14d, [r13+10h]
 * 00000001402D4138: mov     rbx, rcx
 * 00000001402D413B: add     r14, rax
 * 00000001402D413E: and     rcx, rax
 * 00000001402D4141: add     r14, rcx
 * 00000001402D4144: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402D414B: shr     r14, 0Ch
 * 00000001402D414F: test    r14, r14
 * 00000001402D4152: jz      loc_1402D3375
 * 00000001402D4158: xor     edi, edi
 * 00000001402D415A: lea     r15d, [rdi+1]
 * 00000001402D415E: mov     rax, [rsi+2B0h]
 * 00000001402D4165: mov     rcx, rbx
 * 00000001402D4168: sub     r14, r15
 * 00000001402D416B: call    KeGuardDispatchICall
 * 00000001402D4170: test    al, al
 * 00000001402D4172: jz      short loc_1402D41BD
 * 00000001402D4174: cmp     [rsi+790h], edi
 * 00000001402D417A: jnz     short loc_1402D41BD
 * 00000001402D417C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4186: add     rax, rsi
 * 00000001402D4189: mov     [rsi+798h], rax
 * 00000001402D4190: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D419A: add     rax, r13
 * 00000001402D419D: mov     [rsi+7A0h], rax
 * 00000001402D41A4: movsxd  rax, dword ptr [r13+0]
 * 00000001402D41A8: mov     [rsi+7A8h], rax
 * 00000001402D41AF: mov     [rsi+7B0h], rbx
 * 00000001402D41B6: mov     [rsi+790h], r15d
 * 00000001402D41BD: add     dword ptr [rsi+6C8h], 100h
 * 00000001402D41C7: add     rbx, 1000h
 * 00000001402D41CE: test    r14, r14
 * 00000001402D41D1: jnz     short loc_1402D415E
 * 00000001402D41D3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D41DA: jmp     loc_1402D3375
 * 00000001402D41DF: mov     eax, edx
 * 00000001402D41E1: shr     eax, 3
 * 00000001402D41E4: xor     eax, edx
 * 00000001402D41E6: test    al, 4
 * 00000001402D41E8: jz      loc_1402D4122
 * 00000001402D41EE: xor     eax, eax
 * 00000001402D41F0: jmp     loc_1402D40F3
 * 00000001402D41F5: mov     r14, [r13+8]
 * 00000001402D41F9: mov     r8d, [r13+10h]
 * 00000001402D41FD: mov     r9, r14
 * 00000001402D4200: add     [rsi+6C8h], r8d
 * 00000001402D4207: mov     rax, r14
 * 00000001402D420A: mov     r10d, [rsi+6B4h]
 * 00000001402D4211: mov     r15, [rsi+6B8h]
 * 00000001402D4218: lea     rcx, [r14+r8]
 * 00000001402D421C: cmp     r14, rcx
 * 00000001402D421F: jnb     short loc_1402D4231
 * 00000001402D4221: mov     edx, 40h ; '@'
 * 00000001402D4226: prefetchnta byte ptr [rax]
 * 00000001402D4229: add     rax, rdx
 * 00000001402D422C: cmp     rax, rcx
 * 00000001402D422F: jb      short loc_1402D4226
 * 00000001402D4231: mov     r11d, r8d
 * 00000001402D4234: mov     rbx, r15
 * 00000001402D4237: shr     r11d, 7
 * 00000001402D423B: mov     r12d, 1
 * 00000001402D4241: test    r11d, r11d
 * 00000001402D4244: jz      short loc_1402D42AC
 * 00000001402D4246: mov     rsi, 7010008004002001h
 * 00000001402D4250: mov     edx, 8
 * 00000001402D4255: mov     rax, [r9]
 * 00000001402D4258: mov     ecx, r10d
 * 00000001402D425B: xor     rax, rbx
 * 00000001402D425E: mov     rbx, [r9+8]
 * 00000001402D4262: rol     rax, cl
 * 00000001402D4265: add     r9, 10h
 * 00000001402D4269: xor     rbx, rax
 * 00000001402D426C: rol     rbx, cl
 * 00000001402D426F: sub     rdx, r12
 * 00000001402D4272: jnz     short loc_1402D4255
 * 00000001402D4274: mov     rcx, r9
 * 00000001402D4277: sub     rcx, r14
 * 00000001402D427A: xor     rcx, r15
 * 00000001402D427D: mov     rax, rcx
 * 00000001402D4280: rol     rax, 11h
 * 00000001402D4284: xor     rcx, rax
 * 00000001402D4287: mov     rax, rsi
 * 00000001402D428A: mul     rcx
 * 00000001402D428D: xor     r10d, eax
 * 00000001402D4290: mov     [rbp+2250h+var_19A8], rdx
 * 00000001402D4297: xor     r10d, edx
 * 00000001402D429A: and     r10d, 3Fh
 * 00000001402D429E: cmovz   r10d, r12d
 * 00000001402D42A2: add     r11d, 0FFFFFFFFh
 * 00000001402D42A6: jnz     short loc_1402D4250
 * 00000001402D42A8: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D42AC: and     r8d, 7Fh
 * 00000001402D42B0: cmp     r8d, 8
 * 00000001402D42B4: jb      short loc_1402D42D3
 * 00000001402D42B6: mov     edx, r8d
 * 00000001402D42B9: shr     rdx, 3
 * 00000001402D42BD: xor     rbx, [r9]
 * 00000001402D42C0: mov     ecx, r10d
 * 00000001402D42C3: rol     rbx, cl
 * 00000001402D42C6: add     r9, 8
 * 00000001402D42CA: add     r8d, 0FFFFFFF8h
 * 00000001402D42CE: sub     rdx, r12
 * 00000001402D42D1: jnz     short loc_1402D42BD
 * 00000001402D42D3: test    r8d, r8d
 * 00000001402D42D6: jz      short loc_1402D42EE
 * 00000001402D42D8: movzx   eax, byte ptr [r9]
 * 00000001402D42DC: mov     ecx, r10d
 * 00000001402D42DF: xor     rbx, rax
 * 00000001402D42E2: add     r9, r12
 * 00000001402D42E5: rol     rbx, cl
 * 00000001402D42E8: add     r8d, 0FFFFFFFFh
 * 00000001402D42EC: jnz     short loc_1402D42D8
 * 00000001402D42EE: mov     rax, rbx
 * 00000001402D42F1: shr     rax, 1Fh
 * 00000001402D42F5: xor     r15d, r15d
 * 00000001402D42F8: jmp     short loc_1402D4300
 * 00000001402D42FA: xor     ebx, eax
 * 00000001402D42FC: shr     rax, 1Fh
 * 00000001402D4300: test    rax, rax
 * 00000001402D4303: jnz     short loc_1402D42FA
 * 00000001402D4305: mov     edx, [r13+14h]
 * 00000001402D4309: btr     ebx, 1Fh
 * 00000001402D430D: cmp     ebx, edx
 * 00000001402D430F: jz      loc_1402D3378
 * 00000001402D4315: mov     ecx, [r13+10h]
 * 00000001402D4319: mov     r8, [r13+8]
 * 00000001402D431D: test    rcx, rcx
 * 00000001402D4320: jz      loc_1402D43CF
 * 00000001402D4326: mov     eax, [rsi+82Ch]
 * 00000001402D432C: mov     r9d, 40h ; '@'
 * 00000001402D4332: test    r9b, al
 * 00000001402D4335: jz      loc_1402D43CF
 * 00000001402D433B: mov     r12, cr8
 * 00000001402D433F: lea     eax, [r9-3Eh]
 * 00000001402D4343: mov     cr8, rax
 * 00000001402D4347: lea     rax, [rcx-1]
 * 00000001402D434B: mov     r14, r8
 * 00000001402D434E: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D4355: add     rax, r8
 * 00000001402D4358: mov     ecx, 0FFFh
 * 00000001402D435D: or      rax, rcx
 * 00000001402D4360: mov     [rbp+2250h+var_2250], rax
 * 00000001402D4364: lea     r13, [r14-1]
 * 00000001402D4368: movzx   r15d, r12b
 * 00000001402D436C: mov     rax, [rsi+468h]
 * 00000001402D4373: xor     edx, edx
 * 00000001402D4375: mov     rcx, r14
 * 00000001402D4378: call    KeGuardDispatchICall
 * 00000001402D437D: cmp     eax, 0C000022Dh
 * 00000001402D4382: jnz     short loc_1402D43A8
 * 00000001402D4384: mov     eax, 1
 * 00000001402D4389: cmp     r12b, al
 * 00000001402D438C: ja      short loc_1402D43AC
 * 00000001402D438E: movzx   r15d, r12b
 * 00000001402D4392: mov     cr8, r15
 * 00000001402D4396: mov     al, [r14]
 * 00000001402D4399: mov     rax, cr8
 * 00000001402D439D: mov     eax, 2
 * 00000001402D43A2: mov     cr8, rax
 * 00000001402D43A6: jmp     short loc_1402D436C
 * 00000001402D43A8: test    eax, eax
 * 00000001402D43AA: js      short loc_1402D43C3
 * 00000001402D43AC: mov     r10d, 1000h
 * 00000001402D43B2: add     r14, r10
 * 00000001402D43B5: add     r13, r10
 * 00000001402D43B8: cmp     r13, [rbp+2250h+var_2250]
 * 00000001402D43BC: jnz     short loc_1402D4368
 * 00000001402D43BE: jmp     loc_1402D405A
 * 00000001402D43C3: mov     cr8, r15
 * 00000001402D43C7: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D43CB: mov     edx, [r13+14h]
 * 00000001402D43CF: mov     eax, [rsi+790h]
 * 00000001402D43D5: xor     r15d, r15d
 * 00000001402D43D8: test    eax, eax
 * 00000001402D43DA: jnz     loc_1402D4092
 * 00000001402D43E0: mov     ecx, edx
 * 00000001402D43E2: jmp     loc_1402D407C
 * 00000001402D43E7: mov     r8d, 0Ch
 * 00000001402D43ED: cmp     r15d, r8d
 * 00000001402D43F0: jz      loc_1402DB3E2
 * 00000001402D43F6: jle     loc_1402DC529
 * 00000001402D43FC: cmp     r15d, 0Eh
 * 00000001402D4400: jle     loc_1402D724E
 * 00000001402D4406: lea     eax, [r8+3]
 * 00000001402D440A: cmp     r15d, eax
 * 00000001402D440D: jz      loc_1402D710F
 * 00000001402D4413: cmp     r15d, 15h
 * 00000001402D4417: jz      loc_1402D7015
 * 00000001402D441D: cmp     r15d, 18h
 * 00000001402D4421: jz      loc_1402D49C5
 * 00000001402D4427: cmp     r15d, 19h
 * 00000001402D442B: jz      loc_1402D45B7
 * 00000001402D4431: cmp     r15d, 1Ah
 * 00000001402D4435: jnz     loc_1402DC529
 * 00000001402D443B: mov     eax, [rsi+6D0h]
 * 00000001402D4441: test    dl, al
 * 00000001402D4443: jnz     loc_1402D3375
 * 00000001402D4449: mov     r12, [rsi+5A0h]
 * 00000001402D4450: xor     eax, eax
 * 00000001402D4452: mov     r13, [rsi+5A8h]
 * 00000001402D4459: mov     r15d, eax
 * 00000001402D445C: mov     r14, [rsi+540h]
 * 00000001402D4463: mov     dword ptr [rbp+2250h+var_2218], eax
 * 00000001402D4466: mov     rax, [rsi+178h]
 * 00000001402D446D: mov     [rbp+2250h+var_2250], r12
 * 00000001402D4471: call    KeGuardDispatchICall
 * 00000001402D4476: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D4480: jnz     short loc_1402D4496
 * 00000001402D4482: mov     ecx, [rsi+7E8h]
 * 00000001402D4488: cmp     ecx, 7
 * 00000001402D448B: jnb     short loc_1402D4496
 * 00000001402D448D: mov     ebx, 1
 * 00000001402D4492: shl     bl, cl
 * 00000001402D4494: jmp     short loc_1402D44AD
 * 00000001402D4496: mov     rax, [rsi+128h]
 * 00000001402D449D: xor     edx, edx
 * 00000001402D449F: mov     rcx, [rsi+898h]
 * 00000001402D44A6: call    KeGuardDispatchICall
 * 00000001402D44AB: mov     bl, 80h
 * 00000001402D44AD: mov     rax, [rsi+138h]
 * 00000001402D44B4: xor     edx, edx
 * 00000001402D44B6: mov     rcx, r14
 * 00000001402D44B9: call    KeGuardDispatchICall
 * 00000001402D44BE: mov     rcx, [rsi+518h]
 * 00000001402D44C5: mov     r14d, 1
 * 00000001402D44CB: mov     rax, [rcx]
 * 00000001402D44CE: cmp     rax, rcx
 * 00000001402D44D1: jz      short loc_1402D44E9
 * 00000001402D44D3: lock or [rax-12Ah], bl
 * 00000001402D44DA: mov     rax, [rax]
 * 00000001402D44DD: add     r15d, r14d
 * 00000001402D44E0: cmp     rax, rcx
 * 00000001402D44E3: jnz     short loc_1402D44D3
 * 00000001402D44E5: mov     dword ptr [rbp+2250h+var_2218], r15d
 * 00000001402D44E9: mov     rax, [rsi+138h]
 * 00000001402D44F0: xor     edx, edx
 * 00000001402D44F2: mov     rcx, r12
 * 00000001402D44F5: call    KeGuardDispatchICall
 * 00000001402D44FA: mov     r9, [rsi+598h]
 * 00000001402D4501: mov     r8, [r9]
 * 00000001402D4504: cmp     r8, r9
 * 00000001402D4507: jz      loc_1402D45A1
 * 00000001402D450D: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D4511: xor     r12d, r12d
 * 00000001402D4514: mov     r15, 0B3B74BDEE4453415h
 * 00000001402D451E: lea     rdx, [r8-18h]
 * 00000001402D4522: cmp     rdx, r13
 * 00000001402D4525: jz      short loc_1402D458A
 * 00000001402D4527: mov     rdx, [rdx+10h]
 * 00000001402D452B: test    [rdx+1BEh], bl
 * 00000001402D4531: jnz     short loc_1402D457F
 * 00000001402D4533: test    dword ptr [rdx+304h], 4000000h
 * 00000001402D453D: jz      short loc_1402D457F
 * 00000001402D453F: cmp     [rsi+790h], r12d
 * 00000001402D4546: jnz     short loc_1402D457F
 * 00000001402D4548: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4552: add     rax, rsi
 * 00000001402D4555: mov     [rsi+798h], rax
 * 00000001402D455C: lea     rax, [rdi+r15]
 * 00000001402D4560: mov     [rsi+7A0h], rax
 * 00000001402D4567: movsxd  rax, dword ptr [rdi]
 * 00000001402D456A: mov     [rsi+7A8h], rax
 * 00000001402D4571: mov     [rsi+7B0h], rdx
 * 00000001402D4578: mov     [rsi+790h], r14d
 * 00000001402D457F: mov     al, bl
 * 00000001402D4581: not     al
 * 00000001402D4583: lock and [rdx+1BEh], al
 * 00000001402D458A: mov     r8, [r8]
 * 00000001402D458D: cmp     r8, r9
 * 00000001402D4590: jnz     short loc_1402D451E
 * 00000001402D4592: mov     r15d, dword ptr [rbp+2250h+var_2218]
 * 00000001402D4596: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D459D: mov     r12, [rbp+2250h+var_2250]
 * 00000001402D45A1: mov     rcx, r12
 * 00000001402D45A4: mov     rax, [rsi+140h]
 * 00000001402D45AB: xor     edx, edx
 * 00000001402D45AD: call    KeGuardDispatchICall
 * 00000001402D45B2: jmp     loc_1402D3E2B
 * 00000001402D45B7: mov     r12, [rsi+528h]
 * 00000001402D45BE: xor     eax, eax
 * 00000001402D45C0: mov     [rbp+2250h+var_21B4], eax
 * 00000001402D45C6: mov     rax, [rsi+378h]
 * 00000001402D45CD: call    KeGuardDispatchICall
 * 00000001402D45D2: mov     rcx, gs:188h
 * 00000001402D45DB: mov     [rbp+2250h+var_2208], rax
 * 00000001402D45DF: mov     rax, [rsi+168h]
 * 00000001402D45E6: call    KeGuardDispatchICall
 * 00000001402D45EB: mov     rcx, [rsi+530h]
 * 00000001402D45F2: mov     ebx, 1
 * 00000001402D45F7: mov     rax, [rsi+0F0h]
 * 00000001402D45FE: mov     dl, bl
 * 00000001402D4600: call    KeGuardDispatchICall
 * 00000001402D4605: mov     rax, [rsi+608h]
 * 00000001402D460C: mov     rcx, [rax]
 * 00000001402D460F: mov     r13d, [rcx]
 * 00000001402D4612: lea     rdx, [rcx+10h]
 * 00000001402D4616: mov     [rbp+2250h+var_2250], rdx
 * 00000001402D461A: lea     rax, ds:0[r13*2]
 * 00000001402D4622: add     rax, r13
 * 00000001402D4625: lea     rax, [rdx+rax*8]
 * 00000001402D4629: mov     [rbp+2250h+var_2248], rax
 * 00000001402D462D: xor     eax, eax
 * 00000001402D462F: mov     [rbp+2250h+var_2200], eax
 * 00000001402D4632: cmp     [rcx+0Ch], al
 * 00000001402D4635: jz      short loc_1402D464B
 * 00000001402D4637: mov     r13d, eax
 * 00000001402D463A: mov     rax, [r12]
 * 00000001402D463E: jmp     short loc_1402D4646
 * 00000001402D4640: mov     rax, [rax]
 * 00000001402D4643: add     r13d, ebx
 * 00000001402D4646: cmp     rax, r12
 * 00000001402D4649: jnz     short loc_1402D4640
 * 00000001402D464B: mov     r8d, [rsi+6B0h]
 * 00000001402D4652: mov     r15d, r13d
 * 00000001402D4655: shl     r15d, 3
 * 00000001402D4659: rdtsc
 * 00000001402D465B: shl     rdx, 20h
 * 00000001402D465F: mov     r9, 7010008004002001h
 * 00000001402D4669: or      rax, rdx
 * 00000001402D466C: mov     rcx, rax
 * 00000001402D466F: ror     rax, 3
 * 00000001402D4673: xor     rcx, rax
 * 00000001402D4676: mov     rax, r9
 * 00000001402D4679: mul     rcx
 * 00000001402D467C: mov     rbx, rax
 * 00000001402D467F: mov     [rbp+2250h+var_19A0], rdx
 * 00000001402D4686: xor     ebx, edx
 * 00000001402D4688: and     ebx, 7FFh
 * 00000001402D468E: rdtsc
 * 00000001402D4690: shl     rdx, 20h
 * 00000001402D4694: or      rax, rdx
 * 00000001402D4697: mov     rcx, rax
 * 00000001402D469A: ror     rax, 3
 * 00000001402D469E: xor     rcx, rax
 * 00000001402D46A1: mov     rax, r9
 * 00000001402D46A4: mul     rcx
 * 00000001402D46A7: lea     ecx, [rbx+1]
 * 00000001402D46AA: xor     rax, rdx
 * 00000001402D46AD: mov     [rbp+2250h+var_1998], rdx
 * 00000001402D46B4: xor     edx, edx
 * 00000001402D46B6: div     rcx
 * 00000001402D46B9: mov     rax, [rsi+0F8h]
 * 00000001402D46C0: mov     ecx, 200h
 * 00000001402D46C5: mov     r14, rdx
 * 00000001402D46C8: lea     edx, [rbx+r15]
 * 00000001402D46CC: call    KeGuardDispatchICall
 * 00000001402D46D1: mov     r11, rax
 * 00000001402D46D4: xor     eax, eax
 * 00000001402D46D6: test    r11, r11
 * 00000001402D46D9: jnz     short loc_1402D46E9
 * 00000001402D46DB: lea     ecx, [rax+1]
 * 00000001402D46DE: add     [rsi+8B0h], ecx
 * 00000001402D46E4: jmp     loc_1402D4832
 * 00000001402D46E9: mov     r10d, r14d
 * 00000001402D46EC: mov     r9, r11
 * 00000001402D46EF: cmp     r14d, 8
 * 00000001402D46F3: jb      short loc_1402D4749
 * 00000001402D46F5: mov     r8d, r14d
 * 00000001402D46F8: mov     esi, 1
 * 00000001402D46FD: shr     r8, 3
 * 00000001402D4701: mov     rdi, 7010008004002001h
 * 00000001402D470B: rdtsc
 * 00000001402D470D: shl     rdx, 20h
 * 00000001402D4711: add     r10d, 0FFFFFFF8h
 * 00000001402D4715: or      rax, rdx
 * 00000001402D4718: mov     rcx, rax
 * 00000001402D471B: ror     rax, 3
 * 00000001402D471F: xor     rcx, rax
 * 00000001402D4722: mov     rax, rdi
 * 00000001402D4725: mul     rcx
 * 00000001402D4728: mov     [rbp+2250h+var_1988], rdx
 * 00000001402D472F: xor     rdx, rax
 * 00000001402D4732: mov     [r9], rdx
 * 00000001402D4735: add     r9, 8
 * 00000001402D4739: sub     r8, rsi
 * 00000001402D473C: jnz     short loc_1402D470B
 * 00000001402D473E: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D4742: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D4749: test    r10d, r10d
 * 00000001402D474C: jz      short loc_1402D478D
 * 00000001402D474E: rdtsc
 * 00000001402D4750: shl     rdx, 20h
 * 00000001402D4754: or      rax, rdx
 * 00000001402D4757: mov     rcx, rax
 * 00000001402D475A: ror     rax, 3
 * 00000001402D475E: xor     rcx, rax
 * 00000001402D4761: mov     rax, 7010008004002001h
 * 00000001402D476B: mul     rcx
 * 00000001402D476E: mov     [rbp+2250h+var_1980], rdx
 * 00000001402D4775: xor     rdx, rax
 * 00000001402D4778: mov     eax, 1
 * 00000001402D477D: mov     [r9], dl
 * 00000001402D4780: add     r9, rax
 * 00000001402D4783: shr     rdx, 8
 * 00000001402D4787: add     r10d, 0FFFFFFFFh
 * 00000001402D478B: jnz     short loc_1402D477D
 * 00000001402D478D: mov     r10d, r14d
 * 00000001402D4790: sub     ebx, r14d
 * 00000001402D4793: mov     r8d, r15d
 * 00000001402D4796: mov     r14d, 1
 * 00000001402D479C: add     r8, r10
 * 00000001402D479F: mov     r15, 7010008004002001h
 * 00000001402D47A9: add     r8, r11
 * 00000001402D47AC: cmp     ebx, 8
 * 00000001402D47AF: jb      short loc_1402D47EA
 * 00000001402D47B1: mov     r9d, ebx
 * 00000001402D47B4: shr     r9, 3
 * 00000001402D47B8: rdtsc
 * 00000001402D47BA: shl     rdx, 20h
 * 00000001402D47BE: add     ebx, 0FFFFFFF8h
 * 00000001402D47C1: or      rax, rdx
 * 00000001402D47C4: mov     rcx, rax
 * 00000001402D47C7: ror     rax, 3
 * 00000001402D47CB: xor     rcx, rax
 * 00000001402D47CE: mov     rax, r15
 * 00000001402D47D1: mul     rcx
 * 00000001402D47D4: mov     [rbp+2250h+var_1978], rdx
 * 00000001402D47DB: xor     rdx, rax
 * 00000001402D47DE: mov     [r8], rdx
 * 00000001402D47E1: add     r8, 8
 * 00000001402D47E5: sub     r9, r14
 * 00000001402D47E8: jnz     short loc_1402D47B8
 * 00000001402D47EA: test    ebx, ebx
 * 00000001402D47EC: jz      short loc_1402D4820
 * 00000001402D47EE: rdtsc
 * 00000001402D47F0: shl     rdx, 20h
 * 00000001402D47F4: or      rax, rdx
 * 00000001402D47F7: mov     rcx, rax
 * 00000001402D47FA: ror     rax, 3
 * 00000001402D47FE: xor     rcx, rax
 * 00000001402D4801: mov     rax, r15
 * 00000001402D4804: mul     rcx
 * 00000001402D4807: mov     [rbp+2250h+var_1890], rdx
 * 00000001402D480E: xor     rdx, rax
 * 00000001402D4811: mov     [r8], dl
 * 00000001402D4814: add     r8, r14
 * 00000001402D4817: shr     rdx, 8
 * 00000001402D481B: add     ebx, 0FFFFFFFFh
 * 00000001402D481E: jnz     short loc_1402D4811
 * 00000001402D4820: lea     r15, [r10+r11]
 * 00000001402D4824: mov     [rbp+2250h+var_2010], r11
 * 00000001402D482B: test    r15, r15
 * 00000001402D482E: jnz     short loc_1402D483E
 * 00000001402D4830: xor     eax, eax
 * 00000001402D4832: mov     [rbp+2250h+var_2010], rax
 * 00000001402D4839: jmp     loc_1402D4965
 * 00000001402D483E: mov     rbx, [r12]
 * 00000001402D4842: cmp     rbx, r12
 * 00000001402D4845: jz      short loc_1402D488B
 * 00000001402D4847: mov     edi, [rbp+2250h+var_2200]
 * 00000001402D484A: mov     r14, [rbx+30h]
 * 00000001402D484E: mov     rax, [rsi+2A8h]
 * 00000001402D4855: mov     rcx, r14
 * 00000001402D4858: call    KeGuardDispatchICall
 * 00000001402D485D: test    eax, eax
 * 00000001402D485F: jnz     short loc_1402D4875
 * 00000001402D4861: cmp     edi, r13d
 * 00000001402D4864: jnb     short loc_1402D4875
 * 00000001402D4866: mov     eax, edi
 * 00000001402D4868: mov     [r15+rax*8], r14
 * 00000001402D486C: mov     eax, 1
 * 00000001402D4871: add     edi, eax
 * 00000001402D4873: jmp     short loc_1402D487A
 * 00000001402D4875: mov     eax, 1
 * 00000001402D487A: mov     rbx, [rbx]
 * 00000001402D487D: add     [rbp+2250h+var_21B4], eax
 * 00000001402D4883: cmp     rbx, r12
 * 00000001402D4886: jnz     short loc_1402D484A
 * 00000001402D4888: mov     [rbp+2250h+var_2200], edi
 * 00000001402D488B: mov     r14d, [rbp+2250h+var_2200]
 * 00000001402D488F: mov     rcx, r15
 * 00000001402D4892: mov     rax, [rsi+398h]
 * 00000001402D4899: mov     edx, r14d
 * 00000001402D489C: call    KeGuardDispatchICall
 * 00000001402D48A1: mov     r12, [rbp+2250h+var_2250]
 * 00000001402D48A5: mov     r13, [rbp+2250h+var_2248]
 * 00000001402D48A9: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D48AD: mov     rbx, [r12+8]
 * 00000001402D48B2: mov     rax, [rsi+2A8h]
 * 00000001402D48B9: mov     rcx, rbx
 * 00000001402D48BC: call    KeGuardDispatchICall
 * 00000001402D48C1: test    eax, eax
 * 00000001402D48C3: jnz     loc_1402D4951
 * 00000001402D48C9: xor     eax, eax
 * 00000001402D48CB: lea     edx, [r14-1]
 * 00000001402D48CF: mov     r8d, eax
 * 00000001402D48D2: test    edx, edx
 * 00000001402D48D4: js      short loc_1402D4905
 * 00000001402D48D6: lea     ecx, [rdx+r8]
 * 00000001402D48DA: sar     ecx, 1
 * 00000001402D48DC: movsxd  rax, ecx
 * 00000001402D48DF: mov     r9, [r15+rax*8]
 * 00000001402D48E3: cmp     rbx, r9
 * 00000001402D48E6: jnb     short loc_1402D48F3
 * 00000001402D48E8: xor     eax, eax
 * 00000001402D48EA: test    ecx, ecx
 * 00000001402D48EC: jz      short loc_1402D4905
 * 00000001402D48EE: lea     edx, [rcx-1]
 * 00000001402D48F1: jmp     short loc_1402D48F9
 * 00000001402D48F3: jbe     short loc_1402D48FE
 * 00000001402D48F5: lea     r8d, [rcx+1]
 * 00000001402D48F9: cmp     edx, r8d
 * 00000001402D48FC: jge     short loc_1402D48D6
 * 00000001402D48FE: cmp     edx, r8d
 * 00000001402D4901: jge     short loc_1402D4951
 * 00000001402D4903: xor     eax, eax
 * 00000001402D4905: cmp     [rsi+790h], eax
 * 00000001402D490B: jnz     short loc_1402D4951
 * 00000001402D490D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4917: add     rax, rsi
 * 00000001402D491A: mov     [rsi+798h], rax
 * 00000001402D4921: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D492B: add     rax, rdi
 * 00000001402D492E: mov     [rsi+7A0h], rax
 * 00000001402D4935: movsxd  rax, dword ptr [rdi]
 * 00000001402D4938: mov     [rsi+7A8h], rax
 * 00000001402D493F: mov     eax, 1
 * 00000001402D4944: mov     [rsi+7B0h], rbx
 * 00000001402D494B: mov     [rsi+790h], eax
 * 00000001402D4951: add     r12, 18h
 * 00000001402D4955: cmp     r12, r13
 * 00000001402D4958: jb      loc_1402D48AD
 * 00000001402D495E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D4965: mov     rcx, [rsi+530h]
 * 00000001402D496C: mov     rax, [rsi+118h]
 * 00000001402D4973: call    KeGuardDispatchICall
 * 00000001402D4978: mov     rax, [rsi+170h]
 * 00000001402D497F: call    KeGuardDispatchICall
 * 00000001402D4984: mov     rax, [rsi+380h]
 * 00000001402D498B: mov     rcx, [rbp+2250h+var_2208]
 * 00000001402D498F: call    KeGuardDispatchICall
 * 00000001402D4994: xor     eax, eax
 * 00000001402D4996: cmp     [rbp+2250h+var_2010], rax
 * 00000001402D499D: jz      loc_1402D3375
 * 00000001402D49A3: mov     eax, [rbp+2250h+var_21B4]
 * 00000001402D49A9: shl     eax, 9
 * 00000001402D49AC: add     [rsi+6C8h], eax
 * 00000001402D49B2: mov     rax, [rsi+100h]
 * 00000001402D49B9: mov     rcx, [rbp+2250h+var_2010]
 * 00000001402D49C0: jmp     loc_1402D375C
 * 00000001402D49C5: mov     r15d, 40000000h
 * 00000001402D49CB: test    [rsi+828h], r15d
 * 00000001402D49D2: jz      short loc_1402D4A30
 * 00000001402D49D4: test    dword ptr [rsi+82Ch], 1000h
 * 00000001402D49DE: jnz     short loc_1402D4A30
 * 00000001402D49E0: rdtsc
 * 00000001402D49E2: shl     rdx, 20h
 * 00000001402D49E6: or      rax, rdx
 * 00000001402D49E9: mov     rcx, rax
 * 00000001402D49EC: ror     rax, 3
 * 00000001402D49F0: xor     rcx, rax
 * 00000001402D49F3: mov     rax, 7010008004002001h
 * 00000001402D49FD: mul     rcx
 * 00000001402D4A00: mov     rcx, rdx
 * 00000001402D4A03: mov     [rbp+2250h+var_1888], rdx
 * 00000001402D4A0A: xor     rcx, rax
 * 00000001402D4A0D: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402D4A17: mul     rcx
 * 00000001402D4A1A: shr     rdx, 2
 * 00000001402D4A1E: lea     rax, [rdx+rdx*4]
 * 00000001402D4A22: mov     edx, 1
 * 00000001402D4A27: sub     rcx, rax
 * 00000001402D4A2A: mov     [rsi+6C4h], ecx
 * 00000001402D4A30: mov     ecx, [rsi+6C4h]
 * 00000001402D4A36: xor     eax, eax
 * 00000001402D4A38: test    ecx, ecx
 * 00000001402D4A3A: jz      loc_1402D6E94
 * 00000001402D4A40: sub     ecx, 1
 * 00000001402D4A43: jz      loc_1402D6D40
 * 00000001402D4A49: sub     ecx, 1
 * 00000001402D4A4C: jz      loc_1402D6BA2
 * 00000001402D4A52: sub     ecx, 1
 * 00000001402D4A55: jz      loc_1402D4D97
 * 00000001402D4A5B: sub     ecx, 1
 * 00000001402D4A5E: jz      loc_1402D4BFB
 * 00000001402D4A64: cmp     ecx, 1
 * 00000001402D4A67: jnz     loc_1402D7006
 * 00000001402D4A6D: mov     rbx, r13
 * 00000001402D4A70: mov     [rbp+2250h+var_219C], 0FFh
 * 00000001402D4A77: mov     r12d, eax
 * 00000001402D4A7A: mov     r14d, eax
 * 00000001402D4A7D: mov     r15d, eax
 * 00000001402D4A80: jmp     short loc_1402D4A84
 * 00000001402D4A82: xor     eax, eax
 * 00000001402D4A84: mov     [rbp+2250h+var_1F38], rax
 * 00000001402D4A8B: lea     r9, [rbp+2250h+var_2058]
 * 00000001402D4A92: mov     rax, [rsi+430h]
 * 00000001402D4A99: lea     r8, [rbp+2250h+var_219C]
 * 00000001402D4AA0: lea     rdx, [rbp+2250h+var_1F38]
 * 00000001402D4AA7: mov     ecx, r14d
 * 00000001402D4AAA: call    KeGuardDispatchICall
 * 00000001402D4AAF: test    eax, eax
 * 00000001402D4AB1: jz      loc_1402D4BD8
 * 00000001402D4AB7: mov     r13d, 1
 * 00000001402D4ABD: mov     rax, [rsi+208h]
 * 00000001402D4AC4: lea     rdx, [rbp+2250h+var_1868]
 * 00000001402D4ACB: mov     rcx, [rbp+2250h+var_2058]
 * 00000001402D4AD2: add     r12d, r13d
 * 00000001402D4AD5: call    KeGuardDispatchICall
 * 00000001402D4ADA: test    rax, rax
 * 00000001402D4ADD: jnz     loc_1402D4BAC
 * 00000001402D4AE3: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D4AED: jz      short loc_1402D4B2D
 * 00000001402D4AEF: mov     rcx, [rsi+908h]
 * 00000001402D4AF6: lea     edx, [rax+30h]
 * 00000001402D4AF9: lea     r8d, [rax+6]
 * 00000001402D4AFD: mov     rax, [rbx]
 * 00000001402D4B00: add     edx, 0FFFFFFF8h
 * 00000001402D4B03: mov     [rcx], rax
 * 00000001402D4B06: add     rbx, 8
 * 00000001402D4B0A: add     rcx, 8
 * 00000001402D4B0E: sub     r8, r13
 * 00000001402D4B11: jnz     short loc_1402D4AFD
 * 00000001402D4B13: test    edx, edx
 * 00000001402D4B15: jz      short loc_1402D4B26
 * 00000001402D4B17: mov     al, [rbx]
 * 00000001402D4B19: add     rbx, r13
 * 00000001402D4B1C: mov     [rcx], al
 * 00000001402D4B1E: add     rcx, r13
 * 00000001402D4B21: add     edx, 0FFFFFFFFh
 * 00000001402D4B24: jnz     short loc_1402D4B17
 * 00000001402D4B26: mov     rbx, [rsi+908h]
 * 00000001402D4B2D: mov     rax, [rbp+2250h+var_2058]
 * 00000001402D4B34: mov     [rbx+18h], rax
 * 00000001402D4B38: mov     rax, [rsi+588h]
 * 00000001402D4B3F: mov     [rax], rbx
 * 00000001402D4B42: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D4B49: mov     rax, [rbp+2250h+var_2058]
 * 00000001402D4B50: mov     rcx, [rsi+588h]
 * 00000001402D4B57: mov     [rcx+8], rax
 * 00000001402D4B5B: xor     eax, eax
 * 00000001402D4B5D: mov     dword ptr [rcx+14h], 1000h
 * 00000001402D4B64: cmp     [rsi+790h], eax
 * 00000001402D4B6A: jnz     short loc_1402D4BAC
 * 00000001402D4B6C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4B76: add     rax, rsi
 * 00000001402D4B79: mov     [rsi+798h], rax
 * 00000001402D4B80: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D4B8A: add     rax, rbx
 * 00000001402D4B8D: mov     [rsi+7A0h], rax
 * 00000001402D4B94: movsxd  rax, dword ptr [rbx]
 * 00000001402D4B97: mov     [rsi+7A8h], rax
 * 00000001402D4B9E: mov     [rsi+7B0h], r15
 * 00000001402D4BA5: mov     [rsi+790h], r13d
 * 00000001402D4BAC: mov     rax, [rsi+430h]
 * 00000001402D4BB3: lea     r9, [rbp+2250h+var_2058]
 * 00000001402D4BBA: lea     r8, [rbp+2250h+var_219C]
 * 00000001402D4BC1: mov     ecx, r14d
 * 00000001402D4BC4: lea     rdx, [rbp+2250h+var_1F38]
 * 00000001402D4BCB: call    KeGuardDispatchICall
 * 00000001402D4BD0: test    eax, eax
 * 00000001402D4BD2: jnz     loc_1402D4ABD
 * 00000001402D4BD8: mov     edx, 1
 * 00000001402D4BDD: add     r14d, edx
 * 00000001402D4BE0: add     r15, rdx
 * 00000001402D4BE3: lea     eax, [rdx+2]
 * 00000001402D4BE6: cmp     r14d, eax
 * 00000001402D4BE9: jb      loc_1402D4A82
 * 00000001402D4BEF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D4BF6: jmp     loc_1402D6FCE
 * 00000001402D4BFB: mov     r12d, eax
 * 00000001402D4BFE: mov     [rbp+2250h+var_2238], eax
 * 00000001402D4C01: mov     rax, [rsi+318h]
 * 00000001402D4C08: xor     ecx, ecx
 * 00000001402D4C0A: call    KeGuardDispatchICall
 * 00000001402D4C0F: mov     r15, rax
 * 00000001402D4C12: xor     eax, eax
 * 00000001402D4C14: test    r15, r15
 * 00000001402D4C17: jz      loc_1402D6FC9
 * 00000001402D4C1D: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D4C21: mov     r13d, eax
 * 00000001402D4C24: mov     [rbp+2250h+var_1F30], rax
 * 00000001402D4C2B: lea     rdx, [rbp+2250h+var_1F30]
 * 00000001402D4C32: mov     rax, [rsi+310h]
 * 00000001402D4C39: mov     rcx, r15
 * 00000001402D4C3C: mov     rbx, rdi
 * 00000001402D4C3F: mov     r12d, 1
 * 00000001402D4C45: call    KeGuardDispatchICall
 * 00000001402D4C4A: mov     r14, rax
 * 00000001402D4C4D: test    rax, rax
 * 00000001402D4C50: jz      loc_1402D4D6B
 * 00000001402D4C56: lea     edi, [r12+5]
 * 00000001402D4C5B: xor     r13d, r13d
 * 00000001402D4C5E: mov     rax, [rsi+208h]
 * 00000001402D4C65: lea     rdx, [rbp+2250h+var_1860]
 * 00000001402D4C6C: mov     rcx, r14
 * 00000001402D4C6F: inc     r12d
 * 00000001402D4C72: call    KeGuardDispatchICall
 * 00000001402D4C77: test    rax, rax
 * 00000001402D4C7A: jnz     loc_1402D4D41
 * 00000001402D4C80: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D4C8A: lea     r9d, [rax+1]
 * 00000001402D4C8E: jz      short loc_1402D4CCD
 * 00000001402D4C90: mov     rcx, [rsi+908h]
 * 00000001402D4C97: lea     edx, [rax+30h]
 * 00000001402D4C9A: mov     r8, rdi
 * 00000001402D4C9D: mov     rax, [rbx]
 * 00000001402D4CA0: add     edx, 0FFFFFFF8h
 * 00000001402D4CA3: mov     [rcx], rax
 * 00000001402D4CA6: add     rbx, 8
 * 00000001402D4CAA: add     rcx, 8
 * 00000001402D4CAE: sub     r8, r9
 * 00000001402D4CB1: jnz     short loc_1402D4C9D
 * 00000001402D4CB3: test    edx, edx
 * 00000001402D4CB5: jz      short loc_1402D4CC6
 * 00000001402D4CB7: mov     al, [rbx]
 * 00000001402D4CB9: add     rbx, r9
 * 00000001402D4CBC: mov     [rcx], al
 * 00000001402D4CBE: add     rcx, r9
 * 00000001402D4CC1: add     edx, 0FFFFFFFFh
 * 00000001402D4CC4: jnz     short loc_1402D4CB7
 * 00000001402D4CC6: mov     rbx, [rsi+908h]
 * 00000001402D4CCD: mov     [rbx+18h], r14
 * 00000001402D4CD1: mov     [rbx+20h], r15
 * 00000001402D4CD5: mov     rax, [rsi+588h]
 * 00000001402D4CDC: mov     [rax], rbx
 * 00000001402D4CDF: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D4CE6: mov     rax, [rsi+588h]
 * 00000001402D4CED: mov     [rax+8], r14
 * 00000001402D4CF1: mov     dword ptr [rax+14h], 1000h
 * 00000001402D4CF8: cmp     [rsi+790h], r13d
 * 00000001402D4CFF: jnz     short loc_1402D4D41
 * 00000001402D4D01: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4D0B: add     rax, rsi
 * 00000001402D4D0E: mov     [rsi+798h], rax
 * 00000001402D4D15: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D4D1F: add     rax, rbx
 * 00000001402D4D22: mov     [rsi+7A0h], rax
 * 00000001402D4D29: movsxd  rax, dword ptr [rbx]
 * 00000001402D4D2C: mov     [rsi+7A8h], rax
 * 00000001402D4D33: mov     [rsi+7B0h], rdi
 * 00000001402D4D3A: mov     [rsi+790h], r9d
 * 00000001402D4D41: mov     rax, [rsi+310h]
 * 00000001402D4D48: lea     rdx, [rbp+2250h+var_1F30]
 * 00000001402D4D4F: mov     rcx, r15
 * 00000001402D4D52: call    KeGuardDispatchICall
 * 00000001402D4D57: mov     r14, rax
 * 00000001402D4D5A: test    rax, rax
 * 00000001402D4D5D: jnz     loc_1402D4C5E
 * 00000001402D4D63: mov     r13d, [rbp+2250h+var_2238]
 * 00000001402D4D67: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D4D6B: mov     rax, [rsi+318h]
 * 00000001402D4D72: add     r13d, r12d
 * 00000001402D4D75: mov     rcx, r15
 * 00000001402D4D78: mov     [rbp+2250h+var_2238], r13d
 * 00000001402D4D7C: call    KeGuardDispatchICall
 * 00000001402D4D81: mov     r15, rax
 * 00000001402D4D84: xor     eax, eax
 * 00000001402D4D86: test    r15, r15
 * 00000001402D4D89: jnz     loc_1402D4C24
 * 00000001402D4D8F: mov     r12d, r13d
 * 00000001402D4D92: jmp     loc_1402D6FC2
 * 00000001402D4D97: mov     r12d, eax
 * 00000001402D4D9A: mov     rax, [rsi+4E8h]
 * 00000001402D4DA1: mov     r13, rsi
 * 00000001402D4DA4: mov     [rbp+2250h+var_21E0], rsi
 * 00000001402D4DA8: mov     [rbp+2250h+var_20F8], rsi
 * 00000001402D4DAF: mov     rbx, [rax]
 * 00000001402D4DB2: mov     [rbp+2250h+var_21B0], rbx
 * 00000001402D4DB9: test    [rsi+828h], r15d
 * 00000001402D4DC0: jz      short loc_1402D4DC9
 * 00000001402D4DC2: xor     eax, eax
 * 00000001402D4DC4: jmp     loc_1402D6FCE
 * 00000001402D4DC9: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402D4DCD: mov     rax, [rcx+28h]
 * 00000001402D4DD1: test    rax, rax
 * 00000001402D4DD4: jz      loc_1402D4E64
 * 00000001402D4DDA: mov     edx, 1
 * 00000001402D4DDF: mov     r12d, edx
 * 00000001402D4DE2: cmp     rbx, rax
 * 00000001402D4DE5: jz      loc_1402D6FCE
 * 00000001402D4DEB: mov     [rcx+18h], rbx
 * 00000001402D4DEF: mov     rax, [rsi+588h]
 * 00000001402D4DF6: mov     [rax], rcx
 * 00000001402D4DF9: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D4E00: mov     rax, [rsi+588h]
 * 00000001402D4E07: mov     [rax+8], rbx
 * 00000001402D4E0B: mov     dword ptr [rax+14h], 1000h
 * 00000001402D4E12: xor     eax, eax
 * 00000001402D4E14: cmp     [rsi+790h], eax
 * 00000001402D4E1A: jnz     loc_1402D6FCE
 * 00000001402D4E20: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D4E2A: add     rax, rsi
 * 00000001402D4E2D: mov     [rsi+798h], rax
 * 00000001402D4E34: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D4E3E: add     rax, rcx
 * 00000001402D4E41: mov     [rsi+7A0h], rax
 * 00000001402D4E48: movsxd  rax, dword ptr [rcx]
 * 00000001402D4E4B: mov     [rsi+7A8h], rax
 * 00000001402D4E52: mov     [rsi+7B0h], r10
 * 00000001402D4E59: mov     [rsi+790h], edx
 * 00000001402D4E5F: jmp     loc_1402D6FCE
 * 00000001402D4E64: test    rbx, rbx
 * 00000001402D4E67: jz      loc_1402D6FC9
 * 00000001402D4E6D: mov     rax, [rsi+200h]
 * 00000001402D4E74: lea     r8, [rbp+2250h+var_21A4]
 * 00000001402D4E7B: mov     r14d, 1
 * 00000001402D4E81: mov     [rbp+2250h+var_2158], rsi
 * 00000001402D4E88: lea     rdx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D4E8F: mov     [rbp+2250h+var_2238], r14d
 * 00000001402D4E93: mov     rcx, rbx
 * 00000001402D4E96: mov     r12d, r14d
 * 00000001402D4E99: call    KeGuardDispatchICall
 * 00000001402D4E9E: mov     [rbp+2250h+var_21D8], rax
 * 00000001402D4EA2: test    rax, rax
 * 00000001402D4EA5: jnz     short loc_1402D4EB1
 * 00000001402D4EA7: mov     ecx, 0C000007Bh
 * 00000001402D4EAC: jmp     loc_1402D6B66
 * 00000001402D4EB1: mov     r12d, [rbp+2250h+var_21A4]
 * 00000001402D4EB8: xor     eax, eax
 * 00000001402D4EBA: mov     r15, [rbp+2250h+BugCheckParameter2]
 * 00000001402D4EC1: mov     ecx, 4
 * 00000001402D4EC6: mov     [rbp+2250h+var_2090], rax
 * 00000001402D4ECD: xor     edx, edx
 * 00000001402D4ECF: lea     rax, [rbp+2250h+var_2088]
 * 00000001402D4ED6: mov     [rbp+2250h+var_2200], r12d
 * 00000001402D4EDA: mov     [rbp+2250h+var_2248], r15
 * 00000001402D4EDE: mov     [rax], dl
 * 00000001402D4EE0: add     rax, r14
 * 00000001402D4EE3: add     ecx, 0FFFFFFFFh
 * 00000001402D4EE6: jnz     short loc_1402D4EDE
 * 00000001402D4EE8: xor     eax, eax
 * 00000001402D4EEA: mov     r14d, eax
 * 00000001402D4EED: mov     dword ptr [rbp+2250h+var_2218], eax
 * 00000001402D4EF0: cmp     [rsi+6ACh], eax
 * 00000001402D4EF6: jbe     loc_1402D5100
 * 00000001402D4EFC: mov     edx, [rbp+2250h+var_2088]
 * 00000001402D4F02: mov     r9d, dword ptr [rbp+2250h+var_2090+4]
 * 00000001402D4F09: mov     r10d, dword ptr [rbp+2250h+var_2090]
 * 00000001402D4F10: mov     rax, [rsi+900h]
 * 00000001402D4F17: mov     rbx, rsi
 * 00000001402D4F1A: test    rax, rax
 * 00000001402D4F1D: cmovnz  rbx, rax
 * 00000001402D4F21: xor     eax, eax
 * 00000001402D4F23: mov     [rbp+2250h+var_2250], rbx
 * 00000001402D4F27: mov     r11d, eax
 * 00000001402D4F2A: mov     r8d, [rbx+6A8h]
 * 00000001402D4F31: add     r8, rbx
 * 00000001402D4F34: test    r10d, r10d
 * 00000001402D4F37: jz      short loc_1402D4F47
 * 00000001402D4F39: cmp     r9d, r14d
 * 00000001402D4F3C: ja      short loc_1402D4F47
 * 00000001402D4F3E: mov     r8d, edx
 * 00000001402D4F41: mov     r11d, r9d
 * 00000001402D4F44: add     r8, rbx
 * 00000001402D4F47: cmp     r11d, r14d
 * 00000001402D4F4A: jz      loc_1402D508D
 * 00000001402D4F50: mov     eax, r14d
 * 00000001402D4F53: mov     r12d, 2
 * 00000001402D4F59: sub     eax, r11d
 * 00000001402D4F5C: mov     ebx, 0FFFh
 * 00000001402D4F61: add     r11d, eax
 * 00000001402D4F64: mov     r9d, eax
 * 00000001402D4F67: mov     [rbp+2250h+var_21D0], r11d
 * 00000001402D4F6E: mov     r13, 0AAAAAAAAAAAAAAABh
 * 00000001402D4F78: lea     r11d, [r12+0Ah]
 * 00000001402D4F7D: lea     r14d, [r12+1]
 * 00000001402D4F82: mov     ecx, [r8]
 * 00000001402D4F85: cmp     ecx, r11d
 * 00000001402D4F88: jg      short loc_1402D4FCB
 * 00000001402D4F8A: jz      short loc_1402D4FE4
 * 00000001402D4F8C: sub     ecx, 1
 * 00000001402D4F8F: jz      short loc_1402D4FE4
 * 00000001402D4F91: sub     ecx, 6
 * 00000001402D4F94: jz      short loc_1402D4FB9
 * 00000001402D4F96: sub     ecx, 1
 * 00000001402D4F99: jz      short loc_1402D4FAF
 * 00000001402D4F9B: cmp     ecx, r12d
 * 00000001402D4F9E: jnz     short loc_1402D501C
 * 00000001402D4FA0: mov     eax, [r8+1Ch]
 * 00000001402D4FA4: add     eax, r14d
 * 00000001402D4FA7: shl     eax, 4
 * 00000001402D4FAA: jmp     loc_1402D5054
 * 00000001402D4FAF: movzx   eax, word ptr [r8+20h]
 * 00000001402D4FB4: jmp     loc_1402D504E
 * 00000001402D4FB9: mov     eax, [r8+18h]
 * 00000001402D4FBD: add     eax, r12d
 * 00000001402D4FC0: lea     eax, [rax+rax*2]
 * 00000001402D4FC3: shl     eax, 3
 * 00000001402D4FC6: jmp     loc_1402D5054
 * 00000001402D4FCB: cmp     ecx, 1Ch
 * 00000001402D4FCE: jz      short loc_1402D5049
 * 00000001402D4FD0: cmp     ecx, 1Eh
 * 00000001402D4FD3: jz      short loc_1402D5023
 * 00000001402D4FD5: cmp     ecx, 20h ; ' '
 * 00000001402D4FD8: jle     short loc_1402D501C
 * 00000001402D4FDA: cmp     ecx, 22h ; '"'
 * 00000001402D4FDD: jle     short loc_1402D4FFB
 * 00000001402D4FDF: cmp     ecx, 2Bh ; '+'
 * 00000001402D4FE2: jnz     short loc_1402D501C
 * 00000001402D4FE4: mov     ecx, [r8+10h]
 * 00000001402D4FE8: mov     rax, r13
 * 00000001402D4FEB: mul     rcx
 * 00000001402D4FEE: shr     rdx, 3
 * 00000001402D4FF2: lea     eax, ds:30h[rdx*4]
 * 00000001402D4FF9: jmp     short loc_1402D5054
 * 00000001402D4FFB: mov     ecx, [r8+20h]
 * 00000001402D4FFF: mov     edx, [r8+28h]
 * 00000001402D5003: and     rcx, rbx
 * 00000001402D5006: add     rdx, rbx
 * 00000001402D5009: add     rdx, rcx
 * 00000001402D500C: shr     rdx, 0Ch
 * 00000001402D5010: lea     eax, [rdx+rdx*4]
 * 00000001402D5013: lea     eax, ds:30h[rax*4]
 * 00000001402D501A: jmp     short loc_1402D5054
 * 00000001402D501C: mov     eax, 30h ; '0'
 * 00000001402D5021: jmp     short loc_1402D5054
 * 00000001402D5023: mov     ecx, [r8+24h]
 * 00000001402D5027: mov     rax, r13
 * 00000001402D502A: dec     ecx
 * 00000001402D502C: mul     rcx
 * 00000001402D502F: movzx   eax, word ptr [r8+28h]
 * 00000001402D5034: shr     rdx, 3
 * 00000001402D5038: add     edx, 7
 * 00000001402D503B: and     edx, 0FFFFFFF8h
 * 00000001402D503E: add     eax, r12d
 * 00000001402D5041: lea     eax, [rax+rax*2]
 * 00000001402D5044: lea     eax, [rdx+rax*8]
 * 00000001402D5047: jmp     short loc_1402D5054
 * 00000001402D5049: movzx   eax, word ptr [r8+28h]
 * 00000001402D504E: add     eax, 37h ; '7'
 * 00000001402D5051: and     eax, 0FFFFFFF8h
 * 00000001402D5054: add     r8, rax
 * 00000001402D5057: mov     eax, 1
 * 00000001402D505C: sub     r9, rax
 * 00000001402D505F: jnz     loc_1402D4F82
 * 00000001402D5065: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D5069: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D5070: mov     r11d, [rbp+2250h+var_21D0]
 * 00000001402D5077: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402D507B: mov     r14d, dword ptr [rbp+2250h+var_2218]
 * 00000001402D507F: mov     r15, [rbp+2250h+var_2248]
 * 00000001402D5083: mov     r12d, [rbp+2250h+var_2200]
 * 00000001402D5087: mov     r13, [rbp+2250h+var_21E0]
 * 00000001402D508B: jmp     short loc_1402D5092
 * 00000001402D508D: mov     eax, 1
 * 00000001402D5092: mov     edx, r8d
 * 00000001402D5095: mov     dword ptr [rbp+2250h+var_2090], eax
 * 00000001402D509B: sub     edx, ebx
 * 00000001402D509D: mov     dword ptr [rbp+2250h+var_2090+4], r11d
 * 00000001402D50A4: mov     [rbp+2250h+var_2088], edx
 * 00000001402D50AA: mov     r10d, eax
 * 00000001402D50AD: movsxd  rcx, dword ptr [r8]
 * 00000001402D50B0: mov     r9d, r11d
 * 00000001402D50B3: cmp     ecx, 2Bh ; '+'
 * 00000001402D50B6: ja      short loc_1402D50D8
 * 00000001402D50B8: mov     r11, 80000001002h
 * 00000001402D50C2: bt      r11, rcx
 * 00000001402D50C6: jnb     short loc_1402D50D8
 * 00000001402D50C8: mov     rax, [rbp+2250h+var_21D8]
 * 00000001402D50CC: cmp     [r8+8], rax
 * 00000001402D50D0: jnz     short loc_1402D50D8
 * 00000001402D50D2: cmp     [r8+10h], r12d
 * 00000001402D50D6: jz      short loc_1402D5103
 * 00000001402D50D8: lea     eax, [rcx-21h]
 * 00000001402D50DB: mov     ecx, 1
 * 00000001402D50E0: cmp     eax, ecx
 * 00000001402D50E2: ja      short loc_1402D50EA
 * 00000001402D50E4: cmp     [r8+20h], r15
 * 00000001402D50E8: jz      short loc_1402D5103
 * 00000001402D50EA: add     r14d, ecx
 * 00000001402D50ED: mov     dword ptr [rbp+2250h+var_2218], r14d
 * 00000001402D50F1: cmp     r14d, [rsi+6ACh]
 * 00000001402D50F8: jb      loc_1402D4F10
 * 00000001402D50FE: xor     eax, eax
 * 00000001402D5100: mov     r8, rax
 * 00000001402D5103: mov     [rbp+2250h+var_20E0], r8
 * 00000001402D510A: test    r8, r8
 * 00000001402D510D: jz      short loc_1402D5119
 * 00000001402D510F: mov     ecx, 0C000010Eh
 * 00000001402D5114: jmp     loc_1402D6B5B
 * 00000001402D5119: mov     rax, [rsi+2A8h]
 * 00000001402D5120: mov     rcx, [rbp+2250h+var_21B0]
 * 00000001402D5127: call    KeGuardDispatchICall
 * 00000001402D512C: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D5136: mov     ebx, eax
 * 00000001402D5138: mov     [rbp+2250h+var_21B4], eax
 * 00000001402D513E: mov     eax, [rbp+2250h+var_21A4]
 * 00000001402D5144: mov     dword ptr [rbp+2250h+var_2218], eax
 * 00000001402D5147: jz      short loc_1402D516E
 * 00000001402D5149: mov     rdx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D5150: lea     rcx, [rbp+2250h+var_20F8]
 * 00000001402D5157: mov     r8d, 9
 * 00000001402D515D: call    sub_14087CF84
 * 00000001402D5162: mov     r13, [rbp+2250h+var_20F8]
 * 00000001402D5169: jmp     loc_1402D6B59
 * 00000001402D516E: mov     rcx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D5175: lea     r9, [rbp+2250h+var_21A4]
 * 00000001402D517C: xor     eax, eax
 * 00000001402D517E: xor     r8d, r8d
 * 00000001402D5181: mov     [rbp+2250h+var_1DC0], rax
 * 00000001402D5188: mov     [rbp+2250h+var_1F50], eax
 * 00000001402D518E: mov     rax, [rsi+1F0h]
 * 00000001402D5195: lea     r14d, [r8+1]
 * 00000001402D5199: mov     dl, r14b
 * 00000001402D519C: call    KeGuardDispatchICall
 * 00000001402D51A1: mov     rdx, rax
 * 00000001402D51A4: lea     r8d, [r14+0Bh]
 * 00000001402D51A8: neg     rax
 * 00000001402D51AB: mov     [rbp+2250h+var_1DD8], rdx
 * 00000001402D51B2: lea     r9, [rbp+2250h+var_21A4]
 * 00000001402D51B9: mov     dl, r14b
 * 00000001402D51BC: sbb     ecx, ecx
 * 00000001402D51BE: and     ecx, [rbp+2250h+var_21A4]
 * 00000001402D51C4: mov     [rbp+2250h+var_21A4], ecx
 * 00000001402D51CA: mov     rax, [rsi+1F0h]
 * 00000001402D51D1: mov     [rbp+2250h+var_1F5C], ecx
 * 00000001402D51D7: mov     rcx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D51DE: call    KeGuardDispatchICall
 * 00000001402D51E3: mov     rdx, rax
 * 00000001402D51E6: mov     [rbp+2250h+var_2208], rax
 * 00000001402D51EA: neg     rax
 * 00000001402D51ED: mov     [rbp+2250h+var_1DD0], rdx
 * 00000001402D51F4: lea     r8d, [r14+9]
 * 00000001402D51F8: mov     dl, r14b
 * 00000001402D51FB: sbb     ecx, ecx
 * 00000001402D51FD: lea     r9, [rbp+2250h+var_21A4]
 * 00000001402D5204: and     ecx, [rbp+2250h+var_21A4]
 * 00000001402D520A: mov     [rbp+2250h+var_21A4], ecx
 * 00000001402D5210: mov     rax, [rsi+1F0h]
 * 00000001402D5217: mov     [rbp+2250h+var_21B8], ecx
 * 00000001402D521D: mov     [rbp+2250h+var_1F58], ecx
 * 00000001402D5223: mov     rcx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D522A: call    KeGuardDispatchICall
 * 00000001402D522F: mov     rdx, rax
 * 00000001402D5232: neg     rax
 * 00000001402D5235: mov     [rbp+2250h+var_1DC8], rdx
 * 00000001402D523C: sbb     ecx, ecx
 * 00000001402D523E: and     ecx, [rbp+2250h+var_21A4]
 * 00000001402D5244: mov     [rbp+2250h+var_21A4], ecx
 * 00000001402D524A: mov     rax, [rsi+1F8h]
 * 00000001402D5251: mov     [rbp+2250h+var_1F54], ecx
 * 00000001402D5257: mov     rcx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D525E: call    KeGuardDispatchICall
 * 00000001402D5263: mov     rcx, rax
 * 00000001402D5266: test    rax, rax
 * 00000001402D5269: jnz     short loc_1402D5278
 * 00000001402D526B: mov     ecx, 0C000007Bh
 * 00000001402D5270: mov     r12d, r14d
 * 00000001402D5273: jmp     loc_1402D6B5F
 * 00000001402D5278: mov     rax, [rbp+2250h+BugCheckParameter2]
 * 00000001402D527F: mov     r15d, [rsi+684h]
 * 00000001402D5286: mov     r8d, [rsi+7BCh]
 * 00000001402D528D: mov     [rbp+2250h+var_1DE0], rax
 * 00000001402D5294: mov     eax, [rcx+54h]
 * 00000001402D5297: mov     [rbp+2250h+var_1F60], eax
 * 00000001402D529D: mov     eax, ebx
 * 00000001402D529F: neg     eax
 * 00000001402D52A1: lea     eax, [r15+0F0h]
 * 00000001402D52A8: sbb     r9d, r9d
 * 00000001402D52AB: and     r9d, 0Bh
 * 00000001402D52AF: mov     [rbp+2250h+var_2200], r9d
 * 00000001402D52B3: cmp     eax, [rsi+8B4h]
 * 00000001402D52B9: jbe     loc_1402D53BE
 * 00000001402D52BF: mov     edx, eax
 * 00000001402D52C1: mov     rcx, rsi
 * 00000001402D52C4: call    sub_1402E732C
 * 00000001402D52C9: mov     rbx, rax
 * 00000001402D52CC: mov     [rbp+2250h+var_2250], rax
 * 00000001402D52D0: xor     eax, eax
 * 00000001402D52D2: test    rbx, rbx
 * 00000001402D52D5: jz      loc_1402D53AD
 * 00000001402D52DB: mov     ecx, [rsi+828h]
 * 00000001402D52E1: test    cl, 4
 * 00000001402D52E4: jnz     loc_1402D53A0
 * 00000001402D52EA: mov     eax, [rsi+684h]
 * 00000001402D52F0: and     ecx, 20000000h
 * 00000001402D52F6: mov     r9, [rsi+668h]
 * 00000001402D52FD: neg     ecx
 * 00000001402D52FF: mov     rcx, rsi
 * 00000001402D5302: sbb     r8d, r8d
 * 00000001402D5305: and     r8d, [rsi+7BCh]
 * 00000001402D530C: cmp     eax, 8
 * 00000001402D530F: jb      short loc_1402D5329
 * 00000001402D5311: mov     edx, eax
 * 00000001402D5313: shr     rdx, 3
 * 00000001402D5317: xor     r12d, r12d
 * 00000001402D531A: mov     [rcx], r12
 * 00000001402D531D: add     eax, 0FFFFFFF8h
 * 00000001402D5320: add     rcx, 8
 * 00000001402D5324: sub     rdx, r14
 * 00000001402D5327: jnz     short loc_1402D531A
 * 00000001402D5329: xor     edx, edx
 * 00000001402D532B: test    eax, eax
 * 00000001402D532D: jz      short loc_1402D5339
 * 00000001402D532F: mov     [rcx], dl
 * 00000001402D5331: add     rcx, r14
 * 00000001402D5334: add     eax, 0FFFFFFFFh
 * 00000001402D5337: jnz     short loc_1402D532F
 * 00000001402D5339: mov     r14d, [rbx+7BCh]
 * 00000001402D5340: mov     eax, 3
 * 00000001402D5345: mov     [rbx+7BCh], r8d
 * 00000001402D534C: cmp     r8d, eax
 * 00000001402D534F: jz      short loc_1402D5384
 * 00000001402D5351: test    dword ptr [rbx+828h], 10000000h
 * 00000001402D535B: mov     rcx, rdx
 * 00000001402D535E: cmovz   ecx, r8d
 * 00000001402D5362: test    ecx, ecx
 * 00000001402D5364: jz      short loc_1402D537B
 * 00000001402D5366: mov     rax, [rbx+228h]
 * 00000001402D536D: lea     rcx, [r9-8]
 * 00000001402D5371: mov     rdx, [rcx]
 * 00000001402D5374: call    KeGuardDispatchICall
 * 00000001402D5379: jmp     short loc_1402D5393
 * 00000001402D537B: mov     rax, [rbx+100h]
 * 00000001402D5382: jmp     short loc_1402D538B
 * 00000001402D5384: mov     rax, [rbx+368h]
 * 00000001402D538B: mov     rcx, r9
 * 00000001402D538E: call    KeGuardDispatchICall
 * 00000001402D5393: mov     [rbx+7BCh], r14d
 * 00000001402D539A: mov     r14d, 1
 * 00000001402D53A0: and     dword ptr [rbx+828h], 0FFFFFFFBh
 * 00000001402D53A7: mov     r9d, [rbp+2250h+var_2200]
 * 00000001402D53AB: jmp     short loc_1402D53CB
 * 00000001402D53AD: mov     [rbp+2250h+var_2158], rax
 * 00000001402D53B4: mov     ecx, 0C000009Ah
 * 00000001402D53B9: jmp     loc_1402D5270
 * 00000001402D53BE: mov     rbx, rsi
 * 00000001402D53C1: mov     [rsi+684h], eax
 * 00000001402D53C7: mov     [rbp+2250h+var_2250], rbx
 * 00000001402D53CB: mov     eax, 5
 * 00000001402D53D0: lea     r12, [rbx+r15]
 * 00000001402D53D4: add     [rbx+6ACh], eax
 * 00000001402D53DA: lea     rdi, [rbp+2250h+var_1DE0]
 * 00000001402D53E1: xor     r10d, r10d
 * 00000001402D53E4: mov     [rbp+2250h+var_1F28], r12
 * 00000001402D53EB: mov     [rbp+2250h+var_20E0], r12
 * 00000001402D53F2: lea     rsi, [rbp+2250h+var_1F60]
 * 00000001402D53F9: mov     [rbp+2250h+var_2248], rax
 * 00000001402D53FD: mov     r13d, [rsi]
 * 00000001402D5400: mov     ecx, 30h ; '0'
 * 00000001402D5405: mov     r15, [rdi]
 * 00000001402D5408: mov     rax, r12
 * 00000001402D540B: mov     [rbp+2250h+var_21D0], r13d
 * 00000001402D5412: lea     edx, [rcx-2Ah]
 * 00000001402D5415: mov     [rax], r10
 * 00000001402D5418: add     ecx, 0FFFFFFF8h
 * 00000001402D541B: add     rax, 8
 * 00000001402D541F: sub     rdx, r14
 * 00000001402D5422: jnz     short loc_1402D5415
 * 00000001402D5424: test    ecx, ecx
 * 00000001402D5426: jz      short loc_1402D5433
 * 00000001402D5428: mov     [rax], r10b
 * 00000001402D542B: add     rax, r14
 * 00000001402D542E: add     ecx, 0FFFFFFFFh
 * 00000001402D5431: jnz     short loc_1402D5428
 * 00000001402D5433: mov     [r12], r9d
 * 00000001402D5437: lea     rcx, [r15+r13]
 * 00000001402D543B: mov     [r12+8], r15
 * 00000001402D5440: mov     r9, r15
 * 00000001402D5443: mov     [r12+10h], r13d
 * 00000001402D5448: mov     rax, r15
 * 00000001402D544B: add     [rbx+6C8h], r13d
 * 00000001402D5452: mov     r11d, [rbx+6B4h]
 * 00000001402D5459: mov     r14, [rbx+6B8h]
 * 00000001402D5460: cmp     r15, rcx
 * 00000001402D5463: jnb     short loc_1402D5475
 * 00000001402D5465: mov     edx, 40h ; '@'
 * 00000001402D546A: prefetchnta byte ptr [rax]
 * 00000001402D546D: add     rax, rdx
 * 00000001402D5470: cmp     rax, rcx
 * 00000001402D5473: jb      short loc_1402D546A
 * 00000001402D5475: mov     r10d, r13d
 * 00000001402D5478: mov     r8, r14
 * 00000001402D547B: shr     r10d, 7
 * 00000001402D547F: test    r10d, r10d
 * 00000001402D5482: jz      short loc_1402D54F0
 * 00000001402D5484: mov     ebx, 1
 * 00000001402D5489: mov     r13, 7010008004002001h
 * 00000001402D5493: mov     eax, 8
 * 00000001402D5498: xor     r8, [r9]
 * 00000001402D549B: mov     ecx, r11d
 * 00000001402D549E: rol     r8, cl
 * 00000001402D54A1: xor     r8, [r9+8]
 * 00000001402D54A5: add     r9, 10h
 * 00000001402D54A9: rol     r8, cl
 * 00000001402D54AC: sub     rax, rbx
 * 00000001402D54AF: jnz     short loc_1402D5498
 * 00000001402D54B1: mov     rcx, r9
 * 00000001402D54B4: sub     rcx, r15
 * 00000001402D54B7: xor     rcx, r14
 * 00000001402D54BA: mov     rax, rcx
 * 00000001402D54BD: rol     rax, 11h
 * 00000001402D54C1: xor     rcx, rax
 * 00000001402D54C4: mov     rax, r13
 * 00000001402D54C7: mul     rcx
 * 00000001402D54CA: xor     r11d, eax
 * 00000001402D54CD: mov     [rbp+2250h+var_1858], rdx
 * 00000001402D54D4: xor     r11d, edx
 * 00000001402D54D7: and     r11d, 3Fh
 * 00000001402D54DB: cmovz   r11d, ebx
 * 00000001402D54DF: add     r10d, 0FFFFFFFFh
 * 00000001402D54E3: jnz     short loc_1402D5493
 * 00000001402D54E5: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402D54E9: mov     r13d, [rbp+2250h+var_21D0]
 * 00000001402D54F0: mov     edx, r13d
 * 00000001402D54F3: mov     r14d, 1
 * 00000001402D54F9: and     edx, 7Fh
 * 00000001402D54FC: cmp     edx, 8
 * 00000001402D54FF: jb      short loc_1402D551C
 * 00000001402D5501: mov     eax, edx
 * 00000001402D5503: shr     rax, 3
 * 00000001402D5507: xor     r8, [r9]
 * 00000001402D550A: mov     ecx, r11d
 * 00000001402D550D: rol     r8, cl
 * 00000001402D5510: add     r9, 8
 * 00000001402D5514: add     edx, 0FFFFFFF8h
 * 00000001402D5517: sub     rax, r14
 * 00000001402D551A: jnz     short loc_1402D5507
 * 00000001402D551C: test    edx, edx
 * 00000001402D551E: jz      short loc_1402D5535
 * 00000001402D5520: movzx   eax, byte ptr [r9]
 * 00000001402D5524: mov     ecx, r11d
 * 00000001402D5527: xor     r8, rax
 * 00000001402D552A: add     r9, r14
 * 00000001402D552D: rol     r8, cl
 * 00000001402D5530: add     edx, 0FFFFFFFFh
 * 00000001402D5533: jnz     short loc_1402D5520
 * 00000001402D5535: mov     rax, r8
 * 00000001402D5538: shr     rax, 1Fh
 * 00000001402D553C: xor     r10d, r10d
 * 00000001402D553F: jmp     short loc_1402D5548
 * 00000001402D5541: xor     r8d, eax
 * 00000001402D5544: shr     rax, 1Fh
 * 00000001402D5548: test    rax, rax
 * 00000001402D554B: jnz     short loc_1402D5541
 * 00000001402D554D: mov     r9d, [rbp+2250h+var_2200]
 * 00000001402D5551: btr     r8d, 1Fh
 * 00000001402D5556: mov     [r12+14h], r8d
 * 00000001402D555B: add     rsi, 4
 * 00000001402D555F: add     [rbx+6C8h], r13d
 * 00000001402D5566: add     rdi, 8
 * 00000001402D556A: mov     r12, [rbp+2250h+var_1F28]
 * 00000001402D5571: add     r12, 30h ; '0'
 * 00000001402D5575: sub     [rbp+2250h+var_2248], r14
 * 00000001402D5579: mov     [rbp+2250h+var_1F28], r12
 * 00000001402D5580: jnz     loc_1402D53FD
 * 00000001402D5586: mov     rcx, [rbp+2250h+var_20E0]
 * 00000001402D558D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D5594: mov     rax, [rbp+2250h+BugCheckParameter2]
 * 00000001402D559B: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D559F: mov     edx, [rbp+2250h+var_21B4]
 * 00000001402D55A5: mov     dword ptr [rcx], 2Ch ; ','
 * 00000001402D55AB: mov     [rcx+18h], rax
 * 00000001402D55AF: test    dword ptr [rbx+828h], 10200000h
 * 00000001402D55B9: jnz     short loc_1402D55CF
 * 00000001402D55BB: test    edx, edx
 * 00000001402D55BD: jnz     short loc_1402D55D3
 * 00000001402D55BF: test    dword ptr [rbx+82Ch], 8000h
 * 00000001402D55C9: jz      short loc_1402D55DB
 * 00000001402D55CB: or      [rcx+20h], r14d
 * 00000001402D55CF: test    edx, edx
 * 00000001402D55D1: jz      short loc_1402D55DB
 * 00000001402D55D3: mov     eax, 2
 * 00000001402D55D8: or      [rcx+20h], eax
 * 00000001402D55DB: mov     r9, [rbp+2250h+BugCheckParameter2]
 * 00000001402D55E2: lea     rax, [rbp+2250h+var_2008]
 * 00000001402D55E9: mov     r8d, dword ptr [rbp+2250h+var_2218]
 * 00000001402D55ED: lea     rcx, [rbp+2250h+var_2158]
 * 00000001402D55F4: mov     [rsp+11A0h+var_1168], rax
 * 00000001402D55F9: mov     r13, rbx
 * 00000001402D55FC: lea     rax, [rbp+2250h+var_20B8]
 * 00000001402D5603: mov     [rbp+2250h+var_2158], rbx
 * 00000001402D560A: mov     [rsp+11A0h+var_1170], rax
 * 00000001402D560F: mov     dword ptr [rsp+11A0h+var_1178], 9
 * 00000001402D5617: mov     dword ptr [rsp+11A0h+BugCheckParameter4], edx
 * 00000001402D561B: mov     rdx, [rbp+2250h+var_21D8]
 * 00000001402D561F: mov     [rbp+2250h+var_20F8], rbx
 * 00000001402D5626: call    sub_1402E68D4
 * 00000001402D562B: mov     ecx, eax
 * 00000001402D562D: test    eax, eax
 * 00000001402D562F: js      loc_1402D6B5B
 * 00000001402D5635: mov     r13, [rbp+2250h+var_2158]
 * 00000001402D563C: mov     rcx, [rbp+2250h+var_20E0]
 * 00000001402D5643: mov     rax, r13
 * 00000001402D5646: mov     r9d, [rbp+2250h+var_2008]
 * 00000001402D564D: sub     rax, rbx
 * 00000001402D5650: mov     ebx, [rbp+2250h+var_20B8]
 * 00000001402D5656: add     rcx, rax
 * 00000001402D5659: sub     r9d, [rbp+2250h+var_20B8]
 * 00000001402D5660: add     rbx, [rbp+2250h+BugCheckParameter2]
 * 00000001402D5667: mov     [rbp+2250h+var_20E0], rcx
 * 00000001402D566E: xor     r8d, r8d
 * 00000001402D5671: lea     r12, [rcx+0C0h]
 * 00000001402D5678: mov     [rbp+2250h+var_20F8], r13
 * 00000001402D567F: mov     ecx, 30h ; '0'
 * 00000001402D5684: mov     rax, r12
 * 00000001402D5687: lea     edx, [rcx-2Ah]
 * 00000001402D568A: mov     [rax], r8
 * 00000001402D568D: add     ecx, 0FFFFFFF8h
 * 00000001402D5690: add     rax, 8
 * 00000001402D5694: sub     rdx, r14
 * 00000001402D5697: jnz     short loc_1402D568A
 * 00000001402D5699: test    ecx, ecx
 * 00000001402D569B: jz      short loc_1402D56A8
 * 00000001402D569D: mov     [rax], r8b
 * 00000001402D56A0: add     rax, r14
 * 00000001402D56A3: add     ecx, 0FFFFFFFFh
 * 00000001402D56A6: jnz     short loc_1402D569D
 * 00000001402D56A8: mov     eax, [rbp+2250h+var_2200]
 * 00000001402D56AB: mov     r10, rbx
 * 00000001402D56AE: mov     [r12], eax
 * 00000001402D56B2: mov     rax, rbx
 * 00000001402D56B5: mov     [r12+8], rbx
 * 00000001402D56BA: mov     [r12+10h], r9d
 * 00000001402D56BF: add     [r13+6C8h], r9d
 * 00000001402D56C6: mov     r14d, [r13+6B4h]
 * 00000001402D56CD: mov     r15, [r13+6B8h]
 * 00000001402D56D4: mov     ecx, r9d
 * 00000001402D56D7: add     rcx, rbx
 * 00000001402D56DA: cmp     rbx, rcx
 * 00000001402D56DD: jnb     short loc_1402D56EF
 * 00000001402D56DF: mov     edx, 40h ; '@'
 * 00000001402D56E4: prefetchnta byte ptr [rax]
 * 00000001402D56E7: add     rax, rdx
 * 00000001402D56EA: cmp     rax, rcx
 * 00000001402D56ED: jb      short loc_1402D56E4
 * 00000001402D56EF: mov     r11d, r9d
 * 00000001402D56F2: mov     r8, r15
 * 00000001402D56F5: shr     r11d, 7
 * 00000001402D56F9: test    r11d, r11d
 * 00000001402D56FC: jz      short loc_1402D5770
 * 00000001402D56FE: mov     rdi, 7010008004002001h
 * 00000001402D5708: mov     edx, 8
 * 00000001402D570D: lea     esi, [rdx-7]
 * 00000001402D5710: mov     rax, [r10]
 * 00000001402D5713: mov     ecx, r14d
 * 00000001402D5716: xor     rax, r8
 * 00000001402D5719: mov     r8, [r10+8]
 * 00000001402D571D: rol     rax, cl
 * 00000001402D5720: add     r10, 10h
 * 00000001402D5724: xor     r8, rax
 * 00000001402D5727: rol     r8, cl
 * 00000001402D572A: sub     rdx, rsi
 * 00000001402D572D: jnz     short loc_1402D5710
 * 00000001402D572F: mov     rcx, r10
 * 00000001402D5732: sub     rcx, rbx
 * 00000001402D5735: xor     rcx, r15
 * 00000001402D5738: mov     rax, rcx
 * 00000001402D573B: rol     rax, 11h
 * 00000001402D573F: xor     rcx, rax
 * 00000001402D5742: mov     rax, rdi
 * 00000001402D5745: mul     rcx
 * 00000001402D5748: xor     eax, edx
 * 00000001402D574A: mov     [rbp+2250h+var_1850], rdx
 * 00000001402D5751: xor     r14d, eax
 * 00000001402D5754: mov     rax, rsi
 * 00000001402D5757: and     r14d, 3Fh
 * 00000001402D575B: cmovz   r14d, eax
 * 00000001402D575F: add     r11d, 0FFFFFFFFh
 * 00000001402D5763: jnz     short loc_1402D5708
 * 00000001402D5765: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D5769: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D5770: and     r9d, 7Fh
 * 00000001402D5774: mov     r11d, 1
 * 00000001402D577A: cmp     r9d, 8
 * 00000001402D577E: jb      short loc_1402D579D
 * 00000001402D5780: mov     edx, r9d
 * 00000001402D5783: shr     rdx, 3
 * 00000001402D5787: xor     r8, [r10]
 * 00000001402D578A: mov     ecx, r14d
 * 00000001402D578D: rol     r8, cl
 * 00000001402D5790: add     r10, 8
 * 00000001402D5794: add     r9d, 0FFFFFFF8h
 * 00000001402D5798: sub     rdx, r11
 * 00000001402D579B: jnz     short loc_1402D5787
 * 00000001402D579D: test    r9d, r9d
 * 00000001402D57A0: jz      short loc_1402D57B8
 * 00000001402D57A2: movzx   eax, byte ptr [r10]
 * 00000001402D57A6: mov     ecx, r14d
 * 00000001402D57A9: xor     r8, rax
 * 00000001402D57AC: add     r10, r11
 * 00000001402D57AF: rol     r8, cl
 * 00000001402D57B2: add     r9d, 0FFFFFFFFh
 * 00000001402D57B6: jnz     short loc_1402D57A2
 * 00000001402D57B8: mov     rax, r8
 * 00000001402D57BB: jmp     short loc_1402D57C0
 * 00000001402D57BD: xor     r8d, eax
 * 00000001402D57C0: shr     rax, 1Fh
 * 00000001402D57C4: test    rax, rax
 * 00000001402D57C7: jnz     short loc_1402D57BD
 * 00000001402D57C9: mov     eax, [rbp+2250h+var_21B4]
 * 00000001402D57CF: btr     r8d, 1Fh
 * 00000001402D57D4: mov     [r12+14h], r8d
 * 00000001402D57D9: mov     rcx, [rbp+2250h+var_20E0]
 * 00000001402D57E0: add     rcx, 60h ; '`'
 * 00000001402D57E4: neg     eax
 * 00000001402D57E6: mov     [rbp+2250h+var_2038], rcx
 * 00000001402D57ED: sbb     r12d, r12d
 * 00000001402D57F0: neg     r12d
 * 00000001402D57F3: add     r12d, 0Dh
 * 00000001402D57F7: test    rcx, rcx
 * 00000001402D57FA: jnz     loc_1402D5A9F
 * 00000001402D5800: mov     r15d, [r13+684h]
 * 00000001402D5807: mov     r8d, [r13+7BCh]
 * 00000001402D580E: lea     eax, [r15+30h]
 * 00000001402D5812: cmp     eax, [r13+8B4h]
 * 00000001402D5819: jbe     loc_1402D5911
 * 00000001402D581F: mov     edx, eax
 * 00000001402D5821: mov     rcx, r13
 * 00000001402D5824: call    sub_1402E732C
 * 00000001402D5829: mov     rbx, rax
 * 00000001402D582C: xor     eax, eax
 * 00000001402D582E: test    rbx, rbx
 * 00000001402D5831: jz      loc_1402D5900
 * 00000001402D5837: mov     ecx, [r13+828h]
 * 00000001402D583E: test    cl, 4
 * 00000001402D5841: jnz     loc_1402D58F7
 * 00000001402D5847: mov     eax, [r13+684h]
 * 00000001402D584E: and     ecx, 20000000h
 * 00000001402D5854: mov     r8, [r13+668h]
 * 00000001402D585B: neg     ecx
 * 00000001402D585D: mov     r10d, 1
 * 00000001402D5863: sbb     edx, edx
 * 00000001402D5865: and     edx, [r13+7BCh]
 * 00000001402D586C: cmp     eax, 8
 * 00000001402D586F: jb      short loc_1402D588A
 * 00000001402D5871: mov     ecx, eax
 * 00000001402D5873: shr     rcx, 3
 * 00000001402D5877: xor     r9d, r9d
 * 00000001402D587A: mov     [r13+0], r9
 * 00000001402D587E: add     eax, 0FFFFFFF8h
 * 00000001402D5881: add     r13, 8
 * 00000001402D5885: sub     rcx, r10
 * 00000001402D5888: jnz     short loc_1402D587A
 * 00000001402D588A: xor     ecx, ecx
 * 00000001402D588C: test    eax, eax
 * 00000001402D588E: jz      short loc_1402D589C
 * 00000001402D5890: mov     [r13+0], cl
 * 00000001402D5894: add     r13, r10
 * 00000001402D5897: add     eax, 0FFFFFFFFh
 * 00000001402D589A: jnz     short loc_1402D5890
 * 00000001402D589C: mov     r14d, [rbx+7BCh]
 * 00000001402D58A3: mov     eax, 3
 * 00000001402D58A8: mov     [rbx+7BCh], edx
 * 00000001402D58AE: cmp     edx, eax
 * 00000001402D58B0: jz      short loc_1402D58E1
 * 00000001402D58B2: test    dword ptr [rbx+828h], 10000000h
 * 00000001402D58BC: cmovz   ecx, edx
 * 00000001402D58BF: test    ecx, ecx
 * 00000001402D58C1: jz      short loc_1402D58D8
 * 00000001402D58C3: mov     rax, [rbx+228h]
 * 00000001402D58CA: lea     rcx, [r8-8]
 * 00000001402D58CE: mov     rdx, [rcx]
 * 00000001402D58D1: call    KeGuardDispatchICall
 * 00000001402D58D6: jmp     short loc_1402D58F0
 * 00000001402D58D8: mov     rax, [rbx+100h]
 * 00000001402D58DF: jmp     short loc_1402D58E8
 * 00000001402D58E1: mov     rax, [rbx+368h]
 * 00000001402D58E8: mov     rcx, r8
 * 00000001402D58EB: call    KeGuardDispatchICall
 * 00000001402D58F0: mov     [rbx+7BCh], r14d
 * 00000001402D58F7: and     dword ptr [rbx+828h], 0FFFFFFFBh
 * 00000001402D58FE: jmp     short loc_1402D591B
 * 00000001402D5900: mov     [rbp+2250h+var_2158], rax
 * 00000001402D5907: mov     ecx, 0C000009Ah
 * 00000001402D590C: jmp     loc_1402D6B5B
 * 00000001402D5911: mov     rbx, r13
 * 00000001402D5914: mov     [r13+684h], eax
 * 00000001402D591B: add     r15, rbx
 * 00000001402D591E: mov     r9d, 1
 * 00000001402D5924: add     [rbx+6ACh], r9d
 * 00000001402D592B: mov     rax, r15
 * 00000001402D592E: mov     [rbp+2250h+var_1E40], r15
 * 00000001402D5935: xor     r8d, r8d
 * 00000001402D5938: lea     ecx, [r9+2Fh]
 * 00000001402D593C: lea     edx, [rcx-2Ah]
 * 00000001402D593F: mov     [rax], r8
 * 00000001402D5942: add     ecx, 0FFFFFFF8h
 * 00000001402D5945: add     rax, 8
 * 00000001402D5949: sub     rdx, r9
 * 00000001402D594C: jnz     short loc_1402D593F
 * 00000001402D594E: test    ecx, ecx
 * 00000001402D5950: jz      short loc_1402D595D
 * 00000001402D5952: mov     [rax], r8b
 * 00000001402D5955: add     rax, r9
 * 00000001402D5958: add     ecx, 0FFFFFFFFh
 * 00000001402D595B: jnz     short loc_1402D5952
 * 00000001402D595D: mov     r13, [rbp+2250h+var_2208]
 * 00000001402D5961: mov     [r15], r12d
 * 00000001402D5964: mov     r9, r13
 * 00000001402D5967: mov     r12d, [rbp+2250h+var_21B8]
 * 00000001402D596E: mov     [r15+8], r13
 * 00000001402D5972: mov     [r15+10h], r12d
 * 00000001402D5976: add     [rbx+6C8h], r12d
 * 00000001402D597D: mov     r11d, [rbx+6B4h]
 * 00000001402D5984: lea     rcx, [r12+r13]
 * 00000001402D5988: mov     r14, [rbx+6B8h]
 * 00000001402D598F: cmp     r13, rcx
 * 00000001402D5992: jnb     short loc_1402D59A7
 * 00000001402D5994: mov     rax, r13
 * 00000001402D5997: mov     edx, 40h ; '@'
 * 00000001402D599C: prefetchnta byte ptr [rax]
 * 00000001402D599F: add     rax, rdx
 * 00000001402D59A2: cmp     rax, rcx
 * 00000001402D59A5: jb      short loc_1402D599C
 * 00000001402D59A7: mov     r10d, r12d
 * 00000001402D59AA: mov     r8, r14
 * 00000001402D59AD: shr     r10d, 7
 * 00000001402D59B1: test    r10d, r10d
 * 00000001402D59B4: jz      short loc_1402D5A28
 * 00000001402D59B6: mov     r12, 7010008004002001h
 * 00000001402D59C0: mov     edx, 8
 * 00000001402D59C5: lea     esi, [rdx-7]
 * 00000001402D59C8: mov     rax, [r9]
 * 00000001402D59CB: mov     ecx, r11d
 * 00000001402D59CE: xor     rax, r8
 * 00000001402D59D1: mov     r8, [r9+8]
 * 00000001402D59D5: rol     rax, cl
 * 00000001402D59D8: add     r9, 10h
 * 00000001402D59DC: xor     r8, rax
 * 00000001402D59DF: rol     r8, cl
 * 00000001402D59E2: sub     rdx, rsi
 * 00000001402D59E5: jnz     short loc_1402D59C8
 * 00000001402D59E7: mov     rcx, r9
 * 00000001402D59EA: sub     rcx, r13
 * 00000001402D59ED: xor     rcx, r14
 * 00000001402D59F0: mov     rax, rcx
 * 00000001402D59F3: rol     rax, 11h
 * 00000001402D59F7: xor     rcx, rax
 * 00000001402D59FA: mov     rax, r12
 * 00000001402D59FD: mul     rcx
 * 00000001402D5A00: xor     eax, edx
 * 00000001402D5A02: mov     [rbp+2250h+var_1848], rdx
 * 00000001402D5A09: xor     r11d, eax
 * 00000001402D5A0C: mov     rax, rsi
 * 00000001402D5A0F: and     r11d, 3Fh
 * 00000001402D5A13: cmovz   r11d, eax
 * 00000001402D5A17: add     r10d, 0FFFFFFFFh
 * 00000001402D5A1B: jnz     short loc_1402D59C0
 * 00000001402D5A1D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D5A21: mov     r12d, [rbp+2250h+var_21B8]
 * 00000001402D5A28: mov     edx, r12d
 * 00000001402D5A2B: mov     r14d, 1
 * 00000001402D5A31: and     edx, 7Fh
 * 00000001402D5A34: cmp     edx, 8
 * 00000001402D5A37: jb      short loc_1402D5A55
 * 00000001402D5A39: mov     r10d, edx
 * 00000001402D5A3C: shr     r10, 3
 * 00000001402D5A40: xor     r8, [r9]
 * 00000001402D5A43: mov     ecx, r11d
 * 00000001402D5A46: rol     r8, cl
 * 00000001402D5A49: add     r9, 8
 * 00000001402D5A4D: add     edx, 0FFFFFFF8h
 * 00000001402D5A50: sub     r10, r14
 * 00000001402D5A53: jnz     short loc_1402D5A40
 * 00000001402D5A55: test    edx, edx
 * 00000001402D5A57: jz      short loc_1402D5A6E
 * 00000001402D5A59: movzx   eax, byte ptr [r9]
 * 00000001402D5A5D: mov     ecx, r11d
 * 00000001402D5A60: xor     r8, rax
 * 00000001402D5A63: add     r9, r14
 * 00000001402D5A66: rol     r8, cl
 * 00000001402D5A69: add     edx, 0FFFFFFFFh
 * 00000001402D5A6C: jnz     short loc_1402D5A59
 * 00000001402D5A6E: mov     rax, r8
 * 00000001402D5A71: jmp     short loc_1402D5A76
 * 00000001402D5A73: xor     r8d, eax
 * 00000001402D5A76: shr     rax, 1Fh
 * 00000001402D5A7A: test    rax, rax
 * 00000001402D5A7D: jnz     short loc_1402D5A73
 * 00000001402D5A7F: btr     r8d, 1Fh
 * 00000001402D5A84: mov     [r15+14h], r8d
 * 00000001402D5A88: mov     rax, [rbp+2250h+var_1E40]
 * 00000001402D5A8F: mov     [rbp+2250h+var_2038], rax
 * 00000001402D5A96: add     [rbx+6C8h], r12d
 * 00000001402D5A9D: jmp     short loc_1402D5AB0
 * 00000001402D5A9F: mov     rbx, r13
 * 00000001402D5AA2: mov     [rcx], r12d
 * 00000001402D5AA5: mov     r12d, [rbp+2250h+var_21B8]
 * 00000001402D5AAC: mov     r13, [rbp+2250h+var_2208]
 * 00000001402D5AB0: test    dword ptr [rbx+828h], 40000000h
 * 00000001402D5ABA: jz      short loc_1402D5ADA
 * 00000001402D5ABC: test    r12d, r12d
 * 00000001402D5ABF: jz      short loc_1402D5ADA
 * 00000001402D5AC1: mov     r9, [rbp+2250h+var_2038]
 * 00000001402D5AC8: mov     r8d, r12d
 * 00000001402D5ACB: add     r9, 1Ch
 * 00000001402D5ACF: mov     rdx, r13
 * 00000001402D5AD2: mov     rcx, rbx
 * 00000001402D5AD5: call    sub_14019FEBC
 * 00000001402D5ADA: mov     rax, [rbp+2250h+var_2038]
 * 00000001402D5AE1: xor     ecx, ecx
 * 00000001402D5AE3: mov     [rbp+2250h+var_20F8], rbx
 * 00000001402D5AEA: mov     [rax+18h], ecx
 * 00000001402D5AED: lea     r12d, [rcx+1]
 * 00000001402D5AF1: mov     rax, [rbp+2250h+var_2038]
 * 00000001402D5AF8: or      [rax+18h], r12d
 * 00000001402D5AFC: xor     eax, eax
 * 00000001402D5AFE: mov     r14, [rbp+2250h+var_20E0]
 * 00000001402D5B05: cmp     [rbp+2250h+var_21B4], eax
 * 00000001402D5B0B: mov     r15, [rbp+2250h+BugCheckParameter2]
 * 00000001402D5B12: setnz   cl
 * 00000001402D5B15: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001402D5B20: mov     eax, [r14+0B8h]
 * 00000001402D5B27: and     eax, 0FFFFFFFEh
 * 00000001402D5B2A: or      ecx, eax
 * 00000001402D5B2C: mov     [r14+0B8h], ecx
 * 00000001402D5B33: cmp     dword ptr [r14+0A0h], 94h
 * 00000001402D5B3E: jb      loc_1402D5BC5
 * 00000001402D5B44: mov     rax, [rbx+1F8h]
 * 00000001402D5B4B: mov     rcx, r15
 * 00000001402D5B4E: mov     r13, [r14+98h]
 * 00000001402D5B55: call    KeGuardDispatchICall
 * 00000001402D5B5A: test    rax, rax
 * 00000001402D5B5D: jnz     short loc_1402D5B73
 * 00000001402D5B5F: mov     [rbp+2250h+var_2158], rax
 * 00000001402D5B66: mov     ecx, 0C000009Ah
 * 00000001402D5B6B: mov     r13, rbx
 * 00000001402D5B6E: jmp     loc_1402D6B5F
 * 00000001402D5B73: mov     ecx, [rax+50h]
 * 00000001402D5B76: mov     eax, 2
 * 00000001402D5B7B: or      [r14+0B8h], eax
 * 00000001402D5B82: add     rcx, r15
 * 00000001402D5B85: mov     rax, [r13+70h]
 * 00000001402D5B89: cmp     rax, r15
 * 00000001402D5B8C: jb      short loc_1402D5BA5
 * 00000001402D5B8E: cmp     rax, rcx
 * 00000001402D5B91: jnb     short loc_1402D5BA5
 * 00000001402D5B93: mov     rax, [rax]
 * 00000001402D5B96: mov     [r14+0A8h], rax
 * 00000001402D5B9D: or      dword ptr [r14+0B8h], 4
 * 00000001402D5BA5: mov     rax, [r13+78h]
 * 00000001402D5BA9: cmp     rax, r15
 * 00000001402D5BAC: jb      short loc_1402D5BC5
 * 00000001402D5BAE: cmp     rax, rcx
 * 00000001402D5BB1: jnb     short loc_1402D5BC5
 * 00000001402D5BB3: mov     rax, [rax]
 * 00000001402D5BB6: mov     [r14+0B0h], rax
 * 00000001402D5BBD: or      dword ptr [r14+0B8h], 8
 * 00000001402D5BC5: test    dword ptr [rbx+828h], 400000h
 * 00000001402D5BCF: mov     r13, rbx
 * 00000001402D5BD2: mov     r14, [rbp+2250h+BugCheckParameter2]
 * 00000001402D5BD9: mov     [rbp+2250h+var_21F0], r14
 * 00000001402D5BDD: mov     [rbp+2250h+var_2158], rbx
 * 00000001402D5BE4: mov     [rbp+2250h+var_20F8], rbx
 * 00000001402D5BEB: jz      loc_1402D6B4D
 * 00000001402D5BF1: mov     rax, [rbx+1F8h]
 * 00000001402D5BF8: mov     rcx, r14
 * 00000001402D5BFB: call    KeGuardDispatchICall
 * 00000001402D5C00: mov     [rbp+2250h+var_2188], rax
 * 00000001402D5C07: mov     r15, rax
 * 00000001402D5C0A: test    rax, rax
 * 00000001402D5C0D: jnz     short loc_1402D5C19
 * 00000001402D5C0F: mov     ecx, 0C000007Bh
 * 00000001402D5C14: jmp     loc_1402D6B5B
 * 00000001402D5C19: movzx   r13d, word ptr [r15+6]
 * 00000001402D5C1E: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402D5C28: mov     ecx, dword ptr [rbp+2250h+var_2218]
 * 00000001402D5C2B: mul     rcx
 * 00000001402D5C2E: xor     eax, eax
 * 00000001402D5C30: mov     [rbp+2250h+var_21A6], r13w
 * 00000001402D5C38: mov     r10, rdx
 * 00000001402D5C3B: shr     r10, 3
 * 00000001402D5C3F: mov     [rbp+2250h+var_2208], r10
 * 00000001402D5C43: test    r13w, r13w
 * 00000001402D5C47: jnz     short loc_1402D5CA1
 * 00000001402D5C49: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5C53: jz      loc_1402E442B
 * 00000001402D5C59: cmp     [rbx+790h], eax
 * 00000001402D5C5F: jnz     short loc_1402D5C97
 * 00000001402D5C61: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D5C6B: add     rax, rbx
 * 00000001402D5C6E: mov     [rbx+798h], rax
 * 00000001402D5C75: xor     eax, eax
 * 00000001402D5C77: mov     [rbx+7A0h], rax
 * 00000001402D5C7E: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402D5C89: mov     [rbx+7B0h], r14
 * 00000001402D5C90: mov     [rbx+790h], r12d
 * 00000001402D5C97: mov     ecx, 0C000007Bh
 * 00000001402D5C9C: jmp     loc_1402D611F
 * 00000001402D5CA1: mov     r12, [rbp+2250h+var_21D8]
 * 00000001402D5CA5: movzx   r11d, word ptr [r15+14h]
 * 00000001402D5CAA: add     r11, 18h
 * 00000001402D5CAE: movzx   r9d, r13w
 * 00000001402D5CB2: add     r11, r15
 * 00000001402D5CB5: mov     eax, r10d
 * 00000001402D5CB8: mov     [rbp+2250h+var_2248], r11
 * 00000001402D5CBC: mov     [rbp+2250h+var_2200], r9d
 * 00000001402D5CC0: lea     rax, [rax+rax*2]
 * 00000001402D5CC4: shl     rax, 2
 * 00000001402D5CC8: mov     [rbp+2250h+var_2198], rax
 * 00000001402D5CCF: add     rax, r12
 * 00000001402D5CD2: mov     [rbp+2250h+var_21C0], rax
 * 00000001402D5CD9: xor     eax, eax
 * 00000001402D5CDB: mov     [rbp+2250h+var_21B8], eax
 * 00000001402D5CE1: mov     ecx, eax
 * 00000001402D5CE3: test    r9d, r9d
 * 00000001402D5CE6: jz      loc_1402D5F1D
 * 00000001402D5CEC: mov     rdx, r11
 * 00000001402D5CEF: lea     r10d, [rax+1]
 * 00000001402D5CF3: mov     [rbp+2250h+var_2250], rdx
 * 00000001402D5CF7: mov     r13d, [rdx+10h]
 * 00000001402D5CFB: mov     eax, [rdx+8]
 * 00000001402D5CFE: cmp     r13d, eax
 * 00000001402D5D01: mov     r8d, [rdx+0Ch]
 * 00000001402D5D05: cmovbe  r13d, eax
 * 00000001402D5D09: mov     [rbp+2250h+var_21D0], r8d
 * 00000001402D5D10: add     r13d, r8d
 * 00000001402D5D13: test    ecx, ecx
 * 00000001402D5D15: jz      short loc_1402D5D2F
 * 00000001402D5D17: lea     eax, [rcx-1]
 * 00000001402D5D1A: lea     rax, [rax+rax*4]
 * 00000001402D5D1E: cmp     r13d, [r11+rax*8+0Ch]
 * 00000001402D5D23: jb      loc_1402D5F3E
 * 00000001402D5D29: mov     ecx, [rbp+2250h+var_21B8]
 * 00000001402D5D2F: cmp     r12, [rbp+2250h+var_21C0]
 * 00000001402D5D36: jz      loc_1402D5EF0
 * 00000001402D5D3C: mov     ecx, [r12]
 * 00000001402D5D40: mov     eax, [r12+4]
 * 00000001402D5D45: cmp     ecx, r13d
 * 00000001402D5D48: jnb     loc_1402D5EDC
 * 00000001402D5D4E: cmp     eax, r8d
 * 00000001402D5D51: jbe     loc_1402D5EDC
 * 00000001402D5D57: cmp     ecx, r8d
 * 00000001402D5D5A: jb      loc_1402D5F97
 * 00000001402D5D60: cmp     eax, r13d
 * 00000001402D5D63: ja      loc_1402D5F97
 * 00000001402D5D69: mov     eax, [r12+8]
 * 00000001402D5D6E: mov     ecx, 1
 * 00000001402D5D73: mov     [rbp+2250h+var_1840], r12
 * 00000001402D5D7A: test    cl, al
 * 00000001402D5D7C: jnz     short loc_1402D5D8A
 * 00000001402D5D7E: mov     al, [rax+r14]
 * 00000001402D5D82: test    al, 20h
 * 00000001402D5D84: jz      loc_1402D5ECB
 * 00000001402D5D8A: mov     eax, [rdx+8]
 * 00000001402D5D8D: mov     rcx, r12
 * 00000001402D5D90: mov     r14d, [rdx+10h]
 * 00000001402D5D94: cmp     r14d, eax
 * 00000001402D5D97: mov     r15d, [rdx+0Ch]
 * 00000001402D5D9B: mov     rdx, [rbp+2250h+var_21F0]
 * 00000001402D5D9F: cmovbe  r14d, eax
 * 00000001402D5DA3: mov     rax, [rbx+418h]
 * 00000001402D5DAA: add     r14d, r15d
 * 00000001402D5DAD: call    KeGuardDispatchICall
 * 00000001402D5DB2: mov     rcx, rax
 * 00000001402D5DB5: cmp     [rax], r15d
 * 00000001402D5DB8: jb      short loc_1402D5DC0
 * 00000001402D5DBA: cmp     [rax+4], r14d
 * 00000001402D5DBE: jb      short loc_1402D5E26
 * 00000001402D5DC0: mov     r10, [rbp+2250h+var_21F0]
 * 00000001402D5DC4: mov     eax, 80000000h
 * 00000001402D5DC9: mov     edx, ecx
 * 00000001402D5DCB: sub     edx, r10d
 * 00000001402D5DCE: or      edx, eax
 * 00000001402D5DD0: xor     eax, eax
 * 00000001402D5DD2: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5DDC: jz      loc_1402E44B7
 * 00000001402D5DE2: cmp     [rbx+790h], eax
 * 00000001402D5DE8: jnz     short loc_1402D5E2A
 * 00000001402D5DEA: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D5DF4: add     rax, rbx
 * 00000001402D5DF7: mov     [rbx+798h], rax
 * 00000001402D5DFE: xor     eax, eax
 * 00000001402D5E00: mov     [rbx+7A0h], rax
 * 00000001402D5E07: mov     eax, 1
 * 00000001402D5E0C: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402D5E17: mov     [rbx+7B0h], r10
 * 00000001402D5E1E: mov     [rbx+790h], eax
 * 00000001402D5E24: jmp     short loc_1402D5E2A
 * 00000001402D5E26: mov     r10, [rbp+2250h+var_21F0]
 * 00000001402D5E2A: mov     r8d, [rcx]
 * 00000001402D5E2D: mov     rdx, r10
 * 00000001402D5E30: mov     rax, [rbx+420h]
 * 00000001402D5E37: add     r8, r10
 * 00000001402D5E3A: call    KeGuardDispatchICall
 * 00000001402D5E3F: mov     rdx, rax
 * 00000001402D5E42: cmp     [rax], r15d
 * 00000001402D5E45: jb      short loc_1402D5E4D
 * 00000001402D5E47: cmp     [rax+4], r14d
 * 00000001402D5E4B: jb      short loc_1402D5EBC
 * 00000001402D5E4D: mov     r14, [rbp+2250h+var_21F0]
 * 00000001402D5E51: mov     eax, 80000000h
 * 00000001402D5E56: sub     edx, r14d
 * 00000001402D5E59: or      edx, eax
 * 00000001402D5E5B: xor     eax, eax
 * 00000001402D5E5D: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5E67: jz      loc_1402E4488
 * 00000001402D5E6D: mov     rdx, [rbp+2250h+var_2250]
 * 00000001402D5E71: mov     r8d, [rbp+2250h+var_21D0]
 * 00000001402D5E78: cmp     [rbx+790h], eax
 * 00000001402D5E7E: jnz     short loc_1402D5ECB
 * 00000001402D5E80: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D5E8A: add     rax, rbx
 * 00000001402D5E8D: mov     [rbx+798h], rax
 * 00000001402D5E94: xor     eax, eax
 * 00000001402D5E96: mov     [rbx+7A0h], rax
 * 00000001402D5E9D: mov     eax, 1
 * 00000001402D5EA2: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402D5EAD: mov     [rbx+7B0h], r14
 * 00000001402D5EB4: mov     [rbx+790h], eax
 * 00000001402D5EBA: jmp     short loc_1402D5ECB
 * 00000001402D5EBC: mov     rdx, [rbp+2250h+var_2250]
 * 00000001402D5EC0: mov     r8d, [rbp+2250h+var_21D0]
 * 00000001402D5EC7: mov     r14, [rbp+2250h+var_21F0]
 * 00000001402D5ECB: add     r12, 0Ch
 * 00000001402D5ECF: cmp     r12, [rbp+2250h+var_21C0]
 * 00000001402D5ED6: jnz     loc_1402D5D3C
 * 00000001402D5EDC: mov     ecx, [rbp+2250h+var_21B8]
 * 00000001402D5EE2: mov     r10d, 1
 * 00000001402D5EE8: mov     r9d, [rbp+2250h+var_2200]
 * 00000001402D5EEC: mov     r11, [rbp+2250h+var_2248]
 * 00000001402D5EF0: add     ecx, r10d
 * 00000001402D5EF3: add     rdx, 28h ; '('
 * 00000001402D5EF7: mov     [rbp+2250h+var_21B8], ecx
 * 00000001402D5EFD: mov     [rbp+2250h+var_2250], rdx
 * 00000001402D5F01: cmp     ecx, r9d
 * 00000001402D5F04: jb      loc_1402D5CF7
 * 00000001402D5F0A: mov     r10, [rbp+2250h+var_2208]
 * 00000001402D5F0E: mov     r15, [rbp+2250h+var_2188]
 * 00000001402D5F15: movzx   r13d, [rbp+2250h+var_21A6]
 * 00000001402D5F1D: cmp     r12, [rbp+2250h+var_21C0]
 * 00000001402D5F24: jz      loc_1402D5FF4
 * 00000001402D5F2A: xor     eax, eax
 * 00000001402D5F2C: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5F36: jz      loc_1402E43FA
 * 00000001402D5F3C: jmp     short loc_1402D5FA9
 * 00000001402D5F3E: xor     eax, eax
 * 00000001402D5F40: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5F4A: jz      loc_1402E4459
 * 00000001402D5F50: cmp     [rbx+790h], eax
 * 00000001402D5F56: jnz     loc_1402D5C97
 * 00000001402D5F5C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D5F66: add     rax, rbx
 * 00000001402D5F69: mov     [rbx+798h], rax
 * 00000001402D5F70: xor     eax, eax
 * 00000001402D5F72: mov     [rbx+7A0h], rax
 * 00000001402D5F79: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402D5F84: mov     [rbx+7B0h], r14
 * 00000001402D5F8B: mov     [rbx+790h], r10d
 * 00000001402D5F92: jmp     loc_1402D5C97
 * 00000001402D5F97: xor     eax, eax
 * 00000001402D5F99: test    dword ptr [rbx+828h], 200000h
 * 00000001402D5FA3: jz      loc_1402E44E6
 * 00000001402D5FA9: cmp     [rbx+790h], eax
 * 00000001402D5FAF: jnz     loc_1402D5C97
 * 00000001402D5FB5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D5FBF: add     rax, rbx
 * 00000001402D5FC2: mov     [rbx+798h], rax
 * 00000001402D5FC9: xor     eax, eax
 * 00000001402D5FCB: mov     [rbx+7A0h], rax
 * 00000001402D5FD2: mov     eax, 1
 * 00000001402D5FD7: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402D5FE2: mov     [rbx+7B0h], r14
 * 00000001402D5FE9: mov     [rbx+790h], eax
 * 00000001402D5FEF: jmp     loc_1402D5C97
 * 00000001402D5FF4: mov     r14d, [rbx+684h]
 * 00000001402D5FFB: lea     ecx, [r10+6]
 * 00000001402D5FFF: mov     r8d, [rbx+7BCh]
 * 00000001402D6006: lea     eax, [r9+2]
 * 00000001402D600A: lea     eax, [rax+rax*2]
 * 00000001402D600D: mov     r12d, 0FFFFFFF8h
 * 00000001402D6013: and     ecx, r12d
 * 00000001402D6016: lea     eax, [rcx+rax*8]
 * 00000001402D6019: add     eax, r14d
 * 00000001402D601C: cmp     eax, [rbx+8B4h]
 * 00000001402D6022: jbe     loc_1402D6127
 * 00000001402D6028: mov     edx, eax
 * 00000001402D602A: mov     rcx, rbx
 * 00000001402D602D: call    sub_1402E732C
 * 00000001402D6032: mov     [rbp+2250h+var_2188], rax
 * 00000001402D6039: mov     r11, rax
 * 00000001402D603C: test    rax, rax
 * 00000001402D603F: jz      loc_1402D611A
 * 00000001402D6045: mov     ecx, [rbx+828h]
 * 00000001402D604B: test    cl, 4
 * 00000001402D604E: jnz     loc_1402D6108
 * 00000001402D6054: mov     eax, [rbx+684h]
 * 00000001402D605A: and     ecx, 20000000h
 * 00000001402D6060: mov     r8, [rbx+668h]
 * 00000001402D6067: neg     ecx
 * 00000001402D6069: mov     r10d, 1
 * 00000001402D606F: sbb     edx, edx
 * 00000001402D6071: and     edx, [rbx+7BCh]
 * 00000001402D6077: cmp     eax, 8
 * 00000001402D607A: jb      short loc_1402D6094
 * 00000001402D607C: mov     ecx, eax
 * 00000001402D607E: shr     rcx, 3
 * 00000001402D6082: xor     r9d, r9d
 * 00000001402D6085: mov     [rbx], r9
 * 00000001402D6088: add     eax, r12d
 * 00000001402D608B: add     rbx, 8
 * 00000001402D608F: sub     rcx, r10
 * 00000001402D6092: jnz     short loc_1402D6085
 * 00000001402D6094: xor     ecx, ecx
 * 00000001402D6096: test    eax, eax
 * 00000001402D6098: jz      short loc_1402D60A4
 * 00000001402D609A: mov     [rbx], cl
 * 00000001402D609C: add     rbx, r10
 * 00000001402D609F: add     eax, 0FFFFFFFFh
 * 00000001402D60A2: jnz     short loc_1402D609A
 * 00000001402D60A4: mov     ebx, [r11+7BCh]
 * 00000001402D60AB: mov     eax, 3
 * 00000001402D60B0: mov     [r11+7BCh], edx
 * 00000001402D60B7: cmp     edx, eax
 * 00000001402D60B9: jz      short loc_1402D60EB
 * 00000001402D60BB: test    dword ptr [r11+828h], 10000000h
 * 00000001402D60C6: cmovz   ecx, edx
 * 00000001402D60C9: test    ecx, ecx
 * 00000001402D60CB: jz      short loc_1402D60E2
 * 00000001402D60CD: mov     rax, [r11+228h]
 * 00000001402D60D4: lea     rcx, [r8-8]
 * 00000001402D60D8: mov     rdx, [rcx]
 * 00000001402D60DB: call    KeGuardDispatchICall
 * 00000001402D60E0: jmp     short loc_1402D60FA
 * 00000001402D60E2: mov     rax, [r11+100h]
 * 00000001402D60E9: jmp     short loc_1402D60F2
 * 00000001402D60EB: mov     rax, [r11+368h]
 * 00000001402D60F2: mov     rcx, r8
 * 00000001402D60F5: call    KeGuardDispatchICall
 * 00000001402D60FA: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D6101: mov     [r11+7BCh], ebx
 * 00000001402D6108: and     dword ptr [r11+828h], 0FFFFFFFBh
 * 00000001402D6110: mov     r9d, [rbp+2250h+var_2200]
 * 00000001402D6114: mov     r10, [rbp+2250h+var_2208]
 * 00000001402D6118: jmp     short loc_1402D6137
 * 00000001402D611A: mov     ecx, 0C000009Ah
 * 00000001402D611F: mov     r13, rbx
 * 00000001402D6122: jmp     loc_1402D6B5B
 * 00000001402D6127: mov     r11, rbx
 * 00000001402D612A: mov     [rbp+2250h+var_2188], rbx
 * 00000001402D6131: mov     [rbx+684h], eax
 * 00000001402D6137: mov     r12d, 1
 * 00000001402D613D: lea     r8, [r11+r14]
 * 00000001402D6141: add     [r11+6ACh], r12d
 * 00000001402D6148: mov     rax, r8
 * 00000001402D614B: mov     [rbp+2250h+var_1E20], r8
 * 00000001402D6152: xor     ebx, ebx
 * 00000001402D6154: lea     ecx, [r12+2Fh]
 * 00000001402D6159: lea     edx, [rcx-2Ah]
 * 00000001402D615C: mov     [rax], rbx
 * 00000001402D615F: add     ecx, 0FFFFFFF8h
 * 00000001402D6162: add     rax, 8
 * 00000001402D6166: sub     rdx, r12
 * 00000001402D6169: jnz     short loc_1402D615C
 * 00000001402D616B: test    ecx, ecx
 * 00000001402D616D: jz      short loc_1402D6179
 * 00000001402D616F: mov     [rax], bl
 * 00000001402D6171: add     rax, r12
 * 00000001402D6174: add     ecx, 0FFFFFFFFh
 * 00000001402D6177: jnz     short loc_1402D616F
 * 00000001402D6179: mov     rax, [rbp+2250h+var_21D8]
 * 00000001402D617D: mov     dword ptr [r8], 1Eh
 * 00000001402D6184: mov     [r8+8], rax
 * 00000001402D6188: xor     eax, eax
 * 00000001402D618A: mov     [r8+10h], eax
 * 00000001402D618E: mov     rcx, [r11+6B8h]
 * 00000001402D6195: mov     rax, rcx
 * 00000001402D6198: jmp     short loc_1402D619C
 * 00000001402D619A: xor     ecx, eax
 * 00000001402D619C: shr     rax, 1Fh
 * 00000001402D61A0: test    rax, rax
 * 00000001402D61A3: jnz     short loc_1402D619A
 * 00000001402D61A5: mov     r12, [rbp+2250h+var_21F0]
 * 00000001402D61A9: lea     r14d, [r10-1]
 * 00000001402D61AD: btr     ecx, 1Fh
 * 00000001402D61B1: mov     rbx, r11
 * 00000001402D61B4: mov     [r8+14h], ecx
 * 00000001402D61B8: mov     r8d, 0FFFEh
 * 00000001402D61BE: mov     rax, [rbp+2250h+var_1E20]
 * 00000001402D61C5: mov     [rbp+2250h+var_20A8], rax
 * 00000001402D61CC: mov     [rbp+2250h+var_2158], rbx
 * 00000001402D61D3: mov     [rax+18h], r12
 * 00000001402D61D7: mov     ecx, [r15+50h]
 * 00000001402D61DB: mov     rax, [rbp+2250h+var_20A8]
 * 00000001402D61E2: mov     [rax+20h], ecx
 * 00000001402D61E5: mov     rax, [rbp+2250h+var_20A8]
 * 00000001402D61EC: mov     ecx, dword ptr [rbp+2250h+var_2218]
 * 00000001402D61EF: mov     [rax+24h], ecx
 * 00000001402D61F2: mov     rax, [rbp+2250h+var_20A8]
 * 00000001402D61F9: mov     [rax+28h], r13w
 * 00000001402D61FE: xor     eax, eax
 * 00000001402D6200: cmp     [rbp+2250h+var_21B4], eax
 * 00000001402D6206: mov     ecx, eax
 * 00000001402D6208: mov     rdx, [rbp+2250h+var_20A8]
 * 00000001402D620F: setnz   cl
 * 00000001402D6212: add     r14, 7
 * 00000001402D6216: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001402D621A: movzx   eax, word ptr [rdx+2Ah]
 * 00000001402D621E: and     ax, r8w
 * 00000001402D6222: or      cx, ax
 * 00000001402D6225: mov     [rdx+2Ah], cx
 * 00000001402D6229: mov     rcx, [rbp+2250h+var_20A8]
 * 00000001402D6230: movzx   eax, word ptr [rcx+28h]
 * 00000001402D6234: lea     rdx, [rcx+30h]
 * 00000001402D6238: add     r14, rdx
 * 00000001402D623B: mov     [rbp+2250h+var_2208], rdx
 * 00000001402D623F: mov     [rbp+2250h+var_21E0], r14
 * 00000001402D6243: lea     rcx, [rax+rax*2]
 * 00000001402D6247: xor     eax, eax
 * 00000001402D6249: lea     r8, [r14+rcx*8]
 * 00000001402D624D: test    r10d, r10d
 * 00000001402D6250: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D6254: mov     ecx, 0Ch
 * 00000001402D6259: cmovz   rcx, [rbp+2250h+var_2198]
 * 00000001402D6261: add     rcx, r10
 * 00000001402D6264: mov     [rbp+2250h+var_2230], r8
 * 00000001402D6268: mov     [rbp+2250h+var_2250], rcx
 * 00000001402D626C: test    r9d, r9d
 * 00000001402D626F: jz      short loc_1402D62AB
 * 00000001402D6271: mov     edx, r9d
 * 00000001402D6274: lea     rax, [r14+8]
 * 00000001402D6278: xor     r9d, r9d
 * 00000001402D627B: mov     r13d, 80000000h
 * 00000001402D6281: lea     esi, [r9+2]
 * 00000001402D6285: lea     r15d, [r9+1]
 * 00000001402D6289: mov     rcx, rsi
 * 00000001402D628C: mov     [rax-8], r9d
 * 00000001402D6290: mov     [rax-4], r9d
 * 00000001402D6294: mov     [rax], r13d
 * 00000001402D6297: add     rax, 0Ch
 * 00000001402D629B: sub     rcx, r15
 * 00000001402D629E: jnz     short loc_1402D628C
 * 00000001402D62A0: sub     rdx, r15
 * 00000001402D62A3: jnz     short loc_1402D6289
 * 00000001402D62A5: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D62A9: xor     eax, eax
 * 00000001402D62AB: cmp     r14, r8
 * 00000001402D62AE: jz      loc_1402D6B4D
 * 00000001402D62B4: mov     r13, [rbp+2250h+var_2248]
 * 00000001402D62B8: jmp     short loc_1402D62BC
 * 00000001402D62BA: xor     eax, eax
 * 00000001402D62BC: mov     r15d, eax
 * 00000001402D62BF: mov     eax, [r13+24h]
 * 00000001402D62C3: bt      eax, 19h
 * 00000001402D62C7: jb      loc_1402D64EF
 * 00000001402D62CD: mov     ecx, [r13+0]
 * 00000001402D62D1: cmp     ecx, 54494E49h
 * 00000001402D62D7: jnz     short loc_1402D62E7
 * 00000001402D62D9: cmp     dword ptr [r13+4], 4742444Bh
 * 00000001402D62E1: jz      loc_1402D64EF
 * 00000001402D62E7: cmp     ecx, 45474150h
 * 00000001402D62ED: jnz     short loc_1402D631E
 * 00000001402D62EF: movzx   eax, word ptr [r13+4]
 * 00000001402D62F4: mov     edx, 7877h
 * 00000001402D62F9: cmp     ax, dx
 * 00000001402D62FC: jz      loc_1402D64EF
 * 00000001402D6302: mov     edx, 7277h
 * 00000001402D6307: cmp     ax, dx
 * 00000001402D630A: jz      loc_1402D64EF
 * 00000001402D6310: mov     edx, 7777h
 * 00000001402D6315: cmp     ax, dx
 * 00000001402D6318: jz      loc_1402D64EF
 * 00000001402D631E: cmp     ecx, 41525245h
 * 00000001402D6324: jnz     short loc_1402D6336
 * 00000001402D6326: mov     eax, 4154h
 * 00000001402D632B: cmp     [r13+4], ax
 * 00000001402D6330: jz      loc_1402D64EF
 * 00000001402D6336: mov     rax, [rbp+2250h+var_2188]
 * 00000001402D633D: mov     r10d, 7
 * 00000001402D6343: mov     r8, [r11+7C8h]
 * 00000001402D634A: mov     r9, r13
 * 00000001402D634D: mov     r11, [r11+7D0h]
 * 00000001402D6354: mov     rbx, [rax+7D8h]
 * 00000001402D635B: mov     r14, [rax+7E0h]
 * 00000001402D6362: movzx   edx, byte ptr [r9]
 * 00000001402D6366: inc     r9
 * 00000001402D6369: movzx   eax, byte ptr [r8]
 * 00000001402D636D: inc     r8
 * 00000001402D6370: cmp     rdx, rax
 * 00000001402D6373: jnz     loc_1402D6443
 * 00000001402D6379: add     r10d, 0FFFFFFFFh
 * 00000001402D637D: jnz     short loc_1402D6362
 * 00000001402D637F: mov     r10d, 1
 * 00000001402D6385: mov     r15d, r10d
 * 00000001402D6388: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D638C: mov     r14, [rbp+2250h+var_21E0]
 * 00000001402D6390: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D6397: mov     ecx, [r13+24h]
 * 00000001402D639B: xor     eax, eax
 * 00000001402D639D: test    ecx, ecx
 * 00000001402D639F: lea     edx, [rax+1]
 * 00000001402D63A2: cmovs   r15d, edx
 * 00000001402D63A6: mov     [rbp+2250h+var_2200], r15d
 * 00000001402D63AA: test    r15d, r15d
 * 00000001402D63AD: jz      short loc_1402D63D6
 * 00000001402D63AF: cmp     dword ptr [r13+0], 54494E49h
 * 00000001402D63B7: jnz     short loc_1402D63D6
 * 00000001402D63B9: cmp     dword ptr [r13+4], 4742444Bh
 * 00000001402D63C1: jnz     short loc_1402D63D6
 * 00000001402D63C3: test    dword ptr [r11+82Ch], 2000h
 * 00000001402D63CE: cmovnz  r15d, eax
 * 00000001402D63D2: mov     [rbp+2250h+var_2200], r15d
 * 00000001402D63D6: test    dword ptr [r11+82Ch], 4000h
 * 00000001402D63E1: jz      short loc_1402D6404
 * 00000001402D63E3: bt      ecx, 1Dh
 * 00000001402D63E7: jnb     short loc_1402D6404
 * 00000001402D63E9: cmp     r12, [r11+5E0h]
 * 00000001402D63F0: jz      short loc_1402D63FB
 * 00000001402D63F2: cmp     r12, [r11+5E8h]
 * 00000001402D63F9: jnz     short loc_1402D6404
 * 00000001402D63FB: mov     rax, rdx
 * 00000001402D63FE: mov     r15d, eax
 * 00000001402D6401: mov     [rbp+2250h+var_2200], eax
 * 00000001402D6404: mov     r12d, [r13+10h]
 * 00000001402D6408: mov     eax, [r13+8]
 * 00000001402D640C: cmp     r12d, eax
 * 00000001402D640F: mov     ebx, [r13+0Ch]
 * 00000001402D6413: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402D641A: cmovbe  r12d, eax
 * 00000001402D641E: add     r12d, ebx
 * 00000001402D6421: mov     [rbp+2250h+var_21B8], ebx
 * 00000001402D6427: mov     [rbp+2250h+var_21B4], r12d
 * 00000001402D642E: cmp     r10, r8
 * 00000001402D6431: jz      loc_1402D64FA
 * 00000001402D6437: mov     r13d, [r10]
 * 00000001402D643A: mov     eax, [r10+4]
 * 00000001402D643E: jmp     loc_1402D64FF
 * 00000001402D6443: mov     r8d, 8
 * 00000001402D6449: mov     r9, r13
 * 00000001402D644C: mov     rcx, [r9]
 * 00000001402D644F: add     r9, 8
 * 00000001402D6453: mov     rax, [r11]
 * 00000001402D6456: add     r11, 8
 * 00000001402D645A: cmp     rcx, rax
 * 00000001402D645D: jnz     short loc_1402D6496
 * 00000001402D645F: add     r8d, 0FFFFFFF8h
 * 00000001402D6463: cmp     r8d, 8
 * 00000001402D6467: jnb     short loc_1402D644C
 * 00000001402D6469: test    r8d, r8d
 * 00000001402D646C: jz      loc_1402D637F
 * 00000001402D6472: mov     r10d, 1
 * 00000001402D6478: movzx   edx, byte ptr [r9]
 * 00000001402D647C: add     r9, r10
 * 00000001402D647F: movzx   eax, byte ptr [r11]
 * 00000001402D6483: add     r11, r10
 * 00000001402D6486: cmp     rdx, rax
 * 00000001402D6489: jnz     short loc_1402D649C
 * 00000001402D648B: add     r8d, 0FFFFFFFFh
 * 00000001402D648F: jnz     short loc_1402D6478
 * 00000001402D6491: jmp     loc_1402D6385
 * 00000001402D6496: mov     r10d, 1
 * 00000001402D649C: mov     r9d, 4
 * 00000001402D64A2: mov     r8, r13
 * 00000001402D64A5: or      r11d, 0FFFFFFFFh
 * 00000001402D64A9: movzx   edx, byte ptr [r8]
 * 00000001402D64AD: add     r8, r10
 * 00000001402D64B0: movzx   eax, byte ptr [rbx]
 * 00000001402D64B3: add     rbx, r10
 * 00000001402D64B6: cmp     rdx, rax
 * 00000001402D64B9: jnz     short loc_1402D64C5
 * 00000001402D64BB: add     r9d, r11d
 * 00000001402D64BE: jnz     short loc_1402D64A9
 * 00000001402D64C0: jmp     loc_1402D6385
 * 00000001402D64C5: mov     r9d, 6
 * 00000001402D64CB: mov     r8, r13
 * 00000001402D64CE: movzx   edx, byte ptr [r8]
 * 00000001402D64D2: add     r8, r10
 * 00000001402D64D5: movzx   eax, byte ptr [r14]
 * 00000001402D64D9: add     r14, r10
 * 00000001402D64DC: cmp     rdx, rax
 * 00000001402D64DF: jnz     loc_1402D6388
 * 00000001402D64E5: add     r9d, r11d
 * 00000001402D64E8: jnz     short loc_1402D64CE
 * 00000001402D64EA: jmp     loc_1402D6385
 * 00000001402D64EF: mov     r15d, 1
 * 00000001402D64F5: jmp     loc_1402D6397
 * 00000001402D64FA: xor     eax, eax
 * 00000001402D64FC: mov     r13d, eax
 * 00000001402D64FF: mov     [rbp+2250h+var_21D0], eax
 * 00000001402D6505: mov     dword ptr [rbp+2250h+var_2218], ebx
 * 00000001402D6508: cmp     r10, r8
 * 00000001402D650B: jz      loc_1402D66DA
 * 00000001402D6511: cmp     r13d, ebx
 * 00000001402D6514: jbe     loc_1402D66DA
 * 00000001402D651A: cmp     eax, r12d
 * 00000001402D651D: ja      loc_1402D66DA
 * 00000001402D6523: test    r15d, r15d
 * 00000001402D6526: mov     r15, [rbp+2250h+var_21F0]
 * 00000001402D652A: jnz     loc_1402D66DE
 * 00000001402D6530: mov     [r14], ebx
 * 00000001402D6533: lea     rdx, [rbp+2250h+var_1F60]
 * 00000001402D653A: mov     [r14+4], r13d
 * 00000001402D653E: lea     r8, [rbp+2250h+var_1DE0]
 * 00000001402D6545: mov     eax, [r14]
 * 00000001402D6548: mov     r9d, r13d
 * 00000001402D654B: sub     r9d, eax
 * 00000001402D654E: mov     dword ptr [rbp+2250h+var_2218], r13d
 * 00000001402D6552: mov     r11d, r9d
 * 00000001402D6555: lea     r14, [r15+rax]
 * 00000001402D6559: add     r11, r14
 * 00000001402D655C: xor     eax, eax
 * 00000001402D655E: mov     r10d, eax
 * 00000001402D6561: mov     rcx, [r8]
 * 00000001402D6564: mov     eax, [rdx]
 * 00000001402D6566: add     rax, rcx
 * 00000001402D6569: cmp     r14, rax
 * 00000001402D656C: jnb     short loc_1402D6577
 * 00000001402D656E: cmp     r11, rcx
 * 00000001402D6571: ja      loc_1402D66C6
 * 00000001402D6577: inc     r10d
 * 00000001402D657A: add     r8, 8
 * 00000001402D657E: add     rdx, 4
 * 00000001402D6582: cmp     r10d, 5
 * 00000001402D6586: jb      short loc_1402D6561
 * 00000001402D6588: mov     rax, [rbp+2250h+var_2188]
 * 00000001402D658F: mov     rbx, r14
 * 00000001402D6592: add     [rax+6C8h], r9d
 * 00000001402D6599: mov     r15d, [rax+6B4h]
 * 00000001402D65A0: mov     r12, [rax+6B8h]
 * 00000001402D65A7: mov     rax, r14
 * 00000001402D65AA: cmp     r14, r11
 * 00000001402D65AD: jnb     short loc_1402D65BF
 * 00000001402D65AF: mov     ecx, 40h ; '@'
 * 00000001402D65B4: prefetchnta byte ptr [rax]
 * 00000001402D65B7: add     rax, rcx
 * 00000001402D65BA: cmp     rax, r11
 * 00000001402D65BD: jb      short loc_1402D65B4
 * 00000001402D65BF: mov     r10d, r9d
 * 00000001402D65C2: mov     r8, r12
 * 00000001402D65C5: shr     r10d, 7
 * 00000001402D65C9: mov     r11d, 1
 * 00000001402D65CF: test    r10d, r10d
 * 00000001402D65D2: jz      short loc_1402D663B
 * 00000001402D65D4: mov     rdi, 7010008004002001h
 * 00000001402D65DE: mov     eax, 8
 * 00000001402D65E3: xor     r8, [rbx]
 * 00000001402D65E6: mov     ecx, r15d
 * 00000001402D65E9: rol     r8, cl
 * 00000001402D65EC: xor     r8, [rbx+8]
 * 00000001402D65F0: add     rbx, 10h
 * 00000001402D65F4: rol     r8, cl
 * 00000001402D65F7: sub     rax, r11
 * 00000001402D65FA: jnz     short loc_1402D65E3
 * 00000001402D65FC: mov     rcx, rbx
 * 00000001402D65FF: sub     rcx, r14
 * 00000001402D6602: xor     rcx, r12
 * 00000001402D6605: mov     rax, rcx
 * 00000001402D6608: rol     rax, 11h
 * 00000001402D660C: xor     rcx, rax
 * 00000001402D660F: mov     rax, rdi
 * 00000001402D6612: mul     rcx
 * 00000001402D6615: xor     r15d, eax
 * 00000001402D6618: mov     [rbp+2250h+var_1CC0], rdx
 * 00000001402D661F: xor     r15d, edx
 * 00000001402D6622: and     r15d, 3Fh
 * 00000001402D6626: cmovz   r15d, r11d
 * 00000001402D662A: add     r10d, 0FFFFFFFFh
 * 00000001402D662E: jnz     short loc_1402D65DE
 * 00000001402D6630: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D6634: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D663B: and     r9d, 7Fh
 * 00000001402D663F: cmp     r9d, 8
 * 00000001402D6643: jb      short loc_1402D6662
 * 00000001402D6645: mov     eax, r9d
 * 00000001402D6648: shr     rax, 3
 * 00000001402D664C: xor     r8, [rbx]
 * 00000001402D664F: mov     ecx, r15d
 * 00000001402D6652: rol     r8, cl
 * 00000001402D6655: add     rbx, 8
 * 00000001402D6659: add     r9d, 0FFFFFFF8h
 * 00000001402D665D: sub     rax, r11
 * 00000001402D6660: jnz     short loc_1402D664C
 * 00000001402D6662: test    r9d, r9d
 * 00000001402D6665: jz      short loc_1402D667C
 * 00000001402D6667: movzx   eax, byte ptr [rbx]
 * 00000001402D666A: mov     ecx, r15d
 * 00000001402D666D: xor     r8, rax
 * 00000001402D6670: add     rbx, r11
 * 00000001402D6673: rol     r8, cl
 * 00000001402D6676: add     r9d, 0FFFFFFFFh
 * 00000001402D667A: jnz     short loc_1402D6667
 * 00000001402D667C: mov     rax, r8
 * 00000001402D667F: shr     rax, 1Fh
 * 00000001402D6683: xor     r9d, r9d
 * 00000001402D6686: jmp     short loc_1402D668F
 * 00000001402D6688: xor     r8d, eax
 * 00000001402D668B: shr     rax, 1Fh
 * 00000001402D668F: test    rax, rax
 * 00000001402D6692: jnz     short loc_1402D6688
 * 00000001402D6694: mov     rax, [rbp+2250h+var_21E0]
 * 00000001402D6698: btr     r8d, 1Fh
 * 00000001402D669D: mov     r12d, [rbp+2250h+var_21B4]
 * 00000001402D66A4: mov     ebx, [rbp+2250h+var_21B8]
 * 00000001402D66AA: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D66B1: mov     r15, [rbp+2250h+var_21F0]
 * 00000001402D66B5: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D66B9: mov     [rax+8], r8d
 * 00000001402D66BD: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402D66C4: jmp     short loc_1402D66E1
 * 00000001402D66C6: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D66CD: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402D66D4: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D66D8: jmp     short loc_1402D66DE
 * 00000001402D66DA: mov     r15, [rbp+2250h+var_21F0]
 * 00000001402D66DE: xor     r9d, r9d
 * 00000001402D66E1: cmp     r13d, ebx
 * 00000001402D66E4: jb      loc_1402D6948
 * 00000001402D66EA: cmp     [rbp+2250h+var_21D0], r12d
 * 00000001402D66F1: ja      loc_1402D6948
 * 00000001402D66F7: cmp     r10, r8
 * 00000001402D66FA: jz      loc_1402D6948
 * 00000001402D6700: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D6704: mov     r13d, [rax+4]
 * 00000001402D6708: cmp     r13d, r12d
 * 00000001402D670B: ja      loc_1402D6948
 * 00000001402D6711: mov     ecx, 0Ch
 * 00000001402D6716: cmp     rax, r8
 * 00000001402D6719: jz      loc_1402D6948
 * 00000001402D671F: cmp     [rbp+2250h+var_2200], r9d
 * 00000001402D6723: jz      short loc_1402D672D
 * 00000001402D6725: mov     r8b, 80h
 * 00000001402D6728: jmp     loc_1402D690B
 * 00000001402D672D: mov     edx, [rax]
 * 00000001402D672F: mov     ecx, [r10+4]
 * 00000001402D6733: mov     dword ptr [rbp+2250h+var_2218], edx
 * 00000001402D6736: cmp     edx, ecx
 * 00000001402D6738: jnb     short loc_1402D6791
 * 00000001402D673A: test    dword ptr [r11+828h], 200000h
 * 00000001402D6745: jz      loc_1402E4517
 * 00000001402D674B: xor     eax, eax
 * 00000001402D674D: cmp     [r11+790h], eax
 * 00000001402D6754: jnz     short loc_1402D6791
 * 00000001402D6756: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D6760: add     rax, r11
 * 00000001402D6763: mov     [r11+798h], rax
 * 00000001402D676A: xor     eax, eax
 * 00000001402D676C: mov     [r11+7A0h], rax
 * 00000001402D6773: mov     eax, 1
 * 00000001402D6778: mov     qword ptr [r11+7A8h], 10Fh
 * 00000001402D6783: mov     [r11+7B0h], r15
 * 00000001402D678A: mov     [r11+790h], eax
 * 00000001402D6791: mov     r9d, edx
 * 00000001402D6794: lea     r14, [r15+rcx]
 * 00000001402D6798: sub     r9d, ecx
 * 00000001402D679B: lea     rdx, [rbp+2250h+var_1F60]
 * 00000001402D67A2: mov     ebx, r9d
 * 00000001402D67A5: lea     r8, [rbp+2250h+var_1DE0]
 * 00000001402D67AC: add     rbx, r14
 * 00000001402D67AF: xor     eax, eax
 * 00000001402D67B1: mov     r10d, eax
 * 00000001402D67B4: mov     rcx, [r8]
 * 00000001402D67B7: mov     eax, [rdx]
 * 00000001402D67B9: add     rax, rcx
 * 00000001402D67BC: cmp     r14, rax
 * 00000001402D67BF: jnb     short loc_1402D67CA
 * 00000001402D67C1: cmp     rbx, rcx
 * 00000001402D67C4: ja      loc_1402D68FC
 * 00000001402D67CA: mov     eax, 4
 * 00000001402D67CF: inc     r10d
 * 00000001402D67D2: add     rdx, rax
 * 00000001402D67D5: add     r8, 8
 * 00000001402D67D9: cmp     r10d, 5
 * 00000001402D67DD: jb      short loc_1402D67B4
 * 00000001402D67DF: cmp     r9d, eax
 * 00000001402D67E2: jb      loc_1402D68FC
 * 00000001402D67E8: add     [r11+6C8h], r9d
 * 00000001402D67EF: mov     rax, r14
 * 00000001402D67F2: mov     r12d, [r11+6B4h]
 * 00000001402D67F9: mov     r15, [r11+6B8h]
 * 00000001402D6800: mov     r11, r14
 * 00000001402D6803: cmp     r14, rbx
 * 00000001402D6806: jnb     short loc_1402D6818
 * 00000001402D6808: mov     ecx, 40h ; '@'
 * 00000001402D680D: prefetchnta byte ptr [rax]
 * 00000001402D6810: add     rax, rcx
 * 00000001402D6813: cmp     rax, rbx
 * 00000001402D6816: jb      short loc_1402D680D
 * 00000001402D6818: mov     r10d, r9d
 * 00000001402D681B: mov     r8, r15
 * 00000001402D681E: shr     r10d, 7
 * 00000001402D6822: mov     ebx, 1
 * 00000001402D6827: test    r10d, r10d
 * 00000001402D682A: jz      short loc_1402D6891
 * 00000001402D682C: mov     rsi, 7010008004002001h
 * 00000001402D6836: mov     edx, 8
 * 00000001402D683B: mov     rax, [r11]
 * 00000001402D683E: mov     ecx, r12d
 * 00000001402D6841: xor     rax, r8
 * 00000001402D6844: mov     r8, [r11+8]
 * 00000001402D6848: rol     rax, cl
 * 00000001402D684B: add     r11, 10h
 * 00000001402D684F: xor     r8, rax
 * 00000001402D6852: rol     r8, cl
 * 00000001402D6855: sub     rdx, rbx
 * 00000001402D6858: jnz     short loc_1402D683B
 * 00000001402D685A: mov     rcx, r11
 * 00000001402D685D: sub     rcx, r14
 * 00000001402D6860: xor     rcx, r15
 * 00000001402D6863: mov     rax, rcx
 * 00000001402D6866: rol     rax, 11h
 * 00000001402D686A: xor     rcx, rax
 * 00000001402D686D: mov     rax, rsi
 * 00000001402D6870: mul     rcx
 * 00000001402D6873: xor     eax, edx
 * 00000001402D6875: mov     [rbp+2250h+var_1CB8], rdx
 * 00000001402D687C: xor     r12d, eax
 * 00000001402D687F: and     r12d, 3Fh
 * 00000001402D6883: cmovz   r12d, ebx
 * 00000001402D6887: add     r10d, 0FFFFFFFFh
 * 00000001402D688B: jnz     short loc_1402D6836
 * 00000001402D688D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D6891: and     r9d, 7Fh
 * 00000001402D6895: cmp     r9d, 8
 * 00000001402D6899: jb      short loc_1402D68B8
 * 00000001402D689B: mov     edx, r9d
 * 00000001402D689E: shr     rdx, 3
 * 00000001402D68A2: xor     r8, [r11]
 * 00000001402D68A5: mov     ecx, r12d
 * 00000001402D68A8: rol     r8, cl
 * 00000001402D68AB: add     r11, 8
 * 00000001402D68AF: add     r9d, 0FFFFFFF8h
 * 00000001402D68B3: sub     rdx, rbx
 * 00000001402D68B6: jnz     short loc_1402D68A2
 * 00000001402D68B8: test    r9d, r9d
 * 00000001402D68BB: jz      short loc_1402D68D3
 * 00000001402D68BD: movzx   eax, byte ptr [r11]
 * 00000001402D68C1: mov     ecx, r12d
 * 00000001402D68C4: xor     r8, rax
 * 00000001402D68C7: add     r11, rbx
 * 00000001402D68CA: rol     r8, cl
 * 00000001402D68CD: add     r9d, 0FFFFFFFFh
 * 00000001402D68D1: jnz     short loc_1402D68BD
 * 00000001402D68D3: mov     rax, r8
 * 00000001402D68D6: shr     rax, 7
 * 00000001402D68DA: xor     r9d, r9d
 * 00000001402D68DD: jmp     short loc_1402D68E6
 * 00000001402D68DF: xor     r8b, al
 * 00000001402D68E2: shr     rax, 7
 * 00000001402D68E6: test    rax, rax
 * 00000001402D68E9: jnz     short loc_1402D68DF
 * 00000001402D68EB: mov     r12d, [rbp+2250h+var_21B4]
 * 00000001402D68F2: and     r8b, 7Fh
 * 00000001402D68F6: mov     r15, [rbp+2250h+var_21F0]
 * 00000001402D68FA: jmp     short loc_1402D6902
 * 00000001402D68FC: xor     r9d, r9d
 * 00000001402D68FF: mov     r8b, 80h
 * 00000001402D6902: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D6906: mov     ecx, 0Ch
 * 00000001402D690B: mov     rax, [rbp+2250h+var_2208]
 * 00000001402D690F: add     r10, rcx
 * 00000001402D6912: mov     [rbp+2250h+var_21D8], r10
 * 00000001402D6916: mov     [rax], r8b
 * 00000001402D6919: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D691D: inc     [rbp+2250h+var_2208]
 * 00000001402D6921: add     rax, rcx
 * 00000001402D6924: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402D692B: mov     [rbp+2250h+var_2250], rax
 * 00000001402D692F: cmp     rax, r8
 * 00000001402D6932: jz      short loc_1402D6938
 * 00000001402D6934: mov     r13d, [rax+4]
 * 00000001402D6938: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D693F: cmp     r13d, r12d
 * 00000001402D6942: jbe     loc_1402D6716
 * 00000001402D6948: mov     r14, [rbp+2250h+var_21E0]
 * 00000001402D694C: xor     eax, eax
 * 00000001402D694E: cmp     [rbp+2250h+var_2200], eax
 * 00000001402D6951: jnz     loc_1402D6ACC
 * 00000001402D6957: mov     eax, dword ptr [rbp+2250h+var_2218]
 * 00000001402D695A: cmp     eax, r12d
 * 00000001402D695D: jz      loc_1402D6ACC
 * 00000001402D6963: mov     [r14+0Ch], eax
 * 00000001402D6967: lea     rdx, [rbp+2250h+var_1F60]
 * 00000001402D696E: mov     [r14+10h], r12d
 * 00000001402D6972: lea     r8, [rbp+2250h+var_1DE0]
 * 00000001402D6979: mov     eax, [r14+0Ch]
 * 00000001402D697D: mov     r9d, r12d
 * 00000001402D6980: sub     r9d, eax
 * 00000001402D6983: mov     r11d, r9d
 * 00000001402D6986: lea     rbx, [r15+rax]
 * 00000001402D698A: add     r11, rbx
 * 00000001402D698D: xor     eax, eax
 * 00000001402D698F: mov     r10d, eax
 * 00000001402D6992: lea     r13d, [rax+1]
 * 00000001402D6996: mov     rcx, [r8]
 * 00000001402D6999: mov     eax, [rdx]
 * 00000001402D699B: add     rax, rcx
 * 00000001402D699E: cmp     rbx, rax
 * 00000001402D69A1: jnb     short loc_1402D69AC
 * 00000001402D69A3: cmp     r11, rcx
 * 00000001402D69A6: ja      loc_1402D6AC8
 * 00000001402D69AC: add     r10d, r13d
 * 00000001402D69AF: add     r8, 8
 * 00000001402D69B3: add     rdx, 4
 * 00000001402D69B7: cmp     r10d, 5
 * 00000001402D69BB: jb      short loc_1402D6996
 * 00000001402D69BD: mov     rax, [rbp+2250h+var_2188]
 * 00000001402D69C4: mov     r10, rbx
 * 00000001402D69C7: add     [rax+6C8h], r9d
 * 00000001402D69CE: mov     r15d, [rax+6B4h]
 * 00000001402D69D5: mov     r14, [rax+6B8h]
 * 00000001402D69DC: mov     rax, rbx
 * 00000001402D69DF: cmp     rbx, r11
 * 00000001402D69E2: jnb     short loc_1402D69F4
 * 00000001402D69E4: mov     ecx, 40h ; '@'
 * 00000001402D69E9: prefetchnta byte ptr [rax]
 * 00000001402D69EC: add     rax, rcx
 * 00000001402D69EF: cmp     rax, r11
 * 00000001402D69F2: jb      short loc_1402D69E9
 * 00000001402D69F4: mov     r11d, r9d
 * 00000001402D69F7: mov     r8, r14
 * 00000001402D69FA: shr     r11d, 7
 * 00000001402D69FE: test    r11d, r11d
 * 00000001402D6A01: jz      short loc_1402D6A68
 * 00000001402D6A03: mov     rsi, 7010008004002001h
 * 00000001402D6A0D: mov     edx, 8
 * 00000001402D6A12: mov     rax, [r10]
 * 00000001402D6A15: mov     ecx, r15d
 * 00000001402D6A18: xor     rax, r8
 * 00000001402D6A1B: mov     r8, [r10+8]
 * 00000001402D6A1F: rol     rax, cl
 * 00000001402D6A22: add     r10, 10h
 * 00000001402D6A26: xor     r8, rax
 * 00000001402D6A29: rol     r8, cl
 * 00000001402D6A2C: sub     rdx, r13
 * 00000001402D6A2F: jnz     short loc_1402D6A12
 * 00000001402D6A31: mov     rcx, r10
 * 00000001402D6A34: sub     rcx, rbx
 * 00000001402D6A37: xor     rcx, r14
 * 00000001402D6A3A: mov     rax, rcx
 * 00000001402D6A3D: rol     rax, 11h
 * 00000001402D6A41: xor     rcx, rax
 * 00000001402D6A44: mov     rax, rsi
 * 00000001402D6A47: mul     rcx
 * 00000001402D6A4A: xor     eax, edx
 * 00000001402D6A4C: mov     [rbp+2250h+var_1CB0], rdx
 * 00000001402D6A53: xor     r15d, eax
 * 00000001402D6A56: and     r15d, 3Fh
 * 00000001402D6A5A: cmovz   r15d, r13d
 * 00000001402D6A5E: add     r11d, 0FFFFFFFFh
 * 00000001402D6A62: jnz     short loc_1402D6A0D
 * 00000001402D6A64: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D6A68: and     r9d, 7Fh
 * 00000001402D6A6C: cmp     r9d, 8
 * 00000001402D6A70: jb      short loc_1402D6A8F
 * 00000001402D6A72: mov     edx, r9d
 * 00000001402D6A75: shr     rdx, 3
 * 00000001402D6A79: xor     r8, [r10]
 * 00000001402D6A7C: mov     ecx, r15d
 * 00000001402D6A7F: rol     r8, cl
 * 00000001402D6A82: add     r10, 8
 * 00000001402D6A86: add     r9d, 0FFFFFFF8h
 * 00000001402D6A8A: sub     rdx, r13
 * 00000001402D6A8D: jnz     short loc_1402D6A79
 * 00000001402D6A8F: test    r9d, r9d
 * 00000001402D6A92: jz      short loc_1402D6AAA
 * 00000001402D6A94: movzx   eax, byte ptr [r10]
 * 00000001402D6A98: mov     ecx, r15d
 * 00000001402D6A9B: xor     r8, rax
 * 00000001402D6A9E: add     r10, r13
 * 00000001402D6AA1: rol     r8, cl
 * 00000001402D6AA4: add     r9d, 0FFFFFFFFh
 * 00000001402D6AA8: jnz     short loc_1402D6A94
 * 00000001402D6AAA: mov     rax, r8
 * 00000001402D6AAD: jmp     short loc_1402D6AB2
 * 00000001402D6AAF: xor     r8d, eax
 * 00000001402D6AB2: shr     rax, 1Fh
 * 00000001402D6AB6: test    rax, rax
 * 00000001402D6AB9: jnz     short loc_1402D6AAF
 * 00000001402D6ABB: mov     r14, [rbp+2250h+var_21E0]
 * 00000001402D6ABF: btr     r8d, 1Fh
 * 00000001402D6AC4: mov     [r14+14h], r8d
 * 00000001402D6AC8: mov     r10, [rbp+2250h+var_21D8]
 * 00000001402D6ACC: mov     rdx, [rbp+2250h+var_21C0]
 * 00000001402D6AD3: cmp     r10, rdx
 * 00000001402D6AD6: jz      short loc_1402D6B1D
 * 00000001402D6AD8: mov     eax, [r10]
 * 00000001402D6ADB: mov     ecx, [r10+4]
 * 00000001402D6ADF: cmp     eax, [rbp+2250h+var_21B8]
 * 00000001402D6AE5: jb      short loc_1402D6B1D
 * 00000001402D6AE7: cmp     ecx, r12d
 * 00000001402D6AEA: ja      short loc_1402D6B1D
 * 00000001402D6AEC: mov     rcx, [rbp+2250h+var_2250]
 * 00000001402D6AF0: cmp     rcx, rdx
 * 00000001402D6AF3: jz      short loc_1402D6B11
 * 00000001402D6AF5: mov     rax, [rbp+2250h+var_2208]
 * 00000001402D6AF9: mov     byte ptr [rax], 80h
 * 00000001402D6AFC: inc     rax
 * 00000001402D6AFF: mov     [rbp+2250h+var_2208], rax
 * 00000001402D6B03: mov     eax, 0Ch
 * 00000001402D6B08: add     rcx, rax
 * 00000001402D6B0B: mov     [rbp+2250h+var_2250], rcx
 * 00000001402D6B0F: jmp     short loc_1402D6B16
 * 00000001402D6B11: mov     eax, 0Ch
 * 00000001402D6B16: add     r10, rax
 * 00000001402D6B19: mov     [rbp+2250h+var_21D8], r10
 * 00000001402D6B1D: mov     r13, [rbp+2250h+var_2248]
 * 00000001402D6B21: add     r14, 18h
 * 00000001402D6B25: mov     r11, [rbp+2250h+var_2188]
 * 00000001402D6B2C: add     r13, 28h ; '('
 * 00000001402D6B30: mov     r12, [rbp+2250h+var_21F0]
 * 00000001402D6B34: mov     [rbp+2250h+var_21E0], r14
 * 00000001402D6B38: mov     [rbp+2250h+var_2248], r13
 * 00000001402D6B3C: cmp     r14, [rbp+2250h+var_2230]
 * 00000001402D6B40: jnz     loc_1402D62BA
 * 00000001402D6B46: mov     rbx, [rbp+2250h+var_2158]
 * 00000001402D6B4D: mov     r13, rbx
 * 00000001402D6B50: mov     [rbp+2250h+var_20F8], rbx
 * 00000001402D6B57: xor     eax, eax
 * 00000001402D6B59: mov     ecx, eax
 * 00000001402D6B5B: mov     r12d, [rbp+2250h+var_2238]
 * 00000001402D6B5F: mov     rbx, [rbp+2250h+var_21B0]
 * 00000001402D6B66: mov     rdx, [rbp+2250h+var_2240]
 * 00000001402D6B6A: mov     r8d, 80000000h
 * 00000001402D6B70: mov     rax, r13
 * 00000001402D6B73: mov     [rbp+2250h+var_2220], r13
 * 00000001402D6B77: sub     rax, rsi
 * 00000001402D6B7A: mov     rsi, r13
 * 00000001402D6B7D: add     rdx, rax
 * 00000001402D6B80: lea     eax, [rcx+r8]
 * 00000001402D6B84: mov     [rbp+2250h+var_2240], rdx
 * 00000001402D6B88: test    r8d, eax
 * 00000001402D6B8B: jnz     short loc_1402D6B99
 * 00000001402D6B8D: cmp     ecx, 0C000010Eh
 * 00000001402D6B93: jnz     loc_1402D6FC9
 * 00000001402D6B99: mov     [rdx+28h], rbx
 * 00000001402D6B9D: jmp     loc_1402D6FC9
 * 00000001402D6BA2: mov     rbx, r13
 * 00000001402D6BA5: mov     [rbp+2250h+var_2238], eax
 * 00000001402D6BA8: mov     r13, rax
 * 00000001402D6BAB: mov     r15d, eax
 * 00000001402D6BAE: mov     r12d, eax
 * 00000001402D6BB1: jmp     short loc_1402D6BB5
 * 00000001402D6BB3: xor     eax, eax
 * 00000001402D6BB5: mov     [rbp+2250h+var_20BC], eax
 * 00000001402D6BBB: mov     rax, [rsi+2F8h]
 * 00000001402D6BC2: lea     r8, [rbp+2250h+var_1FE8]
 * 00000001402D6BC9: lea     rdx, [rbp+2250h+var_20BC]
 * 00000001402D6BD0: mov     ecx, r12d
 * 00000001402D6BD3: call    KeGuardDispatchICall
 * 00000001402D6BD8: test    eax, eax
 * 00000001402D6BDA: jz      loc_1402D6D14
 * 00000001402D6BE0: mov     rax, [rsi+2D8h]
 * 00000001402D6BE7: mov     rcx, [rbp+2250h+var_1FE8]
 * 00000001402D6BEE: call    KeGuardDispatchICall
 * 00000001402D6BF3: mov     r14, rax
 * 00000001402D6BF6: test    rax, rax
 * 00000001402D6BF9: jz      short loc_1402D6BBB
 * 00000001402D6BFB: mov     rax, [rsi+2E0h]
 * 00000001402D6C02: mov     edi, 1
 * 00000001402D6C07: add     r15d, edi
 * 00000001402D6C0A: mov     rcx, r14
 * 00000001402D6C0D: mov     [rbp+2250h+var_2238], r15d
 * 00000001402D6C11: call    KeGuardDispatchICall
 * 00000001402D6C16: mov     r15, rax
 * 00000001402D6C19: lea     rdx, [rbp+2250h+var_1CA8]
 * 00000001402D6C20: mov     rax, [rsi+208h]
 * 00000001402D6C27: mov     rcx, r15
 * 00000001402D6C2A: call    KeGuardDispatchICall
 * 00000001402D6C2F: test    rax, rax
 * 00000001402D6C32: jz      short loc_1402D6C53
 * 00000001402D6C34: mov     rax, [rsi+2E8h]
 * 00000001402D6C3B: mov     rdx, r14
 * 00000001402D6C3E: mov     rcx, [rbp+2250h+var_1FE8]
 * 00000001402D6C45: call    KeGuardDispatchICall
 * 00000001402D6C4A: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402D6C4E: jmp     loc_1402D6BBB
 * 00000001402D6C53: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D6C5D: jz      short loc_1402D6C9F
 * 00000001402D6C5F: mov     rcx, [rsi+908h]
 * 00000001402D6C66: mov     edx, 30h ; '0'
 * 00000001402D6C6B: lea     r8d, [rdx-2Ah]
 * 00000001402D6C6F: mov     rax, [rbx]
 * 00000001402D6C72: add     edx, 0FFFFFFF8h
 * 00000001402D6C75: mov     [rcx], rax
 * 00000001402D6C78: add     rbx, 8
 * 00000001402D6C7C: add     rcx, 8
 * 00000001402D6C80: sub     r8, rdi
 * 00000001402D6C83: jnz     short loc_1402D6C6F
 * 00000001402D6C85: test    edx, edx
 * 00000001402D6C87: jz      short loc_1402D6C98
 * 00000001402D6C89: mov     al, [rbx]
 * 00000001402D6C8B: add     rbx, rdi
 * 00000001402D6C8E: mov     [rcx], al
 * 00000001402D6C90: add     rcx, rdi
 * 00000001402D6C93: add     edx, 0FFFFFFFFh
 * 00000001402D6C96: jnz     short loc_1402D6C89
 * 00000001402D6C98: mov     rbx, [rsi+908h]
 * 00000001402D6C9F: mov     [rbx+18h], r15
 * 00000001402D6CA3: mov     rdx, rdi
 * 00000001402D6CA6: mov     rax, [rsi+588h]
 * 00000001402D6CAD: mov     [rax], rbx
 * 00000001402D6CB0: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D6CB7: mov     rax, [rsi+588h]
 * 00000001402D6CBE: mov     [rax+8], r15
 * 00000001402D6CC2: mov     dword ptr [rax+14h], 1000h
 * 00000001402D6CC9: xor     eax, eax
 * 00000001402D6CCB: cmp     [rsi+790h], eax
 * 00000001402D6CD1: jnz     short loc_1402D6D19
 * 00000001402D6CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D6CDD: add     rax, rsi
 * 00000001402D6CE0: mov     [rsi+798h], rax
 * 00000001402D6CE7: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D6CF1: add     rax, rbx
 * 00000001402D6CF4: mov     [rsi+7A0h], rax
 * 00000001402D6CFB: movsxd  rax, dword ptr [rbx]
 * 00000001402D6CFE: mov     [rsi+7A8h], rax
 * 00000001402D6D05: mov     [rsi+7B0h], r13
 * 00000001402D6D0C: mov     [rsi+790h], edx
 * 00000001402D6D12: jmp     short loc_1402D6D19
 * 00000001402D6D14: mov     edx, 1
 * 00000001402D6D19: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402D6D1D: add     r12d, edx
 * 00000001402D6D20: add     r13, rdx
 * 00000001402D6D23: mov     eax, 3
 * 00000001402D6D28: cmp     r12d, eax
 * 00000001402D6D2B: jb      loc_1402D6BB3
 * 00000001402D6D31: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D6D38: mov     r12d, r15d
 * 00000001402D6D3B: jmp     loc_1402D6FCE
 * 00000001402D6D40: mov     rbx, r13
 * 00000001402D6D43: mov     [rbp+2250h+var_1F20], rax
 * 00000001402D6D4A: mov     r12d, eax
 * 00000001402D6D4D: mov     r15, cr8
 * 00000001402D6D51: mov     [rbp+2250h+var_2230], r15
 * 00000001402D6D55: mov     cr8, r8
 * 00000001402D6D59: mov     rax, [rsi+308h]
 * 00000001402D6D60: lea     rcx, [rbp+2250h+var_1F20]
 * 00000001402D6D67: call    KeGuardDispatchICall
 * 00000001402D6D6C: mov     r14, rax
 * 00000001402D6D6F: test    rax, rax
 * 00000001402D6D72: jz      loc_1402D6E87
 * 00000001402D6D78: mov     edi, 1
 * 00000001402D6D7D: mov     rax, [rsi+208h]
 * 00000001402D6D84: lea     rdx, [rbp+2250h+var_1CA0]
 * 00000001402D6D8B: mov     rcx, r14
 * 00000001402D6D8E: add     r12d, edi
 * 00000001402D6D91: call    KeGuardDispatchICall
 * 00000001402D6D96: test    rax, rax
 * 00000001402D6D99: jnz     loc_1402D6E5D
 * 00000001402D6D9F: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D6DA9: jz      short loc_1402D6DE9
 * 00000001402D6DAB: mov     rcx, [rsi+908h]
 * 00000001402D6DB2: lea     edx, [rax+30h]
 * 00000001402D6DB5: lea     r8d, [rax+6]
 * 00000001402D6DB9: mov     rax, [rbx]
 * 00000001402D6DBC: add     edx, 0FFFFFFF8h
 * 00000001402D6DBF: mov     [rcx], rax
 * 00000001402D6DC2: add     rbx, 8
 * 00000001402D6DC6: add     rcx, 8
 * 00000001402D6DCA: sub     r8, rdi
 * 00000001402D6DCD: jnz     short loc_1402D6DB9
 * 00000001402D6DCF: test    edx, edx
 * 00000001402D6DD1: jz      short loc_1402D6DE2
 * 00000001402D6DD3: mov     al, [rbx]
 * 00000001402D6DD5: add     rbx, rdi
 * 00000001402D6DD8: mov     [rcx], al
 * 00000001402D6DDA: add     rcx, rdi
 * 00000001402D6DDD: add     edx, 0FFFFFFFFh
 * 00000001402D6DE0: jnz     short loc_1402D6DD3
 * 00000001402D6DE2: mov     rbx, [rsi+908h]
 * 00000001402D6DE9: mov     [rbx+18h], r14
 * 00000001402D6DED: mov     rax, [rsi+588h]
 * 00000001402D6DF4: mov     [rax], rbx
 * 00000001402D6DF7: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D6DFE: mov     rax, [rsi+588h]
 * 00000001402D6E05: mov     [rax+8], r14
 * 00000001402D6E09: mov     dword ptr [rax+14h], 1000h
 * 00000001402D6E10: xor     eax, eax
 * 00000001402D6E12: cmp     [rsi+790h], eax
 * 00000001402D6E18: jnz     short loc_1402D6E5D
 * 00000001402D6E1A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D6E24: add     rax, rsi
 * 00000001402D6E27: mov     [rsi+798h], rax
 * 00000001402D6E2E: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D6E38: add     rax, rbx
 * 00000001402D6E3B: mov     [rsi+7A0h], rax
 * 00000001402D6E42: movsxd  rax, dword ptr [rbx]
 * 00000001402D6E45: mov     [rsi+7A8h], rax
 * 00000001402D6E4C: mov     qword ptr [rsi+7B0h], 4
 * 00000001402D6E57: mov     [rsi+790h], edi
 * 00000001402D6E5D: mov     rax, [rsi+308h]
 * 00000001402D6E64: lea     rcx, [rbp+2250h+var_1F20]
 * 00000001402D6E6B: call    KeGuardDispatchICall
 * 00000001402D6E70: mov     r14, rax
 * 00000001402D6E73: test    rax, rax
 * 00000001402D6E76: jnz     loc_1402D6D7D
 * 00000001402D6E7C: mov     r15, [rbp+2250h+var_2230]
 * 00000001402D6E80: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D6E87: movzx   eax, r15b
 * 00000001402D6E8B: mov     cr8, rax
 * 00000001402D6E8F: jmp     loc_1402D6FC9
 * 00000001402D6E94: mov     [rbp+2250h+var_1F18], rax
 * 00000001402D6E9B: lea     rcx, [rbp+2250h+var_1F18]
 * 00000001402D6EA2: mov     r12d, eax
 * 00000001402D6EA5: mov     rbx, r13
 * 00000001402D6EA8: mov     rax, [rsi+300h]
 * 00000001402D6EAF: call    KeGuardDispatchICall
 * 00000001402D6EB4: mov     r14, rax
 * 00000001402D6EB7: test    rax, rax
 * 00000001402D6EBA: jz      loc_1402D6FC9
 * 00000001402D6EC0: mov     edi, 1
 * 00000001402D6EC5: mov     rax, [rsi+208h]
 * 00000001402D6ECC: lea     rdx, [rbp+2250h+var_1C98]
 * 00000001402D6ED3: mov     rcx, r14
 * 00000001402D6ED6: add     r12d, edi
 * 00000001402D6ED9: call    KeGuardDispatchICall
 * 00000001402D6EDE: test    rax, rax
 * 00000001402D6EE1: jnz     loc_1402D6FA3
 * 00000001402D6EE7: test    [rsi+828h], r15d
 * 00000001402D6EEE: jz      short loc_1402D6F2E
 * 00000001402D6EF0: mov     rcx, [rsi+908h]
 * 00000001402D6EF7: lea     edx, [rax+30h]
 * 00000001402D6EFA: lea     r8d, [rax+6]
 * 00000001402D6EFE: mov     rax, [rbx]
 * 00000001402D6F01: add     edx, 0FFFFFFF8h
 * 00000001402D6F04: mov     [rcx], rax
 * 00000001402D6F07: add     rbx, 8
 * 00000001402D6F0B: add     rcx, 8
 * 00000001402D6F0F: sub     r8, rdi
 * 00000001402D6F12: jnz     short loc_1402D6EFE
 * 00000001402D6F14: test    edx, edx
 * 00000001402D6F16: jz      short loc_1402D6F27
 * 00000001402D6F18: mov     al, [rbx]
 * 00000001402D6F1A: add     rbx, rdi
 * 00000001402D6F1D: mov     [rcx], al
 * 00000001402D6F1F: add     rcx, rdi
 * 00000001402D6F22: add     edx, 0FFFFFFFFh
 * 00000001402D6F25: jnz     short loc_1402D6F18
 * 00000001402D6F27: mov     rbx, [rsi+908h]
 * 00000001402D6F2E: mov     [rbx+18h], r14
 * 00000001402D6F32: mov     rax, [rsi+588h]
 * 00000001402D6F39: mov     [rax], rbx
 * 00000001402D6F3C: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D6F43: mov     rax, [rsi+588h]
 * 00000001402D6F4A: mov     [rax+8], r14
 * 00000001402D6F4E: mov     dword ptr [rax+14h], 1000h
 * 00000001402D6F55: xor     eax, eax
 * 00000001402D6F57: cmp     [rsi+790h], eax
 * 00000001402D6F5D: jnz     short loc_1402D6FA3
 * 00000001402D6F5F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D6F69: add     rax, rsi
 * 00000001402D6F6C: mov     [rsi+798h], rax
 * 00000001402D6F73: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D6F7D: add     rax, rbx
 * 00000001402D6F80: mov     [rsi+7A0h], rax
 * 00000001402D6F87: movsxd  rax, dword ptr [rbx]
 * 00000001402D6F8A: mov     [rsi+7A8h], rax
 * 00000001402D6F91: mov     eax, 3
 * 00000001402D6F96: mov     [rsi+7B0h], rax
 * 00000001402D6F9D: mov     [rsi+790h], edi
 * 00000001402D6FA3: mov     rax, [rsi+300h]
 * 00000001402D6FAA: lea     rcx, [rbp+2250h+var_1F18]
 * 00000001402D6FB1: call    KeGuardDispatchICall
 * 00000001402D6FB6: mov     r14, rax
 * 00000001402D6FB9: test    rax, rax
 * 00000001402D6FBC: jnz     loc_1402D6EC5
 * 00000001402D6FC2: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D6FC9: mov     edx, 1
 * 00000001402D6FCE: shl     r12d, 0Ch
 * 00000001402D6FD2: add     [rsi+6C8h], r12d
 * 00000001402D6FD9: add     [rsi+6C4h], edx
 * 00000001402D6FDF: mov     eax, [rsi+6CCh]
 * 00000001402D6FE5: cmp     [rsi+6C8h], eax
 * 00000001402D6FEB: jge     short loc_1402D700C
 * 00000001402D6FED: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D6FF1: mov     r10d, 5
 * 00000001402D6FF7: mov     r15d, 40000000h
 * 00000001402D6FFD: lea     r8d, [r10+7]
 * 00000001402D7001: jmp     loc_1402D4A30
 * 00000001402D7006: mov     [rsi+6C4h], eax
 * 00000001402D700C: mov     [rbp+2250h+var_2220], rsi
 * 00000001402D7010: jmp     loc_1402D3375
 * 00000001402D7015: mov     edx, [r13+2Ch]
 * 00000001402D7019: lea     rcx, [rbp+2250h+var_1950]
 * 00000001402D7020: mov     rax, [rsi+1A0h]
 * 00000001402D7027: mov     ebx, [r13+28h]
 * 00000001402D702B: call    KeGuardDispatchICall
 * 00000001402D7030: mov     rax, [rsi+1D0h]
 * 00000001402D7037: lea     rdx, [rbp+2250h+var_1940]
 * 00000001402D703E: lea     rcx, [rbp+2250h+var_1950]
 * 00000001402D7045: call    KeGuardDispatchICall
 * 00000001402D704A: cmp     r15d, 26h ; '&'
 * 00000001402D704E: jz      short loc_1402D705E
 * 00000001402D7050: test    ebx, ebx
 * 00000001402D7052: jz      short loc_1402D7059
 * 00000001402D7054: mov     rbx, cr4
 * 00000001402D7057: jmp     short loc_1402D706D
 * 00000001402D7059: mov     rbx, cr0
 * 00000001402D705C: jmp     short loc_1402D706D
 * 00000001402D705E: xor     ecx, ecx
 * 00000001402D7060: xgetbv
 * 00000001402D7063: shl     rdx, 20h
 * 00000001402D7067: or      rdx, rax
 * 00000001402D706A: mov     rbx, rdx
 * 00000001402D706D: mov     rax, [rsi+198h]
 * 00000001402D7074: lea     rcx, [rbp+2250h+var_1940]
 * 00000001402D707B: call    KeGuardDispatchICall
 * 00000001402D7080: mov     r8, [r13+18h]
 * 00000001402D7084: xor     r15d, r15d
 * 00000001402D7087: mov     rcx, [r13+20h]
 * 00000001402D708B: and     r8, rbx
 * 00000001402D708E: cmp     r8, rcx
 * 00000001402D7091: jz      loc_1402D3378
 * 00000001402D7097: mov     eax, [r13+28h]
 * 00000001402D709B: mov     edx, [r13+2Ch]
 * 00000001402D709F: shl     rdx, 20h
 * 00000001402D70A3: or      rdx, rax
 * 00000001402D70A6: mov     eax, [rsi+790h]
 * 00000001402D70AC: test    eax, eax
 * 00000001402D70AE: jnz     loc_1402D3378
 * 00000001402D70B4: mov     rax, [rsi+588h]
 * 00000001402D70BB: xor     rcx, r8
 * 00000001402D70BE: mov     [rax+18h], rcx
 * 00000001402D70C2: mov     eax, [rsi+790h]
 * 00000001402D70C8: test    eax, eax
 * 00000001402D70CA: jnz     loc_1402D3378
 * 00000001402D70D0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D70DA: add     rax, rsi
 * 00000001402D70DD: mov     [rsi+798h], rax
 * 00000001402D70E4: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D70EE: add     rax, r13
 * 00000001402D70F1: mov     [rsi+7A0h], rax
 * 00000001402D70F8: movsxd  rax, dword ptr [r13+0]
 * 00000001402D70FC: mov     [rsi+7A8h], rax
 * 00000001402D7103: mov     [rsi+7B0h], rdx
 * 00000001402D710A: jmp     loc_1402D40D8
 * 00000001402D710F: cmp     dword ptr [rsi+7ECh], 0Bh
 * 00000001402D7116: jnz     loc_1402D3375
 * 00000001402D711C: add     dword ptr [rsi+6C8h], 100h
 * 00000001402D7126: mov     r14, [rsi+580h]
 * 00000001402D712D: mov     rax, [rsi+2D8h]
 * 00000001402D7134: mov     rcx, r14
 * 00000001402D7137: call    KeGuardDispatchICall
 * 00000001402D713C: mov     rbx, rax
 * 00000001402D713F: test    rax, rax
 * 00000001402D7142: jz      loc_1402D3375
 * 00000001402D7148: mov     rax, [rsi+2E0h]
 * 00000001402D714F: mov     rcx, rbx
 * 00000001402D7152: call    KeGuardDispatchICall
 * 00000001402D7157: mov     rcx, rax
 * 00000001402D715A: mov     rax, [r13+18h]
 * 00000001402D715E: test    rax, rax
 * 00000001402D7161: jz      short loc_1402D71C1
 * 00000001402D7163: cmp     rax, rcx
 * 00000001402D7166: jz      loc_1402D7237
 * 00000001402D716C: xor     eax, eax
 * 00000001402D716E: cmp     [rsi+790h], eax
 * 00000001402D7174: jnz     loc_1402D7237
 * 00000001402D717A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D7184: add     rax, rsi
 * 00000001402D7187: mov     [rsi+798h], rax
 * 00000001402D718E: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D7198: add     rax, r13
 * 00000001402D719B: mov     [rsi+7A0h], rax
 * 00000001402D71A2: movsxd  rax, dword ptr [r13+0]
 * 00000001402D71A6: mov     [rsi+7A8h], rax
 * 00000001402D71AD: mov     eax, 1
 * 00000001402D71B2: mov     [rsi+7B0h], rcx
 * 00000001402D71B9: mov     [rsi+790h], eax
 * 00000001402D71BF: jmp     short loc_1402D7237
 * 00000001402D71C1: mov     eax, [rsi+80Ch]
 * 00000001402D71C7: mov     rdx, [rsi+810h]
 * 00000001402D71CE: test    rax, rax
 * 00000001402D71D1: jz      short loc_1402D71E4
 * 00000001402D71D3: lea     r8, [rax-1]
 * 00000001402D71D7: add     r8, rdx
 * 00000001402D71DA: cmp     rcx, rdx
 * 00000001402D71DD: jb      short loc_1402D71E4
 * 00000001402D71DF: cmp     rcx, r8
 * 00000001402D71E2: jbe     short loc_1402D7233
 * 00000001402D71E4: xor     eax, eax
 * 00000001402D71E6: cmp     [rsi+790h], eax
 * 00000001402D71EC: jnz     short loc_1402D7233
 * 00000001402D71EE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D71F8: add     rax, rsi
 * 00000001402D71FB: mov     [rsi+798h], rax
 * 00000001402D7202: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D720C: add     rax, r13
 * 00000001402D720F: mov     [rsi+7A0h], rax
 * 00000001402D7216: movsxd  rax, dword ptr [r13+0]
 * 00000001402D721A: mov     [rsi+7A8h], rax
 * 00000001402D7221: mov     eax, 1
 * 00000001402D7226: mov     [rsi+7B0h], rcx
 * 00000001402D722D: mov     [rsi+790h], eax
 * 00000001402D7233: mov     [r13+18h], rcx
 * 00000001402D7237: mov     rax, [rsi+2E8h]
 * 00000001402D723E: mov     rdx, rbx
 * 00000001402D7241: mov     rcx, r14
 * 00000001402D7244: call    KeGuardDispatchICall
 * 00000001402D7249: jmp     loc_1402D3375
 * 00000001402D724E: jnz     short loc_1402D72A0
 * 00000001402D7250: xor     eax, eax
 * 00000001402D7252: cmp     [rsi+818h], rax
 * 00000001402D7259: jz      loc_1402D40F3
 * 00000001402D725F: mov     ecx, [rsi+82Ch]
 * 00000001402D7265: mov     eax, ecx
 * 00000001402D7267: shr     eax, 2
 * 00000001402D726A: and     eax, edx
 * 00000001402D726C: jnz     loc_1402D41EE
 * 00000001402D7272: xor     edx, edx
 * 00000001402D7274: cmp     [rsi+6C4h], edx
 * 00000001402D727A: lea     edx, [rax+1]
 * 00000001402D727D: jnz     short loc_1402D7293
 * 00000001402D727F: mov     eax, ecx
 * 00000001402D7281: shl     eax, 3
 * 00000001402D7284: xor     eax, ecx
 * 00000001402D7286: and     eax, 20h
 * 00000001402D7289: xor     eax, ecx
 * 00000001402D728B: mov     [rsi+82Ch], eax
 * 00000001402D7291: jmp     short loc_1402D72A0
 * 00000001402D7293: shr     ecx, 5
 * 00000001402D7296: and     ecx, edx
 * 00000001402D7298: cmp     eax, ecx
 * 00000001402D729A: jnz     loc_1402D41EE
 * 00000001402D72A0: mov     r14, [r13+8]
 * 00000001402D72A4: mov     r12d, 40h ; '@'
 * 00000001402D72AA: mov     r8d, [r13+10h]
 * 00000001402D72AE: mov     r9, r14
 * 00000001402D72B1: add     [rsi+6C8h], r8d
 * 00000001402D72B8: mov     rax, r14
 * 00000001402D72BB: mov     r10d, [rsi+6B4h]
 * 00000001402D72C2: mov     r15, [rsi+6B8h]
 * 00000001402D72C9: lea     rcx, [r14+r8]
 * 00000001402D72CD: cmp     r14, rcx
 * 00000001402D72D0: jnb     short loc_1402D72DD
 * 00000001402D72D2: prefetchnta byte ptr [rax]
 * 00000001402D72D5: add     rax, r12
 * 00000001402D72D8: cmp     rax, rcx
 * 00000001402D72DB: jb      short loc_1402D72D2
 * 00000001402D72DD: mov     r11d, r8d
 * 00000001402D72E0: mov     rbx, r15
 * 00000001402D72E3: shr     r11d, 7
 * 00000001402D72E7: test    r11d, r11d
 * 00000001402D72EA: jz      short loc_1402D735F
 * 00000001402D72EC: mov     rdi, 7010008004002001h
 * 00000001402D72F6: mov     edx, 8
 * 00000001402D72FB: lea     esi, [rdx-7]
 * 00000001402D72FE: mov     rax, [r9]
 * 00000001402D7301: mov     ecx, r10d
 * 00000001402D7304: xor     rax, rbx
 * 00000001402D7307: mov     rbx, [r9+8]
 * 00000001402D730B: rol     rax, cl
 * 00000001402D730E: add     r9, 10h
 * 00000001402D7312: xor     rbx, rax
 * 00000001402D7315: rol     rbx, cl
 * 00000001402D7318: sub     rdx, rsi
 * 00000001402D731B: jnz     short loc_1402D72FE
 * 00000001402D731D: mov     rcx, r9
 * 00000001402D7320: sub     rcx, r14
 * 00000001402D7323: xor     rcx, r15
 * 00000001402D7326: mov     rax, rcx
 * 00000001402D7329: rol     rax, 11h
 * 00000001402D732D: xor     rcx, rax
 * 00000001402D7330: mov     rax, rdi
 * 00000001402D7333: mul     rcx
 * 00000001402D7336: xor     r10d, eax
 * 00000001402D7339: mov     [rbp+2250h+var_1C90], rdx
 * 00000001402D7340: xor     r10d, edx
 * 00000001402D7343: mov     rdx, rsi
 * 00000001402D7346: and     r10d, 3Fh
 * 00000001402D734A: cmovz   r10d, edx
 * 00000001402D734E: add     r11d, 0FFFFFFFFh
 * 00000001402D7352: jnz     short loc_1402D72F6
 * 00000001402D7354: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D7358: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D735F: and     r8d, 7Fh
 * 00000001402D7363: cmp     r8d, 8
 * 00000001402D7367: jb      short loc_1402D7394
 * 00000001402D7369: mov     edx, r8d
 * 00000001402D736C: mov     esi, 1
 * 00000001402D7371: shr     rdx, 3
 * 00000001402D7375: xor     rbx, [r9]
 * 00000001402D7378: mov     ecx, r10d
 * 00000001402D737B: rol     rbx, cl
 * 00000001402D737E: add     r9, 8
 * 00000001402D7382: add     r8d, 0FFFFFFF8h
 * 00000001402D7386: sub     rdx, rsi
 * 00000001402D7389: jnz     short loc_1402D7375
 * 00000001402D738B: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D738F: mov     edx, 1
 * 00000001402D7394: test    r8d, r8d
 * 00000001402D7397: jz      short loc_1402D73AF
 * 00000001402D7399: movzx   eax, byte ptr [r9]
 * 00000001402D739D: mov     ecx, r10d
 * 00000001402D73A0: xor     rbx, rax
 * 00000001402D73A3: add     r9, rdx
 * 00000001402D73A6: rol     rbx, cl
 * 00000001402D73A9: add     r8d, 0FFFFFFFFh
 * 00000001402D73AD: jnz     short loc_1402D7399
 * 00000001402D73AF: mov     rax, rbx
 * 00000001402D73B2: shr     rax, 1Fh
 * 00000001402D73B6: xor     r15d, r15d
 * 00000001402D73B9: jmp     short loc_1402D73C1
 * 00000001402D73BB: xor     ebx, eax
 * 00000001402D73BD: shr     rax, 1Fh
 * 00000001402D73C1: test    rax, rax
 * 00000001402D73C4: jnz     short loc_1402D73BB
 * 00000001402D73C6: btr     ebx, 1Fh
 * 00000001402D73CA: cmp     ebx, [r13+14h]
 * 00000001402D73CE: jz      loc_1402D74A4
 * 00000001402D73D4: lock or [rsp+11A0h+var_11A0], eax
 * 00000001402D73D8: mov     eax, [r13+18h]
 * 00000001402D73DC: test    dl, al
 * 00000001402D73DE: jz      short loc_1402D73F1
 * 00000001402D73E0: mov     rax, [rsi+578h]
 * 00000001402D73E7: mov     cl, [rax]
 * 00000001402D73E9: test    cl, cl
 * 00000001402D73EB: jnz     loc_1402D74A4
 * 00000001402D73F1: mov     ecx, [r13+10h]
 * 00000001402D73F5: mov     rdx, [r13+8]
 * 00000001402D73F9: test    rcx, rcx
 * 00000001402D73FC: jz      loc_1402D753E
 * 00000001402D7402: mov     eax, [rsi+82Ch]
 * 00000001402D7408: test    r12b, al
 * 00000001402D740B: jz      loc_1402D753E
 * 00000001402D7411: mov     r12, cr8
 * 00000001402D7415: mov     eax, 2
 * 00000001402D741A: mov     cr8, rax
 * 00000001402D741E: lea     rax, [rcx-1]
 * 00000001402D7422: mov     r14, rdx
 * 00000001402D7425: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D742C: add     rax, rdx
 * 00000001402D742F: mov     ecx, 0FFFh
 * 00000001402D7434: or      rax, rcx
 * 00000001402D7437: mov     [rbp+2250h+var_2230], rax
 * 00000001402D743B: lea     r13, [r14-1]
 * 00000001402D743F: movzx   r15d, r12b
 * 00000001402D7443: mov     rax, [rsi+468h]
 * 00000001402D744A: xor     edx, edx
 * 00000001402D744C: mov     rcx, r14
 * 00000001402D744F: call    KeGuardDispatchICall
 * 00000001402D7454: cmp     eax, 0C000022Dh
 * 00000001402D7459: jnz     short loc_1402D747F
 * 00000001402D745B: mov     eax, 1
 * 00000001402D7460: cmp     r12b, al
 * 00000001402D7463: ja      short loc_1402D7487
 * 00000001402D7465: movzx   r15d, r12b
 * 00000001402D7469: mov     cr8, r15
 * 00000001402D746D: mov     al, [r14]
 * 00000001402D7470: mov     rax, cr8
 * 00000001402D7474: mov     eax, 2
 * 00000001402D7479: mov     cr8, rax
 * 00000001402D747D: jmp     short loc_1402D7443
 * 00000001402D747F: test    eax, eax
 * 00000001402D7481: js      loc_1402D7536
 * 00000001402D7487: mov     r10d, 1000h
 * 00000001402D748D: add     r14, r10
 * 00000001402D7490: add     r13, r10
 * 00000001402D7493: cmp     r13, [rbp+2250h+var_2230]
 * 00000001402D7497: jnz     short loc_1402D743F
 * 00000001402D7499: mov     cr8, r15
 * 00000001402D749D: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D74A1: xor     r15d, r15d
 * 00000001402D74A4: mov     ebx, 1
 * 00000001402D74A9: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D74B3: jz      loc_1402D3378
 * 00000001402D74B9: mov     r8d, [r13+10h]
 * 00000001402D74BD: test    r8d, r8d
 * 00000001402D74C0: jz      loc_1402D3375
 * 00000001402D74C6: mov     rdx, [r13+8]
 * 00000001402D74CA: lea     r9, [rbp+2250h+var_1930]
 * 00000001402D74D1: mov     rcx, rsi
 * 00000001402D74D4: call    sub_14019FEBC
 * 00000001402D74D9: mov     r8d, 10h
 * 00000001402D74DF: lea     r9, [r13+1Ch]
 * 00000001402D74E3: lea     r10, [rbp+2250h+var_1930]
 * 00000001402D74EA: mov     rcx, [r10]
 * 00000001402D74ED: add     r10, 8
 * 00000001402D74F1: mov     rax, [r9]
 * 00000001402D74F4: add     r9, 8
 * 00000001402D74F8: cmp     rcx, rax
 * 00000001402D74FB: jnz     loc_1402D75BB
 * 00000001402D7501: add     r8d, 0FFFFFFF8h
 * 00000001402D7505: cmp     r8d, 8
 * 00000001402D7509: jnb     short loc_1402D74EA
 * 00000001402D750B: test    r8d, r8d
 * 00000001402D750E: jz      loc_1402D76DE
 * 00000001402D7514: movzx   edx, byte ptr [r10]
 * 00000001402D7518: add     r10, rbx
 * 00000001402D751B: movzx   eax, byte ptr [r9]
 * 00000001402D751F: add     r9, rbx
 * 00000001402D7522: cmp     rdx, rax
 * 00000001402D7525: jnz     loc_1402D75BB
 * 00000001402D752B: add     r8d, 0FFFFFFFFh
 * 00000001402D752F: jnz     short loc_1402D7514
 * 00000001402D7531: jmp     loc_1402D76DE
 * 00000001402D7536: mov     cr8, r15
 * 00000001402D753A: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D753E: mov     eax, [rsi+790h]
 * 00000001402D7544: xor     r15d, r15d
 * 00000001402D7547: mov     ecx, [r13+14h]
 * 00000001402D754B: test    eax, eax
 * 00000001402D754D: jnz     short loc_1402D7565
 * 00000001402D754F: mov     eax, ebx
 * 00000001402D7551: xor     rcx, rax
 * 00000001402D7554: mov     rax, [rsi+588h]
 * 00000001402D755B: mov     [rax+18h], rcx
 * 00000001402D755F: mov     eax, [rsi+790h]
 * 00000001402D7565: mov     rcx, [r13+8]
 * 00000001402D7569: mov     ebx, 1
 * 00000001402D756E: test    eax, eax
 * 00000001402D7570: jnz     loc_1402D74A9
 * 00000001402D7576: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D7580: add     rax, rsi
 * 00000001402D7583: mov     [rsi+798h], rax
 * 00000001402D758A: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D7594: add     rax, r13
 * 00000001402D7597: mov     [rsi+7A0h], rax
 * 00000001402D759E: movsxd  rax, dword ptr [r13+0]
 * 00000001402D75A2: mov     [rsi+7A8h], rax
 * 00000001402D75A9: mov     [rsi+7B0h], rcx
 * 00000001402D75B0: mov     [rsi+790h], ebx
 * 00000001402D75B6: jmp     loc_1402D74A9
 * 00000001402D75BB: xor     eax, eax
 * 00000001402D75BD: lock or [rsp+11A0h+var_11A0], eax
 * 00000001402D75C1: mov     eax, [r13+18h]
 * 00000001402D75C5: test    bl, al
 * 00000001402D75C7: jz      short loc_1402D75DA
 * 00000001402D75C9: mov     rax, [rsi+578h]
 * 00000001402D75D0: mov     cl, [rax]
 * 00000001402D75D2: test    cl, cl
 * 00000001402D75D4: jnz     loc_1402D76DE
 * 00000001402D75DA: mov     edx, [r13+10h]
 * 00000001402D75DE: mov     rcx, [r13+8]
 * 00000001402D75E2: test    rdx, rdx
 * 00000001402D75E5: jz      loc_1402D7694
 * 00000001402D75EB: mov     eax, [rsi+82Ch]
 * 00000001402D75F1: mov     r8d, 40h ; '@'
 * 00000001402D75F7: test    r8b, al
 * 00000001402D75FA: jz      loc_1402D7694
 * 00000001402D7600: mov     r15, cr8
 * 00000001402D7604: lea     eax, [r8-3Eh]
 * 00000001402D7608: mov     cr8, rax
 * 00000001402D760C: mov     rbx, rcx
 * 00000001402D760F: lea     r13, [rdx-1]
 * 00000001402D7613: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402D761A: add     r13, rcx
 * 00000001402D761D: mov     eax, 0FFFh
 * 00000001402D7622: or      r13, rax
 * 00000001402D7625: lea     r12, [rbx-1]
 * 00000001402D7629: movzx   r14d, r15b
 * 00000001402D762D: mov     rax, [rsi+468h]
 * 00000001402D7634: xor     edx, edx
 * 00000001402D7636: mov     rcx, rbx
 * 00000001402D7639: call    KeGuardDispatchICall
 * 00000001402D763E: cmp     eax, 0C000022Dh
 * 00000001402D7643: jnz     short loc_1402D7668
 * 00000001402D7645: mov     eax, 1
 * 00000001402D764A: cmp     r15b, al
 * 00000001402D764D: ja      short loc_1402D766C
 * 00000001402D764F: movzx   r14d, r15b
 * 00000001402D7653: mov     cr8, r14
 * 00000001402D7657: mov     al, [rbx]
 * 00000001402D7659: mov     rax, cr8
 * 00000001402D765D: mov     eax, 2
 * 00000001402D7662: mov     cr8, rax
 * 00000001402D7666: jmp     short loc_1402D762D
 * 00000001402D7668: test    eax, eax
 * 00000001402D766A: js      short loc_1402D7683
 * 00000001402D766C: mov     r10d, 1000h
 * 00000001402D7672: add     rbx, r10
 * 00000001402D7675: add     r12, r10
 * 00000001402D7678: cmp     r12, r13
 * 00000001402D767B: jnz     short loc_1402D7629
 * 00000001402D767D: mov     cr8, r14
 * 00000001402D7681: jmp     short loc_1402D76DE
 * 00000001402D7683: mov     cr8, r14
 * 00000001402D7687: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D768B: mov     ebx, 1
 * 00000001402D7690: mov     rcx, [r13+8]
 * 00000001402D7694: xor     eax, eax
 * 00000001402D7696: cmp     [rsi+790h], eax
 * 00000001402D769C: jnz     short loc_1402D76DE
 * 00000001402D769E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D76A8: add     rax, rsi
 * 00000001402D76AB: mov     [rsi+798h], rax
 * 00000001402D76B2: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D76BC: add     rax, r13
 * 00000001402D76BF: mov     [rsi+7A0h], rax
 * 00000001402D76C6: movsxd  rax, dword ptr [r13+0]
 * 00000001402D76CA: mov     [rsi+7A8h], rax
 * 00000001402D76D1: mov     [rsi+7B0h], rcx
 * 00000001402D76D8: mov     [rsi+790h], ebx
 * 00000001402D76DE: mov     rax, [rbp+2250h+var_2240]
 * 00000001402D76E2: mov     eax, [rax+10h]
 * 00000001402D76E5: shl     eax, 4
 * 00000001402D76E8: jmp     loc_1402D393F
 * 00000001402D76ED: mov     eax, [rsi+6D0h]
 * 00000001402D76F3: test    dl, al
 * 00000001402D76F5: jz      loc_1402D3375
 * 00000001402D76FB: mov     r13, [rsi+5A0h]
 * 00000001402D7702: xor     eax, eax
 * 00000001402D7704: mov     r12, [rsi+5A8h]
 * 00000001402D770B: mov     r15d, eax
 * 00000001402D770E: mov     rax, [rsi+178h]
 * 00000001402D7715: mov     r14, [rsi+540h]
 * 00000001402D771C: mov     [rbp+2250h+var_2230], r13
 * 00000001402D7720: call    KeGuardDispatchICall
 * 00000001402D7725: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D772F: jnz     short loc_1402D7745
 * 00000001402D7731: mov     ecx, [rsi+7E8h]
 * 00000001402D7737: cmp     ecx, 7
 * 00000001402D773A: jnb     short loc_1402D7745
 * 00000001402D773C: mov     ebx, 1
 * 00000001402D7741: shl     bl, cl
 * 00000001402D7743: jmp     short loc_1402D775C
 * 00000001402D7745: mov     rax, [rsi+128h]
 * 00000001402D774C: xor     edx, edx
 * 00000001402D774E: mov     rcx, [rsi+898h]
 * 00000001402D7755: call    KeGuardDispatchICall
 * 00000001402D775A: mov     bl, 80h
 * 00000001402D775C: mov     rax, [rsi+138h]
 * 00000001402D7763: xor     edx, edx
 * 00000001402D7765: mov     rcx, r14
 * 00000001402D7768: mov     dword ptr [rbp+2250h+var_2218], ebx
 * 00000001402D776B: call    KeGuardDispatchICall
 * 00000001402D7770: mov     rax, [rsi+138h]
 * 00000001402D7777: xor     edx, edx
 * 00000001402D7779: mov     rcx, r13
 * 00000001402D777C: call    KeGuardDispatchICall
 * 00000001402D7781: mov     r8, [rsi+598h]
 * 00000001402D7788: mov     rcx, [r8]
 * 00000001402D778B: jmp     short loc_1402D77B0
 * 00000001402D778D: lea     rdx, [rcx-18h]
 * 00000001402D7791: cmp     rdx, r12
 * 00000001402D7794: jz      short loc_1402D77AD
 * 00000001402D7796: mov     rdx, [rdx+10h]
 * 00000001402D779A: test    dword ptr [rdx+304h], 4000000h
 * 00000001402D77A4: jz      short loc_1402D77AD
 * 00000001402D77A6: lock or [rdx+1BEh], bl
 * 00000001402D77AD: mov     rcx, [rcx]
 * 00000001402D77B0: cmp     rcx, r8
 * 00000001402D77B3: jnz     short loc_1402D778D
 * 00000001402D77B5: mov     r10, [rsi+518h]
 * 00000001402D77BC: mov     r8, [r10]
 * 00000001402D77BF: cmp     r8, r10
 * 00000001402D77C2: jz      loc_1402D787A
 * 00000001402D77C8: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D77CC: mov     r9b, bl
 * 00000001402D77CF: xor     r13d, r13d
 * 00000001402D77D2: movzx   r11d, bl
 * 00000001402D77D6: not     r9b
 * 00000001402D77D9: lea     ebx, [r13+1]
 * 00000001402D77DD: lea     rdx, [r8-2E8h]
 * 00000001402D77E4: movsx   eax, byte ptr [rdx+1BEh]
 * 00000001402D77EB: test    r11d, eax
 * 00000001402D77EE: jnz     short loc_1402D7855
 * 00000001402D77F0: mov     rax, [rdx+418h]
 * 00000001402D77F7: test    rax, rax
 * 00000001402D77FA: jz      short loc_1402D7855
 * 00000001402D77FC: cmp     rax, r12
 * 00000001402D77FF: jz      short loc_1402D7855
 * 00000001402D7801: test    dword ptr [rdx+304h], 4000000h
 * 00000001402D780B: jz      short loc_1402D7855
 * 00000001402D780D: cmp     [rsi+790h], r13d
 * 00000001402D7814: jnz     short loc_1402D7855
 * 00000001402D7816: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D7820: add     rax, rsi
 * 00000001402D7823: mov     [rsi+798h], rax
 * 00000001402D782A: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D7834: add     rax, rdi
 * 00000001402D7837: mov     [rsi+7A0h], rax
 * 00000001402D783E: movsxd  rax, dword ptr [rdi]
 * 00000001402D7841: mov     [rsi+7A8h], rax
 * 00000001402D7848: mov     [rsi+7B0h], rdx
 * 00000001402D784F: mov     [rsi+790h], ebx
 * 00000001402D7855: lock and [rdx+1BEh], r9b
 * 00000001402D785D: mov     r8, [r8]
 * 00000001402D7860: add     r15d, ebx
 * 00000001402D7863: cmp     r8, r10
 * 00000001402D7866: jnz     loc_1402D77DD
 * 00000001402D786C: mov     ebx, dword ptr [rbp+2250h+var_2218]
 * 00000001402D786F: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D7876: mov     r13, [rbp+2250h+var_2230]
 * 00000001402D787A: mov     rcx, r13
 * 00000001402D787D: jmp     loc_1402D45A4
 * 00000001402D7882: cmp     r15d, 24h ; '$'
 * 00000001402D7886: jg      loc_1402DA514
 * 00000001402D788C: jz      loc_1402DA03C
 * 00000001402D7892: mov     ecx, r15d
 * 00000001402D7895: sub     ecx, 1Ch
 * 00000001402D7898: jz      loc_1402D968C
 * 00000001402D789E: sub     ecx, 1
 * 00000001402D78A1: jz      loc_1402D9279
 * 00000001402D78A7: sub     ecx, 1
 * 00000001402D78AA: jz      loc_1402D8B4D
 * 00000001402D78B0: sub     ecx, 1
 * 00000001402D78B3: jz      loc_1402D8005
 * 00000001402D78B9: sub     ecx, 1
 * 00000001402D78BC: jz      loc_1402D7FF5
 * 00000001402D78C2: sub     ecx, 1
 * 00000001402D78C5: jz      loc_1402D7FE5
 * 00000001402D78CB: mov     eax, 2
 * 00000001402D78D0: cmp     ecx, eax
 * 00000001402D78D2: jnz     loc_1402DC529
 * 00000001402D78D8: mov     ecx, [r13+28h]
 * 00000001402D78DC: and     ecx, edx
 * 00000001402D78DE: jz      short loc_1402D78FD
 * 00000001402D78E0: xor     eax, eax
 * 00000001402D78E2: cmp     [rsi+818h], rax
 * 00000001402D78E9: jz      loc_1402D40F3
 * 00000001402D78EF: mov     eax, [rsi+82Ch]
 * 00000001402D78F5: test    al, 4
 * 00000001402D78F7: jnz     loc_1402D41EE
 * 00000001402D78FD: xor     eax, eax
 * 00000001402D78FF: test    ecx, ecx
 * 00000001402D7901: jz      loc_1402D7DDA
 * 00000001402D7907: mov     edx, [rsi+82Ch]
 * 00000001402D790D: mov     ecx, edx
 * 00000001402D790F: cmp     [rsi+6C4h], eax
 * 00000001402D7915: jnz     short loc_1402D7929
 * 00000001402D7917: shl     ecx, 3
 * 00000001402D791A: xor     ecx, edx
 * 00000001402D791C: and     ecx, 20h
 * 00000001402D791F: xor     ecx, edx
 * 00000001402D7921: mov     [rsi+82Ch], ecx
 * 00000001402D7927: jmp     short loc_1402D793A
 * 00000001402D7929: mov     eax, edx
 * 00000001402D792B: shr     eax, 3
 * 00000001402D792E: xor     eax, edx
 * 00000001402D7930: test    al, 4
 * 00000001402D7932: jnz     loc_1402D41EE
 * 00000001402D7938: xor     eax, eax
 * 00000001402D793A: cmp     [rsi+818h], rax
 * 00000001402D7941: jnz     loc_1402D7A88
 * 00000001402D7947: mov     [rsi+6C4h], eax
 * 00000001402D794D: mov     r12d, 1
 * 00000001402D7953: xor     r15d, r15d
 * 00000001402D7956: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402D7960: mov     r9, 0B3B74BDEE4453415h
 * 00000001402D796A: mov     eax, [r13+28h]
 * 00000001402D796E: mov     ecx, 2
 * 00000001402D7973: test    cl, al
 * 00000001402D7975: jz      loc_1402D3378
 * 00000001402D797B: mov     r8, [r13+8]
 * 00000001402D797F: test    al, 4
 * 00000001402D7981: jz      short loc_1402D79F9
 * 00000001402D7983: mov     rax, [r8+70h]
 * 00000001402D7987: mov     rdx, [r13+18h]
 * 00000001402D798B: mov     rcx, [rax]
 * 00000001402D798E: cmp     rcx, rdx
 * 00000001402D7991: jz      short loc_1402D79F9
 * 00000001402D7993: mov     rax, [rsi+588h]
 * 00000001402D799A: mov     [rax], rcx
 * 00000001402D799D: mov     dword ptr [rax+10h], 100h
 * 00000001402D79A4: mov     eax, [rsi+790h]
 * 00000001402D79AA: test    eax, eax
 * 00000001402D79AC: jnz     short loc_1402D79C2
 * 00000001402D79AE: mov     rax, [rsi+588h]
 * 00000001402D79B5: xor     rcx, rdx
 * 00000001402D79B8: mov     [rax+18h], rcx
 * 00000001402D79BC: mov     eax, [rsi+790h]
 * 00000001402D79C2: mov     rcx, [r8+70h]
 * 00000001402D79C6: test    eax, eax
 * 00000001402D79C8: jnz     short loc_1402D79F9
 * 00000001402D79CA: lea     rax, [rsi+r10]
 * 00000001402D79CE: mov     [rsi+798h], rax
 * 00000001402D79D5: lea     rax, [r9+r13]
 * 00000001402D79D9: mov     [rsi+7A0h], rax
 * 00000001402D79E0: movsxd  rax, dword ptr [r13+0]
 * 00000001402D79E4: mov     [rsi+7A8h], rax
 * 00000001402D79EB: mov     [rsi+7B0h], rcx
 * 00000001402D79F2: mov     [rsi+790h], r12d
 * 00000001402D79F9: mov     eax, [r13+28h]
 * 00000001402D79FD: test    al, 8
 * 00000001402D79FF: jz      loc_1402D3378
 * 00000001402D7A05: mov     rax, [r8+78h]
 * 00000001402D7A09: mov     rdx, [r13+20h]
 * 00000001402D7A0D: mov     rcx, [rax]
 * 00000001402D7A10: cmp     rcx, rdx
 * 00000001402D7A13: jz      loc_1402D3378
 * 00000001402D7A19: mov     rax, [rsi+588h]
 * 00000001402D7A20: mov     [rax], rcx
 * 00000001402D7A23: mov     dword ptr [rax+10h], 100h
 * 00000001402D7A2A: mov     eax, [rsi+790h]
 * 00000001402D7A30: test    eax, eax
 * 00000001402D7A32: jnz     short loc_1402D7A48
 * 00000001402D7A34: mov     rax, [rsi+588h]
 * 00000001402D7A3B: xor     rcx, rdx
 * 00000001402D7A3E: mov     [rax+18h], rcx
 * 00000001402D7A42: mov     eax, [rsi+790h]
 * 00000001402D7A48: mov     rcx, [r8+78h]
 * 00000001402D7A4C: test    eax, eax
 * 00000001402D7A4E: jnz     loc_1402D3378
 * 00000001402D7A54: lea     rax, [rsi+r10]
 * 00000001402D7A58: mov     [rsi+798h], rax
 * 00000001402D7A5F: lea     rax, [r9+r13]
 * 00000001402D7A63: mov     [rsi+7A0h], rax
 * 00000001402D7A6A: movsxd  rax, dword ptr [r13+0]
 * 00000001402D7A6E: mov     [rsi+7A8h], rax
 * 00000001402D7A75: mov     [rsi+7B0h], rcx
 * 00000001402D7A7C: mov     [rsi+790h], r12d
 * 00000001402D7A83: jmp     loc_1402D3378
 * 00000001402D7A88: mov     edx, ecx
 * 00000001402D7A8A: cmp     [rsi+6C4h], eax
 * 00000001402D7A90: jnz     loc_1402D7B65
 * 00000001402D7A96: shl     edx, 3
 * 00000001402D7A99: xor     edx, ecx
 * 00000001402D7A9B: and     edx, 20h
 * 00000001402D7A9E: xor     edx, ecx
 * 00000001402D7AA0: mov     [rsi+82Ch], edx
 * 00000001402D7AA6: test    dl, 4
 * 00000001402D7AA9: jz      loc_1402D7B7B
 * 00000001402D7AAF: mov     rcx, [r13+8]
 * 00000001402D7AB3: mov     eax, 0FFFh
 * 00000001402D7AB8: mov     r14d, [r13+10h]
 * 00000001402D7ABC: mov     rbx, rcx
 * 00000001402D7ABF: add     r14, rax
 * 00000001402D7AC2: and     rcx, rax
 * 00000001402D7AC5: add     r14, rcx
 * 00000001402D7AC8: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402D7ACF: shr     r14, 0Ch
 * 00000001402D7AD3: mov     r12d, 1
 * 00000001402D7AD9: test    r14, r14
 * 00000001402D7ADC: jz      loc_1402D7953
 * 00000001402D7AE2: xor     edi, edi
 * 00000001402D7AE4: mov     rax, [rsi+2B0h]
 * 00000001402D7AEB: mov     rcx, rbx
 * 00000001402D7AEE: sub     r14, r12
 * 00000001402D7AF1: call    KeGuardDispatchICall
 * 00000001402D7AF6: test    al, al
 * 00000001402D7AF8: jz      short loc_1402D7B43
 * 00000001402D7AFA: cmp     [rsi+790h], edi
 * 00000001402D7B00: jnz     short loc_1402D7B43
 * 00000001402D7B02: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D7B0C: add     rax, rsi
 * 00000001402D7B0F: mov     [rsi+798h], rax
 * 00000001402D7B16: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D7B20: add     rax, r13
 * 00000001402D7B23: mov     [rsi+7A0h], rax
 * 00000001402D7B2A: movsxd  rax, dword ptr [r13+0]
 * 00000001402D7B2E: mov     [rsi+7A8h], rax
 * 00000001402D7B35: mov     [rsi+7B0h], rbx
 * 00000001402D7B3C: mov     [rsi+790h], r12d
 * 00000001402D7B43: add     dword ptr [rsi+6C8h], 100h
 * 00000001402D7B4D: add     rbx, 1000h
 * 00000001402D7B54: test    r14, r14
 * 00000001402D7B57: jnz     short loc_1402D7AE4
 * 00000001402D7B59: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D7B60: jmp     loc_1402D7953
 * 00000001402D7B65: mov     eax, ecx
 * 00000001402D7B67: shr     eax, 3
 * 00000001402D7B6A: xor     eax, ecx
 * 00000001402D7B6C: test    al, 4
 * 00000001402D7B6E: jz      loc_1402D7AA6
 * 00000001402D7B74: xor     eax, eax
 * 00000001402D7B76: jmp     loc_1402D7947
 * 00000001402D7B7B: mov     r14, [r13+8]
 * 00000001402D7B7F: mov     r8d, [r13+10h]
 * 00000001402D7B83: mov     r9, r14
 * 00000001402D7B86: add     [rsi+6C8h], r8d
 * 00000001402D7B8D: mov     rax, r14
 * 00000001402D7B90: mov     r11d, [rsi+6B4h]
 * 00000001402D7B97: mov     r15, [rsi+6B8h]
 * 00000001402D7B9E: lea     rcx, [r14+r8]
 * 00000001402D7BA2: cmp     r14, rcx
 * 00000001402D7BA5: jnb     short loc_1402D7BB7
 * 00000001402D7BA7: mov     edx, 40h ; '@'
 * 00000001402D7BAC: prefetchnta byte ptr [rax]
 * 00000001402D7BAF: add     rax, rdx
 * 00000001402D7BB2: cmp     rax, rcx
 * 00000001402D7BB5: jb      short loc_1402D7BAC
 * 00000001402D7BB7: mov     r10d, r8d
 * 00000001402D7BBA: mov     rbx, r15
 * 00000001402D7BBD: shr     r10d, 7
 * 00000001402D7BC1: mov     r12d, 1
 * 00000001402D7BC7: test    r10d, r10d
 * 00000001402D7BCA: jz      short loc_1402D7C31
 * 00000001402D7BCC: mov     rsi, 7010008004002001h
 * 00000001402D7BD6: mov     edx, 8
 * 00000001402D7BDB: mov     rax, [r9]
 * 00000001402D7BDE: mov     ecx, r11d
 * 00000001402D7BE1: xor     rax, rbx
 * 00000001402D7BE4: mov     rbx, [r9+8]
 * 00000001402D7BE8: rol     rax, cl
 * 00000001402D7BEB: add     r9, 10h
 * 00000001402D7BEF: xor     rbx, rax
 * 00000001402D7BF2: rol     rbx, cl
 * 00000001402D7BF5: sub     rdx, r12
 * 00000001402D7BF8: jnz     short loc_1402D7BDB
 * 00000001402D7BFA: mov     rcx, r9
 * 00000001402D7BFD: sub     rcx, r14
 * 00000001402D7C00: xor     rcx, r15
 * 00000001402D7C03: mov     rax, rcx
 * 00000001402D7C06: rol     rax, 11h
 * 00000001402D7C0A: xor     rcx, rax
 * 00000001402D7C0D: mov     rax, rsi
 * 00000001402D7C10: mul     rcx
 * 00000001402D7C13: xor     eax, edx
 * 00000001402D7C15: mov     [rbp+2250h+var_1C88], rdx
 * 00000001402D7C1C: xor     r11d, eax
 * 00000001402D7C1F: and     r11d, 3Fh
 * 00000001402D7C23: cmovz   r11d, r12d
 * 00000001402D7C27: add     r10d, 0FFFFFFFFh
 * 00000001402D7C2B: jnz     short loc_1402D7BD6
 * 00000001402D7C2D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D7C31: and     r8d, 7Fh
 * 00000001402D7C35: cmp     r8d, 8
 * 00000001402D7C39: jb      short loc_1402D7C58
 * 00000001402D7C3B: mov     edx, r8d
 * 00000001402D7C3E: shr     rdx, 3
 * 00000001402D7C42: xor     rbx, [r9]
 * 00000001402D7C45: mov     ecx, r11d
 * 00000001402D7C48: rol     rbx, cl
 * 00000001402D7C4B: add     r9, 8
 * 00000001402D7C4F: add     r8d, 0FFFFFFF8h
 * 00000001402D7C53: sub     rdx, r12
 * 00000001402D7C56: jnz     short loc_1402D7C42
 * 00000001402D7C58: test    r8d, r8d
 * 00000001402D7C5B: jz      short loc_1402D7C73
 * 00000001402D7C5D: movzx   eax, byte ptr [r9]
 * 00000001402D7C61: mov     ecx, r11d
 * 00000001402D7C64: xor     rbx, rax
 * 00000001402D7C67: add     r9, r12
 * 00000001402D7C6A: rol     rbx, cl
 * 00000001402D7C6D: add     r8d, 0FFFFFFFFh
 * 00000001402D7C71: jnz     short loc_1402D7C5D
 * 00000001402D7C73: mov     rax, rbx
 * 00000001402D7C76: shr     rax, 1Fh
 * 00000001402D7C7A: xor     r15d, r15d
 * 00000001402D7C7D: jmp     short loc_1402D7C85
 * 00000001402D7C7F: xor     ebx, eax
 * 00000001402D7C81: shr     rax, 1Fh
 * 00000001402D7C85: test    rax, rax
 * 00000001402D7C88: jnz     short loc_1402D7C7F
 * 00000001402D7C8A: mov     edx, [r13+14h]
 * 00000001402D7C8E: btr     ebx, 1Fh
 * 00000001402D7C92: cmp     ebx, edx
 * 00000001402D7C94: jz      loc_1402D7956
 * 00000001402D7C9A: mov     ecx, [r13+10h]
 * 00000001402D7C9E: mov     r8, [r13+8]
 * 00000001402D7CA2: test    rcx, rcx
 * 00000001402D7CA5: jz      loc_1402D7D5B
 * 00000001402D7CAB: mov     eax, [rsi+82Ch]
 * 00000001402D7CB1: mov     r9d, 40h ; '@'
 * 00000001402D7CB7: test    r9b, al
 * 00000001402D7CBA: jz      loc_1402D7D5B
 * 00000001402D7CC0: mov     r12, cr8
 * 00000001402D7CC4: lea     eax, [r9-3Eh]
 * 00000001402D7CC8: mov     cr8, rax
 * 00000001402D7CCC: lea     rax, [rcx-1]
 * 00000001402D7CD0: mov     r14, r8
 * 00000001402D7CD3: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D7CDA: add     rax, r8
 * 00000001402D7CDD: mov     ecx, 0FFFh
 * 00000001402D7CE2: or      rax, rcx
 * 00000001402D7CE5: mov     [rbp+2250h+var_2230], rax
 * 00000001402D7CE9: lea     r13, [r14-1]
 * 00000001402D7CED: movzx   r15d, r12b
 * 00000001402D7CF1: mov     rax, [rsi+468h]
 * 00000001402D7CF8: xor     edx, edx
 * 00000001402D7CFA: mov     rcx, r14
 * 00000001402D7CFD: call    KeGuardDispatchICall
 * 00000001402D7D02: cmp     eax, 0C000022Dh
 * 00000001402D7D07: jnz     short loc_1402D7D2D
 * 00000001402D7D09: mov     eax, 1
 * 00000001402D7D0E: cmp     r12b, al
 * 00000001402D7D11: ja      short loc_1402D7D31
 * 00000001402D7D13: movzx   r15d, r12b
 * 00000001402D7D17: mov     cr8, r15
 * 00000001402D7D1B: mov     al, [r14]
 * 00000001402D7D1E: mov     rax, cr8
 * 00000001402D7D22: mov     eax, 2
 * 00000001402D7D27: mov     cr8, rax
 * 00000001402D7D2B: jmp     short loc_1402D7CF1
 * 00000001402D7D2D: test    eax, eax
 * 00000001402D7D2F: js      short loc_1402D7D4F
 * 00000001402D7D31: mov     edx, 1000h
 * 00000001402D7D36: add     r14, rdx
 * 00000001402D7D39: add     r13, rdx
 * 00000001402D7D3C: cmp     r13, [rbp+2250h+var_2230]
 * 00000001402D7D40: jnz     short loc_1402D7CED
 * 00000001402D7D42: mov     cr8, r15
 * 00000001402D7D46: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D7D4A: jmp     loc_1402D794D
 * 00000001402D7D4F: mov     cr8, r15
 * 00000001402D7D53: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D7D57: mov     edx, [r13+14h]
 * 00000001402D7D5B: mov     eax, [rsi+790h]
 * 00000001402D7D61: xor     r15d, r15d
 * 00000001402D7D64: test    eax, eax
 * 00000001402D7D66: jnz     short loc_1402D7D80
 * 00000001402D7D68: mov     ecx, edx
 * 00000001402D7D6A: mov     eax, ebx
 * 00000001402D7D6C: xor     rcx, rax
 * 00000001402D7D6F: mov     rax, [rsi+588h]
 * 00000001402D7D76: mov     [rax+18h], rcx
 * 00000001402D7D7A: mov     eax, [rsi+790h]
 * 00000001402D7D80: mov     rcx, [r13+8]
 * 00000001402D7D84: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402D7D8E: mov     r9, 0B3B74BDEE4453415h
 * 00000001402D7D98: mov     r12d, 1
 * 00000001402D7D9E: test    eax, eax
 * 00000001402D7DA0: jnz     loc_1402D796A
 * 00000001402D7DA6: lea     rax, [rsi+r10]
 * 00000001402D7DAA: mov     [rsi+798h], rax
 * 00000001402D7DB1: lea     rax, [r9+r13]
 * 00000001402D7DB5: mov     [rsi+7A0h], rax
 * 00000001402D7DBC: movsxd  rax, dword ptr [r13+0]
 * 00000001402D7DC0: mov     [rsi+7A8h], rax
 * 00000001402D7DC7: mov     [rsi+7B0h], rcx
 * 00000001402D7DCE: mov     [rsi+790h], r12d
 * 00000001402D7DD5: jmp     loc_1402D796A
 * 00000001402D7DDA: mov     r14, [r13+8]
 * 00000001402D7DDE: mov     r8d, [r13+10h]
 * 00000001402D7DE2: mov     r9, r14
 * 00000001402D7DE5: add     [rsi+6C8h], r8d
 * 00000001402D7DEC: mov     rax, r14
 * 00000001402D7DEF: mov     r11d, [rsi+6B4h]
 * 00000001402D7DF6: mov     r15, [rsi+6B8h]
 * 00000001402D7DFD: lea     rcx, [r14+r8]
 * 00000001402D7E01: cmp     r14, rcx
 * 00000001402D7E04: jnb     short loc_1402D7E16
 * 00000001402D7E06: mov     edx, 40h ; '@'
 * 00000001402D7E0B: prefetchnta byte ptr [rax]
 * 00000001402D7E0E: add     rax, rdx
 * 00000001402D7E11: cmp     rax, rcx
 * 00000001402D7E14: jb      short loc_1402D7E0B
 * 00000001402D7E16: mov     r10d, r8d
 * 00000001402D7E19: mov     rbx, r15
 * 00000001402D7E1C: shr     r10d, 7
 * 00000001402D7E20: mov     r12d, 1
 * 00000001402D7E26: test    r10d, r10d
 * 00000001402D7E29: jz      short loc_1402D7E90
 * 00000001402D7E2B: mov     rsi, 7010008004002001h
 * 00000001402D7E35: mov     edx, 8
 * 00000001402D7E3A: mov     rax, [r9]
 * 00000001402D7E3D: mov     ecx, r11d
 * 00000001402D7E40: xor     rax, rbx
 * 00000001402D7E43: mov     rbx, [r9+8]
 * 00000001402D7E47: rol     rax, cl
 * 00000001402D7E4A: add     r9, 10h
 * 00000001402D7E4E: xor     rbx, rax
 * 00000001402D7E51: rol     rbx, cl
 * 00000001402D7E54: sub     rdx, r12
 * 00000001402D7E57: jnz     short loc_1402D7E3A
 * 00000001402D7E59: mov     rcx, r9
 * 00000001402D7E5C: sub     rcx, r14
 * 00000001402D7E5F: xor     rcx, r15
 * 00000001402D7E62: mov     rax, rcx
 * 00000001402D7E65: rol     rax, 11h
 * 00000001402D7E69: xor     rcx, rax
 * 00000001402D7E6C: mov     rax, rsi
 * 00000001402D7E6F: mul     rcx
 * 00000001402D7E72: xor     eax, edx
 * 00000001402D7E74: mov     [rbp+2250h+var_1C80], rdx
 * 00000001402D7E7B: xor     r11d, eax
 * 00000001402D7E7E: and     r11d, 3Fh
 * 00000001402D7E82: cmovz   r11d, r12d
 * 00000001402D7E86: add     r10d, 0FFFFFFFFh
 * 00000001402D7E8A: jnz     short loc_1402D7E35
 * 00000001402D7E8C: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D7E90: and     r8d, 7Fh
 * 00000001402D7E94: cmp     r8d, 8
 * 00000001402D7E98: jb      short loc_1402D7EB7
 * 00000001402D7E9A: mov     edx, r8d
 * 00000001402D7E9D: shr     rdx, 3
 * 00000001402D7EA1: xor     rbx, [r9]
 * 00000001402D7EA4: mov     ecx, r11d
 * 00000001402D7EA7: rol     rbx, cl
 * 00000001402D7EAA: add     r9, 8
 * 00000001402D7EAE: add     r8d, 0FFFFFFF8h
 * 00000001402D7EB2: sub     rdx, r12
 * 00000001402D7EB5: jnz     short loc_1402D7EA1
 * 00000001402D7EB7: test    r8d, r8d
 * 00000001402D7EBA: jz      short loc_1402D7ED2
 * 00000001402D7EBC: movzx   eax, byte ptr [r9]
 * 00000001402D7EC0: mov     ecx, r11d
 * 00000001402D7EC3: xor     rbx, rax
 * 00000001402D7EC6: add     r9, r12
 * 00000001402D7EC9: rol     rbx, cl
 * 00000001402D7ECC: add     r8d, 0FFFFFFFFh
 * 00000001402D7ED0: jnz     short loc_1402D7EBC
 * 00000001402D7ED2: mov     rax, rbx
 * 00000001402D7ED5: jmp     short loc_1402D7ED9
 * 00000001402D7ED7: xor     ebx, eax
 * 00000001402D7ED9: shr     rax, 1Fh
 * 00000001402D7EDD: test    rax, rax
 * 00000001402D7EE0: jnz     short loc_1402D7ED7
 * 00000001402D7EE2: btr     ebx, 1Fh
 * 00000001402D7EE6: mov     r12d, eax
 * 00000001402D7EE9: cmp     ebx, [r13+14h]
 * 00000001402D7EED: jz      loc_1402D794D
 * 00000001402D7EF3: cmp     [r13+0], eax
 * 00000001402D7EF7: jnz     short loc_1402D7F04
 * 00000001402D7EF9: cmp     [r13+18h], eax
 * 00000001402D7EFD: lea     ecx, [rax+1]
 * 00000001402D7F00: cmovnz  r12d, ecx
 * 00000001402D7F04: mov     ecx, [r13+10h]
 * 00000001402D7F08: mov     rdx, [r13+8]
 * 00000001402D7F0C: test    rcx, rcx
 * 00000001402D7F0F: jz      loc_1402D7FCB
 * 00000001402D7F15: mov     eax, [rsi+82Ch]
 * 00000001402D7F1B: mov     r8d, 40h ; '@'
 * 00000001402D7F21: test    r8b, al
 * 00000001402D7F24: jz      loc_1402D7FCB
 * 00000001402D7F2A: mov     r13, cr8
 * 00000001402D7F2E: lea     eax, [r8-3Eh]
 * 00000001402D7F32: mov     cr8, rax
 * 00000001402D7F36: lea     rax, [rcx-1]
 * 00000001402D7F3A: mov     r14, rdx
 * 00000001402D7F3D: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D7F44: add     rax, rdx
 * 00000001402D7F47: mov     ecx, 0FFFh
 * 00000001402D7F4C: or      rax, rcx
 * 00000001402D7F4F: mov     [rbp+2250h+var_2230], rax
 * 00000001402D7F53: lea     rax, [r14-1]
 * 00000001402D7F57: mov     [rbp+2250h+var_2250], rax
 * 00000001402D7F5B: movzx   r15d, r13b
 * 00000001402D7F5F: mov     rax, [rsi+468h]
 * 00000001402D7F66: xor     edx, edx
 * 00000001402D7F68: mov     rcx, r14
 * 00000001402D7F6B: call    KeGuardDispatchICall
 * 00000001402D7F70: cmp     eax, 0C000022Dh
 * 00000001402D7F75: jnz     short loc_1402D7FA0
 * 00000001402D7F77: test    r12d, r12d
 * 00000001402D7F7A: jnz     short loc_1402D7FC3
 * 00000001402D7F7C: lea     eax, [r12+1]
 * 00000001402D7F81: cmp     r13b, al
 * 00000001402D7F84: ja      short loc_1402D7FA4
 * 00000001402D7F86: movzx   r15d, r13b
 * 00000001402D7F8A: mov     cr8, r15
 * 00000001402D7F8E: mov     al, [r14]
 * 00000001402D7F91: mov     rax, cr8
 * 00000001402D7F95: lea     eax, [r12+2]
 * 00000001402D7F9A: mov     cr8, rax
 * 00000001402D7F9E: jmp     short loc_1402D7F5F
 * 00000001402D7FA0: test    eax, eax
 * 00000001402D7FA2: js      short loc_1402D7FC3
 * 00000001402D7FA4: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D7FA8: mov     ecx, 1000h
 * 00000001402D7FAD: add     rax, rcx
 * 00000001402D7FB0: add     r14, rcx
 * 00000001402D7FB3: mov     [rbp+2250h+var_2250], rax
 * 00000001402D7FB7: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402D7FBB: jz      loc_1402D7D42
 * 00000001402D7FC1: jmp     short loc_1402D7F5B
 * 00000001402D7FC3: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D7FC7: mov     cr8, r15
 * 00000001402D7FCB: mov     eax, [rsi+790h]
 * 00000001402D7FD1: xor     r15d, r15d
 * 00000001402D7FD4: mov     ecx, [r13+14h]
 * 00000001402D7FD8: test    eax, eax
 * 00000001402D7FDA: jnz     loc_1402D7D80
 * 00000001402D7FE0: jmp     loc_1402D7D6A
 * 00000001402D7FE5: mov     rdx, r13
 * 00000001402D7FE8: mov     rcx, rsi
 * 00000001402D7FEB: call    sub_14019FF9C
 * 00000001402D7FF0: jmp     loc_1402D3375
 * 00000001402D7FF5: mov     rdx, r13
 * 00000001402D7FF8: mov     rcx, rsi
 * 00000001402D7FFB: call    sub_1401A0EC4
 * 00000001402D8000: jmp     loc_1402D3375
 * 00000001402D8005: mov     eax, [rsi+6D0h]
 * 00000001402D800B: test    dl, al
 * 00000001402D800D: jz      loc_1402D3375
 * 00000001402D8013: xor     eax, eax
 * 00000001402D8015: cmp     [rsi+818h], rax
 * 00000001402D801C: jz      short loc_1402D805A
 * 00000001402D801E: mov     eax, [rsi+82Ch]
 * 00000001402D8024: test    al, 4
 * 00000001402D8026: jnz     short loc_1402D8058
 * 00000001402D8028: mov     rax, [rsi+3D0h]
 * 00000001402D802F: lea     rdx, [rbp+2250h+var_1DE8]
 * 00000001402D8036: xor     r9d, r9d
 * 00000001402D8039: xor     r8d, r8d
 * 00000001402D803C: lea     ecx, [r9+1Ah]
 * 00000001402D8040: call    KeGuardDispatchICall
 * 00000001402D8045: mov     rbx, [rbp+2250h+var_1DE8]
 * 00000001402D804C: xor     ecx, ecx
 * 00000001402D804E: test    eax, eax
 * 00000001402D8050: mov     eax, ecx
 * 00000001402D8052: cmovs   rbx, rcx
 * 00000001402D8056: jmp     short loc_1402D805D
 * 00000001402D8058: xor     eax, eax
 * 00000001402D805A: mov     rbx, rax
 * 00000001402D805D: mov     r13d, eax
 * 00000001402D8060: mov     [rbp+2250h+var_2200], eax
 * 00000001402D8063: mov     rax, [rsi+3B0h]
 * 00000001402D806A: xor     ecx, ecx
 * 00000001402D806C: mov     [rbp+2250h+var_2250], rbx
 * 00000001402D8070: call    KeGuardDispatchICall
 * 00000001402D8075: mov     r15, rax
 * 00000001402D8078: mov     r14d, 1
 * 00000001402D807E: test    rax, rax
 * 00000001402D8081: jz      loc_1402D87A4
 * 00000001402D8087: mov     rcx, r15
 * 00000001402D808A: cmp     rbx, r15
 * 00000001402D808D: jnz     loc_1402D83E3
 * 00000001402D8093: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D8097: mov     rax, [rsi+3A0h]
 * 00000001402D809E: mov     r14, rdi
 * 00000001402D80A1: call    KeGuardDispatchICall
 * 00000001402D80A6: test    eax, eax
 * 00000001402D80A8: js      loc_1402D8775
 * 00000001402D80AE: mov     rax, [rsi+3E0h]
 * 00000001402D80B5: mov     rcx, r15
 * 00000001402D80B8: call    KeGuardDispatchICall
 * 00000001402D80BD: mov     bl, al
 * 00000001402D80BF: mov     [rbp+2250h+var_20FF], al
 * 00000001402D80C5: mov     rax, [rsi+3E8h]
 * 00000001402D80CC: lea     rdx, [rbp+2250h+var_219B]
 * 00000001402D80D3: mov     rcx, r15
 * 00000001402D80D6: call    KeGuardDispatchICall
 * 00000001402D80DB: mov     r12b, al
 * 00000001402D80DE: mov     byte ptr [rbp+2250h+var_21A6], al
 * 00000001402D80E4: mov     rax, [rsi+3F0h]
 * 00000001402D80EB: mov     rcx, r15
 * 00000001402D80EE: call    KeGuardDispatchICall
 * 00000001402D80F3: mov     [rbp+2250h+var_2230], rax
 * 00000001402D80F7: cmp     bl, 61h ; 'a'
 * 00000001402D80FA: jz      short loc_1402D816C
 * 00000001402D80FC: mov     eax, [rsi+790h]
 * 00000001402D8102: xor     edx, edx
 * 00000001402D8104: test    eax, eax
 * 00000001402D8106: jnz     short loc_1402D816C
 * 00000001402D8108: mov     rax, [rsi+588h]
 * 00000001402D810F: movzx   ecx, bl
 * 00000001402D8112: xor     rcx, 61h
 * 00000001402D8116: mov     [rax+18h], rcx
 * 00000001402D811A: mov     eax, [rsi+790h]
 * 00000001402D8120: test    eax, eax
 * 00000001402D8122: jnz     short loc_1402D816C
 * 00000001402D8124: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D812E: lea     r10d, [rdx+1]
 * 00000001402D8132: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D813C: lea     rax, [rsi+r8]
 * 00000001402D8140: mov     [rsi+798h], rax
 * 00000001402D8147: lea     rax, [rdi+r11]
 * 00000001402D814B: mov     [rsi+7A0h], rax
 * 00000001402D8152: movsxd  rax, dword ptr [rdi]
 * 00000001402D8155: mov     [rsi+7A8h], rax
 * 00000001402D815C: mov     [rsi+7B0h], r15
 * 00000001402D8163: mov     [rsi+790h], r10d
 * 00000001402D816A: jmp     short loc_1402D8186
 * 00000001402D816C: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D8176: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D8180: mov     r10d, 1
 * 00000001402D8186: xor     eax, eax
 * 00000001402D8188: movzx   ecx, bl
 * 00000001402D818B: and     ecx, 7
 * 00000001402D818E: mov     dl, al
 * 00000001402D8190: mov     r9b, al
 * 00000001402D8193: sub     ecx, 1
 * 00000001402D8196: jz      short loc_1402D81E8
 * 00000001402D8198: cmp     ecx, 1
 * 00000001402D819B: jz      short loc_1402D81DA
 * 00000001402D819D: test    bl, 7
 * 00000001402D81A0: jz      short loc_1402D81EA
 * 00000001402D81A2: cmp     [rsi+790h], eax
 * 00000001402D81A8: jnz     short loc_1402D81EA
 * 00000001402D81AA: lea     rax, [rsi+r8]
 * 00000001402D81AE: mov     [rsi+798h], rax
 * 00000001402D81B5: lea     rax, [rdi+r11]
 * 00000001402D81B9: mov     [rsi+7A0h], rax
 * 00000001402D81C0: movsxd  rax, dword ptr [rdi]
 * 00000001402D81C3: mov     [rsi+7A8h], rax
 * 00000001402D81CA: mov     [rsi+7B0h], r15
 * 00000001402D81D1: mov     [rsi+790h], r10d
 * 00000001402D81D8: jmp     short loc_1402D81E4
 * 00000001402D81DA: mov     eax, 10h
 * 00000001402D81DF: mov     dl, al
 * 00000001402D81E1: mov     r9b, al
 * 00000001402D81E4: xor     eax, eax
 * 00000001402D81E6: jmp     short loc_1402D81EA
 * 00000001402D81E8: mov     dl, 30h ; '0'
 * 00000001402D81EA: mov     r8, [rsi+5C0h]
 * 00000001402D81F1: movzx   ecx, bl
 * 00000001402D81F4: shr     rcx, 4
 * 00000001402D81F8: or      dl, [r8+rcx*2]
 * 00000001402D81FC: cmp     dl, r12b
 * 00000001402D81FF: mov     rdx, 0A3A03F5891C8B4E8h
 * 00000001402D8209: jz      short loc_1402D8241
 * 00000001402D820B: cmp     [rsi+790h], eax
 * 00000001402D8211: jnz     short loc_1402D8241
 * 00000001402D8213: lea     rax, [rsi+rdx]
 * 00000001402D8217: mov     [rsi+798h], rax
 * 00000001402D821E: lea     rax, [rdi+r11]
 * 00000001402D8222: mov     [rsi+7A0h], rax
 * 00000001402D8229: movsxd  rax, dword ptr [rdi]
 * 00000001402D822C: mov     [rsi+7A8h], rax
 * 00000001402D8233: mov     [rsi+7B0h], r15
 * 00000001402D823A: mov     [rsi+790h], r10d
 * 00000001402D8241: mov     al, [r8+rcx*2+1]
 * 00000001402D8246: or      al, r9b
 * 00000001402D8249: cmp     al, [rbp+2250h+var_219B]
 * 00000001402D824F: jz      short loc_1402D8289
 * 00000001402D8251: xor     eax, eax
 * 00000001402D8253: cmp     [rsi+790h], eax
 * 00000001402D8259: jnz     short loc_1402D828B
 * 00000001402D825B: lea     rax, [rsi+rdx]
 * 00000001402D825F: mov     [rsi+798h], rax
 * 00000001402D8266: lea     rax, [rdi+r11]
 * 00000001402D826A: mov     [rsi+7A0h], rax
 * 00000001402D8271: movsxd  rax, dword ptr [rdi]
 * 00000001402D8274: mov     [rsi+7A8h], rax
 * 00000001402D827B: mov     [rsi+7B0h], r15
 * 00000001402D8282: mov     [rsi+790h], r10d
 * 00000001402D8289: xor     eax, eax
 * 00000001402D828B: cmp     r15, [rsi+4D8h]
 * 00000001402D8292: jz      short loc_1402D82A6
 * 00000001402D8294: mov     rax, [rsi+3D8h]
 * 00000001402D829B: mov     edx, r10d
 * 00000001402D829E: mov     rcx, r15
 * 00000001402D82A1: call    KeGuardDispatchICall
 * 00000001402D82A6: mov     [rbp+2250h+var_2248], rax
 * 00000001402D82AA: mov     r12, rax
 * 00000001402D82AD: test    rax, rax
 * 00000001402D82B0: jz      loc_1402D8757
 * 00000001402D82B6: mov     rcx, [rax]
 * 00000001402D82B9: mov     rbx, rax
 * 00000001402D82BC: test    rcx, rcx
 * 00000001402D82BF: jz      loc_1402D8748
 * 00000001402D82C5: mov     dil, byte ptr [rbp+2250h+var_21A6]
 * 00000001402D82CC: mov     r12, [rbp+2250h+var_2230]
 * 00000001402D82D0: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001402D82D4: mov     [rbx], rcx
 * 00000001402D82D7: mov     rax, [rsi+1E0h]
 * 00000001402D82DE: call    KeGuardDispatchICall
 * 00000001402D82E3: mov     rcx, [rbx+8]
 * 00000001402D82E7: movzx   edx, [rbp+2250h+var_219B]
 * 00000001402D82EE: mov     r13, rcx
 * 00000001402D82F1: movzx   eax, dil
 * 00000001402D82F5: and     r13, 0FFFFFFFFFFFF0000h
 * 00000001402D82FC: cmp     r13, r12
 * 00000001402D82FF: cmovz   edx, eax
 * 00000001402D8302: mov     rax, [rsi+3F8h]
 * 00000001402D8309: shr     rcx, 6
 * 00000001402D830D: and     cl, 0Fh
 * 00000001402D8310: call    KeGuardDispatchICall
 * 00000001402D8315: test    eax, eax
 * 00000001402D8317: jnz     loc_1402D83CE
 * 00000001402D831D: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D8327: lea     r9d, [rax+1]
 * 00000001402D832B: jz      short loc_1402D836C
 * 00000001402D832D: mov     rcx, [rsi+908h]
 * 00000001402D8334: lea     edx, [rax+30h]
 * 00000001402D8337: lea     r8d, [rax+6]
 * 00000001402D833B: mov     rax, [r14]
 * 00000001402D833E: add     edx, 0FFFFFFF8h
 * 00000001402D8341: mov     [rcx], rax
 * 00000001402D8344: add     r14, 8
 * 00000001402D8348: add     rcx, 8
 * 00000001402D834C: sub     r8, r9
 * 00000001402D834F: jnz     short loc_1402D833B
 * 00000001402D8351: test    edx, edx
 * 00000001402D8353: jz      short loc_1402D8365
 * 00000001402D8355: mov     al, [r14]
 * 00000001402D8358: add     r14, r9
 * 00000001402D835B: mov     [rcx], al
 * 00000001402D835D: add     rcx, r9
 * 00000001402D8360: add     edx, 0FFFFFFFFh
 * 00000001402D8363: jnz     short loc_1402D8355
 * 00000001402D8365: mov     r14, [rsi+908h]
 * 00000001402D836C: mov     [r14+18h], r13
 * 00000001402D8370: mov     rax, [rbx]
 * 00000001402D8373: mov     [r14+20h], rax
 * 00000001402D8377: mov     eax, [rbx+8]
 * 00000001402D837A: shr     rax, 6
 * 00000001402D837E: and     al, 0Fh
 * 00000001402D8380: mov     [r14+28h], al
 * 00000001402D8384: xor     eax, eax
 * 00000001402D8386: cmp     [rsi+790h], eax
 * 00000001402D838C: jnz     short loc_1402D83CE
 * 00000001402D838E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D8398: add     rax, rsi
 * 00000001402D839B: mov     [rsi+798h], rax
 * 00000001402D83A2: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D83AC: add     rax, r14
 * 00000001402D83AF: mov     [rsi+7A0h], rax
 * 00000001402D83B6: movsxd  rax, dword ptr [r14]
 * 00000001402D83B9: mov     [rsi+7A8h], rax
 * 00000001402D83C0: mov     [rsi+7B0h], r15
 * 00000001402D83C7: mov     [rsi+790h], r9d
 * 00000001402D83CE: add     rbx, 30h ; '0'
 * 00000001402D83D2: mov     rcx, [rbx]
 * 00000001402D83D5: test    rcx, rcx
 * 00000001402D83D8: jnz     loc_1402D82D0
 * 00000001402D83DE: jmp     loc_1402D8740
 * 00000001402D83E3: mov     rax, [rsi+3C8h]
 * 00000001402D83EA: call    KeGuardDispatchICall
 * 00000001402D83EF: xor     edi, edi
 * 00000001402D83F1: test    eax, eax
 * 00000001402D83F3: jz      loc_1402D877B
 * 00000001402D83F9: mov     r12, [rbp+2250h+var_2240]
 * 00000001402D83FD: mov     rcx, r15
 * 00000001402D8400: mov     rax, [rsi+3A0h]
 * 00000001402D8407: mov     r14, r12
 * 00000001402D840A: call    KeGuardDispatchICall
 * 00000001402D840F: test    eax, eax
 * 00000001402D8411: js      loc_1402D8775
 * 00000001402D8417: mov     rax, [rsi+3E0h]
 * 00000001402D841E: mov     rcx, r15
 * 00000001402D8421: call    KeGuardDispatchICall
 * 00000001402D8426: mov     bl, al
 * 00000001402D8428: mov     [rbp+2250h+var_2100], al
 * 00000001402D842E: mov     rax, [rsi+3E8h]
 * 00000001402D8435: lea     rdx, [rbp+2250h+var_21A8]
 * 00000001402D843C: mov     rcx, r15
 * 00000001402D843F: call    KeGuardDispatchICall
 * 00000001402D8444: mov     dil, al
 * 00000001402D8447: mov     rcx, r15
 * 00000001402D844A: mov     rax, [rsi+3F0h]
 * 00000001402D8451: call    KeGuardDispatchICall
 * 00000001402D8456: mov     [rbp+2250h+var_2230], rax
 * 00000001402D845A: cmp     bl, 61h ; 'a'
 * 00000001402D845D: jz      short loc_1402D84D0
 * 00000001402D845F: mov     eax, [rsi+790h]
 * 00000001402D8465: xor     edx, edx
 * 00000001402D8467: test    eax, eax
 * 00000001402D8469: jnz     short loc_1402D84D0
 * 00000001402D846B: mov     rax, [rsi+588h]
 * 00000001402D8472: movzx   ecx, bl
 * 00000001402D8475: xor     rcx, 61h
 * 00000001402D8479: mov     [rax+18h], rcx
 * 00000001402D847D: mov     eax, [rsi+790h]
 * 00000001402D8483: test    eax, eax
 * 00000001402D8485: jnz     short loc_1402D84D0
 * 00000001402D8487: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D8491: lea     r10d, [rdx+1]
 * 00000001402D8495: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D849F: lea     rax, [rsi+r8]
 * 00000001402D84A3: mov     [rsi+798h], rax
 * 00000001402D84AA: lea     rax, [r12+r11]
 * 00000001402D84AE: mov     [rsi+7A0h], rax
 * 00000001402D84B5: movsxd  rax, dword ptr [r12]
 * 00000001402D84B9: mov     [rsi+7A8h], rax
 * 00000001402D84C0: mov     [rsi+7B0h], r15
 * 00000001402D84C7: mov     [rsi+790h], r10d
 * 00000001402D84CE: jmp     short loc_1402D84EA
 * 00000001402D84D0: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D84DA: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D84E4: mov     r10d, 1
 * 00000001402D84EA: xor     eax, eax
 * 00000001402D84EC: movzx   ecx, bl
 * 00000001402D84EF: and     ecx, 7
 * 00000001402D84F2: mov     dl, al
 * 00000001402D84F4: mov     r9b, al
 * 00000001402D84F7: sub     ecx, 1
 * 00000001402D84FA: jz      short loc_1402D854D
 * 00000001402D84FC: cmp     ecx, 1
 * 00000001402D84FF: jz      short loc_1402D853F
 * 00000001402D8501: test    bl, 7
 * 00000001402D8504: jz      short loc_1402D854F
 * 00000001402D8506: cmp     [rsi+790h], eax
 * 00000001402D850C: jnz     short loc_1402D854F
 * 00000001402D850E: lea     rax, [rsi+r8]
 * 00000001402D8512: mov     [rsi+798h], rax
 * 00000001402D8519: lea     rax, [r12+r11]
 * 00000001402D851D: mov     [rsi+7A0h], rax
 * 00000001402D8524: movsxd  rax, dword ptr [r12]
 * 00000001402D8528: mov     [rsi+7A8h], rax
 * 00000001402D852F: mov     [rsi+7B0h], r15
 * 00000001402D8536: mov     [rsi+790h], r10d
 * 00000001402D853D: jmp     short loc_1402D8549
 * 00000001402D853F: mov     eax, 10h
 * 00000001402D8544: mov     dl, al
 * 00000001402D8546: mov     r9b, al
 * 00000001402D8549: xor     eax, eax
 * 00000001402D854B: jmp     short loc_1402D854F
 * 00000001402D854D: mov     dl, 30h ; '0'
 * 00000001402D854F: mov     r8, [rsi+5C0h]
 * 00000001402D8556: movzx   ecx, bl
 * 00000001402D8559: shr     rcx, 4
 * 00000001402D855D: or      dl, [r8+rcx*2]
 * 00000001402D8561: cmp     dl, dil
 * 00000001402D8564: mov     rdx, 0A3A03F5891C8B4E8h
 * 00000001402D856E: jz      short loc_1402D85A7
 * 00000001402D8570: cmp     [rsi+790h], eax
 * 00000001402D8576: jnz     short loc_1402D85A7
 * 00000001402D8578: lea     rax, [rsi+rdx]
 * 00000001402D857C: mov     [rsi+798h], rax
 * 00000001402D8583: lea     rax, [r12+r11]
 * 00000001402D8587: mov     [rsi+7A0h], rax
 * 00000001402D858E: movsxd  rax, dword ptr [r12]
 * 00000001402D8592: mov     [rsi+7A8h], rax
 * 00000001402D8599: mov     [rsi+7B0h], r15
 * 00000001402D85A0: mov     [rsi+790h], r10d
 * 00000001402D85A7: mov     al, [r8+rcx*2+1]
 * 00000001402D85AC: or      al, r9b
 * 00000001402D85AF: cmp     al, [rbp+2250h+var_21A8]
 * 00000001402D85B5: jz      short loc_1402D85F0
 * 00000001402D85B7: xor     eax, eax
 * 00000001402D85B9: cmp     [rsi+790h], eax
 * 00000001402D85BF: jnz     short loc_1402D85F2
 * 00000001402D85C1: lea     rax, [rsi+rdx]
 * 00000001402D85C5: mov     [rsi+798h], rax
 * 00000001402D85CC: lea     rax, [r12+r11]
 * 00000001402D85D0: mov     [rsi+7A0h], rax
 * 00000001402D85D7: movsxd  rax, dword ptr [r12]
 * 00000001402D85DB: mov     [rsi+7A8h], rax
 * 00000001402D85E2: mov     [rsi+7B0h], r15
 * 00000001402D85E9: mov     [rsi+790h], r10d
 * 00000001402D85F0: xor     eax, eax
 * 00000001402D85F2: cmp     r15, [rsi+4D8h]
 * 00000001402D85F9: jz      short loc_1402D860D
 * 00000001402D85FB: mov     rax, [rsi+3D8h]
 * 00000001402D8602: mov     edx, r10d
 * 00000001402D8605: mov     rcx, r15
 * 00000001402D8608: call    KeGuardDispatchICall
 * 00000001402D860D: mov     [rbp+2250h+var_2248], rax
 * 00000001402D8611: mov     r12, rax
 * 00000001402D8614: test    rax, rax
 * 00000001402D8617: jz      loc_1402D8757
 * 00000001402D861D: mov     rcx, [rax]
 * 00000001402D8620: mov     rbx, rax
 * 00000001402D8623: test    rcx, rcx
 * 00000001402D8626: jz      loc_1402D8748
 * 00000001402D862C: mov     r12, [rbp+2250h+var_2230]
 * 00000001402D8630: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001402D8634: mov     [rbx], rcx
 * 00000001402D8637: mov     rax, [rsi+1E0h]
 * 00000001402D863E: call    KeGuardDispatchICall
 * 00000001402D8643: mov     rcx, [rbx+8]
 * 00000001402D8647: movzx   edx, [rbp+2250h+var_21A8]
 * 00000001402D864E: mov     r13, rcx
 * 00000001402D8651: movzx   eax, dil
 * 00000001402D8655: and     r13, 0FFFFFFFFFFFF0000h
 * 00000001402D865C: cmp     r13, r12
 * 00000001402D865F: cmovz   edx, eax
 * 00000001402D8662: mov     rax, [rsi+3F8h]
 * 00000001402D8669: shr     rcx, 6
 * 00000001402D866D: and     cl, 0Fh
 * 00000001402D8670: call    KeGuardDispatchICall
 * 00000001402D8675: xor     r9d, r9d
 * 00000001402D8678: test    eax, eax
 * 00000001402D867A: jnz     loc_1402D8730
 * 00000001402D8680: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D868A: lea     r10d, [r9+1]
 * 00000001402D868E: jz      short loc_1402D86CF
 * 00000001402D8690: mov     rcx, [rsi+908h]
 * 00000001402D8697: lea     edx, [rax+30h]
 * 00000001402D869A: lea     r8d, [r9+6]
 * 00000001402D869E: mov     rax, [r14]
 * 00000001402D86A1: add     edx, 0FFFFFFF8h
 * 00000001402D86A4: mov     [rcx], rax
 * 00000001402D86A7: add     r14, 8
 * 00000001402D86AB: add     rcx, 8
 * 00000001402D86AF: sub     r8, r10
 * 00000001402D86B2: jnz     short loc_1402D869E
 * 00000001402D86B4: test    edx, edx
 * 00000001402D86B6: jz      short loc_1402D86C8
 * 00000001402D86B8: mov     al, [r14]
 * 00000001402D86BB: add     r14, r10
 * 00000001402D86BE: mov     [rcx], al
 * 00000001402D86C0: add     rcx, r10
 * 00000001402D86C3: add     edx, 0FFFFFFFFh
 * 00000001402D86C6: jnz     short loc_1402D86B8
 * 00000001402D86C8: mov     r14, [rsi+908h]
 * 00000001402D86CF: mov     [r14+18h], r13
 * 00000001402D86D3: mov     rax, [rbx]
 * 00000001402D86D6: mov     [r14+20h], rax
 * 00000001402D86DA: mov     eax, [rbx+8]
 * 00000001402D86DD: shr     rax, 6
 * 00000001402D86E1: and     al, 0Fh
 * 00000001402D86E3: mov     [r14+28h], al
 * 00000001402D86E7: cmp     [rsi+790h], r9d
 * 00000001402D86EE: jnz     short loc_1402D8730
 * 00000001402D86F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D86FA: add     rax, rsi
 * 00000001402D86FD: mov     [rsi+798h], rax
 * 00000001402D8704: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D870E: add     rax, r14
 * 00000001402D8711: mov     [rsi+7A0h], rax
 * 00000001402D8718: movsxd  rax, dword ptr [r14]
 * 00000001402D871B: mov     [rsi+7A8h], rax
 * 00000001402D8722: mov     [rsi+7B0h], r15
 * 00000001402D8729: mov     [rsi+790h], r10d
 * 00000001402D8730: add     rbx, 30h ; '0'
 * 00000001402D8734: mov     rcx, [rbx]
 * 00000001402D8737: test    rcx, rcx
 * 00000001402D873A: jnz     loc_1402D8630
 * 00000001402D8740: mov     r12, [rbp+2250h+var_2248]
 * 00000001402D8744: mov     r13d, [rbp+2250h+var_2200]
 * 00000001402D8748: mov     rax, [rsi+100h]
 * 00000001402D874F: mov     rcx, r12
 * 00000001402D8752: call    KeGuardDispatchICall
 * 00000001402D8757: mov     rax, [rsi+3A8h]
 * 00000001402D875E: mov     rcx, r15
 * 00000001402D8761: call    KeGuardDispatchICall
 * 00000001402D8766: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402D876A: mov     eax, 8000h
 * 00000001402D876F: add     [rsi+6C8h], eax
 * 00000001402D8775: mov     r14d, 1
 * 00000001402D877B: mov     rax, [rsi+3B0h]
 * 00000001402D8782: add     r13d, r14d
 * 00000001402D8785: mov     rcx, r15
 * 00000001402D8788: mov     [rbp+2250h+var_2200], r13d
 * 00000001402D878C: call    KeGuardDispatchICall
 * 00000001402D8791: mov     r15, rax
 * 00000001402D8794: test    rax, rax
 * 00000001402D8797: jnz     loc_1402D8087
 * 00000001402D879D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D87A4: mov     r12, [rsi+4D8h]
 * 00000001402D87AB: mov     rax, [rsi+3A0h]
 * 00000001402D87B2: mov     rcx, r12
 * 00000001402D87B5: call    KeGuardDispatchICall
 * 00000001402D87BA: xor     r15d, r15d
 * 00000001402D87BD: test    eax, eax
 * 00000001402D87BF: js      loc_1402D8B28
 * 00000001402D87C5: mov     rax, [rsi+3E0h]
 * 00000001402D87CC: mov     rcx, r12
 * 00000001402D87CF: call    KeGuardDispatchICall
 * 00000001402D87D4: mov     bl, al
 * 00000001402D87D6: mov     byte ptr [rbp+2250h+var_2160], al
 * 00000001402D87DC: mov     rax, [rsi+3E8h]
 * 00000001402D87E3: lea     rdx, [rbp+2250h+var_21A7]
 * 00000001402D87EA: mov     rcx, r12
 * 00000001402D87ED: call    KeGuardDispatchICall
 * 00000001402D87F2: mov     r13b, al
 * 00000001402D87F5: mov     rcx, r12
 * 00000001402D87F8: mov     rax, [rsi+3F0h]
 * 00000001402D87FF: call    KeGuardDispatchICall
 * 00000001402D8804: mov     [rbp+2250h+var_2230], rax
 * 00000001402D8808: cmp     bl, 72h ; 'r'
 * 00000001402D880B: jz      short loc_1402D887B
 * 00000001402D880D: mov     eax, [rsi+790h]
 * 00000001402D8813: test    eax, eax
 * 00000001402D8815: jnz     short loc_1402D887B
 * 00000001402D8817: mov     rax, [rsi+588h]
 * 00000001402D881E: movzx   ecx, bl
 * 00000001402D8821: xor     rcx, 72h
 * 00000001402D8825: mov     [rax+18h], rcx
 * 00000001402D8829: mov     eax, [rsi+790h]
 * 00000001402D882F: test    eax, eax
 * 00000001402D8831: jnz     short loc_1402D887B
 * 00000001402D8833: mov     r10, [rbp+2250h+var_2240]
 * 00000001402D8837: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D8841: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D884B: lea     rax, [rsi+r8]
 * 00000001402D884F: mov     [rsi+798h], rax
 * 00000001402D8856: lea     rax, [r10+r11]
 * 00000001402D885A: mov     [rsi+7A0h], rax
 * 00000001402D8861: movsxd  rax, dword ptr [r10]
 * 00000001402D8864: mov     [rsi+7A8h], rax
 * 00000001402D886B: mov     [rsi+7B0h], r12
 * 00000001402D8872: mov     [rsi+790h], r14d
 * 00000001402D8879: jmp     short loc_1402D8893
 * 00000001402D887B: mov     r10, [rbp+2250h+var_2240]
 * 00000001402D887F: mov     r8, 0A3A03F5891C8B4E8h
 * 00000001402D8889: mov     r11, 0B3B74BDEE4453415h
 * 00000001402D8893: movzx   ecx, bl
 * 00000001402D8896: mov     dl, r15b
 * 00000001402D8899: and     ecx, 7
 * 00000001402D889C: mov     r9b, r15b
 * 00000001402D889F: sub     ecx, 1
 * 00000001402D88A2: jz      short loc_1402D88F3
 * 00000001402D88A4: cmp     ecx, 1
 * 00000001402D88A7: jz      short loc_1402D88E7
 * 00000001402D88A9: test    bl, 7
 * 00000001402D88AC: jz      short loc_1402D88F5
 * 00000001402D88AE: cmp     [rsi+790h], r15d
 * 00000001402D88B5: jnz     short loc_1402D88F5
 * 00000001402D88B7: lea     rax, [rsi+r8]
 * 00000001402D88BB: mov     [rsi+798h], rax
 * 00000001402D88C2: lea     rax, [r10+r11]
 * 00000001402D88C6: mov     [rsi+7A0h], rax
 * 00000001402D88CD: movsxd  rax, dword ptr [r10]
 * 00000001402D88D0: mov     [rsi+7A8h], rax
 * 00000001402D88D7: mov     [rsi+7B0h], r12
 * 00000001402D88DE: mov     [rsi+790h], r14d
 * 00000001402D88E5: jmp     short loc_1402D88F5
 * 00000001402D88E7: mov     eax, 10h
 * 00000001402D88EC: mov     dl, al
 * 00000001402D88EE: mov     r9b, al
 * 00000001402D88F1: jmp     short loc_1402D88F5
 * 00000001402D88F3: mov     dl, 30h ; '0'
 * 00000001402D88F5: mov     r8, [rsi+5C0h]
 * 00000001402D88FC: movzx   ecx, bl
 * 00000001402D88FF: shr     rcx, 4
 * 00000001402D8903: or      dl, [r8+rcx*2]
 * 00000001402D8907: cmp     dl, r13b
 * 00000001402D890A: mov     rdx, 0A3A03F5891C8B4E8h
 * 00000001402D8914: jz      short loc_1402D894D
 * 00000001402D8916: cmp     [rsi+790h], r15d
 * 00000001402D891D: jnz     short loc_1402D894D
 * 00000001402D891F: lea     rax, [rsi+rdx]
 * 00000001402D8923: mov     [rsi+798h], rax
 * 00000001402D892A: lea     rax, [r10+r11]
 * 00000001402D892E: mov     [rsi+7A0h], rax
 * 00000001402D8935: movsxd  rax, dword ptr [r10]
 * 00000001402D8938: mov     [rsi+7A8h], rax
 * 00000001402D893F: mov     [rsi+7B0h], r12
 * 00000001402D8946: mov     [rsi+790h], r14d
 * 00000001402D894D: mov     al, [r8+rcx*2+1]
 * 00000001402D8952: or      al, r9b
 * 00000001402D8955: cmp     al, [rbp+2250h+var_21A7]
 * 00000001402D895B: jz      short loc_1402D8994
 * 00000001402D895D: cmp     [rsi+790h], r15d
 * 00000001402D8964: jnz     short loc_1402D8994
 * 00000001402D8966: lea     rax, [rsi+rdx]
 * 00000001402D896A: mov     [rsi+798h], rax
 * 00000001402D8971: lea     rax, [r10+r11]
 * 00000001402D8975: mov     [rsi+7A0h], rax
 * 00000001402D897C: movsxd  rax, dword ptr [r10]
 * 00000001402D897F: mov     [rsi+7A8h], rax
 * 00000001402D8986: mov     [rsi+7B0h], r12
 * 00000001402D898D: mov     [rsi+790h], r14d
 * 00000001402D8994: cmp     r12, [rsi+4D8h]
 * 00000001402D899B: jz      short loc_1402D89B4
 * 00000001402D899D: mov     rax, [rsi+3D8h]
 * 00000001402D89A4: mov     edx, r14d
 * 00000001402D89A7: mov     rcx, r12
 * 00000001402D89AA: call    KeGuardDispatchICall
 * 00000001402D89AF: mov     r14, rax
 * 00000001402D89B2: jmp     short loc_1402D89B7
 * 00000001402D89B4: mov     r14, r15
 * 00000001402D89B7: mov     [rbp+2250h+var_2248], r14
 * 00000001402D89BB: test    r14, r14
 * 00000001402D89BE: jz      loc_1402D8B0A
 * 00000001402D89C4: mov     rcx, [r14]
 * 00000001402D89C7: mov     rbx, r14
 * 00000001402D89CA: test    rcx, rcx
 * 00000001402D89CD: jz      loc_1402D8AFB
 * 00000001402D89D3: mov     rdi, [rbp+2250h+var_2230]
 * 00000001402D89D7: mov     r14, [rbp+2250h+var_2240]
 * 00000001402D89DB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001402D89DF: mov     [rbx], rcx
 * 00000001402D89E2: mov     rax, [rsi+1E0h]
 * 00000001402D89E9: call    KeGuardDispatchICall
 * 00000001402D89EE: mov     rcx, [rbx+8]
 * 00000001402D89F2: movzx   edx, [rbp+2250h+var_21A7]
 * 00000001402D89F9: mov     r15, rcx
 * 00000001402D89FC: movzx   eax, r13b
 * 00000001402D8A00: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001402D8A07: cmp     r15, rdi
 * 00000001402D8A0A: cmovz   edx, eax
 * 00000001402D8A0D: mov     rax, [rsi+3F8h]
 * 00000001402D8A14: shr     rcx, 6
 * 00000001402D8A18: and     cl, 0Fh
 * 00000001402D8A1B: call    KeGuardDispatchICall
 * 00000001402D8A20: test    eax, eax
 * 00000001402D8A22: jnz     loc_1402D8ADD
 * 00000001402D8A28: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D8A32: lea     r10d, [rax+1]
 * 00000001402D8A36: jz      short loc_1402D8A77
 * 00000001402D8A38: mov     rcx, [rsi+908h]
 * 00000001402D8A3F: lea     edx, [rax+30h]
 * 00000001402D8A42: lea     r8d, [rax+6]
 * 00000001402D8A46: mov     rax, [r14]
 * 00000001402D8A49: add     edx, 0FFFFFFF8h
 * 00000001402D8A4C: mov     [rcx], rax
 * 00000001402D8A4F: add     r14, 8
 * 00000001402D8A53: add     rcx, 8
 * 00000001402D8A57: sub     r8, r10
 * 00000001402D8A5A: jnz     short loc_1402D8A46
 * 00000001402D8A5C: test    edx, edx
 * 00000001402D8A5E: jz      short loc_1402D8A70
 * 00000001402D8A60: mov     al, [r14]
 * 00000001402D8A63: add     r14, r10
 * 00000001402D8A66: mov     [rcx], al
 * 00000001402D8A68: add     rcx, r10
 * 00000001402D8A6B: add     edx, 0FFFFFFFFh
 * 00000001402D8A6E: jnz     short loc_1402D8A60
 * 00000001402D8A70: mov     r14, [rsi+908h]
 * 00000001402D8A77: mov     [r14+18h], r15
 * 00000001402D8A7B: xor     r15d, r15d
 * 00000001402D8A7E: mov     rax, [rbx]
 * 00000001402D8A81: mov     [r14+20h], rax
 * 00000001402D8A85: mov     eax, [rbx+8]
 * 00000001402D8A88: shr     rax, 6
 * 00000001402D8A8C: and     al, 0Fh
 * 00000001402D8A8E: mov     [r14+28h], al
 * 00000001402D8A92: cmp     [rsi+790h], r15d
 * 00000001402D8A99: jnz     short loc_1402D8AE0
 * 00000001402D8A9B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D8AA5: add     rax, rsi
 * 00000001402D8AA8: mov     [rsi+798h], rax
 * 00000001402D8AAF: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D8AB9: add     rax, r14
 * 00000001402D8ABC: mov     [rsi+7A0h], rax
 * 00000001402D8AC3: movsxd  rax, dword ptr [r14]
 * 00000001402D8AC6: mov     [rsi+7A8h], rax
 * 00000001402D8ACD: mov     [rsi+7B0h], r12
 * 00000001402D8AD4: mov     [rsi+790h], r10d
 * 00000001402D8ADB: jmp     short loc_1402D8AE0
 * 00000001402D8ADD: xor     r15d, r15d
 * 00000001402D8AE0: add     rbx, 30h ; '0'
 * 00000001402D8AE4: mov     rcx, [rbx]
 * 00000001402D8AE7: test    rcx, rcx
 * 00000001402D8AEA: jnz     loc_1402D89DB
 * 00000001402D8AF0: mov     r14, [rbp+2250h+var_2248]
 * 00000001402D8AF4: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D8AFB: mov     rax, [rsi+100h]
 * 00000001402D8B02: mov     rcx, r14
 * 00000001402D8B05: call    KeGuardDispatchICall
 * 00000001402D8B0A: mov     rax, [rsi+3A8h]
 * 00000001402D8B11: mov     rcx, r12
 * 00000001402D8B14: call    KeGuardDispatchICall
 * 00000001402D8B19: mov     r13d, [rbp+2250h+var_2200]
 * 00000001402D8B1D: mov     eax, 8000h
 * 00000001402D8B22: add     [rsi+6C8h], eax
 * 00000001402D8B28: mov     rcx, [rbp+2250h+var_2250]
 * 00000001402D8B2C: test    rcx, rcx
 * 00000001402D8B2F: jz      short loc_1402D8B3D
 * 00000001402D8B31: mov     rax, [rsi+1E0h]
 * 00000001402D8B38: call    KeGuardDispatchICall
 * 00000001402D8B3D: shl     r13d, 8
 * 00000001402D8B41: add     [rsi+6C8h], r13d
 * 00000001402D8B48: jmp     loc_1402D3378
 * 00000001402D8B4D: test    [r13+2Ah], dl
 * 00000001402D8B51: jz      short loc_1402D8B91
 * 00000001402D8B53: xor     r15d, r15d
 * 00000001402D8B56: cmp     [rsi+818h], r15
 * 00000001402D8B5D: jz      loc_1402D8D57
 * 00000001402D8B63: mov     ecx, [rsi+82Ch]
 * 00000001402D8B69: test    cl, 4
 * 00000001402D8B6C: jnz     loc_1402D8D57
 * 00000001402D8B72: cmp     [rsi+6C4h], r15d
 * 00000001402D8B79: jnz     loc_1402D8D4E
 * 00000001402D8B7F: mov     eax, ecx
 * 00000001402D8B81: shl     eax, 3
 * 00000001402D8B84: xor     eax, ecx
 * 00000001402D8B86: and     eax, 20h
 * 00000001402D8B89: xor     eax, ecx
 * 00000001402D8B8B: mov     [rsi+82Ch], eax
 * 00000001402D8B91: mov     r11, [r13+8]
 * 00000001402D8B95: mov     r8d, [rsi+6C4h]
 * 00000001402D8B9C: mov     [rbp+2250h+var_2208], r11
 * 00000001402D8BA0: lea     rax, [r8+r8*2]
 * 00000001402D8BA4: lea     rcx, [r11+rax*4]
 * 00000001402D8BA8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402D8BB2: lea     r9, [rcx+0Ch]
 * 00000001402D8BB6: mov     [rbp+2250h+var_2230], rcx
 * 00000001402D8BBA: mov     ecx, [r13+24h]
 * 00000001402D8BBE: mul     rcx
 * 00000001402D8BC1: mov     [rbp+2250h+var_2248], r9
 * 00000001402D8BC5: mov     r10, rdx
 * 00000001402D8BC8: shr     r10, 3
 * 00000001402D8BCC: mov     eax, r10d
 * 00000001402D8BCF: mov     [rbp+2250h+var_21B0], r10
 * 00000001402D8BD6: lea     rcx, [rax+rax*2]
 * 00000001402D8BDA: lea     rax, [r11+rcx*4]
 * 00000001402D8BDE: lea     r11d, [r10-1]
 * 00000001402D8BE2: mov     [rbp+2250h+var_2198], rax
 * 00000001402D8BE9: lea     rax, [r13+30h]
 * 00000001402D8BED: mov     edx, r11d
 * 00000001402D8BF0: add     rdx, 7
 * 00000001402D8BF4: mov     [rbp+2250h+var_21D0], r11d
 * 00000001402D8BFB: lea     r15, [r8+rax]
 * 00000001402D8BFF: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001402D8C03: add     rdx, rax
 * 00000001402D8C06: mov     [rbp+2250h+var_2250], r15
 * 00000001402D8C0A: movzx   eax, word ptr [r13+28h]
 * 00000001402D8C0F: mov     [rbp+2250h+var_21E0], rdx
 * 00000001402D8C13: lea     rcx, [rax+rax*2]
 * 00000001402D8C17: lea     rax, [rdx+rcx*8]
 * 00000001402D8C1B: mov     ecx, 1
 * 00000001402D8C20: mov     [rbp+2250h+var_2188], rax
 * 00000001402D8C27: cmp     r8d, r11d
 * 00000001402D8C2A: jnb     loc_1402D8EC4
 * 00000001402D8C30: mov     rdi, [rbp+2250h+var_2230]
 * 00000001402D8C34: xor     edx, edx
 * 00000001402D8C36: cmp     [r15], dl
 * 00000001402D8C39: jl      loc_1402D8E4C
 * 00000001402D8C3F: mov     eax, [rdi+4]
 * 00000001402D8C42: mov     r9d, [r9]
 * 00000001402D8C45: mov     r13d, eax
 * 00000001402D8C48: sub     r9d, eax
 * 00000001402D8C4B: mov     rax, [rbp+2250h+var_2240]
 * 00000001402D8C4F: mov     r12d, r9d
 * 00000001402D8C52: add     r13, [rax+18h]
 * 00000001402D8C56: add     [rsi+6C8h], r9d
 * 00000001402D8C5D: mov     r10, r13
 * 00000001402D8C60: mov     ebx, [rsi+6B4h]
 * 00000001402D8C66: mov     rax, r13
 * 00000001402D8C69: mov     r14, [rsi+6B8h]
 * 00000001402D8C70: lea     rcx, [r9+r13]
 * 00000001402D8C74: mov     [rbp+2250h+var_2230], r13
 * 00000001402D8C78: cmp     r13, rcx
 * 00000001402D8C7B: jnb     short loc_1402D8C8E
 * 00000001402D8C7D: mov     r8d, 40h ; '@'
 * 00000001402D8C83: prefetchnta byte ptr [rax]
 * 00000001402D8C86: add     rax, r8
 * 00000001402D8C89: cmp     rax, rcx
 * 00000001402D8C8C: jb      short loc_1402D8C83
 * 00000001402D8C8E: mov     r11d, r9d
 * 00000001402D8C91: mov     r8, r14
 * 00000001402D8C94: shr     r11d, 7
 * 00000001402D8C98: test    r11d, r11d
 * 00000001402D8C9B: jz      short loc_1402D8D03
 * 00000001402D8C9D: mov     rsi, 7010008004002001h
 * 00000001402D8CA7: mov     r15d, 1
 * 00000001402D8CAD: mov     eax, 8
 * 00000001402D8CB2: xor     r8, [r10]
 * 00000001402D8CB5: mov     ecx, ebx
 * 00000001402D8CB7: rol     r8, cl
 * 00000001402D8CBA: xor     r8, [r10+8]
 * 00000001402D8CBE: add     r10, 10h
 * 00000001402D8CC2: rol     r8, cl
 * 00000001402D8CC5: sub     rax, r15
 * 00000001402D8CC8: jnz     short loc_1402D8CB2
 * 00000001402D8CCA: mov     rcx, r10
 * 00000001402D8CCD: sub     rcx, r13
 * 00000001402D8CD0: xor     rcx, r14
 * 00000001402D8CD3: mov     rax, rcx
 * 00000001402D8CD6: rol     rax, 11h
 * 00000001402D8CDA: xor     rcx, rax
 * 00000001402D8CDD: mov     rax, rsi
 * 00000001402D8CE0: mul     rcx
 * 00000001402D8CE3: xor     eax, edx
 * 00000001402D8CE5: mov     [rbp+2250h+var_1C78], rdx
 * 00000001402D8CEC: xor     ebx, eax
 * 00000001402D8CEE: and     ebx, 3Fh
 * 00000001402D8CF1: cmovz   ebx, r15d
 * 00000001402D8CF5: add     r11d, 0FFFFFFFFh
 * 00000001402D8CF9: jnz     short loc_1402D8CAD
 * 00000001402D8CFB: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D8CFF: mov     r15, [rbp+2250h+var_2250]
 * 00000001402D8D03: and     r9d, 7Fh
 * 00000001402D8D07: mov     r11d, 1
 * 00000001402D8D0D: cmp     r9d, 8
 * 00000001402D8D11: jb      short loc_1402D8D2F
 * 00000001402D8D13: mov     eax, r9d
 * 00000001402D8D16: shr     rax, 3
 * 00000001402D8D1A: xor     r8, [r10]
 * 00000001402D8D1D: mov     ecx, ebx
 * 00000001402D8D1F: rol     r8, cl
 * 00000001402D8D22: add     r10, 8
 * 00000001402D8D26: add     r9d, 0FFFFFFF8h
 * 00000001402D8D2A: sub     rax, r11
 * 00000001402D8D2D: jnz     short loc_1402D8D1A
 * 00000001402D8D2F: test    r9d, r9d
 * 00000001402D8D32: jz      short loc_1402D8D49
 * 00000001402D8D34: movzx   eax, byte ptr [r10]
 * 00000001402D8D38: mov     ecx, ebx
 * 00000001402D8D3A: xor     r8, rax
 * 00000001402D8D3D: add     r10, r11
 * 00000001402D8D40: rol     r8, cl
 * 00000001402D8D43: add     r9d, 0FFFFFFFFh
 * 00000001402D8D47: jnz     short loc_1402D8D34
 * 00000001402D8D49: mov     rax, r8
 * 00000001402D8D4C: jmp     short loc_1402D8D66
 * 00000001402D8D4E: test    cl, 20h
 * 00000001402D8D51: jz      loc_1402D8B91
 * 00000001402D8D57: mov     [rsi+6C4h], r15d
 * 00000001402D8D5E: jmp     loc_1402D3378
 * 00000001402D8D63: xor     r8b, al
 * 00000001402D8D66: shr     rax, 7
 * 00000001402D8D6A: test    rax, rax
 * 00000001402D8D6D: jnz     short loc_1402D8D63
 * 00000001402D8D6F: movzx   ecx, byte ptr [r15]
 * 00000001402D8D73: mov     eax, ecx
 * 00000001402D8D75: movzx   edx, r8b
 * 00000001402D8D79: and     edx, 7Fh
 * 00000001402D8D7C: and     eax, 7Fh
 * 00000001402D8D7F: mov     dword ptr [rbp+2250h+var_2218], edx
 * 00000001402D8D82: cmp     edx, eax
 * 00000001402D8D84: jz      loc_1402D8E2D
 * 00000001402D8D8A: test    r12, r12
 * 00000001402D8D8D: jz      loc_1402D9043
 * 00000001402D8D93: mov     eax, [rsi+82Ch]
 * 00000001402D8D99: mov     r8d, 40h ; '@'
 * 00000001402D8D9F: test    r8b, al
 * 00000001402D8DA2: jz      loc_1402D9043
 * 00000001402D8DA8: mov     r15, cr8
 * 00000001402D8DAC: lea     eax, [r8-3Eh]
 * 00000001402D8DB0: mov     cr8, rax
 * 00000001402D8DB4: mov     rbx, r13
 * 00000001402D8DB7: dec     r12
 * 00000001402D8DBA: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402D8DC1: add     r13, r12
 * 00000001402D8DC4: mov     eax, 0FFFh
 * 00000001402D8DC9: or      r13, rax
 * 00000001402D8DCC: lea     r12, [rbx-1]
 * 00000001402D8DD0: movzx   r14d, r15b
 * 00000001402D8DD4: mov     rax, [rsi+468h]
 * 00000001402D8DDB: xor     edx, edx
 * 00000001402D8DDD: mov     rcx, rbx
 * 00000001402D8DE0: call    KeGuardDispatchICall
 * 00000001402D8DE5: cmp     eax, 0C000022Dh
 * 00000001402D8DEA: jnz     short loc_1402D8E0F
 * 00000001402D8DEC: mov     eax, 1
 * 00000001402D8DF1: cmp     r15b, al
 * 00000001402D8DF4: ja      short loc_1402D8E19
 * 00000001402D8DF6: movzx   r14d, r15b
 * 00000001402D8DFA: mov     cr8, r14
 * 00000001402D8DFE: mov     al, [rbx]
 * 00000001402D8E00: mov     rax, cr8
 * 00000001402D8E04: mov     eax, 2
 * 00000001402D8E09: mov     cr8, rax
 * 00000001402D8E0D: jmp     short loc_1402D8DD4
 * 00000001402D8E0F: xor     ecx, ecx
 * 00000001402D8E11: test    eax, eax
 * 00000001402D8E13: js      loc_1402D9032
 * 00000001402D8E19: mov     eax, 1000h
 * 00000001402D8E1E: add     rbx, rax
 * 00000001402D8E21: add     r12, rax
 * 00000001402D8E24: cmp     r12, r13
 * 00000001402D8E27: jnz     short loc_1402D8DD0
 * 00000001402D8E29: mov     cr8, r14
 * 00000001402D8E2D: xor     edx, edx
 * 00000001402D8E2F: mov     r15, [rbp+2250h+var_2250]
 * 00000001402D8E33: mov     eax, 40h ; '@'
 * 00000001402D8E38: add     [rsi+6C8h], eax
 * 00000001402D8E3E: mov     r9, [rbp+2250h+var_2248]
 * 00000001402D8E42: mov     r12, [rbp+2250h+var_21C0]
 * 00000001402D8E49: lea     ecx, [rax-3Fh]
 * 00000001402D8E4C: mov     eax, 0Ch
 * 00000001402D8E51: add     r15, rcx
 * 00000001402D8E54: add     r9, rax
 * 00000001402D8E57: mov     [rbp+2250h+var_2250], r15
 * 00000001402D8E5B: add     rdi, rax
 * 00000001402D8E5E: mov     [rbp+2250h+var_2248], r9
 * 00000001402D8E62: cmp     r9, [rbp+2250h+var_2198]
 * 00000001402D8E69: jnb     short loc_1402D8E7B
 * 00000001402D8E6B: mov     eax, [r12]
 * 00000001402D8E6F: cmp     [rsi+6C8h], eax
 * 00000001402D8E75: jl      loc_1402D8C36
 * 00000001402D8E7B: sub     rdi, [rbp+2250h+var_2208]
 * 00000001402D8E7F: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001402D8E89: mov     r11d, [rbp+2250h+var_21D0]
 * 00000001402D8E90: mov     r10, [rbp+2250h+var_21B0]
 * 00000001402D8E97: imul    rdi
 * 00000001402D8E9A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D8EA1: sar     rdx, 1
 * 00000001402D8EA4: mov     rax, rdx
 * 00000001402D8EA7: shr     rax, 3Fh
 * 00000001402D8EAB: add     rdx, rax
 * 00000001402D8EAE: mov     r8d, edx
 * 00000001402D8EB1: mov     [rsi+6C4h], edx
 * 00000001402D8EB7: mov     rdx, [rbp+2250h+var_21E0]
 * 00000001402D8EBB: cmp     r8d, r11d
 * 00000001402D8EBE: jb      loc_1402D3375
 * 00000001402D8EC4: mov     eax, [rsi+6CCh]
 * 00000001402D8ECA: cmp     [rsi+6C8h], eax
 * 00000001402D8ED0: jge     loc_1402D3375
 * 00000001402D8ED6: sub     r8d, r10d
 * 00000001402D8ED9: add     r8d, ecx
 * 00000001402D8EDC: lea     rcx, [r8+r8*2]
 * 00000001402D8EE0: lea     rcx, [rdx+rcx*8]
 * 00000001402D8EE4: mov     edx, 0Ch
 * 00000001402D8EE9: mov     [rbp+2250h+var_2208], rcx
 * 00000001402D8EED: mov     rdi, [rbp+2250h+var_2240]
 * 00000001402D8EF1: lea     r12, [rcx+8]
 * 00000001402D8EF5: mov     eax, 2
 * 00000001402D8EFA: mov     [rbp+2250h+var_2248], r12
 * 00000001402D8EFE: mov     [rbp+2250h+var_2250], rax
 * 00000001402D8F02: xor     r15d, r15d
 * 00000001402D8F05: lea     ecx, [rax-1]
 * 00000001402D8F08: cmp     [r12], r15d
 * 00000001402D8F0C: jl      loc_1402D9194
 * 00000001402D8F12: mov     eax, [r12-8]
 * 00000001402D8F17: mov     r8d, [r12-4]
 * 00000001402D8F1C: mov     r13d, eax
 * 00000001402D8F1F: add     r13, [rdi+18h]
 * 00000001402D8F23: sub     r8d, eax
 * 00000001402D8F26: add     [rsi+6C8h], r8d
 * 00000001402D8F2D: mov     r9, r13
 * 00000001402D8F30: mov     r11d, [rsi+6B4h]
 * 00000001402D8F37: mov     rax, r13
 * 00000001402D8F3A: mov     r14, [rsi+6B8h]
 * 00000001402D8F41: lea     rcx, [r8+r13]
 * 00000001402D8F45: mov     [rbp+2250h+var_2198], r13
 * 00000001402D8F4C: mov     r15d, r8d
 * 00000001402D8F4F: cmp     r13, rcx
 * 00000001402D8F52: jnb     short loc_1402D8F64
 * 00000001402D8F54: mov     edx, 40h ; '@'
 * 00000001402D8F59: prefetchnta byte ptr [rax]
 * 00000001402D8F5C: add     rax, rdx
 * 00000001402D8F5F: cmp     rax, rcx
 * 00000001402D8F62: jb      short loc_1402D8F59
 * 00000001402D8F64: mov     r10d, r8d
 * 00000001402D8F67: mov     rbx, r14
 * 00000001402D8F6A: shr     r10d, 7
 * 00000001402D8F6E: test    r10d, r10d
 * 00000001402D8F71: jz      short loc_1402D8FE2
 * 00000001402D8F73: mov     r12, 7010008004002001h
 * 00000001402D8F7D: mov     edx, 8
 * 00000001402D8F82: lea     esi, [rdx-7]
 * 00000001402D8F85: mov     rax, [r9]
 * 00000001402D8F88: mov     ecx, r11d
 * 00000001402D8F8B: xor     rax, rbx
 * 00000001402D8F8E: mov     rbx, [r9+8]
 * 00000001402D8F92: rol     rax, cl
 * 00000001402D8F95: add     r9, 10h
 * 00000001402D8F99: xor     rbx, rax
 * 00000001402D8F9C: rol     rbx, cl
 * 00000001402D8F9F: sub     rdx, rsi
 * 00000001402D8FA2: jnz     short loc_1402D8F85
 * 00000001402D8FA4: mov     rcx, r9
 * 00000001402D8FA7: sub     rcx, r13
 * 00000001402D8FAA: xor     rcx, r14
 * 00000001402D8FAD: mov     rax, rcx
 * 00000001402D8FB0: rol     rax, 11h
 * 00000001402D8FB4: xor     rcx, rax
 * 00000001402D8FB7: mov     rax, r12
 * 00000001402D8FBA: mul     rcx
 * 00000001402D8FBD: xor     eax, edx
 * 00000001402D8FBF: mov     [rbp+2250h+var_1C70], rdx
 * 00000001402D8FC6: xor     r11d, eax
 * 00000001402D8FC9: mov     rax, rsi
 * 00000001402D8FCC: and     r11d, 3Fh
 * 00000001402D8FD0: cmovz   r11d, eax
 * 00000001402D8FD4: add     r10d, 0FFFFFFFFh
 * 00000001402D8FD8: jnz     short loc_1402D8F7D
 * 00000001402D8FDA: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D8FDE: mov     r12, [rbp+2250h+var_2248]
 * 00000001402D8FE2: and     r8d, 7Fh
 * 00000001402D8FE6: mov     r10d, 1
 * 00000001402D8FEC: cmp     r8d, 8
 * 00000001402D8FF0: jb      short loc_1402D900F
 * 00000001402D8FF2: mov     edx, r8d
 * 00000001402D8FF5: shr     rdx, 3
 * 00000001402D8FF9: xor     rbx, [r9]
 * 00000001402D8FFC: mov     ecx, r11d
 * 00000001402D8FFF: rol     rbx, cl
 * 00000001402D9002: add     r9, 8
 * 00000001402D9006: add     r8d, 0FFFFFFF8h
 * 00000001402D900A: sub     rdx, r10
 * 00000001402D900D: jnz     short loc_1402D8FF9
 * 00000001402D900F: test    r8d, r8d
 * 00000001402D9012: jz      short loc_1402D902A
 * 00000001402D9014: movzx   eax, byte ptr [r9]
 * 00000001402D9018: mov     ecx, r11d
 * 00000001402D901B: xor     rbx, rax
 * 00000001402D901E: add     r9, r10
 * 00000001402D9021: rol     rbx, cl
 * 00000001402D9024: add     r8d, 0FFFFFFFFh
 * 00000001402D9028: jnz     short loc_1402D9014
 * 00000001402D902A: mov     rax, rbx
 * 00000001402D902D: jmp     loc_1402D90C0
 * 00000001402D9032: mov     cr8, r14
 * 00000001402D9036: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D903A: mov     edx, dword ptr [rbp+2250h+var_2218]
 * 00000001402D903D: mov     r13, [rbp+2250h+var_2230]
 * 00000001402D9041: mov     cl, [rax]
 * 00000001402D9043: movzx   eax, cl
 * 00000001402D9046: mov     ecx, [rsi+790h]
 * 00000001402D904C: and     eax, 7Fh
 * 00000001402D904F: test    ecx, ecx
 * 00000001402D9051: jnz     short loc_1402D9069
 * 00000001402D9053: mov     ecx, edx
 * 00000001402D9055: xor     rcx, rax
 * 00000001402D9058: mov     rax, [rsi+588h]
 * 00000001402D905F: mov     [rax+18h], rcx
 * 00000001402D9063: mov     ecx, [rsi+790h]
 * 00000001402D9069: xor     edx, edx
 * 00000001402D906B: test    ecx, ecx
 * 00000001402D906D: jnz     loc_1402D8E2F
 * 00000001402D9073: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402D9077: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D9081: add     rax, rsi
 * 00000001402D9084: mov     [rsi+798h], rax
 * 00000001402D908B: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9095: add     rax, rcx
 * 00000001402D9098: mov     [rsi+7A0h], rax
 * 00000001402D909F: movsxd  rax, dword ptr [rcx]
 * 00000001402D90A2: mov     [rsi+7A8h], rax
 * 00000001402D90A9: lea     eax, [rdx+1]
 * 00000001402D90AC: mov     [rsi+7B0h], r13
 * 00000001402D90B3: mov     [rsi+790h], eax
 * 00000001402D90B9: jmp     loc_1402D8E2F
 * 00000001402D90BE: xor     ebx, eax
 * 00000001402D90C0: shr     rax, 1Fh
 * 00000001402D90C4: test    rax, rax
 * 00000001402D90C7: jnz     short loc_1402D90BE
 * 00000001402D90C9: mov     ecx, [r12]
 * 00000001402D90CD: btr     ebx, 1Fh
 * 00000001402D90D1: mov     eax, ecx
 * 00000001402D90D3: btr     eax, 1Fh
 * 00000001402D90D7: cmp     ebx, eax
 * 00000001402D90D9: jz      loc_1402D9185
 * 00000001402D90DF: test    r15, r15
 * 00000001402D90E2: jz      loc_1402D91FD
 * 00000001402D90E8: mov     eax, [rsi+82Ch]
 * 00000001402D90EE: mov     edx, 40h ; '@'
 * 00000001402D90F3: test    dl, al
 * 00000001402D90F5: jz      loc_1402D91FD
 * 00000001402D90FB: mov     r12, cr8
 * 00000001402D90FF: lea     eax, [rdx-3Eh]
 * 00000001402D9102: mov     cr8, rax
 * 00000001402D9106: mov     r14, r13
 * 00000001402D9109: lea     rax, [r13-1]
 * 00000001402D910D: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D9114: add     rax, r15
 * 00000001402D9117: mov     ecx, 0FFFh
 * 00000001402D911C: or      rax, rcx
 * 00000001402D911F: mov     [rbp+2250h+var_2230], rax
 * 00000001402D9123: lea     r13, [r14-1]
 * 00000001402D9127: movzx   r15d, r12b
 * 00000001402D912B: mov     rax, [rsi+468h]
 * 00000001402D9132: xor     edx, edx
 * 00000001402D9134: mov     rcx, r14
 * 00000001402D9137: call    KeGuardDispatchICall
 * 00000001402D913C: cmp     eax, 0C000022Dh
 * 00000001402D9141: jnz     short loc_1402D9167
 * 00000001402D9143: mov     eax, 1
 * 00000001402D9148: cmp     r12b, al
 * 00000001402D914B: ja      short loc_1402D916B
 * 00000001402D914D: movzx   r15d, r12b
 * 00000001402D9151: mov     cr8, r15
 * 00000001402D9155: mov     al, [r14]
 * 00000001402D9158: mov     rax, cr8
 * 00000001402D915C: mov     eax, 2
 * 00000001402D9161: mov     cr8, rax
 * 00000001402D9165: jmp     short loc_1402D912B
 * 00000001402D9167: test    eax, eax
 * 00000001402D9169: js      short loc_1402D91EA
 * 00000001402D916B: mov     r10d, 1000h
 * 00000001402D9171: add     r14, r10
 * 00000001402D9174: add     r13, r10
 * 00000001402D9177: cmp     r13, [rbp+2250h+var_2230]
 * 00000001402D917B: jnz     short loc_1402D9127
 * 00000001402D917D: mov     cr8, r15
 * 00000001402D9181: mov     r12, [rbp+2250h+var_2248]
 * 00000001402D9185: xor     r15d, r15d
 * 00000001402D9188: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D918C: mov     edx, 0Ch
 * 00000001402D9191: lea     ecx, [rdx-0Bh]
 * 00000001402D9194: add     r12, rdx
 * 00000001402D9197: sub     rax, rcx
 * 00000001402D919A: mov     [rbp+2250h+var_2248], r12
 * 00000001402D919E: mov     [rbp+2250h+var_2250], rax
 * 00000001402D91A2: jnz     loc_1402D8F08
 * 00000001402D91A8: mov     rcx, [rbp+2250h+var_2208]
 * 00000001402D91AC: mov     eax, 1
 * 00000001402D91B1: add     [rsi+6C4h], eax
 * 00000001402D91B7: add     rcx, 18h
 * 00000001402D91BB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D91C2: mov     [rbp+2250h+var_2208], rcx
 * 00000001402D91C6: cmp     rcx, [rbp+2250h+var_2188]
 * 00000001402D91CD: jz      loc_1402D8D57
 * 00000001402D91D3: mov     eax, [rsi+6CCh]
 * 00000001402D91D9: cmp     [rsi+6C8h], eax
 * 00000001402D91DF: jl      loc_1402D8EED
 * 00000001402D91E5: jmp     loc_1402D3378
 * 00000001402D91EA: mov     cr8, r15
 * 00000001402D91EE: mov     r12, [rbp+2250h+var_2248]
 * 00000001402D91F2: mov     r13, [rbp+2250h+var_2198]
 * 00000001402D91F9: mov     ecx, [r12]
 * 00000001402D91FD: mov     eax, ecx
 * 00000001402D91FF: xor     r15d, r15d
 * 00000001402D9202: mov     ecx, [rsi+790h]
 * 00000001402D9208: btr     eax, 1Fh
 * 00000001402D920C: test    ecx, ecx
 * 00000001402D920E: jnz     loc_1402D9188
 * 00000001402D9214: mov     ecx, ebx
 * 00000001402D9216: xor     rcx, rax
 * 00000001402D9219: mov     rax, [rsi+588h]
 * 00000001402D9220: mov     [rax+18h], rcx
 * 00000001402D9224: mov     ecx, [rsi+790h]
 * 00000001402D922A: test    ecx, ecx
 * 00000001402D922C: jnz     loc_1402D9188
 * 00000001402D9232: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D923C: add     rax, rsi
 * 00000001402D923F: mov     [rsi+798h], rax
 * 00000001402D9246: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9250: add     rax, rdi
 * 00000001402D9253: mov     [rsi+7A0h], rax
 * 00000001402D925A: movsxd  rax, dword ptr [rdi]
 * 00000001402D925D: mov     [rsi+7A8h], rax
 * 00000001402D9264: lea     eax, [rcx+1]
 * 00000001402D9267: mov     [rsi+7B0h], r13
 * 00000001402D926E: mov     [rsi+790h], eax
 * 00000001402D9274: jmp     loc_1402D9188
 * 00000001402D9279: mov     r14, [r13+8]
 * 00000001402D927D: mov     r8d, [r13+10h]
 * 00000001402D9281: mov     r9, r14
 * 00000001402D9284: add     [rsi+6C8h], r8d
 * 00000001402D928B: mov     rax, r14
 * 00000001402D928E: mov     r11d, [rsi+6B4h]
 * 00000001402D9295: mov     r15, [rsi+6B8h]
 * 00000001402D929C: lea     rcx, [r14+r8]
 * 00000001402D92A0: cmp     r14, rcx
 * 00000001402D92A3: jnb     short loc_1402D92B5
 * 00000001402D92A5: mov     edx, 40h ; '@'
 * 00000001402D92AA: prefetchnta byte ptr [rax]
 * 00000001402D92AD: add     rax, rdx
 * 00000001402D92B0: cmp     rax, rcx
 * 00000001402D92B3: jb      short loc_1402D92AA
 * 00000001402D92B5: mov     r10d, r8d
 * 00000001402D92B8: mov     rbx, r15
 * 00000001402D92BB: shr     r10d, 7
 * 00000001402D92BF: mov     r12d, 1
 * 00000001402D92C5: test    r10d, r10d
 * 00000001402D92C8: jz      short loc_1402D932F
 * 00000001402D92CA: mov     rsi, 7010008004002001h
 * 00000001402D92D4: mov     edx, 8
 * 00000001402D92D9: mov     rax, [r9]
 * 00000001402D92DC: mov     ecx, r11d
 * 00000001402D92DF: xor     rax, rbx
 * 00000001402D92E2: mov     rbx, [r9+8]
 * 00000001402D92E6: rol     rax, cl
 * 00000001402D92E9: add     r9, 10h
 * 00000001402D92ED: xor     rbx, rax
 * 00000001402D92F0: rol     rbx, cl
 * 00000001402D92F3: sub     rdx, r12
 * 00000001402D92F6: jnz     short loc_1402D92D9
 * 00000001402D92F8: mov     rcx, r9
 * 00000001402D92FB: sub     rcx, r14
 * 00000001402D92FE: xor     rcx, r15
 * 00000001402D9301: mov     rax, rcx
 * 00000001402D9304: rol     rax, 11h
 * 00000001402D9308: xor     rcx, rax
 * 00000001402D930B: mov     rax, rsi
 * 00000001402D930E: mul     rcx
 * 00000001402D9311: xor     eax, edx
 * 00000001402D9313: mov     [rbp+2250h+var_1C68], rdx
 * 00000001402D931A: xor     r11d, eax
 * 00000001402D931D: and     r11d, 3Fh
 * 00000001402D9321: cmovz   r11d, r12d
 * 00000001402D9325: add     r10d, 0FFFFFFFFh
 * 00000001402D9329: jnz     short loc_1402D92D4
 * 00000001402D932B: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D932F: and     r8d, 7Fh
 * 00000001402D9333: cmp     r8d, 8
 * 00000001402D9337: jb      short loc_1402D9356
 * 00000001402D9339: mov     edx, r8d
 * 00000001402D933C: shr     rdx, 3
 * 00000001402D9340: xor     rbx, [r9]
 * 00000001402D9343: mov     ecx, r11d
 * 00000001402D9346: rol     rbx, cl
 * 00000001402D9349: add     r9, 8
 * 00000001402D934D: add     r8d, 0FFFFFFF8h
 * 00000001402D9351: sub     rdx, r12
 * 00000001402D9354: jnz     short loc_1402D9340
 * 00000001402D9356: xor     r15d, r15d
 * 00000001402D9359: test    r8d, r8d
 * 00000001402D935C: jz      short loc_1402D9374
 * 00000001402D935E: movzx   eax, byte ptr [r9]
 * 00000001402D9362: mov     ecx, r11d
 * 00000001402D9365: xor     rbx, rax
 * 00000001402D9368: add     r9, r12
 * 00000001402D936B: rol     rbx, cl
 * 00000001402D936E: add     r8d, 0FFFFFFFFh
 * 00000001402D9372: jnz     short loc_1402D935E
 * 00000001402D9374: mov     rax, rbx
 * 00000001402D9377: jmp     short loc_1402D937B
 * 00000001402D9379: xor     ebx, eax
 * 00000001402D937B: shr     rax, 1Fh
 * 00000001402D937F: test    rax, rax
 * 00000001402D9382: jnz     short loc_1402D9379
 * 00000001402D9384: btr     ebx, 1Fh
 * 00000001402D9388: mov     r12d, r15d
 * 00000001402D938B: cmp     ebx, [r13+14h]
 * 00000001402D938F: jz      loc_1402D9475
 * 00000001402D9395: cmp     [r13+0], r15d
 * 00000001402D9399: jnz     short loc_1402D93A8
 * 00000001402D939B: cmp     [r13+18h], r15d
 * 00000001402D939F: mov     eax, 1
 * 00000001402D93A4: cmovnz  r12d, eax
 * 00000001402D93A8: mov     ecx, [r13+10h]
 * 00000001402D93AC: mov     rdx, [r13+8]
 * 00000001402D93B0: test    rcx, rcx
 * 00000001402D93B3: jz      loc_1402D9612
 * 00000001402D93B9: mov     eax, [rsi+82Ch]
 * 00000001402D93BF: mov     r8d, 40h ; '@'
 * 00000001402D93C5: test    r8b, al
 * 00000001402D93C8: jz      loc_1402D9612
 * 00000001402D93CE: mov     r13, cr8
 * 00000001402D93D2: lea     eax, [r8-3Eh]
 * 00000001402D93D6: mov     cr8, rax
 * 00000001402D93DA: lea     rax, [rcx-1]
 * 00000001402D93DE: mov     r14, rdx
 * 00000001402D93E1: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D93E8: add     rax, rdx
 * 00000001402D93EB: mov     ecx, 0FFFh
 * 00000001402D93F0: or      rax, rcx
 * 00000001402D93F3: mov     [rbp+2250h+var_2230], rax
 * 00000001402D93F7: lea     rax, [r14-1]
 * 00000001402D93FB: mov     [rbp+2250h+var_2250], rax
 * 00000001402D93FF: movzx   r15d, r13b
 * 00000001402D9403: mov     rax, [rsi+468h]
 * 00000001402D940A: xor     edx, edx
 * 00000001402D940C: mov     rcx, r14
 * 00000001402D940F: call    KeGuardDispatchICall
 * 00000001402D9414: cmp     eax, 0C000022Dh
 * 00000001402D9419: jnz     short loc_1402D9448
 * 00000001402D941B: test    r12d, r12d
 * 00000001402D941E: jnz     loc_1402D9607
 * 00000001402D9424: lea     eax, [r12+1]
 * 00000001402D9429: cmp     r13b, al
 * 00000001402D942C: ja      short loc_1402D9450
 * 00000001402D942E: movzx   r15d, r13b
 * 00000001402D9432: mov     cr8, r15
 * 00000001402D9436: mov     al, [r14]
 * 00000001402D9439: mov     rax, cr8
 * 00000001402D943D: lea     eax, [r12+2]
 * 00000001402D9442: mov     cr8, rax
 * 00000001402D9446: jmp     short loc_1402D9403
 * 00000001402D9448: test    eax, eax
 * 00000001402D944A: js      loc_1402D9607
 * 00000001402D9450: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D9454: mov     r10d, 1000h
 * 00000001402D945A: add     rax, r10
 * 00000001402D945D: add     r14, r10
 * 00000001402D9460: mov     [rbp+2250h+var_2250], rax
 * 00000001402D9464: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402D9468: jnz     short loc_1402D93FF
 * 00000001402D946A: mov     cr8, r15
 * 00000001402D946E: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D9472: xor     r15d, r15d
 * 00000001402D9475: mov     ecx, 1
 * 00000001402D947A: mov     eax, [r13+10h]
 * 00000001402D947E: mov     r12, [r13+8]
 * 00000001402D9482: shr     eax, 4
 * 00000001402D9485: mov     [rbp+2250h+var_2250], r12
 * 00000001402D9489: test    eax, eax
 * 00000001402D948B: jz      loc_1402D3378
 * 00000001402D9491: mov     edi, eax
 * 00000001402D9493: mov     [rbp+2250h+var_2248], rdi
 * 00000001402D9497: mov     rax, [r12]
 * 00000001402D949B: lea     rdx, [rbp+2250h+var_1F10]
 * 00000001402D94A2: mov     rbx, r13
 * 00000001402D94A5: mov     r13d, ecx
 * 00000001402D94A8: mov     r15, [rax]
 * 00000001402D94AB: xor     eax, eax
 * 00000001402D94AD: mov     [rbp+2250h+var_1F10], rax
 * 00000001402D94B4: mov     rcx, r15
 * 00000001402D94B7: mov     rax, [rsi+310h]
 * 00000001402D94BE: call    KeGuardDispatchICall
 * 00000001402D94C3: mov     r14, rax
 * 00000001402D94C6: test    rax, rax
 * 00000001402D94C9: jz      loc_1402D95E4
 * 00000001402D94CF: mov     edi, 6
 * 00000001402D94D4: xor     r12d, r12d
 * 00000001402D94D7: mov     rax, [rsi+208h]
 * 00000001402D94DE: lea     rdx, [rbp+2250h+var_1C60]
 * 00000001402D94E5: mov     rcx, r14
 * 00000001402D94E8: inc     r13d
 * 00000001402D94EB: call    KeGuardDispatchICall
 * 00000001402D94F0: test    rax, rax
 * 00000001402D94F3: jnz     loc_1402D95BA
 * 00000001402D94F9: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D9503: lea     r9d, [rax+1]
 * 00000001402D9507: jz      short loc_1402D9546
 * 00000001402D9509: mov     rcx, [rsi+908h]
 * 00000001402D9510: lea     edx, [rax+30h]
 * 00000001402D9513: mov     r8, rdi
 * 00000001402D9516: mov     rax, [rbx]
 * 00000001402D9519: add     edx, 0FFFFFFF8h
 * 00000001402D951C: mov     [rcx], rax
 * 00000001402D951F: add     rbx, 8
 * 00000001402D9523: add     rcx, 8
 * 00000001402D9527: sub     r8, r9
 * 00000001402D952A: jnz     short loc_1402D9516
 * 00000001402D952C: test    edx, edx
 * 00000001402D952E: jz      short loc_1402D953F
 * 00000001402D9530: mov     al, [rbx]
 * 00000001402D9532: add     rbx, r9
 * 00000001402D9535: mov     [rcx], al
 * 00000001402D9537: add     rcx, r9
 * 00000001402D953A: add     edx, 0FFFFFFFFh
 * 00000001402D953D: jnz     short loc_1402D9530
 * 00000001402D953F: mov     rbx, [rsi+908h]
 * 00000001402D9546: mov     [rbx+18h], r14
 * 00000001402D954A: mov     [rbx+20h], r15
 * 00000001402D954E: mov     rax, [rsi+588h]
 * 00000001402D9555: mov     [rax], rbx
 * 00000001402D9558: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D955F: mov     rax, [rsi+588h]
 * 00000001402D9566: mov     [rax+8], r14
 * 00000001402D956A: mov     dword ptr [rax+14h], 1000h
 * 00000001402D9571: cmp     [rsi+790h], r12d
 * 00000001402D9578: jnz     short loc_1402D95BA
 * 00000001402D957A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D9584: add     rax, rsi
 * 00000001402D9587: mov     [rsi+798h], rax
 * 00000001402D958E: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9598: add     rax, rbx
 * 00000001402D959B: mov     [rsi+7A0h], rax
 * 00000001402D95A2: movsxd  rax, dword ptr [rbx]
 * 00000001402D95A5: mov     [rsi+7A8h], rax
 * 00000001402D95AC: mov     [rsi+7B0h], rdi
 * 00000001402D95B3: mov     [rsi+790h], r9d
 * 00000001402D95BA: mov     rax, [rsi+310h]
 * 00000001402D95C1: lea     rdx, [rbp+2250h+var_1F10]
 * 00000001402D95C8: mov     rcx, r15
 * 00000001402D95CB: call    KeGuardDispatchICall
 * 00000001402D95D0: mov     r14, rax
 * 00000001402D95D3: test    rax, rax
 * 00000001402D95D6: jnz     loc_1402D94D7
 * 00000001402D95DC: mov     r12, [rbp+2250h+var_2250]
 * 00000001402D95E0: mov     rdi, [rbp+2250h+var_2248]
 * 00000001402D95E4: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D95E8: add     r12, 10h
 * 00000001402D95EC: mov     ecx, 1
 * 00000001402D95F1: mov     [rbp+2250h+var_2250], r12
 * 00000001402D95F5: sub     rdi, rcx
 * 00000001402D95F8: mov     [rbp+2250h+var_2248], rdi
 * 00000001402D95FC: jnz     loc_1402D9497
 * 00000001402D9602: jmp     loc_1402D41D3
 * 00000001402D9607: mov     cr8, r15
 * 00000001402D960B: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D960F: xor     r15d, r15d
 * 00000001402D9612: mov     eax, [rsi+790h]
 * 00000001402D9618: mov     edx, [r13+14h]
 * 00000001402D961C: test    eax, eax
 * 00000001402D961E: jnz     short loc_1402D9636
 * 00000001402D9620: mov     rax, [rsi+588h]
 * 00000001402D9627: mov     ecx, ebx
 * 00000001402D9629: xor     rcx, rdx
 * 00000001402D962C: mov     [rax+18h], rcx
 * 00000001402D9630: mov     eax, [rsi+790h]
 * 00000001402D9636: mov     rcx, [r13+8]
 * 00000001402D963A: test    eax, eax
 * 00000001402D963C: jnz     loc_1402D9475
 * 00000001402D9642: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D964C: add     rax, rsi
 * 00000001402D964F: mov     [rsi+798h], rax
 * 00000001402D9656: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9660: add     rax, r13
 * 00000001402D9663: mov     [rsi+7A0h], rax
 * 00000001402D966A: movsxd  rax, dword ptr [r13+0]
 * 00000001402D966E: mov     [rsi+7A8h], rax
 * 00000001402D9675: mov     [rsi+7B0h], rcx
 * 00000001402D967C: mov     ecx, 1
 * 00000001402D9681: mov     [rsi+790h], ecx
 * 00000001402D9687: jmp     loc_1402D947A
 * 00000001402D968C: mov     r8d, [r13+10h]
 * 00000001402D9690: xor     r15d, r15d
 * 00000001402D9693: test    r8d, r8d
 * 00000001402D9696: jnz     loc_1402D9C31
 * 00000001402D969C: lea     rax, [r13+30h]
 * 00000001402D96A0: xor     r9d, r9d
 * 00000001402D96A3: mov     [rbp+2250h+var_1E08], rax
 * 00000001402D96AA: lea     rcx, [rbp+2250h+var_1E10]
 * 00000001402D96B1: movzx   eax, word ptr [r13+28h]
 * 00000001402D96B6: xor     r8d, r8d
 * 00000001402D96B9: mov     [rbp+2250h+var_1E10], ax
 * 00000001402D96C0: xor     edx, edx
 * 00000001402D96C2: mov     [rbp+2250h+var_1E0E], ax
 * 00000001402D96C9: lea     rax, [rbp+2250h+var_20F0]
 * 00000001402D96D0: mov     [rsp+11A0h+var_1168], rax
 * 00000001402D96D5: mov     rax, [rsi+508h]
 * 00000001402D96DC: mov     [rsp+11A0h+var_1170], r15
 * 00000001402D96E1: mov     byte ptr [rsp+11A0h+var_1178], r15b
 * 00000001402D96E6: mov     [rsp+11A0h+BugCheckParameter4], rax
 * 00000001402D96EB: mov     rax, [rsi+1E8h]
 * 00000001402D96F2: call    KeGuardDispatchICall
 * 00000001402D96F7: test    eax, eax
 * 00000001402D96F9: js      loc_1402D3378
 * 00000001402D96FF: mov     rax, [rbp+2250h+var_20F0]
 * 00000001402D9706: mov     ecx, [rax+10h]
 * 00000001402D9709: lea     eax, [r15+10h]
 * 00000001402D970D: test    al, cl
 * 00000001402D970F: jnz     short loc_1402D9729
 * 00000001402D9711: mov     rcx, [rbp+2250h+var_20F0]
 * 00000001402D9718: mov     rax, [rsi+1E0h]
 * 00000001402D971F: call    KeGuardDispatchICall
 * 00000001402D9724: jmp     loc_1402D3378
 * 00000001402D9729: mov     rcx, [rsi+1E8h]
 * 00000001402D9730: lea     r8, [rbp+2250h+var_1E48]
 * 00000001402D9737: mov     rax, [rsi+200h]
 * 00000001402D973E: lea     rdx, [rbp+2250h+var_1FE0]
 * 00000001402D9745: call    KeGuardDispatchICall
 * 00000001402D974A: test    rax, rax
 * 00000001402D974D: jz      short loc_1402D976F
 * 00000001402D974F: mov     rax, [rsi+1F8h]
 * 00000001402D9756: mov     rcx, [rbp+2250h+var_1FE0]
 * 00000001402D975D: call    KeGuardDispatchICall
 * 00000001402D9762: test    rax, rax
 * 00000001402D9765: jz      short loc_1402D976F
 * 00000001402D9767: mov     r14d, [rax+50h]
 * 00000001402D976B: mov     [rbp+2250h+var_2228], r14d
 * 00000001402D976F: mov     rcx, [r13+18h]
 * 00000001402D9773: lea     r8, [rbp+2250h+var_1DEC]
 * 00000001402D977A: mov     rax, [rsi+200h]
 * 00000001402D9781: lea     rdx, [rbp+2250h+var_1FD8]
 * 00000001402D9788: call    KeGuardDispatchICall
 * 00000001402D978D: test    rax, rax
 * 00000001402D9790: jz      short loc_1402D97B3
 * 00000001402D9792: mov     rax, [rsi+1F8h]
 * 00000001402D9799: mov     rcx, [rbp+2250h+var_1FD8]
 * 00000001402D97A0: call    KeGuardDispatchICall
 * 00000001402D97A5: test    rax, rax
 * 00000001402D97A8: jz      short loc_1402D97B3
 * 00000001402D97AA: mov     ebx, [rax+50h]
 * 00000001402D97AD: mov     [rbp+2250h+var_2190], ebx
 * 00000001402D97B3: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D97BD: jnz     short loc_1402D97D6
 * 00000001402D97BF: mov     rax, [rbp+2250h+var_20F0]
 * 00000001402D97C6: add     rax, 70h ; 'p'
 * 00000001402D97CA: mov     [r13+8], rax
 * 00000001402D97CE: mov     dword ptr [r13+10h], 0E0h
 * 00000001402D97D6: mov     rcx, [rbp+2250h+var_20F0]
 * 00000001402D97DD: mov     dl, r15b
 * 00000001402D97E0: mov     r10, [rbp+2250h+var_1FE0]
 * 00000001402D97E7: mov     r11, [rbp+2250h+var_1FD8]
 * 00000001402D97EE: mov     r12d, r14d
 * 00000001402D97F1: mov     r14d, 1
 * 00000001402D97F7: movzx   eax, dl
 * 00000001402D97FA: mov     r9, [rcx+rax*8+70h]
 * 00000001402D97FF: test    r12, r12
 * 00000001402D9802: jz      short loc_1402D9815
 * 00000001402D9804: lea     rax, [r10-1]
 * 00000001402D9808: add     rax, r12
 * 00000001402D980B: cmp     r9, r10
 * 00000001402D980E: jb      short loc_1402D9815
 * 00000001402D9810: cmp     r9, rax
 * 00000001402D9813: jbe     short loc_1402D9838
 * 00000001402D9815: mov     eax, ebx
 * 00000001402D9817: test    ebx, ebx
 * 00000001402D9819: jz      loc_1402D9B76
 * 00000001402D981F: lea     r8, [r11-1]
 * 00000001402D9823: add     r8, rax
 * 00000001402D9826: cmp     r9, r11
 * 00000001402D9829: jb      loc_1402D9B76
 * 00000001402D982F: cmp     r9, r8
 * 00000001402D9832: ja      loc_1402D9B76
 * 00000001402D9838: add     dl, r14b
 * 00000001402D983B: cmp     dl, 1Ch
 * 00000001402D983E: jb      short loc_1402D97F7
 * 00000001402D9840: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D984A: jnz     loc_1402D9718
 * 00000001402D9850: mov     r14, [r13+8]
 * 00000001402D9854: mov     r9d, [r13+10h]
 * 00000001402D9858: mov     r10, r14
 * 00000001402D985B: add     [rsi+6C8h], r9d
 * 00000001402D9862: mov     rax, r14
 * 00000001402D9865: mov     r11d, [rsi+6B4h]
 * 00000001402D986C: mov     r15, [rsi+6B8h]
 * 00000001402D9873: lea     rcx, [r14+r9]
 * 00000001402D9877: cmp     r14, rcx
 * 00000001402D987A: jnb     short loc_1402D988C
 * 00000001402D987C: mov     edx, 40h ; '@'
 * 00000001402D9881: prefetchnta byte ptr [rax]
 * 00000001402D9884: add     rax, rdx
 * 00000001402D9887: cmp     rax, rcx
 * 00000001402D988A: jb      short loc_1402D9881
 * 00000001402D988C: mov     ebx, r9d
 * 00000001402D988F: xor     edx, edx
 * 00000001402D9891: shr     ebx, 7
 * 00000001402D9894: mov     r8, r15
 * 00000001402D9897: test    ebx, ebx
 * 00000001402D9899: jz      short loc_1402D9906
 * 00000001402D989B: lea     esi, [rdx+1]
 * 00000001402D989E: mov     rdi, 7010008004002001h
 * 00000001402D98A8: mov     eax, 8
 * 00000001402D98AD: xor     r8, [r10]
 * 00000001402D98B0: mov     ecx, r11d
 * 00000001402D98B3: rol     r8, cl
 * 00000001402D98B6: xor     r8, [r10+8]
 * 00000001402D98BA: add     r10, 10h
 * 00000001402D98BE: rol     r8, cl
 * 00000001402D98C1: sub     rax, rsi
 * 00000001402D98C4: jnz     short loc_1402D98AD
 * 00000001402D98C6: mov     rcx, r10
 * 00000001402D98C9: sub     rcx, r14
 * 00000001402D98CC: xor     rcx, r15
 * 00000001402D98CF: mov     rax, rcx
 * 00000001402D98D2: rol     rax, 11h
 * 00000001402D98D6: xor     rcx, rax
 * 00000001402D98D9: mov     rax, rdi
 * 00000001402D98DC: mul     rcx
 * 00000001402D98DF: xor     r11d, eax
 * 00000001402D98E2: mov     [rbp+2250h+var_1C58], rdx
 * 00000001402D98E9: xor     r11d, edx
 * 00000001402D98EC: and     r11d, 3Fh
 * 00000001402D98F0: cmovz   r11d, esi
 * 00000001402D98F4: add     ebx, 0FFFFFFFFh
 * 00000001402D98F7: jnz     short loc_1402D98A8
 * 00000001402D98F9: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D98FD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D9904: xor     edx, edx
 * 00000001402D9906: and     r9d, 7Fh
 * 00000001402D990A: mov     ebx, 1
 * 00000001402D990F: cmp     r9d, 8
 * 00000001402D9913: jb      short loc_1402D9932
 * 00000001402D9915: mov     eax, r9d
 * 00000001402D9918: shr     rax, 3
 * 00000001402D991C: xor     r8, [r10]
 * 00000001402D991F: mov     ecx, r11d
 * 00000001402D9922: rol     r8, cl
 * 00000001402D9925: add     r10, 8
 * 00000001402D9929: add     r9d, 0FFFFFFF8h
 * 00000001402D992D: sub     rax, rbx
 * 00000001402D9930: jnz     short loc_1402D991C
 * 00000001402D9932: test    r9d, r9d
 * 00000001402D9935: jz      short loc_1402D994D
 * 00000001402D9937: movzx   eax, byte ptr [r10]
 * 00000001402D993B: mov     ecx, r11d
 * 00000001402D993E: xor     r8, rax
 * 00000001402D9941: add     r10, rbx
 * 00000001402D9944: rol     r8, cl
 * 00000001402D9947: add     r9d, 0FFFFFFFFh
 * 00000001402D994B: jnz     short loc_1402D9937
 * 00000001402D994D: mov     rax, r8
 * 00000001402D9950: jmp     short loc_1402D9955
 * 00000001402D9952: xor     r8d, eax
 * 00000001402D9955: shr     rax, 1Fh
 * 00000001402D9959: test    rax, rax
 * 00000001402D995C: jnz     short loc_1402D9952
 * 00000001402D995E: btr     r8d, 1Fh
 * 00000001402D9963: mov     r10d, edx
 * 00000001402D9966: mov     [r13+14h], r8d
 * 00000001402D996A: mov     rax, [rbp+2250h+var_20F0]
 * 00000001402D9971: mov     r14, [rax+50h]
 * 00000001402D9975: test    r14, r14
 * 00000001402D9978: jz      loc_1402D99FE
 * 00000001402D997E: mov     r10d, [r14]
 * 00000001402D9981: mov     r8b, dl
 * 00000001402D9984: lea     r9d, [r10-8]
 * 00000001402D9988: shr     r9d, 3
 * 00000001402D998C: test    r9d, r9d
 * 00000001402D998F: jz      short loc_1402D99FE
 * 00000001402D9991: mov     r11, [rbp+2250h+var_1FE0]
 * 00000001402D9998: mov     rbx, [rbp+2250h+var_1FD8]
 * 00000001402D999F: mov     r15d, [rbp+2250h+var_2190]
 * 00000001402D99A6: movzx   eax, r8b
 * 00000001402D99AA: mov     rcx, [r14+rax*8+8]
 * 00000001402D99AF: test    rcx, rcx
 * 00000001402D99B2: jz      short loc_1402D99F1
 * 00000001402D99B4: test    r12, r12
 * 00000001402D99B7: jz      short loc_1402D99CA
 * 00000001402D99B9: lea     rax, [r11-1]
 * 00000001402D99BD: add     rax, r12
 * 00000001402D99C0: cmp     rcx, r11
 * 00000001402D99C3: jb      short loc_1402D99CA
 * 00000001402D99C5: cmp     rcx, rax
 * 00000001402D99C8: jbe     short loc_1402D99F1
 * 00000001402D99CA: mov     rax, r15
 * 00000001402D99CD: test    r15d, r15d
 * 00000001402D99D0: jz      loc_1402D9AF8
 * 00000001402D99D6: lea     rdx, [rbx-1]
 * 00000001402D99DA: add     rdx, rax
 * 00000001402D99DD: cmp     rcx, rbx
 * 00000001402D99E0: jb      loc_1402D9AF8
 * 00000001402D99E6: cmp     rcx, rdx
 * 00000001402D99E9: ja      loc_1402D9AF8
 * 00000001402D99EF: xor     edx, edx
 * 00000001402D99F1: add     r8b, 1
 * 00000001402D99F5: movzx   eax, r8b
 * 00000001402D99F9: cmp     eax, r9d
 * 00000001402D99FC: jb      short loc_1402D99A6
 * 00000001402D99FE: add     [rsi+6C8h], r10d
 * 00000001402D9A05: mov     r9, r14
 * 00000001402D9A08: mov     r11d, [rsi+6B4h]
 * 00000001402D9A0F: mov     rax, r14
 * 00000001402D9A12: mov     r15, [rsi+6B8h]
 * 00000001402D9A19: mov     ecx, r10d
 * 00000001402D9A1C: add     rcx, r14
 * 00000001402D9A1F: cmp     r14, rcx
 * 00000001402D9A22: jnb     short loc_1402D9A35
 * 00000001402D9A24: mov     r8d, 40h ; '@'
 * 00000001402D9A2A: prefetchnta byte ptr [rax]
 * 00000001402D9A2D: add     rax, r8
 * 00000001402D9A30: cmp     rax, rcx
 * 00000001402D9A33: jb      short loc_1402D9A2A
 * 00000001402D9A35: mov     ebx, r10d
 * 00000001402D9A38: mov     r8, r15
 * 00000001402D9A3B: shr     ebx, 7
 * 00000001402D9A3E: mov     r12d, 1
 * 00000001402D9A44: test    ebx, ebx
 * 00000001402D9A46: jz      short loc_1402D9AAE
 * 00000001402D9A48: mov     rdi, 7010008004002001h
 * 00000001402D9A52: mov     eax, 8
 * 00000001402D9A57: xor     r8, [r9]
 * 00000001402D9A5A: mov     ecx, r11d
 * 00000001402D9A5D: rol     r8, cl
 * 00000001402D9A60: xor     r8, [r9+8]
 * 00000001402D9A64: add     r9, 10h
 * 00000001402D9A68: rol     r8, cl
 * 00000001402D9A6B: sub     rax, r12
 * 00000001402D9A6E: jnz     short loc_1402D9A57
 * 00000001402D9A70: mov     rcx, r9
 * 00000001402D9A73: sub     rcx, r14
 * 00000001402D9A76: xor     rcx, r15
 * 00000001402D9A79: mov     rax, rcx
 * 00000001402D9A7C: rol     rax, 11h
 * 00000001402D9A80: xor     rcx, rax
 * 00000001402D9A83: mov     rax, rdi
 * 00000001402D9A86: mul     rcx
 * 00000001402D9A89: xor     r11d, eax
 * 00000001402D9A8C: mov     [rbp+2250h+var_1C50], rdx
 * 00000001402D9A93: xor     r11d, edx
 * 00000001402D9A96: and     r11d, 3Fh
 * 00000001402D9A9A: cmovz   r11d, r12d
 * 00000001402D9A9E: add     ebx, 0FFFFFFFFh
 * 00000001402D9AA1: jnz     short loc_1402D9A52
 * 00000001402D9AA3: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D9AA7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D9AAE: and     r10d, 7Fh
 * 00000001402D9AB2: cmp     r10d, 8
 * 00000001402D9AB6: jb      short loc_1402D9AD5
 * 00000001402D9AB8: mov     eax, r10d
 * 00000001402D9ABB: shr     rax, 3
 * 00000001402D9ABF: xor     r8, [r9]
 * 00000001402D9AC2: mov     ecx, r11d
 * 00000001402D9AC5: rol     r8, cl
 * 00000001402D9AC8: add     r9, 8
 * 00000001402D9ACC: add     r10d, 0FFFFFFF8h
 * 00000001402D9AD0: sub     rax, r12
 * 00000001402D9AD3: jnz     short loc_1402D9ABF
 * 00000001402D9AD5: xor     r15d, r15d
 * 00000001402D9AD8: test    r10d, r10d
 * 00000001402D9ADB: jz      short loc_1402D9AF3
 * 00000001402D9ADD: movzx   eax, byte ptr [r9]
 * 00000001402D9AE1: mov     ecx, r11d
 * 00000001402D9AE4: xor     r8, rax
 * 00000001402D9AE7: add     r9, r12
 * 00000001402D9AEA: rol     r8, cl
 * 00000001402D9AED: add     r10d, 0FFFFFFFFh
 * 00000001402D9AF1: jnz     short loc_1402D9ADD
 * 00000001402D9AF3: mov     rax, r8
 * 00000001402D9AF6: jmp     short loc_1402D9B5F
 * 00000001402D9AF8: mov     [r13+20h], rcx
 * 00000001402D9AFC: xor     r15d, r15d
 * 00000001402D9AFF: mov     rax, [rsi+588h]
 * 00000001402D9B06: mov     [rax], r13
 * 00000001402D9B09: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D9B10: cmp     [rsi+790h], r15d
 * 00000001402D9B17: jnz     loc_1402D3378
 * 00000001402D9B1D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D9B27: add     rax, rsi
 * 00000001402D9B2A: mov     [rsi+798h], rax
 * 00000001402D9B31: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9B3B: add     rax, r13
 * 00000001402D9B3E: mov     [rsi+7A0h], rax
 * 00000001402D9B45: movsxd  rax, dword ptr [r13+0]
 * 00000001402D9B49: mov     [rsi+7A8h], rax
 * 00000001402D9B50: mov     [rsi+7B0h], r14
 * 00000001402D9B57: jmp     loc_1402D40D8
 * 00000001402D9B5C: xor     r8d, eax
 * 00000001402D9B5F: shr     rax, 1Fh
 * 00000001402D9B63: test    rax, rax
 * 00000001402D9B66: jnz     short loc_1402D9B5C
 * 00000001402D9B68: btr     r8d, 1Fh
 * 00000001402D9B6D: mov     [r13+2Ch], r8d
 * 00000001402D9B71: jmp     loc_1402D3378
 * 00000001402D9B76: test    dword ptr [rsi+828h], 40000000h
 * 00000001402D9B80: jz      short loc_1402D9BC5
 * 00000001402D9B82: mov     rcx, [rsi+908h]
 * 00000001402D9B89: mov     edx, 30h ; '0'
 * 00000001402D9B8E: lea     r8d, [rdx-2Ah]
 * 00000001402D9B92: mov     rax, [r13+0]
 * 00000001402D9B96: add     edx, 0FFFFFFF8h
 * 00000001402D9B99: mov     [rcx], rax
 * 00000001402D9B9C: add     r13, 8
 * 00000001402D9BA0: add     rcx, 8
 * 00000001402D9BA4: sub     r8, r14
 * 00000001402D9BA7: jnz     short loc_1402D9B92
 * 00000001402D9BA9: test    edx, edx
 * 00000001402D9BAB: jz      short loc_1402D9BBE
 * 00000001402D9BAD: mov     al, [r13+0]
 * 00000001402D9BB1: add     r13, r14
 * 00000001402D9BB4: mov     [rcx], al
 * 00000001402D9BB6: add     rcx, r14
 * 00000001402D9BB9: add     edx, 0FFFFFFFFh
 * 00000001402D9BBC: jnz     short loc_1402D9BAD
 * 00000001402D9BBE: mov     r13, [rsi+908h]
 * 00000001402D9BC5: mov     [r13+20h], r9
 * 00000001402D9BC9: mov     rax, [rsi+588h]
 * 00000001402D9BD0: mov     [rax], r13
 * 00000001402D9BD3: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402D9BDA: mov     rcx, [r13+8]
 * 00000001402D9BDE: cmp     [rsi+790h], r15d
 * 00000001402D9BE5: jnz     loc_1402D3378
 * 00000001402D9BEB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D9BF5: add     rax, rsi
 * 00000001402D9BF8: mov     [rsi+798h], rax
 * 00000001402D9BFF: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9C09: add     rax, r13
 * 00000001402D9C0C: mov     [rsi+7A0h], rax
 * 00000001402D9C13: movsxd  rax, dword ptr [r13+0]
 * 00000001402D9C17: mov     [rsi+7A8h], rax
 * 00000001402D9C1E: mov     [rsi+7B0h], rcx
 * 00000001402D9C25: mov     [rsi+790h], r14d
 * 00000001402D9C2C: jmp     loc_1402D3378
 * 00000001402D9C31: mov     r14, [r13+8]
 * 00000001402D9C35: add     [rsi+6C8h], r8d
 * 00000001402D9C3C: mov     r9, r14
 * 00000001402D9C3F: mov     r10d, [rsi+6B4h]
 * 00000001402D9C46: mov     rax, r14
 * 00000001402D9C49: mov     r15, [rsi+6B8h]
 * 00000001402D9C50: lea     rcx, [r14+r8]
 * 00000001402D9C54: cmp     r14, rcx
 * 00000001402D9C57: jnb     short loc_1402D9C6A
 * 00000001402D9C59: mov     r11d, 40h ; '@'
 * 00000001402D9C5F: prefetchnta byte ptr [rax]
 * 00000001402D9C62: add     rax, r11
 * 00000001402D9C65: cmp     rax, rcx
 * 00000001402D9C68: jb      short loc_1402D9C5F
 * 00000001402D9C6A: mov     r11d, r8d
 * 00000001402D9C6D: mov     rbx, r15
 * 00000001402D9C70: shr     r11d, 7
 * 00000001402D9C74: test    r11d, r11d
 * 00000001402D9C77: jz      short loc_1402D9CE5
 * 00000001402D9C79: mov     rdi, 7010008004002001h
 * 00000001402D9C83: mov     eax, 8
 * 00000001402D9C88: xor     rbx, [r9]
 * 00000001402D9C8B: mov     ecx, r10d
 * 00000001402D9C8E: rol     rbx, cl
 * 00000001402D9C91: xor     rbx, [r9+8]
 * 00000001402D9C95: add     r9, 10h
 * 00000001402D9C99: rol     rbx, cl
 * 00000001402D9C9C: sub     rax, rdx
 * 00000001402D9C9F: jnz     short loc_1402D9C88
 * 00000001402D9CA1: mov     rcx, r9
 * 00000001402D9CA4: sub     rcx, r14
 * 00000001402D9CA7: xor     rcx, r15
 * 00000001402D9CAA: mov     rax, rcx
 * 00000001402D9CAD: rol     rax, 11h
 * 00000001402D9CB1: xor     rcx, rax
 * 00000001402D9CB4: mov     rax, rdi
 * 00000001402D9CB7: mul     rcx
 * 00000001402D9CBA: xor     r10d, eax
 * 00000001402D9CBD: mov     [rbp+2250h+var_1C48], rdx
 * 00000001402D9CC4: xor     r10d, edx
 * 00000001402D9CC7: mov     edx, 1
 * 00000001402D9CCC: and     r10d, 3Fh
 * 00000001402D9CD0: cmovz   r10d, edx
 * 00000001402D9CD4: add     r11d, 0FFFFFFFFh
 * 00000001402D9CD8: jnz     short loc_1402D9C83
 * 00000001402D9CDA: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D9CDE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402D9CE5: and     r8d, 7Fh
 * 00000001402D9CE9: cmp     r8d, 8
 * 00000001402D9CED: jb      short loc_1402D9D0C
 * 00000001402D9CEF: mov     eax, r8d
 * 00000001402D9CF2: shr     rax, 3
 * 00000001402D9CF6: xor     rbx, [r9]
 * 00000001402D9CF9: mov     ecx, r10d
 * 00000001402D9CFC: rol     rbx, cl
 * 00000001402D9CFF: add     r9, 8
 * 00000001402D9D03: add     r8d, 0FFFFFFF8h
 * 00000001402D9D07: sub     rax, rdx
 * 00000001402D9D0A: jnz     short loc_1402D9CF6
 * 00000001402D9D0C: xor     r11d, r11d
 * 00000001402D9D0F: test    r8d, r8d
 * 00000001402D9D12: jz      short loc_1402D9D2A
 * 00000001402D9D14: movzx   eax, byte ptr [r9]
 * 00000001402D9D18: mov     ecx, r10d
 * 00000001402D9D1B: xor     rbx, rax
 * 00000001402D9D1E: add     r9, rdx
 * 00000001402D9D21: rol     rbx, cl
 * 00000001402D9D24: add     r8d, 0FFFFFFFFh
 * 00000001402D9D28: jnz     short loc_1402D9D14
 * 00000001402D9D2A: mov     rax, rbx
 * 00000001402D9D2D: jmp     short loc_1402D9D31
 * 00000001402D9D2F: xor     ebx, eax
 * 00000001402D9D31: shr     rax, 1Fh
 * 00000001402D9D35: test    rax, rax
 * 00000001402D9D38: jnz     short loc_1402D9D2F
 * 00000001402D9D3A: btr     ebx, 1Fh
 * 00000001402D9D3E: mov     r12d, r11d
 * 00000001402D9D41: cmp     ebx, [r13+14h]
 * 00000001402D9D45: jz      loc_1402D9E96
 * 00000001402D9D4B: cmp     [r13+0], r11d
 * 00000001402D9D4F: jnz     short loc_1402D9D59
 * 00000001402D9D51: cmp     [r13+18h], r11d
 * 00000001402D9D55: cmovnz  r12d, edx
 * 00000001402D9D59: mov     ecx, [r13+10h]
 * 00000001402D9D5D: mov     rdx, [r13+8]
 * 00000001402D9D61: test    rcx, rcx
 * 00000001402D9D64: jz      loc_1402D9E25
 * 00000001402D9D6A: mov     eax, [rsi+82Ch]
 * 00000001402D9D70: mov     r8d, 40h ; '@'
 * 00000001402D9D76: test    r8b, al
 * 00000001402D9D79: jz      loc_1402D9E25
 * 00000001402D9D7F: mov     r13, cr8
 * 00000001402D9D83: lea     eax, [r8-3Eh]
 * 00000001402D9D87: mov     cr8, rax
 * 00000001402D9D8B: lea     rax, [rcx-1]
 * 00000001402D9D8F: mov     r14, rdx
 * 00000001402D9D92: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402D9D99: add     rax, rdx
 * 00000001402D9D9C: mov     ecx, 0FFFh
 * 00000001402D9DA1: or      rax, rcx
 * 00000001402D9DA4: mov     [rbp+2250h+var_2230], rax
 * 00000001402D9DA8: lea     rax, [r14-1]
 * 00000001402D9DAC: mov     [rbp+2250h+var_2250], rax
 * 00000001402D9DB0: movzx   r15d, r13b
 * 00000001402D9DB4: mov     rax, [rsi+468h]
 * 00000001402D9DBB: xor     edx, edx
 * 00000001402D9DBD: mov     rcx, r14
 * 00000001402D9DC0: call    KeGuardDispatchICall
 * 00000001402D9DC5: xor     r11d, r11d
 * 00000001402D9DC8: cmp     eax, 0C000022Dh
 * 00000001402D9DCD: jnz     short loc_1402D9DF6
 * 00000001402D9DCF: test    r12d, r12d
 * 00000001402D9DD2: jnz     short loc_1402D9E1D
 * 00000001402D9DD4: lea     eax, [r11+1]
 * 00000001402D9DD8: cmp     r13b, al
 * 00000001402D9DDB: ja      short loc_1402D9DFA
 * 00000001402D9DDD: movzx   r15d, r13b
 * 00000001402D9DE1: mov     cr8, r15
 * 00000001402D9DE5: mov     al, [r14]
 * 00000001402D9DE8: mov     rax, cr8
 * 00000001402D9DEC: lea     eax, [r11+2]
 * 00000001402D9DF0: mov     cr8, rax
 * 00000001402D9DF4: jmp     short loc_1402D9DB4
 * 00000001402D9DF6: test    eax, eax
 * 00000001402D9DF8: js      short loc_1402D9E1D
 * 00000001402D9DFA: mov     rax, [rbp+2250h+var_2250]
 * 00000001402D9DFE: mov     ecx, 1000h
 * 00000001402D9E03: add     rax, rcx
 * 00000001402D9E06: add     r14, rcx
 * 00000001402D9E09: mov     [rbp+2250h+var_2250], rax
 * 00000001402D9E0D: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402D9E11: jnz     short loc_1402D9DB0
 * 00000001402D9E13: mov     cr8, r15
 * 00000001402D9E17: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D9E1B: jmp     short loc_1402D9E96
 * 00000001402D9E1D: mov     r13, [rbp+2250h+var_2240]
 * 00000001402D9E21: mov     cr8, r15
 * 00000001402D9E25: mov     eax, [rsi+790h]
 * 00000001402D9E2B: mov     edx, [r13+14h]
 * 00000001402D9E2F: test    eax, eax
 * 00000001402D9E31: jnz     short loc_1402D9E49
 * 00000001402D9E33: mov     rax, [rsi+588h]
 * 00000001402D9E3A: mov     ecx, ebx
 * 00000001402D9E3C: xor     rcx, rdx
 * 00000001402D9E3F: mov     [rax+18h], rcx
 * 00000001402D9E43: mov     eax, [rsi+790h]
 * 00000001402D9E49: mov     rcx, [r13+8]
 * 00000001402D9E4D: test    eax, eax
 * 00000001402D9E4F: jnz     short loc_1402D9E96
 * 00000001402D9E51: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402D9E5B: add     rax, rsi
 * 00000001402D9E5E: mov     [rsi+798h], rax
 * 00000001402D9E65: mov     rax, 0B3B74BDEE4453415h
 * 00000001402D9E6F: add     rax, r13
 * 00000001402D9E72: mov     [rsi+7A0h], rax
 * 00000001402D9E79: movsxd  rax, dword ptr [r13+0]
 * 00000001402D9E7D: mov     [rsi+7A8h], rax
 * 00000001402D9E84: mov     eax, 1
 * 00000001402D9E89: mov     [rsi+7B0h], rcx
 * 00000001402D9E90: mov     [rsi+790h], eax
 * 00000001402D9E96: mov     rax, [r13+8]
 * 00000001402D9E9A: mov     r9d, r11d
 * 00000001402D9E9D: sub     rax, 70h ; 'p'
 * 00000001402D9EA1: mov     [rbp+2250h+var_20F0], rax
 * 00000001402D9EA8: mov     r15, [rax+50h]
 * 00000001402D9EAC: test    r15, r15
 * 00000001402D9EAF: jz      short loc_1402D9EB4
 * 00000001402D9EB1: mov     r9d, [r15]
 * 00000001402D9EB4: add     [rsi+6C8h], r9d
 * 00000001402D9EBB: mov     r10, r15
 * 00000001402D9EBE: mov     ebx, [rsi+6B4h]
 * 00000001402D9EC4: mov     rax, r15
 * 00000001402D9EC7: mov     r14, [rsi+6B8h]
 * 00000001402D9ECE: mov     ecx, r9d
 * 00000001402D9ED1: add     rcx, r15
 * 00000001402D9ED4: cmp     r15, rcx
 * 00000001402D9ED7: jnb     short loc_1402D9EE9
 * 00000001402D9ED9: mov     edx, 40h ; '@'
 * 00000001402D9EDE: prefetchnta byte ptr [rax]
 * 00000001402D9EE1: add     rax, rdx
 * 00000001402D9EE4: cmp     rax, rcx
 * 00000001402D9EE7: jb      short loc_1402D9EDE
 * 00000001402D9EE9: mov     r11d, r9d
 * 00000001402D9EEC: mov     r8, r14
 * 00000001402D9EEF: shr     r11d, 7
 * 00000001402D9EF3: test    r11d, r11d
 * 00000001402D9EF6: jz      short loc_1402D9F60
 * 00000001402D9EF8: mov     rsi, 7010008004002001h
 * 00000001402D9F02: mov     edx, 8
 * 00000001402D9F07: lea     r12d, [rdx-7]
 * 00000001402D9F0B: mov     rax, [r10]
 * 00000001402D9F0E: mov     ecx, ebx
 * 00000001402D9F10: xor     rax, r8
 * 00000001402D9F13: mov     r8, [r10+8]
 * 00000001402D9F17: rol     rax, cl
 * 00000001402D9F1A: add     r10, 10h
 * 00000001402D9F1E: xor     r8, rax
 * 00000001402D9F21: rol     r8, cl
 * 00000001402D9F24: sub     rdx, r12
 * 00000001402D9F27: jnz     short loc_1402D9F0B
 * 00000001402D9F29: mov     rcx, r10
 * 00000001402D9F2C: sub     rcx, r15
 * 00000001402D9F2F: xor     rcx, r14
 * 00000001402D9F32: mov     rax, rcx
 * 00000001402D9F35: rol     rax, 11h
 * 00000001402D9F39: xor     rcx, rax
 * 00000001402D9F3C: mov     rax, rsi
 * 00000001402D9F3F: mul     rcx
 * 00000001402D9F42: xor     eax, edx
 * 00000001402D9F44: mov     [rbp+2250h+var_1C40], rdx
 * 00000001402D9F4B: xor     ebx, eax
 * 00000001402D9F4D: mov     rax, r12
 * 00000001402D9F50: and     ebx, 3Fh
 * 00000001402D9F53: cmovz   ebx, eax
 * 00000001402D9F56: add     r11d, 0FFFFFFFFh
 * 00000001402D9F5A: jnz     short loc_1402D9F02
 * 00000001402D9F5C: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402D9F60: and     r9d, 7Fh
 * 00000001402D9F64: mov     r11d, 1
 * 00000001402D9F6A: cmp     r9d, 8
 * 00000001402D9F6E: jb      short loc_1402D9F8C
 * 00000001402D9F70: mov     edx, r9d
 * 00000001402D9F73: shr     rdx, 3
 * 00000001402D9F77: xor     r8, [r10]
 * 00000001402D9F7A: mov     ecx, ebx
 * 00000001402D9F7C: rol     r8, cl
 * 00000001402D9F7F: add     r10, 8
 * 00000001402D9F83: add     r9d, 0FFFFFFF8h
 * 00000001402D9F87: sub     rdx, r11
 * 00000001402D9F8A: jnz     short loc_1402D9F77
 * 00000001402D9F8C: test    r9d, r9d
 * 00000001402D9F8F: jz      short loc_1402D9FA6
 * 00000001402D9F91: movzx   eax, byte ptr [r10]
 * 00000001402D9F95: mov     ecx, ebx
 * 00000001402D9F97: xor     r8, rax
 * 00000001402D9F9A: add     r10, r11
 * 00000001402D9F9D: rol     r8, cl
 * 00000001402D9FA0: add     r9d, 0FFFFFFFFh
 * 00000001402D9FA4: jnz     short loc_1402D9F91
 * 00000001402D9FA6: mov     rax, r8
 * 00000001402D9FA9: jmp     short loc_1402D9FAE
 * 00000001402D9FAB: xor     r8d, eax
 * 00000001402D9FAE: shr     rax, 1Fh
 * 00000001402D9FB2: test    rax, rax
 * 00000001402D9FB5: jnz     short loc_1402D9FAB
 * 00000001402D9FB7: mov     edx, [r13+2Ch]
 * 00000001402D9FBB: btr     r8d, 1Fh
 * 00000001402D9FC0: cmp     r8d, edx
 * 00000001402D9FC3: jz      loc_1402D3375
 * 00000001402D9FC9: mov     eax, [rsi+790h]
 * 00000001402D9FCF: test    eax, eax
 * 00000001402D9FD1: jnz     loc_1402D3375
 * 00000001402D9FD7: mov     rax, [rsi+588h]
 * 00000001402D9FDE: mov     ecx, r8d
 * 00000001402D9FE1: xor     rcx, rdx
 * 00000001402D9FE4: mov     [rax+18h], rcx
 * 00000001402D9FE8: mov     eax, [rsi+790h]
 * 00000001402D9FEE: test    eax, eax
 * 00000001402D9FF0: jnz     loc_1402D3375
 * 00000001402D9FF6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA000: add     rax, rsi
 * 00000001402DA003: mov     [rsi+798h], rax
 * 00000001402DA00A: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DA014: add     rax, r13
 * 00000001402DA017: mov     [rsi+7A0h], rax
 * 00000001402DA01E: movsxd  rax, dword ptr [r13+0]
 * 00000001402DA022: mov     [rsi+7A8h], rax
 * 00000001402DA029: mov     [rsi+7B0h], r15
 * 00000001402DA030: mov     [rsi+790h], r11d
 * 00000001402DA037: jmp     loc_1402D3375
 * 00000001402DA03C: mov     r14, [r13+8]
 * 00000001402DA040: mov     r8d, [r13+10h]
 * 00000001402DA044: mov     r9, r14
 * 00000001402DA047: add     [rsi+6C8h], r8d
 * 00000001402DA04E: mov     rax, r14
 * 00000001402DA051: mov     r11d, [rsi+6B4h]
 * 00000001402DA058: mov     r15, [rsi+6B8h]
 * 00000001402DA05F: lea     rcx, [r14+r8]
 * 00000001402DA063: cmp     r14, rcx
 * 00000001402DA066: jnb     short loc_1402DA078
 * 00000001402DA068: mov     edx, 40h ; '@'
 * 00000001402DA06D: prefetchnta byte ptr [rax]
 * 00000001402DA070: add     rax, rdx
 * 00000001402DA073: cmp     rax, rcx
 * 00000001402DA076: jb      short loc_1402DA06D
 * 00000001402DA078: mov     r10d, r8d
 * 00000001402DA07B: mov     rbx, r15
 * 00000001402DA07E: shr     r10d, 7
 * 00000001402DA082: mov     r12d, 1
 * 00000001402DA088: test    r10d, r10d
 * 00000001402DA08B: jz      short loc_1402DA0F2
 * 00000001402DA08D: mov     rsi, 7010008004002001h
 * 00000001402DA097: mov     edx, 8
 * 00000001402DA09C: mov     rax, [r9]
 * 00000001402DA09F: mov     ecx, r11d
 * 00000001402DA0A2: xor     rax, rbx
 * 00000001402DA0A5: mov     rbx, [r9+8]
 * 00000001402DA0A9: rol     rax, cl
 * 00000001402DA0AC: add     r9, 10h
 * 00000001402DA0B0: xor     rbx, rax
 * 00000001402DA0B3: rol     rbx, cl
 * 00000001402DA0B6: sub     rdx, r12
 * 00000001402DA0B9: jnz     short loc_1402DA09C
 * 00000001402DA0BB: mov     rcx, r9
 * 00000001402DA0BE: sub     rcx, r14
 * 00000001402DA0C1: xor     rcx, r15
 * 00000001402DA0C4: mov     rax, rcx
 * 00000001402DA0C7: rol     rax, 11h
 * 00000001402DA0CB: xor     rcx, rax
 * 00000001402DA0CE: mov     rax, rsi
 * 00000001402DA0D1: mul     rcx
 * 00000001402DA0D4: xor     eax, edx
 * 00000001402DA0D6: mov     [rbp+2250h+var_1C38], rdx
 * 00000001402DA0DD: xor     r11d, eax
 * 00000001402DA0E0: and     r11d, 3Fh
 * 00000001402DA0E4: cmovz   r11d, r12d
 * 00000001402DA0E8: add     r10d, 0FFFFFFFFh
 * 00000001402DA0EC: jnz     short loc_1402DA097
 * 00000001402DA0EE: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DA0F2: and     r8d, 7Fh
 * 00000001402DA0F6: cmp     r8d, 8
 * 00000001402DA0FA: jb      short loc_1402DA119
 * 00000001402DA0FC: mov     edx, r8d
 * 00000001402DA0FF: shr     rdx, 3
 * 00000001402DA103: xor     rbx, [r9]
 * 00000001402DA106: mov     ecx, r11d
 * 00000001402DA109: rol     rbx, cl
 * 00000001402DA10C: add     r9, 8
 * 00000001402DA110: add     r8d, 0FFFFFFF8h
 * 00000001402DA114: sub     rdx, r12
 * 00000001402DA117: jnz     short loc_1402DA103
 * 00000001402DA119: xor     r10d, r10d
 * 00000001402DA11C: test    r8d, r8d
 * 00000001402DA11F: jz      short loc_1402DA137
 * 00000001402DA121: movzx   eax, byte ptr [r9]
 * 00000001402DA125: mov     ecx, r11d
 * 00000001402DA128: xor     rbx, rax
 * 00000001402DA12B: add     r9, r12
 * 00000001402DA12E: rol     rbx, cl
 * 00000001402DA131: add     r8d, 0FFFFFFFFh
 * 00000001402DA135: jnz     short loc_1402DA121
 * 00000001402DA137: mov     rax, rbx
 * 00000001402DA13A: jmp     short loc_1402DA13E
 * 00000001402DA13C: xor     ebx, eax
 * 00000001402DA13E: shr     rax, 1Fh
 * 00000001402DA142: test    rax, rax
 * 00000001402DA145: jnz     short loc_1402DA13C
 * 00000001402DA147: btr     ebx, 1Fh
 * 00000001402DA14B: mov     r12d, r10d
 * 00000001402DA14E: cmp     ebx, [r13+14h]
 * 00000001402DA152: jz      loc_1402DA2A3
 * 00000001402DA158: cmp     [r13+0], r10d
 * 00000001402DA15C: jnz     short loc_1402DA16B
 * 00000001402DA15E: cmp     [r13+18h], r10d
 * 00000001402DA162: mov     eax, 1
 * 00000001402DA167: cmovnz  r12d, eax
 * 00000001402DA16B: mov     ecx, [r13+10h]
 * 00000001402DA16F: mov     rdx, [r13+8]
 * 00000001402DA173: test    rcx, rcx
 * 00000001402DA176: jz      loc_1402DA232
 * 00000001402DA17C: mov     eax, [rsi+82Ch]
 * 00000001402DA182: mov     r8d, 40h ; '@'
 * 00000001402DA188: test    r8b, al
 * 00000001402DA18B: jz      loc_1402DA232
 * 00000001402DA191: mov     r13, cr8
 * 00000001402DA195: lea     eax, [r8-3Eh]
 * 00000001402DA199: mov     cr8, rax
 * 00000001402DA19D: lea     rax, [rcx-1]
 * 00000001402DA1A1: mov     r14, rdx
 * 00000001402DA1A4: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402DA1AB: add     rax, rdx
 * 00000001402DA1AE: mov     ecx, 0FFFh
 * 00000001402DA1B3: or      rax, rcx
 * 00000001402DA1B6: mov     [rbp+2250h+var_2230], rax
 * 00000001402DA1BA: lea     rax, [r14-1]
 * 00000001402DA1BE: mov     [rbp+2250h+var_2250], rax
 * 00000001402DA1C2: movzx   r15d, r13b
 * 00000001402DA1C6: mov     rax, [rsi+468h]
 * 00000001402DA1CD: xor     edx, edx
 * 00000001402DA1CF: mov     rcx, r14
 * 00000001402DA1D2: call    KeGuardDispatchICall
 * 00000001402DA1D7: cmp     eax, 0C000022Dh
 * 00000001402DA1DC: jnz     short loc_1402DA207
 * 00000001402DA1DE: test    r12d, r12d
 * 00000001402DA1E1: jnz     short loc_1402DA22A
 * 00000001402DA1E3: lea     eax, [r12+1]
 * 00000001402DA1E8: cmp     r13b, al
 * 00000001402DA1EB: ja      short loc_1402DA20B
 * 00000001402DA1ED: movzx   r15d, r13b
 * 00000001402DA1F1: mov     cr8, r15
 * 00000001402DA1F5: mov     al, [r14]
 * 00000001402DA1F8: mov     rax, cr8
 * 00000001402DA1FC: lea     eax, [r12+2]
 * 00000001402DA201: mov     cr8, rax
 * 00000001402DA205: jmp     short loc_1402DA1C6
 * 00000001402DA207: test    eax, eax
 * 00000001402DA209: js      short loc_1402DA22A
 * 00000001402DA20B: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DA20F: mov     ecx, 1000h
 * 00000001402DA214: add     rax, rcx
 * 00000001402DA217: add     r14, rcx
 * 00000001402DA21A: mov     [rbp+2250h+var_2250], rax
 * 00000001402DA21E: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402DA222: jnz     short loc_1402DA1C2
 * 00000001402DA224: mov     cr8, r15
 * 00000001402DA228: jmp     short loc_1402DA2A3
 * 00000001402DA22A: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DA22E: mov     cr8, r15
 * 00000001402DA232: mov     eax, [rsi+790h]
 * 00000001402DA238: mov     ecx, [r13+14h]
 * 00000001402DA23C: test    eax, eax
 * 00000001402DA23E: jnz     short loc_1402DA256
 * 00000001402DA240: mov     eax, ebx
 * 00000001402DA242: xor     rcx, rax
 * 00000001402DA245: mov     rax, [rsi+588h]
 * 00000001402DA24C: mov     [rax+18h], rcx
 * 00000001402DA250: mov     eax, [rsi+790h]
 * 00000001402DA256: mov     rcx, [r13+8]
 * 00000001402DA25A: test    eax, eax
 * 00000001402DA25C: jnz     short loc_1402DA2A3
 * 00000001402DA25E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA268: add     rax, rsi
 * 00000001402DA26B: mov     [rsi+798h], rax
 * 00000001402DA272: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DA27C: add     rax, r13
 * 00000001402DA27F: mov     [rsi+7A0h], rax
 * 00000001402DA286: movsxd  rax, dword ptr [r13+0]
 * 00000001402DA28A: mov     [rsi+7A8h], rax
 * 00000001402DA291: mov     eax, 1
 * 00000001402DA296: mov     [rsi+7B0h], rcx
 * 00000001402DA29D: mov     [rsi+790h], eax
 * 00000001402DA2A3: mov     rcx, [rsi+538h]
 * 00000001402DA2AA: mov     r15, cr8
 * 00000001402DA2AE: mov     eax, 0Fh
 * 00000001402DA2B3: mov     cr8, rax
 * 00000001402DA2B7: mov     rax, [rsi+150h]
 * 00000001402DA2BE: call    KeGuardDispatchICall
 * 00000001402DA2C3: mov     rax, [rsi+608h]
 * 00000001402DA2CA: mov     r14, [rbp+2250h+var_2240]
 * 00000001402DA2CE: mov     rcx, [rax]
 * 00000001402DA2D1: mov     eax, [rcx]
 * 00000001402DA2D3: lea     rbx, [rcx+10h]
 * 00000001402DA2D7: mov     r12b, [rcx+0Ch]
 * 00000001402DA2DB: lea     rcx, [rax+rax*2]
 * 00000001402DA2DF: lea     r13, [rbx+rcx*8]
 * 00000001402DA2E3: mov     r8d, 18h
 * 00000001402DA2E9: lea     r9, [r14+18h]
 * 00000001402DA2ED: mov     r10, rbx
 * 00000001402DA2F0: mov     rcx, [r10]
 * 00000001402DA2F3: add     r10, 8
 * 00000001402DA2F7: mov     rax, [r9]
 * 00000001402DA2FA: add     r9, 8
 * 00000001402DA2FE: cmp     rcx, rax
 * 00000001402DA301: jnz     short loc_1402DA333
 * 00000001402DA303: add     r8d, 0FFFFFFF8h
 * 00000001402DA307: cmp     r8d, 8
 * 00000001402DA30B: jnb     short loc_1402DA2F0
 * 00000001402DA30D: test    r8d, r8d
 * 00000001402DA310: jz      short loc_1402DA33C
 * 00000001402DA312: mov     r11d, 1
 * 00000001402DA318: movzx   edx, byte ptr [r10]
 * 00000001402DA31C: add     r10, r11
 * 00000001402DA31F: movzx   eax, byte ptr [r9]
 * 00000001402DA323: add     r9, r11
 * 00000001402DA326: cmp     rdx, rax
 * 00000001402DA329: jnz     short loc_1402DA333
 * 00000001402DA32B: add     r8d, 0FFFFFFFFh
 * 00000001402DA32F: jz      short loc_1402DA33C
 * 00000001402DA331: jmp     short loc_1402DA318
 * 00000001402DA333: add     rbx, 18h
 * 00000001402DA337: cmp     rbx, r13
 * 00000001402DA33A: jb      short loc_1402DA2E3
 * 00000001402DA33C: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DA340: mov     rcx, [rsi+538h]
 * 00000001402DA347: mov     rax, [rsi+190h]
 * 00000001402DA34E: call    KeGuardDispatchICall
 * 00000001402DA353: movzx   eax, r15b
 * 00000001402DA357: mov     cr8, rax
 * 00000001402DA35B: xor     ecx, ecx
 * 00000001402DA35D: test    r12b, r12b
 * 00000001402DA360: jz      loc_1402DA41B
 * 00000001402DA366: mov     eax, [rsi+82Ch]
 * 00000001402DA36C: lea     edx, [rcx+10h]
 * 00000001402DA36F: test    dl, al
 * 00000001402DA371: jz      short loc_1402DA3C3
 * 00000001402DA373: cmp     [rsi+790h], ecx
 * 00000001402DA379: jnz     short loc_1402DA3C3
 * 00000001402DA37B: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DA37F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA389: add     rax, rsi
 * 00000001402DA38C: mov     [rsi+798h], rax
 * 00000001402DA393: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DA39D: add     rax, rcx
 * 00000001402DA3A0: mov     [rsi+7A0h], rax
 * 00000001402DA3A7: movsxd  rax, dword ptr [rcx]
 * 00000001402DA3AA: lea     ecx, [rdx-0Fh]
 * 00000001402DA3AD: mov     [rsi+7A8h], rax
 * 00000001402DA3B4: mov     [rsi+7B0h], rcx
 * 00000001402DA3BB: mov     [rsi+790h], ecx
 * 00000001402DA3C1: xor     ecx, ecx
 * 00000001402DA3C3: mov     edx, 1
 * 00000001402DA3C8: cmp     [r14+18h], rdx
 * 00000001402DA3CC: jnz     short loc_1402DA420
 * 00000001402DA3CE: mov     r12, [rbp+2250h+var_2240]
 * 00000001402DA3D2: mov     r13, 0B3B74BDEE4453415h
 * 00000001402DA3DC: mov     rcx, [rsi+538h]
 * 00000001402DA3E3: mov     r15, cr8
 * 00000001402DA3E7: mov     eax, 0Fh
 * 00000001402DA3EC: mov     cr8, rax
 * 00000001402DA3F0: mov     rax, [rsi+150h]
 * 00000001402DA3F7: call    KeGuardDispatchICall
 * 00000001402DA3FC: mov     rax, [rsi+608h]
 * 00000001402DA403: mov     rcx, [rax]
 * 00000001402DA406: mov     eax, [rcx]
 * 00000001402DA408: lea     rbx, [rcx+10h]
 * 00000001402DA40C: lea     rcx, [rax+rax*2]
 * 00000001402DA410: xor     eax, eax
 * 00000001402DA412: lea     r14, [rbx+rcx*8]
 * 00000001402DA416: jmp     loc_1402DA49E
 * 00000001402DA41B: mov     edx, 1
 * 00000001402DA420: cmp     rbx, r13
 * 00000001402DA423: jnz     short loc_1402DA3CE
 * 00000001402DA425: mov     r13, 0B3B74BDEE4453415h
 * 00000001402DA42F: mov     r12, [rbp+2250h+var_2240]
 * 00000001402DA433: cmp     [rsi+790h], ecx
 * 00000001402DA439: jnz     short loc_1402DA3DC
 * 00000001402DA43B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA445: add     rax, rsi
 * 00000001402DA448: mov     [rsi+798h], rax
 * 00000001402DA44F: lea     rax, [r12+r13]
 * 00000001402DA453: mov     [rsi+7A0h], rax
 * 00000001402DA45A: movsxd  rax, dword ptr [r12]
 * 00000001402DA45E: mov     [rsi+7A8h], rax
 * 00000001402DA465: mov     [rsi+7B0h], rbx
 * 00000001402DA46C: mov     [rsi+790h], edx
 * 00000001402DA472: jmp     loc_1402DA3DC
 * 00000001402DA477: mov     rcx, [rbx+8]
 * 00000001402DA47B: cmp     rcx, rdx
 * 00000001402DA47E: jb      short loc_1402DA4AA
 * 00000001402DA480: mov     rax, rcx
 * 00000001402DA483: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001402DA489: cmp     rax, rcx
 * 00000001402DA48C: jnz     short loc_1402DA4AA
 * 00000001402DA48E: mov     eax, [rbx+10h]
 * 00000001402DA491: add     rax, rcx
 * 00000001402DA494: cmp     rax, rcx
 * 00000001402DA497: jbe     short loc_1402DA4AA
 * 00000001402DA499: cmp     rax, rdx
 * 00000001402DA49C: jz      short loc_1402DA4AA
 * 00000001402DA49E: add     rbx, 18h
 * 00000001402DA4A2: mov     rdx, rax
 * 00000001402DA4A5: cmp     rbx, r14
 * 00000001402DA4A8: jb      short loc_1402DA477
 * 00000001402DA4AA: mov     rcx, [rsi+538h]
 * 00000001402DA4B1: mov     rax, [rsi+190h]
 * 00000001402DA4B8: call    KeGuardDispatchICall
 * 00000001402DA4BD: movzx   eax, r15b
 * 00000001402DA4C1: mov     cr8, rax
 * 00000001402DA4C5: xor     r15d, r15d
 * 00000001402DA4C8: cmp     rbx, r14
 * 00000001402DA4CB: jz      loc_1402D3378
 * 00000001402DA4D1: cmp     [rsi+790h], r15d
 * 00000001402DA4D8: jnz     loc_1402D3378
 * 00000001402DA4DE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA4E8: add     rax, rsi
 * 00000001402DA4EB: mov     [rsi+798h], rax
 * 00000001402DA4F2: lea     rax, [r12+r13]
 * 00000001402DA4F6: mov     [rsi+7A0h], rax
 * 00000001402DA4FD: movsxd  rax, dword ptr [r12]
 * 00000001402DA501: mov     [rsi+7A8h], rax
 * 00000001402DA508: mov     [rsi+7B0h], rbx
 * 00000001402DA50F: jmp     loc_1402D40D8
 * 00000001402DA514: cmp     r15d, 25h ; '%'
 * 00000001402DA518: jz      loc_1402DD2AF
 * 00000001402DA51E: cmp     r15d, 26h ; '&'
 * 00000001402DA522: jz      loc_1402DD20F
 * 00000001402DA528: jle     loc_1402DC529
 * 00000001402DA52E: cmp     r15d, 2Ah ; '*'
 * 00000001402DA532: jle     loc_1402DC3A7
 * 00000001402DA538: cmp     r15d, 2Bh ; '+'
 * 00000001402DA53C: jz      loc_1402DB3A2
 * 00000001402DA542: cmp     r15d, 2Ch ; ','
 * 00000001402DA546: jz      loc_1402DA860
 * 00000001402DA54C: cmp     r15d, 2Eh ; '.'
 * 00000001402DA550: jz      loc_1402DA778
 * 00000001402DA556: cmp     r15d, 2Fh ; '/'
 * 00000001402DA55A: jnz     loc_1402DC529
 * 00000001402DA560: mov     rax, gs:188h
 * 00000001402DA569: mov     rcx, [rax+0B8h]
 * 00000001402DA570: mov     [rbp+2250h+var_2180], rcx
 * 00000001402DA577: mov     rax, [rsi+490h]
 * 00000001402DA57E: call    KeGuardDispatchICall
 * 00000001402DA583: or      r9d, 0FFFFFFFFh
 * 00000001402DA587: xor     r15d, r15d
 * 00000001402DA58A: mov     r14d, eax
 * 00000001402DA58D: cmp     eax, r9d
 * 00000001402DA590: jnz     loc_1402DA6E5
 * 00000001402DA596: mov     [rbp+2250h+var_2180], r15
 * 00000001402DA59D: mov     rcx, [rsi+820h]
 * 00000001402DA5A4: test    rcx, rcx
 * 00000001402DA5A7: jz      short loc_1402DA5D5
 * 00000001402DA5A9: mov     rax, [rsi+480h]
 * 00000001402DA5B0: lea     rdx, [rbp+2250h+var_2180]
 * 00000001402DA5B7: call    KeGuardDispatchICall
 * 00000001402DA5BC: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA5C3: test    eax, eax
 * 00000001402DA5C5: cmovs   rcx, r15
 * 00000001402DA5C9: mov     [rbp+2250h+var_2180], rcx
 * 00000001402DA5D0: test    rcx, rcx
 * 00000001402DA5D3: jnz     short loc_1402DA5EA
 * 00000001402DA5D5: mov     rax, [rsi+3C0h]
 * 00000001402DA5DC: xor     ecx, ecx
 * 00000001402DA5DE: call    KeGuardDispatchICall
 * 00000001402DA5E3: mov     [rbp+2250h+var_2180], rax
 * 00000001402DA5EA: mov     [rsi+820h], r15
 * 00000001402DA5F1: mov     ebx, r15d
 * 00000001402DA5F4: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA5FB: test    rcx, rcx
 * 00000001402DA5FE: jz      loc_1402DA6D7
 * 00000001402DA604: mov     r12d, 1
 * 00000001402DA60A: mov     rax, [rsi+3A0h]
 * 00000001402DA611: add     ebx, r12d
 * 00000001402DA614: call    KeGuardDispatchICall
 * 00000001402DA619: test    eax, eax
 * 00000001402DA61B: js      short loc_1402DA67A
 * 00000001402DA61D: mov     rax, [rsi+438h]
 * 00000001402DA624: lea     rdx, [rbp+2250h+var_1760]
 * 00000001402DA62B: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA632: call    KeGuardDispatchICall
 * 00000001402DA637: mov     rax, [rsi+490h]
 * 00000001402DA63E: call    KeGuardDispatchICall
 * 00000001402DA643: mov     r14d, eax
 * 00000001402DA646: lea     rcx, [rbp+2250h+var_1760]
 * 00000001402DA64D: mov     rax, [rsi+440h]
 * 00000001402DA654: call    KeGuardDispatchICall
 * 00000001402DA659: mov     rax, [rsi+3A8h]
 * 00000001402DA660: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA667: call    KeGuardDispatchICall
 * 00000001402DA66C: cmp     r14d, 0FFFFFFFFh
 * 00000001402DA670: jnz     short loc_1402DA6A1
 * 00000001402DA672: cmp     ebx, 100h
 * 00000001402DA678: ja      short loc_1402DA6A1
 * 00000001402DA67A: mov     rax, [rsi+3C0h]
 * 00000001402DA681: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA688: call    KeGuardDispatchICall
 * 00000001402DA68D: mov     [rbp+2250h+var_2180], rax
 * 00000001402DA694: mov     rcx, rax
 * 00000001402DA697: test    rax, rax
 * 00000001402DA69A: jz      short loc_1402DA6D7
 * 00000001402DA69C: jmp     loc_1402DA60A
 * 00000001402DA6A1: mov     rax, [rsi+488h]
 * 00000001402DA6A8: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA6AF: call    KeGuardDispatchICall
 * 00000001402DA6B4: mov     [rsi+820h], rax
 * 00000001402DA6BB: mov     rax, [rsi+1E0h]
 * 00000001402DA6C2: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA6C9: call    KeGuardDispatchICall
 * 00000001402DA6CE: or      r9d, 0FFFFFFFFh
 * 00000001402DA6D2: cmp     r14d, r9d
 * 00000001402DA6D5: jnz     short loc_1402DA6EB
 * 00000001402DA6D7: shl     ebx, 0Ch
 * 00000001402DA6DA: add     [rsi+6C8h], ebx
 * 00000001402DA6E0: jmp     loc_1402D3378
 * 00000001402DA6E5: mov     r12d, 1
 * 00000001402DA6EB: test    dword ptr [rsi+828h], 40000000h
 * 00000001402DA6F5: jz      short loc_1402DA73A
 * 00000001402DA6F7: mov     rcx, [rsi+908h]
 * 00000001402DA6FE: mov     edx, 30h ; '0'
 * 00000001402DA703: lea     r8d, [rdx-2Ah]
 * 00000001402DA707: mov     rax, [r13+0]
 * 00000001402DA70B: add     edx, 0FFFFFFF8h
 * 00000001402DA70E: mov     [rcx], rax
 * 00000001402DA711: add     r13, 8
 * 00000001402DA715: add     rcx, 8
 * 00000001402DA719: sub     r8, r12
 * 00000001402DA71C: jnz     short loc_1402DA707
 * 00000001402DA71E: test    edx, edx
 * 00000001402DA720: jz      short loc_1402DA733
 * 00000001402DA722: mov     al, [r13+0]
 * 00000001402DA726: add     r13, r12
 * 00000001402DA729: mov     [rcx], al
 * 00000001402DA72B: add     rcx, r12
 * 00000001402DA72E: add     edx, r9d
 * 00000001402DA731: jnz     short loc_1402DA722
 * 00000001402DA733: mov     r13, [rsi+908h]
 * 00000001402DA73A: mov     [r13+18h], r14d
 * 00000001402DA73E: mov     rcx, [rbp+2250h+var_2180]
 * 00000001402DA745: cmp     [rsi+790h], r15d
 * 00000001402DA74C: jnz     loc_1402D3378
 * 00000001402DA752: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA75C: add     rax, rsi
 * 00000001402DA75F: mov     [rsi+798h], rax
 * 00000001402DA766: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DA770: add     rax, r13
 * 00000001402DA773: jmp     loc_1402D7A63
 * 00000001402DA778: mov     eax, [rsi+6D0h]
 * 00000001402DA77E: test    dl, al
 * 00000001402DA780: jnz     loc_1402D3375
 * 00000001402DA786: mov     r15, [rsi+540h]
 * 00000001402DA78D: xor     eax, eax
 * 00000001402DA78F: mov     r14d, eax
 * 00000001402DA792: mov     rax, [rsi+178h]
 * 00000001402DA799: call    KeGuardDispatchICall
 * 00000001402DA79E: test    dword ptr [rsi+828h], 40000000h
 * 00000001402DA7A8: jnz     short loc_1402DA7C2
 * 00000001402DA7AA: mov     ecx, [rsi+7E8h]
 * 00000001402DA7B0: cmp     ecx, 7
 * 00000001402DA7B3: jnb     short loc_1402DA7C2
 * 00000001402DA7B5: mov     r12d, 1
 * 00000001402DA7BB: mov     ebx, r12d
 * 00000001402DA7BE: shl     bl, cl
 * 00000001402DA7C0: jmp     short loc_1402DA7DF
 * 00000001402DA7C2: mov     rax, [rsi+128h]
 * 00000001402DA7C9: xor     edx, edx
 * 00000001402DA7CB: mov     rcx, [rsi+898h]
 * 00000001402DA7D2: call    KeGuardDispatchICall
 * 00000001402DA7D7: mov     bl, 80h
 * 00000001402DA7D9: mov     r12d, 1
 * 00000001402DA7DF: mov     rax, [rsi+138h]
 * 00000001402DA7E6: xor     edx, edx
 * 00000001402DA7E8: mov     rcx, r15
 * 00000001402DA7EB: call    KeGuardDispatchICall
 * 00000001402DA7F0: cmp     bl, 80h
 * 00000001402DA7F3: jz      short loc_1402DA81A
 * 00000001402DA7F5: mov     rcx, [rsi+518h]
 * 00000001402DA7FC: mov     rax, [rcx]
 * 00000001402DA7FF: cmp     rax, rcx
 * 00000001402DA802: jz      short loc_1402DA82F
 * 00000001402DA804: not     bl
 * 00000001402DA806: lock and [rax-12Ah], bl
 * 00000001402DA80D: mov     rax, [rax]
 * 00000001402DA810: add     r14d, r12d
 * 00000001402DA813: cmp     rax, rcx
 * 00000001402DA816: jnz     short loc_1402DA806
 * 00000001402DA818: jmp     short loc_1402DA82F
 * 00000001402DA81A: mov     rax, [rsi+130h]
 * 00000001402DA821: xor     edx, edx
 * 00000001402DA823: mov     rcx, [rsi+898h]
 * 00000001402DA82A: call    KeGuardDispatchICall
 * 00000001402DA82F: mov     rcx, [rsi+540h]
 * 00000001402DA836: xor     edx, edx
 * 00000001402DA838: mov     rax, [rsi+140h]
 * 00000001402DA83F: call    KeGuardDispatchICall
 * 00000001402DA844: mov     rax, [rsi+180h]
 * 00000001402DA84B: call    KeGuardDispatchICall
 * 00000001402DA850: shl     r14d, 7
 * 00000001402DA854: add     [rsi+6C8h], r14d
 * 00000001402DA85B: jmp     loc_1402D3375
 * 00000001402DA860: mov     ecx, [r13+20h]
 * 00000001402DA864: mov     edx, 1
 * 00000001402DA869: shr     ecx, 1
 * 00000001402DA86B: mov     [rbp+2250h+var_21F0], rsi
 * 00000001402DA86F: and     ecx, edx
 * 00000001402DA871: jz      short loc_1402DA892
 * 00000001402DA873: xor     r15d, r15d
 * 00000001402DA876: cmp     [rsi+818h], r15
 * 00000001402DA87D: jz      loc_1402D8D57
 * 00000001402DA883: mov     eax, [rsi+82Ch]
 * 00000001402DA889: test    al, 4
 * 00000001402DA88B: jz      short loc_1402DA895
 * 00000001402DA88D: jmp     loc_1402D8D57
 * 00000001402DA892: xor     r15d, r15d
 * 00000001402DA895: test    ecx, ecx
 * 00000001402DA897: jz      loc_1402DABBF
 * 00000001402DA89D: mov     edx, [rsi+82Ch]
 * 00000001402DA8A3: mov     ecx, edx
 * 00000001402DA8A5: cmp     [rsi+6C4h], r15d
 * 00000001402DA8AC: jnz     short loc_1402DA8C0
 * 00000001402DA8AE: shl     ecx, 3
 * 00000001402DA8B1: xor     ecx, edx
 * 00000001402DA8B3: and     ecx, 20h
 * 00000001402DA8B6: xor     ecx, edx
 * 00000001402DA8B8: mov     [rsi+82Ch], ecx
 * 00000001402DA8BE: jmp     short loc_1402DA8CF
 * 00000001402DA8C0: mov     eax, edx
 * 00000001402DA8C2: shr     eax, 3
 * 00000001402DA8C5: xor     eax, edx
 * 00000001402DA8C7: test    al, 4
 * 00000001402DA8C9: jnz     loc_1402D8D57
 * 00000001402DA8CF: cmp     [rsi+818h], r15
 * 00000001402DA8D6: jnz     short loc_1402DA8E4
 * 00000001402DA8D8: mov     [rsi+6C4h], r15d
 * 00000001402DA8DF: jmp     loc_1402DAE2E
 * 00000001402DA8E4: mov     edx, ecx
 * 00000001402DA8E6: cmp     [rsi+6C4h], r15d
 * 00000001402DA8ED: jnz     short loc_1402DA901
 * 00000001402DA8EF: shl     edx, 3
 * 00000001402DA8F2: xor     edx, ecx
 * 00000001402DA8F4: and     edx, 20h
 * 00000001402DA8F7: xor     edx, ecx
 * 00000001402DA8F9: mov     [rsi+82Ch], edx
 * 00000001402DA8FF: jmp     short loc_1402DA90C
 * 00000001402DA901: mov     eax, ecx
 * 00000001402DA903: shr     eax, 3
 * 00000001402DA906: xor     eax, ecx
 * 00000001402DA908: test    al, 4
 * 00000001402DA90A: jnz     short loc_1402DA8D8
 * 00000001402DA90C: test    dl, 4
 * 00000001402DA90F: jz      loc_1402DA9CB
 * 00000001402DA915: mov     rcx, [r13+8]
 * 00000001402DA919: mov     eax, 0FFFh
 * 00000001402DA91E: mov     r14d, [r13+10h]
 * 00000001402DA922: mov     rbx, rcx
 * 00000001402DA925: add     r14, rax
 * 00000001402DA928: and     rcx, rax
 * 00000001402DA92B: add     r14, rcx
 * 00000001402DA92E: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402DA935: shr     r14, 0Ch
 * 00000001402DA939: test    r14, r14
 * 00000001402DA93C: jz      loc_1402DAE2E
 * 00000001402DA942: mov     rdi, 0B3B74BDEE4453415h
 * 00000001402DA94C: mov     r12d, 1
 * 00000001402DA952: mov     rax, [rsi+2B0h]
 * 00000001402DA959: mov     rcx, rbx
 * 00000001402DA95C: sub     r14, r12
 * 00000001402DA95F: call    KeGuardDispatchICall
 * 00000001402DA964: test    al, al
 * 00000001402DA966: jz      short loc_1402DA9A9
 * 00000001402DA968: cmp     [rsi+790h], r15d
 * 00000001402DA96F: jnz     short loc_1402DA9A9
 * 00000001402DA971: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DA97B: add     rax, rsi
 * 00000001402DA97E: mov     [rsi+798h], rax
 * 00000001402DA985: lea     rax, [rdi+r13]
 * 00000001402DA989: mov     [rsi+7A0h], rax
 * 00000001402DA990: movsxd  rax, dword ptr [r13+0]
 * 00000001402DA994: mov     [rsi+7A8h], rax
 * 00000001402DA99B: mov     [rsi+7B0h], rbx
 * 00000001402DA9A2: mov     [rsi+790h], r12d
 * 00000001402DA9A9: add     dword ptr [rsi+6C8h], 100h
 * 00000001402DA9B3: add     rbx, 1000h
 * 00000001402DA9BA: test    r14, r14
 * 00000001402DA9BD: jnz     short loc_1402DA952
 * 00000001402DA9BF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DA9C6: jmp     loc_1402DAE2E
 * 00000001402DA9CB: mov     r14, [r13+8]
 * 00000001402DA9CF: mov     r12d, 40h ; '@'
 * 00000001402DA9D5: mov     r8d, [r13+10h]
 * 00000001402DA9D9: mov     r9, r14
 * 00000001402DA9DC: add     [rsi+6C8h], r8d
 * 00000001402DA9E3: mov     rax, r14
 * 00000001402DA9E6: mov     r10d, [rsi+6B4h]
 * 00000001402DA9ED: mov     r15, [rsi+6B8h]
 * 00000001402DA9F4: lea     rcx, [r14+r8]
 * 00000001402DA9F8: cmp     r14, rcx
 * 00000001402DA9FB: jnb     short loc_1402DAA08
 * 00000001402DA9FD: prefetchnta byte ptr [rax]
 * 00000001402DAA00: add     rax, r12
 * 00000001402DAA03: cmp     rax, rcx
 * 00000001402DAA06: jb      short loc_1402DA9FD
 * 00000001402DAA08: mov     r11d, r8d
 * 00000001402DAA0B: mov     rbx, r15
 * 00000001402DAA0E: shr     r11d, 7
 * 00000001402DAA12: mov     edx, 1
 * 00000001402DAA17: test    r11d, r11d
 * 00000001402DAA1A: jz      short loc_1402DAA88
 * 00000001402DAA1C: mov     rdi, 7010008004002001h
 * 00000001402DAA26: mov     eax, 8
 * 00000001402DAA2B: xor     rbx, [r9]
 * 00000001402DAA2E: mov     ecx, r10d
 * 00000001402DAA31: rol     rbx, cl
 * 00000001402DAA34: xor     rbx, [r9+8]
 * 00000001402DAA38: add     r9, 10h
 * 00000001402DAA3C: rol     rbx, cl
 * 00000001402DAA3F: sub     rax, rdx
 * 00000001402DAA42: jnz     short loc_1402DAA2B
 * 00000001402DAA44: mov     rcx, r9
 * 00000001402DAA47: sub     rcx, r14
 * 00000001402DAA4A: xor     rcx, r15
 * 00000001402DAA4D: mov     rax, rcx
 * 00000001402DAA50: rol     rax, 11h
 * 00000001402DAA54: xor     rcx, rax
 * 00000001402DAA57: mov     rax, rdi
 * 00000001402DAA5A: mul     rcx
 * 00000001402DAA5D: xor     r10d, eax
 * 00000001402DAA60: mov     [rbp+2250h+var_1C30], rdx
 * 00000001402DAA67: xor     r10d, edx
 * 00000001402DAA6A: mov     edx, 1
 * 00000001402DAA6F: and     r10d, 3Fh
 * 00000001402DAA73: cmovz   r10d, edx
 * 00000001402DAA77: add     r11d, 0FFFFFFFFh
 * 00000001402DAA7B: jnz     short loc_1402DAA26
 * 00000001402DAA7D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DAA81: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DAA88: and     r8d, 7Fh
 * 00000001402DAA8C: cmp     r8d, 8
 * 00000001402DAA90: jb      short loc_1402DAAAF
 * 00000001402DAA92: mov     eax, r8d
 * 00000001402DAA95: shr     rax, 3
 * 00000001402DAA99: xor     rbx, [r9]
 * 00000001402DAA9C: mov     ecx, r10d
 * 00000001402DAA9F: rol     rbx, cl
 * 00000001402DAAA2: add     r9, 8
 * 00000001402DAAA6: add     r8d, 0FFFFFFF8h
 * 00000001402DAAAA: sub     rax, rdx
 * 00000001402DAAAD: jnz     short loc_1402DAA99
 * 00000001402DAAAF: xor     r15d, r15d
 * 00000001402DAAB2: test    r8d, r8d
 * 00000001402DAAB5: jz      short loc_1402DAACD
 * 00000001402DAAB7: movzx   eax, byte ptr [r9]
 * 00000001402DAABB: mov     ecx, r10d
 * 00000001402DAABE: xor     rbx, rax
 * 00000001402DAAC1: add     r9, rdx
 * 00000001402DAAC4: rol     rbx, cl
 * 00000001402DAAC7: add     r8d, 0FFFFFFFFh
 * 00000001402DAACB: jnz     short loc_1402DAAB7
 * 00000001402DAACD: mov     rax, rbx
 * 00000001402DAAD0: jmp     short loc_1402DAAD4
 * 00000001402DAAD2: xor     ebx, eax
 * 00000001402DAAD4: shr     rax, 1Fh
 * 00000001402DAAD8: test    rax, rax
 * 00000001402DAADB: jnz     short loc_1402DAAD2
 * 00000001402DAADD: mov     edx, [r13+14h]
 * 00000001402DAAE1: btr     ebx, 1Fh
 * 00000001402DAAE5: cmp     ebx, edx
 * 00000001402DAAE7: jz      loc_1402DAE2E
 * 00000001402DAAED: mov     ecx, [r13+10h]
 * 00000001402DAAF1: mov     r8, [r13+8]
 * 00000001402DAAF5: test    rcx, rcx
 * 00000001402DAAF8: jz      loc_1402DABA5
 * 00000001402DAAFE: mov     eax, [rsi+82Ch]
 * 00000001402DAB04: test    r12b, al
 * 00000001402DAB07: jz      loc_1402DABA5
 * 00000001402DAB0D: mov     r12, cr8
 * 00000001402DAB11: mov     eax, 2
 * 00000001402DAB16: mov     cr8, rax
 * 00000001402DAB1A: lea     rax, [rcx-1]
 * 00000001402DAB1E: mov     r14, r8
 * 00000001402DAB21: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402DAB28: add     rax, r8
 * 00000001402DAB2B: mov     ecx, 0FFFh
 * 00000001402DAB30: or      rax, rcx
 * 00000001402DAB33: mov     [rbp+2250h+var_2230], rax
 * 00000001402DAB37: lea     r13, [r14-1]
 * 00000001402DAB3B: movzx   r15d, r12b
 * 00000001402DAB3F: mov     rax, [rsi+468h]
 * 00000001402DAB46: xor     edx, edx
 * 00000001402DAB48: mov     rcx, r14
 * 00000001402DAB4B: call    KeGuardDispatchICall
 * 00000001402DAB50: cmp     eax, 0C000022Dh
 * 00000001402DAB55: jnz     short loc_1402DAB7B
 * 00000001402DAB57: mov     eax, 1
 * 00000001402DAB5C: cmp     r12b, al
 * 00000001402DAB5F: ja      short loc_1402DAB7F
 * 00000001402DAB61: movzx   r15d, r12b
 * 00000001402DAB65: mov     cr8, r15
 * 00000001402DAB69: mov     al, [r14]
 * 00000001402DAB6C: mov     rax, cr8
 * 00000001402DAB70: mov     eax, 2
 * 00000001402DAB75: mov     cr8, rax
 * 00000001402DAB79: jmp     short loc_1402DAB3F
 * 00000001402DAB7B: test    eax, eax
 * 00000001402DAB7D: js      short loc_1402DAB96
 * 00000001402DAB7F: mov     r10d, 1000h
 * 00000001402DAB85: add     r14, r10
 * 00000001402DAB88: add     r13, r10
 * 00000001402DAB8B: cmp     r13, [rbp+2250h+var_2230]
 * 00000001402DAB8F: jnz     short loc_1402DAB3B
 * 00000001402DAB91: jmp     loc_1402DADA5
 * 00000001402DAB96: mov     cr8, r15
 * 00000001402DAB9A: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DAB9E: xor     r15d, r15d
 * 00000001402DABA1: mov     edx, [r13+14h]
 * 00000001402DABA5: mov     eax, [rsi+790h]
 * 00000001402DABAB: test    eax, eax
 * 00000001402DABAD: jnz     loc_1402DADE3
 * 00000001402DABB3: mov     ecx, ebx
 * 00000001402DABB5: mov     eax, edx
 * 00000001402DABB7: xor     rcx, rax
 * 00000001402DABBA: jmp     loc_1402DADD0
 * 00000001402DABBF: mov     r14, [r13+8]
 * 00000001402DABC3: mov     r8d, [r13+10h]
 * 00000001402DABC7: mov     r9, r14
 * 00000001402DABCA: add     [rsi+6C8h], r8d
 * 00000001402DABD1: mov     rax, r14
 * 00000001402DABD4: mov     r10d, [rsi+6B4h]
 * 00000001402DABDB: mov     r15, [rsi+6B8h]
 * 00000001402DABE2: lea     rcx, [r14+r8]
 * 00000001402DABE6: cmp     r14, rcx
 * 00000001402DABE9: jnb     short loc_1402DABFC
 * 00000001402DABEB: mov     r11d, 40h ; '@'
 * 00000001402DABF1: prefetchnta byte ptr [rax]
 * 00000001402DABF4: add     rax, r11
 * 00000001402DABF7: cmp     rax, rcx
 * 00000001402DABFA: jb      short loc_1402DABF1
 * 00000001402DABFC: mov     r11d, r8d
 * 00000001402DABFF: mov     rbx, r15
 * 00000001402DAC02: shr     r11d, 7
 * 00000001402DAC06: test    r11d, r11d
 * 00000001402DAC09: jz      short loc_1402DAC77
 * 00000001402DAC0B: mov     rdi, 7010008004002001h
 * 00000001402DAC15: mov     eax, 8
 * 00000001402DAC1A: xor     rbx, [r9]
 * 00000001402DAC1D: mov     ecx, r10d
 * 00000001402DAC20: rol     rbx, cl
 * 00000001402DAC23: xor     rbx, [r9+8]
 * 00000001402DAC27: add     r9, 10h
 * 00000001402DAC2B: rol     rbx, cl
 * 00000001402DAC2E: sub     rax, rdx
 * 00000001402DAC31: jnz     short loc_1402DAC1A
 * 00000001402DAC33: mov     rcx, r9
 * 00000001402DAC36: sub     rcx, r14
 * 00000001402DAC39: xor     rcx, r15
 * 00000001402DAC3C: mov     rax, rcx
 * 00000001402DAC3F: rol     rax, 11h
 * 00000001402DAC43: xor     rcx, rax
 * 00000001402DAC46: mov     rax, rdi
 * 00000001402DAC49: mul     rcx
 * 00000001402DAC4C: xor     r10d, eax
 * 00000001402DAC4F: mov     [rbp+2250h+var_1C28], rdx
 * 00000001402DAC56: xor     r10d, edx
 * 00000001402DAC59: mov     edx, 1
 * 00000001402DAC5E: and     r10d, 3Fh
 * 00000001402DAC62: cmovz   r10d, edx
 * 00000001402DAC66: add     r11d, 0FFFFFFFFh
 * 00000001402DAC6A: jnz     short loc_1402DAC15
 * 00000001402DAC6C: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DAC70: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DAC77: and     r8d, 7Fh
 * 00000001402DAC7B: cmp     r8d, 8
 * 00000001402DAC7F: jb      short loc_1402DAC9E
 * 00000001402DAC81: mov     eax, r8d
 * 00000001402DAC84: shr     rax, 3
 * 00000001402DAC88: xor     rbx, [r9]
 * 00000001402DAC8B: mov     ecx, r10d
 * 00000001402DAC8E: rol     rbx, cl
 * 00000001402DAC91: add     r9, 8
 * 00000001402DAC95: add     r8d, 0FFFFFFF8h
 * 00000001402DAC99: sub     rax, rdx
 * 00000001402DAC9C: jnz     short loc_1402DAC88
 * 00000001402DAC9E: xor     r15d, r15d
 * 00000001402DACA1: test    r8d, r8d
 * 00000001402DACA4: jz      short loc_1402DACBC
 * 00000001402DACA6: movzx   eax, byte ptr [r9]
 * 00000001402DACAA: mov     ecx, r10d
 * 00000001402DACAD: xor     rbx, rax
 * 00000001402DACB0: add     r9, rdx
 * 00000001402DACB3: rol     rbx, cl
 * 00000001402DACB6: add     r8d, 0FFFFFFFFh
 * 00000001402DACBA: jnz     short loc_1402DACA6
 * 00000001402DACBC: mov     rax, rbx
 * 00000001402DACBF: jmp     short loc_1402DACC3
 * 00000001402DACC1: xor     ebx, eax
 * 00000001402DACC3: shr     rax, 1Fh
 * 00000001402DACC7: test    rax, rax
 * 00000001402DACCA: jnz     short loc_1402DACC1
 * 00000001402DACCC: btr     ebx, 1Fh
 * 00000001402DACD0: mov     r12d, r15d
 * 00000001402DACD3: cmp     ebx, [r13+14h]
 * 00000001402DACD7: jz      loc_1402DAE2E
 * 00000001402DACDD: cmp     [r13+0], r15d
 * 00000001402DACE1: jnz     short loc_1402DACEB
 * 00000001402DACE3: cmp     [r13+18h], r15d
 * 00000001402DACE7: cmovnz  r12d, edx
 * 00000001402DACEB: mov     ecx, [r13+10h]
 * 00000001402DACEF: mov     rdx, [r13+8]
 * 00000001402DACF3: test    rcx, rcx
 * 00000001402DACF6: jz      loc_1402DADBD
 * 00000001402DACFC: mov     eax, [rsi+82Ch]
 * 00000001402DAD02: mov     r8d, 40h ; '@'
 * 00000001402DAD08: test    r8b, al
 * 00000001402DAD0B: jz      loc_1402DADBD
 * 00000001402DAD11: mov     r13, cr8
 * 00000001402DAD15: lea     eax, [r8-3Eh]
 * 00000001402DAD19: mov     cr8, rax
 * 00000001402DAD1D: lea     rax, [rcx-1]
 * 00000001402DAD21: mov     r14, rdx
 * 00000001402DAD24: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402DAD2B: add     rax, rdx
 * 00000001402DAD2E: mov     ecx, 0FFFh
 * 00000001402DAD33: or      rax, rcx
 * 00000001402DAD36: mov     [rbp+2250h+var_2230], rax
 * 00000001402DAD3A: lea     rax, [r14-1]
 * 00000001402DAD3E: mov     [rbp+2250h+var_2250], rax
 * 00000001402DAD42: movzx   r15d, r13b
 * 00000001402DAD46: mov     rax, [rsi+468h]
 * 00000001402DAD4D: xor     edx, edx
 * 00000001402DAD4F: mov     rcx, r14
 * 00000001402DAD52: call    KeGuardDispatchICall
 * 00000001402DAD57: cmp     eax, 0C000022Dh
 * 00000001402DAD5C: jnz     short loc_1402DAD87
 * 00000001402DAD5E: test    r12d, r12d
 * 00000001402DAD61: jnz     short loc_1402DADB2
 * 00000001402DAD63: lea     eax, [r12+1]
 * 00000001402DAD68: cmp     r13b, al
 * 00000001402DAD6B: ja      short loc_1402DAD8B
 * 00000001402DAD6D: movzx   r15d, r13b
 * 00000001402DAD71: mov     cr8, r15
 * 00000001402DAD75: mov     al, [r14]
 * 00000001402DAD78: mov     rax, cr8
 * 00000001402DAD7C: lea     eax, [r12+2]
 * 00000001402DAD81: mov     cr8, rax
 * 00000001402DAD85: jmp     short loc_1402DAD46
 * 00000001402DAD87: test    eax, eax
 * 00000001402DAD89: js      short loc_1402DADB2
 * 00000001402DAD8B: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DAD8F: mov     r10d, 1000h
 * 00000001402DAD95: add     rax, r10
 * 00000001402DAD98: add     r14, r10
 * 00000001402DAD9B: mov     [rbp+2250h+var_2250], rax
 * 00000001402DAD9F: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402DADA3: jnz     short loc_1402DAD42
 * 00000001402DADA5: mov     cr8, r15
 * 00000001402DADA9: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DADAD: xor     r15d, r15d
 * 00000001402DADB0: jmp     short loc_1402DAE2E
 * 00000001402DADB2: mov     cr8, r15
 * 00000001402DADB6: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DADBA: xor     r15d, r15d
 * 00000001402DADBD: mov     eax, [rsi+790h]
 * 00000001402DADC3: mov     edx, [r13+14h]
 * 00000001402DADC7: test    eax, eax
 * 00000001402DADC9: jnz     short loc_1402DADE3
 * 00000001402DADCB: mov     ecx, ebx
 * 00000001402DADCD: xor     rcx, rdx
 * 00000001402DADD0: mov     rax, [rsi+588h]
 * 00000001402DADD7: mov     [rax+18h], rcx
 * 00000001402DADDB: mov     eax, [rsi+790h]
 * 00000001402DADE1: test    eax, eax
 * 00000001402DADE3: mov     rcx, [r13+8]
 * 00000001402DADE7: jnz     short loc_1402DAE2E
 * 00000001402DADE9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DADF3: add     rax, rsi
 * 00000001402DADF6: mov     [rsi+798h], rax
 * 00000001402DADFD: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DAE07: add     rax, r13
 * 00000001402DAE0A: mov     [rsi+7A0h], rax
 * 00000001402DAE11: movsxd  rax, dword ptr [r13+0]
 * 00000001402DAE15: mov     [rsi+7A8h], rax
 * 00000001402DAE1C: mov     eax, 1
 * 00000001402DAE21: mov     [rsi+7B0h], rcx
 * 00000001402DAE28: mov     [rsi+790h], eax
 * 00000001402DAE2E: mov     eax, [r13+20h]
 * 00000001402DAE32: mov     r14d, 1
 * 00000001402DAE38: test    r14b, al
 * 00000001402DAE3B: jz      loc_1402D3378
 * 00000001402DAE41: mov     rbx, [r13+18h]
 * 00000001402DAE45: mov     rax, [rsi+1F8h]
 * 00000001402DAE4C: mov     rcx, rbx
 * 00000001402DAE4F: mov     [rbp+2250h+var_2250], rbx
 * 00000001402DAE53: call    KeGuardDispatchICall
 * 00000001402DAE58: movzx   r12d, word ptr [rax+14h]
 * 00000001402DAE5D: add     r12, 18h
 * 00000001402DAE61: add     r12, rax
 * 00000001402DAE64: movzx   eax, word ptr [rax+6]
 * 00000001402DAE68: lea     rcx, [rax+rax*4]
 * 00000001402DAE6C: lea     rax, [r12+rcx*8]
 * 00000001402DAE70: mov     [rbp+2250h+var_2230], rax
 * 00000001402DAE74: cmp     r12, rax
 * 00000001402DAE77: jz      loc_1402D3378
 * 00000001402DAE7D: mov     r15d, [rsi+6C4h]
 * 00000001402DAE84: xor     edx, edx
 * 00000001402DAE86: test    r15d, r15d
 * 00000001402DAE89: jnz     short loc_1402DAE9B
 * 00000001402DAE8B: mov     dword ptr [rsi+6C4h], 1000h
 * 00000001402DAE95: mov     r15d, 1000h
 * 00000001402DAE9B: mov     eax, r15d
 * 00000001402DAE9E: cmp     rbx, [rsi+5E0h]
 * 00000001402DAEA5: jz      short loc_1402DAEB5
 * 00000001402DAEA7: cmp     rbx, [rsi+5E8h]
 * 00000001402DAEAE: jz      short loc_1402DAEB5
 * 00000001402DAEB0: mov     dword ptr [rbp+2250h+var_2218], edx
 * 00000001402DAEB3: jmp     short loc_1402DAEBC
 * 00000001402DAEB5: mov     dword ptr [rbp+2250h+var_2218], r14d
 * 00000001402DAEB9: mov     r15d, eax
 * 00000001402DAEBC: mov     esi, dword ptr [rbp+2250h+var_2218]
 * 00000001402DAEBF: mov     rdi, [rbp+2250h+var_2230]
 * 00000001402DAEC3: mov     ecx, [r12+10h]
 * 00000001402DAEC8: mov     eax, [r12+8]
 * 00000001402DAECD: cmp     ecx, eax
 * 00000001402DAECF: mov     r11d, [r12+0Ch]
 * 00000001402DAED4: cmovbe  ecx, eax
 * 00000001402DAED7: lea     r13d, [r11+0FFFh]
 * 00000001402DAEDE: add     r13d, ecx
 * 00000001402DAEE1: and     r13d, 0FFFFF000h
 * 00000001402DAEE8: cmp     r15d, r13d
 * 00000001402DAEEB: jnb     loc_1402DB002
 * 00000001402DAEF1: mov     eax, [r12+24h]
 * 00000001402DAEF6: bt      eax, 19h
 * 00000001402DAEFA: jb      loc_1402DAFFF
 * 00000001402DAF00: mov     ecx, [r12]
 * 00000001402DAF04: cmp     ecx, 54494E49h
 * 00000001402DAF0A: jnz     short loc_1402DAF1B
 * 00000001402DAF0C: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001402DAF15: jz      loc_1402DAFFF
 * 00000001402DAF1B: cmp     ecx, 45474150h
 * 00000001402DAF21: jnz     short loc_1402DAF59
 * 00000001402DAF23: movzx   eax, word ptr [r12+4]
 * 00000001402DAF29: mov     r8d, 7877h
 * 00000001402DAF2F: cmp     ax, r8w
 * 00000001402DAF33: jz      loc_1402DAFFF
 * 00000001402DAF39: mov     r8d, 7277h
 * 00000001402DAF3F: cmp     ax, r8w
 * 00000001402DAF43: jz      loc_1402DAFFF
 * 00000001402DAF49: mov     r8d, 7777h
 * 00000001402DAF4F: cmp     ax, r8w
 * 00000001402DAF53: jz      loc_1402DAFFF
 * 00000001402DAF59: cmp     ecx, 41525245h
 * 00000001402DAF5F: jnz     short loc_1402DAF72
 * 00000001402DAF61: mov     eax, 4154h
 * 00000001402DAF66: cmp     [r12+4], ax
 * 00000001402DAF6C: jz      loc_1402DAFFF
 * 00000001402DAF72: mov     rcx, [rbp+2250h+var_21F0]
 * 00000001402DAF76: test    rcx, rcx
 * 00000001402DAF79: jz      short loc_1402DAFB5
 * 00000001402DAF7B: mov     rax, [rcx+7D0h]
 * 00000001402DAF82: mov     r8, [rcx+7C8h]
 * 00000001402DAF89: mov     qword ptr [rbp+2250h+var_1EF8+8], rax
 * 00000001402DAF90: mov     rax, [rcx+7D8h]
 * 00000001402DAF97: mov     qword ptr [rbp+2250h+var_1EE8], rax
 * 00000001402DAF9E: mov     rax, [rcx+7E0h]
 * 00000001402DAFA5: mov     qword ptr [rbp+2250h+var_1EE8+8], rax
 * 00000001402DAFAC: mov     qword ptr [rbp+2250h+var_1EF8], r8
 * 00000001402DAFB3: jmp     short loc_1402DAFD8
 * 00000001402DAFB5: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 00000001402DAFBC: movups  xmm1, xmmword ptr cs:off_140399BC0; "INIT"
 * 00000001402DAFC3: movups  [rbp+2250h+var_1EF8], xmm0
 * 00000001402DAFCA: mov     r8, qword ptr [rbp+2250h+var_1EF8]
 * 00000001402DAFD1: movups  [rbp+2250h+var_1EE8], xmm1
 * 00000001402DAFD8: mov     r10d, 7
 * 00000001402DAFDE: mov     r9, r12
 * 00000001402DAFE1: or      r14d, 0FFFFFFFFh
 * 00000001402DAFE5: movzx   edx, byte ptr [r9]
 * 00000001402DAFE9: inc     r9
 * 00000001402DAFEC: movzx   eax, byte ptr [r8]
 * 00000001402DAFF0: inc     r8
 * 00000001402DAFF3: cmp     rdx, rax
 * 00000001402DAFF6: jnz     short loc_1402DB03F
 * 00000001402DAFF8: add     r10d, r14d
 * 00000001402DAFFB: jnz     short loc_1402DAFE5
 * 00000001402DAFFD: xor     edx, edx
 * 00000001402DAFFF: mov     r15d, r13d
 * 00000001402DB002: mov     r8, [rbp+2250h+var_21F0]
 * 00000001402DB006: add     r12, 28h ; '('
 * 00000001402DB00A: cmp     r12, rdi
 * 00000001402DB00D: jnz     loc_1402DAEC3
 * 00000001402DB013: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DB017: cmp     r12, rdi
 * 00000001402DB01A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DB021: jnz     loc_1402DB396
 * 00000001402DB027: cmp     r15d, r13d
 * 00000001402DB02A: jb      loc_1402DB396
 * 00000001402DB030: xor     r15d, r15d
 * 00000001402DB033: mov     [r8+6C4h], r15d
 * 00000001402DB03A: jmp     loc_1402D3378
 * 00000001402DB03F: mov     r9, qword ptr [rbp+2250h+var_1EF8+8]
 * 00000001402DB046: mov     r8d, 8
 * 00000001402DB04C: mov     r10, r12
 * 00000001402DB04F: mov     rcx, [r10]
 * 00000001402DB052: add     r10, 8
 * 00000001402DB056: mov     rax, [r9]
 * 00000001402DB059: add     r9, 8
 * 00000001402DB05D: cmp     rcx, rax
 * 00000001402DB060: jnz     short loc_1402DB090
 * 00000001402DB062: add     r8d, 0FFFFFFF8h
 * 00000001402DB066: cmp     r8d, 8
 * 00000001402DB06A: jnb     short loc_1402DB04F
 * 00000001402DB06C: xor     edx, edx
 * 00000001402DB06E: test    r8d, r8d
 * 00000001402DB071: jz      short loc_1402DAFFF
 * 00000001402DB073: movzx   edx, byte ptr [r10]
 * 00000001402DB077: inc     r10
 * 00000001402DB07A: movzx   eax, byte ptr [r9]
 * 00000001402DB07E: inc     r9
 * 00000001402DB081: cmp     rdx, rax
 * 00000001402DB084: jnz     short loc_1402DB090
 * 00000001402DB086: add     r8d, r14d
 * 00000001402DB089: jnz     short loc_1402DB073
 * 00000001402DB08B: jmp     loc_1402DAFFD
 * 00000001402DB090: mov     r8, qword ptr [rbp+2250h+var_1EE8]
 * 00000001402DB097: mov     r10d, 4
 * 00000001402DB09D: mov     r9, r12
 * 00000001402DB0A0: movzx   edx, byte ptr [r9]
 * 00000001402DB0A4: inc     r9
 * 00000001402DB0A7: movzx   eax, byte ptr [r8]
 * 00000001402DB0AB: inc     r8
 * 00000001402DB0AE: cmp     rdx, rax
 * 00000001402DB0B1: jnz     short loc_1402DB0BD
 * 00000001402DB0B3: add     r10d, r14d
 * 00000001402DB0B6: jnz     short loc_1402DB0A0
 * 00000001402DB0B8: jmp     loc_1402DAFFD
 * 00000001402DB0BD: mov     r8, qword ptr [rbp+2250h+var_1EE8+8]
 * 00000001402DB0C4: mov     r10d, 6
 * 00000001402DB0CA: mov     r9, r12
 * 00000001402DB0CD: movzx   edx, byte ptr [r9]
 * 00000001402DB0D1: inc     r9
 * 00000001402DB0D4: movzx   eax, byte ptr [r8]
 * 00000001402DB0D8: inc     r8
 * 00000001402DB0DB: cmp     rdx, rax
 * 00000001402DB0DE: jnz     short loc_1402DB0EA
 * 00000001402DB0E0: add     r10d, r14d
 * 00000001402DB0E3: jnz     short loc_1402DB0CD
 * 00000001402DB0E5: jmp     loc_1402DAFFD
 * 00000001402DB0EA: mov     eax, [r12+24h]
 * 00000001402DB0EF: xor     edx, edx
 * 00000001402DB0F1: test    eax, eax
 * 00000001402DB0F3: js      loc_1402DAFFF
 * 00000001402DB0F9: bt      eax, 1Dh
 * 00000001402DB0FD: jnb     loc_1402DAFFF
 * 00000001402DB103: lea     r9d, [rdx+1]
 * 00000001402DB107: mov     r14d, r9d
 * 00000001402DB10A: test    esi, esi
 * 00000001402DB10C: jz      short loc_1402DB122
 * 00000001402DB10E: mov     eax, [r12]
 * 00000001402DB112: cmp     eax, 2E656461h
 * 00000001402DB117: jz      short loc_1402DB122
 * 00000001402DB119: cmp     eax, 45474150h
 * 00000001402DB11E: cmovnz  r14d, edx
 * 00000001402DB122: mov     r8, [rbp+2250h+var_21F0]
 * 00000001402DB126: cmp     r15d, r11d
 * 00000001402DB129: cmovnb  r11d, r15d
 * 00000001402DB12D: mov     r15d, r11d
 * 00000001402DB130: mov     eax, r15d
 * 00000001402DB133: add     rbx, rax
 * 00000001402DB136: test    byte ptr [r8+71Bh], 4
 * 00000001402DB13E: jz      short loc_1402DB1A3
 * 00000001402DB140: or      ecx, 0FFFFFFFFh
 * 00000001402DB143: mov     eax, ecx
 * 00000001402DB145: xbegin  $+6
 * 00000001402DB14B: cmp     eax, ecx
 * 00000001402DB14D: jnz     short loc_1402DB156
 * 00000001402DB14F: mov     al, [rbx]
 * 00000001402DB151: xend
 * 00000001402DB154: jmp     short loc_1402DB18A
 * 00000001402DB156: rdtsc
 * 00000001402DB158: shl     rdx, 20h
 * 00000001402DB15C: or      rax, rdx
 * 00000001402DB15F: mov     rcx, rax
 * 00000001402DB162: ror     rax, 3
 * 00000001402DB166: xor     rcx, rax
 * 00000001402DB169: mov     rax, 7010008004002001h
 * 00000001402DB173: mul     rcx
 * 00000001402DB176: mov     [rbp+2250h+var_1C20], rdx
 * 00000001402DB17D: xor     dl, al
 * 00000001402DB17F: mov     eax, 0Fh
 * 00000001402DB184: test    al, dl
 * 00000001402DB186: jz      short loc_1402DB1A1
 * 00000001402DB188: xor     edx, edx
 * 00000001402DB18A: add     [r8+6DCh], r9d
 * 00000001402DB191: add     dword ptr [r8+6C8h], 100h
 * 00000001402DB19C: jmp     loc_1402DB35C
 * 00000001402DB1A1: xor     edx, edx
 * 00000001402DB1A3: test    r14d, r14d
 * 00000001402DB1A6: jz      loc_1402DB235
 * 00000001402DB1AC: mov     rax, [r8+450h]
 * 00000001402DB1B3: lea     rcx, [rbp+2250h+var_1D38]
 * 00000001402DB1BA: mov     rdx, rbx
 * 00000001402DB1BD: call    KeGuardDispatchICall
 * 00000001402DB1C2: xor     edx, edx
 * 00000001402DB1C4: test    eax, eax
 * 00000001402DB1C6: jns     loc_1402DB2B1
 * 00000001402DB1CC: mov     r8, [rbp+2250h+var_21F0]
 * 00000001402DB1D0: lea     r9d, [rdx+1]
 * 00000001402DB1D4: cmp     eax, 0C0000005h
 * 00000001402DB1D9: jnz     loc_1402DB35C
 * 00000001402DB1DF: cmp     [r8+790h], edx
 * 00000001402DB1E6: jnz     loc_1402DB35C
 * 00000001402DB1EC: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DB1F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DB1FA: add     rax, r8
 * 00000001402DB1FD: mov     [r8+798h], rax
 * 00000001402DB204: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DB20E: add     rax, rcx
 * 00000001402DB211: mov     [r8+7A0h], rax
 * 00000001402DB218: movsxd  rax, dword ptr [rcx]
 * 00000001402DB21B: mov     [r8+7A8h], rax
 * 00000001402DB222: mov     [r8+7B0h], rbx
 * 00000001402DB229: mov     [r8+790h], r9d
 * 00000001402DB230: jmp     loc_1402DB35C
 * 00000001402DB235: mov     r9d, 0FFFh
 * 00000001402DB23B: mov     [rbp+2250h+var_1D38], rdx
 * 00000001402DB242: movzx   eax, bx
 * 00000001402DB245: mov     [rbp+2250h+var_1D2E], dx
 * 00000001402DB24C: and     ax, r9w
 * 00000001402DB250: mov     [rbp+2250h+var_1D10], 1000h
 * 00000001402DB25A: mov     ecx, 1FFFh
 * 00000001402DB25F: add     ax, cx
 * 00000001402DB262: mov     rcx, rbx
 * 00000001402DB265: shr     ax, 0Ch
 * 00000001402DB269: add     ax, 6
 * 00000001402DB26D: shl     ax, 3
 * 00000001402DB271: mov     [rbp+2250h+var_1D30], ax
 * 00000001402DB278: mov     rax, rbx
 * 00000001402DB27B: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001402DB281: mov     [rbp+2250h+var_1D18], rax
 * 00000001402DB288: mov     eax, ebx
 * 00000001402DB28A: and     eax, r9d
 * 00000001402DB28D: mov     [rbp+2250h+var_1D0C], eax
 * 00000001402DB293: mov     rax, [r8+458h]
 * 00000001402DB29A: call    KeGuardDispatchICall
 * 00000001402DB29F: mov     [rbp+2250h+var_1C18], rax
 * 00000001402DB2A6: shr     rax, 0Ch
 * 00000001402DB2AA: mov     [rbp+2250h+var_1D08], rax
 * 00000001402DB2B1: mov     rcx, [rbp+2250h+var_21F0]
 * 00000001402DB2B5: mov     eax, 1
 * 00000001402DB2BA: add     [rcx+6E0h], eax
 * 00000001402DB2C0: mov     eax, [rbp+2250h+var_1D0C]
 * 00000001402DB2C6: add     rax, [rbp+2250h+var_1D18]
 * 00000001402DB2CD: mov     [rcx+8F0h], rax
 * 00000001402DB2D4: mov     rax, [rbp+2250h+var_2240]
 * 00000001402DB2D8: mov     [rcx+8E8h], rax
 * 00000001402DB2DF: mov     rbx, cr8
 * 00000001402DB2E3: mov     eax, 2
 * 00000001402DB2E8: mov     cr8, rax
 * 00000001402DB2EC: mov     rax, [rcx+5F0h]
 * 00000001402DB2F3: xor     r8d, r8d
 * 00000001402DB2F6: add     rcx, 8C8h
 * 00000001402DB2FD: mov     edx, [rax]
 * 00000001402DB2FF: call    RtlInitMinimalBarrier
 * 00000001402DB304: mov     rdx, [rbp+2250h+var_21F0]
 * 00000001402DB308: mov     ecx, [rdx+694h]
 * 00000001402DB30E: mov     rax, [rdx+448h]
 * 00000001402DB315: add     rcx, rdx
 * 00000001402DB318: call    KeGuardDispatchICall
 * 00000001402DB31D: mov     r8, rax
 * 00000001402DB320: mov     [rbp+2250h+var_21F0], rax
 * 00000001402DB324: movzx   eax, bl
 * 00000001402DB327: mov     cr8, rax
 * 00000001402DB32B: xor     edx, edx
 * 00000001402DB32D: test    r14d, r14d
 * 00000001402DB330: jz      short loc_1402DB34B
 * 00000001402DB332: mov     rax, [r8+460h]
 * 00000001402DB339: lea     rcx, [rbp+2250h+var_1D38]
 * 00000001402DB340: call    KeGuardDispatchICall
 * 00000001402DB345: mov     r8, [rbp+2250h+var_21F0]
 * 00000001402DB349: xor     edx, edx
 * 00000001402DB34B: add     dword ptr [r8+6C8h], 14000h
 * 00000001402DB356: mov     r9d, 1
 * 00000001402DB35C: mov     eax, [r8+6C8h]
 * 00000001402DB363: add     r15d, 1000h
 * 00000001402DB36A: cmp     r15d, r13d
 * 00000001402DB36D: jnb     short loc_1402DB380
 * 00000001402DB36F: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402DB373: cmp     eax, [r8+6CCh]
 * 00000001402DB37A: jl      loc_1402DB130
 * 00000001402DB380: cmp     eax, [r8+6CCh]
 * 00000001402DB387: jge     loc_1402DB013
 * 00000001402DB38D: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402DB391: jmp     loc_1402DB006
 * 00000001402DB396: mov     [r8+6C4h], r15d
 * 00000001402DB39D: jmp     loc_1402D3375
 * 00000001402DB3A2: xor     eax, eax
 * 00000001402DB3A4: mov     r8d, 0Ch
 * 00000001402DB3AA: cmp     r15d, r8d
 * 00000001402DB3AD: jnz     loc_1402DB6B2
 * 00000001402DB3B3: cmp     [rsi+818h], rax
 * 00000001402DB3BA: jz      loc_1402D40F3
 * 00000001402DB3C0: mov     edx, [rsi+82Ch]
 * 00000001402DB3C6: mov     ecx, edx
 * 00000001402DB3C8: cmp     [rsi+6C4h], eax
 * 00000001402DB3CE: jnz     short loc_1402DB3E6
 * 00000001402DB3D0: shl     ecx, 3
 * 00000001402DB3D3: xor     ecx, edx
 * 00000001402DB3D5: and     ecx, 20h
 * 00000001402DB3D8: xor     ecx, edx
 * 00000001402DB3DA: mov     [rsi+82Ch], ecx
 * 00000001402DB3E0: jmp     short loc_1402DB3FB
 * 00000001402DB3E2: xor     eax, eax
 * 00000001402DB3E4: jmp     short loc_1402DB3AA
 * 00000001402DB3E6: mov     eax, edx
 * 00000001402DB3E8: shr     eax, 3
 * 00000001402DB3EB: xor     eax, edx
 * 00000001402DB3ED: test    al, 4
 * 00000001402DB3EF: jz      short loc_1402DB3F9
 * 00000001402DB3F1: xor     r15d, r15d
 * 00000001402DB3F4: jmp     loc_1402D8D57
 * 00000001402DB3F9: xor     eax, eax
 * 00000001402DB3FB: test    cl, 4
 * 00000001402DB3FE: jz      loc_1402DB6AD
 * 00000001402DB404: mov     r15, [r13+20h]
 * 00000001402DB408: mov     r8d, 0FFFh
 * 00000001402DB40E: mov     eax, [r13+28h]
 * 00000001402DB412: test    r15, r15
 * 00000001402DB415: jz      short loc_1402DB438
 * 00000001402DB417: mov     ebx, [rsi+6C4h]
 * 00000001402DB41D: sub     eax, ebx
 * 00000001402DB41F: mov     r14d, eax
 * 00000001402DB422: add     r14, r8
 * 00000001402DB425: lea     ecx, [r15+rbx]
 * 00000001402DB429: and     rcx, r8
 * 00000001402DB42C: add     r14, rcx
 * 00000001402DB42F: shr     r14, 0Ch
 * 00000001402DB433: add     rbx, r15
 * 00000001402DB436: jmp     short loc_1402DB450
 * 00000001402DB438: mov     rbx, [r13+8]
 * 00000001402DB43C: mov     ecx, [r13+10h]
 * 00000001402DB440: mov     r14, rbx
 * 00000001402DB443: and     r14, r8
 * 00000001402DB446: add     r14, r8
 * 00000001402DB449: add     r14, rcx
 * 00000001402DB44C: shr     r14, 0Ch
 * 00000001402DB450: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402DB457: test    r14, r14
 * 00000001402DB45A: jz      loc_1402DB501
 * 00000001402DB460: xor     edi, edi
 * 00000001402DB462: mov     rax, [rsi+2B0h]
 * 00000001402DB469: mov     rcx, rbx
 * 00000001402DB46C: dec     r14
 * 00000001402DB46F: call    KeGuardDispatchICall
 * 00000001402DB474: test    al, al
 * 00000001402DB476: jz      short loc_1402DB4C5
 * 00000001402DB478: cmp     [rsi+790h], edi
 * 00000001402DB47E: jnz     short loc_1402DB4C5
 * 00000001402DB480: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DB48A: add     rax, rsi
 * 00000001402DB48D: mov     [rsi+798h], rax
 * 00000001402DB494: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DB49E: add     rax, r13
 * 00000001402DB4A1: mov     [rsi+7A0h], rax
 * 00000001402DB4A8: movsxd  rax, dword ptr [r13+0]
 * 00000001402DB4AC: mov     [rsi+7A8h], rax
 * 00000001402DB4B3: mov     eax, 1
 * 00000001402DB4B8: mov     [rsi+7B0h], rbx
 * 00000001402DB4BF: mov     [rsi+790h], eax
 * 00000001402DB4C5: add     dword ptr [rsi+6C8h], 100h
 * 00000001402DB4CF: add     rbx, 1000h
 * 00000001402DB4D6: test    r15, r15
 * 00000001402DB4D9: jz      short loc_1402DB4F1
 * 00000001402DB4DB: add     dword ptr [rsi+6C4h], 1000h
 * 00000001402DB4E5: mov     eax, [r12]
 * 00000001402DB4E9: cmp     [rsi+6C8h], eax
 * 00000001402DB4EF: jge     short loc_1402DB4FA
 * 00000001402DB4F1: test    r14, r14
 * 00000001402DB4F4: jnz     loc_1402DB462
 * 00000001402DB4FA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DB501: test    r15, r15
 * 00000001402DB504: jz      short loc_1402DB515
 * 00000001402DB506: xor     r15d, r15d
 * 00000001402DB509: test    r14, r14
 * 00000001402DB50C: jnz     short loc_1402DB515
 * 00000001402DB50E: mov     [rsi+6C4h], r15d
 * 00000001402DB515: cmp     [rsi+6C4h], r15d
 * 00000001402DB51C: jnz     loc_1402D3378
 * 00000001402DB522: mov     rcx, [rsi+538h]
 * 00000001402DB529: mov     r15, cr8
 * 00000001402DB52D: mov     eax, 0Fh
 * 00000001402DB532: mov     cr8, rax
 * 00000001402DB536: mov     rax, [rsi+150h]
 * 00000001402DB53D: call    KeGuardDispatchICall
 * 00000001402DB542: mov     rax, [rsi+608h]
 * 00000001402DB549: mov     r14, [rbp+2250h+var_2240]
 * 00000001402DB54D: mov     rcx, [rax]
 * 00000001402DB550: mov     eax, [rcx]
 * 00000001402DB552: lea     rbx, [rcx+10h]
 * 00000001402DB556: mov     r12b, [rcx+0Ch]
 * 00000001402DB55A: lea     rcx, [rax+rax*2]
 * 00000001402DB55E: lea     r13, [rbx+rcx*8]
 * 00000001402DB562: mov     r8d, 18h
 * 00000001402DB568: lea     r9, [r14+18h]
 * 00000001402DB56C: mov     r10, rbx
 * 00000001402DB56F: mov     rcx, [r10]
 * 00000001402DB572: add     r10, 8
 * 00000001402DB576: mov     rax, [r9]
 * 00000001402DB579: add     r9, 8
 * 00000001402DB57D: cmp     rcx, rax
 * 00000001402DB580: jnz     short loc_1402DB5B2
 * 00000001402DB582: add     r8d, 0FFFFFFF8h
 * 00000001402DB586: cmp     r8d, 8
 * 00000001402DB58A: jnb     short loc_1402DB56F
 * 00000001402DB58C: test    r8d, r8d
 * 00000001402DB58F: jz      short loc_1402DB5BB
 * 00000001402DB591: mov     r11d, 1
 * 00000001402DB597: movzx   edx, byte ptr [r10]
 * 00000001402DB59B: add     r10, r11
 * 00000001402DB59E: movzx   eax, byte ptr [r9]
 * 00000001402DB5A2: add     r9, r11
 * 00000001402DB5A5: cmp     rdx, rax
 * 00000001402DB5A8: jnz     short loc_1402DB5B2
 * 00000001402DB5AA: add     r8d, 0FFFFFFFFh
 * 00000001402DB5AE: jz      short loc_1402DB5BB
 * 00000001402DB5B0: jmp     short loc_1402DB597
 * 00000001402DB5B2: add     rbx, 18h
 * 00000001402DB5B6: cmp     rbx, r13
 * 00000001402DB5B9: jb      short loc_1402DB562
 * 00000001402DB5BB: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DB5BF: mov     rcx, [rsi+538h]
 * 00000001402DB5C6: mov     rax, [rsi+190h]
 * 00000001402DB5CD: call    KeGuardDispatchICall
 * 00000001402DB5D2: movzx   eax, r15b
 * 00000001402DB5D6: mov     cr8, rax
 * 00000001402DB5DA: xor     r15d, r15d
 * 00000001402DB5DD: lea     edx, [r15+1]
 * 00000001402DB5E1: test    r12b, r12b
 * 00000001402DB5E4: jz      short loc_1402DB649
 * 00000001402DB5E6: mov     eax, [rsi+82Ch]
 * 00000001402DB5EC: lea     ecx, [rdx+0Fh]
 * 00000001402DB5EF: test    cl, al
 * 00000001402DB5F1: jz      short loc_1402DB63F
 * 00000001402DB5F3: cmp     [rsi+790h], r15d
 * 00000001402DB5FA: jnz     short loc_1402DB63F
 * 00000001402DB5FC: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DB600: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DB60A: add     rax, rsi
 * 00000001402DB60D: mov     [rsi+798h], rax
 * 00000001402DB614: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DB61E: add     rax, rcx
 * 00000001402DB621: mov     [rsi+7A0h], rax
 * 00000001402DB628: movsxd  rax, dword ptr [rcx]
 * 00000001402DB62B: mov     [rsi+7A8h], rax
 * 00000001402DB632: mov     [rsi+7B0h], rdx
 * 00000001402DB639: mov     [rsi+790h], edx
 * 00000001402DB63F: cmp     [r14+18h], rdx
 * 00000001402DB643: jz      loc_1402D3378
 * 00000001402DB649: cmp     rbx, r13
 * 00000001402DB64C: jnz     loc_1402D3378
 * 00000001402DB652: mov     r13d, 8000h
 * 00000001402DB658: cmp     [rsi+790h], r15d
 * 00000001402DB65F: jnz     loc_1402D337E
 * 00000001402DB665: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DB669: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DB673: add     rax, rsi
 * 00000001402DB676: mov     [rsi+798h], rax
 * 00000001402DB67D: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DB687: add     rax, rcx
 * 00000001402DB68A: mov     [rsi+7A0h], rax
 * 00000001402DB691: movsxd  rax, dword ptr [rcx]
 * 00000001402DB694: mov     [rsi+7A8h], rax
 * 00000001402DB69B: mov     [rsi+7B0h], rbx
 * 00000001402DB6A2: mov     [rsi+790h], edx
 * 00000001402DB6A8: jmp     loc_1402D337E
 * 00000001402DB6AD: mov     edx, 1
 * 00000001402DB6B2: cmp     [rsi+6C4h], eax
 * 00000001402DB6B8: jnz     short loc_1402DB6D6
 * 00000001402DB6BA: cmp     r15d, r8d
 * 00000001402DB6BD: jnz     loc_1402DBB94
 * 00000001402DB6C3: cmp     [rsi+818h], rax
 * 00000001402DB6CA: jnz     loc_1402DB84D
 * 00000001402DB6D0: mov     [rsi+6C4h], eax
 * 00000001402DB6D6: xor     r11d, r11d
 * 00000001402DB6D9: mov     r8d, [rsi+6C4h]
 * 00000001402DB6E0: mov     r9, [r13+8]
 * 00000001402DB6E4: mov     ecx, [r13+10h]
 * 00000001402DB6E8: mov     [rbp+2250h+var_2198], r9
 * 00000001402DB6EF: lea     rax, [r8+r8*2]
 * 00000001402DB6F3: lea     r14, [r9+rax*4]
 * 00000001402DB6F7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402DB701: mul     rcx
 * 00000001402DB704: lea     rdi, ds:30h[r8*4]
 * 00000001402DB70C: mov     [rbp+2250h+var_2208], r14
 * 00000001402DB710: shr     rdx, 3
 * 00000001402DB714: add     rdi, r13
 * 00000001402DB717: lea     rax, [rdx+rdx*2]
 * 00000001402DB71B: lea     rcx, [r9+rax*4]
 * 00000001402DB71F: mov     [rbp+2250h+var_2248], rcx
 * 00000001402DB723: mov     r8, rcx
 * 00000001402DB726: cmp     [rdi], r11d
 * 00000001402DB729: jl      loc_1402DC19C
 * 00000001402DB72F: mov     eax, [r14]
 * 00000001402DB732: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DB736: mov     r13d, eax
 * 00000001402DB739: mov     r12d, [r14+4]
 * 00000001402DB73D: sub     r12d, eax
 * 00000001402DB740: add     r13, [rcx+20h]
 * 00000001402DB744: mov     [rbp+2250h+var_2230], r13
 * 00000001402DB748: cmp     r15d, 2Bh ; '+'
 * 00000001402DB74C: jz      loc_1402DBDD1
 * 00000001402DB752: add     [rsi+6C8h], r12d
 * 00000001402DB759: mov     r8, r13
 * 00000001402DB75C: mov     r10d, [rsi+6B4h]
 * 00000001402DB763: mov     rax, r13
 * 00000001402DB766: mov     r11, [rsi+6B8h]
 * 00000001402DB76D: mov     ecx, r12d
 * 00000001402DB770: add     rcx, r13
 * 00000001402DB773: cmp     r13, rcx
 * 00000001402DB776: jnb     short loc_1402DB788
 * 00000001402DB778: mov     edx, 40h ; '@'
 * 00000001402DB77D: prefetchnta byte ptr [rax]
 * 00000001402DB780: add     rax, rdx
 * 00000001402DB783: cmp     rax, rcx
 * 00000001402DB786: jb      short loc_1402DB77D
 * 00000001402DB788: mov     r9d, r12d
 * 00000001402DB78B: mov     rbx, r11
 * 00000001402DB78E: shr     r9d, 7
 * 00000001402DB792: mov     r15d, 1
 * 00000001402DB798: test    r9d, r9d
 * 00000001402DB79B: jz      short loc_1402DB802
 * 00000001402DB79D: mov     rsi, 7010008004002001h
 * 00000001402DB7A7: mov     edx, 8
 * 00000001402DB7AC: mov     rax, [r8]
 * 00000001402DB7AF: mov     ecx, r10d
 * 00000001402DB7B2: xor     rax, rbx
 * 00000001402DB7B5: mov     rbx, [r8+8]
 * 00000001402DB7B9: rol     rax, cl
 * 00000001402DB7BC: add     r8, 10h
 * 00000001402DB7C0: xor     rbx, rax
 * 00000001402DB7C3: rol     rbx, cl
 * 00000001402DB7C6: sub     rdx, r15
 * 00000001402DB7C9: jnz     short loc_1402DB7AC
 * 00000001402DB7CB: mov     rcx, r8
 * 00000001402DB7CE: sub     rcx, r13
 * 00000001402DB7D1: xor     rcx, r11
 * 00000001402DB7D4: mov     rax, rcx
 * 00000001402DB7D7: rol     rax, 11h
 * 00000001402DB7DB: xor     rcx, rax
 * 00000001402DB7DE: mov     rax, rsi
 * 00000001402DB7E1: mul     rcx
 * 00000001402DB7E4: xor     eax, edx
 * 00000001402DB7E6: mov     [rbp+2250h+var_1C00], rdx
 * 00000001402DB7ED: xor     r10d, eax
 * 00000001402DB7F0: and     r10d, 3Fh
 * 00000001402DB7F4: cmovz   r10d, r15d
 * 00000001402DB7F8: add     r9d, 0FFFFFFFFh
 * 00000001402DB7FC: jnz     short loc_1402DB7A7
 * 00000001402DB7FE: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DB802: mov     edx, r12d
 * 00000001402DB805: and     edx, 7Fh
 * 00000001402DB808: cmp     edx, 8
 * 00000001402DB80B: jb      short loc_1402DB829
 * 00000001402DB80D: mov     r9d, edx
 * 00000001402DB810: shr     r9, 3
 * 00000001402DB814: xor     rbx, [r8]
 * 00000001402DB817: mov     ecx, r10d
 * 00000001402DB81A: rol     rbx, cl
 * 00000001402DB81D: add     r8, 8
 * 00000001402DB821: add     edx, 0FFFFFFF8h
 * 00000001402DB824: sub     r9, r15
 * 00000001402DB827: jnz     short loc_1402DB814
 * 00000001402DB829: xor     r11d, r11d
 * 00000001402DB82C: test    edx, edx
 * 00000001402DB82E: jz      short loc_1402DB845
 * 00000001402DB830: movzx   eax, byte ptr [r8]
 * 00000001402DB834: mov     ecx, r10d
 * 00000001402DB837: xor     rbx, rax
 * 00000001402DB83A: add     r8, r15
 * 00000001402DB83D: rol     rbx, cl
 * 00000001402DB840: add     edx, 0FFFFFFFFh
 * 00000001402DB843: jnz     short loc_1402DB830
 * 00000001402DB845: mov     rax, rbx
 * 00000001402DB848: jmp     loc_1402DBDBB
 * 00000001402DB84D: mov     eax, [rsi+82Ch]
 * 00000001402DB853: mov     ecx, eax
 * 00000001402DB855: shl     ecx, 3
 * 00000001402DB858: xor     ecx, eax
 * 00000001402DB85A: and     ecx, 20h
 * 00000001402DB85D: xor     ecx, eax
 * 00000001402DB85F: mov     [rsi+82Ch], ecx
 * 00000001402DB865: test    cl, 4
 * 00000001402DB868: jz      loc_1402DB925
 * 00000001402DB86E: mov     rcx, [r13+8]
 * 00000001402DB872: mov     eax, 0FFFh
 * 00000001402DB877: mov     r14d, [r13+10h]
 * 00000001402DB87B: mov     rbx, rcx
 * 00000001402DB87E: add     r14, rax
 * 00000001402DB881: and     rcx, rax
 * 00000001402DB884: add     r14, rcx
 * 00000001402DB887: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402DB88E: shr     r14, 0Ch
 * 00000001402DB892: xor     r11d, r11d
 * 00000001402DB895: test    r14, r14
 * 00000001402DB898: jz      loc_1402DB6D9
 * 00000001402DB89E: mov     rdi, 0B3B74BDEE4453415h
 * 00000001402DB8A8: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001402DB8B2: mov     rax, [rsi+2B0h]
 * 00000001402DB8B9: mov     rcx, rbx
 * 00000001402DB8BC: sub     r14, rdx
 * 00000001402DB8BF: call    KeGuardDispatchICall
 * 00000001402DB8C4: xor     r11d, r11d
 * 00000001402DB8C7: lea     edx, [r11+1]
 * 00000001402DB8CB: test    al, al
 * 00000001402DB8CD: jz      short loc_1402DB906
 * 00000001402DB8CF: cmp     [rsi+790h], r11d
 * 00000001402DB8D6: jnz     short loc_1402DB906
 * 00000001402DB8D8: lea     rax, [rsi+r15]
 * 00000001402DB8DC: mov     [rsi+798h], rax
 * 00000001402DB8E3: lea     rax, [rdi+r13]
 * 00000001402DB8E7: mov     [rsi+7A0h], rax
 * 00000001402DB8EE: movsxd  rax, dword ptr [r13+0]
 * 00000001402DB8F2: mov     [rsi+7A8h], rax
 * 00000001402DB8F9: mov     [rsi+7B0h], rbx
 * 00000001402DB900: mov     [rsi+790h], edx
 * 00000001402DB906: add     dword ptr [rsi+6C8h], 100h
 * 00000001402DB910: add     rbx, 1000h
 * 00000001402DB917: test    r14, r14
 * 00000001402DB91A: jnz     short loc_1402DB8B2
 * 00000001402DB91C: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402DB920: jmp     loc_1402DB6D9
 * 00000001402DB925: mov     r11, [r13+8]
 * 00000001402DB929: mov     r12d, 40h ; '@'
 * 00000001402DB92F: mov     r8d, [r13+10h]
 * 00000001402DB933: mov     r9, r11
 * 00000001402DB936: add     [rsi+6C8h], r8d
 * 00000001402DB93D: mov     rax, r11
 * 00000001402DB940: mov     r14d, [rsi+6B4h]
 * 00000001402DB947: mov     r15, [rsi+6B8h]
 * 00000001402DB94E: lea     rcx, [r11+r8]
 * 00000001402DB952: cmp     r11, rcx
 * 00000001402DB955: jnb     short loc_1402DB962
 * 00000001402DB957: prefetchnta byte ptr [rax]
 * 00000001402DB95A: add     rax, r12
 * 00000001402DB95D: cmp     rax, rcx
 * 00000001402DB960: jb      short loc_1402DB957
 * 00000001402DB962: mov     r10d, r8d
 * 00000001402DB965: mov     rbx, r15
 * 00000001402DB968: shr     r10d, 7
 * 00000001402DB96C: test    r10d, r10d
 * 00000001402DB96F: jz      short loc_1402DB9DC
 * 00000001402DB971: mov     rdi, 7010008004002001h
 * 00000001402DB97B: mov     edx, 8
 * 00000001402DB980: lea     esi, [rdx-7]
 * 00000001402DB983: mov     rax, [r9]
 * 00000001402DB986: mov     ecx, r14d
 * 00000001402DB989: xor     rax, rbx
 * 00000001402DB98C: mov     rbx, [r9+8]
 * 00000001402DB990: rol     rax, cl
 * 00000001402DB993: add     r9, 10h
 * 00000001402DB997: xor     rbx, rax
 * 00000001402DB99A: rol     rbx, cl
 * 00000001402DB99D: sub     rdx, rsi
 * 00000001402DB9A0: jnz     short loc_1402DB983
 * 00000001402DB9A2: mov     rcx, r9
 * 00000001402DB9A5: sub     rcx, r11
 * 00000001402DB9A8: xor     rcx, r15
 * 00000001402DB9AB: mov     rax, rcx
 * 00000001402DB9AE: rol     rax, 11h
 * 00000001402DB9B2: xor     rcx, rax
 * 00000001402DB9B5: mov     rax, rdi
 * 00000001402DB9B8: mul     rcx
 * 00000001402DB9BB: xor     eax, edx
 * 00000001402DB9BD: mov     [rbp+2250h+var_1C10], rdx
 * 00000001402DB9C4: xor     r14d, eax
 * 00000001402DB9C7: mov     rdx, rsi
 * 00000001402DB9CA: and     r14d, 3Fh
 * 00000001402DB9CE: cmovz   r14d, edx
 * 00000001402DB9D2: add     r10d, 0FFFFFFFFh
 * 00000001402DB9D6: jnz     short loc_1402DB97B
 * 00000001402DB9D8: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DB9DC: and     r8d, 7Fh
 * 00000001402DB9E0: cmp     r8d, 8
 * 00000001402DB9E4: jb      short loc_1402DBA11
 * 00000001402DB9E6: mov     edx, r8d
 * 00000001402DB9E9: mov     esi, 1
 * 00000001402DB9EE: shr     rdx, 3
 * 00000001402DB9F2: xor     rbx, [r9]
 * 00000001402DB9F5: mov     ecx, r14d
 * 00000001402DB9F8: rol     rbx, cl
 * 00000001402DB9FB: add     r9, 8
 * 00000001402DB9FF: add     r8d, 0FFFFFFF8h
 * 00000001402DBA03: sub     rdx, rsi
 * 00000001402DBA06: jnz     short loc_1402DB9F2
 * 00000001402DBA08: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DBA0C: mov     edx, 1
 * 00000001402DBA11: xor     r11d, r11d
 * 00000001402DBA14: test    r8d, r8d
 * 00000001402DBA17: jz      short loc_1402DBA2F
 * 00000001402DBA19: movzx   eax, byte ptr [r9]
 * 00000001402DBA1D: mov     ecx, r14d
 * 00000001402DBA20: xor     rbx, rax
 * 00000001402DBA23: add     r9, rdx
 * 00000001402DBA26: rol     rbx, cl
 * 00000001402DBA29: add     r8d, 0FFFFFFFFh
 * 00000001402DBA2D: jnz     short loc_1402DBA19
 * 00000001402DBA2F: mov     rax, rbx
 * 00000001402DBA32: jmp     short loc_1402DBA36
 * 00000001402DBA34: xor     ebx, eax
 * 00000001402DBA36: shr     rax, 1Fh
 * 00000001402DBA3A: test    rax, rax
 * 00000001402DBA3D: jnz     short loc_1402DBA34
 * 00000001402DBA3F: mov     r8d, [r13+14h]
 * 00000001402DBA43: btr     ebx, 1Fh
 * 00000001402DBA47: cmp     ebx, r8d
 * 00000001402DBA4A: jz      loc_1402DB91C
 * 00000001402DBA50: mov     ecx, [r13+10h]
 * 00000001402DBA54: mov     rdx, [r13+8]
 * 00000001402DBA58: test    rcx, rcx
 * 00000001402DBA5B: jz      loc_1402DBAF9
 * 00000001402DBA61: mov     eax, [rsi+82Ch]
 * 00000001402DBA67: test    r12b, al
 * 00000001402DBA6A: jz      loc_1402DBAF9
 * 00000001402DBA70: mov     r12, cr8
 * 00000001402DBA74: mov     eax, 2
 * 00000001402DBA79: mov     cr8, rax
 * 00000001402DBA7D: lea     rax, [rcx-1]
 * 00000001402DBA81: mov     r14, rdx
 * 00000001402DBA84: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402DBA8B: add     rax, rdx
 * 00000001402DBA8E: mov     ecx, 0FFFh
 * 00000001402DBA93: or      rax, rcx
 * 00000001402DBA96: mov     [rbp+2250h+var_2230], rax
 * 00000001402DBA9A: lea     r13, [r14-1]
 * 00000001402DBA9E: movzx   r15d, r12b
 * 00000001402DBAA2: mov     rax, [rsi+468h]
 * 00000001402DBAA9: xor     edx, edx
 * 00000001402DBAAB: mov     rcx, r14
 * 00000001402DBAAE: call    KeGuardDispatchICall
 * 00000001402DBAB3: cmp     eax, 0C000022Dh
 * 00000001402DBAB8: jnz     short loc_1402DBAE2
 * 00000001402DBABA: mov     eax, 1
 * 00000001402DBABF: cmp     r12b, al
 * 00000001402DBAC2: ja      loc_1402DBB76
 * 00000001402DBAC8: movzx   r15d, r12b
 * 00000001402DBACC: mov     cr8, r15
 * 00000001402DBAD0: mov     al, [r14]
 * 00000001402DBAD3: mov     rax, cr8
 * 00000001402DBAD7: mov     eax, 2
 * 00000001402DBADC: mov     cr8, rax
 * 00000001402DBAE0: jmp     short loc_1402DBAA2
 * 00000001402DBAE2: xor     r11d, r11d
 * 00000001402DBAE5: test    eax, eax
 * 00000001402DBAE7: jns     loc_1402DBB79
 * 00000001402DBAED: mov     cr8, r15
 * 00000001402DBAF1: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DBAF5: mov     r8d, [r13+14h]
 * 00000001402DBAF9: mov     eax, [rsi+790h]
 * 00000001402DBAFF: test    eax, eax
 * 00000001402DBB01: jnz     short loc_1402DBB1C
 * 00000001402DBB03: mov     ecx, ebx
 * 00000001402DBB05: mov     eax, r8d
 * 00000001402DBB08: xor     rcx, rax
 * 00000001402DBB0B: mov     rax, [rsi+588h]
 * 00000001402DBB12: mov     [rax+18h], rcx
 * 00000001402DBB16: mov     eax, [rsi+790h]
 * 00000001402DBB1C: mov     rcx, [r13+8]
 * 00000001402DBB20: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402DBB24: test    eax, eax
 * 00000001402DBB26: jnz     loc_1402DB6D9
 * 00000001402DBB2C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DBB36: add     rax, rsi
 * 00000001402DBB39: mov     [rsi+798h], rax
 * 00000001402DBB40: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DBB4A: add     rax, r13
 * 00000001402DBB4D: mov     [rsi+7A0h], rax
 * 00000001402DBB54: movsxd  rax, dword ptr [r13+0]
 * 00000001402DBB58: mov     [rsi+7A8h], rax
 * 00000001402DBB5F: mov     eax, 1
 * 00000001402DBB64: mov     [rsi+7B0h], rcx
 * 00000001402DBB6B: mov     [rsi+790h], eax
 * 00000001402DBB71: jmp     loc_1402DB6D9
 * 00000001402DBB76: xor     r11d, r11d
 * 00000001402DBB79: mov     r10d, 1000h
 * 00000001402DBB7F: add     r14, r10
 * 00000001402DBB82: add     r13, r10
 * 00000001402DBB85: cmp     r13, [rbp+2250h+var_2230]
 * 00000001402DBB89: jnz     loc_1402DBA9E
 * 00000001402DBB8F: jmp     loc_1402DBD84
 * 00000001402DBB94: mov     r11, [r13+8]
 * 00000001402DBB98: mov     r12d, 40h ; '@'
 * 00000001402DBB9E: mov     r8d, [r13+10h]
 * 00000001402DBBA2: mov     r9, r11
 * 00000001402DBBA5: add     [rsi+6C8h], r8d
 * 00000001402DBBAC: mov     rax, r11
 * 00000001402DBBAF: mov     r14d, [rsi+6B4h]
 * 00000001402DBBB6: mov     r15, [rsi+6B8h]
 * 00000001402DBBBD: lea     rcx, [r11+r8]
 * 00000001402DBBC1: cmp     r11, rcx
 * 00000001402DBBC4: jnb     short loc_1402DBBD1
 * 00000001402DBBC6: prefetchnta byte ptr [rax]
 * 00000001402DBBC9: add     rax, r12
 * 00000001402DBBCC: cmp     rax, rcx
 * 00000001402DBBCF: jb      short loc_1402DBBC6
 * 00000001402DBBD1: mov     r10d, r8d
 * 00000001402DBBD4: mov     rbx, r15
 * 00000001402DBBD7: shr     r10d, 7
 * 00000001402DBBDB: test    r10d, r10d
 * 00000001402DBBDE: jz      short loc_1402DBC4B
 * 00000001402DBBE0: mov     rdi, 7010008004002001h
 * 00000001402DBBEA: mov     edx, 8
 * 00000001402DBBEF: lea     esi, [rdx-7]
 * 00000001402DBBF2: mov     rax, [r9]
 * 00000001402DBBF5: mov     ecx, r14d
 * 00000001402DBBF8: xor     rax, rbx
 * 00000001402DBBFB: mov     rbx, [r9+8]
 * 00000001402DBBFF: rol     rax, cl
 * 00000001402DBC02: add     r9, 10h
 * 00000001402DBC06: xor     rbx, rax
 * 00000001402DBC09: rol     rbx, cl
 * 00000001402DBC0C: sub     rdx, rsi
 * 00000001402DBC0F: jnz     short loc_1402DBBF2
 * 00000001402DBC11: mov     rcx, r9
 * 00000001402DBC14: sub     rcx, r11
 * 00000001402DBC17: xor     rcx, r15
 * 00000001402DBC1A: mov     rax, rcx
 * 00000001402DBC1D: rol     rax, 11h
 * 00000001402DBC21: xor     rcx, rax
 * 00000001402DBC24: mov     rax, rdi
 * 00000001402DBC27: mul     rcx
 * 00000001402DBC2A: xor     eax, edx
 * 00000001402DBC2C: mov     [rbp+2250h+var_1C08], rdx
 * 00000001402DBC33: xor     r14d, eax
 * 00000001402DBC36: mov     rdx, rsi
 * 00000001402DBC39: and     r14d, 3Fh
 * 00000001402DBC3D: cmovz   r14d, edx
 * 00000001402DBC41: add     r10d, 0FFFFFFFFh
 * 00000001402DBC45: jnz     short loc_1402DBBEA
 * 00000001402DBC47: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DBC4B: and     r8d, 7Fh
 * 00000001402DBC4F: cmp     r8d, 8
 * 00000001402DBC53: jb      short loc_1402DBC80
 * 00000001402DBC55: mov     edx, r8d
 * 00000001402DBC58: mov     esi, 1
 * 00000001402DBC5D: shr     rdx, 3
 * 00000001402DBC61: xor     rbx, [r9]
 * 00000001402DBC64: mov     ecx, r14d
 * 00000001402DBC67: rol     rbx, cl
 * 00000001402DBC6A: add     r9, 8
 * 00000001402DBC6E: add     r8d, 0FFFFFFF8h
 * 00000001402DBC72: sub     rdx, rsi
 * 00000001402DBC75: jnz     short loc_1402DBC61
 * 00000001402DBC77: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DBC7B: mov     edx, 1
 * 00000001402DBC80: xor     r11d, r11d
 * 00000001402DBC83: test    r8d, r8d
 * 00000001402DBC86: jz      short loc_1402DBC9E
 * 00000001402DBC88: movzx   eax, byte ptr [r9]
 * 00000001402DBC8C: mov     ecx, r14d
 * 00000001402DBC8F: xor     rbx, rax
 * 00000001402DBC92: add     r9, rdx
 * 00000001402DBC95: rol     rbx, cl
 * 00000001402DBC98: add     r8d, 0FFFFFFFFh
 * 00000001402DBC9C: jnz     short loc_1402DBC88
 * 00000001402DBC9E: mov     rax, rbx
 * 00000001402DBCA1: jmp     short loc_1402DBCA5
 * 00000001402DBCA3: xor     ebx, eax
 * 00000001402DBCA5: shr     rax, 1Fh
 * 00000001402DBCA9: test    rax, rax
 * 00000001402DBCAC: jnz     short loc_1402DBCA3
 * 00000001402DBCAE: mov     rax, [rbp+2250h+var_2240]
 * 00000001402DBCB2: btr     ebx, 1Fh
 * 00000001402DBCB6: mov     r13d, r11d
 * 00000001402DBCB9: cmp     ebx, [rax+14h]
 * 00000001402DBCBC: jz      loc_1402DBD88
 * 00000001402DBCC2: cmp     [rax], r11d
 * 00000001402DBCC5: jnz     short loc_1402DBCCF
 * 00000001402DBCC7: cmp     [rax+18h], r11d
 * 00000001402DBCCB: cmovnz  r13d, edx
 * 00000001402DBCCF: mov     ecx, [rax+10h]
 * 00000001402DBCD2: mov     rdx, [rax+8]
 * 00000001402DBCD6: test    rcx, rcx
 * 00000001402DBCD9: jz      loc_1402DBD99
 * 00000001402DBCDF: mov     eax, [rsi+82Ch]
 * 00000001402DBCE5: test    r12b, al
 * 00000001402DBCE8: jz      loc_1402DBD99
 * 00000001402DBCEE: mov     r12, cr8
 * 00000001402DBCF2: mov     eax, 2
 * 00000001402DBCF7: mov     cr8, rax
 * 00000001402DBCFB: lea     rax, [rcx-1]
 * 00000001402DBCFF: mov     r14, rdx
 * 00000001402DBD02: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402DBD09: add     rax, rdx
 * 00000001402DBD0C: mov     ecx, 0FFFh
 * 00000001402DBD11: or      rax, rcx
 * 00000001402DBD14: mov     [rbp+2250h+var_2230], rax
 * 00000001402DBD18: lea     rax, [r14-1]
 * 00000001402DBD1C: mov     [rbp+2250h+var_2250], rax
 * 00000001402DBD20: movzx   r15d, r12b
 * 00000001402DBD24: mov     rax, [rsi+468h]
 * 00000001402DBD2B: xor     edx, edx
 * 00000001402DBD2D: mov     rcx, r14
 * 00000001402DBD30: call    KeGuardDispatchICall
 * 00000001402DBD35: xor     r11d, r11d
 * 00000001402DBD38: cmp     eax, 0C000022Dh
 * 00000001402DBD3D: jnz     short loc_1402DBD66
 * 00000001402DBD3F: test    r13d, r13d
 * 00000001402DBD42: jnz     short loc_1402DBD95
 * 00000001402DBD44: lea     eax, [r11+1]
 * 00000001402DBD48: cmp     r12b, al
 * 00000001402DBD4B: ja      short loc_1402DBD6A
 * 00000001402DBD4D: movzx   r15d, r12b
 * 00000001402DBD51: mov     cr8, r15
 * 00000001402DBD55: mov     al, [r14]
 * 00000001402DBD58: mov     rax, cr8
 * 00000001402DBD5C: lea     eax, [r11+2]
 * 00000001402DBD60: mov     cr8, rax
 * 00000001402DBD64: jmp     short loc_1402DBD24
 * 00000001402DBD66: test    eax, eax
 * 00000001402DBD68: js      short loc_1402DBD95
 * 00000001402DBD6A: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DBD6E: mov     r10d, 1000h
 * 00000001402DBD74: add     rax, r10
 * 00000001402DBD77: add     r14, r10
 * 00000001402DBD7A: mov     [rbp+2250h+var_2250], rax
 * 00000001402DBD7E: cmp     rax, [rbp+2250h+var_2230]
 * 00000001402DBD82: jnz     short loc_1402DBD20
 * 00000001402DBD84: mov     cr8, r15
 * 00000001402DBD88: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402DBD8C: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DBD90: jmp     loc_1402DB6D9
 * 00000001402DBD95: mov     cr8, r15
 * 00000001402DBD99: mov     r13, [rbp+2250h+var_2240]
 * 00000001402DBD9D: mov     eax, [rsi+790h]
 * 00000001402DBDA3: mov     edx, [r13+14h]
 * 00000001402DBDA7: test    eax, eax
 * 00000001402DBDA9: jnz     loc_1402DBB1C
 * 00000001402DBDAF: mov     ecx, ebx
 * 00000001402DBDB1: xor     rcx, rdx
 * 00000001402DBDB4: jmp     loc_1402DBB0B
 * 00000001402DBDB9: xor     ebx, eax
 * 00000001402DBDBB: shr     rax, 1Fh
 * 00000001402DBDBF: test    rax, rax
 * 00000001402DBDC2: jnz     short loc_1402DBDB9
 * 00000001402DBDC4: btr     ebx, 1Fh
 * 00000001402DBDC8: mov     [rbp+2250h+var_2250], rbx
 * 00000001402DBDCC: jmp     loc_1402DC06D
 * 00000001402DBDD1: mov     r8d, r12d
 * 00000001402DBDD4: mov     rdx, r13
 * 00000001402DBDD7: mov     rcx, rsi
 * 00000001402DBDDA: call    sub_1402E7BC8
 * 00000001402DBDDF: mov     ebx, eax
 * 00000001402DBDE1: xor     r11d, r11d
 * 00000001402DBDE4: mov     eax, r12d
 * 00000001402DBDE7: mov     [rbp+2250h+var_2250], rbx
 * 00000001402DBDEB: shl     eax, 3
 * 00000001402DBDEE: add     [rsi+6C8h], eax
 * 00000001402DBDF4: mov     eax, [rsi+82Ch]
 * 00000001402DBDFA: bt      eax, 0Bh
 * 00000001402DBDFE: jnb     loc_1402DC06D
 * 00000001402DBE04: lea     r14, [r13-6]
 * 00000001402DBE08: cmp     byte ptr [r14], 4Ch ; 'L'
 * 00000001402DBE0C: jnz     loc_1402DC018
 * 00000001402DBE12: cmp     byte ptr [r14+1], 87h
 * 00000001402DBE17: jnz     loc_1402DC018
 * 00000001402DBE1D: cmp     [r14+2], r11b
 * 00000001402DBE21: jnz     loc_1402DC018
 * 00000001402DBE27: cmp     byte ptr [r14+3], 98h
 * 00000001402DBE2C: jnz     loc_1402DC018
 * 00000001402DBE32: cmp     byte ptr [r14+4], 0C3h
 * 00000001402DBE37: jnz     loc_1402DC018
 * 00000001402DBE3D: lea     rbx, [r14+5]
 * 00000001402DBE41: mov     al, [rbx]
 * 00000001402DBE43: cmp     al, 90h
 * 00000001402DBE45: jz      short loc_1402DBE4F
 * 00000001402DBE47: cmp     al, 0F1h
 * 00000001402DBE49: jnz     loc_1402DC014
 * 00000001402DBE4F: mov     r15, [rsi+4D8h]
 * 00000001402DBE56: cli
 * 00000001402DBE57: mov     eax, [rsi+828h]
 * 00000001402DBE5D: shr     eax, 0Ah
 * 00000001402DBE60: and     eax, 1Fh
 * 00000001402DBE63: lock bts [r15], eax
 * 00000001402DBE68: jnb     short loc_1402DBE6F
 * 00000001402DBE6A: sti
 * 00000001402DBE6B: pause
 * 00000001402DBE6D: jmp     short loc_1402DBE56
 * 00000001402DBE6F: mov     edx, 26h ; '&'
 * 00000001402DBE74: lea     rax, [rbp+2250h+var_13D0]
 * 00000001402DBE7B: mov     r9d, 130h
 * 00000001402DBE81: mov     ecx, r9d
 * 00000001402DBE84: lea     r8d, [rdx-25h]
 * 00000001402DBE88: mov     [rax], r11
 * 00000001402DBE8B: add     ecx, 0FFFFFFF8h
 * 00000001402DBE8E: add     rax, 8
 * 00000001402DBE92: sub     rdx, r8
 * 00000001402DBE95: jnz     short loc_1402DBE88
 * 00000001402DBE97: test    ecx, ecx
 * 00000001402DBE99: jz      short loc_1402DBEA6
 * 00000001402DBE9B: mov     [rax], r11b
 * 00000001402DBE9E: add     rax, r8
 * 00000001402DBEA1: add     ecx, 0FFFFFFFFh
 * 00000001402DBEA4: jnz     short loc_1402DBE9B
 * 00000001402DBEA6: movups  xmm0, xmmword ptr [rsi+6E8h]
 * 00000001402DBEAD: lea     rax, [rbp+2250h+var_13D0]
 * 00000001402DBEB4: movdqu  [rbp+2250h+var_13C0], xmm0
 * 00000001402DBEBC: movups  xmm1, xmmword ptr [rsi+6F8h]
 * 00000001402DBEC3: movdqu  [rbp+2250h+var_13B0], xmm1
 * 00000001402DBECB: movups  xmm0, xmmword ptr [rsi+708h]
 * 00000001402DBED2: mov     [rbp+2250h+var_1EC6], rax
 * 00000001402DBED9: lea     rax, [rsi+72Ch]
 * 00000001402DBEE0: mov     rcx, rax
 * 00000001402DBEE3: mov     [rbp+2250h+var_1BF8], rax
 * 00000001402DBEEA: shr     rcx, 10h
 * 00000001402DBEEE: mov     word ptr [rbp+2250h+var_13C0], ax
 * 00000001402DBEF5: shr     rax, 20h
 * 00000001402DBEF9: mov     dword ptr [rbp+2250h+var_13C0+8], eax
 * 00000001402DBEFF: movdqu  [rbp+2250h+var_12B0], xmm0
 * 00000001402DBF07: mov     word ptr [rbp+2250h+var_1EC8], r9w
 * 00000001402DBF0F: mov     word ptr [rbp+2250h+var_13C0+6], cx
 * 00000001402DBF16: sidt    fword ptr [rbp+2250h+var_1D90]
 * 00000001402DBF1D: lidt    fword ptr [rbp+2250h+var_1EC8]
 * 00000001402DBF24: mov     byte ptr [rbx], 0F1h
 * 00000001402DBF27: mov     al, [rbx]
 * 00000001402DBF29: cmp     al, 0F1h
 * 00000001402DBF2B: jnz     loc_1402DBFD2
 * 00000001402DBF31: test    dword ptr [rsi+82Ch], 20000h
 * 00000001402DBF3B: jnz     short loc_1402DBF83
 * 00000001402DBF3D: mov     rdx, gs:20h
 * 00000001402DBF46: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402DBF50: mov     rax, [rsi+4B8h]
 * 00000001402DBF57: add     rcx, rsi
 * 00000001402DBF5A: mov     [rax], rcx
 * 00000001402DBF5D: lea     rcx, [r14+6]
 * 00000001402DBF61: mov     rax, [rsi+4C0h]
 * 00000001402DBF68: mov     [rax], rdx
 * 00000001402DBF6B: mov     rax, [rsi+4C8h]
 * 00000001402DBF72: mov     [rax], rcx
 * 00000001402DBF75: mov     rax, [rsi+4D0h]
 * 00000001402DBF7C: mov     qword ptr [rax], 113h
 * 00000001402DBF83: mov     rax, rbx
 * 00000001402DBF86: call    KeGuardDispatchICall
 * 00000001402DBF8B: xor     r11d, r11d
 * 00000001402DBF8E: test    dword ptr [rsi+82Ch], 20000h
 * 00000001402DBF98: jnz     short loc_1402DBFCC
 * 00000001402DBF9A: mov     rax, [rsi+4B8h]
 * 00000001402DBFA1: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402DBFAB: mov     [rax], rcx
 * 00000001402DBFAE: mov     rax, [rsi+4C0h]
 * 00000001402DBFB5: mov     [rax], r11
 * 00000001402DBFB8: mov     rax, [rsi+4C8h]
 * 00000001402DBFBF: mov     [rax], r11
 * 00000001402DBFC2: mov     rax, [rsi+4D0h]
 * 00000001402DBFC9: mov     [rax], r11
 * 00000001402DBFCC: mov     al, [rbx]
 * 00000001402DBFCE: cmp     al, 0F1h
 * 00000001402DBFD0: jz      short loc_1402DBFD7
 * 00000001402DBFD2: mov     r8d, r11d
 * 00000001402DBFD5: jmp     short loc_1402DBFE8
 * 00000001402DBFD7: mov     byte ptr [rbx], 90h
 * 00000001402DBFDA: mov     r8d, 1
 * 00000001402DBFE0: mov     al, [rbx]
 * 00000001402DBFE2: cmp     al, 90h
 * 00000001402DBFE4: cmovnz  r8d, r11d
 * 00000001402DBFE8: lidt    fword ptr [rbp+2250h+var_1D90]
 * 00000001402DBFEF: mov     ecx, [rsi+828h]
 * 00000001402DBFF5: mov     edx, 1
 * 00000001402DBFFA: shr     ecx, 0Ah
 * 00000001402DBFFD: and     ecx, 1Fh
 * 00000001402DC000: shl     edx, cl
 * 00000001402DC002: not     edx
 * 00000001402DC004: lock and [r15], edx
 * 00000001402DC008: sti
 * 00000001402DC009: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402DC00D: test    r8d, r8d
 * 00000001402DC010: jnz     short loc_1402DC069
 * 00000001402DC012: jmp     short loc_1402DC018
 * 00000001402DC014: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402DC018: cmp     [rsi+790h], r11d
 * 00000001402DC01F: jnz     short loc_1402DC069
 * 00000001402DC021: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DC025: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC02F: add     rax, rsi
 * 00000001402DC032: mov     [rsi+798h], rax
 * 00000001402DC039: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC043: add     rax, rcx
 * 00000001402DC046: mov     [rsi+7A0h], rax
 * 00000001402DC04D: movsxd  rax, dword ptr [rcx]
 * 00000001402DC050: mov     [rsi+7A8h], rax
 * 00000001402DC057: mov     eax, 1
 * 00000001402DC05C: mov     [rsi+7B0h], r14
 * 00000001402DC063: mov     [rsi+790h], eax
 * 00000001402DC069: mov     r14, [rbp+2250h+var_2208]
 * 00000001402DC06D: mov     ecx, [rdi]
 * 00000001402DC06F: mov     eax, ecx
 * 00000001402DC071: btr     eax, 1Fh
 * 00000001402DC075: cmp     ebx, eax
 * 00000001402DC077: jz      loc_1402DC198
 * 00000001402DC07D: mov     edx, r12d
 * 00000001402DC080: test    r12d, r12d
 * 00000001402DC083: jz      loc_1402DC122
 * 00000001402DC089: mov     eax, [rsi+82Ch]
 * 00000001402DC08F: mov     r8d, 40h ; '@'
 * 00000001402DC095: test    r8b, al
 * 00000001402DC098: jz      loc_1402DC122
 * 00000001402DC09E: mov     r15, cr8
 * 00000001402DC0A2: lea     eax, [r8-3Eh]
 * 00000001402DC0A6: mov     cr8, rax
 * 00000001402DC0AA: mov     rbx, r13
 * 00000001402DC0AD: mov     eax, 0FFFh
 * 00000001402DC0B2: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402DC0B9: dec     r13
 * 00000001402DC0BC: add     r13, rdx
 * 00000001402DC0BF: or      r13, rax
 * 00000001402DC0C2: lea     r12, [rbx-1]
 * 00000001402DC0C6: movzx   r14d, r15b
 * 00000001402DC0CA: mov     rax, [rsi+468h]
 * 00000001402DC0D1: xor     edx, edx
 * 00000001402DC0D3: mov     rcx, rbx
 * 00000001402DC0D6: call    KeGuardDispatchICall
 * 00000001402DC0DB: cmp     eax, 0C000022Dh
 * 00000001402DC0E0: jnz     short loc_1402DC109
 * 00000001402DC0E2: mov     eax, 1
 * 00000001402DC0E7: cmp     r15b, al
 * 00000001402DC0EA: ja      loc_1402DC266
 * 00000001402DC0F0: movzx   r14d, r15b
 * 00000001402DC0F4: mov     cr8, r14
 * 00000001402DC0F8: mov     al, [rbx]
 * 00000001402DC0FA: mov     rax, cr8
 * 00000001402DC0FE: mov     eax, 2
 * 00000001402DC103: mov     cr8, rax
 * 00000001402DC107: jmp     short loc_1402DC0CA
 * 00000001402DC109: xor     r11d, r11d
 * 00000001402DC10C: test    eax, eax
 * 00000001402DC10E: jns     loc_1402DC269
 * 00000001402DC114: mov     cr8, r14
 * 00000001402DC118: mov     ecx, [rdi]
 * 00000001402DC11A: mov     rbx, [rbp+2250h+var_2250]
 * 00000001402DC11E: mov     r13, [rbp+2250h+var_2230]
 * 00000001402DC122: mov     eax, ecx
 * 00000001402DC124: mov     ecx, [rsi+790h]
 * 00000001402DC12A: btr     eax, 1Fh
 * 00000001402DC12E: test    ecx, ecx
 * 00000001402DC130: jnz     short loc_1402DC194
 * 00000001402DC132: mov     ecx, ebx
 * 00000001402DC134: xor     rcx, rax
 * 00000001402DC137: mov     rax, [rsi+588h]
 * 00000001402DC13E: mov     [rax+18h], rcx
 * 00000001402DC142: mov     ecx, [rsi+790h]
 * 00000001402DC148: test    ecx, ecx
 * 00000001402DC14A: jnz     short loc_1402DC194
 * 00000001402DC14C: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DC150: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC15A: add     rax, rsi
 * 00000001402DC15D: mov     [rsi+798h], rax
 * 00000001402DC164: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC16E: add     rax, rcx
 * 00000001402DC171: mov     [rsi+7A0h], rax
 * 00000001402DC178: movsxd  rax, dword ptr [rcx]
 * 00000001402DC17B: mov     [rsi+7A8h], rax
 * 00000001402DC182: mov     eax, 1
 * 00000001402DC187: mov     [rsi+7B0h], r13
 * 00000001402DC18E: mov     [rsi+790h], eax
 * 00000001402DC194: mov     r14, [rbp+2250h+var_2208]
 * 00000001402DC198: mov     r8, [rbp+2250h+var_2248]
 * 00000001402DC19C: add     r14, 0Ch
 * 00000001402DC1A0: add     rdi, 4
 * 00000001402DC1A4: mov     [rbp+2250h+var_2208], r14
 * 00000001402DC1A8: cmp     r14, r8
 * 00000001402DC1AB: jnb     short loc_1402DC1C9
 * 00000001402DC1AD: mov     rax, [rbp+2250h+var_21C0]
 * 00000001402DC1B4: mov     r15d, [rbp+2250h+var_2238]
 * 00000001402DC1B8: mov     eax, [rax]
 * 00000001402DC1BA: cmp     [rsi+6C8h], eax
 * 00000001402DC1C0: jl      loc_1402DB726
 * 00000001402DC1C6: cmp     r14, r8
 * 00000001402DC1C9: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DC1D0: jnz     loc_1402DC37B
 * 00000001402DC1D6: mov     rcx, [rsi+538h]
 * 00000001402DC1DD: mov     r15, cr8
 * 00000001402DC1E1: mov     eax, 0Fh
 * 00000001402DC1E6: mov     cr8, rax
 * 00000001402DC1EA: mov     rax, [rsi+150h]
 * 00000001402DC1F1: call    KeGuardDispatchICall
 * 00000001402DC1F6: mov     rax, [rsi+608h]
 * 00000001402DC1FD: mov     r14, [rbp+2250h+var_2240]
 * 00000001402DC201: mov     rcx, [rax]
 * 00000001402DC204: mov     eax, [rcx]
 * 00000001402DC206: lea     rbx, [rcx+10h]
 * 00000001402DC20A: mov     r12b, [rcx+0Ch]
 * 00000001402DC20E: lea     rcx, [rax+rax*2]
 * 00000001402DC212: lea     r13, [rbx+rcx*8]
 * 00000001402DC216: mov     r8d, 18h
 * 00000001402DC21C: lea     r9, [r14+18h]
 * 00000001402DC220: mov     r10, rbx
 * 00000001402DC223: mov     rcx, [r10]
 * 00000001402DC226: add     r10, 8
 * 00000001402DC22A: mov     rax, [r9]
 * 00000001402DC22D: add     r9, 8
 * 00000001402DC231: cmp     rcx, rax
 * 00000001402DC234: jnz     short loc_1402DC286
 * 00000001402DC236: add     r8d, 0FFFFFFF8h
 * 00000001402DC23A: cmp     r8d, 8
 * 00000001402DC23E: jnb     short loc_1402DC223
 * 00000001402DC240: test    r8d, r8d
 * 00000001402DC243: jz      short loc_1402DC28F
 * 00000001402DC245: mov     r11d, 1
 * 00000001402DC24B: movzx   edx, byte ptr [r10]
 * 00000001402DC24F: add     r10, r11
 * 00000001402DC252: movzx   eax, byte ptr [r9]
 * 00000001402DC256: add     r9, r11
 * 00000001402DC259: cmp     rdx, rax
 * 00000001402DC25C: jnz     short loc_1402DC286
 * 00000001402DC25E: add     r8d, 0FFFFFFFFh
 * 00000001402DC262: jz      short loc_1402DC28F
 * 00000001402DC264: jmp     short loc_1402DC24B
 * 00000001402DC266: xor     r11d, r11d
 * 00000001402DC269: mov     eax, 1000h
 * 00000001402DC26E: add     rbx, rax
 * 00000001402DC271: add     r12, rax
 * 00000001402DC274: cmp     r12, r13
 * 00000001402DC277: jnz     loc_1402DC0C6
 * 00000001402DC27D: mov     cr8, r14
 * 00000001402DC281: jmp     loc_1402DC194
 * 00000001402DC286: add     rbx, 18h
 * 00000001402DC28A: cmp     rbx, r13
 * 00000001402DC28D: jb      short loc_1402DC216
 * 00000001402DC28F: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DC293: mov     rcx, [rsi+538h]
 * 00000001402DC29A: mov     rax, [rsi+190h]
 * 00000001402DC2A1: call    KeGuardDispatchICall
 * 00000001402DC2A6: movzx   eax, r15b
 * 00000001402DC2AA: mov     cr8, rax
 * 00000001402DC2AE: xor     r15d, r15d
 * 00000001402DC2B1: lea     edx, [r15+1]
 * 00000001402DC2B5: test    r12b, r12b
 * 00000001402DC2B8: jz      short loc_1402DC31D
 * 00000001402DC2BA: mov     eax, [rsi+82Ch]
 * 00000001402DC2C0: lea     ecx, [rdx+0Fh]
 * 00000001402DC2C3: test    cl, al
 * 00000001402DC2C5: jz      short loc_1402DC313
 * 00000001402DC2C7: cmp     [rsi+790h], r15d
 * 00000001402DC2CE: jnz     short loc_1402DC313
 * 00000001402DC2D0: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DC2D4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC2DE: add     rax, rsi
 * 00000001402DC2E1: mov     [rsi+798h], rax
 * 00000001402DC2E8: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC2F2: add     rax, rcx
 * 00000001402DC2F5: mov     [rsi+7A0h], rax
 * 00000001402DC2FC: movsxd  rax, dword ptr [rcx]
 * 00000001402DC2FF: mov     [rsi+7A8h], rax
 * 00000001402DC306: mov     [rsi+7B0h], rdx
 * 00000001402DC30D: mov     [rsi+790h], edx
 * 00000001402DC313: cmp     [r14+18h], rdx
 * 00000001402DC317: jz      loc_1402D8D57
 * 00000001402DC31D: cmp     rbx, r13
 * 00000001402DC320: jnz     loc_1402D8D57
 * 00000001402DC326: cmp     [rsi+790h], r15d
 * 00000001402DC32D: jnz     loc_1402D8D57
 * 00000001402DC333: mov     rcx, [rbp+2250h+var_2240]
 * 00000001402DC337: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC341: add     rax, rsi
 * 00000001402DC344: mov     [rsi+798h], rax
 * 00000001402DC34B: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC355: add     rax, rcx
 * 00000001402DC358: mov     [rsi+7A0h], rax
 * 00000001402DC35F: movsxd  rax, dword ptr [rcx]
 * 00000001402DC362: mov     [rsi+7A8h], rax
 * 00000001402DC369: mov     [rsi+7B0h], rbx
 * 00000001402DC370: mov     [rsi+790h], edx
 * 00000001402DC376: jmp     loc_1402D8D57
 * 00000001402DC37B: sub     r14, [rbp+2250h+var_2198]
 * 00000001402DC382: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001402DC38C: imul    r14
 * 00000001402DC38F: sar     rdx, 1
 * 00000001402DC392: mov     rax, rdx
 * 00000001402DC395: shr     rax, 3Fh
 * 00000001402DC399: add     rdx, rax
 * 00000001402DC39C: mov     [rsi+6C4h], edx
 * 00000001402DC3A2: jmp     loc_1402D3375
 * 00000001402DC3A7: mov     eax, [r13+24h]
 * 00000001402DC3AB: add     [rsi+6C8h], eax
 * 00000001402DC3B1: mov     ebx, [r13+20h]
 * 00000001402DC3B5: mov     r9d, [r13+24h]
 * 00000001402DC3B9: add     rbx, rsi
 * 00000001402DC3BC: mov     r11d, [rsi+6B4h]
 * 00000001402DC3C3: mov     r10, rbx
 * 00000001402DC3C6: mov     r15, [rsi+6B8h]
 * 00000001402DC3CD: mov     rax, rbx
 * 00000001402DC3D0: lea     rcx, [rbx+r9]
 * 00000001402DC3D4: cmp     rbx, rcx
 * 00000001402DC3D7: jnb     short loc_1402DC3EA
 * 00000001402DC3D9: mov     r8d, 40h ; '@'
 * 00000001402DC3DF: prefetchnta byte ptr [rax]
 * 00000001402DC3E2: add     rax, r8
 * 00000001402DC3E5: cmp     rax, rcx
 * 00000001402DC3E8: jb      short loc_1402DC3DF
 * 00000001402DC3EA: mov     r14d, r9d
 * 00000001402DC3ED: mov     r8, r15
 * 00000001402DC3F0: shr     r14d, 7
 * 00000001402DC3F4: test    r14d, r14d
 * 00000001402DC3F7: jz      short loc_1402DC465
 * 00000001402DC3F9: mov     rdi, 7010008004002001h
 * 00000001402DC403: mov     eax, 8
 * 00000001402DC408: xor     r8, [r10]
 * 00000001402DC40B: mov     ecx, r11d
 * 00000001402DC40E: rol     r8, cl
 * 00000001402DC411: xor     r8, [r10+8]
 * 00000001402DC415: add     r10, 10h
 * 00000001402DC419: rol     r8, cl
 * 00000001402DC41C: sub     rax, rdx
 * 00000001402DC41F: jnz     short loc_1402DC408
 * 00000001402DC421: mov     rcx, r10
 * 00000001402DC424: sub     rcx, rbx
 * 00000001402DC427: xor     rcx, r15
 * 00000001402DC42A: mov     rax, rcx
 * 00000001402DC42D: rol     rax, 11h
 * 00000001402DC431: xor     rcx, rax
 * 00000001402DC434: mov     rax, rdi
 * 00000001402DC437: mul     rcx
 * 00000001402DC43A: xor     r11d, eax
 * 00000001402DC43D: mov     [rbp+2250h+var_1BF0], rdx
 * 00000001402DC444: xor     r11d, edx
 * 00000001402DC447: mov     edx, 1
 * 00000001402DC44C: and     r11d, 3Fh
 * 00000001402DC450: cmovz   r11d, edx
 * 00000001402DC454: add     r14d, 0FFFFFFFFh
 * 00000001402DC458: jnz     short loc_1402DC403
 * 00000001402DC45A: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DC45E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DC465: and     r9d, 7Fh
 * 00000001402DC469: cmp     r9d, 8
 * 00000001402DC46D: jb      short loc_1402DC48C
 * 00000001402DC46F: mov     eax, r9d
 * 00000001402DC472: shr     rax, 3
 * 00000001402DC476: xor     r8, [r10]
 * 00000001402DC479: mov     ecx, r11d
 * 00000001402DC47C: rol     r8, cl
 * 00000001402DC47F: add     r10, 8
 * 00000001402DC483: add     r9d, 0FFFFFFF8h
 * 00000001402DC487: sub     rax, rdx
 * 00000001402DC48A: jnz     short loc_1402DC476
 * 00000001402DC48C: xor     r15d, r15d
 * 00000001402DC48F: test    r9d, r9d
 * 00000001402DC492: jz      short loc_1402DC4AA
 * 00000001402DC494: movzx   eax, byte ptr [r10]
 * 00000001402DC498: mov     ecx, r11d
 * 00000001402DC49B: xor     r8, rax
 * 00000001402DC49E: add     r10, rdx
 * 00000001402DC4A1: rol     r8, cl
 * 00000001402DC4A4: add     r9d, 0FFFFFFFFh
 * 00000001402DC4A8: jnz     short loc_1402DC494
 * 00000001402DC4AA: mov     rcx, [r13+18h]
 * 00000001402DC4AE: cmp     r8, rcx
 * 00000001402DC4B1: jz      loc_1402D3378
 * 00000001402DC4B7: mov     eax, [rsi+790h]
 * 00000001402DC4BD: test    eax, eax
 * 00000001402DC4BF: jnz     short loc_1402DC4D5
 * 00000001402DC4C1: mov     rax, [rsi+588h]
 * 00000001402DC4C8: xor     rcx, r8
 * 00000001402DC4CB: mov     [rax+18h], rcx
 * 00000001402DC4CF: mov     eax, [rsi+790h]
 * 00000001402DC4D5: mov     ecx, [r13+20h]
 * 00000001402DC4D9: add     rcx, rsi
 * 00000001402DC4DC: test    eax, eax
 * 00000001402DC4DE: jnz     loc_1402D3378
 * 00000001402DC4E4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC4EE: add     rax, rsi
 * 00000001402DC4F1: mov     [rsi+798h], rax
 * 00000001402DC4F8: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC502: add     rax, r13
 * 00000001402DC505: mov     [rsi+7A0h], rax
 * 00000001402DC50C: movsxd  rax, dword ptr [r13+0]
 * 00000001402DC510: mov     [rsi+7A8h], rax
 * 00000001402DC517: mov     [rsi+7B0h], rcx
 * 00000001402DC51E: mov     [rsi+790h], edx
 * 00000001402DC524: jmp     loc_1402D3378
 * 00000001402DC529: mov     ebx, 3
 * 00000001402DC52E: sub     r15d, 2
 * 00000001402DC532: jz      loc_1402DCB9E
 * 00000001402DC538: sub     r15d, 1
 * 00000001402DC53C: jz      loc_1402DC7D9
 * 00000001402DC542: cmp     r15d, 14h
 * 00000001402DC546: jz      short loc_1402DC594
 * 00000001402DC548: xor     r15d, r15d
 * 00000001402DC54B: cmp     [rsi+790h], r15d
 * 00000001402DC552: jnz     loc_1402D3378
 * 00000001402DC558: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DC562: add     rax, rsi
 * 00000001402DC565: mov     [rsi+798h], rax
 * 00000001402DC56C: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DC576: add     rax, r13
 * 00000001402DC579: mov     [rsi+7A0h], rax
 * 00000001402DC580: mov     qword ptr [rsi+7A8h], 101h
 * 00000001402DC58B: mov     [rsi+7B0h], r15
 * 00000001402DC592: jmp     short loc_1402DC51E
 * 00000001402DC594: mov     edx, [r13+28h]
 * 00000001402DC598: lea     rcx, [rbp+2250h+var_1920]
 * 00000001402DC59F: mov     rax, [rsi+1A0h]
 * 00000001402DC5A6: call    KeGuardDispatchICall
 * 00000001402DC5AB: mov     rax, [rsi+1D0h]
 * 00000001402DC5B2: lea     rdx, [rbp+2250h+var_1910]
 * 00000001402DC5B9: lea     rcx, [rbp+2250h+var_1920]
 * 00000001402DC5C0: call    KeGuardDispatchICall
 * 00000001402DC5C5: mov     r8, [rsi+8A8h]
 * 00000001402DC5CC: xor     r15d, r15d
 * 00000001402DC5CF: test    r8, r8
 * 00000001402DC5D2: jz      short loc_1402DC5E4
 * 00000001402DC5D4: mov     ebx, [r8+320h]
 * 00000001402DC5DB: mov     r8, [rsi+8A8h]
 * 00000001402DC5E2: jmp     short loc_1402DC5F5
 * 00000001402DC5E4: mov     ecx, 832h
 * 00000001402DC5E9: rdmsr
 * 00000001402DC5EB: shl     rdx, 20h
 * 00000001402DC5EF: or      rax, rdx
 * 00000001402DC5F2: mov     rbx, rax
 * 00000001402DC5F5: mov     [rbp+2250h+var_1E24], ebx
 * 00000001402DC5FB: test    r8, r8
 * 00000001402DC5FE: jz      short loc_1402DC609
 * 00000001402DC600: mov     r14d, [r8+340h]
 * 00000001402DC607: jmp     short loc_1402DC61A
 * 00000001402DC609: mov     ecx, 834h
 * 00000001402DC60E: rdmsr
 * 00000001402DC610: shl     rdx, 20h
 * 00000001402DC614: or      rax, rdx
 * 00000001402DC617: mov     r14, rax
 * 00000001402DC61A: mov     rax, [rsi+198h]
 * 00000001402DC621: lea     rcx, [rbp+2250h+var_1910]
 * 00000001402DC628: mov     [rbp+2250h+var_1DF0], r14d
 * 00000001402DC62F: call    KeGuardDispatchICall
 * 00000001402DC634: mov     eax, [r13+1Ch]
 * 00000001402DC638: mov     ecx, [r13+18h]
 * 00000001402DC63C: and     eax, ebx
 * 00000001402DC63E: cmp     eax, ecx
 * 00000001402DC640: jnz     short loc_1402DC66B
 * 00000001402DC642: mov     r8d, 3
 * 00000001402DC648: bt      ebx, 10h
 * 00000001402DC64C: jb      loc_1402DC715
 * 00000001402DC652: cmp     bl, 0D1h
 * 00000001402DC655: jz      loc_1402DC715
 * 00000001402DC65B: lea     eax, [r8+rbx]
 * 00000001402DC65F: lea     edx, [r8-2]
 * 00000001402DC663: cmp     al, dl
 * 00000001402DC665: jbe     loc_1402DC715
 * 00000001402DC66B: mov     rdx, rcx
 * 00000001402DC66E: mov     r8d, ebx
 * 00000001402DC671: mov     ecx, [r13+28h]
 * 00000001402DC675: mov     rax, 32000000000h
 * 00000001402DC67F: shl     rcx, 30h
 * 00000001402DC683: or      rcx, rdx
 * 00000001402DC686: or      rcx, rax
 * 00000001402DC689: mov     eax, [rsi+790h]
 * 00000001402DC68F: test    eax, eax
 * 00000001402DC691: jnz     short loc_1402DC6F4
 * 00000001402DC693: mov     rax, [rsi+588h]
 * 00000001402DC69A: xor     rdx, r8
 * 00000001402DC69D: mov     [rax+18h], rdx
 * 00000001402DC6A1: mov     eax, [rsi+790h]
 * 00000001402DC6A7: test    eax, eax
 * 00000001402DC6A9: jnz     short loc_1402DC6F4
 * 00000001402DC6AB: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402DC6B5: mov     r9, 0B3B74BDEE4453415h
 * 00000001402DC6BF: mov     ebx, 1
 * 00000001402DC6C4: lea     rax, [rsi+r10]
 * 00000001402DC6C8: mov     [rsi+798h], rax
 * 00000001402DC6CF: lea     rax, [r9+r13]
 * 00000001402DC6D3: mov     [rsi+7A0h], rax
 * 00000001402DC6DA: movsxd  rax, dword ptr [r13+0]
 * 00000001402DC6DE: mov     [rsi+7A8h], rax
 * 00000001402DC6E5: mov     [rsi+7B0h], rcx
 * 00000001402DC6EC: mov     [rsi+790h], ebx
 * 00000001402DC6F2: jmp     short loc_1402DC70D
 * 00000001402DC6F4: mov     ebx, 1
 * 00000001402DC6F9: mov     r9, 0B3B74BDEE4453415h
 * 00000001402DC703: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402DC70D: mov     r8d, 3
 * 00000001402DC713: jmp     short loc_1402DC72E
 * 00000001402DC715: mov     ebx, 1
 * 00000001402DC71A: mov     r9, 0B3B74BDEE4453415h
 * 00000001402DC724: mov     r10, 0A3A03F5891C8B4E8h
 * 00000001402DC72E: mov     eax, [r13+24h]
 * 00000001402DC732: mov     ecx, [r13+20h]
 * 00000001402DC736: and     eax, r14d
 * 00000001402DC739: cmp     eax, ecx
 * 00000001402DC73B: jnz     short loc_1402DC75E
 * 00000001402DC73D: bt      r14d, 10h
 * 00000001402DC742: jb      loc_1402DCB8C
 * 00000001402DC748: cmp     r14b, 0D1h
 * 00000001402DC74C: jz      loc_1402DCB8C
 * 00000001402DC752: lea     eax, [r8+r14]
 * 00000001402DC756: cmp     al, bl
 * 00000001402DC758: jbe     loc_1402DCB8C
 * 00000001402DC75E: mov     rdx, rcx
 * 00000001402DC761: mov     r8d, r14d
 * 00000001402DC764: mov     ecx, [r13+28h]
 * 00000001402DC768: mov     rax, 34000000000h
 * 00000001402DC772: shl     rcx, 30h
 * 00000001402DC776: or      rcx, rdx
 * 00000001402DC779: or      rcx, rax
 * 00000001402DC77C: mov     eax, [rsi+790h]
 * 00000001402DC782: test    eax, eax
 * 00000001402DC784: jnz     loc_1402DCB8C
 * 00000001402DC78A: mov     rax, [rsi+588h]
 * 00000001402DC791: xor     rdx, r8
 * 00000001402DC794: mov     [rax+18h], rdx
 * 00000001402DC798: mov     eax, [rsi+790h]
 * 00000001402DC79E: test    eax, eax
 * 00000001402DC7A0: jnz     loc_1402DCB8C
 * 00000001402DC7A6: lea     rax, [rsi+r10]
 * 00000001402DC7AA: mov     [rsi+798h], rax
 * 00000001402DC7B1: lea     rax, [r9+r13]
 * 00000001402DC7B5: mov     [rsi+7A0h], rax
 * 00000001402DC7BC: movsxd  rax, dword ptr [r13+0]
 * 00000001402DC7C0: mov     [rsi+7A8h], rax
 * 00000001402DC7C7: mov     [rsi+7B0h], rcx
 * 00000001402DC7CE: mov     [rsi+790h], ebx
 * 00000001402DC7D4: jmp     loc_1402DCB8C
 * 00000001402DC7D9: mov     edx, [r13+28h]
 * 00000001402DC7DD: lea     rcx, [rbp+2250h+var_1900]
 * 00000001402DC7E4: mov     rax, [rsi+1A0h]
 * 00000001402DC7EB: call    KeGuardDispatchICall
 * 00000001402DC7F0: mov     rax, [rsi+1D0h]
 * 00000001402DC7F7: lea     rdx, [rbp+2250h+var_18F0]
 * 00000001402DC7FE: lea     rcx, [rbp+2250h+var_1900]
 * 00000001402DC805: call    KeGuardDispatchICall
 * 00000001402DC80A: lea     rdx, [rbp+2250h+var_1838]
 * 00000001402DC811: lea     rcx, [rbp+2250h+var_1F48]
 * 00000001402DC818: call    KiGetGdtIdt
 * 00000001402DC81D: mov     r15, [rbp+2250h+var_1F46]
 * 00000001402DC824: mov     ecx, 2
 * 00000001402DC829: mov     r14d, [r13+10h]
 * 00000001402DC82D: test    [rsi+71Bh], cl
 * 00000001402DC833: jz      loc_1402DC945
 * 00000001402DC839: mov     edx, 26h ; '&'
 * 00000001402DC83E: lea     rax, [rbp+2250h+var_16D0]
 * 00000001402DC845: mov     r10d, 130h
 * 00000001402DC84B: xor     r8d, r8d
 * 00000001402DC84E: mov     ecx, r10d
 * 00000001402DC851: lea     r9d, [rdx-25h]
 * 00000001402DC855: mov     [rax], r8
 * 00000001402DC858: add     ecx, 0FFFFFFF8h
 * 00000001402DC85B: add     rax, 8
 * 00000001402DC85F: sub     rdx, r9
 * 00000001402DC862: jnz     short loc_1402DC855
 * 00000001402DC864: test    ecx, ecx
 * 00000001402DC866: jz      short loc_1402DC873
 * 00000001402DC868: mov     [rax], r8b
 * 00000001402DC86B: add     rax, r9
 * 00000001402DC86E: add     ecx, 0FFFFFFFFh
 * 00000001402DC871: jnz     short loc_1402DC868
 * 00000001402DC873: movups  xmm0, xmmword ptr [rsi+6E8h]
 * 00000001402DC87A: lea     rax, [rbp+2250h+var_16D0]
 * 00000001402DC881: movdqu  [rbp+2250h+var_16C0], xmm0
 * 00000001402DC889: movups  xmm1, xmmword ptr [rsi+6F8h]
 * 00000001402DC890: movdqu  [rbp+2250h+var_16B0], xmm1
 * 00000001402DC898: movups  xmm0, xmmword ptr [rsi+708h]
 * 00000001402DC89F: mov     [rbp+2250h+var_1EB6], rax
 * 00000001402DC8A6: lea     rax, [rsi+718h]
 * 00000001402DC8AD: mov     rcx, rax
 * 00000001402DC8B0: mov     [rbp+2250h+var_21C8], rax
 * 00000001402DC8B7: shr     rcx, 10h
 * 00000001402DC8BB: mov     word ptr [rbp+2250h+var_16C0], ax
 * 00000001402DC8C2: shr     rax, 20h
 * 00000001402DC8C6: mov     dword ptr [rbp+2250h+var_16C0+8], eax
 * 00000001402DC8CC: movdqu  [rbp+2250h+var_15B0], xmm0
 * 00000001402DC8D4: mov     word ptr [rbp+2250h+var_1EB8], r10w
 * 00000001402DC8DC: mov     word ptr [rbp+2250h+var_16C0+6], cx
 * 00000001402DC8E3: cli
 * 00000001402DC8E4: sidt    fword ptr [rbp+2250h+var_1D80]
 * 00000001402DC8EB: lidt    fword ptr [rbp+2250h+var_1EB8]
 * 00000001402DC8F2: mov     dr7, r8
 * 00000001402DC8F6: lea     rax, [rsi+71Eh]
 * 00000001402DC8FD: mov     rcx, rax
 * 00000001402DC900: mov     [rbp+2250h+var_21C8], rax
 * 00000001402DC907: mov     word ptr [rbp+2250h+var_16C0], ax
 * 00000001402DC90E: shr     rcx, 10h
 * 00000001402DC912: shr     rax, 20h
 * 00000001402DC916: mov     word ptr [rbp+2250h+var_16C0+6], cx
 * 00000001402DC91D: mov     dword ptr [rbp+2250h+var_16C0+8], eax
 * 00000001402DC923: call    KiErrata704Present
 * 00000001402DC928: mov     [rsi+780h], rax
 * 00000001402DC92F: mov     eax, gs:1A4h
 * 00000001402DC937: mov     [rsi+788h], eax
 * 00000001402DC93D: lidt    fword ptr [rbp+2250h+var_1D80]
 * 00000001402DC944: sti
 * 00000001402DC945: call    KiGetLdtr
 * 00000001402DC94A: movzx   r12d, ax
 * 00000001402DC94E: call    KiGetTr
 * 00000001402DC953: add     [rsi+6C8h], r14d
 * 00000001402DC95A: lea     rcx, [r15+r14]
 * 00000001402DC95E: mov     r9d, [rsi+6B4h]
 * 00000001402DC965: movzx   r13d, ax
 * 00000001402DC969: mov     r11, [rsi+6B8h]
 * 00000001402DC970: mov     r8, r15
 * 00000001402DC973: mov     rax, r15
 * 00000001402DC976: cmp     r15, rcx
 * 00000001402DC979: jnb     short loc_1402DC98B
 * 00000001402DC97B: mov     edx, 40h ; '@'
 * 00000001402DC980: prefetchnta byte ptr [rax]
 * 00000001402DC983: add     rax, rdx
 * 00000001402DC986: cmp     rax, rcx
 * 00000001402DC989: jb      short loc_1402DC980
 * 00000001402DC98B: mov     r10d, r14d
 * 00000001402DC98E: mov     rbx, r11
 * 00000001402DC991: shr     r10d, 7
 * 00000001402DC995: mov     edx, 1
 * 00000001402DC99A: test    r10d, r10d
 * 00000001402DC99D: jz      short loc_1402DCA0B
 * 00000001402DC99F: mov     rdi, 7010008004002001h
 * 00000001402DC9A9: mov     eax, 8
 * 00000001402DC9AE: xor     rbx, [r8]
 * 00000001402DC9B1: mov     ecx, r9d
 * 00000001402DC9B4: rol     rbx, cl
 * 00000001402DC9B7: xor     rbx, [r8+8]
 * 00000001402DC9BB: add     r8, 10h
 * 00000001402DC9BF: rol     rbx, cl
 * 00000001402DC9C2: sub     rax, rdx
 * 00000001402DC9C5: jnz     short loc_1402DC9AE
 * 00000001402DC9C7: mov     rcx, r8
 * 00000001402DC9CA: sub     rcx, r15
 * 00000001402DC9CD: xor     rcx, r11
 * 00000001402DC9D0: mov     rax, rcx
 * 00000001402DC9D3: rol     rax, 11h
 * 00000001402DC9D7: xor     rcx, rax
 * 00000001402DC9DA: mov     rax, rdi
 * 00000001402DC9DD: mul     rcx
 * 00000001402DC9E0: xor     r9d, eax
 * 00000001402DC9E3: mov     [rbp+2250h+var_1BE8], rdx
 * 00000001402DC9EA: xor     r9d, edx
 * 00000001402DC9ED: mov     edx, 1
 * 00000001402DC9F2: and     r9d, 3Fh
 * 00000001402DC9F6: cmovz   r9d, edx
 * 00000001402DC9FA: add     r10d, 0FFFFFFFFh
 * 00000001402DC9FE: jnz     short loc_1402DC9A9
 * 00000001402DCA00: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DCA04: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DCA0B: and     r14d, 7Fh
 * 00000001402DCA0F: cmp     r14d, 8
 * 00000001402DCA13: jb      short loc_1402DCA32
 * 00000001402DCA15: mov     eax, r14d
 * 00000001402DCA18: shr     rax, 3
 * 00000001402DCA1C: xor     rbx, [r8]
 * 00000001402DCA1F: mov     ecx, r9d
 * 00000001402DCA22: rol     rbx, cl
 * 00000001402DCA25: add     r8, 8
 * 00000001402DCA29: add     r14d, 0FFFFFFF8h
 * 00000001402DCA2D: sub     rax, rdx
 * 00000001402DCA30: jnz     short loc_1402DCA1C
 * 00000001402DCA32: xor     r15d, r15d
 * 00000001402DCA35: test    r14d, r14d
 * 00000001402DCA38: jz      short loc_1402DCA50
 * 00000001402DCA3A: movzx   eax, byte ptr [r8]
 * 00000001402DCA3E: mov     ecx, r9d
 * 00000001402DCA41: xor     rbx, rax
 * 00000001402DCA44: add     r8, rdx
 * 00000001402DCA47: rol     rbx, cl
 * 00000001402DCA4A: add     r14d, 0FFFFFFFFh
 * 00000001402DCA4E: jnz     short loc_1402DCA3A
 * 00000001402DCA50: mov     rax, rbx
 * 00000001402DCA53: jmp     short loc_1402DCA57
 * 00000001402DCA55: xor     ebx, eax
 * 00000001402DCA57: shr     rax, 1Fh
 * 00000001402DCA5B: test    rax, rax
 * 00000001402DCA5E: jnz     short loc_1402DCA55
 * 00000001402DCA60: mov     rax, [rsi+198h]
 * 00000001402DCA67: lea     rcx, [rbp+2250h+var_18F0]
 * 00000001402DCA6E: btr     ebx, 1Fh
 * 00000001402DCA72: call    KeGuardDispatchICall
 * 00000001402DCA77: mov     r9, [rbp+2250h+var_2240]
 * 00000001402DCA7B: mov     r11d, 40h ; '@'
 * 00000001402DCA81: cmp     ebx, [r9+14h]
 * 00000001402DCA85: jnz     short loc_1402DCAA5
 * 00000001402DCA87: movzx   eax, word ptr [r9+2Ch]
 * 00000001402DCA8C: cmp     [rbp+2250h+var_1F48], ax
 * 00000001402DCA93: jnz     short loc_1402DCAA5
 * 00000001402DCA95: test    r12w, r12w
 * 00000001402DCA99: jnz     short loc_1402DCAA5
 * 00000001402DCA9B: cmp     r13w, r11w
 * 00000001402DCA9F: jz      loc_1402DCB8C
 * 00000001402DCAA5: test    dword ptr [rsi+828h], 40000000h
 * 00000001402DCAAF: mov     r10d, 1
 * 00000001402DCAB5: jz      short loc_1402DCAF7
 * 00000001402DCAB7: mov     rcx, [rsi+908h]
 * 00000001402DCABE: lea     edx, [r10+2Fh]
 * 00000001402DCAC2: lea     r8d, [r10+5]
 * 00000001402DCAC6: mov     rax, [r9]
 * 00000001402DCAC9: add     edx, 0FFFFFFF8h
 * 00000001402DCACC: mov     [rcx], rax
 * 00000001402DCACF: add     r9, 8
 * 00000001402DCAD3: add     rcx, 8
 * 00000001402DCAD7: sub     r8, r10
 * 00000001402DCADA: jnz     short loc_1402DCAC6
 * 00000001402DCADC: test    edx, edx
 * 00000001402DCADE: jz      short loc_1402DCAF0
 * 00000001402DCAE0: mov     al, [r9]
 * 00000001402DCAE3: add     r9, r10
 * 00000001402DCAE6: mov     [rcx], al
 * 00000001402DCAE8: add     rcx, r10
 * 00000001402DCAEB: add     edx, 0FFFFFFFFh
 * 00000001402DCAEE: jnz     short loc_1402DCAE0
 * 00000001402DCAF0: mov     r9, [rsi+908h]
 * 00000001402DCAF7: mov     rax, [rbp+2250h+var_1F46]
 * 00000001402DCAFE: mov     ecx, ebx
 * 00000001402DCB00: mov     [r9+18h], rax
 * 00000001402DCB04: mov     [r9+20h], rcx
 * 00000001402DCB08: test    r12w, r12w
 * 00000001402DCB0C: jz      short loc_1402DCB14
 * 00000001402DCB0E: movzx   eax, r12w
 * 00000001402DCB12: jmp     short loc_1402DCB1E
 * 00000001402DCB14: cmp     r13w, r11w
 * 00000001402DCB18: jz      short loc_1402DCB22
 * 00000001402DCB1A: movzx   eax, r13w
 * 00000001402DCB1E: mov     [r9+18h], rax
 * 00000001402DCB22: mov     eax, [rsi+790h]
 * 00000001402DCB28: mov     edx, [r9+14h]
 * 00000001402DCB2C: test    eax, eax
 * 00000001402DCB2E: jnz     short loc_1402DCB44
 * 00000001402DCB30: mov     rax, [rsi+588h]
 * 00000001402DCB37: xor     rcx, rdx
 * 00000001402DCB3A: mov     [rax+18h], rcx
 * 00000001402DCB3E: mov     eax, [rsi+790h]
 * 00000001402DCB44: mov     rcx, [r9+8]
 * 00000001402DCB48: test    eax, eax
 * 00000001402DCB4A: jnz     short loc_1402DCB8C
 * 00000001402DCB4C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DCB56: add     rax, rsi
 * 00000001402DCB59: mov     [rsi+798h], rax
 * 00000001402DCB60: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DCB6A: add     rax, r9
 * 00000001402DCB6D: mov     [rsi+7A0h], rax
 * 00000001402DCB74: movsxd  rax, dword ptr [r9]
 * 00000001402DCB77: mov     [rsi+7A8h], rax
 * 00000001402DCB7E: mov     [rsi+7B0h], rcx
 * 00000001402DCB85: mov     [rsi+790h], r10d
 * 00000001402DCB8C: mov     r13d, 8000h
 * 00000001402DCB92: add     [rsi+6C8h], r13d
 * 00000001402DCB99: jmp     loc_1402D337E
 * 00000001402DCB9E: mov     edx, [r13+28h]
 * 00000001402DCBA2: lea     rcx, [rbp+2250h+var_18E0]
 * 00000001402DCBA9: mov     rax, [rsi+1A0h]
 * 00000001402DCBB0: xor     r15d, r15d
 * 00000001402DCBB3: mov     [rbp+2250h+var_2238], r15d
 * 00000001402DCBB7: call    KeGuardDispatchICall
 * 00000001402DCBBC: mov     rax, [rsi+1D0h]
 * 00000001402DCBC3: lea     rdx, [rbp+2250h+var_18D0]
 * 00000001402DCBCA: lea     rcx, [rbp+2250h+var_18E0]
 * 00000001402DCBD1: call    KeGuardDispatchICall
 * 00000001402DCBD6: lea     rdx, [rbp+2250h+var_1EA8]
 * 00000001402DCBDD: lea     rcx, [rbp+2250h+var_1828]
 * 00000001402DCBE4: call    KiGetGdtIdt
 * 00000001402DCBE9: mov     rcx, [rbp+2250h+var_1EA6]
 * 00000001402DCBF0: mov     edi, r15d
 * 00000001402DCBF3: mov     [rbp+2250h+var_2230], rcx
 * 00000001402DCBF7: add     rcx, 4
 * 00000001402DCBFB: mov     [rbp+2250h+var_2250], rcx
 * 00000001402DCBFF: mov     rax, [rsi+768h]
 * 00000001402DCC06: mov     r10, r15
 * 00000001402DCC09: mov     [rbp+2250h+var_20D0], rax
 * 00000001402DCC10: mov     r14, r15
 * 00000001402DCC13: mov     r8, [rsi+770h]
 * 00000001402DCC1A: mov     r12d, [rsi+74Ch]
 * 00000001402DCC21: mov     r13d, [rsi+750h]
 * 00000001402DCC28: mov     [rbp+2250h+var_2248], r8
 * 00000001402DCC2C: mov     [rbp+2250h+var_2218], r15
 * 00000001402DCC30: mov     [rbp+2250h+var_2208], r15
 * 00000001402DCC34: mov     r15, cr8
 * 00000001402DCC38: mov     eax, 0Fh
 * 00000001402DCC3D: mov     cr8, rax
 * 00000001402DCC41: movzx   eax, word ptr [rcx-4]
 * 00000001402DCC45: movzx   r9d, word ptr [rcx]
 * 00000001402DCC49: mov     word ptr [rbp+2250h+var_21E8], ax
 * 00000001402DCC4D: movzx   eax, word ptr [rcx+2]
 * 00000001402DCC51: mov     word ptr [rbp+2250h+var_21E8+2], ax
 * 00000001402DCC55: mov     eax, [rcx+4]
 * 00000001402DCC58: mov     rcx, [rsi+610h]
 * 00000001402DCC5F: mov     dword ptr [rbp+2250h+var_21E8+4], eax
 * 00000001402DCC62: shr     r9w, 0Dh
 * 00000001402DCC67: and     r9w, bx
 * 00000001402DCC6B: mov     eax, edi
 * 00000001402DCC6D: mov     rbx, [rbp+2250h+var_21E8]
 * 00000001402DCC71: mov     [rbp+2250h+var_21A6], r9w
 * 00000001402DCC79: lea     rdx, [rcx+rax*8]
 * 00000001402DCC7D: cmp     rbx, rdx
 * 00000001402DCC80: jnz     short loc_1402DCCE4
 * 00000001402DCC82: test    r9w, r9w
 * 00000001402DCC86: jz      short loc_1402DCC98
 * 00000001402DCC88: movzx   eax, r15b
 * 00000001402DCC8C: mov     cr8, rax
 * 00000001402DCC90: xor     r15d, r15d
 * 00000001402DCC93: jmp     loc_1402DCE66
 * 00000001402DCC98: mov     rax, [rsi+470h]
 * 00000001402DCC9F: mov     ecx, edi
 * 00000001402DCCA1: call    KeGuardDispatchICall
 * 00000001402DCCA6: mov     r14, [rax]
 * 00000001402DCCA9: test    r14, r14
 * 00000001402DCCAC: jz      short loc_1402DCCD6
 * 00000001402DCCAE: mov     r12, [r12+r14]
 * 00000001402DCCB2: mov     [rbp+2250h+var_2218], r12
 * 00000001402DCCB6: cmp     edi, 30h ; '0'
 * 00000001402DCCB9: jnb     short loc_1402DCCCB
 * 00000001402DCCBB: movzx   eax, r15b
 * 00000001402DCCBF: mov     cr8, rax
 * 00000001402DCCC3: xor     r15d, r15d
 * 00000001402DCCC6: jmp     loc_1402DCE62
 * 00000001402DCCCB: mov     r13, [r13+r14+0]
 * 00000001402DCCD0: mov     r8, [rbp+2250h+var_2248]
 * 00000001402DCCD4: jmp     short loc_1402DCCEB
 * 00000001402DCCD6: mov     r8, [rbp+2250h+var_2248]
 * 00000001402DCCDA: or      r14, 0FFFFFFFFFFFFFFFFh
 * 00000001402DCCDE: mov     r13, [rbp+2250h+var_2208]
 * 00000001402DCCE2: jmp     short loc_1402DCCE7
 * 00000001402DCCE4: mov     r13, r10
 * 00000001402DCCE7: mov     r12, [rbp+2250h+var_2218]
 * 00000001402DCCEB: movzx   eax, r15b
 * 00000001402DCCEF: mov     cr8, rax
 * 00000001402DCCF3: xor     r15d, r15d
 * 00000001402DCCF6: test    r14, r14
 * 00000001402DCCF9: jnz     short loc_1402DCD4B
 * 00000001402DCCFB: mov     rdx, [rbp+2250h+var_20D0]
 * 00000001402DCD02: cmp     rbx, rdx
 * 00000001402DCD05: jb      loc_1402DCE62
 * 00000001402DCD0B: cmp     rbx, r8
 * 00000001402DCD0E: ja      loc_1402DCE62
 * 00000001402DCD14: mov     r8d, dword ptr [rbp+2250h+var_21E8]
 * 00000001402DCD18: mov     rcx, [rsi+778h]
 * 00000001402DCD1F: sub     r8d, edx
 * 00000001402DCD22: mov     rax, [rsi+210h]
 * 00000001402DCD29: mov     [rbp+2250h+var_1BE0], rdx
 * 00000001402DCD30: call    KeGuardDispatchICall
 * 00000001402DCD35: test    rax, rax
 * 00000001402DCD38: jz      loc_1402DCE62
 * 00000001402DCD3E: mov     eax, [rax+24h]
 * 00000001402DCD41: bt      eax, 19h
 * 00000001402DCD45: jb      loc_1402DCE62
 * 00000001402DCD4B: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DCD4F: mov     ecx, 10h
 * 00000001402DCD54: cmp     [rax-2], cx
 * 00000001402DCD58: jnz     loc_1402DCE62
 * 00000001402DCD5E: movzx   ecx, word ptr [rax]
 * 00000001402DCD61: mov     edx, 1F00h
 * 00000001402DCD66: movzx   eax, cx
 * 00000001402DCD69: and     ax, dx
 * 00000001402DCD6C: mov     edx, 0E00h
 * 00000001402DCD71: cmp     ax, dx
 * 00000001402DCD74: jnz     loc_1402DCE62
 * 00000001402DCD7A: mov     eax, 8000h
 * 00000001402DCD7F: test    ax, cx
 * 00000001402DCD82: jz      loc_1402DCE62
 * 00000001402DCD88: mov     rax, [rsi+260h]
 * 00000001402DCD8F: lea     rdx, [rbp+2250h+var_20D0]
 * 00000001402DCD96: xor     r8d, r8d
 * 00000001402DCD99: mov     rcx, rbx
 * 00000001402DCD9C: call    KeGuardDispatchICall
 * 00000001402DCDA1: test    rax, rax
 * 00000001402DCDA4: jz      short loc_1402DCDCA
 * 00000001402DCDA6: mov     eax, [rax]
 * 00000001402DCDA8: mov     rcx, [rbp+2250h+var_20D0]
 * 00000001402DCDAF: add     rax, rcx
 * 00000001402DCDB2: cmp     rax, rbx
 * 00000001402DCDB5: jnz     short loc_1402DCDCA
 * 00000001402DCDB7: cmp     rcx, [rsi+768h]
 * 00000001402DCDBE: jnz     short loc_1402DCDCA
 * 00000001402DCDC0: test    r14, r14
 * 00000001402DCDC3: jnz     short loc_1402DCDD3
 * 00000001402DCDC5: jmp     loc_1402DCE95
 * 00000001402DCDCA: test    r14, r14
 * 00000001402DCDCD: jz      loc_1402DCE62
 * 00000001402DCDD3: cmp     [rbp+2250h+var_21A6], r15w
 * 00000001402DCDDB: jnz     loc_1402DCE62
 * 00000001402DCDE1: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 00000001402DCDE5: jz      loc_1402DCE95
 * 00000001402DCDEB: mov     rax, [rsi+260h]
 * 00000001402DCDF2: lea     rdx, [rbp+2250h+var_20D0]
 * 00000001402DCDF9: xor     r8d, r8d
 * 00000001402DCDFC: mov     rcx, r12
 * 00000001402DCDFF: call    KeGuardDispatchICall
 * 00000001402DCE04: test    rax, rax
 * 00000001402DCE07: jz      short loc_1402DCE62
 * 00000001402DCE09: mov     eax, [rax]
 * 00000001402DCE0B: mov     rdx, [rbp+2250h+var_20D0]
 * 00000001402DCE12: add     rax, rdx
 * 00000001402DCE15: cmp     rax, r12
 * 00000001402DCE18: jnz     short loc_1402DCE62
 * 00000001402DCE1A: cmp     rdx, [rsi+768h]
 * 00000001402DCE21: jnz     short loc_1402DCE62
 * 00000001402DCE23: mov     rcx, [rsi+778h]
 * 00000001402DCE2A: mov     r8d, r12d
 * 00000001402DCE2D: mov     rax, [rsi+210h]
 * 00000001402DCE34: sub     r8d, edx
 * 00000001402DCE37: mov     [rbp+2250h+var_1BD8], rdx
 * 00000001402DCE3E: call    KeGuardDispatchICall
 * 00000001402DCE43: test    rax, rax
 * 00000001402DCE46: jz      short loc_1402DCE62
 * 00000001402DCE48: mov     eax, [rax+24h]
 * 00000001402DCE4B: bt      eax, 19h
 * 00000001402DCE4F: jb      short loc_1402DCE62
 * 00000001402DCE51: cmp     edi, 0FEh
 * 00000001402DCE57: jnz     short loc_1402DCE95
 * 00000001402DCE59: cmp     r13, [rsi+758h]
 * 00000001402DCE60: jz      short loc_1402DCE95
 * 00000001402DCE62: mov     r10, [rbp+2250h+var_2218]
 * 00000001402DCE66: mov     rax, [rsi+588h]
 * 00000001402DCE6D: mov     [rax], rbx
 * 00000001402DCE70: mov     dword ptr [rax+10h], 80h
 * 00000001402DCE77: test    r10, r10
 * 00000001402DCE7A: jz      short loc_1402DCE8E
 * 00000001402DCE7C: mov     rax, [rsi+588h]
 * 00000001402DCE83: mov     [rax+8], r10
 * 00000001402DCE87: mov     dword ptr [rax+14h], 80h
 * 00000001402DCE8E: mov     [rbp+2250h+var_2238], 1
 * 00000001402DCE95: mov     rcx, [rbp+2250h+var_2250]
 * 00000001402DCE99: inc     edi
 * 00000001402DCE9B: add     rcx, 10h
 * 00000001402DCE9F: mov     ebx, 3
 * 00000001402DCEA4: mov     [rbp+2250h+var_2250], rcx
 * 00000001402DCEA8: cmp     edi, 0FFh
 * 00000001402DCEAE: jbe     loc_1402DCBFF
 * 00000001402DCEB4: lea     ecx, [rbx-2]
 * 00000001402DCEB7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DCEBE: test    [rsi+71Bh], cl
 * 00000001402DCEC4: jz      loc_1402DCF98
 * 00000001402DCECA: cli
 * 00000001402DCECB: mov     r14d, 0C0000082h
 * 00000001402DCED1: mov     ecx, r14d
 * 00000001402DCED4: rdmsr
 * 00000001402DCED6: shl     rdx, 20h
 * 00000001402DCEDA: or      rax, rdx
 * 00000001402DCEDD: lea     rdx, [rsi+71Ah]
 * 00000001402DCEE4: mov     rbx, rax
 * 00000001402DCEE7: mov     rax, rdx
 * 00000001402DCEEA: shr     rdx, 20h
 * 00000001402DCEEE: wrmsr
 * 00000001402DCEF0: mov     r13d, 20000h
 * 00000001402DCEF6: test    [rsi+82Ch], r13d
 * 00000001402DCEFD: jnz     short loc_1402DCF41
 * 00000001402DCEFF: mov     rdx, gs:20h
 * 00000001402DCF08: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402DCF12: mov     rax, [rsi+4B8h]
 * 00000001402DCF19: add     rcx, rsi
 * 00000001402DCF1C: mov     [rax], rcx
 * 00000001402DCF1F: mov     rax, [rsi+4C0h]
 * 00000001402DCF26: mov     [rax], rdx
 * 00000001402DCF29: mov     rax, [rsi+4C8h]
 * 00000001402DCF30: mov     [rax], r14
 * 00000001402DCF33: mov     rax, [rsi+4D0h]
 * 00000001402DCF3A: mov     qword ptr [rax], 112h
 * 00000001402DCF41: lea     rax, [rsi+71Ch]
 * 00000001402DCF48: call    KeGuardDispatchICall
 * 00000001402DCF4D: test    [rsi+82Ch], r13d
 * 00000001402DCF54: jnz     short loc_1402DCF88
 * 00000001402DCF56: mov     rax, [rsi+4B8h]
 * 00000001402DCF5D: mov     rcx, 0A3A03F5891C8B4E8h
 * 00000001402DCF67: mov     [rax], rcx
 * 00000001402DCF6A: mov     rax, [rsi+4C0h]
 * 00000001402DCF71: mov     [rax], r15
 * 00000001402DCF74: mov     rax, [rsi+4C8h]
 * 00000001402DCF7B: mov     [rax], r15
 * 00000001402DCF7E: mov     rax, [rsi+4D0h]
 * 00000001402DCF85: mov     [rax], r15
 * 00000001402DCF88: mov     rdx, rbx
 * 00000001402DCF8B: mov     rax, rbx
 * 00000001402DCF8E: shr     rdx, 20h
 * 00000001402DCF92: mov     ecx, r14d
 * 00000001402DCF95: wrmsr
 * 00000001402DCF97: sti
 * 00000001402DCF98: mov     r15, [rbp+2250h+var_2230]
 * 00000001402DCF9C: add     dword ptr [rsi+6C8h], 350h
 * 00000001402DCFA6: mov     r8, r15
 * 00000001402DCFA9: mov     ebx, [rsi+6C8h]
 * 00000001402DCFAF: mov     rax, r15
 * 00000001402DCFB2: mov     r9d, [rsi+6B4h]
 * 00000001402DCFB9: mov     r11, [rsi+6B8h]
 * 00000001402DCFC0: lea     rcx, [r15+350h]
 * 00000001402DCFC7: cmp     r15, rcx
 * 00000001402DCFCA: jnb     short loc_1402DCFDC
 * 00000001402DCFCC: mov     edx, 40h ; '@'
 * 00000001402DCFD1: prefetchnta byte ptr [rax]
 * 00000001402DCFD4: add     rax, rdx
 * 00000001402DCFD7: cmp     rax, rcx
 * 00000001402DCFDA: jb      short loc_1402DCFD1
 * 00000001402DCFDC: mov     r14, r11
 * 00000001402DCFDF: mov     rsi, 7010008004002001h
 * 00000001402DCFE9: mov     r10d, 6
 * 00000001402DCFEF: mov     edx, 8
 * 00000001402DCFF4: lea     r12d, [rdx-7]
 * 00000001402DCFF8: mov     rax, [r8]
 * 00000001402DCFFB: mov     ecx, r9d
 * 00000001402DCFFE: xor     rax, r14
 * 00000001402DD001: mov     r14, [r8+8]
 * 00000001402DD005: rol     rax, cl
 * 00000001402DD008: add     r8, 10h
 * 00000001402DD00C: xor     r14, rax
 * 00000001402DD00F: rol     r14, cl
 * 00000001402DD012: sub     rdx, r12
 * 00000001402DD015: jnz     short loc_1402DCFF8
 * 00000001402DD017: mov     rcx, r8
 * 00000001402DD01A: sub     rcx, r15
 * 00000001402DD01D: xor     rcx, r11
 * 00000001402DD020: mov     rax, rcx
 * 00000001402DD023: rol     rax, 11h
 * 00000001402DD027: xor     rcx, rax
 * 00000001402DD02A: mov     rax, rsi
 * 00000001402DD02D: mul     rcx
 * 00000001402DD030: xor     r9d, eax
 * 00000001402DD033: mov     [rbp+2250h+var_1BD0], rdx
 * 00000001402DD03A: xor     r9d, edx
 * 00000001402DD03D: mov     rax, r12
 * 00000001402DD040: and     r9d, 3Fh
 * 00000001402DD044: cmovz   r9d, eax
 * 00000001402DD048: add     r10d, 0FFFFFFFFh
 * 00000001402DD04C: jnz     short loc_1402DCFEF
 * 00000001402DD04E: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DD052: lea     edx, [r10+50h]
 * 00000001402DD056: mov     r12d, [rbp+2250h+var_2238]
 * 00000001402DD05A: lea     r10d, [rdx-46h]
 * 00000001402DD05E: mov     r11, rax
 * 00000001402DD061: mov     r13d, 0FFFFFFF8h
 * 00000001402DD067: xor     r14, [r8]
 * 00000001402DD06A: mov     ecx, r9d
 * 00000001402DD06D: rol     r14, cl
 * 00000001402DD070: add     r8, 8
 * 00000001402DD074: add     edx, r13d
 * 00000001402DD077: sub     r10, r11
 * 00000001402DD07A: jnz     short loc_1402DD067
 * 00000001402DD07C: test    edx, edx
 * 00000001402DD07E: jz      short loc_1402DD095
 * 00000001402DD080: movzx   eax, byte ptr [r8]
 * 00000001402DD084: mov     ecx, r9d
 * 00000001402DD087: xor     r14, rax
 * 00000001402DD08A: add     r8, r11
 * 00000001402DD08D: rol     r14, cl
 * 00000001402DD090: add     edx, 0FFFFFFFFh
 * 00000001402DD093: jnz     short loc_1402DD080
 * 00000001402DD095: mov     rax, r14
 * 00000001402DD098: jmp     short loc_1402DD09D
 * 00000001402DD09A: xor     r14d, eax
 * 00000001402DD09D: shr     rax, 1Fh
 * 00000001402DD0A1: test    rax, rax
 * 00000001402DD0A4: jnz     short loc_1402DD09A
 * 00000001402DD0A6: lea     eax, [rbx+10h]
 * 00000001402DD0A9: btr     r14d, 1Fh
 * 00000001402DD0AE: mov     [rsi+6C8h], eax
 * 00000001402DD0B4: lea     rdx, [r15+0E10h]
 * 00000001402DD0BB: mov     r9d, [rsi+6B4h]
 * 00000001402DD0C2: lea     rcx, [r15+0E20h]
 * 00000001402DD0C9: mov     rbx, [rsi+6B8h]
 * 00000001402DD0D0: mov     rax, rdx
 * 00000001402DD0D3: cmp     rdx, rcx
 * 00000001402DD0D6: jnb     short loc_1402DD0E9
 * 00000001402DD0D8: mov     r8d, 40h ; '@'
 * 00000001402DD0DE: prefetchnta byte ptr [rax]
 * 00000001402DD0E1: add     rax, r8
 * 00000001402DD0E4: cmp     rax, rcx
 * 00000001402DD0E7: jb      short loc_1402DD0DE
 * 00000001402DD0E9: mov     eax, 2
 * 00000001402DD0EE: lea     r8d, [rax+0Eh]
 * 00000001402DD0F2: xor     rbx, [rdx]
 * 00000001402DD0F5: mov     ecx, r9d
 * 00000001402DD0F8: rol     rbx, cl
 * 00000001402DD0FB: add     rdx, 8
 * 00000001402DD0FF: add     r8d, r13d
 * 00000001402DD102: sub     rax, r11
 * 00000001402DD105: jnz     short loc_1402DD0F2
 * 00000001402DD107: xor     r15d, r15d
 * 00000001402DD10A: test    r8d, r8d
 * 00000001402DD10D: jz      short loc_1402DD124
 * 00000001402DD10F: movzx   eax, byte ptr [rdx]
 * 00000001402DD112: mov     ecx, r9d
 * 00000001402DD115: xor     rbx, rax
 * 00000001402DD118: add     rdx, r11
 * 00000001402DD11B: rol     rbx, cl
 * 00000001402DD11E: add     r8d, 0FFFFFFFFh
 * 00000001402DD122: jnz     short loc_1402DD10F
 * 00000001402DD124: mov     rax, rbx
 * 00000001402DD127: jmp     short loc_1402DD12B
 * 00000001402DD129: xor     ebx, eax
 * 00000001402DD12B: shr     rax, 1Fh
 * 00000001402DD12F: test    rax, rax
 * 00000001402DD132: jnz     short loc_1402DD129
 * 00000001402DD134: mov     rax, [rsi+198h]
 * 00000001402DD13B: lea     rcx, [rbp+2250h+var_18D0]
 * 00000001402DD142: btr     ebx, 1Fh
 * 00000001402DD146: call    KeGuardDispatchICall
 * 00000001402DD14B: mov     r9, [rbp+2250h+var_2240]
 * 00000001402DD14F: mov     r8d, [r9+14h]
 * 00000001402DD153: cmp     r14d, r8d
 * 00000001402DD156: jnz     short loc_1402DD177
 * 00000001402DD158: mov     eax, ebx
 * 00000001402DD15A: cmp     rax, [r9+18h]
 * 00000001402DD15E: jnz     short loc_1402DD177
 * 00000001402DD160: movzx   eax, word ptr [r9+2Ch]
 * 00000001402DD165: cmp     [rbp+2250h+var_1EA8], ax
 * 00000001402DD16C: jnz     short loc_1402DD177
 * 00000001402DD16E: test    r12d, r12d
 * 00000001402DD171: jz      loc_1402DD200
 * 00000001402DD177: test    r12d, r12d
 * 00000001402DD17A: jnz     short loc_1402DD1AF
 * 00000001402DD17C: mov     rdx, [r9+18h]
 * 00000001402DD180: mov     ecx, [rsi+790h]
 * 00000001402DD186: mov     eax, ebx
 * 00000001402DD188: cmp     rax, rdx
 * 00000001402DD18B: jnz     short loc_1402DD199
 * 00000001402DD18D: test    ecx, ecx
 * 00000001402DD18F: jnz     short loc_1402DD1AF
 * 00000001402DD191: mov     rcx, r8
 * 00000001402DD194: mov     eax, r14d
 * 00000001402DD197: jmp     short loc_1402DD1A1
 * 00000001402DD199: test    ecx, ecx
 * 00000001402DD19B: jnz     short loc_1402DD1AF
 * 00000001402DD19D: mov     ecx, ebx
 * 00000001402DD19F: mov     eax, edx
 * 00000001402DD1A1: xor     rcx, rax
 * 00000001402DD1A4: mov     rax, [rsi+588h]
 * 00000001402DD1AB: mov     [rax+18h], rcx
 * 00000001402DD1AF: mov     rcx, [r9+8]
 * 00000001402DD1B3: cmp     [rsi+790h], r15d
 * 00000001402DD1BA: jnz     short loc_1402DD200
 * 00000001402DD1BC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DD1C6: add     rax, rsi
 * 00000001402DD1C9: mov     [rsi+798h], rax
 * 00000001402DD1D0: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DD1DA: add     rax, r9
 * 00000001402DD1DD: mov     [rsi+7A0h], rax
 * 00000001402DD1E4: movsxd  rax, dword ptr [r9]
 * 00000001402DD1E7: mov     [rsi+7A8h], rax
 * 00000001402DD1EE: mov     eax, 1
 * 00000001402DD1F3: mov     [rsi+7B0h], rcx
 * 00000001402DD1FA: mov     [rsi+790h], eax
 * 00000001402DD200: add     dword ptr [rsi+6C8h], 10000h
 * 00000001402DD20A: jmp     loc_1402D3378
 * 00000001402DD20F: mov     edx, [r13+2Ch]
 * 00000001402DD213: lea     rcx, [rbp+2250h+var_18C0]
 * 00000001402DD21A: mov     rax, [rsi+1A0h]
 * 00000001402DD221: call    KeGuardDispatchICall
 * 00000001402DD226: mov     rax, [rsi+1D0h]
 * 00000001402DD22D: lea     rdx, [rbp+2250h+var_18B0]
 * 00000001402DD234: lea     rcx, [rbp+2250h+var_18C0]
 * 00000001402DD23B: call    KeGuardDispatchICall
 * 00000001402DD240: xor     ecx, ecx
 * 00000001402DD242: xgetbv
 * 00000001402DD245: shl     rdx, 20h
 * 00000001402DD249: lea     rcx, [rbp+2250h+var_18B0]
 * 00000001402DD250: or      rdx, rax
 * 00000001402DD253: mov     rax, [rsi+198h]
 * 00000001402DD25A: mov     rbx, rdx
 * 00000001402DD25D: call    KeGuardDispatchICall
 * 00000001402DD262: mov     r8, [r13+18h]
 * 00000001402DD266: xor     r15d, r15d
 * 00000001402DD269: mov     rdx, [r13+20h]
 * 00000001402DD26D: and     r8, rbx
 * 00000001402DD270: cmp     r8, rdx
 * 00000001402DD273: jz      loc_1402D3378
 * 00000001402DD279: mov     eax, [r13+28h]
 * 00000001402DD27D: mov     ecx, [r13+2Ch]
 * 00000001402DD281: shl     rcx, 20h
 * 00000001402DD285: or      rcx, rax
 * 00000001402DD288: mov     eax, [rsi+790h]
 * 00000001402DD28E: test    eax, eax
 * 00000001402DD290: jnz     loc_1402D3378
 * 00000001402DD296: mov     rax, [rsi+588h]
 * 00000001402DD29D: xor     rdx, r8
 * 00000001402DD2A0: mov     [rax+18h], rdx
 * 00000001402DD2A4: mov     eax, [rsi+790h]
 * 00000001402DD2AA: jmp     loc_1402D4096
 * 00000001402DD2AF: mov     eax, [rsi+82Ch]
 * 00000001402DD2B5: mov     ecx, 2
 * 00000001402DD2BA: test    cl, al
 * 00000001402DD2BC: jnz     loc_1402D3375
 * 00000001402DD2C2: mov     rax, [rsi+428h]
 * 00000001402DD2C9: call    KeGuardDispatchICall
 * 00000001402DD2CE: xor     r15d, r15d
 * 00000001402DD2D1: test    al, al
 * 00000001402DD2D3: jz      loc_1402D3378
 * 00000001402DD2D9: cmp     [rsi+790h], r15d
 * 00000001402DD2E0: jnz     loc_1402D3378
 * 00000001402DD2E6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DD2F0: add     rax, rsi
 * 00000001402DD2F3: mov     [rsi+798h], rax
 * 00000001402DD2FA: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DD304: add     rax, r13
 * 00000001402DD307: mov     [rsi+7A0h], rax
 * 00000001402DD30E: movsxd  rax, dword ptr [r13+0]
 * 00000001402DD312: mov     [rsi+7A8h], rax
 * 00000001402DD319: mov     [rsi+7B0h], r15
 * 00000001402DD320: jmp     loc_1402D40D8
 * 00000001402DD325: mov     r14, rdx
 * 00000001402DD328: mov     [rsi+6C0h], ecx
 * 00000001402DD32E: cmp     [rbp+2250h+var_21FC], r15d
 * 00000001402DD332: jz      short loc_1402DD388
 * 00000001402DD334: mov     rax, gs:188h
 * 00000001402DD33D: lea     rcx, [rbp+2250h+var_18A0]
 * 00000001402DD344: mov     rbx, [rax+0B8h]
 * 00000001402DD34B: mov     rax, [rsi+198h]
 * 00000001402DD352: call    KeGuardDispatchICall
 * 00000001402DD357: mov     rax, [rsi+440h]
 * 00000001402DD35E: lea     rcx, [rbp+2250h+var_1CF0]
 * 00000001402DD365: call    KeGuardDispatchICall
 * 00000001402DD36A: mov     rax, [rsi+3A8h]
 * 00000001402DD371: mov     rcx, rbx
 * 00000001402DD374: call    KeGuardDispatchICall
 * 00000001402DD379: mov     rax, [rsi+3B8h]
 * 00000001402DD380: mov     rcx, rbx
 * 00000001402DD383: call    KeGuardDispatchICall
 * 00000001402DD388: cmp     [rbp+2250h+var_2234], r15d
 * 00000001402DD38C: jz      loc_1402DD429
 * 00000001402DD392: test    [rsi+828h], r13d
 * 00000001402DD399: jnz     short loc_1402DD3A8
 * 00000001402DD39B: cmp     [rsi+790h], r15d
 * 00000001402DD3A2: jnz     loc_1402DD429
 * 00000001402DD3A8: mov     rbx, [rsi+818h]
 * 00000001402DD3AF: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402DD3B6: mov     [rsi+818h], r15
 * 00000001402DD3BD: mov     rcx, rbx
 * 00000001402DD3C0: mov     rax, [rsi+298h]
 * 00000001402DD3C7: call    KeGuardDispatchICall
 * 00000001402DD3CC: mov     eax, [rsi+828h]
 * 00000001402DD3D2: test    r14b, al
 * 00000001402DD3D5: jz      short loc_1402DD415
 * 00000001402DD3D7: and     eax, 0FFFFFFFEh
 * 00000001402DD3DA: mov     rcx, rbx
 * 00000001402DD3DD: mov     [rsi+828h], eax
 * 00000001402DD3E3: mov     rax, [rsi+280h]
 * 00000001402DD3EA: call    KeGuardDispatchICall
 * 00000001402DD3EF: mov     rbx, rax
 * 00000001402DD3F2: test    rax, rax
 * 00000001402DD3F5: jz      short loc_1402DD40E
 * 00000001402DD3F7: mov     rax, [rsi+2A0h]
 * 00000001402DD3FE: mov     rcx, rbx
 * 00000001402DD401: call    KeGuardDispatchICall
 * 00000001402DD406: mov     [rsi+808h], eax
 * 00000001402DD40C: jmp     short loc_1402DD415
 * 00000001402DD40E: or      dword ptr [rsi+808h], 0FFFFFFFFh
 * 00000001402DD415: test    rbx, rbx
 * 00000001402DD418: jz      short loc_1402DD429
 * 00000001402DD41A: mov     rax, [rsi+288h]
 * 00000001402DD421: mov     rcx, rbx
 * 00000001402DD424: call    KeGuardDispatchICall
 * 00000001402DD429: mov     eax, [rsi+828h]
 * 00000001402DD42F: mov     ecx, 800008h
 * 00000001402DD434: and     eax, ecx
 * 00000001402DD436: cmp     eax, ecx
 * 00000001402DD438: jnz     loc_1402DD819
 * 00000001402DD43E: mov     eax, [rsi+82Ch]
 * 00000001402DD444: mov     r11, [rsi+8F8h]
 * 00000001402DD44B: mov     r10d, [rsi+684h]
 * 00000001402DD452: mov     r12, [rsi+890h]
 * 00000001402DD459: mov     r13d, [rsi+6A8h]
 * 00000001402DD460: mov     [rbp+2250h+var_21C8], r11
 * 00000001402DD467: and     eax, r14d
 * 00000001402DD46A: jz      short loc_1402DD473
 * 00000001402DD46C: mov     r12, [rsi+5D0h]
 * 00000001402DD473: mov     rax, [rsi+160h]
 * 00000001402DD47A: mov     [rbp+2250h+var_21E8], rax
 * 00000001402DD47E: mov     rax, [rsi+2C8h]
 * 00000001402DD485: mov     [rbp+2250h+var_2198], rax
 * 00000001402DD48C: mov     rax, [rsi+340h]
 * 00000001402DD493: mov     [rbp+2250h+var_2230], rax
 * 00000001402DD497: rdtsc
 * 00000001402DD499: shl     rdx, 20h
 * 00000001402DD49D: mov     rbx, 7010008004002001h
 * 00000001402DD4A7: or      rax, rdx
 * 00000001402DD4AA: mov     r9, rdi
 * 00000001402DD4AD: mov     rcx, rax
 * 00000001402DD4B0: ror     rax, 3
 * 00000001402DD4B4: xor     rcx, rax
 * 00000001402DD4B7: mov     rax, rbx
 * 00000001402DD4BA: mul     rcx
 * 00000001402DD4BD: mov     rcx, rdx
 * 00000001402DD4C0: mov     [rbp+2250h+var_1BC8], rdx
 * 00000001402DD4C7: xor     rcx, rax
 * 00000001402DD4CA: mov     rax, 0ABCC77118461CEFDh
 * 00000001402DD4D4: mul     rcx
 * 00000001402DD4D7: shr     rdx, 1Ah
 * 00000001402DD4DB: imul    rax, rdx, 5F5E100h
 * 00000001402DD4E2: sub     rcx, rax
 * 00000001402DD4E5: sub     r9, rcx
 * 00000001402DD4E8: mov     [rbp+2250h+var_2050], r9
 * 00000001402DD4EF: mov     r8d, [rsi+828h]
 * 00000001402DD4F6: bt      r8d, 1Ah
 * 00000001402DD4FB: jnb     loc_1402DD5A2
 * 00000001402DD501: rdtsc
 * 00000001402DD503: shl     rdx, 20h
 * 00000001402DD507: or      rax, rdx
 * 00000001402DD50A: mov     rcx, rax
 * 00000001402DD50D: ror     rax, 3
 * 00000001402DD511: xor     rcx, rax
 * 00000001402DD514: mov     rax, rbx
 * 00000001402DD517: mul     rcx
 * 00000001402DD51A: mov     rcx, rdx
 * 00000001402DD51D: mov     [rbp+2250h+var_1BC0], rdx
 * 00000001402DD524: xor     rcx, rax
 * 00000001402DD527: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402DD531: mul     rcx
 * 00000001402DD534: shr     rdx, 3
 * 00000001402DD538: lea     rax, [rdx+rdx*4]
 * 00000001402DD53C: add     rax, rax
 * 00000001402DD53F: sub     rcx, rax
 * 00000001402DD542: mov     eax, 2
 * 00000001402DD547: cmp     rcx, rax
 * 00000001402DD54A: jnb     short loc_1402DD5A2
 * 00000001402DD54C: rdtsc
 * 00000001402DD54E: shl     rdx, 20h
 * 00000001402DD552: or      rax, rdx
 * 00000001402DD555: mov     rcx, rax
 * 00000001402DD558: ror     rax, 3
 * 00000001402DD55C: xor     rcx, rax
 * 00000001402DD55F: mov     rax, rbx
 * 00000001402DD562: mul     rcx
 * 00000001402DD565: mov     rcx, rdx
 * 00000001402DD568: mov     [rbp+2250h+var_1BB8], rdx
 * 00000001402DD56F: xor     rcx, rax
 * 00000001402DD572: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402DD57C: mul     rcx
 * 00000001402DD57F: shr     rdx, 3
 * 00000001402DD583: lea     rax, [rdx+rdx*4]
 * 00000001402DD587: add     rax, rax
 * 00000001402DD58A: sub     rcx, rax
 * 00000001402DD58D: add     rcx, r14
 * 00000001402DD590: imul    rcx, r9
 * 00000001402DD594: mov     [rbp+2250h+var_2050], rcx
 * 00000001402DD59B: mov     r8d, [rsi+828h]
 * 00000001402DD5A2: mov     ecx, 2
 * 00000001402DD5A7: mov     r14d, r13d
 * 00000001402DD5AA: test    cl, r8b
 * 00000001402DD5AD: mov     rbx, r15
 * 00000001402DD5B0: cmovnz  r14d, r10d
 * 00000001402DD5B4: test    r8b, r8b
 * 00000001402DD5B7: js      short loc_1402DD5C5
 * 00000001402DD5B9: xor     r9d, r9d
 * 00000001402DD5BC: mov     [rbp+2250h+var_2234], r9d
 * 00000001402DD5C0: jmp     loc_1402DD69A
 * 00000001402DD5C5: mov     r8d, 1
 * 00000001402DD5CB: mov     [rbp+2250h+var_2234], r8d
 * 00000001402DD5CF: rdtsc
 * 00000001402DD5D1: shl     rdx, 20h
 * 00000001402DD5D5: or      rax, rdx
 * 00000001402DD5D8: mov     rcx, rax
 * 00000001402DD5DB: ror     rax, 3
 * 00000001402DD5DF: xor     rcx, rax
 * 00000001402DD5E2: mov     rax, 7010008004002001h
 * 00000001402DD5EC: mul     rcx
 * 00000001402DD5EF: mov     ecx, 125h
 * 00000001402DD5F4: mov     rbx, rdx
 * 00000001402DD5F7: mov     [rbp+2250h+var_1BB0], rdx
 * 00000001402DD5FE: xor     rbx, rax
 * 00000001402DD601: lea     rax, [rsi+920h]
 * 00000001402DD608: mov     r15, rbx
 * 00000001402DD60B: mov     r10, rbx
 * 00000001402DD60E: xor     r15, rsi
 * 00000001402DD611: xor     [rax], r10
 * 00000001402DD614: lea     rax, [rax-8]
 * 00000001402DD618: ror     r10, cl
 * 00000001402DD61B: sub     ecx, r8d
 * 00000001402DD61E: jnz     short loc_1402DD611
 * 00000001402DD620: lea     r8, [r13-928h]
 * 00000001402DD627: mov     r11, r13
 * 00000001402DD62A: shr     r8, 3
 * 00000001402DD62E: test    r8d, r8d
 * 00000001402DD631: jz      short loc_1402DD667
 * 00000001402DD633: add     rsi, 920h
 * 00000001402DD63A: movsxd  r9, r8d
 * 00000001402DD63D: lea     r9, [rsi+r9*8]
 * 00000001402DD641: lea     esi, [rcx+1]
 * 00000001402DD644: mov     rdx, [r9]
 * 00000001402DD647: lea     rax, [r15+r15]
 * 00000001402DD64B: mov     ecx, r8d
 * 00000001402DD64E: lea     r9, [r9-8]
 * 00000001402DD652: ror     rdx, cl
 * 00000001402DD655: mov     r15, rdx
 * 00000001402DD658: xor     r15, rax
 * 00000001402DD65B: sub     r8d, esi
 * 00000001402DD65E: jnz     short loc_1402DD644
 * 00000001402DD660: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DD664: mov     r11, r13
 * 00000001402DD667: mov     ecx, r14d
 * 00000001402DD66A: lea     rdx, [rsi+r11]
 * 00000001402DD66E: sub     ecx, r13d
 * 00000001402DD671: shr     ecx, 3
 * 00000001402DD674: test    ecx, ecx
 * 00000001402DD676: jz      short loc_1402DD693
 * 00000001402DD678: lea     rdx, [rdx+rcx*8]
 * 00000001402DD67C: mov     eax, 1
 * 00000001402DD681: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001402DD685: xor     [rdx], r10
 * 00000001402DD688: lea     rdx, [rdx-8]
 * 00000001402DD68C: ror     r10, cl
 * 00000001402DD68F: sub     ecx, eax
 * 00000001402DD691: jnz     short loc_1402DD685
 * 00000001402DD693: mov     r11, [rbp+2250h+var_21C8]
 * 00000001402DD69A: test    r11, r11
 * 00000001402DD69D: jz      short loc_1402DD6C0
 * 00000001402DD69F: mov     r9, [rbp+2250h+var_21E8]
 * 00000001402DD6A3: lea     r8, [rbp+2250h+var_2050]
 * 00000001402DD6AA: mov     rax, [rbp+2250h+var_2230]
 * 00000001402DD6AE: mov     edx, r14d
 * 00000001402DD6B1: mov     rcx, rsi
 * 00000001402DD6B4: mov     [rsp+11A0h+BugCheckParameter4], r11
 * 00000001402DD6B9: call    KeGuardDispatchICall
 * 00000001402DD6BE: jmp     short loc_1402DD6FC
 * 00000001402DD6C0: xor     edx, edx
 * 00000001402DD6C2: test    r12, r12
 * 00000001402DD6C5: jnz     short loc_1402DD6DB
 * 00000001402DD6C7: mov     rax, [rbp+2250h+var_21E8]
 * 00000001402DD6CB: lea     r8, [rbp+2250h+var_2050]
 * 00000001402DD6D2: xor     ecx, ecx
 * 00000001402DD6D4: call    KeGuardDispatchICall
 * 00000001402DD6D9: jmp     short loc_1402DD6FC
 * 00000001402DD6DB: lea     rax, [rbp+2250h+var_2050]
 * 00000001402DD6E2: xor     r9d, r9d
 * 00000001402DD6E5: mov     [rsp+11A0h+BugCheckParameter4], rax
 * 00000001402DD6EA: xor     r8d, r8d
 * 00000001402DD6ED: mov     rax, [rbp+2250h+var_2198]
 * 00000001402DD6F4: mov     rcx, r12
 * 00000001402DD6F7: call    KeGuardDispatchICall
 * 00000001402DD6FC: xor     r11d, r11d
 * 00000001402DD6FF: cmp     [rbp+2250h+var_2234], r11d
 * 00000001402DD703: jz      loc_1402DD81C
 * 00000001402DD709: mov     r9, rbx
 * 00000001402DD70C: lea     rax, [rsi+920h]
 * 00000001402DD713: xor     r9, rsi
 * 00000001402DD716: lea     r10d, [r11+1]
 * 00000001402DD71A: mov     ecx, 125h
 * 00000001402DD71F: xor     [rax], rbx
 * 00000001402DD722: lea     rax, [rax-8]
 * 00000001402DD726: ror     rbx, cl
 * 00000001402DD729: sub     ecx, r10d
 * 00000001402DD72C: jnz     short loc_1402DD71F
 * 00000001402DD72E: lea     r8, [r13-928h]
 * 00000001402DD735: mov     r11, r13
 * 00000001402DD738: shr     r8, 3
 * 00000001402DD73C: test    r8d, r8d
 * 00000001402DD73F: jz      short loc_1402DD776
 * 00000001402DD741: movsxd  r10, r8d
 * 00000001402DD744: lea     r11d, [rcx+1]
 * 00000001402DD748: add     r10, 124h
 * 00000001402DD74F: lea     r10, [rsi+r10*8]
 * 00000001402DD753: mov     rdx, [r10]
 * 00000001402DD756: lea     rax, [r9+r9]
 * 00000001402DD75A: mov     ecx, r8d
 * 00000001402DD75D: lea     r10, [r10-8]
 * 00000001402DD761: ror     rdx, cl
 * 00000001402DD764: mov     r9, rdx
 * 00000001402DD767: xor     r9, rax
 * 00000001402DD76A: sub     r8d, r11d
 * 00000001402DD76D: jnz     short loc_1402DD753
 * 00000001402DD76F: mov     r11, r13
 * 00000001402DD772: lea     r10d, [r8+1]
 * 00000001402DD776: sub     r14d, r13d
 * 00000001402DD779: lea     rcx, [rsi+r11]
 * 00000001402DD77D: shr     r14d, 3
 * 00000001402DD781: xor     r11d, r11d
 * 00000001402DD784: test    r14d, r14d
 * 00000001402DD787: jz      short loc_1402DD7A5
 * 00000001402DD789: mov     edx, r14d
 * 00000001402DD78C: dec     rdx
 * 00000001402DD78F: lea     rdx, [rcx+rdx*8]
 * 00000001402DD793: xor     [rdx], rbx
 * 00000001402DD796: mov     ecx, r14d
 * 00000001402DD799: ror     rbx, cl
 * 00000001402DD79C: lea     rdx, [rdx-8]
 * 00000001402DD7A0: sub     r14d, r10d
 * 00000001402DD7A3: jnz     short loc_1402DD793
 * 00000001402DD7A5: cmp     r9, r15
 * 00000001402DD7A8: jz      short loc_1402DD81C
 * 00000001402DD7AA: mov     rax, [rsi+588h]
 * 00000001402DD7B1: mov     ecx, [rsi+684h]
 * 00000001402DD7B7: mov     [rax], rsi
 * 00000001402DD7BA: mov     [rax+10h], ecx
 * 00000001402DD7BD: mov     eax, [rsi+790h]
 * 00000001402DD7C3: test    eax, eax
 * 00000001402DD7C5: jnz     short loc_1402DD81C
 * 00000001402DD7C7: mov     rax, [rsi+588h]
 * 00000001402DD7CE: mov     rcx, r9
 * 00000001402DD7D1: xor     rcx, r15
 * 00000001402DD7D4: mov     [rax+18h], rcx
 * 00000001402DD7D8: mov     eax, [rsi+790h]
 * 00000001402DD7DE: test    eax, eax
 * 00000001402DD7E0: jnz     short loc_1402DD81C
 * 00000001402DD7E2: mov     r12, 0A3A03F5891C8B4E8h
 * 00000001402DD7EC: lea     rax, [rsi+r12]
 * 00000001402DD7F0: mov     [rsi+798h], rax
 * 00000001402DD7F7: mov     [rsi+7A0h], r11
 * 00000001402DD7FE: mov     qword ptr [rsi+7A8h], 10Eh
 * 00000001402DD809: mov     [rsi+7B0h], r9
 * 00000001402DD810: mov     [rsi+790h], r10d
 * 00000001402DD817: jmp     short loc_1402DD826
 * 00000001402DD819: xor     r11d, r11d
 * 00000001402DD81C: mov     r12, 0A3A03F5891C8B4E8h
 * 00000001402DD826: mov     eax, [rsi+7ECh]
 * 00000001402DD82C: mov     r13d, 1
 * 00000001402DD832: cmp     eax, 0Bh
 * 00000001402DD835: jz      loc_1402E1F33
 * 00000001402DD83B: cmp     eax, r13d
 * 00000001402DD83E: jz      loc_1402E1F33
 * 00000001402DD844: cmp     [rsi+790h], r11d
 * 00000001402DD84B: jnz     loc_1402E1F37
 * 00000001402DD851: mov     rax, [rsi+7F8h]
 * 00000001402DD858: mov     rcx, [rax]
 * 00000001402DD85B: cmp     rcx, [rsi+800h]
 * 00000001402DD862: jz      loc_1402E1D04
 * 00000001402DD868: mov     ecx, [rsi+808h]
 * 00000001402DD86E: or      r15d, 0FFFFFFFFh
 * 00000001402DD872: mov     rbx, rsi
 * 00000001402DD875: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DD879: cmp     ecx, r15d
 * 00000001402DD87C: jz      short loc_1402DD88F
 * 00000001402DD87E: mov     rax, [rsi+278h]
 * 00000001402DD885: call    KeGuardDispatchICall
 * 00000001402DD88A: mov     r14, rax
 * 00000001402DD88D: jmp     short loc_1402DD892
 * 00000001402DD88F: mov     r14, r11
 * 00000001402DD892: test    r14, r14
 * 00000001402DD895: jnz     short loc_1402DD8B1
 * 00000001402DD897: mov     rax, [rsi+280h]
 * 00000001402DD89E: xor     ecx, ecx
 * 00000001402DD8A0: call    KeGuardDispatchICall
 * 00000001402DD8A5: mov     r14, rax
 * 00000001402DD8A8: test    rax, rax
 * 00000001402DD8AB: jz      loc_1402E1F33
 * 00000001402DD8B1: mov     rax, [rsi+290h]
 * 00000001402DD8B8: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402DD8BF: mov     rcx, r14
 * 00000001402DD8C2: call    KeGuardDispatchICall
 * 00000001402DD8C7: mov     r15d, eax
 * 00000001402DD8CA: test    eax, eax
 * 00000001402DD8CC: jns     short loc_1402DD8DF
 * 00000001402DD8CE: mov     rax, [rsi+288h]
 * 00000001402DD8D5: mov     rcx, r14
 * 00000001402DD8D8: call    KeGuardDispatchICall
 * 00000001402DD8DD: jmp     short loc_1402DD947
 * 00000001402DD8DF: mov     [rsi+818h], r14
 * 00000001402DD8E6: mov     rax, [rsi+2B8h]
 * 00000001402DD8ED: call    KeGuardDispatchICall
 * 00000001402DD8F2: mov     r14, rax
 * 00000001402DD8F5: mov     rax, [rsi+2D8h]
 * 00000001402DD8FC: mov     rcx, r14
 * 00000001402DD8FF: call    KeGuardDispatchICall
 * 00000001402DD904: xor     r11d, r11d
 * 00000001402DD907: mov     rdx, rax
 * 00000001402DD90A: test    rax, rax
 * 00000001402DD90D: jnz     short loc_1402DD914
 * 00000001402DD90F: lea     ecx, [rax+4]
 * 00000001402DD912: jmp     short loc_1402DD929
 * 00000001402DD914: mov     rax, [rsi+2E8h]
 * 00000001402DD91B: mov     rcx, r14
 * 00000001402DD91E: call    KeGuardDispatchICall
 * 00000001402DD923: xor     r11d, r11d
 * 00000001402DD926: mov     ecx, r11d
 * 00000001402DD929: mov     eax, [rsi+82Ch]
 * 00000001402DD92F: mov     r15d, r11d
 * 00000001402DD932: and     eax, 0FFFFFFFBh
 * 00000001402DD935: or      eax, ecx
 * 00000001402DD937: mov     [rsi+82Ch], eax
 * 00000001402DD93D: add     dword ptr [rsi+6C8h], 10000h
 * 00000001402DD947: test    r15d, r15d
 * 00000001402DD94A: js      loc_1402E1F33
 * 00000001402DD950: mov     rax, [rsi+2A0h]
 * 00000001402DD957: mov     rcx, [rsi+818h]
 * 00000001402DD95E: call    KeGuardDispatchICall
 * 00000001402DD963: xor     r11d, r11d
 * 00000001402DD966: test    eax, eax
 * 00000001402DD968: jnz     loc_1402E16C9
 * 00000001402DD96E: mov     rax, [rsi+570h]
 * 00000001402DD975: lea     ecx, [r11+20h]
 * 00000001402DD979: mov     rdi, [rsi+800h]
 * 00000001402DD980: add     rax, rcx
 * 00000001402DD983: mov     [rbp+2250h+var_1E00], rax
 * 00000001402DD98A: mov     ebx, r11d
 * 00000001402DD98D: mov     rax, [rsi+568h]
 * 00000001402DD994: add     rax, rcx
 * 00000001402DD997: mov     [rbp+2250h+var_21C8], rdi
 * 00000001402DD99E: mov     [rbp+2250h+var_1DF8], rax
 * 00000001402DD9A5: mov     rax, [rsi+7F8h]
 * 00000001402DD9AC: mov     [rbp+2250h+var_21E8], rax
 * 00000001402DD9B0: lea     rax, [rbp+2250h+var_1E00]
 * 00000001402DD9B7: mov     rsi, [rbp+2250h+var_21E8]
 * 00000001402DD9BB: mov     [rbp+2250h+var_2250], rax
 * 00000001402DD9BF: mov     [rbp+2250h+var_2248], 2
 * 00000001402DD9C7: mov     r12, [rax]
 * 00000001402DD9CA: xor     rbx, rsi
 * 00000001402DD9CD: mov     r11d, ebx
 * 00000001402DD9D0: mov     edx, 3Fh ; '?'
 * 00000001402DD9D5: and     r11d, edx
 * 00000001402DD9D8: mov     r13, [r12]
 * 00000001402DD9DC: mov     r15d, [r12+10h]
 * 00000001402DD9E1: mov     r10d, r15d
 * 00000001402DD9E4: shl     r10d, 2
 * 00000001402DD9E8: mov     ecx, r10d
 * 00000001402DD9EB: add     rcx, r13
 * 00000001402DD9EE: cmp     r13, rcx
 * 00000001402DD9F1: jnb     short loc_1402DDA05
 * 00000001402DD9F3: mov     rax, r13
 * 00000001402DD9F6: lea     r8d, [rdx+1]
 * 00000001402DD9FA: prefetchnta byte ptr [rax]
 * 00000001402DD9FD: add     rax, r8
 * 00000001402DDA00: cmp     rax, rcx
 * 00000001402DDA03: jb      short loc_1402DD9FA
 * 00000001402DDA05: mov     r14d, r10d
 * 00000001402DDA08: mov     r8, rbx
 * 00000001402DDA0B: shr     r14d, 7
 * 00000001402DDA0F: mov     r9, r13
 * 00000001402DDA12: test    r14d, r14d
 * 00000001402DDA15: jz      short loc_1402DDA86
 * 00000001402DDA17: mov     esi, 1
 * 00000001402DDA1C: mov     rdi, 7010008004002001h
 * 00000001402DDA26: mov     eax, 8
 * 00000001402DDA2B: xor     r8, [r9]
 * 00000001402DDA2E: mov     ecx, r11d
 * 00000001402DDA31: rol     r8, cl
 * 00000001402DDA34: xor     r8, [r9+8]
 * 00000001402DDA38: add     r9, 10h
 * 00000001402DDA3C: rol     r8, cl
 * 00000001402DDA3F: sub     rax, rsi
 * 00000001402DDA42: jnz     short loc_1402DDA2B
 * 00000001402DDA44: mov     rcx, r9
 * 00000001402DDA47: sub     rcx, r13
 * 00000001402DDA4A: xor     rcx, rbx
 * 00000001402DDA4D: mov     rax, rcx
 * 00000001402DDA50: rol     rax, 11h
 * 00000001402DDA54: xor     rcx, rax
 * 00000001402DDA57: mov     rax, rdi
 * 00000001402DDA5A: mul     rcx
 * 00000001402DDA5D: xor     eax, edx
 * 00000001402DDA5F: mov     [rbp+2250h+var_1BA8], rdx
 * 00000001402DDA66: xor     r11d, eax
 * 00000001402DDA69: mov     edx, 3Fh ; '?'
 * 00000001402DDA6E: and     r11d, edx
 * 00000001402DDA71: cmovz   r11d, esi
 * 00000001402DDA75: add     r14d, 0FFFFFFFFh
 * 00000001402DDA79: jnz     short loc_1402DDA26
 * 00000001402DDA7B: mov     rsi, [rbp+2250h+var_21E8]
 * 00000001402DDA7F: mov     rdi, [rbp+2250h+var_21C8]
 * 00000001402DDA86: and     r10d, 7Fh
 * 00000001402DDA8A: mov     r14d, 1
 * 00000001402DDA90: cmp     r10d, 8
 * 00000001402DDA94: jb      short loc_1402DDAB3
 * 00000001402DDA96: mov     eax, r10d
 * 00000001402DDA99: shr     rax, 3
 * 00000001402DDA9D: xor     r8, [r9]
 * 00000001402DDAA0: mov     ecx, r11d
 * 00000001402DDAA3: rol     r8, cl
 * 00000001402DDAA6: add     r9, 8
 * 00000001402DDAAA: add     r10d, 0FFFFFFF8h
 * 00000001402DDAAE: sub     rax, r14
 * 00000001402DDAB1: jnz     short loc_1402DDA9D
 * 00000001402DDAB3: test    r10d, r10d
 * 00000001402DDAB6: jz      short loc_1402DDACE
 * 00000001402DDAB8: movzx   eax, byte ptr [r9]
 * 00000001402DDABC: mov     ecx, r11d
 * 00000001402DDABF: xor     r8, rax
 * 00000001402DDAC2: add     r9, r14
 * 00000001402DDAC5: rol     r8, cl
 * 00000001402DDAC8: add     r10d, 0FFFFFFFFh
 * 00000001402DDACC: jnz     short loc_1402DDAB8
 * 00000001402DDACE: mov     r12, [r12+18h]
 * 00000001402DDAD3: mov     rcx, r15
 * 00000001402DDAD6: mov     r14, rdi
 * 00000001402DDAD9: mov     [rbp+2250h+var_2230], rcx
 * 00000001402DDADD: xor     r14, r8
 * 00000001402DDAE0: add     rcx, r12
 * 00000001402DDAE3: mov     r10d, r14d
 * 00000001402DDAE6: mov     r9, r12
 * 00000001402DDAE9: and     r10d, edx
 * 00000001402DDAEC: mov     rax, r12
 * 00000001402DDAEF: cmp     r12, rcx
 * 00000001402DDAF2: jnb     short loc_1402DDB04
 * 00000001402DDAF4: mov     edx, 40h ; '@'
 * 00000001402DDAF9: prefetchnta byte ptr [rax]
 * 00000001402DDAFC: add     rax, rdx
 * 00000001402DDAFF: cmp     rax, rcx
 * 00000001402DDB02: jb      short loc_1402DDAF9
 * 00000001402DDB04: mov     r11d, r15d
 * 00000001402DDB07: mov     r8, r14
 * 00000001402DDB0A: shr     r11d, 7
 * 00000001402DDB0E: test    r11d, r11d
 * 00000001402DDB11: jz      short loc_1402DDB7D
 * 00000001402DDB13: mov     ebx, 1
 * 00000001402DDB18: mov     rsi, 7010008004002001h
 * 00000001402DDB22: mov     edx, 8
 * 00000001402DDB27: mov     rax, [r9]
 * 00000001402DDB2A: mov     ecx, r10d
 * 00000001402DDB2D: xor     rax, r8
 * 00000001402DDB30: mov     r8, [r9+8]
 * 00000001402DDB34: rol     rax, cl
 * 00000001402DDB37: add     r9, 10h
 * 00000001402DDB3B: xor     r8, rax
 * 00000001402DDB3E: rol     r8, cl
 * 00000001402DDB41: sub     rdx, rbx
 * 00000001402DDB44: jnz     short loc_1402DDB27
 * 00000001402DDB46: mov     rcx, r9
 * 00000001402DDB49: sub     rcx, r12
 * 00000001402DDB4C: xor     rcx, r14
 * 00000001402DDB4F: mov     rax, rcx
 * 00000001402DDB52: rol     rax, 11h
 * 00000001402DDB56: xor     rcx, rax
 * 00000001402DDB59: mov     rax, rsi
 * 00000001402DDB5C: mul     rcx
 * 00000001402DDB5F: xor     eax, edx
 * 00000001402DDB61: mov     [rbp+2250h+var_1BA0], rdx
 * 00000001402DDB68: xor     r10d, eax
 * 00000001402DDB6B: and     r10d, 3Fh
 * 00000001402DDB6F: cmovz   r10d, ebx
 * 00000001402DDB73: add     r11d, 0FFFFFFFFh
 * 00000001402DDB77: jnz     short loc_1402DDB22
 * 00000001402DDB79: mov     rsi, [rbp+2250h+var_21E8]
 * 00000001402DDB7D: and     r15d, 7Fh
 * 00000001402DDB81: mov     r14d, 1
 * 00000001402DDB87: cmp     r15d, 8
 * 00000001402DDB8B: jb      short loc_1402DDBAA
 * 00000001402DDB8D: mov     edx, r15d
 * 00000001402DDB90: shr     rdx, 3
 * 00000001402DDB94: xor     r8, [r9]
 * 00000001402DDB97: mov     ecx, r10d
 * 00000001402DDB9A: rol     r8, cl
 * 00000001402DDB9D: add     r9, 8
 * 00000001402DDBA1: add     r15d, 0FFFFFFF8h
 * 00000001402DDBA5: sub     rdx, r14
 * 00000001402DDBA8: jnz     short loc_1402DDB94
 * 00000001402DDBAA: xor     r12d, r12d
 * 00000001402DDBAD: test    r15d, r15d
 * 00000001402DDBB0: jz      short loc_1402DDBC8
 * 00000001402DDBB2: movzx   eax, byte ptr [r9]
 * 00000001402DDBB6: mov     ecx, r10d
 * 00000001402DDBB9: xor     r8, rax
 * 00000001402DDBBC: add     r9, r14
 * 00000001402DDBBF: rol     r8, cl
 * 00000001402DDBC2: add     r15d, 0FFFFFFFFh
 * 00000001402DDBC6: jnz     short loc_1402DDBB2
 * 00000001402DDBC8: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DDBCC: mov     rbx, r13
 * 00000001402DDBCF: xor     rbx, [rbp+2250h+var_2230]
 * 00000001402DDBD3: add     rax, 8
 * 00000001402DDBD7: xor     rbx, r8
 * 00000001402DDBDA: mov     [rbp+2250h+var_2250], rax
 * 00000001402DDBDE: sub     [rbp+2250h+var_2248], r14
 * 00000001402DDBE2: jnz     loc_1402DD9C7
 * 00000001402DDBE8: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DDBEC: lea     r8, [rbp+2250h+var_1E2C]
 * 00000001402DDBF3: lea     rdx, [rbp+2250h+var_1E90]
 * 00000001402DDBFA: mov     [rbp+2250h+var_2250], rbx
 * 00000001402DDBFE: mov     rcx, r13
 * 00000001402DDC01: mov     rax, [rsi+200h]
 * 00000001402DDC08: call    KeGuardDispatchICall
 * 00000001402DDC0D: mov     rbx, [rbp+2250h+var_21D8]
 * 00000001402DDC11: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DDC18: test    rax, rax
 * 00000001402DDC1B: jz      loc_1402DE37D
 * 00000001402DDC21: rdtsc
 * 00000001402DDC23: shl     rdx, 20h
 * 00000001402DDC27: mov     r8, 7010008004002001h
 * 00000001402DDC31: or      rax, rdx
 * 00000001402DDC34: mov     rcx, rax
 * 00000001402DDC37: ror     rax, 3
 * 00000001402DDC3B: xor     rcx, rax
 * 00000001402DDC3E: mov     rax, r8
 * 00000001402DDC41: mul     rcx
 * 00000001402DDC44: mov     rcx, rdx
 * 00000001402DDC47: mov     [rbp+2250h+var_1B98], rdx
 * 00000001402DDC4E: xor     rcx, rax
 * 00000001402DDC51: mov     rax, 2E8BA2E8BA2E8BA3h
 * 00000001402DDC5B: mul     rcx
 * 00000001402DDC5E: shr     rdx, 1
 * 00000001402DDC61: imul    rax, rdx, 0Bh
 * 00000001402DDC65: sub     rcx, rax
 * 00000001402DDC68: mov     eax, 5
 * 00000001402DDC6D: cmp     ecx, eax
 * 00000001402DDC6F: ja      loc_1402DDD2D
 * 00000001402DDC75: jz      loc_1402DDD13
 * 00000001402DDC7B: test    ecx, ecx
 * 00000001402DDC7D: jz      short loc_1402DDCF9
 * 00000001402DDC7F: sub     ecx, 1
 * 00000001402DDC82: jz      short loc_1402DDCE0
 * 00000001402DDC84: sub     ecx, 1
 * 00000001402DDC87: jz      short loc_1402DDCC6
 * 00000001402DDC89: cmp     ecx, 1
 * 00000001402DDC8C: jz      short loc_1402DDCA8
 * 00000001402DDC8E: mov     [rbp+2250h+var_1FA8], 67076494h
 * 00000001402DDC98: mov     r9d, [rbp+2250h+var_1FA8]
 * 00000001402DDC9F: rol     r9d, 4
 * 00000001402DDCA3: jmp     loc_1402DDE54
 * 00000001402DDCA8: mov     [rbp+2250h+var_1FA4], 0A8223938h
 * 00000001402DDCB2: mov     r9d, [rbp+2250h+var_1FA4]
 * 00000001402DDCB9: xor     r9d, 3
 * 00000001402DDCBD: ror     r9d, 0Fh
 * 00000001402DDCC1: jmp     loc_1402DDE54
 * 00000001402DDCC6: mov     [rbp+2250h+var_1FA0], 85B5910Dh
 * 00000001402DDCD0: mov     r9d, [rbp+2250h+var_1FA0]
 * 00000001402DDCD7: ror     r9d, 2
 * 00000001402DDCDB: jmp     loc_1402DDE54
 * 00000001402DDCE0: mov     [rbp+2250h+var_2018], 0B2AD31A1h
 * 00000001402DDCEA: mov     r9d, [rbp+2250h+var_2018]
 * 00000001402DDCF1: rol     r9d, 1
 * 00000001402DDCF4: jmp     loc_1402DDE54
 * 00000001402DDCF9: mov     [rbp+2250h+var_1F9C], 0D098D0D8h
 * 00000001402DDD03: mov     r9d, [rbp+2250h+var_1F9C]
 * 00000001402DDD0A: ror     r9d, 6
 * 00000001402DDD0E: jmp     loc_1402DDE54
 * 00000001402DDD13: mov     [rbp+2250h+var_1F98], 288C49EDh
 * 00000001402DDD1D: mov     r9d, [rbp+2250h+var_1F98]
 * 00000001402DDD24: ror     r9d, 5
 * 00000001402DDD28: jmp     loc_1402DDE54
 * 00000001402DDD2D: mov     edx, 6
 * 00000001402DDD32: sub     ecx, edx
 * 00000001402DDD34: jz      loc_1402DDE3C
 * 00000001402DDD3A: sub     ecx, 1
 * 00000001402DDD3D: jz      loc_1402DDE25
 * 00000001402DDD43: sub     ecx, 1
 * 00000001402DDD46: jz      loc_1402DDE0E
 * 00000001402DDD4C: cmp     ecx, 1
 * 00000001402DDD4F: jz      loc_1402DDDF3
 * 00000001402DDD55: rdtsc
 * 00000001402DDD57: shl     rdx, 20h
 * 00000001402DDD5B: mov     r10d, 4EC4EC4Fh
 * 00000001402DDD61: or      rax, rdx
 * 00000001402DDD64: mov     rcx, rax
 * 00000001402DDD67: ror     rax, 3
 * 00000001402DDD6B: xor     rcx, rax
 * 00000001402DDD6E: mov     rax, r8
 * 00000001402DDD71: mul     rcx
 * 00000001402DDD74: mov     r9, rax
 * 00000001402DDD77: mov     [rbp+2250h+var_1B90], rdx
 * 00000001402DDD7E: xor     r9d, edx
 * 00000001402DDD81: mov     eax, r10d
 * 00000001402DDD84: mul     r9d
 * 00000001402DDD87: mov     ecx, r9d
 * 00000001402DDD8A: shr     r9d, 5
 * 00000001402DDD8E: shr     edx, 3
 * 00000001402DDD91: mov     r8d, r9d
 * 00000001402DDD94: imul    eax, edx, 1Ah
 * 00000001402DDD97: sub     ecx, eax
 * 00000001402DDD99: mov     eax, r10d
 * 00000001402DDD9C: mul     r9d
 * 00000001402DDD9F: add     ecx, 61h ; 'a'
 * 00000001402DDDA2: shr     r9d, 5
 * 00000001402DDDA6: shl     ecx, 8
 * 00000001402DDDA9: shr     edx, 3
 * 00000001402DDDAC: imul    eax, edx, 1Ah
 * 00000001402DDDAF: sub     r8d, eax
 * 00000001402DDDB2: mov     eax, r10d
 * 00000001402DDDB5: mul     r9d
 * 00000001402DDDB8: add     r8d, 41h ; 'A'
 * 00000001402DDDBC: or      r8d, ecx
 * 00000001402DDDBF: shr     edx, 3
 * 00000001402DDDC2: imul    eax, edx, 1Ah
 * 00000001402DDDC5: mov     ecx, r9d
 * 00000001402DDDC8: shr     r9d, 5
 * 00000001402DDDCC: shl     r8d, 8
 * 00000001402DDDD0: sub     ecx, eax
 * 00000001402DDDD2: mov     eax, r10d
 * 00000001402DDDD5: mul     r9d
 * 00000001402DDDD8: add     ecx, 61h ; 'a'
 * 00000001402DDDDB: shr     edx, 3
 * 00000001402DDDDE: or      ecx, r8d
 * 00000001402DDDE1: imul    eax, edx, 1Ah
 * 00000001402DDDE4: shl     ecx, 8
 * 00000001402DDDE7: sub     r9d, eax
 * 00000001402DDDEA: add     r9d, 41h ; 'A'
 * 00000001402DDDEE: or      r9d, ecx
 * 00000001402DDDF1: jmp     short loc_1402DDE54
 * 00000001402DDDF3: mov     [rbp+2250h+var_1F94], 0B0869E85h
 * 00000001402DDDFD: mov     r9d, [rbp+2250h+var_1F94]
 * 00000001402DDE04: xor     r9d, 9
 * 00000001402DDE08: ror     r9d, 21h
 * 00000001402DDE0C: jmp     short loc_1402DDE54
 * 00000001402DDE0E: mov     [rbp+2250h+var_1F90], 64664142h
 * 00000001402DDE18: mov     r9d, [rbp+2250h+var_1F90]
 * 00000001402DDE1F: ror     r9d, 8
 * 00000001402DDE23: jmp     short loc_1402DDE54
 * 00000001402DDE25: mov     [rbp+2250h+var_1F8C], 82C6A6D8h
 * 00000001402DDE2F: mov     r9d, [rbp+2250h+var_1F8C]
 * 00000001402DDE36: rol     r9d, 7
 * 00000001402DDE3A: jmp     short loc_1402DDE54
 * 00000001402DDE3C: mov     [rbp+2250h+var_1F88], 4E574672h
 * 00000001402DDE46: mov     r9d, [rbp+2250h+var_1F88]
 * 00000001402DDE4D: xor     r9d, edx
 * 00000001402DDE50: ror     r9d, 18h
 * 00000001402DDE54: mov     rax, [rsi+0F8h]
 * 00000001402DDE5B: mov     r12d, 80h
 * 00000001402DDE61: mov     edx, r12d
 * 00000001402DDE64: mov     r8d, r9d
 * 00000001402DDE67: mov     ecx, 200h
 * 00000001402DDE6C: call    KeGuardDispatchICall
 * 00000001402DDE71: xor     r11d, r11d
 * 00000001402DDE74: mov     [rbp+2250h+var_2248], rax
 * 00000001402DDE78: mov     r15, rax
 * 00000001402DDE7B: test    rax, rax
 * 00000001402DDE7E: jz      loc_1402E16C3
 * 00000001402DDE84: mov     ecx, r12d
 * 00000001402DDE87: lea     edx, [r12-70h]
 * 00000001402DDE8C: mov     [rax], r11
 * 00000001402DDE8F: add     ecx, 0FFFFFFF8h
 * 00000001402DDE92: add     rax, 8
 * 00000001402DDE96: sub     rdx, r14
 * 00000001402DDE99: jnz     short loc_1402DDE8C
 * 00000001402DDE9B: test    ecx, ecx
 * 00000001402DDE9D: jz      short loc_1402DDEAA
 * 00000001402DDE9F: mov     [rax], r11b
 * 00000001402DDEA2: add     rax, r14
 * 00000001402DDEA5: add     ecx, 0FFFFFFFFh
 * 00000001402DDEA8: jnz     short loc_1402DDE9F
 * 00000001402DDEAA: mov     rax, [rbp+2250h+var_1E90]
 * 00000001402DDEB1: mov     rcx, r11
 * 00000001402DDEB4: mov     [rbp+2250h+var_20C8], rax
 * 00000001402DDEBB: mov     [r15], rax
 * 00000001402DDEBE: mov     rax, [rbp+2250h+var_2250]
 * 00000001402DDEC2: mov     [rbp+2250h+var_21E8], rax
 * 00000001402DDEC6: mov     [rbp+2250h+var_21FC], r11d
 * 00000001402DDECA: mov     [rbp+2250h+var_2208], rcx
 * 00000001402DDECE: mov     rcx, [r15+rcx*8]
 * 00000001402DDED2: mov     [rbp+2250h+var_20C8], rcx
 * 00000001402DDED9: test    rcx, rcx
 * 00000001402DDEDC: jz      loc_1402DE2B0
 * 00000001402DDEE2: and     eax, 3Fh
 * 00000001402DDEE5: mov     [rbp+2250h+var_2234], eax
 * 00000001402DDEE8: mov     rax, [rsi+1F8h]
 * 00000001402DDEEF: call    KeGuardDispatchICall
 * 00000001402DDEF4: xor     r11d, r11d
 * 00000001402DDEF7: mov     [rbp+2250h+var_2230], rax
 * 00000001402DDEFB: test    rax, rax
 * 00000001402DDEFE: jz      loc_1402DE309
 * 00000001402DDF04: movzx   r15d, word ptr [rax+14h]
 * 00000001402DDF09: mov     edi, [rbp+2250h+var_2234]
 * 00000001402DDF0C: add     r15, 18h
 * 00000001402DDF10: mov     rbx, [rbp+2250h+var_21E8]
 * 00000001402DDF14: add     r15, rax
 * 00000001402DDF17: movzx   eax, word ptr [rax+6]
 * 00000001402DDF1B: lea     rcx, [rax+rax*4]
 * 00000001402DDF1F: lea     rax, [r15+rcx*8]
 * 00000001402DDF23: mov     [rbp+2250h+var_21C8], rax
 * 00000001402DDF2A: mov     eax, [r15+24h]
 * 00000001402DDF2E: mov     r13d, r11d
 * 00000001402DDF31: bt      eax, 19h
 * 00000001402DDF35: jb      loc_1402DDFDF
 * 00000001402DDF3B: mov     ecx, [r15]
 * 00000001402DDF3E: cmp     ecx, 54494E49h
 * 00000001402DDF44: jnz     short loc_1402DDF54
 * 00000001402DDF46: cmp     dword ptr [r15+4], 4742444Bh
 * 00000001402DDF4E: jz      loc_1402DDFDF
 * 00000001402DDF54: cmp     ecx, 45474150h
 * 00000001402DDF5A: jnz     short loc_1402DDF7F
 * 00000001402DDF5C: movzx   eax, word ptr [r15+4]
 * 00000001402DDF61: mov     edx, 7877h
 * 00000001402DDF66: cmp     ax, dx
 * 00000001402DDF69: jz      short loc_1402DDFDF
 * 00000001402DDF6B: mov     edx, 7277h
 * 00000001402DDF70: cmp     ax, dx
 * 00000001402DDF73: jz      short loc_1402DDFDF
 * 00000001402DDF75: mov     edx, 7777h
 * 00000001402DDF7A: cmp     ax, dx
 * 00000001402DDF7D: jz      short loc_1402DDFDF
 * 00000001402DDF7F: cmp     ecx, 41525245h
 * 00000001402DDF85: jnz     short loc_1402DDF93
 * 00000001402DDF87: mov     eax, 4154h
 * 00000001402DDF8C: cmp     [r15+4], ax
 * 00000001402DDF91: jz      short loc_1402DDFDF
 * 00000001402DDF93: mov     r8, [rsi+7C8h]
 * 00000001402DDF9A: mov     r9, r15
 * 00000001402DDF9D: mov     r10, [rsi+7D0h]
 * 00000001402DDFA4: sub     r9, r8
 * 00000001402DDFA7: mov     r14, [rsi+7D8h]
 * 00000001402DDFAE: mov     r11d, 7
 * 00000001402DDFB4: mov     r12, [rsi+7E0h]
 * 00000001402DDFBB: movzx   edx, byte ptr [r8+r9]
 * 00000001402DDFC0: movzx   eax, byte ptr [r8]
 * 00000001402DDFC4: inc     r8
 * 00000001402DDFC7: cmp     rdx, rax
 * 00000001402DDFCA: jnz     loc_1402DE1F3
 * 00000001402DDFD0: add     r11d, 0FFFFFFFFh
 * 00000001402DDFD4: jnz     short loc_1402DDFBB
 * 00000001402DDFD6: mov     r14d, 1
 * 00000001402DDFDC: xor     r11d, r11d
 * 00000001402DDFDF: mov     r13d, r14d
 * 00000001402DDFE2: cmp     [r15+24h], r11d
 * 00000001402DDFE6: mov     eax, [r15+8]
 * 00000001402DDFEA: mov     r9d, [r15+10h]
 * 00000001402DDFEE: cmovl   r13d, r14d
 * 00000001402DDFF2: cmp     r9d, eax
 * 00000001402DDFF5: cmovbe  r9d, eax
 * 00000001402DDFF9: mov     eax, [r15+0Ch]
 * 00000001402DDFFD: test    r13d, r13d
 * 00000001402DE000: jnz     loc_1402DE0F8
 * 00000001402DE006: mov     r14d, eax
 * 00000001402DE009: mov     ecx, r9d
 * 00000001402DE00C: add     r14, [rbp+2250h+var_20C8]
 * 00000001402DE013: mov     r11d, edi
 * 00000001402DE016: add     rcx, r14
 * 00000001402DE019: mov     r10, r14
 * 00000001402DE01C: mov     rax, r14
 * 00000001402DE01F: cmp     r14, rcx
 * 00000001402DE022: jnb     short loc_1402DE033
 * 00000001402DE024: lea     edx, [r13+40h]
 * 00000001402DE028: prefetchnta byte ptr [rax]
 * 00000001402DE02B: add     rax, rdx
 * 00000001402DE02E: cmp     rax, rcx
 * 00000001402DE031: jb      short loc_1402DE028
 * 00000001402DE033: mov     r12d, r9d
 * 00000001402DE036: mov     r8, rbx
 * 00000001402DE039: shr     r12d, 7
 * 00000001402DE03D: test    r12d, r12d
 * 00000001402DE040: jz      short loc_1402DE0AA
 * 00000001402DE042: mov     esi, 1
 * 00000001402DE047: mov     rdi, 7010008004002001h
 * 00000001402DE051: mov     eax, 8
 * 00000001402DE056: xor     r8, [r10]
 * 00000001402DE059: mov     ecx, r11d
 * 00000001402DE05C: rol     r8, cl
 * 00000001402DE05F: xor     r8, [r10+8]
 * 00000001402DE063: add     r10, 10h
 * 00000001402DE067: rol     r8, cl
 * 00000001402DE06A: sub     rax, rsi
 * 00000001402DE06D: jnz     short loc_1402DE056
 * 00000001402DE06F: mov     rcx, r10
 * 00000001402DE072: sub     rcx, r14
 * 00000001402DE075: xor     rcx, rbx
 * 00000001402DE078: mov     rax, rcx
 * 00000001402DE07B: rol     rax, 11h
 * 00000001402DE07F: xor     rcx, rax
 * 00000001402DE082: mov     rax, rdi
 * 00000001402DE085: mul     rcx
 * 00000001402DE088: xor     r11d, eax
 * 00000001402DE08B: mov     [rbp+2250h+var_1B88], rdx
 * 00000001402DE092: xor     r11d, edx
 * 00000001402DE095: and     r11d, 3Fh
 * 00000001402DE099: cmovz   r11d, esi
 * 00000001402DE09D: add     r12d, 0FFFFFFFFh
 * 00000001402DE0A1: jnz     short loc_1402DE051
 * 00000001402DE0A3: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DE0A7: mov     edi, [rbp+2250h+var_2234]
 * 00000001402DE0AA: and     r9d, 7Fh
 * 00000001402DE0AE: mov     r14d, 1
 * 00000001402DE0B4: cmp     r9d, 8
 * 00000001402DE0B8: jb      short loc_1402DE0D7
 * 00000001402DE0BA: mov     eax, r9d
 * 00000001402DE0BD: shr     rax, 3
 * 00000001402DE0C1: xor     r8, [r10]
 * 00000001402DE0C4: mov     ecx, r11d
 * 00000001402DE0C7: rol     r8, cl
 * 00000001402DE0CA: add     r10, 8
 * 00000001402DE0CE: add     r9d, 0FFFFFFF8h
 * 00000001402DE0D2: sub     rax, r14
 * 00000001402DE0D5: jnz     short loc_1402DE0C1
 * 00000001402DE0D7: test    r9d, r9d
 * 00000001402DE0DA: jz      short loc_1402DE0F2
 * 00000001402DE0DC: movzx   eax, byte ptr [r10]
 * 00000001402DE0E0: mov     ecx, r11d
 * 00000001402DE0E3: xor     r8, rax
 * 00000001402DE0E6: add     r10, r14
 * 00000001402DE0E9: rol     r8, cl
 * 00000001402DE0EC: add     r9d, 0FFFFFFFFh
 * 00000001402DE0F0: jnz     short loc_1402DE0DC
 * 00000001402DE0F2: mov     rbx, r8
 * 00000001402DE0F5: xor     r11d, r11d
 * 00000001402DE0F8: add     r15, 28h ; '('
 * 00000001402DE0FC: cmp     r15, [rbp+2250h+var_21C8]
 * 00000001402DE103: jnz     loc_1402DDF2A
 * 00000001402DE109: mov     edx, [rbp+2250h+var_21FC]
 * 00000001402DE10C: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DE113: mov     [rbp+2250h+var_21E8], rbx
 * 00000001402DE117: test    edx, edx
 * 00000001402DE119: jnz     loc_1402DE2DF
 * 00000001402DE11F: mov     rax, [rbp+2250h+var_2230]
 * 00000001402DE123: mov     r13, [rbp+2250h+var_20C8]
 * 00000001402DE12A: mov     ecx, [rax+94h]
 * 00000001402DE130: cmp     ecx, 14h
 * 00000001402DE133: jb      loc_1402DE2DF
 * 00000001402DE139: mov     eax, [rax+90h]
 * 00000001402DE13F: lea     r12, [rax+rcx]
 * 00000001402DE143: add     r12, r13
 * 00000001402DE146: lea     r14, [rax+r13]
 * 00000001402DE14A: cmp     r14, r12
 * 00000001402DE14D: jz      loc_1402DE2D9
 * 00000001402DE153: cmp     [r14+0Ch], r11d
 * 00000001402DE157: jz      loc_1402DE2D6
 * 00000001402DE15D: mov     eax, [r14+10h]
 * 00000001402DE161: test    eax, eax
 * 00000001402DE163: jz      loc_1402DE2D6
 * 00000001402DE169: mov     r15, [rax+r13]
 * 00000001402DE16D: test    r15, r15
 * 00000001402DE170: jz      loc_1402DE2B8
 * 00000001402DE176: mov     rax, [rsi+2A8h]
 * 00000001402DE17D: mov     rcx, r15
 * 00000001402DE180: call    KeGuardDispatchICall
 * 00000001402DE185: xor     r11d, r11d
 * 00000001402DE188: test    eax, eax
 * 00000001402DE18A: jz      loc_1402DE2B8
 * 00000001402DE190: mov     rax, [rsi+200h]
 * 00000001402DE197: lea     r8, [rbp+2250h+var_1E30]
 * 00000001402DE19E: lea     rdx, [rbp+2250h+var_20C8]
 * 00000001402DE1A5: mov     rcx, r15
 * 00000001402DE1A8: call    KeGuardDispatchICall
 * 00000001402DE1AD: xor     r11d, r11d
 * 00000001402DE1B0: lea     r9d, [r11+10h]
 * 00000001402DE1B4: test    rax, rax
 * 00000001402DE1B7: jz      loc_1402DE2BE
 * 00000001402DE1BD: mov     r15, [rbp+2250h+var_2248]
 * 00000001402DE1C1: mov     ecx, r11d
 * 00000001402DE1C4: mov     r8, [rbp+2250h+var_20C8]
 * 00000001402DE1CB: mov     rax, r15
 * 00000001402DE1CE: mov     rdx, [rax]
 * 00000001402DE1D1: cmp     rdx, r8
 * 00000001402DE1D4: jz      loc_1402DE2A7
 * 00000001402DE1DA: test    rdx, rdx
 * 00000001402DE1DD: jz      loc_1402DE2A1
 * 00000001402DE1E3: inc     ecx
 * 00000001402DE1E5: add     rax, 8
 * 00000001402DE1E9: cmp     ecx, r9d
 * 00000001402DE1EC: jb      short loc_1402DE1CE
 * 00000001402DE1EE: jmp     loc_1402DE2A7
 * 00000001402DE1F3: mov     r8d, 8
 * 00000001402DE1F9: mov     r9, r15
 * 00000001402DE1FC: mov     rcx, [r9]
 * 00000001402DE1FF: add     r9, 8
 * 00000001402DE203: mov     rax, [r10]
 * 00000001402DE206: add     r10, 8
 * 00000001402DE20A: cmp     rcx, rax
 * 00000001402DE20D: jnz     short loc_1402DE243
 * 00000001402DE20F: add     r8d, 0FFFFFFF8h
 * 00000001402DE213: cmp     r8d, 8
 * 00000001402DE217: jnb     short loc_1402DE1FC
 * 00000001402DE219: xor     r11d, r11d
 * 00000001402DE21C: test    r8d, r8d
 * 00000001402DE21F: jz      loc_1402DDFD6
 * 00000001402DE225: movzx   edx, byte ptr [r9]
 * 00000001402DE229: inc     r9
 * 00000001402DE22C: movzx   eax, byte ptr [r10]
 * 00000001402DE230: inc     r10
 * 00000001402DE233: cmp     rdx, rax
 * 00000001402DE236: jnz     short loc_1402DE246
 * 00000001402DE238: add     r8d, 0FFFFFFFFh
 * 00000001402DE23C: jnz     short loc_1402DE225
 * 00000001402DE23E: jmp     loc_1402DDFD6
 * 00000001402DE243: xor     r11d, r11d
 * 00000001402DE246: mov     r8, r15
 * 00000001402DE249: mov     r9d, 4
 * 00000001402DE24F: sub     r8, r14
 * 00000001402DE252: or      r10d, 0FFFFFFFFh
 * 00000001402DE256: movzx   edx, byte ptr [r14+r8]
 * 00000001402DE25B: movzx   eax, byte ptr [r14]
 * 00000001402DE25F: inc     r14
 * 00000001402DE262: cmp     rdx, rax
 * 00000001402DE265: jnz     short loc_1402DE271
 * 00000001402DE267: add     r9d, r10d
 * 00000001402DE26A: jnz     short loc_1402DE256
 * 00000001402DE26C: jmp     loc_1402DDFD6
 * 00000001402DE271: mov     r9d, 6
 * 00000001402DE277: mov     r8, r15
 * 00000001402DE27A: sub     r8, r12
 * 00000001402DE27D: lea     r14d, [r9-5]
 * 00000001402DE281: movzx   edx, byte ptr [r12+r8]
 * 00000001402DE286: movzx   eax, byte ptr [r12]
 * 00000001402DE28B: add     r12, r14
 * 00000001402DE28E: cmp     rdx, rax
 * 00000001402DE291: jnz     loc_1402DDFE2
 * 00000001402DE297: add     r9d, r10d
 * 00000001402DE29A: jnz     short loc_1402DE281
 * 00000001402DE29C: jmp     loc_1402DDFDC
 * 00000001402DE2A1: mov     eax, ecx
 * 00000001402DE2A3: mov     [r15+rax*8], r8
 * 00000001402DE2A7: cmp     ecx, r9d
 * 00000001402DE2AA: jnz     short loc_1402DE2BE
 * 00000001402DE2AC: mov     rax, [rbp+2250h+var_21E8]
 * 00000001402DE2B0: mov     r14, rax
 * 00000001402DE2B3: jmp     loc_1402DE34E
 * 00000001402DE2B8: mov     r9d, 10h
 * 00000001402DE2BE: add     r14, 14h
 * 00000001402DE2C2: cmp     r14, r12
 * 00000001402DE2C5: jnz     loc_1402DE153
 * 00000001402DE2CB: mov     edx, [rbp+2250h+var_21FC]
 * 00000001402DE2CE: mov     r14d, 1
 * 00000001402DE2D4: jmp     short loc_1402DE2E5
 * 00000001402DE2D6: mov     edx, [rbp+2250h+var_21FC]
 * 00000001402DE2D9: mov     r14d, 1
 * 00000001402DE2DF: mov     r9d, 10h
 * 00000001402DE2E5: mov     rcx, [rbp+2250h+var_2208]
 * 00000001402DE2E9: add     edx, r14d
 * 00000001402DE2EC: mov     rax, [rbp+2250h+var_21E8]
 * 00000001402DE2F0: add     rcx, r14
 * 00000001402DE2F3: mov     r15, [rbp+2250h+var_2248]
 * 00000001402DE2F7: mov     [rbp+2250h+var_21FC], edx
 * 00000001402DE2FA: mov     [rbp+2250h+var_2208], rcx
 * 00000001402DE2FE: cmp     edx, r9d
 * 00000001402DE301: jb      loc_1402DDECE
 * 00000001402DE307: jmp     short loc_1402DE2B0
 * 00000001402DE309: cmp     [rsi+790h], r11d
 * 00000001402DE310: jnz     short loc_1402DE34A
 * 00000001402DE312: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DE31C: add     rax, rsi
 * 00000001402DE31F: mov     [rsi+798h], rax
 * 00000001402DE326: mov     [rsi+7A0h], r11
 * 00000001402DE32D: mov     qword ptr [rsi+7A8h], 102h
 * 00000001402DE338: mov     qword ptr [rsi+7B0h], 0FFFFFFFFC000007Bh
 * 00000001402DE343: mov     [rsi+790h], r14d
 * 00000001402DE34A: mov     r14, [rbp+2250h+var_2250]
 * 00000001402DE34E: cmp     r14, [rsi+800h]
 * 00000001402DE355: jz      short loc_1402DE35C
 * 00000001402DE357: test    r14, r14
 * 00000001402DE35A: jnz     short loc_1402DE369
 * 00000001402DE35C: mov     rax, 95EA5DE843D5D824h
 * 00000001402DE366: xor     r14, rax
 * 00000001402DE369: mov     rax, [rsi+100h]
 * 00000001402DE370: mov     rcx, r15
 * 00000001402DE373: call    KeGuardDispatchICall
 * 00000001402DE378: xor     r12d, r12d
 * 00000001402DE37B: jmp     short loc_1402DE381
 * 00000001402DE37D: mov     r14, [rbp+2250h+var_2250]
 * 00000001402DE381: mov     rax, [rsi+7F8h]
 * 00000001402DE388: mov     rcx, [rax]
 * 00000001402DE38B: cmp     r14, rcx
 * 00000001402DE38E: jz      short loc_1402DE406
 * 00000001402DE390: mov     eax, [rsi+82Ch]
 * 00000001402DE396: mov     ecx, 40h ; '@'
 * 00000001402DE39B: test    cl, al
 * 00000001402DE39D: jnz     short loc_1402DE406
 * 00000001402DE39F: mov     rax, [rsi+7F8h]
 * 00000001402DE3A6: mov     rdx, [rax]
 * 00000001402DE3A9: mov     eax, [rsi+790h]
 * 00000001402DE3AF: test    eax, eax
 * 00000001402DE3B1: jnz     short loc_1402DE406
 * 00000001402DE3B3: mov     rax, [rsi+588h]
 * 00000001402DE3BA: mov     rcx, r14
 * 00000001402DE3BD: xor     rcx, rdx
 * 00000001402DE3C0: mov     [rax+18h], rcx
 * 00000001402DE3C4: mov     eax, [rsi+790h]
 * 00000001402DE3CA: test    eax, eax
 * 00000001402DE3CC: jnz     short loc_1402DE406
 * 00000001402DE3CE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DE3D8: add     rax, rsi
 * 00000001402DE3DB: mov     [rsi+798h], rax
 * 00000001402DE3E2: mov     eax, 1
 * 00000001402DE3E7: mov     [rsi+7A0h], r12
 * 00000001402DE3EE: mov     qword ptr [rsi+7A8h], 102h
 * 00000001402DE3F9: mov     [rsi+7B0h], r14
 * 00000001402DE400: mov     [rsi+790h], eax
 * 00000001402DE406: xor     esi, esi
 * 00000001402DE408: lea     r15, [rbp+2250h+var_1DF8]
 * 00000001402DE40F: mov     r10d, esi
 * 00000001402DE412: lea     r12d, [rsi+2]
 * 00000001402DE416: jmp     short loc_1402DE41A
 * 00000001402DE418: xor     esi, esi
 * 00000001402DE41A: mov     rax, [r15]
 * 00000001402DE41D: mov     r9d, esi
 * 00000001402DE420: mov     r11, [rax]
 * 00000001402DE423: mov     r13d, [rax+10h]
 * 00000001402DE427: lea     r8d, [rax+r11]
 * 00000001402DE42B: add     r8d, r10d
 * 00000001402DE42E: test    r13d, r13d
 * 00000001402DE431: jz      short loc_1402DE459
 * 00000001402DE433: mov     r14, r11
 * 00000001402DE436: movsxd  rdx, dword ptr [r14]
 * 00000001402DE439: inc     r9d
 * 00000001402DE43C: mov     rax, rdx
 * 00000001402DE43F: lea     r14, [r14+4]
 * 00000001402DE443: sar     rax, 4
 * 00000001402DE447: mov     ecx, [rax+r11]
 * 00000001402DE44B: add     ecx, edx
 * 00000001402DE44D: xor     r8d, ecx
 * 00000001402DE450: imul    r8d, r9d
 * 00000001402DE454: cmp     r9d, r13d
 * 00000001402DE457: jb      short loc_1402DE436
 * 00000001402DE459: lea     r10d, [r10+r8*2]
 * 00000001402DE45D: sub     r15, 8
 * 00000001402DE461: add     r8d, r8d
 * 00000001402DE464: xor     r11d, r11d
 * 00000001402DE467: add     r12d, 0FFFFFFFFh
 * 00000001402DE46B: jnz     short loc_1402DE418
 * 00000001402DE46D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DE471: mov     rbx, [rbp+2250h+var_21D8]
 * 00000001402DE475: mov     rax, [rsi+590h]
 * 00000001402DE47C: mov     edx, [rax]
 * 00000001402DE47E: cmp     r10d, edx
 * 00000001402DE481: jz      short loc_1402DE4EF
 * 00000001402DE483: test    dword ptr [rsi+828h], 20000h
 * 00000001402DE48D: jz      short loc_1402DE4EF
 * 00000001402DE48F: mov     eax, [rsi+790h]
 * 00000001402DE495: test    eax, eax
 * 00000001402DE497: jnz     short loc_1402DE4B0
 * 00000001402DE499: mov     rax, [rsi+588h]
 * 00000001402DE4A0: mov     ecx, r8d
 * 00000001402DE4A3: xor     rcx, rdx
 * 00000001402DE4A6: mov     [rax+18h], rcx
 * 00000001402DE4AA: mov     eax, [rsi+790h]
 * 00000001402DE4B0: mov     ecx, r8d
 * 00000001402DE4B3: test    eax, eax
 * 00000001402DE4B5: jnz     short loc_1402DE4EF
 * 00000001402DE4B7: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DE4C1: add     rax, rsi
 * 00000001402DE4C4: mov     [rsi+798h], rax
 * 00000001402DE4CB: mov     eax, 1
 * 00000001402DE4D0: mov     [rsi+7A0h], r11
 * 00000001402DE4D7: mov     qword ptr [rsi+7A8h], 107h
 * 00000001402DE4E2: mov     [rsi+7B0h], rcx
 * 00000001402DE4E9: mov     [rsi+790h], eax
 * 00000001402DE4EF: mov     eax, [rsi+7ECh]
 * 00000001402DE4F5: cmp     eax, 7
 * 00000001402DE4F8: jl      short loc_1402DE517
 * 00000001402DE4FA: jz      loc_1402DF639
 * 00000001402DE500: cmp     eax, 8
 * 00000001402DE503: jz      loc_1402E158A
 * 00000001402DE509: cmp     eax, 9
 * 00000001402DE50C: jz      loc_1402E1834
 * 00000001402DE512: jmp     loc_1402E1C8D
 * 00000001402DE517: mov     rdx, [rsi+570h]
 * 00000001402DE51E: mov     rcx, [rsi+568h]
 * 00000001402DE525: mov     [rbp+2250h+var_2248], rdx
 * 00000001402DE529: add     rdx, 20h ; ' '
 * 00000001402DE52D: mov     [rbp+2250h+var_2250], rdx
 * 00000001402DE531: mov     edx, 2
 * 00000001402DE536: mov     [rbp+2250h+var_21E8], rcx
 * 00000001402DE53A: lea     r13, [rcx+20h]
 * 00000001402DE53E: mov     [rbp+2250h+var_21C8], r13
 * 00000001402DE545: cmp     eax, edx
 * 00000001402DE547: jge     loc_1402DE7DA
 * 00000001402DE54D: mov     r15, [r13+0]
 * 00000001402DE551: mov     r13d, [rsi+684h]
 * 00000001402DE558: mov     r12d, [rcx+30h]
 * 00000001402DE55C: mov     r8d, [rsi+7BCh]
 * 00000001402DE563: shl     r12d, 2
 * 00000001402DE567: lea     eax, [r13+30h]
 * 00000001402DE56B: cmp     eax, [rsi+8B4h]
 * 00000001402DE571: jbe     loc_1402DE656
 * 00000001402DE577: mov     edx, eax
 * 00000001402DE579: mov     rcx, rsi
 * 00000001402DE57C: call    sub_1402E732C
 * 00000001402DE581: xor     r11d, r11d
 * 00000001402DE584: mov     r14, rax
 * 00000001402DE587: test    rax, rax
 * 00000001402DE58A: jz      loc_1402DF619
 * 00000001402DE590: mov     ecx, [rsi+828h]
 * 00000001402DE596: test    cl, 4
 * 00000001402DE599: jnz     loc_1402DE64C
 * 00000001402DE59F: mov     eax, [rsi+684h]
 * 00000001402DE5A5: lea     r9d, [r11+1]
 * 00000001402DE5A9: mov     r8, [rsi+668h]
 * 00000001402DE5B0: and     ecx, 20000000h
 * 00000001402DE5B6: neg     ecx
 * 00000001402DE5B8: sbb     edx, edx
 * 00000001402DE5BA: and     edx, [rsi+7BCh]
 * 00000001402DE5C0: cmp     eax, 8
 * 00000001402DE5C3: jb      short loc_1402DE5DA
 * 00000001402DE5C5: mov     ecx, eax
 * 00000001402DE5C7: shr     rcx, 3
 * 00000001402DE5CB: mov     [rsi], r11
 * 00000001402DE5CE: add     eax, 0FFFFFFF8h
 * 00000001402DE5D1: add     rsi, 8
 * 00000001402DE5D5: sub     rcx, r9
 * 00000001402DE5D8: jnz     short loc_1402DE5CB
 * 00000001402DE5DA: test    eax, eax
 * 00000001402DE5DC: jz      short loc_1402DE5E9
 * 00000001402DE5DE: mov     [rsi], r11b
 * 00000001402DE5E1: add     rsi, r9
 * 00000001402DE5E4: add     eax, 0FFFFFFFFh
 * 00000001402DE5E7: jnz     short loc_1402DE5DE
 * 00000001402DE5E9: mov     ebx, [r14+7BCh]
 * 00000001402DE5F0: mov     eax, 3
 * 00000001402DE5F5: mov     [r14+7BCh], edx
 * 00000001402DE5FC: cmp     edx, eax
 * 00000001402DE5FE: jz      short loc_1402DE633
 * 00000001402DE600: test    dword ptr [r14+828h], 10000000h
 * 00000001402DE60B: mov     ecx, r11d
 * 00000001402DE60E: cmovz   ecx, edx
 * 00000001402DE611: test    ecx, ecx
 * 00000001402DE613: jz      short loc_1402DE62A
 * 00000001402DE615: mov     rax, [r14+228h]
 * 00000001402DE61C: lea     rcx, [r8-8]
 * 00000001402DE620: mov     rdx, [rcx]
 * 00000001402DE623: call    KeGuardDispatchICall
 * 00000001402DE628: jmp     short loc_1402DE642
 * 00000001402DE62A: mov     rax, [r14+100h]
 * 00000001402DE631: jmp     short loc_1402DE63A
 * 00000001402DE633: mov     rax, [r14+368h]
 * 00000001402DE63A: mov     rcx, r8
 * 00000001402DE63D: call    KeGuardDispatchICall
 * 00000001402DE642: mov     [r14+7BCh], ebx
 * 00000001402DE649: xor     r11d, r11d
 * 00000001402DE64C: and     dword ptr [r14+828h], 0FFFFFFFBh
 * 00000001402DE654: jmp     short loc_1402DE65F
 * 00000001402DE656: mov     r14, rsi
 * 00000001402DE659: mov     [rsi+684h], eax
 * 00000001402DE65F: mov     eax, 1
 * 00000001402DE664: lea     rbx, [r14+r13]
 * 00000001402DE668: add     [r14+6ACh], eax
 * 00000001402DE66F: mov     [rbp+2250h+var_1B80], rbx
 * 00000001402DE676: lea     ecx, [rax+2Fh]
 * 00000001402DE679: mov     rax, rbx
 * 00000001402DE67C: lea     edx, [rcx-2Ah]
 * 00000001402DE67F: lea     r13d, [rcx-2Fh]
 * 00000001402DE683: mov     [rax], r11
 * 00000001402DE686: add     ecx, 0FFFFFFF8h
 * 00000001402DE689: add     rax, 8
 * 00000001402DE68D: sub     rdx, r13
 * 00000001402DE690: jnz     short loc_1402DE683
 * 00000001402DE692: test    ecx, ecx
 * 00000001402DE694: jz      short loc_1402DE6A1
 * 00000001402DE696: mov     [rax], r11b
 * 00000001402DE699: add     rax, r13
 * 00000001402DE69C: add     ecx, 0FFFFFFFFh
 * 00000001402DE69F: jnz     short loc_1402DE696
 * 00000001402DE6A1: mov     dword ptr [rbx], 0Bh
 * 00000001402DE6A7: mov     r9, r15
 * 00000001402DE6AA: mov     [rbx+8], r15
 * 00000001402DE6AE: mov     rax, r15
 * 00000001402DE6B1: mov     [rbx+10h], r12d
 * 00000001402DE6B5: add     [r14+6C8h], r12d
 * 00000001402DE6BC: mov     r10d, [r14+6B4h]
 * 00000001402DE6C3: mov     rsi, [r14+6B8h]
 * 00000001402DE6CA: mov     ecx, r12d
 * 00000001402DE6CD: add     rcx, r15
 * 00000001402DE6D0: cmp     r15, rcx
 * 00000001402DE6D3: jnb     short loc_1402DE6E5
 * 00000001402DE6D5: mov     edx, 40h ; '@'
 * 00000001402DE6DA: prefetchnta byte ptr [rax]
 * 00000001402DE6DD: add     rax, rdx
 * 00000001402DE6E0: cmp     rax, rcx
 * 00000001402DE6E3: jb      short loc_1402DE6DA
 * 00000001402DE6E5: mov     r11d, r12d
 * 00000001402DE6E8: mov     r8, rsi
 * 00000001402DE6EB: shr     r11d, 7
 * 00000001402DE6EF: test    r11d, r11d
 * 00000001402DE6F2: jz      short loc_1402DE75C
 * 00000001402DE6F4: mov     rdi, 7010008004002001h
 * 00000001402DE6FE: mov     edx, 8
 * 00000001402DE703: mov     rax, [r9]
 * 00000001402DE706: mov     ecx, r10d
 * 00000001402DE709: xor     rax, r8
 * 00000001402DE70C: mov     r8, [r9+8]
 * 00000001402DE710: rol     rax, cl
 * 00000001402DE713: add     r9, 10h
 * 00000001402DE717: xor     r8, rax
 * 00000001402DE71A: rol     r8, cl
 * 00000001402DE71D: sub     rdx, r13
 * 00000001402DE720: jnz     short loc_1402DE703
 * 00000001402DE722: mov     rcx, r9
 * 00000001402DE725: sub     rcx, r15
 * 00000001402DE728: xor     rcx, rsi
 * 00000001402DE72B: mov     rax, rcx
 * 00000001402DE72E: rol     rax, 11h
 * 00000001402DE732: xor     rcx, rax
 * 00000001402DE735: mov     rax, rdi
 * 00000001402DE738: mul     rcx
 * 00000001402DE73B: xor     eax, edx
 * 00000001402DE73D: mov     [rbp+2250h+var_1B78], rdx
 * 00000001402DE744: xor     r10d, eax
 * 00000001402DE747: and     r10d, 3Fh
 * 00000001402DE74B: cmovz   r10d, r13d
 * 00000001402DE74F: add     r11d, 0FFFFFFFFh
 * 00000001402DE753: jnz     short loc_1402DE6FE
 * 00000001402DE755: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DE75C: mov     edx, r12d
 * 00000001402DE75F: and     edx, 7Fh
 * 00000001402DE762: cmp     edx, 8
 * 00000001402DE765: jb      short loc_1402DE783
 * 00000001402DE767: mov     r11d, edx
 * 00000001402DE76A: shr     r11, 3
 * 00000001402DE76E: xor     r8, [r9]
 * 00000001402DE771: mov     ecx, r10d
 * 00000001402DE774: rol     r8, cl
 * 00000001402DE777: add     r9, 8
 * 00000001402DE77B: add     edx, 0FFFFFFF8h
 * 00000001402DE77E: sub     r11, r13
 * 00000001402DE781: jnz     short loc_1402DE76E
 * 00000001402DE783: xor     r11d, r11d
 * 00000001402DE786: test    edx, edx
 * 00000001402DE788: jz      short loc_1402DE79F
 * 00000001402DE78A: movzx   eax, byte ptr [r9]
 * 00000001402DE78E: mov     ecx, r10d
 * 00000001402DE791: xor     r8, rax
 * 00000001402DE794: add     r9, r13
 * 00000001402DE797: rol     r8, cl
 * 00000001402DE79A: add     edx, 0FFFFFFFFh
 * 00000001402DE79D: jnz     short loc_1402DE78A
 * 00000001402DE79F: mov     rax, r8
 * 00000001402DE7A2: jmp     short loc_1402DE7A7
 * 00000001402DE7A4: xor     r8d, eax
 * 00000001402DE7A7: shr     rax, 1Fh
 * 00000001402DE7AB: test    rax, rax
 * 00000001402DE7AE: jnz     short loc_1402DE7A4
 * 00000001402DE7B0: mov     r13, [rbp+2250h+var_21C8]
 * 00000001402DE7B7: btr     r8d, 1Fh
 * 00000001402DE7BC: mov     [rbx+14h], r8d
 * 00000001402DE7C0: mov     eax, 2
 * 00000001402DE7C5: add     [r14+6C8h], r12d
 * 00000001402DE7CC: mov     rbx, r14
 * 00000001402DE7CF: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DE7D3: mov     [r14+7ECh], eax
 * 00000001402DE7DA: mov     eax, 3
 * 00000001402DE7DF: cmp     [rbx+7ECh], eax
 * 00000001402DE7E5: jge     loc_1402DEA0F
 * 00000001402DE7EB: mov     r14d, [rbx+684h]
 * 00000001402DE7F2: lea     r15d, [rax+1Dh]
 * 00000001402DE7F6: mov     r12d, [rbx+6D8h]
 * 00000001402DE7FD: cmp     r12d, 7
 * 00000001402DE801: mov     r8d, [rbx+7BCh]
 * 00000001402DE808: cmovnz  r15d, r11d
 * 00000001402DE80C: lea     eax, [r14+30h]
 * 00000001402DE810: cmp     eax, [rbx+8B4h]
 * 00000001402DE816: jbe     loc_1402DE8F6
 * 00000001402DE81C: mov     edx, eax
 * 00000001402DE81E: mov     rcx, rbx
 * 00000001402DE821: call    sub_1402E732C
 * 00000001402DE826: xor     r11d, r11d
 * 00000001402DE829: mov     rsi, rax
 * 00000001402DE82C: test    rax, rax
 * 00000001402DE82F: jz      loc_1402DF619
 * 00000001402DE835: mov     ecx, [rbx+828h]
 * 00000001402DE83B: test    cl, 4
 * 00000001402DE83E: jnz     loc_1402DE8ED
 * 00000001402DE844: mov     eax, [rbx+684h]
 * 00000001402DE84A: lea     r9d, [r11+1]
 * 00000001402DE84E: mov     r8, [rbx+668h]
 * 00000001402DE855: and     ecx, 20000000h
 * 00000001402DE85B: neg     ecx
 * 00000001402DE85D: sbb     edx, edx
 * 00000001402DE85F: and     edx, [rbx+7BCh]
 * 00000001402DE865: cmp     eax, 8
 * 00000001402DE868: jb      short loc_1402DE87F
 * 00000001402DE86A: mov     ecx, eax
 * 00000001402DE86C: shr     rcx, 3
 * 00000001402DE870: mov     [rbx], r11
 * 00000001402DE873: add     eax, 0FFFFFFF8h
 * 00000001402DE876: add     rbx, 8
 * 00000001402DE87A: sub     rcx, r9
 * 00000001402DE87D: jnz     short loc_1402DE870
 * 00000001402DE87F: test    eax, eax
 * 00000001402DE881: jz      short loc_1402DE88E
 * 00000001402DE883: mov     [rbx], r11b
 * 00000001402DE886: add     rbx, r9
 * 00000001402DE889: add     eax, 0FFFFFFFFh
 * 00000001402DE88C: jnz     short loc_1402DE883
 * 00000001402DE88E: mov     ebx, [rsi+7BCh]
 * 00000001402DE894: mov     eax, 3
 * 00000001402DE899: mov     [rsi+7BCh], edx
 * 00000001402DE89F: cmp     edx, eax
 * 00000001402DE8A1: jz      short loc_1402DE8D5
 * 00000001402DE8A3: test    dword ptr [rsi+828h], 10000000h
 * 00000001402DE8AD: mov     ecx, r11d
 * 00000001402DE8B0: cmovz   ecx, edx
 * 00000001402DE8B3: test    ecx, ecx
 * 00000001402DE8B5: jz      short loc_1402DE8CC
 * 00000001402DE8B7: mov     rax, [rsi+228h]
 * 00000001402DE8BE: lea     rcx, [r8-8]
 * 00000001402DE8C2: mov     rdx, [rcx]
 * 00000001402DE8C5: call    KeGuardDispatchICall
 * 00000001402DE8CA: jmp     short loc_1402DE8E4
 * 00000001402DE8CC: mov     rax, [rsi+100h]
 * 00000001402DE8D3: jmp     short loc_1402DE8DC
 * 00000001402DE8D5: mov     rax, [rsi+368h]
 * 00000001402DE8DC: mov     rcx, r8
 * 00000001402DE8DF: call    KeGuardDispatchICall
 * 00000001402DE8E4: mov     [rsi+7BCh], ebx
 * 00000001402DE8EA: xor     r11d, r11d
 * 00000001402DE8ED: and     dword ptr [rsi+828h], 0FFFFFFFBh
 * 00000001402DE8F4: jmp     short loc_1402DE8FF
 * 00000001402DE8F6: mov     rsi, rbx
 * 00000001402DE8F9: mov     [rbx+684h], eax
 * 00000001402DE8FF: mov     r8d, 1
 * 00000001402DE905: lea     rbx, [rsi+r14]
 * 00000001402DE909: add     [rsi+6ACh], r8d
 * 00000001402DE910: mov     rax, rbx
 * 00000001402DE913: mov     [rbp+2250h+var_1B70], rbx
 * 00000001402DE91A: lea     ecx, [r8+2Fh]
 * 00000001402DE91E: lea     edx, [rcx-2Ah]
 * 00000001402DE921: mov     [rax], r11
 * 00000001402DE924: add     ecx, 0FFFFFFF8h
 * 00000001402DE927: add     rax, 8
 * 00000001402DE92B: sub     rdx, r8
 * 00000001402DE92E: jnz     short loc_1402DE921
 * 00000001402DE930: test    ecx, ecx
 * 00000001402DE932: jz      short loc_1402DE93F
 * 00000001402DE934: mov     [rax], r11b
 * 00000001402DE937: add     rax, r8
 * 00000001402DE93A: add     ecx, 0FFFFFFFFh
 * 00000001402DE93D: jnz     short loc_1402DE934
 * 00000001402DE93F: mov     [rbx], r15d
 * 00000001402DE942: mov     r14d, 20h ; ' '
 * 00000001402DE948: mov     [rbx+8], r13
 * 00000001402DE94C: cmp     r12d, 7
 * 00000001402DE950: jnz     short loc_1402DE964
 * 00000001402DE952: lea     r9, [rbx+18h]
 * 00000001402DE956: mov     r8d, r14d
 * 00000001402DE959: mov     rdx, r13
 * 00000001402DE95C: mov     rcx, rsi
 * 00000001402DE95F: call    sub_14019FEBC
 * 00000001402DE964: mov     rcx, [rbp+2250h+var_21E8]
 * 00000001402DE968: mov     r9, r13
 * 00000001402DE96B: mov     [rbx+10h], r14d
 * 00000001402DE96F: add     rcx, 40h ; '@'
 * 00000001402DE973: add     [rsi+6C8h], r14d
 * 00000001402DE97A: mov     rax, r13
 * 00000001402DE97D: mov     r11d, [rsi+6B4h]
 * 00000001402DE984: mov     rdx, [rsi+6B8h]
 * 00000001402DE98B: cmp     r13, rcx
 * 00000001402DE98E: jnb     short loc_1402DE9A1
 * 00000001402DE990: mov     r8d, 40h ; '@'
 * 00000001402DE996: prefetchnta byte ptr [rax]
 * 00000001402DE999: add     rax, r8
 * 00000001402DE99C: cmp     rax, rcx
 * 00000001402DE99F: jb      short loc_1402DE996
 * 00000001402DE9A1: mov     r10d, 4
 * 00000001402DE9A7: mov     r8d, r14d
 * 00000001402DE9AA: lea     r15d, [r10-3]
 * 00000001402DE9AE: xor     rdx, [r9]
 * 00000001402DE9B1: mov     ecx, r11d
 * 00000001402DE9B4: rol     rdx, cl
 * 00000001402DE9B7: add     r9, 8
 * 00000001402DE9BB: add     r8d, 0FFFFFFF8h
 * 00000001402DE9BF: sub     r10, r15
 * 00000001402DE9C2: jnz     short loc_1402DE9AE
 * 00000001402DE9C4: test    r8d, r8d
 * 00000001402DE9C7: jz      short loc_1402DE9DF
 * 00000001402DE9C9: movzx   eax, byte ptr [r9]
 * 00000001402DE9CD: mov     ecx, r11d
 * 00000001402DE9D0: xor     rdx, rax
 * 00000001402DE9D3: add     r9, r15
 * 00000001402DE9D6: rol     rdx, cl
 * 00000001402DE9D9: add     r8d, 0FFFFFFFFh
 * 00000001402DE9DD: jnz     short loc_1402DE9C9
 * 00000001402DE9DF: mov     rax, rdx
 * 00000001402DE9E2: jmp     short loc_1402DE9E6
 * 00000001402DE9E4: xor     edx, eax
 * 00000001402DE9E6: shr     rax, 1Fh
 * 00000001402DE9EA: test    rax, rax
 * 00000001402DE9ED: jnz     short loc_1402DE9E4
 * 00000001402DE9EF: btr     edx, 1Fh
 * 00000001402DE9F3: mov     eax, 3
 * 00000001402DE9F8: mov     [rbx+14h], edx
 * 00000001402DE9FB: mov     rbx, rsi
 * 00000001402DE9FE: add     [rsi+6C8h], r14d
 * 00000001402DEA05: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DEA09: mov     [rsi+7ECh], eax
 * 00000001402DEA0F: mov     r13, [rbp+2250h+var_2250]
 * 00000001402DEA13: mov     r11d, 4
 * 00000001402DEA19: cmp     [rbx+7ECh], r11d
 * 00000001402DEA20: jge     loc_1402DECBA
 * 00000001402DEA26: mov     rax, [rbp+2250h+var_2248]
 * 00000001402DEA2A: mov     r14d, [rbx+684h]
 * 00000001402DEA31: mov     r15, [r13+0]
 * 00000001402DEA35: mov     r8d, [rbx+7BCh]
 * 00000001402DEA3C: mov     r12d, [rax+30h]
 * 00000001402DEA40: shl     r12d, 2
 * 00000001402DEA44: lea     eax, [r14+30h]
 * 00000001402DEA48: cmp     eax, [rbx+8B4h]
 * 00000001402DEA4E: jbe     loc_1402DEB2B
 * 00000001402DEA54: mov     edx, eax
 * 00000001402DEA56: mov     rcx, rbx
 * 00000001402DEA59: call    sub_1402E732C
 * 00000001402DEA5E: xor     r11d, r11d
 * 00000001402DEA61: mov     rsi, rax
 * 00000001402DEA64: test    rax, rax
 * 00000001402DEA67: jz      loc_1402DF619
 * 00000001402DEA6D: mov     ecx, [rbx+828h]
 * 00000001402DEA73: test    cl, 4
 * 00000001402DEA76: jnz     loc_1402DEB22
 * 00000001402DEA7C: mov     eax, [rbx+684h]
 * 00000001402DEA82: lea     r9d, [r11+1]
 * 00000001402DEA86: mov     r8, [rbx+668h]
 * 00000001402DEA8D: and     ecx, 20000000h
 * 00000001402DEA93: neg     ecx
 * 00000001402DEA95: sbb     edx, edx
 * 00000001402DEA97: and     edx, [rbx+7BCh]
 * 00000001402DEA9D: cmp     eax, 8
 * 00000001402DEAA0: jb      short loc_1402DEAB7
 * 00000001402DEAA2: mov     ecx, eax
 * 00000001402DEAA4: shr     rcx, 3
 * 00000001402DEAA8: mov     [rbx], r11
 * 00000001402DEAAB: add     eax, 0FFFFFFF8h
 * 00000001402DEAAE: add     rbx, 8
 * 00000001402DEAB2: sub     rcx, r9
 * 00000001402DEAB5: jnz     short loc_1402DEAA8
 * 00000001402DEAB7: test    eax, eax
 * 00000001402DEAB9: jz      short loc_1402DEAC6
 * 00000001402DEABB: mov     [rbx], r11b
 * 00000001402DEABE: add     rbx, r9
 * 00000001402DEAC1: add     eax, 0FFFFFFFFh
 * 00000001402DEAC4: jnz     short loc_1402DEABB
 * 00000001402DEAC6: mov     ebx, [rsi+7BCh]
 * 00000001402DEACC: mov     eax, 3
 * 00000001402DEAD1: mov     [rsi+7BCh], edx
 * 00000001402DEAD7: cmp     edx, eax
 * 00000001402DEAD9: jz      short loc_1402DEB0D
 * 00000001402DEADB: test    dword ptr [rsi+828h], 10000000h
 * 00000001402DEAE5: mov     ecx, r11d
 * 00000001402DEAE8: cmovz   ecx, edx
 * 00000001402DEAEB: test    ecx, ecx
 * 00000001402DEAED: jz      short loc_1402DEB04
 * 00000001402DEAEF: mov     rax, [rsi+228h]
 * 00000001402DEAF6: lea     rcx, [r8-8]
 * 00000001402DEAFA: mov     rdx, [rcx]
 * 00000001402DEAFD: call    KeGuardDispatchICall
 * 00000001402DEB02: jmp     short loc_1402DEB1C
 * 00000001402DEB04: mov     rax, [rsi+100h]
 * 00000001402DEB0B: jmp     short loc_1402DEB14
 * 00000001402DEB0D: mov     rax, [rsi+368h]
 * 00000001402DEB14: mov     rcx, r8
 * 00000001402DEB17: call    KeGuardDispatchICall
 * 00000001402DEB1C: mov     [rsi+7BCh], ebx
 * 00000001402DEB22: and     dword ptr [rsi+828h], 0FFFFFFFBh
 * 00000001402DEB29: jmp     short loc_1402DEB34
 * 00000001402DEB2B: mov     rsi, rbx
 * 00000001402DEB2E: mov     [rbx+684h], eax
 * 00000001402DEB34: mov     r9d, 1
 * 00000001402DEB3A: lea     rbx, [rsi+r14]
 * 00000001402DEB3E: add     [rsi+6ACh], r9d
 * 00000001402DEB45: mov     rax, rbx
 * 00000001402DEB48: mov     [rbp+2250h+var_1B68], rbx
 * 00000001402DEB4F: xor     r8d, r8d
 * 00000001402DEB52: lea     ecx, [r9+2Fh]
 * 00000001402DEB56: lea     edx, [rcx-2Ah]
 * 00000001402DEB59: mov     [rax], r8
 * 00000001402DEB5C: add     ecx, 0FFFFFFF8h
 * 00000001402DEB5F: add     rax, 8
 * 00000001402DEB63: sub     rdx, r9
 * 00000001402DEB66: jnz     short loc_1402DEB59
 * 00000001402DEB68: test    ecx, ecx
 * 00000001402DEB6A: jz      short loc_1402DEB76
 * 00000001402DEB6C: mov     [rax], dl
 * 00000001402DEB6E: add     rax, r9
 * 00000001402DEB71: add     ecx, 0FFFFFFFFh
 * 00000001402DEB74: jnz     short loc_1402DEB6C
 * 00000001402DEB76: mov     dword ptr [rbx], 0Bh
 * 00000001402DEB7C: mov     r9, r15
 * 00000001402DEB7F: mov     [rbx+8], r15
 * 00000001402DEB83: mov     rax, r15
 * 00000001402DEB86: mov     [rbx+10h], r12d
 * 00000001402DEB8A: add     [rsi+6C8h], r12d
 * 00000001402DEB91: mov     r10d, [rsi+6B4h]
 * 00000001402DEB98: mov     r14, [rsi+6B8h]
 * 00000001402DEB9F: mov     ecx, r12d
 * 00000001402DEBA2: add     rcx, r15
 * 00000001402DEBA5: cmp     r15, rcx
 * 00000001402DEBA8: jnb     short loc_1402DEBBB
 * 00000001402DEBAA: mov     r8d, 40h ; '@'
 * 00000001402DEBB0: prefetchnta byte ptr [rax]
 * 00000001402DEBB3: add     rax, r8
 * 00000001402DEBB6: cmp     rax, rcx
 * 00000001402DEBB9: jb      short loc_1402DEBB0
 * 00000001402DEBBB: mov     r11d, r12d
 * 00000001402DEBBE: mov     r8, r14
 * 00000001402DEBC1: shr     r11d, 7
 * 00000001402DEBC5: test    r11d, r11d
 * 00000001402DEBC8: jz      short loc_1402DEC3D
 * 00000001402DEBCA: mov     rdi, 7010008004002001h
 * 00000001402DEBD4: mov     edx, 8
 * 00000001402DEBD9: lea     r13d, [rdx-7]
 * 00000001402DEBDD: mov     rax, [r9]
 * 00000001402DEBE0: mov     ecx, r10d
 * 00000001402DEBE3: xor     rax, r8
 * 00000001402DEBE6: mov     r8, [r9+8]
 * 00000001402DEBEA: rol     rax, cl
 * 00000001402DEBED: add     r9, 10h
 * 00000001402DEBF1: xor     r8, rax
 * 00000001402DEBF4: rol     r8, cl
 * 00000001402DEBF7: sub     rdx, r13
 * 00000001402DEBFA: jnz     short loc_1402DEBDD
 * 00000001402DEBFC: mov     rcx, r9
 * 00000001402DEBFF: sub     rcx, r15
 * 00000001402DEC02: xor     rcx, r14
 * 00000001402DEC05: mov     rax, rcx
 * 00000001402DEC08: rol     rax, 11h
 * 00000001402DEC0C: xor     rcx, rax
 * 00000001402DEC0F: mov     rax, rdi
 * 00000001402DEC12: mul     rcx
 * 00000001402DEC15: xor     eax, edx
 * 00000001402DEC17: mov     [rbp+2250h+var_1B60], rdx
 * 00000001402DEC1E: xor     r10d, eax
 * 00000001402DEC21: mov     rax, r13
 * 00000001402DEC24: and     r10d, 3Fh
 * 00000001402DEC28: cmovz   r10d, eax
 * 00000001402DEC2C: add     r11d, 0FFFFFFFFh
 * 00000001402DEC30: jnz     short loc_1402DEBD4
 * 00000001402DEC32: mov     r13, [rbp+2250h+var_2250]
 * 00000001402DEC36: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DEC3D: mov     edx, r12d
 * 00000001402DEC40: mov     r14d, 1
 * 00000001402DEC46: and     edx, 7Fh
 * 00000001402DEC49: cmp     edx, 8
 * 00000001402DEC4C: jb      short loc_1402DEC6A
 * 00000001402DEC4E: mov     r11d, edx
 * 00000001402DEC51: shr     r11, 3
 * 00000001402DEC55: xor     r8, [r9]
 * 00000001402DEC58: mov     ecx, r10d
 * 00000001402DEC5B: rol     r8, cl
 * 00000001402DEC5E: add     r9, 8
 * 00000001402DEC62: add     edx, 0FFFFFFF8h
 * 00000001402DEC65: sub     r11, r14
 * 00000001402DEC68: jnz     short loc_1402DEC55
 * 00000001402DEC6A: xor     r11d, r11d
 * 00000001402DEC6D: test    edx, edx
 * 00000001402DEC6F: jz      short loc_1402DEC86
 * 00000001402DEC71: movzx   eax, byte ptr [r9]
 * 00000001402DEC75: mov     ecx, r10d
 * 00000001402DEC78: xor     r8, rax
 * 00000001402DEC7B: add     r9, r14
 * 00000001402DEC7E: rol     r8, cl
 * 00000001402DEC81: add     edx, 0FFFFFFFFh
 * 00000001402DEC84: jnz     short loc_1402DEC71
 * 00000001402DEC86: mov     rax, r8
 * 00000001402DEC89: jmp     short loc_1402DEC8E
 * 00000001402DEC8B: xor     r8d, eax
 * 00000001402DEC8E: shr     rax, 1Fh
 * 00000001402DEC92: test    rax, rax
 * 00000001402DEC95: jnz     short loc_1402DEC8B
 * 00000001402DEC97: btr     r8d, 1Fh
 * 00000001402DEC9C: mov     [rbx+14h], r8d
 * 00000001402DECA0: mov     rbx, rsi
 * 00000001402DECA3: add     [rsi+6C8h], r12d
 * 00000001402DECAA: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DECAE: mov     dword ptr [rsi+7ECh], 4
 * 00000001402DECB8: jmp     short loc_1402DECBD
 * 00000001402DECBA: xor     r11d, r11d
 * 00000001402DECBD: cmp     dword ptr [rbx+7ECh], 5
 * 00000001402DECC4: jge     loc_1402DEEF3
 * 00000001402DECCA: mov     r14d, [rbx+684h]
 * 00000001402DECD1: mov     r15d, 20h ; ' '
 * 00000001402DECD7: mov     r12d, [rbx+6D8h]
 * 00000001402DECDE: cmp     r12d, 7
 * 00000001402DECE2: mov     r8d, [rbx+7BCh]
 * 00000001402DECE9: cmovnz  r15d, r11d
 * 00000001402DECED: lea     eax, [r14+30h]
 * 00000001402DECF1: cmp     eax, [rbx+8B4h]
 * 00000001402DECF7: jbe     loc_1402DEDD7
 * 00000001402DECFD: mov     edx, eax
 * 00000001402DECFF: mov     rcx, rbx
 * 00000001402DED02: call    sub_1402E732C
 * 00000001402DED07: xor     r11d, r11d
 * 00000001402DED0A: mov     rsi, rax
 * 00000001402DED0D: test    rax, rax
 * 00000001402DED10: jz      loc_1402DF619
 * 00000001402DED16: mov     ecx, [rbx+828h]
 * 00000001402DED1C: test    cl, 4
 * 00000001402DED1F: jnz     loc_1402DEDCE
 * 00000001402DED25: mov     eax, [rbx+684h]
 * 00000001402DED2B: lea     r9d, [r11+1]
 * 00000001402DED2F: mov     r8, [rbx+668h]
 * 00000001402DED36: and     ecx, 20000000h
 * 00000001402DED3C: neg     ecx
 * 00000001402DED3E: sbb     edx, edx
 * 00000001402DED40: and     edx, [rbx+7BCh]
 * 00000001402DED46: cmp     eax, 8
 * 00000001402DED49: jb      short loc_1402DED60
 * 00000001402DED4B: mov     ecx, eax
 * 00000001402DED4D: shr     rcx, 3
 * 00000001402DED51: mov     [rbx], r11
 * 00000001402DED54: add     eax, 0FFFFFFF8h
 * 00000001402DED57: add     rbx, 8
 * 00000001402DED5B: sub     rcx, r9
 * 00000001402DED5E: jnz     short loc_1402DED51
 * 00000001402DED60: test    eax, eax
 * 00000001402DED62: jz      short loc_1402DED6F
 * 00000001402DED64: mov     [rbx], r11b
 * 00000001402DED67: add     rbx, r9
 * 00000001402DED6A: add     eax, 0FFFFFFFFh
 * 00000001402DED6D: jnz     short loc_1402DED64
 * 00000001402DED6F: mov     ebx, [rsi+7BCh]
 * 00000001402DED75: mov     eax, 3
 * 00000001402DED7A: mov     [rsi+7BCh], edx
 * 00000001402DED80: cmp     edx, eax
 * 00000001402DED82: jz      short loc_1402DEDB6
 * 00000001402DED84: test    dword ptr [rsi+828h], 10000000h
 * 00000001402DED8E: mov     ecx, r11d
 * 00000001402DED91: cmovz   ecx, edx
 * 00000001402DED94: test    ecx, ecx
 * 00000001402DED96: jz      short loc_1402DEDAD
 * 00000001402DED98: mov     rax, [rsi+228h]
 * 00000001402DED9F: lea     rcx, [r8-8]
 * 00000001402DEDA3: mov     rdx, [rcx]
 * 00000001402DEDA6: call    KeGuardDispatchICall
 * 00000001402DEDAB: jmp     short loc_1402DEDC5
 * 00000001402DEDAD: mov     rax, [rsi+100h]
 * 00000001402DEDB4: jmp     short loc_1402DEDBD
 * 00000001402DEDB6: mov     rax, [rsi+368h]
 * 00000001402DEDBD: mov     rcx, r8
 * 00000001402DEDC0: call    KeGuardDispatchICall
 * 00000001402DEDC5: mov     [rsi+7BCh], ebx
 * 00000001402DEDCB: xor     r11d, r11d
 * 00000001402DEDCE: and     dword ptr [rsi+828h], 0FFFFFFFBh
 * 00000001402DEDD5: jmp     short loc_1402DEDE0
 * 00000001402DEDD7: mov     rsi, rbx
 * 00000001402DEDDA: mov     [rbx+684h], eax
 * 00000001402DEDE0: lea     rbx, [rsi+r14]
 * 00000001402DEDE4: mov     r8d, 1
 * 00000001402DEDEA: add     [rsi+6ACh], r8d
 * 00000001402DEDF1: mov     rax, rbx
 * 00000001402DEDF4: mov     [rbp+2250h+var_1B58], rbx
 * 00000001402DEDFB: mov     r14d, 0FFFFFFF8h
 * 00000001402DEE01: lea     ecx, [r8+2Fh]
 * 00000001402DEE05: lea     edx, [rcx-2Ah]
 * 00000001402DEE08: mov     [rax], r11
 * 00000001402DEE0B: add     ecx, r14d
 * 00000001402DEE0E: add     rax, 8
 * 00000001402DEE12: sub     rdx, r8
 * 00000001402DEE15: jnz     short loc_1402DEE08
 * 00000001402DEE17: test    ecx, ecx
 * 00000001402DEE19: jz      short loc_1402DEE26
 * 00000001402DEE1B: mov     [rax], r11b
 * 00000001402DEE1E: add     rax, r8
 * 00000001402DEE21: add     ecx, 0FFFFFFFFh
 * 00000001402DEE24: jnz     short loc_1402DEE1B
 * 00000001402DEE26: mov     [rbx], r15d
 * 00000001402DEE29: mov     [rbx+8], r13
 * 00000001402DEE2D: cmp     r12d, 7
 * 00000001402DEE31: jnz     short loc_1402DEE47
 * 00000001402DEE33: lea     r9, [rbx+18h]
 * 00000001402DEE37: mov     rdx, r13
 * 00000001402DEE3A: lea     r8d, [r12+19h]
 * 00000001402DEE3F: mov     rcx, rsi
 * 00000001402DEE42: call    sub_14019FEBC
 * 00000001402DEE47: mov     rcx, [rbp+2250h+var_2248]
 * 00000001402DEE4B: mov     r11d, 20h ; ' '
 * 00000001402DEE51: mov     [rbx+10h], r11d
 * 00000001402DEE55: add     rcx, 40h ; '@'
 * 00000001402DEE59: add     [rsi+6C8h], r11d
 * 00000001402DEE60: mov     r9, r13
 * 00000001402DEE63: mov     r10d, [rsi+6B4h]
 * 00000001402DEE6A: mov     rax, r13
 * 00000001402DEE6D: mov     rdx, [rsi+6B8h]
 * 00000001402DEE74: cmp     r13, rcx
 * 00000001402DEE77: jnb     short loc_1402DEE88
 * 00000001402DEE79: lea     r8d, [r11+20h]
 * 00000001402DEE7D: prefetchnta byte ptr [rax]
 * 00000001402DEE80: add     rax, r8
 * 00000001402DEE83: cmp     rax, rcx
 * 00000001402DEE86: jb      short loc_1402DEE7D
 * 00000001402DEE88: mov     eax, 4
 * 00000001402DEE8D: mov     r8d, r11d
 * 00000001402DEE90: lea     r15d, [rax-3]
 * 00000001402DEE94: xor     rdx, [r9]
 * 00000001402DEE97: mov     ecx, r10d
 * 00000001402DEE9A: rol     rdx, cl
 * 00000001402DEE9D: add     r9, 8
 * 00000001402DEEA1: add     r8d, r14d
 * 00000001402DEEA4: sub     rax, r15
 * 00000001402DEEA7: jnz     short loc_1402DEE94
 * 00000001402DEEA9: test    r8d, r8d
 * 00000001402DEEAC: jz      short loc_1402DEEC4
 * 00000001402DEEAE: movzx   eax, byte ptr [r9]
 * 00000001402DEEB2: mov     ecx, r10d
 * 00000001402DEEB5: xor     rdx, rax
 * 00000001402DEEB8: add     r9, r15
 * 00000001402DEEBB: rol     rdx, cl
 * 00000001402DEEBE: add     r8d, 0FFFFFFFFh
 * 00000001402DEEC2: jnz     short loc_1402DEEAE
 * 00000001402DEEC4: mov     rax, rdx
 * 00000001402DEEC7: jmp     short loc_1402DEECB
 * 00000001402DEEC9: xor     edx, eax
 * 00000001402DEECB: shr     rax, 1Fh
 * 00000001402DEECF: test    rax, rax
 * 00000001402DEED2: jnz     short loc_1402DEEC9
 * 00000001402DEED4: btr     edx, 1Fh
 * 00000001402DEED8: mov     [rbx+14h], edx
 * 00000001402DEEDB: mov     rbx, rsi
 * 00000001402DEEDE: add     [rsi+6C8h], r11d
 * 00000001402DEEE5: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DEEE9: mov     dword ptr [rsi+7ECh], 5
 * 00000001402DEEF3: mov     eax, [rbx+7ECh]
 * 00000001402DEEF9: mov     r12d, 6
 * 00000001402DEEFF: xor     r11d, r11d
 * 00000001402DEF02: mov     rsi, rbx
 * 00000001402DEF05: mov     r14, rbx
 * 00000001402DEF08: cmp     eax, r12d
 * 00000001402DEF0B: jge     loc_1402DF2C8
 * 00000001402DEF11: test    dword ptr [rbx+828h], 40000000h
 * 00000001402DEF1B: mov     r13d, r11d
 * 00000001402DEF1E: mov     r15, [rbp+2250h+var_21E8]
 * 00000001402DEF22: mov     rax, [r15+20h]
 * 00000001402DEF26: mov     [rbp+2250h+var_2208], rax
 * 00000001402DEF2A: jnz     loc_1402DF2AC
 * 00000001402DEF30: mov     ebx, r11d
 * 00000001402DEF33: cmp     [r15+30h], r11d
 * 00000001402DEF37: jbe     loc_1402DF2AC
 * 00000001402DEF3D: mov     rdi, rax
 * 00000001402DEF40: mov     eax, ebx
 * 00000001402DEF42: lea     rdx, [rbp+2250h+var_1E80]
 * 00000001402DEF49: xor     r8d, r8d
 * 00000001402DEF4C: movsxd  rcx, dword ptr [rdi+rax*4]
 * 00000001402DEF50: mov     rax, [rsi+260h]
 * 00000001402DEF57: sar     rcx, 4
 * 00000001402DEF5B: add     rcx, rdi
 * 00000001402DEF5E: call    KeGuardDispatchICall
 * 00000001402DEF63: xor     r11d, r11d
 * 00000001402DEF66: lea     r9d, [r11+1]
 * 00000001402DEF6A: test    rax, rax
 * 00000001402DEF6D: jnz     short loc_1402DEF72
 * 00000001402DEF6F: add     r13d, r9d
 * 00000001402DEF72: add     ebx, r9d
 * 00000001402DEF75: cmp     ebx, [r15+30h]
 * 00000001402DEF79: jb      short loc_1402DEF40
 * 00000001402DEF7B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DEF82: test    r13d, r13d
 * 00000001402DEF85: jz      loc_1402DF2AC
 * 00000001402DEF8B: mov     r14d, [rsi+684h]
 * 00000001402DEF92: mov     ecx, r13d
 * 00000001402DEF95: mov     r8d, [rsi+7BCh]
 * 00000001402DEF9C: shl     ecx, 4
 * 00000001402DEF9F: add     ecx, 30h ; '0'
 * 00000001402DEFA2: add     ecx, r14d
 * 00000001402DEFA5: cmp     ecx, [rsi+8B4h]
 * 00000001402DEFAB: jbe     loc_1402DF0A2
 * 00000001402DEFB1: mov     edx, ecx
 * 00000001402DEFB3: mov     rcx, rsi
 * 00000001402DEFB6: call    sub_1402E732C
 * 00000001402DEFBB: xor     r11d, r11d
 * 00000001402DEFBE: mov     [rbp+2250h+var_21D8], rax
 * 00000001402DEFC2: mov     rbx, rax
 * 00000001402DEFC5: test    rax, rax
 * 00000001402DEFC8: jz      loc_1402DF095
 * 00000001402DEFCE: mov     ecx, [rsi+828h]
 * 00000001402DEFD4: test    cl, 4
 * 00000001402DEFD7: jnz     loc_1402DF086
 * 00000001402DEFDD: mov     eax, [rsi+684h]
 * 00000001402DEFE3: lea     r9d, [r11+1]
 * 00000001402DEFE7: mov     r8, [rsi+668h]
 * 00000001402DEFEE: and     ecx, 20000000h
 * 00000001402DEFF4: neg     ecx
 * 00000001402DEFF6: sbb     edx, edx
 * 00000001402DEFF8: and     edx, [rsi+7BCh]
 * 00000001402DEFFE: cmp     eax, 8
 * 00000001402DF001: jb      short loc_1402DF018
 * 00000001402DF003: mov     ecx, eax
 * 00000001402DF005: shr     rcx, 3
 * 00000001402DF009: mov     [rsi], r11
 * 00000001402DF00C: add     eax, 0FFFFFFF8h
 * 00000001402DF00F: add     rsi, 8
 * 00000001402DF013: sub     rcx, r9
 * 00000001402DF016: jnz     short loc_1402DF009
 * 00000001402DF018: test    eax, eax
 * 00000001402DF01A: jz      short loc_1402DF027
 * 00000001402DF01C: mov     [rsi], r11b
 * 00000001402DF01F: add     rsi, r9
 * 00000001402DF022: add     eax, 0FFFFFFFFh
 * 00000001402DF025: jnz     short loc_1402DF01C
 * 00000001402DF027: mov     esi, [rbx+7BCh]
 * 00000001402DF02D: mov     eax, 3
 * 00000001402DF032: mov     [rbx+7BCh], edx
 * 00000001402DF038: cmp     edx, eax
 * 00000001402DF03A: jz      short loc_1402DF06E
 * 00000001402DF03C: test    dword ptr [rbx+828h], 10000000h
 * 00000001402DF046: mov     ecx, r11d
 * 00000001402DF049: cmovz   ecx, edx
 * 00000001402DF04C: test    ecx, ecx
 * 00000001402DF04E: jz      short loc_1402DF065
 * 00000001402DF050: mov     rax, [rbx+228h]
 * 00000001402DF057: lea     rcx, [r8-8]
 * 00000001402DF05B: mov     rdx, [rcx]
 * 00000001402DF05E: call    KeGuardDispatchICall
 * 00000001402DF063: jmp     short loc_1402DF07D
 * 00000001402DF065: mov     rax, [rbx+100h]
 * 00000001402DF06C: jmp     short loc_1402DF075
 * 00000001402DF06E: mov     rax, [rbx+368h]
 * 00000001402DF075: mov     rcx, r8
 * 00000001402DF078: call    KeGuardDispatchICall
 * 00000001402DF07D: mov     [rbx+7BCh], esi
 * 00000001402DF083: xor     r11d, r11d
 * 00000001402DF086: and     dword ptr [rbx+828h], 0FFFFFFFBh
 * 00000001402DF08D: mov     r9d, 1
 * 00000001402DF093: jmp     short loc_1402DF0AF
 * 00000001402DF095: mov     eax, 0C000022Dh
 * 00000001402DF09A: mov     r14, rsi
 * 00000001402DF09D: jmp     loc_1402DF2AF
 * 00000001402DF0A2: mov     rbx, rsi
 * 00000001402DF0A5: mov     [rsi+684h], ecx
 * 00000001402DF0AB: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DF0AF: add     [rbx+6ACh], r9d
 * 00000001402DF0B6: lea     rcx, [rbx+r14]
 * 00000001402DF0BA: mov     [rbp+2250h+var_1E88], rcx
 * 00000001402DF0C1: mov     rax, rcx
 * 00000001402DF0C4: mov     edx, 30h ; '0'
 * 00000001402DF0C9: mov     r8, r12
 * 00000001402DF0CC: mov     [rax], r11
 * 00000001402DF0CF: add     edx, 0FFFFFFF8h
 * 00000001402DF0D2: add     rax, 8
 * 00000001402DF0D6: sub     r8, r9
 * 00000001402DF0D9: jnz     short loc_1402DF0CC
 * 00000001402DF0DB: test    edx, edx
 * 00000001402DF0DD: jz      short loc_1402DF0EA
 * 00000001402DF0DF: mov     [rax], r11b
 * 00000001402DF0E2: add     rax, r9
 * 00000001402DF0E5: add     edx, 0FFFFFFFFh
 * 00000001402DF0E8: jnz     short loc_1402DF0DF
 * 00000001402DF0EA: mov     dword ptr [rcx], 0Ah
 * 00000001402DF0F0: mov     [rcx+8], r11
 * 00000001402DF0F4: mov     [rcx+10h], r11d
 * 00000001402DF0F8: mov     rdx, [rbx+6B8h]
 * 00000001402DF0FF: mov     rax, rdx
 * 00000001402DF102: jmp     short loc_1402DF106
 * 00000001402DF104: xor     edx, eax
 * 00000001402DF106: shr     rax, 1Fh
 * 00000001402DF10A: test    rax, rax
 * 00000001402DF10D: jnz     short loc_1402DF104
 * 00000001402DF10F: mov     r8, [rbp+2250h+var_21E8]
 * 00000001402DF113: btr     edx, 1Fh
 * 00000001402DF117: mov     [rcx+14h], edx
 * 00000001402DF11A: mov     r14, rbx
 * 00000001402DF11D: mov     rax, [rbp+2250h+var_1E88]
 * 00000001402DF124: mov     r12d, r11d
 * 00000001402DF127: mov     [rbp+2250h+var_1FD0], rax
 * 00000001402DF12E: mov     [rax+18h], r9d
 * 00000001402DF132: mov     rax, [rbp+2250h+var_1FD0]
 * 00000001402DF139: mov     [rax+1Ch], r13d
 * 00000001402DF13D: mov     rcx, [rbp+2250h+var_1FD0]
 * 00000001402DF144: lea     r15, [rcx+30h]
 * 00000001402DF148: cmp     [r8+30h], r11d
 * 00000001402DF14C: jbe     loc_1402DF238
 * 00000001402DF152: mov     rcx, [rbp+2250h+var_2208]
 * 00000001402DF156: lea     rdx, [rbp+2250h+var_1E80]
 * 00000001402DF15D: mov     eax, r12d
 * 00000001402DF160: xor     r8d, r8d
 * 00000001402DF163: movsxd  rsi, dword ptr [rcx+rax*4]
 * 00000001402DF167: mov     rax, [rbx+260h]
 * 00000001402DF16E: sar     rsi, 4
 * 00000001402DF172: add     rsi, rcx
 * 00000001402DF175: mov     rcx, rsi
 * 00000001402DF178: call    KeGuardDispatchICall
 * 00000001402DF17D: xor     r11d, r11d
 * 00000001402DF180: test    rax, rax
 * 00000001402DF183: jnz     loc_1402DF21A
 * 00000001402DF189: lea     r11d, [rax+4]
 * 00000001402DF18D: mov     r8, rsi
 * 00000001402DF190: add     [rbx+6C8h], r11d
 * 00000001402DF197: lea     rcx, [rsi+4]
 * 00000001402DF19B: mov     r10d, [rbx+6B4h]
 * 00000001402DF1A2: mov     rax, rsi
 * 00000001402DF1A5: mov     rdx, [rbx+6B8h]
 * 00000001402DF1AC: cmp     rsi, rcx
 * 00000001402DF1AF: jnb     short loc_1402DF1C0
 * 00000001402DF1B1: lea     r9d, [r11+3Ch]
 * 00000001402DF1B5: prefetchnta byte ptr [rax]
 * 00000001402DF1B8: add     rax, r9
 * 00000001402DF1BB: cmp     rax, rcx
 * 00000001402DF1BE: jb      short loc_1402DF1B5
 * 00000001402DF1C0: mov     r9d, r11d
 * 00000001402DF1C3: mov     edi, 1
 * 00000001402DF1C8: movzx   eax, byte ptr [r8]
 * 00000001402DF1CC: mov     ecx, r10d
 * 00000001402DF1CF: xor     rdx, rax
 * 00000001402DF1D2: add     r8, rdi
 * 00000001402DF1D5: rol     rdx, cl
 * 00000001402DF1D8: add     r9d, 0FFFFFFFFh
 * 00000001402DF1DC: jnz     short loc_1402DF1C8
 * 00000001402DF1DE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DF1E5: mov     rax, rdx
 * 00000001402DF1E8: jmp     short loc_1402DF1EC
 * 00000001402DF1EA: xor     edx, eax
 * 00000001402DF1EC: shr     rax, 1Fh
 * 00000001402DF1F0: test    rax, rax
 * 00000001402DF1F3: jnz     short loc_1402DF1EA
 * 00000001402DF1F5: mov     eax, [r15]
 * 00000001402DF1F8: xor     eax, edx
 * 00000001402DF1FA: btr     eax, 1Fh
 * 00000001402DF1FE: xor     [r15], eax
 * 00000001402DF201: mov     [r15+4], r11d
 * 00000001402DF205: mov     [r15+8], rsi
 * 00000001402DF209: add     r15, 10h
 * 00000001402DF20D: add     r13d, 0FFFFFFFFh
 * 00000001402DF211: jz      loc_1402DF2A3
 * 00000001402DF217: xor     r11d, r11d
 * 00000001402DF21A: mov     rax, [rbp+2250h+var_21E8]
 * 00000001402DF21E: mov     r9d, 1
 * 00000001402DF224: add     r12d, r9d
 * 00000001402DF227: cmp     r12d, [rax+30h]
 * 00000001402DF22B: jb      loc_1402DF152
 * 00000001402DF231: mov     rcx, [rbp+2250h+var_1FD0]
 * 00000001402DF238: test    r13d, r13d
 * 00000001402DF23B: jz      short loc_1402DF2A6
 * 00000001402DF23D: cmp     [rbx+790h], r11d
 * 00000001402DF244: jnz     loc_1402DF619
 * 00000001402DF24A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402DF254: add     rax, rbx
 * 00000001402DF257: mov     [rbx+798h], rax
 * 00000001402DF25E: test    rcx, rcx
 * 00000001402DF261: jz      short loc_1402DF272
 * 00000001402DF263: mov     rax, 0B3B74BDEE4453415h
 * 00000001402DF26D: add     rax, rcx
 * 00000001402DF270: jmp     short loc_1402DF275
 * 00000001402DF272: mov     rax, r11
 * 00000001402DF275: mov     [rbx+7A0h], rax
 * 00000001402DF27C: test    rcx, rcx
 * 00000001402DF27F: jz      short loc_1402DF286
 * 00000001402DF281: movsxd  rax, dword ptr [rcx]
 * 00000001402DF284: jmp     short loc_1402DF289
 * 00000001402DF286: mov     rax, r11
 * 00000001402DF289: mov     [rbx+7A8h], rax
 * 00000001402DF290: mov     [rbx+7B0h], r11
 * 00000001402DF297: mov     [rbx+790h], r9d
 * 00000001402DF29E: jmp     loc_1402DF619
 * 00000001402DF2A3: xor     r11d, r11d
 * 00000001402DF2A6: mov     r12d, 6
 * 00000001402DF2AC: mov     eax, r11d
 * 00000001402DF2AF: mov     rbx, r14
 * 00000001402DF2B2: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DF2B6: test    eax, eax
 * 00000001402DF2B8: js      loc_1402DF619
 * 00000001402DF2BE: mov     [r14+7ECh], r12d
 * 00000001402DF2C5: mov     eax, r12d
 * 00000001402DF2C8: cmp     eax, 7
 * 00000001402DF2CB: jge     loc_1402DF62B
 * 00000001402DF2D1: test    dword ptr [r14+828h], 40000000h
 * 00000001402DF2DC: mov     r13d, r11d
 * 00000001402DF2DF: mov     rdx, [rbp+2250h+var_2250]
 * 00000001402DF2E3: mov     rsi, [rdx]
 * 00000001402DF2E6: mov     [rbp+2250h+var_21E8], rsi
 * 00000001402DF2EA: jnz     loc_1402DF60B
 * 00000001402DF2F0: mov     rax, [rbp+2250h+var_2248]
 * 00000001402DF2F4: mov     ebx, r11d
 * 00000001402DF2F7: cmp     [rax+30h], r11d
 * 00000001402DF2FB: jbe     loc_1402DF60B
 * 00000001402DF301: mov     rdi, rax
 * 00000001402DF304: mov     eax, ebx
 * 00000001402DF306: lea     rdx, [rbp+2250h+var_1E50]
 * 00000001402DF30D: xor     r8d, r8d
 * 00000001402DF310: movsxd  rcx, dword ptr [rsi+rax*4]
 * 00000001402DF314: mov     rax, [r14+260h]
 * 00000001402DF31B: sar     rcx, 4
 * 00000001402DF31F: add     rcx, rsi
 * 00000001402DF322: call    KeGuardDispatchICall
 * 00000001402DF327: xor     r11d, r11d
 * 00000001402DF32A: lea     r9d, [r11+1]
 * 00000001402DF32E: test    rax, rax
 * 00000001402DF331: jnz     short loc_1402DF336
 * 00000001402DF333: add     r13d, r9d
 * 00000001402DF336: add     ebx, r9d
 * 00000001402DF339: cmp     ebx, [rdi+30h]
 * 00000001402DF33C: jb      short loc_1402DF304
 * 00000001402DF33E: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DF345: test    r13d, r13d
 * 00000001402DF348: jz      loc_1402DF60B
 * 00000001402DF34E: mov     r15d, [r14+684h]
 * 00000001402DF355: mov     ecx, r13d
 * 00000001402DF358: mov     r8d, [r14+7BCh]
 * 00000001402DF35F: shl     ecx, 4
 * 00000001402DF362: add     ecx, 30h ; '0'
 * 00000001402DF365: add     ecx, r15d
 * 00000001402DF368: cmp     ecx, [r14+8B4h]
 * 00000001402DF36F: jbe     loc_1402DF46A
 * 00000001402DF375: mov     edx, ecx
 * 00000001402DF377: mov     rcx, r14
 * 00000001402DF37A: call    sub_1402E732C
 * 00000001402DF37F: xor     r11d, r11d
 * 00000001402DF382: mov     [rbp+2250h+var_21D8], rax
 * 00000001402DF386: mov     rbx, rax
 * 00000001402DF389: test    rax, rax
 * 00000001402DF38C: jz      loc_1402DF460
 * 00000001402DF392: mov     ecx, [r14+828h]
 * 00000001402DF399: test    cl, 4
 * 00000001402DF39C: jnz     loc_1402DF451
 * 00000001402DF3A2: mov     eax, [r14+684h]
 * 00000001402DF3A9: lea     r9d, [r11+1]
 * 00000001402DF3AD: mov     r8, [r14+668h]
 * 00000001402DF3B4: and     ecx, 20000000h
 * 00000001402DF3BA: neg     ecx
 * 00000001402DF3BC: sbb     edx, edx
 * 00000001402DF3BE: and     edx, [r14+7BCh]
 * 00000001402DF3C5: cmp     eax, 8
 * 00000001402DF3C8: jb      short loc_1402DF3DF
 * 00000001402DF3CA: mov     ecx, eax
 * 00000001402DF3CC: shr     rcx, 3
 * 00000001402DF3D0: mov     [r14], r11
 * 00000001402DF3D3: add     eax, 0FFFFFFF8h
 * 00000001402DF3D6: add     r14, 8
 * 00000001402DF3DA: sub     rcx, r9
 * 00000001402DF3DD: jnz     short loc_1402DF3D0
 * 00000001402DF3DF: test    eax, eax
 * 00000001402DF3E1: jz      short loc_1402DF3EE
 * 00000001402DF3E3: mov     [r14], r11b
 * 00000001402DF3E6: add     r14, r9
 * 00000001402DF3E9: add     eax, 0FFFFFFFFh
 * 00000001402DF3EC: jnz     short loc_1402DF3E3
 * 00000001402DF3EE: mov     esi, [rbx+7BCh]
 * 00000001402DF3F4: mov     eax, 3
 * 00000001402DF3F9: mov     [rbx+7BCh], edx
 * 00000001402DF3FF: cmp     edx, eax
 * 00000001402DF401: jz      short loc_1402DF435
 * 00000001402DF403: test    dword ptr [rbx+828h], 10000000h
 * 00000001402DF40D: mov     ecx, r11d
 * 00000001402DF410: cmovz   ecx, edx
 * 00000001402DF413: test    ecx, ecx
 * 00000001402DF415: jz      short loc_1402DF42C
 * 00000001402DF417: mov     rax, [rbx+228h]
 * 00000001402DF41E: lea     rcx, [r8-8]
 * 00000001402DF422: mov     rdx, [rcx]
 * 00000001402DF425: call    KeGuardDispatchICall
 * 00000001402DF42A: jmp     short loc_1402DF444
 * 00000001402DF42C: mov     rax, [rbx+100h]
 * 00000001402DF433: jmp     short loc_1402DF43C
 * 00000001402DF435: mov     rax, [rbx+368h]
 * 00000001402DF43C: mov     rcx, r8
 * 00000001402DF43F: call    KeGuardDispatchICall
 * 00000001402DF444: mov     [rbx+7BCh], esi
 * 00000001402DF44A: xor     r11d, r11d
 * 00000001402DF44D: mov     rsi, [rbp+2250h+var_21E8]
 * 00000001402DF451: and     dword ptr [rbx+828h], 0FFFFFFFBh
 * 00000001402DF458: mov     r9d, 1
 * 00000001402DF45E: jmp     short loc_1402DF478
 * 00000001402DF460: mov     eax, 0C000022Dh
 * 00000001402DF465: jmp     loc_1402DF60E
 * 00000001402DF46A: mov     rbx, r14
 * 00000001402DF46D: mov     [r14+684h], ecx
 * 00000001402DF474: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DF478: add     [rbx+6ACh], r9d
 * 00000001402DF47F: lea     rcx, [rbx+r15]
 * 00000001402DF483: mov     [rbp+2250h+var_1E78], rcx
 * 00000001402DF48A: mov     rax, rcx
 * 00000001402DF48D: mov     edx, 30h ; '0'
 * 00000001402DF492: mov     r8, r12
 * 00000001402DF495: mov     [rax], r11
 * 00000001402DF498: add     edx, 0FFFFFFF8h
 * 00000001402DF49B: add     rax, 8
 * 00000001402DF49F: sub     r8, r9
 * 00000001402DF4A2: jnz     short loc_1402DF495
 * 00000001402DF4A4: test    edx, edx
 * 00000001402DF4A6: jz      short loc_1402DF4B3
 * 00000001402DF4A8: mov     [rax], r11b
 * 00000001402DF4AB: add     rax, r9
 * 00000001402DF4AE: add     edx, 0FFFFFFFFh
 * 00000001402DF4B1: jnz     short loc_1402DF4A8
 * 00000001402DF4B3: mov     dword ptr [rcx], 0Ah
 * 00000001402DF4B9: mov     [rcx+8], r11
 * 00000001402DF4BD: mov     [rcx+10h], r11d
 * 00000001402DF4C1: mov     rdx, [rbx+6B8h]
 * 00000001402DF4C8: mov     rax, rdx
 * 00000001402DF4CB: jmp     short loc_1402DF4CF
 * 00000001402DF4CD: xor     edx, eax
 * 00000001402DF4CF: shr     rax, 1Fh
 * 00000001402DF4D3: test    rax, rax
 * 00000001402DF4D6: jnz     short loc_1402DF4CD
 * 00000001402DF4D8: btr     edx, 1Fh
 * 00000001402DF4DC: mov     r14, rbx
 * 00000001402DF4DF: mov     [rcx+14h], edx
 * 00000001402DF4E2: mov     r12d, r11d
 * 00000001402DF4E5: mov     rax, [rbp+2250h+var_1E78]
 * 00000001402DF4EC: mov     [rbp+2250h+var_1FC8], rax
 * 00000001402DF4F3: mov     [rax+18h], r9d
 * 00000001402DF4F7: mov     rax, [rbp+2250h+var_1FC8]
 * 00000001402DF4FE: mov     [rax+1Ch], r13d
 * 00000001402DF502: mov     rax, [rbp+2250h+var_2248]
 * 00000001402DF506: mov     rcx, [rbp+2250h+var_1FC8]
 * 00000001402DF50D: lea     r15, [rcx+30h]
 * 00000001402DF511: cmp     [rax+30h], r11d
 * 00000001402DF515: jbe     loc_1402DF5FE
 * 00000001402DF51B: mov     eax, r12d
 * 00000001402DF51E: lea     rdx, [rbp+2250h+var_1E50]
 * 00000001402DF525: xor     r8d, r8d
 * 00000001402DF528: movsxd  rsi, dword ptr [rsi+rax*4]
 * 00000001402DF52C: mov     rax, [rbx+260h]
 * 00000001402DF533: sar     rsi, 4
 * 00000001402DF537: add     rsi, [rbp+2250h+var_21E8]
 * 00000001402DF53B: mov     rcx, rsi
 * 00000001402DF53E: call    KeGuardDispatchICall
 * 00000001402DF543: xor     r11d, r11d
 * 00000001402DF546: test    rax, rax
 * 00000001402DF549: jnz     loc_1402DF5DC
 * 00000001402DF54F: lea     r11d, [rax+4]
 * 00000001402DF553: mov     r8, rsi
 * 00000001402DF556: add     [rbx+6C8h], r11d
 * 00000001402DF55D: lea     rcx, [rsi+4]
 * 00000001402DF561: mov     r10d, [rbx+6B4h]
 * 00000001402DF568: mov     rax, rsi
 * 00000001402DF56B: mov     rdx, [rbx+6B8h]
 * 00000001402DF572: cmp     rsi, rcx
 * 00000001402DF575: jnb     short loc_1402DF586
 * 00000001402DF577: lea     r9d, [r11+3Ch]
 * 00000001402DF57B: prefetchnta byte ptr [rax]
 * 00000001402DF57E: add     rax, r9
 * 00000001402DF581: cmp     rax, rcx
 * 00000001402DF584: jb      short loc_1402DF57B
 * 00000001402DF586: mov     r9d, r11d
 * 00000001402DF589: mov     edi, 1
 * 00000001402DF58E: movzx   eax, byte ptr [r8]
 * 00000001402DF592: mov     ecx, r10d
 * 00000001402DF595: xor     rdx, rax
 * 00000001402DF598: add     r8, rdi
 * 00000001402DF59B: rol     rdx, cl
 * 00000001402DF59E: add     r9d, 0FFFFFFFFh
 * 00000001402DF5A2: jnz     short loc_1402DF58E
 * 00000001402DF5A4: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DF5AB: mov     rax, rdx
 * 00000001402DF5AE: jmp     short loc_1402DF5B2
 * 00000001402DF5B0: xor     edx, eax
 * 00000001402DF5B2: shr     rax, 1Fh
 * 00000001402DF5B6: test    rax, rax
 * 00000001402DF5B9: jnz     short loc_1402DF5B0
 * 00000001402DF5BB: mov     eax, [r15]
 * 00000001402DF5BE: xor     eax, edx
 * 00000001402DF5C0: btr     eax, 1Fh
 * 00000001402DF5C4: xor     [r15], eax
 * 00000001402DF5C7: mov     [r15+4], r11d
 * 00000001402DF5CB: mov     [r15+8], rsi
 * 00000001402DF5CF: add     r15, 10h
 * 00000001402DF5D3: add     r13d, 0FFFFFFFFh
 * 00000001402DF5D7: jz      short loc_1402DF608
 * 00000001402DF5D9: xor     r11d, r11d
 * 00000001402DF5DC: mov     rax, [rbp+2250h+var_2248]
 * 00000001402DF5E0: mov     r9d, 1
 * 00000001402DF5E6: mov     rsi, [rbp+2250h+var_21E8]
 * 00000001402DF5EA: add     r12d, r9d
 * 00000001402DF5ED: cmp     r12d, [rax+30h]
 * 00000001402DF5F1: jb      loc_1402DF51B
 * 00000001402DF5F7: mov     rcx, [rbp+2250h+var_1FC8]
 * 00000001402DF5FE: test    r13d, r13d
 * 00000001402DF601: jz      short loc_1402DF60B
 * 00000001402DF603: jmp     loc_1402DF23D
 * 00000001402DF608: xor     r11d, r11d
 * 00000001402DF60B: mov     eax, r11d
 * 00000001402DF60E: mov     rbx, r14
 * 00000001402DF611: mov     [rbp+2250h+var_21D8], rbx
 * 00000001402DF615: test    eax, eax
 * 00000001402DF617: jns     short loc_1402DF620
 * 00000001402DF619: mov     eax, 0C000022Dh
 * 00000001402DF61E: jmp     short loc_1402DF62E
 * 00000001402DF620: mov     dword ptr [r14+7ECh], 7
 * 00000001402DF62B: mov     eax, r11d
 * 00000001402DF62E: mov     rsi, rbx
 * 00000001402DF631: test    eax, eax
 * 00000001402DF633: js      loc_1402E16C3
 * 00000001402DF639: mov     rax, [rbx+568h]
 * 00000001402DF640: lea     r8, [rbp+2250h+var_1F84]
 * 00000001402DF647: lea     rdx, [rbp+2250h+var_2040]
 * 00000001402DF64E: mov     [rbp+2250h+var_2220], rbx
 * 00000001402DF652: mov     rsi, rbx
 * 00000001402DF655: mov     [rbp+2250h+var_2148], rbx
 * 00000001402DF65C: mov     rcx, [rax+20h]
 * 00000001402DF660: mov     rax, [rbx+200h]
 * 00000001402DF667: mov     [rbp+2250h+var_21E8], rcx
 * 00000001402DF66B: call    KeGuardDispatchICall
 * 00000001402DF670: xor     r11d, r11d
 * 00000001402DF673: mov     [rbp+2250h+var_2230], rax
 * 00000001402DF677: mov     r12, rax
 * 00000001402DF67A: test    rax, rax
 * 00000001402DF67D: jz      loc_1402E16C3
 * 00000001402DF683: mov     eax, [rbp+2250h+var_1F84]
 * 00000001402DF689: lea     ecx, [r11+4]
 * 00000001402DF68D: mov     r13, [rbp+2250h+var_2040]
 * 00000001402DF694: lea     edx, [rcx-3]
 * 00000001402DF697: mov     [rbp+2250h+var_2228], eax
 * 00000001402DF69A: lea     rax, [rbp+2250h+var_2078]
 * 00000001402DF6A1: mov     [rbp+2250h+var_2198], r13
 * 00000001402DF6A8: mov     [rbp+2250h+var_2080], r11
 * 00000001402DF6AF: mov     [rax], r11b
 * 00000001402DF6B2: add     rax, rdx
 * 00000001402DF6B5: add     ecx, 0FFFFFFFFh
 * 00000001402DF6B8: jnz     short loc_1402DF6AF
 * 00000001402DF6BA: mov     r15d, r11d
 * 00000001402DF6BD: mov     [rbp+2250h+var_2234], r11d
 * 00000001402DF6C1: cmp     [rbx+6ACh], r11d
 * 00000001402DF6C8: jbe     loc_1402DF8C9
 * 00000001402DF6CE: mov     ecx, [rbp+2250h+var_2078]
 * 00000001402DF6D4: mov     r9d, dword ptr [rbp+2250h+var_2080+4]
 * 00000001402DF6DB: mov     r10d, dword ptr [rbp+2250h+var_2080]
 * 00000001402DF6E2: mov     rax, [rbx+900h]
 * 00000001402DF6E9: mov     r14, rbx
 * 00000001402DF6EC: test    rax, rax
 * 00000001402DF6EF: cmovnz  r14, rax
 * 00000001402DF6F3: mov     [rbp+2250h+var_21C8], r14
 * 00000001402DF6FA: mov     r8d, [r14+6A8h]
 * 00000001402DF701: add     r8, r14
 * 00000001402DF704: test    r10d, r10d
 * 00000001402DF707: jz      short loc_1402DF717
 * 00000001402DF709: cmp     r9d, r15d
 * 00000001402DF70C: ja      short loc_1402DF717
 * 00000001402DF70E: mov     r8d, ecx
 * 00000001402DF711: mov     r11d, r9d
 * 00000001402DF714: add     r8, r14
 * 00000001402DF717: cmp     r11d, r15d
 * 00000001402DF71A: jz      loc_1402DF85A
 * 00000001402DF720: mov     esi, 2
 * 00000001402DF725: mov     eax, r15d
 * 00000001402DF728: sub     eax, r11d
 * 00000001402DF72B: mov     rbx, 0AAAAAAAAAAAAAAABh
 * 00000001402DF735: add     r11d, eax
 * 00000001402DF738: mov     r9d, eax
 * 00000001402DF73B: mov     [rbp+2250h+var_21F8], r11d
 * 00000001402DF73F: mov     r14d, 0FFFh
 * 00000001402DF745: lea     r11d, [rsi+0Ah]
 * 00000001402DF749: lea     r12d, [rsi-1]
 * 00000001402DF74D: lea     r15d, [rsi+1]
 * 00000001402DF751: mov     ecx, [r8]
 * 00000001402DF754: cmp     ecx, r11d
 * 00000001402DF757: jg      short loc_1402DF798
 * 00000001402DF759: jz      short loc_1402DF7B1
 * 00000001402DF75B: sub     ecx, r12d
 * 00000001402DF75E: jz      short loc_1402DF7B1
 * 00000001402DF760: sub     ecx, 6
 * 00000001402DF763: jz      short loc_1402DF787
 * 00000001402DF765: sub     ecx, r12d
 * 00000001402DF768: jz      short loc_1402DF77D
 * 00000001402DF76A: cmp     ecx, esi
 * 00000001402DF76C: jnz     short loc_1402DF7E9
 * 00000001402DF76E: mov     eax, [r8+1Ch]
 * 00000001402DF772: add     eax, r15d
 * 00000001402DF775: shl     eax, 4
 * 00000001402DF778: jmp     loc_1402DF821
 * 00000001402DF77D: movzx   eax, word ptr [r8+20h]
 * 00000001402DF782: jmp     loc_1402DF81B
 * 00000001402DF787: mov     eax, [r8+18h]
 * 00000001402DF78B: add     eax, esi
 * 00000001402DF78D: lea     eax, [rax+rax*2]
 * 00000001402DF790: shl     eax, 3
 * 00000001402DF793: jmp     loc_1402DF821
 * 00000001402DF798: cmp     ecx, 1Ch
 * 00000001402DF79B: jz      short loc_1402DF816
 * 00000001402DF79D: cmp     ecx, 1Eh
 * 00000001402DF7A0: jz      short loc_1402DF7F0
 * 00000001402DF7A2: cmp     ecx, 20h ; ' '
 * 00000001402DF7A5: jle     short loc_1402DF7E9
 * 00000001402DF7A7: cmp     ecx, 22h ; '"'
 * 00000001402DF7AA: jle     short loc_1402DF7C8
 * 00000001402DF7AC: cmp     ecx, 2Bh ; '+'
 * 00000001402DF7AF: jnz     short loc_1402DF7E9
 * 00000001402DF7B1: mov     ecx, [r8+10h]
 * 00000001402DF7B5: mov     rax, rbx
 * 00000001402DF7B8: mul     rcx
 * 00000001402DF7BB: shr     rdx, 3
 * 00000001402DF7BF: lea     eax, ds:30h[rdx*4]
 * 00000001402DF7C6: jmp     short loc_1402DF821
 * 00000001402DF7C8: mov     ecx, [r8+20h]
 * 00000001402DF7CC: mov     edx, [r8+28h]
 * 00000001402DF7D0: and     rcx, r14
 * 00000001402DF7D3: add     rdx, r14
 * 00000001402DF7D6: add     rdx, rcx
 * 00000001402DF7D9: shr     rdx, 0Ch
 * 00000001402DF7DD: lea     eax, [rdx+rdx*4]
 * 00000001402DF7E0: lea     eax, ds:30h[rax*4]
 * 00000001402DF7E7: jmp     short loc_1402DF821
 * 00000001402DF7E9: mov     eax, 30h ; '0'
 * 00000001402DF7EE: jmp     short loc_1402DF821
 * 00000001402DF7F0: mov     ecx, [r8+24h]
 * 00000001402DF7F4: mov     rax, rbx
 * 00000001402DF7F7: sub     ecx, r12d
 * 00000001402DF7FA: mul     rcx
 * 00000001402DF7FD: movzx   eax, word ptr [r8+28h]
 * 00000001402DF802: shr     rdx, 3
 * 00000001402DF806: add     edx, 7
 * 00000001402DF809: and     edx, 0FFFFFFF8h
 * 00000001402DF80C: add     eax, esi
 * 00000001402DF80E: lea     eax, [rax+rax*2]
 * 00000001402DF811: lea     eax, [rdx+rax*8]
 * 00000001402DF814: jmp     short loc_1402DF821
 * 00000001402DF816: movzx   eax, word ptr [r8+28h]
 * 00000001402DF81B: add     eax, 37h ; '7'
 * 00000001402DF81E: and     eax, 0FFFFFFF8h
 * 00000001402DF821: add     r8, rax
 * 00000001402DF824: sub     r9, r12
 * 00000001402DF827: jnz     loc_1402DF751
 * 00000001402DF82D: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DF831: lea     edx, [r9+1]
 * 00000001402DF835: mov     rbx, [rbp+2250h+var_21D8]
 * 00000001402DF839: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DF840: mov     r11d, [rbp+2250h+var_21F8]
 * 00000001402DF844: mov     r14, [rbp+2250h+var_21C8]
 * 00000001402DF84B: mov     r15d, [rbp+2250h+var_2234]
 * 00000001402DF84F: mov     r12, [rbp+2250h+var_2230]
 * 00000001402DF853: mov     r13, [rbp+2250h+var_2198]
 * 00000001402DF85A: mov     ecx, r8d
 * 00000001402DF85D: mov     dword ptr [rbp+2250h+var_2080], edx
 * 00000001402DF863: sub     ecx, r14d
 * 00000001402DF866: mov     dword ptr [rbp+2250h+var_2080+4], r11d
 * 00000001402DF86D: mov     [rbp+2250h+var_2078], ecx
 * 00000001402DF873: mov     r10d, edx
 * 00000001402DF876: movsxd  rdx, dword ptr [r8]
 * 00000001402DF879: mov     r9d, r11d
 * 00000001402DF87C: cmp     edx, 2Bh ; '+'
 * 00000001402DF87F: ja      short loc_1402DF8A0
 * 00000001402DF881: mov     r11, 80000001002h
 * 00000001402DF88B: bt      r11, rdx
 * 00000001402DF88F: jnb     short loc_1402DF8A0
 * 00000001402DF891: cmp     [r8+8], r12
 * 00000001402DF895: jnz     short loc_1402DF8A0
 * 00000001402DF897: mov     eax, [rbp+2250h+var_2228]
 * 00000001402DF89A: cmp     [r8+10h], eax
 * 00000001402DF89E: jz      short loc_1402DF8CC
 * 00000001402DF8A0: lea     eax, [rdx-21h]
 * 00000001402DF8A3: mov     edx, 1
 * 00000001402DF8A8: cmp     eax, edx
 * 00000001402DF8AA: ja      short loc_1402DF8B2
 * 00000001402DF8AC: cmp     [r8+20h], r13
 * 00000001402DF8B0: jz      short loc_1402DF8CC
 * 00000001402DF8B2: add     r15d, edx
 * 00000001402DF8B5: xor     r11d, r11d
 * 00000001402DF8B8: mov     [rbp+2250h+var_2234], r15d
 * 00000001402DF8BC: cmp     r15d, [rbx+6ACh]
 * 00000001402DF8C3: jb      loc_1402DF6E2
 * 00000001402DF8C9: mov     r8, r11
 * 00000001402DF8CC: test    r8, r8
 * 00000001402DF8CF: jz      short loc_1402DF8D9
 * 00000001402DF8D1: mov     rsi, rbx
 * 00000001402DF8D4: jmp     loc_1402E1528
 * 00000001402DF8D9: mov     rax, [rbx+200h]
 * 00000001402DF8E0: lea     r8, [rbp+2250h+var_21A0]
 * 00000001402DF8E7: mov     rcx, [rbp+2250h+var_21E8]
 * 00000001402DF8EB: lea     rdx, [rbp+2250h+var_2168]
 * 00000001402DF8F2: mov     [rbp+2250h+var_2150], rbx
 * 00000001402DF8F9: call    KeGuardDispatchICall
 * 00000001402DF8FE: xor     edx, edx
 * 00000001402DF900: mov     [rbp+2250h+var_21F0], rax
 * 00000001402DF904: test    rax, rax
 * 00000001402DF907: jnz     short loc_1402DF91B
 * 00000001402DF909: mov     [rbp+2250h+var_2210], 0C000007Bh
 * 00000001402DF910: mov     r13d, 80000000h
 * 00000001402DF916: jmp     loc_1402E1467
 * 00000001402DF91B: mov     r12, [rbp+2250h+var_2168]
 * 00000001402DF922: lea     rax, [rbp+2250h+var_2068]
 * 00000001402DF929: mov     r13d, [rbp+2250h+var_21A0]
 * 00000001402DF930: mov     ecx, 4
 * 00000001402DF935: mov     [rbp+2250h+var_2228], r13d
 * 00000001402DF939: mov     [rbp+2250h+var_2230], r12
 * 00000001402DF93D: mov     [rbp+2250h+var_2070], rdx
 * 00000001402DF944: lea     r8d, [rcx-3]
 * 00000001402DF948: mov     [rax], dl
 * 00000001402DF94A: add     rax, r8
 * 00000001402DF94D: add     ecx, 0FFFFFFFFh
 * 00000001402DF950: jnz     short loc_1402DF948
 * 00000001402DF952: mov     r15d, edx
 * 00000001402DF955: mov     [rbp+2250h+var_2234], edx
 * 00000001402DF958: cmp     [rbx+6ACh], edx
 * 00000001402DF95E: jbe     loc_1402DFB68
 * 00000001402DF964: mov     ecx, [rbp+2250h+var_2068]
 * 00000001402DF96A: mov     r9d, dword ptr [rbp+2250h+var_2070+4]
 * 00000001402DF971: mov     r11d, dword ptr [rbp+2250h+var_2070]
 * 00000001402DF978: mov     rax, [rbx+900h]
 * 00000001402DF97F: mov     r14, rbx
 * 00000001402DF982: test    rax, rax
 * 00000001402DF985: mov     r10d, edx
 * 00000001402DF988: cmovnz  r14, rax
 * 00000001402DF98C: mov     [rbp+2250h+var_21C8], r14
 * 00000001402DF993: mov     r8d, [r14+6A8h]
 * 00000001402DF99A: add     r8, r14
 * 00000001402DF99D: test    r11d, r11d
 * 00000001402DF9A0: jz      short loc_1402DF9B0
 * 00000001402DF9A2: cmp     r9d, r15d
 * 00000001402DF9A5: ja      short loc_1402DF9B0
 * 00000001402DF9A7: mov     r8d, ecx
 * 00000001402DF9AA: mov     r10d, r9d
 * 00000001402DF9AD: add     r8, r14
 * 00000001402DF9B0: cmp     r10d, r15d
 * 00000001402DF9B3: jz      loc_1402DFAEE
 * 00000001402DF9B9: mov     eax, r15d
 * 00000001402DF9BC: mov     esi, 2
 * 00000001402DF9C1: sub     eax, r10d
 * 00000001402DF9C4: mov     rbx, 0AAAAAAAAAAAAAAABh
 * 00000001402DF9CE: add     r10d, eax
 * 00000001402DF9D1: mov     r9d, eax
 * 00000001402DF9D4: mov     [rbp+2250h+var_21F8], r10d
 * 00000001402DF9D8: mov     r14d, 0FFFh
 * 00000001402DF9DE: lea     r10d, [rsi+0Ah]
 * 00000001402DF9E2: lea     r15d, [rsi+1]
 * 00000001402DF9E6: mov     ecx, [r8]
 * 00000001402DF9E9: cmp     ecx, r10d
 * 00000001402DF9EC: jg      short loc_1402DFA2D
 * 00000001402DF9EE: jz      short loc_1402DFA46
 * 00000001402DF9F0: sub     ecx, 1
 * 00000001402DF9F3: jz      short loc_1402DFA46
 * 00000001402DF9F5: sub     ecx, 6
 * 00000001402DF9F8: jz      short loc_1402DFA1C
 * 00000001402DF9FA: sub     ecx, 1
 * 00000001402DF9FD: jz      short loc_1402DFA12
 * 00000001402DF9FF: cmp     ecx, esi
 * 00000001402DFA01: jnz     short loc_1402DFA7E
 * 00000001402DFA03: mov     eax, [r8+1Ch]
 * 00000001402DFA07: add     eax, r15d
 * 00000001402DFA0A: shl     eax, 4
 * 00000001402DFA0D: jmp     loc_1402DFAB5
 * 00000001402DFA12: movzx   eax, word ptr [r8+20h]
 * 00000001402DFA17: jmp     loc_1402DFAAF
 * 00000001402DFA1C: mov     eax, [r8+18h]
 * 00000001402DFA20: add     eax, esi
 * 00000001402DFA22: lea     eax, [rax+rax*2]
 * 00000001402DFA25: shl     eax, 3
 * 00000001402DFA28: jmp     loc_1402DFAB5
 * 00000001402DFA2D: cmp     ecx, 1Ch
 * 00000001402DFA30: jz      short loc_1402DFAAA
 * 00000001402DFA32: cmp     ecx, 1Eh
 * 00000001402DFA35: jz      short loc_1402DFA85
 * 00000001402DFA37: cmp     ecx, 20h ; ' '
 * 00000001402DFA3A: jle     short loc_1402DFA7E
 * 00000001402DFA3C: cmp     ecx, 22h ; '"'
 * 00000001402DFA3F: jle     short loc_1402DFA5D
 * 00000001402DFA41: cmp     ecx, 2Bh ; '+'
 * 00000001402DFA44: jnz     short loc_1402DFA7E
 * 00000001402DFA46: mov     ecx, [r8+10h]
 * 00000001402DFA4A: mov     rax, rbx
 * 00000001402DFA4D: mul     rcx
 * 00000001402DFA50: shr     rdx, 3
 * 00000001402DFA54: lea     eax, ds:30h[rdx*4]
 * 00000001402DFA5B: jmp     short loc_1402DFAB5
 * 00000001402DFA5D: mov     ecx, [r8+20h]
 * 00000001402DFA61: mov     edx, [r8+28h]
 * 00000001402DFA65: and     rcx, r14
 * 00000001402DFA68: add     rdx, r14
 * 00000001402DFA6B: add     rdx, rcx
 * 00000001402DFA6E: shr     rdx, 0Ch
 * 00000001402DFA72: lea     eax, [rdx+rdx*4]
 * 00000001402DFA75: lea     eax, ds:30h[rax*4]
 * 00000001402DFA7C: jmp     short loc_1402DFAB5
 * 00000001402DFA7E: mov     eax, 30h ; '0'
 * 00000001402DFA83: jmp     short loc_1402DFAB5
 * 00000001402DFA85: mov     ecx, [r8+24h]
 * 00000001402DFA89: mov     rax, rbx
 * 00000001402DFA8C: dec     ecx
 * 00000001402DFA8E: mul     rcx
 * 00000001402DFA91: movzx   eax, word ptr [r8+28h]
 * 00000001402DFA96: shr     rdx, 3
 * 00000001402DFA9A: add     edx, 7
 * 00000001402DFA9D: and     edx, 0FFFFFFF8h
 * 00000001402DFAA0: add     eax, esi
 * 00000001402DFAA2: lea     eax, [rax+rax*2]
 * 00000001402DFAA5: lea     eax, [rdx+rax*8]
 * 00000001402DFAA8: jmp     short loc_1402DFAB5
 * 00000001402DFAAA: movzx   eax, word ptr [r8+28h]
 * 00000001402DFAAF: add     eax, 37h ; '7'
 * 00000001402DFAB2: and     eax, 0FFFFFFF8h
 * 00000001402DFAB5: add     r8, rax
 * 00000001402DFAB8: mov     eax, 1
 * 00000001402DFABD: sub     r9, rax
 * 00000001402DFAC0: jnz     loc_1402DF9E6
 * 00000001402DFAC6: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402DFACA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402DFAD1: mov     rbx, [rbp+2250h+var_21D8]
 * 00000001402DFAD5: mov     r10d, [rbp+2250h+var_21F8]
 * 00000001402DFAD9: mov     r14, [rbp+2250h+var_21C8]
 * 00000001402DFAE0: mov     r15d, [rbp+2250h+var_2234]
 * 00000001402DFAE4: mov     r12, [rbp+2250h+var_2230]
 * 00000001402DFAE8: mov     r13d, [rbp+2250h+var_2228]
 * 00000001402DFAEC: jmp     short loc_1402DFAF3
 * 00000001402DFAEE: mov     eax, 1
 * 00000001402DFAF3: mov     ecx, r8d
 * 00000001402DFAF6: mov     dword ptr [rbp+2250h+var_2070], eax
 * 00000001402DFAFC: sub     ecx, r14d
 * 00000001402DFAFF: mov     dword ptr [rbp+2250h+var_2070+4], r10d
 * 00000001402DFB06: mov     [rbp+2250h+var_2068], ecx
 * 00000001402DFB0C: mov     r11d, eax
 * 00000001402DFB0F: movsxd  rdx, dword ptr [r8]
 * 00000001402DFB12: mov     r9d, r10d
 * 00000001402DFB15: cmp     edx, 2Bh ; '+'
 * 00000001402DFB18: ja      short loc_1402DFB3A
 * 00000001402DFB1A: mov     r10, 80000001002h
 * 00000001402DFB24: bt      r10, rdx
 * 00000001402DFB28: jnb     short loc_1402DFB3A
 * 00000001402DFB2A: mov     rax, [rbp+2250h+var_21F0]
 * 00000001402DFB2E: cmp     [r8+8], rax
 * 00000001402DFB32: jnz     short loc_1402DFB3A
 * 00000001402DFB34: cmp     [r8+10h], r13d
 * 00000001402DFB38: jz      short loc_1402DFB63
 * 00000001402DFB3A: lea     eax, [rdx-21h]
 * 00000001402DFB3D: mov     edx, 1
 * 00000001402DFB42: cmp     eax, edx
 * 00000001402DFB44: ja      short loc_1402DFB4C
 * 00000001402DFB46: cmp     [r8+20h], r12
 * 00000001402DFB4A: jz      short loc_1402DFB63
 * 00000001402DFB4C: add     r15d, edx
 * 00000001402DFB4F: mov     [rbp+2250h+var_2234], r15d
 * 00000001402DFB53: cmp     r15d, [rbx+6ACh]
 * 00000001402DFB5A: jnb     short loc_1402DFB68
 * 00000001402DFB5C: xor     edx, edx
 * 00000001402DFB5E: jmp     loc_1402DF978
 * 00000001402DFB63: xor     r12d, r12d
 * 00000001402DFB66: jmp     short loc_1402DFB6E
 * 00000001402DFB68: xor     r12d, r12d
 * 00000001402DFB6B: mov     r8d, r12d
 * 00000001402DFB6E: mov     [rbp+2250h+var_20E8], r8
 * 00000001402DFB75: test    r8, r8
 * 00000001402DFB78: jnz     loc_1402E1472
 * 00000001402DFB7E: mov     rax, [rbx+2A8h]
 * 00000001402DFB85: mov     rcx, [rbp+2250h+var_21E8]
 * 00000001402DFB89: call    KeGuardDispatchICall
 * 00000001402DFB8E: mov     ecx, [rbp+2250h+var_21A0]
 * 00000001402DFB94: mov     dword ptr [rbp+2250h+var_2218], ecx
 * 00000001402DFB97: mov     [rbp+2250h+var_2234], eax
 * 00000001402DFB9A: test    eax, eax
 * 00000001402DFB9C: jz      loc_1402E1472
 * 00000001402DFBA2: test    dword ptr [rbx+828h], 40000000h
 * 00000001402DFBAC: jz      short loc_1402DFBD8
 * 00000001402DFBAE: mov     rdx, [rbp+2250h+var_2168]
 * 00000001402DFBB5: lea     rcx, [rbp+2250h+var_2148]
 * 00000001402DFBBC: mov     r8d, 0Fh
 * 00000001402DFBC2: call    sub_14087CF84
 * 00000001402DFBC7: mov     rsi, [rbp+2250h+var_2148]
 * 00000001402DFBCE: mov     ecx, eax
 * 00000001402DFBD0: mov     [rbp+2250h+var_2210], eax
 * 00000001402DFBD3: jmp     loc_1402E144D
 * 00000001402DFBD8: mov     rax, [rbx+1F0h]
 * 00000001402DFBDF: lea     r9, [rbp+2250h+var_21A0]
 * 00000001402DFBE6: mov     rcx, [rbp+2250h+var_2168]
 * 00000001402DFBED: xor     r8d, r8d
 * 00000001402DFBF0: mov     [rbp+2250h+var_1D98], r12
 * 00000001402DFBF7: mov     [rbp+2250h+var_1F68], r12d
 * 00000001402DFBFE: lea     r15d, [r8+1]
 * 00000001402DFC02: mov     dl, r15b
 * 00000001402DFC05: call    KeGuardDispatchICall
 * 00000001402DFC0A: mov     rdx, rax
 * 00000001402DFC0D: lea     r8d, [r15+0Bh]
 * 00000001402DFC11: neg     rax
 * 00000001402DFC14: mov     [rbp+2250h+var_1DB0], rdx
 * 00000001402DFC1B: lea     r9, [rbp+2250h+var_21A0]
 * 00000001402DFC22: mov     dl, r15b
 * 00000001402DFC25: sbb     ecx, ecx
 * 00000001402DFC27: and     ecx, [rbp+2250h+var_21A0]
 * 00000001402DFC2D: mov     [rbp+2250h+var_21A0], ecx
 * 00000001402DFC33: mov     rax, [rbx+1F0h]
 * 00000001402DFC3A: mov     [rbp+2250h+var_1F74], ecx
 * 00000001402DFC40: mov     rcx, [rbp+2250h+var_2168]
 * 00000001402DFC47: call    KeGuardDispatchICall
 * 00000001402DFC4C: mov     rdx, rax
 * 00000001402DFC4F: mov     [rbp+2250h+var_2248], rax
 * 00000001402DFC53: neg     rax
 * 00000001402DFC56: mov     [rbp+2250h+var_1DA8], rdx
 * 00000001402DFC5D: lea     r8d, [r15+9]
 * 00000001402DFC61: mov     dl, r15b
 * 00000001402DFC64: sbb     ecx, ecx
 * 00000001402DFC66: lea     r9, [rbp+2250h+var_21A0]
 * 00000001402DFC6D: and     ecx, [rbp+2250h+var_21A0]
 * 00000001402DFC73: mov     [rbp+2250h+var_21A0], ecx
 * 00000001402DFC79: mov     rax, [rbx+1F0h]
 * 00000001402DFC80: mov     [rbp+2250h+var_2228], ecx
 * 00000001402DFC83: mov     [rbp+2250h+var_1F70], ecx
 * 00000001402DFC89: mov     rcx, [rbp+2250h+var_2168]
 * 00000001402DFC90: call    KeGuardDispatchICall
 * 00000001402DFC95: mov     rdx, rax
 * 00000001402DFC98: neg     rax
 * 00000001402DFC9B: mov     [rbp+2250h+var_1DA0], rdx
 * 00000001402DFCA2: sbb     ecx, ecx
 * 00000001402DFCA4: and     ecx, [rbp+2250h+var_21A0]
 * 00000001402DFCAA: mov     [rbp+2250h+var_21A0], ecx
 * 00000001402DFCB0: mov     rax, [rbx+1F8h]
 * 00000001402DFCB7: mov     [rbp+2250h+var_1F6C], ecx
 * 00000001402DFCBD: mov     rcx, [rbp+2250h+var_2168]
 * 00000001402DFCC4: call    KeGuardDispatchICall
 * 00000001402DFCC9: mov     rcx, rax
 * 00000001402DFCCC: test    rax, rax
 * 00000001402DFCCF: jz      loc_1402DF909
 * 00000001402DFCD5: mov     rax, [rbp+2250h+var_2168]
 * 00000001402DFCDC: mov     r15d, [rbx+684h]
 * 00000001402DFCE3: mov     r8d, [rbx+7BCh]
 * 00000001402DFCEA: mov     [rbp+2250h+var_1DB8], rax
 * 00000001402DFCF1: mov     eax, [rcx+54h]
 * 00000001402DFCF4: mov     [rbp+2250h+var_1F78], eax
 * 00000001402DFCFA: lea     eax, [r15+0F0h]
 * 00000001402DFD01: cmp     eax, [rbx+8B4h]
 * 00000001402DFD07: jbe     loc_1402DFDF8
 * 00000001402DFD0D: mov     edx, eax
 * 00000001402DFD0F: mov     rcx, rbx
 * 00000001402DFD12: call    sub_1402E732C
 * 00000001402DFD17: mov     [rbp+2250h+var_21E8], rax
 * 00000001402DFD1B: mov     r14, rax
 * 00000001402DFD1E: test    rax, rax
 * 00000001402DFD21: jz      loc_1402DFDEC
 * 00000001402DFD27: mov     ecx, [rbx+828h]
 * 00000001402DFD2D: test    cl, 4
 * 00000001402DFD30: jnz     loc_1402DFDE2
 * 00000001402DFD36: mov     eax, [rbx+684h]
 * 00000001402DFD3C: and     ecx, 20000000h
 * 00000001402DFD42: mov     r8, [rbx+668h]
 * 00000001402DFD49: neg     ecx
 * 00000001402DFD4B: mov     r9d, 1
 * 00000001402DFD51: sbb     edx, edx
 * 00000001402DFD53: and     edx, [rbx+7BCh]
 * 00000001402DFD59: cmp     eax, 8
 * 00000001402DFD5C: jb      short loc_1402DFD73
 * 00000001402DFD5E: mov     ecx, eax
 * 00000001402DFD60: shr     rcx, 3
 * 00000001402DFD64: mov     [rbx], r12
 * 00000001402DFD67: add     eax, 0FFFFFFF8h
 * 00000001402DFD6A: add     rbx, 8
 * 00000001402DFD6E: sub     rcx, r9
 * 00000001402DFD71: jnz     short loc_1402DFD64
 * 00000001402DFD73: test    eax, eax
 * 00000001402DFD75: jz      short loc_1402DFD82
 * 00000001402DFD77: mov     [rbx], r12b
 * 00000001402DFD7A: add     rbx, r9
 * 00000001402DFD7D: add     eax, 0FFFFFFFFh
 * 00000001402DFD80: jnz     short loc_1402DFD77
 * 00000001402DFD82: mov     ebx, [r14+7BCh]
 * 00000001402DFD89: mov     eax, 3
 * 00000001402DFD8E: mov     [r14+7BCh], edx
 * 00000001402DFD95: cmp     edx, eax
 * 00000001402DFD97: jz      short loc_1402DFDCC
 * 00000001402DFD99: test    dword ptr [r14+828h], 10000000h
 * 00000001402DFDA4: mov     ecx, r12d
 * 00000001402DFDA7: cmovz   ecx, edx
 * 00000001402DFDAA: test    ecx, ecx
 * 00000001402DFDAC: jz      short loc_1402DFDC3
 * 00000001402DFDAE: mov     rax, [r14+228h]
 * 00000001402DFDB5: lea     rcx, [r8-8]
 * 00000001402DFDB9: mov     rdx, [rcx]
 * 00000001402DFDBC: call    KeGuardDispatchICall
 * 00000001402DFDC1: jmp     short loc_1402DFDDB
 * 00000001402DFDC3: mov     rax, [r14+100h]
 * 00000001402DFDCA: jmp     short loc_1402DFDD3
 * 00000001402DFDCC: mov     rax, [r14+368h]
 * 00000001402DFDD3: mov     rcx, r8
 * 00000001402DFDD6: call    KeGuardDispatchICall
 * 00000001402DFDDB: mov     [r14+7BCh], ebx
 * 00000001402DFDE2: and     dword ptr [r14+828h], 0FFFFFFFBh
 * 00000001402DFDEA: jmp     short loc_1402DFE05
 * 00000001402DFDEC: mov     [rbp+2250h+var_2150], r12
 * 00000001402DFDF3: jmp     loc_1402DF910
 * 00000001402DFDF8: mov     r14, rbx
 * 00000001402DFDFB: mov     [rbp+2250h+var_21E8], rbx
 * 00000001402DFDFF: mov     [rbx+684h], eax
 * 00000001402DFE05: mov     eax, 5
 * 00000001402DFE0A: lea     r10, [r14+r15]
 * 00000001402DFE0E: add     [r14+6ACh], eax
 * 00000001402DFE15: lea     r13, [rbp+2250h+var_1DB8]
 * 00000001402DFE1C: mov     [rbp+2250h+var_1F08], r10
 * 00000001402DFE23: lea     rdi, [rbp+2250h+var_1F78]
 * 00000001402DFE2A: mov     [rbp+2250h+var_20E8], r10
 * 00000001402DFE31: mov     [rbp+2250h+var_2250], rax
 * 00000001402DFE35: mov     r15d, [rdi]
 * 00000001402DFE38: mov     ecx, 30h ; '0'
 * 00000001402DFE3D: mov     rsi, [r13+0]
 * 00000001402DFE41: mov     rax, r10
 * 00000001402DFE44: mov     [rbp+2250h+var_21F8], r15d
 * 00000001402DFE48: lea     edx, [rcx-2Ah]
 * 00000001402DFE4B: lea     r8d, [rcx-2Fh]
 * 00000001402DFE4F: mov     [rax], r12
 * 00000001402DFE52: add     ecx, 0FFFFFFF8h
 * 00000001402DFE55: add     rax, 8
 * 00000001402DFE59: sub     rdx, r8
 * 00000001402DFE5C: jnz     short loc_1402DFE4F
 * 00000001402DFE5E: test    ecx, ecx
 * 00000001402DFE60: jz      short loc_1402DFE6D
 * 00000001402DFE62: mov     [rax], r12b
 * 00000001402DFE65: add     rax, r8
 * 00000001402DFE68: add     ecx, 0FFFFFFFFh
 * 00000001402DFE6B: jnz     short loc_1402DFE62
 * 00000001402DFE6D: mov     dword ptr [r10], 0Bh
 * 00000001402DFE74: lea     rcx, [rsi+r15]
 * 00000001402DFE78: mov     [r10+8], rsi
 * 00000001402DFE7C: mov     r9, rsi
 * 00000001402DFE7F: mov     [r10+10h], r15d
 * 00000001402DFE83: mov     rax, rsi
 * 00000001402DFE86: add     [r14+6C8h], r15d
 * 00000001402DFE8D: mov     r11d, [r14+6B4h]
 * 00000001402DFE94: mov     r12, [r14+6B8h]
 * 00000001402DFE9B: cmp     rsi, rcx
 * 00000001402DFE9E: jnb     short loc_1402DFEB0
 * 00000001402DFEA0: mov     edx, 40h ; '@'
 * 00000001402DFEA5: prefetchnta byte ptr [rax]
 * 00000001402DFEA8: add     rax, rdx
 * 00000001402DFEAB: cmp     rax, rcx
 * 00000001402DFEAE: jb      short loc_1402DFEA5
 * 00000001402DFEB0: mov     ebx, r15d
 * 00000001402DFEB3: mov     r8, r12
 * 00000001402DFEB6: shr     ebx, 7
 * 00000001402DFEB9: test    ebx, ebx
 * 00000001402DFEBB: jz      short loc_1402DFF2C
 * 00000001402DFEBD: mov     r15, 7010008004002001h
 * 00000001402DFEC7: mov     edx, 8
 * 00000001402DFECC: lea     r14d, [rdx-7]
 * 00000001402DFED0: mov     rax, [r9]
 * 00000001402DFED3: mov     ecx, r11d
 * 00000001402DFED6: xor     rax, r8
 * 00000001402DFED9: mov     r8, [r9+8]
 * 00000001402DFEDD: rol     rax, cl
 * 00000001402DFEE0: add     r9, 10h
 * 00000001402DFEE4: xor     r8, rax
 * 00000001402DFEE7: rol     r8, cl
 * 00000001402DFEEA: sub     rdx, r14
 * 00000001402DFEED: jnz     short loc_1402DFED0
 * 00000001402DFEEF: mov     rcx, r9
 * 00000001402DFEF2: sub     rcx, rsi
 * 00000001402DFEF5: xor     rcx, r12
 * 00000001402DFEF8: mov     rax, rcx
 * 00000001402DFEFB: rol     rax, 11h
 * 00000001402DFEFF: xor     rcx, rax
 * 00000001402DFF02: mov     rax, r15
 * 00000001402DFF05: mul     rcx
 * 00000001402DFF08: xor     eax, edx
 * 00000001402DFF0A: mov     [rbp+2250h+var_1B50], rdx
 * 00000001402DFF11: xor     r11d, eax
 * 00000001402DFF14: mov     rax, r14
 * 00000001402DFF17: and     r11d, 3Fh
 * 00000001402DFF1B: cmovz   r11d, eax
 * 00000001402DFF1F: add     ebx, 0FFFFFFFFh
 * 00000001402DFF22: jnz     short loc_1402DFEC7
 * 00000001402DFF24: mov     r14, [rbp+2250h+var_21E8]
 * 00000001402DFF28: mov     r15d, [rbp+2250h+var_21F8]
 * 00000001402DFF2C: mov     edx, r15d
 * 00000001402DFF2F: mov     esi, 1
 * 00000001402DFF34: and     edx, 7Fh
 * 00000001402DFF37: cmp     edx, 8
 * 00000001402DFF3A: jb      short loc_1402DFF57
 * 00000001402DFF3C: mov     ebx, edx
 * 00000001402DFF3E: shr     rbx, 3
 * 00000001402DFF42: xor     r8, [r9]
 * 00000001402DFF45: mov     ecx, r11d
 * 00000001402DFF48: rol     r8, cl
 * 00000001402DFF4B: add     r9, 8
 * 00000001402DFF4F: add     edx, 0FFFFFFF8h
 * 00000001402DFF52: sub     rbx, rsi
 * 00000001402DFF55: jnz     short loc_1402DFF42
 * 00000001402DFF57: xor     r12d, r12d
 * 00000001402DFF5A: test    edx, edx
 * 00000001402DFF5C: jz      short loc_1402DFF73
 * 00000001402DFF5E: movzx   eax, byte ptr [r9]
 * 00000001402DFF62: mov     ecx, r11d
 * 00000001402DFF65: xor     r8, rax
 * 00000001402DFF68: add     r9, rsi
 * 00000001402DFF6B: rol     r8, cl
 * 00000001402DFF6E: add     edx, 0FFFFFFFFh
 * 00000001402DFF71: jnz     short loc_1402DFF5E
 * 00000001402DFF73: mov     rax, r8
 * 00000001402DFF76: jmp     short loc_1402DFF7B
 * 00000001402DFF78: xor     r8d, eax
 * 00000001402DFF7B: shr     rax, 1Fh
 * 00000001402DFF7F: test    rax, rax
 * 00000001402DFF82: jnz     short loc_1402DFF78
 * 00000001402DFF84: btr     r8d, 1Fh
 * 00000001402DFF89: add     rdi, 4
 * 00000001402DFF8D: mov     [r10+14h], r8d
 * 00000001402DFF91: add     r13, 8
 * 00000001402DFF95: add     [r14+6C8h], r15d
 * 00000001402DFF9C: lea     r15d, [rax+1]
 * 00000001402DFFA0: mov     r10, [rbp+2250h+var_1F08]
 * 00000001402DFFA7: add     r10, 30h ; '0'
 * 00000001402DFFAB: sub     [rbp+2250h+var_2250], r15
 * 00000001402DFFAF: mov     [rbp+2250h+var_1F08], r10
 * 00000001402DFFB6: jnz     loc_1402DFE35
 * 00000001402DFFBC: mov     rax, [rbp+2250h+var_2168]
 * 00000001402DFFC3: mov     rsi, r14
 * 00000001402DFFC6: mov     rcx, [rbp+2250h+var_20E8]
 * 00000001402DFFCD: mov     r8d, dword ptr [rbp+2250h+var_2218]
 * 00000001402DFFD1: mov     rdx, [rbp+2250h+var_21F0]
 * 00000001402DFFD5: mov     [rbp+2250h+var_2150], r14
 * 00000001402DFFDC: mov     dword ptr [rcx], 2Ch ; ','
 * 00000001402DFFE2: mov     [rcx+18h], rax
 * 00000001402DFFE6: lea     eax, [r15+1]
 * 00000001402DFFEA: or      [rcx+20h], eax
 * 00000001402DFFED: lea     rax, [rbp+2250h+var_1F80]
 * 00000001402DFFF4: mov     r9, [rbp+2250h+var_2168]
 * 00000001402DFFFB: lea     rcx, [rbp+2250h+var_2150]
 * 00000001402E0002: mov     [rsp+11A0h+var_1168], rax
 * 00000001402E0007: lea     rax, [rbp+2250h+var_20C0]
 * 00000001402E000E: mov     [rsp+11A0h+var_1170], rax
 * 00000001402E0013: lea     eax, [r15+0Eh]
 * 00000001402E0017: mov     dword ptr [rsp+11A0h+var_1178], eax
 * 00000001402E001B: mov     eax, [rbp+2250h+var_2234]
 * 00000001402E001E: mov     dword ptr [rsp+11A0h+BugCheckParameter4], eax
 * 00000001402E0022: mov     [rbp+2250h+var_2148], r14
 * 00000001402E0029: call    sub_1402E68D4
 * 00000001402E002E: xor     r11d, r11d
 * 00000001402E0031: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E0038: test    eax, eax
 * 00000001402E003A: jns     short loc_1402E0046
 * 00000001402E003C: mov     ecx, eax
 * 00000001402E003E: mov     [rbp+2250h+var_2210], eax
 * 00000001402E0041: jmp     loc_1402E144D
 * 00000001402E0046: mov     rsi, [rbp+2250h+var_2150]
 * 00000001402E004D: mov     rcx, [rbp+2250h+var_20E8]
 * 00000001402E0054: mov     rax, rsi
 * 00000001402E0057: mov     r9d, [rbp+2250h+var_1F80]
 * 00000001402E005E: sub     rax, r14
 * 00000001402E0061: sub     r9d, [rbp+2250h+var_20C0]
 * 00000001402E0068: add     rcx, rax
 * 00000001402E006B: mov     ebx, [rbp+2250h+var_20C0]
 * 00000001402E0071: add     rbx, [rbp+2250h+var_2168]
 * 00000001402E0078: mov     [rbp+2250h+var_20E8], rcx
 * 00000001402E007F: lea     r12, [rcx+0C0h]
 * 00000001402E0086: mov     [rbp+2250h+var_2148], rsi
 * 00000001402E008D: mov     ecx, 30h ; '0'
 * 00000001402E0092: mov     [rbp+2250h+var_21C8], r12
 * 00000001402E0099: mov     rax, r12
 * 00000001402E009C: lea     r13d, [rcx-2Ah]
 * 00000001402E00A0: mov     edx, r13d
 * 00000001402E00A3: mov     [rax], r11
 * 00000001402E00A6: add     ecx, 0FFFFFFF8h
 * 00000001402E00A9: add     rax, 8
 * 00000001402E00AD: sub     rdx, r15
 * 00000001402E00B0: jnz     short loc_1402E00A3
 * 00000001402E00B2: test    ecx, ecx
 * 00000001402E00B4: jz      short loc_1402E00C1
 * 00000001402E00B6: mov     [rax], r11b
 * 00000001402E00B9: add     rax, r15
 * 00000001402E00BC: add     ecx, 0FFFFFFFFh
 * 00000001402E00BF: jnz     short loc_1402E00B6
 * 00000001402E00C1: mov     dword ptr [r12], 0Bh
 * 00000001402E00C9: mov     r10, rbx
 * 00000001402E00CC: mov     [r12+8], rbx
 * 00000001402E00D1: mov     rax, rbx
 * 00000001402E00D4: mov     [r12+10h], r9d
 * 00000001402E00D9: add     [rsi+6C8h], r9d
 * 00000001402E00E0: mov     r11d, [rsi+6B4h]
 * 00000001402E00E7: mov     r15, [rsi+6B8h]
 * 00000001402E00EE: mov     ecx, r9d
 * 00000001402E00F1: add     rcx, rbx
 * 00000001402E00F4: cmp     rbx, rcx
 * 00000001402E00F7: jnb     short loc_1402E0109
 * 00000001402E00F9: mov     edx, 40h ; '@'
 * 00000001402E00FE: prefetchnta byte ptr [rax]
 * 00000001402E0101: add     rax, rdx
 * 00000001402E0104: cmp     rax, rcx
 * 00000001402E0107: jb      short loc_1402E00FE
 * 00000001402E0109: mov     r14d, r9d
 * 00000001402E010C: mov     r8, r15
 * 00000001402E010F: shr     r14d, 7
 * 00000001402E0113: test    r14d, r14d
 * 00000001402E0116: jz      short loc_1402E0186
 * 00000001402E0118: mov     edi, 1
 * 00000001402E011D: mov     r12, 7010008004002001h
 * 00000001402E0127: mov     eax, 8
 * 00000001402E012C: xor     r8, [r10]
 * 00000001402E012F: mov     ecx, r11d
 * 00000001402E0132: rol     r8, cl
 * 00000001402E0135: xor     r8, [r10+8]
 * 00000001402E0139: add     r10, 10h
 * 00000001402E013D: rol     r8, cl
 * 00000001402E0140: sub     rax, rdi
 * 00000001402E0143: jnz     short loc_1402E012C
 * 00000001402E0145: mov     rcx, r10
 * 00000001402E0148: sub     rcx, rbx
 * 00000001402E014B: xor     rcx, r15
 * 00000001402E014E: mov     rax, rcx
 * 00000001402E0151: rol     rax, 11h
 * 00000001402E0155: xor     rcx, rax
 * 00000001402E0158: mov     rax, r12
 * 00000001402E015B: mul     rcx
 * 00000001402E015E: xor     eax, edx
 * 00000001402E0160: mov     [rbp+2250h+var_1B48], rdx
 * 00000001402E0167: xor     r11d, eax
 * 00000001402E016A: and     r11d, 3Fh
 * 00000001402E016E: cmovz   r11d, edi
 * 00000001402E0172: add     r14d, 0FFFFFFFFh
 * 00000001402E0176: jnz     short loc_1402E0127
 * 00000001402E0178: mov     r12, [rbp+2250h+var_21C8]
 * 00000001402E017F: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E0186: and     r9d, 7Fh
 * 00000001402E018A: mov     r15d, 1
 * 00000001402E0190: cmp     r9d, 8
 * 00000001402E0194: jb      short loc_1402E01B3
 * 00000001402E0196: mov     eax, r9d
 * 00000001402E0199: shr     rax, 3
 * 00000001402E019D: xor     r8, [r10]
 * 00000001402E01A0: mov     ecx, r11d
 * 00000001402E01A3: rol     r8, cl
 * 00000001402E01A6: add     r10, 8
 * 00000001402E01AA: add     r9d, 0FFFFFFF8h
 * 00000001402E01AE: sub     rax, r15
 * 00000001402E01B1: jnz     short loc_1402E019D
 * 00000001402E01B3: test    r9d, r9d
 * 00000001402E01B6: jz      short loc_1402E01CE
 * 00000001402E01B8: movzx   eax, byte ptr [r10]
 * 00000001402E01BC: mov     ecx, r11d
 * 00000001402E01BF: xor     r8, rax
 * 00000001402E01C2: add     r10, r15
 * 00000001402E01C5: rol     r8, cl
 * 00000001402E01C8: add     r9d, 0FFFFFFFFh
 * 00000001402E01CC: jnz     short loc_1402E01B8
 * 00000001402E01CE: mov     rax, r8
 * 00000001402E01D1: shr     rax, 1Fh
 * 00000001402E01D5: xor     r11d, r11d
 * 00000001402E01D8: jmp     short loc_1402E01E1
 * 00000001402E01DA: xor     r8d, eax
 * 00000001402E01DD: shr     rax, 1Fh
 * 00000001402E01E1: test    rax, rax
 * 00000001402E01E4: jnz     short loc_1402E01DA
 * 00000001402E01E6: btr     r8d, 1Fh
 * 00000001402E01EB: mov     [r12+14h], r8d
 * 00000001402E01F0: mov     rax, [rbp+2250h+var_20E8]
 * 00000001402E01F7: add     rax, 60h ; '`'
 * 00000001402E01FB: mov     [rbp+2250h+var_2048], rax
 * 00000001402E0202: jnz     loc_1402E048B
 * 00000001402E0208: mov     r14d, [rsi+684h]
 * 00000001402E020F: mov     r8d, [rsi+7BCh]
 * 00000001402E0216: lea     eax, [r14+30h]
 * 00000001402E021A: cmp     eax, [rsi+8B4h]
 * 00000001402E0220: jbe     loc_1402E0312
 * 00000001402E0226: mov     edx, eax
 * 00000001402E0228: mov     rcx, rsi
 * 00000001402E022B: call    sub_1402E732C
 * 00000001402E0230: xor     r11d, r11d
 * 00000001402E0233: mov     rbx, rax
 * 00000001402E0236: test    rax, rax
 * 00000001402E0239: jz      loc_1402E02FC
 * 00000001402E023F: mov     ecx, [rsi+828h]
 * 00000001402E0245: test    cl, 4
 * 00000001402E0248: jnz     loc_1402E02F3
 * 00000001402E024E: mov     eax, [rsi+684h]
 * 00000001402E0254: and     ecx, 20000000h
 * 00000001402E025A: mov     r8, [rsi+668h]
 * 00000001402E0261: neg     ecx
 * 00000001402E0263: sbb     edx, edx
 * 00000001402E0265: and     edx, [rsi+7BCh]
 * 00000001402E026B: cmp     eax, 8
 * 00000001402E026E: jb      short loc_1402E0285
 * 00000001402E0270: mov     ecx, eax
 * 00000001402E0272: shr     rcx, 3
 * 00000001402E0276: mov     [rsi], r11
 * 00000001402E0279: add     eax, 0FFFFFFF8h
 * 00000001402E027C: add     rsi, 8
 * 00000001402E0280: sub     rcx, r15
 * 00000001402E0283: jnz     short loc_1402E0276
 * 00000001402E0285: test    eax, eax
 * 00000001402E0287: jz      short loc_1402E0294
 * 00000001402E0289: mov     [rsi], r11b
 * 00000001402E028C: add     rsi, r15
 * 00000001402E028F: add     eax, 0FFFFFFFFh
 * 00000001402E0292: jnz     short loc_1402E0289
 * 00000001402E0294: mov     esi, [rbx+7BCh]
 * 00000001402E029A: mov     eax, 3
 * 00000001402E029F: mov     [rbx+7BCh], edx
 * 00000001402E02A5: cmp     edx, eax
 * 00000001402E02A7: jz      short loc_1402E02DB
 * 00000001402E02A9: test    dword ptr [rbx+828h], 10000000h
 * 00000001402E02B3: mov     ecx, r11d
 * 00000001402E02B6: cmovz   ecx, edx
 * 00000001402E02B9: test    ecx, ecx
 * 00000001402E02BB: jz      short loc_1402E02D2
 * 00000001402E02BD: mov     rax, [rbx+228h]
 * 00000001402E02C4: lea     rcx, [r8-8]
 * 00000001402E02C8: mov     rdx, [rcx]
 * 00000001402E02CB: call    KeGuardDispatchICall
 * 00000001402E02D0: jmp     short loc_1402E02EA
 * 00000001402E02D2: mov     rax, [rbx+100h]
 * 00000001402E02D9: jmp     short loc_1402E02E2
 * 00000001402E02DB: mov     rax, [rbx+368h]
 * 00000001402E02E2: mov     rcx, r8
 * 00000001402E02E5: call    KeGuardDispatchICall
 * 00000001402E02EA: mov     [rbx+7BCh], esi
 * 00000001402E02F0: xor     r11d, r11d
 * 00000001402E02F3: and     dword ptr [rbx+828h], 0FFFFFFFBh
 * 00000001402E02FA: jmp     short loc_1402E031B
 * 00000001402E02FC: mov     [rbp+2250h+var_2150], r11
 * 00000001402E0303: mov     rbx, rsi
 * 00000001402E0306: mov     [rbp+2250h+var_2210], 0C000009Ah
 * 00000001402E030D: jmp     loc_1402DF910
 * 00000001402E0312: mov     rbx, rsi
 * 00000001402E0315: mov     [rsi+684h], eax
 * 00000001402E031B: add     [rbx+6ACh], r15d
 * 00000001402E0322: lea     rsi, [rbx+r14]
 * 00000001402E0326: mov     [rbp+2250h+var_1E70], rsi
 * 00000001402E032D: mov     rax, rsi
 * 00000001402E0330: mov     ecx, 30h ; '0'
 * 00000001402E0335: mov     rdx, r13
 * 00000001402E0338: mov     [rax], r11
 * 00000001402E033B: add     ecx, 0FFFFFFF8h
 * 00000001402E033E: add     rax, 8
 * 00000001402E0342: sub     rdx, r15
 * 00000001402E0345: jnz     short loc_1402E0338
 * 00000001402E0347: test    ecx, ecx
 * 00000001402E0349: jz      short loc_1402E0356
 * 00000001402E034B: mov     [rax], r11b
 * 00000001402E034E: add     rax, r15
 * 00000001402E0351: add     ecx, 0FFFFFFFFh
 * 00000001402E0354: jnz     short loc_1402E034B
 * 00000001402E0356: mov     r12, [rbp+2250h+var_2248]
 * 00000001402E035A: mov     r15d, [rbp+2250h+var_2228]
 * 00000001402E035E: mov     r9, r12
 * 00000001402E0361: mov     dword ptr [rsi], 0Eh
 * 00000001402E0367: mov     [rsi+8], r12
 * 00000001402E036B: mov     [rsi+10h], r15d
 * 00000001402E036F: add     [rbx+6C8h], r15d
 * 00000001402E0376: lea     rcx, [r12+r15]
 * 00000001402E037A: mov     r10d, [rbx+6B4h]
 * 00000001402E0381: mov     r14, [rbx+6B8h]
 * 00000001402E0388: cmp     r12, rcx
 * 00000001402E038B: jnb     short loc_1402E03A0
 * 00000001402E038D: mov     rax, r12
 * 00000001402E0390: mov     edx, 40h ; '@'
 * 00000001402E0395: prefetchnta byte ptr [rax]
 * 00000001402E0398: add     rax, rdx
 * 00000001402E039B: cmp     rax, rcx
 * 00000001402E039E: jb      short loc_1402E0395
 * 00000001402E03A0: mov     r11d, r15d
 * 00000001402E03A3: mov     r8, r14
 * 00000001402E03A6: shr     r11d, 7
 * 00000001402E03AA: mov     r13d, 1
 * 00000001402E03B0: test    r11d, r11d
 * 00000001402E03B3: jz      short loc_1402E041B
 * 00000001402E03B5: mov     rdi, 7010008004002001h
 * 00000001402E03BF: mov     eax, 8
 * 00000001402E03C4: xor     r8, [r9]
 * 00000001402E03C7: mov     ecx, r10d
 * 00000001402E03CA: rol     r8, cl
 * 00000001402E03CD: xor     r8, [r9+8]
 * 00000001402E03D1: add     r9, 10h
 * 00000001402E03D5: rol     r8, cl
 * 00000001402E03D8: sub     rax, r13
 * 00000001402E03DB: jnz     short loc_1402E03C4
 * 00000001402E03DD: mov     rcx, r9
 * 00000001402E03E0: sub     rcx, r12
 * 00000001402E03E3: xor     rcx, r14
 * 00000001402E03E6: mov     rax, rcx
 * 00000001402E03E9: rol     rax, 11h
 * 00000001402E03ED: xor     rcx, rax
 * 00000001402E03F0: mov     rax, rdi
 * 00000001402E03F3: mul     rcx
 * 00000001402E03F6: xor     eax, edx
 * 00000001402E03F8: mov     [rbp+2250h+var_1B40], rdx
 * 00000001402E03FF: xor     r10d, eax
 * 00000001402E0402: and     r10d, 3Fh
 * 00000001402E0406: cmovz   r10d, r13d
 * 00000001402E040A: add     r11d, 0FFFFFFFFh
 * 00000001402E040E: jnz     short loc_1402E03BF
 * 00000001402E0410: mov     r15d, [rbp+2250h+var_2228]
 * 00000001402E0414: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E041B: mov     edx, r15d
 * 00000001402E041E: and     edx, 7Fh
 * 00000001402E0421: cmp     edx, 8
 * 00000001402E0424: jb      short loc_1402E0441
 * 00000001402E0426: mov     eax, edx
 * 00000001402E0428: shr     rax, 3
 * 00000001402E042C: xor     r8, [r9]
 * 00000001402E042F: mov     ecx, r10d
 * 00000001402E0432: rol     r8, cl
 * 00000001402E0435: add     r9, 8
 * 00000001402E0439: add     edx, 0FFFFFFF8h
 * 00000001402E043C: sub     rax, r13
 * 00000001402E043F: jnz     short loc_1402E042C
 * 00000001402E0441: test    edx, edx
 * 00000001402E0443: jz      short loc_1402E045A
 * 00000001402E0445: movzx   eax, byte ptr [r9]
 * 00000001402E0449: mov     ecx, r10d
 * 00000001402E044C: xor     r8, rax
 * 00000001402E044F: add     r9, r13
 * 00000001402E0452: rol     r8, cl
 * 00000001402E0455: add     edx, 0FFFFFFFFh
 * 00000001402E0458: jnz     short loc_1402E0445
 * 00000001402E045A: mov     rax, r8
 * 00000001402E045D: jmp     short loc_1402E0462
 * 00000001402E045F: xor     r8d, eax
 * 00000001402E0462: shr     rax, 1Fh
 * 00000001402E0466: test    rax, rax
 * 00000001402E0469: jnz     short loc_1402E045F
 * 00000001402E046B: btr     r8d, 1Fh
 * 00000001402E0470: mov     [rsi+14h], r8d
 * 00000001402E0474: mov     rax, [rbp+2250h+var_1E70]
 * 00000001402E047B: mov     [rbp+2250h+var_2048], rax
 * 00000001402E0482: add     [rbx+6C8h], r15d
 * 00000001402E0489: jmp     short loc_1402E049C
 * 00000001402E048B: mov     r15d, [rbp+2250h+var_2228]
 * 00000001402E048F: mov     rbx, rsi
 * 00000001402E0492: mov     r12, [rbp+2250h+var_2248]
 * 00000001402E0496: mov     dword ptr [rax], 0Eh
 * 00000001402E049C: test    dword ptr [rbx+828h], 40000000h
 * 00000001402E04A6: jz      short loc_1402E04C6
 * 00000001402E04A8: test    r15d, r15d
 * 00000001402E04AB: jz      short loc_1402E04C6
 * 00000001402E04AD: mov     r9, [rbp+2250h+var_2048]
 * 00000001402E04B4: mov     r8d, r15d
 * 00000001402E04B7: add     r9, 1Ch
 * 00000001402E04BB: mov     rdx, r12
 * 00000001402E04BE: mov     rcx, rbx
 * 00000001402E04C1: call    sub_14019FEBC
 * 00000001402E04C6: mov     rax, [rbp+2250h+var_2048]
 * 00000001402E04CD: xor     r12d, r12d
 * 00000001402E04D0: mov     rsi, rbx
 * 00000001402E04D3: mov     [rbp+2250h+var_2148], rbx
 * 00000001402E04DA: mov     [rax+18h], r12d
 * 00000001402E04DE: lea     ecx, [r12+1]
 * 00000001402E04E3: mov     rax, [rbp+2250h+var_2048]
 * 00000001402E04EA: or      [rax+18h], ecx
 * 00000001402E04ED: mov     r14, [rbp+2250h+var_20E8]
 * 00000001402E04F4: mov     r15, [rbp+2250h+var_2168]
 * 00000001402E04FB: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001402E0506: or      [r14+0B8h], ecx
 * 00000001402E050D: cmp     dword ptr [r14+0A0h], 94h
 * 00000001402E0518: jb      loc_1402E059E
 * 00000001402E051E: mov     rax, [rbx+1F8h]
 * 00000001402E0525: mov     rcx, r15
 * 00000001402E0528: mov     r13, [r14+98h]
 * 00000001402E052F: call    KeGuardDispatchICall
 * 00000001402E0534: test    rax, rax
 * 00000001402E0537: jnz     short loc_1402E054C
 * 00000001402E0539: mov     [rbp+2250h+var_2150], r12
 * 00000001402E0540: mov     [rbp+2250h+var_2210], 0C000009Ah
 * 00000001402E0547: jmp     loc_1402DF910
 * 00000001402E054C: mov     ecx, [rax+50h]
 * 00000001402E054F: mov     eax, 2
 * 00000001402E0554: or      [r14+0B8h], eax
 * 00000001402E055B: add     rcx, r15
 * 00000001402E055E: mov     rax, [r13+70h]
 * 00000001402E0562: cmp     rax, r15
 * 00000001402E0565: jb      short loc_1402E057E
 * 00000001402E0567: cmp     rax, rcx
 * 00000001402E056A: jnb     short loc_1402E057E
 * 00000001402E056C: mov     rax, [rax]
 * 00000001402E056F: mov     [r14+0A8h], rax
 * 00000001402E0576: or      dword ptr [r14+0B8h], 4
 * 00000001402E057E: mov     rax, [r13+78h]
 * 00000001402E0582: cmp     rax, r15
 * 00000001402E0585: jb      short loc_1402E059E
 * 00000001402E0587: cmp     rax, rcx
 * 00000001402E058A: jnb     short loc_1402E059E
 * 00000001402E058C: mov     rax, [rax]
 * 00000001402E058F: mov     [r14+0B0h], rax
 * 00000001402E0596: or      dword ptr [r14+0B8h], 8
 * 00000001402E059E: test    dword ptr [rbx+828h], 400000h
 * 00000001402E05A8: mov     r15, [rbp+2250h+var_2168]
 * 00000001402E05AF: mov     [rbp+2250h+var_21B0], r15
 * 00000001402E05B6: mov     [rbp+2250h+var_2150], rbx
 * 00000001402E05BD: mov     [rbp+2250h+var_2148], rbx
 * 00000001402E05C4: jz      loc_1402E143D
 * 00000001402E05CA: mov     rax, [rbx+1F8h]
 * 00000001402E05D1: mov     rcx, r15
 * 00000001402E05D4: call    KeGuardDispatchICall
 * 00000001402E05D9: xor     r11d, r11d
 * 00000001402E05DC: mov     [rbp+2250h+var_21C8], rax
 * 00000001402E05E3: mov     r13, rax
 * 00000001402E05E6: test    rax, rax
 * 00000001402E05E9: jnz     short loc_1402E05F5
 * 00000001402E05EB: mov     ecx, 0C000007Bh
 * 00000001402E05F0: jmp     loc_1402E0A8D
 * 00000001402E05F5: movzx   r12d, word ptr [r13+6]
 * 00000001402E05FA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402E0604: mov     ecx, dword ptr [rbp+2250h+var_2218]
 * 00000001402E0607: mul     rcx
 * 00000001402E060A: mov     [rbp+2250h+var_2160], r12w
 * 00000001402E0612: mov     r10, rdx
 * 00000001402E0615: shr     r10, 3
 * 00000001402E0619: mov     [rbp+2250h+var_21E8], r10
 * 00000001402E061D: test    r12w, r12w
 * 00000001402E0621: jnz     short loc_1402E0679
 * 00000001402E0623: test    dword ptr [rbx+828h], 200000h
 * 00000001402E062D: jz      loc_1402E4548
 * 00000001402E0633: cmp     [rbx+790h], r11d
 * 00000001402E063A: jnz     short loc_1402E05EB
 * 00000001402E063C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E0646: add     rax, rbx
 * 00000001402E0649: mov     [rbx+798h], rax
 * 00000001402E0650: mov     eax, 1
 * 00000001402E0655: mov     [rbx+7A0h], r11
 * 00000001402E065C: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402E0667: mov     [rbx+7B0h], r15
 * 00000001402E066E: mov     [rbx+790h], eax
 * 00000001402E0674: jmp     loc_1402E05EB
 * 00000001402E0679: mov     r14, [rbp+2250h+var_21F0]
 * 00000001402E067D: lea     r8, [r13+18h]
 * 00000001402E0681: movzx   r9d, r12w
 * 00000001402E0685: mov     ecx, r11d
 * 00000001402E0688: mov     eax, r10d
 * 00000001402E068B: mov     [rbp+2250h+var_21FC], ecx
 * 00000001402E068E: mov     [rbp+2250h+var_2190], r9d
 * 00000001402E0695: lea     rax, [rax+rax*2]
 * 00000001402E0699: shl     rax, 2
 * 00000001402E069D: mov     [rbp+2250h+var_2230], rax
 * 00000001402E06A1: add     rax, r14
 * 00000001402E06A4: mov     [rbp+2250h+var_21C0], rax
 * 00000001402E06AB: movzx   eax, word ptr [r13+14h]
 * 00000001402E06B0: add     r8, rax
 * 00000001402E06B3: mov     [rbp+2250h+var_2248], r8
 * 00000001402E06B7: test    r9d, r9d
 * 00000001402E06BA: jz      loc_1402E08DC
 * 00000001402E06C0: lea     r13, [r8+8]
 * 00000001402E06C4: mov     r10d, 1
 * 00000001402E06CA: mov     r12d, [r13+8]
 * 00000001402E06CE: mov     eax, [r13+0]
 * 00000001402E06D2: cmp     r12d, eax
 * 00000001402E06D5: mov     edx, [r13+4]
 * 00000001402E06D9: cmovbe  r12d, eax
 * 00000001402E06DD: mov     [rbp+2250h+var_2228], edx
 * 00000001402E06E0: add     r12d, edx
 * 00000001402E06E3: test    ecx, ecx
 * 00000001402E06E5: jz      short loc_1402E06FC
 * 00000001402E06E7: lea     eax, [rcx-1]
 * 00000001402E06EA: lea     rax, [rax+rax*4]
 * 00000001402E06EE: cmp     r12d, [r8+rax*8+0Ch]
 * 00000001402E06F3: jb      loc_1402E08FE
 * 00000001402E06F9: mov     ecx, [rbp+2250h+var_21FC]
 * 00000001402E06FC: cmp     r14, [rbp+2250h+var_21C0]
 * 00000001402E0703: jz      loc_1402E08B6
 * 00000001402E0709: mov     ecx, [r14]
 * 00000001402E070C: mov     eax, [r14+4]
 * 00000001402E0710: cmp     ecx, r12d
 * 00000001402E0713: jnb     loc_1402E08A2
 * 00000001402E0719: cmp     eax, edx
 * 00000001402E071B: jbe     loc_1402E08A2
 * 00000001402E0721: cmp     ecx, edx
 * 00000001402E0723: jb      loc_1402E0954
 * 00000001402E0729: cmp     eax, r12d
 * 00000001402E072C: ja      loc_1402E0954
 * 00000001402E0732: mov     eax, [r14+8]
 * 00000001402E0736: mov     ecx, 1
 * 00000001402E073B: test    cl, al
 * 00000001402E073D: jnz     short loc_1402E074B
 * 00000001402E073F: mov     al, [rax+r15]
 * 00000001402E0743: test    al, 20h
 * 00000001402E0745: jz      loc_1402E0891
 * 00000001402E074B: mov     eax, [r13+0]
 * 00000001402E074F: mov     ecx, [r13+4]
 * 00000001402E0753: mov     r15d, [r13+8]
 * 00000001402E0757: cmp     r15d, eax
 * 00000001402E075A: mov     rdx, [rbp+2250h+var_21B0]
 * 00000001402E0761: cmovbe  r15d, eax
 * 00000001402E0765: mov     [rbp+2250h+var_2234], ecx
 * 00000001402E0768: mov     rax, [rbx+418h]
 * 00000001402E076F: add     r15d, ecx
 * 00000001402E0772: mov     rcx, r14
 * 00000001402E0775: call    KeGuardDispatchICall
 * 00000001402E077A: mov     rcx, rax
 * 00000001402E077D: mov     eax, [rbp+2250h+var_2234]
 * 00000001402E0780: cmp     [rcx], eax
 * 00000001402E0782: jb      short loc_1402E078A
 * 00000001402E0784: cmp     [rcx+4], r15d
 * 00000001402E0788: jb      short loc_1402E07EF
 * 00000001402E078A: mov     r10, [rbp+2250h+var_21B0]
 * 00000001402E0791: mov     edx, ecx
 * 00000001402E0793: sub     edx, r10d
 * 00000001402E0796: mov     eax, 80000000h
 * 00000001402E079B: or      edx, eax
 * 00000001402E079D: test    dword ptr [rbx+828h], 200000h
 * 00000001402E07A7: jz      loc_1402E4605
 * 00000001402E07AD: xor     edx, edx
 * 00000001402E07AF: cmp     [rbx+790h], edx
 * 00000001402E07B5: jnz     short loc_1402E07F6
 * 00000001402E07B7: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E07C1: add     rax, rbx
 * 00000001402E07C4: mov     [rbx+798h], rax
 * 00000001402E07CB: lea     eax, [rdx+1]
 * 00000001402E07CE: mov     [rbx+7A0h], rdx
 * 00000001402E07D5: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402E07E0: mov     [rbx+7B0h], r10
 * 00000001402E07E7: mov     [rbx+790h], eax
 * 00000001402E07ED: jmp     short loc_1402E07F6
 * 00000001402E07EF: mov     r10, [rbp+2250h+var_21B0]
 * 00000001402E07F6: mov     r8d, [rcx]
 * 00000001402E07F9: mov     rdx, r10
 * 00000001402E07FC: mov     rax, [rbx+420h]
 * 00000001402E0803: add     r8, r10
 * 00000001402E0806: call    KeGuardDispatchICall
 * 00000001402E080B: mov     rdx, rax
 * 00000001402E080E: mov     eax, [rbp+2250h+var_2234]
 * 00000001402E0811: cmp     [rdx], eax
 * 00000001402E0813: jb      short loc_1402E081B
 * 00000001402E0815: cmp     [rdx+4], r15d
 * 00000001402E0819: jb      short loc_1402E0884
 * 00000001402E081B: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E0822: mov     eax, 80000000h
 * 00000001402E0827: sub     edx, r15d
 * 00000001402E082A: or      edx, eax
 * 00000001402E082C: test    dword ptr [rbx+828h], 200000h
 * 00000001402E0836: jz      loc_1402E45D6
 * 00000001402E083C: mov     edx, [rbp+2250h+var_2228]
 * 00000001402E083F: xor     r11d, r11d
 * 00000001402E0842: cmp     [rbx+790h], r11d
 * 00000001402E0849: jnz     short loc_1402E0891
 * 00000001402E084B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E0855: add     rax, rbx
 * 00000001402E0858: mov     [rbx+798h], rax
 * 00000001402E085F: lea     eax, [r11+1]
 * 00000001402E0863: mov     [rbx+7A0h], r11
 * 00000001402E086A: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402E0875: mov     [rbx+7B0h], r15
 * 00000001402E087C: mov     [rbx+790h], eax
 * 00000001402E0882: jmp     short loc_1402E0891
 * 00000001402E0884: mov     edx, [rbp+2250h+var_2228]
 * 00000001402E0887: xor     r11d, r11d
 * 00000001402E088A: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E0891: add     r14, 0Ch
 * 00000001402E0895: cmp     r14, [rbp+2250h+var_21C0]
 * 00000001402E089C: jnz     loc_1402E0709
 * 00000001402E08A2: mov     ecx, [rbp+2250h+var_21FC]
 * 00000001402E08A5: mov     r10d, 1
 * 00000001402E08AB: mov     r9d, [rbp+2250h+var_2190]
 * 00000001402E08B2: mov     r8, [rbp+2250h+var_2248]
 * 00000001402E08B6: add     ecx, r10d
 * 00000001402E08B9: add     r13, 28h ; '('
 * 00000001402E08BD: mov     [rbp+2250h+var_21FC], ecx
 * 00000001402E08C0: cmp     ecx, r9d
 * 00000001402E08C3: jb      loc_1402E06CA
 * 00000001402E08C9: mov     r10, [rbp+2250h+var_21E8]
 * 00000001402E08CD: mov     r13, [rbp+2250h+var_21C8]
 * 00000001402E08D4: movzx   r12d, [rbp+2250h+var_2160]
 * 00000001402E08DC: cmp     r14, [rbp+2250h+var_21C0]
 * 00000001402E08E3: jz      loc_1402E0969
 * 00000001402E08E9: test    dword ptr [rbx+828h], 200000h
 * 00000001402E08F3: jz      loc_1402E4576
 * 00000001402E08F9: jmp     loc_1402E0633
 * 00000001402E08FE: test    dword ptr [rbx+828h], 200000h
 * 00000001402E0908: jz      loc_1402E45A7
 * 00000001402E090E: cmp     [rbx+790h], r11d
 * 00000001402E0915: jnz     loc_1402E05EB
 * 00000001402E091B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E0925: add     rax, rbx
 * 00000001402E0928: mov     [rbx+798h], rax
 * 00000001402E092F: mov     [rbx+7A0h], r11
 * 00000001402E0936: mov     qword ptr [rbx+7A8h], 10Fh
 * 00000001402E0941: mov     [rbx+7B0h], r15
 * 00000001402E0948: mov     [rbx+790h], r10d
 * 00000001402E094F: jmp     loc_1402E05EB
 * 00000001402E0954: test    dword ptr [rbx+828h], 200000h
 * 00000001402E095E: jz      loc_1402E4634
 * 00000001402E0964: jmp     loc_1402E0633
 * 00000001402E0969: mov     r15d, [rbx+684h]
 * 00000001402E0970: lea     ecx, [r10+6]
 * 00000001402E0974: mov     r8d, [rbx+7BCh]
 * 00000001402E097B: lea     eax, [r9+2]
 * 00000001402E097F: and     ecx, 0FFFFFFF8h
 * 00000001402E0982: lea     eax, [rax+rax*2]
 * 00000001402E0985: lea     eax, [rcx+rax*8]
 * 00000001402E0988: add     eax, r15d
 * 00000001402E098B: cmp     eax, [rbx+8B4h]
 * 00000001402E0991: jbe     loc_1402E0A95
 * 00000001402E0997: mov     edx, eax
 * 00000001402E0999: mov     rcx, rbx
 * 00000001402E099C: call    sub_1402E732C
 * 00000001402E09A1: xor     r11d, r11d
 * 00000001402E09A4: mov     [rbp+2250h+var_2188], rax
 * 00000001402E09AB: mov     r14, rax
 * 00000001402E09AE: test    rax, rax
 * 00000001402E09B1: jz      loc_1402E0A88
 * 00000001402E09B7: mov     ecx, [rbx+828h]
 * 00000001402E09BD: test    cl, 4
 * 00000001402E09C0: jnz     loc_1402E0A73
 * 00000001402E09C6: mov     eax, [rbx+684h]
 * 00000001402E09CC: lea     r9d, [r11+1]
 * 00000001402E09D0: mov     r8, [rbx+668h]
 * 00000001402E09D7: and     ecx, 20000000h
 * 00000001402E09DD: neg     ecx
 * 00000001402E09DF: sbb     edx, edx
 * 00000001402E09E1: and     edx, [rbx+7BCh]
 * 00000001402E09E7: cmp     eax, 8
 * 00000001402E09EA: jb      short loc_1402E0A01
 * 00000001402E09EC: mov     ecx, eax
 * 00000001402E09EE: shr     rcx, 3
 * 00000001402E09F2: mov     [rbx], r11
 * 00000001402E09F5: add     eax, 0FFFFFFF8h
 * 00000001402E09F8: add     rbx, 8
 * 00000001402E09FC: sub     rcx, r9
 * 00000001402E09FF: jnz     short loc_1402E09F2
 * 00000001402E0A01: test    eax, eax
 * 00000001402E0A03: jz      short loc_1402E0A10
 * 00000001402E0A05: mov     [rbx], r11b
 * 00000001402E0A08: add     rbx, r9
 * 00000001402E0A0B: add     eax, 0FFFFFFFFh
 * 00000001402E0A0E: jnz     short loc_1402E0A05
 * 00000001402E0A10: mov     ebx, [r14+7BCh]
 * 00000001402E0A17: mov     eax, 3
 * 00000001402E0A1C: mov     [r14+7BCh], edx
 * 00000001402E0A23: cmp     edx, eax
 * 00000001402E0A25: jz      short loc_1402E0A5A
 * 00000001402E0A27: test    dword ptr [r14+828h], 10000000h
 * 00000001402E0A32: mov     ecx, r11d
 * 00000001402E0A35: cmovz   ecx, edx
 * 00000001402E0A38: test    ecx, ecx
 * 00000001402E0A3A: jz      short loc_1402E0A51
 * 00000001402E0A3C: mov     rax, [r14+228h]
 * 00000001402E0A43: lea     rcx, [r8-8]
 * 00000001402E0A47: mov     rdx, [rcx]
 * 00000001402E0A4A: call    KeGuardDispatchICall
 * 00000001402E0A4F: jmp     short loc_1402E0A69
 * 00000001402E0A51: mov     rax, [r14+100h]
 * 00000001402E0A58: jmp     short loc_1402E0A61
 * 00000001402E0A5A: mov     rax, [r14+368h]
 * 00000001402E0A61: mov     rcx, r8
 * 00000001402E0A64: call    KeGuardDispatchICall
 * 00000001402E0A69: mov     [r14+7BCh], ebx
 * 00000001402E0A70: xor     r11d, r11d
 * 00000001402E0A73: and     dword ptr [r14+828h], 0FFFFFFFBh
 * 00000001402E0A7B: mov     r9d, [rbp+2250h+var_2190]
 * 00000001402E0A82: mov     r10, [rbp+2250h+var_21E8]
 * 00000001402E0A86: jmp     short loc_1402E0AA5
 * 00000001402E0A88: mov     ecx, 0C000009Ah
 * 00000001402E0A8D: xor     r12d, r12d
 * 00000001402E0A90: jmp     loc_1402E144A
 * 00000001402E0A95: mov     r14, rbx
 * 00000001402E0A98: mov     [rbp+2250h+var_2188], rbx
 * 00000001402E0A9F: mov     [rbx+684h], eax
 * 00000001402E0AA5: mov     ebx, 1
 * 00000001402E0AAA: lea     rcx, [r14+r15]
 * 00000001402E0AAE: add     [r14+6ACh], ebx
 * 00000001402E0AB5: mov     rax, rcx
 * 00000001402E0AB8: mov     [rbp+2250h+var_1E68], rcx
 * 00000001402E0ABF: lea     edx, [rbx+2Fh]
 * 00000001402E0AC2: lea     r8d, [rbx+5]
 * 00000001402E0AC6: mov     [rax], r11
 * 00000001402E0AC9: add     edx, 0FFFFFFF8h
 * 00000001402E0ACC: add     rax, 8
 * 00000001402E0AD0: sub     r8, rbx
 * 00000001402E0AD3: jnz     short loc_1402E0AC6
 * 00000001402E0AD5: test    edx, edx
 * 00000001402E0AD7: jz      short loc_1402E0AE4
 * 00000001402E0AD9: mov     [rax], r11b
 * 00000001402E0ADC: add     rax, rbx
 * 00000001402E0ADF: add     edx, 0FFFFFFFFh
 * 00000001402E0AE2: jnz     short loc_1402E0AD9
 * 00000001402E0AE4: mov     rsi, [rbp+2250h+var_21F0]
 * 00000001402E0AE8: mov     dword ptr [rcx], 1Eh
 * 00000001402E0AEE: mov     [rcx+8], rsi
 * 00000001402E0AF2: mov     [rcx+10h], r11d
 * 00000001402E0AF6: mov     rdx, [r14+6B8h]
 * 00000001402E0AFD: mov     rax, rdx
 * 00000001402E0B00: jmp     short loc_1402E0B04
 * 00000001402E0B02: xor     edx, eax
 * 00000001402E0B04: shr     rax, 1Fh
 * 00000001402E0B08: test    rax, rax
 * 00000001402E0B0B: jnz     short loc_1402E0B02
 * 00000001402E0B0D: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E0B14: lea     r11d, [r10-1]
 * 00000001402E0B18: btr     edx, 1Fh
 * 00000001402E0B1C: add     r11, 7
 * 00000001402E0B20: mov     [rcx+14h], edx
 * 00000001402E0B23: and     r11, 0FFFFFFFFFFFFFFF8h
 * 00000001402E0B27: mov     rax, [rbp+2250h+var_1E68]
 * 00000001402E0B2E: mov     rbx, r14
 * 00000001402E0B31: mov     [rbp+2250h+var_20B0], rax
 * 00000001402E0B38: mov     [rbp+2250h+var_2150], rbx
 * 00000001402E0B3F: mov     [rax+18h], r15
 * 00000001402E0B43: mov     ecx, [r13+50h]
 * 00000001402E0B47: mov     r13d, 1
 * 00000001402E0B4D: mov     rax, [rbp+2250h+var_20B0]
 * 00000001402E0B54: mov     [rax+20h], ecx
 * 00000001402E0B57: mov     rax, [rbp+2250h+var_20B0]
 * 00000001402E0B5E: mov     ecx, dword ptr [rbp+2250h+var_2218]
 * 00000001402E0B61: mov     [rax+24h], ecx
 * 00000001402E0B64: mov     rax, [rbp+2250h+var_20B0]
 * 00000001402E0B6B: mov     [rax+28h], r12w
 * 00000001402E0B70: xor     r12d, r12d
 * 00000001402E0B73: mov     rax, [rbp+2250h+var_20B0]
 * 00000001402E0B7A: or      [rax+2Ah], r13w
 * 00000001402E0B7F: mov     rcx, [rbp+2250h+var_20B0]
 * 00000001402E0B86: movzx   eax, word ptr [rcx+28h]
 * 00000001402E0B8A: lea     rdx, [rcx+30h]
 * 00000001402E0B8E: add     r11, rdx
 * 00000001402E0B91: mov     [rbp+2250h+var_2208], rdx
 * 00000001402E0B95: test    r10d, r10d
 * 00000001402E0B98: mov     [rbp+2250h+var_21E0], r11
 * 00000001402E0B9C: lea     rcx, [rax+rax*2]
 * 00000001402E0BA0: lea     r8, [r11+rcx*8]
 * 00000001402E0BA4: lea     ecx, [r13+0Bh]
 * 00000001402E0BA8: mov     [rbp+2250h+var_2198], r8
 * 00000001402E0BAF: cmovz   rcx, [rbp+2250h+var_2230]
 * 00000001402E0BB4: add     rcx, rsi
 * 00000001402E0BB7: mov     [rbp+2250h+var_2250], rcx
 * 00000001402E0BBB: test    r9d, r9d
 * 00000001402E0BBE: jz      short loc_1402E0BF7
 * 00000001402E0BC0: mov     edx, r9d
 * 00000001402E0BC3: lea     rax, [r11+8]
 * 00000001402E0BC7: mov     r9d, 80000000h
 * 00000001402E0BCD: lea     r15d, [r13+1]
 * 00000001402E0BD1: lea     r10d, [r13+0Bh]
 * 00000001402E0BD5: mov     rcx, r15
 * 00000001402E0BD8: mov     [rax-8], r12d
 * 00000001402E0BDC: mov     [rax-4], r12d
 * 00000001402E0BE0: mov     [rax], r9d
 * 00000001402E0BE3: add     rax, r10
 * 00000001402E0BE6: sub     rcx, r13
 * 00000001402E0BE9: jnz     short loc_1402E0BD8
 * 00000001402E0BEB: sub     rdx, r13
 * 00000001402E0BEE: jnz     short loc_1402E0BD5
 * 00000001402E0BF0: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E0BF7: cmp     r11, r8
 * 00000001402E0BFA: jz      loc_1402E143D
 * 00000001402E0C00: mov     r12, [rbp+2250h+var_2248]
 * 00000001402E0C04: xor     r10d, r10d
 * 00000001402E0C07: mov     eax, [r12+24h]
 * 00000001402E0C0C: mov     [rbp+2250h+var_2210], r10d
 * 00000001402E0C10: bt      eax, 19h
 * 00000001402E0C14: jb      loc_1402E0D60
 * 00000001402E0C1A: mov     ecx, [r12]
 * 00000001402E0C1E: cmp     ecx, 54494E49h
 * 00000001402E0C24: jnz     short loc_1402E0C35
 * 00000001402E0C26: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001402E0C2F: jz      loc_1402E0D60
 * 00000001402E0C35: cmp     ecx, 45474150h
 * 00000001402E0C3B: jnz     short loc_1402E0C6D
 * 00000001402E0C3D: movzx   eax, word ptr [r12+4]
 * 00000001402E0C43: mov     edx, 7877h
 * 00000001402E0C48: cmp     ax, dx
 * 00000001402E0C4B: jz      loc_1402E0D60
 * 00000001402E0C51: mov     edx, 7277h
 * 00000001402E0C56: cmp     ax, dx
 * 00000001402E0C59: jz      loc_1402E0D60
 * 00000001402E0C5F: mov     edx, 7777h
 * 00000001402E0C64: cmp     ax, dx
 * 00000001402E0C67: jz      loc_1402E0D60
 * 00000001402E0C6D: cmp     ecx, 41525245h
 * 00000001402E0C73: jnz     short loc_1402E0C86
 * 00000001402E0C75: mov     eax, 4154h
 * 00000001402E0C7A: cmp     [r12+4], ax
 * 00000001402E0C80: jz      loc_1402E0D60
 * 00000001402E0C86: mov     r8, [r14+7C8h]
 * 00000001402E0C8D: mov     esi, 7
 * 00000001402E0C92: mov     r10, [r14+7D0h]
 * 00000001402E0C99: mov     r9, r12
 * 00000001402E0C9C: mov     r11, [r14+7D8h]
 * 00000001402E0CA3: sub     r9, r8
 * 00000001402E0CA6: mov     rbx, [r14+7E0h]
 * 00000001402E0CAD: lea     r13d, [rsi-6]
 * 00000001402E0CB1: movzx   edx, byte ptr [r8+r9]
 * 00000001402E0CB6: movzx   eax, byte ptr [r8]
 * 00000001402E0CBA: add     r8, r13
 * 00000001402E0CBD: cmp     rdx, rax
 * 00000001402E0CC0: jnz     short loc_1402E0CCC
 * 00000001402E0CC2: add     esi, 0FFFFFFFFh
 * 00000001402E0CC5: jnz     short loc_1402E0CB1
 * 00000001402E0CC7: jmp     loc_1402E0D5B
 * 00000001402E0CCC: mov     r8d, 8
 * 00000001402E0CD2: mov     r9, r12
 * 00000001402E0CD5: mov     rcx, [r9]
 * 00000001402E0CD8: add     r9, 8
 * 00000001402E0CDC: mov     rax, [r10]
 * 00000001402E0CDF: add     r10, 8
 * 00000001402E0CE3: cmp     rcx, rax
 * 00000001402E0CE6: jnz     short loc_1402E0D12
 * 00000001402E0CE8: add     r8d, 0FFFFFFF8h
 * 00000001402E0CEC: cmp     r8d, 8
 * 00000001402E0CF0: jnb     short loc_1402E0CD5
 * 00000001402E0CF2: test    r8d, r8d
 * 00000001402E0CF5: jz      short loc_1402E0D5B
 * 00000001402E0CF7: movzx   edx, byte ptr [r9]
 * 00000001402E0CFB: add     r9, r13
 * 00000001402E0CFE: movzx   eax, byte ptr [r10]
 * 00000001402E0D02: add     r10, r13
 * 00000001402E0D05: cmp     rdx, rax
 * 00000001402E0D08: jnz     short loc_1402E0D12
 * 00000001402E0D0A: add     r8d, 0FFFFFFFFh
 * 00000001402E0D0E: jnz     short loc_1402E0CF7
 * 00000001402E0D10: jmp     short loc_1402E0D5B
 * 00000001402E0D12: mov     r8, r12
 * 00000001402E0D15: mov     r9d, 4
 * 00000001402E0D1B: sub     r8, r11
 * 00000001402E0D1E: or      r10d, 0FFFFFFFFh
 * 00000001402E0D22: movzx   edx, byte ptr [r8+r11]
 * 00000001402E0D27: movzx   eax, byte ptr [r11]
 * 00000001402E0D2B: add     r11, r13
 * 00000001402E0D2E: cmp     rdx, rax
 * 00000001402E0D31: jnz     short loc_1402E0D3A
 * 00000001402E0D33: add     r9d, r10d
 * 00000001402E0D36: jnz     short loc_1402E0D22
 * 00000001402E0D38: jmp     short loc_1402E0D5B
 * 00000001402E0D3A: mov     r8, r12
 * 00000001402E0D3D: mov     r9d, 6
 * 00000001402E0D43: sub     r8, rbx
 * 00000001402E0D46: movzx   edx, byte ptr [r8+rbx]
 * 00000001402E0D4B: movzx   eax, byte ptr [rbx]
 * 00000001402E0D4E: add     rbx, r13
 * 00000001402E0D51: cmp     rdx, rax
 * 00000001402E0D54: jnz     short loc_1402E0D6B
 * 00000001402E0D56: add     r9d, r10d
 * 00000001402E0D59: jnz     short loc_1402E0D46
 * 00000001402E0D5B: mov     edx, r13d
 * 00000001402E0D5E: jmp     short loc_1402E0D6E
 * 00000001402E0D60: mov     r13d, 1
 * 00000001402E0D66: mov     edx, r13d
 * 00000001402E0D69: jmp     short loc_1402E0D79
 * 00000001402E0D6B: mov     edx, [rbp+2250h+var_2210]
 * 00000001402E0D6E: mov     rsi, [rbp+2250h+var_21F0]
 * 00000001402E0D72: xor     r10d, r10d
 * 00000001402E0D75: mov     r11, [rbp+2250h+var_21E0]
 * 00000001402E0D79: mov     ecx, [r12+24h]
 * 00000001402E0D7E: test    ecx, ecx
 * 00000001402E0D80: cmovs   edx, r13d
 * 00000001402E0D84: mov     [rbp+2250h+var_2210], edx
 * 00000001402E0D87: test    edx, edx
 * 00000001402E0D89: jz      short loc_1402E0DB2
 * 00000001402E0D8B: cmp     dword ptr [r12], 54494E49h
 * 00000001402E0D93: jnz     short loc_1402E0DB2
 * 00000001402E0D95: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001402E0D9E: jnz     short loc_1402E0DB2
 * 00000001402E0DA0: test    dword ptr [r14+82Ch], 2000h
 * 00000001402E0DAB: cmovnz  edx, r10d
 * 00000001402E0DAF: mov     [rbp+2250h+var_2210], edx
 * 00000001402E0DB2: test    dword ptr [r14+82Ch], 4000h
 * 00000001402E0DBD: jz      short loc_1402E0DDD
 * 00000001402E0DBF: bt      ecx, 1Dh
 * 00000001402E0DC3: jnb     short loc_1402E0DDD
 * 00000001402E0DC5: cmp     r15, [r14+5E0h]
 * 00000001402E0DCC: jz      short loc_1402E0DD7
 * 00000001402E0DCE: cmp     r15, [r14+5E8h]
 * 00000001402E0DD5: jnz     short loc_1402E0DDD
 * 00000001402E0DD7: mov     edx, r13d
 * 00000001402E0DDA: mov     [rbp+2250h+var_2210], edx
 * 00000001402E0DDD: mov     ecx, [r12+10h]
 * 00000001402E0DE2: mov     eax, [r12+8]
 * 00000001402E0DE7: cmp     ecx, eax
 * 00000001402E0DE9: mov     ebx, [r12+0Ch]
 * 00000001402E0DEE: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402E0DF5: cmovbe  ecx, eax
 * 00000001402E0DF8: add     ecx, ebx
 * 00000001402E0DFA: mov     [rbp+2250h+var_2234], ebx
 * 00000001402E0DFD: mov     [rbp+2250h+var_21FC], ecx
 * 00000001402E0E00: cmp     rsi, r8
 * 00000001402E0E03: jz      short loc_1402E0E0E
 * 00000001402E0E05: mov     r12d, [rsi]
 * 00000001402E0E08: mov     r13d, [rsi+4]
 * 00000001402E0E0C: jmp     short loc_1402E0E14
 * 00000001402E0E0E: mov     r12d, r10d
 * 00000001402E0E11: mov     r13d, r10d
 * 00000001402E0E14: mov     [rbp+2250h+var_2228], ebx
 * 00000001402E0E17: cmp     rsi, r8
 * 00000001402E0E1A: jz      loc_1402E0FC5
 * 00000001402E0E20: cmp     r12d, ebx
 * 00000001402E0E23: jbe     loc_1402E0FC8
 * 00000001402E0E29: cmp     r13d, ecx
 * 00000001402E0E2C: ja      loc_1402E0FC5
 * 00000001402E0E32: test    edx, edx
 * 00000001402E0E34: jnz     loc_1402E0FC5
 * 00000001402E0E3A: mov     [r11], ebx
 * 00000001402E0E3D: lea     rcx, [rbp+2250h+var_1F78]
 * 00000001402E0E44: mov     [r11+4], r12d
 * 00000001402E0E48: lea     rdx, [rbp+2250h+var_1DB8]
 * 00000001402E0E4F: mov     eax, [r11]
 * 00000001402E0E52: mov     r9d, r12d
 * 00000001402E0E55: sub     r9d, eax
 * 00000001402E0E58: mov     [rbp+2250h+var_2228], r12d
 * 00000001402E0E5C: mov     esi, r9d
 * 00000001402E0E5F: mov     r8d, r10d
 * 00000001402E0E62: lea     r11, [r15+rax]
 * 00000001402E0E66: add     rsi, r11
 * 00000001402E0E69: mov     r10, [rdx]
 * 00000001402E0E6C: mov     eax, [rcx]
 * 00000001402E0E6E: add     rax, r10
 * 00000001402E0E71: cmp     r11, rax
 * 00000001402E0E74: jnb     short loc_1402E0E7F
 * 00000001402E0E76: cmp     rsi, r10
 * 00000001402E0E79: ja      loc_1402E0FB4
 * 00000001402E0E7F: inc     r8d
 * 00000001402E0E82: add     rdx, 8
 * 00000001402E0E86: add     rcx, 4
 * 00000001402E0E8A: cmp     r8d, 5
 * 00000001402E0E8E: jb      short loc_1402E0E69
 * 00000001402E0E90: add     [r14+6C8h], r9d
 * 00000001402E0E97: mov     r10, r11
 * 00000001402E0E9A: mov     ebx, [r14+6B4h]
 * 00000001402E0EA1: mov     rax, r11
 * 00000001402E0EA4: mov     r15, [r14+6B8h]
 * 00000001402E0EAB: cmp     r11, rsi
 * 00000001402E0EAE: jnb     short loc_1402E0EC0
 * 00000001402E0EB0: mov     ecx, 40h ; '@'
 * 00000001402E0EB5: prefetchnta byte ptr [rax]
 * 00000001402E0EB8: add     rax, rcx
 * 00000001402E0EBB: cmp     rax, rsi
 * 00000001402E0EBE: jb      short loc_1402E0EB5
 * 00000001402E0EC0: mov     esi, r9d
 * 00000001402E0EC3: mov     r8, r15
 * 00000001402E0EC6: shr     esi, 7
 * 00000001402E0EC9: test    esi, esi
 * 00000001402E0ECB: jz      short loc_1402E0F3D
 * 00000001402E0ECD: mov     r14, 7010008004002001h
 * 00000001402E0ED7: mov     edx, 8
 * 00000001402E0EDC: lea     edi, [rdx-7]
 * 00000001402E0EDF: mov     rax, [r10]
 * 00000001402E0EE2: mov     ecx, ebx
 * 00000001402E0EE4: xor     rax, r8
 * 00000001402E0EE7: mov     r8, [r10+8]
 * 00000001402E0EEB: rol     rax, cl
 * 00000001402E0EEE: add     r10, 10h
 * 00000001402E0EF2: xor     r8, rax
 * 00000001402E0EF5: rol     r8, cl
 * 00000001402E0EF8: sub     rdx, rdi
 * 00000001402E0EFB: jnz     short loc_1402E0EDF
 * 00000001402E0EFD: mov     rcx, r10
 * 00000001402E0F00: sub     rcx, r11
 * 00000001402E0F03: xor     rcx, r15
 * 00000001402E0F06: mov     rax, rcx
 * 00000001402E0F09: rol     rax, 11h
 * 00000001402E0F0D: xor     rcx, rax
 * 00000001402E0F10: mov     rax, r14
 * 00000001402E0F13: mul     rcx
 * 00000001402E0F16: xor     eax, edx
 * 00000001402E0F18: mov     [rbp+2250h+var_1B38], rdx
 * 00000001402E0F1F: xor     ebx, eax
 * 00000001402E0F21: mov     rax, rdi
 * 00000001402E0F24: and     ebx, 3Fh
 * 00000001402E0F27: cmovz   ebx, eax
 * 00000001402E0F2A: add     esi, 0FFFFFFFFh
 * 00000001402E0F2D: jnz     short loc_1402E0ED7
 * 00000001402E0F2F: mov     r14, [rbp+2250h+var_2188]
 * 00000001402E0F36: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E0F3D: and     r9d, 7Fh
 * 00000001402E0F41: mov     r11d, 1
 * 00000001402E0F47: cmp     r9d, 8
 * 00000001402E0F4B: jb      short loc_1402E0F69
 * 00000001402E0F4D: mov     edx, r9d
 * 00000001402E0F50: shr     rdx, 3
 * 00000001402E0F54: xor     r8, [r10]
 * 00000001402E0F57: mov     ecx, ebx
 * 00000001402E0F59: rol     r8, cl
 * 00000001402E0F5C: add     r10, 8
 * 00000001402E0F60: add     r9d, 0FFFFFFF8h
 * 00000001402E0F64: sub     rdx, r11
 * 00000001402E0F67: jnz     short loc_1402E0F54
 * 00000001402E0F69: test    r9d, r9d
 * 00000001402E0F6C: jz      short loc_1402E0F83
 * 00000001402E0F6E: movzx   eax, byte ptr [r10]
 * 00000001402E0F72: mov     ecx, ebx
 * 00000001402E0F74: xor     r8, rax
 * 00000001402E0F77: add     r10, r11
 * 00000001402E0F7A: rol     r8, cl
 * 00000001402E0F7D: add     r9d, 0FFFFFFFFh
 * 00000001402E0F81: jnz     short loc_1402E0F6E
 * 00000001402E0F83: mov     rax, r8
 * 00000001402E0F86: shr     rax, 1Fh
 * 00000001402E0F8A: xor     r10d, r10d
 * 00000001402E0F8D: jmp     short loc_1402E0F96
 * 00000001402E0F8F: xor     r8d, eax
 * 00000001402E0F92: shr     rax, 1Fh
 * 00000001402E0F96: test    rax, rax
 * 00000001402E0F99: jnz     short loc_1402E0F8F
 * 00000001402E0F9B: mov     rax, [rbp+2250h+var_21E0]
 * 00000001402E0F9F: btr     r8d, 1Fh
 * 00000001402E0FA4: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E0FAB: mov     ebx, [rbp+2250h+var_2234]
 * 00000001402E0FAE: mov     [rax+8], r8d
 * 00000001402E0FB2: jmp     short loc_1402E0FB7
 * 00000001402E0FB4: xor     r10d, r10d
 * 00000001402E0FB7: mov     rsi, [rbp+2250h+var_21F0]
 * 00000001402E0FBB: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402E0FC2: mov     ecx, [rbp+2250h+var_21FC]
 * 00000001402E0FC5: cmp     r12d, ebx
 * 00000001402E0FC8: jb      loc_1402E123B
 * 00000001402E0FCE: cmp     r13d, ecx
 * 00000001402E0FD1: mov     r13d, [rbp+2250h+var_2210]
 * 00000001402E0FD5: ja      loc_1402E123F
 * 00000001402E0FDB: cmp     rsi, r8
 * 00000001402E0FDE: jz      loc_1402E123F
 * 00000001402E0FE4: mov     r11, [rbp+2250h+var_2250]
 * 00000001402E0FE8: mov     r12d, [r11+4]
 * 00000001402E0FEC: cmp     r12d, ecx
 * 00000001402E0FEF: ja      loc_1402E123F
 * 00000001402E0FF5: mov     rax, [rbp+2250h+var_2208]
 * 00000001402E0FF9: mov     edx, 1
 * 00000001402E0FFE: cmp     r11, r8
 * 00000001402E1001: jz      loc_1402E123F
 * 00000001402E1007: test    r13d, r13d
 * 00000001402E100A: jz      short loc_1402E1014
 * 00000001402E100C: mov     r8b, 80h
 * 00000001402E100F: jmp     loc_1402E11FE
 * 00000001402E1014: mov     edx, [r11]
 * 00000001402E1017: mov     ecx, [rsi+4]
 * 00000001402E101A: mov     [rbp+2250h+var_2228], edx
 * 00000001402E101D: cmp     edx, ecx
 * 00000001402E101F: jnb     short loc_1402E1074
 * 00000001402E1021: test    dword ptr [r14+828h], 200000h
 * 00000001402E102C: jz      loc_1402E4665
 * 00000001402E1032: cmp     [r14+790h], r10d
 * 00000001402E1039: jnz     short loc_1402E1074
 * 00000001402E103B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E1045: add     rax, r14
 * 00000001402E1048: mov     [r14+798h], rax
 * 00000001402E104F: mov     eax, 1
 * 00000001402E1054: mov     [r14+7A0h], r10
 * 00000001402E105B: mov     qword ptr [r14+7A8h], 10Fh
 * 00000001402E1066: mov     [r14+7B0h], r15
 * 00000001402E106D: mov     [r14+790h], eax
 * 00000001402E1074: mov     r9d, edx
 * 00000001402E1077: lea     rbx, [r15+rcx]
 * 00000001402E107B: sub     r9d, ecx
 * 00000001402E107E: lea     rdx, [rbp+2250h+var_1DB8]
 * 00000001402E1085: mov     esi, r9d
 * 00000001402E1088: lea     rcx, [rbp+2250h+var_1F78]
 * 00000001402E108F: add     rsi, rbx
 * 00000001402E1092: mov     r8d, r10d
 * 00000001402E1095: mov     r10, [rdx]
 * 00000001402E1098: mov     eax, [rcx]
 * 00000001402E109A: add     rax, r10
 * 00000001402E109D: cmp     rbx, rax
 * 00000001402E10A0: jnb     short loc_1402E10AB
 * 00000001402E10A2: cmp     rsi, r10
 * 00000001402E10A5: ja      loc_1402E11E8
 * 00000001402E10AB: mov     eax, 4
 * 00000001402E10B0: inc     r8d
 * 00000001402E10B3: add     rcx, rax
 * 00000001402E10B6: add     rdx, 8
 * 00000001402E10BA: cmp     r8d, 5
 * 00000001402E10BE: jb      short loc_1402E1095
 * 00000001402E10C0: cmp     r9d, eax
 * 00000001402E10C3: jb      loc_1402E11E8
 * 00000001402E10C9: add     [r14+6C8h], r9d
 * 00000001402E10D0: mov     r10, rbx
 * 00000001402E10D3: mov     r11d, [r14+6B4h]
 * 00000001402E10DA: mov     rax, rbx
 * 00000001402E10DD: mov     r15, [r14+6B8h]
 * 00000001402E10E4: cmp     rbx, rsi
 * 00000001402E10E7: jnb     short loc_1402E10F9
 * 00000001402E10E9: mov     ecx, 40h ; '@'
 * 00000001402E10EE: prefetchnta byte ptr [rax]
 * 00000001402E10F1: add     rax, rcx
 * 00000001402E10F4: cmp     rax, rsi
 * 00000001402E10F7: jb      short loc_1402E10EE
 * 00000001402E10F9: mov     esi, r9d
 * 00000001402E10FC: mov     r8, r15
 * 00000001402E10FF: shr     esi, 7
 * 00000001402E1102: test    esi, esi
 * 00000001402E1104: jz      short loc_1402E1178
 * 00000001402E1106: mov     rdi, 7010008004002001h
 * 00000001402E1110: mov     edx, 8
 * 00000001402E1115: lea     r13d, [rdx-7]
 * 00000001402E1119: mov     rax, [r10]
 * 00000001402E111C: mov     ecx, r11d
 * 00000001402E111F: xor     rax, r8
 * 00000001402E1122: mov     r8, [r10+8]
 * 00000001402E1126: rol     rax, cl
 * 00000001402E1129: add     r10, 10h
 * 00000001402E112D: xor     r8, rax
 * 00000001402E1130: rol     r8, cl
 * 00000001402E1133: sub     rdx, r13
 * 00000001402E1136: jnz     short loc_1402E1119
 * 00000001402E1138: mov     rcx, r10
 * 00000001402E113B: sub     rcx, rbx
 * 00000001402E113E: xor     rcx, r15
 * 00000001402E1141: mov     rax, rcx
 * 00000001402E1144: rol     rax, 11h
 * 00000001402E1148: xor     rcx, rax
 * 00000001402E114B: mov     rax, rdi
 * 00000001402E114E: mul     rcx
 * 00000001402E1151: xor     eax, edx
 * 00000001402E1153: mov     [rbp+2250h+var_1B30], rdx
 * 00000001402E115A: xor     r11d, eax
 * 00000001402E115D: mov     rax, r13
 * 00000001402E1160: and     r11d, 3Fh
 * 00000001402E1164: cmovz   r11d, eax
 * 00000001402E1168: add     esi, 0FFFFFFFFh
 * 00000001402E116B: jnz     short loc_1402E1110
 * 00000001402E116D: mov     r13d, [rbp+2250h+var_2210]
 * 00000001402E1171: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E1178: and     r9d, 7Fh
 * 00000001402E117C: mov     ebx, 1
 * 00000001402E1181: cmp     r9d, 8
 * 00000001402E1185: jb      short loc_1402E11A4
 * 00000001402E1187: mov     edx, r9d
 * 00000001402E118A: shr     rdx, 3
 * 00000001402E118E: xor     r8, [r10]
 * 00000001402E1191: mov     ecx, r11d
 * 00000001402E1194: rol     r8, cl
 * 00000001402E1197: add     r10, 8
 * 00000001402E119B: add     r9d, 0FFFFFFF8h
 * 00000001402E119F: sub     rdx, rbx
 * 00000001402E11A2: jnz     short loc_1402E118E
 * 00000001402E11A4: test    r9d, r9d
 * 00000001402E11A7: jz      short loc_1402E11BF
 * 00000001402E11A9: movzx   eax, byte ptr [r10]
 * 00000001402E11AD: mov     ecx, r11d
 * 00000001402E11B0: xor     r8, rax
 * 00000001402E11B3: add     r10, rbx
 * 00000001402E11B6: rol     r8, cl
 * 00000001402E11B9: add     r9d, 0FFFFFFFFh
 * 00000001402E11BD: jnz     short loc_1402E11A9
 * 00000001402E11BF: mov     rax, r8
 * 00000001402E11C2: shr     rax, 7
 * 00000001402E11C6: xor     r10d, r10d
 * 00000001402E11C9: jmp     short loc_1402E11D2
 * 00000001402E11CB: xor     r8b, al
 * 00000001402E11CE: shr     rax, 7
 * 00000001402E11D2: test    rax, rax
 * 00000001402E11D5: jnz     short loc_1402E11CB
 * 00000001402E11D7: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E11DE: and     r8b, 7Fh
 * 00000001402E11E2: mov     r11, [rbp+2250h+var_2250]
 * 00000001402E11E6: jmp     short loc_1402E11EE
 * 00000001402E11E8: xor     r10d, r10d
 * 00000001402E11EB: mov     r8b, 80h
 * 00000001402E11EE: mov     rsi, [rbp+2250h+var_21F0]
 * 00000001402E11F2: mov     edx, 1
 * 00000001402E11F7: mov     ecx, [rbp+2250h+var_21FC]
 * 00000001402E11FA: mov     rax, [rbp+2250h+var_2208]
 * 00000001402E11FE: mov     [rax], r8b
 * 00000001402E1201: mov     r8d, 0Ch
 * 00000001402E1207: mov     rax, [rbp+2250h+var_2208]
 * 00000001402E120B: add     rsi, r8
 * 00000001402E120E: add     r11, r8
 * 00000001402E1211: mov     [rbp+2250h+var_21F0], rsi
 * 00000001402E1215: mov     r8, [rbp+2250h+var_21C0]
 * 00000001402E121C: add     rax, rdx
 * 00000001402E121F: mov     [rbp+2250h+var_2208], rax
 * 00000001402E1223: mov     [rbp+2250h+var_2250], r11
 * 00000001402E1227: cmp     r11, r8
 * 00000001402E122A: jz      short loc_1402E1230
 * 00000001402E122C: mov     r12d, [r11+4]
 * 00000001402E1230: cmp     r12d, ecx
 * 00000001402E1233: jbe     loc_1402E0FFE
 * 00000001402E1239: jmp     short loc_1402E123F
 * 00000001402E123B: mov     r13d, [rbp+2250h+var_2210]
 * 00000001402E123F: mov     r11, [rbp+2250h+var_21E0]
 * 00000001402E1243: test    r13d, r13d
 * 00000001402E1246: jnz     loc_1402E13BE
 * 00000001402E124C: mov     eax, [rbp+2250h+var_2228]
 * 00000001402E124F: cmp     eax, ecx
 * 00000001402E1251: jz      loc_1402E13BE
 * 00000001402E1257: mov     [r11+0Ch], eax
 * 00000001402E125B: lea     rdx, [rbp+2250h+var_1DB8]
 * 00000001402E1262: mov     [r11+10h], ecx
 * 00000001402E1266: mov     r9d, ecx
 * 00000001402E1269: mov     eax, [r11+0Ch]
 * 00000001402E126D: lea     rcx, [rbp+2250h+var_1F78]
 * 00000001402E1274: sub     r9d, eax
 * 00000001402E1277: mov     r8d, r10d
 * 00000001402E127A: mov     esi, r9d
 * 00000001402E127D: mov     r13d, 1
 * 00000001402E1283: lea     rbx, [r15+rax]
 * 00000001402E1287: add     rsi, rbx
 * 00000001402E128A: mov     r10, [rdx]
 * 00000001402E128D: mov     eax, [rcx]
 * 00000001402E128F: add     rax, r10
 * 00000001402E1292: cmp     rbx, rax
 * 00000001402E1295: jnb     short loc_1402E12A0
 * 00000001402E1297: cmp     rsi, r10
 * 00000001402E129A: ja      loc_1402E13B7
 * 00000001402E12A0: add     r8d, r13d
 * 00000001402E12A3: add     rdx, 8
 * 00000001402E12A7: add     rcx, 4
 * 00000001402E12AB: cmp     r8d, 5
 * 00000001402E12AF: jb      short loc_1402E128A
 * 00000001402E12B1: add     [r14+6C8h], r9d
 * 00000001402E12B8: mov     r10, rbx
 * 00000001402E12BB: mov     r11d, [r14+6B4h]
 * 00000001402E12C2: mov     rax, rbx
 * 00000001402E12C5: mov     r15, [r14+6B8h]
 * 00000001402E12CC: cmp     rbx, rsi
 * 00000001402E12CF: jnb     short loc_1402E12E1
 * 00000001402E12D1: mov     ecx, 40h ; '@'
 * 00000001402E12D6: prefetchnta byte ptr [rax]
 * 00000001402E12D9: add     rax, rcx
 * 00000001402E12DC: cmp     rax, rsi
 * 00000001402E12DF: jb      short loc_1402E12D6
 * 00000001402E12E1: mov     esi, r9d
 * 00000001402E12E4: mov     r8, r15
 * 00000001402E12E7: shr     esi, 7
 * 00000001402E12EA: test    esi, esi
 * 00000001402E12EC: jz      short loc_1402E134E
 * 00000001402E12EE: mov     r12, 7010008004002001h
 * 00000001402E12F8: mov     edx, 8
 * 00000001402E12FD: mov     rax, [r10]
 * 00000001402E1300: mov     ecx, r11d
 * 00000001402E1303: xor     rax, r8
 * 00000001402E1306: mov     r8, [r10+8]
 * 00000001402E130A: rol     rax, cl
 * 00000001402E130D: add     r10, 10h
 * 00000001402E1311: xor     r8, rax
 * 00000001402E1314: rol     r8, cl
 * 00000001402E1317: sub     rdx, r13
 * 00000001402E131A: jnz     short loc_1402E12FD
 * 00000001402E131C: mov     rcx, r10
 * 00000001402E131F: sub     rcx, rbx
 * 00000001402E1322: xor     rcx, r15
 * 00000001402E1325: mov     rax, rcx
 * 00000001402E1328: rol     rax, 11h
 * 00000001402E132C: xor     rcx, rax
 * 00000001402E132F: mov     rax, r12
 * 00000001402E1332: mul     rcx
 * 00000001402E1335: xor     eax, edx
 * 00000001402E1337: mov     [rbp+2250h+var_1B28], rdx
 * 00000001402E133E: xor     r11d, eax
 * 00000001402E1341: and     r11d, 3Fh
 * 00000001402E1345: cmovz   r11d, r13d
 * 00000001402E1349: add     esi, 0FFFFFFFFh
 * 00000001402E134C: jnz     short loc_1402E12F8
 * 00000001402E134E: and     r9d, 7Fh
 * 00000001402E1352: cmp     r9d, 8
 * 00000001402E1356: jb      short loc_1402E1375
 * 00000001402E1358: mov     edx, r9d
 * 00000001402E135B: shr     rdx, 3
 * 00000001402E135F: xor     r8, [r10]
 * 00000001402E1362: mov     ecx, r11d
 * 00000001402E1365: rol     r8, cl
 * 00000001402E1368: add     r10, 8
 * 00000001402E136C: add     r9d, 0FFFFFFF8h
 * 00000001402E1370: sub     rdx, r13
 * 00000001402E1373: jnz     short loc_1402E135F
 * 00000001402E1375: test    r9d, r9d
 * 00000001402E1378: jz      short loc_1402E1390
 * 00000001402E137A: movzx   eax, byte ptr [r10]
 * 00000001402E137E: mov     ecx, r11d
 * 00000001402E1381: xor     r8, rax
 * 00000001402E1384: add     r10, r13
 * 00000001402E1387: rol     r8, cl
 * 00000001402E138A: add     r9d, 0FFFFFFFFh
 * 00000001402E138E: jnz     short loc_1402E137A
 * 00000001402E1390: mov     rax, r8
 * 00000001402E1393: shr     rax, 1Fh
 * 00000001402E1397: xor     r10d, r10d
 * 00000001402E139A: jmp     short loc_1402E13A3
 * 00000001402E139C: xor     r8d, eax
 * 00000001402E139F: shr     rax, 1Fh
 * 00000001402E13A3: test    rax, rax
 * 00000001402E13A6: jnz     short loc_1402E139C
 * 00000001402E13A8: mov     r11, [rbp+2250h+var_21E0]
 * 00000001402E13AC: btr     r8d, 1Fh
 * 00000001402E13B1: mov     [r11+14h], r8d
 * 00000001402E13B5: jmp     short loc_1402E13BA
 * 00000001402E13B7: xor     r10d, r10d
 * 00000001402E13BA: mov     rsi, [rbp+2250h+var_21F0]
 * 00000001402E13BE: mov     rdx, [rbp+2250h+var_21C0]
 * 00000001402E13C5: cmp     rsi, rdx
 * 00000001402E13C8: jz      short loc_1402E140A
 * 00000001402E13CA: mov     eax, [rsi]
 * 00000001402E13CC: mov     ecx, [rsi+4]
 * 00000001402E13CF: cmp     eax, [rbp+2250h+var_2234]
 * 00000001402E13D2: jb      short loc_1402E140A
 * 00000001402E13D4: cmp     ecx, [rbp+2250h+var_21FC]
 * 00000001402E13D7: ja      short loc_1402E140A
 * 00000001402E13D9: mov     rcx, [rbp+2250h+var_2250]
 * 00000001402E13DD: cmp     rcx, rdx
 * 00000001402E13E0: jz      short loc_1402E13FE
 * 00000001402E13E2: mov     rax, [rbp+2250h+var_2208]
 * 00000001402E13E6: mov     byte ptr [rax], 80h
 * 00000001402E13E9: inc     rax
 * 00000001402E13EC: mov     [rbp+2250h+var_2208], rax
 * 00000001402E13F0: mov     eax, 0Ch
 * 00000001402E13F5: add     rcx, rax
 * 00000001402E13F8: mov     [rbp+2250h+var_2250], rcx
 * 00000001402E13FC: jmp     short loc_1402E1403
 * 00000001402E13FE: mov     eax, 0Ch
 * 00000001402E1403: add     rsi, rax
 * 00000001402E1406: mov     [rbp+2250h+var_21F0], rsi
 * 00000001402E140A: mov     r12, [rbp+2250h+var_2248]
 * 00000001402E140E: add     r11, 18h
 * 00000001402E1412: add     r12, 28h ; '('
 * 00000001402E1416: mov     [rbp+2250h+var_21E0], r11
 * 00000001402E141A: mov     [rbp+2250h+var_2248], r12
 * 00000001402E141E: cmp     r11, [rbp+2250h+var_2198]
 * 00000001402E1425: jz      short loc_1402E1433
 * 00000001402E1427: mov     r15, [rbp+2250h+var_21B0]
 * 00000001402E142E: jmp     loc_1402E0C07
 * 00000001402E1433: mov     rbx, [rbp+2250h+var_2150]
 * 00000001402E143A: xor     r12d, r12d
 * 00000001402E143D: mov     rsi, rbx
 * 00000001402E1440: mov     [rbp+2250h+var_2148], rbx
 * 00000001402E1447: mov     ecx, r12d
 * 00000001402E144A: mov     [rbp+2250h+var_2210], ecx
 * 00000001402E144D: mov     r13d, 80000000h
 * 00000001402E1453: mov     rbx, rsi
 * 00000001402E1456: lea     eax, [rcx+r13]
 * 00000001402E145A: test    r13d, eax
 * 00000001402E145D: jnz     short loc_1402E1478
 * 00000001402E145F: cmp     ecx, 0C000010Eh
 * 00000001402E1465: jz      short loc_1402E1478
 * 00000001402E1467: mov     ecx, [rbp+2250h+var_2210]
 * 00000001402E146A: xor     r11d, r11d
 * 00000001402E146D: jmp     loc_1402E1513
 * 00000001402E1472: mov     r13d, 80000000h
 * 00000001402E1478: mov     rax, [rsi+1F8h]
 * 00000001402E147F: mov     rcx, [rbp+2250h+var_2040]
 * 00000001402E1486: call    KeGuardDispatchICall
 * 00000001402E148B: mov     ecx, [rax+94h]
 * 00000001402E1491: cmp     ecx, 14h
 * 00000001402E1494: jb      loc_1402DF8D1
 * 00000001402E149A: mov     eax, [rax+90h]
 * 00000001402E14A0: lea     r15, [rax+rcx]
 * 00000001402E14A4: mov     rcx, [rbp+2250h+var_2040]
 * 00000001402E14AB: add     r15, rcx
 * 00000001402E14AE: lea     r14, [rax+rcx]
 * 00000001402E14B2: cmp     r14, r15
 * 00000001402E14B5: jz      short loc_1402E150D
 * 00000001402E14B7: cmp     [r14+0Ch], r12d
 * 00000001402E14BB: jz      short loc_1402E150D
 * 00000001402E14BD: mov     eax, [r14+10h]
 * 00000001402E14C1: test    eax, eax
 * 00000001402E14C3: jz      short loc_1402E150D
 * 00000001402E14C5: mov     rdx, [rax+rcx]
 * 00000001402E14C9: test    rdx, rdx
 * 00000001402E14CC: jz      short loc_1402E1507
 * 00000001402E14CE: mov     r8d, 8000000Fh
 * 00000001402E14D4: lea     rcx, [rbp+2250h+var_2148]
 * 00000001402E14DB: call    sub_1402E495C
 * 00000001402E14E0: mov     rsi, [rbp+2250h+var_2148]
 * 00000001402E14E7: mov     ecx, eax
 * 00000001402E14E9: add     eax, r13d
 * 00000001402E14EC: mov     rbx, rsi
 * 00000001402E14EF: test    r13d, eax
 * 00000001402E14F2: jnz     short loc_1402E1500
 * 00000001402E14F4: cmp     ecx, 0C000010Eh
 * 00000001402E14FA: jnz     loc_1402E146A
 * 00000001402E1500: mov     rcx, [rbp+2250h+var_2040]
 * 00000001402E1507: add     r14, 14h
 * 00000001402E150B: jmp     short loc_1402E14B2
 * 00000001402E150D: xor     r11d, r11d
 * 00000001402E1510: mov     ecx, r11d
 * 00000001402E1513: lea     eax, [rcx+r13]
 * 00000001402E1517: test    r13d, eax
 * 00000001402E151A: jnz     short loc_1402E1528
 * 00000001402E151C: cmp     ecx, 0C000010Eh
 * 00000001402E1522: jnz     loc_1402E16C3
 * 00000001402E1528: mov     rax, [rbx+568h]
 * 00000001402E152F: lea     r14, [rbx+810h]
 * 00000001402E1536: lea     r8, [rbp+2250h+var_1E34]
 * 00000001402E153D: mov     rdx, r14
 * 00000001402E1540: mov     rcx, [rax+20h]
 * 00000001402E1544: mov     rax, [rbx+200h]
 * 00000001402E154B: call    KeGuardDispatchICall
 * 00000001402E1550: xor     r11d, r11d
 * 00000001402E1553: test    rax, rax
 * 00000001402E1556: jz      loc_1402E1C9C
 * 00000001402E155C: mov     rax, [rbx+1F8h]
 * 00000001402E1563: mov     rcx, [r14]
 * 00000001402E1566: call    KeGuardDispatchICall
 * 00000001402E156B: xor     r11d, r11d
 * 00000001402E156E: test    rax, rax
 * 00000001402E1571: jz      loc_1402E1C9C
 * 00000001402E1577: mov     eax, [rax+50h]
 * 00000001402E157A: mov     [rbx+80Ch], eax
 * 00000001402E1580: mov     dword ptr [rbx+7ECh], 8
 * 00000001402E158A: mov     r15, [rbx+5F8h]
 * 00000001402E1591: test    r15, r15
 * 00000001402E1594: jz      loc_1402E182A
 * 00000001402E159A: cmp     [r15], r11
 * 00000001402E159D: jz      loc_1402E182A
 * 00000001402E15A3: mov     r9d, [rbx+6D8h]
 * 00000001402E15AA: mov     r12d, 20h ; ' '
 * 00000001402E15B0: mov     r13d, [rbx+684h]
 * 00000001402E15B7: cmp     r9d, 7
 * 00000001402E15BB: mov     r8d, [rbx+7BCh]
 * 00000001402E15C2: cmovnz  r12d, r11d
 * 00000001402E15C6: mov     [rbp+2250h+var_21F8], r9d
 * 00000001402E15CA: lea     eax, [r13+30h]
 * 00000001402E15CE: cmp     eax, [rbx+8B4h]
 * 00000001402E15D4: jbe     loc_1402E1754
 * 00000001402E15DA: mov     edx, eax
 * 00000001402E15DC: mov     rcx, rbx
 * 00000001402E15DF: call    sub_1402E732C
 * 00000001402E15E4: xor     r11d, r11d
 * 00000001402E15E7: mov     r14, rax
 * 00000001402E15EA: test    rax, rax
 * 00000001402E15ED: jz      loc_1402E16C0
 * 00000001402E15F3: mov     ecx, [rbx+828h]
 * 00000001402E15F9: test    cl, 4
 * 00000001402E15FC: jnz     loc_1402E16AF
 * 00000001402E1602: mov     eax, [rbx+684h]
 * 00000001402E1608: lea     r9d, [r11+1]
 * 00000001402E160C: mov     r8, [rbx+668h]
 * 00000001402E1613: and     ecx, 20000000h
 * 00000001402E1619: neg     ecx
 * 00000001402E161B: sbb     edx, edx
 * 00000001402E161D: and     edx, [rbx+7BCh]
 * 00000001402E1623: cmp     eax, 8
 * 00000001402E1626: jb      short loc_1402E163D
 * 00000001402E1628: mov     ecx, eax
 * 00000001402E162A: shr     rcx, 3
 * 00000001402E162E: mov     [rbx], r11
 * 00000001402E1631: add     eax, 0FFFFFFF8h
 * 00000001402E1634: add     rbx, 8
 * 00000001402E1638: sub     rcx, r9
 * 00000001402E163B: jnz     short loc_1402E162E
 * 00000001402E163D: test    eax, eax
 * 00000001402E163F: jz      short loc_1402E164C
 * 00000001402E1641: mov     [rbx], r11b
 * 00000001402E1644: add     rbx, r9
 * 00000001402E1647: add     eax, 0FFFFFFFFh
 * 00000001402E164A: jnz     short loc_1402E1641
 * 00000001402E164C: mov     ebx, [r14+7BCh]
 * 00000001402E1653: mov     eax, 3
 * 00000001402E1658: mov     [r14+7BCh], edx
 * 00000001402E165F: cmp     edx, eax
 * 00000001402E1661: jz      short loc_1402E1696
 * 00000001402E1663: test    dword ptr [r14+828h], 10000000h
 * 00000001402E166E: mov     ecx, r11d
 * 00000001402E1671: cmovz   ecx, edx
 * 00000001402E1674: test    ecx, ecx
 * 00000001402E1676: jz      short loc_1402E168D
 * 00000001402E1678: mov     rax, [r14+228h]
 * 00000001402E167F: lea     rcx, [r8-8]
 * 00000001402E1683: mov     rdx, [rcx]
 * 00000001402E1686: call    KeGuardDispatchICall
 * 00000001402E168B: jmp     short loc_1402E16A5
 * 00000001402E168D: mov     rax, [r14+100h]
 * 00000001402E1694: jmp     short loc_1402E169D
 * 00000001402E1696: mov     rax, [r14+368h]
 * 00000001402E169D: mov     rcx, r8
 * 00000001402E16A0: call    KeGuardDispatchICall
 * 00000001402E16A5: mov     [r14+7BCh], ebx
 * 00000001402E16AC: xor     r11d, r11d
 * 00000001402E16AF: and     dword ptr [r14+828h], 0FFFFFFFBh
 * 00000001402E16B7: mov     r9d, [rbp+2250h+var_21F8]
 * 00000001402E16BB: jmp     loc_1402E175D
 * 00000001402E16C0: mov     rbx, rsi
 * 00000001402E16C3: mov     r13d, 1
 * 00000001402E16C9: mov     ecx, 8000h
 * 00000001402E16CE: test    [rbx+828h], ecx
 * 00000001402E16D4: jnz     short loc_1402E16E3
 * 00000001402E16D6: cmp     [rbx+790h], r11d
 * 00000001402E16DD: jnz     loc_1402E1F33
 * 00000001402E16E3: mov     r14, [rbx+818h]
 * 00000001402E16EA: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402E16F1: mov     [rbx+818h], r11
 * 00000001402E16F8: mov     rcx, r14
 * 00000001402E16FB: mov     rax, [rbx+298h]
 * 00000001402E1702: call    KeGuardDispatchICall
 * 00000001402E1707: mov     eax, [rbx+828h]
 * 00000001402E170D: test    r13b, al
 * 00000001402E1710: jz      loc_1402E1CEC
 * 00000001402E1716: and     eax, 0FFFFFFFEh
 * 00000001402E1719: mov     rcx, r14
 * 00000001402E171C: mov     [rbx+828h], eax
 * 00000001402E1722: mov     rax, [rbx+280h]
 * 00000001402E1729: call    KeGuardDispatchICall
 * 00000001402E172E: mov     r14, rax
 * 00000001402E1731: test    rax, rax
 * 00000001402E1734: jz      loc_1402E1CE5
 * 00000001402E173A: mov     rax, [rbx+2A0h]
 * 00000001402E1741: mov     rcx, r14
 * 00000001402E1744: call    KeGuardDispatchICall
 * 00000001402E1749: mov     [rbx+808h], eax
 * 00000001402E174F: jmp     loc_1402E1CEC
 * 00000001402E1754: mov     r14, rbx
 * 00000001402E1757: mov     [rbx+684h], eax
 * 00000001402E175D: mov     r8d, 1
 * 00000001402E1763: lea     rbx, [r14+r13]
 * 00000001402E1767: add     [r14+6ACh], r8d
 * 00000001402E176E: mov     rax, rbx
 * 00000001402E1771: mov     [rbp+2250h+var_1B20], rbx
 * 00000001402E1778: lea     ecx, [r8+2Fh]
 * 00000001402E177C: lea     edx, [rcx-2Ah]
 * 00000001402E177F: mov     [rax], r11
 * 00000001402E1782: add     ecx, 0FFFFFFF8h
 * 00000001402E1785: add     rax, 8
 * 00000001402E1789: sub     rdx, r8
 * 00000001402E178C: jnz     short loc_1402E177F
 * 00000001402E178E: test    ecx, ecx
 * 00000001402E1790: jz      short loc_1402E179D
 * 00000001402E1792: mov     [rax], r11b
 * 00000001402E1795: add     rax, r8
 * 00000001402E1798: add     ecx, 0FFFFFFFFh
 * 00000001402E179B: jnz     short loc_1402E1792
 * 00000001402E179D: mov     [rbx], r12d
 * 00000001402E17A0: mov     [rbx+8], r15
 * 00000001402E17A4: cmp     r9d, 7
 * 00000001402E17A8: jnz     short loc_1402E17C2
 * 00000001402E17AA: lea     r9, [rbx+18h]
 * 00000001402E17AE: mov     r8d, 8
 * 00000001402E17B4: mov     rdx, r15
 * 00000001402E17B7: mov     rcx, r14
 * 00000001402E17BA: call    sub_14019FEBC
 * 00000001402E17BF: xor     r11d, r11d
 * 00000001402E17C2: mov     dword ptr [rbx+10h], 8
 * 00000001402E17C9: lea     rdx, [r15+8]
 * 00000001402E17CD: add     dword ptr [r14+6C8h], 8
 * 00000001402E17D5: mov     rax, r15
 * 00000001402E17D8: mov     ecx, [r14+6B4h]
 * 00000001402E17DF: mov     r8, [r14+6B8h]
 * 00000001402E17E6: cmp     r15, rdx
 * 00000001402E17E9: jnb     short loc_1402E17FC
 * 00000001402E17EB: mov     r9d, 40h ; '@'
 * 00000001402E17F1: prefetchnta byte ptr [rax]
 * 00000001402E17F4: add     rax, r9
 * 00000001402E17F7: cmp     rax, rdx
 * 00000001402E17FA: jb      short loc_1402E17F1
 * 00000001402E17FC: mov     rax, [r15]
 * 00000001402E17FF: xor     rax, r8
 * 00000001402E1802: rol     rax, cl
 * 00000001402E1805: mov     rcx, rax
 * 00000001402E1808: jmp     short loc_1402E180C
 * 00000001402E180A: xor     eax, ecx
 * 00000001402E180C: shr     rcx, 1Fh
 * 00000001402E1810: test    rcx, rcx
 * 00000001402E1813: jnz     short loc_1402E180A
 * 00000001402E1815: btr     eax, 1Fh
 * 00000001402E1819: mov     rsi, r14
 * 00000001402E181C: mov     [rbx+14h], eax
 * 00000001402E181F: mov     rbx, r14
 * 00000001402E1822: add     dword ptr [r14+6C8h], 8
 * 00000001402E182A: mov     dword ptr [rbx+7ECh], 9
 * 00000001402E1834: mov     r15, [rbx+5F8h]
 * 00000001402E183B: test    r15, r15
 * 00000001402E183E: jz      loc_1402E1C83
 * 00000001402E1844: mov     r15, [r15]
 * 00000001402E1847: test    r15, r15
 * 00000001402E184A: jz      loc_1402E1C83
 * 00000001402E1850: lock or [rsp+11A0h+var_11A0], r11d
 * 00000001402E1855: mov     r12d, [r15+684h]
 * 00000001402E185C: mov     r9, r15
 * 00000001402E185F: mov     r10d, [r15+6B4h]
 * 00000001402E1866: mov     rax, r15
 * 00000001402E1869: mov     r14, [r15+6B8h]
 * 00000001402E1870: mov     [rbp+2250h+var_21F8], r12d
 * 00000001402E1874: lea     rcx, [r15+r12]
 * 00000001402E1878: cmp     r15, rcx
 * 00000001402E187B: jnb     short loc_1402E188D
 * 00000001402E187D: mov     edx, 40h ; '@'
 * 00000001402E1882: prefetchnta byte ptr [rax]
 * 00000001402E1885: add     rax, rdx
 * 00000001402E1888: cmp     rax, rcx
 * 00000001402E188B: jb      short loc_1402E1882
 * 00000001402E188D: mov     r11d, r12d
 * 00000001402E1890: mov     r8, r14
 * 00000001402E1893: shr     r11d, 7
 * 00000001402E1897: mov     r13d, 1
 * 00000001402E189D: test    r11d, r11d
 * 00000001402E18A0: jz      short loc_1402E1908
 * 00000001402E18A2: mov     r12, 7010008004002001h
 * 00000001402E18AC: mov     eax, 8
 * 00000001402E18B1: xor     r8, [r9]
 * 00000001402E18B4: mov     ecx, r10d
 * 00000001402E18B7: rol     r8, cl
 * 00000001402E18BA: xor     r8, [r9+8]
 * 00000001402E18BE: add     r9, 10h
 * 00000001402E18C2: rol     r8, cl
 * 00000001402E18C5: sub     rax, r13
 * 00000001402E18C8: jnz     short loc_1402E18B1
 * 00000001402E18CA: mov     rcx, r9
 * 00000001402E18CD: sub     rcx, r15
 * 00000001402E18D0: xor     rcx, r14
 * 00000001402E18D3: mov     rax, rcx
 * 00000001402E18D6: rol     rax, 11h
 * 00000001402E18DA: xor     rcx, rax
 * 00000001402E18DD: mov     rax, r12
 * 00000001402E18E0: mul     rcx
 * 00000001402E18E3: xor     eax, edx
 * 00000001402E18E5: mov     [rbp+2250h+var_1B18], rdx
 * 00000001402E18EC: xor     r10d, eax
 * 00000001402E18EF: and     r10d, 3Fh
 * 00000001402E18F3: cmovz   r10d, r13d
 * 00000001402E18F7: add     r11d, 0FFFFFFFFh
 * 00000001402E18FB: jnz     short loc_1402E18AC
 * 00000001402E18FD: mov     r12d, [rbp+2250h+var_21F8]
 * 00000001402E1901: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E1908: mov     edx, r12d
 * 00000001402E190B: and     edx, 7Fh
 * 00000001402E190E: cmp     edx, 8
 * 00000001402E1911: jb      short loc_1402E192E
 * 00000001402E1913: mov     eax, edx
 * 00000001402E1915: shr     rax, 3
 * 00000001402E1919: xor     r8, [r9]
 * 00000001402E191C: mov     ecx, r10d
 * 00000001402E191F: rol     r8, cl
 * 00000001402E1922: add     r9, 8
 * 00000001402E1926: add     edx, 0FFFFFFF8h
 * 00000001402E1929: sub     rax, r13
 * 00000001402E192C: jnz     short loc_1402E1919
 * 00000001402E192E: xor     r11d, r11d
 * 00000001402E1931: test    edx, edx
 * 00000001402E1933: jz      short loc_1402E194A
 * 00000001402E1935: movzx   eax, byte ptr [r9]
 * 00000001402E1939: mov     ecx, r10d
 * 00000001402E193C: xor     r8, rax
 * 00000001402E193F: add     r9, r13
 * 00000001402E1942: rol     r8, cl
 * 00000001402E1945: add     edx, 0FFFFFFFFh
 * 00000001402E1948: jnz     short loc_1402E1935
 * 00000001402E194A: mov     rax, [rbx+600h]
 * 00000001402E1951: cmp     r8, [rax]
 * 00000001402E1954: jz      short loc_1402E19D1
 * 00000001402E1956: mov     rax, [rbx+588h]
 * 00000001402E195D: mov     [rax], r15
 * 00000001402E1960: mov     [rax+10h], r12d
 * 00000001402E1964: mov     rax, [rbx+600h]
 * 00000001402E196B: mov     rcx, [rax]
 * 00000001402E196E: mov     eax, [rbx+790h]
 * 00000001402E1974: test    eax, eax
 * 00000001402E1976: jnz     loc_1402E16C9
 * 00000001402E197C: mov     rax, [rbx+588h]
 * 00000001402E1983: xor     rcx, r8
 * 00000001402E1986: mov     [rax+18h], rcx
 * 00000001402E198A: mov     eax, [rbx+790h]
 * 00000001402E1990: test    eax, eax
 * 00000001402E1992: jnz     loc_1402E16C9
 * 00000001402E1998: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E19A2: add     rax, rbx
 * 00000001402E19A5: mov     [rbx+798h], rax
 * 00000001402E19AC: mov     [rbx+7A0h], r11
 * 00000001402E19B3: mov     qword ptr [rbx+7A8h], 111h
 * 00000001402E19BE: mov     [rbx+7B0h], r8
 * 00000001402E19C5: mov     [rbx+790h], r13d
 * 00000001402E19CC: jmp     loc_1402E16C9
 * 00000001402E19D1: mov     r9d, [rbx+6D8h]
 * 00000001402E19D8: mov     r13d, 20h ; ' '
 * 00000001402E19DE: mov     eax, [rbx+684h]
 * 00000001402E19E4: cmp     r9d, 7
 * 00000001402E19E8: mov     r8d, [rbx+7BCh]
 * 00000001402E19EF: cmovnz  r13d, r11d
 * 00000001402E19F3: mov     [rbp+2250h+var_2234], eax
 * 00000001402E19F6: add     eax, 30h ; '0'
 * 00000001402E19F9: mov     [rbp+2250h+var_21F8], r9d
 * 00000001402E19FD: cmp     eax, [rbx+8B4h]
 * 00000001402E1A03: jbe     loc_1402E1AEC
 * 00000001402E1A09: mov     edx, eax
 * 00000001402E1A0B: mov     rcx, rbx
 * 00000001402E1A0E: call    sub_1402E732C
 * 00000001402E1A13: xor     r11d, r11d
 * 00000001402E1A16: mov     r14, rax
 * 00000001402E1A19: test    rax, rax
 * 00000001402E1A1C: jz      loc_1402E16C0
 * 00000001402E1A22: mov     ecx, [rbx+828h]
 * 00000001402E1A28: test    cl, 4
 * 00000001402E1A2B: jnz     loc_1402E1ADE
 * 00000001402E1A31: mov     eax, [rbx+684h]
 * 00000001402E1A37: lea     r9d, [r11+1]
 * 00000001402E1A3B: mov     r8, [rbx+668h]
 * 00000001402E1A42: and     ecx, 20000000h
 * 00000001402E1A48: neg     ecx
 * 00000001402E1A4A: sbb     edx, edx
 * 00000001402E1A4C: and     edx, [rbx+7BCh]
 * 00000001402E1A52: cmp     eax, 8
 * 00000001402E1A55: jb      short loc_1402E1A6C
 * 00000001402E1A57: mov     ecx, eax
 * 00000001402E1A59: shr     rcx, 3
 * 00000001402E1A5D: mov     [rbx], r11
 * 00000001402E1A60: add     eax, 0FFFFFFF8h
 * 00000001402E1A63: add     rbx, 8
 * 00000001402E1A67: sub     rcx, r9
 * 00000001402E1A6A: jnz     short loc_1402E1A5D
 * 00000001402E1A6C: test    eax, eax
 * 00000001402E1A6E: jz      short loc_1402E1A7B
 * 00000001402E1A70: mov     [rbx], r11b
 * 00000001402E1A73: add     rbx, r9
 * 00000001402E1A76: add     eax, 0FFFFFFFFh
 * 00000001402E1A79: jnz     short loc_1402E1A70
 * 00000001402E1A7B: mov     ebx, [r14+7BCh]
 * 00000001402E1A82: mov     eax, 3
 * 00000001402E1A87: mov     [r14+7BCh], edx
 * 00000001402E1A8E: cmp     edx, eax
 * 00000001402E1A90: jz      short loc_1402E1AC5
 * 00000001402E1A92: test    dword ptr [r14+828h], 10000000h
 * 00000001402E1A9D: mov     ecx, r11d
 * 00000001402E1AA0: cmovz   ecx, edx
 * 00000001402E1AA3: test    ecx, ecx
 * 00000001402E1AA5: jz      short loc_1402E1ABC
 * 00000001402E1AA7: mov     rax, [r14+228h]
 * 00000001402E1AAE: lea     rcx, [r8-8]
 * 00000001402E1AB2: mov     rdx, [rcx]
 * 00000001402E1AB5: call    KeGuardDispatchICall
 * 00000001402E1ABA: jmp     short loc_1402E1AD4
 * 00000001402E1ABC: mov     rax, [r14+100h]
 * 00000001402E1AC3: jmp     short loc_1402E1ACC
 * 00000001402E1AC5: mov     rax, [r14+368h]
 * 00000001402E1ACC: mov     rcx, r8
 * 00000001402E1ACF: call    KeGuardDispatchICall
 * 00000001402E1AD4: mov     [r14+7BCh], ebx
 * 00000001402E1ADB: xor     r11d, r11d
 * 00000001402E1ADE: and     dword ptr [r14+828h], 0FFFFFFFBh
 * 00000001402E1AE6: mov     r9d, [rbp+2250h+var_21F8]
 * 00000001402E1AEA: jmp     short loc_1402E1AF5
 * 00000001402E1AEC: mov     r14, rbx
 * 00000001402E1AEF: mov     [rbx+684h], eax
 * 00000001402E1AF5: mov     ebx, [rbp+2250h+var_2234]
 * 00000001402E1AF8: mov     r8d, 1
 * 00000001402E1AFE: add     [r14+6ACh], r8d
 * 00000001402E1B05: add     rbx, r14
 * 00000001402E1B08: mov     [rbp+2250h+var_21C8], rbx
 * 00000001402E1B0F: mov     rax, rbx
 * 00000001402E1B12: lea     ecx, [r8+2Fh]
 * 00000001402E1B16: mov     [rbp+2250h+var_1B10], rbx
 * 00000001402E1B1D: lea     edx, [rcx-2Ah]
 * 00000001402E1B20: mov     [rax], r11
 * 00000001402E1B23: add     ecx, 0FFFFFFF8h
 * 00000001402E1B26: add     rax, 8
 * 00000001402E1B2A: sub     rdx, r8
 * 00000001402E1B2D: jnz     short loc_1402E1B20
 * 00000001402E1B2F: test    ecx, ecx
 * 00000001402E1B31: jz      short loc_1402E1B3E
 * 00000001402E1B33: mov     [rax], r11b
 * 00000001402E1B36: add     rax, r8
 * 00000001402E1B39: add     ecx, 0FFFFFFFFh
 * 00000001402E1B3C: jnz     short loc_1402E1B33
 * 00000001402E1B3E: mov     [rbx], r13d
 * 00000001402E1B41: mov     [rbx+8], r15
 * 00000001402E1B45: cmp     r9d, 7
 * 00000001402E1B49: jnz     short loc_1402E1B62
 * 00000001402E1B4B: test    r12d, r12d
 * 00000001402E1B4E: jz      short loc_1402E1B62
 * 00000001402E1B50: lea     r9, [rbx+18h]
 * 00000001402E1B54: mov     r8d, r12d
 * 00000001402E1B57: mov     rdx, r15
 * 00000001402E1B5A: mov     rcx, r14
 * 00000001402E1B5D: call    sub_14019FEBC
 * 00000001402E1B62: mov     [rbx+10h], r12d
 * 00000001402E1B66: mov     r9, r15
 * 00000001402E1B69: add     [r14+6C8h], r12d
 * 00000001402E1B70: mov     rax, r15
 * 00000001402E1B73: mov     r10d, [r14+6B4h]
 * 00000001402E1B7A: mov     rsi, [r14+6B8h]
 * 00000001402E1B81: mov     ecx, r12d
 * 00000001402E1B84: add     rcx, r15
 * 00000001402E1B87: cmp     r15, rcx
 * 00000001402E1B8A: jnb     short loc_1402E1B9C
 * 00000001402E1B8C: mov     edx, 40h ; '@'
 * 00000001402E1B91: prefetchnta byte ptr [rax]
 * 00000001402E1B94: add     rax, rdx
 * 00000001402E1B97: cmp     rax, rcx
 * 00000001402E1B9A: jb      short loc_1402E1B91
 * 00000001402E1B9C: mov     r11d, r12d
 * 00000001402E1B9F: mov     r8, rsi
 * 00000001402E1BA2: shr     r11d, 7
 * 00000001402E1BA6: mov     r13d, 1
 * 00000001402E1BAC: test    r11d, r11d
 * 00000001402E1BAF: jz      short loc_1402E1C1A
 * 00000001402E1BB1: mov     rbx, 7010008004002001h
 * 00000001402E1BBB: mov     eax, 8
 * 00000001402E1BC0: xor     r8, [r9]
 * 00000001402E1BC3: mov     ecx, r10d
 * 00000001402E1BC6: rol     r8, cl
 * 00000001402E1BC9: xor     r8, [r9+8]
 * 00000001402E1BCD: add     r9, 10h
 * 00000001402E1BD1: rol     r8, cl
 * 00000001402E1BD4: sub     rax, r13
 * 00000001402E1BD7: jnz     short loc_1402E1BC0
 * 00000001402E1BD9: mov     rcx, r9
 * 00000001402E1BDC: sub     rcx, r15
 * 00000001402E1BDF: xor     rcx, rsi
 * 00000001402E1BE2: mov     rax, rcx
 * 00000001402E1BE5: rol     rax, 11h
 * 00000001402E1BE9: xor     rcx, rax
 * 00000001402E1BEC: mov     rax, rbx
 * 00000001402E1BEF: mul     rcx
 * 00000001402E1BF2: xor     eax, edx
 * 00000001402E1BF4: mov     [rbp+2250h+var_1B08], rdx
 * 00000001402E1BFB: xor     r10d, eax
 * 00000001402E1BFE: and     r10d, 3Fh
 * 00000001402E1C02: cmovz   r10d, r13d
 * 00000001402E1C06: add     r11d, 0FFFFFFFFh
 * 00000001402E1C0A: jnz     short loc_1402E1BBB
 * 00000001402E1C0C: mov     rbx, [rbp+2250h+var_21C8]
 * 00000001402E1C13: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E1C1A: mov     edx, r12d
 * 00000001402E1C1D: and     edx, 7Fh
 * 00000001402E1C20: cmp     edx, 8
 * 00000001402E1C23: jb      short loc_1402E1C40
 * 00000001402E1C25: mov     eax, edx
 * 00000001402E1C27: shr     rax, 3
 * 00000001402E1C2B: xor     r8, [r9]
 * 00000001402E1C2E: mov     ecx, r10d
 * 00000001402E1C31: rol     r8, cl
 * 00000001402E1C34: add     r9, 8
 * 00000001402E1C38: add     edx, 0FFFFFFF8h
 * 00000001402E1C3B: sub     rax, r13
 * 00000001402E1C3E: jnz     short loc_1402E1C2B
 * 00000001402E1C40: xor     r11d, r11d
 * 00000001402E1C43: test    edx, edx
 * 00000001402E1C45: jz      short loc_1402E1C5C
 * 00000001402E1C47: movzx   eax, byte ptr [r9]
 * 00000001402E1C4B: mov     ecx, r10d
 * 00000001402E1C4E: xor     r8, rax
 * 00000001402E1C51: add     r9, r13
 * 00000001402E1C54: rol     r8, cl
 * 00000001402E1C57: add     edx, 0FFFFFFFFh
 * 00000001402E1C5A: jnz     short loc_1402E1C47
 * 00000001402E1C5C: mov     rax, r8
 * 00000001402E1C5F: jmp     short loc_1402E1C64
 * 00000001402E1C61: xor     r8d, eax
 * 00000001402E1C64: shr     rax, 1Fh
 * 00000001402E1C68: test    rax, rax
 * 00000001402E1C6B: jnz     short loc_1402E1C61
 * 00000001402E1C6D: btr     r8d, 1Fh
 * 00000001402E1C72: mov     rsi, r14
 * 00000001402E1C75: mov     [rbx+14h], r8d
 * 00000001402E1C79: mov     rbx, r14
 * 00000001402E1C7C: add     [r14+6C8h], r12d
 * 00000001402E1C83: mov     dword ptr [rbx+7ECh], 0Ah
 * 00000001402E1C8D: mov     dword ptr [rbx+7ECh], 0Bh
 * 00000001402E1C97: jmp     loc_1402E16C3
 * 00000001402E1C9C: mov     r13d, 1
 * 00000001402E1CA2: cmp     [rbx+790h], r11d
 * 00000001402E1CA9: jnz     loc_1402E16C9
 * 00000001402E1CAF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E1CB9: add     rax, rbx
 * 00000001402E1CBC: mov     [rbx+798h], rax
 * 00000001402E1CC3: mov     [rbx+7A0h], r11
 * 00000001402E1CCA: mov     qword ptr [rbx+7A8h], 105h
 * 00000001402E1CD5: mov     qword ptr [rbx+7B0h], 0FFFFFFFFC000007Bh
 * 00000001402E1CE0: jmp     loc_1402E19C5
 * 00000001402E1CE5: or      dword ptr [rbx+808h], 0FFFFFFFFh
 * 00000001402E1CEC: test    r14, r14
 * 00000001402E1CEF: jz      loc_1402E1F33
 * 00000001402E1CF5: mov     rax, [rbx+288h]
 * 00000001402E1CFC: mov     rcx, r14
 * 00000001402E1CFF: jmp     loc_1402E1F2E
 * 00000001402E1D04: mov     eax, [rsi+6D0h]
 * 00000001402E1D0A: test    r13b, al
 * 00000001402E1D0D: jz      loc_1402E1F33
 * 00000001402E1D13: mov     ecx, [rsi+808h]
 * 00000001402E1D19: or      r15d, 0FFFFFFFFh
 * 00000001402E1D1D: cmp     ecx, r15d
 * 00000001402E1D20: jz      short loc_1402E1D33
 * 00000001402E1D22: mov     rax, [rsi+278h]
 * 00000001402E1D29: call    KeGuardDispatchICall
 * 00000001402E1D2E: mov     rbx, rax
 * 00000001402E1D31: jmp     short loc_1402E1D36
 * 00000001402E1D33: mov     rbx, r11
 * 00000001402E1D36: test    rbx, rbx
 * 00000001402E1D39: jnz     short loc_1402E1D55
 * 00000001402E1D3B: mov     rax, [rsi+280h]
 * 00000001402E1D42: xor     ecx, ecx
 * 00000001402E1D44: call    KeGuardDispatchICall
 * 00000001402E1D49: mov     rbx, rax
 * 00000001402E1D4C: test    rax, rax
 * 00000001402E1D4F: jz      loc_1402E1F33
 * 00000001402E1D55: mov     rax, [rsi+290h]
 * 00000001402E1D5C: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402E1D63: mov     rcx, rbx
 * 00000001402E1D66: call    KeGuardDispatchICall
 * 00000001402E1D6B: mov     r14d, eax
 * 00000001402E1D6E: test    eax, eax
 * 00000001402E1D70: jns     short loc_1402E1D86
 * 00000001402E1D72: mov     rax, [rsi+288h]
 * 00000001402E1D79: mov     rcx, rbx
 * 00000001402E1D7C: call    KeGuardDispatchICall
 * 00000001402E1D81: xor     r11d, r11d
 * 00000001402E1D84: jmp     short loc_1402E1DEE
 * 00000001402E1D86: mov     [rsi+818h], rbx
 * 00000001402E1D8D: mov     rax, [rsi+2B8h]
 * 00000001402E1D94: call    KeGuardDispatchICall
 * 00000001402E1D99: mov     rbx, rax
 * 00000001402E1D9C: mov     rax, [rsi+2D8h]
 * 00000001402E1DA3: mov     rcx, rbx
 * 00000001402E1DA6: call    KeGuardDispatchICall
 * 00000001402E1DAB: xor     r11d, r11d
 * 00000001402E1DAE: mov     rdx, rax
 * 00000001402E1DB1: test    rax, rax
 * 00000001402E1DB4: jnz     short loc_1402E1DBB
 * 00000001402E1DB6: lea     ecx, [rax+4]
 * 00000001402E1DB9: jmp     short loc_1402E1DD0
 * 00000001402E1DBB: mov     rax, [rsi+2E8h]
 * 00000001402E1DC2: mov     rcx, rbx
 * 00000001402E1DC5: call    KeGuardDispatchICall
 * 00000001402E1DCA: xor     r11d, r11d
 * 00000001402E1DCD: mov     ecx, r11d
 * 00000001402E1DD0: mov     eax, [rsi+82Ch]
 * 00000001402E1DD6: mov     r14d, r11d
 * 00000001402E1DD9: and     eax, 0FFFFFFFBh
 * 00000001402E1DDC: or      eax, ecx
 * 00000001402E1DDE: mov     [rsi+82Ch], eax
 * 00000001402E1DE4: add     dword ptr [rsi+6C8h], 10000h
 * 00000001402E1DEE: test    r14d, r14d
 * 00000001402E1DF1: js      loc_1402E1F33
 * 00000001402E1DF7: mov     rax, [rsi+7F8h]
 * 00000001402E1DFE: mov     rcx, [rax]
 * 00000001402E1E01: cmp     rcx, [rsi+800h]
 * 00000001402E1E08: jnz     loc_1402E1E98
 * 00000001402E1E0E: mov     rax, [rsi+568h]
 * 00000001402E1E15: cmp     [rax+30h], r11d
 * 00000001402E1E19: jz      short loc_1402E1E98
 * 00000001402E1E1B: lock or [rsp+11A0h+var_11A0], r11d
 * 00000001402E1E20: mov     rax, [rsi+7F8h]
 * 00000001402E1E27: mov     rcx, [rax]
 * 00000001402E1E2A: cmp     rcx, [rsi+800h]
 * 00000001402E1E31: jnz     short loc_1402E1E98
 * 00000001402E1E33: mov     rax, [rsi+7F8h]
 * 00000001402E1E3A: mov     rdx, [rax]
 * 00000001402E1E3D: mov     eax, [rsi+790h]
 * 00000001402E1E43: mov     rcx, [rsi+800h]
 * 00000001402E1E4A: test    eax, eax
 * 00000001402E1E4C: jnz     short loc_1402E1E98
 * 00000001402E1E4E: mov     rax, [rsi+588h]
 * 00000001402E1E55: xor     rcx, rdx
 * 00000001402E1E58: mov     [rax+18h], rcx
 * 00000001402E1E5C: mov     eax, [rsi+790h]
 * 00000001402E1E62: mov     rcx, [rsi+800h]
 * 00000001402E1E69: test    eax, eax
 * 00000001402E1E6B: jnz     short loc_1402E1E98
 * 00000001402E1E6D: lea     rax, [rsi+r12]
 * 00000001402E1E71: mov     [rsi+798h], rax
 * 00000001402E1E78: mov     [rsi+7A0h], r11
 * 00000001402E1E7F: mov     qword ptr [rsi+7A8h], 103h
 * 00000001402E1E8A: mov     [rsi+7B0h], rcx
 * 00000001402E1E91: mov     [rsi+790h], r13d
 * 00000001402E1E98: mov     ecx, 8000h
 * 00000001402E1E9D: test    [rsi+828h], ecx
 * 00000001402E1EA3: jnz     short loc_1402E1EB2
 * 00000001402E1EA5: cmp     [rsi+790h], r11d
 * 00000001402E1EAC: jnz     loc_1402E1F33
 * 00000001402E1EB2: mov     rbx, [rsi+818h]
 * 00000001402E1EB9: lea     rdx, [rbp+2250h+var_1CF0]
 * 00000001402E1EC0: mov     [rsi+818h], r11
 * 00000001402E1EC7: mov     rcx, rbx
 * 00000001402E1ECA: mov     rax, [rsi+298h]
 * 00000001402E1ED1: call    KeGuardDispatchICall
 * 00000001402E1ED6: mov     eax, [rsi+828h]
 * 00000001402E1EDC: test    r13b, al
 * 00000001402E1EDF: jz      short loc_1402E1F1F
 * 00000001402E1EE1: and     eax, 0FFFFFFFEh
 * 00000001402E1EE4: mov     rcx, rbx
 * 00000001402E1EE7: mov     [rsi+828h], eax
 * 00000001402E1EED: mov     rax, [rsi+280h]
 * 00000001402E1EF4: call    KeGuardDispatchICall
 * 00000001402E1EF9: mov     rbx, rax
 * 00000001402E1EFC: test    rax, rax
 * 00000001402E1EFF: jz      short loc_1402E1F18
 * 00000001402E1F01: mov     rax, [rsi+2A0h]
 * 00000001402E1F08: mov     rcx, rbx
 * 00000001402E1F0B: call    KeGuardDispatchICall
 * 00000001402E1F10: mov     [rsi+808h], eax
 * 00000001402E1F16: jmp     short loc_1402E1F1F
 * 00000001402E1F18: mov     [rsi+808h], r15d
 * 00000001402E1F1F: test    rbx, rbx
 * 00000001402E1F22: jz      short loc_1402E1F33
 * 00000001402E1F24: mov     rax, [rsi+288h]
 * 00000001402E1F2B: mov     rcx, rbx
 * 00000001402E1F2E: call    KeGuardDispatchICall
 * 00000001402E1F33: mov     [rbp+2250h+var_2220], rsi
 * 00000001402E1F37: test    dword ptr [rsi+828h], 2000000h
 * 00000001402E1F41: jz      short loc_1402E1FB7
 * 00000001402E1F43: mov     rbx, [rsi+830h]
 * 00000001402E1F4A: mov     rax, [rsi+390h]
 * 00000001402E1F51: mov     rcx, rbx
 * 00000001402E1F54: call    KeGuardDispatchICall
 * 00000001402E1F59: xor     ecx, ecx
 * 00000001402E1F5B: test    eax, eax
 * 00000001402E1F5D: jz      short loc_1402E1F9B
 * 00000001402E1F5F: cmp     [rsi+790h], ecx
 * 00000001402E1F65: jnz     short loc_1402E1F9B
 * 00000001402E1F67: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E1F71: add     rax, rsi
 * 00000001402E1F74: mov     [rsi+798h], rax
 * 00000001402E1F7B: mov     [rsi+7A0h], rcx
 * 00000001402E1F82: mov     qword ptr [rsi+7A8h], 110h
 * 00000001402E1F8D: mov     [rsi+7B0h], rcx
 * 00000001402E1F94: mov     [rsi+790h], r13d
 * 00000001402E1F9B: mov     rax, [rsi+388h]
 * 00000001402E1FA2: lea     rdx, sub_1402E93E0
 * 00000001402E1FA9: xor     r9d, r9d
 * 00000001402E1FAC: mov     r8, rsi
 * 00000001402E1FAF: mov     rcx, rbx
 * 00000001402E1FB2: call    KeGuardDispatchICall
 * 00000001402E1FB7: test    dword ptr [rsi+82Ch], 100h
 * 00000001402E1FC1: jz      short loc_1402E1FD2
 * 00000001402E1FC3: mov     rax, [rbp+2250h+var_2170]
 * 00000001402E1FCA: mov     [rsp+11A8h], rax
 * 00000001402E1FD2: mov     r9d, [rsi+828h]
 * 00000001402E1FD9: xor     r11d, r11d
 * 00000001402E1FDC: mov     r8d, r9d
 * 00000001402E1FDF: bt      r9d, 12h
 * 00000001402E1FE4: jnb     loc_1402E2078
 * 00000001402E1FEA: rdtsc
 * 00000001402E1FEC: shl     rdx, 20h
 * 00000001402E1FF0: or      rax, rdx
 * 00000001402E1FF3: mov     rcx, rax
 * 00000001402E1FF6: ror     rax, 3
 * 00000001402E1FFA: xor     rcx, rax
 * 00000001402E1FFD: mov     rax, 7010008004002001h
 * 00000001402E2007: mul     rcx
 * 00000001402E200A: mov     rcx, rdx
 * 00000001402E200D: mov     [rbp+2250h+var_1B00], rdx
 * 00000001402E2014: xor     rcx, rax
 * 00000001402E2017: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402E2021: mul     rcx
 * 00000001402E2024: shr     rdx, 3
 * 00000001402E2028: lea     rax, [rdx+rdx*4]
 * 00000001402E202C: add     rax, rax
 * 00000001402E202F: sub     rcx, rax
 * 00000001402E2032: lea     eax, [r11+2]
 * 00000001402E2036: cmp     rcx, rax
 * 00000001402E2039: jnb     short loc_1402E2078
 * 00000001402E203B: cmp     [rsi+790h], r11d
 * 00000001402E2042: jnz     short loc_1402E2078
 * 00000001402E2044: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E204E: add     rax, rsi
 * 00000001402E2051: mov     [rsi+798h], rax
 * 00000001402E2058: mov     [rsi+7A0h], r11
 * 00000001402E205F: mov     qword ptr [rsi+7A8h], 108h
 * 00000001402E206A: mov     [rsi+7B0h], r11
 * 00000001402E2071: mov     [rsi+790h], r13d
 * 00000001402E2078: mov     r10d, 8000h
 * 00000001402E207E: bt      r8d, 1Eh
 * 00000001402E2083: jb      short loc_1402E20ED
 * 00000001402E2085: test    r10d, r8d
 * 00000001402E2088: jnz     short loc_1402E2093
 * 00000001402E208A: cmp     [rsi+790h], r11d
 * 00000001402E2091: jnz     short loc_1402E20ED
 * 00000001402E2093: mov     rcx, [rsp+11A0h+arg_0]
 * 00000001402E209B: test    [rcx+828h], r10d
 * 00000001402E20A2: jnz     short loc_1402E20ED
 * 00000001402E20A4: add     rcx, 790h
 * 00000001402E20AB: cmp     [rcx], r11d
 * 00000001402E20AE: jz      short loc_1402E20ED
 * 00000001402E20B0: mov     r8d, 28h ; '('
 * 00000001402E20B6: lea     rdx, [rsi+790h]
 * 00000001402E20BD: lea     r9d, [r8-23h]
 * 00000001402E20C1: mov     rax, [rdx]
 * 00000001402E20C4: add     r8d, 0FFFFFFF8h
 * 00000001402E20C8: mov     [rcx], rax
 * 00000001402E20CB: add     rdx, 8
 * 00000001402E20CF: add     rcx, 8
 * 00000001402E20D3: sub     r9, r13
 * 00000001402E20D6: jnz     short loc_1402E20C1
 * 00000001402E20D8: test    r8d, r8d
 * 00000001402E20DB: jz      short loc_1402E20ED
 * 00000001402E20DD: mov     al, [rdx]
 * 00000001402E20DF: add     rdx, r13
 * 00000001402E20E2: mov     [rcx], al
 * 00000001402E20E4: add     rcx, r13
 * 00000001402E20E7: add     r8d, 0FFFFFFFFh
 * 00000001402E20EB: jnz     short loc_1402E20DD
 * 00000001402E20ED: test    [rsi+828h], r10d
 * 00000001402E20F4: jnz     short loc_1402E2103
 * 00000001402E20F6: cmp     [rsi+790h], r11d
 * 00000001402E20FD: jnz     loc_1402E2C55
 * 00000001402E2103: mov     eax, [rsi+8C0h]
 * 00000001402E2109: test    eax, eax
 * 00000001402E210B: jz      loc_1402E2C55
 * 00000001402E2111: lea     r14, [rsi+rax]
 * 00000001402E2115: xor     edx, edx
 * 00000001402E2117: mov     r11, [r14+8]
 * 00000001402E211B: mov     [rbp+2250h+var_2248], r14
 * 00000001402E211F: test    r11, r11
 * 00000001402E2122: jz      loc_1402E23CC
 * 00000001402E2128: mov     r9d, [r14+10h]
 * 00000001402E212C: mov     r8, r11
 * 00000001402E212F: add     [rsi+6C8h], r9d
 * 00000001402E2136: mov     rax, r11
 * 00000001402E2139: mov     r10d, [rsi+6B4h]
 * 00000001402E2140: mov     r12, [rsi+6B8h]
 * 00000001402E2147: lea     rcx, [r11+r9]
 * 00000001402E214B: cmp     r11, rcx
 * 00000001402E214E: jnb     short loc_1402E215C
 * 00000001402E2150: prefetchnta byte ptr [rax]
 * 00000001402E2153: add     rax, 40h ; '@'
 * 00000001402E2157: cmp     rax, rcx
 * 00000001402E215A: jb      short loc_1402E2150
 * 00000001402E215C: mov     r15d, r9d
 * 00000001402E215F: mov     rbx, r12
 * 00000001402E2162: shr     r15d, 7
 * 00000001402E2166: test    r15d, r15d
 * 00000001402E2169: jz      short loc_1402E21CF
 * 00000001402E216B: mov     rdi, 7010008004002001h
 * 00000001402E2175: mov     eax, 8
 * 00000001402E217A: xor     rbx, [r8]
 * 00000001402E217D: mov     ecx, r10d
 * 00000001402E2180: rol     rbx, cl
 * 00000001402E2183: xor     rbx, [r8+8]
 * 00000001402E2187: add     r8, 10h
 * 00000001402E218B: rol     rbx, cl
 * 00000001402E218E: sub     rax, r13
 * 00000001402E2191: jnz     short loc_1402E217A
 * 00000001402E2193: mov     rcx, r8
 * 00000001402E2196: sub     rcx, r11
 * 00000001402E2199: xor     rcx, r12
 * 00000001402E219C: mov     rax, rcx
 * 00000001402E219F: rol     rax, 11h
 * 00000001402E21A3: xor     rcx, rax
 * 00000001402E21A6: mov     rax, rdi
 * 00000001402E21A9: mul     rcx
 * 00000001402E21AC: xor     eax, edx
 * 00000001402E21AE: mov     [rbp+2250h+var_1AF8], rdx
 * 00000001402E21B5: xor     r10d, eax
 * 00000001402E21B8: and     r10d, 3Fh
 * 00000001402E21BC: cmovz   r10d, r13d
 * 00000001402E21C0: add     r15d, 0FFFFFFFFh
 * 00000001402E21C4: jnz     short loc_1402E2175
 * 00000001402E21C6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E21CD: xor     edx, edx
 * 00000001402E21CF: and     r9d, 7Fh
 * 00000001402E21D3: cmp     r9d, 8
 * 00000001402E21D7: jb      short loc_1402E21F6
 * 00000001402E21D9: mov     eax, r9d
 * 00000001402E21DC: shr     rax, 3
 * 00000001402E21E0: xor     rbx, [r8]
 * 00000001402E21E3: mov     ecx, r10d
 * 00000001402E21E6: rol     rbx, cl
 * 00000001402E21E9: add     r8, 8
 * 00000001402E21ED: add     r9d, 0FFFFFFF8h
 * 00000001402E21F1: sub     rax, r13
 * 00000001402E21F4: jnz     short loc_1402E21E0
 * 00000001402E21F6: test    r9d, r9d
 * 00000001402E21F9: jz      short loc_1402E2211
 * 00000001402E21FB: movzx   eax, byte ptr [r8]
 * 00000001402E21FF: mov     ecx, r10d
 * 00000001402E2202: xor     rbx, rax
 * 00000001402E2205: add     r8, r13
 * 00000001402E2208: rol     rbx, cl
 * 00000001402E220B: add     r9d, 0FFFFFFFFh
 * 00000001402E220F: jnz     short loc_1402E21FB
 * 00000001402E2211: mov     rax, rbx
 * 00000001402E2214: jmp     short loc_1402E2218
 * 00000001402E2216: xor     ebx, eax
 * 00000001402E2218: shr     rax, 1Fh
 * 00000001402E221C: test    rax, rax
 * 00000001402E221F: jnz     short loc_1402E2216
 * 00000001402E2221: btr     ebx, 1Fh
 * 00000001402E2225: mov     r13d, edx
 * 00000001402E2228: cmp     ebx, [r14+14h]
 * 00000001402E222C: jz      loc_1402E2392
 * 00000001402E2232: cmp     [r14], edx
 * 00000001402E2235: jnz     short loc_1402E2244
 * 00000001402E2237: cmp     [r14+18h], edx
 * 00000001402E223B: mov     eax, 1
 * 00000001402E2240: cmovnz  r13d, eax
 * 00000001402E2244: mov     ecx, [r14+10h]
 * 00000001402E2248: mov     rdx, [r14+8]
 * 00000001402E224C: test    rcx, rcx
 * 00000001402E224F: jz      loc_1402E231F
 * 00000001402E2255: mov     eax, [rsi+82Ch]
 * 00000001402E225B: mov     r8d, 40h ; '@'
 * 00000001402E2261: test    r8b, al
 * 00000001402E2264: jz      loc_1402E231F
 * 00000001402E226A: mov     rax, cr8
 * 00000001402E226E: mov     [rbp+2250h+var_2170], rax
 * 00000001402E2275: mov     r8d, 2
 * 00000001402E227B: mov     cr8, r8
 * 00000001402E227F: mov     r15, rdx
 * 00000001402E2282: dec     rdx
 * 00000001402E2285: add     rcx, rdx
 * 00000001402E2288: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001402E228F: mov     edx, 0FFFh
 * 00000001402E2294: or      rcx, rdx
 * 00000001402E2297: mov     [rbp+2250h+var_21C8], rcx
 * 00000001402E229E: lea     rcx, [r15-1]
 * 00000001402E22A2: mov     [rbp+2250h+var_21E8], rcx
 * 00000001402E22A6: movzx   r12d, al
 * 00000001402E22AA: mov     rax, [rsi+468h]
 * 00000001402E22B1: xor     edx, edx
 * 00000001402E22B3: mov     rcx, r15
 * 00000001402E22B6: call    KeGuardDispatchICall
 * 00000001402E22BB: cmp     eax, 0C000022Dh
 * 00000001402E22C0: jnz     short loc_1402E22EE
 * 00000001402E22C2: test    r13d, r13d
 * 00000001402E22C5: jnz     short loc_1402E231B
 * 00000001402E22C7: mov     rax, [rbp+2250h+var_2170]
 * 00000001402E22CE: lea     ecx, [r13+1]
 * 00000001402E22D2: cmp     al, cl
 * 00000001402E22D4: ja      short loc_1402E22F9
 * 00000001402E22D6: movzx   r12d, al
 * 00000001402E22DA: mov     cr8, r12
 * 00000001402E22DE: mov     al, [r15]
 * 00000001402E22E1: mov     rax, cr8
 * 00000001402E22E5: lea     eax, [rcx+1]
 * 00000001402E22E8: mov     cr8, rax
 * 00000001402E22EC: jmp     short loc_1402E22AA
 * 00000001402E22EE: test    eax, eax
 * 00000001402E22F0: js      short loc_1402E231B
 * 00000001402E22F2: mov     rax, [rbp+2250h+var_2170]
 * 00000001402E22F9: mov     rcx, [rbp+2250h+var_21E8]
 * 00000001402E22FD: mov     edx, 1000h
 * 00000001402E2302: add     rcx, rdx
 * 00000001402E2305: add     r15, rdx
 * 00000001402E2308: mov     [rbp+2250h+var_21E8], rcx
 * 00000001402E230C: cmp     rcx, [rbp+2250h+var_21C8]
 * 00000001402E2313: jnz     short loc_1402E22A6
 * 00000001402E2315: mov     cr8, r12
 * 00000001402E2319: jmp     short loc_1402E2392
 * 00000001402E231B: mov     cr8, r12
 * 00000001402E231F: mov     eax, [rsi+790h]
 * 00000001402E2325: xor     r13d, r13d
 * 00000001402E2328: mov     edx, [r14+14h]
 * 00000001402E232C: test    eax, eax
 * 00000001402E232E: jnz     short loc_1402E2346
 * 00000001402E2330: mov     rax, [rsi+588h]
 * 00000001402E2337: mov     ecx, ebx
 * 00000001402E2339: xor     rcx, rdx
 * 00000001402E233C: mov     [rax+18h], rcx
 * 00000001402E2340: mov     eax, [rsi+790h]
 * 00000001402E2346: mov     rcx, [r14+8]
 * 00000001402E234A: test    eax, eax
 * 00000001402E234C: jnz     short loc_1402E2392
 * 00000001402E234E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E2358: add     rax, rsi
 * 00000001402E235B: mov     [rsi+798h], rax
 * 00000001402E2362: mov     rax, 0B3B74BDEE4453415h
 * 00000001402E236C: add     rax, r14
 * 00000001402E236F: mov     [rsi+7A0h], rax
 * 00000001402E2376: movsxd  rax, dword ptr [r14]
 * 00000001402E2379: mov     [rsi+7A8h], rax
 * 00000001402E2380: mov     eax, 1
 * 00000001402E2385: mov     [rsi+7B0h], rcx
 * 00000001402E238C: mov     [rsi+790h], eax
 * 00000001402E2392: mov     rcx, [r14+18h]
 * 00000001402E2396: mov     rax, [rsi+100h]
 * 00000001402E239D: call    KeGuardDispatchICall
 * 00000001402E23A2: xor     r11d, r11d
 * 00000001402E23A5: mov     [r14+8], r11
 * 00000001402E23A9: mov     [r14+10h], r11d
 * 00000001402E23AD: mov     rcx, [rsi+6B8h]
 * 00000001402E23B4: mov     rax, rcx
 * 00000001402E23B7: jmp     short loc_1402E23BB
 * 00000001402E23B9: xor     ecx, eax
 * 00000001402E23BB: shr     rax, 1Fh
 * 00000001402E23BF: test    rax, rax
 * 00000001402E23C2: jnz     short loc_1402E23B9
 * 00000001402E23C4: btr     ecx, 1Fh
 * 00000001402E23C8: mov     [r14+14h], ecx
 * 00000001402E23CC: rdtsc
 * 00000001402E23CE: shl     rdx, 20h
 * 00000001402E23D2: mov     r9, 7010008004002001h
 * 00000001402E23DC: or      rax, rdx
 * 00000001402E23DF: mov     rcx, rax
 * 00000001402E23E2: ror     rax, 3
 * 00000001402E23E6: xor     rcx, rax
 * 00000001402E23E9: mov     rax, r9
 * 00000001402E23EC: mul     rcx
 * 00000001402E23EF: mov     rcx, rdx
 * 00000001402E23F2: mov     [rbp+2250h+var_1AF0], rdx
 * 00000001402E23F9: xor     rcx, rax
 * 00000001402E23FC: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402E2406: mul     rcx
 * 00000001402E2409: shr     rdx, 1
 * 00000001402E240C: lea     rax, [rdx+rdx*2]
 * 00000001402E2410: cmp     rcx, rax
 * 00000001402E2413: jnz     loc_1402E2C5F
 * 00000001402E2419: lea     r12, [r14+18h]
 * 00000001402E241D: mov     r8d, [rsi+6B0h]
 * 00000001402E2424: rdtsc
 * 00000001402E2426: shl     rdx, 20h
 * 00000001402E242A: or      rax, rdx
 * 00000001402E242D: mov     rcx, rax
 * 00000001402E2430: ror     rax, 3
 * 00000001402E2434: xor     rcx, rax
 * 00000001402E2437: mov     rax, r9
 * 00000001402E243A: mul     rcx
 * 00000001402E243D: mov     rbx, rax
 * 00000001402E2440: mov     [rbp+2250h+var_1AE8], rdx
 * 00000001402E2447: xor     ebx, edx
 * 00000001402E2449: and     ebx, 7FFh
 * 00000001402E244F: rdtsc
 * 00000001402E2451: shl     rdx, 20h
 * 00000001402E2455: or      rax, rdx
 * 00000001402E2458: mov     rcx, rax
 * 00000001402E245B: ror     rax, 3
 * 00000001402E245F: xor     rcx, rax
 * 00000001402E2462: mov     rax, r9
 * 00000001402E2465: mul     rcx
 * 00000001402E2468: lea     ecx, [rbx+1]
 * 00000001402E246B: xor     rax, rdx
 * 00000001402E246E: mov     [rbp+2250h+var_1AE0], rdx
 * 00000001402E2475: xor     edx, edx
 * 00000001402E2477: div     rcx
 * 00000001402E247A: mov     ecx, [rsi+828h]
 * 00000001402E2480: mov     rax, [rsi+0F8h]
 * 00000001402E2487: mov     r15, rdx
 * 00000001402E248A: shr     ecx, 13h
 * 00000001402E248D: lea     edx, [rbx+928h]
 * 00000001402E2493: and     ecx, 200h
 * 00000001402E2499: call    KeGuardDispatchICall
 * 00000001402E249E: xor     r13d, r13d
 * 00000001402E24A1: mov     r11, rax
 * 00000001402E24A4: test    rax, rax
 * 00000001402E24A7: jnz     short loc_1402E24C3
 * 00000001402E24A9: lea     r12d, [rax+1]
 * 00000001402E24AD: add     [rsi+8B0h], r12d
 * 00000001402E24B4: mov     r9, 7010008004002001h
 * 00000001402E24BE: jmp     loc_1402E2C65
 * 00000001402E24C3: mov     r9d, r15d
 * 00000001402E24C6: mov     r8, r11
 * 00000001402E24C9: cmp     r15d, 8
 * 00000001402E24CD: jb      short loc_1402E2520
 * 00000001402E24CF: mov     r10d, r15d
 * 00000001402E24D2: mov     r13d, 1
 * 00000001402E24D8: shr     r10, 3
 * 00000001402E24DC: mov     r14, 7010008004002001h
 * 00000001402E24E6: rdtsc
 * 00000001402E24E8: shl     rdx, 20h
 * 00000001402E24EC: add     r9d, 0FFFFFFF8h
 * 00000001402E24F0: or      rax, rdx
 * 00000001402E24F3: mov     rcx, rax
 * 00000001402E24F6: ror     rax, 3
 * 00000001402E24FA: xor     rcx, rax
 * 00000001402E24FD: mov     rax, r14
 * 00000001402E2500: mul     rcx
 * 00000001402E2503: mov     [rbp+2250h+var_1AD8], rdx
 * 00000001402E250A: xor     rdx, rax
 * 00000001402E250D: mov     [r8], rdx
 * 00000001402E2510: add     r8, 8
 * 00000001402E2514: sub     r10, r13
 * 00000001402E2517: jnz     short loc_1402E24E6
 * 00000001402E2519: mov     r14, [rbp+2250h+var_2248]
 * 00000001402E251D: xor     r13d, r13d
 * 00000001402E2520: test    r9d, r9d
 * 00000001402E2523: jz      short loc_1402E2564
 * 00000001402E2525: rdtsc
 * 00000001402E2527: shl     rdx, 20h
 * 00000001402E252B: or      rax, rdx
 * 00000001402E252E: mov     rcx, rax
 * 00000001402E2531: ror     rax, 3
 * 00000001402E2535: xor     rcx, rax
 * 00000001402E2538: mov     rax, 7010008004002001h
 * 00000001402E2542: mul     rcx
 * 00000001402E2545: mov     [rbp+2250h+var_1AD0], rdx
 * 00000001402E254C: xor     rdx, rax
 * 00000001402E254F: mov     eax, 1
 * 00000001402E2554: mov     [r8], dl
 * 00000001402E2557: add     r8, rax
 * 00000001402E255A: shr     rdx, 8
 * 00000001402E255E: add     r9d, 0FFFFFFFFh
 * 00000001402E2562: jnz     short loc_1402E2554
 * 00000001402E2564: mov     r8d, r15d
 * 00000001402E2567: sub     ebx, r15d
 * 00000001402E256A: add     r8, r11
 * 00000001402E256D: mov     r15d, 1
 * 00000001402E2573: lea     r9, [r8+928h]
 * 00000001402E257A: cmp     ebx, 8
 * 00000001402E257D: jb      short loc_1402E25C5
 * 00000001402E257F: mov     r10d, ebx
 * 00000001402E2582: mov     r13, 7010008004002001h
 * 00000001402E258C: shr     r10, 3
 * 00000001402E2590: rdtsc
 * 00000001402E2592: shl     rdx, 20h
 * 00000001402E2596: add     ebx, 0FFFFFFF8h
 * 00000001402E2599: or      rax, rdx
 * 00000001402E259C: mov     rcx, rax
 * 00000001402E259F: ror     rax, 3
 * 00000001402E25A3: xor     rcx, rax
 * 00000001402E25A6: mov     rax, r13
 * 00000001402E25A9: mul     rcx
 * 00000001402E25AC: mov     [rbp+2250h+var_1AC8], rdx
 * 00000001402E25B3: xor     rdx, rax
 * 00000001402E25B6: mov     [r9], rdx
 * 00000001402E25B9: add     r9, 8
 * 00000001402E25BD: sub     r10, r15
 * 00000001402E25C0: jnz     short loc_1402E2590
 * 00000001402E25C2: xor     r13d, r13d
 * 00000001402E25C5: test    ebx, ebx
 * 00000001402E25C7: jz      short loc_1402E2602
 * 00000001402E25C9: rdtsc
 * 00000001402E25CB: shl     rdx, 20h
 * 00000001402E25CF: or      rax, rdx
 * 00000001402E25D2: mov     rcx, rax
 * 00000001402E25D5: ror     rax, 3
 * 00000001402E25D9: xor     rcx, rax
 * 00000001402E25DC: mov     rax, 7010008004002001h
 * 00000001402E25E6: mul     rcx
 * 00000001402E25E9: mov     [rbp+2250h+var_1AC0], rdx
 * 00000001402E25F0: xor     rdx, rax
 * 00000001402E25F3: mov     [r9], dl
 * 00000001402E25F6: add     r9, r15
 * 00000001402E25F9: shr     rdx, 8
 * 00000001402E25FD: add     ebx, 0FFFFFFFFh
 * 00000001402E2600: jnz     short loc_1402E25F3
 * 00000001402E2602: test    r12, r12
 * 00000001402E2605: jz      short loc_1402E260B
 * 00000001402E2607: mov     [r12], r11
 * 00000001402E260B: xor     r11d, r11d
 * 00000001402E260E: test    r8, r8
 * 00000001402E2611: jz      loc_1402E2C55
 * 00000001402E2617: mov     r10d, 928h
 * 00000001402E261D: mov     [r14+8], r8
 * 00000001402E2621: mov     [r14+10h], r10d
 * 00000001402E2625: mov     r9d, r10d
 * 00000001402E2628: mov     r14d, 125h
 * 00000001402E262E: mov     rcx, rsi
 * 00000001402E2631: mov     rdx, r8
 * 00000001402E2634: mov     rax, [rcx]
 * 00000001402E2637: add     r9d, 0FFFFFFF8h
 * 00000001402E263B: mov     [rdx], rax
 * 00000001402E263E: add     rcx, 8
 * 00000001402E2642: add     rdx, 8
 * 00000001402E2646: sub     r14, r15
 * 00000001402E2649: jnz     short loc_1402E2634
 * 00000001402E264B: test    r9d, r9d
 * 00000001402E264E: jz      short loc_1402E2660
 * 00000001402E2650: mov     al, [rcx]
 * 00000001402E2652: add     rcx, r15
 * 00000001402E2655: mov     [rdx], al
 * 00000001402E2657: add     rdx, r15
 * 00000001402E265A: add     r9d, 0FFFFFFFFh
 * 00000001402E265E: jnz     short loc_1402E2650
 * 00000001402E2660: bts     dword ptr [r8+828h], 13h
 * 00000001402E2669: mov     [r8+684h], r10d
 * 00000001402E2670: mov     [r8+6A8h], r10d
 * 00000001402E2677: mov     eax, [r8+828h]
 * 00000001402E267E: and     eax, 0FFFFFFFDh
 * 00000001402E2681: mov     [r8+828h], eax
 * 00000001402E2688: mov     r12d, [r8+6A8h]
 * 00000001402E268F: mov     [rbp+2250h+var_2234], eax
 * 00000001402E2692: sub     r12d, 0C8h
 * 00000001402E2699: mov     rax, [r8+4E0h]
 * 00000001402E26A0: shr     r12d, 3
 * 00000001402E26A4: mov     [rbp+2250h+var_2170], rax
 * 00000001402E26AB: mov     rax, [r8+5B8h]
 * 00000001402E26B2: mov     [rbp+2250h+var_21F8], r12d
 * 00000001402E26B6: mov     [r8+0C4h], r12d
 * 00000001402E26BD: mov     [rbp+2250h+var_2198], rax
 * 00000001402E26C4: rdtsc
 * 00000001402E26C6: shl     rdx, 20h
 * 00000001402E26CA: lea     r10, [r8+638h]
 * 00000001402E26D1: or      rax, rdx
 * 00000001402E26D4: mov     r13d, 20h ; ' '
 * 00000001402E26DA: mov     rcx, rax
 * 00000001402E26DD: mov     r9d, r13d
 * 00000001402E26E0: ror     rax, 3
 * 00000001402E26E4: xor     rcx, rax
 * 00000001402E26E7: mov     rax, 7010008004002001h
 * 00000001402E26F1: mul     rcx
 * 00000001402E26F4: lea     r15d, [r13-1Ch]
 * 00000001402E26F8: mov     rcx, r10
 * 00000001402E26FB: mov     rbx, rdx
 * 00000001402E26FE: mov     [rbp+2250h+var_1AB8], rdx
 * 00000001402E2705: xor     rbx, rax
 * 00000001402E2708: lea     rdx, [rbp+2250h+var_1780]
 * 00000001402E270F: mov     rax, [r8+658h]
 * 00000001402E2716: lea     r14d, [r13-1Fh]
 * 00000001402E271A: mov     [rbp+2250h+var_2230], rax
 * 00000001402E271E: mov     r11d, r15d
 * 00000001402E2721: mov     eax, [r8+6C8h]
 * 00000001402E2728: mov     [rbp+2250h+var_2228], eax
 * 00000001402E272B: mov     rax, [rcx]
 * 00000001402E272E: add     r9d, 0FFFFFFF8h
 * 00000001402E2732: mov     [rdx], rax
 * 00000001402E2735: add     rcx, 8
 * 00000001402E2739: add     rdx, 8
 * 00000001402E273D: sub     r11, r14
 * 00000001402E2740: jnz     short loc_1402E272B
 * 00000001402E2742: mov     r14, [rbp+2250h+var_2248]
 * 00000001402E2746: test    r9d, r9d
 * 00000001402E2749: jz      short loc_1402E2764
 * 00000001402E274B: mov     r11d, 1
 * 00000001402E2751: mov     al, [rcx]
 * 00000001402E2753: add     rcx, r11
 * 00000001402E2756: mov     [rdx], al
 * 00000001402E2758: add     rdx, r11
 * 00000001402E275B: add     r9d, 0FFFFFFFFh
 * 00000001402E275F: jnz     short loc_1402E2751
 * 00000001402E2761: xor     r11d, r11d
 * 00000001402E2764: mov     [r8+658h], r11
 * 00000001402E276B: mov     ecx, r13d
 * 00000001402E276E: mov     [r8+6C8h], r11d
 * 00000001402E2775: mov     rax, r10
 * 00000001402E2778: mov     rdx, r15
 * 00000001402E277B: mov     r9d, 1
 * 00000001402E2781: mov     [rax], r11
 * 00000001402E2784: add     ecx, 0FFFFFFF8h
 * 00000001402E2787: add     rax, 8
 * 00000001402E278B: sub     rdx, r9
 * 00000001402E278E: jnz     short loc_1402E2781
 * 00000001402E2790: mov     rdx, r9
 * 00000001402E2793: test    ecx, ecx
 * 00000001402E2795: jz      short loc_1402E27A2
 * 00000001402E2797: mov     [rax], r11b
 * 00000001402E279A: add     rax, rdx
 * 00000001402E279D: add     ecx, 0FFFFFFFFh
 * 00000001402E27A0: jnz     short loc_1402E2797
 * 00000001402E27A2: mov     eax, [r8+684h]
 * 00000001402E27A9: mov     r10, r8
 * 00000001402E27AC: add     [r8+6C8h], eax
 * 00000001402E27B3: mov     rax, r8
 * 00000001402E27B6: mov     r11d, [r8+684h]
 * 00000001402E27BD: mov     r15d, [r8+6B4h]
 * 00000001402E27C4: mov     r9, [r8+6B8h]
 * 00000001402E27CB: lea     rcx, [r8+r11]
 * 00000001402E27CF: cmp     r8, rcx
 * 00000001402E27D2: jnb     short loc_1402E27E0
 * 00000001402E27D4: prefetchnta byte ptr [rax]
 * 00000001402E27D7: add     rax, 40h ; '@'
 * 00000001402E27DB: cmp     rax, rcx
 * 00000001402E27DE: jb      short loc_1402E27D4
 * 00000001402E27E0: mov     r13d, r11d
 * 00000001402E27E3: shr     r13d, 7
 * 00000001402E27E7: test    r13d, r13d
 * 00000001402E27EA: jz      short loc_1402E285A
 * 00000001402E27EC: mov     rdi, r9
 * 00000001402E27EF: mov     r12, 7010008004002001h
 * 00000001402E27F9: mov     eax, 8
 * 00000001402E27FE: xor     r9, [r10]
 * 00000001402E2801: mov     ecx, r15d
 * 00000001402E2804: rol     r9, cl
 * 00000001402E2807: xor     r9, [r10+8]
 * 00000001402E280B: add     r10, 10h
 * 00000001402E280F: rol     r9, cl
 * 00000001402E2812: sub     rax, rdx
 * 00000001402E2815: jnz     short loc_1402E27FE
 * 00000001402E2817: mov     rcx, r10
 * 00000001402E281A: sub     rcx, r8
 * 00000001402E281D: xor     rcx, rdi
 * 00000001402E2820: mov     rax, rcx
 * 00000001402E2823: rol     rax, 11h
 * 00000001402E2827: xor     rcx, rax
 * 00000001402E282A: mov     rax, r12
 * 00000001402E282D: mul     rcx
 * 00000001402E2830: xor     eax, edx
 * 00000001402E2832: mov     [rbp+2250h+var_1AB0], rdx
 * 00000001402E2839: xor     r15d, eax
 * 00000001402E283C: mov     edx, 1
 * 00000001402E2841: and     r15d, 3Fh
 * 00000001402E2845: cmovz   r15d, edx
 * 00000001402E2849: add     r13d, 0FFFFFFFFh
 * 00000001402E284D: jnz     short loc_1402E27F9
 * 00000001402E284F: mov     r12d, [rbp+2250h+var_21F8]
 * 00000001402E2853: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E285A: and     r11d, 7Fh
 * 00000001402E285E: cmp     r11d, 8
 * 00000001402E2862: jb      short loc_1402E2881
 * 00000001402E2864: mov     eax, r11d
 * 00000001402E2867: shr     rax, 3
 * 00000001402E286B: xor     r9, [r10]
 * 00000001402E286E: mov     ecx, r15d
 * 00000001402E2871: rol     r9, cl
 * 00000001402E2874: add     r10, 8
 * 00000001402E2878: add     r11d, 0FFFFFFF8h
 * 00000001402E287C: sub     rax, rdx
 * 00000001402E287F: jnz     short loc_1402E286B
 * 00000001402E2881: xor     r13d, r13d
 * 00000001402E2884: test    r11d, r11d
 * 00000001402E2887: jz      short loc_1402E289F
 * 00000001402E2889: movzx   eax, byte ptr [r10]
 * 00000001402E288D: mov     ecx, r15d
 * 00000001402E2890: xor     r9, rax
 * 00000001402E2893: add     r10, rdx
 * 00000001402E2896: rol     r9, cl
 * 00000001402E2899: add     r11d, 0FFFFFFFFh
 * 00000001402E289D: jnz     short loc_1402E2889
 * 00000001402E289F: mov     rax, [rbp+2250h+var_2230]
 * 00000001402E28A3: lea     rcx, [rbp+2250h+var_1780]
 * 00000001402E28AA: mov     edx, 20h ; ' '
 * 00000001402E28AF: mov     [r8+658h], rax
 * 00000001402E28B6: mov     eax, [rbp+2250h+var_2228]
 * 00000001402E28B9: lea     r10, [r8+638h]
 * 00000001402E28C0: add     [r8+6C8h], eax
 * 00000001402E28C7: lea     r15d, [rdx-1Ch]
 * 00000001402E28CB: mov     r11d, r15d
 * 00000001402E28CE: lea     r13d, [rdx-1Fh]
 * 00000001402E28D2: mov     rax, [rcx]
 * 00000001402E28D5: add     edx, 0FFFFFFF8h
 * 00000001402E28D8: mov     [r10], rax
 * 00000001402E28DB: add     rcx, 8
 * 00000001402E28DF: add     r10, 8
 * 00000001402E28E3: sub     r11, r13
 * 00000001402E28E6: jnz     short loc_1402E28D2
 * 00000001402E28E8: xor     r13d, r13d
 * 00000001402E28EB: lea     r11d, [r13+1]
 * 00000001402E28EF: test    edx, edx
 * 00000001402E28F1: jz      short loc_1402E2903
 * 00000001402E28F3: mov     al, [rcx]
 * 00000001402E28F5: add     rcx, r11
 * 00000001402E28F8: mov     [r10], al
 * 00000001402E28FB: add     r10, r11
 * 00000001402E28FE: add     edx, 0FFFFFFFFh
 * 00000001402E2901: jnz     short loc_1402E28F3
 * 00000001402E2903: mov     [r8+658h], r9
 * 00000001402E290A: test    dword ptr [r8+828h], 40000000h
 * 00000001402E2915: jnz     loc_1402E29D4
 * 00000001402E291B: mov     rcx, r8
 * 00000001402E291E: mov     eax, r13d
 * 00000001402E2921: xor     [rcx], rbx
 * 00000001402E2924: add     eax, r11d
 * 00000001402E2927: lea     rcx, [rcx+8]
 * 00000001402E292B: cmp     eax, 19h
 * 00000001402E292E: jb      short loc_1402E2921
 * 00000001402E2930: mov     [rbp+2250h+var_1FC0], rbx
 * 00000001402E2937: test    rbx, rbx
 * 00000001402E293A: jz      short loc_1402E297B
 * 00000001402E293C: test    r12d, r12d
 * 00000001402E293F: jz      short loc_1402E297B
 * 00000001402E2941: mov     edx, r12d
 * 00000001402E2944: dec     rdx
 * 00000001402E2947: lea     rdx, [rcx+rdx*8]
 * 00000001402E294B: xor     [rdx], rbx
 * 00000001402E294E: lea     rax, [rbp+2250h+var_1FC0]
 * 00000001402E2955: mov     ecx, r12d
 * 00000001402E2958: lea     rdx, [rdx-8]
 * 00000001402E295C: ror     rbx, cl
 * 00000001402E295F: mov     [rbp+2250h+var_1FC0], rbx
 * 00000001402E2966: and     ebx, 3Fh
 * 00000001402E2969: btc     [rax], rbx
 * 00000001402E296D: sub     r12d, r11d
 * 00000001402E2970: jz      short loc_1402E297B
 * 00000001402E2972: mov     rbx, [rbp+2250h+var_1FC0]
 * 00000001402E2979: jmp     short loc_1402E294B
 * 00000001402E297B: mov     r12d, [rbp+2250h+var_2234]
 * 00000001402E297F: bt      r12d, 13h
 * 00000001402E2984: jnb     loc_1402E2AE3
 * 00000001402E298A: rdtsc
 * 00000001402E298C: shl     rdx, 20h
 * 00000001402E2990: or      rax, rdx
 * 00000001402E2993: mov     rcx, rax
 * 00000001402E2996: ror     rax, 3
 * 00000001402E299A: xor     rcx, rax
 * 00000001402E299D: mov     rax, 7010008004002001h
 * 00000001402E29A7: mul     rcx
 * 00000001402E29AA: mov     rcx, rdx
 * 00000001402E29AD: mov     [rbp+2250h+var_1990], rdx
 * 00000001402E29B4: xor     rcx, rax
 * 00000001402E29B7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402E29C1: mul     rcx
 * 00000001402E29C4: shr     rdx, 1
 * 00000001402E29C7: lea     rax, [rdx+rdx*2]
 * 00000001402E29CB: cmp     rcx, rax
 * 00000001402E29CE: jz      loc_1402E2AEE
 * 00000001402E29D4: mov     edx, 1
 * 00000001402E29D9: mov     r15, [r14+8]
 * 00000001402E29DD: mov     r10d, [r14+10h]
 * 00000001402E29E1: mov     r9, r15
 * 00000001402E29E4: add     [rsi+6C8h], r10d
 * 00000001402E29EB: mov     rax, r15
 * 00000001402E29EE: mov     r11d, [rsi+6B4h]
 * 00000001402E29F5: mov     r12, [rsi+6B8h]
 * 00000001402E29FC: lea     rcx, [r15+r10]
 * 00000001402E2A00: cmp     r15, rcx
 * 00000001402E2A03: jnb     short loc_1402E2A16
 * 00000001402E2A05: mov     r8d, 40h ; '@'
 * 00000001402E2A0B: prefetchnta byte ptr [rax]
 * 00000001402E2A0E: add     rax, r8
 * 00000001402E2A11: cmp     rax, rcx
 * 00000001402E2A14: jb      short loc_1402E2A0B
 * 00000001402E2A16: mov     ebx, r10d
 * 00000001402E2A19: mov     r8, r12
 * 00000001402E2A1C: shr     ebx, 7
 * 00000001402E2A1F: test    ebx, ebx
 * 00000001402E2A21: jz      short loc_1402E2A8C
 * 00000001402E2A23: mov     r13, 7010008004002001h
 * 00000001402E2A2D: mov     eax, 8
 * 00000001402E2A32: xor     r8, [r9]
 * 00000001402E2A35: mov     ecx, r11d
 * 00000001402E2A38: rol     r8, cl
 * 00000001402E2A3B: xor     r8, [r9+8]
 * 00000001402E2A3F: add     r9, 10h
 * 00000001402E2A43: rol     r8, cl
 * 00000001402E2A46: sub     rax, rdx
 * 00000001402E2A49: jnz     short loc_1402E2A32
 * 00000001402E2A4B: mov     rcx, r9
 * 00000001402E2A4E: sub     rcx, r15
 * 00000001402E2A51: xor     rcx, r12
 * 00000001402E2A54: mov     rax, rcx
 * 00000001402E2A57: rol     rax, 11h
 * 00000001402E2A5B: xor     rcx, rax
 * 00000001402E2A5E: mov     rax, r13
 * 00000001402E2A61: mul     rcx
 * 00000001402E2A64: xor     eax, edx
 * 00000001402E2A66: mov     [rbp+2250h+var_1AA0], rdx
 * 00000001402E2A6D: xor     r11d, eax
 * 00000001402E2A70: mov     edx, 1
 * 00000001402E2A75: and     r11d, 3Fh
 * 00000001402E2A79: cmovz   r11d, edx
 * 00000001402E2A7D: add     ebx, 0FFFFFFFFh
 * 00000001402E2A80: jnz     short loc_1402E2A2D
 * 00000001402E2A82: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E2A89: xor     r13d, r13d
 * 00000001402E2A8C: and     r10d, 7Fh
 * 00000001402E2A90: mov     r12d, 1
 * 00000001402E2A96: cmp     r10d, 8
 * 00000001402E2A9A: jb      short loc_1402E2AB9
 * 00000001402E2A9C: mov     eax, r10d
 * 00000001402E2A9F: shr     rax, 3
 * 00000001402E2AA3: xor     r8, [r9]
 * 00000001402E2AA6: mov     ecx, r11d
 * 00000001402E2AA9: rol     r8, cl
 * 00000001402E2AAC: add     r9, 8
 * 00000001402E2AB0: add     r10d, 0FFFFFFF8h
 * 00000001402E2AB4: sub     rax, r12
 * 00000001402E2AB7: jnz     short loc_1402E2AA3
 * 00000001402E2AB9: test    r10d, r10d
 * 00000001402E2ABC: jz      short loc_1402E2AD4
 * 00000001402E2ABE: movzx   eax, byte ptr [r9]
 * 00000001402E2AC2: mov     ecx, r11d
 * 00000001402E2AC5: xor     r8, rax
 * 00000001402E2AC8: add     r9, r12
 * 00000001402E2ACB: rol     r8, cl
 * 00000001402E2ACE: add     r10d, 0FFFFFFFFh
 * 00000001402E2AD2: jnz     short loc_1402E2ABE
 * 00000001402E2AD4: mov     rax, r8
 * 00000001402E2AD7: shr     rax, 1Fh
 * 00000001402E2ADB: xor     r11d, r11d
 * 00000001402E2ADE: jmp     loc_1402E2C42
 * 00000001402E2AE3: bt      r12d, 8
 * 00000001402E2AE8: jb      loc_1402E29D4
 * 00000001402E2AEE: mov     rdi, [rbp+2250h+var_2198]
 * 00000001402E2AF5: mov     eax, 2
 * 00000001402E2AFA: mov     [rbp+2250h+var_212B], al
 * 00000001402E2B00: mov     ecx, r8d
 * 00000001402E2B03: mov     eax, 3
 * 00000001402E2B08: mov     [rbp+2250h+var_212A], r15b
 * 00000001402E2B0F: mov     [rbp+2250h+var_2128], al
 * 00000001402E2B15: mov     r10, r8
 * 00000001402E2B18: mov     eax, 0Ch
 * 00000001402E2B1D: mov     [rbp+2250h+var_2130], r13b
 * 00000001402E2B24: mov     [rbp+2250h+var_212F], al
 * 00000001402E2B2A: mov     ebx, r13d
 * 00000001402E2B2D: mov     eax, 0Fh
 * 00000001402E2B32: mov     [rbp+2250h+var_212D], r11b
 * 00000001402E2B39: mov     r15, r13
 * 00000001402E2B3C: mov     [rbp+2250h+var_2127], 5
 * 00000001402E2B43: mov     r13, [rbp+2250h+var_2170]
 * 00000001402E2B4A: mov     r11, r8
 * 00000001402E2B4D: mov     [rbp+2250h+var_2124], 6
 * 00000001402E2B54: lea     esi, [rax+1]
 * 00000001402E2B57: mov     [rbp+2250h+var_2129], 7
 * 00000001402E2B5E: mov     [rbp+2250h+var_2123], 8
 * 00000001402E2B65: mov     [rbp+2250h+var_2126], 9
 * 00000001402E2B6C: mov     [rbp+2250h+var_2122], 0Ah
 * 00000001402E2B73: mov     [rbp+2250h+var_212C], 0Bh
 * 00000001402E2B7A: mov     [rbp+2250h+var_2121], 0Dh
 * 00000001402E2B81: mov     [rbp+2250h+var_2125], 0Eh
 * 00000001402E2B88: mov     [rbp+2250h+var_212E], al
 * 00000001402E2B8E: ror     r10, cl
 * 00000001402E2B91: mov     rdx, [r11]
 * 00000001402E2B94: mov     r14d, 1
 * 00000001402E2B9A: mov     r9, rsi
 * 00000001402E2B9D: lea     r12d, [r14+0Eh]
 * 00000001402E2BA1: movzx   eax, byte ptr [r11]
 * 00000001402E2BA5: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402E2BA9: and     rax, r12
 * 00000001402E2BAC: movzx   ecx, [rbp+rax+2250h+var_2130]
 * 00000001402E2BB4: or      rdx, rcx
 * 00000001402E2BB7: ror     rdx, 4
 * 00000001402E2BBB: mov     [r11], rdx
 * 00000001402E2BBE: sub     r9, r14
 * 00000001402E2BC1: jnz     short loc_1402E2BA1
 * 00000001402E2BC3: sub     rdx, r15
 * 00000001402E2BC6: test    [rbp+2250h+var_2234], 200h
 * 00000001402E2BCD: mov     [r11], rdx
 * 00000001402E2BD0: jnz     short loc_1402E2BE8
 * 00000001402E2BD2: mov     r9, r13
 * 00000001402E2BD5: mov     ecx, edi
 * 00000001402E2BD7: xor     r9, rdx
 * 00000001402E2BDA: bswap   r9
 * 00000001402E2BDD: xor     r9, r10
 * 00000001402E2BE0: ror     r9, cl
 * 00000001402E2BE3: xor     r9, rdi
 * 00000001402E2BE6: jmp     short loc_1402E2BEE
 * 00000001402E2BE8: mov     r9, r10
 * 00000001402E2BEB: xor     r9, rdx
 * 00000001402E2BEE: mov     edx, 0C8h
 * 00000001402E2BF3: mov     [r11], r9
 * 00000001402E2BF6: sub     edx, ebx
 * 00000001402E2BF8: mov     ecx, r9d
 * 00000001402E2BFB: imul    edx, ebx
 * 00000001402E2BFE: not     ecx
 * 00000001402E2C00: add     r11, 8
 * 00000001402E2C04: add     r15, r8
 * 00000001402E2C07: ror     rdx, cl
 * 00000001402E2C0A: mov     ecx, r9d
 * 00000001402E2C0D: xor     r10, rdx
 * 00000001402E2C10: mov     rdx, r14
 * 00000001402E2C13: rol     r10, cl
 * 00000001402E2C16: add     ebx, edx
 * 00000001402E2C18: add     r10, r8
 * 00000001402E2C1B: cmp     ebx, 19h
 * 00000001402E2C1E: jb      loc_1402E2B91
 * 00000001402E2C24: mov     rsi, [rbp+2250h+var_2220]
 * 00000001402E2C28: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E2C2F: mov     r14, [rbp+2250h+var_2248]
 * 00000001402E2C33: xor     r13d, r13d
 * 00000001402E2C36: jmp     loc_1402E29D9
 * 00000001402E2C3B: xor     r8d, eax
 * 00000001402E2C3E: shr     rax, 1Fh
 * 00000001402E2C42: test    rax, rax
 * 00000001402E2C45: jnz     short loc_1402E2C3B
 * 00000001402E2C47: btr     r8d, 1Fh
 * 00000001402E2C4C: mov     [r14+14h], r8d
 * 00000001402E2C50: jmp     loc_1402E24B4
 * 00000001402E2C55: mov     r9, 7010008004002001h
 * 00000001402E2C5F: mov     r12d, 1
 * 00000001402E2C65: mov     r13d, [rsi+828h]
 * 00000001402E2C6C: mov     [rbp+2250h+var_2228], r11d
 * 00000001402E2C70: mov     [rbp+2250h+var_2250], r11
 * 00000001402E2C74: mov     [rbp+2250h+var_2234], r13d
 * 00000001402E2C78: bt      r13d, 1Eh
 * 00000001402E2C7D: jb      loc_1402E3389
 * 00000001402E2C83: mov     r14, [rsp+11A0h+arg_0]
 * 00000001402E2C8B: cmp     rsi, r14
 * 00000001402E2C8E: jnz     loc_1402E349A
 * 00000001402E2C94: mov     eax, 8000h
 * 00000001402E2C99: test    eax, r13d
 * 00000001402E2C9C: jnz     short loc_1402E2CAB
 * 00000001402E2C9E: cmp     [rsi+790h], r11d
 * 00000001402E2CA5: jnz     loc_1402E3165
 * 00000001402E2CAB: mov     r8d, [r14+7BCh]
 * 00000001402E2CB2: mov     rcx, r14
 * 00000001402E2CB5: mov     edx, [r14+684h]
 * 00000001402E2CBC: call    sub_1402E732C
 * 00000001402E2CC1: mov     rsi, rax
 * 00000001402E2CC4: test    rax, rax
 * 00000001402E2CC7: jz      loc_1402E3165
 * 00000001402E2CCD: mov     rax, [rax+668h]
 * 00000001402E2CD4: mov     ecx, 2
 * 00000001402E2CD9: mov     [rbp+2250h+var_2250], rax
 * 00000001402E2CDD: mov     eax, [rsi+828h]
 * 00000001402E2CE3: mov     [rbp+2250h+var_2234], eax
 * 00000001402E2CE6: test    cl, al
 * 00000001402E2CE8: jz      short loc_1402E2CF3
 * 00000001402E2CEA: mov     r15d, [rsi+684h]
 * 00000001402E2CF1: jmp     short loc_1402E2CFA
 * 00000001402E2CF3: mov     r15d, [rsi+6A8h]
 * 00000001402E2CFA: mov     rax, [rsi+4E0h]
 * 00000001402E2D01: add     r15d, 0FFFFFF38h
 * 00000001402E2D08: shr     r15d, 3
 * 00000001402E2D0C: mov     [rbp+2250h+var_2198], rax
 * 00000001402E2D13: mov     rax, [rsi+5B8h]
 * 00000001402E2D1A: mov     [rbp+2250h+var_2230], rax
 * 00000001402E2D1E: mov     [rbp+2250h+var_21F8], r15d
 * 00000001402E2D22: mov     [rsi+0C4h], r15d
 * 00000001402E2D29: rdtsc
 * 00000001402E2D2B: shl     rdx, 20h
 * 00000001402E2D2F: lea     r14, [rsi+638h]
 * 00000001402E2D36: or      rax, rdx
 * 00000001402E2D39: mov     ebx, 20h ; ' '
 * 00000001402E2D3E: mov     rcx, rax
 * 00000001402E2D41: mov     r8d, ebx
 * 00000001402E2D44: ror     rax, 3
 * 00000001402E2D48: mov     r13d, 0FFFFFFF8h
 * 00000001402E2D4E: xor     rcx, rax
 * 00000001402E2D51: mov     rax, 7010008004002001h
 * 00000001402E2D5B: mul     rcx
 * 00000001402E2D5E: lea     r11d, [rbx-1Ch]
 * 00000001402E2D62: mov     rcx, r14
 * 00000001402E2D65: mov     r10, rdx
 * 00000001402E2D68: mov     [rbp+2250h+var_1A98], rdx
 * 00000001402E2D6F: xor     r10, rax
 * 00000001402E2D72: lea     rdx, [rbp+2250h+var_1800]
 * 00000001402E2D79: mov     rax, [rsi+658h]
 * 00000001402E2D80: mov     r9d, r11d
 * 00000001402E2D83: mov     [rbp+2250h+var_21C8], rax
 * 00000001402E2D8A: mov     eax, [rsi+6C8h]
 * 00000001402E2D90: mov     [rbp+2250h+var_2228], eax
 * 00000001402E2D93: mov     rax, [rcx]
 * 00000001402E2D96: add     r8d, r13d
 * 00000001402E2D99: mov     [rdx], rax
 * 00000001402E2D9C: add     rcx, 8
 * 00000001402E2DA0: add     rdx, 8
 * 00000001402E2DA4: sub     r9, r12
 * 00000001402E2DA7: jnz     short loc_1402E2D93
 * 00000001402E2DA9: test    r8d, r8d
 * 00000001402E2DAC: jz      short loc_1402E2DBE
 * 00000001402E2DAE: mov     al, [rcx]
 * 00000001402E2DB0: add     rcx, r12
 * 00000001402E2DB3: mov     [rdx], al
 * 00000001402E2DB5: add     rdx, r12
 * 00000001402E2DB8: add     r8d, 0FFFFFFFFh
 * 00000001402E2DBC: jnz     short loc_1402E2DAE
 * 00000001402E2DBE: mov     [rsi+658h], r9
 * 00000001402E2DC5: mov     ecx, ebx
 * 00000001402E2DC7: mov     [rsi+6C8h], r9d
 * 00000001402E2DCE: mov     rax, r14
 * 00000001402E2DD1: mov     rdx, r11
 * 00000001402E2DD4: mov     [rax], r9
 * 00000001402E2DD7: add     ecx, r13d
 * 00000001402E2DDA: add     rax, 8
 * 00000001402E2DDE: sub     rdx, r12
 * 00000001402E2DE1: jnz     short loc_1402E2DD4
 * 00000001402E2DE3: test    ecx, ecx
 * 00000001402E2DE5: jz      short loc_1402E2DF2
 * 00000001402E2DE7: mov     [rax], r9b
 * 00000001402E2DEA: add     rax, r12
 * 00000001402E2DED: add     ecx, 0FFFFFFFFh
 * 00000001402E2DF0: jnz     short loc_1402E2DE7
 * 00000001402E2DF2: mov     eax, [rsi+684h]
 * 00000001402E2DF8: mov     r9, rsi
 * 00000001402E2DFB: add     [rsi+6C8h], eax
 * 00000001402E2E01: mov     rax, rsi
 * 00000001402E2E04: mov     r11d, [rsi+684h]
 * 00000001402E2E0B: mov     ebx, [rsi+6B4h]
 * 00000001402E2E11: mov     r13, [rsi+6B8h]
 * 00000001402E2E18: lea     rcx, [rsi+r11]
 * 00000001402E2E1C: cmp     rsi, rcx
 * 00000001402E2E1F: jnb     short loc_1402E2E31
 * 00000001402E2E21: mov     edx, 40h ; '@'
 * 00000001402E2E26: prefetchnta byte ptr [rax]
 * 00000001402E2E29: add     rax, rdx
 * 00000001402E2E2C: cmp     rax, rcx
 * 00000001402E2E2F: jb      short loc_1402E2E26
 * 00000001402E2E31: mov     r12d, r11d
 * 00000001402E2E34: mov     r8, r13
 * 00000001402E2E37: shr     r12d, 7
 * 00000001402E2E3B: test    r12d, r12d
 * 00000001402E2E3E: jz      short loc_1402E2EA7
 * 00000001402E2E40: mov     edi, 1
 * 00000001402E2E45: mov     r15, 7010008004002001h
 * 00000001402E2E4F: mov     eax, 8
 * 00000001402E2E54: xor     r8, [r9]
 * 00000001402E2E57: mov     ecx, ebx
 * 00000001402E2E59: rol     r8, cl
 * 00000001402E2E5C: xor     r8, [r9+8]
 * 00000001402E2E60: add     r9, 10h
 * 00000001402E2E64: rol     r8, cl
 * 00000001402E2E67: sub     rax, rdi
 * 00000001402E2E6A: jnz     short loc_1402E2E54
 * 00000001402E2E6C: mov     rcx, r9
 * 00000001402E2E6F: sub     rcx, rsi
 * 00000001402E2E72: xor     rcx, r13
 * 00000001402E2E75: mov     rax, rcx
 * 00000001402E2E78: rol     rax, 11h
 * 00000001402E2E7C: xor     rcx, rax
 * 00000001402E2E7F: mov     rax, r15
 * 00000001402E2E82: mul     rcx
 * 00000001402E2E85: xor     eax, edx
 * 00000001402E2E87: mov     [rbp+2250h+var_1A90], rdx
 * 00000001402E2E8E: xor     ebx, eax
 * 00000001402E2E90: and     ebx, 3Fh
 * 00000001402E2E93: cmovz   ebx, edi
 * 00000001402E2E96: add     r12d, 0FFFFFFFFh
 * 00000001402E2E9A: jnz     short loc_1402E2E4F
 * 00000001402E2E9C: mov     r15d, [rbp+2250h+var_21F8]
 * 00000001402E2EA0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E2EA7: and     r11d, 7Fh
 * 00000001402E2EAB: mov     r12d, 1
 * 00000001402E2EB1: cmp     r11d, 8
 * 00000001402E2EB5: jb      short loc_1402E2ED3
 * 00000001402E2EB7: mov     eax, r11d
 * 00000001402E2EBA: shr     rax, 3
 * 00000001402E2EBE: xor     r8, [r9]
 * 00000001402E2EC1: mov     ecx, ebx
 * 00000001402E2EC3: rol     r8, cl
 * 00000001402E2EC6: add     r9, 8
 * 00000001402E2ECA: add     r11d, 0FFFFFFF8h
 * 00000001402E2ECE: sub     rax, r12
 * 00000001402E2ED1: jnz     short loc_1402E2EBE
 * 00000001402E2ED3: test    r11d, r11d
 * 00000001402E2ED6: jz      short loc_1402E2EED
 * 00000001402E2ED8: movzx   eax, byte ptr [r9]
 * 00000001402E2EDC: mov     ecx, ebx
 * 00000001402E2EDE: xor     r8, rax
 * 00000001402E2EE1: add     r9, r12
 * 00000001402E2EE4: rol     r8, cl
 * 00000001402E2EE7: add     r11d, 0FFFFFFFFh
 * 00000001402E2EEB: jnz     short loc_1402E2ED8
 * 00000001402E2EED: mov     rax, [rbp+2250h+var_21C8]
 * 00000001402E2EF4: lea     rcx, [rbp+2250h+var_1800]
 * 00000001402E2EFB: mov     r9d, 4
 * 00000001402E2F01: mov     [rsi+658h], rax
 * 00000001402E2F08: mov     eax, [rbp+2250h+var_2228]
 * 00000001402E2F0B: mov     edx, r9d
 * 00000001402E2F0E: add     [rsi+6C8h], eax
 * 00000001402E2F14: lea     r11d, [r9+1Ch]
 * 00000001402E2F18: mov     rax, [rcx]
 * 00000001402E2F1B: add     r11d, 0FFFFFFF8h
 * 00000001402E2F1F: mov     [r14], rax
 * 00000001402E2F22: add     rcx, 8
 * 00000001402E2F26: add     r14, 8
 * 00000001402E2F2A: sub     rdx, r12
 * 00000001402E2F2D: jnz     short loc_1402E2F18
 * 00000001402E2F2F: test    r11d, r11d
 * 00000001402E2F32: jz      short loc_1402E2F45
 * 00000001402E2F34: mov     al, [rcx]
 * 00000001402E2F36: add     rcx, r12
 * 00000001402E2F39: mov     [r14], al
 * 00000001402E2F3C: add     r14, r12
 * 00000001402E2F3F: add     r11d, 0FFFFFFFFh
 * 00000001402E2F43: jnz     short loc_1402E2F34
 * 00000001402E2F45: xor     r11d, r11d
 * 00000001402E2F48: mov     [rsi+658h], r8
 * 00000001402E2F4F: test    dword ptr [rsi+828h], 40000000h
 * 00000001402E2F59: jnz     loc_1402E37DD
 * 00000001402E2F5F: mov     rcx, rsi
 * 00000001402E2F62: lea     r12d, [r11+19h]
 * 00000001402E2F66: mov     eax, r11d
 * 00000001402E2F69: lea     r13d, [r11+1]
 * 00000001402E2F6D: xor     [rcx], r10
 * 00000001402E2F70: add     eax, r13d
 * 00000001402E2F73: lea     rcx, [rcx+8]
 * 00000001402E2F77: cmp     eax, r12d
 * 00000001402E2F7A: jb      short loc_1402E2F6D
 * 00000001402E2F7C: mov     [rbp+2250h+var_1FB8], r10
 * 00000001402E2F83: test    r10, r10
 * 00000001402E2F86: jz      short loc_1402E2FC8
 * 00000001402E2F88: test    r15d, r15d
 * 00000001402E2F8B: jz      short loc_1402E2FC8
 * 00000001402E2F8D: mov     edx, r15d
 * 00000001402E2F90: dec     rdx
 * 00000001402E2F93: lea     rdx, [rcx+rdx*8]
 * 00000001402E2F97: xor     [rdx], r10
 * 00000001402E2F9A: lea     rax, [rbp+2250h+var_1FB8]
 * 00000001402E2FA1: mov     ecx, r15d
 * 00000001402E2FA4: lea     rdx, [rdx-8]
 * 00000001402E2FA8: ror     r10, cl
 * 00000001402E2FAB: mov     [rbp+2250h+var_1FB8], r10
 * 00000001402E2FB2: and     r10d, 3Fh
 * 00000001402E2FB6: btc     [rax], r10
 * 00000001402E2FBA: sub     r15d, r13d
 * 00000001402E2FBD: jz      short loc_1402E2FC8
 * 00000001402E2FBF: mov     r10, [rbp+2250h+var_1FB8]
 * 00000001402E2FC6: jmp     short loc_1402E2F97
 * 00000001402E2FC8: mov     r14d, [rbp+2250h+var_2234]
 * 00000001402E2FCC: bt      r14d, 13h
 * 00000001402E2FD1: jnb     short loc_1402E301E
 * 00000001402E2FD3: rdtsc
 * 00000001402E2FD5: shl     rdx, 20h
 * 00000001402E2FD9: or      rax, rdx
 * 00000001402E2FDC: mov     rcx, rax
 * 00000001402E2FDF: ror     rax, 3
 * 00000001402E2FE3: xor     rcx, rax
 * 00000001402E2FE6: mov     rax, 7010008004002001h
 * 00000001402E2FF0: mul     rcx
 * 00000001402E2FF3: mov     rcx, rdx
 * 00000001402E2FF6: mov     [rbp+2250h+var_1A88], rdx
 * 00000001402E2FFD: xor     rcx, rax
 * 00000001402E3000: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402E300A: mul     rcx
 * 00000001402E300D: shr     rdx, 1
 * 00000001402E3010: lea     rax, [rdx+rdx*2]
 * 00000001402E3014: cmp     rcx, rax
 * 00000001402E3017: jz      short loc_1402E3029
 * 00000001402E3019: jmp     loc_1402E315D
 * 00000001402E301E: bt      r14d, 8
 * 00000001402E3023: jb      loc_1402E315D
 * 00000001402E3029: mov     rdi, [rbp+2250h+var_2230]
 * 00000001402E302D: mov     eax, 2
 * 00000001402E3032: mov     r15, [rbp+2250h+var_2198]
 * 00000001402E3039: mov     ecx, esi
 * 00000001402E303B: mov     [rbp+2250h+var_211B], al
 * 00000001402E3041: mov     r10, rsi
 * 00000001402E3044: mov     eax, 3
 * 00000001402E3049: mov     [rbp+2250h+var_211A], r9b
 * 00000001402E3050: mov     [rbp+2250h+var_2118], al
 * 00000001402E3056: mov     r9, rsi
 * 00000001402E3059: mov     eax, 0Ch
 * 00000001402E305E: ror     r9, cl
 * 00000001402E3061: mov     [rbp+2250h+var_211F], al
 * 00000001402E3067: mov     eax, 0Fh
 * 00000001402E306C: mov     [rbp+2250h+var_211E], al
 * 00000001402E3072: xor     eax, eax
 * 00000001402E3074: mov     ebx, eax
 * 00000001402E3076: mov     [rbp+2250h+var_2120], r11b
 * 00000001402E307D: mov     [rbp+2250h+var_211D], r13b
 * 00000001402E3084: mov     [rbp+2250h+var_2117], 5
 * 00000001402E308B: mov     [rbp+2250h+var_2114], 6
 * 00000001402E3092: mov     [rbp+2250h+var_2119], 7
 * 00000001402E3099: mov     [rbp+2250h+var_2113], 8
 * 00000001402E30A0: mov     [rbp+2250h+var_2116], 9
 * 00000001402E30A7: mov     [rbp+2250h+var_2112], 0Ah
 * 00000001402E30AE: mov     [rbp+2250h+var_211C], 0Bh
 * 00000001402E30B5: mov     [rbp+2250h+var_2111], 0Dh
 * 00000001402E30BC: mov     [rbp+2250h+var_2115], 0Eh
 * 00000001402E30C3: mov     rdx, [r10]
 * 00000001402E30C6: mov     r8d, 10h
 * 00000001402E30CC: lea     r14d, [r8-1]
 * 00000001402E30D0: movzx   eax, byte ptr [r10]
 * 00000001402E30D4: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402E30D8: and     rax, r14
 * 00000001402E30DB: movzx   ecx, [rbp+rax+2250h+var_2120]
 * 00000001402E30E3: or      rdx, rcx
 * 00000001402E30E6: ror     rdx, 4
 * 00000001402E30EA: mov     [r10], rdx
 * 00000001402E30ED: sub     r8, r13
 * 00000001402E30F0: jnz     short loc_1402E30D0
 * 00000001402E30F2: sub     rdx, rbx
 * 00000001402E30F5: test    [rbp+2250h+var_2234], 200h
 * 00000001402E30FC: mov     [r10], rdx
 * 00000001402E30FF: jnz     short loc_1402E3117
 * 00000001402E3101: mov     r8, r15
 * 00000001402E3104: mov     ecx, edi
 * 00000001402E3106: xor     r8, rdx
 * 00000001402E3109: bswap   r8
 * 00000001402E310C: xor     r8, r9
 * 00000001402E310F: ror     r8, cl
 * 00000001402E3112: xor     r8, rdi
 * 00000001402E3115: jmp     short loc_1402E311D
 * 00000001402E3117: mov     r8, r9
 * 00000001402E311A: xor     r8, rdx
 * 00000001402E311D: mov     edx, 0C8h
 * 00000001402E3122: mov     [r10], r8
 * 00000001402E3125: sub     edx, r11d
 * 00000001402E3128: mov     ecx, r8d
 * 00000001402E312B: imul    edx, r11d
 * 00000001402E312F: not     ecx
 * 00000001402E3131: add     r10, 8
 * 00000001402E3135: add     r11d, r13d
 * 00000001402E3138: add     rbx, rsi
 * 00000001402E313B: ror     rdx, cl
 * 00000001402E313E: mov     ecx, r8d
 * 00000001402E3141: xor     r9, rdx
 * 00000001402E3144: rol     r9, cl
 * 00000001402E3147: add     r9, rsi
 * 00000001402E314A: cmp     r11d, r12d
 * 00000001402E314D: jb      loc_1402E30C3
 * 00000001402E3153: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E315A: xor     r11d, r11d
 * 00000001402E315D: mov     r12, r13
 * 00000001402E3160: jmp     loc_1402E37DD
 * 00000001402E3165: mov     r11d, 20h ; ' '
 * 00000001402E316B: mov     [r14+0C4h], r12d
 * 00000001402E3172: mov     r12, [r14+658h]
 * 00000001402E3179: lea     rbx, [r14+638h]
 * 00000001402E3180: mov     r13d, [r14+6C8h]
 * 00000001402E3187: lea     rdx, [rbp+2250h+var_17E0]
 * 00000001402E318E: mov     rsi, r14
 * 00000001402E3191: mov     [rbp+2250h+var_21C8], r12
 * 00000001402E3198: lea     r10d, [r11-1Ch]
 * 00000001402E319C: mov     [rbp+2250h+var_21F8], r13d
 * 00000001402E31A0: mov     r9d, r10d
 * 00000001402E31A3: lea     r15d, [r11-1Fh]
 * 00000001402E31A7: mov     r8d, r11d
 * 00000001402E31AA: mov     rcx, rbx
 * 00000001402E31AD: mov     rax, [rcx]
 * 00000001402E31B0: add     r8d, 0FFFFFFF8h
 * 00000001402E31B4: mov     [rdx], rax
 * 00000001402E31B7: add     rcx, 8
 * 00000001402E31BB: add     rdx, 8
 * 00000001402E31BF: sub     r9, r15
 * 00000001402E31C2: jnz     short loc_1402E31AD
 * 00000001402E31C4: xor     r15d, r15d
 * 00000001402E31C7: lea     r9d, [r15+1]
 * 00000001402E31CB: test    r8d, r8d
 * 00000001402E31CE: jz      short loc_1402E31E0
 * 00000001402E31D0: mov     al, [rcx]
 * 00000001402E31D2: add     rcx, r9
 * 00000001402E31D5: mov     [rdx], al
 * 00000001402E31D7: add     rdx, r9
 * 00000001402E31DA: add     r8d, 0FFFFFFFFh
 * 00000001402E31DE: jnz     short loc_1402E31D0
 * 00000001402E31E0: mov     [r14+658h], r15
 * 00000001402E31E7: mov     ecx, r11d
 * 00000001402E31EA: mov     [r14+6C8h], r15d
 * 00000001402E31F1: mov     rax, rbx
 * 00000001402E31F4: mov     rdx, r10
 * 00000001402E31F7: mov     [rax], r15
 * 00000001402E31FA: add     ecx, 0FFFFFFF8h
 * 00000001402E31FD: add     rax, 8
 * 00000001402E3201: sub     rdx, r9
 * 00000001402E3204: jnz     short loc_1402E31F7
 * 00000001402E3206: test    ecx, ecx
 * 00000001402E3208: jz      short loc_1402E3215
 * 00000001402E320A: mov     [rax], r15b
 * 00000001402E320D: add     rax, r9
 * 00000001402E3210: add     ecx, 0FFFFFFFFh
 * 00000001402E3213: jnz     short loc_1402E320A
 * 00000001402E3215: mov     eax, [r14+684h]
 * 00000001402E321C: mov     r9, r14
 * 00000001402E321F: add     [r14+6C8h], eax
 * 00000001402E3226: mov     rax, r14
 * 00000001402E3229: mov     r10d, [r14+684h]
 * 00000001402E3230: mov     r11d, [r14+6B4h]
 * 00000001402E3237: mov     r15, [r14+6B8h]
 * 00000001402E323E: lea     rcx, [r14+r10]
 * 00000001402E3242: cmp     r14, rcx
 * 00000001402E3245: jnb     short loc_1402E3257
 * 00000001402E3247: mov     edx, 40h ; '@'
 * 00000001402E324C: prefetchnta byte ptr [rax]
 * 00000001402E324F: add     rax, rdx
 * 00000001402E3252: cmp     rax, rcx
 * 00000001402E3255: jb      short loc_1402E324C
 * 00000001402E3257: mov     r14d, r10d
 * 00000001402E325A: mov     r8, r15
 * 00000001402E325D: shr     r14d, 7
 * 00000001402E3261: test    r14d, r14d
 * 00000001402E3264: jz      short loc_1402E32E1
 * 00000001402E3266: mov     rdi, [rsp+11A0h+arg_0]
 * 00000001402E326E: mov     r12d, 1
 * 00000001402E3274: mov     r13, 7010008004002001h
 * 00000001402E327E: mov     eax, 8
 * 00000001402E3283: xor     r8, [r9]
 * 00000001402E3286: mov     ecx, r11d
 * 00000001402E3289: rol     r8, cl
 * 00000001402E328C: xor     r8, [r9+8]
 * 00000001402E3290: add     r9, 10h
 * 00000001402E3294: rol     r8, cl
 * 00000001402E3297: sub     rax, r12
 * 00000001402E329A: jnz     short loc_1402E3283
 * 00000001402E329C: mov     rcx, r9
 * 00000001402E329F: sub     rcx, rdi
 * 00000001402E32A2: xor     rcx, r15
 * 00000001402E32A5: mov     rax, rcx
 * 00000001402E32A8: rol     rax, 11h
 * 00000001402E32AC: xor     rcx, rax
 * 00000001402E32AF: mov     rax, r13
 * 00000001402E32B2: mul     rcx
 * 00000001402E32B5: xor     eax, edx
 * 00000001402E32B7: mov     [rbp+2250h+var_1A80], rdx
 * 00000001402E32BE: xor     r11d, eax
 * 00000001402E32C1: and     r11d, 3Fh
 * 00000001402E32C5: cmovz   r11d, r12d
 * 00000001402E32C9: add     r14d, 0FFFFFFFFh
 * 00000001402E32CD: jnz     short loc_1402E327E
 * 00000001402E32CF: mov     r12, [rbp+2250h+var_21C8]
 * 00000001402E32D6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E32DD: mov     r13d, [rbp+2250h+var_21F8]
 * 00000001402E32E1: and     r10d, 7Fh
 * 00000001402E32E5: mov     r14d, 1
 * 00000001402E32EB: cmp     r10d, 8
 * 00000001402E32EF: jb      short loc_1402E330E
 * 00000001402E32F1: mov     eax, r10d
 * 00000001402E32F4: shr     rax, 3
 * 00000001402E32F8: xor     r8, [r9]
 * 00000001402E32FB: mov     ecx, r11d
 * 00000001402E32FE: rol     r8, cl
 * 00000001402E3301: add     r9, 8
 * 00000001402E3305: add     r10d, 0FFFFFFF8h
 * 00000001402E3309: sub     rax, r14
 * 00000001402E330C: jnz     short loc_1402E32F8
 * 00000001402E330E: test    r10d, r10d
 * 00000001402E3311: jz      short loc_1402E3329
 * 00000001402E3313: movzx   eax, byte ptr [r9]
 * 00000001402E3317: mov     ecx, r11d
 * 00000001402E331A: xor     r8, rax
 * 00000001402E331D: add     r9, r14
 * 00000001402E3320: rol     r8, cl
 * 00000001402E3323: add     r10d, 0FFFFFFFFh
 * 00000001402E3327: jnz     short loc_1402E3313
 * 00000001402E3329: mov     r9, [rsp+11A0h+arg_0]
 * 00000001402E3331: lea     rcx, [rbp+2250h+var_17E0]
 * 00000001402E3338: mov     edx, 4
 * 00000001402E333D: mov     [r9+658h], r12
 * 00000001402E3344: add     [r9+6C8h], r13d
 * 00000001402E334B: lea     r12d, [rdx-3]
 * 00000001402E334F: lea     r10d, [rdx+1Ch]
 * 00000001402E3353: mov     rax, [rcx]
 * 00000001402E3356: add     r10d, 0FFFFFFF8h
 * 00000001402E335A: mov     [rbx], rax
 * 00000001402E335D: add     rcx, 8
 * 00000001402E3361: add     rbx, 8
 * 00000001402E3365: sub     rdx, r12
 * 00000001402E3368: jnz     short loc_1402E3353
 * 00000001402E336A: xor     r11d, r11d
 * 00000001402E336D: test    r10d, r10d
 * 00000001402E3370: jz      short loc_1402E3382
 * 00000001402E3372: mov     al, [rcx]
 * 00000001402E3374: add     rcx, r12
 * 00000001402E3377: mov     [rbx], al
 * 00000001402E3379: add     rbx, r12
 * 00000001402E337C: add     r10d, 0FFFFFFFFh
 * 00000001402E3380: jnz     short loc_1402E3372
 * 00000001402E3382: mov     [r9+658h], r8
 * 00000001402E3389: mov     ebx, [rsi+828h]
 * 00000001402E338F: mov     r15, r11
 * 00000001402E3392: mov     [rbp+2250h+var_2230], r11
 * 00000001402E3396: bt      ebx, 1Eh
 * 00000001402E339A: jb      loc_1402E39CD
 * 00000001402E33A0: bt      ebx, 8
 * 00000001402E33A4: jb      loc_1402E39B7
 * 00000001402E33AA: mov     r12, [rsi+5B8h]
 * 00000001402E33B1: mov     edi, 1
 * 00000001402E33B6: mov     r13, [rsi+4E0h]
 * 00000001402E33BD: mov     ecx, esi
 * 00000001402E33BF: mov     r9, rsi
 * 00000001402E33C2: mov     [rbp+2250h+var_2140], r11b
 * 00000001402E33C9: ror     r9, cl
 * 00000001402E33CC: mov     r10, rsi
 * 00000001402E33CF: lea     eax, [rdi+1]
 * 00000001402E33D2: mov     [rbp+2250h+var_213D], dil
 * 00000001402E33D9: mov     [rbp+2250h+var_213B], al
 * 00000001402E33DF: lea     r15d, [rdi+0Eh]
 * 00000001402E33E3: lea     eax, [rdi+2]
 * 00000001402E33E6: mov     [rbp+2250h+var_213A], 4
 * 00000001402E33ED: mov     [rbp+2250h+var_2138], al
 * 00000001402E33F3: lea     eax, [rdi+0Bh]
 * 00000001402E33F6: mov     [rbp+2250h+var_213F], al
 * 00000001402E33FC: lea     eax, [rdi+0Eh]
 * 00000001402E33FF: mov     [rbp+2250h+var_213E], al
 * 00000001402E3405: xor     eax, eax
 * 00000001402E3407: mov     r14d, eax
 * 00000001402E340A: mov     [rbp+2250h+var_2137], 5
 * 00000001402E3411: mov     [rbp+2250h+var_2134], 6
 * 00000001402E3418: mov     [rbp+2250h+var_2139], 7
 * 00000001402E341F: mov     [rbp+2250h+var_2133], 8
 * 00000001402E3426: mov     [rbp+2250h+var_2136], 9
 * 00000001402E342D: mov     [rbp+2250h+var_2132], 0Ah
 * 00000001402E3434: mov     [rbp+2250h+var_213C], 0Bh
 * 00000001402E343B: mov     [rbp+2250h+var_2131], 0Dh
 * 00000001402E3442: mov     [rbp+2250h+var_2135], 0Eh
 * 00000001402E3449: mov     r8, [r10]
 * 00000001402E344C: mov     edx, 10h
 * 00000001402E3451: movzx   eax, byte ptr [r10]
 * 00000001402E3455: and     r8, 0FFFFFFFFFFFFFFF0h
 * 00000001402E3459: and     rax, r15
 * 00000001402E345C: movzx   ecx, [rbp+rax+2250h+var_2140]
 * 00000001402E3464: or      r8, rcx
 * 00000001402E3467: ror     r8, 4
 * 00000001402E346B: mov     [r10], r8
 * 00000001402E346E: sub     rdx, rdi
 * 00000001402E3471: jnz     short loc_1402E3451
 * 00000001402E3473: sub     r8, r14
 * 00000001402E3476: mov     [r10], r8
 * 00000001402E3479: bt      ebx, 9
 * 00000001402E347D: jb      loc_1402E3967
 * 00000001402E3483: xor     r8, r13
 * 00000001402E3486: mov     ecx, r12d
 * 00000001402E3489: bswap   r8
 * 00000001402E348C: xor     r8, r9
 * 00000001402E348F: ror     r8, cl
 * 00000001402E3492: xor     r8, r12
 * 00000001402E3495: jmp     loc_1402E396A
 * 00000001402E349A: mov     rax, [rsi+668h]
 * 00000001402E34A1: mov     [rbp+2250h+var_2250], rax
 * 00000001402E34A5: mov     eax, 2
 * 00000001402E34AA: test    al, r13b
 * 00000001402E34AD: jz      short loc_1402E34B8
 * 00000001402E34AF: mov     r15d, [rsi+684h]
 * 00000001402E34B6: jmp     short loc_1402E34BF
 * 00000001402E34B8: mov     r15d, [rsi+6A8h]
 * 00000001402E34BF: mov     rax, [rsi+4E0h]
 * 00000001402E34C6: add     r15d, 0FFFFFF38h
 * 00000001402E34CD: shr     r15d, 3
 * 00000001402E34D1: mov     [rbp+2250h+var_2170], rax
 * 00000001402E34D8: mov     rax, [rsi+5B8h]
 * 00000001402E34DF: mov     [rbp+2250h+var_2198], rax
 * 00000001402E34E6: mov     [rbp+2250h+var_21F8], r15d
 * 00000001402E34EA: mov     [rsi+0C4h], r15d
 * 00000001402E34F1: rdtsc
 * 00000001402E34F3: shl     rdx, 20h
 * 00000001402E34F7: lea     r14, [rsi+638h]
 * 00000001402E34FE: or      rax, rdx
 * 00000001402E3501: mov     ebx, 20h ; ' '
 * 00000001402E3506: mov     rcx, rax
 * 00000001402E3509: mov     r8d, ebx
 * 00000001402E350C: ror     rax, 3
 * 00000001402E3510: xor     rcx, rax
 * 00000001402E3513: mov     rax, r9
 * 00000001402E3516: mul     rcx
 * 00000001402E3519: lea     r10d, [rbx-1Ch]
 * 00000001402E351D: mov     rcx, r14
 * 00000001402E3520: mov     r11, rdx
 * 00000001402E3523: mov     [rbp+2250h+var_1A78], rdx
 * 00000001402E352A: xor     r11, rax
 * 00000001402E352D: lea     rdx, [rbp+2250h+var_17C0]
 * 00000001402E3534: mov     rax, [rsi+658h]
 * 00000001402E353B: mov     r9d, r10d
 * 00000001402E353E: mov     [rbp+2250h+var_2230], rax
 * 00000001402E3542: mov     eax, [rsi+6C8h]
 * 00000001402E3548: mov     [rbp+2250h+var_2228], eax
 * 00000001402E354B: mov     rax, [rcx]
 * 00000001402E354E: add     r8d, 0FFFFFFF8h
 * 00000001402E3552: mov     [rdx], rax
 * 00000001402E3555: add     rcx, 8
 * 00000001402E3559: add     rdx, 8
 * 00000001402E355D: sub     r9, r12
 * 00000001402E3560: jnz     short loc_1402E354B
 * 00000001402E3562: test    r8d, r8d
 * 00000001402E3565: jz      short loc_1402E3577
 * 00000001402E3567: mov     al, [rcx]
 * 00000001402E3569: add     rcx, r12
 * 00000001402E356C: mov     [rdx], al
 * 00000001402E356E: add     rdx, r12
 * 00000001402E3571: add     r8d, 0FFFFFFFFh
 * 00000001402E3575: jnz     short loc_1402E3567
 * 00000001402E3577: mov     [rsi+658h], r9
 * 00000001402E357E: mov     ecx, ebx
 * 00000001402E3580: mov     [rsi+6C8h], r9d
 * 00000001402E3587: mov     rax, r14
 * 00000001402E358A: mov     rdx, r10
 * 00000001402E358D: mov     [rax], r9
 * 00000001402E3590: add     ecx, 0FFFFFFF8h
 * 00000001402E3593: add     rax, 8
 * 00000001402E3597: sub     rdx, r12
 * 00000001402E359A: jnz     short loc_1402E358D
 * 00000001402E359C: test    ecx, ecx
 * 00000001402E359E: jz      short loc_1402E35AB
 * 00000001402E35A0: mov     [rax], r9b
 * 00000001402E35A3: add     rax, r12
 * 00000001402E35A6: add     ecx, 0FFFFFFFFh
 * 00000001402E35A9: jnz     short loc_1402E35A0
 * 00000001402E35AB: mov     eax, [rsi+684h]
 * 00000001402E35B1: mov     r9, rsi
 * 00000001402E35B4: add     [rsi+6C8h], eax
 * 00000001402E35BA: mov     ebx, [rsi+684h]
 * 00000001402E35C0: mov     r10d, [rsi+6B4h]
 * 00000001402E35C7: mov     r8, [rsi+6B8h]
 * 00000001402E35CE: lea     rcx, [rsi+rbx]
 * 00000001402E35D2: cmp     rsi, rcx
 * 00000001402E35D5: jnb     short loc_1402E35EA
 * 00000001402E35D7: mov     rax, rsi
 * 00000001402E35DA: mov     edx, 40h ; '@'
 * 00000001402E35DF: prefetchnta byte ptr [rax]
 * 00000001402E35E2: add     rax, rdx
 * 00000001402E35E5: cmp     rax, rcx
 * 00000001402E35E8: jb      short loc_1402E35DF
 * 00000001402E35EA: mov     r12d, ebx
 * 00000001402E35ED: shr     r12d, 7
 * 00000001402E35F1: test    r12d, r12d
 * 00000001402E35F4: jz      short loc_1402E366A
 * 00000001402E35F6: mov     rdi, r8
 * 00000001402E35F9: mov     r13d, 1
 * 00000001402E35FF: mov     r15, 7010008004002001h
 * 00000001402E3609: mov     eax, 8
 * 00000001402E360E: xor     r8, [r9]
 * 00000001402E3611: mov     ecx, r10d
 * 00000001402E3614: rol     r8, cl
 * 00000001402E3617: xor     r8, [r9+8]
 * 00000001402E361B: add     r9, 10h
 * 00000001402E361F: rol     r8, cl
 * 00000001402E3622: sub     rax, r13
 * 00000001402E3625: jnz     short loc_1402E360E
 * 00000001402E3627: mov     rcx, r9
 * 00000001402E362A: sub     rcx, rsi
 * 00000001402E362D: xor     rcx, rdi
 * 00000001402E3630: mov     rax, rcx
 * 00000001402E3633: rol     rax, 11h
 * 00000001402E3637: xor     rcx, rax
 * 00000001402E363A: mov     rax, r15
 * 00000001402E363D: mul     rcx
 * 00000001402E3640: xor     r10d, eax
 * 00000001402E3643: mov     [rbp+2250h+var_1A70], rdx
 * 00000001402E364A: xor     r10d, edx
 * 00000001402E364D: and     r10d, 3Fh
 * 00000001402E3651: cmovz   r10d, r13d
 * 00000001402E3655: add     r12d, 0FFFFFFFFh
 * 00000001402E3659: jnz     short loc_1402E3609
 * 00000001402E365B: mov     r15d, [rbp+2250h+var_21F8]
 * 00000001402E365F: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E3666: mov     r13d, [rbp+2250h+var_2234]
 * 00000001402E366A: and     ebx, 7Fh
 * 00000001402E366D: mov     r12d, 1
 * 00000001402E3673: cmp     ebx, 8
 * 00000001402E3676: jb      short loc_1402E3693
 * 00000001402E3678: mov     eax, ebx
 * 00000001402E367A: shr     rax, 3
 * 00000001402E367E: xor     r8, [r9]
 * 00000001402E3681: mov     ecx, r10d
 * 00000001402E3684: rol     r8, cl
 * 00000001402E3687: add     r9, 8
 * 00000001402E368B: add     ebx, 0FFFFFFF8h
 * 00000001402E368E: sub     rax, r12
 * 00000001402E3691: jnz     short loc_1402E367E
 * 00000001402E3693: test    ebx, ebx
 * 00000001402E3695: jz      short loc_1402E36AC
 * 00000001402E3697: movzx   eax, byte ptr [r9]
 * 00000001402E369B: mov     ecx, r10d
 * 00000001402E369E: xor     r8, rax
 * 00000001402E36A1: add     r9, r12
 * 00000001402E36A4: rol     r8, cl
 * 00000001402E36A7: add     ebx, 0FFFFFFFFh
 * 00000001402E36AA: jnz     short loc_1402E3697
 * 00000001402E36AC: mov     rax, [rbp+2250h+var_2230]
 * 00000001402E36B0: lea     rcx, [rbp+2250h+var_17C0]
 * 00000001402E36B7: mov     r9d, 4
 * 00000001402E36BD: mov     [rsi+658h], rax
 * 00000001402E36C4: mov     eax, [rbp+2250h+var_2228]
 * 00000001402E36C7: mov     edx, r9d
 * 00000001402E36CA: add     [rsi+6C8h], eax
 * 00000001402E36D0: lea     r10d, [r9+1Ch]
 * 00000001402E36D4: mov     rax, [rcx]
 * 00000001402E36D7: add     r10d, 0FFFFFFF8h
 * 00000001402E36DB: mov     [r14], rax
 * 00000001402E36DE: add     rcx, 8
 * 00000001402E36E2: add     r14, 8
 * 00000001402E36E6: sub     rdx, r12
 * 00000001402E36E9: jnz     short loc_1402E36D4
 * 00000001402E36EB: test    r10d, r10d
 * 00000001402E36EE: jz      short loc_1402E3701
 * 00000001402E36F0: mov     al, [rcx]
 * 00000001402E36F2: add     rcx, r12
 * 00000001402E36F5: mov     [r14], al
 * 00000001402E36F8: add     r14, r12
 * 00000001402E36FB: add     r10d, 0FFFFFFFFh
 * 00000001402E36FF: jnz     short loc_1402E36F0
 * 00000001402E3701: mov     [rsi+658h], r8
 * 00000001402E3708: test    dword ptr [rsi+828h], 40000000h
 * 00000001402E3712: jnz     loc_1402E395F
 * 00000001402E3718: mov     r12d, 19h
 * 00000001402E371E: mov     rcx, rsi
 * 00000001402E3721: mov     eax, edx
 * 00000001402E3723: lea     r8d, [r12-18h]
 * 00000001402E3728: xor     [rcx], r11
 * 00000001402E372B: add     eax, r8d
 * 00000001402E372E: lea     rcx, [rcx+8]
 * 00000001402E3732: cmp     eax, r12d
 * 00000001402E3735: jb      short loc_1402E3728
 * 00000001402E3737: mov     [rbp+2250h+var_1FB0], r11
 * 00000001402E373E: test    r11, r11
 * 00000001402E3741: jz      short loc_1402E3786
 * 00000001402E3743: test    r15d, r15d
 * 00000001402E3746: jz      short loc_1402E3786
 * 00000001402E3748: mov     edx, r15d
 * 00000001402E374B: dec     rdx
 * 00000001402E374E: lea     rdx, [rcx+rdx*8]
 * 00000001402E3752: xor     [rdx], r11
 * 00000001402E3755: lea     rax, [rbp+2250h+var_1FB0]
 * 00000001402E375C: mov     ecx, r15d
 * 00000001402E375F: lea     rdx, [rdx-8]
 * 00000001402E3763: ror     r11, cl
 * 00000001402E3766: mov     [rbp+2250h+var_1FB0], r11
 * 00000001402E376D: and     r11d, 3Fh
 * 00000001402E3771: btc     [rax], r11
 * 00000001402E3775: xor     r11d, r11d
 * 00000001402E3778: sub     r15d, r8d
 * 00000001402E377B: jz      short loc_1402E3789
 * 00000001402E377D: mov     r11, [rbp+2250h+var_1FB0]
 * 00000001402E3784: jmp     short loc_1402E3752
 * 00000001402E3786: xor     r11d, r11d
 * 00000001402E3789: bt      r13d, 13h
 * 00000001402E378E: jnb     loc_1402E3816
 * 00000001402E3794: rdtsc
 * 00000001402E3796: shl     rdx, 20h
 * 00000001402E379A: or      rax, rdx
 * 00000001402E379D: mov     rcx, rax
 * 00000001402E37A0: ror     rax, 3
 * 00000001402E37A4: xor     rcx, rax
 * 00000001402E37A7: mov     rax, 7010008004002001h
 * 00000001402E37B1: mul     rcx
 * 00000001402E37B4: mov     rcx, rdx
 * 00000001402E37B7: mov     [rbp+2250h+var_1A68], rdx
 * 00000001402E37BE: xor     rcx, rax
 * 00000001402E37C1: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402E37CB: mul     rcx
 * 00000001402E37CE: shr     rdx, 1
 * 00000001402E37D1: lea     rax, [rdx+rdx*2]
 * 00000001402E37D5: cmp     rcx, rax
 * 00000001402E37D8: jz      short loc_1402E381D
 * 00000001402E37DA: mov     r12, r8
 * 00000001402E37DD: rdtsc
 * 00000001402E37DF: shl     rdx, 20h
 * 00000001402E37E3: mov     r9, 7010008004002001h
 * 00000001402E37ED: or      rax, rdx
 * 00000001402E37F0: mov     [rbp+2250h+var_2228], r12d
 * 00000001402E37F4: mov     rcx, rax
 * 00000001402E37F7: ror     rax, 3
 * 00000001402E37FB: xor     rcx, rax
 * 00000001402E37FE: mov     rax, r9
 * 00000001402E3801: mul     rcx
 * 00000001402E3804: mov     r15, rdx
 * 00000001402E3807: mov     [rbp+2250h+var_1A60], rdx
 * 00000001402E380E: xor     r15, rax
 * 00000001402E3811: jmp     loc_1402E39D7
 * 00000001402E3816: bt      r13d, 8
 * 00000001402E381B: jb      short loc_1402E37DA
 * 00000001402E381D: mov     rdi, [rbp+2250h+var_2198]
 * 00000001402E3824: mov     eax, 2
 * 00000001402E3829: mov     r14, [rbp+2250h+var_2170]
 * 00000001402E3830: mov     ecx, esi
 * 00000001402E3832: mov     [rbp+2250h+var_210B], al
 * 00000001402E3838: mov     r10, rsi
 * 00000001402E383B: mov     eax, 3
 * 00000001402E3840: mov     [rbp+2250h+var_210A], r9b
 * 00000001402E3847: mov     [rbp+2250h+var_2108], al
 * 00000001402E384D: mov     r9, rsi
 * 00000001402E3850: mov     eax, 0Ch
 * 00000001402E3855: ror     r9, cl
 * 00000001402E3858: mov     [rbp+2250h+var_210F], al
 * 00000001402E385E: mov     r15, r8
 * 00000001402E3861: mov     eax, 0Fh
 * 00000001402E3866: mov     [rbp+2250h+var_2110], r11b
 * 00000001402E386D: mov     [rbp+2250h+var_210E], al
 * 00000001402E3873: xor     eax, eax
 * 00000001402E3875: mov     ebx, eax
 * 00000001402E3877: mov     [rbp+2250h+var_210D], r8b
 * 00000001402E387E: mov     [rbp+2250h+var_2107], 5
 * 00000001402E3885: mov     [rbp+2250h+var_2104], 6
 * 00000001402E388C: mov     [rbp+2250h+var_2109], 7
 * 00000001402E3893: mov     [rbp+2250h+var_2103], 8
 * 00000001402E389A: mov     [rbp+2250h+var_2106], 9
 * 00000001402E38A1: mov     [rbp+2250h+var_2102], 0Ah
 * 00000001402E38A8: mov     [rbp+2250h+var_210C], 0Bh
 * 00000001402E38AF: mov     [rbp+2250h+var_2101], 0Dh
 * 00000001402E38B6: mov     [rbp+2250h+var_2105], 0Eh
 * 00000001402E38BD: mov     rdx, [r10]
 * 00000001402E38C0: mov     r8d, 10h
 * 00000001402E38C6: lea     r13d, [r8-1]
 * 00000001402E38CA: movzx   eax, byte ptr [r10]
 * 00000001402E38CE: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001402E38D2: and     rax, r13
 * 00000001402E38D5: movzx   ecx, [rbp+rax+2250h+var_2110]
 * 00000001402E38DD: or      rdx, rcx
 * 00000001402E38E0: ror     rdx, 4
 * 00000001402E38E4: mov     [r10], rdx
 * 00000001402E38E7: sub     r8, r15
 * 00000001402E38EA: jnz     short loc_1402E38CA
 * 00000001402E38EC: sub     rdx, rbx
 * 00000001402E38EF: test    [rbp+2250h+var_2234], 200h
 * 00000001402E38F6: mov     [r10], rdx
 * 00000001402E38F9: jnz     short loc_1402E3911
 * 00000001402E38FB: mov     r8, r14
 * 00000001402E38FE: mov     ecx, edi
 * 00000001402E3900: xor     r8, rdx
 * 00000001402E3903: bswap   r8
 * 00000001402E3906: xor     r8, r9
 * 00000001402E3909: ror     r8, cl
 * 00000001402E390C: xor     r8, rdi
 * 00000001402E390F: jmp     short loc_1402E3917
 * 00000001402E3911: mov     r8, rdx
 * 00000001402E3914: xor     r8, r9
 * 00000001402E3917: mov     edx, 0C8h
 * 00000001402E391C: mov     [r10], r8
 * 00000001402E391F: sub     edx, r11d
 * 00000001402E3922: mov     ecx, r8d
 * 00000001402E3925: imul    edx, r11d
 * 00000001402E3929: not     ecx
 * 00000001402E392B: add     r10, 8
 * 00000001402E392F: add     r11d, r15d
 * 00000001402E3932: add     rbx, rsi
 * 00000001402E3935: ror     rdx, cl
 * 00000001402E3938: mov     ecx, r8d
 * 00000001402E393B: xor     r9, rdx
 * 00000001402E393E: rol     r9, cl
 * 00000001402E3941: add     r9, rsi
 * 00000001402E3944: cmp     r11d, r12d
 * 00000001402E3947: jb      loc_1402E38BD
 * 00000001402E394D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E3954: xor     r11d, r11d
 * 00000001402E3957: mov     r12, r15
 * 00000001402E395A: jmp     loc_1402E37DD
 * 00000001402E395F: xor     r11d, r11d
 * 00000001402E3962: jmp     loc_1402E37DD
 * 00000001402E3967: xor     r8, r9
 * 00000001402E396A: mov     edx, 0C8h
 * 00000001402E396F: mov     [r10], r8
 * 00000001402E3972: sub     edx, r11d
 * 00000001402E3975: mov     ecx, r8d
 * 00000001402E3978: imul    edx, r11d
 * 00000001402E397C: not     ecx
 * 00000001402E397E: add     r10, 8
 * 00000001402E3982: inc     r11d
 * 00000001402E3985: add     r14, rsi
 * 00000001402E3988: mov     edi, 1
 * 00000001402E398D: ror     rdx, cl
 * 00000001402E3990: mov     ecx, r8d
 * 00000001402E3993: xor     r9, rdx
 * 00000001402E3996: rol     r9, cl
 * 00000001402E3999: add     r9, rsi
 * 00000001402E399C: cmp     r11d, 19h
 * 00000001402E39A0: jb      loc_1402E3449
 * 00000001402E39A6: mov     r15, [rbp+2250h+var_2230]
 * 00000001402E39AA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402E39B1: mov     r12d, 1
 * 00000001402E39B7: mov     rax, [rsi+268h]
 * 00000001402E39BE: lea     rcx, [rsi+6A0h]
 * 00000001402E39C5: call    KeGuardDispatchICall
 * 00000001402E39CA: xor     r11d, r11d
 * 00000001402E39CD: mov     r9, 7010008004002001h
 * 00000001402E39D7: mov     r13, [rsp+11A0h+arg_0]
 * 00000001402E39DF: test    dword ptr [r13+828h], 10000000h
 * 00000001402E39EA: mov     r14, [r13+678h]
 * 00000001402E39F1: jz      short loc_1402E3A28
 * 00000001402E39F3: rdtsc
 * 00000001402E39F5: shl     rdx, 20h
 * 00000001402E39F9: or      rax, rdx
 * 00000001402E39FC: mov     rcx, rax
 * 00000001402E39FF: ror     rax, 3
 * 00000001402E3A03: xor     rcx, rax
 * 00000001402E3A06: mov     rax, r9
 * 00000001402E3A09: mul     rcx
 * 00000001402E3A0C: mov     r14, rdx
 * 00000001402E3A0F: mov     [rbp+2250h+var_1A58], rdx
 * 00000001402E3A16: xor     r14, rax
 * 00000001402E3A19: and     r14, 0Fh
 * 00000001402E3A1D: shl     r14, 4
 * 00000001402E3A21: add     r14, [r13+5C8h]
 * 00000001402E3A28: mov     r8d, 28h ; '('
 * 00000001402E3A2E: lea     rbx, [r13+790h]
 * 00000001402E3A35: mov     rcx, rbx
 * 00000001402E3A38: lea     rdx, [rbp+2250h+var_1D60]
 * 00000001402E3A3F: lea     r9d, [r8-23h]
 * 00000001402E3A43: mov     rax, [rcx]
 * 00000001402E3A46: add     r8d, 0FFFFFFF8h
 * 00000001402E3A4A: mov     [rdx], rax
 * 00000001402E3A4D: add     rcx, 8
 * 00000001402E3A51: add     rdx, 8
 * 00000001402E3A55: sub     r9, r12
 * 00000001402E3A58: jnz     short loc_1402E3A43
 * 00000001402E3A5A: test    r8d, r8d
 * 00000001402E3A5D: jz      short loc_1402E3A6F
 * 00000001402E3A5F: mov     al, [rcx]
 * 00000001402E3A61: add     rcx, r12
 * 00000001402E3A64: mov     [rdx], al
 * 00000001402E3A66: add     rdx, r12
 * 00000001402E3A69: add     r8d, 0FFFFFFFFh
 * 00000001402E3A6D: jnz     short loc_1402E3A5F
 * 00000001402E3A6F: mov     eax, [r13+828h]
 * 00000001402E3A76: mov     ecx, 8000h
 * 00000001402E3A7B: test    ecx, eax
 * 00000001402E3A7D: jnz     short loc_1402E3A88
 * 00000001402E3A7F: cmp     [rbx], r11d
 * 00000001402E3A82: jnz     loc_1402E40C4
 * 00000001402E3A88: bt      eax, 1Eh
 * 00000001402E3A8C: jb      loc_1402E437F
 * 00000001402E3A92: mov     al, [r13+7B8h]
 * 00000001402E3A99: mov     r8, r15
 * 00000001402E3A9C: sub     al, r12b
 * 00000001402E3A9F: xor     r8, rsi
 * 00000001402E3AA2: movzx   r10d, al
 * 00000001402E3AA6: mov     r11d, 3Fh ; '?'
 * 00000001402E3AAC: sub     r11d, r10d
 * 00000001402E3AAF: rdtsc
 * 00000001402E3AB1: shl     rdx, 20h
 * 00000001402E3AB5: mov     rsi, 7010008004002001h
 * 00000001402E3ABF: or      rax, rdx
 * 00000001402E3AC2: mov     rcx, rax
 * 00000001402E3AC5: ror     rax, 3
 * 00000001402E3AC9: xor     rcx, rax
 * 00000001402E3ACC: mov     rax, rsi
 * 00000001402E3ACF: mul     rcx
 * 00000001402E3AD2: mov     [rbp+2250h+var_1A50], rdx
 * 00000001402E3AD9: xor     rax, rdx
 * 00000001402E3ADC: xor     edx, edx
 * 00000001402E3ADE: div     r11
 * 00000001402E3AE1: lea     r9d, [r10+rdx]
 * 00000001402E3AE5: rdtsc
 * 00000001402E3AE7: shl     rdx, 20h
 * 00000001402E3AEB: or      rax, rdx
 * 00000001402E3AEE: mov     rcx, rax
 * 00000001402E3AF1: ror     rax, 3
 * 00000001402E3AF5: xor     rcx, rax
 * 00000001402E3AF8: mov     rax, rsi
 * 00000001402E3AFB: mul     rcx
 * 00000001402E3AFE: xor     rax, rdx
 * 00000001402E3B01: mov     [rbp+2250h+var_1A48], rdx
 * 00000001402E3B08: xor     edx, edx
 * 00000001402E3B0A: div     r11
 * 00000001402E3B0D: add     edx, r10d
 * 00000001402E3B10: cmp     edx, r9d
 * 00000001402E3B13: jz      short loc_1402E3AE5
 * 00000001402E3B15: mov     rsi, [r13+630h]
 * 00000001402E3B1C: xor     r11d, r11d
 * 00000001402E3B1F: mov     r12, [r13+628h]
 * 00000001402E3B26: mov     eax, r9d
 * 00000001402E3B29: bts     r8, rax
 * 00000001402E3B2D: mov     eax, edx
 * 00000001402E3B2F: btr     r8, rax
 * 00000001402E3B33: mov     eax, 3
 * 00000001402E3B38: cmp     [r13+7BCh], eax
 * 00000001402E3B3F: jnz     loc_1402E3CE0
 * 00000001402E3B45: mov     r13, [rbp+2250h+var_2250]
 * 00000001402E3B49: test    r13, r13
 * 00000001402E3B4C: jz      loc_1402E3CD8
 * 00000001402E3B52: mov     rcx, [rsp+11A0h+arg_0]
 * 00000001402E3B5A: lea     edx, [r11+1]
 * 00000001402E3B5E: mov     rax, [rcx+370h]
 * 00000001402E3B65: mov     byte ptr [rsi], 13h
 * 00000001402E3B68: mov     [rsi+1], dl
 * 00000001402E3B6B: mov     [rsi+2], r11w
 * 00000001402E3B70: mov     [rsi+18h], rax
 * 00000001402E3B74: mov     [rsi+20h], r13
 * 00000001402E3B78: mov     [rsi+38h], r11
 * 00000001402E3B7C: mov     [rsi+10h], r11
 * 00000001402E3B80: mov     [rsi+28h], r8
 * 00000001402E3B84: mov     rax, [rcx+360h]
 * 00000001402E3B8B: mov     rcx, [r13+8]
 * 00000001402E3B8F: mov     r8, [r13+0]
 * 00000001402E3B93: mov     edx, [r13+10h]
 * 00000001402E3B97: call    KeGuardDispatchICall
 * 00000001402E3B9C: mov     r9, [r13+0]
 * 00000001402E3BA0: mov     rcx, r13
 * 00000001402E3BA3: rol     rcx, 11h
 * 00000001402E3BA7: mov     rax, 7010008004002001h
 * 00000001402E3BB1: xor     rcx, r13
 * 00000001402E3BB4: mov     r10d, 4
 * 00000001402E3BBA: mul     rcx
 * 00000001402E3BBD: mov     [rbp+2250h+var_1A40], rdx
 * 00000001402E3BC4: xor     rdx, rax
 * 00000001402E3BC7: lea     rax, [r13+18h]
 * 00000001402E3BCB: mov     r8, rdx
 * 00000001402E3BCE: xor     r11d, r11d
 * 00000001402E3BD1: lea     r13d, [r10-3]
 * 00000001402E3BD5: xor     [rax], r8
 * 00000001402E3BD8: mov     ecx, r10d
 * 00000001402E3BDB: rol     r8, cl
 * 00000001402E3BDE: lea     rax, [rax-8]
 * 00000001402E3BE2: sub     r10d, r13d
 * 00000001402E3BE5: jnz     short loc_1402E3BD5
 * 00000001402E3BE7: and     dl, 0Fh
 * 00000001402E3BEA: cmp     dl, 7
 * 00000001402E3BED: jnb     short loc_1402E3C5C
 * 00000001402E3BEF: mov     rcx, r9
 * 00000001402E3BF2: mov     rax, 7010008004002001h
 * 00000001402E3BFC: rol     rcx, 11h
 * 00000001402E3C00: mov     r10d, 6
 * 00000001402E3C06: xor     rcx, r9
 * 00000001402E3C09: mul     rcx
 * 00000001402E3C0C: mov     [rbp+2250h+var_1A38], rdx
 * 00000001402E3C13: xor     rdx, rax
 * 00000001402E3C16: add     r8, rdx
 * 00000001402E3C19: lea     rax, [r9+28h]
 * 00000001402E3C1D: movsx   edx, word ptr [r9+8]
 * 00000001402E3C22: xor     [rax], r8
 * 00000001402E3C25: mov     ecx, r10d
 * 00000001402E3C28: rol     r8, cl
 * 00000001402E3C2B: lea     rax, [rax-8]
 * 00000001402E3C2F: sub     r10d, r13d
 * 00000001402E3C32: jnz     short loc_1402E3C22
 * 00000001402E3C34: sub     rdx, 30h ; '0'
 * 00000001402E3C38: shr     rdx, 3
 * 00000001402E3C3C: test    edx, edx
 * 00000001402E3C3E: jz      short loc_1402E3C5C
 * 00000001402E3C40: movsxd  r10, edx
 * 00000001402E3C43: add     r10, 5
 * 00000001402E3C47: lea     r10, [r9+r10*8]
 * 00000001402E3C4B: xor     [r10], r8
 * 00000001402E3C4E: mov     ecx, edx
 * 00000001402E3C50: rol     r8, cl
 * 00000001402E3C53: lea     r10, [r10-8]
 * 00000001402E3C57: sub     edx, r13d
 * 00000001402E3C5A: jnz     short loc_1402E3C4B
 * 00000001402E3C5C: mov     r13, [rsp+11A0h+arg_0]
 * 00000001402E3C64: mov     r10d, 1
 * 00000001402E3C6A: mov     [rsi+40h], r15
 * 00000001402E3C6E: test    dword ptr [r13+828h], 100h
 * 00000001402E3C79: jz      loc_1402E3D07
 * 00000001402E3C7F: lea     r9, [r14-48h]
 * 00000001402E3C83: mov     [r9+40h], rsi
 * 00000001402E3C87: rdtsc
 * 00000001402E3C89: shl     rdx, 20h
 * 00000001402E3C8D: mov     r14, 7010008004002001h
 * 00000001402E3C97: or      rax, rdx
 * 00000001402E3C9A: mov     r8d, 19h
 * 00000001402E3CA0: mov     rcx, rax
 * 00000001402E3CA3: ror     rax, 3
 * 00000001402E3CA7: xor     rcx, rax
 * 00000001402E3CAA: mov     rax, r14
 * 00000001402E3CAD: mul     rcx
 * 00000001402E3CB0: mov     [rbp+2250h+var_1A30], rdx
 * 00000001402E3CB7: xor     rdx, rax
 * 00000001402E3CBA: lea     rax, [r9+48h]
 * 00000001402E3CBE: xor     [rax], rdx
 * 00000001402E3CC1: lea     rax, [rax+8]
 * 00000001402E3CC5: sub     r8, r10
 * 00000001402E3CC8: jnz     short loc_1402E3CBE
 * 00000001402E3CCA: mov     dword ptr [r9+48h], 48513148h
 * 00000001402E3CD2: mov     [r9+20h], rdx
 * 00000001402E3CD6: jmp     short loc_1402E3D14
 * 00000001402E3CD8: mov     r13, [rsp+11A0h+arg_0]
 * 00000001402E3CE0: mov     byte ptr [rsi], 13h
 * 00000001402E3CE3: mov     r10d, 1
 * 00000001402E3CE9: mov     [rsi+1], r10b
 * 00000001402E3CED: mov     [rsi+2], r11w
 * 00000001402E3CF2: mov     [rsi+18h], r14
 * 00000001402E3CF6: mov     [rsi+20h], r8
 * 00000001402E3CFA: mov     [rsi+38h], r11
 * 00000001402E3CFE: mov     [rsi+10h], r11
 * 00000001402E3D02: jmp     loc_1402E3C6A
 * 00000001402E3D07: mov     r9, rsi
 * 00000001402E3D0A: mov     r14, 7010008004002001h
 * 00000001402E3D14: mov     r10, [r13+920h]
 * 00000001402E3D1B: test    r10, r10
 * 00000001402E3D1E: jz      short loc_1402E3D9E
 * 00000001402E3D20: mov     r10, [r10+20h]
 * 00000001402E3D24: mov     r15d, 0Fh
 * 00000001402E3D2A: mov     rcx, r10
 * 00000001402E3D2D: shr     rcx, 4
 * 00000001402E3D31: xor     rcx, r10
 * 00000001402E3D34: shr     rcx, 4
 * 00000001402E3D38: xor     rcx, [r13+588h]
 * 00000001402E3D3F: mov     al, cl
 * 00000001402E3D41: mov     r8, rcx
 * 00000001402E3D44: and     al, r15b
 * 00000001402E3D47: movzx   r11d, al
 * 00000001402E3D4B: lea     eax, [r15-0Eh]
 * 00000001402E3D4F: cmovz   r11d, eax
 * 00000001402E3D53: xor     eax, eax
 * 00000001402E3D55: mov     edx, eax
 * 00000001402E3D57: test    r11b, r11b
 * 00000001402E3D5A: jz      short loc_1402E3D7F
 * 00000001402E3D5C: mov     rdx, rcx
 * 00000001402E3D5F: and     rdx, r15
 * 00000001402E3D62: add     rdx, r10
 * 00000001402E3D65: mov     r10, [rdx]
 * 00000001402E3D68: mov     rax, r10
 * 00000001402E3D6B: shr     rax, 4
 * 00000001402E3D6F: xor     rax, r10
 * 00000001402E3D72: shr     rax, 4
 * 00000001402E3D76: xor     rcx, rax
 * 00000001402E3D79: add     r11b, 0FFh
 * 00000001402E3D7D: jnz     short loc_1402E3D5C
 * 00000001402E3D7F: mov     rax, r8
 * 00000001402E3D82: xor     r11d, r11d
 * 00000001402E3D85: xor     r8, r9
 * 00000001402E3D88: and     eax, 1000h
 * 00000001402E3D8D: test    rax, rax
 * 00000001402E3D90: cmovz   r8, r9
 * 00000001402E3D94: mov     [rdx], r8
 * 00000001402E3D97: mov     r9, [r13+920h]
 * 00000001402E3D9E: lock or [rsp+11A0h+var_11A0], r11d
 * 00000001402E3DA3: mov     ecx, [r13+6D8h]
 * 00000001402E3DAA: test    ecx, ecx
 * 00000001402E3DAC: jz      loc_1402E4014
 * 00000001402E3DB2: sub     ecx, 1
 * 00000001402E3DB5: jz      loc_1402E4001
 * 00000001402E3DBB: sub     ecx, 1
 * 00000001402E3DBE: jz      loc_1402E3FEE
 * 00000001402E3DC4: sub     ecx, 1
 * 00000001402E3DC7: jz      loc_1402E3F46
 * 00000001402E3DCD: cmp     ecx, 1
 * 00000001402E3DD0: jz      loc_1402E3E57
 * 00000001402E3DD6: mov     r8, [r13+830h]
 * 00000001402E3DDD: mov     [r8+48h], r9
 * 00000001402E3DE1: lock or [rsp+11A0h+var_11A0], r11d
 * 00000001402E3DE6: rdtsc
 * 00000001402E3DE8: shl     rdx, 20h
 * 00000001402E3DEC: or      rax, rdx
 * 00000001402E3DEF: mov     rcx, rax
 * 00000001402E3DF2: mov     rdx, rax
 * 00000001402E3DF5: ror     rcx, 3
 * 00000001402E3DF9: mov     rax, r14
 * 00000001402E3DFC: xor     rdx, rcx
 * 00000001402E3DFF: mul     rdx
 * 00000001402E3E02: mov     rcx, rdx
 * 00000001402E3E05: mov     [rbp+2250h+var_1A28], rdx
 * 00000001402E3E0C: xor     rcx, rax
 * 00000001402E3E0F: mov     rax, 0ABCC77118461CEFDh
 * 00000001402E3E19: mul     rcx
 * 00000001402E3E1C: shr     rdx, 1Ah
 * 00000001402E3E20: imul    rax, rdx, 5F5E100h
 * 00000001402E3E27: sub     rcx, rax
 * 00000001402E3E2A: mov     rax, 0D6BF94D5E57A42BDh
 * 00000001402E3E34: add     rcx, 47868C00h
 * 00000001402E3E3B: imul    rcx
 * 00000001402E3E3E: add     rdx, rcx
 * 00000001402E3E41: sar     rdx, 17h
 * 00000001402E3E45: mov     rax, rdx
 * 00000001402E3E48: shr     rax, 3Fh
 * 00000001402E3E4C: add     rdx, rax
 * 00000001402E3E4F: mov     [r8], edx
 * 00000001402E3E52: jmp     loc_1402E40BF
 * 00000001402E3E57: mov     r8, [r13+878h]
 * 00000001402E3E5E: xor     r9d, r9d
 * 00000001402E3E61: mov     rcx, [r13+888h]
 * 00000001402E3E68: mov     rdx, rsi
 * 00000001402E3E6B: mov     rax, [r13+880h]
 * 00000001402E3E72: mov     rdi, [r13+830h]
 * 00000001402E3E79: mov     byte ptr [r8], 12h
 * 00000001402E3E7D: mov     byte ptr [r8+2], 58h ; 'X'
 * 00000001402E3E82: mov     [r8+50h], r11b
 * 00000001402E3E86: mov     [r8+8], rdi
 * 00000001402E3E8A: mov     [r8+20h], rax
 * 00000001402E3E8E: mov     [r8+28h], r11
 * 00000001402E3E92: mov     [r8+30h], rcx
 * 00000001402E3E96: mov     [r8+51h], r11b
 * 00000001402E3E9A: mov     [r8+38h], r11
 * 00000001402E3E9E: mov     [r8+52h], r11b
 * 00000001402E3EA2: xor     r8d, r8d
 * 00000001402E3EA5: mov     rax, [r13+2C0h]
 * 00000001402E3EAC: mov     rcx, [r13+878h]
 * 00000001402E3EB3: call    KeGuardDispatchICall
 * 00000001402E3EB8: xor     r11d, r11d
 * 00000001402E3EBB: test    al, al
 * 00000001402E3EBD: jnz     loc_1402E40BF
 * 00000001402E3EC3: lea     r12d, [r11+1]
 * 00000001402E3EC7: cmp     [rbx], r11d
 * 00000001402E3ECA: jnz     short loc_1402E3EFC
 * 00000001402E3ECC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E3ED6: add     rax, r13
 * 00000001402E3ED9: mov     [r13+798h], rax
 * 00000001402E3EE0: mov     [r13+7A0h], r11
 * 00000001402E3EE7: mov     qword ptr [r13+7A8h], 104h
 * 00000001402E3EF2: mov     [r13+7B0h], rdi
 * 00000001402E3EF9: mov     [rbx], r12d
 * 00000001402E3EFC: mov     edx, 28h ; '('
 * 00000001402E3F01: lea     rcx, [rbp+2250h+var_1D60]
 * 00000001402E3F08: lea     r13d, [rdx-23h]
 * 00000001402E3F0C: mov     rax, [rbx]
 * 00000001402E3F0F: add     edx, 0FFFFFFF8h
 * 00000001402E3F12: mov     [rcx], rax
 * 00000001402E3F15: add     rbx, 8
 * 00000001402E3F19: add     rcx, 8
 * 00000001402E3F1D: sub     r13, r12
 * 00000001402E3F20: jnz     short loc_1402E3F0C
 * 00000001402E3F22: mov     r13, [rsp+11A0h+arg_0]
 * 00000001402E3F2A: test    edx, edx
 * 00000001402E3F2C: jz      loc_1402E40BF
 * 00000001402E3F32: mov     al, [rbx]
 * 00000001402E3F34: add     rbx, r12
 * 00000001402E3F37: mov     [rcx], al
 * 00000001402E3F39: add     rcx, r12
 * 00000001402E3F3C: add     edx, 0FFFFFFFFh
 * 00000001402E3F3F: jnz     short loc_1402E3F32
 * 00000001402E3F41: jmp     loc_1402E40BF
 * 00000001402E3F46: mov     rdx, [r13+830h]
 * 00000001402E3F4D: mov     rcx, [rdx+618h]
 * 00000001402E3F54: test    rcx, rcx
 * 00000001402E3F57: jz      loc_1402E3FDD
 * 00000001402E3F5D: mov     r12d, 1
 * 00000001402E3F63: cmp     [rbx], r11d
 * 00000001402E3F66: jnz     short loc_1402E3F98
 * 00000001402E3F68: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402E3F72: add     rax, r13
 * 00000001402E3F75: mov     [r13+798h], rax
 * 00000001402E3F7C: mov     [r13+7A0h], r11
 * 00000001402E3F83: mov     qword ptr [r13+7A8h], 104h
 * 00000001402E3F8E: mov     [r13+7B0h], rcx
 * 00000001402E3F95: mov     [rbx], r12d
 * 00000001402E3F98: mov     r13d, 5
 * 00000001402E3F9E: lea     rcx, [rbp+2250h+var_1D60]
 * 00000001402E3FA5: lea     r8d, [r13+23h]
 * 00000001402E3FA9: mov     rax, [rbx]
 * 00000001402E3FAC: add     r8d, 0FFFFFFF8h
 * 00000001402E3FB0: mov     [rcx], rax
 * 00000001402E3FB3: add     rbx, 8
 * 00000001402E3FB7: add     rcx, 8
 * 00000001402E3FBB: sub     r13, r12
 * 00000001402E3FBE: jnz     short loc_1402E3FA9
 * 00000001402E3FC0: mov     r13, [rsp+11A0h+arg_0]
 * 00000001402E3FC8: test    r8d, r8d
 * 00000001402E3FCB: jz      short loc_1402E3FDD
 * 00000001402E3FCD: mov     al, [rbx]
 * 00000001402E3FCF: add     rbx, r12
 * 00000001402E3FD2: mov     [rcx], al
 * 00000001402E3FD4: add     rcx, r12
 * 00000001402E3FD7: add     r8d, 0FFFFFFFFh
 * 00000001402E3FDB: jnz     short loc_1402E3FCD
 * 00000001402E3FDD: lock or [rsp+11A0h+var_11A0], r11d
 * 00000001402E3FE2: mov     [rdx+618h], rsi
 * 00000001402E3FE9: jmp     loc_1402E40BF
 * 00000001402E3FEE: mov     rax, [r13+660h]
 * 00000001402E3FF5: mov     [rax+80h], r9
 * 00000001402E3FFC: jmp     loc_1402E40BF
 * 00000001402E4001: mov     rax, [r13+660h]
 * 00000001402E4008: mov     [rax+0E0h], r9
 * 00000001402E400F: jmp     loc_1402E40BF
 * 00000001402E4014: rdtsc
 * 00000001402E4016: shl     rdx, 20h
 * 00000001402E401A: or      rax, rdx
 * 00000001402E401D: mov     rcx, rax
 * 00000001402E4020: mov     rdx, rax
 * 00000001402E4023: ror     rcx, 3
 * 00000001402E4027: mov     rax, r14
 * 00000001402E402A: xor     rdx, rcx
 * 00000001402E402D: mul     rdx
 * 00000001402E4030: mov     rcx, rdx
 * 00000001402E4033: mov     [rbp+2250h+var_1A20], rdx
 * 00000001402E403A: xor     rcx, rax
 * 00000001402E403D: mov     rax, 0ABCC77118461CEFDh
 * 00000001402E4047: mul     rcx
 * 00000001402E404A: shr     rdx, 1Ah
 * 00000001402E404E: imul    rax, rdx, 5F5E100h
 * 00000001402E4055: sub     rcx, rax
 * 00000001402E4058: sub     rdi, rcx
 * 00000001402E405B: rdtsc
 * 00000001402E405D: shl     rdx, 20h
 * 00000001402E4061: or      rax, rdx
 * 00000001402E4064: mov     [rsp+11A0h+BugCheckParameter4], r9
 * 00000001402E4069: mov     rcx, rax
 * 00000001402E406C: mov     rdx, rax
 * 00000001402E406F: ror     rcx, 3
 * 00000001402E4073: mov     rax, r14
 * 00000001402E4076: xor     rdx, rcx
 * 00000001402E4079: mov     rcx, r12
 * 00000001402E407C: mul     rdx
 * 00000001402E407F: mov     r8, rdx
 * 00000001402E4082: mov     [rbp+2250h+var_1A18], rdx
 * 00000001402E4089: xor     r8, rax
 * 00000001402E408C: mov     rax, 346DC5D63886594Bh
 * 00000001402E4096: mul     r8
 * 00000001402E4099: shr     rdx, 0Bh
 * 00000001402E409D: imul    rax, rdx, 2710h
 * 00000001402E40A4: mov     rdx, rdi
 * 00000001402E40A7: sub     r8, rax
 * 00000001402E40AA: mov     rax, [r13+1D8h]
 * 00000001402E40B1: mov     r9d, r8d
 * 00000001402E40B4: xor     r8d, r8d
 * 00000001402E40B7: call    KeGuardDispatchICall
 * 00000001402E40BC: xor     r11d, r11d
 * 00000001402E40BF: mov     ecx, 8000h
 * 00000001402E40C4: cmp     [rbp+2250h+var_1D60], r11d
 * 00000001402E40CB: jz      loc_1402E437F
 * 00000001402E40D1: test    [r13+828h], ecx
 * 00000001402E40D8: jnz     loc_1402E437F
 * 00000001402E40DE: mov     r13, [rbp+2250h+var_1D48]
 * 00000001402E40E5: mov     rbx, [rbp+2250h+var_1D40]
 * 00000001402E40EC: mov     rdi, [rbp+2250h+var_1D50]
 * 00000001402E40F3: mov     r14, [rbp+2250h+var_1D58]
 * 00000001402E40FA: mov     rax, [rsp+11A0h+arg_0]
 * 00000001402E4102: mov     [rbp+2250h+var_2170], r13
 * 00000001402E4109: mov     [rbp+2250h+var_21C8], rbx
 * 00000001402E4110: mov     [rbp+2250h+var_2230], rdi
 * 00000001402E4114: mov     [rbp+2250h+var_2198], r14
 * 00000001402E411B: mov     [rbp+2250h+var_20D8], rax
 * 00000001402E4122: mov     rax, cr8
 * 00000001402E4126: mov     r8d, 2
 * 00000001402E412C: cmp     al, r8b
 * 00000001402E412F: jnb     short loc_1402E4139
 * 00000001402E4131: mov     rax, cr8
 * 00000001402E4135: mov     cr8, r8
 * 00000001402E4139: mov     rax, gs:20h
 * 00000001402E4142: mov     r15, gs:188h
 * 00000001402E414B: mov     rsi, [rax+2E50h]
 * 00000001402E4152: mov     al, [rax+2E6Ah]
 * 00000001402E4158: test    al, al
 * 00000001402E415A: jz      short loc_1402E417B
 * 00000001402E415C: lea     rax, [rbp+2250h+var_20D8]
 * 00000001402E4163: cmp     rax, rsi
 * 00000001402E4166: ja      short loc_1402E417B
 * 00000001402E4168: lea     rax, [rsi-6000h]
 * 00000001402E416F: lea     rcx, [rbp+2250h+var_20D8]
 * 00000001402E4176: cmp     rcx, rax
 * 00000001402E4179: jnb     short loc_1402E417F
 * 00000001402E417B: mov     rsi, [r15+28h]
 * 00000001402E417F: mov     rdx, [rbp+2250h+var_20D8]
 * 00000001402E4186: test    dword ptr [rdx+828h], 8000000h
 * 00000001402E4190: jnz     loc_1402E42C1
 * 00000001402E4196: mov     r12, cr0
 * 00000001402E419A: mov     rax, r12
 * 00000001402E419D: btr     rax, 10h
 * 00000001402E41A2: mov     cr0, rax
 * 00000001402E41A5: mov     eax, [rdx+928h]
 * 00000001402E41AB: lea     r14, [rdx+930h]
 * 00000001402E41B2: shl     rax, 4
 * 00000001402E41B6: lea     r10, [rdx+930h]
 * 00000001402E41BD: add     r14, rax
 * 00000001402E41C0: mov     r9d, r11d
 * 00000001402E41C3: mov     r8, r14
 * 00000001402E41C6: cmp     [rdx+92Ch], r11d
 * 00000001402E41CD: jbe     short loc_1402E421E
 * 00000001402E41CF: mov     r11d, 1
 * 00000001402E41D5: lea     r13d, [r11+0Fh]
 * 00000001402E41D9: mov     rcx, [r8]
 * 00000001402E41DC: mov     rax, [r8+8]
 * 00000001402E41E0: mov     [rcx], rax
 * 00000001402E41E3: mov     rcx, cr4
 * 00000001402E41E6: test    rcx, 20080h
 * 00000001402E41ED: jz      short loc_1402E41FF
 * 00000001402E41EF: mov     rax, rcx
 * 00000001402E41F2: btc     rax, 7
 * 00000001402E41F7: mov     cr4, rax
 * 00000001402E41FA: mov     cr4, rcx
 * 00000001402E41FD: jmp     short loc_1402E4205
 * 00000001402E41FF: mov     rax, cr3
 * 00000001402E4202: mov     cr3, rax
 * 00000001402E4205: add     r8, r13
 * 00000001402E4208: add     r9d, r11d
 * 00000001402E420B: cmp     r9d, [rdx+92Ch]
 * 00000001402E4212: jb      short loc_1402E41D9
 * 00000001402E4214: mov     r13, [rbp+2250h+var_2170]
 * 00000001402E421B: xor     r11d, r11d
 * 00000001402E421E: cmp     r10, r14
 * 00000001402E4221: jnb     short loc_1402E429F
 * 00000001402E4223: xor     r13d, r13d
 * 00000001402E4226: mov     edi, [r10+8]
 * 00000001402E422A: mov     rcx, r8
 * 00000001402E422D: mov     r9, [r10]
 * 00000001402E4230: mov     r11d, edi
 * 00000001402E4233: cmp     edi, 8
 * 00000001402E4236: jb      short loc_1402E425E
 * 00000001402E4238: mov     ebx, edi
 * 00000001402E423A: mov     r13d, 1
 * 00000001402E4240: shr     rbx, 3
 * 00000001402E4244: mov     rax, [rcx]
 * 00000001402E4247: add     r11d, 0FFFFFFF8h
 * 00000001402E424B: mov     [r9], rax
 * 00000001402E424E: add     rcx, 8
 * 00000001402E4252: add     r9, 8
 * 00000001402E4256: sub     rbx, r13
 * 00000001402E4259: jnz     short loc_1402E4244
 * 00000001402E425B: xor     r13d, r13d
 * 00000001402E425E: test    r11d, r11d
 * 00000001402E4261: jz      short loc_1402E427E
 * 00000001402E4263: sub     r9, rcx
 * 00000001402E4266: mov     r13d, 1
 * 00000001402E426C: mov     al, [rcx]
 * 00000001402E426E: mov     [rcx+r9], al
 * 00000001402E4272: add     rcx, r13
 * 00000001402E4275: add     r11d, 0FFFFFFFFh
 * 00000001402E4279: jnz     short loc_1402E426C
 * 00000001402E427B: xor     r13d, r13d
 * 00000001402E427E: add     r8, rdi
 * 00000001402E4281: add     r10, 10h
 * 00000001402E4285: cmp     r10, r14
 * 00000001402E4288: jb      short loc_1402E4226
 * 00000001402E428A: mov     r13, [rbp+2250h+var_2170]
 * 00000001402E4291: xor     r11d, r11d
 * 00000001402E4294: mov     rbx, [rbp+2250h+var_21C8]
 * 00000001402E429B: mov     rdi, [rbp+2250h+var_2230]
 * 00000001402E429F: mov     rax, [rdx+218h]
 * 00000001402E42A6: mov     byte ptr [rax], 0C3h
 * 00000001402E42A9: mov     cr0, r12
 * 00000001402E42AD: mov     rdx, [rbp+2250h+var_20D8]
 * 00000001402E42B4: mov     r8d, 2
 * 00000001402E42BA: mov     r14, [rbp+2250h+var_2198]
 * 00000001402E42C1: mov     ecx, [rdx+7C0h]
 * 00000001402E42C7: test    ecx, ecx
 * 00000001402E42C9: jz      loc_1402E46A3
 * 00000001402E42CF: mov     rax, cr8
 * 00000001402E42D3: cmp     al, r8b
 * 00000001402E42D6: jnb     short loc_1402E42E6
 * 00000001402E42D8: mov     rax, cr8
 * 00000001402E42DC: mov     cr8, r8
 * 00000001402E42E0: mov     ecx, [rdx+7C0h]
 * 00000001402E42E6: test    ecx, ecx
 * 00000001402E42E8: jz      loc_1402E46A3
 * 00000001402E42EE: sub     ecx, 1
 * 00000001402E42F1: jz      loc_1402E4696
 * 00000001402E42F7: sub     ecx, 1
 * 00000001402E42FA: jz      short loc_1402E4373
 * 00000001402E42FC: sub     ecx, 1
 * 00000001402E42FF: jz      short loc_1402E4367
 * 00000001402E4301: sub     ecx, 1
 * 00000001402E4304: jz      short loc_1402E4342
 * 00000001402E4306: cmp     ecx, 1
 * 00000001402E4309: jz      short loc_1402E4324
 * 00000001402E430B: mov     rax, [rdx+5B0h]
 * 00000001402E4312: mov     ecx, 1
 * 00000001402E4317: lock or [rax+340h], rcx
 * 00000001402E431F: jmp     loc_1402E46A3
 * 00000001402E4324: mov     ecx, [rdx+828h]
 * 00000001402E432A: mov     rax, gs:188h
 * 00000001402E4333: shr     ecx, 0Ah
 * 00000001402E4336: and     ecx, 1Fh
 * 00000001402E4339: lock bts [rax], ecx
 * 00000001402E433D: jmp     loc_1402E46A3
 * 00000001402E4342: mov     edx, [rdx+828h]
 * 00000001402E4348: mov     rax, gs:188h
 * 00000001402E4351: shr     edx, 0Ah
 * 00000001402E4354: and     edx, 1Fh
 * 00000001402E4357: mov     rcx, [rax+0B8h]
 * 00000001402E435E: lock bts [rcx], edx
 * 00000001402E4362: jmp     loc_1402E46A3
 * 00000001402E4367: mov     rax, [rdx+558h]
 * 00000001402E436E: jmp     loc_1402E469D
 * 00000001402E4373: mov     rax, [rdx+550h]
 * 00000001402E437A: jmp     loc_1402E469D
 * 00000001402E437F: test    dword ptr [r13+828h], 40000000h
 * 00000001402E438A: jnz     short loc_1402E43D6
 * 00000001402E438C: cmp     [rbp+2250h+var_2228], r11d
 * 00000001402E4390: jz      short loc_1402E43D6
 * 00000001402E4392: mov     ecx, [r13+7BCh]
 * 00000001402E4399: sub     ecx, 1
 * 00000001402E439C: jz      short loc_1402E43B0
 * 00000001402E439E: mov     eax, 2
 * 00000001402E43A3: cmp     ecx, eax
 * 00000001402E43A5: jnz     short loc_1402E43D6
 * 00000001402E43A7: mov     rax, [r13+368h]
 * 00000001402E43AE: jmp     short loc_1402E43CF
 * 00000001402E43B0: add     qword ptr [r13+668h], 0FFFFFFFFFFFFFFF8h
 * 00000001402E43B8: mov     rax, [r13+668h]
 * 00000001402E43BF: mov     ecx, [rax]
 * 00000001402E43C1: mov     [r13+670h], ecx
 * 00000001402E43C8: mov     rax, [r13+228h]
 * 00000001402E43CF: mov     [r13+100h], rax
 * 00000001402E43D6: mov     rax, r13
 * 00000001402E43D9: lea     r11, [rsp+11A0h+var_20]
 * 00000001402E43E1: mov     rbx, [r11+38h]
 * 00000001402E43E5: mov     rsi, [r11+40h]
 * 00000001402E43E9: mov     rdi, [r11+48h]
 * 00000001402E43ED: mov     rsp, r11
 * 00000001402E43F0: pop     r15
 * 00000001402E43F2: pop     r14
 * 00000001402E43F4: pop     r13
 * 00000001402E43F6: pop     r12
 * 00000001402E43F8: pop     rbp
 * 00000001402E43F9: retn
 * 00000001402E43FA: mov     [rbp+2250h+var_1FF0], 4F402C70h
 * 00000001402E4404: mov     r9d, 3; BugCheckParameter3
 * 00000001402E440A: mov     ecx, [rbp+2250h+var_1FF0]
 * 00000001402E4410: mov     r8, r14; BugCheckParameter2
 * 00000001402E4413: xor     ecx, 2C70h
 * 00000001402E4419: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E441E: ror     ecx, 56h; BugCheckCode
 * 00000001402E4421: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001402E4425: call    KeBugCheckEx
 * 00000001402E442B: mov     [rbp+2250h+var_2004], 4F402C70h
 * 00000001402E4435: xor     r9d, r9d; BugCheckParameter3
 * 00000001402E4438: mov     ecx, [rbp+2250h+var_2004]
 * 00000001402E443E: mov     r8, r14; BugCheckParameter2
 * 00000001402E4441: xor     ecx, 2C70h
 * 00000001402E4447: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E444C: ror     ecx, 56h; BugCheckCode
 * 00000001402E444F: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001402E4453: call    KeBugCheckEx
 * 00000001402E4459: mov     [rbp+2250h+var_2000], 4F402C70h
 * 00000001402E4463: mov     r9, r10; BugCheckParameter3
 * 00000001402E4466: mov     ecx, [rbp+2250h+var_2000]
 * 00000001402E446C: mov     r8, r14; BugCheckParameter2
 * 00000001402E446F: xor     ecx, 2C70h
 * 00000001402E4475: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E447A: ror     ecx, 56h; BugCheckCode
 * 00000001402E447D: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402E4482: call    KeBugCheckEx
 * 00000001402E4488: mov     [rbp+2250h+var_1FFC], 4F402C70h
 * 00000001402E4492: mov     r8, r14; BugCheckParameter2
 * 00000001402E4495: mov     ecx, [rbp+2250h+var_1FFC]
 * 00000001402E449B: xor     ecx, 2C70h
 * 00000001402E44A1: mov     r9d, edx; BugCheckParameter3
 * 00000001402E44A4: ror     ecx, 56h; BugCheckCode
 * 00000001402E44A7: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402E44AC: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E44B1: call    KeBugCheckEx
 * 00000001402E44B7: mov     [rbp+2250h+var_1FF8], 4F402C70h
 * 00000001402E44C1: mov     r8, r10; BugCheckParameter2
 * 00000001402E44C4: mov     ecx, [rbp+2250h+var_1FF8]
 * 00000001402E44CA: xor     ecx, 2C70h
 * 00000001402E44D0: mov     r9d, edx; BugCheckParameter3
 * 00000001402E44D3: ror     ecx, 56h; BugCheckCode
 * 00000001402E44D6: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402E44DB: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E44E0: call    KeBugCheckEx
 * 00000001402E44E6: mov     [rbp+2250h+var_1FF4], 4F402C70h
 * 00000001402E44F0: mov     r9d, 2; BugCheckParameter3
 * 00000001402E44F6: mov     ecx, [rbp+2250h+var_1FF4]
 * 00000001402E44FC: mov     r8, r14; BugCheckParameter2
 * 00000001402E44FF: xor     ecx, 2C70h
 * 00000001402E4505: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E450A: ror     ecx, 56h; BugCheckCode
 * 00000001402E450D: lea     edx, [r9+8]; BugCheckParameter1
 * 00000001402E4511: call    KeBugCheckEx
 * 00000001402E4517: mov     [rsp+11A0h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001402E451C: mov     r8, r15; BugCheckParameter2
 * 00000001402E451F: mov     r9d, 6; BugCheckParameter3
 * 00000001402E4525: mov     [rbp+2250h+var_1FEC], 4F402C70h
 * 00000001402E452F: mov     ecx, [rbp+2250h+var_1FEC]
 * 00000001402E4535: xor     ecx, 2C70h
 * 00000001402E453B: ror     ecx, 56h; BugCheckCode
 * 00000001402E453E: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001402E4542: call    KeBugCheckEx
 * 00000001402E4548: mov     [rbp+2250h+var_1F7C], 4F402C70h
 * 00000001402E4552: xor     r9d, r9d; BugCheckParameter3
 * 00000001402E4555: mov     ecx, [rbp+2250h+var_1F7C]
 * 00000001402E455B: mov     r8, r15; BugCheckParameter2
 * 00000001402E455E: xor     ecx, 2C70h
 * 00000001402E4564: mov     [rsp+11A0h+BugCheckParameter4], r11; BugCheckParameter4
 * 00000001402E4569: ror     ecx, 56h; BugCheckCode
 * 00000001402E456C: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001402E4570: call    KeBugCheckEx
 * 00000001402E4576: mov     [rbp+2250h+var_2020], 4F402C70h
 * 00000001402E4580: mov     r9d, 3; BugCheckParameter3
 * 00000001402E4586: mov     ecx, [rbp+2250h+var_2020]
 * 00000001402E458C: mov     r8, r15; BugCheckParameter2
 * 00000001402E458F: xor     ecx, 2C70h
 * 00000001402E4595: mov     [rsp+11A0h+BugCheckParameter4], r11; BugCheckParameter4
 * 00000001402E459A: ror     ecx, 56h; BugCheckCode
 * 00000001402E459D: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001402E45A1: call    KeBugCheckEx
 * 00000001402E45A7: mov     [rbp+2250h+var_2030], 4F402C70h
 * 00000001402E45B1: mov     r9, r10; BugCheckParameter3
 * 00000001402E45B4: mov     ecx, [rbp+2250h+var_2030]
 * 00000001402E45BA: mov     r8, r15; BugCheckParameter2
 * 00000001402E45BD: xor     ecx, 2C70h
 * 00000001402E45C3: mov     [rsp+11A0h+BugCheckParameter4], r11; BugCheckParameter4
 * 00000001402E45C8: ror     ecx, 56h; BugCheckCode
 * 00000001402E45CB: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402E45D0: call    KeBugCheckEx
 * 00000001402E45D6: xor     eax, eax
 * 00000001402E45D8: mov     [rbp+2250h+var_202C], 4F402C70h
 * 00000001402E45E2: mov     ecx, [rbp+2250h+var_202C]
 * 00000001402E45E8: mov     r8, r15; BugCheckParameter2
 * 00000001402E45EB: xor     ecx, 2C70h
 * 00000001402E45F1: mov     r9d, edx; BugCheckParameter3
 * 00000001402E45F4: ror     ecx, 56h; BugCheckCode
 * 00000001402E45F7: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402E45FA: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E45FF: call    KeBugCheckEx
 * 00000001402E4605: xor     eax, eax
 * 00000001402E4607: mov     [rbp+2250h+var_2028], 4F402C70h
 * 00000001402E4611: mov     ecx, [rbp+2250h+var_2028]
 * 00000001402E4617: mov     r8, r10; BugCheckParameter2
 * 00000001402E461A: xor     ecx, 2C70h
 * 00000001402E4620: mov     r9d, edx; BugCheckParameter3
 * 00000001402E4623: ror     ecx, 56h; BugCheckCode
 * 00000001402E4626: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402E4629: mov     [rsp+11A0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402E462E: call    KeBugCheckEx
 * 00000001402E4634: mov     [rbp+2250h+var_2024], 4F402C70h
 * 00000001402E463E: mov     r9d, 2; BugCheckParameter3
 * 00000001402E4644: mov     ecx, [rbp+2250h+var_2024]
 * 00000001402E464A: mov     r8, r15; BugCheckParameter2
 * 00000001402E464D: xor     ecx, 2C70h
 * 00000001402E4653: mov     [rsp+11A0h+BugCheckParameter4], r11; BugCheckParameter4
 * 00000001402E4658: ror     ecx, 56h; BugCheckCode
 * 00000001402E465B: lea     edx, [r9+8]; BugCheckParameter1
 * 00000001402E465F: call    KeBugCheckEx
 * 00000001402E4665: mov     [rbp+2250h+var_201C], 4F402C70h
 * 00000001402E466F: mov     r9d, 6; BugCheckParameter3
 * 00000001402E4675: mov     ecx, [rbp+2250h+var_201C]
 * 00000001402E467B: mov     r8, r15; BugCheckParameter2
 * 00000001402E467E: xor     ecx, 2C70h
 * 00000001402E4684: mov     [rsp+11A0h+BugCheckParameter4], r10; BugCheckParameter4
 * 00000001402E4689: ror     ecx, 56h; BugCheckCode
 * 00000001402E468C: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001402E4690: call    KeBugCheckEx
 * 00000001402E4696: mov     rax, [rdx+540h]
 * 00000001402E469D: lock bts qword ptr [rax], 0
 * 00000001402E46A3: mov     [r15+610h], r11
 * 00000001402E46AA: mov     [r15+690h], r11
 * 00000001402E46B1: mov     rcx, [rbp+2250h+var_20D8]
 * 00000001402E46B8: mov     rcx, [rcx+158h]; Target
 * 00000001402E46BF: call    KeGuardCheckICall
 * 00000001402E46C4: mov     rax, [rbp+2250h+var_20D8]
 * 00000001402E46CB: mov     r9, rbx
 * 00000001402E46CE: mov     [rsp+11A0h+var_1170], rsi
 * 00000001402E46D3: mov     r8, rdi
 * 00000001402E46D6: mov     rdx, r14
 * 00000001402E46D9: mov     ecx, 109h
 * 00000001402E46DE: mov     r10, [rax+158h]
 * 00000001402E46E5: mov     [rsp+11A0h+var_1178], r10
 * 00000001402E46EA: mov     [rsp+11A0h+BugCheckParameter4], r13
 * 00000001402E46EF: call    SdbpCheckDll
 */
