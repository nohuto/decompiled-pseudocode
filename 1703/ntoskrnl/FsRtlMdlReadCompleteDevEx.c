/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x14026F010
 * Callers:
 *     KiDecodeMcaFault @ 0x140173DF0 (KiDecodeMcaFault.c)
 *     sub_140175DB0 @ 0x140175DB0 (sub_140175DB0.c)
 *     FsRtlUninitializeSmallMcb @ 0x140284360 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     sub_1401760BC @ 0x1401760BC (sub_1401760BC.c)
 *     sub_140177004 @ 0x140177004 (sub_140177004.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_140282ED4 @ 0x140282ED4 (sub_140282ED4.c)
 *     KiGetGdtIdt @ 0x1402842C0 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x140284310 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140284430 (KeGuardCheckICall.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x14026F010
 * Reason: Hex-Rays returned no pseudocode for 0x14026F010
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026F010: mov     rax, rsp
 * 000000014026F013: mov     [rax+10h], rbx
 * 000000014026F017: mov     [rax+18h], rsi
 * 000000014026F01B: mov     [rax+20h], rdi
 * 000000014026F01F: mov     [rax+8], rcx
 * 000000014026F023: push    rbp
 * 000000014026F024: push    r12
 * 000000014026F026: push    r13
 * 000000014026F028: push    r14
 * 000000014026F02A: push    r15
 * 000000014026F02C: sub     rsp, 0D80h
 * 000000014026F033: lea     rbp, [rax-0CD8h]
 * 000000014026F03A: and     rbp, 0FFFFFFFFFFFFFF80h
 * 000000014026F03E: mov     eax, [rcx+748h]
 * 000000014026F044: xor     r8d, r8d
 * 000000014026F047: mov     r13, rcx
 * 000000014026F04A: or      esi, 0FFFFFFFFh
 * 000000014026F04D: mov     ecx, 110000h
 * 000000014026F052: mov     r11d, 0FFFFFFF8h
 * 000000014026F058: and     eax, ecx
 * 000000014026F05A: mov     ebx, 80000000h
 * 000000014026F05F: lea     r10d, [r8+1]
 * 000000014026F063: cmp     eax, ecx
 * 000000014026F065: jz      loc_14026F134
 * 000000014026F06B: mov     r9d, 130h
 * 000000014026F071: lea     rax, [rbp+1A50h+var_FD0]
 * 000000014026F078: mov     ecx, r9d
 * 000000014026F07B: lea     edx, [r8+26h]
 * 000000014026F07F: mov     [rax], r8
 * 000000014026F082: add     ecx, r11d
 * 000000014026F085: add     rax, 8
 * 000000014026F089: sub     rdx, r10
 * 000000014026F08C: jnz     short loc_14026F07F
 * 000000014026F08E: test    ecx, ecx
 * 000000014026F090: jz      short loc_14026F09C
 * 000000014026F092: mov     [rax], r8b
 * 000000014026F095: add     rax, r10
 * 000000014026F098: add     ecx, esi
 * 000000014026F09A: jnz     short loc_14026F092
 * 000000014026F09C: movups  xmm0, xmmword ptr [r13+640h]
 * 000000014026F0A4: lea     rax, [rbp+1A50h+var_FD0]
 * 000000014026F0AB: movdqu  [rbp+1A50h+var_FC0], xmm0
 * 000000014026F0B3: movups  xmm1, xmmword ptr [r13+650h]
 * 000000014026F0BB: movdqu  [rbp+1A50h+var_FB0], xmm1
 * 000000014026F0C3: movups  xmm0, xmmword ptr [r13+660h]
 * 000000014026F0CB: mov     [rbp+1A50h+var_171E], rax
 * 000000014026F0D2: lea     rax, [r13+670h]
 * 000000014026F0D9: mov     rcx, rax
 * 000000014026F0DC: mov     word ptr [rbp+1A50h+var_FC0], ax
 * 000000014026F0E3: shr     rcx, 10h
 * 000000014026F0E7: shr     rax, 20h
 * 000000014026F0EB: mov     dword ptr [rbp+1A50h+var_FC0+8], eax
 * 000000014026F0F1: movdqu  [rbp+1A50h+var_EB0], xmm0
 * 000000014026F0F9: mov     word ptr [rbp+1A50h+var_1720], r9w
 * 000000014026F101: mov     word ptr [rbp+1A50h+var_FC0+6], cx
 * 000000014026F108: cli
 * 000000014026F109: xor     eax, eax
 * 000000014026F10B: test    [r13+748h], ebx
 * 000000014026F112: jz      short loc_14026F11A
 * 000000014026F114: mov     dr7, rax
 * 000000014026F117: sti
 * 000000014026F118: jmp     short loc_14026F136
 * 000000014026F11A: sidt    fword ptr [rbp+1A50h+var_1588]
 * 000000014026F121: lidt    fword ptr [rbp+1A50h+var_1720]
 * 000000014026F128: mov     dr7, rax
 * 000000014026F12B: lidt    fword ptr [rbp+1A50h+var_1588]
 * 000000014026F132: jmp     short loc_14026F117
 * 000000014026F134: xor     eax, eax
 * 000000014026F136: test    dword ptr [r13+74Ch], 100h
 * 000000014026F141: mov     [rbp+1A50h+var_1970], rax
 * 000000014026F148: jz      short loc_14026F163
 * 000000014026F14A: lea     rcx, [rsp+0DA8h]
 * 000000014026F152: mov     rax, [rcx]
 * 000000014026F155: mov     [rbp+1A50h+var_1970], rax
 * 000000014026F15C: xor     eax, eax
 * 000000014026F15E: mov     [rcx], rax
 * 000000014026F161: jmp     short loc_14026F165
 * 000000014026F163: xor     eax, eax
 * 000000014026F165: mov     r12d, 20h ; ' '
 * 000000014026F16B: mov     [r13+628h], eax
 * 000000014026F172: test    dword ptr [r13+748h], 40000000h
 * 000000014026F17D: mov     rbx, 7010008004002001h
 * 000000014026F187: lea     r15d, [r12-1Ch]
 * 000000014026F18C: jz      short loc_14026F19D
 * 000000014026F18E: xor     eax, eax
 * 000000014026F190: cmp     [r13+7E8h], rax
 * 000000014026F197: jnz     loc_14026F583
 * 000000014026F19D: mov     r14, [r13+5B8h]
 * 000000014026F1A4: lea     rbx, [r13+598h]
 * 000000014026F1AB: mov     [rbp+1A50h+var_1A40], r14
 * 000000014026F1AF: lea     rdx, [rbp+1A50h+var_10A8]
 * 000000014026F1B6: mov     rcx, rbx
 * 000000014026F1B9: mov     r8d, r12d
 * 000000014026F1BC: mov     r9, r15
 * 000000014026F1BF: mov     rax, [rcx]
 * 000000014026F1C2: add     r8d, r11d
 * 000000014026F1C5: mov     [rdx], rax
 * 000000014026F1C8: add     rcx, 8
 * 000000014026F1CC: add     rdx, 8
 * 000000014026F1D0: sub     r9, r10
 * 000000014026F1D3: jnz     short loc_14026F1BF
 * 000000014026F1D5: xor     eax, eax
 * 000000014026F1D7: test    r8d, r8d
 * 000000014026F1DA: jz      short loc_14026F1ED
 * 000000014026F1DC: mov     al, [rcx]
 * 000000014026F1DE: add     rcx, r10
 * 000000014026F1E1: mov     [rdx], al
 * 000000014026F1E3: add     rdx, r10
 * 000000014026F1E6: add     r8d, esi
 * 000000014026F1E9: jnz     short loc_14026F1DC
 * 000000014026F1EB: xor     eax, eax
 * 000000014026F1ED: mov     [r13+5B8h], rax
 * 000000014026F1F4: mov     ecx, r12d
 * 000000014026F1F7: mov     [r13+628h], eax
 * 000000014026F1FE: mov     rdx, r15
 * 000000014026F201: mov     rax, rbx
 * 000000014026F204: xor     r8d, r8d
 * 000000014026F207: mov     [rax], r8
 * 000000014026F20A: add     ecx, r11d
 * 000000014026F20D: add     rax, 8
 * 000000014026F211: sub     rdx, r10
 * 000000014026F214: jnz     short loc_14026F207
 * 000000014026F216: test    ecx, ecx
 * 000000014026F218: jz      short loc_14026F224
 * 000000014026F21A: mov     [rax], r8b
 * 000000014026F21D: add     rax, r10
 * 000000014026F220: add     ecx, esi
 * 000000014026F222: jnz     short loc_14026F21A
 * 000000014026F224: mov     eax, [r13+5E4h]
 * 000000014026F22B: mov     r9, r13
 * 000000014026F22E: add     [r13+628h], eax
 * 000000014026F235: mov     rax, r13
 * 000000014026F238: mov     r10d, [r13+5E4h]
 * 000000014026F23F: mov     r11d, [r13+614h]
 * 000000014026F246: mov     rsi, [r13+618h]
 * 000000014026F24D: lea     rcx, [r10+r13]
 * 000000014026F251: cmp     r13, rcx
 * 000000014026F254: jnb     short loc_14026F262
 * 000000014026F256: prefetchnta byte ptr [rax]
 * 000000014026F259: add     rax, 40h ; '@'
 * 000000014026F25D: cmp     rax, rcx
 * 000000014026F260: jb      short loc_14026F256
 * 000000014026F262: mov     edi, r10d
 * 000000014026F265: mov     r8, rsi
 * 000000014026F268: shr     edi, 7
 * 000000014026F26B: test    edi, edi
 * 000000014026F26D: jz      short loc_14026F2E4
 * 000000014026F26F: mov     r14, 7010008004002001h
 * 000000014026F279: mov     edx, 8
 * 000000014026F27E: lea     r13d, [rdx-7]
 * 000000014026F282: mov     rax, [r9]
 * 000000014026F285: mov     ecx, r11d
 * 000000014026F288: xor     rax, r8
 * 000000014026F28B: mov     r8, [r9+8]
 * 000000014026F28F: rol     rax, cl
 * 000000014026F292: add     r9, 10h
 * 000000014026F296: xor     r8, rax
 * 000000014026F299: rol     r8, cl
 * 000000014026F29C: sub     rdx, r13
 * 000000014026F29F: jnz     short loc_14026F282
 * 000000014026F2A1: mov     r13, [rsp+0DA0h+arg_0]
 * 000000014026F2A9: mov     rcx, r9
 * 000000014026F2AC: sub     rcx, r13
 * 000000014026F2AF: xor     rcx, rsi
 * 000000014026F2B2: mov     rax, rcx
 * 000000014026F2B5: rol     rax, 11h
 * 000000014026F2B9: xor     rcx, rax
 * 000000014026F2BC: mov     rax, r14
 * 000000014026F2BF: mul     rcx
 * 000000014026F2C2: xor     eax, edx
 * 000000014026F2C4: mov     [rbp+1A50h+var_1328], rdx
 * 000000014026F2CB: xor     r11d, eax
 * 000000014026F2CE: mov     eax, 1
 * 000000014026F2D3: and     r11d, 3Fh
 * 000000014026F2D7: cmovz   r11d, eax
 * 000000014026F2DB: add     edi, 0FFFFFFFFh
 * 000000014026F2DE: jnz     short loc_14026F279
 * 000000014026F2E0: mov     r14, [rbp+1A50h+var_1A40]
 * 000000014026F2E4: and     r10d, 7Fh
 * 000000014026F2E8: mov     edi, 1
 * 000000014026F2ED: cmp     r10d, 8
 * 000000014026F2F1: jb      short loc_14026F310
 * 000000014026F2F3: mov     edx, r10d
 * 000000014026F2F6: shr     rdx, 3
 * 000000014026F2FA: xor     r8, [r9]
 * 000000014026F2FD: mov     ecx, r11d
 * 000000014026F300: rol     r8, cl
 * 000000014026F303: add     r9, 8
 * 000000014026F307: add     r10d, 0FFFFFFF8h
 * 000000014026F30B: sub     rdx, rdi
 * 000000014026F30E: jnz     short loc_14026F2FA
 * 000000014026F310: or      esi, 0FFFFFFFFh
 * 000000014026F313: test    r10d, r10d
 * 000000014026F316: jz      short loc_14026F32D
 * 000000014026F318: movzx   eax, byte ptr [r9]
 * 000000014026F31C: mov     ecx, r11d
 * 000000014026F31F: xor     r8, rax
 * 000000014026F322: add     r9, rdi
 * 000000014026F325: rol     r8, cl
 * 000000014026F328: add     r10d, esi
 * 000000014026F32B: jnz     short loc_14026F318
 * 000000014026F32D: mov     edx, r12d
 * 000000014026F330: mov     [r13+5B8h], r14
 * 000000014026F337: mov     r12d, 1
 * 000000014026F33D: lea     rcx, [rbp+1A50h+var_10A8]
 * 000000014026F344: mov     r9, r15
 * 000000014026F347: mov     r11d, 0FFFFFFF8h
 * 000000014026F34D: mov     rax, [rcx]
 * 000000014026F350: add     edx, r11d
 * 000000014026F353: mov     [rbx], rax
 * 000000014026F356: add     rcx, 8
 * 000000014026F35A: add     rbx, 8
 * 000000014026F35E: sub     r9, r12
 * 000000014026F361: jnz     short loc_14026F34D
 * 000000014026F363: test    edx, edx
 * 000000014026F365: jz      short loc_14026F375
 * 000000014026F367: mov     al, [rcx]
 * 000000014026F369: add     rcx, r12
 * 000000014026F36C: mov     [rbx], al
 * 000000014026F36E: add     rbx, r12
 * 000000014026F371: add     edx, esi
 * 000000014026F373: jnz     short loc_14026F367
 * 000000014026F375: cmp     [r13+5B8h], r8
 * 000000014026F37C: jz      short loc_14026F3F3
 * 000000014026F37E: mov     rax, [r13+510h]
 * 000000014026F385: mov     ecx, [r13+5E4h]
 * 000000014026F38C: mov     [rax], r13
 * 000000014026F38F: mov     [rax+10h], ecx
 * 000000014026F392: xor     eax, eax
 * 000000014026F394: mov     rcx, [r13+5B8h]
 * 000000014026F39B: cmp     [r13+6C0h], eax
 * 000000014026F3A2: jnz     short loc_14026F3F3
 * 000000014026F3A4: mov     rax, [r13+510h]
 * 000000014026F3AB: xor     rcx, r8
 * 000000014026F3AE: mov     [rax+18h], rcx
 * 000000014026F3B2: xor     eax, eax
 * 000000014026F3B4: cmp     [r13+6C0h], eax
 * 000000014026F3BB: jnz     short loc_14026F3F3
 * 000000014026F3BD: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014026F3C7: add     rax, r13
 * 000000014026F3CA: mov     [r13+6C8h], rax
 * 000000014026F3D1: xor     eax, eax
 * 000000014026F3D3: mov     [r13+6D0h], rax
 * 000000014026F3DA: mov     qword ptr [r13+6D8h], 101h
 * 000000014026F3E5: mov     [r13+6E0h], r8
 * 000000014026F3EC: mov     [r13+6C0h], r12d
 * 000000014026F3F3: mov     rbx, 7010008004002001h
 * 000000014026F3FD: or      [r13+748h], r15d
 * 000000014026F404: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014026F40B: add     [r13+634h], r12d
 * 000000014026F412: mov     r14d, 2
 * 000000014026F418: mov     eax, [r13+748h]
 * 000000014026F41F: test    al, 8
 * 000000014026F421: jz      loc_14026F81B
 * 000000014026F427: bt      eax, 17h
 * 000000014026F42B: jb      loc_14026F81B
 * 000000014026F431: mov     eax, [r13+74Ch]
 * 000000014026F438: mov     r10, [r13+7E0h]
 * 000000014026F43F: mov     esi, [r13+5E4h]
 * 000000014026F446: mov     r11, [r13+7B0h]
 * 000000014026F44D: mov     r15d, [r13+608h]
 * 000000014026F454: mov     [rbp+1A50h+var_1A40], r10
 * 000000014026F458: and     eax, r12d
 * 000000014026F45B: jz      short loc_14026F464
 * 000000014026F45D: mov     r11, [r13+558h]
 * 000000014026F464: mov     r9, [r13+160h]
 * 000000014026F46B: mov     rax, [r13+2C0h]
 * 000000014026F472: mov     r12, [r13+338h]
 * 000000014026F479: mov     [rbp+1A50h+var_1A00], r9
 * 000000014026F47D: mov     [rbp+1A50h+var_1A38], rax
 * 000000014026F481: mov     [rbp+1A50h+var_19D0], r12
 * 000000014026F488: rdtsc
 * 000000014026F48A: shl     rdx, 20h
 * 000000014026F48E: or      rax, rdx
 * 000000014026F491: mov     rcx, rax
 * 000000014026F494: ror     rax, 3
 * 000000014026F498: xor     rcx, rax
 * 000000014026F49B: mov     rax, rbx
 * 000000014026F49E: mul     rcx
 * 000000014026F4A1: mov     rcx, rdi
 * 000000014026F4A4: mov     r8, rdx
 * 000000014026F4A7: mov     [rbp+1A50h+var_12B0], rdx
 * 000000014026F4AE: xor     r8, rax
 * 000000014026F4B1: mov     rax, 0ABCC77118461CEFDh
 * 000000014026F4BB: mul     r8
 * 000000014026F4BE: shr     rdx, 1Ah
 * 000000014026F4C2: imul    rax, rdx, 5F5E100h
 * 000000014026F4C9: sub     r8, rax
 * 000000014026F4CC: sub     rcx, r8
 * 000000014026F4CF: mov     [rbp+1A50h+var_1850], rcx
 * 000000014026F4D6: test    dword ptr [r13+748h], 4000000h
 * 000000014026F4E1: jz      loc_14026F58B
 * 000000014026F4E7: rdtsc
 * 000000014026F4E9: shl     rdx, 20h
 * 000000014026F4ED: or      rax, rdx
 * 000000014026F4F0: mov     rdx, rax
 * 000000014026F4F3: ror     rax, 3
 * 000000014026F4F7: xor     rdx, rax
 * 000000014026F4FA: mov     rax, rbx
 * 000000014026F4FD: mul     rdx
 * 000000014026F500: mov     r8, rdx
 * 000000014026F503: mov     [rbp+1A50h+var_12A8], rdx
 * 000000014026F50A: xor     r8, rax
 * 000000014026F50D: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014026F517: mul     r8
 * 000000014026F51A: shr     rdx, 3
 * 000000014026F51E: lea     rax, [rdx+rdx*4]
 * 000000014026F522: add     rax, rax
 * 000000014026F525: sub     r8, rax
 * 000000014026F528: cmp     r8, r14
 * 000000014026F52B: jnb     short loc_14026F58B
 * 000000014026F52D: rdtsc
 * 000000014026F52F: shl     rdx, 20h
 * 000000014026F533: or      rax, rdx
 * 000000014026F536: mov     rdx, rax
 * 000000014026F539: ror     rax, 3
 * 000000014026F53D: xor     rdx, rax
 * 000000014026F540: mov     rax, rbx
 * 000000014026F543: mul     rdx
 * 000000014026F546: mov     r8, rdx
 * 000000014026F549: mov     [rbp+1A50h+var_12A0], rdx
 * 000000014026F550: xor     r8, rax
 * 000000014026F553: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014026F55D: mul     r8
 * 000000014026F560: shr     rdx, 3
 * 000000014026F564: lea     rax, [rdx+rdx*4]
 * 000000014026F568: mov     edx, 1
 * 000000014026F56D: add     rax, rax
 * 000000014026F570: sub     r8, rax
 * 000000014026F573: add     r8, rdx
 * 000000014026F576: imul    rcx, r8
 * 000000014026F57A: mov     [rbp+1A50h+var_1850], rcx
 * 000000014026F581: jmp     short loc_14026F590
 * 000000014026F583: mov     r12, r10
 * 000000014026F586: jmp     loc_14026F3FD
 * 000000014026F58B: mov     edx, 1
 * 000000014026F590: xor     eax, eax
 * 000000014026F592: mov     ebx, eax
 * 000000014026F594: mov     r14d, eax
 * 000000014026F597: mov     eax, [r13+748h]
 * 000000014026F59E: test    al, 2
 * 000000014026F5A0: cmovz   esi, r15d
 * 000000014026F5A4: test    al, al
 * 000000014026F5A6: js      short loc_14026F5B2
 * 000000014026F5A8: xor     eax, eax
 * 000000014026F5AA: mov     r13d, eax
 * 000000014026F5AD: jmp     loc_14026F69A
 * 000000014026F5B2: mov     r13d, edx
 * 000000014026F5B5: rdtsc
 * 000000014026F5B7: shl     rdx, 20h
 * 000000014026F5BB: mov     r12d, 1
 * 000000014026F5C1: or      rax, rdx
 * 000000014026F5C4: mov     rcx, rax
 * 000000014026F5C7: ror     rax, 3
 * 000000014026F5CB: xor     rcx, rax
 * 000000014026F5CE: mov     rax, 7010008004002001h
 * 000000014026F5D8: mul     rcx
 * 000000014026F5DB: mov     ecx, 102h
 * 000000014026F5E0: mov     rbx, rdx
 * 000000014026F5E3: mov     [rbp+1A50h+var_1298], rdx
 * 000000014026F5EA: mov     rdx, [rsp+0DA0h+arg_0]
 * 000000014026F5F2: xor     rbx, rax
 * 000000014026F5F5: mov     r14, rbx
 * 000000014026F5F8: mov     r8, rbx
 * 000000014026F5FB: xor     r14, rdx
 * 000000014026F5FE: lea     rax, [rdx+808h]
 * 000000014026F605: xor     [rax], r8
 * 000000014026F608: lea     rax, [rax-8]
 * 000000014026F60C: ror     r8, cl
 * 000000014026F60F: sub     ecx, r12d
 * 000000014026F612: jnz     short loc_14026F605
 * 000000014026F614: lea     r9, [r15-810h]
 * 000000014026F61B: mov     r12, r15
 * 000000014026F61E: shr     r9, 3
 * 000000014026F622: test    r9d, r9d
 * 000000014026F625: jz      short loc_14026F663
 * 000000014026F627: movsxd  r10, r9d
 * 000000014026F62A: lea     edi, [rcx+1]
 * 000000014026F62D: add     r10, 101h
 * 000000014026F634: lea     r10, [rdx+r10*8]
 * 000000014026F638: mov     rdx, [r10]
 * 000000014026F63B: lea     rax, [r14+r14]
 * 000000014026F63F: mov     ecx, r9d
 * 000000014026F642: lea     r10, [r10-8]
 * 000000014026F646: ror     rdx, cl
 * 000000014026F649: mov     r14, rdx
 * 000000014026F64C: xor     r14, rax
 * 000000014026F64F: sub     r9d, edi
 * 000000014026F652: jnz     short loc_14026F638
 * 000000014026F654: mov     r10, [rbp+1A50h+var_1A40]
 * 000000014026F658: mov     r12, r15
 * 000000014026F65B: mov     rdx, [rsp+0DA0h+arg_0]
 * 000000014026F663: mov     ecx, esi
 * 000000014026F665: add     rdx, r12
 * 000000014026F668: sub     ecx, r15d
 * 000000014026F66B: shr     ecx, 3
 * 000000014026F66E: test    ecx, ecx
 * 000000014026F670: jz      short loc_14026F68F
 * 000000014026F672: lea     rdx, [rdx+rcx*8]
 * 000000014026F676: mov     r9d, 1
 * 000000014026F67C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014026F680: xor     [rdx], r8
 * 000000014026F683: lea     rdx, [rdx-8]
 * 000000014026F687: ror     r8, cl
 * 000000014026F68A: sub     ecx, r9d
 * 000000014026F68D: jnz     short loc_14026F680
 * 000000014026F68F: mov     r9, [rbp+1A50h+var_1A00]
 * 000000014026F693: mov     r12, [rbp+1A50h+var_19D0]
 * 000000014026F69A: test    r10, r10
 * 000000014026F69D: jz      short loc_14026F6BF
 * 000000014026F69F: mov     rcx, [rsp+0DA0h+arg_0]
 * 000000014026F6A7: lea     r8, [rbp+1A50h+var_1850]
 * 000000014026F6AE: mov     edx, esi
 * 000000014026F6B0: mov     [rsp+0DA0h+BugCheckParameter4], r10
 * 000000014026F6B5: mov     rax, r12
 * 000000014026F6B8: call    KeGuardDispatchICall
 * 000000014026F6BD: jmp     short loc_14026F6F7
 * 000000014026F6BF: xor     edx, edx
 * 000000014026F6C1: test    r11, r11
 * 000000014026F6C4: jnz     short loc_14026F6D9
 * 000000014026F6C6: lea     r8, [rbp+1A50h+var_1850]
 * 000000014026F6CD: xor     ecx, ecx
 * 000000014026F6CF: mov     rax, r9
 * 000000014026F6D2: call    KeGuardDispatchICall
 * 000000014026F6D7: jmp     short loc_14026F6F7
 * 000000014026F6D9: lea     rax, [rbp+1A50h+var_1850]
 * 000000014026F6E0: xor     r9d, r9d
 * 000000014026F6E3: mov     [rsp+0DA0h+BugCheckParameter4], rax
 * 000000014026F6E8: xor     r8d, r8d
 * 000000014026F6EB: mov     rax, [rbp+1A50h+var_1A38]
 * 000000014026F6EF: mov     rcx, r11
 * 000000014026F6F2: call    KeGuardDispatchICall
 * 000000014026F6F7: xor     eax, eax
 * 000000014026F6F9: test    r13d, r13d
 * 000000014026F6FC: mov     r13, [rsp+0DA0h+arg_0]
 * 000000014026F704: lea     r12d, [rax+1]
 * 000000014026F708: jz      loc_14026F80D
 * 000000014026F70E: mov     r8, rbx
 * 000000014026F711: lea     rax, [r13+808h]
 * 000000014026F718: xor     r8, r13
 * 000000014026F71B: mov     ecx, 102h
 * 000000014026F720: xor     [rax], rbx
 * 000000014026F723: lea     rax, [rax-8]
 * 000000014026F727: ror     rbx, cl
 * 000000014026F72A: sub     ecx, r12d
 * 000000014026F72D: jnz     short loc_14026F720
 * 000000014026F72F: lea     r9, [r15-810h]
 * 000000014026F736: mov     r11, r15
 * 000000014026F739: shr     r9, 3
 * 000000014026F73D: test    r9d, r9d
 * 000000014026F740: jz      short loc_14026F76F
 * 000000014026F742: movsxd  rax, r9d
 * 000000014026F745: lea     r10, [r13+808h]
 * 000000014026F74C: lea     r10, [r10+rax*8]
 * 000000014026F750: mov     rdx, [r10]
 * 000000014026F753: lea     rax, [r8+r8]
 * 000000014026F757: mov     ecx, r9d
 * 000000014026F75A: lea     r10, [r10-8]
 * 000000014026F75E: ror     rdx, cl
 * 000000014026F761: mov     r8, rdx
 * 000000014026F764: xor     r8, rax
 * 000000014026F767: sub     r9d, r12d
 * 000000014026F76A: jnz     short loc_14026F750
 * 000000014026F76C: mov     r11, r15
 * 000000014026F76F: sub     esi, r15d
 * 000000014026F772: lea     rcx, [r11+r13]
 * 000000014026F776: shr     esi, 3
 * 000000014026F779: test    esi, esi
 * 000000014026F77B: jz      short loc_14026F797
 * 000000014026F77D: mov     eax, esi
 * 000000014026F77F: dec     rax
 * 000000014026F782: lea     rdx, [rcx+rax*8]
 * 000000014026F786: xor     [rdx], rbx
 * 000000014026F789: mov     ecx, esi
 * 000000014026F78B: ror     rbx, cl
 * 000000014026F78E: lea     rdx, [rdx-8]
 * 000000014026F792: sub     esi, r12d
 * 000000014026F795: jnz     short loc_14026F786
 * 000000014026F797: cmp     r8, r14
 * 000000014026F79A: jz      short loc_14026F815
 * 000000014026F79C: mov     rax, [r13+510h]
 * 000000014026F7A3: mov     ecx, [r13+5E4h]
 * 000000014026F7AA: mov     [rax], r13
 * 000000014026F7AD: mov     [rax+10h], ecx
 * 000000014026F7B0: xor     eax, eax
 * 000000014026F7B2: cmp     [r13+6C0h], eax
 * 000000014026F7B9: jnz     short loc_14026F815
 * 000000014026F7BB: mov     rax, [r13+510h]
 * 000000014026F7C2: mov     rcx, r8
 * 000000014026F7C5: xor     rcx, r14
 * 000000014026F7C8: mov     [rax+18h], rcx
 * 000000014026F7CC: xor     eax, eax
 * 000000014026F7CE: cmp     [r13+6C0h], eax
 * 000000014026F7D5: jnz     short loc_14026F815
 * 000000014026F7D7: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014026F7E1: add     rax, r13
 * 000000014026F7E4: mov     [r13+6C8h], rax
 * 000000014026F7EB: xor     eax, eax
 * 000000014026F7ED: mov     [r13+6D0h], rax
 * 000000014026F7F4: mov     qword ptr [r13+6D8h], 10Eh
 * 000000014026F7FF: mov     [r13+6E0h], r8
 * 000000014026F806: mov     [r13+6C0h], r12d
 * 000000014026F80D: mov     r15d, 4
 * 000000014026F813: jmp     short loc_14026F81D
 * 000000014026F815: mov     r15d, 4
 * 000000014026F81B: xor     eax, eax
 * 000000014026F81D: mov     esi, [r13+0C4h]
 * 000000014026F824: lea     rcx, [r13+578h]
 * 000000014026F82B: mov     [r13+0C4h], eax
 * 000000014026F832: mov     r9, r13
 * 000000014026F835: add     dword ptr [r13+628h], 578h
 * 000000014026F840: mov     rax, r13
 * 000000014026F843: mov     r10d, [r13+614h]
 * 000000014026F84A: mov     r11, [r13+618h]
 * 000000014026F851: cmp     r13, rcx
 * 000000014026F854: jnb     short loc_14026F862
 * 000000014026F856: prefetchnta byte ptr [rax]
 * 000000014026F859: add     rax, 40h ; '@'
 * 000000014026F85D: cmp     rax, rcx
 * 000000014026F860: jb      short loc_14026F856
 * 000000014026F862: mov     r8, r11
 * 000000014026F865: mov     ebx, 0Ah
 * 000000014026F86A: or      r14d, 0FFFFFFFFh
 * 000000014026F86E: mov     rdi, 7010008004002001h
 * 000000014026F878: mov     edx, 8
 * 000000014026F87D: mov     rax, [r9]
 * 000000014026F880: mov     ecx, r10d
 * 000000014026F883: xor     rax, r8
 * 000000014026F886: mov     r8, [r9+8]
 * 000000014026F88A: rol     rax, cl
 * 000000014026F88D: add     r9, 10h
 * 000000014026F891: xor     r8, rax
 * 000000014026F894: rol     r8, cl
 * 000000014026F897: sub     rdx, r12
 * 000000014026F89A: jnz     short loc_14026F87D
 * 000000014026F89C: mov     rcx, r9
 * 000000014026F89F: sub     rcx, r13
 * 000000014026F8A2: xor     rcx, r11
 * 000000014026F8A5: mov     rax, rcx
 * 000000014026F8A8: rol     rax, 11h
 * 000000014026F8AC: xor     rcx, rax
 * 000000014026F8AF: mov     rax, rdi
 * 000000014026F8B2: mul     rcx
 * 000000014026F8B5: xor     eax, edx
 * 000000014026F8B7: mov     [rbp+1A50h+var_1290], rdx
 * 000000014026F8BE: xor     r10d, eax
 * 000000014026F8C1: and     r10d, 3Fh
 * 000000014026F8C5: cmovz   r10d, r12d
 * 000000014026F8C9: add     ebx, r14d
 * 000000014026F8CC: jnz     short loc_14026F878
 * 000000014026F8CE: lea     edx, [rbx+78h]
 * 000000014026F8D1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014026F8D8: lea     r11d, [rbx+0Fh]
 * 000000014026F8DC: xor     r8, [r9]
 * 000000014026F8DF: mov     ecx, r10d
 * 000000014026F8E2: rol     r8, cl
 * 000000014026F8E5: add     r9, 8
 * 000000014026F8E9: add     edx, 0FFFFFFF8h
 * 000000014026F8EC: sub     r11, r12
 * 000000014026F8EF: jnz     short loc_14026F8DC
 * 000000014026F8F1: test    edx, edx
 * 000000014026F8F3: jz      short loc_14026F90A
 * 000000014026F8F5: movzx   eax, byte ptr [r9]
 * 000000014026F8F9: mov     ecx, r10d
 * 000000014026F8FC: xor     r8, rax
 * 000000014026F8FF: add     r9, r12
 * 000000014026F902: rol     r8, cl
 * 000000014026F905: add     edx, r14d
 * 000000014026F908: jnz     short loc_14026F8F5
 * 000000014026F90A: mov     [r13+0C4h], esi
 * 000000014026F911: cmp     [r13+7D0h], r8
 * 000000014026F918: jz      short loc_14026F994
 * 000000014026F91A: mov     rax, [r13+510h]
 * 000000014026F921: mov     ecx, [r13+5E4h]
 * 000000014026F928: mov     [rax], r13
 * 000000014026F92B: mov     [rax+10h], ecx
 * 000000014026F92E: xor     ecx, ecx
 * 000000014026F930: mov     rax, [r13+7D0h]
 * 000000014026F937: cmp     [r13+6C0h], ecx
 * 000000014026F93E: jnz     short loc_14026F951
 * 000000014026F940: mov     rcx, r8
 * 000000014026F943: xor     rcx, rax
 * 000000014026F946: mov     rax, [r13+510h]
 * 000000014026F94D: mov     [rax+18h], rcx
 * 000000014026F951: xor     eax, eax
 * 000000014026F953: cmp     [r13+6C0h], eax
 * 000000014026F95A: jnz     short loc_14026F996
 * 000000014026F95C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014026F966: add     rax, r13
 * 000000014026F969: mov     [r13+6C8h], rax
 * 000000014026F970: xor     eax, eax
 * 000000014026F972: mov     [r13+6D0h], rax
 * 000000014026F979: mov     qword ptr [r13+6D8h], 109h
 * 000000014026F984: mov     [r13+6E0h], r8
 * 000000014026F98B: mov     [r13+6C0h], r12d
 * 000000014026F992: jmp     short loc_14026F996
 * 000000014026F994: xor     eax, eax
 * 000000014026F996: mov     ecx, [r13+730h]
 * 000000014026F99D: mov     rsi, r13
 * 000000014026F9A0: mov     [rbp+1A50h+var_1A20], r13
 * 000000014026F9A4: mov     r8d, 3
 * 000000014026F9AA: mov     [rbp+1A50h+var_19E4], eax
 * 000000014026F9AD: mov     [rbp+1A50h+var_19C0], eax
 * 000000014026F9B3: cmp     ecx, r14d
 * 000000014026F9B6: jz      loc_14026FA9E
 * 000000014026F9BC: mov     rax, [r13+270h]
 * 000000014026F9C3: call    KeGuardDispatchICall
 * 000000014026F9C8: mov     rbx, rax
 * 000000014026F9CB: test    rax, rax
 * 000000014026F9CE: jnz     short loc_14026F9EA
 * 000000014026F9D0: mov     rax, [r13+278h]
 * 000000014026F9D7: xor     ecx, ecx
 * 000000014026F9D9: call    KeGuardDispatchICall
 * 000000014026F9DE: mov     rbx, rax
 * 000000014026F9E1: test    rax, rax
 * 000000014026F9E4: jz      loc_14026FA98
 * 000000014026F9EA: mov     rax, [r13+288h]
 * 000000014026F9F1: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014026F9F8: mov     rcx, rbx
 * 000000014026F9FB: call    KeGuardDispatchICall
 * 000000014026FA00: mov     r14d, eax
 * 000000014026FA03: test    eax, eax
 * 000000014026FA05: jns     short loc_14026FA1A
 * 000000014026FA07: mov     rax, [r13+280h]
 * 000000014026FA0E: mov     rcx, rbx
 * 000000014026FA11: call    KeGuardDispatchICall
 * 000000014026FA16: xor     eax, eax
 * 000000014026FA18: jmp     short loc_14026FA83
 * 000000014026FA1A: mov     [r13+740h], rbx
 * 000000014026FA21: mov     rax, [r13+2B0h]
 * 000000014026FA28: call    KeGuardDispatchICall
 * 000000014026FA2D: mov     rbx, rax
 * 000000014026FA30: mov     rax, [r13+2D0h]
 * 000000014026FA37: mov     rcx, rbx
 * 000000014026FA3A: call    KeGuardDispatchICall
 * 000000014026FA3F: mov     rdx, rax
 * 000000014026FA42: test    rax, rax
 * 000000014026FA45: jnz     short loc_14026FA4C
 * 000000014026FA47: mov     eax, r12d
 * 000000014026FA4A: jmp     short loc_14026FA5F
 * 000000014026FA4C: mov     rax, [r13+2E0h]
 * 000000014026FA53: mov     rcx, rbx
 * 000000014026FA56: call    KeGuardDispatchICall
 * 000000014026FA5B: xor     ecx, ecx
 * 000000014026FA5D: mov     eax, ecx
 * 000000014026FA5F: shl     eax, 2
 * 000000014026FA62: xor     eax, [r13+74Ch]
 * 000000014026FA69: and     eax, r15d
 * 000000014026FA6C: xor     [r13+74Ch], eax
 * 000000014026FA73: add     dword ptr [r13+628h], 10000h
 * 000000014026FA7E: xor     eax, eax
 * 000000014026FA80: mov     r14d, eax
 * 000000014026FA83: test    r14d, r14d
 * 000000014026FA86: js      short loc_14026FA98
 * 000000014026FA88: mov     ebx, 1
 * 000000014026FA8D: mov     [rbp+1A50h+var_19C0], ebx
 * 000000014026FA93: jmp     loc_14026FCEF
 * 000000014026FA98: mov     r8d, 3
 * 000000014026FA9E: mov     eax, [r13+74Ch]
 * 000000014026FAA5: test    al, 8
 * 000000014026FAA7: jnz     short loc_14026FAB3
 * 000000014026FAA9: xor     eax, eax
 * 000000014026FAAB: mov     [rbp+1A50h+var_19E4], eax
 * 000000014026FAAE: jmp     loc_14026FCEA
 * 000000014026FAB3: rdtsc
 * 000000014026FAB5: shl     rdx, 20h
 * 000000014026FAB9: mov     rbx, 7010008004002001h
 * 000000014026FAC3: or      rax, rdx
 * 000000014026FAC6: mov     rcx, rax
 * 000000014026FAC9: ror     rax, 3
 * 000000014026FACD: xor     rcx, rax
 * 000000014026FAD0: mov     rax, rbx
 * 000000014026FAD3: mul     rcx
 * 000000014026FAD6: mov     [rbp+1A50h+var_1288], rdx
 * 000000014026FADD: xor     dl, al
 * 000000014026FADF: xor     eax, eax
 * 000000014026FAE1: test    r8b, dl
 * 000000014026FAE4: jnz     short loc_14026FAAB
 * 000000014026FAE6: mov     r14d, eax
 * 000000014026FAE9: xor     ecx, ecx
 * 000000014026FAEB: mov     rax, [r13+3A8h]
 * 000000014026FAF2: call    KeGuardDispatchICall
 * 000000014026FAF7: mov     rcx, rax
 * 000000014026FAFA: test    rax, rax
 * 000000014026FAFD: jz      short loc_14026FB4C
 * 000000014026FAFF: mov     rax, [r13+3A8h]
 * 000000014026FB06: add     r14d, r12d
 * 000000014026FB09: call    KeGuardDispatchICall
 * 000000014026FB0E: mov     rcx, rax
 * 000000014026FB11: test    rax, rax
 * 000000014026FB14: jnz     short loc_14026FAFF
 * 000000014026FB16: mov     rsi, r13
 * 000000014026FB19: test    r14d, r14d
 * 000000014026FB1C: jz      short loc_14026FB4C
 * 000000014026FB1E: rdtsc
 * 000000014026FB20: shl     rdx, 20h
 * 000000014026FB24: or      rax, rdx
 * 000000014026FB27: mov     rcx, rax
 * 000000014026FB2A: ror     rax, 3
 * 000000014026FB2E: xor     rcx, rax
 * 000000014026FB31: mov     rax, rbx
 * 000000014026FB34: mul     rcx
 * 000000014026FB37: mov     ecx, r14d
 * 000000014026FB3A: mov     [rbp+1A50h+var_1280], rdx
 * 000000014026FB41: xor     rax, rdx
 * 000000014026FB44: xor     edx, edx
 * 000000014026FB46: div     rcx
 * 000000014026FB49: mov     r14, rdx
 * 000000014026FB4C: mov     rax, [r13+3A8h]
 * 000000014026FB53: xor     ecx, ecx
 * 000000014026FB55: call    KeGuardDispatchICall
 * 000000014026FB5A: mov     rbx, rax
 * 000000014026FB5D: xor     eax, eax
 * 000000014026FB5F: test    rbx, rbx
 * 000000014026FB62: jz      loc_14026FCE5
 * 000000014026FB68: or      r12d, 0FFFFFFFFh
 * 000000014026FB6C: test    r14d, r14d
 * 000000014026FB6F: jz      short loc_14026FB8B
 * 000000014026FB71: mov     rax, [r13+3A8h]
 * 000000014026FB78: mov     rcx, rbx
 * 000000014026FB7B: add     r14d, r12d
 * 000000014026FB7E: call    KeGuardDispatchICall
 * 000000014026FB83: mov     rbx, rax
 * 000000014026FB86: test    rax, rax
 * 000000014026FB89: jnz     short loc_14026FB6C
 * 000000014026FB8B: mov     rsi, r13
 * 000000014026FB8E: test    rbx, rbx
 * 000000014026FB91: jz      loc_14026FCE3
 * 000000014026FB97: mov     rax, [r13+398h]
 * 000000014026FB9E: mov     rcx, rbx
 * 000000014026FBA1: call    KeGuardDispatchICall
 * 000000014026FBA6: test    eax, eax
 * 000000014026FBA8: jns     short loc_14026FBBD
 * 000000014026FBAA: mov     rax, [r13+3B0h]
 * 000000014026FBB1: mov     rcx, rbx
 * 000000014026FBB4: call    KeGuardDispatchICall
 * 000000014026FBB9: xor     eax, eax
 * 000000014026FBBB: mov     ebx, eax
 * 000000014026FBBD: test    rbx, rbx
 * 000000014026FBC0: jz      loc_14026FCE3
 * 000000014026FBC6: mov     rax, [r13+428h]
 * 000000014026FBCD: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014026FBD4: mov     rcx, rbx
 * 000000014026FBD7: call    KeGuardDispatchICall
 * 000000014026FBDC: mov     rax, [r13+1C0h]
 * 000000014026FBE3: lea     rdx, [rbp+1A50h+var_E50]
 * 000000014026FBEA: xor     r9d, r9d
 * 000000014026FBED: xor     r8d, r8d
 * 000000014026FBF0: mov     rcx, rbx
 * 000000014026FBF3: call    KeGuardDispatchICall
 * 000000014026FBF8: rdtsc
 * 000000014026FBFA: shl     rdx, 20h
 * 000000014026FBFE: or      rax, rdx
 * 000000014026FC01: mov     rcx, rax
 * 000000014026FC04: ror     rax, 3
 * 000000014026FC08: xor     rcx, rax
 * 000000014026FC0B: mov     rax, 7010008004002001h
 * 000000014026FC15: mul     rcx
 * 000000014026FC18: lea     rcx, [rbp+1A50h+var_E50]
 * 000000014026FC1F: mov     rbx, rdx
 * 000000014026FC22: mov     [rbp+1A50h+var_1278], rdx
 * 000000014026FC29: xor     rbx, rax
 * 000000014026FC2C: mov     rax, [r13+1B8h]
 * 000000014026FC33: call    KeGuardDispatchICall
 * 000000014026FC38: mov     ecx, eax
 * 000000014026FC3A: xor     edx, edx
 * 000000014026FC3C: mov     rax, rbx
 * 000000014026FC3F: div     rcx
 * 000000014026FC42: mov     rcx, gs:188h
 * 000000014026FC4B: mov     rax, [r13+1C8h]
 * 000000014026FC52: mov     rbx, rdx
 * 000000014026FC55: lea     rdx, [rbp+1A50h+var_1550]
 * 000000014026FC5C: call    KeGuardDispatchICall
 * 000000014026FC61: mov     rax, [r13+1A8h]
 * 000000014026FC68: lea     rdx, [rbp+1A50h+var_E50]
 * 000000014026FC6F: lea     rcx, [rbp+1A50h+var_1140]
 * 000000014026FC76: call    KeGuardDispatchICall
 * 000000014026FC7B: jmp     short loc_14026FC84
 * 000000014026FC7D: test    ebx, ebx
 * 000000014026FC7F: jz      short loc_14026FCA4
 * 000000014026FC81: add     ebx, r12d
 * 000000014026FC84: mov     rax, [r13+1B0h]
 * 000000014026FC8B: lea     rdx, [rbp+1A50h+var_1140]
 * 000000014026FC92: lea     rcx, [rbp+1A50h+var_18F0]
 * 000000014026FC99: call    KeGuardDispatchICall
 * 000000014026FC9E: test    eax, eax
 * 000000014026FCA0: jns     short loc_14026FC7D
 * 000000014026FCA2: jmp     short loc_14026FCBD
 * 000000014026FCA4: mov     rax, [r13+1A0h]
 * 000000014026FCAB: lea     rcx, [rbp+1A50h+var_1550]
 * 000000014026FCB2: mov     edx, [rbp+1A50h+var_18F0]
 * 000000014026FCB8: call    KeGuardDispatchICall
 * 000000014026FCBD: mov     rax, [r13+1D0h]
 * 000000014026FCC4: lea     rdx, [rbp+1A50h+var_1150]
 * 000000014026FCCB: lea     rcx, [rbp+1A50h+var_1550]
 * 000000014026FCD2: call    KeGuardDispatchICall
 * 000000014026FCD7: mov     ebx, 1
 * 000000014026FCDC: xor     eax, eax
 * 000000014026FCDE: mov     [rbp+1A50h+var_19E4], ebx
 * 000000014026FCE1: jmp     short loc_14026FCEF
 * 000000014026FCE3: xor     eax, eax
 * 000000014026FCE5: mov     [rbp+1A50h+var_19E4], eax
 * 000000014026FCE8: xor     eax, eax
 * 000000014026FCEA: mov     ebx, 1
 * 000000014026FCEF: mov     [rbp+1A50h+var_18C0], rax
 * 000000014026FCF6: mov     ecx, r15d
 * 000000014026FCF9: lea     rax, [rbp+1A50h+var_18B8]
 * 000000014026FD00: xor     edx, edx
 * 000000014026FD02: mov     [rax], dl
 * 000000014026FD04: add     rax, rbx
 * 000000014026FD07: add     ecx, 0FFFFFFFFh
 * 000000014026FD0A: jnz     short loc_14026FD02
 * 000000014026FD0C: mov     edx, [r13+620h]
 * 000000014026FD13: lea     r11d, [rcx+19h]
 * 000000014026FD17: add     r13, 62Ch
 * 000000014026FD1E: mov     [rbp+1A50h+var_19F8], edx
 * 000000014026FD21: lea     r14d, [rcx+6]
 * 000000014026FD25: mov     [rbp+1A50h+var_1A10], r13
 * 000000014026FD29: lea     r10d, [rcx+5]
 * 000000014026FD2D: mov     [rbp+1A50h+var_19D8], 0C000009Ah
 * 000000014026FD34: mov     rcx, [rsp+0DA0h+arg_0]
 * 000000014026FD3C: mov     r12d, 8000h
 * 000000014026FD42: mov     eax, [r13+0]
 * 000000014026FD46: mov     [rbp+1A50h+var_1A08], 0C0000225h
 * 000000014026FD4D: cmp     [rcx+628h], eax
 * 000000014026FD53: jge     loc_1402792D5
 * 000000014026FD59: mov     eax, [rsi+748h]
 * 000000014026FD5F: mov     ecx, 110000h
 * 000000014026FD64: and     eax, ecx
 * 000000014026FD66: cmp     eax, ecx
 * 000000014026FD68: jz      short loc_14026FD71
 * 000000014026FD6A: xor     eax, eax
 * 000000014026FD6C: mov     dr7, rax
 * 000000014026FD6F: jmp     short loc_14026FD73
 * 000000014026FD71: xor     eax, eax
 * 000000014026FD73: cmp     edx, [rsi+60Ch]
 * 000000014026FD79: jnz     short loc_14026FDB4
 * 000000014026FD7B: add     [rsi+630h], ebx
 * 000000014026FD81: mov     edx, eax
 * 000000014026FD83: cmp     dword ptr [rsi+718h], 9
 * 000000014026FD8A: mov     [rbp+1A50h+var_19F8], eax
 * 000000014026FD8D: jnz     short loc_14026FDB4
 * 000000014026FD8F: mov     eax, [rsi+748h]
 * 000000014026FD95: test    bl, al
 * 000000014026FD97: jnz     short loc_14026FDB4
 * 000000014026FD99: cmp     dword ptr [rsi+730h], 0FFFFFFFFh
 * 000000014026FDA0: jnz     short loc_14026FDAC
 * 000000014026FDA2: xor     eax, eax
 * 000000014026FDA4: mov     [rsi+730h], eax
 * 000000014026FDAA: jmp     short loc_14026FDB4
 * 000000014026FDAC: or      eax, ebx
 * 000000014026FDAE: mov     [rsi+748h], eax
 * 000000014026FDB4: mov     rax, [rsi+7E8h]
 * 000000014026FDBB: mov     r9, rsi
 * 000000014026FDBE: test    rax, rax
 * 000000014026FDC1: cmovnz  r9, rax
 * 000000014026FDC5: xor     eax, eax
 * 000000014026FDC7: mov     [rbp+1A50h+var_1A40], r9
 * 000000014026FDCB: mov     r8d, eax
 * 000000014026FDCE: mov     r12d, [r9+608h]
 * 000000014026FDD5: add     r12, r9
 * 000000014026FDD8: mov     [rbp+1A50h+var_1A48], r12
 * 000000014026FDDC: cmp     dword ptr [rbp+1A50h+var_18C0], eax
 * 000000014026FDE2: jz      short loc_14026FE01
 * 000000014026FDE4: cmp     dword ptr [rbp+1A50h+var_18C0+4], edx
 * 000000014026FDEA: ja      short loc_14026FE01
 * 000000014026FDEC: mov     r12d, [rbp+1A50h+var_18B8]
 * 000000014026FDF3: mov     r8d, dword ptr [rbp+1A50h+var_18C0+4]
 * 000000014026FDFA: add     r12, r9
 * 000000014026FDFD: mov     [rbp+1A50h+var_1A48], r12
 * 000000014026FE01: cmp     r8d, edx
 * 000000014026FE04: jz      loc_14026FF3D
 * 000000014026FE0A: mov     esi, 3
 * 000000014026FE0F: mov     eax, edx
 * 000000014026FE11: sub     eax, r8d
 * 000000014026FE14: add     r8d, eax
 * 000000014026FE17: mov     r10d, eax
 * 000000014026FE1A: mov     [rbp+1A50h+var_1A50], r8d
 * 000000014026FE1E: mov     r8, 0AAAAAAAAAAAAAAABh
 * 000000014026FE28: lea     edi, [rsi+9]
 * 000000014026FE2B: lea     r13d, [rsi-1]
 * 000000014026FE2F: lea     r9d, [rsi+4]
 * 000000014026FE33: mov     eax, [r12]
 * 000000014026FE37: cmp     eax, ebx
 * 000000014026FE39: jz      loc_14026FEFA
 * 000000014026FE3F: cmp     eax, r9d
 * 000000014026FE42: jz      loc_14026FEEA
 * 000000014026FE48: cmp     eax, 8
 * 000000014026FE4B: jz      loc_14026FEDC
 * 000000014026FE51: cmp     eax, 0Ah
 * 000000014026FE54: jz      short loc_14026FED0
 * 000000014026FE56: cmp     eax, edi
 * 000000014026FE58: jz      loc_14026FEFA
 * 000000014026FE5E: cmp     eax, 1Ch
 * 000000014026FE61: jz      short loc_14026FEC8
 * 000000014026FE63: cmp     eax, 1Eh
 * 000000014026FE66: jz      short loc_14026FEA0
 * 000000014026FE68: add     eax, 0FFFFFFDFh
 * 000000014026FE6B: cmp     eax, ebx
 * 000000014026FE6D: ja      short loc_14026FE99
 * 000000014026FE6F: mov     ecx, [r12+20h]
 * 000000014026FE74: mov     edx, [r12+28h]
 * 000000014026FE79: and     ecx, 0FFFh
 * 000000014026FE7F: add     rdx, 0FFFh
 * 000000014026FE86: add     rdx, rcx
 * 000000014026FE89: shr     rdx, 0Ch
 * 000000014026FE8D: lea     eax, [rdx+rdx*4]
 * 000000014026FE90: lea     eax, ds:30h[rax*4]
 * 000000014026FE97: jmp     short loc_14026FF10
 * 000000014026FE99: mov     eax, 30h ; '0'
 * 000000014026FE9E: jmp     short loc_14026FF10
 * 000000014026FEA0: mov     ecx, [r12+24h]
 * 000000014026FEA5: mov     rax, r8
 * 000000014026FEA8: sub     ecx, ebx
 * 000000014026FEAA: mul     rcx
 * 000000014026FEAD: movzx   eax, word ptr [r12+28h]
 * 000000014026FEB3: shr     rdx, 3
 * 000000014026FEB7: add     edx, r9d
 * 000000014026FEBA: and     edx, 0FFFFFFF8h
 * 000000014026FEBD: add     eax, r13d
 * 000000014026FEC0: lea     eax, [rax+rax*2]
 * 000000014026FEC3: lea     eax, [rdx+rax*8]
 * 000000014026FEC6: jmp     short loc_14026FF10
 * 000000014026FEC8: movzx   eax, word ptr [r12+28h]
 * 000000014026FECE: jmp     short loc_14026FEE2
 * 000000014026FED0: mov     eax, [r12+1Ch]
 * 000000014026FED5: add     eax, esi
 * 000000014026FED7: shl     eax, 4
 * 000000014026FEDA: jmp     short loc_14026FF10
 * 000000014026FEDC: movzx   eax, word ptr [r12+20h]
 * 000000014026FEE2: add     eax, 37h ; '7'
 * 000000014026FEE5: and     eax, 0FFFFFFF8h
 * 000000014026FEE8: jmp     short loc_14026FF10
 * 000000014026FEEA: mov     eax, [r12+18h]
 * 000000014026FEEF: add     eax, r13d
 * 000000014026FEF2: lea     eax, [rax+rax*2]
 * 000000014026FEF5: shl     eax, 3
 * 000000014026FEF8: jmp     short loc_14026FF10
 * 000000014026FEFA: mov     ecx, [r12+10h]
 * 000000014026FEFF: mov     rax, r8
 * 000000014026FF02: mul     rcx
 * 000000014026FF05: shr     rdx, 3
 * 000000014026FF09: lea     eax, ds:30h[rdx*4]
 * 000000014026FF10: add     r12, rax
 * 000000014026FF13: sub     r10, rbx
 * 000000014026FF16: jnz     loc_14026FE33
 * 000000014026FF1C: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014026FF20: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014026FF27: mov     r8d, [rbp+1A50h+var_1A50]
 * 000000014026FF2B: mov     r10d, 5
 * 000000014026FF31: mov     r9, [rbp+1A50h+var_1A40]
 * 000000014026FF35: mov     r13, [rbp+1A50h+var_1A10]
 * 000000014026FF39: mov     [rbp+1A50h+var_1A48], r12
 * 000000014026FF3D: mov     eax, r12d
 * 000000014026FF40: mov     dword ptr [rbp+1A50h+var_18C0], ebx
 * 000000014026FF46: sub     eax, r9d
 * 000000014026FF49: mov     dword ptr [rbp+1A50h+var_18C0+4], r8d
 * 000000014026FF50: mov     [rbp+1A50h+var_18B8], eax
 * 000000014026FF56: mov     ecx, [r12]
 * 000000014026FF5A: cmp     ecx, r11d
 * 000000014026FF5D: jg      loc_140275699
 * 000000014026FF63: jz      loc_14027529E
 * 000000014026FF69: cmp     ecx, 0Ah
 * 000000014026FF6C: jg      loc_140270E4A
 * 000000014026FF72: jz      loc_140270B06
 * 000000014026FF78: xor     eax, eax
 * 000000014026FF7A: mov     edx, ecx
 * 000000014026FF7C: test    ecx, ecx
 * 000000014026FF7E: jz      loc_140270897
 * 000000014026FF84: sub     edx, 1
 * 000000014026FF87: jz      loc_140274269
 * 000000014026FF8D: lea     r13d, [rax+3]
 * 000000014026FF91: sub     edx, r13d
 * 000000014026FF94: jz      loc_14027074B
 * 000000014026FF9A: sub     edx, 1
 * 000000014026FF9D: jz      loc_1402704CC
 * 000000014026FFA3: sub     edx, 2
 * 000000014026FFA6: jz      loc_1402703B9
 * 000000014026FFAC: cmp     edx, 1
 * 000000014026FFAF: jnz     loc_140277BB5
 * 000000014026FFB5: mov     rcx, [r12+18h]
 * 000000014026FFBA: mov     r8, 0A3A03F5891C8B4E8h
 * 000000014026FFC4: movzx   eax, word ptr [r12+22h]
 * 000000014026FFCA: mov     rdx, 0B3B74BDEE4453415h
 * 000000014026FFD4: cmp     [rcx+42h], ax
 * 000000014026FFD8: jz      short loc_140270012
 * 000000014026FFDA: xor     eax, eax
 * 000000014026FFDC: cmp     [rsi+6C0h], eax
 * 000000014026FFE2: jnz     short loc_140270012
 * 000000014026FFE4: lea     rax, [rsi+r8]
 * 000000014026FFE8: mov     [rsi+6C8h], rax
 * 000000014026FFEF: lea     rax, [r12+rdx]
 * 000000014026FFF3: mov     [rsi+6D0h], rax
 * 000000014026FFFA: movsxd  rax, dword ptr [r12]
 * 000000014026FFFE: mov     [rsi+6D8h], rax
 * 0000000140270005: mov     [rsi+6E0h], rcx
 * 000000014027000C: mov     [rsi+6C0h], ebx
 * 0000000140270012: test    byte ptr [r12+22h], 40h
 * 0000000140270018: jnz     short loc_14027005E
 * 000000014027001A: lea     rax, [rcx+0C8h]
 * 0000000140270021: cmp     [rax], rax
 * 0000000140270024: jz      short loc_14027005E
 * 0000000140270026: xor     eax, eax
 * 0000000140270028: cmp     [rsi+6C0h], eax
 * 000000014027002E: jnz     short loc_14027005E
 * 0000000140270030: lea     rax, [rsi+r8]
 * 0000000140270034: mov     [rsi+6C8h], rax
 * 000000014027003B: lea     rax, [r12+rdx]
 * 000000014027003F: mov     [rsi+6D0h], rax
 * 0000000140270046: movsxd  rax, dword ptr [r12]
 * 000000014027004A: mov     [rsi+6D8h], rax
 * 0000000140270051: mov     [rsi+6E0h], rcx
 * 0000000140270058: mov     [rsi+6C0h], ebx
 * 000000014027005E: mov     r14, [r12+8]
 * 0000000140270063: mov     r8d, [r12+10h]
 * 0000000140270068: mov     r9, r14
 * 000000014027006B: add     [rsi+628h], r8d
 * 0000000140270072: mov     rax, r14
 * 0000000140270075: mov     r10d, [rsi+614h]
 * 000000014027007C: mov     r15, [rsi+618h]
 * 0000000140270083: lea     rcx, [r14+r8]
 * 0000000140270087: cmp     r14, rcx
 * 000000014027008A: jnb     short loc_140270098
 * 000000014027008C: prefetchnta byte ptr [rax]
 * 000000014027008F: add     rax, 40h ; '@'
 * 0000000140270093: cmp     rax, rcx
 * 0000000140270096: jb      short loc_14027008C
 * 0000000140270098: mov     r11d, r8d
 * 000000014027009B: mov     rbx, r15
 * 000000014027009E: shr     r11d, 7
 * 00000001402700A2: mov     r13d, 1
 * 00000001402700A8: test    r11d, r11d
 * 00000001402700AB: jz      short loc_140270112
 * 00000001402700AD: mov     rsi, 7010008004002001h
 * 00000001402700B7: mov     edx, 8
 * 00000001402700BC: mov     rax, [r9]
 * 00000001402700BF: mov     ecx, r10d
 * 00000001402700C2: xor     rax, rbx
 * 00000001402700C5: mov     rbx, [r9+8]
 * 00000001402700C9: rol     rax, cl
 * 00000001402700CC: add     r9, 10h
 * 00000001402700D0: xor     rbx, rax
 * 00000001402700D3: rol     rbx, cl
 * 00000001402700D6: sub     rdx, r13
 * 00000001402700D9: jnz     short loc_1402700BC
 * 00000001402700DB: mov     rcx, r9
 * 00000001402700DE: sub     rcx, r14
 * 00000001402700E1: xor     rcx, r15
 * 00000001402700E4: mov     rax, rcx
 * 00000001402700E7: rol     rax, 11h
 * 00000001402700EB: xor     rcx, rax
 * 00000001402700EE: mov     rax, rsi
 * 00000001402700F1: mul     rcx
 * 00000001402700F4: xor     eax, edx
 * 00000001402700F6: mov     [rbp+1A50h+var_1270], rdx
 * 00000001402700FD: xor     r10d, eax
 * 0000000140270100: and     r10d, 3Fh
 * 0000000140270104: cmovz   r10d, r13d
 * 0000000140270108: add     r11d, 0FFFFFFFFh
 * 000000014027010C: jnz     short loc_1402700B7
 * 000000014027010E: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140270112: and     r8d, 7Fh
 * 0000000140270116: cmp     r8d, 8
 * 000000014027011A: jb      short loc_140270139
 * 000000014027011C: mov     edx, r8d
 * 000000014027011F: shr     rdx, 3
 * 0000000140270123: xor     rbx, [r9]
 * 0000000140270126: mov     ecx, r10d
 * 0000000140270129: rol     rbx, cl
 * 000000014027012C: add     r9, 8
 * 0000000140270130: add     r8d, 0FFFFFFF8h
 * 0000000140270134: sub     rdx, r13
 * 0000000140270137: jnz     short loc_140270123
 * 0000000140270139: test    r8d, r8d
 * 000000014027013C: jz      short loc_140270154
 * 000000014027013E: movzx   eax, byte ptr [r9]
 * 0000000140270142: mov     ecx, r10d
 * 0000000140270145: xor     rbx, rax
 * 0000000140270148: add     r9, r13
 * 000000014027014B: rol     rbx, cl
 * 000000014027014E: add     r8d, 0FFFFFFFFh
 * 0000000140270152: jnz     short loc_14027013E
 * 0000000140270154: mov     rax, rbx
 * 0000000140270157: jmp     short loc_14027015B
 * 0000000140270159: xor     ebx, eax
 * 000000014027015B: shr     rax, 1Fh
 * 000000014027015F: test    rax, rax
 * 0000000140270162: jnz     short loc_140270159
 * 0000000140270164: mov     r14, [rbp+1A50h+var_1A48]
 * 0000000140270168: btr     ebx, 1Fh
 * 000000014027016C: mov     r12d, eax
 * 000000014027016F: cmp     ebx, [r14+14h]
 * 0000000140270173: jz      loc_14027024B
 * 0000000140270179: cmp     [r14], eax
 * 000000014027017C: jnz     short loc_140270186
 * 000000014027017E: cmp     [r14+18h], eax
 * 0000000140270182: cmovnz  r12d, r13d
 * 0000000140270186: mov     ecx, [r14+10h]
 * 000000014027018A: mov     rdx, [r14+8]
 * 000000014027018E: test    rcx, rcx
 * 0000000140270191: jz      loc_14027033F
 * 0000000140270197: mov     eax, [rsi+74Ch]
 * 000000014027019D: test    al, 40h
 * 000000014027019F: jz      loc_14027033F
 * 00000001402701A5: mov     r15, cr8
 * 00000001402701A9: mov     r8d, 2
 * 00000001402701AF: mov     cr8, r8
 * 00000001402701B3: lea     rax, [rcx-1]
 * 00000001402701B7: mov     r14, rdx
 * 00000001402701BA: add     rax, rdx
 * 00000001402701BD: lea     ecx, [r8-2]
 * 00000001402701C1: or      rax, 0FFFh
 * 00000001402701C7: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402701CE: test    r8b, r12b
 * 00000001402701D1: mov     [rbp+1A50h+var_1A40], rax
 * 00000001402701D5: cmovnz  ecx, r13d
 * 00000001402701D9: mov     [rbp+1A50h+var_1A50], ecx
 * 00000001402701DC: lea     r13, [r14-1]
 * 00000001402701E0: mov     rax, [rsi+438h]
 * 00000001402701E7: mov     edx, ecx
 * 00000001402701E9: mov     rcx, r14
 * 00000001402701EC: call    KeGuardDispatchICall
 * 00000001402701F1: cmp     eax, 0C000022Dh
 * 00000001402701F6: jnz     short loc_140270226
 * 00000001402701F8: mov     edx, 1
 * 00000001402701FD: test    dl, r12b
 * 0000000140270200: jnz     loc_140270325
 * 0000000140270206: cmp     r15b, dl
 * 0000000140270209: ja      short loc_14027022E
 * 000000014027020B: movzx   eax, r15b
 * 000000014027020F: mov     cr8, rax
 * 0000000140270213: mov     al, [r14]
 * 0000000140270216: mov     rax, cr8
 * 000000014027021A: lea     eax, [rdx+1]
 * 000000014027021D: mov     cr8, rax
 * 0000000140270221: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140270224: jmp     short loc_1402701E0
 * 0000000140270226: test    eax, eax
 * 0000000140270228: js      loc_140270333
 * 000000014027022E: mov     eax, 1000h
 * 0000000140270233: add     r14, rax
 * 0000000140270236: add     r13, rax
 * 0000000140270239: cmp     r13, [rbp+1A50h+var_1A40]
 * 000000014027023D: jnz     short loc_140270221
 * 000000014027023F: movzx   eax, r15b
 * 0000000140270243: mov     cr8, rax
 * 0000000140270247: mov     r14, [rbp+1A50h+var_1A48]
 * 000000014027024B: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140270255: mov     rbx, 0B3B74BDEE4453415h
 * 000000014027025F: lea     rax, [r14+30h]
 * 0000000140270263: xor     r9d, r9d
 * 0000000140270266: mov     [rbp+1A50h+var_1680], rax
 * 000000014027026D: lea     rcx, [rbp+1A50h+var_1688]
 * 0000000140270274: movzx   eax, word ptr [r14+20h]
 * 0000000140270279: xor     r8d, r8d
 * 000000014027027C: mov     [rbp+1A50h+var_1688], ax
 * 0000000140270283: xor     edx, edx
 * 0000000140270285: mov     [rbp+1A50h+var_1686], ax
 * 000000014027028C: lea     rax, [rbp+1A50h+var_1770]
 * 0000000140270293: mov     [rsp+0DA0h+var_D68], rax
 * 0000000140270298: xor     eax, eax
 * 000000014027029A: mov     [rsp+0DA0h+var_D70], rax
 * 000000014027029F: mov     byte ptr [rsp+0DA0h+var_D78], al
 * 00000001402702A3: mov     rax, [rsi+490h]
 * 00000001402702AA: mov     [rsp+0DA0h+BugCheckParameter4], rax
 * 00000001402702AF: mov     rax, [rsi+1E8h]
 * 00000001402702B6: call    KeGuardDispatchICall
 * 00000001402702BB: test    eax, eax
 * 00000001402702BD: js      short loc_14027031B
 * 00000001402702BF: mov     rcx, [rbp+1A50h+var_1770]
 * 00000001402702C6: cmp     rcx, [r14+18h]
 * 00000001402702CA: jz      short loc_14027030F
 * 00000001402702CC: xor     eax, eax
 * 00000001402702CE: cmp     [rsi+6C0h], eax
 * 00000001402702D4: jnz     short loc_14027030F
 * 00000001402702D6: lea     rax, [rsi+r15]
 * 00000001402702DA: mov     [rsi+6C8h], rax
 * 00000001402702E1: lea     rax, [r14+rbx]
 * 00000001402702E5: mov     [rsi+6D0h], rax
 * 00000001402702EC: movsxd  rax, dword ptr [r14]
 * 00000001402702EF: mov     [rsi+6D8h], rax
 * 00000001402702F6: mov     eax, 1
 * 00000001402702FB: mov     [rsi+6E0h], rcx
 * 0000000140270302: mov     [rsi+6C0h], eax
 * 0000000140270308: mov     rcx, [rbp+1A50h+var_1770]
 * 000000014027030F: mov     rax, [rsi+1E0h]
 * 0000000140270316: call    KeGuardDispatchICall
 * 000000014027031B: mov     ebx, 1
 * 0000000140270320: jmp     loc_140279285
 * 0000000140270325: movzx   eax, r15b
 * 0000000140270329: mov     cr8, rax
 * 000000014027032D: mov     r14, [rbp+1A50h+var_1A48]
 * 0000000140270331: jmp     short loc_140270344
 * 0000000140270333: movzx   eax, r15b
 * 0000000140270337: mov     cr8, rax
 * 000000014027033B: mov     r14, [rbp+1A50h+var_1A48]
 * 000000014027033F: mov     edx, 1
 * 0000000140270344: cmp     dword ptr [rsi+6C0h], 0
 * 000000014027034B: mov     eax, [r14+14h]
 * 000000014027034F: jnz     short loc_140270361
 * 0000000140270351: mov     ecx, ebx
 * 0000000140270353: xor     rcx, rax
 * 0000000140270356: mov     rax, [rsi+510h]
 * 000000014027035D: mov     [rax+18h], rcx
 * 0000000140270361: mov     rcx, [r14+8]
 * 0000000140270365: xor     eax, eax
 * 0000000140270367: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140270371: mov     rbx, 0B3B74BDEE4453415h
 * 000000014027037B: cmp     [rsi+6C0h], eax
 * 0000000140270381: jnz     loc_14027025F
 * 0000000140270387: lea     rax, [rsi+r15]
 * 000000014027038B: mov     [rsi+6C8h], rax
 * 0000000140270392: lea     rax, [r14+rbx]
 * 0000000140270396: mov     [rsi+6D0h], rax
 * 000000014027039D: movsxd  rax, dword ptr [r14]
 * 00000001402703A0: mov     [rsi+6D8h], rax
 * 00000001402703A7: mov     [rsi+6E0h], rcx
 * 00000001402703AE: mov     [rsi+6C0h], edx
 * 00000001402703B4: jmp     loc_14027025F
 * 00000001402703B9: mov     rax, [rsi+1A0h]
 * 00000001402703C0: lea     rcx, [rbp+1A50h+var_1220]
 * 00000001402703C7: mov     edx, [r12+1Ch]
 * 00000001402703CC: call    KeGuardDispatchICall
 * 00000001402703D1: mov     rax, [rsi+1D0h]
 * 00000001402703D8: lea     rdx, [rbp+1A50h+var_1210]
 * 00000001402703DF: lea     rcx, [rbp+1A50h+var_1220]
 * 00000001402703E6: call    KeGuardDispatchICall
 * 00000001402703EB: xor     eax, eax
 * 00000001402703ED: mov     r10d, eax
 * 00000001402703F0: cmp     [r12+18h], eax
 * 00000001402703F5: jbe     loc_1402704A6
 * 00000001402703FB: xor     edi, edi
 * 00000001402703FD: mov     eax, r10d
 * 0000000140270400: lea     r8, [rax+rax*2]
 * 0000000140270404: mov     r11d, [r12+r8*8+40h]
 * 0000000140270409: mov     ecx, r11d
 * 000000014027040C: rdmsr
 * 000000014027040E: shl     rdx, 20h
 * 0000000140270412: or      rax, rdx
 * 0000000140270415: mov     rdx, [r12+r8*8+38h]
 * 000000014027041A: mov     r9, rax
 * 000000014027041D: and     r9, [r12+r8*8+30h]
 * 0000000140270422: cmp     r9, rdx
 * 0000000140270425: jz      short loc_140270491
 * 0000000140270427: mov     ecx, [r12+1Ch]
 * 000000014027042C: shl     rcx, 20h
 * 0000000140270430: or      rcx, r11
 * 0000000140270433: cmp     [rsi+6C0h], edi
 * 0000000140270439: jnz     short loc_140270491
 * 000000014027043B: mov     rax, [rsi+510h]
 * 0000000140270442: xor     rdx, r9
 * 0000000140270445: mov     [rax+18h], rdx
 * 0000000140270449: cmp     [rsi+6C0h], edi
 * 000000014027044F: jnz     short loc_140270491
 * 0000000140270451: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027045B: add     rax, rsi
 * 000000014027045E: mov     [rsi+6C8h], rax
 * 0000000140270465: mov     rax, 0B3B74BDEE4453415h
 * 000000014027046F: add     rax, r12
 * 0000000140270472: mov     [rsi+6D0h], rax
 * 0000000140270479: movsxd  rax, dword ptr [r12]
 * 000000014027047D: mov     [rsi+6D8h], rax
 * 0000000140270484: mov     [rsi+6E0h], rcx
 * 000000014027048B: mov     [rsi+6C0h], ebx
 * 0000000140270491: add     r10d, ebx
 * 0000000140270494: cmp     r10d, [r12+18h]
 * 0000000140270499: jb      loc_1402703FD
 * 000000014027049F: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402704A6: mov     rax, [rsi+198h]
 * 00000001402704AD: lea     rcx, [rbp+1A50h+var_1210]
 * 00000001402704B4: call    KeGuardDispatchICall
 * 00000001402704B9: mov     eax, [r12+18h]
 * 00000001402704BE: shl     eax, 0Fh
 * 00000001402704C1: add     [rsi+628h], eax
 * 00000001402704C7: jmp     loc_140279285
 * 00000001402704CC: mov     ecx, [rsi+630h]
 * 00000001402704D2: test    bl, cl
 * 00000001402704D4: jz      loc_140279287
 * 00000001402704DA: test    dword ptr [rsi+748h], 40000000h
 * 00000001402704E4: jnz     short loc_1402704F5
 * 00000001402704E6: and     ecx, r13d
 * 00000001402704E9: mov     r13d, eax
 * 00000001402704EC: cmp     cl, 3
 * 00000001402704EF: setz    r13b
 * 00000001402704F3: jmp     short loc_140270545
 * 00000001402704F5: rdtsc
 * 00000001402704F7: shl     rdx, 20h
 * 00000001402704FB: mov     r13d, 0
 * 0000000140270501: or      rax, rdx
 * 0000000140270504: mov     rcx, rax
 * 0000000140270507: ror     rax, 3
 * 000000014027050B: xor     rcx, rax
 * 000000014027050E: mov     rax, 7010008004002001h
 * 0000000140270518: mul     rcx
 * 000000014027051B: mov     rcx, rdx
 * 000000014027051E: mov     [rbp+1A50h+var_1268], rdx
 * 0000000140270525: xor     rcx, rax
 * 0000000140270528: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140270532: mul     rcx
 * 0000000140270535: shr     rdx, 1
 * 0000000140270538: lea     rax, [rdx+rdx*2]
 * 000000014027053C: cmp     rcx, rax
 * 000000014027053F: setz    r13b
 * 0000000140270543: xor     eax, eax
 * 0000000140270545: mov     rbx, [rsi+4C8h]
 * 000000014027054C: mov     r14d, eax
 * 000000014027054F: mov     [rbp+1A50h+var_1A50], eax
 * 0000000140270552: mov     rax, [rsi+178h]
 * 0000000140270559: call    KeGuardDispatchICall
 * 000000014027055E: mov     rax, [rsi+128h]
 * 0000000140270565: xor     edx, edx
 * 0000000140270567: mov     rcx, rbx
 * 000000014027056A: call    KeGuardDispatchICall
 * 000000014027056F: mov     rcx, [rsi+4A0h]
 * 0000000140270576: mov     rax, [rcx]
 * 0000000140270579: cmp     rax, rcx
 * 000000014027057C: jz      short loc_140270598
 * 000000014027057E: mov     edx, 1
 * 0000000140270583: mov     [rax-12Ah], dl
 * 0000000140270589: add     r14d, edx
 * 000000014027058C: mov     rax, [rax]
 * 000000014027058F: cmp     rax, rcx
 * 0000000140270592: jnz     short loc_140270583
 * 0000000140270594: mov     [rbp+1A50h+var_1A50], r14d
 * 0000000140270598: mov     rax, [rsi+4D0h]
 * 000000014027059F: mov     r14d, 4
 * 00000001402705A5: mov     rdi, [rbp+1A50h+var_1A48]
 * 00000001402705A9: mov     ebx, r14d
 * 00000001402705AC: mov     r12, [rax]
 * 00000001402705AF: mov     r15d, [r12]
 * 00000001402705B3: mov     rax, [rsi+108h]
 * 00000001402705BA: mov     rdx, rbx
 * 00000001402705BD: mov     rcx, r12
 * 00000001402705C0: call    KeGuardDispatchICall
 * 00000001402705C5: mov     rdx, rax
 * 00000001402705C8: xor     eax, eax
 * 00000001402705CA: test    rdx, rdx
 * 00000001402705CD: jz      loc_1402706FC
 * 00000001402705D3: mov     rcx, [rdx]
 * 00000001402705D6: sar     rcx, 10h
 * 00000001402705DA: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 00000001402705DE: mov     al, [rcx]
 * 00000001402705E0: and     al, 7Fh
 * 00000001402705E2: cmp     al, 3
 * 00000001402705E4: jnz     short loc_140270655
 * 00000001402705E6: xor     eax, eax
 * 00000001402705E8: cmp     [rcx+1BEh], al
 * 00000001402705EE: jnz     short loc_14027064A
 * 00000001402705F0: test    dword ptr [rcx+304h], 4000000h
 * 00000001402705FA: jz      short loc_14027064A
 * 00000001402705FC: cmp     [rsi+6C0h], eax
 * 0000000140270602: jnz     short loc_14027064A
 * 0000000140270604: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027060E: add     rax, rsi
 * 0000000140270611: mov     [rsi+6C8h], rax
 * 0000000140270618: mov     rax, 0B3B74BDEE4453415h
 * 0000000140270622: add     rax, rdi
 * 0000000140270625: mov     [rsi+6D0h], rax
 * 000000014027062C: movsxd  rax, dword ptr [rdi]
 * 000000014027062F: mov     [rsi+6D8h], rax
 * 0000000140270636: mov     eax, 1
 * 000000014027063B: mov     [rsi+6E0h], rcx
 * 0000000140270642: mov     [rsi+6C0h], eax
 * 0000000140270648: xor     eax, eax
 * 000000014027064A: mov     [rcx+1BEh], al
 * 0000000140270650: jmp     loc_1402706ED
 * 0000000140270655: cmp     al, 6
 * 0000000140270657: jnz     loc_1402706ED
 * 000000014027065D: test    r13d, r13d
 * 0000000140270660: jz      loc_1402706ED
 * 0000000140270666: mov     rax, [rcx+2A8h]
 * 000000014027066D: cmp     rax, [rsi+318h]
 * 0000000140270674: jz      short loc_14027067F
 * 0000000140270676: cmp     rax, [rsi+320h]
 * 000000014027067D: jnz     short loc_14027069F
 * 000000014027067F: mov     rax, [rsi+328h]
 * 0000000140270686: cmp     [rcx+2B8h], rax
 * 000000014027068D: jnz     short loc_14027069F
 * 000000014027068F: mov     rax, [rsi+330h]
 * 0000000140270696: cmp     [rcx+2B0h], rax
 * 000000014027069D: jz      short loc_1402706ED
 * 000000014027069F: xor     eax, eax
 * 00000001402706A1: cmp     [rsi+6C0h], eax
 * 00000001402706A7: jnz     short loc_1402706ED
 * 00000001402706A9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402706B3: add     rax, rsi
 * 00000001402706B6: mov     [rsi+6C8h], rax
 * 00000001402706BD: mov     rax, 0B3B74BDEE4453415h
 * 00000001402706C7: add     rax, rdi
 * 00000001402706CA: mov     [rsi+6D0h], rax
 * 00000001402706D1: movsxd  rax, dword ptr [rdi]
 * 00000001402706D4: mov     [rsi+6D8h], rax
 * 00000001402706DB: mov     eax, 1
 * 00000001402706E0: mov     [rsi+6E0h], rcx
 * 00000001402706E7: mov     [rsi+6C0h], eax
 * 00000001402706ED: mov     rax, [rsi+120h]
 * 00000001402706F4: mov     rcx, r12
 * 00000001402706F7: call    KeGuardDispatchICall
 * 00000001402706FC: add     rbx, r14
 * 00000001402706FF: cmp     rbx, r15
 * 0000000140270702: jb      loc_1402705B3
 * 0000000140270708: mov     rcx, [rsi+4C8h]
 * 000000014027070F: xor     edx, edx
 * 0000000140270711: mov     rax, [rsi+130h]
 * 0000000140270718: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027071F: mov     r14d, [rbp+1A50h+var_1A50]
 * 0000000140270723: call    KeGuardDispatchICall
 * 0000000140270728: mov     rax, [rsi+180h]
 * 000000014027072F: call    KeGuardDispatchICall
 * 0000000140270734: shr     r15, 2
 * 0000000140270738: add     r14d, r15d
 * 000000014027073B: shl     r14d, 8
 * 000000014027073F: add     [rsi+628h], r14d
 * 0000000140270746: jmp     loc_14027031B
 * 000000014027074B: mov     eax, [rsi+630h]
 * 0000000140270751: test    bl, al
 * 0000000140270753: jnz     loc_140279285
 * 0000000140270759: mov     rbx, [rsi+4C8h]
 * 0000000140270760: xor     eax, eax
 * 0000000140270762: mov     r14d, eax
 * 0000000140270765: mov     rax, [rsi+178h]
 * 000000014027076C: call    KeGuardDispatchICall
 * 0000000140270771: mov     rax, [rsi+128h]
 * 0000000140270778: xor     edx, edx
 * 000000014027077A: mov     rcx, rbx
 * 000000014027077D: call    KeGuardDispatchICall
 * 0000000140270782: mov     rcx, [rsi+4A0h]
 * 0000000140270789: mov     r15d, 1
 * 000000014027078F: mov     rax, [rcx]
 * 0000000140270792: cmp     rax, rcx
 * 0000000140270795: jz      short loc_1402707A6
 * 0000000140270797: mov     [rax-12Ah], r15b
 * 000000014027079E: add     r14d, r15d
 * 00000001402707A1: mov     rax, [rax]
 * 00000001402707A4: jmp     short loc_140270792
 * 00000001402707A6: mov     rcx, [rsi+488h]
 * 00000001402707AD: mov     rbx, cr8
 * 00000001402707B1: mov     [rbp+1A50h+var_1A40], rbx
 * 00000001402707B5: mov     eax, 0Ch
 * 00000001402707BA: mov     cr8, rax
 * 00000001402707BE: mov     rax, [rsi+148h]
 * 00000001402707C5: lea     rdx, [rbp+1A50h+var_10C0]
 * 00000001402707CC: call    KeGuardDispatchICall
 * 00000001402707D1: mov     r8, [rsi+480h]
 * 00000001402707D8: mov     rcx, [r8]
 * 00000001402707DB: cmp     rcx, r8
 * 00000001402707DE: jz      short loc_140270857
 * 00000001402707E0: xor     eax, eax
 * 00000001402707E2: mov     rdi, 0B3B74BDEE4453415h
 * 00000001402707EC: mov     rbx, 0A3A03F5891C8B4E8h
 * 00000001402707F6: lea     rdx, [rcx-240h]
 * 00000001402707FD: cmp     [rdx+1BEh], al
 * 0000000140270803: jnz     short loc_14027083E
 * 0000000140270805: cmp     [rsi+6C0h], eax
 * 000000014027080B: jnz     short loc_14027083E
 * 000000014027080D: lea     rax, [rsi+rbx]
 * 0000000140270811: mov     [rsi+6C8h], rax
 * 0000000140270818: lea     rax, [r12+rdi]
 * 000000014027081C: mov     [rsi+6D0h], rax
 * 0000000140270823: movsxd  rax, dword ptr [r12]
 * 0000000140270827: mov     [rsi+6D8h], rax
 * 000000014027082E: xor     eax, eax
 * 0000000140270830: mov     [rsi+6E0h], rdx
 * 0000000140270837: mov     [rsi+6C0h], r15d
 * 000000014027083E: mov     [rdx+1BEh], al
 * 0000000140270844: mov     rcx, [rcx]
 * 0000000140270847: cmp     rcx, r8
 * 000000014027084A: jnz     short loc_1402707F6
 * 000000014027084C: mov     rbx, [rbp+1A50h+var_1A40]
 * 0000000140270850: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140270857: mov     rax, [rsi+188h]
 * 000000014027085E: lea     rcx, [rbp+1A50h+var_10C0]
 * 0000000140270865: call    KeGuardDispatchICall
 * 000000014027086A: movzx   eax, bl
 * 000000014027086D: mov     cr8, rax
 * 0000000140270871: mov     rcx, [rsi+4C8h]
 * 0000000140270878: xor     edx, edx
 * 000000014027087A: mov     rax, [rsi+130h]
 * 0000000140270881: call    KeGuardDispatchICall
 * 0000000140270886: mov     rax, [rsi+180h]
 * 000000014027088D: call    KeGuardDispatchICall
 * 0000000140270892: jmp     loc_14027073B
 * 0000000140270897: mov     r14, [r12+8]
 * 000000014027089C: mov     r8d, [r12+10h]
 * 00000001402708A1: mov     r9, r14
 * 00000001402708A4: add     [rsi+628h], r8d
 * 00000001402708AB: mov     rax, r14
 * 00000001402708AE: mov     r10d, [rsi+614h]
 * 00000001402708B5: mov     r15, [rsi+618h]
 * 00000001402708BC: lea     rcx, [r14+r8]
 * 00000001402708C0: cmp     r14, rcx
 * 00000001402708C3: jnb     short loc_1402708D1
 * 00000001402708C5: prefetchnta byte ptr [rax]
 * 00000001402708C8: add     rax, 40h ; '@'
 * 00000001402708CC: cmp     rax, rcx
 * 00000001402708CF: jb      short loc_1402708C5
 * 00000001402708D1: mov     r11d, r8d
 * 00000001402708D4: mov     rbx, r15
 * 00000001402708D7: shr     r11d, 7
 * 00000001402708DB: mov     r13d, 1
 * 00000001402708E1: test    r11d, r11d
 * 00000001402708E4: jz      short loc_14027094C
 * 00000001402708E6: mov     rdi, 7010008004002001h
 * 00000001402708F0: mov     eax, 8
 * 00000001402708F5: xor     rbx, [r9]
 * 00000001402708F8: mov     ecx, r10d
 * 00000001402708FB: rol     rbx, cl
 * 00000001402708FE: xor     rbx, [r9+8]
 * 0000000140270902: add     r9, 10h
 * 0000000140270906: rol     rbx, cl
 * 0000000140270909: sub     rax, r13
 * 000000014027090C: jnz     short loc_1402708F5
 * 000000014027090E: mov     rcx, r9
 * 0000000140270911: sub     rcx, r14
 * 0000000140270914: xor     rcx, r15
 * 0000000140270917: mov     rax, rcx
 * 000000014027091A: rol     rax, 11h
 * 000000014027091E: xor     rcx, rax
 * 0000000140270921: mov     rax, rdi
 * 0000000140270924: mul     rcx
 * 0000000140270927: xor     eax, edx
 * 0000000140270929: mov     [rbp+1A50h+var_1260], rdx
 * 0000000140270930: xor     r10d, eax
 * 0000000140270933: and     r10d, 3Fh
 * 0000000140270937: cmovz   r10d, r13d
 * 000000014027093B: add     r11d, 0FFFFFFFFh
 * 000000014027093F: jnz     short loc_1402708F0
 * 0000000140270941: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140270945: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027094C: and     r8d, 7Fh
 * 0000000140270950: cmp     r8d, 8
 * 0000000140270954: jb      short loc_140270973
 * 0000000140270956: mov     eax, r8d
 * 0000000140270959: shr     rax, 3
 * 000000014027095D: xor     rbx, [r9]
 * 0000000140270960: mov     ecx, r10d
 * 0000000140270963: rol     rbx, cl
 * 0000000140270966: add     r9, 8
 * 000000014027096A: add     r8d, 0FFFFFFF8h
 * 000000014027096E: sub     rax, r13
 * 0000000140270971: jnz     short loc_14027095D
 * 0000000140270973: test    r8d, r8d
 * 0000000140270976: jz      short loc_14027098E
 * 0000000140270978: movzx   eax, byte ptr [r9]
 * 000000014027097C: mov     ecx, r10d
 * 000000014027097F: xor     rbx, rax
 * 0000000140270982: add     r9, r13
 * 0000000140270985: rol     rbx, cl
 * 0000000140270988: add     r8d, 0FFFFFFFFh
 * 000000014027098C: jnz     short loc_140270978
 * 000000014027098E: mov     rax, rbx
 * 0000000140270991: jmp     short loc_140270995
 * 0000000140270993: xor     ebx, eax
 * 0000000140270995: shr     rax, 1Fh
 * 0000000140270999: test    rax, rax
 * 000000014027099C: jnz     short loc_140270993
 * 000000014027099E: mov     r8, [rbp+1A50h+var_1A48]
 * 00000001402709A2: btr     ebx, 1Fh
 * 00000001402709A6: mov     r12d, eax
 * 00000001402709A9: cmp     ebx, [r8+14h]
 * 00000001402709AD: jz      loc_14027031B
 * 00000001402709B3: cmp     [r8], eax
 * 00000001402709B6: jnz     short loc_1402709C0
 * 00000001402709B8: cmp     [r8+18h], eax
 * 00000001402709BC: cmovnz  r12d, r13d
 * 00000001402709C0: mov     ecx, [r8+10h]
 * 00000001402709C4: mov     rdx, [r8+8]
 * 00000001402709C8: test    rcx, rcx
 * 00000001402709CB: jz      loc_140270A8D
 * 00000001402709D1: mov     eax, [rsi+74Ch]
 * 00000001402709D7: test    al, 40h
 * 00000001402709D9: jz      loc_140270A8D
 * 00000001402709DF: mov     r15, cr8
 * 00000001402709E3: mov     r8d, 2
 * 00000001402709E9: mov     cr8, r8
 * 00000001402709ED: lea     rax, [rcx-1]
 * 00000001402709F1: mov     r14, rdx
 * 00000001402709F4: add     rax, rdx
 * 00000001402709F7: lea     ecx, [r8-2]
 * 00000001402709FB: or      rax, 0FFFh
 * 0000000140270A01: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140270A08: test    r8b, r12b
 * 0000000140270A0B: mov     [rbp+1A50h+var_1A40], rax
 * 0000000140270A0F: cmovnz  ecx, r13d
 * 0000000140270A13: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140270A16: lea     r13, [r14-1]
 * 0000000140270A1A: mov     rax, [rsi+438h]
 * 0000000140270A21: mov     edx, ecx
 * 0000000140270A23: mov     rcx, r14
 * 0000000140270A26: call    KeGuardDispatchICall
 * 0000000140270A2B: cmp     eax, 0C000022Dh
 * 0000000140270A30: jnz     short loc_140270A5E
 * 0000000140270A32: mov     eax, 1
 * 0000000140270A37: test    al, r12b
 * 0000000140270A3A: jnz     short loc_140270A81
 * 0000000140270A3C: cmp     r15b, al
 * 0000000140270A3F: ja      short loc_140270A62
 * 0000000140270A41: movzx   eax, r15b
 * 0000000140270A45: mov     cr8, rax
 * 0000000140270A49: mov     al, [r14]
 * 0000000140270A4C: mov     rax, cr8
 * 0000000140270A50: mov     eax, 2
 * 0000000140270A55: mov     cr8, rax
 * 0000000140270A59: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140270A5C: jmp     short loc_140270A1A
 * 0000000140270A5E: test    eax, eax
 * 0000000140270A60: js      short loc_140270A81
 * 0000000140270A62: mov     r11d, 1000h
 * 0000000140270A68: add     r14, r11
 * 0000000140270A6B: add     r13, r11
 * 0000000140270A6E: cmp     r13, [rbp+1A50h+var_1A40]
 * 0000000140270A72: jnz     short loc_140270A59
 * 0000000140270A74: movzx   eax, r15b
 * 0000000140270A78: mov     cr8, rax
 * 0000000140270A7C: jmp     loc_14027031B
 * 0000000140270A81: movzx   eax, r15b
 * 0000000140270A85: mov     r8, [rbp+1A50h+var_1A48]
 * 0000000140270A89: mov     cr8, rax
 * 0000000140270A8D: mov     eax, [r8+14h]
 * 0000000140270A91: xor     ecx, ecx
 * 0000000140270A93: cmp     [rsi+6C0h], ecx
 * 0000000140270A99: jnz     short loc_140270AAB
 * 0000000140270A9B: mov     ecx, ebx
 * 0000000140270A9D: xor     rcx, rax
 * 0000000140270AA0: mov     rax, [rsi+510h]
 * 0000000140270AA7: mov     [rax+18h], rcx
 * 0000000140270AAB: mov     rcx, [r8+8]
 * 0000000140270AAF: xor     eax, eax
 * 0000000140270AB1: cmp     [rsi+6C0h], eax
 * 0000000140270AB7: jnz     loc_14027031B
 * 0000000140270ABD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140270AC7: add     rax, rsi
 * 0000000140270ACA: mov     [rsi+6C8h], rax
 * 0000000140270AD1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140270ADB: add     rax, r8
 * 0000000140270ADE: mov     [rsi+6D0h], rax
 * 0000000140270AE5: movsxd  rax, dword ptr [r8]
 * 0000000140270AE8: mov     [rsi+6D8h], rax
 * 0000000140270AEF: mov     [rsi+6E0h], rcx
 * 0000000140270AF6: mov     ebx, 1
 * 0000000140270AFB: mov     [rsi+6C0h], ebx
 * 0000000140270B01: jmp     loc_140279285
 * 0000000140270B06: xor     eax, eax
 * 0000000140270B08: cmp     [r12+18h], eax
 * 0000000140270B0D: jz      short loc_140270B49
 * 0000000140270B0F: cmp     [rsi+740h], rax
 * 0000000140270B16: jz      loc_140270C92
 * 0000000140270B1C: mov     ecx, [rsi+74Ch]
 * 0000000140270B22: test    r15b, cl
 * 0000000140270B25: jnz     loc_140270C92
 * 0000000140270B2B: cmp     [rsi+624h], eax
 * 0000000140270B31: jnz     loc_140270C85
 * 0000000140270B37: mov     eax, ecx
 * 0000000140270B39: shl     eax, 3
 * 0000000140270B3C: xor     eax, ecx
 * 0000000140270B3E: and     eax, 20h
 * 0000000140270B41: xor     eax, ecx
 * 0000000140270B43: mov     [rsi+74Ch], eax
 * 0000000140270B49: mov     r14d, [rsi+624h]
 * 0000000140270B50: lea     rax, [r12+30h]
 * 0000000140270B55: mov     r12d, [r12+1Ch]
 * 0000000140270B5A: mov     ecx, 80000000h
 * 0000000140270B5F: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140270B63: shl     r14, 4
 * 0000000140270B67: add     r14, rax
 * 0000000140270B6A: shl     r12, 4
 * 0000000140270B6E: add     r12, rax
 * 0000000140270B71: mov     [rbp+1A50h+var_1A38], r12
 * 0000000140270B75: test    [r14], ecx
 * 0000000140270B78: jnz     loc_140270D69
 * 0000000140270B7E: mov     r13, [r14+8]
 * 0000000140270B82: mov     r8d, [r14+4]
 * 0000000140270B86: mov     r9, r13
 * 0000000140270B89: add     [rsi+628h], r8d
 * 0000000140270B90: mov     rax, r13
 * 0000000140270B93: mov     r11d, [rsi+614h]
 * 0000000140270B9A: mov     edx, r8d
 * 0000000140270B9D: mov     r15, [rsi+618h]
 * 0000000140270BA4: lea     rcx, [r8+r13]
 * 0000000140270BA8: mov     [rbp+1A50h+var_1A00], r13
 * 0000000140270BAC: cmp     r13, rcx
 * 0000000140270BAF: jnb     short loc_140270BBD
 * 0000000140270BB1: prefetchnta byte ptr [rax]
 * 0000000140270BB4: add     rax, 40h ; '@'
 * 0000000140270BB8: cmp     rax, rcx
 * 0000000140270BBB: jb      short loc_140270BB1
 * 0000000140270BBD: mov     r10d, r8d
 * 0000000140270BC0: mov     rbx, r15
 * 0000000140270BC3: shr     r10d, 7
 * 0000000140270BC7: test    r10d, r10d
 * 0000000140270BCA: jz      short loc_140270C38
 * 0000000140270BCC: mov     rsi, 7010008004002001h
 * 0000000140270BD6: mov     r12d, 1
 * 0000000140270BDC: mov     eax, 8
 * 0000000140270BE1: xor     rbx, [r9]
 * 0000000140270BE4: mov     ecx, r11d
 * 0000000140270BE7: rol     rbx, cl
 * 0000000140270BEA: xor     rbx, [r9+8]
 * 0000000140270BEE: add     r9, 10h
 * 0000000140270BF2: rol     rbx, cl
 * 0000000140270BF5: sub     rax, r12
 * 0000000140270BF8: jnz     short loc_140270BE1
 * 0000000140270BFA: mov     rcx, r9
 * 0000000140270BFD: sub     rcx, r13
 * 0000000140270C00: xor     rcx, r15
 * 0000000140270C03: mov     rax, rcx
 * 0000000140270C06: rol     rax, 11h
 * 0000000140270C0A: xor     rcx, rax
 * 0000000140270C0D: mov     rax, rsi
 * 0000000140270C10: mul     rcx
 * 0000000140270C13: xor     eax, edx
 * 0000000140270C15: mov     [rbp+1A50h+var_1258], rdx
 * 0000000140270C1C: xor     r11d, eax
 * 0000000140270C1F: and     r11d, 3Fh
 * 0000000140270C23: cmovz   r11d, r12d
 * 0000000140270C27: add     r10d, 0FFFFFFFFh
 * 0000000140270C2B: jnz     short loc_140270BDC
 * 0000000140270C2D: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140270C31: mov     rdx, r8
 * 0000000140270C34: mov     r12, [rbp+1A50h+var_1A38]
 * 0000000140270C38: and     r8d, 7Fh
 * 0000000140270C3C: mov     r10d, 1
 * 0000000140270C42: cmp     r8d, 8
 * 0000000140270C46: jb      short loc_140270C65
 * 0000000140270C48: mov     eax, r8d
 * 0000000140270C4B: shr     rax, 3
 * 0000000140270C4F: xor     rbx, [r9]
 * 0000000140270C52: mov     ecx, r11d
 * 0000000140270C55: rol     rbx, cl
 * 0000000140270C58: add     r9, 8
 * 0000000140270C5C: add     r8d, 0FFFFFFF8h
 * 0000000140270C60: sub     rax, r10
 * 0000000140270C63: jnz     short loc_140270C4F
 * 0000000140270C65: test    r8d, r8d
 * 0000000140270C68: jz      short loc_140270C80
 * 0000000140270C6A: movzx   eax, byte ptr [r9]
 * 0000000140270C6E: mov     ecx, r11d
 * 0000000140270C71: xor     rbx, rax
 * 0000000140270C74: add     r9, r10
 * 0000000140270C77: rol     rbx, cl
 * 0000000140270C7A: add     r8d, 0FFFFFFFFh
 * 0000000140270C7E: jnz     short loc_140270C6A
 * 0000000140270C80: mov     rax, rbx
 * 0000000140270C83: jmp     short loc_140270C9F
 * 0000000140270C85: shr     ecx, 5
 * 0000000140270C88: not     ecx
 * 0000000140270C8A: and     ecx, ebx
 * 0000000140270C8C: jnz     loc_140270B49
 * 0000000140270C92: mov     [rsi+624h], eax
 * 0000000140270C98: jmp     loc_140279287
 * 0000000140270C9D: xor     ebx, eax
 * 0000000140270C9F: shr     rax, 1Fh
 * 0000000140270CA3: test    rax, rax
 * 0000000140270CA6: jnz     short loc_140270C9D
 * 0000000140270CA8: mov     eax, [r14]
 * 0000000140270CAB: btr     ebx, 1Fh
 * 0000000140270CAF: btr     eax, 1Fh
 * 0000000140270CB3: cmp     ebx, eax
 * 0000000140270CB5: jz      loc_140270D5B
 * 0000000140270CBB: test    rdx, rdx
 * 0000000140270CBE: jz      loc_140270DB5
 * 0000000140270CC4: mov     eax, [rsi+74Ch]
 * 0000000140270CCA: test    al, 40h
 * 0000000140270CCC: jz      loc_140270DB5
 * 0000000140270CD2: mov     r12, cr8
 * 0000000140270CD6: mov     eax, 2
 * 0000000140270CDB: mov     cr8, rax
 * 0000000140270CDF: mov     r15, r13
 * 0000000140270CE2: lea     rax, [r13-1]
 * 0000000140270CE6: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140270CED: add     rax, rdx
 * 0000000140270CF0: or      rax, 0FFFh
 * 0000000140270CF6: mov     [rbp+1A50h+var_1A40], rax
 * 0000000140270CFA: lea     r13, [r15-1]
 * 0000000140270CFE: mov     rax, [rsi+438h]
 * 0000000140270D05: xor     edx, edx
 * 0000000140270D07: mov     rcx, r15
 * 0000000140270D0A: call    KeGuardDispatchICall
 * 0000000140270D0F: cmp     eax, 0C000022Dh
 * 0000000140270D14: jnz     short loc_140270D3A
 * 0000000140270D16: mov     eax, 1
 * 0000000140270D1B: cmp     r12b, al
 * 0000000140270D1E: ja      short loc_140270D3E
 * 0000000140270D20: movzx   eax, r12b
 * 0000000140270D24: mov     cr8, rax
 * 0000000140270D28: mov     al, [r15]
 * 0000000140270D2B: mov     rax, cr8
 * 0000000140270D2F: mov     eax, 2
 * 0000000140270D34: mov     cr8, rax
 * 0000000140270D38: jmp     short loc_140270CFE
 * 0000000140270D3A: test    eax, eax
 * 0000000140270D3C: js      short loc_140270DA5
 * 0000000140270D3E: mov     eax, 1000h
 * 0000000140270D43: add     r15, rax
 * 0000000140270D46: add     r13, rax
 * 0000000140270D49: cmp     r13, [rbp+1A50h+var_1A40]
 * 0000000140270D4D: jnz     short loc_140270CFE
 * 0000000140270D4F: movzx   eax, r12b
 * 0000000140270D53: mov     cr8, rax
 * 0000000140270D57: mov     r12, [rbp+1A50h+var_1A38]
 * 0000000140270D5B: mov     ecx, 80000000h
 * 0000000140270D60: mov     ebx, 1
 * 0000000140270D65: mov     r13, [rbp+1A50h+var_1A10]
 * 0000000140270D69: add     r14, 10h
 * 0000000140270D6D: cmp     r14, r12
 * 0000000140270D70: jnb     short loc_140270D85
 * 0000000140270D72: mov     eax, [r13+0]
 * 0000000140270D76: cmp     [rsi+628h], eax
 * 0000000140270D7C: jl      loc_140270B75
 * 0000000140270D82: cmp     r14, r12
 * 0000000140270D85: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140270D8C: mov     r12d, 8000h
 * 0000000140270D92: jnz     loc_140270E2F
 * 0000000140270D98: xor     eax, eax
 * 0000000140270D9A: mov     [rsi+624h], eax
 * 0000000140270DA0: jmp     loc_14027928D
 * 0000000140270DA5: movzx   eax, r12b
 * 0000000140270DA9: mov     cr8, rax
 * 0000000140270DAD: mov     r13, [rbp+1A50h+var_1A00]
 * 0000000140270DB1: mov     r12, [rbp+1A50h+var_1A38]
 * 0000000140270DB5: mov     eax, [r14]
 * 0000000140270DB8: btr     eax, 1Fh
 * 0000000140270DBC: cmp     dword ptr [rsi+6C0h], 0
 * 0000000140270DC3: jnz     short loc_140270DD5
 * 0000000140270DC5: mov     ecx, ebx
 * 0000000140270DC7: xor     rcx, rax
 * 0000000140270DCA: mov     rax, [rsi+510h]
 * 0000000140270DD1: mov     [rax+18h], rcx
 * 0000000140270DD5: xor     eax, eax
 * 0000000140270DD7: mov     ecx, 80000000h
 * 0000000140270DDC: lea     ebx, [rax+1]
 * 0000000140270DDF: cmp     [rsi+6C0h], eax
 * 0000000140270DE5: jnz     loc_140270D65
 * 0000000140270DEB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140270DF5: add     rax, rsi
 * 0000000140270DF8: mov     [rsi+6C8h], rax
 * 0000000140270DFF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140270E09: add     rax, rdi
 * 0000000140270E0C: mov     [rsi+6D0h], rax
 * 0000000140270E13: movsxd  rax, dword ptr [rdi]
 * 0000000140270E16: mov     [rsi+6D8h], rax
 * 0000000140270E1D: mov     [rsi+6E0h], r13
 * 0000000140270E24: mov     [rsi+6C0h], ebx
 * 0000000140270E2A: jmp     loc_140270D65
 * 0000000140270E2F: mov     rax, [rbp+1A50h+var_1A48]
 * 0000000140270E33: add     rax, 30h ; '0'
 * 0000000140270E37: sub     r14, rax
 * 0000000140270E3A: sar     r14, 4
 * 0000000140270E3E: mov     [rsi+624h], r14d
 * 0000000140270E45: jmp     loc_140278072
 * 0000000140270E4A: cmp     ecx, 0Bh
 * 0000000140270E4D: jz      loc_140274F94
 * 0000000140270E53: mov     edx, 0Ch
 * 0000000140270E58: cmp     ecx, edx
 * 0000000140270E5A: jz      loc_140274267
 * 0000000140270E60: jle     loc_140277BAF
 * 0000000140270E66: cmp     ecx, 0Eh
 * 0000000140270E69: jle     loc_140273DE6
 * 0000000140270E6F: lea     eax, [rdx+3]
 * 0000000140270E72: cmp     ecx, eax
 * 0000000140270E74: jz      loc_140273CA5
 * 0000000140270E7A: cmp     ecx, 15h
 * 0000000140270E7D: jz      loc_140273BAD
 * 0000000140270E83: cmp     ecx, 18h
 * 0000000140270E86: jnz     loc_140277BAF
 * 0000000140270E8C: mov     r15d, 40000000h
 * 0000000140270E92: test    [rsi+748h], r15d
 * 0000000140270E99: jz      short loc_140270EEB
 * 0000000140270E9B: rdtsc
 * 0000000140270E9D: shl     rdx, 20h
 * 0000000140270EA1: or      rax, rdx
 * 0000000140270EA4: mov     rcx, rax
 * 0000000140270EA7: ror     rax, 3
 * 0000000140270EAB: xor     rcx, rax
 * 0000000140270EAE: mov     rax, 7010008004002001h
 * 0000000140270EB8: mul     rcx
 * 0000000140270EBB: mov     rcx, rdx
 * 0000000140270EBE: mov     [rbp+1A50h+var_1250], rdx
 * 0000000140270EC5: xor     rcx, rax
 * 0000000140270EC8: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140270ED2: mul     rcx
 * 0000000140270ED5: shr     rdx, 2
 * 0000000140270ED9: lea     rax, [rdx+rdx*4]
 * 0000000140270EDD: sub     rcx, rax
 * 0000000140270EE0: mov     [rsi+624h], ecx
 * 0000000140270EE6: mov     edx, 0Ch
 * 0000000140270EEB: mov     ecx, [rsi+624h]
 * 0000000140270EF1: xor     eax, eax
 * 0000000140270EF3: test    ecx, ecx
 * 0000000140270EF5: jz      loc_140273A30
 * 0000000140270EFB: sub     ecx, 1
 * 0000000140270EFE: jz      loc_1402738DC
 * 0000000140270F04: sub     ecx, 1
 * 0000000140270F07: jz      loc_14027373D
 * 0000000140270F0D: sub     ecx, 1
 * 0000000140270F10: jz      loc_14027122C
 * 0000000140270F16: sub     ecx, 1
 * 0000000140270F19: jz      loc_14027108D
 * 0000000140270F1F: cmp     ecx, 1
 * 0000000140270F22: jnz     loc_140273B9E
 * 0000000140270F28: mov     rbx, r12
 * 0000000140270F2B: mov     [rbp+1A50h+var_1997], 0FFh
 * 0000000140270F32: mov     r12d, ecx
 * 0000000140270F35: mov     r13d, eax
 * 0000000140270F38: mov     r14d, eax
 * 0000000140270F3B: mov     r15d, eax
 * 0000000140270F3E: mov     [rbp+1A50h+var_1760], rax
 * 0000000140270F45: jmp     loc_140271039
 * 0000000140270F4A: mov     rax, [rsi+208h]
 * 0000000140270F51: lea     rdx, [rbp+1A50h+var_1248]
 * 0000000140270F58: mov     rcx, [rbp+1A50h+var_1878]
 * 0000000140270F5F: add     r13d, r12d
 * 0000000140270F62: call    KeGuardDispatchICall
 * 0000000140270F67: test    rax, rax
 * 0000000140270F6A: jnz     loc_140271039
 * 0000000140270F70: test    dword ptr [rsi+748h], 40000000h
 * 0000000140270F7A: jz      short loc_140270FBA
 * 0000000140270F7C: mov     rcx, [rsi+7F0h]
 * 0000000140270F83: lea     edx, [rax+30h]
 * 0000000140270F86: lea     r8d, [rax+6]
 * 0000000140270F8A: mov     rax, [rbx]
 * 0000000140270F8D: add     edx, 0FFFFFFF8h
 * 0000000140270F90: mov     [rcx], rax
 * 0000000140270F93: add     rbx, 8
 * 0000000140270F97: add     rcx, 8
 * 0000000140270F9B: sub     r8, r12
 * 0000000140270F9E: jnz     short loc_140270F8A
 * 0000000140270FA0: test    edx, edx
 * 0000000140270FA2: jz      short loc_140270FB3
 * 0000000140270FA4: mov     al, [rbx]
 * 0000000140270FA6: add     rbx, r12
 * 0000000140270FA9: mov     [rcx], al
 * 0000000140270FAB: add     rcx, r12
 * 0000000140270FAE: add     edx, 0FFFFFFFFh
 * 0000000140270FB1: jnz     short loc_140270FA4
 * 0000000140270FB3: mov     rbx, [rsi+7F0h]
 * 0000000140270FBA: mov     rax, [rbp+1A50h+var_1878]
 * 0000000140270FC1: mov     [rbx+18h], rax
 * 0000000140270FC5: mov     rax, [rsi+510h]
 * 0000000140270FCC: mov     [rax], rbx
 * 0000000140270FCF: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140270FD6: mov     rax, [rbp+1A50h+var_1878]
 * 0000000140270FDD: mov     rcx, [rsi+510h]
 * 0000000140270FE4: mov     [rcx+8], rax
 * 0000000140270FE8: xor     eax, eax
 * 0000000140270FEA: mov     dword ptr [rcx+14h], 1000h
 * 0000000140270FF1: cmp     [rsi+6C0h], eax
 * 0000000140270FF7: jnz     short loc_140271039
 * 0000000140270FF9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140271003: add     rax, rsi
 * 0000000140271006: mov     [rsi+6C8h], rax
 * 000000014027100D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140271017: add     rax, rbx
 * 000000014027101A: mov     [rsi+6D0h], rax
 * 0000000140271021: movsxd  rax, dword ptr [rbx]
 * 0000000140271024: mov     [rsi+6D8h], rax
 * 000000014027102B: mov     [rsi+6E0h], r15
 * 0000000140271032: mov     [rsi+6C0h], r12d
 * 0000000140271039: mov     rax, [rsi+420h]
 * 0000000140271040: lea     r9, [rbp+1A50h+var_1878]
 * 0000000140271047: lea     r8, [rbp+1A50h+var_1997]
 * 000000014027104E: mov     ecx, r14d
 * 0000000140271051: lea     rdx, [rbp+1A50h+var_1760]
 * 0000000140271058: call    KeGuardDispatchICall
 * 000000014027105D: test    eax, eax
 * 000000014027105F: jnz     loc_140270F4A
 * 0000000140271065: mov     eax, 2
 * 000000014027106A: add     r14d, r12d
 * 000000014027106D: add     r15, r12
 * 0000000140271070: cmp     r14d, eax
 * 0000000140271073: mov     eax, 0
 * 0000000140271078: jb      loc_140270F3E
 * 000000014027107E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140271085: mov     rbx, r12
 * 0000000140271088: jmp     loc_140273B6A
 * 000000014027108D: mov     r13d, eax
 * 0000000140271090: mov     [rbp+1A50h+var_1994], eax
 * 0000000140271096: mov     rax, [rsi+310h]
 * 000000014027109D: xor     ecx, ecx
 * 000000014027109F: call    KeGuardDispatchICall
 * 00000001402710A4: mov     r15, rax
 * 00000001402710A7: xor     eax, eax
 * 00000001402710A9: test    r15, r15
 * 00000001402710AC: jz      loc_140273B6A
 * 00000001402710B2: mov     rdi, [rbp+1A50h+var_1A48]
 * 00000001402710B6: mov     [rbp+1A50h+var_1758], rax
 * 00000001402710BD: lea     rdx, [rbp+1A50h+var_1758]
 * 00000001402710C4: mov     rax, [rsi+308h]
 * 00000001402710CB: mov     rcx, r15
 * 00000001402710CE: mov     rbx, rdi
 * 00000001402710D1: mov     r12d, 1
 * 00000001402710D7: call    KeGuardDispatchICall
 * 00000001402710DC: mov     r14, rax
 * 00000001402710DF: test    rax, rax
 * 00000001402710E2: jz      loc_140271200
 * 00000001402710E8: lea     edi, [r12+5]
 * 00000001402710ED: xor     r13d, r13d
 * 00000001402710F0: mov     rax, [rsi+208h]
 * 00000001402710F7: lea     rdx, [rbp+1A50h+var_1240]
 * 00000001402710FE: mov     rcx, r14
 * 0000000140271101: inc     r12d
 * 0000000140271104: call    KeGuardDispatchICall
 * 0000000140271109: test    rax, rax
 * 000000014027110C: jnz     loc_1402711D3
 * 0000000140271112: test    dword ptr [rsi+748h], 40000000h
 * 000000014027111C: lea     r9d, [rax+1]
 * 0000000140271120: jz      short loc_14027115F
 * 0000000140271122: mov     rcx, [rsi+7F0h]
 * 0000000140271129: lea     edx, [rax+30h]
 * 000000014027112C: mov     r8, rdi
 * 000000014027112F: mov     rax, [rbx]
 * 0000000140271132: add     edx, 0FFFFFFF8h
 * 0000000140271135: mov     [rcx], rax
 * 0000000140271138: add     rbx, 8
 * 000000014027113C: add     rcx, 8
 * 0000000140271140: sub     r8, r9
 * 0000000140271143: jnz     short loc_14027112F
 * 0000000140271145: test    edx, edx
 * 0000000140271147: jz      short loc_140271158
 * 0000000140271149: mov     al, [rbx]
 * 000000014027114B: add     rbx, r9
 * 000000014027114E: mov     [rcx], al
 * 0000000140271150: add     rcx, r9
 * 0000000140271153: add     edx, 0FFFFFFFFh
 * 0000000140271156: jnz     short loc_140271149
 * 0000000140271158: mov     rbx, [rsi+7F0h]
 * 000000014027115F: mov     [rbx+18h], r14
 * 0000000140271163: mov     [rbx+20h], r15
 * 0000000140271167: mov     rax, [rsi+510h]
 * 000000014027116E: mov     [rax], rbx
 * 0000000140271171: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140271178: mov     rax, [rsi+510h]
 * 000000014027117F: mov     [rax+8], r14
 * 0000000140271183: mov     dword ptr [rax+14h], 1000h
 * 000000014027118A: cmp     [rsi+6C0h], r13d
 * 0000000140271191: jnz     short loc_1402711D3
 * 0000000140271193: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027119D: add     rax, rsi
 * 00000001402711A0: mov     [rsi+6C8h], rax
 * 00000001402711A7: mov     rax, 0B3B74BDEE4453415h
 * 00000001402711B1: add     rax, rbx
 * 00000001402711B4: mov     [rsi+6D0h], rax
 * 00000001402711BB: movsxd  rax, dword ptr [rbx]
 * 00000001402711BE: mov     [rsi+6D8h], rax
 * 00000001402711C5: mov     [rsi+6E0h], rdi
 * 00000001402711CC: mov     [rsi+6C0h], r9d
 * 00000001402711D3: mov     rax, [rsi+308h]
 * 00000001402711DA: lea     rdx, [rbp+1A50h+var_1758]
 * 00000001402711E1: mov     rcx, r15
 * 00000001402711E4: call    KeGuardDispatchICall
 * 00000001402711E9: mov     r14, rax
 * 00000001402711EC: test    rax, rax
 * 00000001402711EF: jnz     loc_1402710F0
 * 00000001402711F5: mov     r13d, [rbp+1A50h+var_1994]
 * 00000001402711FC: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140271200: mov     rax, [rsi+310h]
 * 0000000140271207: add     r13d, r12d
 * 000000014027120A: mov     rcx, r15
 * 000000014027120D: mov     [rbp+1A50h+var_1994], r13d
 * 0000000140271214: call    KeGuardDispatchICall
 * 0000000140271219: mov     r15, rax
 * 000000014027121C: xor     eax, eax
 * 000000014027121E: test    r15, r15
 * 0000000140271221: jnz     loc_1402710B6
 * 0000000140271227: jmp     loc_140273B5E
 * 000000014027122C: mov     r13d, eax
 * 000000014027122F: mov     rax, [rsi+478h]
 * 0000000140271236: mov     [rbp+1A50h+var_1A10], rsi
 * 000000014027123A: mov     [rbp+1A50h+var_1960], rsi
 * 0000000140271241: mov     rbx, [rax]
 * 0000000140271244: mov     [rbp+1A50h+var_1988], rbx
 * 000000014027124B: test    [rsi+748h], r15d
 * 0000000140271252: jz      short loc_14027125B
 * 0000000140271254: xor     eax, eax
 * 0000000140271256: jmp     loc_140273B65
 * 000000014027125B: mov     rcx, [rbp+1A50h+var_1A48]
 * 000000014027125F: mov     rax, [rcx+28h]
 * 0000000140271263: test    rax, rax
 * 0000000140271266: jz      loc_1402712F6
 * 000000014027126C: mov     edx, 1
 * 0000000140271271: mov     r13d, edx
 * 0000000140271274: cmp     rbx, rax
 * 0000000140271277: jz      loc_140273B65
 * 000000014027127D: mov     [rcx+18h], rbx
 * 0000000140271281: mov     rax, [rsi+510h]
 * 0000000140271288: mov     [rax], rcx
 * 000000014027128B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140271292: mov     rax, [rsi+510h]
 * 0000000140271299: mov     [rax+8], rbx
 * 000000014027129D: mov     dword ptr [rax+14h], 1000h
 * 00000001402712A4: xor     eax, eax
 * 00000001402712A6: cmp     [rsi+6C0h], eax
 * 00000001402712AC: jnz     loc_140273B65
 * 00000001402712B2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402712BC: add     rax, rsi
 * 00000001402712BF: mov     [rsi+6C8h], rax
 * 00000001402712C6: mov     rax, 0B3B74BDEE4453415h
 * 00000001402712D0: add     rax, rcx
 * 00000001402712D3: mov     [rsi+6D0h], rax
 * 00000001402712DA: movsxd  rax, dword ptr [rcx]
 * 00000001402712DD: mov     [rsi+6D8h], rax
 * 00000001402712E4: mov     [rsi+6E0h], r10
 * 00000001402712EB: mov     [rsi+6C0h], edx
 * 00000001402712F1: jmp     loc_140273B65
 * 00000001402712F6: test    rbx, rbx
 * 00000001402712F9: jz      loc_140273B65
 * 00000001402712FF: mov     rax, [rsi+200h]
 * 0000000140271306: lea     r8, [rbp+1A50h+var_19A0]
 * 000000014027130D: mov     r13d, 1
 * 0000000140271313: lea     rdx, [rbp+1A50h+BugCheckParameter2]
 * 000000014027131A: mov     rcx, rbx
 * 000000014027131D: mov     [rbp+1A50h+var_1994], r13d
 * 0000000140271324: call    KeGuardDispatchICall
 * 0000000140271329: mov     r12, rax
 * 000000014027132C: mov     [rbp+1A50h+var_19E0], rax
 * 0000000140271330: xor     eax, eax
 * 0000000140271332: test    r12, r12
 * 0000000140271335: jnz     short loc_140271345
 * 0000000140271337: mov     r13, [rbp+1A50h+var_1A10]
 * 000000014027133B: mov     ecx, 0C000007Bh
 * 0000000140271340: jmp     loc_140271FA6
 * 0000000140271345: mov     r15d, [rbp+1A50h+var_19A0]
 * 000000014027134C: mov     ecx, 4
 * 0000000140271351: mov     r14, [rbp+1A50h+BugCheckParameter2]
 * 0000000140271358: xor     edx, edx
 * 000000014027135A: mov     [rbp+1A50h+var_1888], rax
 * 0000000140271361: lea     rax, [rbp+1A50h+var_1880]
 * 0000000140271368: mov     [rbp+1A50h+var_1A40], r14
 * 000000014027136C: mov     [rbp+1A50h+var_1A50], r15d
 * 0000000140271370: mov     [rax], dl
 * 0000000140271372: add     rax, r13
 * 0000000140271375: add     ecx, 0FFFFFFFFh
 * 0000000140271378: jnz     short loc_140271370
 * 000000014027137A: xor     eax, eax
 * 000000014027137C: mov     ebx, eax
 * 000000014027137E: cmp     [rsi+60Ch], eax
 * 0000000140271384: jbe     loc_140271553
 * 000000014027138A: mov     ecx, [rbp+1A50h+var_1880]
 * 0000000140271390: mov     edx, dword ptr [rbp+1A50h+var_1888+4]
 * 0000000140271396: mov     r9d, dword ptr [rbp+1A50h+var_1888]
 * 000000014027139D: mov     rax, [rsi+7E8h]
 * 00000001402713A4: mov     r11, rsi
 * 00000001402713A7: test    rax, rax
 * 00000001402713AA: cmovnz  r11, rax
 * 00000001402713AE: xor     eax, eax
 * 00000001402713B0: mov     r10d, eax
 * 00000001402713B3: mov     r8d, [r11+608h]
 * 00000001402713BA: add     r8, r11
 * 00000001402713BD: test    r9d, r9d
 * 00000001402713C0: jz      short loc_1402713CF
 * 00000001402713C2: cmp     edx, ebx
 * 00000001402713C4: ja      short loc_1402713CF
 * 00000001402713C6: mov     r8d, ecx
 * 00000001402713C9: mov     r10d, edx
 * 00000001402713CC: add     r8, r11
 * 00000001402713CF: cmp     r10d, ebx
 * 00000001402713D2: jz      loc_1402714F6
 * 00000001402713D8: mov     esi, 3
 * 00000001402713DD: mov     eax, ebx
 * 00000001402713DF: sub     eax, r10d
 * 00000001402713E2: mov     r15, 0AAAAAAAAAAAAAAABh
 * 00000001402713EC: mov     r9d, eax
 * 00000001402713EF: add     r10d, eax
 * 00000001402713F2: lea     edi, [rsi+9]
 * 00000001402713F5: lea     r12d, [rsi-1]
 * 00000001402713F9: lea     r14d, [rsi+4]
 * 00000001402713FD: mov     eax, [r8]
 * 0000000140271400: cmp     eax, r13d
 * 0000000140271403: jz      loc_1402714BE
 * 0000000140271409: cmp     eax, r14d
 * 000000014027140C: jz      loc_1402714AF
 * 0000000140271412: cmp     eax, 8
 * 0000000140271415: jz      loc_1402714A2
 * 000000014027141B: cmp     eax, 0Ah
 * 000000014027141E: jz      short loc_140271497
 * 0000000140271420: cmp     eax, edi
 * 0000000140271422: jz      loc_1402714BE
 * 0000000140271428: cmp     eax, 1Ch
 * 000000014027142B: jz      short loc_140271490
 * 000000014027142D: cmp     eax, 1Eh
 * 0000000140271430: jz      short loc_140271469
 * 0000000140271432: add     eax, 0FFFFFFDFh
 * 0000000140271435: cmp     eax, r13d
 * 0000000140271438: ja      short loc_140271462
 * 000000014027143A: mov     ecx, [r8+20h]
 * 000000014027143E: mov     edx, [r8+28h]
 * 0000000140271442: and     ecx, 0FFFh
 * 0000000140271448: add     rdx, 0FFFh
 * 000000014027144F: add     rdx, rcx
 * 0000000140271452: shr     rdx, 0Ch
 * 0000000140271456: lea     eax, [rdx+rdx*4]
 * 0000000140271459: lea     eax, ds:30h[rax*4]
 * 0000000140271460: jmp     short loc_1402714D3
 * 0000000140271462: mov     eax, 30h ; '0'
 * 0000000140271467: jmp     short loc_1402714D3
 * 0000000140271469: mov     ecx, [r8+24h]
 * 000000014027146D: mov     rax, r15
 * 0000000140271470: sub     ecx, r13d
 * 0000000140271473: mul     rcx
 * 0000000140271476: movzx   eax, word ptr [r8+28h]
 * 000000014027147B: shr     rdx, 3
 * 000000014027147F: add     edx, r14d
 * 0000000140271482: and     edx, 0FFFFFFF8h
 * 0000000140271485: add     eax, r12d
 * 0000000140271488: lea     eax, [rax+rax*2]
 * 000000014027148B: lea     eax, [rdx+rax*8]
 * 000000014027148E: jmp     short loc_1402714D3
 * 0000000140271490: movzx   eax, word ptr [r8+28h]
 * 0000000140271495: jmp     short loc_1402714A7
 * 0000000140271497: mov     eax, [r8+1Ch]
 * 000000014027149B: add     eax, esi
 * 000000014027149D: shl     eax, 4
 * 00000001402714A0: jmp     short loc_1402714D3
 * 00000001402714A2: movzx   eax, word ptr [r8+20h]
 * 00000001402714A7: add     eax, 37h ; '7'
 * 00000001402714AA: and     eax, 0FFFFFFF8h
 * 00000001402714AD: jmp     short loc_1402714D3
 * 00000001402714AF: mov     eax, [r8+18h]
 * 00000001402714B3: add     eax, r12d
 * 00000001402714B6: lea     eax, [rax+rax*2]
 * 00000001402714B9: shl     eax, 3
 * 00000001402714BC: jmp     short loc_1402714D3
 * 00000001402714BE: mov     ecx, [r8+10h]
 * 00000001402714C2: mov     rax, r15
 * 00000001402714C5: mul     rcx
 * 00000001402714C8: shr     rdx, 3
 * 00000001402714CC: lea     eax, ds:30h[rdx*4]
 * 00000001402714D3: add     r8, rax
 * 00000001402714D6: sub     r9, r13
 * 00000001402714D9: jnz     loc_1402713FD
 * 00000001402714DF: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402714E3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402714EA: mov     r14, [rbp+1A50h+var_1A40]
 * 00000001402714EE: mov     r15d, [rbp+1A50h+var_1A50]
 * 00000001402714F2: mov     r12, [rbp+1A50h+var_19E0]
 * 00000001402714F6: mov     ecx, r8d
 * 00000001402714F9: mov     dword ptr [rbp+1A50h+var_1888], r13d
 * 0000000140271500: sub     ecx, r11d
 * 0000000140271503: mov     edx, r10d
 * 0000000140271506: mov     [rbp+1A50h+var_1880], ecx
 * 000000014027150C: mov     r9d, r13d
 * 000000014027150F: mov     dword ptr [rbp+1A50h+var_1888+4], edx
 * 0000000140271515: mov     eax, [r8]
 * 0000000140271518: cmp     eax, r13d
 * 000000014027151B: jz      short loc_140271528
 * 000000014027151D: mov     r10d, 0Ch
 * 0000000140271523: cmp     eax, r10d
 * 0000000140271526: jnz     short loc_140271534
 * 0000000140271528: cmp     [r8+8], r12
 * 000000014027152C: jnz     short loc_140271534
 * 000000014027152E: cmp     [r8+10h], r15d
 * 0000000140271532: jz      short loc_140271556
 * 0000000140271534: add     eax, 0FFFFFFDFh
 * 0000000140271537: cmp     eax, r13d
 * 000000014027153A: ja      short loc_140271542
 * 000000014027153C: cmp     [r8+20h], r14
 * 0000000140271540: jz      short loc_140271556
 * 0000000140271542: add     ebx, r13d
 * 0000000140271545: cmp     ebx, [rsi+60Ch]
 * 000000014027154B: jb      loc_14027139D
 * 0000000140271551: xor     eax, eax
 * 0000000140271553: mov     r8, rax
 * 0000000140271556: mov     [rbp+1A50h+var_1810], r8
 * 000000014027155D: test    r8, r8
 * 0000000140271560: jz      short loc_140271569
 * 0000000140271562: mov     ecx, 0C000010Eh
 * 0000000140271567: jmp     short loc_1402715E2
 * 0000000140271569: mov     rax, [rsi+2A0h]
 * 0000000140271570: mov     rcx, [rbp+1A50h+var_1988]
 * 0000000140271577: call    KeGuardDispatchICall
 * 000000014027157C: test    dword ptr [rsi+748h], 40000000h
 * 0000000140271586: mov     r14d, eax
 * 0000000140271589: mov     ebx, [rbp+1A50h+var_19A0]
 * 000000014027158F: mov     [rbp+1A50h+var_1A18], ebx
 * 0000000140271592: mov     [rbp+1A50h+var_19A8], eax
 * 0000000140271598: jz      short loc_1402715BA
 * 000000014027159A: mov     rdx, [rbp+1A50h+BugCheckParameter2]
 * 00000001402715A1: lea     rcx, [rbp+1A50h+var_1960]
 * 00000001402715A8: mov     r8d, 9
 * 00000001402715AE: call    sub_1407DCDE8
 * 00000001402715B3: mov     ecx, eax
 * 00000001402715B5: jmp     loc_140271F98
 * 00000001402715BA: mov     rcx, [rbp+1A50h+BugCheckParameter2]
 * 00000001402715C1: mov     rax, [rsi+1F8h]
 * 00000001402715C8: mov     [rbp+1A50h+var_19F0], rcx
 * 00000001402715CC: call    KeGuardDispatchICall
 * 00000001402715D1: xor     r9d, r9d
 * 00000001402715D4: mov     [rbp+1A50h+var_1A00], rax
 * 00000001402715D8: test    rax, rax
 * 00000001402715DB: jnz     short loc_1402715EB
 * 00000001402715DD: mov     ecx, 0C000007Bh
 * 00000001402715E2: mov     r13, [rbp+1A50h+var_1A10]
 * 00000001402715E6: jmp     loc_140271F9F
 * 00000001402715EB: mov     r8d, [rsi+6ECh]
 * 00000001402715F2: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402715FC: mul     rbx
 * 00000001402715FF: mov     r12, rbx
 * 0000000140271602: mov     rax, rdx
 * 0000000140271605: shr     rax, 3
 * 0000000140271609: mov     ecx, eax
 * 000000014027160B: mov     [rbp+1A50h+var_1A40], rax
 * 000000014027160F: shl     ecx, 2
 * 0000000140271612: mov     eax, r14d
 * 0000000140271615: mov     r14d, [rsi+5E4h]
 * 000000014027161C: neg     eax
 * 000000014027161E: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140271621: sbb     r15d, r15d
 * 0000000140271624: and     r15d, 0Bh
 * 0000000140271628: lea     eax, [rcx+30h]
 * 000000014027162B: add     r15d, r13d
 * 000000014027162E: add     eax, r14d
 * 0000000140271631: cmp     eax, [rsi+7CCh]
 * 0000000140271637: jbe     loc_140271737
 * 000000014027163D: mov     edx, eax
 * 000000014027163F: mov     rcx, rsi
 * 0000000140271642: call    sub_140282ED4
 * 0000000140271647: mov     [rbp+1A50h+var_1A38], rax
 * 000000014027164B: mov     r13, rax
 * 000000014027164E: test    rax, rax
 * 0000000140271651: jz      loc_14027172D
 * 0000000140271657: mov     edx, [rsi+748h]
 * 000000014027165D: test    dl, 4
 * 0000000140271660: jnz     loc_140271720
 * 0000000140271666: mov     ecx, [rsi+5E4h]
 * 000000014027166C: and     edx, 20000000h
 * 0000000140271672: mov     r9, [rsi+5C8h]
 * 0000000140271679: neg     edx
 * 000000014027167B: mov     rax, rsi
 * 000000014027167E: mov     r11d, 1
 * 0000000140271684: sbb     r8d, r8d
 * 0000000140271687: and     r8d, [rsi+6ECh]
 * 000000014027168E: cmp     ecx, 8
 * 0000000140271691: jb      short loc_1402716AB
 * 0000000140271693: mov     edx, ecx
 * 0000000140271695: shr     rdx, 3
 * 0000000140271699: xor     r10d, r10d
 * 000000014027169C: mov     [rax], r10
 * 000000014027169F: add     ecx, 0FFFFFFF8h
 * 00000001402716A2: add     rax, 8
 * 00000001402716A6: sub     rdx, r11
 * 00000001402716A9: jnz     short loc_14027169C
 * 00000001402716AB: xor     edx, edx
 * 00000001402716AD: test    ecx, ecx
 * 00000001402716AF: jz      short loc_1402716BB
 * 00000001402716B1: mov     [rax], dl
 * 00000001402716B3: add     rax, r11
 * 00000001402716B6: add     ecx, 0FFFFFFFFh
 * 00000001402716B9: jnz     short loc_1402716B1
 * 00000001402716BB: mov     ebx, [r13+6ECh]
 * 00000001402716C2: mov     eax, 3
 * 00000001402716C7: mov     [r13+6ECh], r8d
 * 00000001402716CE: cmp     r8d, eax
 * 00000001402716D1: jz      short loc_140271707
 * 00000001402716D3: test    dword ptr [r13+748h], 10000000h
 * 00000001402716DE: mov     rcx, rdx
 * 00000001402716E1: cmovz   ecx, r8d
 * 00000001402716E5: test    ecx, ecx
 * 00000001402716E7: jz      short loc_1402716FE
 * 00000001402716E9: mov     rax, [r13+228h]
 * 00000001402716F0: lea     rcx, [r9-8]
 * 00000001402716F4: mov     rdx, [rcx]
 * 00000001402716F7: call    KeGuardDispatchICall
 * 00000001402716FC: jmp     short loc_140271716
 * 00000001402716FE: mov     rax, [r13+100h]
 * 0000000140271705: jmp     short loc_14027170E
 * 0000000140271707: mov     rax, [r13+360h]
 * 000000014027170E: mov     rcx, r9
 * 0000000140271711: call    KeGuardDispatchICall
 * 0000000140271716: mov     [r13+6ECh], ebx
 * 000000014027171D: mov     ebx, r12d
 * 0000000140271720: and     dword ptr [r13+748h], 0FFFFFFFBh
 * 0000000140271728: xor     r9d, r9d
 * 000000014027172B: jmp     short loc_140271744
 * 000000014027172D: mov     ecx, 0C000009Ah
 * 0000000140271732: jmp     loc_1402715E2
 * 0000000140271737: mov     r13, rsi
 * 000000014027173A: mov     [rbp+1A50h+var_1A38], rsi
 * 000000014027173E: mov     [rsi+5E4h], eax
 * 0000000140271744: mov     r8d, 1
 * 000000014027174A: add     [r13+60Ch], r8d
 * 0000000140271751: add     r14, r13
 * 0000000140271754: mov     [rbp+1A50h+var_1698], r14
 * 000000014027175B: mov     rax, r14
 * 000000014027175E: lea     ecx, [r8+2Fh]
 * 0000000140271762: lea     edx, [rcx-2Ah]
 * 0000000140271765: mov     [rax], r9
 * 0000000140271768: add     ecx, 0FFFFFFF8h
 * 000000014027176B: add     rax, 8
 * 000000014027176F: sub     rdx, r8
 * 0000000140271772: jnz     short loc_140271765
 * 0000000140271774: test    ecx, ecx
 * 0000000140271776: jz      short loc_140271783
 * 0000000140271778: mov     [rax], r9b
 * 000000014027177B: add     rax, r8
 * 000000014027177E: add     ecx, 0FFFFFFFFh
 * 0000000140271781: jnz     short loc_140271778
 * 0000000140271783: mov     rax, [rbp+1A50h+var_19E0]
 * 0000000140271787: mov     [r14], r15d
 * 000000014027178A: mov     [r14+8], rax
 * 000000014027178E: cmp     r15d, 20h ; ' '
 * 0000000140271792: jnz     short loc_1402717AA
 * 0000000140271794: test    ebx, ebx
 * 0000000140271796: jz      short loc_1402717AA
 * 0000000140271798: lea     r9, [r14+18h]
 * 000000014027179C: mov     r8d, ebx
 * 000000014027179F: mov     rdx, rax
 * 00000001402717A2: mov     rcx, r13
 * 00000001402717A5: call    sub_140175FBC
 * 00000001402717AA: mov     [r14+10h], ebx
 * 00000001402717AE: add     [r13+628h], ebx
 * 00000001402717B5: mov     r11d, [r13+614h]
 * 00000001402717BC: mov     rbx, [r13+618h]
 * 00000001402717C3: mov     r13, [rbp+1A50h+var_19E0]
 * 00000001402717C7: mov     r9, r13
 * 00000001402717CA: mov     rax, r13
 * 00000001402717CD: lea     rcx, [r12+r13]
 * 00000001402717D1: cmp     r13, rcx
 * 00000001402717D4: jnb     short loc_1402717E2
 * 00000001402717D6: prefetchnta byte ptr [rax]
 * 00000001402717D9: add     rax, 40h ; '@'
 * 00000001402717DD: cmp     rax, rcx
 * 00000001402717E0: jb      short loc_1402717D6
 * 00000001402717E2: mov     r10d, r12d
 * 00000001402717E5: mov     r15d, r12d
 * 00000001402717E8: shr     r10d, 7
 * 00000001402717EC: mov     r8, rbx
 * 00000001402717EF: mov     r12d, 1
 * 00000001402717F5: test    r10d, r10d
 * 00000001402717F8: jz      short loc_14027185D
 * 00000001402717FA: mov     r15, 7010008004002001h
 * 0000000140271804: mov     eax, 8
 * 0000000140271809: xor     r8, [r9]
 * 000000014027180C: mov     ecx, r11d
 * 000000014027180F: rol     r8, cl
 * 0000000140271812: xor     r8, [r9+8]
 * 0000000140271816: add     r9, 10h
 * 000000014027181A: rol     r8, cl
 * 000000014027181D: sub     rax, r12
 * 0000000140271820: jnz     short loc_140271809
 * 0000000140271822: mov     rcx, r9
 * 0000000140271825: sub     rcx, r13
 * 0000000140271828: xor     rcx, rbx
 * 000000014027182B: mov     rax, rcx
 * 000000014027182E: rol     rax, 11h
 * 0000000140271832: xor     rcx, rax
 * 0000000140271835: mov     rax, r15
 * 0000000140271838: mul     rcx
 * 000000014027183B: xor     eax, edx
 * 000000014027183D: mov     [rbp+1A50h+var_1238], rdx
 * 0000000140271844: xor     r11d, eax
 * 0000000140271847: and     r11d, 3Fh
 * 000000014027184B: cmovz   r11d, r12d
 * 000000014027184F: add     r10d, 0FFFFFFFFh
 * 0000000140271853: jnz     short loc_140271804
 * 0000000140271855: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140271859: mov     r15d, [rbp+1A50h+var_1A18]
 * 000000014027185D: mov     edx, r15d
 * 0000000140271860: and     edx, 7Fh
 * 0000000140271863: cmp     edx, 8
 * 0000000140271866: jb      short loc_140271883
 * 0000000140271868: mov     eax, edx
 * 000000014027186A: shr     rax, 3
 * 000000014027186E: xor     r8, [r9]
 * 0000000140271871: mov     ecx, r11d
 * 0000000140271874: rol     r8, cl
 * 0000000140271877: add     r9, 8
 * 000000014027187B: add     edx, 0FFFFFFF8h
 * 000000014027187E: sub     rax, r12
 * 0000000140271881: jnz     short loc_14027186E
 * 0000000140271883: test    edx, edx
 * 0000000140271885: jz      short loc_14027189C
 * 0000000140271887: movzx   eax, byte ptr [r9]
 * 000000014027188B: mov     ecx, r11d
 * 000000014027188E: xor     r8, rax
 * 0000000140271891: add     r9, r12
 * 0000000140271894: rol     r8, cl
 * 0000000140271897: add     edx, 0FFFFFFFFh
 * 000000014027189A: jnz     short loc_140271887
 * 000000014027189C: mov     rax, r8
 * 000000014027189F: jmp     short loc_1402718A4
 * 00000001402718A1: xor     r8d, eax
 * 00000001402718A4: shr     rax, 1Fh
 * 00000001402718A8: test    rax, rax
 * 00000001402718AB: jnz     short loc_1402718A1
 * 00000001402718AD: mov     r12, [rbp+1A50h+var_1A38]
 * 00000001402718B1: btr     r8d, 1Fh
 * 00000001402718B6: mov     [r14+14h], r8d
 * 00000001402718BA: mov     r14d, 0C0000225h
 * 00000001402718C0: mov     rax, [rbp+1A50h+var_1698]
 * 00000001402718C7: mov     [rbp+1A50h+var_18E8], rax
 * 00000001402718CE: add     [r12+628h], r15d
 * 00000001402718D6: mov     rbx, [rbp+1A50h+var_18E8]
 * 00000001402718DD: mov     rcx, [r12+4C0h]
 * 00000001402718E5: mov     r15, cr8
 * 00000001402718E9: mov     eax, 0Fh
 * 00000001402718EE: mov     cr8, rax
 * 00000001402718F2: mov     rax, [r12+150h]
 * 00000001402718FA: call    KeGuardDispatchICall
 * 00000001402718FF: mov     rax, [r12+568h]
 * 0000000140271907: mov     rcx, [rax]
 * 000000014027190A: mov     eax, [rcx]
 * 000000014027190C: lea     rdx, [rcx+10h]
 * 0000000140271910: lea     rcx, [rax+rax*2]
 * 0000000140271914: lea     rax, [rdx+rcx*8]
 * 0000000140271918: mov     rcx, [rbp+1A50h+var_19F0]
 * 000000014027191C: cmp     [rdx+8], rcx
 * 0000000140271920: jz      short loc_14027192D
 * 0000000140271922: add     rdx, 18h
 * 0000000140271926: cmp     rdx, rax
 * 0000000140271929: jnb     short loc_140271943
 * 000000014027192B: jmp     short loc_14027191C
 * 000000014027192D: movups  xmm0, xmmword ptr [rdx]
 * 0000000140271930: xor     eax, eax
 * 0000000140271932: mov     r14d, eax
 * 0000000140271935: movups  xmmword ptr [rbx+18h], xmm0
 * 0000000140271939: movsd   xmm1, qword ptr [rdx+10h]
 * 000000014027193E: movsd   qword ptr [rbx+28h], xmm1
 * 0000000140271943: mov     rcx, [r12+4C0h]
 * 000000014027194B: mov     rax, [r12+190h]
 * 0000000140271953: call    KeGuardDispatchICall
 * 0000000140271958: movzx   eax, r15b
 * 000000014027195C: mov     cr8, rax
 * 0000000140271960: mov     r9d, 1
 * 0000000140271966: test    r14d, r14d
 * 0000000140271969: jns     short loc_1402719A8
 * 000000014027196B: mov     rax, [rbp+1A50h+var_18E8]
 * 0000000140271972: lea     ecx, [r9+17h]
 * 0000000140271976: add     rax, rcx
 * 0000000140271979: lea     edx, [rcx-15h]
 * 000000014027197C: xor     r8d, r8d
 * 000000014027197F: mov     [rax], r8
 * 0000000140271982: add     ecx, 0FFFFFFF8h
 * 0000000140271985: add     rax, 8
 * 0000000140271989: sub     rdx, r9
 * 000000014027198C: jnz     short loc_14027197F
 * 000000014027198E: test    ecx, ecx
 * 0000000140271990: jz      short loc_14027199D
 * 0000000140271992: mov     [rax], r8b
 * 0000000140271995: add     rax, r9
 * 0000000140271998: add     ecx, 0FFFFFFFFh
 * 000000014027199B: jnz     short loc_140271992
 * 000000014027199D: mov     rax, [rbp+1A50h+var_18E8]
 * 00000001402719A4: mov     [rax+18h], r9
 * 00000001402719A8: mov     rax, [rbp+1A50h+var_18E8]
 * 00000001402719AF: mov     edx, [rbp+1A50h+var_1A50]
 * 00000001402719B2: add     rax, 30h ; '0'
 * 00000001402719B6: mov     [rbp+1A50h+var_1A10], rax
 * 00000001402719BA: cmp     edx, 8
 * 00000001402719BD: jb      short loc_1402719D8
 * 00000001402719BF: mov     ecx, edx
 * 00000001402719C1: shr     rcx, 3
 * 00000001402719C5: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 00000001402719CC: add     edx, 0FFFFFFF8h
 * 00000001402719CF: add     rax, 8
 * 00000001402719D3: sub     rcx, r9
 * 00000001402719D6: jnz     short loc_1402719C5
 * 00000001402719D8: test    edx, edx
 * 00000001402719DA: jz      short loc_1402719E7
 * 00000001402719DC: mov     byte ptr [rax], 0FFh
 * 00000001402719DF: add     rax, r9
 * 00000001402719E2: add     edx, 0FFFFFFFFh
 * 00000001402719E5: jnz     short loc_1402719DC
 * 00000001402719E7: mov     eax, dword ptr [rbp+1A50h+var_1A40]
 * 00000001402719EA: mov     r14, r13
 * 00000001402719ED: mov     rdx, [rbp+1A50h+var_19F0]
 * 00000001402719F1: mov     [rbp+1A50h+var_19B8], r13
 * 00000001402719F8: lea     rcx, [rax+rax*2]
 * 00000001402719FC: lea     rax, ds:0[rcx*4]
 * 0000000140271A04: mov     rcx, r14
 * 0000000140271A07: add     rax, r13
 * 0000000140271A0A: or      r13d, 0FFFFFFFFh
 * 0000000140271A0E: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140271A12: xor     eax, eax
 * 0000000140271A14: test    byte ptr [r12+74Ch], 40h
 * 0000000140271A1D: mov     r15d, eax
 * 0000000140271A20: mov     r8d, [rcx]
 * 0000000140271A23: mov     rcx, [rbp+1A50h+var_1A00]
 * 0000000140271A27: mov     dword ptr [rbp+1A50h+var_19B0], eax
 * 0000000140271A2D: lea     eax, [r15+9]
 * 0000000140271A31: mov     [rbp+1A50h+var_19E8], r13d
 * 0000000140271A35: cmovz   eax, r9d
 * 0000000140271A39: mov     [rbp+1A50h+var_1A04], eax
 * 0000000140271A3C: mov     rax, [r12+210h]
 * 0000000140271A44: call    KeGuardDispatchICall
 * 0000000140271A49: jmp     loc_140271F81
 * 0000000140271A4E: mov     ebx, eax
 * 0000000140271A50: mov     eax, [r11+24h]
 * 0000000140271A54: bt      eax, 19h
 * 0000000140271A58: jb      loc_140271BCD
 * 0000000140271A5E: mov     ecx, [r11]
 * 0000000140271A61: cmp     ecx, 54494E49h
 * 0000000140271A67: jnz     short loc_140271A77
 * 0000000140271A69: cmp     dword ptr [r11+4], 4742444Bh
 * 0000000140271A71: jz      loc_140271BCD
 * 0000000140271A77: cmp     ecx, 45474150h
 * 0000000140271A7D: jnz     short loc_140271AAE
 * 0000000140271A7F: movzx   eax, word ptr [r11+4]
 * 0000000140271A84: mov     edx, 7777h
 * 0000000140271A89: cmp     ax, dx
 * 0000000140271A8C: jz      loc_140271BCD
 * 0000000140271A92: mov     edx, 7277h
 * 0000000140271A97: cmp     ax, dx
 * 0000000140271A9A: jz      loc_140271BCD
 * 0000000140271AA0: mov     edx, 7877h
 * 0000000140271AA5: cmp     ax, dx
 * 0000000140271AA8: jz      loc_140271BCD
 * 0000000140271AAE: cmp     ecx, 41525245h
 * 0000000140271AB4: jnz     short loc_140271AC6
 * 0000000140271AB6: mov     eax, 4154h
 * 0000000140271ABB: cmp     [r11+4], ax
 * 0000000140271AC0: jz      loc_140271BCD
 * 0000000140271AC6: mov     rax, [r12+700h]
 * 0000000140271ACE: mov     r9, r11
 * 0000000140271AD1: mov     r8, [r12+6F8h]
 * 0000000140271AD9: mov     r10d, 7
 * 0000000140271ADF: mov     [rbp+1A50h+var_1620], rax
 * 0000000140271AE6: sub     r9, r8
 * 0000000140271AE9: mov     rax, [r12+708h]
 * 0000000140271AF1: mov     [rbp+1A50h+var_1618], rax
 * 0000000140271AF8: mov     rax, [r12+710h]
 * 0000000140271B00: mov     [rbp+1A50h+var_1610], rax
 * 0000000140271B07: mov     [rbp+1A50h+var_1628], r8
 * 0000000140271B0E: movzx   edx, byte ptr [r9+r8]
 * 0000000140271B13: movzx   eax, byte ptr [r8]
 * 0000000140271B17: inc     r8
 * 0000000140271B1A: cmp     rdx, rax
 * 0000000140271B1D: jnz     short loc_140271B2A
 * 0000000140271B1F: add     r10d, 0FFFFFFFFh
 * 0000000140271B23: jnz     short loc_140271B0E
 * 0000000140271B25: jmp     loc_140271BCD
 * 0000000140271B2A: mov     r9, [rbp+1A50h+var_1620]
 * 0000000140271B31: mov     r8d, 8
 * 0000000140271B37: mov     r10, r11
 * 0000000140271B3A: mov     rcx, [r10]
 * 0000000140271B3D: add     r10, 8
 * 0000000140271B41: mov     rax, [r9]
 * 0000000140271B44: add     r9, 8
 * 0000000140271B48: cmp     rcx, rax
 * 0000000140271B4B: jnz     short loc_140271B77
 * 0000000140271B4D: add     r8d, 0FFFFFFF8h
 * 0000000140271B51: cmp     r8d, 8
 * 0000000140271B55: jnb     short loc_140271B3A
 * 0000000140271B57: test    r8d, r8d
 * 0000000140271B5A: jz      short loc_140271BCD
 * 0000000140271B5C: movzx   edx, byte ptr [r10]
 * 0000000140271B60: inc     r10
 * 0000000140271B63: movzx   eax, byte ptr [r9]
 * 0000000140271B67: inc     r9
 * 0000000140271B6A: cmp     rdx, rax
 * 0000000140271B6D: jnz     short loc_140271B77
 * 0000000140271B6F: add     r8d, 0FFFFFFFFh
 * 0000000140271B73: jnz     short loc_140271B5C
 * 0000000140271B75: jmp     short loc_140271BCD
 * 0000000140271B77: mov     r8, [rbp+1A50h+var_1618]
 * 0000000140271B7E: mov     r9, r11
 * 0000000140271B81: sub     r9, r8
 * 0000000140271B84: mov     r10d, 4
 * 0000000140271B8A: movzx   edx, byte ptr [r8+r9]
 * 0000000140271B8F: movzx   eax, byte ptr [r8]
 * 0000000140271B93: inc     r8
 * 0000000140271B96: cmp     rdx, rax
 * 0000000140271B99: jnz     short loc_140271BA3
 * 0000000140271B9B: add     r10d, 0FFFFFFFFh
 * 0000000140271B9F: jnz     short loc_140271B8A
 * 0000000140271BA1: jmp     short loc_140271BCD
 * 0000000140271BA3: mov     r8, [rbp+1A50h+var_1610]
 * 0000000140271BAA: mov     r9, r11
 * 0000000140271BAD: sub     r9, r8
 * 0000000140271BB0: mov     r10d, 6
 * 0000000140271BB6: movzx   edx, byte ptr [r8+r9]
 * 0000000140271BBB: movzx   eax, byte ptr [r8]
 * 0000000140271BBF: inc     r8
 * 0000000140271BC2: cmp     rdx, rax
 * 0000000140271BC5: jnz     short loc_140271BD8
 * 0000000140271BC7: add     r10d, 0FFFFFFFFh
 * 0000000140271BCB: jnz     short loc_140271BB6
 * 0000000140271BCD: mov     r10d, 1
 * 0000000140271BD3: mov     ebx, r10d
 * 0000000140271BD6: jmp     short loc_140271BDE
 * 0000000140271BD8: mov     r10d, 1
 * 0000000140271BDE: mov     r8d, 80000000h
 * 0000000140271BE4: test    [r11+24h], r8d
 * 0000000140271BE8: cmovnz  ebx, r10d
 * 0000000140271BEC: xor     eax, eax
 * 0000000140271BEE: mov     [rbp+1A50h+var_1A50], ebx
 * 0000000140271BF1: test    ebx, ebx
 * 0000000140271BF3: jz      short loc_140271C1A
 * 0000000140271BF5: cmp     dword ptr [r11], 54494E49h
 * 0000000140271BFC: jnz     short loc_140271C1A
 * 0000000140271BFE: cmp     dword ptr [r11+4], 4742444Bh
 * 0000000140271C06: jnz     short loc_140271C1A
 * 0000000140271C08: test    dword ptr [r12+748h], 10000000h
 * 0000000140271C14: cmovnz  ebx, eax
 * 0000000140271C17: mov     [rbp+1A50h+var_1A50], ebx
 * 0000000140271C1A: mov     ecx, [r11+8]
 * 0000000140271C1E: cmp     [r11+10h], ecx
 * 0000000140271C22: mov     edx, [r11+0Ch]
 * 0000000140271C26: cmova   ecx, [r11+10h]
 * 0000000140271C2B: mov     r9, [rbp+1A50h+var_19F0]
 * 0000000140271C2F: add     edx, ecx
 * 0000000140271C31: mov     dword ptr [rbp+1A50h+var_1A28], edx
 * 0000000140271C34: mov     eax, [r14+8]
 * 0000000140271C38: test    r10b, al
 * 0000000140271C3B: jnz     short loc_140271C59
 * 0000000140271C3D: mov     ecx, dword ptr [rbp+1A50h+var_19B0]
 * 0000000140271C43: cmp     eax, r13d
 * 0000000140271C46: cmovb   r13d, eax
 * 0000000140271C4A: cmp     eax, ecx
 * 0000000140271C4C: mov     [rbp+1A50h+var_19E8], r13d
 * 0000000140271C50: cmova   ecx, eax
 * 0000000140271C53: mov     dword ptr [rbp+1A50h+var_19B0], ecx
 * 0000000140271C59: mov     eax, [r14]
 * 0000000140271C5C: mov     r14d, [r14+4]
 * 0000000140271C60: sub     r14d, eax
 * 0000000140271C63: mov     dword ptr [rbp+1A50h+var_1980], r14d
 * 0000000140271C6A: lea     r13, [r9+rax]
 * 0000000140271C6E: test    ebx, ebx
 * 0000000140271C70: jz      short loc_140271C7E
 * 0000000140271C72: mov     rax, [rbp+1A50h+var_1A10]
 * 0000000140271C76: mov     [rax], r8d
 * 0000000140271C79: jmp     loc_140271F23
 * 0000000140271C7E: test    byte ptr [rbp+1A50h+var_1A04], 8
 * 0000000140271C82: jz      loc_140271E01
 * 0000000140271C88: mov     rax, r13
 * 0000000140271C8B: mov     edx, r14d
 * 0000000140271C8E: mov     r9d, 0FFFh
 * 0000000140271C94: mov     [rbp+1A50h+var_19C8], rdx
 * 0000000140271C9B: and     rax, r9
 * 0000000140271C9E: lea     rcx, [r14+0FFFh]
 * 0000000140271CA5: add     rcx, rax
 * 0000000140271CA8: mov     r8, 0FFFFFFFFFFFFF000h
 * 0000000140271CAF: and     rcx, r8
 * 0000000140271CB2: cmp     rcx, 1000h
 * 0000000140271CB9: jnz     short loc_140271CCA
 * 0000000140271CBB: mov     rax, r13
 * 0000000140271CBE: and     rax, r8
 * 0000000140271CC1: cmp     rax, r15
 * 0000000140271CC4: jz      loc_140271E01
 * 0000000140271CCA: xor     eax, eax
 * 0000000140271CCC: test    r14d, r14d
 * 0000000140271CCF: jz      loc_140271D7F
 * 0000000140271CD5: mov     eax, [r12+74Ch]
 * 0000000140271CDD: test    al, 40h
 * 0000000140271CDF: jz      loc_140271D7D
 * 0000000140271CE5: mov     r14, cr8
 * 0000000140271CE9: mov     rbx, r13
 * 0000000140271CEC: lea     r12, [r13-1]
 * 0000000140271CF0: and     rbx, r8
 * 0000000140271CF3: add     r12, rdx
 * 0000000140271CF6: or      r12, r9
 * 0000000140271CF9: lea     r15, [rbx-1]
 * 0000000140271CFD: mov     eax, 2
 * 0000000140271D02: mov     cr8, rax
 * 0000000140271D06: mov     rax, [rbp+1A50h+var_1A38]
 * 0000000140271D0A: mov     edx, r10d
 * 0000000140271D0D: mov     rcx, rbx
 * 0000000140271D10: mov     rax, [rax+438h]
 * 0000000140271D17: call    KeGuardDispatchICall
 * 0000000140271D1C: mov     r10d, 1
 * 0000000140271D22: cmp     eax, 0C000022Dh
 * 0000000140271D27: jnz     short loc_140271D3E
 * 0000000140271D29: cmp     r14b, r10b
 * 0000000140271D2C: ja      short loc_140271D42
 * 0000000140271D2E: movzx   eax, r14b
 * 0000000140271D32: mov     cr8, rax
 * 0000000140271D36: mov     al, [rbx]
 * 0000000140271D38: mov     rax, cr8
 * 0000000140271D3C: jmp     short loc_140271CFD
 * 0000000140271D3E: test    eax, eax
 * 0000000140271D40: js      short loc_140271D6A
 * 0000000140271D42: mov     eax, 1000h
 * 0000000140271D47: add     rbx, rax
 * 0000000140271D4A: add     r15, rax
 * 0000000140271D4D: cmp     r15, r12
 * 0000000140271D50: jnz     short loc_140271D06
 * 0000000140271D52: movzx   eax, r14b
 * 0000000140271D56: mov     cr8, rax
 * 0000000140271D5A: mov     r12, [rbp+1A50h+var_1A38]
 * 0000000140271D5E: mov     r8, 0FFFFFFFFFFFFF000h
 * 0000000140271D65: jmp     loc_140271DED
 * 0000000140271D6A: movzx   eax, r14b
 * 0000000140271D6E: mov     cr8, rax
 * 0000000140271D72: mov     r12, [rbp+1A50h+var_1A38]
 * 0000000140271D76: mov     r8, 0FFFFFFFFFFFFF000h
 * 0000000140271D7D: xor     eax, eax
 * 0000000140271D7F: mov     rcx, [rbp+1A50h+var_18E8]
 * 0000000140271D86: cmp     [r12+6C0h], eax
 * 0000000140271D8E: jnz     short loc_140271DED
 * 0000000140271D90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140271D9A: add     rax, r12
 * 0000000140271D9D: mov     [r12+6C8h], rax
 * 0000000140271DA5: xor     eax, eax
 * 0000000140271DA7: test    rcx, rcx
 * 0000000140271DAA: jz      short loc_140271DC5
 * 0000000140271DAC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140271DB6: add     rax, rcx
 * 0000000140271DB9: mov     [r12+6D0h], rax
 * 0000000140271DC1: xor     eax, eax
 * 0000000140271DC3: jmp     short loc_140271DCD
 * 0000000140271DC5: mov     [r12+6D0h], rax
 * 0000000140271DCD: test    rcx, rcx
 * 0000000140271DD0: jz      short loc_140271DD5
 * 0000000140271DD2: movsxd  rax, dword ptr [rcx]
 * 0000000140271DD5: mov     [r12+6D8h], rax
 * 0000000140271DDD: mov     [r12+6E0h], r13
 * 0000000140271DE5: mov     [r12+6C0h], r10d
 * 0000000140271DED: mov     r15, [rbp+1A50h+var_19C8]
 * 0000000140271DF4: mov     r14d, dword ptr [rbp+1A50h+var_1980]
 * 0000000140271DFB: add     r15, r13
 * 0000000140271DFE: and     r15, r8
 * 0000000140271E01: add     [r12+628h], r14d
 * 0000000140271E09: mov     r9, r13
 * 0000000140271E0C: mov     ebx, [r12+614h]
 * 0000000140271E14: mov     rax, r13
 * 0000000140271E17: mov     r11, [r12+618h]
 * 0000000140271E1F: mov     ecx, r14d
 * 0000000140271E22: add     rcx, r13
 * 0000000140271E25: cmp     r13, rcx
 * 0000000140271E28: jnb     short loc_140271E36
 * 0000000140271E2A: prefetchnta byte ptr [rax]
 * 0000000140271E2D: add     rax, 40h ; '@'
 * 0000000140271E31: cmp     rax, rcx
 * 0000000140271E34: jb      short loc_140271E2A
 * 0000000140271E36: mov     r10d, r14d
 * 0000000140271E39: mov     r8, r11
 * 0000000140271E3C: shr     r10d, 7
 * 0000000140271E40: test    r10d, r10d
 * 0000000140271E43: jz      short loc_140271EAC
 * 0000000140271E45: mov     esi, 1
 * 0000000140271E4A: mov     rdi, 7010008004002001h
 * 0000000140271E54: mov     eax, 8
 * 0000000140271E59: xor     r8, [r9]
 * 0000000140271E5C: mov     ecx, ebx
 * 0000000140271E5E: rol     r8, cl
 * 0000000140271E61: xor     r8, [r9+8]
 * 0000000140271E65: add     r9, 10h
 * 0000000140271E69: rol     r8, cl
 * 0000000140271E6C: sub     rax, rsi
 * 0000000140271E6F: jnz     short loc_140271E59
 * 0000000140271E71: mov     rcx, r9
 * 0000000140271E74: sub     rcx, r13
 * 0000000140271E77: xor     rcx, r11
 * 0000000140271E7A: mov     rax, rcx
 * 0000000140271E7D: rol     rax, 11h
 * 0000000140271E81: xor     rcx, rax
 * 0000000140271E84: mov     rax, rdi
 * 0000000140271E87: mul     rcx
 * 0000000140271E8A: xor     eax, edx
 * 0000000140271E8C: mov     [rbp+1A50h+var_1228], rdx
 * 0000000140271E93: xor     ebx, eax
 * 0000000140271E95: and     ebx, 3Fh
 * 0000000140271E98: cmovz   ebx, esi
 * 0000000140271E9B: add     r10d, 0FFFFFFFFh
 * 0000000140271E9F: jnz     short loc_140271E54
 * 0000000140271EA1: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140271EA5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140271EAC: and     r14d, 7Fh
 * 0000000140271EB0: mov     r10d, 1
 * 0000000140271EB6: cmp     r14d, 8
 * 0000000140271EBA: jb      short loc_140271ED8
 * 0000000140271EBC: mov     eax, r14d
 * 0000000140271EBF: shr     rax, 3
 * 0000000140271EC3: xor     r8, [r9]
 * 0000000140271EC6: mov     ecx, ebx
 * 0000000140271EC8: rol     r8, cl
 * 0000000140271ECB: add     r9, 8
 * 0000000140271ECF: add     r14d, 0FFFFFFF8h
 * 0000000140271ED3: sub     rax, r10
 * 0000000140271ED6: jnz     short loc_140271EC3
 * 0000000140271ED8: test    r14d, r14d
 * 0000000140271EDB: jz      short loc_140271EF2
 * 0000000140271EDD: movzx   eax, byte ptr [r9]
 * 0000000140271EE1: mov     ecx, ebx
 * 0000000140271EE3: xor     r8, rax
 * 0000000140271EE6: add     r9, r10
 * 0000000140271EE9: rol     r8, cl
 * 0000000140271EEC: add     r14d, 0FFFFFFFFh
 * 0000000140271EF0: jnz     short loc_140271EDD
 * 0000000140271EF2: mov     rax, r8
 * 0000000140271EF5: jmp     short loc_140271EFA
 * 0000000140271EF7: xor     r8d, eax
 * 0000000140271EFA: shr     rax, 1Fh
 * 0000000140271EFE: test    rax, rax
 * 0000000140271F01: jnz     short loc_140271EF7
 * 0000000140271F03: mov     rax, [rbp+1A50h+var_1A10]
 * 0000000140271F07: btr     r8d, 1Fh
 * 0000000140271F0C: mov     r11, [rbp+1A50h+var_1A40]
 * 0000000140271F10: mov     edx, dword ptr [rbp+1A50h+var_1A28]
 * 0000000140271F13: mov     ebx, [rbp+1A50h+var_1A50]
 * 0000000140271F16: mov     r9, [rbp+1A50h+var_19F0]
 * 0000000140271F1A: mov     [rax], r8d
 * 0000000140271F1D: mov     r8d, 80000000h
 * 0000000140271F23: mov     r14, [rbp+1A50h+var_19B8]
 * 0000000140271F2A: add     r14, 0Ch
 * 0000000140271F2E: mov     [rbp+1A50h+var_19B8], r14
 * 0000000140271F35: cmp     r14, [rbp+1A50h+var_1A30]
 * 0000000140271F39: jz      loc_140271FE2
 * 0000000140271F3F: add     rax, 4
 * 0000000140271F43: mov     [rbp+1A50h+var_1A10], rax
 * 0000000140271F47: mov     eax, [r11+0Ch]
 * 0000000140271F4B: cmp     [r14], eax
 * 0000000140271F4E: jb      short loc_140271F66
 * 0000000140271F50: mov     ecx, [r14+4]
 * 0000000140271F54: mov     r13d, [rbp+1A50h+var_19E8]
 * 0000000140271F58: add     rcx, r9
 * 0000000140271F5B: mov     eax, edx
 * 0000000140271F5D: cmp     rcx, rax
 * 0000000140271F60: jbe     loc_140271C34
 * 0000000140271F66: mov     rax, [r12+210h]
 * 0000000140271F6E: mov     rdx, r9
 * 0000000140271F71: mov     r8d, [r14]
 * 0000000140271F74: mov     rcx, [rbp+1A50h+var_1A00]
 * 0000000140271F78: call    KeGuardDispatchICall
 * 0000000140271F7D: mov     r13d, [rbp+1A50h+var_19E8]
 * 0000000140271F81: mov     r11, rax
 * 0000000140271F84: xor     eax, eax
 * 0000000140271F86: mov     [rbp+1A50h+var_1A40], r11
 * 0000000140271F8A: test    r11, r11
 * 0000000140271F8D: jnz     loc_140271A4E
 * 0000000140271F93: mov     ecx, 0C000007Bh
 * 0000000140271F98: mov     r13, [rbp+1A50h+var_1960]
 * 0000000140271F9F: mov     rbx, [rbp+1A50h+var_1988]
 * 0000000140271FA6: mov     rdx, [rbp+1A50h+var_1A48]
 * 0000000140271FAA: mov     r8d, 80000000h
 * 0000000140271FB0: sub     rdx, rsi
 * 0000000140271FB3: mov     [rbp+1A50h+var_1A20], r13
 * 0000000140271FB7: add     rdx, r13
 * 0000000140271FBA: mov     rsi, r13
 * 0000000140271FBD: mov     [rbp+1A50h+var_1A48], rdx
 * 0000000140271FC1: lea     eax, [rcx+r8]
 * 0000000140271FC5: test    r8d, eax
 * 0000000140271FC8: jnz     short loc_140271FD2
 * 0000000140271FCA: cmp     ecx, 0C000010Eh
 * 0000000140271FD0: jnz     short loc_140271FD6
 * 0000000140271FD2: mov     [rdx+28h], rbx
 * 0000000140271FD6: mov     r13d, [rbp+1A50h+var_1994]
 * 0000000140271FDD: jmp     loc_140273B65
 * 0000000140271FE2: mov     edx, [rbp+1A50h+var_19E8]
 * 0000000140271FE5: mov     r8d, dword ptr [rbp+1A50h+var_19B0]
 * 0000000140271FEC: cmp     edx, 0FFFFFFFFh
 * 0000000140271FEF: jnz     short loc_140271FFA
 * 0000000140271FF1: xor     eax, eax
 * 0000000140271FF3: test    r8d, r8d
 * 0000000140271FF6: jnz     short loc_140271FFA
 * 0000000140271FF8: mov     edx, eax
 * 0000000140271FFA: mov     rcx, [rbp+1A50h+BugCheckParameter2]
 * 0000000140272001: lea     r9, [rbp+1A50h+var_19A0]
 * 0000000140272008: sub     r8d, edx
 * 000000014027200B: mov     eax, edx
 * 000000014027200D: add     rax, rcx
 * 0000000140272010: mov     [rbp+1A50h+var_17A0], r8d
 * 0000000140272017: mov     [rbp+1A50h+var_1668], rax
 * 000000014027201E: xor     r8d, r8d
 * 0000000140272021: mov     rax, [r12+1F0h]
 * 0000000140272029: mov     dl, r10b
 * 000000014027202C: mov     r13, r12
 * 000000014027202F: mov     [rbp+1A50h+var_1960], r12
 * 0000000140272036: call    KeGuardDispatchICall
 * 000000014027203B: mov     rdx, rax
 * 000000014027203E: lea     r9, [rbp+1A50h+var_19A0]
 * 0000000140272045: neg     rax
 * 0000000140272048: mov     [rbp+1A50h+var_1660], rdx
 * 000000014027204F: mov     r8d, 0Ch
 * 0000000140272055: sbb     ecx, ecx
 * 0000000140272057: and     ecx, [rbp+1A50h+var_19A0]
 * 000000014027205D: mov     [rbp+1A50h+var_19A0], ecx
 * 0000000140272063: mov     rax, [r12+1F0h]
 * 000000014027206B: lea     r14d, [r8-0Bh]
 * 000000014027206F: mov     [rbp+1A50h+var_179C], ecx
 * 0000000140272075: mov     dl, r14b
 * 0000000140272078: mov     rcx, [rbp+1A50h+BugCheckParameter2]
 * 000000014027207F: call    KeGuardDispatchICall
 * 0000000140272084: mov     rdx, rax
 * 0000000140272087: mov     [rbp+1A50h+var_1A38], rax
 * 000000014027208B: neg     rax
 * 000000014027208E: mov     [rbp+1A50h+var_1658], rdx
 * 0000000140272095: lea     r8d, [r14+9]
 * 0000000140272099: mov     dl, r14b
 * 000000014027209C: sbb     ecx, ecx
 * 000000014027209E: lea     r9, [rbp+1A50h+var_19A0]
 * 00000001402720A5: and     ecx, [rbp+1A50h+var_19A0]
 * 00000001402720AB: mov     [rbp+1A50h+var_19A0], ecx
 * 00000001402720B1: mov     rax, [r12+1F0h]
 * 00000001402720B9: mov     dword ptr [rbp+1A50h+var_19B0], ecx
 * 00000001402720BF: mov     [rbp+1A50h+var_1798], ecx
 * 00000001402720C5: mov     rcx, [rbp+1A50h+BugCheckParameter2]
 * 00000001402720CC: call    KeGuardDispatchICall
 * 00000001402720D1: mov     rdx, rax
 * 00000001402720D4: neg     rax
 * 00000001402720D7: mov     eax, [rbp+1A50h+var_19A8]
 * 00000001402720DD: sbb     ecx, ecx
 * 00000001402720DF: mov     [rbp+1A50h+var_1650], rdx
 * 00000001402720E6: and     ecx, [rbp+1A50h+var_19A0]
 * 00000001402720EC: mov     [rbp+1A50h+var_19A0], ecx
 * 00000001402720F2: neg     eax
 * 00000001402720F4: mov     r15d, [r12+5E4h]
 * 00000001402720FC: mov     r8d, [r12+6ECh]
 * 0000000140272104: sbb     r9d, r9d
 * 0000000140272107: and     r9d, 0Bh
 * 000000014027210B: mov     [rbp+1A50h+var_1794], ecx
 * 0000000140272111: mov     [rbp+1A50h+var_1A50], r9d
 * 0000000140272115: lea     eax, [r15+0C0h]
 * 000000014027211C: cmp     eax, [r12+7CCh]
 * 0000000140272124: jbe     loc_14027221B
 * 000000014027212A: mov     edx, eax
 * 000000014027212C: mov     rcx, r12
 * 000000014027212F: call    sub_140282ED4
 * 0000000140272134: mov     rbx, rax
 * 0000000140272137: test    rax, rax
 * 000000014027213A: jz      loc_140272211
 * 0000000140272140: mov     edx, [r12+748h]
 * 0000000140272148: test    dl, 4
 * 000000014027214B: jnz     loc_140272204
 * 0000000140272151: mov     ecx, [r12+5E4h]
 * 0000000140272159: and     edx, 20000000h
 * 000000014027215F: mov     r9, [r12+5C8h]
 * 0000000140272167: neg     edx
 * 0000000140272169: sbb     r8d, r8d
 * 000000014027216C: and     r8d, [r12+6ECh]
 * 0000000140272174: cmp     ecx, 8
 * 0000000140272177: jb      short loc_140272191
 * 0000000140272179: mov     eax, ecx
 * 000000014027217B: shr     rax, 3
 * 000000014027217F: xor     edx, edx
 * 0000000140272181: mov     [r12], rdx
 * 0000000140272185: add     ecx, 0FFFFFFF8h
 * 0000000140272188: add     r12, 8
 * 000000014027218C: sub     rax, r14
 * 000000014027218F: jnz     short loc_140272181
 * 0000000140272191: xor     eax, eax
 * 0000000140272193: test    ecx, ecx
 * 0000000140272195: jz      short loc_1402721A3
 * 0000000140272197: mov     [r12], al
 * 000000014027219B: add     r12, r14
 * 000000014027219E: add     ecx, 0FFFFFFFFh
 * 00000001402721A1: jnz     short loc_140272197
 * 00000001402721A3: mov     r14d, [rbx+6ECh]
 * 00000001402721AA: mov     eax, 3
 * 00000001402721AF: mov     [rbx+6ECh], r8d
 * 00000001402721B6: cmp     r8d, eax
 * 00000001402721B9: jz      short loc_1402721EE
 * 00000001402721BB: test    dword ptr [rbx+748h], 10000000h
 * 00000001402721C5: lea     ecx, [rax-3]
 * 00000001402721C8: cmovz   ecx, r8d
 * 00000001402721CC: test    ecx, ecx
 * 00000001402721CE: jz      short loc_1402721E5
 * 00000001402721D0: mov     rax, [rbx+228h]
 * 00000001402721D7: lea     rcx, [r9-8]
 * 00000001402721DB: mov     rdx, [rcx]
 * 00000001402721DE: call    KeGuardDispatchICall
 * 00000001402721E3: jmp     short loc_1402721FD
 * 00000001402721E5: mov     rax, [rbx+100h]
 * 00000001402721EC: jmp     short loc_1402721F5
 * 00000001402721EE: mov     rax, [rbx+360h]
 * 00000001402721F5: mov     rcx, r9
 * 00000001402721F8: call    KeGuardDispatchICall
 * 00000001402721FD: mov     [rbx+6ECh], r14d
 * 0000000140272204: and     dword ptr [rbx+748h], 0FFFFFFFBh
 * 000000014027220B: mov     r9d, [rbp+1A50h+var_1A50]
 * 000000014027220F: jmp     short loc_140272226
 * 0000000140272211: mov     ecx, 0C000009Ah
 * 0000000140272216: jmp     loc_140271F9F
 * 000000014027221B: mov     rbx, r12
 * 000000014027221E: mov     [r12+5E4h], eax
 * 0000000140272226: mov     eax, 4
 * 000000014027222B: lea     r14, [rbx+r15]
 * 000000014027222F: add     [rbx+60Ch], eax
 * 0000000140272235: lea     rdi, [rbp+1A50h+var_1668]
 * 000000014027223C: mov     [rbp+1A50h+var_1768], r14
 * 0000000140272243: lea     rsi, [rbp+1A50h+var_17A0]
 * 000000014027224A: mov     [rbp+1A50h+var_1810], r14
 * 0000000140272251: xor     r10d, r10d
 * 0000000140272254: lea     r11d, [rax-3]
 * 0000000140272258: mov     [rbp+1A50h+var_1A40], rdi
 * 000000014027225C: mov     [rbp+1A50h+var_1A00], rax
 * 0000000140272260: mov     r13d, [rsi]
 * 0000000140272263: mov     ecx, 30h ; '0'
 * 0000000140272268: mov     r15, [rdi]
 * 000000014027226B: mov     rax, r14
 * 000000014027226E: mov     dword ptr [rbp+1A50h+var_1A28], r13d
 * 0000000140272272: lea     edx, [rcx-2Ah]
 * 0000000140272275: mov     [rax], r10
 * 0000000140272278: add     ecx, 0FFFFFFF8h
 * 000000014027227B: add     rax, 8
 * 000000014027227F: sub     rdx, r11
 * 0000000140272282: jnz     short loc_140272275
 * 0000000140272284: test    ecx, ecx
 * 0000000140272286: jz      short loc_140272293
 * 0000000140272288: mov     [rax], r10b
 * 000000014027228B: add     rax, r11
 * 000000014027228E: add     ecx, 0FFFFFFFFh
 * 0000000140272291: jnz     short loc_140272288
 * 0000000140272293: mov     [r14], r9d
 * 0000000140272296: mov     [r14+8], r15
 * 000000014027229A: cmp     r9d, 20h ; ' '
 * 000000014027229E: jnz     short loc_1402722B7
 * 00000001402722A0: test    r13d, r13d
 * 00000001402722A3: jz      short loc_1402722B7
 * 00000001402722A5: lea     r9, [r14+18h]
 * 00000001402722A9: mov     r8d, r13d
 * 00000001402722AC: mov     rdx, r15
 * 00000001402722AF: mov     rcx, rbx
 * 00000001402722B2: call    sub_140175FBC
 * 00000001402722B7: mov     [r14+10h], r13d
 * 00000001402722BB: lea     rcx, [r15+r13]
 * 00000001402722BF: add     [rbx+628h], r13d
 * 00000001402722C6: mov     r9, r15
 * 00000001402722C9: mov     r11d, [rbx+614h]
 * 00000001402722D0: mov     rax, r15
 * 00000001402722D3: mov     r12, [rbx+618h]
 * 00000001402722DA: cmp     r15, rcx
 * 00000001402722DD: jnb     short loc_1402722EB
 * 00000001402722DF: prefetchnta byte ptr [rax]
 * 00000001402722E2: add     rax, 40h ; '@'
 * 00000001402722E6: cmp     rax, rcx
 * 00000001402722E9: jb      short loc_1402722DF
 * 00000001402722EB: mov     r10d, r13d
 * 00000001402722EE: mov     r8, r12
 * 00000001402722F1: shr     r10d, 7
 * 00000001402722F5: test    r10d, r10d
 * 00000001402722F8: jz      short loc_14027236A
 * 00000001402722FA: mov     rdi, 7010008004002001h
 * 0000000140272304: mov     edx, 8
 * 0000000140272309: lea     r13d, [rdx-7]
 * 000000014027230D: mov     rax, [r9]
 * 0000000140272310: mov     ecx, r11d
 * 0000000140272313: xor     rax, r8
 * 0000000140272316: mov     r8, [r9+8]
 * 000000014027231A: rol     rax, cl
 * 000000014027231D: add     r9, 10h
 * 0000000140272321: xor     r8, rax
 * 0000000140272324: rol     r8, cl
 * 0000000140272327: sub     rdx, r13
 * 000000014027232A: jnz     short loc_14027230D
 * 000000014027232C: mov     rcx, r9
 * 000000014027232F: sub     rcx, r15
 * 0000000140272332: xor     rcx, r12
 * 0000000140272335: mov     rax, rcx
 * 0000000140272338: rol     rax, 11h
 * 000000014027233C: xor     rcx, rax
 * 000000014027233F: mov     rax, rdi
 * 0000000140272342: mul     rcx
 * 0000000140272345: xor     eax, edx
 * 0000000140272347: mov     [rbp+1A50h+var_1128], rdx
 * 000000014027234E: xor     r11d, eax
 * 0000000140272351: mov     rax, r13
 * 0000000140272354: and     r11d, 3Fh
 * 0000000140272358: cmovz   r11d, eax
 * 000000014027235C: add     r10d, 0FFFFFFFFh
 * 0000000140272360: jnz     short loc_140272304
 * 0000000140272362: mov     r13d, dword ptr [rbp+1A50h+var_1A28]
 * 0000000140272366: mov     rdi, [rbp+1A50h+var_1A40]
 * 000000014027236A: mov     edx, r13d
 * 000000014027236D: mov     r15d, 1
 * 0000000140272373: and     edx, 7Fh
 * 0000000140272376: cmp     edx, 8
 * 0000000140272379: jb      short loc_140272397
 * 000000014027237B: mov     r10d, edx
 * 000000014027237E: shr     r10, 3
 * 0000000140272382: xor     r8, [r9]
 * 0000000140272385: mov     ecx, r11d
 * 0000000140272388: rol     r8, cl
 * 000000014027238B: add     r9, 8
 * 000000014027238F: add     edx, 0FFFFFFF8h
 * 0000000140272392: sub     r10, r15
 * 0000000140272395: jnz     short loc_140272382
 * 0000000140272397: test    edx, edx
 * 0000000140272399: jz      short loc_1402723B0
 * 000000014027239B: movzx   eax, byte ptr [r9]
 * 000000014027239F: mov     ecx, r11d
 * 00000001402723A2: xor     r8, rax
 * 00000001402723A5: add     r9, r15
 * 00000001402723A8: rol     r8, cl
 * 00000001402723AB: add     edx, 0FFFFFFFFh
 * 00000001402723AE: jnz     short loc_14027239B
 * 00000001402723B0: mov     rax, r8
 * 00000001402723B3: shr     rax, 1Fh
 * 00000001402723B7: xor     r10d, r10d
 * 00000001402723BA: jmp     short loc_1402723C3
 * 00000001402723BC: xor     r8d, eax
 * 00000001402723BF: shr     rax, 1Fh
 * 00000001402723C3: test    rax, rax
 * 00000001402723C6: jnz     short loc_1402723BC
 * 00000001402723C8: mov     r9d, [rbp+1A50h+var_1A50]
 * 00000001402723CC: lea     r11d, [rax+1]
 * 00000001402723D0: btr     r8d, 1Fh
 * 00000001402723D5: add     rdi, 8
 * 00000001402723D9: mov     [r14+14h], r8d
 * 00000001402723DD: add     rsi, 4
 * 00000001402723E1: add     [rbx+628h], r13d
 * 00000001402723E8: mov     r14, [rbp+1A50h+var_1768]
 * 00000001402723EF: add     r14, 30h ; '0'
 * 00000001402723F3: mov     [rbp+1A50h+var_1A40], rdi
 * 00000001402723F7: sub     [rbp+1A50h+var_1A00], r11
 * 00000001402723FB: mov     [rbp+1A50h+var_1768], r14
 * 0000000140272402: jnz     loc_140272260
 * 0000000140272408: mov     rcx, [rbp+1A50h+var_1810]
 * 000000014027240F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140272416: mov     eax, [rbp+1A50h+var_19A8]
 * 000000014027241C: add     rcx, 60h ; '`'
 * 0000000140272420: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140272424: neg     eax
 * 0000000140272426: mov     r13, rbx
 * 0000000140272429: mov     [rbp+1A50h+var_1960], rbx
 * 0000000140272430: sbb     r12d, r12d
 * 0000000140272433: mov     [rbp+1A50h+var_1870], rcx
 * 000000014027243A: neg     r12d
 * 000000014027243D: add     r12d, 0Dh
 * 0000000140272441: test    rcx, rcx
 * 0000000140272444: jnz     loc_1402726F2
 * 000000014027244A: mov     r15d, [rbx+5E4h]
 * 0000000140272451: mov     r8d, [rbx+6ECh]
 * 0000000140272458: lea     eax, [r15+30h]
 * 000000014027245C: cmp     eax, [rbx+7CCh]
 * 0000000140272462: jbe     loc_140272550
 * 0000000140272468: mov     edx, eax
 * 000000014027246A: mov     rcx, rbx
 * 000000014027246D: call    sub_140282ED4
 * 0000000140272472: mov     r14, rax
 * 0000000140272475: test    rax, rax
 * 0000000140272478: jz      loc_140272211
 * 000000014027247E: mov     edx, [rbx+748h]
 * 0000000140272484: test    dl, 4
 * 0000000140272487: jnz     loc_140272540
 * 000000014027248D: mov     ecx, [rbx+5E4h]
 * 0000000140272493: and     edx, 20000000h
 * 0000000140272499: mov     r9, [rbx+5C8h]
 * 00000001402724A0: neg     edx
 * 00000001402724A2: mov     r10d, 1
 * 00000001402724A8: sbb     r8d, r8d
 * 00000001402724AB: and     r8d, [rbx+6ECh]
 * 00000001402724B2: cmp     ecx, 8
 * 00000001402724B5: jb      short loc_1402724CE
 * 00000001402724B7: mov     eax, ecx
 * 00000001402724B9: shr     rax, 3
 * 00000001402724BD: xor     edx, edx
 * 00000001402724BF: mov     [rbx], rdx
 * 00000001402724C2: add     ecx, 0FFFFFFF8h
 * 00000001402724C5: add     rbx, 8
 * 00000001402724C9: sub     rax, r10
 * 00000001402724CC: jnz     short loc_1402724BF
 * 00000001402724CE: xor     eax, eax
 * 00000001402724D0: test    ecx, ecx
 * 00000001402724D2: jz      short loc_1402724DE
 * 00000001402724D4: mov     [rbx], al
 * 00000001402724D6: add     rbx, r10
 * 00000001402724D9: add     ecx, 0FFFFFFFFh
 * 00000001402724DC: jnz     short loc_1402724D4
 * 00000001402724DE: mov     ebx, [r14+6ECh]
 * 00000001402724E5: mov     eax, 3
 * 00000001402724EA: mov     [r14+6ECh], r8d
 * 00000001402724F1: cmp     r8d, eax
 * 00000001402724F4: jz      short loc_14027252A
 * 00000001402724F6: test    dword ptr [r14+748h], 10000000h
 * 0000000140272501: lea     ecx, [rax-3]
 * 0000000140272504: cmovz   ecx, r8d
 * 0000000140272508: test    ecx, ecx
 * 000000014027250A: jz      short loc_140272521
 * 000000014027250C: mov     rax, [r14+228h]
 * 0000000140272513: lea     rcx, [r9-8]
 * 0000000140272517: mov     rdx, [rcx]
 * 000000014027251A: call    KeGuardDispatchICall
 * 000000014027251F: jmp     short loc_140272539
 * 0000000140272521: mov     rax, [r14+100h]
 * 0000000140272528: jmp     short loc_140272531
 * 000000014027252A: mov     rax, [r14+360h]
 * 0000000140272531: mov     rcx, r9
 * 0000000140272534: call    KeGuardDispatchICall
 * 0000000140272539: mov     [r14+6ECh], ebx
 * 0000000140272540: and     dword ptr [r14+748h], 0FFFFFFFBh
 * 0000000140272548: mov     r11d, 1
 * 000000014027254E: jmp     short loc_140272559
 * 0000000140272550: mov     r14, rbx
 * 0000000140272553: mov     [rbx+5E4h], eax
 * 0000000140272559: add     [r14+60Ch], r11d
 * 0000000140272560: add     r15, r14
 * 0000000140272563: mov     ecx, 30h ; '0'
 * 0000000140272568: mov     [rbp+1A50h+var_1710], r15
 * 000000014027256F: mov     rax, r15
 * 0000000140272572: xor     r8d, r8d
 * 0000000140272575: lea     edx, [rcx-2Ah]
 * 0000000140272578: mov     [rax], r8
 * 000000014027257B: add     ecx, 0FFFFFFF8h
 * 000000014027257E: add     rax, 8
 * 0000000140272582: sub     rdx, r11
 * 0000000140272585: jnz     short loc_140272578
 * 0000000140272587: test    ecx, ecx
 * 0000000140272589: jz      short loc_140272596
 * 000000014027258B: mov     [rax], r8b
 * 000000014027258E: add     rax, r11
 * 0000000140272591: add     ecx, 0FFFFFFFFh
 * 0000000140272594: jnz     short loc_14027258B
 * 0000000140272596: mov     r13, [rbp+1A50h+var_1A38]
 * 000000014027259A: cmp     r12d, 20h ; ' '
 * 000000014027259E: mov     [r15], r12d
 * 00000001402725A1: mov     r12d, dword ptr [rbp+1A50h+var_19B0]
 * 00000001402725A8: mov     [r15+8], r13
 * 00000001402725AC: jnz     short loc_1402725C5
 * 00000001402725AE: test    r12d, r12d
 * 00000001402725B1: jz      short loc_1402725C5
 * 00000001402725B3: lea     r9, [r15+18h]
 * 00000001402725B7: mov     r8d, r12d
 * 00000001402725BA: mov     rdx, r13
 * 00000001402725BD: mov     rcx, r14
 * 00000001402725C0: call    sub_140175FBC
 * 00000001402725C5: mov     [r15+10h], r12d
 * 00000001402725C9: mov     r9, r13
 * 00000001402725CC: add     [r14+628h], r12d
 * 00000001402725D3: mov     rax, r13
 * 00000001402725D6: mov     r11d, [r14+614h]
 * 00000001402725DD: mov     rbx, [r14+618h]
 * 00000001402725E4: mov     ecx, r12d
 * 00000001402725E7: add     rcx, r13
 * 00000001402725EA: cmp     r13, rcx
 * 00000001402725ED: jnb     short loc_1402725FB
 * 00000001402725EF: prefetchnta byte ptr [rax]
 * 00000001402725F2: add     rax, 40h ; '@'
 * 00000001402725F6: cmp     rax, rcx
 * 00000001402725F9: jb      short loc_1402725EF
 * 00000001402725FB: mov     r10d, r12d
 * 00000001402725FE: mov     r8, rbx
 * 0000000140272601: shr     r10d, 7
 * 0000000140272605: test    r10d, r10d
 * 0000000140272608: jz      short loc_14027267C
 * 000000014027260A: mov     r12, 7010008004002001h
 * 0000000140272614: mov     edx, 8
 * 0000000140272619: lea     esi, [rdx-7]
 * 000000014027261C: mov     rax, [r9]
 * 000000014027261F: mov     ecx, r11d
 * 0000000140272622: xor     rax, r8
 * 0000000140272625: mov     r8, [r9+8]
 * 0000000140272629: rol     rax, cl
 * 000000014027262C: add     r9, 10h
 * 0000000140272630: xor     r8, rax
 * 0000000140272633: rol     r8, cl
 * 0000000140272636: sub     rdx, rsi
 * 0000000140272639: jnz     short loc_14027261C
 * 000000014027263B: mov     rcx, r9
 * 000000014027263E: sub     rcx, r13
 * 0000000140272641: xor     rcx, rbx
 * 0000000140272644: mov     rax, rcx
 * 0000000140272647: rol     rax, 11h
 * 000000014027264B: xor     rcx, rax
 * 000000014027264E: mov     rax, r12
 * 0000000140272651: mul     rcx
 * 0000000140272654: xor     eax, edx
 * 0000000140272656: mov     [rbp+1A50h+var_1120], rdx
 * 000000014027265D: xor     r11d, eax
 * 0000000140272660: mov     rax, rsi
 * 0000000140272663: and     r11d, 3Fh
 * 0000000140272667: cmovz   r11d, eax
 * 000000014027266B: add     r10d, 0FFFFFFFFh
 * 000000014027266F: jnz     short loc_140272614
 * 0000000140272671: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140272675: mov     r12d, dword ptr [rbp+1A50h+var_19B0]
 * 000000014027267C: mov     edx, r12d
 * 000000014027267F: mov     ebx, 1
 * 0000000140272684: and     edx, 7Fh
 * 0000000140272687: cmp     edx, 8
 * 000000014027268A: jb      short loc_1402726A8
 * 000000014027268C: mov     r10d, edx
 * 000000014027268F: shr     r10, 3
 * 0000000140272693: xor     r8, [r9]
 * 0000000140272696: mov     ecx, r11d
 * 0000000140272699: rol     r8, cl
 * 000000014027269C: add     r9, 8
 * 00000001402726A0: add     edx, 0FFFFFFF8h
 * 00000001402726A3: sub     r10, rbx
 * 00000001402726A6: jnz     short loc_140272693
 * 00000001402726A8: test    edx, edx
 * 00000001402726AA: jz      short loc_1402726C1
 * 00000001402726AC: movzx   eax, byte ptr [r9]
 * 00000001402726B0: mov     ecx, r11d
 * 00000001402726B3: xor     r8, rax
 * 00000001402726B6: add     r9, rbx
 * 00000001402726B9: rol     r8, cl
 * 00000001402726BC: add     edx, 0FFFFFFFFh
 * 00000001402726BF: jnz     short loc_1402726AC
 * 00000001402726C1: mov     rax, r8
 * 00000001402726C4: jmp     short loc_1402726C9
 * 00000001402726C6: xor     r8d, eax
 * 00000001402726C9: shr     rax, 1Fh
 * 00000001402726CD: test    rax, rax
 * 00000001402726D0: jnz     short loc_1402726C6
 * 00000001402726D2: btr     r8d, 1Fh
 * 00000001402726D7: mov     [r15+14h], r8d
 * 00000001402726DB: mov     rax, [rbp+1A50h+var_1710]
 * 00000001402726E2: mov     [rbp+1A50h+var_1870], rax
 * 00000001402726E9: add     [r14+628h], r12d
 * 00000001402726F0: jmp     short loc_140272703
 * 00000001402726F2: mov     r13, [rbp+1A50h+var_1A38]
 * 00000001402726F6: mov     r14, rbx
 * 00000001402726F9: mov     [rcx], r12d
 * 00000001402726FC: mov     r12d, dword ptr [rbp+1A50h+var_19B0]
 * 0000000140272703: test    dword ptr [r14+748h], 40000000h
 * 000000014027270E: jz      short loc_14027272E
 * 0000000140272710: test    r12d, r12d
 * 0000000140272713: jz      short loc_14027272E
 * 0000000140272715: mov     r9, [rbp+1A50h+var_1870]
 * 000000014027271C: mov     r8d, r12d
 * 000000014027271F: add     r9, 1Ch
 * 0000000140272723: mov     rdx, r13
 * 0000000140272726: mov     rcx, r14
 * 0000000140272729: call    sub_140175FBC
 * 000000014027272E: mov     rax, [rbp+1A50h+var_1870]
 * 0000000140272735: xor     r12d, r12d
 * 0000000140272738: mov     [rax+18h], r12d
 * 000000014027273C: lea     ecx, [r12+1]
 * 0000000140272741: mov     rax, [rbp+1A50h+var_1870]
 * 0000000140272748: or      [rax+18h], ecx
 * 000000014027274B: mov     rax, r14
 * 000000014027274E: mov     rbx, [rbp+1A50h+var_1810]
 * 0000000140272755: cmp     [rbp+1A50h+var_19A8], r12d
 * 000000014027275C: mov     r15, [rbp+1A50h+BugCheckParameter2]
 * 0000000140272763: mov     [rbp+1A50h+var_1A10], rax
 * 0000000140272767: mov     [rbp+1A50h+var_1960], rax
 * 000000014027276E: mov     eax, r12d
 * 0000000140272771: setnz   al
 * 0000000140272774: mov     dword ptr [rbx+90h], 23h ; '#'
 * 000000014027277E: xor     eax, [rbx+0B8h]
 * 0000000140272784: and     eax, ecx
 * 0000000140272786: xor     [rbx+0B8h], eax
 * 000000014027278C: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140272796: jb      short loc_140272806
 * 0000000140272798: mov     rax, [r14+1F8h]
 * 000000014027279F: mov     rcx, r15
 * 00000001402727A2: mov     r13, [rbx+98h]
 * 00000001402727A9: call    KeGuardDispatchICall
 * 00000001402727AE: test    rax, rax
 * 00000001402727B1: jz      loc_14027172D
 * 00000001402727B7: mov     ecx, [rax+50h]
 * 00000001402727BA: lea     eax, [r12+2]
 * 00000001402727BF: or      [rbx+0B8h], eax
 * 00000001402727C5: add     rcx, r15
 * 00000001402727C8: mov     rax, [r13+70h]
 * 00000001402727CC: cmp     rax, r15
 * 00000001402727CF: jb      short loc_1402727E7
 * 00000001402727D1: cmp     rax, rcx
 * 00000001402727D4: jnb     short loc_1402727E7
 * 00000001402727D6: mov     rax, [rax]
 * 00000001402727D9: mov     [rbx+0A8h], rax
 * 00000001402727E0: or      dword ptr [rbx+0B8h], 4
 * 00000001402727E7: mov     rax, [r13+78h]
 * 00000001402727EB: cmp     rax, r15
 * 00000001402727EE: jb      short loc_140272806
 * 00000001402727F0: cmp     rax, rcx
 * 00000001402727F3: jnb     short loc_140272806
 * 00000001402727F5: mov     rax, [rax]
 * 00000001402727F8: mov     [rbx+0B0h], rax
 * 00000001402727FF: or      dword ptr [rbx+0B8h], 8
 * 0000000140272806: test    dword ptr [r14+748h], 400000h
 * 0000000140272811: mov     rax, r14
 * 0000000140272814: mov     r15, [rbp+1A50h+BugCheckParameter2]
 * 000000014027281B: mov     [rbp+1A50h+var_1A10], rax
 * 000000014027281F: mov     [rbp+1A50h+var_1960], rax
 * 0000000140272826: mov     [rbp+1A50h+var_1A28], r15
 * 000000014027282A: jz      loc_14027372A
 * 0000000140272830: mov     rax, [r14+1F8h]
 * 0000000140272837: mov     rcx, r15
 * 000000014027283A: call    KeGuardDispatchICall
 * 000000014027283F: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140272843: mov     r13, rax
 * 0000000140272846: test    rax, rax
 * 0000000140272849: jz      loc_1402715DD
 * 000000014027284F: movzx   r12d, word ptr [r13+6]
 * 0000000140272854: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027285E: mov     ecx, [rbp+1A50h+var_1A18]
 * 0000000140272861: mul     rcx
 * 0000000140272864: xor     eax, eax
 * 0000000140272866: mov     word ptr [rbp+1A50h+var_19E8], r12w
 * 000000014027286B: mov     r9, rdx
 * 000000014027286E: shr     r9, 3
 * 0000000140272872: mov     [rbp+1A50h+var_1A40], r9
 * 0000000140272876: test    r12w, r12w
 * 000000014027287A: jnz     short loc_1402728DA
 * 000000014027287C: test    dword ptr [r14+748h], 200000h
 * 0000000140272887: jz      loc_140280528
 * 000000014027288D: cmp     [r14+6C0h], eax
 * 0000000140272894: jnz     loc_1402715DD
 * 000000014027289A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402728A4: add     rax, r14
 * 00000001402728A7: mov     [r14+6C8h], rax
 * 00000001402728AE: xor     eax, eax
 * 00000001402728B0: mov     [r14+6D0h], rax
 * 00000001402728B7: mov     eax, 1
 * 00000001402728BC: mov     qword ptr [r14+6D8h], 10Fh
 * 00000001402728C7: mov     [r14+6E0h], r15
 * 00000001402728CE: mov     [r14+6C0h], eax
 * 00000001402728D5: jmp     loc_1402715DD
 * 00000001402728DA: mov     rdx, [rbp+1A50h+var_19E0]
 * 00000001402728DE: movzx   r11d, word ptr [r13+14h]
 * 00000001402728E3: mov     rbx, rdx
 * 00000001402728E6: mov     eax, r9d
 * 00000001402728E9: add     r11, 18h
 * 00000001402728ED: add     r11, r13
 * 00000001402728F0: movzx   r10d, r12w
 * 00000001402728F4: mov     [rbp+1A50h+var_1A38], r11
 * 00000001402728F8: mov     dword ptr [rbp+1A50h+var_1980], r10d
 * 00000001402728FF: lea     rcx, [rax+rax*2]
 * 0000000140272903: lea     rax, [rdx+rcx*4]
 * 0000000140272907: mov     [rbp+1A50h+var_19B8], rax
 * 000000014027290E: xor     eax, eax
 * 0000000140272910: mov     dword ptr [rbp+1A50h+var_19B0], eax
 * 0000000140272916: mov     edx, eax
 * 0000000140272918: test    r10d, r10d
 * 000000014027291B: jz      loc_140272B36
 * 0000000140272921: lea     r13, [r11+8]
 * 0000000140272925: lea     r12d, [rax+1]
 * 0000000140272929: mov     ecx, [r13+0]
 * 000000014027292D: cmp     [r13+8], ecx
 * 0000000140272931: mov     r9d, [r13+4]
 * 0000000140272935: cmova   ecx, [r13+8]
 * 000000014027293A: mov     [rbp+1A50h+var_1A50], r9d
 * 000000014027293E: lea     r8d, [rcx+r9]
 * 0000000140272942: mov     [rbp+1A50h+var_1A04], r8d
 * 0000000140272946: test    edx, edx
 * 0000000140272948: jz      short loc_14027295C
 * 000000014027294A: lea     eax, [rdx-1]
 * 000000014027294D: lea     rax, [rax+rax*4]
 * 0000000140272951: cmp     r8d, [r11+rax*8+0Ch]
 * 0000000140272956: jb      loc_140272B5B
 * 000000014027295C: cmp     rbx, [rbp+1A50h+var_19B8]
 * 0000000140272963: jz      loc_140272B13
 * 0000000140272969: mov     ecx, [rbx]
 * 000000014027296B: mov     eax, [rbx+4]
 * 000000014027296E: cmp     ecx, r8d
 * 0000000140272971: jnb     loc_140272AFC
 * 0000000140272977: cmp     eax, r9d
 * 000000014027297A: jbe     loc_140272AFC
 * 0000000140272980: cmp     ecx, r9d
 * 0000000140272983: jb      loc_140272BB6
 * 0000000140272989: cmp     eax, r8d
 * 000000014027298C: ja      loc_140272BB6
 * 0000000140272992: mov     eax, [rbx+8]
 * 0000000140272995: mov     ecx, 1
 * 000000014027299A: test    cl, al
 * 000000014027299C: jnz     short loc_1402729AA
 * 000000014027299E: mov     al, [rax+r15]
 * 00000001402729A2: test    al, 20h
 * 00000001402729A4: jz      loc_140272AEB
 * 00000001402729AA: mov     ecx, [r13+0]
 * 00000001402729AE: cmp     [r13+8], ecx
 * 00000001402729B2: mov     r15d, [r13+4]
 * 00000001402729B6: cmova   ecx, [r13+8]
 * 00000001402729BB: mov     rax, [r14+408h]
 * 00000001402729C2: mov     rdx, [rbp+1A50h+var_1A28]
 * 00000001402729C6: lea     r12d, [r15+rcx]
 * 00000001402729CA: mov     rcx, rbx
 * 00000001402729CD: call    KeGuardDispatchICall
 * 00000001402729D2: mov     rcx, rax
 * 00000001402729D5: cmp     [rax], r15d
 * 00000001402729D8: jb      short loc_1402729E0
 * 00000001402729DA: cmp     [rax+4], r12d
 * 00000001402729DE: jb      short loc_140272A49
 * 00000001402729E0: mov     r10, [rbp+1A50h+var_1A28]
 * 00000001402729E4: mov     eax, 80000000h
 * 00000001402729E9: mov     edx, ecx
 * 00000001402729EB: sub     edx, r10d
 * 00000001402729EE: or      edx, eax
 * 00000001402729F0: xor     eax, eax
 * 00000001402729F2: test    dword ptr [r14+748h], 200000h
 * 00000001402729FD: jz      loc_1402805B4
 * 0000000140272A03: cmp     [r14+6C0h], eax
 * 0000000140272A0A: jnz     short loc_140272A4D
 * 0000000140272A0C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140272A16: add     rax, r14
 * 0000000140272A19: mov     [r14+6C8h], rax
 * 0000000140272A20: xor     eax, eax
 * 0000000140272A22: mov     [r14+6D0h], rax
 * 0000000140272A29: mov     eax, 1
 * 0000000140272A2E: mov     qword ptr [r14+6D8h], 10Fh
 * 0000000140272A39: mov     [r14+6E0h], r10
 * 0000000140272A40: mov     [r14+6C0h], eax
 * 0000000140272A47: jmp     short loc_140272A4D
 * 0000000140272A49: mov     r10, [rbp+1A50h+var_1A28]
 * 0000000140272A4D: mov     r8d, [rcx]
 * 0000000140272A50: mov     rdx, r10
 * 0000000140272A53: mov     rax, [r14+410h]
 * 0000000140272A5A: add     r8, r10
 * 0000000140272A5D: call    KeGuardDispatchICall
 * 0000000140272A62: mov     rdx, rax
 * 0000000140272A65: cmp     [rax], r15d
 * 0000000140272A68: jb      short loc_140272A70
 * 0000000140272A6A: cmp     [rax+4], r12d
 * 0000000140272A6E: jb      short loc_140272ADF
 * 0000000140272A70: mov     r15, [rbp+1A50h+var_1A28]
 * 0000000140272A74: mov     eax, 80000000h
 * 0000000140272A79: sub     edx, r15d
 * 0000000140272A7C: or      edx, eax
 * 0000000140272A7E: xor     eax, eax
 * 0000000140272A80: test    dword ptr [r14+748h], 200000h
 * 0000000140272A8B: jz      loc_140280585
 * 0000000140272A91: mov     r8d, [rbp+1A50h+var_1A04]
 * 0000000140272A95: mov     r9d, [rbp+1A50h+var_1A50]
 * 0000000140272A99: cmp     [r14+6C0h], eax
 * 0000000140272AA0: jnz     short loc_140272AEB
 * 0000000140272AA2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140272AAC: add     rax, r14
 * 0000000140272AAF: mov     [r14+6C8h], rax
 * 0000000140272AB6: xor     eax, eax
 * 0000000140272AB8: mov     [r14+6D0h], rax
 * 0000000140272ABF: mov     eax, 1
 * 0000000140272AC4: mov     qword ptr [r14+6D8h], 10Fh
 * 0000000140272ACF: mov     [r14+6E0h], r15
 * 0000000140272AD6: mov     [r14+6C0h], eax
 * 0000000140272ADD: jmp     short loc_140272AEB
 * 0000000140272ADF: mov     r8d, [rbp+1A50h+var_1A04]
 * 0000000140272AE3: mov     r9d, [rbp+1A50h+var_1A50]
 * 0000000140272AE7: mov     r15, [rbp+1A50h+var_1A28]
 * 0000000140272AEB: add     rbx, 0Ch
 * 0000000140272AEF: cmp     rbx, [rbp+1A50h+var_19B8]
 * 0000000140272AF6: jnz     loc_140272969
 * 0000000140272AFC: mov     edx, dword ptr [rbp+1A50h+var_19B0]
 * 0000000140272B02: mov     r12d, 1
 * 0000000140272B08: mov     r10d, dword ptr [rbp+1A50h+var_1980]
 * 0000000140272B0F: mov     r11, [rbp+1A50h+var_1A38]
 * 0000000140272B13: add     edx, r12d
 * 0000000140272B16: add     r13, 28h ; '('
 * 0000000140272B1A: mov     dword ptr [rbp+1A50h+var_19B0], edx
 * 0000000140272B20: cmp     edx, r10d
 * 0000000140272B23: jb      loc_140272929
 * 0000000140272B29: mov     r9, [rbp+1A50h+var_1A40]
 * 0000000140272B2D: mov     r13, [rbp+1A50h+var_1A30]
 * 0000000140272B31: movzx   r12d, word ptr [rbp+1A50h+var_19E8]
 * 0000000140272B36: cmp     rbx, [rbp+1A50h+var_19B8]
 * 0000000140272B3D: jz      loc_140272BCE
 * 0000000140272B43: xor     eax, eax
 * 0000000140272B45: test    dword ptr [r14+748h], 200000h
 * 0000000140272B50: jnz     loc_14027288D
 * 0000000140272B56: jmp     loc_1402804C6
 * 0000000140272B5B: xor     eax, eax
 * 0000000140272B5D: test    dword ptr [r14+748h], 200000h
 * 0000000140272B68: jz      loc_140280556
 * 0000000140272B6E: cmp     [r14+6C0h], eax
 * 0000000140272B75: jnz     loc_1402715DD
 * 0000000140272B7B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140272B85: add     rax, r14
 * 0000000140272B88: mov     [r14+6C8h], rax
 * 0000000140272B8F: xor     eax, eax
 * 0000000140272B91: mov     [r14+6D0h], rax
 * 0000000140272B98: mov     qword ptr [r14+6D8h], 10Fh
 * 0000000140272BA3: mov     [r14+6E0h], r15
 * 0000000140272BAA: mov     [r14+6C0h], r12d
 * 0000000140272BB1: jmp     loc_1402715DD
 * 0000000140272BB6: xor     eax, eax
 * 0000000140272BB8: test    dword ptr [r14+748h], 200000h
 * 0000000140272BC3: jnz     loc_14027288D
 * 0000000140272BC9: jmp     loc_1402804F7
 * 0000000140272BCE: mov     r15d, [r14+5E4h]
 * 0000000140272BD5: lea     ecx, [r9+6]
 * 0000000140272BD9: mov     r8d, [r14+6ECh]
 * 0000000140272BE0: lea     eax, [r10+2]
 * 0000000140272BE4: and     ecx, 0FFFFFFF8h
 * 0000000140272BE7: lea     eax, [rax+rax*2]
 * 0000000140272BEA: lea     eax, [rcx+rax*8]
 * 0000000140272BED: add     eax, r15d
 * 0000000140272BF0: cmp     eax, [r14+7CCh]
 * 0000000140272BF7: jbe     loc_140272CFC
 * 0000000140272BFD: mov     edx, eax
 * 0000000140272BFF: mov     rcx, r14
 * 0000000140272C02: call    sub_140282ED4
 * 0000000140272C07: mov     [rbp+1A50h+var_19B0], rax
 * 0000000140272C0E: mov     rbx, rax
 * 0000000140272C11: test    rax, rax
 * 0000000140272C14: jz      loc_14027172D
 * 0000000140272C1A: mov     edx, [r14+748h]
 * 0000000140272C21: test    dl, 4
 * 0000000140272C24: jnz     loc_140272CE8
 * 0000000140272C2A: mov     ecx, [r14+5E4h]
 * 0000000140272C31: and     edx, 20000000h
 * 0000000140272C37: mov     r9, [r14+5C8h]
 * 0000000140272C3E: neg     edx
 * 0000000140272C40: mov     r10d, 1
 * 0000000140272C46: sbb     r8d, r8d
 * 0000000140272C49: and     r8d, [r14+6ECh]
 * 0000000140272C50: cmp     ecx, 8
 * 0000000140272C53: jb      short loc_140272C6C
 * 0000000140272C55: mov     eax, ecx
 * 0000000140272C57: shr     rax, 3
 * 0000000140272C5B: xor     edx, edx
 * 0000000140272C5D: mov     [r14], rdx
 * 0000000140272C60: add     ecx, 0FFFFFFF8h
 * 0000000140272C63: add     r14, 8
 * 0000000140272C67: sub     rax, r10
 * 0000000140272C6A: jnz     short loc_140272C5D
 * 0000000140272C6C: xor     eax, eax
 * 0000000140272C6E: test    ecx, ecx
 * 0000000140272C70: jz      short loc_140272C7D
 * 0000000140272C72: mov     [r14], al
 * 0000000140272C75: add     r14, r10
 * 0000000140272C78: add     ecx, 0FFFFFFFFh
 * 0000000140272C7B: jnz     short loc_140272C72
 * 0000000140272C7D: mov     r14, [rbp+1A50h+var_19B0]
 * 0000000140272C84: mov     eax, 3
 * 0000000140272C89: mov     ebx, [rbx+6ECh]
 * 0000000140272C8F: mov     [r14+6ECh], r8d
 * 0000000140272C96: cmp     r8d, eax
 * 0000000140272C99: jz      short loc_140272CCF
 * 0000000140272C9B: test    dword ptr [r14+748h], 10000000h
 * 0000000140272CA6: lea     ecx, [rax-3]
 * 0000000140272CA9: cmovz   ecx, r8d
 * 0000000140272CAD: test    ecx, ecx
 * 0000000140272CAF: jz      short loc_140272CC6
 * 0000000140272CB1: mov     rax, [r14+228h]
 * 0000000140272CB8: lea     rcx, [r9-8]
 * 0000000140272CBC: mov     rdx, [rcx]
 * 0000000140272CBF: call    KeGuardDispatchICall
 * 0000000140272CC4: jmp     short loc_140272CDE
 * 0000000140272CC6: mov     rax, [r14+100h]
 * 0000000140272CCD: jmp     short loc_140272CD6
 * 0000000140272CCF: mov     rax, [r14+360h]
 * 0000000140272CD6: mov     rcx, r9
 * 0000000140272CD9: call    KeGuardDispatchICall
 * 0000000140272CDE: mov     [r14+6ECh], ebx
 * 0000000140272CE5: mov     rbx, r14
 * 0000000140272CE8: and     dword ptr [rbx+748h], 0FFFFFFFBh
 * 0000000140272CEF: mov     r9, [rbp+1A50h+var_1A40]
 * 0000000140272CF3: mov     r10d, dword ptr [rbp+1A50h+var_1980]
 * 0000000140272CFA: jmp     short loc_140272D0D
 * 0000000140272CFC: mov     rbx, r14
 * 0000000140272CFF: mov     [r14+5E4h], eax
 * 0000000140272D06: mov     [rbp+1A50h+var_19B0], rbx
 * 0000000140272D0D: mov     r14d, 1
 * 0000000140272D13: lea     rdx, [rbx+r15]
 * 0000000140272D17: add     [rbx+60Ch], r14d
 * 0000000140272D1E: mov     rax, rdx
 * 0000000140272D21: mov     [rbp+1A50h+var_16B8], rdx
 * 0000000140272D28: xor     r11d, r11d
 * 0000000140272D2B: lea     ecx, [r14+2Fh]
 * 0000000140272D2F: lea     r8d, [r14+5]
 * 0000000140272D33: mov     [rax], r11
 * 0000000140272D36: add     ecx, 0FFFFFFF8h
 * 0000000140272D39: add     rax, 8
 * 0000000140272D3D: sub     r8, r14
 * 0000000140272D40: jnz     short loc_140272D33
 * 0000000140272D42: test    ecx, ecx
 * 0000000140272D44: jz      short loc_140272D51
 * 0000000140272D46: mov     [rax], r11b
 * 0000000140272D49: add     rax, r14
 * 0000000140272D4C: add     ecx, 0FFFFFFFFh
 * 0000000140272D4F: jnz     short loc_140272D46
 * 0000000140272D51: mov     r15, [rbp+1A50h+var_19E0]
 * 0000000140272D55: xor     eax, eax
 * 0000000140272D57: mov     dword ptr [rdx], 1Eh
 * 0000000140272D5D: mov     [rdx+8], r15
 * 0000000140272D61: mov     [rdx+10h], eax
 * 0000000140272D64: mov     rcx, [rbx+618h]
 * 0000000140272D6B: mov     rax, rcx
 * 0000000140272D6E: jmp     short loc_140272D72
 * 0000000140272D70: xor     ecx, eax
 * 0000000140272D72: shr     rax, 1Fh
 * 0000000140272D76: test    rax, rax
 * 0000000140272D79: jnz     short loc_140272D70
 * 0000000140272D7B: mov     r8, [rbp+1A50h+var_1A28]
 * 0000000140272D7F: btr     ecx, 1Fh
 * 0000000140272D83: mov     [rdx+14h], ecx
 * 0000000140272D86: mov     r14, rbx
 * 0000000140272D89: mov     rax, [rbp+1A50h+var_16B8]
 * 0000000140272D90: xor     edx, edx
 * 0000000140272D92: mov     [rbp+1A50h+var_18C8], rax
 * 0000000140272D99: mov     [rax+18h], r8
 * 0000000140272D9D: mov     ecx, [r13+50h]
 * 0000000140272DA1: lea     r13d, [r9-1]
 * 0000000140272DA5: mov     rax, [rbp+1A50h+var_18C8]
 * 0000000140272DAC: mov     [rax+20h], ecx
 * 0000000140272DAF: mov     rax, [rbp+1A50h+var_18C8]
 * 0000000140272DB6: mov     ecx, [rbp+1A50h+var_1A18]
 * 0000000140272DB9: mov     [rax+24h], ecx
 * 0000000140272DBC: mov     rax, [rbp+1A50h+var_18C8]
 * 0000000140272DC3: mov     [rax+28h], r12w
 * 0000000140272DC8: xor     eax, eax
 * 0000000140272DCA: cmp     [rbp+1A50h+var_19A8], edx
 * 0000000140272DD0: lea     r12d, [rdx+1]
 * 0000000140272DD4: mov     rcx, [rbp+1A50h+var_18C8]
 * 0000000140272DDB: setnz   al
 * 0000000140272DDE: add     r13, 7
 * 0000000140272DE2: and     r13, 0FFFFFFFFFFFFFFF8h
 * 0000000140272DE6: xor     ax, [rcx+2Ah]
 * 0000000140272DEA: and     ax, r12w
 * 0000000140272DEE: xor     [rcx+2Ah], ax
 * 0000000140272DF2: mov     rcx, [rbp+1A50h+var_18C8]
 * 0000000140272DF9: movzx   eax, word ptr [rcx+28h]
 * 0000000140272DFD: lea     rdx, [rcx+30h]
 * 0000000140272E01: add     r13, rdx
 * 0000000140272E04: mov     [rbp+1A50h+var_1980], rdx
 * 0000000140272E0B: mov     [rbp+1A50h+var_1A10], r13
 * 0000000140272E0F: lea     rcx, [rax+rax*2]
 * 0000000140272E13: lea     r11, ds:0[rcx*8]
 * 0000000140272E1B: add     r11, r13
 * 0000000140272E1E: lea     rax, [r15+0Ch]
 * 0000000140272E22: mov     [rbp+1A50h+var_1A30], r11
 * 0000000140272E26: test    r9d, r9d
 * 0000000140272E29: jnz     short loc_140272E32
 * 0000000140272E2B: mov     rax, [rbp+1A50h+var_19B8]
 * 0000000140272E32: mov     [rbp+1A50h+var_19F0], rax
 * 0000000140272E36: xor     eax, eax
 * 0000000140272E38: test    r10d, r10d
 * 0000000140272E3B: jz      short loc_140272E76
 * 0000000140272E3D: xor     r9d, r9d
 * 0000000140272E40: mov     edx, r10d
 * 0000000140272E43: lea     rax, [r13+8]
 * 0000000140272E47: mov     r15d, 80000000h
 * 0000000140272E4D: lea     esi, [r9+2]
 * 0000000140272E51: lea     r10d, [r9+0Ch]
 * 0000000140272E55: mov     rcx, rsi
 * 0000000140272E58: mov     [rax-8], r9d
 * 0000000140272E5C: mov     [rax-4], r9d
 * 0000000140272E60: mov     [rax], r15d
 * 0000000140272E63: add     rax, r10
 * 0000000140272E66: sub     rcx, r12
 * 0000000140272E69: jnz     short loc_140272E58
 * 0000000140272E6B: sub     rdx, r12
 * 0000000140272E6E: jnz     short loc_140272E55
 * 0000000140272E70: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140272E74: xor     eax, eax
 * 0000000140272E76: cmp     r13, r11
 * 0000000140272E79: jz      loc_14027372A
 * 0000000140272E7F: mov     r15, [rbp+1A50h+var_1A38]
 * 0000000140272E83: jmp     short loc_140272E87
 * 0000000140272E85: xor     eax, eax
 * 0000000140272E87: mov     r11d, eax
 * 0000000140272E8A: mov     eax, [r15+24h]
 * 0000000140272E8E: bt      eax, 19h
 * 0000000140272E92: jb      loc_14027307E
 * 0000000140272E98: mov     ecx, [r15]
 * 0000000140272E9B: cmp     ecx, 54494E49h
 * 0000000140272EA1: jnz     short loc_140272EB1
 * 0000000140272EA3: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140272EAB: jz      loc_14027307E
 * 0000000140272EB1: cmp     ecx, 45474150h
 * 0000000140272EB7: jnz     short loc_140272EE8
 * 0000000140272EB9: movzx   eax, word ptr [r15+4]
 * 0000000140272EBE: mov     edx, 7777h
 * 0000000140272EC3: cmp     ax, dx
 * 0000000140272EC6: jz      loc_14027307E
 * 0000000140272ECC: mov     edx, 7277h
 * 0000000140272ED1: cmp     ax, dx
 * 0000000140272ED4: jz      loc_14027307E
 * 0000000140272EDA: mov     edx, 7877h
 * 0000000140272EDF: cmp     ax, dx
 * 0000000140272EE2: jz      loc_14027307E
 * 0000000140272EE8: cmp     ecx, 41525245h
 * 0000000140272EEE: jnz     short loc_140272F00
 * 0000000140272EF0: mov     eax, 4154h
 * 0000000140272EF5: cmp     [r15+4], ax
 * 0000000140272EFA: jz      loc_14027307E
 * 0000000140272F00: mov     rax, [rbx+700h]
 * 0000000140272F07: mov     r9, r15
 * 0000000140272F0A: mov     r8, [rbx+6F8h]
 * 0000000140272F11: mov     r10d, 7
 * 0000000140272F17: mov     [rbp+1A50h+var_1600], rax
 * 0000000140272F1E: sub     r9, r8
 * 0000000140272F21: mov     rax, [rbx+708h]
 * 0000000140272F28: or      r13d, 0FFFFFFFFh
 * 0000000140272F2C: mov     [rbp+1A50h+var_15F8], rax
 * 0000000140272F33: mov     rax, [rbx+710h]
 * 0000000140272F3A: mov     [rbp+1A50h+var_15F0], rax
 * 0000000140272F41: mov     [rbp+1A50h+var_1608], r8
 * 0000000140272F48: movzx   edx, byte ptr [r8+r9]
 * 0000000140272F4D: movzx   eax, byte ptr [r8]
 * 0000000140272F51: add     r8, r12
 * 0000000140272F54: cmp     rdx, rax
 * 0000000140272F57: jnz     short loc_140272F63
 * 0000000140272F59: add     r10d, r13d
 * 0000000140272F5C: jnz     short loc_140272F48
 * 0000000140272F5E: jmp     loc_140273003
 * 0000000140272F63: mov     r9, [rbp+1A50h+var_1600]
 * 0000000140272F6A: mov     r8d, 8
 * 0000000140272F70: mov     r10, r15
 * 0000000140272F73: mov     rcx, [r10]
 * 0000000140272F76: add     r10, 8
 * 0000000140272F7A: mov     rax, [r9]
 * 0000000140272F7D: add     r9, 8
 * 0000000140272F81: cmp     rcx, rax
 * 0000000140272F84: jnz     short loc_140272FAF
 * 0000000140272F86: add     r8d, 0FFFFFFF8h
 * 0000000140272F8A: cmp     r8d, 8
 * 0000000140272F8E: jnb     short loc_140272F73
 * 0000000140272F90: test    r8d, r8d
 * 0000000140272F93: jz      short loc_140273003
 * 0000000140272F95: movzx   edx, byte ptr [r10]
 * 0000000140272F99: add     r10, r12
 * 0000000140272F9C: movzx   eax, byte ptr [r9]
 * 0000000140272FA0: add     r9, r12
 * 0000000140272FA3: cmp     rdx, rax
 * 0000000140272FA6: jnz     short loc_140272FAF
 * 0000000140272FA8: add     r8d, r13d
 * 0000000140272FAB: jnz     short loc_140272F95
 * 0000000140272FAD: jmp     short loc_140273003
 * 0000000140272FAF: mov     r8, [rbp+1A50h+var_15F8]
 * 0000000140272FB6: mov     r9, r15
 * 0000000140272FB9: sub     r9, r8
 * 0000000140272FBC: mov     r10d, 4
 * 0000000140272FC2: movzx   edx, byte ptr [r8+r9]
 * 0000000140272FC7: movzx   eax, byte ptr [r8]
 * 0000000140272FCB: add     r8, r12
 * 0000000140272FCE: cmp     rdx, rax
 * 0000000140272FD1: jnz     short loc_140272FDA
 * 0000000140272FD3: add     r10d, r13d
 * 0000000140272FD6: jnz     short loc_140272FC2
 * 0000000140272FD8: jmp     short loc_140273003
 * 0000000140272FDA: mov     r8, [rbp+1A50h+var_15F0]
 * 0000000140272FE1: mov     r9, r15
 * 0000000140272FE4: sub     r9, r8
 * 0000000140272FE7: mov     r10d, 6
 * 0000000140272FED: movzx   edx, byte ptr [r8+r9]
 * 0000000140272FF2: movzx   eax, byte ptr [r8]
 * 0000000140272FF6: add     r8, r12
 * 0000000140272FF9: cmp     rdx, rax
 * 0000000140272FFC: jnz     short loc_140273006
 * 0000000140272FFE: add     r10d, r13d
 * 0000000140273001: jnz     short loc_140272FED
 * 0000000140273003: mov     r11d, r12d
 * 0000000140273006: mov     r8, [rbp+1A50h+var_1A28]
 * 000000014027300A: mov     ecx, 80000000h
 * 000000014027300F: test    [r15+24h], ecx
 * 0000000140273013: cmovnz  r11d, r12d
 * 0000000140273017: xor     eax, eax
 * 0000000140273019: mov     [rbp+1A50h+var_19E8], r11d
 * 000000014027301D: test    r11d, r11d
 * 0000000140273020: jz      short loc_140273047
 * 0000000140273022: cmp     dword ptr [r15], 54494E49h
 * 0000000140273029: jnz     short loc_140273047
 * 000000014027302B: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140273033: jnz     short loc_140273047
 * 0000000140273035: test    dword ptr [rbx+748h], 10000000h
 * 000000014027303F: cmovnz  r11d, eax
 * 0000000140273043: mov     [rbp+1A50h+var_19E8], r11d
 * 0000000140273047: mov     ecx, [r15+8]
 * 000000014027304B: cmp     [r15+10h], ecx
 * 000000014027304F: mov     r12d, [r15+0Ch]
 * 0000000140273053: cmova   ecx, [r15+10h]
 * 0000000140273058: mov     rdx, [rbp+1A50h+var_19B8]
 * 000000014027305F: add     ecx, r12d
 * 0000000140273062: mov     r9, [rbp+1A50h+var_19E0]
 * 0000000140273066: mov     [rbp+1A50h+var_19A8], r12d
 * 000000014027306D: mov     [rbp+1A50h+var_1A18], ecx
 * 0000000140273070: cmp     r9, rdx
 * 0000000140273073: jz      short loc_140273083
 * 0000000140273075: mov     r13d, [r9]
 * 0000000140273078: mov     eax, [r9+4]
 * 000000014027307C: jmp     short loc_140273088
 * 000000014027307E: mov     r11d, r12d
 * 0000000140273081: jmp     short loc_14027300A
 * 0000000140273083: xor     eax, eax
 * 0000000140273085: mov     r13d, eax
 * 0000000140273088: mov     [rbp+1A50h+var_1A04], eax
 * 000000014027308B: mov     r15d, r12d
 * 000000014027308E: cmp     r9, rdx
 * 0000000140273091: jz      loc_140273270
 * 0000000140273097: cmp     r13d, r12d
 * 000000014027309A: jbe     loc_140273270
 * 00000001402730A0: cmp     eax, ecx
 * 00000001402730A2: ja      loc_140273270
 * 00000001402730A8: test    r11d, r11d
 * 00000001402730AB: jnz     loc_140273270
 * 00000001402730B1: mov     rax, [rbp+1A50h+var_1A10]
 * 00000001402730B5: lea     rdx, [rbp+1A50h+var_17A0]
 * 00000001402730BC: mov     r9d, r13d
 * 00000001402730BF: mov     r15d, r13d
 * 00000001402730C2: mov     [rax], r12d
 * 00000001402730C5: mov     [rax+4], r13d
 * 00000001402730C9: mov     eax, [rax]
 * 00000001402730CB: sub     r9d, eax
 * 00000001402730CE: mov     r11d, r9d
 * 00000001402730D1: lea     rbx, [r8+rax]
 * 00000001402730D5: add     r11, rbx
 * 00000001402730D8: lea     r8, [rbp+1A50h+var_1668]
 * 00000001402730DF: xor     eax, eax
 * 00000001402730E1: mov     r10d, eax
 * 00000001402730E4: mov     rcx, [r8]
 * 00000001402730E7: mov     eax, [rdx]
 * 00000001402730E9: add     rax, rcx
 * 00000001402730EC: cmp     rbx, rax
 * 00000001402730EF: jnb     short loc_1402730FA
 * 00000001402730F1: cmp     r11, rcx
 * 00000001402730F4: ja      loc_140273257
 * 00000001402730FA: mov     eax, 4
 * 00000001402730FF: inc     r10d
 * 0000000140273102: add     rdx, rax
 * 0000000140273105: add     r8, 8
 * 0000000140273109: cmp     r10d, eax
 * 000000014027310C: jb      short loc_1402730E4
 * 000000014027310E: mov     r12, [rbp+1A50h+var_19B0]
 * 0000000140273115: mov     r10, rbx
 * 0000000140273118: mov     rax, rbx
 * 000000014027311B: add     [r12+628h], r9d
 * 0000000140273123: mov     r15d, [r12+614h]
 * 000000014027312B: mov     r12, [r12+618h]
 * 0000000140273133: cmp     rbx, r11
 * 0000000140273136: jnb     short loc_140273144
 * 0000000140273138: prefetchnta byte ptr [rax]
 * 000000014027313B: add     rax, 40h ; '@'
 * 000000014027313F: cmp     rax, r11
 * 0000000140273142: jb      short loc_140273138
 * 0000000140273144: mov     r11d, r9d
 * 0000000140273147: mov     r8, r12
 * 000000014027314A: shr     r11d, 7
 * 000000014027314E: test    r11d, r11d
 * 0000000140273151: jz      short loc_1402731C5
 * 0000000140273153: mov     rdi, 7010008004002001h
 * 000000014027315D: mov     edx, 8
 * 0000000140273162: lea     esi, [rdx-7]
 * 0000000140273165: mov     rax, [r10]
 * 0000000140273168: mov     ecx, r15d
 * 000000014027316B: xor     rax, r8
 * 000000014027316E: mov     r8, [r10+8]
 * 0000000140273172: rol     rax, cl
 * 0000000140273175: add     r10, 10h
 * 0000000140273179: xor     r8, rax
 * 000000014027317C: rol     r8, cl
 * 000000014027317F: sub     rdx, rsi
 * 0000000140273182: jnz     short loc_140273165
 * 0000000140273184: mov     rcx, r10
 * 0000000140273187: sub     rcx, rbx
 * 000000014027318A: xor     rcx, r12
 * 000000014027318D: mov     rax, rcx
 * 0000000140273190: rol     rax, 11h
 * 0000000140273194: xor     rcx, rax
 * 0000000140273197: mov     rax, rdi
 * 000000014027319A: mul     rcx
 * 000000014027319D: xor     eax, edx
 * 000000014027319F: mov     [rbp+1A50h+var_1118], rdx
 * 00000001402731A6: xor     r15d, eax
 * 00000001402731A9: mov     rax, rsi
 * 00000001402731AC: and     r15d, 3Fh
 * 00000001402731B0: cmovz   r15d, eax
 * 00000001402731B4: add     r11d, 0FFFFFFFFh
 * 00000001402731B8: jnz     short loc_14027315D
 * 00000001402731BA: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402731BE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402731C5: and     r9d, 7Fh
 * 00000001402731C9: mov     r11d, 1
 * 00000001402731CF: cmp     r9d, 8
 * 00000001402731D3: jb      short loc_1402731F2
 * 00000001402731D5: mov     edx, r9d
 * 00000001402731D8: shr     rdx, 3
 * 00000001402731DC: xor     r8, [r10]
 * 00000001402731DF: mov     ecx, r15d
 * 00000001402731E2: rol     r8, cl
 * 00000001402731E5: add     r10, 8
 * 00000001402731E9: add     r9d, 0FFFFFFF8h
 * 00000001402731ED: sub     rdx, r11
 * 00000001402731F0: jnz     short loc_1402731DC
 * 00000001402731F2: test    r9d, r9d
 * 00000001402731F5: jz      short loc_14027320D
 * 00000001402731F7: movzx   eax, byte ptr [r10]
 * 00000001402731FB: mov     ecx, r15d
 * 00000001402731FE: xor     r8, rax
 * 0000000140273201: add     r10, r11
 * 0000000140273204: rol     r8, cl
 * 0000000140273207: add     r9d, 0FFFFFFFFh
 * 000000014027320B: jnz     short loc_1402731F7
 * 000000014027320D: mov     rax, r8
 * 0000000140273210: shr     rax, 1Fh
 * 0000000140273214: xor     r10d, r10d
 * 0000000140273217: jmp     short loc_140273220
 * 0000000140273219: xor     r8d, eax
 * 000000014027321C: shr     rax, 1Fh
 * 0000000140273220: test    rax, rax
 * 0000000140273223: jnz     short loc_140273219
 * 0000000140273225: mov     rax, [rbp+1A50h+var_1A10]
 * 0000000140273229: btr     r8d, 1Fh
 * 000000014027322E: mov     r11d, [rbp+1A50h+var_19E8]
 * 0000000140273232: mov     r15d, r13d
 * 0000000140273235: mov     rbx, [rbp+1A50h+var_19B0]
 * 000000014027323C: mov     ecx, [rbp+1A50h+var_1A18]
 * 000000014027323F: mov     r12d, [rbp+1A50h+var_19A8]
 * 0000000140273246: mov     rdx, [rbp+1A50h+var_19B8]
 * 000000014027324D: mov     r9, [rbp+1A50h+var_19E0]
 * 0000000140273251: mov     [rax+8], r8d
 * 0000000140273255: jmp     short loc_140273273
 * 0000000140273257: mov     r11d, [rbp+1A50h+var_19E8]
 * 000000014027325B: mov     rbx, [rbp+1A50h+var_19B0]
 * 0000000140273262: mov     ecx, [rbp+1A50h+var_1A18]
 * 0000000140273265: mov     rdx, [rbp+1A50h+var_19B8]
 * 000000014027326C: mov     r9, [rbp+1A50h+var_19E0]
 * 0000000140273270: xor     r10d, r10d
 * 0000000140273273: cmp     r13d, r12d
 * 0000000140273276: jb      loc_14027351C
 * 000000014027327C: cmp     [rbp+1A50h+var_1A04], ecx
 * 000000014027327F: ja      loc_14027351C
 * 0000000140273285: cmp     r9, rdx
 * 0000000140273288: jz      loc_14027351C
 * 000000014027328E: mov     r12, [rbp+1A50h+var_19F0]
 * 0000000140273292: mov     r13d, [r12+4]
 * 0000000140273297: cmp     r13d, ecx
 * 000000014027329A: ja      loc_14027351C
 * 00000001402732A0: mov     rax, [rbp+1A50h+var_1980]
 * 00000001402732A7: mov     r8d, 1
 * 00000001402732AD: jmp     short loc_1402732B6
 * 00000001402732AF: mov     rbx, [rbp+1A50h+var_19B0]
 * 00000001402732B6: cmp     r12, rdx
 * 00000001402732B9: jz      loc_14027351C
 * 00000001402732BF: test    r11d, r11d
 * 00000001402732C2: jz      short loc_1402732CC
 * 00000001402732C4: mov     byte ptr [rax], 80h
 * 00000001402732C7: jmp     loc_1402734EC
 * 00000001402732CC: mov     r15d, [r12]
 * 00000001402732D0: mov     ecx, [r9+4]
 * 00000001402732D4: mov     [rbp+1A50h+var_1A50], r15d
 * 00000001402732D8: cmp     r15d, ecx
 * 00000001402732DB: jnb     short loc_140273337
 * 00000001402732DD: test    dword ptr [rbx+748h], 200000h
 * 00000001402732E7: jz      loc_1402805E3
 * 00000001402732ED: xor     eax, eax
 * 00000001402732EF: cmp     [rbx+6C0h], eax
 * 00000001402732F5: jnz     short loc_140273337
 * 00000001402732F7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140273301: mov     edx, 1
 * 0000000140273306: add     rax, rbx
 * 0000000140273309: mov     [rbx+6C8h], rax
 * 0000000140273310: xor     eax, eax
 * 0000000140273312: mov     [rbx+6D0h], rax
 * 0000000140273319: mov     rax, [rbp+1A50h+var_1A28]
 * 000000014027331D: mov     qword ptr [rbx+6D8h], 10Fh
 * 0000000140273328: mov     [rbx+6E0h], rax
 * 000000014027332F: mov     [rbx+6C0h], edx
 * 0000000140273335: jmp     short loc_14027333B
 * 0000000140273337: mov     rax, [rbp+1A50h+var_1A28]
 * 000000014027333B: lea     rbx, [rax+rcx]
 * 000000014027333F: mov     r9d, r15d
 * 0000000140273342: sub     r9d, ecx
 * 0000000140273345: lea     rdx, [rbp+1A50h+var_17A0]
 * 000000014027334C: mov     r11d, r9d
 * 000000014027334F: lea     r8, [rbp+1A50h+var_1668]
 * 0000000140273356: add     r11, rbx
 * 0000000140273359: xor     eax, eax
 * 000000014027335B: mov     r10d, eax
 * 000000014027335E: mov     rcx, [r8]
 * 0000000140273361: mov     eax, [rdx]
 * 0000000140273363: add     rax, rcx
 * 0000000140273366: cmp     rbx, rax
 * 0000000140273369: jnb     short loc_140273374
 * 000000014027336B: cmp     r11, rcx
 * 000000014027336E: ja      loc_1402734C0
 * 0000000140273374: mov     eax, 4
 * 0000000140273379: inc     r10d
 * 000000014027337C: add     rdx, rax
 * 000000014027337F: add     r8, 8
 * 0000000140273383: cmp     r10d, eax
 * 0000000140273386: jb      short loc_14027335E
 * 0000000140273388: cmp     r9d, eax
 * 000000014027338B: jb      loc_1402734C0
 * 0000000140273391: mov     r12, [rbp+1A50h+var_19B0]
 * 0000000140273398: mov     r10, rbx
 * 000000014027339B: mov     rax, rbx
 * 000000014027339E: add     [r12+628h], r9d
 * 00000001402733A6: mov     r15d, [r12+614h]
 * 00000001402733AE: mov     r12, [r12+618h]
 * 00000001402733B6: cmp     rbx, r11
 * 00000001402733B9: jnb     short loc_1402733C7
 * 00000001402733BB: prefetchnta byte ptr [rax]
 * 00000001402733BE: add     rax, 40h ; '@'
 * 00000001402733C2: cmp     rax, r11
 * 00000001402733C5: jb      short loc_1402733BB
 * 00000001402733C7: mov     r11d, r9d
 * 00000001402733CA: mov     r8, r12
 * 00000001402733CD: shr     r11d, 7
 * 00000001402733D1: test    r11d, r11d
 * 00000001402733D4: jz      short loc_140273448
 * 00000001402733D6: mov     rdi, 7010008004002001h
 * 00000001402733E0: mov     edx, 8
 * 00000001402733E5: lea     esi, [rdx-7]
 * 00000001402733E8: mov     rax, [r10]
 * 00000001402733EB: mov     ecx, r15d
 * 00000001402733EE: xor     rax, r8
 * 00000001402733F1: mov     r8, [r10+8]
 * 00000001402733F5: rol     rax, cl
 * 00000001402733F8: add     r10, 10h
 * 00000001402733FC: xor     r8, rax
 * 00000001402733FF: rol     r8, cl
 * 0000000140273402: sub     rdx, rsi
 * 0000000140273405: jnz     short loc_1402733E8
 * 0000000140273407: mov     rcx, r10
 * 000000014027340A: sub     rcx, rbx
 * 000000014027340D: xor     rcx, r12
 * 0000000140273410: mov     rax, rcx
 * 0000000140273413: rol     rax, 11h
 * 0000000140273417: xor     rcx, rax
 * 000000014027341A: mov     rax, rdi
 * 000000014027341D: mul     rcx
 * 0000000140273420: xor     eax, edx
 * 0000000140273422: mov     [rbp+1A50h+var_1110], rdx
 * 0000000140273429: xor     r15d, eax
 * 000000014027342C: mov     rax, rsi
 * 000000014027342F: and     r15d, 3Fh
 * 0000000140273433: cmovz   r15d, eax
 * 0000000140273437: add     r11d, 0FFFFFFFFh
 * 000000014027343B: jnz     short loc_1402733E0
 * 000000014027343D: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140273441: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140273448: and     r9d, 7Fh
 * 000000014027344C: mov     r11d, 1
 * 0000000140273452: cmp     r9d, 8
 * 0000000140273456: jb      short loc_140273475
 * 0000000140273458: mov     edx, r9d
 * 000000014027345B: shr     rdx, 3
 * 000000014027345F: xor     r8, [r10]
 * 0000000140273462: mov     ecx, r15d
 * 0000000140273465: rol     r8, cl
 * 0000000140273468: add     r10, 8
 * 000000014027346C: add     r9d, 0FFFFFFF8h
 * 0000000140273470: sub     rdx, r11
 * 0000000140273473: jnz     short loc_14027345F
 * 0000000140273475: test    r9d, r9d
 * 0000000140273478: jz      short loc_140273490
 * 000000014027347A: movzx   eax, byte ptr [r10]
 * 000000014027347E: mov     ecx, r15d
 * 0000000140273481: xor     r8, rax
 * 0000000140273484: add     r10, r11
 * 0000000140273487: rol     r8, cl
 * 000000014027348A: add     r9d, 0FFFFFFFFh
 * 000000014027348E: jnz     short loc_14027347A
 * 0000000140273490: mov     rax, r8
 * 0000000140273493: shr     rax, 7
 * 0000000140273497: xor     r10d, r10d
 * 000000014027349A: jmp     short loc_1402734A3
 * 000000014027349C: xor     r8b, al
 * 000000014027349F: shr     rax, 7
 * 00000001402734A3: test    rax, rax
 * 00000001402734A6: jnz     short loc_14027349C
 * 00000001402734A8: mov     rcx, [rbp+1A50h+var_1980]
 * 00000001402734AF: and     r8b, 7Fh
 * 00000001402734B3: mov     r15d, [rbp+1A50h+var_1A50]
 * 00000001402734B7: mov     r12, [rbp+1A50h+var_19F0]
 * 00000001402734BB: mov     [rcx], r8b
 * 00000001402734BE: jmp     short loc_1402734CD
 * 00000001402734C0: mov     rcx, [rbp+1A50h+var_1980]
 * 00000001402734C7: xor     r10d, r10d
 * 00000001402734CA: mov     byte ptr [rcx], 80h
 * 00000001402734CD: mov     r11d, [rbp+1A50h+var_19E8]
 * 00000001402734D1: mov     r8d, 1
 * 00000001402734D7: mov     ecx, [rbp+1A50h+var_1A18]
 * 00000001402734DA: mov     rax, [rbp+1A50h+var_1980]
 * 00000001402734E1: mov     rdx, [rbp+1A50h+var_19B8]
 * 00000001402734E8: mov     r9, [rbp+1A50h+var_19E0]
 * 00000001402734EC: mov     ebx, 0Ch
 * 00000001402734F1: add     rax, r8
 * 00000001402734F4: add     r9, rbx
 * 00000001402734F7: mov     [rbp+1A50h+var_1980], rax
 * 00000001402734FE: add     r12, rbx
 * 0000000140273501: mov     [rbp+1A50h+var_19E0], r9
 * 0000000140273505: mov     [rbp+1A50h+var_19F0], r12
 * 0000000140273509: cmp     r12, rdx
 * 000000014027350C: jz      short loc_140273513
 * 000000014027350E: mov     r13d, [r12+4]
 * 0000000140273513: cmp     r13d, ecx
 * 0000000140273516: jbe     loc_1402732AF
 * 000000014027351C: mov     r13, [rbp+1A50h+var_1A10]
 * 0000000140273520: test    r11d, r11d
 * 0000000140273523: jnz     loc_1402736A0
 * 0000000140273529: cmp     r15d, ecx
 * 000000014027352C: jz      loc_1402736A0
 * 0000000140273532: mov     [r13+0Ch], r15d
 * 0000000140273536: lea     rdx, [rbp+1A50h+var_1668]
 * 000000014027353D: mov     [r13+10h], ecx
 * 0000000140273541: mov     r9d, ecx
 * 0000000140273544: mov     eax, [r13+0Ch]
 * 0000000140273548: lea     rcx, [rbp+1A50h+var_17A0]
 * 000000014027354F: mov     ebx, eax
 * 0000000140273551: sub     r9d, eax
 * 0000000140273554: add     rbx, [rbp+1A50h+var_1A28]
 * 0000000140273558: mov     r11d, r9d
 * 000000014027355B: add     r11, rbx
 * 000000014027355E: xor     eax, eax
 * 0000000140273560: mov     r10d, eax
 * 0000000140273563: mov     r8, [rdx]
 * 0000000140273566: mov     eax, [rcx]
 * 0000000140273568: add     rax, r8
 * 000000014027356B: cmp     rbx, rax
 * 000000014027356E: jnb     short loc_140273579
 * 0000000140273570: cmp     r11, r8
 * 0000000140273573: ja      loc_1402736A0
 * 0000000140273579: mov     eax, 4
 * 000000014027357E: inc     r10d
 * 0000000140273581: add     rcx, rax
 * 0000000140273584: add     rdx, 8
 * 0000000140273588: cmp     r10d, eax
 * 000000014027358B: jb      short loc_140273563
 * 000000014027358D: mov     rax, [rbp+1A50h+var_19B0]
 * 0000000140273594: mov     r10, rbx
 * 0000000140273597: add     [rax+628h], r9d
 * 000000014027359E: mov     r15d, [rax+614h]
 * 00000001402735A5: mov     r12, [rax+618h]
 * 00000001402735AC: mov     rax, rbx
 * 00000001402735AF: cmp     rbx, r11
 * 00000001402735B2: jnb     short loc_1402735C0
 * 00000001402735B4: prefetchnta byte ptr [rax]
 * 00000001402735B7: add     rax, 40h ; '@'
 * 00000001402735BB: cmp     rax, r11
 * 00000001402735BE: jb      short loc_1402735B4
 * 00000001402735C0: mov     r11d, r9d
 * 00000001402735C3: mov     r8, r12
 * 00000001402735C6: shr     r11d, 7
 * 00000001402735CA: test    r11d, r11d
 * 00000001402735CD: jz      short loc_14027363E
 * 00000001402735CF: mov     r13, 7010008004002001h
 * 00000001402735D9: mov     edx, 8
 * 00000001402735DE: lea     esi, [rdx-7]
 * 00000001402735E1: mov     rax, [r10]
 * 00000001402735E4: mov     ecx, r15d
 * 00000001402735E7: xor     rax, r8
 * 00000001402735EA: mov     r8, [r10+8]
 * 00000001402735EE: rol     rax, cl
 * 00000001402735F1: add     r10, 10h
 * 00000001402735F5: xor     r8, rax
 * 00000001402735F8: rol     r8, cl
 * 00000001402735FB: sub     rdx, rsi
 * 00000001402735FE: jnz     short loc_1402735E1
 * 0000000140273600: mov     rcx, r10
 * 0000000140273603: sub     rcx, rbx
 * 0000000140273606: xor     rcx, r12
 * 0000000140273609: mov     rax, rcx
 * 000000014027360C: rol     rax, 11h
 * 0000000140273610: xor     rcx, rax
 * 0000000140273613: mov     rax, r13
 * 0000000140273616: mul     rcx
 * 0000000140273619: xor     eax, edx
 * 000000014027361B: mov     [rbp+1A50h+var_1108], rdx
 * 0000000140273622: xor     r15d, eax
 * 0000000140273625: mov     rax, rsi
 * 0000000140273628: and     r15d, 3Fh
 * 000000014027362C: cmovz   r15d, eax
 * 0000000140273630: add     r11d, 0FFFFFFFFh
 * 0000000140273634: jnz     short loc_1402735D9
 * 0000000140273636: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027363A: mov     r13, [rbp+1A50h+var_1A10]
 * 000000014027363E: and     r9d, 7Fh
 * 0000000140273642: mov     r11d, 1
 * 0000000140273648: cmp     r9d, 8
 * 000000014027364C: jb      short loc_14027366B
 * 000000014027364E: mov     edx, r9d
 * 0000000140273651: shr     rdx, 3
 * 0000000140273655: xor     r8, [r10]
 * 0000000140273658: mov     ecx, r15d
 * 000000014027365B: rol     r8, cl
 * 000000014027365E: add     r10, 8
 * 0000000140273662: add     r9d, 0FFFFFFF8h
 * 0000000140273666: sub     rdx, r11
 * 0000000140273669: jnz     short loc_140273655
 * 000000014027366B: test    r9d, r9d
 * 000000014027366E: jz      short loc_140273686
 * 0000000140273670: movzx   eax, byte ptr [r10]
 * 0000000140273674: mov     ecx, r15d
 * 0000000140273677: xor     r8, rax
 * 000000014027367A: add     r10, r11
 * 000000014027367D: rol     r8, cl
 * 0000000140273680: add     r9d, 0FFFFFFFFh
 * 0000000140273684: jnz     short loc_140273670
 * 0000000140273686: mov     rax, r8
 * 0000000140273689: jmp     short loc_14027368E
 * 000000014027368B: xor     r8d, eax
 * 000000014027368E: shr     rax, 1Fh
 * 0000000140273692: test    rax, rax
 * 0000000140273695: jnz     short loc_14027368B
 * 0000000140273697: btr     r8d, 1Fh
 * 000000014027369C: mov     [r13+14h], r8d
 * 00000001402736A0: mov     rdx, [rbp+1A50h+var_19B8]
 * 00000001402736A7: mov     r8, [rbp+1A50h+var_19E0]
 * 00000001402736AB: cmp     r8, rdx
 * 00000001402736AE: jz      short loc_1402736FB
 * 00000001402736B0: mov     eax, [r8]
 * 00000001402736B3: mov     ecx, [r8+4]
 * 00000001402736B7: cmp     eax, [rbp+1A50h+var_19A8]
 * 00000001402736BD: jb      short loc_1402736FB
 * 00000001402736BF: cmp     ecx, [rbp+1A50h+var_1A18]
 * 00000001402736C2: ja      short loc_1402736FB
 * 00000001402736C4: mov     r9, [rbp+1A50h+var_19F0]
 * 00000001402736C8: cmp     r9, rdx
 * 00000001402736CB: jz      short loc_1402736EF
 * 00000001402736CD: mov     rax, [rbp+1A50h+var_1980]
 * 00000001402736D4: mov     byte ptr [rax], 80h
 * 00000001402736D7: inc     rax
 * 00000001402736DA: mov     [rbp+1A50h+var_1980], rax
 * 00000001402736E1: mov     eax, 0Ch
 * 00000001402736E6: add     r9, rax
 * 00000001402736E9: mov     [rbp+1A50h+var_19F0], r9
 * 00000001402736ED: jmp     short loc_1402736F4
 * 00000001402736EF: mov     eax, 0Ch
 * 00000001402736F4: add     r8, rax
 * 00000001402736F7: mov     [rbp+1A50h+var_19E0], r8
 * 00000001402736FB: mov     r15, [rbp+1A50h+var_1A38]
 * 00000001402736FF: add     r13, 18h
 * 0000000140273703: mov     rbx, [rbp+1A50h+var_19B0]
 * 000000014027370A: add     r15, 28h ; '('
 * 000000014027370E: mov     r12d, 1
 * 0000000140273714: mov     r8, [rbp+1A50h+var_1A28]
 * 0000000140273718: mov     [rbp+1A50h+var_1A10], r13
 * 000000014027371C: mov     [rbp+1A50h+var_1A38], r15
 * 0000000140273720: cmp     r13, [rbp+1A50h+var_1A30]
 * 0000000140273724: jnz     loc_140272E85
 * 000000014027372A: xor     eax, eax
 * 000000014027372C: mov     [rbp+1A50h+var_1960], r14
 * 0000000140273733: mov     ecx, eax
 * 0000000140273735: mov     r13, r14
 * 0000000140273738: jmp     loc_140271F9F
 * 000000014027373D: mov     rbx, r12
 * 0000000140273740: mov     [rbp+1A50h+var_1994], eax
 * 0000000140273746: mov     r12d, eax
 * 0000000140273749: mov     r15d, eax
 * 000000014027374C: mov     r13, rax
 * 000000014027374F: mov     [rbp+1A50h+var_18D0], eax
 * 0000000140273755: mov     rax, [rsi+2F0h]
 * 000000014027375C: lea     r8, [rbp+1A50h+var_1808]
 * 0000000140273763: lea     rdx, [rbp+1A50h+var_18D0]
 * 000000014027376A: mov     ecx, r15d
 * 000000014027376D: call    KeGuardDispatchICall
 * 0000000140273772: test    eax, eax
 * 0000000140273774: jz      loc_1402738AF
 * 000000014027377A: mov     rax, [rsi+2D0h]
 * 0000000140273781: mov     rcx, [rbp+1A50h+var_1808]
 * 0000000140273788: call    KeGuardDispatchICall
 * 000000014027378D: mov     r14, rax
 * 0000000140273790: test    rax, rax
 * 0000000140273793: jz      short loc_140273755
 * 0000000140273795: mov     rax, [rsi+2D8h]
 * 000000014027379C: mov     edi, 1
 * 00000001402737A1: add     r12d, edi
 * 00000001402737A4: mov     rcx, r14
 * 00000001402737A7: mov     [rbp+1A50h+var_1994], r12d
 * 00000001402737AE: call    KeGuardDispatchICall
 * 00000001402737B3: mov     r12, rax
 * 00000001402737B6: lea     rdx, [rbp+1A50h+var_1100]
 * 00000001402737BD: mov     rax, [rsi+208h]
 * 00000001402737C4: mov     rcx, r12
 * 00000001402737C7: call    KeGuardDispatchICall
 * 00000001402737CC: test    rax, rax
 * 00000001402737CF: jz      short loc_1402737F3
 * 00000001402737D1: mov     rax, [rsi+2E0h]
 * 00000001402737D8: mov     rdx, r14
 * 00000001402737DB: mov     rcx, [rbp+1A50h+var_1808]
 * 00000001402737E2: call    KeGuardDispatchICall
 * 00000001402737E7: mov     r12d, [rbp+1A50h+var_1994]
 * 00000001402737EE: jmp     loc_140273755
 * 00000001402737F3: test    dword ptr [rsi+748h], 40000000h
 * 00000001402737FD: jz      short loc_14027383F
 * 00000001402737FF: mov     rcx, [rsi+7F0h]
 * 0000000140273806: mov     edx, 30h ; '0'
 * 000000014027380B: lea     r8d, [rdx-2Ah]
 * 000000014027380F: mov     rax, [rbx]
 * 0000000140273812: add     edx, 0FFFFFFF8h
 * 0000000140273815: mov     [rcx], rax
 * 0000000140273818: add     rbx, 8
 * 000000014027381C: add     rcx, 8
 * 0000000140273820: sub     r8, rdi
 * 0000000140273823: jnz     short loc_14027380F
 * 0000000140273825: test    edx, edx
 * 0000000140273827: jz      short loc_140273838
 * 0000000140273829: mov     al, [rbx]
 * 000000014027382B: add     rbx, rdi
 * 000000014027382E: mov     [rcx], al
 * 0000000140273830: add     rcx, rdi
 * 0000000140273833: add     edx, 0FFFFFFFFh
 * 0000000140273836: jnz     short loc_140273829
 * 0000000140273838: mov     rbx, [rsi+7F0h]
 * 000000014027383F: mov     [rbx+18h], r12
 * 0000000140273843: mov     rax, [rsi+510h]
 * 000000014027384A: mov     [rax], rbx
 * 000000014027384D: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140273854: mov     rax, [rsi+510h]
 * 000000014027385B: mov     [rax+8], r12
 * 000000014027385F: mov     dword ptr [rax+14h], 1000h
 * 0000000140273866: xor     eax, eax
 * 0000000140273868: cmp     [rsi+6C0h], eax
 * 000000014027386E: jnz     short loc_1402738AF
 * 0000000140273870: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027387A: add     rax, rsi
 * 000000014027387D: mov     [rsi+6C8h], rax
 * 0000000140273884: mov     rax, 0B3B74BDEE4453415h
 * 000000014027388E: add     rax, rbx
 * 0000000140273891: mov     [rsi+6D0h], rax
 * 0000000140273898: movsxd  rax, dword ptr [rbx]
 * 000000014027389B: mov     [rsi+6D8h], rax
 * 00000001402738A2: mov     [rsi+6E0h], r13
 * 00000001402738A9: mov     [rsi+6C0h], edi
 * 00000001402738AF: mov     r12d, [rbp+1A50h+var_1994]
 * 00000001402738B6: mov     eax, 1
 * 00000001402738BB: add     r15d, eax
 * 00000001402738BE: add     r13, rax
 * 00000001402738C1: mov     eax, 3
 * 00000001402738C6: cmp     r15d, eax
 * 00000001402738C9: mov     eax, 0
 * 00000001402738CE: jb      loc_14027374F
 * 00000001402738D4: mov     r13d, r12d
 * 00000001402738D7: jmp     loc_140273B5E
 * 00000001402738DC: mov     rbx, r12
 * 00000001402738DF: mov     [rbp+1A50h+var_1750], rax
 * 00000001402738E6: mov     r13d, eax
 * 00000001402738E9: mov     r15, cr8
 * 00000001402738ED: mov     [rbp+1A50h+var_1A30], r15
 * 00000001402738F1: mov     cr8, rdx
 * 00000001402738F5: mov     rax, [rsi+300h]
 * 00000001402738FC: lea     rcx, [rbp+1A50h+var_1750]
 * 0000000140273903: call    KeGuardDispatchICall
 * 0000000140273908: mov     r14, rax
 * 000000014027390B: test    rax, rax
 * 000000014027390E: jz      loc_140273A23
 * 0000000140273914: mov     edi, 1
 * 0000000140273919: mov     rax, [rsi+208h]
 * 0000000140273920: lea     rdx, [rbp+1A50h+var_10F8]
 * 0000000140273927: mov     rcx, r14
 * 000000014027392A: add     r13d, edi
 * 000000014027392D: call    KeGuardDispatchICall
 * 0000000140273932: test    rax, rax
 * 0000000140273935: jnz     loc_1402739F9
 * 000000014027393B: test    dword ptr [rsi+748h], 40000000h
 * 0000000140273945: jz      short loc_140273985
 * 0000000140273947: mov     rcx, [rsi+7F0h]
 * 000000014027394E: lea     edx, [rax+30h]
 * 0000000140273951: lea     r8d, [rax+6]
 * 0000000140273955: mov     rax, [rbx]
 * 0000000140273958: add     edx, 0FFFFFFF8h
 * 000000014027395B: mov     [rcx], rax
 * 000000014027395E: add     rbx, 8
 * 0000000140273962: add     rcx, 8
 * 0000000140273966: sub     r8, rdi
 * 0000000140273969: jnz     short loc_140273955
 * 000000014027396B: test    edx, edx
 * 000000014027396D: jz      short loc_14027397E
 * 000000014027396F: mov     al, [rbx]
 * 0000000140273971: add     rbx, rdi
 * 0000000140273974: mov     [rcx], al
 * 0000000140273976: add     rcx, rdi
 * 0000000140273979: add     edx, 0FFFFFFFFh
 * 000000014027397C: jnz     short loc_14027396F
 * 000000014027397E: mov     rbx, [rsi+7F0h]
 * 0000000140273985: mov     [rbx+18h], r14
 * 0000000140273989: mov     rax, [rsi+510h]
 * 0000000140273990: mov     [rax], rbx
 * 0000000140273993: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014027399A: mov     rax, [rsi+510h]
 * 00000001402739A1: mov     [rax+8], r14
 * 00000001402739A5: mov     dword ptr [rax+14h], 1000h
 * 00000001402739AC: xor     eax, eax
 * 00000001402739AE: cmp     [rsi+6C0h], eax
 * 00000001402739B4: jnz     short loc_1402739F9
 * 00000001402739B6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402739C0: add     rax, rsi
 * 00000001402739C3: mov     [rsi+6C8h], rax
 * 00000001402739CA: mov     rax, 0B3B74BDEE4453415h
 * 00000001402739D4: add     rax, rbx
 * 00000001402739D7: mov     [rsi+6D0h], rax
 * 00000001402739DE: movsxd  rax, dword ptr [rbx]
 * 00000001402739E1: mov     [rsi+6D8h], rax
 * 00000001402739E8: mov     qword ptr [rsi+6E0h], 4
 * 00000001402739F3: mov     [rsi+6C0h], edi
 * 00000001402739F9: mov     rax, [rsi+300h]
 * 0000000140273A00: lea     rcx, [rbp+1A50h+var_1750]
 * 0000000140273A07: call    KeGuardDispatchICall
 * 0000000140273A0C: mov     r14, rax
 * 0000000140273A0F: test    rax, rax
 * 0000000140273A12: jnz     loc_140273919
 * 0000000140273A18: mov     r15, [rbp+1A50h+var_1A30]
 * 0000000140273A1C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140273A23: movzx   eax, r15b
 * 0000000140273A27: mov     cr8, rax
 * 0000000140273A2B: jmp     loc_140273B65
 * 0000000140273A30: mov     [rbp+1A50h+var_1748], rax
 * 0000000140273A37: lea     rcx, [rbp+1A50h+var_1748]
 * 0000000140273A3E: mov     r13d, eax
 * 0000000140273A41: mov     rbx, r12
 * 0000000140273A44: mov     rax, [rsi+2F8h]
 * 0000000140273A4B: call    KeGuardDispatchICall
 * 0000000140273A50: mov     r14, rax
 * 0000000140273A53: test    rax, rax
 * 0000000140273A56: jz      loc_140273B65
 * 0000000140273A5C: mov     edi, 1
 * 0000000140273A61: mov     rax, [rsi+208h]
 * 0000000140273A68: lea     rdx, [rbp+1A50h+var_10F0]
 * 0000000140273A6F: mov     rcx, r14
 * 0000000140273A72: add     r13d, edi
 * 0000000140273A75: call    KeGuardDispatchICall
 * 0000000140273A7A: test    rax, rax
 * 0000000140273A7D: jnz     loc_140273B3F
 * 0000000140273A83: test    [rsi+748h], r15d
 * 0000000140273A8A: jz      short loc_140273ACA
 * 0000000140273A8C: mov     rcx, [rsi+7F0h]
 * 0000000140273A93: lea     edx, [rax+30h]
 * 0000000140273A96: lea     r8d, [rax+6]
 * 0000000140273A9A: mov     rax, [rbx]
 * 0000000140273A9D: add     edx, 0FFFFFFF8h
 * 0000000140273AA0: mov     [rcx], rax
 * 0000000140273AA3: add     rbx, 8
 * 0000000140273AA7: add     rcx, 8
 * 0000000140273AAB: sub     r8, rdi
 * 0000000140273AAE: jnz     short loc_140273A9A
 * 0000000140273AB0: test    edx, edx
 * 0000000140273AB2: jz      short loc_140273AC3
 * 0000000140273AB4: mov     al, [rbx]
 * 0000000140273AB6: add     rbx, rdi
 * 0000000140273AB9: mov     [rcx], al
 * 0000000140273ABB: add     rcx, rdi
 * 0000000140273ABE: add     edx, 0FFFFFFFFh
 * 0000000140273AC1: jnz     short loc_140273AB4
 * 0000000140273AC3: mov     rbx, [rsi+7F0h]
 * 0000000140273ACA: mov     [rbx+18h], r14
 * 0000000140273ACE: mov     rax, [rsi+510h]
 * 0000000140273AD5: mov     [rax], rbx
 * 0000000140273AD8: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140273ADF: mov     rax, [rsi+510h]
 * 0000000140273AE6: mov     [rax+8], r14
 * 0000000140273AEA: mov     dword ptr [rax+14h], 1000h
 * 0000000140273AF1: xor     eax, eax
 * 0000000140273AF3: cmp     [rsi+6C0h], eax
 * 0000000140273AF9: jnz     short loc_140273B3F
 * 0000000140273AFB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140273B05: add     rax, rsi
 * 0000000140273B08: mov     [rsi+6C8h], rax
 * 0000000140273B0F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140273B19: add     rax, rbx
 * 0000000140273B1C: mov     [rsi+6D0h], rax
 * 0000000140273B23: movsxd  rax, dword ptr [rbx]
 * 0000000140273B26: mov     [rsi+6D8h], rax
 * 0000000140273B2D: mov     eax, 3
 * 0000000140273B32: mov     [rsi+6E0h], rax
 * 0000000140273B39: mov     [rsi+6C0h], edi
 * 0000000140273B3F: mov     rax, [rsi+2F8h]
 * 0000000140273B46: lea     rcx, [rbp+1A50h+var_1748]
 * 0000000140273B4D: call    KeGuardDispatchICall
 * 0000000140273B52: mov     r14, rax
 * 0000000140273B55: test    rax, rax
 * 0000000140273B58: jnz     loc_140273A61
 * 0000000140273B5E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140273B65: mov     ebx, 1
 * 0000000140273B6A: shl     r13d, 0Fh
 * 0000000140273B6E: add     [rsi+628h], r13d
 * 0000000140273B75: add     [rsi+624h], ebx
 * 0000000140273B7B: mov     eax, [rsi+62Ch]
 * 0000000140273B81: cmp     [rsi+628h], eax
 * 0000000140273B87: jge     short loc_140273BA4
 * 0000000140273B89: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140273B8D: mov     r10d, 5
 * 0000000140273B93: mov     r15d, 40000000h
 * 0000000140273B99: jmp     loc_140270EE6
 * 0000000140273B9E: mov     [rsi+624h], eax
 * 0000000140273BA4: mov     [rbp+1A50h+var_1A20], rsi
 * 0000000140273BA8: jmp     loc_140279285
 * 0000000140273BAD: mov     edx, [r12+2Ch]
 * 0000000140273BB2: xor     eax, eax
 * 0000000140273BB4: mov     r14d, [r12+28h]
 * 0000000140273BB9: cmp     ecx, 26h ; '&'
 * 0000000140273BBC: mov     ebx, eax
 * 0000000140273BBE: lea     rcx, [rbp+1A50h+var_1200]
 * 0000000140273BC5: mov     rax, [rsi+1A0h]
 * 0000000140273BCC: setz    bl
 * 0000000140273BCF: call    KeGuardDispatchICall
 * 0000000140273BD4: mov     rax, [rsi+1D0h]
 * 0000000140273BDB: lea     rdx, [rbp+1A50h+var_11F0]
 * 0000000140273BE2: lea     rcx, [rbp+1A50h+var_1200]
 * 0000000140273BE9: call    KeGuardDispatchICall
 * 0000000140273BEE: test    ebx, ebx
 * 0000000140273BF0: jnz     short loc_140273C01
 * 0000000140273BF2: test    r14d, r14d
 * 0000000140273BF5: jz      short loc_140273BFC
 * 0000000140273BF7: mov     rbx, cr4
 * 0000000140273BFA: jmp     short loc_140273C10
 * 0000000140273BFC: mov     rbx, cr0
 * 0000000140273BFF: jmp     short loc_140273C10
 * 0000000140273C01: xor     ecx, ecx
 * 0000000140273C03: xgetbv
 * 0000000140273C06: shl     rdx, 20h
 * 0000000140273C0A: or      rdx, rax
 * 0000000140273C0D: mov     rbx, rdx
 * 0000000140273C10: mov     rax, [rsi+198h]
 * 0000000140273C17: lea     rcx, [rbp+1A50h+var_11F0]
 * 0000000140273C1E: call    KeGuardDispatchICall
 * 0000000140273C23: mov     r8, [r12+18h]
 * 0000000140273C28: mov     rdx, [r12+20h]
 * 0000000140273C2D: and     r8, rbx
 * 0000000140273C30: cmp     r8, rdx
 * 0000000140273C33: jz      loc_14027031B
 * 0000000140273C39: mov     eax, [r12+28h]
 * 0000000140273C3E: mov     ecx, [r12+2Ch]
 * 0000000140273C43: shl     rcx, 20h
 * 0000000140273C47: or      rcx, rax
 * 0000000140273C4A: xor     eax, eax
 * 0000000140273C4C: cmp     [rsi+6C0h], eax
 * 0000000140273C52: jnz     loc_14027031B
 * 0000000140273C58: mov     rax, [rsi+510h]
 * 0000000140273C5F: xor     rdx, r8
 * 0000000140273C62: mov     [rax+18h], rdx
 * 0000000140273C66: xor     eax, eax
 * 0000000140273C68: cmp     [rsi+6C0h], eax
 * 0000000140273C6E: jnz     loc_14027031B
 * 0000000140273C74: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140273C7E: add     rax, rsi
 * 0000000140273C81: mov     [rsi+6C8h], rax
 * 0000000140273C88: mov     rax, 0B3B74BDEE4453415h
 * 0000000140273C92: add     rax, r12
 * 0000000140273C95: mov     [rsi+6D0h], rax
 * 0000000140273C9C: movsxd  rax, dword ptr [r12]
 * 0000000140273CA0: jmp     loc_140270AE8
 * 0000000140273CA5: cmp     dword ptr [rsi+718h], 9
 * 0000000140273CAC: jnz     loc_140279285
 * 0000000140273CB2: add     dword ptr [rsi+628h], 100h
 * 0000000140273CBC: mov     r14, [rsi+508h]
 * 0000000140273CC3: mov     rax, [rsi+2D0h]
 * 0000000140273CCA: mov     rcx, r14
 * 0000000140273CCD: call    KeGuardDispatchICall
 * 0000000140273CD2: mov     rbx, rax
 * 0000000140273CD5: test    rax, rax
 * 0000000140273CD8: jz      loc_14027031B
 * 0000000140273CDE: mov     rax, [rsi+2D8h]
 * 0000000140273CE5: mov     rcx, rbx
 * 0000000140273CE8: call    KeGuardDispatchICall
 * 0000000140273CED: mov     rcx, rax
 * 0000000140273CF0: mov     rax, [r12+18h]
 * 0000000140273CF5: test    rax, rax
 * 0000000140273CF8: jz      short loc_140273D58
 * 0000000140273CFA: cmp     rax, rcx
 * 0000000140273CFD: jz      loc_140273DCF
 * 0000000140273D03: xor     eax, eax
 * 0000000140273D05: cmp     [rsi+6C0h], eax
 * 0000000140273D0B: jnz     loc_140273DCF
 * 0000000140273D11: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140273D1B: add     rax, rsi
 * 0000000140273D1E: mov     [rsi+6C8h], rax
 * 0000000140273D25: mov     rax, 0B3B74BDEE4453415h
 * 0000000140273D2F: add     rax, r12
 * 0000000140273D32: mov     [rsi+6D0h], rax
 * 0000000140273D39: movsxd  rax, dword ptr [r12]
 * 0000000140273D3D: mov     [rsi+6D8h], rax
 * 0000000140273D44: mov     eax, 1
 * 0000000140273D49: mov     [rsi+6E0h], rcx
 * 0000000140273D50: mov     [rsi+6C0h], eax
 * 0000000140273D56: jmp     short loc_140273DCF
 * 0000000140273D58: mov     eax, [rsi+734h]
 * 0000000140273D5E: mov     rdx, [rsi+738h]
 * 0000000140273D65: test    rax, rax
 * 0000000140273D68: jz      short loc_140273D7B
 * 0000000140273D6A: lea     r8, [rax-1]
 * 0000000140273D6E: add     r8, rdx
 * 0000000140273D71: cmp     rcx, rdx
 * 0000000140273D74: jb      short loc_140273D7B
 * 0000000140273D76: cmp     rcx, r8
 * 0000000140273D79: jbe     short loc_140273DCA
 * 0000000140273D7B: xor     eax, eax
 * 0000000140273D7D: cmp     [rsi+6C0h], eax
 * 0000000140273D83: jnz     short loc_140273DCA
 * 0000000140273D85: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140273D8F: add     rax, rsi
 * 0000000140273D92: mov     [rsi+6C8h], rax
 * 0000000140273D99: mov     rax, 0B3B74BDEE4453415h
 * 0000000140273DA3: add     rax, r12
 * 0000000140273DA6: mov     [rsi+6D0h], rax
 * 0000000140273DAD: movsxd  rax, dword ptr [r12]
 * 0000000140273DB1: mov     [rsi+6D8h], rax
 * 0000000140273DB8: mov     eax, 1
 * 0000000140273DBD: mov     [rsi+6E0h], rcx
 * 0000000140273DC4: mov     [rsi+6C0h], eax
 * 0000000140273DCA: mov     [r12+18h], rcx
 * 0000000140273DCF: mov     rax, [rsi+2E0h]
 * 0000000140273DD6: mov     rdx, rbx
 * 0000000140273DD9: mov     rcx, r14
 * 0000000140273DDC: call    KeGuardDispatchICall
 * 0000000140273DE1: jmp     loc_14027031B
 * 0000000140273DE6: jnz     short loc_140273E28
 * 0000000140273DE8: xor     eax, eax
 * 0000000140273DEA: cmp     [rsi+740h], rax
 * 0000000140273DF1: jz      loc_140270C92
 * 0000000140273DF7: mov     ecx, [rsi+74Ch]
 * 0000000140273DFD: mov     edx, ecx
 * 0000000140273DFF: shr     edx, 2
 * 0000000140273E02: and     edx, ebx
 * 0000000140273E04: jnz     loc_140270C92
 * 0000000140273E0A: cmp     [rsi+624h], eax
 * 0000000140273E10: jnz     loc_140273F23
 * 0000000140273E16: mov     eax, ecx
 * 0000000140273E18: shl     eax, 3
 * 0000000140273E1B: xor     eax, ecx
 * 0000000140273E1D: and     eax, 20h
 * 0000000140273E20: xor     eax, ecx
 * 0000000140273E22: mov     [rsi+74Ch], eax
 * 0000000140273E28: mov     r14, [r12+8]
 * 0000000140273E2D: mov     r8d, [r12+10h]
 * 0000000140273E32: mov     r9, r14
 * 0000000140273E35: add     [rsi+628h], r8d
 * 0000000140273E3C: mov     rax, r14
 * 0000000140273E3F: mov     r11d, [rsi+614h]
 * 0000000140273E46: mov     r15, [rsi+618h]
 * 0000000140273E4D: lea     rcx, [r14+r8]
 * 0000000140273E51: cmp     r14, rcx
 * 0000000140273E54: jnb     short loc_140273E62
 * 0000000140273E56: prefetchnta byte ptr [rax]
 * 0000000140273E59: add     rax, 40h ; '@'
 * 0000000140273E5D: cmp     rax, rcx
 * 0000000140273E60: jb      short loc_140273E56
 * 0000000140273E62: mov     r10d, r8d
 * 0000000140273E65: mov     rbx, r15
 * 0000000140273E68: shr     r10d, 7
 * 0000000140273E6C: mov     r13d, 1
 * 0000000140273E72: test    r10d, r10d
 * 0000000140273E75: jz      short loc_140273EDC
 * 0000000140273E77: mov     rsi, 7010008004002001h
 * 0000000140273E81: mov     edx, 8
 * 0000000140273E86: mov     rax, [r9]
 * 0000000140273E89: mov     ecx, r11d
 * 0000000140273E8C: xor     rax, rbx
 * 0000000140273E8F: mov     rbx, [r9+8]
 * 0000000140273E93: rol     rax, cl
 * 0000000140273E96: add     r9, 10h
 * 0000000140273E9A: xor     rbx, rax
 * 0000000140273E9D: rol     rbx, cl
 * 0000000140273EA0: sub     rdx, r13
 * 0000000140273EA3: jnz     short loc_140273E86
 * 0000000140273EA5: mov     rcx, r9
 * 0000000140273EA8: sub     rcx, r14
 * 0000000140273EAB: xor     rcx, r15
 * 0000000140273EAE: mov     rax, rcx
 * 0000000140273EB1: rol     rax, 11h
 * 0000000140273EB5: xor     rcx, rax
 * 0000000140273EB8: mov     rax, rsi
 * 0000000140273EBB: mul     rcx
 * 0000000140273EBE: xor     eax, edx
 * 0000000140273EC0: mov     [rbp+1A50h+var_10E8], rdx
 * 0000000140273EC7: xor     r11d, eax
 * 0000000140273ECA: and     r11d, 3Fh
 * 0000000140273ECE: cmovz   r11d, r13d
 * 0000000140273ED2: add     r10d, 0FFFFFFFFh
 * 0000000140273ED6: jnz     short loc_140273E81
 * 0000000140273ED8: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140273EDC: and     r8d, 7Fh
 * 0000000140273EE0: cmp     r8d, 8
 * 0000000140273EE4: jb      short loc_140273F03
 * 0000000140273EE6: mov     edx, r8d
 * 0000000140273EE9: shr     rdx, 3
 * 0000000140273EED: xor     rbx, [r9]
 * 0000000140273EF0: mov     ecx, r11d
 * 0000000140273EF3: rol     rbx, cl
 * 0000000140273EF6: add     r9, 8
 * 0000000140273EFA: add     r8d, 0FFFFFFF8h
 * 0000000140273EFE: sub     rdx, r13
 * 0000000140273F01: jnz     short loc_140273EED
 * 0000000140273F03: test    r8d, r8d
 * 0000000140273F06: jz      short loc_140273F1E
 * 0000000140273F08: movzx   eax, byte ptr [r9]
 * 0000000140273F0C: mov     ecx, r11d
 * 0000000140273F0F: xor     rbx, rax
 * 0000000140273F12: add     r9, r13
 * 0000000140273F15: rol     rbx, cl
 * 0000000140273F18: add     r8d, 0FFFFFFFFh
 * 0000000140273F1C: jnz     short loc_140273F08
 * 0000000140273F1E: mov     rax, rbx
 * 0000000140273F21: jmp     short loc_140273F3E
 * 0000000140273F23: shr     ecx, 5
 * 0000000140273F26: and     ecx, ebx
 * 0000000140273F28: cmp     edx, ecx
 * 0000000140273F2A: setz    al
 * 0000000140273F2D: test    eax, eax
 * 0000000140273F2F: jnz     loc_140273E28
 * 0000000140273F35: xor     eax, eax
 * 0000000140273F37: jmp     loc_140270C92
 * 0000000140273F3C: xor     ebx, eax
 * 0000000140273F3E: shr     rax, 1Fh
 * 0000000140273F42: test    rax, rax
 * 0000000140273F45: jnz     short loc_140273F3C
 * 0000000140273F47: btr     ebx, 1Fh
 * 0000000140273F4B: cmp     ebx, [r12+14h]
 * 0000000140273F50: jz      loc_14027409A
 * 0000000140273F56: lock or [rsp+0DA0h+var_DA0], eax
 * 0000000140273F5A: mov     eax, [r12+18h]
 * 0000000140273F5F: test    r13b, al
 * 0000000140273F62: jz      short loc_140273F75
 * 0000000140273F64: mov     rax, [rsi+500h]
 * 0000000140273F6B: mov     cl, [rax]
 * 0000000140273F6D: test    cl, cl
 * 0000000140273F6F: jnz     loc_14027409A
 * 0000000140273F75: mov     ecx, [r12+10h]
 * 0000000140273F7A: mov     rdx, [r12+8]
 * 0000000140273F7F: test    rcx, rcx
 * 0000000140273F82: jz      loc_140274029
 * 0000000140273F88: mov     eax, [rsi+74Ch]
 * 0000000140273F8E: test    al, 40h
 * 0000000140273F90: jz      loc_140274029
 * 0000000140273F96: mov     r15, cr8
 * 0000000140273F9A: mov     r14, rdx
 * 0000000140273F9D: lea     r13, [rcx-1]
 * 0000000140273FA1: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140273FA8: add     r13, rdx
 * 0000000140273FAB: or      r13, 0FFFh
 * 0000000140273FB2: lea     r12, [r14-1]
 * 0000000140273FB6: mov     eax, 2
 * 0000000140273FBB: mov     cr8, rax
 * 0000000140273FBF: mov     rax, [rsi+438h]
 * 0000000140273FC6: xor     edx, edx
 * 0000000140273FC8: mov     rcx, r14
 * 0000000140273FCB: call    KeGuardDispatchICall
 * 0000000140273FD0: cmp     eax, 0C000022Dh
 * 0000000140273FD5: jnz     short loc_140273FF2
 * 0000000140273FD7: mov     eax, 1
 * 0000000140273FDC: cmp     r15b, al
 * 0000000140273FDF: ja      short loc_140273FF6
 * 0000000140273FE1: movzx   eax, r15b
 * 0000000140273FE5: mov     cr8, rax
 * 0000000140273FE9: mov     al, [r14]
 * 0000000140273FEC: mov     rax, cr8
 * 0000000140273FF0: jmp     short loc_140273FB6
 * 0000000140273FF2: test    eax, eax
 * 0000000140273FF4: js      short loc_140274017
 * 0000000140273FF6: mov     eax, 1000h
 * 0000000140273FFB: add     r14, rax
 * 0000000140273FFE: add     r12, rax
 * 0000000140274001: cmp     r12, r13
 * 0000000140274004: jnz     short loc_140273FBF
 * 0000000140274006: movzx   eax, r15b
 * 000000014027400A: mov     cr8, rax
 * 000000014027400E: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140274012: jmp     loc_14027409A
 * 0000000140274017: movzx   eax, r15b
 * 000000014027401B: mov     cr8, rax
 * 000000014027401F: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140274023: mov     r13d, 1
 * 0000000140274029: mov     eax, [r12+14h]
 * 000000014027402E: xor     r14d, r14d
 * 0000000140274031: cmp     [rsi+6C0h], r14d
 * 0000000140274038: jnz     short loc_14027404A
 * 000000014027403A: mov     ecx, ebx
 * 000000014027403C: xor     rcx, rax
 * 000000014027403F: mov     rax, [rsi+510h]
 * 0000000140274046: mov     [rax+18h], rcx
 * 000000014027404A: mov     rcx, [r12+8]
 * 000000014027404F: xor     eax, eax
 * 0000000140274051: cmp     [rsi+6C0h], eax
 * 0000000140274057: jnz     short loc_14027409A
 * 0000000140274059: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274063: add     rax, rsi
 * 0000000140274066: mov     [rsi+6C8h], rax
 * 000000014027406D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274077: add     rax, r12
 * 000000014027407A: mov     [rsi+6D0h], rax
 * 0000000140274081: movsxd  rax, dword ptr [r12]
 * 0000000140274085: mov     [rsi+6D8h], rax
 * 000000014027408C: mov     [rsi+6E0h], rcx
 * 0000000140274093: mov     [rsi+6C0h], r13d
 * 000000014027409A: mov     r15d, 40000000h
 * 00000001402740A0: test    [rsi+748h], r15d
 * 00000001402740A7: jz      loc_14027031B
 * 00000001402740AD: mov     r8d, [r12+10h]
 * 00000001402740B2: test    r8d, r8d
 * 00000001402740B5: jz      loc_14027031B
 * 00000001402740BB: mov     rdx, [r12+8]
 * 00000001402740C0: lea     r9, [rbp+1A50h+var_11E0]
 * 00000001402740C7: mov     rcx, rsi
 * 00000001402740CA: call    sub_140175FBC
 * 00000001402740CF: mov     r8d, 10h
 * 00000001402740D5: lea     r9, [r12+1Ch]
 * 00000001402740DA: lea     r10, [rbp+1A50h+var_11E0]
 * 00000001402740E1: mov     rcx, [r10]
 * 00000001402740E4: add     r10, 8
 * 00000001402740E8: mov     rax, [r9]
 * 00000001402740EB: add     r9, 8
 * 00000001402740EF: cmp     rcx, rax
 * 00000001402740F2: jnz     short loc_14027412B
 * 00000001402740F4: add     r8d, 0FFFFFFF8h
 * 00000001402740F8: cmp     r8d, 8
 * 00000001402740FC: jnb     short loc_1402740E1
 * 00000001402740FE: test    r8d, r8d
 * 0000000140274101: jz      loc_140274254
 * 0000000140274107: mov     r11d, 1
 * 000000014027410D: movzx   edx, byte ptr [r10]
 * 0000000140274111: add     r10, r11
 * 0000000140274114: movzx   eax, byte ptr [r9]
 * 0000000140274118: add     r9, r11
 * 000000014027411B: cmp     rdx, rax
 * 000000014027411E: jnz     short loc_140274131
 * 0000000140274120: add     r8d, 0FFFFFFFFh
 * 0000000140274124: jnz     short loc_14027410D
 * 0000000140274126: jmp     loc_140274254
 * 000000014027412B: mov     r11d, 1
 * 0000000140274131: xor     eax, eax
 * 0000000140274133: lock or [rsp+0DA0h+var_DA0], eax
 * 0000000140274137: mov     eax, [r12+18h]
 * 000000014027413C: xor     r13d, r13d
 * 000000014027413F: test    r11b, al
 * 0000000140274142: jz      short loc_140274155
 * 0000000140274144: mov     rax, [rsi+500h]
 * 000000014027414B: mov     cl, [rax]
 * 000000014027414D: test    cl, cl
 * 000000014027414F: jnz     loc_140274254
 * 0000000140274155: mov     ecx, [r12+10h]
 * 000000014027415A: mov     rdx, [r12+8]
 * 000000014027415F: test    rcx, rcx
 * 0000000140274162: jz      loc_140274205
 * 0000000140274168: mov     eax, [rsi+74Ch]
 * 000000014027416E: test    al, 40h
 * 0000000140274170: jz      loc_140274205
 * 0000000140274176: mov     r14, cr8
 * 000000014027417A: mov     rbx, rdx
 * 000000014027417D: lea     r12, [rcx-1]
 * 0000000140274181: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140274188: add     r12, rdx
 * 000000014027418B: or      r12, 0FFFh
 * 0000000140274192: lea     r15, [rbx-1]
 * 0000000140274196: mov     eax, 2
 * 000000014027419B: mov     cr8, rax
 * 000000014027419F: mov     rax, [rsi+438h]
 * 00000001402741A6: xor     edx, edx
 * 00000001402741A8: mov     rcx, rbx
 * 00000001402741AB: call    KeGuardDispatchICall
 * 00000001402741B0: cmp     eax, 0C000022Dh
 * 00000001402741B5: jnz     short loc_1402741D1
 * 00000001402741B7: mov     eax, 1
 * 00000001402741BC: cmp     r14b, al
 * 00000001402741BF: ja      short loc_1402741D5
 * 00000001402741C1: movzx   eax, r14b
 * 00000001402741C5: mov     cr8, rax
 * 00000001402741C9: mov     al, [rbx]
 * 00000001402741CB: mov     rax, cr8
 * 00000001402741CF: jmp     short loc_140274196
 * 00000001402741D1: test    eax, eax
 * 00000001402741D3: js      short loc_1402741F3
 * 00000001402741D5: mov     eax, 1000h
 * 00000001402741DA: add     rbx, rax
 * 00000001402741DD: add     r15, rax
 * 00000001402741E0: cmp     r15, r12
 * 00000001402741E3: jnz     short loc_14027419F
 * 00000001402741E5: movzx   eax, r14b
 * 00000001402741E9: mov     cr8, rax
 * 00000001402741ED: mov     r12, [rbp+1A50h+var_1A48]
 * 00000001402741F1: jmp     short loc_140274254
 * 00000001402741F3: movzx   eax, r14b
 * 00000001402741F7: mov     cr8, rax
 * 00000001402741FB: mov     r12, [rbp+1A50h+var_1A48]
 * 00000001402741FF: mov     r11d, 1
 * 0000000140274205: mov     rcx, [r12+8]
 * 000000014027420A: cmp     [rsi+6C0h], r13d
 * 0000000140274211: jnz     short loc_140274254
 * 0000000140274213: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027421D: add     rax, rsi
 * 0000000140274220: mov     [rsi+6C8h], rax
 * 0000000140274227: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274231: add     rax, r12
 * 0000000140274234: mov     [rsi+6D0h], rax
 * 000000014027423B: movsxd  rax, dword ptr [r12]
 * 000000014027423F: mov     [rsi+6D8h], rax
 * 0000000140274246: mov     [rsi+6E0h], rcx
 * 000000014027424D: mov     [rsi+6C0h], r11d
 * 0000000140274254: mov     eax, [r12+10h]
 * 0000000140274259: shl     eax, 4
 * 000000014027425C: add     [rsi+628h], eax
 * 0000000140274262: jmp     loc_14027031B
 * 0000000140274267: xor     eax, eax
 * 0000000140274269: mov     edx, eax
 * 000000014027426B: mov     r8d, 0Ch
 * 0000000140274271: cmp     ecx, r8d
 * 0000000140274274: setz    dl
 * 0000000140274277: test    edx, edx
 * 0000000140274279: jz      loc_140274577
 * 000000014027427F: cmp     [rsi+740h], rax
 * 0000000140274286: jz      loc_140270C92
 * 000000014027428C: cmp     [rsi+624h], eax
 * 0000000140274292: mov     eax, [rsi+74Ch]
 * 0000000140274298: mov     ecx, eax
 * 000000014027429A: jnz     short loc_1402742AE
 * 000000014027429C: shl     ecx, 3
 * 000000014027429F: xor     ecx, eax
 * 00000001402742A1: and     ecx, 20h
 * 00000001402742A4: xor     ecx, eax
 * 00000001402742A6: mov     [rsi+74Ch], ecx
 * 00000001402742AC: jmp     short loc_1402742C0
 * 00000001402742AE: shr     ecx, 3
 * 00000001402742B1: xor     ecx, eax
 * 00000001402742B3: shr     ecx, 2
 * 00000001402742B6: not     ecx
 * 00000001402742B8: and     ecx, ebx
 * 00000001402742BA: jz      loc_140273F35
 * 00000001402742C0: mov     eax, [rsi+74Ch]
 * 00000001402742C6: test    r15b, al
 * 00000001402742C9: jz      loc_140274575
 * 00000001402742CF: mov     r15, [r12+20h]
 * 00000001402742D4: mov     edx, [r12+28h]
 * 00000001402742D9: test    r15, r15
 * 00000001402742DC: jz      short loc_1402742F9
 * 00000001402742DE: mov     eax, [rsi+624h]
 * 00000001402742E4: lea     ecx, [rax+r15]
 * 00000001402742E8: and     ecx, 0FFFh
 * 00000001402742EE: lea     rbx, [r15+rax]
 * 00000001402742F2: sub     edx, eax
 * 00000001402742F4: mov     r14d, edx
 * 00000001402742F7: jmp     short loc_14027430D
 * 00000001402742F9: mov     rbx, [r12+8]
 * 00000001402742FE: mov     ecx, [r12+10h]
 * 0000000140274303: mov     r14d, ebx
 * 0000000140274306: and     r14d, 0FFFh
 * 000000014027430D: add     r14, 0FFFh
 * 0000000140274314: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014027431B: add     r14, rcx
 * 000000014027431E: shr     r14, 0Ch
 * 0000000140274322: test    r14, r14
 * 0000000140274325: jz      loc_1402743CB
 * 000000014027432B: xor     edi, edi
 * 000000014027432D: mov     rax, [rsi+2A8h]
 * 0000000140274334: mov     rcx, rbx
 * 0000000140274337: dec     r14
 * 000000014027433A: call    KeGuardDispatchICall
 * 000000014027433F: test    al, al
 * 0000000140274341: jz      short loc_140274390
 * 0000000140274343: cmp     [rsi+6C0h], edi
 * 0000000140274349: jnz     short loc_140274390
 * 000000014027434B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274355: add     rax, rsi
 * 0000000140274358: mov     [rsi+6C8h], rax
 * 000000014027435F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274369: add     rax, r12
 * 000000014027436C: mov     [rsi+6D0h], rax
 * 0000000140274373: movsxd  rax, dword ptr [r12]
 * 0000000140274377: mov     [rsi+6D8h], rax
 * 000000014027437E: mov     eax, 1
 * 0000000140274383: mov     [rsi+6E0h], rbx
 * 000000014027438A: mov     [rsi+6C0h], eax
 * 0000000140274390: add     dword ptr [rsi+628h], 100h
 * 000000014027439A: mov     r11d, 1000h
 * 00000001402743A0: add     rbx, r11
 * 00000001402743A3: test    r15, r15
 * 00000001402743A6: jz      short loc_1402743BB
 * 00000001402743A8: add     [rsi+624h], r11d
 * 00000001402743AF: mov     eax, [r13+0]
 * 00000001402743B3: cmp     [rsi+628h], eax
 * 00000001402743B9: jge     short loc_1402743C4
 * 00000001402743BB: test    r14, r14
 * 00000001402743BE: jnz     loc_14027432D
 * 00000001402743C4: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402743CB: xor     r12d, r12d
 * 00000001402743CE: test    r15, r15
 * 00000001402743D1: jz      short loc_1402743DF
 * 00000001402743D3: test    r14, r14
 * 00000001402743D6: jnz     short loc_1402743DF
 * 00000001402743D8: mov     [rsi+624h], r12d
 * 00000001402743DF: cmp     [rsi+624h], r12d
 * 00000001402743E6: jnz     loc_14027031B
 * 00000001402743EC: mov     rcx, [rsi+4C0h]
 * 00000001402743F3: mov     r13, cr8
 * 00000001402743F7: mov     eax, 0Fh
 * 00000001402743FC: mov     cr8, rax
 * 0000000140274400: mov     rax, [rsi+150h]
 * 0000000140274407: call    KeGuardDispatchICall
 * 000000014027440C: mov     rax, [rsi+568h]
 * 0000000140274413: mov     r14d, r12d
 * 0000000140274416: mov     r15, [rbp+1A50h+var_1A48]
 * 000000014027441A: mov     rcx, [rax]
 * 000000014027441D: cmp     [rcx+0Ch], r12b
 * 0000000140274421: lea     rbx, [rcx+10h]
 * 0000000140274425: mov     eax, [rcx]
 * 0000000140274427: setnz   r14b
 * 000000014027442B: lea     rcx, [rax+rax*2]
 * 000000014027442F: lea     r12, [rbx+rcx*8]
 * 0000000140274433: mov     r8d, 18h
 * 0000000140274439: lea     r9, [r15+18h]
 * 000000014027443D: mov     r10, rbx
 * 0000000140274440: mov     rcx, [r10]
 * 0000000140274443: add     r10, 8
 * 0000000140274447: mov     rax, [r9]
 * 000000014027444A: add     r9, 8
 * 000000014027444E: cmp     rcx, rax
 * 0000000140274451: jnz     short loc_140274483
 * 0000000140274453: add     r8d, 0FFFFFFF8h
 * 0000000140274457: cmp     r8d, 8
 * 000000014027445B: jnb     short loc_140274440
 * 000000014027445D: test    r8d, r8d
 * 0000000140274460: jz      short loc_14027448C
 * 0000000140274462: mov     r11d, 1
 * 0000000140274468: movzx   edx, byte ptr [r10]
 * 000000014027446C: add     r10, r11
 * 000000014027446F: movzx   eax, byte ptr [r9]
 * 0000000140274473: add     r9, r11
 * 0000000140274476: cmp     rdx, rax
 * 0000000140274479: jnz     short loc_140274483
 * 000000014027447B: add     r8d, 0FFFFFFFFh
 * 000000014027447F: jz      short loc_14027448C
 * 0000000140274481: jmp     short loc_140274468
 * 0000000140274483: add     rbx, 18h
 * 0000000140274487: cmp     rbx, r12
 * 000000014027448A: jb      short loc_140274433
 * 000000014027448C: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140274490: mov     rcx, [rsi+4C0h]
 * 0000000140274497: mov     rax, [rsi+190h]
 * 000000014027449E: call    KeGuardDispatchICall
 * 00000001402744A3: movzx   eax, r13b
 * 00000001402744A7: mov     cr8, rax
 * 00000001402744AB: xor     ecx, ecx
 * 00000001402744AD: test    r14d, r14d
 * 00000001402744B0: jz      short loc_14027451E
 * 00000001402744B2: mov     eax, [rsi+74Ch]
 * 00000001402744B8: lea     edx, [rcx+10h]
 * 00000001402744BB: test    dl, al
 * 00000001402744BD: jz      short loc_14027450F
 * 00000001402744BF: cmp     [rsi+6C0h], ecx
 * 00000001402744C5: jnz     short loc_14027450F
 * 00000001402744C7: mov     rcx, [rbp+1A50h+var_1A48]
 * 00000001402744CB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402744D5: add     rax, rsi
 * 00000001402744D8: mov     [rsi+6C8h], rax
 * 00000001402744DF: mov     rax, 0B3B74BDEE4453415h
 * 00000001402744E9: add     rax, rcx
 * 00000001402744EC: mov     [rsi+6D0h], rax
 * 00000001402744F3: movsxd  rax, dword ptr [rcx]
 * 00000001402744F6: lea     ecx, [rdx-0Fh]
 * 00000001402744F9: mov     [rsi+6D8h], rax
 * 0000000140274500: mov     [rsi+6E0h], rcx
 * 0000000140274507: mov     [rsi+6C0h], ecx
 * 000000014027450D: xor     ecx, ecx
 * 000000014027450F: mov     eax, 1
 * 0000000140274514: cmp     [r15+18h], rax
 * 0000000140274518: jz      loc_14027031B
 * 000000014027451E: cmp     rbx, r12
 * 0000000140274521: jnz     loc_14027031B
 * 0000000140274527: cmp     [rsi+6C0h], ecx
 * 000000014027452D: jnz     loc_14027031B
 * 0000000140274533: mov     rcx, [rbp+1A50h+var_1A48]
 * 0000000140274537: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274541: add     rax, rsi
 * 0000000140274544: mov     [rsi+6C8h], rax
 * 000000014027454B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274555: add     rax, rcx
 * 0000000140274558: mov     [rsi+6D0h], rax
 * 000000014027455F: movsxd  rax, dword ptr [rcx]
 * 0000000140274562: mov     [rsi+6D8h], rax
 * 0000000140274569: mov     [rsi+6E0h], rbx
 * 0000000140274570: jmp     loc_140270AF6
 * 0000000140274575: xor     eax, eax
 * 0000000140274577: cmp     [rsi+624h], eax
 * 000000014027457D: jnz     loc_140274837
 * 0000000140274583: test    edx, edx
 * 0000000140274585: jz      loc_140274A3C
 * 000000014027458B: cmp     [rsi+740h], rax
 * 0000000140274592: jnz     short loc_14027459F
 * 0000000140274594: mov     [rsi+624h], eax
 * 000000014027459A: jmp     loc_140274837
 * 000000014027459F: mov     eax, [rsi+74Ch]
 * 00000001402745A5: mov     ecx, eax
 * 00000001402745A7: shl     ecx, 3
 * 00000001402745AA: xor     ecx, eax
 * 00000001402745AC: and     ecx, 20h
 * 00000001402745AF: xor     ecx, eax
 * 00000001402745B1: mov     [rsi+74Ch], ecx
 * 00000001402745B7: test    r15b, cl
 * 00000001402745BA: jz      loc_14027467A
 * 00000001402745C0: mov     r14d, [r12+8]
 * 00000001402745C5: xor     r13d, r13d
 * 00000001402745C8: mov     ecx, [r12+10h]
 * 00000001402745CD: and     r14d, 0FFFh
 * 00000001402745D4: mov     rbx, [r12+8]
 * 00000001402745D9: add     r14, 0FFFh
 * 00000001402745E0: add     r14, rcx
 * 00000001402745E3: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402745EA: shr     r14, 0Ch
 * 00000001402745EE: test    r14, r14
 * 00000001402745F1: jz      loc_140274832
 * 00000001402745F7: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140274601: lea     r15d, [r13+1]
 * 0000000140274605: mov     rax, [rsi+2A8h]
 * 000000014027460C: mov     rcx, rbx
 * 000000014027460F: sub     r14, r15
 * 0000000140274612: call    KeGuardDispatchICall
 * 0000000140274617: test    al, al
 * 0000000140274619: jz      short loc_14027465C
 * 000000014027461B: cmp     [rsi+6C0h], r13d
 * 0000000140274622: jnz     short loc_14027465C
 * 0000000140274624: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027462E: add     rax, rsi
 * 0000000140274631: mov     [rsi+6C8h], rax
 * 0000000140274638: lea     rax, [r12+rdi]
 * 000000014027463C: mov     [rsi+6D0h], rax
 * 0000000140274643: movsxd  rax, dword ptr [r12]
 * 0000000140274647: mov     [rsi+6D8h], rax
 * 000000014027464E: mov     [rsi+6E0h], rbx
 * 0000000140274655: mov     [rsi+6C0h], r15d
 * 000000014027465C: add     dword ptr [rsi+628h], 100h
 * 0000000140274666: add     rbx, 1000h
 * 000000014027466D: test    r14, r14
 * 0000000140274670: jnz     short loc_140274605
 * 0000000140274672: mov     rbx, r15
 * 0000000140274675: jmp     loc_140274837
 * 000000014027467A: mov     r14, [r12+8]
 * 000000014027467F: mov     r8d, [r12+10h]
 * 0000000140274684: mov     r9, r14
 * 0000000140274687: add     [rsi+628h], r8d
 * 000000014027468E: mov     rax, r14
 * 0000000140274691: mov     r10d, [rsi+614h]
 * 0000000140274698: mov     r15, [rsi+618h]
 * 000000014027469F: lea     rcx, [r14+r8]
 * 00000001402746A3: cmp     r14, rcx
 * 00000001402746A6: jnb     short loc_1402746B4
 * 00000001402746A8: prefetchnta byte ptr [rax]
 * 00000001402746AB: add     rax, 40h ; '@'
 * 00000001402746AF: cmp     rax, rcx
 * 00000001402746B2: jb      short loc_1402746A8
 * 00000001402746B4: xor     r13d, r13d
 * 00000001402746B7: mov     r11d, r8d
 * 00000001402746BA: shr     r11d, 7
 * 00000001402746BE: mov     rbx, r15
 * 00000001402746C1: lea     edx, [r13+1]
 * 00000001402746C5: test    r11d, r11d
 * 00000001402746C8: jz      short loc_14027472F
 * 00000001402746CA: mov     rdi, 7010008004002001h
 * 00000001402746D4: mov     eax, 8
 * 00000001402746D9: xor     rbx, [r9]
 * 00000001402746DC: mov     ecx, r10d
 * 00000001402746DF: rol     rbx, cl
 * 00000001402746E2: xor     rbx, [r9+8]
 * 00000001402746E6: add     r9, 10h
 * 00000001402746EA: rol     rbx, cl
 * 00000001402746ED: sub     rax, rdx
 * 00000001402746F0: jnz     short loc_1402746D9
 * 00000001402746F2: mov     rcx, r9
 * 00000001402746F5: sub     rcx, r14
 * 00000001402746F8: xor     rcx, r15
 * 00000001402746FB: mov     rax, rcx
 * 00000001402746FE: rol     rax, 11h
 * 0000000140274702: xor     rcx, rax
 * 0000000140274705: mov     rax, rdi
 * 0000000140274708: mul     rcx
 * 000000014027470B: xor     r10d, eax
 * 000000014027470E: mov     [rbp+1A50h+var_1510], rdx
 * 0000000140274715: xor     r10d, edx
 * 0000000140274718: mov     edx, 1
 * 000000014027471D: and     r10d, 3Fh
 * 0000000140274721: cmovz   r10d, edx
 * 0000000140274725: add     r11d, 0FFFFFFFFh
 * 0000000140274729: jnz     short loc_1402746D4
 * 000000014027472B: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027472F: and     r8d, 7Fh
 * 0000000140274733: cmp     r8d, 8
 * 0000000140274737: jb      short loc_140274756
 * 0000000140274739: mov     eax, r8d
 * 000000014027473C: shr     rax, 3
 * 0000000140274740: xor     rbx, [r9]
 * 0000000140274743: mov     ecx, r10d
 * 0000000140274746: rol     rbx, cl
 * 0000000140274749: add     r9, 8
 * 000000014027474D: add     r8d, 0FFFFFFF8h
 * 0000000140274751: sub     rax, rdx
 * 0000000140274754: jnz     short loc_140274740
 * 0000000140274756: test    r8d, r8d
 * 0000000140274759: jz      short loc_140274771
 * 000000014027475B: movzx   eax, byte ptr [r9]
 * 000000014027475F: mov     ecx, r10d
 * 0000000140274762: xor     rbx, rax
 * 0000000140274765: add     r9, rdx
 * 0000000140274768: rol     rbx, cl
 * 000000014027476B: add     r8d, 0FFFFFFFFh
 * 000000014027476F: jnz     short loc_14027475B
 * 0000000140274771: mov     rax, rbx
 * 0000000140274774: jmp     short loc_140274778
 * 0000000140274776: xor     ebx, eax
 * 0000000140274778: shr     rax, 1Fh
 * 000000014027477C: test    rax, rax
 * 000000014027477F: jnz     short loc_140274776
 * 0000000140274781: btr     ebx, 1Fh
 * 0000000140274785: cmp     ebx, [r12+14h]
 * 000000014027478A: jz      loc_140274832
 * 0000000140274790: mov     ecx, [r12+10h]
 * 0000000140274795: mov     rdx, [r12+8]
 * 000000014027479A: test    rcx, rcx
 * 000000014027479D: jz      loc_1402749C2
 * 00000001402747A3: mov     eax, [rsi+74Ch]
 * 00000001402747A9: test    al, 40h
 * 00000001402747AB: jz      loc_1402749C2
 * 00000001402747B1: mov     r15, cr8
 * 00000001402747B5: mov     r14, rdx
 * 00000001402747B8: lea     r13, [rcx-1]
 * 00000001402747BC: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402747C3: add     r13, rdx
 * 00000001402747C6: or      r13, 0FFFh
 * 00000001402747CD: lea     r12, [r14-1]
 * 00000001402747D1: mov     eax, 2
 * 00000001402747D6: mov     cr8, rax
 * 00000001402747DA: mov     rax, [rsi+438h]
 * 00000001402747E1: xor     edx, edx
 * 00000001402747E3: mov     rcx, r14
 * 00000001402747E6: call    KeGuardDispatchICall
 * 00000001402747EB: cmp     eax, 0C000022Dh
 * 00000001402747F0: jnz     short loc_14027480D
 * 00000001402747F2: mov     eax, 1
 * 00000001402747F7: cmp     r15b, al
 * 00000001402747FA: ja      short loc_140274815
 * 00000001402747FC: movzx   eax, r15b
 * 0000000140274800: mov     cr8, rax
 * 0000000140274804: mov     al, [r14]
 * 0000000140274807: mov     rax, cr8
 * 000000014027480B: jmp     short loc_1402747D1
 * 000000014027480D: test    eax, eax
 * 000000014027480F: js      loc_1402749B3
 * 0000000140274815: mov     r10d, 1000h
 * 000000014027481B: add     r14, r10
 * 000000014027481E: add     r12, r10
 * 0000000140274821: cmp     r12, r13
 * 0000000140274824: jnz     short loc_1402747DA
 * 0000000140274826: movzx   eax, r15b
 * 000000014027482A: mov     cr8, rax
 * 000000014027482E: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140274832: mov     ebx, 1
 * 0000000140274837: mov     r9, [r12+8]
 * 000000014027483C: mov     r8d, [rsi+624h]
 * 0000000140274843: mov     ecx, [r12+10h]
 * 0000000140274848: mov     [rbp+1A50h+var_19C8], r9
 * 000000014027484F: lea     rax, [r8+r8*2]
 * 0000000140274853: lea     r15, [r9+rax*4]
 * 0000000140274857: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140274861: mul     rcx
 * 0000000140274864: mov     [rbp+1A50h+var_19F0], r15
 * 0000000140274868: shr     rdx, 3
 * 000000014027486C: add     r8, 0Ch
 * 0000000140274870: lea     rax, [rdx+rdx*2]
 * 0000000140274874: mov     edx, 80000000h
 * 0000000140274879: lea     rax, [r9+rax*4]
 * 000000014027487D: lea     rdi, [r12+r8*4]
 * 0000000140274881: mov     [rbp+1A50h+var_1A38], rax
 * 0000000140274885: mov     rcx, rax
 * 0000000140274888: mov     r8d, 0Ch
 * 000000014027488E: test    [rdi], edx
 * 0000000140274890: jnz     loc_140274CF1
 * 0000000140274896: mov     eax, [r15]
 * 0000000140274899: mov     r8d, [r15+4]
 * 000000014027489D: mov     r12d, eax
 * 00000001402748A0: mov     rcx, [rbp+1A50h+var_1A48]
 * 00000001402748A4: sub     r8d, eax
 * 00000001402748A7: mov     r13d, r8d
 * 00000001402748AA: add     r12, [rcx+20h]
 * 00000001402748AE: add     [rsi+628h], r8d
 * 00000001402748B5: mov     r9, r12
 * 00000001402748B8: mov     r11d, [rsi+614h]
 * 00000001402748BF: mov     rax, r12
 * 00000001402748C2: mov     r14, [rsi+618h]
 * 00000001402748C9: lea     rcx, [r12+r8]
 * 00000001402748CD: mov     [rbp+1A50h+var_1A30], r12
 * 00000001402748D1: cmp     r12, rcx
 * 00000001402748D4: jnb     short loc_1402748E2
 * 00000001402748D6: prefetchnta byte ptr [rax]
 * 00000001402748D9: add     rax, 40h ; '@'
 * 00000001402748DD: cmp     rax, rcx
 * 00000001402748E0: jb      short loc_1402748D6
 * 00000001402748E2: mov     r10d, r8d
 * 00000001402748E5: mov     rbx, r14
 * 00000001402748E8: shr     r10d, 7
 * 00000001402748EC: test    r10d, r10d
 * 00000001402748EF: jz      short loc_140274960
 * 00000001402748F1: mov     r15, 7010008004002001h
 * 00000001402748FB: mov     edx, 8
 * 0000000140274900: lea     esi, [rdx-7]
 * 0000000140274903: mov     rax, [r9]
 * 0000000140274906: mov     ecx, r11d
 * 0000000140274909: xor     rax, rbx
 * 000000014027490C: mov     rbx, [r9+8]
 * 0000000140274910: rol     rax, cl
 * 0000000140274913: add     r9, 10h
 * 0000000140274917: xor     rbx, rax
 * 000000014027491A: rol     rbx, cl
 * 000000014027491D: sub     rdx, rsi
 * 0000000140274920: jnz     short loc_140274903
 * 0000000140274922: mov     rcx, r9
 * 0000000140274925: sub     rcx, r12
 * 0000000140274928: xor     rcx, r14
 * 000000014027492B: mov     rax, rcx
 * 000000014027492E: rol     rax, 11h
 * 0000000140274932: xor     rcx, rax
 * 0000000140274935: mov     rax, r15
 * 0000000140274938: mul     rcx
 * 000000014027493B: xor     eax, edx
 * 000000014027493D: mov     [rbp+1A50h+var_1500], rdx
 * 0000000140274944: xor     r11d, eax
 * 0000000140274947: mov     rax, rsi
 * 000000014027494A: and     r11d, 3Fh
 * 000000014027494E: cmovz   r11d, eax
 * 0000000140274952: add     r10d, 0FFFFFFFFh
 * 0000000140274956: jnz     short loc_1402748FB
 * 0000000140274958: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027495C: mov     r15, [rbp+1A50h+var_19F0]
 * 0000000140274960: and     r8d, 7Fh
 * 0000000140274964: mov     r10d, 1
 * 000000014027496A: cmp     r8d, 8
 * 000000014027496E: jb      short loc_14027498D
 * 0000000140274970: mov     edx, r8d
 * 0000000140274973: shr     rdx, 3
 * 0000000140274977: xor     rbx, [r9]
 * 000000014027497A: mov     ecx, r11d
 * 000000014027497D: rol     rbx, cl
 * 0000000140274980: add     r9, 8
 * 0000000140274984: add     r8d, 0FFFFFFF8h
 * 0000000140274988: sub     rdx, r10
 * 000000014027498B: jnz     short loc_140274977
 * 000000014027498D: xor     r14d, r14d
 * 0000000140274990: test    r8d, r8d
 * 0000000140274993: jz      short loc_1402749AB
 * 0000000140274995: movzx   eax, byte ptr [r9]
 * 0000000140274999: mov     ecx, r11d
 * 000000014027499C: xor     rbx, rax
 * 000000014027499F: add     r9, r10
 * 00000001402749A2: rol     rbx, cl
 * 00000001402749A5: add     r8d, 0FFFFFFFFh
 * 00000001402749A9: jnz     short loc_140274995
 * 00000001402749AB: mov     rax, rbx
 * 00000001402749AE: jmp     loc_140274C2C
 * 00000001402749B3: movzx   eax, r15b
 * 00000001402749B7: xor     r13d, r13d
 * 00000001402749BA: mov     cr8, rax
 * 00000001402749BE: mov     r12, [rbp+1A50h+var_1A48]
 * 00000001402749C2: mov     eax, [r12+14h]
 * 00000001402749C7: cmp     [rsi+6C0h], r13d
 * 00000001402749CE: jnz     short loc_1402749E0
 * 00000001402749D0: mov     ecx, ebx
 * 00000001402749D2: xor     rcx, rax
 * 00000001402749D5: mov     rax, [rsi+510h]
 * 00000001402749DC: mov     [rax+18h], rcx
 * 00000001402749E0: mov     ebx, 1
 * 00000001402749E5: mov     rcx, [r12+8]
 * 00000001402749EA: cmp     [rsi+6C0h], r13d
 * 00000001402749F1: jnz     loc_140274837
 * 00000001402749F7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274A01: add     rax, rsi
 * 0000000140274A04: mov     [rsi+6C8h], rax
 * 0000000140274A0B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274A15: add     rax, r12
 * 0000000140274A18: mov     [rsi+6D0h], rax
 * 0000000140274A1F: movsxd  rax, dword ptr [r12]
 * 0000000140274A23: mov     [rsi+6D8h], rax
 * 0000000140274A2A: mov     [rsi+6E0h], rcx
 * 0000000140274A31: mov     [rsi+6C0h], ebx
 * 0000000140274A37: jmp     loc_140274837
 * 0000000140274A3C: mov     r14, [r12+8]
 * 0000000140274A41: mov     r8d, [r12+10h]
 * 0000000140274A46: mov     r9, r14
 * 0000000140274A49: add     [rsi+628h], r8d
 * 0000000140274A50: mov     rax, r14
 * 0000000140274A53: mov     r11d, [rsi+614h]
 * 0000000140274A5A: mov     r15, [rsi+618h]
 * 0000000140274A61: lea     rcx, [r14+r8]
 * 0000000140274A65: cmp     r14, rcx
 * 0000000140274A68: jnb     short loc_140274A76
 * 0000000140274A6A: prefetchnta byte ptr [rax]
 * 0000000140274A6D: add     rax, 40h ; '@'
 * 0000000140274A71: cmp     rax, rcx
 * 0000000140274A74: jb      short loc_140274A6A
 * 0000000140274A76: mov     r10d, r8d
 * 0000000140274A79: xor     r13d, r13d
 * 0000000140274A7C: shr     r10d, 7
 * 0000000140274A80: mov     rbx, r15
 * 0000000140274A83: test    r10d, r10d
 * 0000000140274A86: jz      short loc_140274AF1
 * 0000000140274A88: mov     rsi, 7010008004002001h
 * 0000000140274A92: lea     r12d, [r13+1]
 * 0000000140274A96: mov     edx, 8
 * 0000000140274A9B: mov     rax, [r9]
 * 0000000140274A9E: mov     ecx, r11d
 * 0000000140274AA1: xor     rax, rbx
 * 0000000140274AA4: mov     rbx, [r9+8]
 * 0000000140274AA8: rol     rax, cl
 * 0000000140274AAB: add     r9, 10h
 * 0000000140274AAF: xor     rbx, rax
 * 0000000140274AB2: rol     rbx, cl
 * 0000000140274AB5: sub     rdx, r12
 * 0000000140274AB8: jnz     short loc_140274A9B
 * 0000000140274ABA: mov     rcx, r9
 * 0000000140274ABD: sub     rcx, r14
 * 0000000140274AC0: xor     rcx, r15
 * 0000000140274AC3: mov     rax, rcx
 * 0000000140274AC6: rol     rax, 11h
 * 0000000140274ACA: xor     rcx, rax
 * 0000000140274ACD: mov     rax, rsi
 * 0000000140274AD0: mul     rcx
 * 0000000140274AD3: xor     eax, edx
 * 0000000140274AD5: mov     [rbp+1A50h+var_1508], rdx
 * 0000000140274ADC: xor     r11d, eax
 * 0000000140274ADF: and     r11d, 3Fh
 * 0000000140274AE3: cmovz   r11d, r12d
 * 0000000140274AE7: add     r10d, 0FFFFFFFFh
 * 0000000140274AEB: jnz     short loc_140274A96
 * 0000000140274AED: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140274AF1: and     r8d, 7Fh
 * 0000000140274AF5: mov     r10d, 1
 * 0000000140274AFB: cmp     r8d, 8
 * 0000000140274AFF: jb      short loc_140274B1E
 * 0000000140274B01: mov     edx, r8d
 * 0000000140274B04: shr     rdx, 3
 * 0000000140274B08: xor     rbx, [r9]
 * 0000000140274B0B: mov     ecx, r11d
 * 0000000140274B0E: rol     rbx, cl
 * 0000000140274B11: add     r9, 8
 * 0000000140274B15: add     r8d, 0FFFFFFF8h
 * 0000000140274B19: sub     rdx, r10
 * 0000000140274B1C: jnz     short loc_140274B08
 * 0000000140274B1E: test    r8d, r8d
 * 0000000140274B21: jz      short loc_140274B39
 * 0000000140274B23: movzx   eax, byte ptr [r9]
 * 0000000140274B27: mov     ecx, r11d
 * 0000000140274B2A: xor     rbx, rax
 * 0000000140274B2D: add     r9, r10
 * 0000000140274B30: rol     rbx, cl
 * 0000000140274B33: add     r8d, 0FFFFFFFFh
 * 0000000140274B37: jnz     short loc_140274B23
 * 0000000140274B39: mov     rax, rbx
 * 0000000140274B3C: jmp     short loc_140274B40
 * 0000000140274B3E: xor     ebx, eax
 * 0000000140274B40: shr     rax, 1Fh
 * 0000000140274B44: test    rax, rax
 * 0000000140274B47: jnz     short loc_140274B3E
 * 0000000140274B49: mov     rax, [rbp+1A50h+var_1A48]
 * 0000000140274B4D: btr     ebx, 1Fh
 * 0000000140274B51: mov     r12d, r13d
 * 0000000140274B54: cmp     ebx, [rax+14h]
 * 0000000140274B57: jz      loc_14027482E
 * 0000000140274B5D: cmp     [rax], r13d
 * 0000000140274B60: jnz     short loc_140274B6A
 * 0000000140274B62: cmp     [rax+18h], r13d
 * 0000000140274B66: cmovnz  r12d, r10d
 * 0000000140274B6A: mov     ecx, [rax+10h]
 * 0000000140274B6D: mov     rdx, [rax+8]
 * 0000000140274B71: test    rcx, rcx
 * 0000000140274B74: jz      loc_1402749BE
 * 0000000140274B7A: mov     eax, [rsi+74Ch]
 * 0000000140274B80: test    al, 40h
 * 0000000140274B82: jz      loc_1402749BE
 * 0000000140274B88: mov     r15, cr8
 * 0000000140274B8C: mov     r8d, 2
 * 0000000140274B92: mov     cr8, r8
 * 0000000140274B96: lea     rax, [rcx-1]
 * 0000000140274B9A: mov     r14, rdx
 * 0000000140274B9D: add     rax, rdx
 * 0000000140274BA0: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140274BA7: or      rax, 0FFFh
 * 0000000140274BAD: mov     ecx, r13d
 * 0000000140274BB0: test    r8b, r12b
 * 0000000140274BB3: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140274BB7: cmovnz  ecx, r10d
 * 0000000140274BBB: lea     r13, [r14-1]
 * 0000000140274BBF: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140274BC2: mov     rax, [rsi+438h]
 * 0000000140274BC9: mov     edx, ecx
 * 0000000140274BCB: mov     rcx, r14
 * 0000000140274BCE: call    KeGuardDispatchICall
 * 0000000140274BD3: cmp     eax, 0C000022Dh
 * 0000000140274BD8: jnz     short loc_140274C0A
 * 0000000140274BDA: mov     r10d, 1
 * 0000000140274BE0: test    r10b, r12b
 * 0000000140274BE3: jnz     loc_1402749B3
 * 0000000140274BE9: cmp     r15b, r10b
 * 0000000140274BEC: ja      short loc_140274C12
 * 0000000140274BEE: movzx   eax, r15b
 * 0000000140274BF2: mov     cr8, rax
 * 0000000140274BF6: mov     al, [r14]
 * 0000000140274BF9: mov     rax, cr8
 * 0000000140274BFD: lea     eax, [r10+1]
 * 0000000140274C01: mov     cr8, rax
 * 0000000140274C05: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140274C08: jmp     short loc_140274BC2
 * 0000000140274C0A: test    eax, eax
 * 0000000140274C0C: js      loc_1402749B3
 * 0000000140274C12: mov     r10d, 1000h
 * 0000000140274C18: add     r14, r10
 * 0000000140274C1B: add     r13, r10
 * 0000000140274C1E: cmp     r13, [rbp+1A50h+var_1A30]
 * 0000000140274C22: jz      loc_140274826
 * 0000000140274C28: jmp     short loc_140274C05
 * 0000000140274C2A: xor     ebx, eax
 * 0000000140274C2C: shr     rax, 1Fh
 * 0000000140274C30: test    rax, rax
 * 0000000140274C33: jnz     short loc_140274C2A
 * 0000000140274C35: mov     eax, [rdi]
 * 0000000140274C37: btr     ebx, 1Fh
 * 0000000140274C3B: btr     eax, 1Fh
 * 0000000140274C3F: cmp     ebx, eax
 * 0000000140274C41: jz      loc_140274E5A
 * 0000000140274C47: test    r13, r13
 * 0000000140274C4A: jz      loc_140274DDB
 * 0000000140274C50: mov     eax, [rsi+74Ch]
 * 0000000140274C56: test    al, 40h
 * 0000000140274C58: jz      loc_140274DDB
 * 0000000140274C5E: mov     r15, cr8
 * 0000000140274C62: mov     r14, r12
 * 0000000140274C65: dec     r12
 * 0000000140274C68: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140274C6F: add     r13, r12
 * 0000000140274C72: or      r13, 0FFFh
 * 0000000140274C79: lea     r12, [r14-1]
 * 0000000140274C7D: mov     eax, 2
 * 0000000140274C82: mov     cr8, rax
 * 0000000140274C86: mov     rax, [rsi+438h]
 * 0000000140274C8D: xor     edx, edx
 * 0000000140274C8F: mov     rcx, r14
 * 0000000140274C92: call    KeGuardDispatchICall
 * 0000000140274C97: cmp     eax, 0C000022Dh
 * 0000000140274C9C: jnz     short loc_140274CB9
 * 0000000140274C9E: mov     eax, 1
 * 0000000140274CA3: cmp     r15b, al
 * 0000000140274CA6: ja      short loc_140274CC1
 * 0000000140274CA8: movzx   eax, r15b
 * 0000000140274CAC: mov     cr8, rax
 * 0000000140274CB0: mov     al, [r14]
 * 0000000140274CB3: mov     rax, cr8
 * 0000000140274CB7: jmp     short loc_140274C7D
 * 0000000140274CB9: test    eax, eax
 * 0000000140274CBB: js      loc_140274DCB
 * 0000000140274CC1: mov     eax, 1000h
 * 0000000140274CC6: add     r14, rax
 * 0000000140274CC9: add     r12, rax
 * 0000000140274CCC: cmp     r12, r13
 * 0000000140274CCF: jnz     short loc_140274C86
 * 0000000140274CD1: movzx   eax, r15b
 * 0000000140274CD5: mov     cr8, rax
 * 0000000140274CD9: mov     r15, [rbp+1A50h+var_19F0]
 * 0000000140274CDD: mov     ebx, 1
 * 0000000140274CE2: mov     rcx, [rbp+1A50h+var_1A38]
 * 0000000140274CE6: mov     edx, 80000000h
 * 0000000140274CEB: mov     r8d, 0Ch
 * 0000000140274CF1: xor     r14d, r14d
 * 0000000140274CF4: add     r15, r8
 * 0000000140274CF7: add     rdi, 4
 * 0000000140274CFB: mov     [rbp+1A50h+var_19F0], r15
 * 0000000140274CFF: cmp     r15, rcx
 * 0000000140274D02: jnb     short loc_140274D19
 * 0000000140274D04: mov     rax, [rbp+1A50h+var_1A10]
 * 0000000140274D08: mov     eax, [rax]
 * 0000000140274D0A: cmp     [rsi+628h], eax
 * 0000000140274D10: jl      loc_14027488E
 * 0000000140274D16: cmp     r15, rcx
 * 0000000140274D19: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140274D20: jnz     loc_140274F71
 * 0000000140274D26: mov     rcx, [rsi+4C0h]
 * 0000000140274D2D: mov     r13, cr8
 * 0000000140274D31: mov     eax, 0Fh
 * 0000000140274D36: mov     cr8, rax
 * 0000000140274D3A: mov     rax, [rsi+150h]
 * 0000000140274D41: call    KeGuardDispatchICall
 * 0000000140274D46: mov     rax, [rsi+568h]
 * 0000000140274D4D: xor     edx, edx
 * 0000000140274D4F: mov     r15, [rbp+1A50h+var_1A48]
 * 0000000140274D53: mov     rcx, [rax]
 * 0000000140274D56: cmp     [rcx+0Ch], dl
 * 0000000140274D59: lea     rbx, [rcx+10h]
 * 0000000140274D5D: mov     eax, [rcx]
 * 0000000140274D5F: setnz   r14b
 * 0000000140274D63: lea     rcx, [rax+rax*2]
 * 0000000140274D67: lea     r12, [rbx+rcx*8]
 * 0000000140274D6B: mov     r8d, 18h
 * 0000000140274D71: lea     r9, [r15+18h]
 * 0000000140274D75: mov     r10, rbx
 * 0000000140274D78: mov     rcx, [r10]
 * 0000000140274D7B: add     r10, 8
 * 0000000140274D7F: mov     rax, [r9]
 * 0000000140274D82: add     r9, 8
 * 0000000140274D86: cmp     rcx, rax
 * 0000000140274D89: jnz     loc_140274E73
 * 0000000140274D8F: add     r8d, 0FFFFFFF8h
 * 0000000140274D93: cmp     r8d, 8
 * 0000000140274D97: jnb     short loc_140274D78
 * 0000000140274D99: test    r8d, r8d
 * 0000000140274D9C: jz      loc_140274E80
 * 0000000140274DA2: mov     r11d, 1
 * 0000000140274DA8: movzx   edx, byte ptr [r10]
 * 0000000140274DAC: add     r10, r11
 * 0000000140274DAF: movzx   eax, byte ptr [r9]
 * 0000000140274DB3: add     r9, r11
 * 0000000140274DB6: cmp     rdx, rax
 * 0000000140274DB9: jnz     loc_140274E71
 * 0000000140274DBF: add     r8d, 0FFFFFFFFh
 * 0000000140274DC3: jz      loc_140274E80
 * 0000000140274DC9: jmp     short loc_140274DA8
 * 0000000140274DCB: movzx   eax, r15b
 * 0000000140274DCF: mov     cr8, rax
 * 0000000140274DD3: mov     r12, [rbp+1A50h+var_1A30]
 * 0000000140274DD7: mov     r15, [rbp+1A50h+var_19F0]
 * 0000000140274DDB: mov     eax, [rdi]
 * 0000000140274DDD: xor     r13d, r13d
 * 0000000140274DE0: btr     eax, 1Fh
 * 0000000140274DE4: cmp     [rsi+6C0h], r13d
 * 0000000140274DEB: jnz     loc_140274CDD
 * 0000000140274DF1: mov     ecx, ebx
 * 0000000140274DF3: xor     rcx, rax
 * 0000000140274DF6: mov     rax, [rsi+510h]
 * 0000000140274DFD: mov     [rax+18h], rcx
 * 0000000140274E01: cmp     [rsi+6C0h], r13d
 * 0000000140274E08: jnz     loc_140274CDD
 * 0000000140274E0E: mov     rcx, [rbp+1A50h+var_1A48]
 * 0000000140274E12: lea     ebx, [r13+1]
 * 0000000140274E16: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274E20: add     rax, rsi
 * 0000000140274E23: mov     [rsi+6C8h], rax
 * 0000000140274E2A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274E34: add     rax, rcx
 * 0000000140274E37: mov     [rsi+6D0h], rax
 * 0000000140274E3E: movsxd  rax, dword ptr [rcx]
 * 0000000140274E41: mov     [rsi+6D8h], rax
 * 0000000140274E48: mov     [rsi+6E0h], r12
 * 0000000140274E4F: mov     [rsi+6C0h], ebx
 * 0000000140274E55: jmp     loc_140274CE2
 * 0000000140274E5A: mov     rcx, [rbp+1A50h+var_1A38]
 * 0000000140274E5E: mov     ebx, 1
 * 0000000140274E63: mov     edx, 80000000h
 * 0000000140274E68: lea     r8d, [rbx+0Bh]
 * 0000000140274E6C: jmp     loc_140274CF4
 * 0000000140274E71: xor     edx, edx
 * 0000000140274E73: add     rbx, 18h
 * 0000000140274E77: cmp     rbx, r12
 * 0000000140274E7A: jb      loc_140274D6B
 * 0000000140274E80: mov     rcx, [rsi+4C0h]
 * 0000000140274E87: mov     rax, [rsi+190h]
 * 0000000140274E8E: call    KeGuardDispatchICall
 * 0000000140274E93: movzx   eax, r13b
 * 0000000140274E97: mov     cr8, rax
 * 0000000140274E9B: xor     edx, edx
 * 0000000140274E9D: test    r14d, r14d
 * 0000000140274EA0: jz      short loc_140274F0A
 * 0000000140274EA2: mov     eax, [rsi+74Ch]
 * 0000000140274EA8: lea     ecx, [rdx+10h]
 * 0000000140274EAB: test    cl, al
 * 0000000140274EAD: jz      short loc_140274EFF
 * 0000000140274EAF: cmp     [rsi+6C0h], edx
 * 0000000140274EB5: jnz     short loc_140274EFF
 * 0000000140274EB7: mov     rcx, [rbp+1A50h+var_1A48]
 * 0000000140274EBB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274EC5: add     rax, rsi
 * 0000000140274EC8: mov     [rsi+6C8h], rax
 * 0000000140274ECF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274ED9: add     rax, rcx
 * 0000000140274EDC: mov     [rsi+6D0h], rax
 * 0000000140274EE3: movsxd  rax, dword ptr [rcx]
 * 0000000140274EE6: mov     [rsi+6D8h], rax
 * 0000000140274EED: lea     eax, [rdx+1]
 * 0000000140274EF0: mov     [rsi+6E0h], rax
 * 0000000140274EF7: mov     [rsi+6C0h], eax
 * 0000000140274EFD: jmp     short loc_140274F04
 * 0000000140274EFF: mov     eax, 1
 * 0000000140274F04: cmp     [r15+18h], rax
 * 0000000140274F08: jz      short loc_140274F61
 * 0000000140274F0A: cmp     rbx, r12
 * 0000000140274F0D: jnz     short loc_140274F61
 * 0000000140274F0F: cmp     [rsi+6C0h], edx
 * 0000000140274F15: jnz     short loc_140274F61
 * 0000000140274F17: mov     rcx, [rbp+1A50h+var_1A48]
 * 0000000140274F1B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140274F25: add     rax, rsi
 * 0000000140274F28: mov     [rsi+6C8h], rax
 * 0000000140274F2F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140274F39: add     rax, rcx
 * 0000000140274F3C: mov     [rsi+6D0h], rax
 * 0000000140274F43: movsxd  rax, dword ptr [rcx]
 * 0000000140274F46: mov     [rsi+6D8h], rax
 * 0000000140274F4D: mov     [rsi+6E0h], rbx
 * 0000000140274F54: mov     ebx, 1
 * 0000000140274F59: mov     [rsi+6C0h], ebx
 * 0000000140274F5F: jmp     short loc_140274F66
 * 0000000140274F61: mov     ebx, 1
 * 0000000140274F66: mov     [rsi+624h], edx
 * 0000000140274F6C: jmp     loc_140279285
 * 0000000140274F71: sub     r15, [rbp+1A50h+var_19C8]
 * 0000000140274F78: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140274F82: imul    r15
 * 0000000140274F85: sar     rdx, 1
 * 0000000140274F88: mov     rax, rdx
 * 0000000140274F8B: shr     rax, 3Fh
 * 0000000140274F8F: add     rdx, rax
 * 0000000140274F92: jmp     short loc_140274F66
 * 0000000140274F94: xor     r13d, r13d
 * 0000000140274F97: cmp     [rsi+740h], r13
 * 0000000140274F9E: jnz     short loc_140274FAC
 * 0000000140274FA0: mov     [rsi+624h], r13d
 * 0000000140274FA7: jmp     loc_140279285
 * 0000000140274FAC: mov     eax, [rsi+74Ch]
 * 0000000140274FB2: cmp     [rsi+624h], r13d
 * 0000000140274FB9: jnz     short loc_140274FCF
 * 0000000140274FBB: shl     eax, 3
 * 0000000140274FBE: xor     eax, [rsi+74Ch]
 * 0000000140274FC4: and     eax, 20h
 * 0000000140274FC7: xor     [rsi+74Ch], eax
 * 0000000140274FCD: jmp     short loc_140274FDF
 * 0000000140274FCF: mov     ecx, eax
 * 0000000140274FD1: shr     ecx, 3
 * 0000000140274FD4: xor     ecx, eax
 * 0000000140274FD6: shr     ecx, 2
 * 0000000140274FD9: not     ecx
 * 0000000140274FDB: and     ecx, ebx
 * 0000000140274FDD: jz      short loc_140274FA0
 * 0000000140274FDF: mov     eax, [rsi+74Ch]
 * 0000000140274FE5: test    r15b, al
 * 0000000140274FE8: jz      loc_1402750AE
 * 0000000140274FEE: mov     r14d, [r12+8]
 * 0000000140274FF3: mov     ecx, [r12+10h]
 * 0000000140274FF8: and     r14d, 0FFFh
 * 0000000140274FFF: mov     rbx, [r12+8]
 * 0000000140275004: add     r14, 0FFFh
 * 000000014027500B: add     r14, rcx
 * 000000014027500E: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140275015: shr     r14, 0Ch
 * 0000000140275019: test    r14, r14
 * 000000014027501C: jz      loc_14027031B
 * 0000000140275022: mov     rdi, 0B3B74BDEE4453415h
 * 000000014027502C: mov     r15d, 1
 * 0000000140275032: mov     rax, [rsi+2A8h]
 * 0000000140275039: mov     rcx, rbx
 * 000000014027503C: sub     r14, r15
 * 000000014027503F: call    KeGuardDispatchICall
 * 0000000140275044: test    al, al
 * 0000000140275046: jz      short loc_140275089
 * 0000000140275048: cmp     [rsi+6C0h], r13d
 * 000000014027504F: jnz     short loc_140275089
 * 0000000140275051: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027505B: add     rax, rsi
 * 000000014027505E: mov     [rsi+6C8h], rax
 * 0000000140275065: lea     rax, [r12+rdi]
 * 0000000140275069: mov     [rsi+6D0h], rax
 * 0000000140275070: movsxd  rax, dword ptr [r12]
 * 0000000140275074: mov     [rsi+6D8h], rax
 * 000000014027507B: mov     [rsi+6E0h], rbx
 * 0000000140275082: mov     [rsi+6C0h], r15d
 * 0000000140275089: add     dword ptr [rsi+628h], 100h
 * 0000000140275093: add     rbx, 1000h
 * 000000014027509A: test    r14, r14
 * 000000014027509D: jnz     short loc_140275032
 * 000000014027509F: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402750A6: mov     rbx, r15
 * 00000001402750A9: jmp     loc_140279285
 * 00000001402750AE: mov     r14, [r12+8]
 * 00000001402750B3: mov     r8d, [r12+10h]
 * 00000001402750B8: mov     r9, r14
 * 00000001402750BB: add     [rsi+628h], r8d
 * 00000001402750C2: mov     rax, r14
 * 00000001402750C5: mov     r10d, [rsi+614h]
 * 00000001402750CC: mov     r15, [rsi+618h]
 * 00000001402750D3: lea     rcx, [r14+r8]
 * 00000001402750D7: cmp     r14, rcx
 * 00000001402750DA: jnb     short loc_1402750E8
 * 00000001402750DC: prefetchnta byte ptr [rax]
 * 00000001402750DF: add     rax, 40h ; '@'
 * 00000001402750E3: cmp     rax, rcx
 * 00000001402750E6: jb      short loc_1402750DC
 * 00000001402750E8: mov     r11d, r8d
 * 00000001402750EB: mov     rbx, r15
 * 00000001402750EE: shr     r11d, 7
 * 00000001402750F2: mov     edx, 1
 * 00000001402750F7: test    r11d, r11d
 * 00000001402750FA: jz      short loc_140275168
 * 00000001402750FC: mov     rdi, 7010008004002001h
 * 0000000140275106: mov     eax, 8
 * 000000014027510B: xor     rbx, [r9]
 * 000000014027510E: mov     ecx, r10d
 * 0000000140275111: rol     rbx, cl
 * 0000000140275114: xor     rbx, [r9+8]
 * 0000000140275118: add     r9, 10h
 * 000000014027511C: rol     rbx, cl
 * 000000014027511F: sub     rax, rdx
 * 0000000140275122: jnz     short loc_14027510B
 * 0000000140275124: mov     rcx, r9
 * 0000000140275127: sub     rcx, r14
 * 000000014027512A: xor     rcx, r15
 * 000000014027512D: mov     rax, rcx
 * 0000000140275130: rol     rax, 11h
 * 0000000140275134: xor     rcx, rax
 * 0000000140275137: mov     rax, rdi
 * 000000014027513A: mul     rcx
 * 000000014027513D: xor     r10d, eax
 * 0000000140275140: mov     [rbp+1A50h+var_14F8], rdx
 * 0000000140275147: xor     r10d, edx
 * 000000014027514A: mov     edx, 1
 * 000000014027514F: and     r10d, 3Fh
 * 0000000140275153: cmovz   r10d, edx
 * 0000000140275157: add     r11d, 0FFFFFFFFh
 * 000000014027515B: jnz     short loc_140275106
 * 000000014027515D: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140275161: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140275168: and     r8d, 7Fh
 * 000000014027516C: cmp     r8d, 8
 * 0000000140275170: jb      short loc_14027518F
 * 0000000140275172: mov     eax, r8d
 * 0000000140275175: shr     rax, 3
 * 0000000140275179: xor     rbx, [r9]
 * 000000014027517C: mov     ecx, r10d
 * 000000014027517F: rol     rbx, cl
 * 0000000140275182: add     r9, 8
 * 0000000140275186: add     r8d, 0FFFFFFF8h
 * 000000014027518A: sub     rax, rdx
 * 000000014027518D: jnz     short loc_140275179
 * 000000014027518F: test    r8d, r8d
 * 0000000140275192: jz      short loc_1402751AA
 * 0000000140275194: movzx   eax, byte ptr [r9]
 * 0000000140275198: mov     ecx, r10d
 * 000000014027519B: xor     rbx, rax
 * 000000014027519E: add     r9, rdx
 * 00000001402751A1: rol     rbx, cl
 * 00000001402751A4: add     r8d, 0FFFFFFFFh
 * 00000001402751A8: jnz     short loc_140275194
 * 00000001402751AA: mov     rax, rbx
 * 00000001402751AD: jmp     short loc_1402751B1
 * 00000001402751AF: xor     ebx, eax
 * 00000001402751B1: shr     rax, 1Fh
 * 00000001402751B5: test    rax, rax
 * 00000001402751B8: jnz     short loc_1402751AF
 * 00000001402751BA: btr     ebx, 1Fh
 * 00000001402751BE: cmp     ebx, [r12+14h]
 * 00000001402751C3: jz      loc_14027031B
 * 00000001402751C9: mov     ecx, [r12+10h]
 * 00000001402751CE: mov     rdx, [r12+8]
 * 00000001402751D3: test    rcx, rcx
 * 00000001402751D6: jz      loc_14027526F
 * 00000001402751DC: mov     eax, [rsi+74Ch]
 * 00000001402751E2: test    al, 40h
 * 00000001402751E4: jz      loc_14027526F
 * 00000001402751EA: mov     r15, cr8
 * 00000001402751EE: mov     r14, rdx
 * 00000001402751F1: lea     r13, [rcx-1]
 * 00000001402751F5: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402751FC: add     r13, rdx
 * 00000001402751FF: or      r13, 0FFFh
 * 0000000140275206: lea     r12, [r14-1]
 * 000000014027520A: mov     eax, 2
 * 000000014027520F: mov     cr8, rax
 * 0000000140275213: mov     rax, [rsi+438h]
 * 000000014027521A: xor     edx, edx
 * 000000014027521C: mov     rcx, r14
 * 000000014027521F: call    KeGuardDispatchICall
 * 0000000140275224: cmp     eax, 0C000022Dh
 * 0000000140275229: jnz     short loc_140275246
 * 000000014027522B: mov     eax, 1
 * 0000000140275230: cmp     r15b, al
 * 0000000140275233: ja      short loc_14027524A
 * 0000000140275235: movzx   eax, r15b
 * 0000000140275239: mov     cr8, rax
 * 000000014027523D: mov     al, [r14]
 * 0000000140275240: mov     rax, cr8
 * 0000000140275244: jmp     short loc_14027520A
 * 0000000140275246: test    eax, eax
 * 0000000140275248: js      short loc_140275260
 * 000000014027524A: mov     r8d, 1000h
 * 0000000140275250: add     r14, r8
 * 0000000140275253: add     r12, r8
 * 0000000140275256: cmp     r12, r13
 * 0000000140275259: jnz     short loc_140275213
 * 000000014027525B: jmp     loc_140270A74
 * 0000000140275260: movzx   eax, r15b
 * 0000000140275264: mov     cr8, rax
 * 0000000140275268: mov     r12, [rbp+1A50h+var_1A48]
 * 000000014027526C: xor     r13d, r13d
 * 000000014027526F: mov     eax, [r12+14h]
 * 0000000140275274: cmp     [rsi+6C0h], r13d
 * 000000014027527B: jnz     short loc_14027528D
 * 000000014027527D: mov     ecx, ebx
 * 000000014027527F: xor     rcx, rax
 * 0000000140275282: mov     rax, [rsi+510h]
 * 0000000140275289: mov     [rax+18h], rcx
 * 000000014027528D: mov     rcx, [r12+8]
 * 0000000140275292: cmp     [rsi+6C0h], r13d
 * 0000000140275299: jmp     loc_140273C6E
 * 000000014027529E: mov     rax, [rsi+370h]
 * 00000001402752A5: xor     ebx, ebx
 * 00000001402752A7: mov     r12, [rsi+4B0h]
 * 00000001402752AE: mov     [rbp+1A50h+var_1A04], ebx
 * 00000001402752B1: call    KeGuardDispatchICall
 * 00000001402752B6: mov     rcx, gs:188h
 * 00000001402752BF: mov     [rbp+1A50h+var_1A40], rax
 * 00000001402752C3: mov     rax, [rsi+168h]
 * 00000001402752CA: call    KeGuardDispatchICall
 * 00000001402752CF: mov     rcx, [rsi+4B8h]
 * 00000001402752D6: lea     r14d, [rbx+1]
 * 00000001402752DA: mov     rax, [rsi+0F0h]
 * 00000001402752E1: mov     dl, r14b
 * 00000001402752E4: call    KeGuardDispatchICall
 * 00000001402752E9: mov     rax, [rsi+568h]
 * 00000001402752F0: mov     [rbp+1A50h+var_1A50], ebx
 * 00000001402752F3: mov     rcx, [rax]
 * 00000001402752F6: mov     r13d, [rcx]
 * 00000001402752F9: lea     rdx, [rcx+10h]
 * 00000001402752FD: mov     [rbp+1A50h+var_1A30], rdx
 * 0000000140275301: lea     rax, ds:0[r13*2]
 * 0000000140275309: add     rax, r13
 * 000000014027530C: lea     rax, [rdx+rax*8]
 * 0000000140275310: mov     [rbp+1A50h+var_19C8], rax
 * 0000000140275317: cmp     [rcx+0Ch], bl
 * 000000014027531A: jz      short loc_140275330
 * 000000014027531C: mov     rax, [r12]
 * 0000000140275320: mov     r13d, ebx
 * 0000000140275323: jmp     short loc_14027532B
 * 0000000140275325: mov     rax, [rax]
 * 0000000140275328: add     r13d, r14d
 * 000000014027532B: cmp     rax, r12
 * 000000014027532E: jnz     short loc_140275325
 * 0000000140275330: mov     r8d, [rsi+610h]
 * 0000000140275337: mov     r15d, r13d
 * 000000014027533A: shl     r15d, 3
 * 000000014027533E: rdtsc
 * 0000000140275340: shl     rdx, 20h
 * 0000000140275344: mov     r9, 7010008004002001h
 * 000000014027534E: or      rax, rdx
 * 0000000140275351: mov     rcx, rax
 * 0000000140275354: ror     rax, 3
 * 0000000140275358: xor     rcx, rax
 * 000000014027535B: mov     rax, r9
 * 000000014027535E: mul     rcx
 * 0000000140275361: mov     rbx, rax
 * 0000000140275364: mov     [rbp+1A50h+var_14F0], rdx
 * 000000014027536B: xor     ebx, edx
 * 000000014027536D: and     ebx, 7FFh
 * 0000000140275373: rdtsc
 * 0000000140275375: shl     rdx, 20h
 * 0000000140275379: or      rax, rdx
 * 000000014027537C: mov     rcx, rax
 * 000000014027537F: ror     rax, 3
 * 0000000140275383: xor     rcx, rax
 * 0000000140275386: mov     rax, r9
 * 0000000140275389: mul     rcx
 * 000000014027538C: lea     ecx, [rbx+1]
 * 000000014027538F: xor     rax, rdx
 * 0000000140275392: mov     [rbp+1A50h+var_14E8], rdx
 * 0000000140275399: xor     edx, edx
 * 000000014027539B: div     rcx
 * 000000014027539E: mov     rax, [rsi+0F8h]
 * 00000001402753A5: mov     ecx, 200h
 * 00000001402753AA: mov     r14, rdx
 * 00000001402753AD: lea     edx, [rbx+r15]
 * 00000001402753B1: call    KeGuardDispatchICall
 * 00000001402753B6: xor     r9d, r9d
 * 00000001402753B9: mov     r11, rax
 * 00000001402753BC: test    rax, rax
 * 00000001402753BF: jnz     short loc_1402753D0
 * 00000001402753C1: lea     eax, [r11+1]
 * 00000001402753C5: add     [rsi+7C8h], eax
 * 00000001402753CB: jmp     loc_140275517
 * 00000001402753D0: mov     r10d, r14d
 * 00000001402753D3: mov     r8, r11
 * 00000001402753D6: cmp     r14d, 8
 * 00000001402753DA: jb      short loc_140275430
 * 00000001402753DC: mov     r9d, r14d
 * 00000001402753DF: mov     esi, 1
 * 00000001402753E4: shr     r9, 3
 * 00000001402753E8: mov     rdi, 7010008004002001h
 * 00000001402753F2: rdtsc
 * 00000001402753F4: shl     rdx, 20h
 * 00000001402753F8: add     r10d, 0FFFFFFF8h
 * 00000001402753FC: or      rax, rdx
 * 00000001402753FF: mov     rcx, rax
 * 0000000140275402: ror     rax, 3
 * 0000000140275406: xor     rcx, rax
 * 0000000140275409: mov     rax, rdi
 * 000000014027540C: mul     rcx
 * 000000014027540F: mov     [rbp+1A50h+var_14E0], rdx
 * 0000000140275416: xor     rdx, rax
 * 0000000140275419: mov     [r8], rdx
 * 000000014027541C: add     r8, 8
 * 0000000140275420: sub     r9, rsi
 * 0000000140275423: jnz     short loc_1402753F2
 * 0000000140275425: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140275429: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140275430: test    r10d, r10d
 * 0000000140275433: jz      short loc_140275474
 * 0000000140275435: rdtsc
 * 0000000140275437: shl     rdx, 20h
 * 000000014027543B: or      rax, rdx
 * 000000014027543E: mov     rcx, rax
 * 0000000140275441: ror     rax, 3
 * 0000000140275445: xor     rcx, rax
 * 0000000140275448: mov     rax, 7010008004002001h
 * 0000000140275452: mul     rcx
 * 0000000140275455: mov     [rbp+1A50h+var_14D8], rdx
 * 000000014027545C: xor     rdx, rax
 * 000000014027545F: mov     eax, 1
 * 0000000140275464: mov     [r8], dl
 * 0000000140275467: add     r8, rax
 * 000000014027546A: shr     rdx, 8
 * 000000014027546E: add     r10d, 0FFFFFFFFh
 * 0000000140275472: jnz     short loc_140275464
 * 0000000140275474: mov     r10d, r14d
 * 0000000140275477: sub     ebx, r14d
 * 000000014027547A: mov     r8d, r15d
 * 000000014027547D: mov     r14d, 1
 * 0000000140275483: add     r8, r10
 * 0000000140275486: mov     r15, 7010008004002001h
 * 0000000140275490: add     r8, r11
 * 0000000140275493: cmp     ebx, 8
 * 0000000140275496: jb      short loc_1402754D1
 * 0000000140275498: mov     r9d, ebx
 * 000000014027549B: shr     r9, 3
 * 000000014027549F: rdtsc
 * 00000001402754A1: shl     rdx, 20h
 * 00000001402754A5: add     ebx, 0FFFFFFF8h
 * 00000001402754A8: or      rax, rdx
 * 00000001402754AB: mov     rcx, rax
 * 00000001402754AE: ror     rax, 3
 * 00000001402754B2: xor     rcx, rax
 * 00000001402754B5: mov     rax, r15
 * 00000001402754B8: mul     rcx
 * 00000001402754BB: mov     [rbp+1A50h+var_14D0], rdx
 * 00000001402754C2: xor     rdx, rax
 * 00000001402754C5: mov     [r8], rdx
 * 00000001402754C8: add     r8, 8
 * 00000001402754CC: sub     r9, r14
 * 00000001402754CF: jnz     short loc_14027549F
 * 00000001402754D1: test    ebx, ebx
 * 00000001402754D3: jz      short loc_140275507
 * 00000001402754D5: rdtsc
 * 00000001402754D7: shl     rdx, 20h
 * 00000001402754DB: or      rax, rdx
 * 00000001402754DE: mov     rcx, rax
 * 00000001402754E1: ror     rax, 3
 * 00000001402754E5: xor     rcx, rax
 * 00000001402754E8: mov     rax, r15
 * 00000001402754EB: mul     rcx
 * 00000001402754EE: mov     [rbp+1A50h+var_14C8], rdx
 * 00000001402754F5: xor     rdx, rax
 * 00000001402754F8: mov     [r8], dl
 * 00000001402754FB: add     r8, r14
 * 00000001402754FE: shr     rdx, 8
 * 0000000140275502: add     ebx, 0FFFFFFFFh
 * 0000000140275505: jnz     short loc_1402754F8
 * 0000000140275507: lea     r15, [r10+r11]
 * 000000014027550B: mov     [rbp+1A50h+var_1800], r11
 * 0000000140275512: test    r15, r15
 * 0000000140275515: jnz     short loc_140275523
 * 0000000140275517: mov     [rbp+1A50h+var_1800], r9
 * 000000014027551E: jmp     loc_14027563C
 * 0000000140275523: mov     rbx, [r12]
 * 0000000140275527: cmp     rbx, r12
 * 000000014027552A: jz      short loc_140275561
 * 000000014027552C: mov     edi, [rbp+1A50h+var_1A50]
 * 000000014027552F: mov     r14, [rbx+30h]
 * 0000000140275533: mov     rax, [rsi+2A0h]
 * 000000014027553A: mov     rcx, r14
 * 000000014027553D: call    KeGuardDispatchICall
 * 0000000140275542: test    eax, eax
 * 0000000140275544: jnz     short loc_140275553
 * 0000000140275546: cmp     edi, r13d
 * 0000000140275549: jnb     short loc_140275553
 * 000000014027554B: mov     eax, edi
 * 000000014027554D: inc     edi
 * 000000014027554F: mov     [r15+rax*8], r14
 * 0000000140275553: mov     rbx, [rbx]
 * 0000000140275556: inc     [rbp+1A50h+var_1A04]
 * 0000000140275559: cmp     rbx, r12
 * 000000014027555C: jnz     short loc_14027552F
 * 000000014027555E: mov     [rbp+1A50h+var_1A50], edi
 * 0000000140275561: mov     r14d, [rbp+1A50h+var_1A50]
 * 0000000140275565: mov     rcx, r15
 * 0000000140275568: mov     rax, [rsi+390h]
 * 000000014027556F: mov     edx, r14d
 * 0000000140275572: call    KeGuardDispatchICall
 * 0000000140275577: mov     r12, [rbp+1A50h+var_1A30]
 * 000000014027557B: mov     r13, [rbp+1A50h+var_19C8]
 * 0000000140275582: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140275586: mov     rbx, [r12+8]
 * 000000014027558B: mov     rax, [rsi+2A0h]
 * 0000000140275592: mov     rcx, rbx
 * 0000000140275595: call    KeGuardDispatchICall
 * 000000014027559A: xor     r10d, r10d
 * 000000014027559D: test    eax, eax
 * 000000014027559F: jnz     loc_140275628
 * 00000001402755A5: lea     edx, [r14-1]
 * 00000001402755A9: mov     r8d, r10d
 * 00000001402755AC: test    edx, edx
 * 00000001402755AE: js      short loc_1402755DB
 * 00000001402755B0: lea     ecx, [rdx+r8]
 * 00000001402755B4: sar     ecx, 1
 * 00000001402755B6: movsxd  rax, ecx
 * 00000001402755B9: mov     r9, [r15+rax*8]
 * 00000001402755BD: cmp     rbx, r9
 * 00000001402755C0: jnb     short loc_1402755CB
 * 00000001402755C2: test    ecx, ecx
 * 00000001402755C4: jz      short loc_1402755DB
 * 00000001402755C6: lea     edx, [rcx-1]
 * 00000001402755C9: jmp     short loc_1402755D1
 * 00000001402755CB: jbe     short loc_1402755D6
 * 00000001402755CD: lea     r8d, [rcx+1]
 * 00000001402755D1: cmp     edx, r8d
 * 00000001402755D4: jge     short loc_1402755B0
 * 00000001402755D6: cmp     edx, r8d
 * 00000001402755D9: jge     short loc_140275628
 * 00000001402755DB: cmp     [rsi+6C0h], r10d
 * 00000001402755E2: jnz     short loc_140275628
 * 00000001402755E4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402755EE: add     rax, rsi
 * 00000001402755F1: mov     [rsi+6C8h], rax
 * 00000001402755F8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140275602: add     rax, rdi
 * 0000000140275605: mov     [rsi+6D0h], rax
 * 000000014027560C: movsxd  rax, dword ptr [rdi]
 * 000000014027560F: mov     [rsi+6D8h], rax
 * 0000000140275616: mov     eax, 1
 * 000000014027561B: mov     [rsi+6E0h], rbx
 * 0000000140275622: mov     [rsi+6C0h], eax
 * 0000000140275628: add     r12, 18h
 * 000000014027562C: cmp     r12, r13
 * 000000014027562F: jb      loc_140275586
 * 0000000140275635: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027563C: mov     rcx, [rsi+4B8h]
 * 0000000140275643: mov     rax, [rsi+118h]
 * 000000014027564A: call    KeGuardDispatchICall
 * 000000014027564F: mov     rax, [rsi+170h]
 * 0000000140275656: call    KeGuardDispatchICall
 * 000000014027565B: mov     rax, [rsi+378h]
 * 0000000140275662: mov     rcx, [rbp+1A50h+var_1A40]
 * 0000000140275666: call    KeGuardDispatchICall
 * 000000014027566B: xor     eax, eax
 * 000000014027566D: cmp     [rbp+1A50h+var_1800], rax
 * 0000000140275674: jz      loc_14027031B
 * 000000014027567A: mov     eax, [rbp+1A50h+var_1A04]
 * 000000014027567D: shl     eax, 9
 * 0000000140275680: add     [rsi+628h], eax
 * 0000000140275686: mov     rax, [rsi+100h]
 * 000000014027568D: mov     rcx, [rbp+1A50h+var_1800]
 * 0000000140275694: jmp     loc_140270316
 * 0000000140275699: mov     r8d, 20h ; ' '
 * 000000014027569F: cmp     ecx, r8d
 * 00000001402756A2: jg      loc_140277A02
 * 00000001402756A8: jz      loc_1402779F2
 * 00000001402756AE: mov     edx, ecx
 * 00000001402756B0: sub     edx, 1Ah
 * 00000001402756B3: jz      loc_1402778C2
 * 00000001402756B9: sub     edx, 1
 * 00000001402756BC: jz      loc_14027774F
 * 00000001402756C2: sub     edx, 1
 * 00000001402756C5: jz      loc_140276D88
 * 00000001402756CB: sub     edx, 1
 * 00000001402756CE: jz      loc_140276960
 * 00000001402756D4: sub     edx, 1
 * 00000001402756D7: jz      loc_14027625F
 * 00000001402756DD: cmp     edx, 1
 * 00000001402756E0: jnz     loc_140277BAF
 * 00000001402756E6: mov     eax, [rsi+630h]
 * 00000001402756EC: test    bl, al
 * 00000001402756EE: jz      loc_140279285
 * 00000001402756F4: xor     eax, eax
 * 00000001402756F6: cmp     [rsi+740h], rax
 * 00000001402756FD: jz      short loc_140275739
 * 00000001402756FF: mov     eax, [rsi+74Ch]
 * 0000000140275705: test    r15b, al
 * 0000000140275708: jnz     short loc_140275739
 * 000000014027570A: mov     rax, [rsi+3C0h]
 * 0000000140275711: lea     rdx, [rbp+1A50h+var_1708]
 * 0000000140275718: xor     r9d, r9d
 * 000000014027571B: xor     r8d, r8d
 * 000000014027571E: lea     ecx, [r9+1Ah]
 * 0000000140275722: call    KeGuardDispatchICall
 * 0000000140275727: mov     rbx, [rbp+1A50h+var_1708]
 * 000000014027572E: xor     r15d, r15d
 * 0000000140275731: test    eax, eax
 * 0000000140275733: cmovs   rbx, r15
 * 0000000140275737: jmp     short loc_14027573F
 * 0000000140275739: xor     r15d, r15d
 * 000000014027573C: mov     ebx, r15d
 * 000000014027573F: mov     rax, [rsi+3A8h]
 * 0000000140275746: xor     ecx, ecx
 * 0000000140275748: mov     [rbp+1A50h+var_1A38], rbx
 * 000000014027574C: mov     r13d, r15d
 * 000000014027574F: mov     [rbp+1A50h+var_19A8], r15d
 * 0000000140275756: call    KeGuardDispatchICall
 * 000000014027575B: mov     r14, rax
 * 000000014027575E: test    rax, rax
 * 0000000140275761: jz      loc_140275EC0
 * 0000000140275767: xor     edi, edi
 * 0000000140275769: mov     rcx, r14
 * 000000014027576C: cmp     rbx, r14
 * 000000014027576F: jnz     loc_140275AF8
 * 0000000140275775: mov     rax, [rsi+398h]
 * 000000014027577C: mov     r15, r12
 * 000000014027577F: call    KeGuardDispatchICall
 * 0000000140275784: test    eax, eax
 * 0000000140275786: js      loc_140275E91
 * 000000014027578C: mov     rax, [rsi+3D0h]
 * 0000000140275793: mov     rcx, r14
 * 0000000140275796: call    KeGuardDispatchICall
 * 000000014027579B: mov     bl, al
 * 000000014027579D: lea     rdx, [rbp+1A50h+var_1998]
 * 00000001402757A4: mov     rax, [rsi+3D8h]
 * 00000001402757AB: mov     rcx, r14
 * 00000001402757AE: call    KeGuardDispatchICall
 * 00000001402757B3: mov     r12b, al
 * 00000001402757B6: mov     byte ptr [rbp+1A50h+var_19E8], al
 * 00000001402757B9: mov     rax, [rsi+3E0h]
 * 00000001402757C0: mov     rcx, r14
 * 00000001402757C3: call    KeGuardDispatchICall
 * 00000001402757C8: mov     [rbp+1A50h+var_1A30], rax
 * 00000001402757CC: cmp     bl, 61h ; 'a'
 * 00000001402757CF: jz      short loc_140275840
 * 00000001402757D1: cmp     [rsi+6C0h], edi
 * 00000001402757D7: jnz     short loc_140275840
 * 00000001402757D9: mov     rax, [rsi+510h]
 * 00000001402757E0: movzx   ecx, bl
 * 00000001402757E3: xor     rcx, 61h
 * 00000001402757E7: mov     [rax+18h], rcx
 * 00000001402757EB: cmp     [rsi+6C0h], edi
 * 00000001402757F1: jnz     short loc_140275840
 * 00000001402757F3: mov     r10, [rbp+1A50h+var_1A48]
 * 00000001402757F7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275801: add     rax, rsi
 * 0000000140275804: mov     r8, 0B3B74BDEE4453415h
 * 000000014027580E: mov     [rsi+6C8h], rax
 * 0000000140275815: mov     r11d, 1
 * 000000014027581B: lea     rax, [r10+r8]
 * 000000014027581F: mov     [rsi+6D0h], rax
 * 0000000140275826: movsxd  rax, dword ptr [r10]
 * 0000000140275829: mov     [rsi+6D8h], rax
 * 0000000140275830: mov     [rsi+6E0h], r14
 * 0000000140275837: mov     [rsi+6C0h], r11d
 * 000000014027583E: jmp     short loc_140275854
 * 0000000140275840: mov     r10, [rbp+1A50h+var_1A48]
 * 0000000140275844: mov     r8, 0B3B74BDEE4453415h
 * 000000014027584E: mov     r11d, 1
 * 0000000140275854: movzx   ecx, bl
 * 0000000140275857: mov     dl, dil
 * 000000014027585A: and     ecx, 7
 * 000000014027585D: mov     r9b, dil
 * 0000000140275860: sub     ecx, 1
 * 0000000140275863: jz      short loc_1402758C0
 * 0000000140275865: cmp     ecx, 1
 * 0000000140275868: jz      short loc_1402758B4
 * 000000014027586A: mov     eax, 7
 * 000000014027586F: test    al, bl
 * 0000000140275871: jz      short loc_1402758C2
 * 0000000140275873: cmp     [rsi+6C0h], edi
 * 0000000140275879: jnz     short loc_1402758C2
 * 000000014027587B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275885: add     rax, rsi
 * 0000000140275888: mov     [rsi+6C8h], rax
 * 000000014027588F: lea     rax, [r10+r8]
 * 0000000140275893: mov     [rsi+6D0h], rax
 * 000000014027589A: movsxd  rax, dword ptr [r10]
 * 000000014027589D: mov     [rsi+6D8h], rax
 * 00000001402758A4: mov     [rsi+6E0h], r14
 * 00000001402758AB: mov     [rsi+6C0h], r11d
 * 00000001402758B2: jmp     short loc_1402758C2
 * 00000001402758B4: mov     eax, 10h
 * 00000001402758B9: mov     dl, al
 * 00000001402758BB: mov     r9b, al
 * 00000001402758BE: jmp     short loc_1402758C2
 * 00000001402758C0: mov     dl, 30h ; '0'
 * 00000001402758C2: mov     r8, [rsi+548h]
 * 00000001402758C9: movzx   ecx, bl
 * 00000001402758CC: mov     rbx, 0A3A03F5891C8B4E8h
 * 00000001402758D6: shr     rcx, 4
 * 00000001402758DA: mov     al, [r8+rcx*2]
 * 00000001402758DE: or      al, dl
 * 00000001402758E0: mov     rdx, 0B3B74BDEE4453415h
 * 00000001402758EA: cmp     al, r12b
 * 00000001402758ED: jz      short loc_140275925
 * 00000001402758EF: cmp     [rsi+6C0h], edi
 * 00000001402758F5: jnz     short loc_140275925
 * 00000001402758F7: lea     rax, [rsi+rbx]
 * 00000001402758FB: mov     [rsi+6C8h], rax
 * 0000000140275902: lea     rax, [r10+rdx]
 * 0000000140275906: mov     [rsi+6D0h], rax
 * 000000014027590D: movsxd  rax, dword ptr [r10]
 * 0000000140275910: mov     [rsi+6D8h], rax
 * 0000000140275917: mov     [rsi+6E0h], r14
 * 000000014027591E: mov     [rsi+6C0h], r11d
 * 0000000140275925: mov     al, [r8+rcx*2+1]
 * 000000014027592A: or      al, r9b
 * 000000014027592D: cmp     al, [rbp+1A50h+var_1998]
 * 0000000140275933: jz      short loc_14027596B
 * 0000000140275935: cmp     [rsi+6C0h], edi
 * 000000014027593B: jnz     short loc_14027596B
 * 000000014027593D: lea     rax, [rsi+rbx]
 * 0000000140275941: mov     [rsi+6C8h], rax
 * 0000000140275948: lea     rax, [r10+rdx]
 * 000000014027594C: mov     [rsi+6D0h], rax
 * 0000000140275953: movsxd  rax, dword ptr [r10]
 * 0000000140275956: mov     [rsi+6D8h], rax
 * 000000014027595D: mov     [rsi+6E0h], r14
 * 0000000140275964: mov     [rsi+6C0h], r11d
 * 000000014027596B: cmp     r14, [rsi+468h]
 * 0000000140275972: jz      short loc_14027598B
 * 0000000140275974: mov     rax, [rsi+3C8h]
 * 000000014027597B: mov     edx, r11d
 * 000000014027597E: mov     rcx, r14
 * 0000000140275981: call    KeGuardDispatchICall
 * 0000000140275986: mov     r12, rax
 * 0000000140275989: jmp     short loc_14027598E
 * 000000014027598B: mov     r12, rdi
 * 000000014027598E: mov     [rbp+1A50h+var_1A40], r12
 * 0000000140275992: test    r12, r12
 * 0000000140275995: jz      loc_140275AD9
 * 000000014027599B: mov     rbx, r12
 * 000000014027599E: cmp     [r12], rdi
 * 00000001402759A2: jz      loc_140275ACA
 * 00000001402759A8: mov     dil, byte ptr [rbp+1A50h+var_19E8]
 * 00000001402759AC: mov     r12, [rbp+1A50h+var_1A30]
 * 00000001402759B0: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 00000001402759B4: mov     rcx, [rbx]
 * 00000001402759B7: mov     rax, [rsi+1E0h]
 * 00000001402759BE: call    KeGuardDispatchICall
 * 00000001402759C3: mov     rcx, [rbx+8]
 * 00000001402759C7: movzx   edx, [rbp+1A50h+var_1998]
 * 00000001402759CE: mov     r13, rcx
 * 00000001402759D1: movzx   eax, dil
 * 00000001402759D5: and     r13, 0FFFFFFFFFFFF0000h
 * 00000001402759DC: cmp     r13, r12
 * 00000001402759DF: cmovz   edx, eax
 * 00000001402759E2: mov     rax, [rsi+3E8h]
 * 00000001402759E9: shr     rcx, 6
 * 00000001402759ED: and     cl, 0Fh
 * 00000001402759F0: call    KeGuardDispatchICall
 * 00000001402759F5: xor     r9d, r9d
 * 00000001402759F8: test    eax, eax
 * 00000001402759FA: jnz     loc_140275AB0
 * 0000000140275A00: test    dword ptr [rsi+748h], 40000000h
 * 0000000140275A0A: lea     r10d, [r9+1]
 * 0000000140275A0E: jz      short loc_140275A4F
 * 0000000140275A10: mov     rcx, [rsi+7F0h]
 * 0000000140275A17: lea     edx, [rax+30h]
 * 0000000140275A1A: lea     r8d, [r9+6]
 * 0000000140275A1E: mov     rax, [r15]
 * 0000000140275A21: add     edx, 0FFFFFFF8h
 * 0000000140275A24: mov     [rcx], rax
 * 0000000140275A27: add     r15, 8
 * 0000000140275A2B: add     rcx, 8
 * 0000000140275A2F: sub     r8, r10
 * 0000000140275A32: jnz     short loc_140275A1E
 * 0000000140275A34: test    edx, edx
 * 0000000140275A36: jz      short loc_140275A48
 * 0000000140275A38: mov     al, [r15]
 * 0000000140275A3B: add     r15, r10
 * 0000000140275A3E: mov     [rcx], al
 * 0000000140275A40: add     rcx, r10
 * 0000000140275A43: add     edx, 0FFFFFFFFh
 * 0000000140275A46: jnz     short loc_140275A38
 * 0000000140275A48: mov     r15, [rsi+7F0h]
 * 0000000140275A4F: mov     [r15+18h], r13
 * 0000000140275A53: mov     rax, [rbx]
 * 0000000140275A56: mov     [r15+20h], rax
 * 0000000140275A5A: mov     eax, [rbx+8]
 * 0000000140275A5D: shr     rax, 6
 * 0000000140275A61: and     al, 0Fh
 * 0000000140275A63: mov     [r15+28h], al
 * 0000000140275A67: cmp     [rsi+6C0h], r9d
 * 0000000140275A6E: jnz     short loc_140275AB0
 * 0000000140275A70: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275A7A: add     rax, rsi
 * 0000000140275A7D: mov     [rsi+6C8h], rax
 * 0000000140275A84: mov     rax, 0B3B74BDEE4453415h
 * 0000000140275A8E: add     rax, r15
 * 0000000140275A91: mov     [rsi+6D0h], rax
 * 0000000140275A98: movsxd  rax, dword ptr [r15]
 * 0000000140275A9B: mov     [rsi+6D8h], rax
 * 0000000140275AA2: mov     [rsi+6E0h], r14
 * 0000000140275AA9: mov     [rsi+6C0h], r10d
 * 0000000140275AB0: add     rbx, 30h ; '0'
 * 0000000140275AB4: cmp     [rbx], r9
 * 0000000140275AB7: jnz     loc_1402759B0
 * 0000000140275ABD: mov     r12, [rbp+1A50h+var_1A40]
 * 0000000140275AC1: xor     edi, edi
 * 0000000140275AC3: mov     r13d, [rbp+1A50h+var_19A8]
 * 0000000140275ACA: mov     rax, [rsi+100h]
 * 0000000140275AD1: mov     rcx, r12
 * 0000000140275AD4: call    KeGuardDispatchICall
 * 0000000140275AD9: mov     rax, [rsi+3A0h]
 * 0000000140275AE0: mov     rcx, r14
 * 0000000140275AE3: call    KeGuardDispatchICall
 * 0000000140275AE8: mov     eax, 8000h
 * 0000000140275AED: add     [rsi+628h], eax
 * 0000000140275AF3: jmp     loc_140275E89
 * 0000000140275AF8: mov     rax, [rsi+3B8h]
 * 0000000140275AFF: call    KeGuardDispatchICall
 * 0000000140275B04: test    eax, eax
 * 0000000140275B06: jz      loc_140275E91
 * 0000000140275B0C: mov     rax, [rsi+398h]
 * 0000000140275B13: mov     rcx, r14
 * 0000000140275B16: mov     r15, r12
 * 0000000140275B19: call    KeGuardDispatchICall
 * 0000000140275B1E: test    eax, eax
 * 0000000140275B20: js      loc_140275E91
 * 0000000140275B26: mov     rax, [rsi+3D0h]
 * 0000000140275B2D: mov     rcx, r14
 * 0000000140275B30: call    KeGuardDispatchICall
 * 0000000140275B35: mov     bl, al
 * 0000000140275B37: lea     rdx, [rbp+1A50h+var_19A4]
 * 0000000140275B3E: mov     rax, [rsi+3D8h]
 * 0000000140275B45: mov     rcx, r14
 * 0000000140275B48: call    KeGuardDispatchICall
 * 0000000140275B4D: mov     dil, al
 * 0000000140275B50: mov     rcx, r14
 * 0000000140275B53: mov     rax, [rsi+3E0h]
 * 0000000140275B5A: call    KeGuardDispatchICall
 * 0000000140275B5F: xor     r10d, r10d
 * 0000000140275B62: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140275B66: cmp     bl, 61h ; 'a'
 * 0000000140275B69: jz      short loc_140275BD7
 * 0000000140275B6B: cmp     [rsi+6C0h], r10d
 * 0000000140275B72: jnz     short loc_140275BD7
 * 0000000140275B74: mov     rax, [rsi+510h]
 * 0000000140275B7B: movzx   ecx, bl
 * 0000000140275B7E: xor     rcx, 61h
 * 0000000140275B82: mov     [rax+18h], rcx
 * 0000000140275B86: cmp     [rsi+6C0h], r10d
 * 0000000140275B8D: jnz     short loc_140275BD7
 * 0000000140275B8F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275B99: lea     r11d, [r10+1]
 * 0000000140275B9D: add     rax, rsi
 * 0000000140275BA0: mov     r8, 0B3B74BDEE4453415h
 * 0000000140275BAA: mov     [rsi+6C8h], rax
 * 0000000140275BB1: lea     rax, [r12+r8]
 * 0000000140275BB5: mov     [rsi+6D0h], rax
 * 0000000140275BBC: movsxd  rax, dword ptr [r12]
 * 0000000140275BC0: mov     [rsi+6D8h], rax
 * 0000000140275BC7: mov     [rsi+6E0h], r14
 * 0000000140275BCE: mov     [rsi+6C0h], r11d
 * 0000000140275BD5: jmp     short loc_140275BE7
 * 0000000140275BD7: mov     r8, 0B3B74BDEE4453415h
 * 0000000140275BE1: mov     r11d, 1
 * 0000000140275BE7: movzx   ecx, bl
 * 0000000140275BEA: mov     dl, r10b
 * 0000000140275BED: and     ecx, 7
 * 0000000140275BF0: mov     r9b, r10b
 * 0000000140275BF3: sub     ecx, 1
 * 0000000140275BF6: jz      short loc_140275C55
 * 0000000140275BF8: cmp     ecx, 1
 * 0000000140275BFB: jz      short loc_140275C49
 * 0000000140275BFD: mov     eax, 7
 * 0000000140275C02: test    al, bl
 * 0000000140275C04: jz      short loc_140275C57
 * 0000000140275C06: cmp     [rsi+6C0h], r10d
 * 0000000140275C0D: jnz     short loc_140275C57
 * 0000000140275C0F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275C19: add     rax, rsi
 * 0000000140275C1C: mov     [rsi+6C8h], rax
 * 0000000140275C23: lea     rax, [r12+r8]
 * 0000000140275C27: mov     [rsi+6D0h], rax
 * 0000000140275C2E: movsxd  rax, dword ptr [r12]
 * 0000000140275C32: mov     [rsi+6D8h], rax
 * 0000000140275C39: mov     [rsi+6E0h], r14
 * 0000000140275C40: mov     [rsi+6C0h], r11d
 * 0000000140275C47: jmp     short loc_140275C57
 * 0000000140275C49: mov     eax, 10h
 * 0000000140275C4E: mov     dl, al
 * 0000000140275C50: mov     r9b, al
 * 0000000140275C53: jmp     short loc_140275C57
 * 0000000140275C55: mov     dl, 30h ; '0'
 * 0000000140275C57: mov     r8, [rsi+548h]
 * 0000000140275C5E: movzx   ecx, bl
 * 0000000140275C61: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140275C6B: shr     rcx, 4
 * 0000000140275C6F: or      dl, [r8+rcx*2]
 * 0000000140275C73: cmp     dl, dil
 * 0000000140275C76: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140275C80: jz      short loc_140275CBA
 * 0000000140275C82: cmp     [rsi+6C0h], r10d
 * 0000000140275C89: jnz     short loc_140275CBA
 * 0000000140275C8B: lea     rax, [rsi+rbx]
 * 0000000140275C8F: mov     [rsi+6C8h], rax
 * 0000000140275C96: lea     rax, [r12+rdx]
 * 0000000140275C9A: mov     [rsi+6D0h], rax
 * 0000000140275CA1: movsxd  rax, dword ptr [r12]
 * 0000000140275CA5: mov     [rsi+6D8h], rax
 * 0000000140275CAC: mov     [rsi+6E0h], r14
 * 0000000140275CB3: mov     [rsi+6C0h], r11d
 * 0000000140275CBA: mov     al, [r8+rcx*2+1]
 * 0000000140275CBF: or      al, r9b
 * 0000000140275CC2: cmp     al, [rbp+1A50h+var_19A4]
 * 0000000140275CC8: jz      short loc_140275D02
 * 0000000140275CCA: cmp     [rsi+6C0h], r10d
 * 0000000140275CD1: jnz     short loc_140275D02
 * 0000000140275CD3: lea     rax, [rsi+rbx]
 * 0000000140275CD7: mov     [rsi+6C8h], rax
 * 0000000140275CDE: lea     rax, [r12+rdx]
 * 0000000140275CE2: mov     [rsi+6D0h], rax
 * 0000000140275CE9: movsxd  rax, dword ptr [r12]
 * 0000000140275CED: mov     [rsi+6D8h], rax
 * 0000000140275CF4: mov     [rsi+6E0h], r14
 * 0000000140275CFB: mov     [rsi+6C0h], r11d
 * 0000000140275D02: cmp     r14, [rsi+468h]
 * 0000000140275D09: jz      short loc_140275D25
 * 0000000140275D0B: mov     rax, [rsi+3C8h]
 * 0000000140275D12: mov     edx, r11d
 * 0000000140275D15: mov     rcx, r14
 * 0000000140275D18: call    KeGuardDispatchICall
 * 0000000140275D1D: mov     r12, rax
 * 0000000140275D20: xor     r10d, r10d
 * 0000000140275D23: jmp     short loc_140275D28
 * 0000000140275D25: mov     r12, r10
 * 0000000140275D28: mov     [rbp+1A50h+var_1A40], r12
 * 0000000140275D2C: test    r12, r12
 * 0000000140275D2F: jz      loc_140275E6D
 * 0000000140275D35: mov     rbx, r12
 * 0000000140275D38: cmp     [r12], r10
 * 0000000140275D3C: jz      loc_140275E5E
 * 0000000140275D42: mov     r12, [rbp+1A50h+var_1A30]
 * 0000000140275D46: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 0000000140275D4A: mov     rcx, [rbx]
 * 0000000140275D4D: mov     rax, [rsi+1E0h]
 * 0000000140275D54: call    KeGuardDispatchICall
 * 0000000140275D59: mov     rcx, [rbx+8]
 * 0000000140275D5D: movzx   edx, [rbp+1A50h+var_19A4]
 * 0000000140275D64: mov     r13, rcx
 * 0000000140275D67: movzx   eax, dil
 * 0000000140275D6B: and     r13, 0FFFFFFFFFFFF0000h
 * 0000000140275D72: cmp     r13, r12
 * 0000000140275D75: cmovz   edx, eax
 * 0000000140275D78: mov     rax, [rsi+3E8h]
 * 0000000140275D7F: shr     rcx, 6
 * 0000000140275D83: and     cl, 0Fh
 * 0000000140275D86: call    KeGuardDispatchICall
 * 0000000140275D8B: xor     r9d, r9d
 * 0000000140275D8E: test    eax, eax
 * 0000000140275D90: jnz     loc_140275E46
 * 0000000140275D96: test    dword ptr [rsi+748h], 40000000h
 * 0000000140275DA0: lea     r10d, [r9+1]
 * 0000000140275DA4: jz      short loc_140275DE5
 * 0000000140275DA6: mov     rcx, [rsi+7F0h]
 * 0000000140275DAD: lea     edx, [rax+30h]
 * 0000000140275DB0: lea     r8d, [r9+6]
 * 0000000140275DB4: mov     rax, [r15]
 * 0000000140275DB7: add     edx, 0FFFFFFF8h
 * 0000000140275DBA: mov     [rcx], rax
 * 0000000140275DBD: add     r15, 8
 * 0000000140275DC1: add     rcx, 8
 * 0000000140275DC5: sub     r8, r10
 * 0000000140275DC8: jnz     short loc_140275DB4
 * 0000000140275DCA: test    edx, edx
 * 0000000140275DCC: jz      short loc_140275DDE
 * 0000000140275DCE: mov     al, [r15]
 * 0000000140275DD1: add     r15, r10
 * 0000000140275DD4: mov     [rcx], al
 * 0000000140275DD6: add     rcx, r10
 * 0000000140275DD9: add     edx, 0FFFFFFFFh
 * 0000000140275DDC: jnz     short loc_140275DCE
 * 0000000140275DDE: mov     r15, [rsi+7F0h]
 * 0000000140275DE5: mov     [r15+18h], r13
 * 0000000140275DE9: mov     rax, [rbx]
 * 0000000140275DEC: mov     [r15+20h], rax
 * 0000000140275DF0: mov     eax, [rbx+8]
 * 0000000140275DF3: shr     rax, 6
 * 0000000140275DF7: and     al, 0Fh
 * 0000000140275DF9: mov     [r15+28h], al
 * 0000000140275DFD: cmp     [rsi+6C0h], r9d
 * 0000000140275E04: jnz     short loc_140275E46
 * 0000000140275E06: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140275E10: add     rax, rsi
 * 0000000140275E13: mov     [rsi+6C8h], rax
 * 0000000140275E1A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140275E24: add     rax, r15
 * 0000000140275E27: mov     [rsi+6D0h], rax
 * 0000000140275E2E: movsxd  rax, dword ptr [r15]
 * 0000000140275E31: mov     [rsi+6D8h], rax
 * 0000000140275E38: mov     [rsi+6E0h], r14
 * 0000000140275E3F: mov     [rsi+6C0h], r10d
 * 0000000140275E46: add     rbx, 30h ; '0'
 * 0000000140275E4A: cmp     [rbx], r9
 * 0000000140275E4D: jnz     loc_140275D46
 * 0000000140275E53: mov     r12, [rbp+1A50h+var_1A40]
 * 0000000140275E57: mov     r13d, [rbp+1A50h+var_19A8]
 * 0000000140275E5E: mov     rax, [rsi+100h]
 * 0000000140275E65: mov     rcx, r12
 * 0000000140275E68: call    KeGuardDispatchICall
 * 0000000140275E6D: mov     rax, [rsi+3A0h]
 * 0000000140275E74: mov     rcx, r14
 * 0000000140275E77: call    KeGuardDispatchICall
 * 0000000140275E7C: mov     eax, 8000h
 * 0000000140275E81: add     [rsi+628h], eax
 * 0000000140275E87: xor     edi, edi
 * 0000000140275E89: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140275E8D: mov     rbx, [rbp+1A50h+var_1A38]
 * 0000000140275E91: mov     rax, [rsi+3A8h]
 * 0000000140275E98: inc     r13d
 * 0000000140275E9B: mov     rcx, r14
 * 0000000140275E9E: mov     [rbp+1A50h+var_19A8], r13d
 * 0000000140275EA5: call    KeGuardDispatchICall
 * 0000000140275EAA: mov     r14, rax
 * 0000000140275EAD: test    rax, rax
 * 0000000140275EB0: jnz     loc_140275769
 * 0000000140275EB6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140275EBD: xor     r15d, r15d
 * 0000000140275EC0: mov     r14, [rsi+468h]
 * 0000000140275EC7: mov     rax, [rsi+398h]
 * 0000000140275ECE: mov     rcx, r14
 * 0000000140275ED1: call    KeGuardDispatchICall
 * 0000000140275ED6: test    eax, eax
 * 0000000140275ED8: js      loc_14027623A
 * 0000000140275EDE: mov     rax, [rsi+3D0h]
 * 0000000140275EE5: mov     rcx, r14
 * 0000000140275EE8: call    KeGuardDispatchICall
 * 0000000140275EED: mov     bl, al
 * 0000000140275EEF: lea     rdx, [rbp+1A50h+var_19A3]
 * 0000000140275EF6: mov     rax, [rsi+3D8h]
 * 0000000140275EFD: mov     rcx, r14
 * 0000000140275F00: call    KeGuardDispatchICall
 * 0000000140275F05: mov     r13b, al
 * 0000000140275F08: mov     rcx, r14
 * 0000000140275F0B: mov     rax, [rsi+3E0h]
 * 0000000140275F12: call    KeGuardDispatchICall
 * 0000000140275F17: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140275F1B: cmp     bl, 72h ; 'r'
 * 0000000140275F1E: jz      short loc_140275F8F
 * 0000000140275F20: cmp     [rsi+6C0h], r15d
 * 0000000140275F27: jnz     short loc_140275F8F
 * 0000000140275F29: mov     rax, [rsi+510h]
 * 0000000140275F30: movzx   ecx, bl
 * 0000000140275F33: xor     rcx, 72h
 * 0000000140275F37: mov     [rax+18h], rcx
 * 0000000140275F3B: cmp     [rsi+6C0h], r15d
 * 0000000140275F42: jnz     short loc_140275F8F
 * 0000000140275F44: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140275F4E: mov     r11, 0B3B74BDEE4453415h
 * 0000000140275F58: mov     r10d, 1
 * 0000000140275F5E: lea     rax, [rsi+r8]
 * 0000000140275F62: mov     [rsi+6C8h], rax
 * 0000000140275F69: lea     rax, [r12+r11]
 * 0000000140275F6D: mov     [rsi+6D0h], rax
 * 0000000140275F74: movsxd  rax, dword ptr [r12]
 * 0000000140275F78: mov     [rsi+6D8h], rax
 * 0000000140275F7F: mov     [rsi+6E0h], r14
 * 0000000140275F86: mov     [rsi+6C0h], r10d
 * 0000000140275F8D: jmp     short loc_140275FA9
 * 0000000140275F8F: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140275F99: mov     r11, 0B3B74BDEE4453415h
 * 0000000140275FA3: mov     r10d, 1
 * 0000000140275FA9: movzx   ecx, bl
 * 0000000140275FAC: mov     dl, r15b
 * 0000000140275FAF: and     ecx, 7
 * 0000000140275FB2: mov     r9b, r15b
 * 0000000140275FB5: sub     ecx, 1
 * 0000000140275FB8: jz      short loc_14027600E
 * 0000000140275FBA: cmp     ecx, 1
 * 0000000140275FBD: jz      short loc_140276002
 * 0000000140275FBF: mov     eax, 7
 * 0000000140275FC4: test    al, bl
 * 0000000140275FC6: jz      short loc_140276010
 * 0000000140275FC8: cmp     [rsi+6C0h], r15d
 * 0000000140275FCF: jnz     short loc_140276010
 * 0000000140275FD1: lea     rax, [rsi+r8]
 * 0000000140275FD5: mov     [rsi+6C8h], rax
 * 0000000140275FDC: lea     rax, [r12+r11]
 * 0000000140275FE0: mov     [rsi+6D0h], rax
 * 0000000140275FE7: movsxd  rax, dword ptr [r12]
 * 0000000140275FEB: mov     [rsi+6D8h], rax
 * 0000000140275FF2: mov     [rsi+6E0h], r14
 * 0000000140275FF9: mov     [rsi+6C0h], r10d
 * 0000000140276000: jmp     short loc_140276010
 * 0000000140276002: mov     eax, 10h
 * 0000000140276007: mov     dl, al
 * 0000000140276009: mov     r9b, al
 * 000000014027600C: jmp     short loc_140276010
 * 000000014027600E: mov     dl, 30h ; '0'
 * 0000000140276010: mov     r8, [rsi+548h]
 * 0000000140276017: movzx   ecx, bl
 * 000000014027601A: shr     rcx, 4
 * 000000014027601E: or      dl, [r8+rcx*2]
 * 0000000140276022: cmp     dl, r13b
 * 0000000140276025: mov     rdx, 0A3A03F5891C8B4E8h
 * 000000014027602F: jz      short loc_140276069
 * 0000000140276031: cmp     [rsi+6C0h], r15d
 * 0000000140276038: jnz     short loc_140276069
 * 000000014027603A: lea     rax, [rsi+rdx]
 * 000000014027603E: mov     [rsi+6C8h], rax
 * 0000000140276045: lea     rax, [r12+r11]
 * 0000000140276049: mov     [rsi+6D0h], rax
 * 0000000140276050: movsxd  rax, dword ptr [r12]
 * 0000000140276054: mov     [rsi+6D8h], rax
 * 000000014027605B: mov     [rsi+6E0h], r14
 * 0000000140276062: mov     [rsi+6C0h], r10d
 * 0000000140276069: mov     al, [r8+rcx*2+1]
 * 000000014027606E: or      al, r9b
 * 0000000140276071: cmp     al, [rbp+1A50h+var_19A3]
 * 0000000140276077: jz      short loc_1402760B1
 * 0000000140276079: cmp     [rsi+6C0h], r15d
 * 0000000140276080: jnz     short loc_1402760B1
 * 0000000140276082: lea     rax, [rsi+rdx]
 * 0000000140276086: mov     [rsi+6C8h], rax
 * 000000014027608D: lea     rax, [r12+r11]
 * 0000000140276091: mov     [rsi+6D0h], rax
 * 0000000140276098: movsxd  rax, dword ptr [r12]
 * 000000014027609C: mov     [rsi+6D8h], rax
 * 00000001402760A3: mov     [rsi+6E0h], r14
 * 00000001402760AA: mov     [rsi+6C0h], r10d
 * 00000001402760B1: cmp     r14, [rsi+468h]
 * 00000001402760B8: jz      short loc_1402760CF
 * 00000001402760BA: mov     rax, [rsi+3C8h]
 * 00000001402760C1: mov     edx, r10d
 * 00000001402760C4: mov     rcx, r14
 * 00000001402760C7: call    KeGuardDispatchICall
 * 00000001402760CC: mov     r15, rax
 * 00000001402760CF: xor     eax, eax
 * 00000001402760D1: mov     [rbp+1A50h+var_1A40], r15
 * 00000001402760D5: test    r15, r15
 * 00000001402760D8: jz      loc_140276219
 * 00000001402760DE: mov     rbx, r15
 * 00000001402760E1: cmp     [r15], rax
 * 00000001402760E4: jz      loc_14027620A
 * 00000001402760EA: mov     rdi, [rbp+1A50h+var_1A30]
 * 00000001402760EE: mov     r15, [rbp+1A50h+var_1A48]
 * 00000001402760F2: and     qword ptr [rbx], 0FFFFFFFFFFFFFFFCh
 * 00000001402760F6: mov     rcx, [rbx]
 * 00000001402760F9: mov     rax, [rsi+1E0h]
 * 0000000140276100: call    KeGuardDispatchICall
 * 0000000140276105: mov     rcx, [rbx+8]
 * 0000000140276109: movzx   edx, [rbp+1A50h+var_19A3]
 * 0000000140276110: mov     r12, rcx
 * 0000000140276113: movzx   eax, r13b
 * 0000000140276117: and     r12, 0FFFFFFFFFFFF0000h
 * 000000014027611E: cmp     r12, rdi
 * 0000000140276121: cmovz   edx, eax
 * 0000000140276124: mov     rax, [rsi+3E8h]
 * 000000014027612B: shr     rcx, 6
 * 000000014027612F: and     cl, 0Fh
 * 0000000140276132: call    KeGuardDispatchICall
 * 0000000140276137: xor     r9d, r9d
 * 000000014027613A: test    eax, eax
 * 000000014027613C: jnz     loc_1402761F2
 * 0000000140276142: test    dword ptr [rsi+748h], 40000000h
 * 000000014027614C: lea     r10d, [r9+1]
 * 0000000140276150: jz      short loc_140276191
 * 0000000140276152: mov     rcx, [rsi+7F0h]
 * 0000000140276159: lea     edx, [rax+30h]
 * 000000014027615C: lea     r8d, [r9+6]
 * 0000000140276160: mov     rax, [r15]
 * 0000000140276163: add     edx, 0FFFFFFF8h
 * 0000000140276166: mov     [rcx], rax
 * 0000000140276169: add     r15, 8
 * 000000014027616D: add     rcx, 8
 * 0000000140276171: sub     r8, r10
 * 0000000140276174: jnz     short loc_140276160
 * 0000000140276176: test    edx, edx
 * 0000000140276178: jz      short loc_14027618A
 * 000000014027617A: mov     al, [r15]
 * 000000014027617D: add     r15, r10
 * 0000000140276180: mov     [rcx], al
 * 0000000140276182: add     rcx, r10
 * 0000000140276185: add     edx, 0FFFFFFFFh
 * 0000000140276188: jnz     short loc_14027617A
 * 000000014027618A: mov     r15, [rsi+7F0h]
 * 0000000140276191: mov     [r15+18h], r12
 * 0000000140276195: mov     rax, [rbx]
 * 0000000140276198: mov     [r15+20h], rax
 * 000000014027619C: mov     eax, [rbx+8]
 * 000000014027619F: shr     rax, 6
 * 00000001402761A3: and     al, 0Fh
 * 00000001402761A5: mov     [r15+28h], al
 * 00000001402761A9: cmp     [rsi+6C0h], r9d
 * 00000001402761B0: jnz     short loc_1402761F2
 * 00000001402761B2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402761BC: add     rax, rsi
 * 00000001402761BF: mov     [rsi+6C8h], rax
 * 00000001402761C6: mov     rax, 0B3B74BDEE4453415h
 * 00000001402761D0: add     rax, r15
 * 00000001402761D3: mov     [rsi+6D0h], rax
 * 00000001402761DA: movsxd  rax, dword ptr [r15]
 * 00000001402761DD: mov     [rsi+6D8h], rax
 * 00000001402761E4: mov     [rsi+6E0h], r14
 * 00000001402761EB: mov     [rsi+6C0h], r10d
 * 00000001402761F2: add     rbx, 30h ; '0'
 * 00000001402761F6: cmp     [rbx], r9
 * 00000001402761F9: jnz     loc_1402760F2
 * 00000001402761FF: mov     r15, [rbp+1A50h+var_1A40]
 * 0000000140276203: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027620A: mov     rax, [rsi+100h]
 * 0000000140276211: mov     rcx, r15
 * 0000000140276214: call    KeGuardDispatchICall
 * 0000000140276219: mov     rax, [rsi+3A0h]
 * 0000000140276220: mov     rcx, r14
 * 0000000140276223: call    KeGuardDispatchICall
 * 0000000140276228: mov     r13d, [rbp+1A50h+var_19A8]
 * 000000014027622F: mov     eax, 8000h
 * 0000000140276234: add     [rsi+628h], eax
 * 000000014027623A: mov     rcx, [rbp+1A50h+var_1A38]
 * 000000014027623E: test    rcx, rcx
 * 0000000140276241: jz      short loc_14027624F
 * 0000000140276243: mov     rax, [rsi+1E0h]
 * 000000014027624A: call    KeGuardDispatchICall
 * 000000014027624F: shl     r13d, 8
 * 0000000140276253: add     [rsi+628h], r13d
 * 000000014027625A: jmp     loc_14027031B
 * 000000014027625F: test    [r12+2Ah], bl
 * 0000000140276264: jz      short loc_1402762A2
 * 0000000140276266: xor     ecx, ecx
 * 0000000140276268: cmp     [rsi+740h], rcx
 * 000000014027626F: jz      loc_140276463
 * 0000000140276275: mov     eax, [rsi+74Ch]
 * 000000014027627B: test    r15b, al
 * 000000014027627E: jnz     loc_140276463
 * 0000000140276284: cmp     [rsi+624h], ecx
 * 000000014027628A: jnz     loc_140276456
 * 0000000140276290: shl     eax, 3
 * 0000000140276293: xor     eax, [rsi+74Ch]
 * 0000000140276299: and     eax, r8d
 * 000000014027629C: xor     [rsi+74Ch], eax
 * 00000001402762A2: mov     r8d, [rsi+624h]
 * 00000001402762A9: mov     r9, [r12+8]
 * 00000001402762AE: mov     [rbp+1A50h+var_1A00], r9
 * 00000001402762B2: lea     rax, [r8+r8*2]
 * 00000001402762B6: lea     rcx, [r9+rax*4]
 * 00000001402762BA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001402762C4: lea     r10, [rcx+0Ch]
 * 00000001402762C8: mov     [rbp+1A50h+var_1A30], rcx
 * 00000001402762CC: mov     ecx, [r12+24h]
 * 00000001402762D1: mul     rcx
 * 00000001402762D4: mov     [rbp+1A50h+var_1A40], r10
 * 00000001402762D8: mov     r11, rdx
 * 00000001402762DB: shr     r11, 3
 * 00000001402762DF: mov     eax, r11d
 * 00000001402762E2: mov     [rbp+1A50h+var_1988], r11
 * 00000001402762E9: lea     ebx, [r11-1]
 * 00000001402762ED: lea     rcx, [rax+rax*2]
 * 00000001402762F1: mov     dword ptr [rbp+1A50h+var_1A28], ebx
 * 00000001402762F4: lea     rax, [r9+rcx*4]
 * 00000001402762F8: mov     r9d, ebx
 * 00000001402762FB: add     r9, 7
 * 00000001402762FF: mov     [rbp+1A50h+var_19C8], rax
 * 0000000140276306: lea     rax, [r12+30h]
 * 000000014027630B: and     r9, 0FFFFFFFFFFFFFFF8h
 * 000000014027630F: add     r9, rax
 * 0000000140276312: lea     rdx, [r8+rax]
 * 0000000140276316: movzx   eax, word ptr [r12+28h]
 * 000000014027631C: cmp     r8d, ebx
 * 000000014027631F: mov     [rbp+1A50h+var_1A38], rdx
 * 0000000140276323: mov     r8d, 0Ch
 * 0000000140276329: mov     [rbp+1A50h+var_19F0], r9
 * 000000014027632D: lea     rcx, [rax+rax*2]
 * 0000000140276331: lea     rax, [r9+rcx*8]
 * 0000000140276335: mov     [rbp+1A50h+var_19B8], rax
 * 000000014027633C: jnb     loc_1402765A9
 * 0000000140276342: mov     rdi, [rbp+1A50h+var_1A30]
 * 0000000140276346: mov     al, [rdx]
 * 0000000140276348: test    al, al
 * 000000014027634A: js      loc_140276546
 * 0000000140276350: mov     eax, [rdi+4]
 * 0000000140276353: mov     r9d, [r10]
 * 0000000140276356: mov     r15d, eax
 * 0000000140276359: add     r15, [r12+18h]
 * 000000014027635E: sub     r9d, eax
 * 0000000140276361: add     [rsi+628h], r9d
 * 0000000140276368: mov     r10, r15
 * 000000014027636B: mov     ebx, [rsi+614h]
 * 0000000140276371: mov     rax, r15
 * 0000000140276374: mov     r14, [rsi+618h]
 * 000000014027637B: lea     rcx, [r15+r9]
 * 000000014027637F: mov     [rbp+1A50h+var_1A30], r15
 * 0000000140276383: mov     r12d, r9d
 * 0000000140276386: cmp     r15, rcx
 * 0000000140276389: jnb     short loc_140276397
 * 000000014027638B: prefetchnta byte ptr [rax]
 * 000000014027638E: add     rax, 40h ; '@'
 * 0000000140276392: cmp     rax, rcx
 * 0000000140276395: jb      short loc_14027638B
 * 0000000140276397: mov     r11d, r9d
 * 000000014027639A: mov     r8, r14
 * 000000014027639D: shr     r11d, 7
 * 00000001402763A1: mov     r13d, 1
 * 00000001402763A7: test    r11d, r11d
 * 00000001402763AA: jz      short loc_14027640E
 * 00000001402763AC: mov     rsi, 7010008004002001h
 * 00000001402763B6: mov     edx, 8
 * 00000001402763BB: mov     rax, [r10]
 * 00000001402763BE: mov     ecx, ebx
 * 00000001402763C0: xor     rax, r8
 * 00000001402763C3: mov     r8, [r10+8]
 * 00000001402763C7: rol     rax, cl
 * 00000001402763CA: add     r10, 10h
 * 00000001402763CE: xor     r8, rax
 * 00000001402763D1: rol     r8, cl
 * 00000001402763D4: sub     rdx, r13
 * 00000001402763D7: jnz     short loc_1402763BB
 * 00000001402763D9: mov     rcx, r10
 * 00000001402763DC: sub     rcx, r15
 * 00000001402763DF: xor     rcx, r14
 * 00000001402763E2: mov     rax, rcx
 * 00000001402763E5: rol     rax, 11h
 * 00000001402763E9: xor     rcx, rax
 * 00000001402763EC: mov     rax, rsi
 * 00000001402763EF: mul     rcx
 * 00000001402763F2: xor     eax, edx
 * 00000001402763F4: mov     [rbp+1A50h+var_14C0], rdx
 * 00000001402763FB: xor     ebx, eax
 * 00000001402763FD: and     ebx, 3Fh
 * 0000000140276400: cmovz   ebx, r13d
 * 0000000140276404: add     r11d, 0FFFFFFFFh
 * 0000000140276408: jnz     short loc_1402763B6
 * 000000014027640A: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027640E: and     r9d, 7Fh
 * 0000000140276412: cmp     r9d, 8
 * 0000000140276416: jb      short loc_140276434
 * 0000000140276418: mov     edx, r9d
 * 000000014027641B: shr     rdx, 3
 * 000000014027641F: xor     r8, [r10]
 * 0000000140276422: mov     ecx, ebx
 * 0000000140276424: rol     r8, cl
 * 0000000140276427: add     r10, 8
 * 000000014027642B: add     r9d, 0FFFFFFF8h
 * 000000014027642F: sub     rdx, r13
 * 0000000140276432: jnz     short loc_14027641F
 * 0000000140276434: xor     r11d, r11d
 * 0000000140276437: test    r9d, r9d
 * 000000014027643A: jz      short loc_140276451
 * 000000014027643C: movzx   eax, byte ptr [r10]
 * 0000000140276440: mov     ecx, ebx
 * 0000000140276442: xor     r8, rax
 * 0000000140276445: add     r10, r13
 * 0000000140276448: rol     r8, cl
 * 000000014027644B: add     r9d, 0FFFFFFFFh
 * 000000014027644F: jnz     short loc_14027643C
 * 0000000140276451: mov     rax, r8
 * 0000000140276454: jmp     short loc_140276471
 * 0000000140276456: shr     eax, 5
 * 0000000140276459: not     eax
 * 000000014027645B: and     eax, ebx
 * 000000014027645D: jnz     loc_1402762A2
 * 0000000140276463: mov     [rsi+624h], ecx
 * 0000000140276469: jmp     loc_140279285
 * 000000014027646E: xor     r8b, al
 * 0000000140276471: shr     rax, 7
 * 0000000140276475: test    rax, rax
 * 0000000140276478: jnz     short loc_14027646E
 * 000000014027647A: mov     rdx, [rbp+1A50h+var_1A38]
 * 000000014027647E: movzx   r13d, r8b
 * 0000000140276482: and     r13d, 7Fh
 * 0000000140276486: movzx   eax, byte ptr [rdx]
 * 0000000140276489: and     eax, 7Fh
 * 000000014027648C: cmp     r13d, eax
 * 000000014027648F: jz      loc_14027652D
 * 0000000140276495: test    r12, r12
 * 0000000140276498: jz      loc_14027672B
 * 000000014027649E: mov     eax, [rsi+74Ch]
 * 00000001402764A4: test    al, 40h
 * 00000001402764A6: jz      loc_14027672B
 * 00000001402764AC: mov     r14, cr8
 * 00000001402764B0: mov     rbx, r15
 * 00000001402764B3: dec     r15
 * 00000001402764B6: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001402764BD: add     r12, r15
 * 00000001402764C0: or      r12, 0FFFh
 * 00000001402764C7: lea     r15, [rbx-1]
 * 00000001402764CB: mov     eax, 2
 * 00000001402764D0: mov     cr8, rax
 * 00000001402764D4: mov     rax, [rsi+438h]
 * 00000001402764DB: xor     edx, edx
 * 00000001402764DD: mov     rcx, rbx
 * 00000001402764E0: call    KeGuardDispatchICall
 * 00000001402764E5: cmp     eax, 0C000022Dh
 * 00000001402764EA: jnz     short loc_140276506
 * 00000001402764EC: mov     eax, 1
 * 00000001402764F1: cmp     r14b, al
 * 00000001402764F4: ja      short loc_140276511
 * 00000001402764F6: movzx   eax, r14b
 * 00000001402764FA: mov     cr8, rax
 * 00000001402764FE: mov     al, [rbx]
 * 0000000140276500: mov     rax, cr8
 * 0000000140276504: jmp     short loc_1402764CB
 * 0000000140276506: xor     r11d, r11d
 * 0000000140276509: test    eax, eax
 * 000000014027650B: js      loc_14027671B
 * 0000000140276511: mov     eax, 1000h
 * 0000000140276516: add     rbx, rax
 * 0000000140276519: add     r15, rax
 * 000000014027651C: cmp     r15, r12
 * 000000014027651F: jnz     short loc_1402764D4
 * 0000000140276521: movzx   eax, r14b
 * 0000000140276525: mov     cr8, rax
 * 0000000140276529: mov     rdx, [rbp+1A50h+var_1A38]
 * 000000014027652D: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140276531: add     dword ptr [rsi+628h], 40h ; '@'
 * 0000000140276538: mov     r8d, 0Ch
 * 000000014027653E: mov     r10, [rbp+1A50h+var_1A40]
 * 0000000140276542: mov     r13, [rbp+1A50h+var_1A10]
 * 0000000140276546: inc     rdx
 * 0000000140276549: add     r10, r8
 * 000000014027654C: add     rdi, r8
 * 000000014027654F: mov     [rbp+1A50h+var_1A38], rdx
 * 0000000140276553: mov     [rbp+1A50h+var_1A40], r10
 * 0000000140276557: cmp     r10, [rbp+1A50h+var_19C8]
 * 000000014027655E: jnb     short loc_140276570
 * 0000000140276560: mov     eax, [r13+0]
 * 0000000140276564: cmp     [rsi+628h], eax
 * 000000014027656A: jl      loc_140276346
 * 0000000140276570: sub     rdi, [rbp+1A50h+var_1A00]
 * 0000000140276574: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014027657E: mov     r9, [rbp+1A50h+var_19F0]
 * 0000000140276582: mov     r11, [rbp+1A50h+var_1988]
 * 0000000140276589: mov     ebx, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027658C: imul    rdi
 * 000000014027658F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140276596: sar     rdx, 1
 * 0000000140276599: mov     rax, rdx
 * 000000014027659C: shr     rax, 3Fh
 * 00000001402765A0: add     rdx, rax
 * 00000001402765A3: mov     [rsi+624h], edx
 * 00000001402765A9: mov     ecx, [rsi+624h]
 * 00000001402765AF: cmp     ecx, ebx
 * 00000001402765B1: jb      loc_14027031B
 * 00000001402765B7: mov     eax, [rsi+62Ch]
 * 00000001402765BD: mov     ebx, 1
 * 00000001402765C2: cmp     [rsi+628h], eax
 * 00000001402765C8: jge     loc_140279285
 * 00000001402765CE: sub     ecx, r11d
 * 00000001402765D1: add     ecx, ebx
 * 00000001402765D3: lea     rcx, [rcx+rcx*2]
 * 00000001402765D7: lea     rcx, [r9+rcx*8]
 * 00000001402765DB: mov     [rbp+1A50h+var_1A40], rcx
 * 00000001402765DF: mov     rdi, [rbp+1A50h+var_1A48]
 * 00000001402765E3: lea     rdx, [rcx+8]
 * 00000001402765E7: mov     eax, 2
 * 00000001402765EC: mov     [rbp+1A50h+var_1A38], rdx
 * 00000001402765F0: mov     r15d, eax
 * 00000001402765F3: mov     [rbp+1A50h+var_19F0], rax
 * 00000001402765F7: mov     ecx, 80000000h
 * 00000001402765FC: test    [rdx], ecx
 * 00000001402765FE: jnz     loc_14027694F
 * 0000000140276604: mov     eax, [rdx-8]
 * 0000000140276607: mov     r8d, [rdx-4]
 * 000000014027660B: mov     r12d, eax
 * 000000014027660E: add     r12, [rdi+18h]
 * 0000000140276612: sub     r8d, eax
 * 0000000140276615: add     [rsi+628h], r8d
 * 000000014027661C: mov     r9, r12
 * 000000014027661F: mov     r11d, [rsi+614h]
 * 0000000140276626: mov     rax, r12
 * 0000000140276629: mov     r14, [rsi+618h]
 * 0000000140276630: lea     rcx, [r12+r8]
 * 0000000140276634: mov     [rbp+1A50h+var_1A30], r12
 * 0000000140276638: mov     r13d, r8d
 * 000000014027663B: cmp     r12, rcx
 * 000000014027663E: jnb     short loc_14027664C
 * 0000000140276640: prefetchnta byte ptr [rax]
 * 0000000140276643: add     rax, 40h ; '@'
 * 0000000140276647: cmp     rax, rcx
 * 000000014027664A: jb      short loc_140276640
 * 000000014027664C: mov     r10d, r8d
 * 000000014027664F: mov     rbx, r14
 * 0000000140276652: shr     r10d, 7
 * 0000000140276656: test    r10d, r10d
 * 0000000140276659: jz      short loc_1402766C8
 * 000000014027665B: mov     rsi, 7010008004002001h
 * 0000000140276665: mov     r15d, 1
 * 000000014027666B: mov     eax, 8
 * 0000000140276670: xor     rbx, [r9]
 * 0000000140276673: mov     ecx, r11d
 * 0000000140276676: rol     rbx, cl
 * 0000000140276679: xor     rbx, [r9+8]
 * 000000014027667D: add     r9, 10h
 * 0000000140276681: rol     rbx, cl
 * 0000000140276684: sub     rax, r15
 * 0000000140276687: jnz     short loc_140276670
 * 0000000140276689: mov     rcx, r9
 * 000000014027668C: sub     rcx, r12
 * 000000014027668F: xor     rcx, r14
 * 0000000140276692: mov     rax, rcx
 * 0000000140276695: rol     rax, 11h
 * 0000000140276699: xor     rcx, rax
 * 000000014027669C: mov     rax, rsi
 * 000000014027669F: mul     rcx
 * 00000001402766A2: xor     eax, edx
 * 00000001402766A4: mov     [rbp+1A50h+var_14B8], rdx
 * 00000001402766AB: xor     r11d, eax
 * 00000001402766AE: and     r11d, 3Fh
 * 00000001402766B2: cmovz   r11d, r15d
 * 00000001402766B6: add     r10d, 0FFFFFFFFh
 * 00000001402766BA: jnz     short loc_14027666B
 * 00000001402766BC: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402766C0: mov     rdx, [rbp+1A50h+var_1A38]
 * 00000001402766C4: mov     r15, [rbp+1A50h+var_19F0]
 * 00000001402766C8: and     r8d, 7Fh
 * 00000001402766CC: mov     r14d, 1
 * 00000001402766D2: cmp     r8d, 8
 * 00000001402766D6: jb      short loc_1402766F5
 * 00000001402766D8: mov     eax, r8d
 * 00000001402766DB: shr     rax, 3
 * 00000001402766DF: xor     rbx, [r9]
 * 00000001402766E2: mov     ecx, r11d
 * 00000001402766E5: rol     rbx, cl
 * 00000001402766E8: add     r9, 8
 * 00000001402766EC: add     r8d, 0FFFFFFF8h
 * 00000001402766F0: sub     rax, r14
 * 00000001402766F3: jnz     short loc_1402766DF
 * 00000001402766F5: xor     r10d, r10d
 * 00000001402766F8: test    r8d, r8d
 * 00000001402766FB: jz      short loc_140276713
 * 00000001402766FD: movzx   eax, byte ptr [r9]
 * 0000000140276701: mov     ecx, r11d
 * 0000000140276704: xor     rbx, rax
 * 0000000140276707: add     r9, r14
 * 000000014027670A: rol     rbx, cl
 * 000000014027670D: add     r8d, 0FFFFFFFFh
 * 0000000140276711: jnz     short loc_1402766FD
 * 0000000140276713: mov     rax, rbx
 * 0000000140276716: jmp     loc_1402767AC
 * 000000014027671B: movzx   eax, r14b
 * 000000014027671F: mov     cr8, rax
 * 0000000140276723: mov     r15, [rbp+1A50h+var_1A30]
 * 0000000140276727: mov     rdx, [rbp+1A50h+var_1A38]
 * 000000014027672B: movzx   eax, byte ptr [rdx]
 * 000000014027672E: and     eax, 7Fh
 * 0000000140276731: cmp     [rsi+6C0h], r11d
 * 0000000140276738: jnz     loc_14027652D
 * 000000014027673E: mov     ecx, r13d
 * 0000000140276741: xor     rcx, rax
 * 0000000140276744: mov     rax, [rsi+510h]
 * 000000014027674B: mov     [rax+18h], rcx
 * 000000014027674F: cmp     [rsi+6C0h], r11d
 * 0000000140276756: jnz     loc_14027652D
 * 000000014027675C: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140276760: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027676A: add     rax, rsi
 * 000000014027676D: mov     [rsi+6C8h], rax
 * 0000000140276774: mov     rax, 0B3B74BDEE4453415h
 * 000000014027677E: add     rax, r12
 * 0000000140276781: mov     [rsi+6D0h], rax
 * 0000000140276788: movsxd  rax, dword ptr [r12]
 * 000000014027678C: mov     [rsi+6D8h], rax
 * 0000000140276793: mov     eax, 1
 * 0000000140276798: mov     [rsi+6E0h], r15
 * 000000014027679F: mov     [rsi+6C0h], eax
 * 00000001402767A5: jmp     loc_140276531
 * 00000001402767AA: xor     ebx, eax
 * 00000001402767AC: shr     rax, 1Fh
 * 00000001402767B0: test    rax, rax
 * 00000001402767B3: jnz     short loc_1402767AA
 * 00000001402767B5: mov     eax, [rdx]
 * 00000001402767B7: btr     ebx, 1Fh
 * 00000001402767BB: btr     eax, 1Fh
 * 00000001402767BF: cmp     ebx, eax
 * 00000001402767C1: jz      loc_1402768F2
 * 00000001402767C7: test    r13, r13
 * 00000001402767CA: jz      loc_140276858
 * 00000001402767D0: mov     eax, [rsi+74Ch]
 * 00000001402767D6: test    al, 40h
 * 00000001402767D8: jz      short loc_140276858
 * 00000001402767DA: mov     r15, cr8
 * 00000001402767DE: mov     r14, r12
 * 00000001402767E1: dec     r12
 * 00000001402767E4: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402767EB: add     r13, r12
 * 00000001402767EE: or      r13, 0FFFh
 * 00000001402767F5: lea     r12, [r14-1]
 * 00000001402767F9: mov     eax, 2
 * 00000001402767FE: mov     cr8, rax
 * 0000000140276802: mov     rax, [rsi+438h]
 * 0000000140276809: xor     edx, edx
 * 000000014027680B: mov     rcx, r14
 * 000000014027680E: call    KeGuardDispatchICall
 * 0000000140276813: cmp     eax, 0C000022Dh
 * 0000000140276818: jnz     short loc_140276839
 * 000000014027681A: mov     eax, 1
 * 000000014027681F: cmp     r15b, al
 * 0000000140276822: ja      loc_1402768CA
 * 0000000140276828: movzx   eax, r15b
 * 000000014027682C: mov     cr8, rax
 * 0000000140276830: mov     al, [r14]
 * 0000000140276833: mov     rax, cr8
 * 0000000140276837: jmp     short loc_1402767F9
 * 0000000140276839: xor     r10d, r10d
 * 000000014027683C: test    eax, eax
 * 000000014027683E: jns     loc_1402768CD
 * 0000000140276844: movzx   eax, r15b
 * 0000000140276848: mov     cr8, rax
 * 000000014027684C: mov     r12, [rbp+1A50h+var_1A30]
 * 0000000140276850: mov     rdx, [rbp+1A50h+var_1A38]
 * 0000000140276854: mov     r15, [rbp+1A50h+var_19F0]
 * 0000000140276858: mov     eax, [rdx]
 * 000000014027685A: btr     eax, 1Fh
 * 000000014027685E: cmp     [rsi+6C0h], r10d
 * 0000000140276865: jnz     loc_1402768F2
 * 000000014027686B: mov     ecx, ebx
 * 000000014027686D: xor     rcx, rax
 * 0000000140276870: mov     rax, [rsi+510h]
 * 0000000140276877: mov     [rax+18h], rcx
 * 000000014027687B: cmp     [rsi+6C0h], r10d
 * 0000000140276882: jnz     short loc_1402768F2
 * 0000000140276884: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027688E: mov     ebx, 1
 * 0000000140276893: add     rax, rsi
 * 0000000140276896: mov     [rsi+6C8h], rax
 * 000000014027689D: mov     rax, 0B3B74BDEE4453415h
 * 00000001402768A7: add     rax, rdi
 * 00000001402768AA: mov     [rsi+6D0h], rax
 * 00000001402768B1: movsxd  rax, dword ptr [rdi]
 * 00000001402768B4: mov     [rsi+6D8h], rax
 * 00000001402768BB: mov     [rsi+6E0h], r12
 * 00000001402768C2: mov     [rsi+6C0h], ebx
 * 00000001402768C8: jmp     short loc_1402768F7
 * 00000001402768CA: xor     r10d, r10d
 * 00000001402768CD: mov     r8d, 1000h
 * 00000001402768D3: add     r14, r8
 * 00000001402768D6: add     r12, r8
 * 00000001402768D9: cmp     r12, r13
 * 00000001402768DC: jnz     loc_140276802
 * 00000001402768E2: movzx   eax, r15b
 * 00000001402768E6: mov     cr8, rax
 * 00000001402768EA: mov     rdx, [rbp+1A50h+var_1A38]
 * 00000001402768EE: mov     r15, [rbp+1A50h+var_19F0]
 * 00000001402768F2: mov     ebx, 1
 * 00000001402768F7: mov     r8d, 0Ch
 * 00000001402768FD: mov     ecx, 80000000h
 * 0000000140276902: add     rdx, r8
 * 0000000140276905: sub     r15, rbx
 * 0000000140276908: mov     [rbp+1A50h+var_1A38], rdx
 * 000000014027690C: mov     [rbp+1A50h+var_19F0], r15
 * 0000000140276910: jnz     loc_1402765FC
 * 0000000140276916: mov     rcx, [rbp+1A50h+var_1A40]
 * 000000014027691A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140276921: add     [rsi+624h], ebx
 * 0000000140276927: add     rcx, 18h
 * 000000014027692B: mov     [rbp+1A50h+var_1A40], rcx
 * 000000014027692F: cmp     rcx, [rbp+1A50h+var_19B8]
 * 0000000140276936: jz      short loc_140276954
 * 0000000140276938: mov     eax, [rsi+62Ch]
 * 000000014027693E: cmp     [rsi+628h], eax
 * 0000000140276944: jl      loc_1402765DF
 * 000000014027694A: jmp     loc_140279285
 * 000000014027694F: xor     r10d, r10d
 * 0000000140276952: jmp     short loc_140276902
 * 0000000140276954: mov     [rsi+624h], r10d
 * 000000014027695B: jmp     loc_140279285
 * 0000000140276960: mov     r14, [r12+8]
 * 0000000140276965: mov     r8d, [r12+10h]
 * 000000014027696A: mov     r9, r14
 * 000000014027696D: add     [rsi+628h], r8d
 * 0000000140276974: mov     rax, r14
 * 0000000140276977: mov     r10d, [rsi+614h]
 * 000000014027697E: mov     r15, [rsi+618h]
 * 0000000140276985: lea     rcx, [r14+r8]
 * 0000000140276989: cmp     r14, rcx
 * 000000014027698C: jnb     short loc_14027699A
 * 000000014027698E: prefetchnta byte ptr [rax]
 * 0000000140276991: add     rax, 40h ; '@'
 * 0000000140276995: cmp     rax, rcx
 * 0000000140276998: jb      short loc_14027698E
 * 000000014027699A: mov     r11d, r8d
 * 000000014027699D: mov     rbx, r15
 * 00000001402769A0: shr     r11d, 7
 * 00000001402769A4: mov     r13d, 1
 * 00000001402769AA: test    r11d, r11d
 * 00000001402769AD: jz      short loc_140276A15
 * 00000001402769AF: mov     rdi, 7010008004002001h
 * 00000001402769B9: mov     eax, 8
 * 00000001402769BE: xor     rbx, [r9]
 * 00000001402769C1: mov     ecx, r10d
 * 00000001402769C4: rol     rbx, cl
 * 00000001402769C7: xor     rbx, [r9+8]
 * 00000001402769CB: add     r9, 10h
 * 00000001402769CF: rol     rbx, cl
 * 00000001402769D2: sub     rax, r13
 * 00000001402769D5: jnz     short loc_1402769BE
 * 00000001402769D7: mov     rcx, r9
 * 00000001402769DA: sub     rcx, r14
 * 00000001402769DD: xor     rcx, r15
 * 00000001402769E0: mov     rax, rcx
 * 00000001402769E3: rol     rax, 11h
 * 00000001402769E7: xor     rcx, rax
 * 00000001402769EA: mov     rax, rdi
 * 00000001402769ED: mul     rcx
 * 00000001402769F0: xor     eax, edx
 * 00000001402769F2: mov     [rbp+1A50h+var_14B0], rdx
 * 00000001402769F9: xor     r10d, eax
 * 00000001402769FC: and     r10d, 3Fh
 * 0000000140276A00: cmovz   r10d, r13d
 * 0000000140276A04: add     r11d, 0FFFFFFFFh
 * 0000000140276A08: jnz     short loc_1402769B9
 * 0000000140276A0A: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140276A0E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140276A15: and     r8d, 7Fh
 * 0000000140276A19: cmp     r8d, 8
 * 0000000140276A1D: jb      short loc_140276A3C
 * 0000000140276A1F: mov     eax, r8d
 * 0000000140276A22: shr     rax, 3
 * 0000000140276A26: xor     rbx, [r9]
 * 0000000140276A29: mov     ecx, r10d
 * 0000000140276A2C: rol     rbx, cl
 * 0000000140276A2F: add     r9, 8
 * 0000000140276A33: add     r8d, 0FFFFFFF8h
 * 0000000140276A37: sub     rax, r13
 * 0000000140276A3A: jnz     short loc_140276A26
 * 0000000140276A3C: xor     r11d, r11d
 * 0000000140276A3F: test    r8d, r8d
 * 0000000140276A42: jz      short loc_140276A5A
 * 0000000140276A44: movzx   eax, byte ptr [r9]
 * 0000000140276A48: mov     ecx, r10d
 * 0000000140276A4B: xor     rbx, rax
 * 0000000140276A4E: add     r9, r13
 * 0000000140276A51: rol     rbx, cl
 * 0000000140276A54: add     r8d, 0FFFFFFFFh
 * 0000000140276A58: jnz     short loc_140276A44
 * 0000000140276A5A: mov     rax, rbx
 * 0000000140276A5D: jmp     short loc_140276A61
 * 0000000140276A5F: xor     ebx, eax
 * 0000000140276A61: shr     rax, 1Fh
 * 0000000140276A65: test    rax, rax
 * 0000000140276A68: jnz     short loc_140276A5F
 * 0000000140276A6A: mov     r8, [rbp+1A50h+var_1A48]
 * 0000000140276A6E: btr     ebx, 1Fh
 * 0000000140276A72: mov     r12d, r11d
 * 0000000140276A75: cmp     ebx, [r8+14h]
 * 0000000140276A79: jz      loc_140276BB4
 * 0000000140276A7F: cmp     [r8], r11d
 * 0000000140276A82: jnz     short loc_140276A8C
 * 0000000140276A84: cmp     [r8+18h], r11d
 * 0000000140276A88: cmovnz  r12d, r13d
 * 0000000140276A8C: mov     ecx, [r8+10h]
 * 0000000140276A90: mov     rdx, [r8+8]
 * 0000000140276A94: test    rcx, rcx
 * 0000000140276A97: jz      loc_140276B46
 * 0000000140276A9D: mov     eax, [rsi+74Ch]
 * 0000000140276AA3: test    al, 40h
 * 0000000140276AA5: jz      loc_140276B46
 * 0000000140276AAB: mov     r15, cr8
 * 0000000140276AAF: mov     r8d, 2
 * 0000000140276AB5: mov     cr8, r8
 * 0000000140276AB9: lea     rax, [rcx-1]
 * 0000000140276ABD: mov     r14, rdx
 * 0000000140276AC0: add     rax, rdx
 * 0000000140276AC3: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140276ACA: or      rax, 0FFFh
 * 0000000140276AD0: mov     ecx, r11d
 * 0000000140276AD3: test    r8b, r12b
 * 0000000140276AD6: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140276ADA: cmovnz  ecx, r13d
 * 0000000140276ADE: lea     r13, [r14-1]
 * 0000000140276AE2: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140276AE5: mov     rax, [rsi+438h]
 * 0000000140276AEC: mov     edx, ecx
 * 0000000140276AEE: mov     rcx, r14
 * 0000000140276AF1: call    KeGuardDispatchICall
 * 0000000140276AF6: cmp     eax, 0C000022Dh
 * 0000000140276AFB: jnz     short loc_140276B2F
 * 0000000140276AFD: mov     edx, 1
 * 0000000140276B02: test    dl, r12b
 * 0000000140276B05: jnz     loc_140276D74
 * 0000000140276B0B: cmp     r15b, dl
 * 0000000140276B0E: ja      loc_140276D4B
 * 0000000140276B14: movzx   eax, r15b
 * 0000000140276B18: mov     cr8, rax
 * 0000000140276B1C: mov     al, [r14]
 * 0000000140276B1F: mov     rax, cr8
 * 0000000140276B23: lea     eax, [rdx+1]
 * 0000000140276B26: mov     cr8, rax
 * 0000000140276B2A: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140276B2D: jmp     short loc_140276AE5
 * 0000000140276B2F: xor     r11d, r11d
 * 0000000140276B32: test    eax, eax
 * 0000000140276B34: jns     loc_140276D4E
 * 0000000140276B3A: movzx   eax, r15b
 * 0000000140276B3E: mov     cr8, rax
 * 0000000140276B42: mov     r8, [rbp+1A50h+var_1A48]
 * 0000000140276B46: mov     edx, 1
 * 0000000140276B4B: mov     eax, [r8+14h]
 * 0000000140276B4F: cmp     [rsi+6C0h], r11d
 * 0000000140276B56: jnz     short loc_140276B68
 * 0000000140276B58: mov     ecx, ebx
 * 0000000140276B5A: xor     rcx, rax
 * 0000000140276B5D: mov     rax, [rsi+510h]
 * 0000000140276B64: mov     [rax+18h], rcx
 * 0000000140276B68: mov     rcx, [r8+8]
 * 0000000140276B6C: cmp     [rsi+6C0h], r11d
 * 0000000140276B73: jnz     short loc_140276BB4
 * 0000000140276B75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140276B7F: add     rax, rsi
 * 0000000140276B82: mov     [rsi+6C8h], rax
 * 0000000140276B89: mov     rax, 0B3B74BDEE4453415h
 * 0000000140276B93: add     rax, r8
 * 0000000140276B96: mov     [rsi+6D0h], rax
 * 0000000140276B9D: movsxd  rax, dword ptr [r8]
 * 0000000140276BA0: mov     [rsi+6D8h], rax
 * 0000000140276BA7: mov     [rsi+6E0h], rcx
 * 0000000140276BAE: mov     [rsi+6C0h], edx
 * 0000000140276BB4: mov     eax, [r8+10h]
 * 0000000140276BB8: mov     r12, [r8+8]
 * 0000000140276BBC: shr     eax, 4
 * 0000000140276BBF: mov     [rbp+1A50h+var_1A40], r12
 * 0000000140276BC3: test    eax, eax
 * 0000000140276BC5: jz      loc_14027031B
 * 0000000140276BCB: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140276BCF: mov     r13d, eax
 * 0000000140276BD2: mov     [rbp+1A50h+var_1A00], r13
 * 0000000140276BD6: mov     rax, [r12]
 * 0000000140276BDA: lea     rdx, [rbp+1A50h+var_1740]
 * 0000000140276BE1: mov     rbx, rdi
 * 0000000140276BE4: mov     r15, [rax]
 * 0000000140276BE7: mov     [rbp+1A50h+var_1740], r11
 * 0000000140276BEE: mov     rcx, r15
 * 0000000140276BF1: mov     rax, [rsi+308h]
 * 0000000140276BF8: call    KeGuardDispatchICall
 * 0000000140276BFD: xor     r11d, r11d
 * 0000000140276C00: mov     r14, rax
 * 0000000140276C03: test    rax, rax
 * 0000000140276C06: jz      loc_140276D25
 * 0000000140276C0C: lea     r13d, [r11+6]
 * 0000000140276C10: xor     r12d, r12d
 * 0000000140276C13: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140276C1D: mov     rax, [rsi+208h]
 * 0000000140276C24: lea     rdx, [rbp+1A50h+var_14A8]
 * 0000000140276C2B: mov     rcx, r14
 * 0000000140276C2E: call    KeGuardDispatchICall
 * 0000000140276C33: test    rax, rax
 * 0000000140276C36: jnz     loc_140276CF4
 * 0000000140276C3C: test    dword ptr [rsi+748h], 40000000h
 * 0000000140276C46: lea     r9d, [rax+1]
 * 0000000140276C4A: jz      short loc_140276C89
 * 0000000140276C4C: mov     rcx, [rsi+7F0h]
 * 0000000140276C53: lea     edx, [rax+30h]
 * 0000000140276C56: mov     r8, r13
 * 0000000140276C59: mov     rax, [rbx]
 * 0000000140276C5C: add     edx, 0FFFFFFF8h
 * 0000000140276C5F: mov     [rcx], rax
 * 0000000140276C62: add     rbx, 8
 * 0000000140276C66: add     rcx, 8
 * 0000000140276C6A: sub     r8, r9
 * 0000000140276C6D: jnz     short loc_140276C59
 * 0000000140276C6F: test    edx, edx
 * 0000000140276C71: jz      short loc_140276C82
 * 0000000140276C73: mov     al, [rbx]
 * 0000000140276C75: add     rbx, r9
 * 0000000140276C78: mov     [rcx], al
 * 0000000140276C7A: add     rcx, r9
 * 0000000140276C7D: add     edx, 0FFFFFFFFh
 * 0000000140276C80: jnz     short loc_140276C73
 * 0000000140276C82: mov     rbx, [rsi+7F0h]
 * 0000000140276C89: mov     [rbx+18h], r14
 * 0000000140276C8D: mov     [rbx+20h], r15
 * 0000000140276C91: mov     rax, [rsi+510h]
 * 0000000140276C98: mov     [rax], rbx
 * 0000000140276C9B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140276CA2: mov     rax, [rsi+510h]
 * 0000000140276CA9: mov     [rax+8], r14
 * 0000000140276CAD: mov     dword ptr [rax+14h], 1000h
 * 0000000140276CB4: cmp     [rsi+6C0h], r12d
 * 0000000140276CBB: jnz     short loc_140276CF4
 * 0000000140276CBD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140276CC7: add     rax, rsi
 * 0000000140276CCA: mov     [rsi+6C8h], rax
 * 0000000140276CD1: lea     rax, [rbx+rdi]
 * 0000000140276CD5: mov     [rsi+6D0h], rax
 * 0000000140276CDC: movsxd  rax, dword ptr [rbx]
 * 0000000140276CDF: mov     [rsi+6D8h], rax
 * 0000000140276CE6: mov     [rsi+6E0h], r13
 * 0000000140276CED: mov     [rsi+6C0h], r9d
 * 0000000140276CF4: mov     rax, [rsi+308h]
 * 0000000140276CFB: lea     rdx, [rbp+1A50h+var_1740]
 * 0000000140276D02: mov     rcx, r15
 * 0000000140276D05: call    KeGuardDispatchICall
 * 0000000140276D0A: mov     r14, rax
 * 0000000140276D0D: test    rax, rax
 * 0000000140276D10: jnz     loc_140276C1D
 * 0000000140276D16: mov     r12, [rbp+1A50h+var_1A40]
 * 0000000140276D1A: xor     r11d, r11d
 * 0000000140276D1D: mov     r13, [rbp+1A50h+var_1A00]
 * 0000000140276D21: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140276D25: add     r12, 10h
 * 0000000140276D29: mov     ebx, 1
 * 0000000140276D2E: sub     r13, rbx
 * 0000000140276D31: mov     [rbp+1A50h+var_1A40], r12
 * 0000000140276D35: mov     [rbp+1A50h+var_1A00], r13
 * 0000000140276D39: jnz     loc_140276BD6
 * 0000000140276D3F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140276D46: jmp     loc_140279285
 * 0000000140276D4B: xor     r11d, r11d
 * 0000000140276D4E: mov     eax, 1000h
 * 0000000140276D53: add     r14, rax
 * 0000000140276D56: add     r13, rax
 * 0000000140276D59: cmp     r13, [rbp+1A50h+var_1A30]
 * 0000000140276D5D: jnz     loc_140276B2A
 * 0000000140276D63: movzx   eax, r15b
 * 0000000140276D67: mov     cr8, rax
 * 0000000140276D6B: mov     r8, [rbp+1A50h+var_1A48]
 * 0000000140276D6F: jmp     loc_140276BB4
 * 0000000140276D74: movzx   eax, r15b
 * 0000000140276D78: mov     cr8, rax
 * 0000000140276D7C: mov     r8, [rbp+1A50h+var_1A48]
 * 0000000140276D80: xor     r11d, r11d
 * 0000000140276D83: jmp     loc_140276B4B
 * 0000000140276D88: mov     r8d, [r12+10h]
 * 0000000140276D8D: xor     r13d, r13d
 * 0000000140276D90: test    r8d, r8d
 * 0000000140276D93: jnz     loc_14027733F
 * 0000000140276D99: lea     rax, [r12+30h]
 * 0000000140276D9E: xor     r9d, r9d
 * 0000000140276DA1: mov     [rbp+1A50h+var_1670], rax
 * 0000000140276DA8: lea     rcx, [rbp+1A50h+var_1678]
 * 0000000140276DAF: movzx   eax, word ptr [r12+28h]
 * 0000000140276DB5: xor     r8d, r8d
 * 0000000140276DB8: mov     [rbp+1A50h+var_1678], ax
 * 0000000140276DBF: xor     edx, edx
 * 0000000140276DC1: mov     [rbp+1A50h+var_1676], ax
 * 0000000140276DC8: lea     rax, [rbp+1A50h+var_1900]
 * 0000000140276DCF: mov     [rsp+0DA0h+var_D68], rax
 * 0000000140276DD4: mov     rax, [rsi+498h]
 * 0000000140276DDB: mov     [rsp+0DA0h+var_D70], r13
 * 0000000140276DE0: mov     byte ptr [rsp+0DA0h+var_D78], r13b
 * 0000000140276DE5: mov     [rsp+0DA0h+BugCheckParameter4], rax
 * 0000000140276DEA: mov     rax, [rsi+1E8h]
 * 0000000140276DF1: call    KeGuardDispatchICall
 * 0000000140276DF6: test    eax, eax
 * 0000000140276DF8: js      loc_14027031B
 * 0000000140276DFE: mov     rax, [rbp+1A50h+var_1900]
 * 0000000140276E05: mov     ecx, [rax+10h]
 * 0000000140276E08: lea     eax, [r13+10h]
 * 0000000140276E0C: test    al, cl
 * 0000000140276E0E: jnz     short loc_140276E28
 * 0000000140276E10: mov     rcx, [rbp+1A50h+var_1900]
 * 0000000140276E17: mov     rax, [rsi+1E0h]
 * 0000000140276E1E: call    KeGuardDispatchICall
 * 0000000140276E23: jmp     loc_140279285
 * 0000000140276E28: mov     rcx, [rsi+1E8h]
 * 0000000140276E2F: lea     r8, [rbp+1A50h+var_16A0]
 * 0000000140276E36: mov     rax, [rsi+200h]
 * 0000000140276E3D: lea     rdx, [rbp+1A50h+var_17F8]
 * 0000000140276E44: call    KeGuardDispatchICall
 * 0000000140276E49: test    rax, rax
 * 0000000140276E4C: jz      short loc_140276E71
 * 0000000140276E4E: mov     rax, [rsi+1F8h]
 * 0000000140276E55: mov     rcx, [rbp+1A50h+var_17F8]
 * 0000000140276E5C: call    KeGuardDispatchICall
 * 0000000140276E61: test    rax, rax
 * 0000000140276E64: jz      short loc_140276E71
 * 0000000140276E66: mov     ebx, [rax+50h]
 * 0000000140276E69: mov     [rbp+1A50h+var_1978], ebx
 * 0000000140276E6F: jmp     short loc_140276E77
 * 0000000140276E71: mov     ebx, [rbp+1A50h+var_1978]
 * 0000000140276E77: mov     rcx, [r12+18h]
 * 0000000140276E7C: lea     r8, [rbp+1A50h+var_16AC]
 * 0000000140276E83: mov     rax, [rsi+200h]
 * 0000000140276E8A: lea     rdx, [rbp+1A50h+var_17F0]
 * 0000000140276E91: call    KeGuardDispatchICall
 * 0000000140276E96: test    rax, rax
 * 0000000140276E99: jz      short loc_140276EC0
 * 0000000140276E9B: mov     rax, [rsi+1F8h]
 * 0000000140276EA2: mov     rcx, [rbp+1A50h+var_17F0]
 * 0000000140276EA9: call    KeGuardDispatchICall
 * 0000000140276EAE: test    rax, rax
 * 0000000140276EB1: jz      short loc_140276EC0
 * 0000000140276EB3: mov     r8d, [rax+50h]
 * 0000000140276EB7: mov     [rbp+1A50h+var_1990], r8d
 * 0000000140276EBE: jmp     short loc_140276EC7
 * 0000000140276EC0: mov     r8d, [rbp+1A50h+var_1990]
 * 0000000140276EC7: mov     r15d, 40000000h
 * 0000000140276ECD: test    [rsi+748h], r15d
 * 0000000140276ED4: jnz     short loc_140276EEF
 * 0000000140276ED6: mov     rax, [rbp+1A50h+var_1900]
 * 0000000140276EDD: add     rax, 70h ; 'p'
 * 0000000140276EE1: mov     [r12+8], rax
 * 0000000140276EE6: mov     dword ptr [r12+10h], 0E0h
 * 0000000140276EEF: mov     rcx, [rbp+1A50h+var_1900]
 * 0000000140276EF6: mov     dl, r13b
 * 0000000140276EF9: mov     r10, [rbp+1A50h+var_17F8]
 * 0000000140276F00: mov     r11, [rbp+1A50h+var_17F0]
 * 0000000140276F07: mov     r12d, ebx
 * 0000000140276F0A: mov     ebx, 1
 * 0000000140276F0F: movzx   eax, dl
 * 0000000140276F12: mov     r9, [rcx+rax*8+70h]
 * 0000000140276F17: test    r12, r12
 * 0000000140276F1A: jz      short loc_140276F2D
 * 0000000140276F1C: lea     rax, [r10-1]
 * 0000000140276F20: add     rax, r12
 * 0000000140276F23: cmp     r9, r10
 * 0000000140276F26: jb      short loc_140276F2D
 * 0000000140276F28: cmp     r9, rax
 * 0000000140276F2B: jbe     short loc_140276F52
 * 0000000140276F2D: mov     eax, r8d
 * 0000000140276F30: test    r8d, r8d
 * 0000000140276F33: jz      loc_140277288
 * 0000000140276F39: lea     r8, [r11-1]
 * 0000000140276F3D: add     r8, rax
 * 0000000140276F40: cmp     r9, r11
 * 0000000140276F43: jb      loc_140277288
 * 0000000140276F49: cmp     r9, r8
 * 0000000140276F4C: ja      loc_140277288
 * 0000000140276F52: mov     r8d, [rbp+1A50h+var_1990]
 * 0000000140276F59: add     dl, bl
 * 0000000140276F5B: cmp     dl, 1Ch
 * 0000000140276F5E: jb      short loc_140276F0F
 * 0000000140276F60: test    [rsi+748h], r15d
 * 0000000140276F67: jnz     loc_140276E17
 * 0000000140276F6D: mov     r13, [rbp+1A50h+var_1A48]
 * 0000000140276F71: mov     r14, [r13+8]
 * 0000000140276F75: mov     r9d, [r13+10h]
 * 0000000140276F79: mov     r10, r14
 * 0000000140276F7C: add     [rsi+628h], r9d
 * 0000000140276F83: mov     rax, r14
 * 0000000140276F86: mov     r11d, [rsi+614h]
 * 0000000140276F8D: mov     r15, [rsi+618h]
 * 0000000140276F94: lea     rcx, [r14+r9]
 * 0000000140276F98: cmp     r14, rcx
 * 0000000140276F9B: jnb     short loc_140276FA9
 * 0000000140276F9D: prefetchnta byte ptr [rax]
 * 0000000140276FA0: add     rax, 40h ; '@'
 * 0000000140276FA4: cmp     rax, rcx
 * 0000000140276FA7: jb      short loc_140276F9D
 * 0000000140276FA9: mov     ebx, r9d
 * 0000000140276FAC: xor     edx, edx
 * 0000000140276FAE: shr     ebx, 7
 * 0000000140276FB1: mov     r8, r15
 * 0000000140276FB4: test    ebx, ebx
 * 0000000140276FB6: jz      short loc_140277023
 * 0000000140276FB8: lea     esi, [rdx+1]
 * 0000000140276FBB: mov     rdi, 7010008004002001h
 * 0000000140276FC5: mov     eax, 8
 * 0000000140276FCA: xor     r8, [r10]
 * 0000000140276FCD: mov     ecx, r11d
 * 0000000140276FD0: rol     r8, cl
 * 0000000140276FD3: xor     r8, [r10+8]
 * 0000000140276FD7: add     r10, 10h
 * 0000000140276FDB: rol     r8, cl
 * 0000000140276FDE: sub     rax, rsi
 * 0000000140276FE1: jnz     short loc_140276FCA
 * 0000000140276FE3: mov     rcx, r10
 * 0000000140276FE6: sub     rcx, r14
 * 0000000140276FE9: xor     rcx, r15
 * 0000000140276FEC: mov     rax, rcx
 * 0000000140276FEF: rol     rax, 11h
 * 0000000140276FF3: xor     rcx, rax
 * 0000000140276FF6: mov     rax, rdi
 * 0000000140276FF9: mul     rcx
 * 0000000140276FFC: xor     r11d, eax
 * 0000000140276FFF: mov     [rbp+1A50h+var_14A0], rdx
 * 0000000140277006: xor     r11d, edx
 * 0000000140277009: and     r11d, 3Fh
 * 000000014027700D: cmovz   r11d, esi
 * 0000000140277011: add     ebx, 0FFFFFFFFh
 * 0000000140277014: jnz     short loc_140276FC5
 * 0000000140277016: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027701A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140277021: xor     edx, edx
 * 0000000140277023: and     r9d, 7Fh
 * 0000000140277027: mov     ebx, 1
 * 000000014027702C: cmp     r9d, 8
 * 0000000140277030: jb      short loc_14027704F
 * 0000000140277032: mov     eax, r9d
 * 0000000140277035: shr     rax, 3
 * 0000000140277039: xor     r8, [r10]
 * 000000014027703C: mov     ecx, r11d
 * 000000014027703F: rol     r8, cl
 * 0000000140277042: add     r10, 8
 * 0000000140277046: add     r9d, 0FFFFFFF8h
 * 000000014027704A: sub     rax, rbx
 * 000000014027704D: jnz     short loc_140277039
 * 000000014027704F: test    r9d, r9d
 * 0000000140277052: jz      short loc_14027706A
 * 0000000140277054: movzx   eax, byte ptr [r10]
 * 0000000140277058: mov     ecx, r11d
 * 000000014027705B: xor     r8, rax
 * 000000014027705E: add     r10, rbx
 * 0000000140277061: rol     r8, cl
 * 0000000140277064: add     r9d, 0FFFFFFFFh
 * 0000000140277068: jnz     short loc_140277054
 * 000000014027706A: mov     rax, r8
 * 000000014027706D: jmp     short loc_140277072
 * 000000014027706F: xor     r8d, eax
 * 0000000140277072: shr     rax, 1Fh
 * 0000000140277076: test    rax, rax
 * 0000000140277079: jnz     short loc_14027706F
 * 000000014027707B: btr     r8d, 1Fh
 * 0000000140277080: mov     r10d, edx
 * 0000000140277083: mov     [r13+14h], r8d
 * 0000000140277087: mov     rax, [rbp+1A50h+var_1900]
 * 000000014027708E: mov     r14, [rax+50h]
 * 0000000140277092: test    r14, r14
 * 0000000140277095: jz      short loc_140277115
 * 0000000140277097: mov     r10d, [r14]
 * 000000014027709A: xor     r9d, r9d
 * 000000014027709D: lea     r8d, [r10-8]
 * 00000001402770A1: shr     r8d, 3
 * 00000001402770A5: test    r8d, r8d
 * 00000001402770A8: jz      short loc_140277115
 * 00000001402770AA: mov     r11, [rbp+1A50h+var_17F8]
 * 00000001402770B1: mov     rbx, [rbp+1A50h+var_17F0]
 * 00000001402770B8: mov     r15d, [rbp+1A50h+var_1990]
 * 00000001402770BF: movzx   eax, dl
 * 00000001402770C2: mov     rcx, [r14+rax*8+8]
 * 00000001402770C7: test    rcx, rcx
 * 00000001402770CA: jz      short loc_14027710A
 * 00000001402770CC: test    r12, r12
 * 00000001402770CF: jz      short loc_1402770E2
 * 00000001402770D1: lea     rax, [r11-1]
 * 00000001402770D5: add     rax, r12
 * 00000001402770D8: cmp     rcx, r11
 * 00000001402770DB: jb      short loc_1402770E2
 * 00000001402770DD: cmp     rcx, rax
 * 00000001402770E0: jbe     short loc_14027710A
 * 00000001402770E2: mov     rax, r15
 * 00000001402770E5: test    r15d, r15d
 * 00000001402770E8: jz      loc_14027720D
 * 00000001402770EE: lea     r9, [rbx-1]
 * 00000001402770F2: add     r9, rax
 * 00000001402770F5: cmp     rcx, rbx
 * 00000001402770F8: jb      loc_14027720A
 * 00000001402770FE: cmp     rcx, r9
 * 0000000140277101: ja      loc_14027720A
 * 0000000140277107: xor     r9d, r9d
 * 000000014027710A: add     dl, 1
 * 000000014027710D: movzx   eax, dl
 * 0000000140277110: cmp     eax, r8d
 * 0000000140277113: jb      short loc_1402770BF
 * 0000000140277115: add     [rsi+628h], r10d
 * 000000014027711C: mov     r9, r14
 * 000000014027711F: mov     r11d, [rsi+614h]
 * 0000000140277126: mov     rax, r14
 * 0000000140277129: mov     r15, [rsi+618h]
 * 0000000140277130: mov     ecx, r10d
 * 0000000140277133: add     rcx, r14
 * 0000000140277136: cmp     r14, rcx
 * 0000000140277139: jnb     short loc_140277147
 * 000000014027713B: prefetchnta byte ptr [rax]
 * 000000014027713E: add     rax, 40h ; '@'
 * 0000000140277142: cmp     rax, rcx
 * 0000000140277145: jb      short loc_14027713B
 * 0000000140277147: mov     ebx, r10d
 * 000000014027714A: mov     r8, r15
 * 000000014027714D: shr     ebx, 7
 * 0000000140277150: test    ebx, ebx
 * 0000000140277152: jz      short loc_1402771BE
 * 0000000140277154: mov     rsi, 7010008004002001h
 * 000000014027715E: mov     r12d, 1
 * 0000000140277164: mov     edx, 8
 * 0000000140277169: mov     rax, [r9]
 * 000000014027716C: mov     ecx, r11d
 * 000000014027716F: xor     rax, r8
 * 0000000140277172: mov     r8, [r9+8]
 * 0000000140277176: rol     rax, cl
 * 0000000140277179: add     r9, 10h
 * 000000014027717D: xor     r8, rax
 * 0000000140277180: rol     r8, cl
 * 0000000140277183: sub     rdx, r12
 * 0000000140277186: jnz     short loc_140277169
 * 0000000140277188: mov     rcx, r9
 * 000000014027718B: sub     rcx, r14
 * 000000014027718E: xor     rcx, r15
 * 0000000140277191: mov     rax, rcx
 * 0000000140277194: rol     rax, 11h
 * 0000000140277198: xor     rcx, rax
 * 000000014027719B: mov     rax, rsi
 * 000000014027719E: mul     rcx
 * 00000001402771A1: xor     eax, edx
 * 00000001402771A3: mov     [rbp+1A50h+var_1498], rdx
 * 00000001402771AA: xor     r11d, eax
 * 00000001402771AD: and     r11d, 3Fh
 * 00000001402771B1: cmovz   r11d, r12d
 * 00000001402771B5: add     ebx, 0FFFFFFFFh
 * 00000001402771B8: jnz     short loc_140277164
 * 00000001402771BA: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402771BE: and     r10d, 7Fh
 * 00000001402771C2: mov     ebx, 1
 * 00000001402771C7: cmp     r10d, 8
 * 00000001402771CB: jb      short loc_1402771EA
 * 00000001402771CD: mov     edx, r10d
 * 00000001402771D0: shr     rdx, 3
 * 00000001402771D4: xor     r8, [r9]
 * 00000001402771D7: mov     ecx, r11d
 * 00000001402771DA: rol     r8, cl
 * 00000001402771DD: add     r9, 8
 * 00000001402771E1: add     r10d, 0FFFFFFF8h
 * 00000001402771E5: sub     rdx, rbx
 * 00000001402771E8: jnz     short loc_1402771D4
 * 00000001402771EA: test    r10d, r10d
 * 00000001402771ED: jz      short loc_140277205
 * 00000001402771EF: movzx   eax, byte ptr [r9]
 * 00000001402771F3: mov     ecx, r11d
 * 00000001402771F6: xor     r8, rax
 * 00000001402771F9: add     r9, rbx
 * 00000001402771FC: rol     r8, cl
 * 00000001402771FF: add     r10d, 0FFFFFFFFh
 * 0000000140277203: jnz     short loc_1402771EF
 * 0000000140277205: mov     rax, r8
 * 0000000140277208: jmp     short loc_140277271
 * 000000014027720A: xor     r9d, r9d
 * 000000014027720D: mov     [r13+20h], rcx
 * 0000000140277211: mov     rax, [rsi+510h]
 * 0000000140277218: mov     [rax], r13
 * 000000014027721B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140277222: cmp     [rsi+6C0h], r9d
 * 0000000140277229: jnz     loc_14027031B
 * 000000014027722F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140277239: add     rax, rsi
 * 000000014027723C: mov     [rsi+6C8h], rax
 * 0000000140277243: mov     rax, 0B3B74BDEE4453415h
 * 000000014027724D: add     rax, r13
 * 0000000140277250: mov     [rsi+6D0h], rax
 * 0000000140277257: movsxd  rax, dword ptr [r13+0]
 * 000000014027725B: mov     [rsi+6D8h], rax
 * 0000000140277262: mov     [rsi+6E0h], r14
 * 0000000140277269: jmp     loc_140270AF6
 * 000000014027726E: xor     r8d, eax
 * 0000000140277271: shr     rax, 1Fh
 * 0000000140277275: test    rax, rax
 * 0000000140277278: jnz     short loc_14027726E
 * 000000014027727A: btr     r8d, 1Fh
 * 000000014027727F: mov     [r13+2Ch], r8d
 * 0000000140277283: jmp     loc_140279285
 * 0000000140277288: test    [rsi+748h], r15d
 * 000000014027728F: jz      short loc_1402772D7
 * 0000000140277291: mov     rcx, [rsi+7F0h]
 * 0000000140277298: mov     edx, 30h ; '0'
 * 000000014027729D: mov     r10, [rbp+1A50h+var_1A48]
 * 00000001402772A1: mov     r8, r14
 * 00000001402772A4: mov     rax, [r10]
 * 00000001402772A7: add     edx, 0FFFFFFF8h
 * 00000001402772AA: mov     [rcx], rax
 * 00000001402772AD: add     r10, 8
 * 00000001402772B1: add     rcx, 8
 * 00000001402772B5: sub     r8, rbx
 * 00000001402772B8: jnz     short loc_1402772A4
 * 00000001402772BA: test    edx, edx
 * 00000001402772BC: jz      short loc_1402772CE
 * 00000001402772BE: mov     al, [r10]
 * 00000001402772C1: add     r10, rbx
 * 00000001402772C4: mov     [rcx], al
 * 00000001402772C6: add     rcx, rbx
 * 00000001402772C9: add     edx, 0FFFFFFFFh
 * 00000001402772CC: jnz     short loc_1402772BE
 * 00000001402772CE: mov     rdx, [rsi+7F0h]
 * 00000001402772D5: jmp     short loc_1402772DB
 * 00000001402772D7: mov     rdx, [rbp+1A50h+var_1A48]
 * 00000001402772DB: mov     [rdx+20h], r9
 * 00000001402772DF: mov     rax, [rsi+510h]
 * 00000001402772E6: mov     [rax], rdx
 * 00000001402772E9: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001402772F0: mov     rcx, [rdx+8]
 * 00000001402772F4: cmp     [rsi+6C0h], r13d
 * 00000001402772FB: jnz     loc_14027031B
 * 0000000140277301: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027730B: add     rax, rsi
 * 000000014027730E: mov     [rsi+6C8h], rax
 * 0000000140277315: mov     rax, 0B3B74BDEE4453415h
 * 000000014027731F: add     rax, rdx
 * 0000000140277322: mov     [rsi+6D0h], rax
 * 0000000140277329: movsxd  rax, dword ptr [rdx]
 * 000000014027732C: mov     [rsi+6D8h], rax
 * 0000000140277333: mov     [rsi+6E0h], rcx
 * 000000014027733A: jmp     loc_140270AFB
 * 000000014027733F: mov     r14, [r12+8]
 * 0000000140277344: add     [rsi+628h], r8d
 * 000000014027734B: mov     r9, r14
 * 000000014027734E: mov     r11d, [rsi+614h]
 * 0000000140277355: mov     rax, r14
 * 0000000140277358: mov     r15, [rsi+618h]
 * 000000014027735F: lea     rcx, [r14+r8]
 * 0000000140277363: cmp     r14, rcx
 * 0000000140277366: jnb     short loc_140277374
 * 0000000140277368: prefetchnta byte ptr [rax]
 * 000000014027736B: add     rax, 40h ; '@'
 * 000000014027736F: cmp     rax, rcx
 * 0000000140277372: jb      short loc_140277368
 * 0000000140277374: mov     r10d, r8d
 * 0000000140277377: mov     rbx, r15
 * 000000014027737A: shr     r10d, 7
 * 000000014027737E: test    r10d, r10d
 * 0000000140277381: jz      short loc_1402773EE
 * 0000000140277383: mov     rsi, 7010008004002001h
 * 000000014027738D: mov     r12d, 1
 * 0000000140277393: mov     edx, 8
 * 0000000140277398: mov     rax, [r9]
 * 000000014027739B: mov     ecx, r11d
 * 000000014027739E: xor     rax, rbx
 * 00000001402773A1: mov     rbx, [r9+8]
 * 00000001402773A5: rol     rax, cl
 * 00000001402773A8: add     r9, 10h
 * 00000001402773AC: xor     rbx, rax
 * 00000001402773AF: rol     rbx, cl
 * 00000001402773B2: sub     rdx, r12
 * 00000001402773B5: jnz     short loc_140277398
 * 00000001402773B7: mov     rcx, r9
 * 00000001402773BA: sub     rcx, r14
 * 00000001402773BD: xor     rcx, r15
 * 00000001402773C0: mov     rax, rcx
 * 00000001402773C3: rol     rax, 11h
 * 00000001402773C7: xor     rcx, rax
 * 00000001402773CA: mov     rax, rsi
 * 00000001402773CD: mul     rcx
 * 00000001402773D0: xor     eax, edx
 * 00000001402773D2: mov     [rbp+1A50h+var_1490], rdx
 * 00000001402773D9: xor     r11d, eax
 * 00000001402773DC: and     r11d, 3Fh
 * 00000001402773E0: cmovz   r11d, r12d
 * 00000001402773E4: add     r10d, 0FFFFFFFFh
 * 00000001402773E8: jnz     short loc_140277393
 * 00000001402773EA: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402773EE: and     r8d, 7Fh
 * 00000001402773F2: mov     r10d, 1
 * 00000001402773F8: cmp     r8d, 8
 * 00000001402773FC: jb      short loc_14027741B
 * 00000001402773FE: mov     edx, r8d
 * 0000000140277401: shr     rdx, 3
 * 0000000140277405: xor     rbx, [r9]
 * 0000000140277408: mov     ecx, r11d
 * 000000014027740B: rol     rbx, cl
 * 000000014027740E: add     r9, 8
 * 0000000140277412: add     r8d, 0FFFFFFF8h
 * 0000000140277416: sub     rdx, r10
 * 0000000140277419: jnz     short loc_140277405
 * 000000014027741B: test    r8d, r8d
 * 000000014027741E: jz      short loc_140277436
 * 0000000140277420: movzx   eax, byte ptr [r9]
 * 0000000140277424: mov     ecx, r11d
 * 0000000140277427: xor     rbx, rax
 * 000000014027742A: add     r9, r10
 * 000000014027742D: rol     rbx, cl
 * 0000000140277430: add     r8d, 0FFFFFFFFh
 * 0000000140277434: jnz     short loc_140277420
 * 0000000140277436: mov     rax, rbx
 * 0000000140277439: jmp     short loc_14027743D
 * 000000014027743B: xor     ebx, eax
 * 000000014027743D: shr     rax, 1Fh
 * 0000000140277441: test    rax, rax
 * 0000000140277444: jnz     short loc_14027743B
 * 0000000140277446: mov     r12d, r13d
 * 0000000140277449: btr     ebx, 1Fh
 * 000000014027744D: mov     r13, [rbp+1A50h+var_1A48]
 * 0000000140277451: cmp     ebx, [r13+14h]
 * 0000000140277455: jz      loc_1402775AD
 * 000000014027745B: xor     r8d, r8d
 * 000000014027745E: cmp     [r13+0], r8d
 * 0000000140277462: jnz     short loc_14027746C
 * 0000000140277464: cmp     [r13+18h], r8d
 * 0000000140277468: cmovnz  r12d, r10d
 * 000000014027746C: mov     ecx, [r13+10h]
 * 0000000140277470: mov     rdx, [r13+8]
 * 0000000140277474: test    rcx, rcx
 * 0000000140277477: jz      loc_14027753B
 * 000000014027747D: mov     eax, [rsi+74Ch]
 * 0000000140277483: test    al, 40h
 * 0000000140277485: jz      loc_14027753B
 * 000000014027748B: mov     r15, cr8
 * 000000014027748F: mov     r9d, 2
 * 0000000140277495: mov     cr8, r9
 * 0000000140277499: lea     rax, [rcx-1]
 * 000000014027749D: mov     r14, rdx
 * 00000001402774A0: add     rax, rdx
 * 00000001402774A3: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402774AA: or      rax, 0FFFh
 * 00000001402774B0: mov     ecx, r8d
 * 00000001402774B3: test    r9b, r12b
 * 00000001402774B6: mov     [rbp+1A50h+var_1A30], rax
 * 00000001402774BA: cmovnz  ecx, r10d
 * 00000001402774BE: lea     r13, [r14-1]
 * 00000001402774C2: mov     [rbp+1A50h+var_1A50], ecx
 * 00000001402774C5: mov     rax, [rsi+438h]
 * 00000001402774CC: mov     edx, ecx
 * 00000001402774CE: mov     rcx, r14
 * 00000001402774D1: call    KeGuardDispatchICall
 * 00000001402774D6: cmp     eax, 0C000022Dh
 * 00000001402774DB: jnz     short loc_140277509
 * 00000001402774DD: mov     r10d, 1
 * 00000001402774E3: test    r10b, r12b
 * 00000001402774E6: jnz     short loc_14027752F
 * 00000001402774E8: cmp     r15b, r10b
 * 00000001402774EB: ja      short loc_14027750D
 * 00000001402774ED: movzx   eax, r15b
 * 00000001402774F1: mov     cr8, rax
 * 00000001402774F5: mov     al, [r14]
 * 00000001402774F8: mov     rax, cr8
 * 00000001402774FC: lea     eax, [r10+1]
 * 0000000140277500: mov     cr8, rax
 * 0000000140277504: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140277507: jmp     short loc_1402774C5
 * 0000000140277509: test    eax, eax
 * 000000014027750B: js      short loc_14027752F
 * 000000014027750D: mov     eax, 1000h
 * 0000000140277512: add     r14, rax
 * 0000000140277515: add     r13, rax
 * 0000000140277518: cmp     r13, [rbp+1A50h+var_1A30]
 * 000000014027751C: jnz     short loc_140277504
 * 000000014027751E: movzx   eax, r15b
 * 0000000140277522: mov     cr8, rax
 * 0000000140277526: mov     r13, [rbp+1A50h+var_1A48]
 * 000000014027752A: xor     r12d, r12d
 * 000000014027752D: jmp     short loc_1402775AD
 * 000000014027752F: movzx   eax, r15b
 * 0000000140277533: mov     r13, [rbp+1A50h+var_1A48]
 * 0000000140277537: mov     cr8, rax
 * 000000014027753B: mov     eax, [r13+14h]
 * 000000014027753F: xor     r12d, r12d
 * 0000000140277542: cmp     [rsi+6C0h], r12d
 * 0000000140277549: jnz     short loc_14027755B
 * 000000014027754B: mov     ecx, ebx
 * 000000014027754D: xor     rcx, rax
 * 0000000140277550: mov     rax, [rsi+510h]
 * 0000000140277557: mov     [rax+18h], rcx
 * 000000014027755B: mov     rcx, [r13+8]
 * 000000014027755F: cmp     [rsi+6C0h], r12d
 * 0000000140277566: jnz     short loc_1402775AD
 * 0000000140277568: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140277572: add     rax, rsi
 * 0000000140277575: mov     [rsi+6C8h], rax
 * 000000014027757C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140277586: add     rax, r13
 * 0000000140277589: mov     [rsi+6D0h], rax
 * 0000000140277590: movsxd  rax, dword ptr [r13+0]
 * 0000000140277594: mov     [rsi+6D8h], rax
 * 000000014027759B: mov     eax, 1
 * 00000001402775A0: mov     [rsi+6E0h], rcx
 * 00000001402775A7: mov     [rsi+6C0h], eax
 * 00000001402775AD: mov     rax, [r13+8]
 * 00000001402775B1: mov     r9d, r12d
 * 00000001402775B4: sub     rax, 70h ; 'p'
 * 00000001402775B8: mov     [rbp+1A50h+var_1900], rax
 * 00000001402775BF: mov     r14, [rax+50h]
 * 00000001402775C3: test    r14, r14
 * 00000001402775C6: jz      short loc_1402775CB
 * 00000001402775C8: mov     r9d, [r14]
 * 00000001402775CB: add     [rsi+628h], r9d
 * 00000001402775D2: mov     r10, r14
 * 00000001402775D5: mov     r11d, [rsi+614h]
 * 00000001402775DC: mov     rax, r14
 * 00000001402775DF: mov     r15, [rsi+618h]
 * 00000001402775E6: mov     ecx, r9d
 * 00000001402775E9: add     rcx, r14
 * 00000001402775EC: cmp     r14, rcx
 * 00000001402775EF: jnb     short loc_1402775FD
 * 00000001402775F1: prefetchnta byte ptr [rax]
 * 00000001402775F4: add     rax, 40h ; '@'
 * 00000001402775F8: cmp     rax, rcx
 * 00000001402775FB: jb      short loc_1402775F1
 * 00000001402775FD: mov     ebx, r9d
 * 0000000140277600: mov     r8, r15
 * 0000000140277603: shr     ebx, 7
 * 0000000140277606: test    ebx, ebx
 * 0000000140277608: jz      short loc_14027767B
 * 000000014027760A: mov     rdi, 7010008004002001h
 * 0000000140277614: mov     edx, 8
 * 0000000140277619: lea     esi, [rdx-7]
 * 000000014027761C: mov     rax, [r10]
 * 000000014027761F: mov     ecx, r11d
 * 0000000140277622: xor     rax, r8
 * 0000000140277625: mov     r8, [r10+8]
 * 0000000140277629: rol     rax, cl
 * 000000014027762C: add     r10, 10h
 * 0000000140277630: xor     r8, rax
 * 0000000140277633: rol     r8, cl
 * 0000000140277636: sub     rdx, rsi
 * 0000000140277639: jnz     short loc_14027761C
 * 000000014027763B: mov     rcx, r10
 * 000000014027763E: sub     rcx, r14
 * 0000000140277641: xor     rcx, r15
 * 0000000140277644: mov     rax, rcx
 * 0000000140277647: rol     rax, 11h
 * 000000014027764B: xor     rcx, rax
 * 000000014027764E: mov     rax, rdi
 * 0000000140277651: mul     rcx
 * 0000000140277654: xor     eax, edx
 * 0000000140277656: mov     [rbp+1A50h+var_1488], rdx
 * 000000014027765D: xor     r11d, eax
 * 0000000140277660: mov     rax, rsi
 * 0000000140277663: and     r11d, 3Fh
 * 0000000140277667: cmovz   r11d, eax
 * 000000014027766B: add     ebx, 0FFFFFFFFh
 * 000000014027766E: jnz     short loc_140277614
 * 0000000140277670: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140277674: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027767B: and     r9d, 7Fh
 * 000000014027767F: mov     ebx, 1
 * 0000000140277684: cmp     r9d, 8
 * 0000000140277688: jb      short loc_1402776A7
 * 000000014027768A: mov     edx, r9d
 * 000000014027768D: shr     rdx, 3
 * 0000000140277691: xor     r8, [r10]
 * 0000000140277694: mov     ecx, r11d
 * 0000000140277697: rol     r8, cl
 * 000000014027769A: add     r10, 8
 * 000000014027769E: add     r9d, 0FFFFFFF8h
 * 00000001402776A2: sub     rdx, rbx
 * 00000001402776A5: jnz     short loc_140277691
 * 00000001402776A7: test    r9d, r9d
 * 00000001402776AA: jz      short loc_1402776C2
 * 00000001402776AC: movzx   eax, byte ptr [r10]
 * 00000001402776B0: mov     ecx, r11d
 * 00000001402776B3: xor     r8, rax
 * 00000001402776B6: add     r10, rbx
 * 00000001402776B9: rol     r8, cl
 * 00000001402776BC: add     r9d, 0FFFFFFFFh
 * 00000001402776C0: jnz     short loc_1402776AC
 * 00000001402776C2: mov     rax, r8
 * 00000001402776C5: jmp     short loc_1402776CA
 * 00000001402776C7: xor     r8d, eax
 * 00000001402776CA: shr     rax, 1Fh
 * 00000001402776CE: test    rax, rax
 * 00000001402776D1: jnz     short loc_1402776C7
 * 00000001402776D3: mov     eax, [r13+2Ch]
 * 00000001402776D7: btr     r8d, 1Fh
 * 00000001402776DC: cmp     r8d, eax
 * 00000001402776DF: jz      loc_14027031B
 * 00000001402776E5: cmp     [rsi+6C0h], r12d
 * 00000001402776EC: jnz     loc_14027031B
 * 00000001402776F2: mov     ecx, r8d
 * 00000001402776F5: xor     rcx, rax
 * 00000001402776F8: mov     rax, [rsi+510h]
 * 00000001402776FF: mov     [rax+18h], rcx
 * 0000000140277703: cmp     [rsi+6C0h], r12d
 * 000000014027770A: jnz     loc_14027031B
 * 0000000140277710: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027771A: add     rax, rsi
 * 000000014027771D: mov     [rsi+6C8h], rax
 * 0000000140277724: mov     rax, 0B3B74BDEE4453415h
 * 000000014027772E: add     rax, r13
 * 0000000140277731: mov     [rsi+6D0h], rax
 * 0000000140277738: movsxd  rax, dword ptr [r13+0]
 * 000000014027773C: mov     [rsi+6D8h], rax
 * 0000000140277743: mov     [rsi+6E0h], r14
 * 000000014027774A: jmp     loc_140270AFB
 * 000000014027774F: mov     eax, [rsi+630h]
 * 0000000140277755: test    bl, al
 * 0000000140277757: jz      loc_140279285
 * 000000014027775D: mov     r12, [rsi+528h]
 * 0000000140277764: xor     r13d, r13d
 * 0000000140277767: mov     rax, [rsi+178h]
 * 000000014027776E: mov     r14d, r13d
 * 0000000140277771: mov     r15, [rsi+530h]
 * 0000000140277778: mov     rbx, [rsi+4C8h]
 * 000000014027777F: mov     [rbp+1A50h+var_1A30], r12
 * 0000000140277783: call    KeGuardDispatchICall
 * 0000000140277788: mov     rax, [rsi+128h]
 * 000000014027778F: xor     edx, edx
 * 0000000140277791: mov     rcx, rbx
 * 0000000140277794: call    KeGuardDispatchICall
 * 0000000140277799: mov     rax, [rsi+138h]
 * 00000001402777A0: xor     edx, edx
 * 00000001402777A2: mov     rcx, r12
 * 00000001402777A5: call    KeGuardDispatchICall
 * 00000001402777AA: mov     rdx, [rsi+520h]
 * 00000001402777B1: mov     rcx, [rdx]
 * 00000001402777B4: cmp     rcx, rdx
 * 00000001402777B7: jz      short loc_1402777DD
 * 00000001402777B9: lea     esi, [r13+1]
 * 00000001402777BD: lea     rax, [rcx-18h]
 * 00000001402777C1: cmp     rax, r15
 * 00000001402777C4: jz      short loc_1402777D1
 * 00000001402777C6: mov     rax, [rax+10h]
 * 00000001402777CA: mov     [rax+1BEh], sil
 * 00000001402777D1: mov     rcx, [rcx]
 * 00000001402777D4: cmp     rcx, rdx
 * 00000001402777D7: jnz     short loc_1402777BD
 * 00000001402777D9: mov     rsi, [rbp+1A50h+var_1A20]
 * 00000001402777DD: mov     r9, [rsi+4A0h]
 * 00000001402777E4: mov     ebx, 1
 * 00000001402777E9: mov     rdx, [r9]
 * 00000001402777EC: cmp     rdx, r9
 * 00000001402777EF: jz      loc_140277880
 * 00000001402777F5: mov     rdi, [rbp+1A50h+var_1A48]
 * 00000001402777F9: mov     r12, 0B3B74BDEE4453415h
 * 0000000140277803: lea     r8, [rdx-2E8h]
 * 000000014027780A: cmp     [r8+1BEh], r13b
 * 0000000140277811: jnz     short loc_140277863
 * 0000000140277813: mov     rax, [r8+418h]
 * 000000014027781A: test    rax, rax
 * 000000014027781D: jz      short loc_140277863
 * 000000014027781F: cmp     rax, r15
 * 0000000140277822: jz      short loc_140277863
 * 0000000140277824: cmp     [rsi+6C0h], r13d
 * 000000014027782B: jnz     short loc_140277863
 * 000000014027782D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140277837: add     rax, rsi
 * 000000014027783A: mov     [rsi+6C8h], rax
 * 0000000140277841: lea     rax, [rdi+r12]
 * 0000000140277845: mov     [rsi+6D0h], rax
 * 000000014027784C: movsxd  rax, dword ptr [rdi]
 * 000000014027784F: mov     [rsi+6D8h], rax
 * 0000000140277856: mov     [rsi+6E0h], r8
 * 000000014027785D: mov     [rsi+6C0h], ebx
 * 0000000140277863: mov     [r8+1BEh], r13b
 * 000000014027786A: add     r14d, ebx
 * 000000014027786D: mov     rdx, [rdx]
 * 0000000140277870: cmp     rdx, r9
 * 0000000140277873: jnz     short loc_140277803
 * 0000000140277875: mov     r12, [rbp+1A50h+var_1A30]
 * 0000000140277879: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140277880: mov     rcx, r12
 * 0000000140277883: mov     rax, [rsi+140h]
 * 000000014027788A: xor     edx, edx
 * 000000014027788C: call    KeGuardDispatchICall
 * 0000000140277891: mov     rcx, [rsi+4C8h]
 * 0000000140277898: xor     edx, edx
 * 000000014027789A: mov     rax, [rsi+130h]
 * 00000001402778A1: call    KeGuardDispatchICall
 * 00000001402778A6: mov     rax, [rsi+180h]
 * 00000001402778AD: call    KeGuardDispatchICall
 * 00000001402778B2: shl     r14d, 8
 * 00000001402778B6: add     [rsi+628h], r14d
 * 00000001402778BD: jmp     loc_140279285
 * 00000001402778C2: mov     eax, [rsi+630h]
 * 00000001402778C8: test    bl, al
 * 00000001402778CA: jnz     loc_140279285
 * 00000001402778D0: mov     r15, [rsi+528h]
 * 00000001402778D7: xor     r13d, r13d
 * 00000001402778DA: mov     rax, [rsi+178h]
 * 00000001402778E1: mov     r14d, r13d
 * 00000001402778E4: mov     r12, [rsi+530h]
 * 00000001402778EB: mov     rbx, [rsi+4C8h]
 * 00000001402778F2: mov     [rbp+1A50h+var_1A50], r13d
 * 00000001402778F6: mov     [rbp+1A50h+var_1A30], r15
 * 00000001402778FA: call    KeGuardDispatchICall
 * 00000001402778FF: mov     rax, [rsi+128h]
 * 0000000140277906: xor     edx, edx
 * 0000000140277908: mov     rcx, rbx
 * 000000014027790B: call    KeGuardDispatchICall
 * 0000000140277910: mov     rcx, [rsi+4A0h]
 * 0000000140277917: lea     ebx, [r13+1]
 * 000000014027791B: mov     rax, [rcx]
 * 000000014027791E: cmp     rax, rcx
 * 0000000140277921: jz      short loc_140277938
 * 0000000140277923: mov     [rax-12Ah], bl
 * 0000000140277929: add     r14d, ebx
 * 000000014027792C: mov     rax, [rax]
 * 000000014027792F: cmp     rax, rcx
 * 0000000140277932: jnz     short loc_140277923
 * 0000000140277934: mov     [rbp+1A50h+var_1A50], r14d
 * 0000000140277938: mov     rax, [rsi+138h]
 * 000000014027793F: xor     edx, edx
 * 0000000140277941: mov     rcx, r15
 * 0000000140277944: call    KeGuardDispatchICall
 * 0000000140277949: mov     r9, [rsi+520h]
 * 0000000140277950: mov     r8, [r9]
 * 0000000140277953: cmp     r8, r9
 * 0000000140277956: jz      loc_1402779EA
 * 000000014027795C: mov     rdi, [rbp+1A50h+var_1A48]
 * 0000000140277960: mov     r15, 0B3B74BDEE4453415h
 * 000000014027796A: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140277974: lea     rdx, [r8-18h]
 * 0000000140277978: cmp     rdx, r12
 * 000000014027797B: jz      short loc_1402779D3
 * 000000014027797D: mov     rdx, [rdx+10h]
 * 0000000140277981: cmp     [rdx+1BEh], r13b
 * 0000000140277988: jnz     short loc_1402779CC
 * 000000014027798A: test    dword ptr [rdx+304h], 4000000h
 * 0000000140277994: jz      short loc_1402779CC
 * 0000000140277996: cmp     [rsi+6C0h], r13d
 * 000000014027799D: jnz     short loc_1402779CC
 * 000000014027799F: lea     rax, [rsi+r14]
 * 00000001402779A3: mov     [rsi+6C8h], rax
 * 00000001402779AA: lea     rax, [rdi+r15]
 * 00000001402779AE: mov     [rsi+6D0h], rax
 * 00000001402779B5: movsxd  rax, dword ptr [rdi]
 * 00000001402779B8: mov     [rsi+6D8h], rax
 * 00000001402779BF: mov     [rsi+6E0h], rdx
 * 00000001402779C6: mov     [rsi+6C0h], ebx
 * 00000001402779CC: mov     [rdx+1BEh], r13b
 * 00000001402779D3: mov     r8, [r8]
 * 00000001402779D6: cmp     r8, r9
 * 00000001402779D9: jnz     short loc_140277974
 * 00000001402779DB: mov     r14d, [rbp+1A50h+var_1A50]
 * 00000001402779DF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402779E6: mov     r15, [rbp+1A50h+var_1A30]
 * 00000001402779EA: mov     rcx, r15
 * 00000001402779ED: jmp     loc_140277883
 * 00000001402779F2: mov     rdx, r12
 * 00000001402779F5: mov     rcx, rsi
 * 00000001402779F8: call    sub_140177004
 * 00000001402779FD: jmp     loc_140279285
 * 0000000140277A02: cmp     ecx, 21h ; '!'
 * 0000000140277A05: jz      loc_14027927A
 * 0000000140277A0B: cmp     ecx, 23h ; '#'
 * 0000000140277A0E: jz      loc_140278B9D
 * 0000000140277A14: cmp     ecx, 24h ; '$'
 * 0000000140277A17: jz      loc_1402786CA
 * 0000000140277A1D: cmp     ecx, 25h ; '%'
 * 0000000140277A20: jz      loc_140278696
 * 0000000140277A26: cmp     ecx, 26h ; '&'
 * 0000000140277A29: jz      loc_1402785D0
 * 0000000140277A2F: lea     eax, [rcx-27h]
 * 0000000140277A32: mov     r13d, 3
 * 0000000140277A38: cmp     eax, r13d
 * 0000000140277A3B: ja      loc_140277BB5
 * 0000000140277A41: mov     eax, [r12+24h]
 * 0000000140277A46: add     [rsi+628h], eax
 * 0000000140277A4C: mov     ebx, [r12+20h]
 * 0000000140277A51: mov     r10d, [r12+24h]
 * 0000000140277A56: add     rbx, rsi
 * 0000000140277A59: mov     r11d, [rsi+614h]
 * 0000000140277A60: mov     r9, rbx
 * 0000000140277A63: mov     r15, [rsi+618h]
 * 0000000140277A6A: mov     rax, rbx
 * 0000000140277A6D: lea     rcx, [rbx+r10]
 * 0000000140277A71: cmp     rbx, rcx
 * 0000000140277A74: jnb     short loc_140277A82
 * 0000000140277A76: prefetchnta byte ptr [rax]
 * 0000000140277A79: add     rax, 40h ; '@'
 * 0000000140277A7D: cmp     rax, rcx
 * 0000000140277A80: jb      short loc_140277A76
 * 0000000140277A82: mov     r14d, r10d
 * 0000000140277A85: xor     edx, edx
 * 0000000140277A87: shr     r14d, 7
 * 0000000140277A8B: mov     r8, r15
 * 0000000140277A8E: test    r14d, r14d
 * 0000000140277A91: jz      short loc_140277AFF
 * 0000000140277A93: lea     esi, [rdx+1]
 * 0000000140277A96: mov     rdi, 7010008004002001h
 * 0000000140277AA0: mov     eax, 8
 * 0000000140277AA5: xor     r8, [r9]
 * 0000000140277AA8: mov     ecx, r11d
 * 0000000140277AAB: rol     r8, cl
 * 0000000140277AAE: xor     r8, [r9+8]
 * 0000000140277AB2: add     r9, 10h
 * 0000000140277AB6: rol     r8, cl
 * 0000000140277AB9: sub     rax, rsi
 * 0000000140277ABC: jnz     short loc_140277AA5
 * 0000000140277ABE: mov     rcx, r9
 * 0000000140277AC1: sub     rcx, rbx
 * 0000000140277AC4: xor     rcx, r15
 * 0000000140277AC7: mov     rax, rcx
 * 0000000140277ACA: rol     rax, 11h
 * 0000000140277ACE: xor     rcx, rax
 * 0000000140277AD1: mov     rax, rdi
 * 0000000140277AD4: mul     rcx
 * 0000000140277AD7: xor     r11d, eax
 * 0000000140277ADA: mov     [rbp+1A50h+var_1480], rdx
 * 0000000140277AE1: xor     r11d, edx
 * 0000000140277AE4: and     r11d, 3Fh
 * 0000000140277AE8: cmovz   r11d, esi
 * 0000000140277AEC: add     r14d, 0FFFFFFFFh
 * 0000000140277AF0: jnz     short loc_140277AA0
 * 0000000140277AF2: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140277AF6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140277AFD: xor     edx, edx
 * 0000000140277AFF: and     r10d, 7Fh
 * 0000000140277B03: mov     ebx, 1
 * 0000000140277B08: cmp     r10d, 8
 * 0000000140277B0C: jb      short loc_140277B2B
 * 0000000140277B0E: mov     eax, r10d
 * 0000000140277B11: shr     rax, 3
 * 0000000140277B15: xor     r8, [r9]
 * 0000000140277B18: mov     ecx, r11d
 * 0000000140277B1B: rol     r8, cl
 * 0000000140277B1E: add     r9, 8
 * 0000000140277B22: add     r10d, 0FFFFFFF8h
 * 0000000140277B26: sub     rax, rbx
 * 0000000140277B29: jnz     short loc_140277B15
 * 0000000140277B2B: test    r10d, r10d
 * 0000000140277B2E: jz      short loc_140277B46
 * 0000000140277B30: movzx   eax, byte ptr [r9]
 * 0000000140277B34: mov     ecx, r11d
 * 0000000140277B37: xor     r8, rax
 * 0000000140277B3A: add     r9, rbx
 * 0000000140277B3D: rol     r8, cl
 * 0000000140277B40: add     r10d, 0FFFFFFFFh
 * 0000000140277B44: jnz     short loc_140277B30
 * 0000000140277B46: mov     rcx, [r12+18h]
 * 0000000140277B4B: cmp     r8, rcx
 * 0000000140277B4E: jz      loc_14027031B
 * 0000000140277B54: cmp     [rsi+6C0h], edx
 * 0000000140277B5A: jnz     short loc_140277B6A
 * 0000000140277B5C: mov     rax, [rsi+510h]
 * 0000000140277B63: xor     rcx, r8
 * 0000000140277B66: mov     [rax+18h], rcx
 * 0000000140277B6A: mov     ecx, [r12+20h]
 * 0000000140277B6F: add     rcx, rsi
 * 0000000140277B72: cmp     [rsi+6C0h], edx
 * 0000000140277B78: jnz     loc_14027031B
 * 0000000140277B7E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140277B88: add     rax, rsi
 * 0000000140277B8B: mov     [rsi+6C8h], rax
 * 0000000140277B92: mov     rax, 0B3B74BDEE4453415h
 * 0000000140277B9C: add     rax, r12
 * 0000000140277B9F: mov     [rsi+6D0h], rax
 * 0000000140277BA6: movsxd  rax, dword ptr [r12]
 * 0000000140277BAA: jmp     loc_14027732C
 * 0000000140277BAF: mov     r13d, 3
 * 0000000140277BB5: sub     ecx, 2
 * 0000000140277BB8: jz      loc_140278079
 * 0000000140277BBE: sub     ecx, 1
 * 0000000140277BC1: jz      loc_140277E06
 * 0000000140277BC7: cmp     ecx, 14h
 * 0000000140277BCA: jz      short loc_140277C12
 * 0000000140277BCC: xor     ecx, ecx
 * 0000000140277BCE: cmp     [rsi+6C0h], ecx
 * 0000000140277BD4: jnz     loc_140279285
 * 0000000140277BDA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140277BE4: add     rax, rsi
 * 0000000140277BE7: mov     [rsi+6C8h], rax
 * 0000000140277BEE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140277BF8: add     rax, r12
 * 0000000140277BFB: mov     [rsi+6D0h], rax
 * 0000000140277C02: mov     qword ptr [rsi+6D8h], 101h
 * 0000000140277C0D: jmp     loc_140277333
 * 0000000140277C12: mov     edx, [r12+28h]
 * 0000000140277C17: lea     rcx, [rbp+1A50h+var_11D0]
 * 0000000140277C1E: mov     rax, [rsi+1A0h]
 * 0000000140277C25: call    KeGuardDispatchICall
 * 0000000140277C2A: mov     rax, [rsi+1D0h]
 * 0000000140277C31: lea     rdx, [rbp+1A50h+var_11C0]
 * 0000000140277C38: lea     rcx, [rbp+1A50h+var_11D0]
 * 0000000140277C3F: call    KeGuardDispatchICall
 * 0000000140277C44: mov     rbx, [rsi+7C0h]
 * 0000000140277C4B: xor     r15d, r15d
 * 0000000140277C4E: test    rbx, rbx
 * 0000000140277C51: jz      short loc_140277C5B
 * 0000000140277C53: mov     ebx, [rbx+320h]
 * 0000000140277C59: jmp     short loc_140277C6C
 * 0000000140277C5B: mov     ecx, 832h
 * 0000000140277C60: rdmsr
 * 0000000140277C62: shl     rdx, 20h
 * 0000000140277C66: or      rax, rdx
 * 0000000140277C69: mov     rbx, rax
 * 0000000140277C6C: mov     r14, [rsi+7C0h]
 * 0000000140277C73: test    r14, r14
 * 0000000140277C76: jz      short loc_140277C81
 * 0000000140277C78: mov     r14d, [r14+340h]
 * 0000000140277C7F: jmp     short loc_140277C92
 * 0000000140277C81: mov     ecx, 834h
 * 0000000140277C86: rdmsr
 * 0000000140277C88: shl     rdx, 20h
 * 0000000140277C8C: or      rax, rdx
 * 0000000140277C8F: mov     r14, rax
 * 0000000140277C92: mov     rax, [rsi+198h]
 * 0000000140277C99: lea     rcx, [rbp+1A50h+var_11C0]
 * 0000000140277CA0: call    KeGuardDispatchICall
 * 0000000140277CA5: mov     eax, [r12+1Ch]
 * 0000000140277CAA: mov     ecx, [r12+18h]
 * 0000000140277CAF: and     eax, ebx
 * 0000000140277CB1: cmp     eax, ecx
 * 0000000140277CB3: jnz     short loc_140277CD9
 * 0000000140277CB5: bt      ebx, 10h
 * 0000000140277CB9: jb      loc_140277D60
 * 0000000140277CBF: cmp     bl, 0D1h
 * 0000000140277CC2: jz      loc_140277D60
 * 0000000140277CC8: lea     eax, [rbx+r13]
 * 0000000140277CCC: mov     edx, 1
 * 0000000140277CD1: cmp     al, dl
 * 0000000140277CD3: jbe     loc_140277D60
 * 0000000140277CD9: mov     rdx, rcx
 * 0000000140277CDC: mov     rax, 32000000000h
 * 0000000140277CE6: mov     ecx, [r12+28h]
 * 0000000140277CEB: shl     rcx, 30h
 * 0000000140277CEF: or      rcx, rdx
 * 0000000140277CF2: or      rcx, rax
 * 0000000140277CF5: mov     eax, ebx
 * 0000000140277CF7: cmp     [rsi+6C0h], r15d
 * 0000000140277CFE: jnz     short loc_140277D60
 * 0000000140277D00: xor     rdx, rax
 * 0000000140277D03: mov     rax, [rsi+510h]
 * 0000000140277D0A: mov     [rax+18h], rdx
 * 0000000140277D0E: cmp     [rsi+6C0h], r15d
 * 0000000140277D15: jnz     short loc_140277D60
 * 0000000140277D17: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140277D21: mov     r9, 0B3B74BDEE4453415h
 * 0000000140277D2B: mov     ebx, 1
 * 0000000140277D30: lea     rax, [rsi+r10]
 * 0000000140277D34: mov     [rsi+6C8h], rax
 * 0000000140277D3B: lea     rax, [r12+r9]
 * 0000000140277D3F: mov     [rsi+6D0h], rax
 * 0000000140277D46: movsxd  rax, dword ptr [r12]
 * 0000000140277D4A: mov     [rsi+6D8h], rax
 * 0000000140277D51: mov     [rsi+6E0h], rcx
 * 0000000140277D58: mov     [rsi+6C0h], ebx
 * 0000000140277D5E: jmp     short loc_140277D79
 * 0000000140277D60: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140277D6A: mov     r9, 0B3B74BDEE4453415h
 * 0000000140277D74: mov     ebx, 1
 * 0000000140277D79: mov     eax, [r12+24h]
 * 0000000140277D7E: mov     ecx, [r12+20h]
 * 0000000140277D83: and     eax, r14d
 * 0000000140277D86: cmp     eax, ecx
 * 0000000140277D88: jnz     short loc_140277DAB
 * 0000000140277D8A: bt      r14d, 10h
 * 0000000140277D8F: jb      loc_140278065
 * 0000000140277D95: cmp     r14b, 0D1h
 * 0000000140277D99: jz      loc_140278065
 * 0000000140277D9F: lea     eax, [r14+r13]
 * 0000000140277DA3: cmp     al, bl
 * 0000000140277DA5: jbe     loc_140278065
 * 0000000140277DAB: mov     rdx, rcx
 * 0000000140277DAE: mov     rax, 34000000000h
 * 0000000140277DB8: mov     ecx, [r12+28h]
 * 0000000140277DBD: shl     rcx, 30h
 * 0000000140277DC1: or      rcx, rdx
 * 0000000140277DC4: or      rcx, rax
 * 0000000140277DC7: mov     eax, r14d
 * 0000000140277DCA: cmp     [rsi+6C0h], r15d
 * 0000000140277DD1: jnz     loc_140278065
 * 0000000140277DD7: xor     rdx, rax
 * 0000000140277DDA: mov     rax, [rsi+510h]
 * 0000000140277DE1: mov     [rax+18h], rdx
 * 0000000140277DE5: cmp     [rsi+6C0h], r15d
 * 0000000140277DEC: jnz     loc_140278065
 * 0000000140277DF2: lea     rax, [rsi+r10]
 * 0000000140277DF6: mov     [rsi+6C8h], rax
 * 0000000140277DFD: lea     rax, [r12+r9]
 * 0000000140277E01: jmp     loc_14027803F
 * 0000000140277E06: mov     edx, [r12+28h]
 * 0000000140277E0B: lea     rcx, [rbp+1A50h+var_11B0]
 * 0000000140277E12: mov     rax, [rsi+1A0h]
 * 0000000140277E19: call    KeGuardDispatchICall
 * 0000000140277E1E: mov     rax, [rsi+1D0h]
 * 0000000140277E25: lea     rdx, [rbp+1A50h+var_11A0]
 * 0000000140277E2C: lea     rcx, [rbp+1A50h+var_11B0]
 * 0000000140277E33: call    KeGuardDispatchICall
 * 0000000140277E38: lea     rdx, [rbp+1A50h+var_10D0]
 * 0000000140277E3F: lea     rcx, [rbp+1A50h+var_1780]
 * 0000000140277E46: call    KiGetGdtIdt
 * 0000000140277E4B: mov     r14, [rbp+1A50h+var_177E]
 * 0000000140277E52: mov     r8d, [r12+10h]
 * 0000000140277E57: mov     r9, r14
 * 0000000140277E5A: add     [rsi+628h], r8d
 * 0000000140277E61: mov     rax, r14
 * 0000000140277E64: mov     r10d, [rsi+614h]
 * 0000000140277E6B: mov     r15, [rsi+618h]
 * 0000000140277E72: lea     rcx, [r14+r8]
 * 0000000140277E76: cmp     r14, rcx
 * 0000000140277E79: jnb     short loc_140277E87
 * 0000000140277E7B: prefetchnta byte ptr [rax]
 * 0000000140277E7E: add     rax, 40h ; '@'
 * 0000000140277E82: cmp     rax, rcx
 * 0000000140277E85: jb      short loc_140277E7B
 * 0000000140277E87: mov     r11d, r8d
 * 0000000140277E8A: xor     r13d, r13d
 * 0000000140277E8D: shr     r11d, 7
 * 0000000140277E91: mov     rbx, r15
 * 0000000140277E94: test    r11d, r11d
 * 0000000140277E97: jz      short loc_140277F04
 * 0000000140277E99: lea     esi, [r13+1]
 * 0000000140277E9D: mov     rdi, 7010008004002001h
 * 0000000140277EA7: mov     eax, 8
 * 0000000140277EAC: xor     rbx, [r9]
 * 0000000140277EAF: mov     ecx, r10d
 * 0000000140277EB2: rol     rbx, cl
 * 0000000140277EB5: xor     rbx, [r9+8]
 * 0000000140277EB9: add     r9, 10h
 * 0000000140277EBD: rol     rbx, cl
 * 0000000140277EC0: sub     rax, rsi
 * 0000000140277EC3: jnz     short loc_140277EAC
 * 0000000140277EC5: mov     rcx, r9
 * 0000000140277EC8: sub     rcx, r14
 * 0000000140277ECB: xor     rcx, r15
 * 0000000140277ECE: mov     rax, rcx
 * 0000000140277ED1: rol     rax, 11h
 * 0000000140277ED5: xor     rcx, rax
 * 0000000140277ED8: mov     rax, rdi
 * 0000000140277EDB: mul     rcx
 * 0000000140277EDE: xor     r10d, eax
 * 0000000140277EE1: mov     [rbp+1A50h+var_1478], rdx
 * 0000000140277EE8: xor     r10d, edx
 * 0000000140277EEB: and     r10d, 3Fh
 * 0000000140277EEF: cmovz   r10d, esi
 * 0000000140277EF3: add     r11d, 0FFFFFFFFh
 * 0000000140277EF7: jnz     short loc_140277EA7
 * 0000000140277EF9: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140277EFD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140277F04: and     r8d, 7Fh
 * 0000000140277F08: mov     r14d, 1
 * 0000000140277F0E: cmp     r8d, 8
 * 0000000140277F12: jb      short loc_140277F31
 * 0000000140277F14: mov     eax, r8d
 * 0000000140277F17: shr     rax, 3
 * 0000000140277F1B: xor     rbx, [r9]
 * 0000000140277F1E: mov     ecx, r10d
 * 0000000140277F21: rol     rbx, cl
 * 0000000140277F24: add     r9, 8
 * 0000000140277F28: add     r8d, 0FFFFFFF8h
 * 0000000140277F2C: sub     rax, r14
 * 0000000140277F2F: jnz     short loc_140277F1B
 * 0000000140277F31: test    r8d, r8d
 * 0000000140277F34: jz      short loc_140277F4C
 * 0000000140277F36: movzx   eax, byte ptr [r9]
 * 0000000140277F3A: mov     ecx, r10d
 * 0000000140277F3D: xor     rbx, rax
 * 0000000140277F40: add     r9, r14
 * 0000000140277F43: rol     rbx, cl
 * 0000000140277F46: add     r8d, 0FFFFFFFFh
 * 0000000140277F4A: jnz     short loc_140277F36
 * 0000000140277F4C: mov     rax, rbx
 * 0000000140277F4F: jmp     short loc_140277F53
 * 0000000140277F51: xor     ebx, eax
 * 0000000140277F53: shr     rax, 1Fh
 * 0000000140277F57: test    rax, rax
 * 0000000140277F5A: jnz     short loc_140277F51
 * 0000000140277F5C: mov     rax, [rsi+198h]
 * 0000000140277F63: lea     rcx, [rbp+1A50h+var_11A0]
 * 0000000140277F6A: btr     ebx, 1Fh
 * 0000000140277F6E: call    KeGuardDispatchICall
 * 0000000140277F73: cmp     ebx, [r12+14h]
 * 0000000140277F78: jnz     short loc_140277F8D
 * 0000000140277F7A: movzx   eax, word ptr [r12+2Ch]
 * 0000000140277F80: cmp     [rbp+1A50h+var_1780], ax
 * 0000000140277F87: jz      loc_140278060
 * 0000000140277F8D: test    dword ptr [rsi+748h], 40000000h
 * 0000000140277F97: jz      short loc_140277FDC
 * 0000000140277F99: mov     rcx, [rsi+7F0h]
 * 0000000140277FA0: mov     edx, 30h ; '0'
 * 0000000140277FA5: lea     r8d, [rdx-2Ah]
 * 0000000140277FA9: mov     rax, [r12]
 * 0000000140277FAD: add     edx, 0FFFFFFF8h
 * 0000000140277FB0: mov     [rcx], rax
 * 0000000140277FB3: add     r12, 8
 * 0000000140277FB7: add     rcx, 8
 * 0000000140277FBB: sub     r8, r14
 * 0000000140277FBE: jnz     short loc_140277FA9
 * 0000000140277FC0: test    edx, edx
 * 0000000140277FC2: jz      short loc_140277FD5
 * 0000000140277FC4: mov     al, [r12]
 * 0000000140277FC8: add     r12, r14
 * 0000000140277FCB: mov     [rcx], al
 * 0000000140277FCD: add     rcx, r14
 * 0000000140277FD0: add     edx, 0FFFFFFFFh
 * 0000000140277FD3: jnz     short loc_140277FC4
 * 0000000140277FD5: mov     r12, [rsi+7F0h]
 * 0000000140277FDC: mov     rax, [rbp+1A50h+var_177E]
 * 0000000140277FE3: mov     [r12+18h], rax
 * 0000000140277FE8: mov     ecx, ebx
 * 0000000140277FEA: mov     [r12+20h], rcx
 * 0000000140277FEF: mov     eax, [r12+14h]
 * 0000000140277FF4: cmp     [rsi+6C0h], r13d
 * 0000000140277FFB: jnz     short loc_14027800B
 * 0000000140277FFD: xor     rcx, rax
 * 0000000140278000: mov     rax, [rsi+510h]
 * 0000000140278007: mov     [rax+18h], rcx
 * 000000014027800B: mov     ebx, 1
 * 0000000140278010: mov     rcx, [r12+8]
 * 0000000140278015: cmp     [rsi+6C0h], r13d
 * 000000014027801C: jnz     short loc_140278065
 * 000000014027801E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278028: add     rax, rsi
 * 000000014027802B: mov     [rsi+6C8h], rax
 * 0000000140278032: mov     rax, 0B3B74BDEE4453415h
 * 000000014027803C: add     rax, r12
 * 000000014027803F: mov     [rsi+6D0h], rax
 * 0000000140278046: movsxd  rax, dword ptr [r12]
 * 000000014027804A: mov     [rsi+6D8h], rax
 * 0000000140278051: mov     [rsi+6E0h], rcx
 * 0000000140278058: mov     [rsi+6C0h], ebx
 * 000000014027805E: jmp     short loc_140278065
 * 0000000140278060: mov     ebx, 1
 * 0000000140278065: mov     r12d, 8000h
 * 000000014027806B: add     [rsi+628h], r12d
 * 0000000140278072: xor     eax, eax
 * 0000000140278074: jmp     loc_14027928D
 * 0000000140278079: mov     edx, [r12+28h]
 * 000000014027807E: lea     rcx, [rbp+1A50h+var_1190]
 * 0000000140278085: xor     eax, eax
 * 0000000140278087: mov     [rbp+1A50h+var_1A18], eax
 * 000000014027808A: mov     rax, [rsi+1A0h]
 * 0000000140278091: call    KeGuardDispatchICall
 * 0000000140278096: mov     rax, [rsi+1D0h]
 * 000000014027809D: lea     rdx, [rbp+1A50h+var_1180]
 * 00000001402780A4: lea     rcx, [rbp+1A50h+var_1190]
 * 00000001402780AB: call    KeGuardDispatchICall
 * 00000001402780B0: lea     rdx, [rbp+1A50h+var_1730]
 * 00000001402780B7: lea     rcx, [rbp+1A50h+var_10E0]
 * 00000001402780BE: call    KiGetGdtIdt
 * 00000001402780C3: mov     rdi, [rbp+1A50h+var_172E]
 * 00000001402780CA: xor     r10d, r10d
 * 00000001402780CD: mov     ecx, r10d
 * 00000001402780D0: mov     [rbp+1A50h+var_1A30], rdi
 * 00000001402780D4: mov     [rbp+1A50h+var_1A00], rcx
 * 00000001402780D8: mov     r9d, r10d
 * 00000001402780DB: mov     [rbp+1A50h+var_1A50], r10d
 * 00000001402780DF: add     rdi, 4
 * 00000001402780E3: mov     rax, [rsi+698h]
 * 00000001402780EA: mov     rdx, r10
 * 00000001402780ED: mov     [rbp+1A50h+var_18D8], rax
 * 00000001402780F4: mov     r14, r10
 * 00000001402780F7: mov     r8, [rsi+6A0h]
 * 00000001402780FE: mov     r15d, [rsi+690h]
 * 0000000140278105: mov     [rbp+1A50h+var_1A40], r8
 * 0000000140278109: mov     [rbp+1A50h+var_1A28], rdx
 * 000000014027810D: mov     r12, cr8
 * 0000000140278111: mov     eax, 0Fh
 * 0000000140278116: mov     cr8, rax
 * 000000014027811A: movzx   eax, word ptr [rdi-4]
 * 000000014027811E: movzx   r13d, word ptr [rdi]
 * 0000000140278122: add     rcx, [rsi+570h]
 * 0000000140278129: mov     word ptr [rbp+1A50h+var_19D0], ax
 * 0000000140278130: movzx   eax, word ptr [rdi+2]
 * 0000000140278134: mov     word ptr [rbp+1A50h+var_19D0+2], ax
 * 000000014027813B: mov     eax, [rdi+4]
 * 000000014027813E: shr     r13w, 0Dh
 * 0000000140278143: mov     dword ptr [rbp+1A50h+var_19D0+4], eax
 * 0000000140278149: and     r13w, 3
 * 000000014027814E: mov     rbx, [rbp+1A50h+var_19D0]
 * 0000000140278155: cmp     rbx, rcx
 * 0000000140278158: jnz     short loc_14027819B
 * 000000014027815A: test    r13w, r13w
 * 000000014027815E: jnz     loc_140278426
 * 0000000140278164: mov     rax, [rsi+440h]
 * 000000014027816B: mov     ecx, r9d
 * 000000014027816E: call    KeGuardDispatchICall
 * 0000000140278173: mov     r14, [rax]
 * 0000000140278176: test    r14, r14
 * 0000000140278179: jz      short loc_140278193
 * 000000014027817B: cmp     [rbp+1A50h+var_1A50], 30h ; '0'
 * 000000014027817F: mov     r15, [r15+r14]
 * 0000000140278183: mov     [rbp+1A50h+var_1A28], r15
 * 0000000140278187: jb      loc_140278422
 * 000000014027818D: mov     r8, [rbp+1A50h+var_1A40]
 * 0000000140278191: jmp     short loc_14027819F
 * 0000000140278193: mov     r8, [rbp+1A50h+var_1A40]
 * 0000000140278197: or      r14, 0FFFFFFFFFFFFFFFFh
 * 000000014027819B: mov     r15, [rbp+1A50h+var_1A28]
 * 000000014027819F: movzx   eax, r12b
 * 00000001402781A3: mov     cr8, rax
 * 00000001402781A7: test    r14, r14
 * 00000001402781AA: jnz     short loc_1402781F8
 * 00000001402781AC: mov     rdx, [rbp+1A50h+var_18D8]
 * 00000001402781B3: cmp     rbx, rdx
 * 00000001402781B6: jb      loc_140278422
 * 00000001402781BC: cmp     rbx, r8
 * 00000001402781BF: ja      loc_140278422
 * 00000001402781C5: mov     r8d, dword ptr [rbp+1A50h+var_19D0]
 * 00000001402781CC: mov     rcx, [rsi+6A8h]
 * 00000001402781D3: sub     r8d, edx
 * 00000001402781D6: mov     rax, [rsi+210h]
 * 00000001402781DD: call    KeGuardDispatchICall
 * 00000001402781E2: test    rax, rax
 * 00000001402781E5: jz      loc_140278422
 * 00000001402781EB: mov     eax, [rax+24h]
 * 00000001402781EE: bt      eax, 19h
 * 00000001402781F2: jb      loc_140278422
 * 00000001402781F8: mov     eax, 10h
 * 00000001402781FD: cmp     [rdi-2], ax
 * 0000000140278201: jnz     loc_140278422
 * 0000000140278207: movzx   ecx, word ptr [rdi]
 * 000000014027820A: mov     edx, 1F00h
 * 000000014027820F: movzx   eax, cx
 * 0000000140278212: and     ax, dx
 * 0000000140278215: mov     edx, 0E00h
 * 000000014027821A: cmp     ax, dx
 * 000000014027821D: jnz     loc_140278422
 * 0000000140278223: mov     eax, 8000h
 * 0000000140278228: test    ax, cx
 * 000000014027822B: jz      loc_140278422
 * 0000000140278231: mov     rax, [rsi+258h]
 * 0000000140278238: lea     rdx, [rbp+1A50h+var_18D8]
 * 000000014027823F: xor     r8d, r8d
 * 0000000140278242: mov     rcx, rbx
 * 0000000140278245: call    KeGuardDispatchICall
 * 000000014027824A: test    rax, rax
 * 000000014027824D: jz      loc_1402783AA
 * 0000000140278253: mov     eax, [rax]
 * 0000000140278255: mov     rcx, [rbp+1A50h+var_18D8]
 * 000000014027825C: add     rax, rcx
 * 000000014027825F: cmp     rax, rbx
 * 0000000140278262: jnz     loc_1402783AA
 * 0000000140278268: cmp     rcx, [rsi+698h]
 * 000000014027826F: jnz     loc_1402783AA
 * 0000000140278275: test    r14, r14
 * 0000000140278278: jnz     loc_1402783AF
 * 000000014027827E: mov     r13d, 1
 * 0000000140278284: mov     r9d, [rbp+1A50h+var_1A50]
 * 0000000140278288: add     rdi, 10h
 * 000000014027828C: mov     rcx, [rbp+1A50h+var_1A00]
 * 0000000140278290: add     r9d, r13d
 * 0000000140278293: add     rcx, 8
 * 0000000140278297: mov     [rbp+1A50h+var_1A50], r9d
 * 000000014027829B: mov     [rbp+1A50h+var_1A00], rcx
 * 000000014027829F: mov     r10d, 0
 * 00000001402782A5: cmp     r9d, 0FFh
 * 00000001402782AC: jbe     loc_1402780E3
 * 00000001402782B2: mov     r15, [rbp+1A50h+var_1A30]
 * 00000001402782B6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001402782BD: add     dword ptr [rsi+628h], 350h
 * 00000001402782C7: mov     r8, r15
 * 00000001402782CA: mov     r14d, [rsi+628h]
 * 00000001402782D1: mov     rax, r15
 * 00000001402782D4: mov     r9d, [rsi+614h]
 * 00000001402782DB: mov     r11, [rsi+618h]
 * 00000001402782E2: lea     rcx, [r15+350h]
 * 00000001402782E9: cmp     r15, rcx
 * 00000001402782EC: jnb     short loc_1402782FA
 * 00000001402782EE: prefetchnta byte ptr [rax]
 * 00000001402782F1: add     rax, 40h ; '@'
 * 00000001402782F5: cmp     rax, rcx
 * 00000001402782F8: jb      short loc_1402782EE
 * 00000001402782FA: mov     rbx, r11
 * 00000001402782FD: mov     rsi, 7010008004002001h
 * 0000000140278307: mov     r10d, 6
 * 000000014027830D: mov     eax, 8
 * 0000000140278312: xor     rbx, [r8]
 * 0000000140278315: mov     ecx, r9d
 * 0000000140278318: rol     rbx, cl
 * 000000014027831B: xor     rbx, [r8+8]
 * 000000014027831F: add     r8, 10h
 * 0000000140278323: rol     rbx, cl
 * 0000000140278326: sub     rax, r13
 * 0000000140278329: jnz     short loc_140278312
 * 000000014027832B: mov     rcx, r8
 * 000000014027832E: sub     rcx, r15
 * 0000000140278331: xor     rcx, r11
 * 0000000140278334: mov     rax, rcx
 * 0000000140278337: rol     rax, 11h
 * 000000014027833B: xor     rcx, rax
 * 000000014027833E: mov     rax, rsi
 * 0000000140278341: mul     rcx
 * 0000000140278344: xor     r9d, eax
 * 0000000140278347: mov     [rbp+1A50h+var_1470], rdx
 * 000000014027834E: xor     r9d, edx
 * 0000000140278351: and     r9d, 3Fh
 * 0000000140278355: cmovz   r9d, r13d
 * 0000000140278359: add     r10d, 0FFFFFFFFh
 * 000000014027835D: jnz     short loc_14027830D
 * 000000014027835F: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140278363: lea     edx, [r10+50h]
 * 0000000140278367: mov     r12d, [rbp+1A50h+var_1A18]
 * 000000014027836B: lea     eax, [rdx-46h]
 * 000000014027836E: mov     r11d, 0FFFFFFF8h
 * 0000000140278374: xor     rbx, [r8]
 * 0000000140278377: mov     ecx, r9d
 * 000000014027837A: rol     rbx, cl
 * 000000014027837D: add     r8, 8
 * 0000000140278381: add     edx, r11d
 * 0000000140278384: sub     rax, r13
 * 0000000140278387: jnz     short loc_140278374
 * 0000000140278389: test    edx, edx
 * 000000014027838B: jz      short loc_1402783A2
 * 000000014027838D: movzx   eax, byte ptr [r8]
 * 0000000140278391: mov     ecx, r9d
 * 0000000140278394: xor     rbx, rax
 * 0000000140278397: add     r8, r13
 * 000000014027839A: rol     rbx, cl
 * 000000014027839D: add     edx, 0FFFFFFFFh
 * 00000001402783A0: jnz     short loc_14027838D
 * 00000001402783A2: mov     rax, rbx
 * 00000001402783A5: jmp     loc_14027845F
 * 00000001402783AA: test    r14, r14
 * 00000001402783AD: jz      short loc_140278422
 * 00000001402783AF: test    r13w, r13w
 * 00000001402783B3: jnz     short loc_140278422
 * 00000001402783B5: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 00000001402783B9: jz      loc_14027827E
 * 00000001402783BF: mov     rax, [rsi+258h]
 * 00000001402783C6: lea     rdx, [rbp+1A50h+var_18D8]
 * 00000001402783CD: xor     r8d, r8d
 * 00000001402783D0: mov     rcx, r15
 * 00000001402783D3: call    KeGuardDispatchICall
 * 00000001402783D8: test    rax, rax
 * 00000001402783DB: jz      short loc_140278422
 * 00000001402783DD: mov     eax, [rax]
 * 00000001402783DF: mov     rdx, [rbp+1A50h+var_18D8]
 * 00000001402783E6: add     rax, rdx
 * 00000001402783E9: cmp     rax, r15
 * 00000001402783EC: jnz     short loc_140278422
 * 00000001402783EE: cmp     rdx, [rsi+698h]
 * 00000001402783F5: jnz     short loc_140278422
 * 00000001402783F7: mov     rcx, [rsi+6A8h]
 * 00000001402783FE: mov     r8d, r15d
 * 0000000140278401: mov     rax, [rsi+210h]
 * 0000000140278408: sub     r8d, edx
 * 000000014027840B: call    KeGuardDispatchICall
 * 0000000140278410: test    rax, rax
 * 0000000140278413: jz      short loc_140278422
 * 0000000140278415: mov     eax, [rax+24h]
 * 0000000140278418: bt      eax, 19h
 * 000000014027841C: jnb     loc_14027827E
 * 0000000140278422: mov     rdx, [rbp+1A50h+var_1A28]
 * 0000000140278426: mov     rax, [rsi+510h]
 * 000000014027842D: mov     [rax], rbx
 * 0000000140278430: mov     dword ptr [rax+10h], 80h
 * 0000000140278437: test    rdx, rdx
 * 000000014027843A: jz      short loc_14027844E
 * 000000014027843C: mov     rax, [rsi+510h]
 * 0000000140278443: mov     [rax+8], rdx
 * 0000000140278447: mov     dword ptr [rax+14h], 80h
 * 000000014027844E: mov     r13d, 1
 * 0000000140278454: mov     [rbp+1A50h+var_1A18], r13d
 * 0000000140278458: jmp     loc_140278284
 * 000000014027845D: xor     ebx, eax
 * 000000014027845F: shr     rax, 1Fh
 * 0000000140278463: test    rax, rax
 * 0000000140278466: jnz     short loc_14027845D
 * 0000000140278468: lea     rdx, [r15+0E10h]
 * 000000014027846F: btr     ebx, 1Fh
 * 0000000140278473: lea     eax, [r14+10h]
 * 0000000140278477: mov     [rsi+628h], eax
 * 000000014027847D: lea     rcx, [rdx+10h]
 * 0000000140278481: mov     r9d, [rsi+614h]
 * 0000000140278488: mov     rax, rdx
 * 000000014027848B: mov     r14, [rsi+618h]
 * 0000000140278492: cmp     rdx, rcx
 * 0000000140278495: jnb     short loc_1402784A3
 * 0000000140278497: prefetchnta byte ptr [rax]
 * 000000014027849A: add     rax, 40h ; '@'
 * 000000014027849E: cmp     rax, rcx
 * 00000001402784A1: jb      short loc_140278497
 * 00000001402784A3: mov     eax, 2
 * 00000001402784A8: lea     r8d, [rax+0Eh]
 * 00000001402784AC: xor     r14, [rdx]
 * 00000001402784AF: mov     ecx, r9d
 * 00000001402784B2: rol     r14, cl
 * 00000001402784B5: add     rdx, 8
 * 00000001402784B9: add     r8d, r11d
 * 00000001402784BC: sub     rax, r13
 * 00000001402784BF: jnz     short loc_1402784AC
 * 00000001402784C1: xor     r15d, r15d
 * 00000001402784C4: test    r8d, r8d
 * 00000001402784C7: jz      short loc_1402784DE
 * 00000001402784C9: movzx   eax, byte ptr [rdx]
 * 00000001402784CC: mov     ecx, r9d
 * 00000001402784CF: xor     r14, rax
 * 00000001402784D2: add     rdx, r13
 * 00000001402784D5: rol     r14, cl
 * 00000001402784D8: add     r8d, 0FFFFFFFFh
 * 00000001402784DC: jnz     short loc_1402784C9
 * 00000001402784DE: mov     rax, r14
 * 00000001402784E1: jmp     short loc_1402784E6
 * 00000001402784E3: xor     r14d, eax
 * 00000001402784E6: shr     rax, 1Fh
 * 00000001402784EA: test    rax, rax
 * 00000001402784ED: jnz     short loc_1402784E3
 * 00000001402784EF: mov     rax, [rsi+198h]
 * 00000001402784F6: lea     rcx, [rbp+1A50h+var_1180]
 * 00000001402784FD: btr     r14d, 1Fh
 * 0000000140278502: call    KeGuardDispatchICall
 * 0000000140278507: mov     rdx, [rbp+1A50h+var_1A48]
 * 000000014027850B: mov     ecx, [rdx+14h]
 * 000000014027850E: cmp     ebx, ecx
 * 0000000140278510: jnz     short loc_140278531
 * 0000000140278512: mov     eax, r14d
 * 0000000140278515: cmp     rax, [rdx+18h]
 * 0000000140278519: jnz     short loc_140278531
 * 000000014027851B: movzx   eax, word ptr [rdx+2Ch]
 * 000000014027851F: cmp     [rbp+1A50h+var_1730], ax
 * 0000000140278526: jnz     short loc_140278531
 * 0000000140278528: test    r12d, r12d
 * 000000014027852B: jz      loc_1402785BC
 * 0000000140278531: test    r12d, r12d
 * 0000000140278534: jnz     short loc_140278569
 * 0000000140278536: mov     eax, r14d
 * 0000000140278539: cmp     rax, [rdx+18h]
 * 000000014027853D: jnz     short loc_14027854F
 * 000000014027853F: mov     rax, rcx
 * 0000000140278542: cmp     [rsi+6C0h], r15d
 * 0000000140278549: jnz     short loc_140278569
 * 000000014027854B: mov     ecx, ebx
 * 000000014027854D: jmp     short loc_14027855B
 * 000000014027854F: mov     ecx, [rdx+18h]
 * 0000000140278552: cmp     [rsi+6C0h], r15d
 * 0000000140278559: jnz     short loc_140278569
 * 000000014027855B: xor     rcx, rax
 * 000000014027855E: mov     rax, [rsi+510h]
 * 0000000140278565: mov     [rax+18h], rcx
 * 0000000140278569: mov     ebx, 1
 * 000000014027856E: mov     rcx, [rdx+8]
 * 0000000140278572: cmp     [rsi+6C0h], r15d
 * 0000000140278579: jnz     short loc_1402785C1
 * 000000014027857B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278585: add     rax, rsi
 * 0000000140278588: mov     [rsi+6C8h], rax
 * 000000014027858F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140278599: add     rax, rdx
 * 000000014027859C: mov     [rsi+6D0h], rax
 * 00000001402785A3: movsxd  rax, dword ptr [rdx]
 * 00000001402785A6: mov     [rsi+6D8h], rax
 * 00000001402785AD: mov     [rsi+6E0h], rcx
 * 00000001402785B4: mov     [rsi+6C0h], ebx
 * 00000001402785BA: jmp     short loc_1402785C1
 * 00000001402785BC: mov     ebx, 1
 * 00000001402785C1: add     dword ptr [rsi+628h], 10000h
 * 00000001402785CB: jmp     loc_140279285
 * 00000001402785D0: mov     edx, [r12+2Ch]
 * 00000001402785D5: xor     r15d, r15d
 * 00000001402785D8: mov     rax, [rsi+1A0h]
 * 00000001402785DF: cmp     ecx, 26h ; '&'
 * 00000001402785E2: mov     r14d, [r12+28h]
 * 00000001402785E7: lea     rcx, [rbp+1A50h+var_1170]
 * 00000001402785EE: mov     ebx, r15d
 * 00000001402785F1: setz    bl
 * 00000001402785F4: call    KeGuardDispatchICall
 * 00000001402785F9: mov     rax, [rsi+1D0h]
 * 0000000140278600: lea     rdx, [rbp+1A50h+var_1160]
 * 0000000140278607: lea     rcx, [rbp+1A50h+var_1170]
 * 000000014027860E: call    KeGuardDispatchICall
 * 0000000140278613: test    ebx, ebx
 * 0000000140278615: jnz     short loc_140278626
 * 0000000140278617: test    r14d, r14d
 * 000000014027861A: jz      short loc_140278621
 * 000000014027861C: mov     rbx, cr4
 * 000000014027861F: jmp     short loc_140278635
 * 0000000140278621: mov     rbx, cr0
 * 0000000140278624: jmp     short loc_140278635
 * 0000000140278626: xor     ecx, ecx
 * 0000000140278628: xgetbv
 * 000000014027862B: shl     rdx, 20h
 * 000000014027862F: or      rdx, rax
 * 0000000140278632: mov     rbx, rdx
 * 0000000140278635: mov     rax, [rsi+198h]
 * 000000014027863C: lea     rcx, [rbp+1A50h+var_1160]
 * 0000000140278643: call    KeGuardDispatchICall
 * 0000000140278648: mov     r8, [r12+18h]
 * 000000014027864D: mov     rdx, [r12+20h]
 * 0000000140278652: and     r8, rbx
 * 0000000140278655: cmp     r8, rdx
 * 0000000140278658: jz      loc_14027031B
 * 000000014027865E: mov     ecx, [r12+2Ch]
 * 0000000140278663: mov     eax, [r12+28h]
 * 0000000140278668: shl     rcx, 20h
 * 000000014027866C: or      rcx, rax
 * 000000014027866F: cmp     [rsi+6C0h], r15d
 * 0000000140278676: jnz     loc_14027031B
 * 000000014027867C: mov     rax, [rsi+510h]
 * 0000000140278683: xor     rdx, r8
 * 0000000140278686: mov     [rax+18h], rdx
 * 000000014027868A: cmp     [rsi+6C0h], r15d
 * 0000000140278691: jmp     loc_140273C6E
 * 0000000140278696: mov     eax, [rsi+74Ch]
 * 000000014027869C: mov     ecx, 2
 * 00000001402786A1: test    cl, al
 * 00000001402786A3: jnz     loc_140279285
 * 00000001402786A9: mov     rax, [rsi+418h]
 * 00000001402786B0: call    KeGuardDispatchICall
 * 00000001402786B5: xor     ecx, ecx
 * 00000001402786B7: test    al, al
 * 00000001402786B9: jz      loc_14027031B
 * 00000001402786BF: cmp     [rsi+6C0h], ecx
 * 00000001402786C5: jmp     loc_140277B78
 * 00000001402786CA: mov     r14, [r12+8]
 * 00000001402786CF: mov     r8d, [r12+10h]
 * 00000001402786D4: mov     r9, r14
 * 00000001402786D7: add     [rsi+628h], r8d
 * 00000001402786DE: mov     rax, r14
 * 00000001402786E1: mov     r10d, [rsi+614h]
 * 00000001402786E8: mov     r15, [rsi+618h]
 * 00000001402786EF: lea     rcx, [r14+r8]
 * 00000001402786F3: cmp     r14, rcx
 * 00000001402786F6: jnb     short loc_140278704
 * 00000001402786F8: prefetchnta byte ptr [rax]
 * 00000001402786FB: add     rax, 40h ; '@'
 * 00000001402786FF: cmp     rax, rcx
 * 0000000140278702: jb      short loc_1402786F8
 * 0000000140278704: mov     r11d, r8d
 * 0000000140278707: xor     r13d, r13d
 * 000000014027870A: shr     r11d, 7
 * 000000014027870E: mov     rbx, r15
 * 0000000140278711: test    r11d, r11d
 * 0000000140278714: jz      short loc_140278780
 * 0000000140278716: mov     rsi, 7010008004002001h
 * 0000000140278720: lea     r12d, [r13+1]
 * 0000000140278724: mov     edx, 8
 * 0000000140278729: mov     rax, [r9]
 * 000000014027872C: mov     ecx, r10d
 * 000000014027872F: xor     rax, rbx
 * 0000000140278732: mov     rbx, [r9+8]
 * 0000000140278736: rol     rax, cl
 * 0000000140278739: add     r9, 10h
 * 000000014027873D: xor     rbx, rax
 * 0000000140278740: rol     rbx, cl
 * 0000000140278743: sub     rdx, r12
 * 0000000140278746: jnz     short loc_140278729
 * 0000000140278748: mov     rcx, r9
 * 000000014027874B: sub     rcx, r14
 * 000000014027874E: xor     rcx, r15
 * 0000000140278751: mov     rax, rcx
 * 0000000140278754: rol     rax, 11h
 * 0000000140278758: xor     rcx, rax
 * 000000014027875B: mov     rax, rsi
 * 000000014027875E: mul     rcx
 * 0000000140278761: xor     r10d, eax
 * 0000000140278764: mov     [rbp+1A50h+var_1468], rdx
 * 000000014027876B: xor     r10d, edx
 * 000000014027876E: and     r10d, 3Fh
 * 0000000140278772: cmovz   r10d, r12d
 * 0000000140278776: add     r11d, 0FFFFFFFFh
 * 000000014027877A: jnz     short loc_140278724
 * 000000014027877C: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140278780: and     r8d, 7Fh
 * 0000000140278784: mov     r11d, 1
 * 000000014027878A: cmp     r8d, 8
 * 000000014027878E: jb      short loc_1402787AD
 * 0000000140278790: mov     edx, r8d
 * 0000000140278793: shr     rdx, 3
 * 0000000140278797: xor     rbx, [r9]
 * 000000014027879A: mov     ecx, r10d
 * 000000014027879D: rol     rbx, cl
 * 00000001402787A0: add     r9, 8
 * 00000001402787A4: add     r8d, 0FFFFFFF8h
 * 00000001402787A8: sub     rdx, r11
 * 00000001402787AB: jnz     short loc_140278797
 * 00000001402787AD: test    r8d, r8d
 * 00000001402787B0: jz      short loc_1402787C8
 * 00000001402787B2: movzx   eax, byte ptr [r9]
 * 00000001402787B6: mov     ecx, r10d
 * 00000001402787B9: xor     rbx, rax
 * 00000001402787BC: add     r9, r11
 * 00000001402787BF: rol     rbx, cl
 * 00000001402787C2: add     r8d, 0FFFFFFFFh
 * 00000001402787C6: jnz     short loc_1402787B2
 * 00000001402787C8: mov     rax, rbx
 * 00000001402787CB: jmp     short loc_1402787CF
 * 00000001402787CD: xor     ebx, eax
 * 00000001402787CF: shr     rax, 1Fh
 * 00000001402787D3: test    rax, rax
 * 00000001402787D6: jnz     short loc_1402787CD
 * 00000001402787D8: mov     r8, [rbp+1A50h+var_1A48]
 * 00000001402787DC: btr     ebx, 1Fh
 * 00000001402787E0: mov     r12d, r13d
 * 00000001402787E3: cmp     ebx, [r8+14h]
 * 00000001402787E7: jz      loc_140278933
 * 00000001402787ED: cmp     [r8], r13d
 * 00000001402787F0: jnz     short loc_1402787FA
 * 00000001402787F2: cmp     [r8+18h], r13d
 * 00000001402787F6: cmovnz  r12d, r11d
 * 00000001402787FA: mov     ecx, [r8+10h]
 * 00000001402787FE: mov     rdx, [r8+8]
 * 0000000140278802: test    rcx, rcx
 * 0000000140278805: jz      loc_1402788C5
 * 000000014027880B: mov     eax, [rsi+74Ch]
 * 0000000140278811: test    al, 40h
 * 0000000140278813: jz      loc_1402788C5
 * 0000000140278819: mov     r15, cr8
 * 000000014027881D: mov     r8d, 2
 * 0000000140278823: mov     cr8, r8
 * 0000000140278827: lea     rax, [rcx-1]
 * 000000014027882B: mov     r14, rdx
 * 000000014027882E: add     rax, rdx
 * 0000000140278831: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140278838: or      rax, 0FFFh
 * 000000014027883E: mov     ecx, r13d
 * 0000000140278841: test    r8b, r12b
 * 0000000140278844: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140278848: cmovnz  ecx, r11d
 * 000000014027884C: lea     r13, [r14-1]
 * 0000000140278850: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140278853: mov     rax, [rsi+438h]
 * 000000014027885A: mov     edx, ecx
 * 000000014027885C: mov     rcx, r14
 * 000000014027885F: call    KeGuardDispatchICall
 * 0000000140278864: cmp     eax, 0C000022Dh
 * 0000000140278869: jnz     short loc_140278897
 * 000000014027886B: mov     r11d, 1
 * 0000000140278871: test    r11b, r12b
 * 0000000140278874: jnz     short loc_1402788B6
 * 0000000140278876: cmp     r15b, r11b
 * 0000000140278879: ja      short loc_14027889B
 * 000000014027887B: movzx   eax, r15b
 * 000000014027887F: mov     cr8, rax
 * 0000000140278883: mov     al, [r14]
 * 0000000140278886: mov     rax, cr8
 * 000000014027888A: lea     eax, [r11+1]
 * 000000014027888E: mov     cr8, rax
 * 0000000140278892: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140278895: jmp     short loc_140278853
 * 0000000140278897: test    eax, eax
 * 0000000140278899: js      short loc_1402788B6
 * 000000014027889B: mov     eax, 1000h
 * 00000001402788A0: add     r14, rax
 * 00000001402788A3: add     r13, rax
 * 00000001402788A6: cmp     r13, [rbp+1A50h+var_1A30]
 * 00000001402788AA: jnz     short loc_140278892
 * 00000001402788AC: movzx   eax, r15b
 * 00000001402788B0: mov     cr8, rax
 * 00000001402788B4: jmp     short loc_140278933
 * 00000001402788B6: mov     r8, [rbp+1A50h+var_1A48]
 * 00000001402788BA: xor     r13d, r13d
 * 00000001402788BD: movzx   eax, r15b
 * 00000001402788C1: mov     cr8, rax
 * 00000001402788C5: mov     eax, [r8+14h]
 * 00000001402788C9: cmp     [rsi+6C0h], r13d
 * 00000001402788D0: jnz     short loc_1402788E2
 * 00000001402788D2: mov     ecx, ebx
 * 00000001402788D4: xor     rcx, rax
 * 00000001402788D7: mov     rax, [rsi+510h]
 * 00000001402788DE: mov     [rax+18h], rcx
 * 00000001402788E2: mov     rcx, [r8+8]
 * 00000001402788E6: cmp     [rsi+6C0h], r13d
 * 00000001402788ED: jnz     short loc_140278933
 * 00000001402788EF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402788F9: add     rax, rsi
 * 00000001402788FC: mov     [rsi+6C8h], rax
 * 0000000140278903: mov     rax, 0B3B74BDEE4453415h
 * 000000014027890D: add     rax, r8
 * 0000000140278910: mov     [rsi+6D0h], rax
 * 0000000140278917: movsxd  rax, dword ptr [r8]
 * 000000014027891A: mov     [rsi+6D8h], rax
 * 0000000140278921: mov     eax, 1
 * 0000000140278926: mov     [rsi+6E0h], rcx
 * 000000014027892D: mov     [rsi+6C0h], eax
 * 0000000140278933: mov     rcx, [rsi+4C0h]
 * 000000014027893A: mov     r13, cr8
 * 000000014027893E: mov     eax, 0Fh
 * 0000000140278943: mov     cr8, rax
 * 0000000140278947: mov     rax, [rsi+150h]
 * 000000014027894E: call    KeGuardDispatchICall
 * 0000000140278953: mov     rax, [rsi+568h]
 * 000000014027895A: xor     edx, edx
 * 000000014027895C: mov     r15, [rbp+1A50h+var_1A48]
 * 0000000140278960: mov     r14d, edx
 * 0000000140278963: mov     rcx, [rax]
 * 0000000140278966: cmp     [rcx+0Ch], dl
 * 0000000140278969: lea     rbx, [rcx+10h]
 * 000000014027896D: mov     eax, [rcx]
 * 000000014027896F: setnz   r14b
 * 0000000140278973: lea     rcx, [rax+rax*2]
 * 0000000140278977: lea     r12, [rbx+rcx*8]
 * 000000014027897B: mov     r8d, 18h
 * 0000000140278981: lea     r9, [r15+18h]
 * 0000000140278985: mov     r10, rbx
 * 0000000140278988: mov     rcx, [r10]
 * 000000014027898B: add     r10, 8
 * 000000014027898F: mov     rax, [r9]
 * 0000000140278992: add     r9, 8
 * 0000000140278996: cmp     rcx, rax
 * 0000000140278999: jnz     short loc_1402789CD
 * 000000014027899B: add     r8d, 0FFFFFFF8h
 * 000000014027899F: cmp     r8d, 8
 * 00000001402789A3: jnb     short loc_140278988
 * 00000001402789A5: test    r8d, r8d
 * 00000001402789A8: jz      short loc_1402789D6
 * 00000001402789AA: mov     r11d, 1
 * 00000001402789B0: movzx   edx, byte ptr [r10]
 * 00000001402789B4: add     r10, r11
 * 00000001402789B7: movzx   eax, byte ptr [r9]
 * 00000001402789BB: add     r9, r11
 * 00000001402789BE: cmp     rdx, rax
 * 00000001402789C1: jnz     short loc_1402789CB
 * 00000001402789C3: add     r8d, 0FFFFFFFFh
 * 00000001402789C7: jz      short loc_1402789D6
 * 00000001402789C9: jmp     short loc_1402789B0
 * 00000001402789CB: xor     edx, edx
 * 00000001402789CD: add     rbx, 18h
 * 00000001402789D1: cmp     rbx, r12
 * 00000001402789D4: jb      short loc_14027897B
 * 00000001402789D6: mov     rcx, [rsi+4C0h]
 * 00000001402789DD: mov     rax, [rsi+190h]
 * 00000001402789E4: call    KeGuardDispatchICall
 * 00000001402789E9: movzx   eax, r13b
 * 00000001402789ED: mov     cr8, rax
 * 00000001402789F1: xor     r13d, r13d
 * 00000001402789F4: test    r14d, r14d
 * 00000001402789F7: jz      loc_140278AAC
 * 00000001402789FD: mov     eax, [rsi+74Ch]
 * 0000000140278A03: lea     ecx, [r13+10h]
 * 0000000140278A07: test    cl, al
 * 0000000140278A09: jz      short loc_140278A5D
 * 0000000140278A0B: cmp     [rsi+6C0h], r13d
 * 0000000140278A12: jnz     short loc_140278A5D
 * 0000000140278A14: mov     rcx, [rbp+1A50h+var_1A48]
 * 0000000140278A18: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278A22: add     rax, rsi
 * 0000000140278A25: mov     [rsi+6C8h], rax
 * 0000000140278A2C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140278A36: add     rax, rcx
 * 0000000140278A39: mov     [rsi+6D0h], rax
 * 0000000140278A40: movsxd  rax, dword ptr [rcx]
 * 0000000140278A43: lea     ecx, [r13+1]
 * 0000000140278A47: mov     [rsi+6D8h], rax
 * 0000000140278A4E: mov     [rsi+6E0h], rcx
 * 0000000140278A55: mov     [rsi+6C0h], ecx
 * 0000000140278A5B: jmp     short loc_140278A62
 * 0000000140278A5D: mov     ecx, 1
 * 0000000140278A62: cmp     [r15+18h], rcx
 * 0000000140278A66: jnz     short loc_140278AB1
 * 0000000140278A68: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140278A6C: mov     rcx, [rsi+4C0h]
 * 0000000140278A73: mov     r15, cr8
 * 0000000140278A77: mov     eax, 0Fh
 * 0000000140278A7C: mov     cr8, rax
 * 0000000140278A80: mov     rax, [rsi+150h]
 * 0000000140278A87: call    KeGuardDispatchICall
 * 0000000140278A8C: mov     rax, [rsi+568h]
 * 0000000140278A93: mov     rdx, r13
 * 0000000140278A96: mov     rcx, [rax]
 * 0000000140278A99: mov     eax, [rcx]
 * 0000000140278A9B: lea     rbx, [rcx+10h]
 * 0000000140278A9F: lea     rcx, [rax+rax*2]
 * 0000000140278AA3: lea     r14, [rbx+rcx*8]
 * 0000000140278AA7: jmp     loc_140278B32
 * 0000000140278AAC: mov     ecx, 1
 * 0000000140278AB1: cmp     rbx, r12
 * 0000000140278AB4: jnz     short loc_140278A68
 * 0000000140278AB6: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140278ABA: cmp     [rsi+6C0h], r13d
 * 0000000140278AC1: jnz     short loc_140278A6C
 * 0000000140278AC3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278ACD: add     rax, rsi
 * 0000000140278AD0: mov     [rsi+6C8h], rax
 * 0000000140278AD7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140278AE1: add     rax, r12
 * 0000000140278AE4: mov     [rsi+6D0h], rax
 * 0000000140278AEB: movsxd  rax, dword ptr [r12]
 * 0000000140278AEF: mov     [rsi+6D8h], rax
 * 0000000140278AF6: mov     [rsi+6E0h], rbx
 * 0000000140278AFD: mov     [rsi+6C0h], ecx
 * 0000000140278B03: jmp     loc_140278A6C
 * 0000000140278B08: mov     rcx, [rbx+8]
 * 0000000140278B0C: cmp     rcx, rdx
 * 0000000140278B0F: jb      short loc_140278B3B
 * 0000000140278B11: mov     rax, rcx
 * 0000000140278B14: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140278B1A: cmp     rax, rcx
 * 0000000140278B1D: jnz     short loc_140278B3B
 * 0000000140278B1F: mov     eax, [rbx+10h]
 * 0000000140278B22: add     rax, rcx
 * 0000000140278B25: cmp     rax, rcx
 * 0000000140278B28: jbe     short loc_140278B3B
 * 0000000140278B2A: cmp     rax, rdx
 * 0000000140278B2D: jz      short loc_140278B3B
 * 0000000140278B2F: mov     rdx, rax
 * 0000000140278B32: add     rbx, 18h
 * 0000000140278B36: cmp     rbx, r14
 * 0000000140278B39: jb      short loc_140278B08
 * 0000000140278B3B: mov     rcx, [rsi+4C0h]
 * 0000000140278B42: mov     rax, [rsi+190h]
 * 0000000140278B49: call    KeGuardDispatchICall
 * 0000000140278B4E: movzx   eax, r15b
 * 0000000140278B52: mov     cr8, rax
 * 0000000140278B56: cmp     rbx, r14
 * 0000000140278B59: jz      loc_14027031B
 * 0000000140278B5F: cmp     [rsi+6C0h], r13d
 * 0000000140278B66: jnz     loc_14027031B
 * 0000000140278B6C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278B76: add     rax, rsi
 * 0000000140278B79: mov     [rsi+6C8h], rax
 * 0000000140278B80: mov     rax, 0B3B74BDEE4453415h
 * 0000000140278B8A: add     rax, r12
 * 0000000140278B8D: mov     [rsi+6D0h], rax
 * 0000000140278B94: movsxd  rax, dword ptr [r12]
 * 0000000140278B98: jmp     loc_140274562
 * 0000000140278B9D: mov     ecx, [r12+28h]
 * 0000000140278BA2: and     ecx, ebx
 * 0000000140278BA4: jz      short loc_140278BC6
 * 0000000140278BA6: xor     r13d, r13d
 * 0000000140278BA9: cmp     [rsi+740h], r13
 * 0000000140278BB0: jz      loc_140274FA0
 * 0000000140278BB6: mov     eax, [rsi+74Ch]
 * 0000000140278BBC: test    r15b, al
 * 0000000140278BBF: jz      short loc_140278BC9
 * 0000000140278BC1: jmp     loc_140274FA0
 * 0000000140278BC6: xor     r13d, r13d
 * 0000000140278BC9: test    ecx, ecx
 * 0000000140278BCB: jz      loc_14027908D
 * 0000000140278BD1: mov     eax, [rsi+74Ch]
 * 0000000140278BD7: cmp     [rsi+624h], r13d
 * 0000000140278BDE: jnz     short loc_140278BF4
 * 0000000140278BE0: shl     eax, 3
 * 0000000140278BE3: xor     eax, [rsi+74Ch]
 * 0000000140278BE9: and     eax, r8d
 * 0000000140278BEC: xor     [rsi+74Ch], eax
 * 0000000140278BF2: jmp     short loc_140278C08
 * 0000000140278BF4: mov     ecx, eax
 * 0000000140278BF6: shr     ecx, 3
 * 0000000140278BF9: xor     ecx, eax
 * 0000000140278BFB: shr     ecx, 2
 * 0000000140278BFE: not     ecx
 * 0000000140278C00: and     ecx, ebx
 * 0000000140278C02: jz      loc_140274FA0
 * 0000000140278C08: cmp     [rsi+740h], r13
 * 0000000140278C0F: jnz     short loc_140278C1D
 * 0000000140278C11: mov     [rsi+624h], r13d
 * 0000000140278C18: jmp     loc_140278EEB
 * 0000000140278C1D: mov     eax, [rsi+74Ch]
 * 0000000140278C23: cmp     [rsi+624h], r13d
 * 0000000140278C2A: jnz     short loc_140278C40
 * 0000000140278C2C: shl     eax, 3
 * 0000000140278C2F: xor     eax, [rsi+74Ch]
 * 0000000140278C35: and     eax, r8d
 * 0000000140278C38: xor     [rsi+74Ch], eax
 * 0000000140278C3E: jmp     short loc_140278C50
 * 0000000140278C40: mov     ecx, eax
 * 0000000140278C42: shr     ecx, 3
 * 0000000140278C45: xor     ecx, eax
 * 0000000140278C47: shr     ecx, 2
 * 0000000140278C4A: not     ecx
 * 0000000140278C4C: and     ecx, ebx
 * 0000000140278C4E: jz      short loc_140278C11
 * 0000000140278C50: mov     eax, [rsi+74Ch]
 * 0000000140278C56: test    r15b, al
 * 0000000140278C59: jz      loc_140278D19
 * 0000000140278C5F: mov     r14d, [r12+8]
 * 0000000140278C64: mov     ecx, [r12+10h]
 * 0000000140278C69: and     r14d, 0FFFh
 * 0000000140278C70: mov     rbx, [r12+8]
 * 0000000140278C75: add     r14, 0FFFh
 * 0000000140278C7C: add     r14, rcx
 * 0000000140278C7F: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140278C86: shr     r14, 0Ch
 * 0000000140278C8A: test    r14, r14
 * 0000000140278C8D: jz      loc_140278EE6
 * 0000000140278C93: mov     edi, 1
 * 0000000140278C98: mov     rax, [rsi+2A8h]
 * 0000000140278C9F: mov     rcx, rbx
 * 0000000140278CA2: sub     r14, rdi
 * 0000000140278CA5: call    KeGuardDispatchICall
 * 0000000140278CAA: test    al, al
 * 0000000140278CAC: jz      short loc_140278CF7
 * 0000000140278CAE: cmp     [rsi+6C0h], r13d
 * 0000000140278CB5: jnz     short loc_140278CF7
 * 0000000140278CB7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140278CC1: add     rax, rsi
 * 0000000140278CC4: mov     [rsi+6C8h], rax
 * 0000000140278CCB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140278CD5: add     rax, r12
 * 0000000140278CD8: mov     [rsi+6D0h], rax
 * 0000000140278CDF: movsxd  rax, dword ptr [r12]
 * 0000000140278CE3: mov     [rsi+6D8h], rax
 * 0000000140278CEA: mov     [rsi+6E0h], rbx
 * 0000000140278CF1: mov     [rsi+6C0h], edi
 * 0000000140278CF7: add     dword ptr [rsi+628h], 100h
 * 0000000140278D01: add     rbx, 1000h
 * 0000000140278D08: test    r14, r14
 * 0000000140278D0B: jnz     short loc_140278C98
 * 0000000140278D0D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140278D14: jmp     loc_140278EE6
 * 0000000140278D19: mov     r14, [r12+8]
 * 0000000140278D1E: mov     r8d, [r12+10h]
 * 0000000140278D23: mov     r9, r14
 * 0000000140278D26: add     [rsi+628h], r8d
 * 0000000140278D2D: mov     rax, r14
 * 0000000140278D30: mov     r11d, [rsi+614h]
 * 0000000140278D37: mov     r15, [rsi+618h]
 * 0000000140278D3E: lea     rcx, [r14+r8]
 * 0000000140278D42: cmp     r14, rcx
 * 0000000140278D45: jnb     short loc_140278D53
 * 0000000140278D47: prefetchnta byte ptr [rax]
 * 0000000140278D4A: add     rax, 40h ; '@'
 * 0000000140278D4E: cmp     rax, rcx
 * 0000000140278D51: jb      short loc_140278D47
 * 0000000140278D53: mov     r10d, r8d
 * 0000000140278D56: mov     rbx, r15
 * 0000000140278D59: shr     r10d, 7
 * 0000000140278D5D: test    r10d, r10d
 * 0000000140278D60: jz      short loc_140278DD4
 * 0000000140278D62: mov     rdi, 7010008004002001h
 * 0000000140278D6C: mov     edx, 8
 * 0000000140278D71: lea     esi, [rdx-7]
 * 0000000140278D74: mov     rax, [r9]
 * 0000000140278D77: mov     ecx, r11d
 * 0000000140278D7A: xor     rax, rbx
 * 0000000140278D7D: mov     rbx, [r9+8]
 * 0000000140278D81: rol     rax, cl
 * 0000000140278D84: add     r9, 10h
 * 0000000140278D88: xor     rbx, rax
 * 0000000140278D8B: rol     rbx, cl
 * 0000000140278D8E: sub     rdx, rsi
 * 0000000140278D91: jnz     short loc_140278D74
 * 0000000140278D93: mov     rcx, r9
 * 0000000140278D96: sub     rcx, r14
 * 0000000140278D99: xor     rcx, r15
 * 0000000140278D9C: mov     rax, rcx
 * 0000000140278D9F: rol     rax, 11h
 * 0000000140278DA3: xor     rcx, rax
 * 0000000140278DA6: mov     rax, rdi
 * 0000000140278DA9: mul     rcx
 * 0000000140278DAC: xor     eax, edx
 * 0000000140278DAE: mov     [rbp+1A50h+var_1460], rdx
 * 0000000140278DB5: xor     r11d, eax
 * 0000000140278DB8: mov     rax, rsi
 * 0000000140278DBB: and     r11d, 3Fh
 * 0000000140278DBF: cmovz   r11d, eax
 * 0000000140278DC3: add     r10d, 0FFFFFFFFh
 * 0000000140278DC7: jnz     short loc_140278D6C
 * 0000000140278DC9: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140278DCD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140278DD4: and     r8d, 7Fh
 * 0000000140278DD8: mov     r10d, 1
 * 0000000140278DDE: cmp     r8d, 8
 * 0000000140278DE2: jb      short loc_140278E01
 * 0000000140278DE4: mov     edx, r8d
 * 0000000140278DE7: shr     rdx, 3
 * 0000000140278DEB: xor     rbx, [r9]
 * 0000000140278DEE: mov     ecx, r11d
 * 0000000140278DF1: rol     rbx, cl
 * 0000000140278DF4: add     r9, 8
 * 0000000140278DF8: add     r8d, 0FFFFFFF8h
 * 0000000140278DFC: sub     rdx, r10
 * 0000000140278DFF: jnz     short loc_140278DEB
 * 0000000140278E01: test    r8d, r8d
 * 0000000140278E04: jz      short loc_140278E1C
 * 0000000140278E06: movzx   eax, byte ptr [r9]
 * 0000000140278E0A: mov     ecx, r11d
 * 0000000140278E0D: xor     rbx, rax
 * 0000000140278E10: add     r9, r10
 * 0000000140278E13: rol     rbx, cl
 * 0000000140278E16: add     r8d, 0FFFFFFFFh
 * 0000000140278E1A: jnz     short loc_140278E06
 * 0000000140278E1C: mov     rax, rbx
 * 0000000140278E1F: jmp     short loc_140278E23
 * 0000000140278E21: xor     ebx, eax
 * 0000000140278E23: shr     rax, 1Fh
 * 0000000140278E27: test    rax, rax
 * 0000000140278E2A: jnz     short loc_140278E21
 * 0000000140278E2C: btr     ebx, 1Fh
 * 0000000140278E30: cmp     ebx, [r12+14h]
 * 0000000140278E35: jz      loc_140278EE0
 * 0000000140278E3B: mov     ecx, [r12+10h]
 * 0000000140278E40: mov     rdx, [r12+8]
 * 0000000140278E45: test    rcx, rcx
 * 0000000140278E48: jz      loc_14027900D
 * 0000000140278E4E: mov     eax, [rsi+74Ch]
 * 0000000140278E54: test    al, 40h
 * 0000000140278E56: jz      loc_14027900D
 * 0000000140278E5C: mov     r15, cr8
 * 0000000140278E60: mov     r14, rdx
 * 0000000140278E63: lea     r13, [rcx-1]
 * 0000000140278E67: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140278E6E: add     r13, rdx
 * 0000000140278E71: or      r13, 0FFFh
 * 0000000140278E78: lea     r12, [r14-1]
 * 0000000140278E7C: mov     eax, 2
 * 0000000140278E81: mov     cr8, rax
 * 0000000140278E85: mov     rax, [rsi+438h]
 * 0000000140278E8C: xor     edx, edx
 * 0000000140278E8E: mov     rcx, r14
 * 0000000140278E91: call    KeGuardDispatchICall
 * 0000000140278E96: cmp     eax, 0C000022Dh
 * 0000000140278E9B: jnz     short loc_140278EB8
 * 0000000140278E9D: mov     eax, 1
 * 0000000140278EA2: cmp     r15b, al
 * 0000000140278EA5: ja      short loc_140278EC0
 * 0000000140278EA7: movzx   eax, r15b
 * 0000000140278EAB: mov     cr8, rax
 * 0000000140278EAF: mov     al, [r14]
 * 0000000140278EB2: mov     rax, cr8
 * 0000000140278EB6: jmp     short loc_140278E7C
 * 0000000140278EB8: test    eax, eax
 * 0000000140278EBA: js      loc_140278FFE
 * 0000000140278EC0: mov     r8d, 1000h
 * 0000000140278EC6: add     r14, r8
 * 0000000140278EC9: add     r12, r8
 * 0000000140278ECC: cmp     r12, r13
 * 0000000140278ECF: jnz     short loc_140278E85
 * 0000000140278ED1: movzx   eax, r15b
 * 0000000140278ED5: mov     cr8, rax
 * 0000000140278ED9: xor     r13d, r13d
 * 0000000140278EDC: mov     r12, [rbp+1A50h+var_1A48]
 * 0000000140278EE0: mov     r15d, 4
 * 0000000140278EE6: mov     ebx, 1
 * 0000000140278EEB: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140278EF5: mov     r9, 0B3B74BDEE4453415h
 * 0000000140278EFF: mov     eax, [r12+28h]
 * 0000000140278F04: mov     ecx, 2
 * 0000000140278F09: test    cl, al
 * 0000000140278F0B: jz      loc_140279285
 * 0000000140278F11: mov     rdx, [r12+8]
 * 0000000140278F16: test    r15b, al
 * 0000000140278F19: jz      short loc_140278F8F
 * 0000000140278F1B: mov     rax, [rdx+70h]
 * 0000000140278F1F: mov     r8, [r12+18h]
 * 0000000140278F24: mov     rcx, [rax]
 * 0000000140278F27: cmp     rcx, r8
 * 0000000140278F2A: jz      short loc_140278F8F
 * 0000000140278F2C: mov     rax, [rsi+510h]
 * 0000000140278F33: mov     [rax], rcx
 * 0000000140278F36: mov     dword ptr [rax+10h], 100h
 * 0000000140278F3D: cmp     [rsi+6C0h], r13d
 * 0000000140278F44: jnz     short loc_140278F54
 * 0000000140278F46: mov     rax, [rsi+510h]
 * 0000000140278F4D: xor     rcx, r8
 * 0000000140278F50: mov     [rax+18h], rcx
 * 0000000140278F54: mov     rcx, [rdx+70h]
 * 0000000140278F58: cmp     [rsi+6C0h], r13d
 * 0000000140278F5F: jnz     short loc_140278F8F
 * 0000000140278F61: lea     rax, [rsi+r10]
 * 0000000140278F65: mov     [rsi+6C8h], rax
 * 0000000140278F6C: lea     rax, [r12+r9]
 * 0000000140278F70: mov     [rsi+6D0h], rax
 * 0000000140278F77: movsxd  rax, dword ptr [r12]
 * 0000000140278F7B: mov     [rsi+6D8h], rax
 * 0000000140278F82: mov     [rsi+6E0h], rcx
 * 0000000140278F89: mov     [rsi+6C0h], ebx
 * 0000000140278F8F: mov     eax, [r12+28h]
 * 0000000140278F94: test    al, 8
 * 0000000140278F96: jz      loc_140279285
 * 0000000140278F9C: mov     rax, [rdx+78h]
 * 0000000140278FA0: mov     r8, [r12+20h]
 * 0000000140278FA5: mov     rcx, [rax]
 * 0000000140278FA8: cmp     rcx, r8
 * 0000000140278FAB: jz      loc_140279285
 * 0000000140278FB1: mov     rax, [rsi+510h]
 * 0000000140278FB8: mov     [rax], rcx
 * 0000000140278FBB: mov     dword ptr [rax+10h], 100h
 * 0000000140278FC2: cmp     [rsi+6C0h], r13d
 * 0000000140278FC9: jnz     short loc_140278FD9
 * 0000000140278FCB: mov     rax, [rsi+510h]
 * 0000000140278FD2: xor     rcx, r8
 * 0000000140278FD5: mov     [rax+18h], rcx
 * 0000000140278FD9: mov     rcx, [rdx+78h]
 * 0000000140278FDD: cmp     [rsi+6C0h], r13d
 * 0000000140278FE4: jnz     loc_14027031B
 * 0000000140278FEA: lea     rax, [rsi+r10]
 * 0000000140278FEE: mov     [rsi+6C8h], rax
 * 0000000140278FF5: lea     rax, [r12+r9]
 * 0000000140278FF9: jmp     loc_140277B9F
 * 0000000140278FFE: movzx   eax, r15b
 * 0000000140279002: xor     r13d, r13d
 * 0000000140279005: mov     cr8, rax
 * 0000000140279009: mov     r12, [rbp+1A50h+var_1A48]
 * 000000014027900D: mov     eax, [r12+14h]
 * 0000000140279012: cmp     [rsi+6C0h], r13d
 * 0000000140279019: jnz     short loc_14027902B
 * 000000014027901B: mov     ecx, ebx
 * 000000014027901D: xor     rcx, rax
 * 0000000140279020: mov     rax, [rsi+510h]
 * 0000000140279027: mov     [rax+18h], rcx
 * 000000014027902B: mov     ebx, 1
 * 0000000140279030: mov     rcx, [r12+8]
 * 0000000140279035: mov     r10, 0A3A03F5891C8B4E8h
 * 000000014027903F: mov     r9, 0B3B74BDEE4453415h
 * 0000000140279049: lea     r15d, [rbx+3]
 * 000000014027904D: cmp     [rsi+6C0h], r13d
 * 0000000140279054: jnz     loc_140278EFF
 * 000000014027905A: lea     rax, [rsi+r10]
 * 000000014027905E: mov     [rsi+6C8h], rax
 * 0000000140279065: lea     rax, [r12+r9]
 * 0000000140279069: mov     [rsi+6D0h], rax
 * 0000000140279070: movsxd  rax, dword ptr [r12]
 * 0000000140279074: mov     [rsi+6D8h], rax
 * 000000014027907B: mov     [rsi+6E0h], rcx
 * 0000000140279082: mov     [rsi+6C0h], ebx
 * 0000000140279088: jmp     loc_140278EFF
 * 000000014027908D: mov     r14, [r12+8]
 * 0000000140279092: mov     r8d, [r12+10h]
 * 0000000140279097: mov     r9, r14
 * 000000014027909A: add     [rsi+628h], r8d
 * 00000001402790A1: mov     rax, r14
 * 00000001402790A4: mov     r10d, [rsi+614h]
 * 00000001402790AB: mov     r15, [rsi+618h]
 * 00000001402790B2: lea     rcx, [r14+r8]
 * 00000001402790B6: cmp     r14, rcx
 * 00000001402790B9: jnb     short loc_1402790C7
 * 00000001402790BB: prefetchnta byte ptr [rax]
 * 00000001402790BE: add     rax, 40h ; '@'
 * 00000001402790C2: cmp     rax, rcx
 * 00000001402790C5: jb      short loc_1402790BB
 * 00000001402790C7: mov     r11d, r8d
 * 00000001402790CA: mov     rbx, r15
 * 00000001402790CD: shr     r11d, 7
 * 00000001402790D1: test    r11d, r11d
 * 00000001402790D4: jz      short loc_140279141
 * 00000001402790D6: mov     esi, 1
 * 00000001402790DB: mov     rdi, 7010008004002001h
 * 00000001402790E5: mov     eax, 8
 * 00000001402790EA: xor     rbx, [r9]
 * 00000001402790ED: mov     ecx, r10d
 * 00000001402790F0: rol     rbx, cl
 * 00000001402790F3: xor     rbx, [r9+8]
 * 00000001402790F7: add     r9, 10h
 * 00000001402790FB: rol     rbx, cl
 * 00000001402790FE: sub     rax, rsi
 * 0000000140279101: jnz     short loc_1402790EA
 * 0000000140279103: mov     rcx, r9
 * 0000000140279106: sub     rcx, r14
 * 0000000140279109: xor     rcx, r15
 * 000000014027910C: mov     rax, rcx
 * 000000014027910F: rol     rax, 11h
 * 0000000140279113: xor     rcx, rax
 * 0000000140279116: mov     rax, rdi
 * 0000000140279119: mul     rcx
 * 000000014027911C: xor     eax, edx
 * 000000014027911E: mov     [rbp+1A50h+var_1458], rdx
 * 0000000140279125: xor     r10d, eax
 * 0000000140279128: and     r10d, 3Fh
 * 000000014027912C: cmovz   r10d, esi
 * 0000000140279130: add     r11d, 0FFFFFFFFh
 * 0000000140279134: jnz     short loc_1402790E5
 * 0000000140279136: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027913A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140279141: and     r8d, 7Fh
 * 0000000140279145: mov     r11d, 1
 * 000000014027914B: cmp     r8d, 8
 * 000000014027914F: jb      short loc_14027916E
 * 0000000140279151: mov     eax, r8d
 * 0000000140279154: shr     rax, 3
 * 0000000140279158: xor     rbx, [r9]
 * 000000014027915B: mov     ecx, r10d
 * 000000014027915E: rol     rbx, cl
 * 0000000140279161: add     r9, 8
 * 0000000140279165: add     r8d, 0FFFFFFF8h
 * 0000000140279169: sub     rax, r11
 * 000000014027916C: jnz     short loc_140279158
 * 000000014027916E: test    r8d, r8d
 * 0000000140279171: jz      short loc_140279189
 * 0000000140279173: movzx   eax, byte ptr [r9]
 * 0000000140279177: mov     ecx, r10d
 * 000000014027917A: xor     rbx, rax
 * 000000014027917D: add     r9, r11
 * 0000000140279180: rol     rbx, cl
 * 0000000140279183: add     r8d, 0FFFFFFFFh
 * 0000000140279187: jnz     short loc_140279173
 * 0000000140279189: mov     rax, rbx
 * 000000014027918C: jmp     short loc_140279190
 * 000000014027918E: xor     ebx, eax
 * 0000000140279190: shr     rax, 1Fh
 * 0000000140279194: test    rax, rax
 * 0000000140279197: jnz     short loc_14027918E
 * 0000000140279199: mov     rax, [rbp+1A50h+var_1A48]
 * 000000014027919D: btr     ebx, 1Fh
 * 00000001402791A1: mov     r12d, r13d
 * 00000001402791A4: cmp     ebx, [rax+14h]
 * 00000001402791A7: jz      loc_140278EDC
 * 00000001402791AD: cmp     [rax], r13d
 * 00000001402791B0: jnz     short loc_1402791BA
 * 00000001402791B2: cmp     [rax+18h], r13d
 * 00000001402791B6: cmovnz  r12d, r11d
 * 00000001402791BA: mov     ecx, [rax+10h]
 * 00000001402791BD: mov     rdx, [rax+8]
 * 00000001402791C1: test    rcx, rcx
 * 00000001402791C4: jz      loc_140279009
 * 00000001402791CA: mov     eax, [rsi+74Ch]
 * 00000001402791D0: test    al, 40h
 * 00000001402791D2: jz      loc_140279009
 * 00000001402791D8: mov     r15, cr8
 * 00000001402791DC: mov     r8d, 2
 * 00000001402791E2: mov     cr8, r8
 * 00000001402791E6: lea     rax, [rcx-1]
 * 00000001402791EA: mov     r14, rdx
 * 00000001402791ED: add     rax, rdx
 * 00000001402791F0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001402791F7: or      rax, 0FFFh
 * 00000001402791FD: mov     ecx, r13d
 * 0000000140279200: test    r8b, r12b
 * 0000000140279203: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140279207: cmovnz  ecx, r11d
 * 000000014027920B: lea     r13, [r14-1]
 * 000000014027920F: mov     [rbp+1A50h+var_1A50], ecx
 * 0000000140279212: mov     rax, [rsi+438h]
 * 0000000140279219: mov     edx, ecx
 * 000000014027921B: mov     rcx, r14
 * 000000014027921E: call    KeGuardDispatchICall
 * 0000000140279223: cmp     eax, 0C000022Dh
 * 0000000140279228: jnz     short loc_14027925A
 * 000000014027922A: mov     r11d, 1
 * 0000000140279230: test    r11b, r12b
 * 0000000140279233: jnz     loc_140278FFE
 * 0000000140279239: cmp     r15b, r11b
 * 000000014027923C: ja      short loc_140279262
 * 000000014027923E: movzx   eax, r15b
 * 0000000140279242: mov     cr8, rax
 * 0000000140279246: mov     al, [r14]
 * 0000000140279249: mov     rax, cr8
 * 000000014027924D: lea     eax, [r11+1]
 * 0000000140279251: mov     cr8, rax
 * 0000000140279255: mov     ecx, [rbp+1A50h+var_1A50]
 * 0000000140279258: jmp     short loc_140279212
 * 000000014027925A: test    eax, eax
 * 000000014027925C: js      loc_140278FFE
 * 0000000140279262: mov     r8d, 1000h
 * 0000000140279268: add     r14, r8
 * 000000014027926B: add     r13, r8
 * 000000014027926E: cmp     r13, [rbp+1A50h+var_1A30]
 * 0000000140279272: jz      loc_140278ED1
 * 0000000140279278: jmp     short loc_140279255
 * 000000014027927A: mov     rdx, r12
 * 000000014027927D: mov     rcx, rsi
 * 0000000140279280: call    sub_1401760BC
 * 0000000140279285: xor     eax, eax
 * 0000000140279287: mov     r12d, 8000h
 * 000000014027928D: mov     edx, [rbp+1A50h+var_19F8]
 * 0000000140279290: cmp     [rsi+624h], eax
 * 0000000140279296: jz      short loc_14027929A
 * 0000000140279298: dec     edx
 * 000000014027929A: add     edx, ebx
 * 000000014027929C: mov     [rbp+1A50h+var_19F8], edx
 * 000000014027929F: cmp     [rsi+6C0h], eax
 * 00000001402792A5: jnz     short loc_1402792D7
 * 00000001402792A7: lea     r13, [rsi+62Ch]
 * 00000001402792AE: mov     eax, [r13+0]
 * 00000001402792B2: mov     [rbp+1A50h+var_1A10], r13
 * 00000001402792B6: cmp     [rsi+628h], eax
 * 00000001402792BC: jge     short loc_1402792D5
 * 00000001402792BE: mov     r15d, 4
 * 00000001402792C4: lea     r14d, [r15+2]
 * 00000001402792C8: lea     r10d, [r15+1]
 * 00000001402792CC: lea     r11d, [r15+15h]
 * 00000001402792D0: jmp     loc_14026FD59
 * 00000001402792D5: xor     eax, eax
 * 00000001402792D7: mov     [rsi+620h], edx
 * 00000001402792DD: cmp     [rbp+1A50h+var_19E4], eax
 * 00000001402792E0: jz      short loc_140279338
 * 00000001402792E2: mov     rax, gs:188h
 * 00000001402792EB: lea     rcx, [rbp+1A50h+var_1150]
 * 00000001402792F2: mov     rbx, [rax+0B8h]
 * 00000001402792F9: mov     rax, [rsi+198h]
 * 0000000140279300: call    KeGuardDispatchICall
 * 0000000140279305: mov     rax, [rsi+430h]
 * 000000014027930C: lea     rcx, [rbp+1A50h+var_1540]
 * 0000000140279313: call    KeGuardDispatchICall
 * 0000000140279318: mov     rax, [rsi+3A0h]
 * 000000014027931F: mov     rcx, rbx
 * 0000000140279322: call    KeGuardDispatchICall
 * 0000000140279327: mov     rax, [rsi+3B0h]
 * 000000014027932E: mov     rcx, rbx
 * 0000000140279331: call    KeGuardDispatchICall
 * 0000000140279336: xor     eax, eax
 * 0000000140279338: cmp     [rbp+1A50h+var_19C0], eax
 * 000000014027933E: jz      loc_1402793E6
 * 0000000140279344: xor     r14d, r14d
 * 0000000140279347: test    [rsi+748h], r12d
 * 000000014027934E: jnz     short loc_14027935D
 * 0000000140279350: cmp     [rsi+6C0h], r14d
 * 0000000140279357: jnz     loc_1402793E6
 * 000000014027935D: mov     rbx, [rsi+740h]
 * 0000000140279364: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014027936B: mov     [rsi+740h], r14
 * 0000000140279372: mov     rcx, rbx
 * 0000000140279375: mov     rax, [rsi+290h]
 * 000000014027937C: call    KeGuardDispatchICall
 * 0000000140279381: mov     eax, [rsi+748h]
 * 0000000140279387: mov     r15d, 1
 * 000000014027938D: test    r15b, al
 * 0000000140279390: jz      short loc_1402793D0
 * 0000000140279392: and     eax, 0FFFFFFFEh
 * 0000000140279395: mov     rcx, rbx
 * 0000000140279398: mov     [rsi+748h], eax
 * 000000014027939E: mov     rax, [rsi+278h]
 * 00000001402793A5: call    KeGuardDispatchICall
 * 00000001402793AA: mov     rbx, rax
 * 00000001402793AD: test    rax, rax
 * 00000001402793B0: jz      short loc_1402793C9
 * 00000001402793B2: mov     rax, [rsi+298h]
 * 00000001402793B9: mov     rcx, rbx
 * 00000001402793BC: call    KeGuardDispatchICall
 * 00000001402793C1: mov     [rsi+730h], eax
 * 00000001402793C7: jmp     short loc_1402793D0
 * 00000001402793C9: or      dword ptr [rsi+730h], 0FFFFFFFFh
 * 00000001402793D0: test    rbx, rbx
 * 00000001402793D3: jz      short loc_1402793EC
 * 00000001402793D5: mov     rax, [rsi+280h]
 * 00000001402793DC: mov     rcx, rbx
 * 00000001402793DF: call    KeGuardDispatchICall
 * 00000001402793E4: jmp     short loc_1402793EC
 * 00000001402793E6: mov     r15d, 1
 * 00000001402793EC: mov     eax, [rsi+748h]
 * 00000001402793F2: mov     ecx, 800008h
 * 00000001402793F7: and     eax, ecx
 * 00000001402793F9: cmp     eax, ecx
 * 00000001402793FB: jnz     loc_1402797DC
 * 0000000140279401: mov     eax, [rsi+74Ch]
 * 0000000140279407: mov     r9, [rsi+7E0h]
 * 000000014027940E: mov     r14d, [rsi+5E4h]
 * 0000000140279415: mov     r12, [rsi+7B0h]
 * 000000014027941C: mov     r13d, [rsi+608h]
 * 0000000140279423: mov     [rbp+1A50h+var_1A30], r9
 * 0000000140279427: and     eax, r15d
 * 000000014027942A: jz      short loc_140279433
 * 000000014027942C: mov     r12, [rsi+558h]
 * 0000000140279433: mov     r10, [rsi+160h]
 * 000000014027943A: mov     rax, [rsi+2C0h]
 * 0000000140279441: mov     r11, [rsi+338h]
 * 0000000140279448: mov     [rbp+1A50h+var_19C8], r10
 * 000000014027944F: mov     [rbp+1A50h+var_1A00], rax
 * 0000000140279453: mov     [rbp+1A50h+var_1A40], r11
 * 0000000140279457: rdtsc
 * 0000000140279459: shl     rdx, 20h
 * 000000014027945D: mov     rbx, 7010008004002001h
 * 0000000140279467: or      rax, rdx
 * 000000014027946A: mov     rcx, rax
 * 000000014027946D: ror     rax, 3
 * 0000000140279471: xor     rcx, rax
 * 0000000140279474: mov     rax, rbx
 * 0000000140279477: mul     rcx
 * 000000014027947A: mov     rcx, rdi
 * 000000014027947D: mov     r8, rdx
 * 0000000140279480: mov     [rbp+1A50h+var_1450], rdx
 * 0000000140279487: xor     r8, rax
 * 000000014027948A: mov     rax, 0ABCC77118461CEFDh
 * 0000000140279494: mul     r8
 * 0000000140279497: shr     rdx, 1Ah
 * 000000014027949B: imul    rax, rdx, 5F5E100h
 * 00000001402794A2: sub     r8, rax
 * 00000001402794A5: sub     rcx, r8
 * 00000001402794A8: mov     [rbp+1A50h+var_1868], rcx
 * 00000001402794AF: test    dword ptr [rsi+748h], 4000000h
 * 00000001402794B9: jz      loc_140279559
 * 00000001402794BF: rdtsc
 * 00000001402794C1: shl     rdx, 20h
 * 00000001402794C5: or      rax, rdx
 * 00000001402794C8: mov     rdx, rax
 * 00000001402794CB: ror     rax, 3
 * 00000001402794CF: xor     rdx, rax
 * 00000001402794D2: mov     rax, rbx
 * 00000001402794D5: mul     rdx
 * 00000001402794D8: mov     r8, rdx
 * 00000001402794DB: mov     [rbp+1A50h+var_1448], rdx
 * 00000001402794E2: xor     r8, rax
 * 00000001402794E5: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001402794EF: mul     r8
 * 00000001402794F2: shr     rdx, 3
 * 00000001402794F6: lea     rax, [rdx+rdx*4]
 * 00000001402794FA: add     rax, rax
 * 00000001402794FD: sub     r8, rax
 * 0000000140279500: mov     eax, 2
 * 0000000140279505: cmp     r8, rax
 * 0000000140279508: jnb     short loc_140279559
 * 000000014027950A: rdtsc
 * 000000014027950C: shl     rdx, 20h
 * 0000000140279510: or      rax, rdx
 * 0000000140279513: mov     rdx, rax
 * 0000000140279516: ror     rax, 3
 * 000000014027951A: xor     rdx, rax
 * 000000014027951D: mov     rax, rbx
 * 0000000140279520: mul     rdx
 * 0000000140279523: mov     r8, rdx
 * 0000000140279526: mov     [rbp+1A50h+var_1440], rdx
 * 000000014027952D: xor     r8, rax
 * 0000000140279530: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014027953A: mul     r8
 * 000000014027953D: shr     rdx, 3
 * 0000000140279541: lea     rax, [rdx+rdx*4]
 * 0000000140279545: add     rax, rax
 * 0000000140279548: sub     r8, rax
 * 000000014027954B: add     r8, r15
 * 000000014027954E: imul    rcx, r8
 * 0000000140279552: mov     [rbp+1A50h+var_1868], rcx
 * 0000000140279559: mov     eax, [rsi+748h]
 * 000000014027955F: xor     r8d, r8d
 * 0000000140279562: mov     ebx, r8d
 * 0000000140279565: mov     r15d, r8d
 * 0000000140279568: lea     ecx, [r8+2]
 * 000000014027956C: test    cl, al
 * 000000014027956E: cmovz   r14d, r13d
 * 0000000140279572: test    al, al
 * 0000000140279574: js      short loc_140279582
 * 0000000140279576: mov     [rbp+1A50h+var_19C0], r8d
 * 000000014027957D: jmp     loc_140279662
 * 0000000140279582: mov     r11d, 1
 * 0000000140279588: mov     [rbp+1A50h+var_19C0], r11d
 * 000000014027958F: rdtsc
 * 0000000140279591: shl     rdx, 20h
 * 0000000140279595: mov     r15, rsi
 * 0000000140279598: or      rax, rdx
 * 000000014027959B: mov     rcx, rax
 * 000000014027959E: ror     rax, 3
 * 00000001402795A2: xor     rcx, rax
 * 00000001402795A5: mov     rax, 7010008004002001h
 * 00000001402795AF: mul     rcx
 * 00000001402795B2: mov     ecx, 102h
 * 00000001402795B7: mov     rbx, rdx
 * 00000001402795BA: mov     [rbp+1A50h+var_1438], rdx
 * 00000001402795C1: xor     rbx, rax
 * 00000001402795C4: lea     rax, [rsi+808h]
 * 00000001402795CB: mov     r10, rbx
 * 00000001402795CE: xor     r15, rbx
 * 00000001402795D1: xor     [rax], r10
 * 00000001402795D4: lea     rax, [rax-8]
 * 00000001402795D8: ror     r10, cl
 * 00000001402795DB: sub     ecx, r11d
 * 00000001402795DE: jnz     short loc_1402795D1
 * 00000001402795E0: lea     r8, [r13-810h]
 * 00000001402795E7: mov     r11, r13
 * 00000001402795EA: shr     r8, 3
 * 00000001402795EE: test    r8d, r8d
 * 00000001402795F1: jz      short loc_14027962B
 * 00000001402795F3: add     rsi, 808h
 * 00000001402795FA: movsxd  r9, r8d
 * 00000001402795FD: lea     r9, [rsi+r9*8]
 * 0000000140279601: lea     esi, [rcx+1]
 * 0000000140279604: mov     rdx, [r9]
 * 0000000140279607: lea     rax, [r15+r15]
 * 000000014027960B: mov     ecx, r8d
 * 000000014027960E: lea     r9, [r9-8]
 * 0000000140279612: ror     rdx, cl
 * 0000000140279615: mov     r15, rdx
 * 0000000140279618: xor     r15, rax
 * 000000014027961B: sub     r8d, esi
 * 000000014027961E: jnz     short loc_140279604
 * 0000000140279620: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140279624: mov     r11, r13
 * 0000000140279627: mov     r9, [rbp+1A50h+var_1A30]
 * 000000014027962B: mov     ecx, r14d
 * 000000014027962E: lea     rdx, [rsi+r11]
 * 0000000140279632: sub     ecx, r13d
 * 0000000140279635: shr     ecx, 3
 * 0000000140279638: test    ecx, ecx
 * 000000014027963A: jz      short loc_140279657
 * 000000014027963C: lea     rdx, [rdx+rcx*8]
 * 0000000140279640: mov     eax, 1
 * 0000000140279645: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140279649: xor     [rdx], r10
 * 000000014027964C: lea     rdx, [rdx-8]
 * 0000000140279650: ror     r10, cl
 * 0000000140279653: sub     ecx, eax
 * 0000000140279655: jnz     short loc_140279649
 * 0000000140279657: mov     r10, [rbp+1A50h+var_19C8]
 * 000000014027965E: mov     r11, [rbp+1A50h+var_1A40]
 * 0000000140279662: test    r9, r9
 * 0000000140279665: jz      short loc_140279686
 * 0000000140279667: mov     [rsp+0DA0h+BugCheckParameter4], r9
 * 000000014027966C: lea     r8, [rbp+1A50h+var_1868]
 * 0000000140279673: mov     r9, r10
 * 0000000140279676: mov     edx, r14d
 * 0000000140279679: mov     rcx, rsi
 * 000000014027967C: mov     rax, r11
 * 000000014027967F: call    KeGuardDispatchICall
 * 0000000140279684: jmp     short loc_1402796BE
 * 0000000140279686: xor     edx, edx
 * 0000000140279688: test    r12, r12
 * 000000014027968B: jnz     short loc_1402796A0
 * 000000014027968D: lea     r8, [rbp+1A50h+var_1868]
 * 0000000140279694: xor     ecx, ecx
 * 0000000140279696: mov     rax, r10
 * 0000000140279699: call    KeGuardDispatchICall
 * 000000014027969E: jmp     short loc_1402796BE
 * 00000001402796A0: lea     rax, [rbp+1A50h+var_1868]
 * 00000001402796A7: xor     r9d, r9d
 * 00000001402796AA: mov     [rsp+0DA0h+BugCheckParameter4], rax
 * 00000001402796AF: xor     r8d, r8d
 * 00000001402796B2: mov     rax, [rbp+1A50h+var_1A00]
 * 00000001402796B6: mov     rcx, r12
 * 00000001402796B9: call    KeGuardDispatchICall
 * 00000001402796BE: xor     r12d, r12d
 * 00000001402796C1: cmp     [rbp+1A50h+var_19C0], r12d
 * 00000001402796C8: jz      loc_1402797DC
 * 00000001402796CE: mov     r9, rsi
 * 00000001402796D1: lea     rax, [rsi+808h]
 * 00000001402796D8: xor     r9, rbx
 * 00000001402796DB: lea     r10d, [r12+1]
 * 00000001402796E0: mov     ecx, 102h
 * 00000001402796E5: xor     [rax], rbx
 * 00000001402796E8: lea     rax, [rax-8]
 * 00000001402796EC: ror     rbx, cl
 * 00000001402796EF: sub     ecx, r10d
 * 00000001402796F2: jnz     short loc_1402796E5
 * 00000001402796F4: lea     r8, [r13-810h]
 * 00000001402796FB: mov     r11, r13
 * 00000001402796FE: shr     r8, 3
 * 0000000140279702: test    r8d, r8d
 * 0000000140279705: jz      short loc_14027973C
 * 0000000140279707: movsxd  r10, r8d
 * 000000014027970A: lea     r11d, [rcx+1]
 * 000000014027970E: add     r10, 101h
 * 0000000140279715: lea     r10, [rsi+r10*8]
 * 0000000140279719: mov     rdx, [r10]
 * 000000014027971C: lea     rax, [r9+r9]
 * 0000000140279720: mov     ecx, r8d
 * 0000000140279723: lea     r10, [r10-8]
 * 0000000140279727: ror     rdx, cl
 * 000000014027972A: mov     r9, rdx
 * 000000014027972D: xor     r9, rax
 * 0000000140279730: sub     r8d, r11d
 * 0000000140279733: jnz     short loc_140279719
 * 0000000140279735: mov     r11, r13
 * 0000000140279738: lea     r10d, [r8+1]
 * 000000014027973C: sub     r14d, r13d
 * 000000014027973F: lea     rcx, [rsi+r11]
 * 0000000140279743: shr     r14d, 3
 * 0000000140279747: xor     r13d, r13d
 * 000000014027974A: test    r14d, r14d
 * 000000014027974D: jz      short loc_14027976B
 * 000000014027974F: mov     edx, r14d
 * 0000000140279752: dec     rdx
 * 0000000140279755: lea     rdx, [rcx+rdx*8]
 * 0000000140279759: xor     [rdx], rbx
 * 000000014027975C: mov     ecx, r14d
 * 000000014027975F: ror     rbx, cl
 * 0000000140279762: lea     rdx, [rdx-8]
 * 0000000140279766: sub     r14d, r10d
 * 0000000140279769: jnz     short loc_140279759
 * 000000014027976B: cmp     r9, r15
 * 000000014027976E: jz      short loc_1402797DF
 * 0000000140279770: mov     rax, [rsi+510h]
 * 0000000140279777: mov     ecx, [rsi+5E4h]
 * 000000014027977D: mov     [rax], rsi
 * 0000000140279780: mov     [rax+10h], ecx
 * 0000000140279783: cmp     [rsi+6C0h], r13d
 * 000000014027978A: jnz     short loc_1402797DF
 * 000000014027978C: mov     rax, [rsi+510h]
 * 0000000140279793: mov     rcx, r9
 * 0000000140279796: xor     rcx, r15
 * 0000000140279799: mov     [rax+18h], rcx
 * 000000014027979D: cmp     [rsi+6C0h], r13d
 * 00000001402797A4: jnz     short loc_1402797DF
 * 00000001402797A6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001402797B0: add     rax, rsi
 * 00000001402797B3: mov     [rsi+6C8h], rax
 * 00000001402797BA: mov     [rsi+6D0h], r13
 * 00000001402797C1: mov     qword ptr [rsi+6D8h], 10Eh
 * 00000001402797CC: mov     [rsi+6E0h], r9
 * 00000001402797D3: mov     [rsi+6C0h], r10d
 * 00000001402797DA: jmp     short loc_1402797DF
 * 00000001402797DC: xor     r13d, r13d
 * 00000001402797DF: mov     eax, [rsi+718h]
 * 00000001402797E5: mov     r12d, 1
 * 00000001402797EB: sub     eax, r12d
 * 00000001402797EE: test    eax, 0FFFFFFF7h
 * 00000001402797F3: jz      loc_14027E016
 * 00000001402797F9: cmp     [rsi+6C0h], r13d
 * 0000000140279800: jnz     loc_14027E01A
 * 0000000140279806: mov     rax, [rsi+720h]
 * 000000014027980D: mov     rcx, [rax]
 * 0000000140279810: cmp     rcx, [rsi+728h]
 * 0000000140279817: jz      loc_14027DDE5
 * 000000014027981D: mov     ecx, [rsi+730h]
 * 0000000140279823: or      r15d, 0FFFFFFFFh
 * 0000000140279827: mov     rbx, rsi
 * 000000014027982A: mov     [rbp+1A50h+var_19F0], rbx
 * 000000014027982E: cmp     ecx, r15d
 * 0000000140279831: jz      short loc_140279844
 * 0000000140279833: mov     rax, [rsi+270h]
 * 000000014027983A: call    KeGuardDispatchICall
 * 000000014027983F: mov     r14, rax
 * 0000000140279842: jmp     short loc_140279847
 * 0000000140279844: mov     r14, r13
 * 0000000140279847: test    r14, r14
 * 000000014027984A: jnz     short loc_140279866
 * 000000014027984C: mov     rax, [rsi+278h]
 * 0000000140279853: xor     ecx, ecx
 * 0000000140279855: call    KeGuardDispatchICall
 * 000000014027985A: mov     r14, rax
 * 000000014027985D: test    rax, rax
 * 0000000140279860: jz      loc_14027E016
 * 0000000140279866: mov     rax, [rsi+288h]
 * 000000014027986D: lea     rdx, [rbp+1A50h+var_1540]
 * 0000000140279874: mov     rcx, r14
 * 0000000140279877: call    KeGuardDispatchICall
 * 000000014027987C: mov     r15d, eax
 * 000000014027987F: test    eax, eax
 * 0000000140279881: jns     short loc_140279894
 * 0000000140279883: mov     rax, [rsi+280h]
 * 000000014027988A: mov     rcx, r14
 * 000000014027988D: call    KeGuardDispatchICall
 * 0000000140279892: jmp     short loc_1402798F7
 * 0000000140279894: mov     [rsi+740h], r14
 * 000000014027989B: mov     rax, [rsi+2B0h]
 * 00000001402798A2: call    KeGuardDispatchICall
 * 00000001402798A7: mov     r14, rax
 * 00000001402798AA: mov     rax, [rsi+2D0h]
 * 00000001402798B1: mov     rcx, r14
 * 00000001402798B4: call    KeGuardDispatchICall
 * 00000001402798B9: mov     rdx, rax
 * 00000001402798BC: test    rax, rax
 * 00000001402798BF: jnz     short loc_1402798C6
 * 00000001402798C1: mov     eax, r12d
 * 00000001402798C4: jmp     short loc_1402798D8
 * 00000001402798C6: mov     rax, [rsi+2E0h]
 * 00000001402798CD: mov     rcx, r14
 * 00000001402798D0: call    KeGuardDispatchICall
 * 00000001402798D5: mov     eax, r13d
 * 00000001402798D8: shl     eax, 2
 * 00000001402798DB: mov     r15d, r13d
 * 00000001402798DE: xor     eax, [rsi+74Ch]
 * 00000001402798E4: and     eax, 4
 * 00000001402798E7: xor     [rsi+74Ch], eax
 * 00000001402798ED: add     dword ptr [rsi+628h], 10000h
 * 00000001402798F7: test    r15d, r15d
 * 00000001402798FA: js      loc_14027E016
 * 0000000140279900: mov     rax, [rsi+298h]
 * 0000000140279907: mov     rcx, [rsi+740h]
 * 000000014027990E: call    KeGuardDispatchICall
 * 0000000140279913: test    eax, eax
 * 0000000140279915: jnz     loc_14027DCEB
 * 000000014027991B: mov     rax, [rsi+4F8h]
 * 0000000140279922: lea     rbx, [rbp+1A50h+var_16C8]
 * 0000000140279929: mov     ecx, 20h ; ' '
 * 000000014027992E: mov     [rbp+1A50h+var_1A00], 2
 * 0000000140279936: add     rax, rcx
 * 0000000140279939: mov     [rbp+1A50h+var_16C8], rax
 * 0000000140279940: mov     rax, [rsi+4F0h]
 * 0000000140279947: add     rax, rcx
 * 000000014027994A: mov     [rbp+1A50h+var_16C0], rax
 * 0000000140279951: mov     rax, [rsi+720h]
 * 0000000140279958: mov     [rbp+1A50h+var_19D0], rax
 * 000000014027995F: mov     rax, [rsi+728h]
 * 0000000140279966: mov     rsi, [rbp+1A50h+var_19D0]
 * 000000014027996D: mov     rdi, rax
 * 0000000140279970: mov     [rbp+1A50h+var_1A38], rax
 * 0000000140279974: mov     rax, [rbx]
 * 0000000140279977: mov     r12, rsi
 * 000000014027997A: xor     r12, r13
 * 000000014027997D: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140279981: mov     r9d, r12d
 * 0000000140279984: and     r9d, 3Fh
 * 0000000140279988: mov     rdx, [rax]
 * 000000014027998B: mov     r14d, [rax+10h]
 * 000000014027998F: mov     r10, rdx
 * 0000000140279992: mov     r11d, r14d
 * 0000000140279995: mov     [rbp+1A50h+var_1A40], rdx
 * 0000000140279999: shl     r11d, 2
 * 000000014027999D: mov     rax, rdx
 * 00000001402799A0: mov     ecx, r11d
 * 00000001402799A3: add     rcx, rdx
 * 00000001402799A6: cmp     rdx, rcx
 * 00000001402799A9: jnb     short loc_1402799B7
 * 00000001402799AB: prefetchnta byte ptr [rax]
 * 00000001402799AE: add     rax, 40h ; '@'
 * 00000001402799B2: cmp     rax, rcx
 * 00000001402799B5: jb      short loc_1402799AB
 * 00000001402799B7: mov     r15d, r11d
 * 00000001402799BA: mov     r8, r12
 * 00000001402799BD: shr     r15d, 7
 * 00000001402799C1: test    r15d, r15d
 * 00000001402799C4: jz      short loc_140279A3C
 * 00000001402799C6: mov     r13, rdx
 * 00000001402799C9: mov     rdi, 7010008004002001h
 * 00000001402799D3: mov     edx, 8
 * 00000001402799D8: lea     esi, [rdx-7]
 * 00000001402799DB: mov     rax, [r10]
 * 00000001402799DE: mov     ecx, r9d
 * 00000001402799E1: xor     rax, r8
 * 00000001402799E4: mov     r8, [r10+8]
 * 00000001402799E8: rol     rax, cl
 * 00000001402799EB: add     r10, 10h
 * 00000001402799EF: xor     r8, rax
 * 00000001402799F2: rol     r8, cl
 * 00000001402799F5: sub     rdx, rsi
 * 00000001402799F8: jnz     short loc_1402799DB
 * 00000001402799FA: mov     rcx, r10
 * 00000001402799FD: sub     rcx, r13
 * 0000000140279A00: xor     rcx, r12
 * 0000000140279A03: mov     rax, rcx
 * 0000000140279A06: rol     rax, 11h
 * 0000000140279A0A: xor     rcx, rax
 * 0000000140279A0D: mov     rax, rdi
 * 0000000140279A10: mul     rcx
 * 0000000140279A13: xor     r9d, eax
 * 0000000140279A16: mov     [rbp+1A50h+var_1430], rdx
 * 0000000140279A1D: xor     r9d, edx
 * 0000000140279A20: mov     rax, rsi
 * 0000000140279A23: and     r9d, 3Fh
 * 0000000140279A27: cmovz   r9d, eax
 * 0000000140279A2B: add     r15d, 0FFFFFFFFh
 * 0000000140279A2F: jnz     short loc_1402799D3
 * 0000000140279A31: mov     rsi, [rbp+1A50h+var_19D0]
 * 0000000140279A38: mov     rdi, [rbp+1A50h+var_1A38]
 * 0000000140279A3C: and     r11d, 7Fh
 * 0000000140279A40: mov     r15d, 1
 * 0000000140279A46: cmp     r11d, 8
 * 0000000140279A4A: jb      short loc_140279A69
 * 0000000140279A4C: mov     edx, r11d
 * 0000000140279A4F: shr     rdx, 3
 * 0000000140279A53: xor     r8, [r10]
 * 0000000140279A56: mov     ecx, r9d
 * 0000000140279A59: rol     r8, cl
 * 0000000140279A5C: add     r10, 8
 * 0000000140279A60: add     r11d, 0FFFFFFF8h
 * 0000000140279A64: sub     rdx, r15
 * 0000000140279A67: jnz     short loc_140279A53
 * 0000000140279A69: test    r11d, r11d
 * 0000000140279A6C: jz      short loc_140279A84
 * 0000000140279A6E: movzx   eax, byte ptr [r10]
 * 0000000140279A72: mov     ecx, r9d
 * 0000000140279A75: xor     r8, rax
 * 0000000140279A78: add     r10, r15
 * 0000000140279A7B: rol     r8, cl
 * 0000000140279A7E: add     r11d, 0FFFFFFFFh
 * 0000000140279A82: jnz     short loc_140279A6E
 * 0000000140279A84: mov     r15, [rbp+1A50h+var_1A30]
 * 0000000140279A88: mov     r11, rdi
 * 0000000140279A8B: xor     r11, r8
 * 0000000140279A8E: mov     r12, r14
 * 0000000140279A91: mov     r8d, r11d
 * 0000000140279A94: and     r8d, 3Fh
 * 0000000140279A98: mov     r15, [r15+18h]
 * 0000000140279A9C: mov     r9, r15
 * 0000000140279A9F: mov     rax, r15
 * 0000000140279AA2: lea     rcx, [r15+r14]
 * 0000000140279AA6: cmp     r15, rcx
 * 0000000140279AA9: jnb     short loc_140279AB7
 * 0000000140279AAB: prefetchnta byte ptr [rax]
 * 0000000140279AAE: add     rax, 40h ; '@'
 * 0000000140279AB2: cmp     rax, rcx
 * 0000000140279AB5: jb      short loc_140279AAB
 * 0000000140279AB7: mov     r10d, r14d
 * 0000000140279ABA: mov     r13, r11
 * 0000000140279ABD: shr     r10d, 7
 * 0000000140279AC1: test    r10d, r10d
 * 0000000140279AC4: jz      short loc_140279B32
 * 0000000140279AC6: mov     esi, 1
 * 0000000140279ACB: mov     rdi, 7010008004002001h
 * 0000000140279AD5: mov     eax, 8
 * 0000000140279ADA: xor     r13, [r9]
 * 0000000140279ADD: mov     ecx, r8d
 * 0000000140279AE0: rol     r13, cl
 * 0000000140279AE3: xor     r13, [r9+8]
 * 0000000140279AE7: add     r9, 10h
 * 0000000140279AEB: rol     r13, cl
 * 0000000140279AEE: sub     rax, rsi
 * 0000000140279AF1: jnz     short loc_140279ADA
 * 0000000140279AF3: mov     rcx, r9
 * 0000000140279AF6: sub     rcx, r15
 * 0000000140279AF9: xor     rcx, r11
 * 0000000140279AFC: mov     rax, rcx
 * 0000000140279AFF: rol     rax, 11h
 * 0000000140279B03: xor     rcx, rax
 * 0000000140279B06: mov     rax, rdi
 * 0000000140279B09: mul     rcx
 * 0000000140279B0C: xor     r8d, eax
 * 0000000140279B0F: mov     [rbp+1A50h+var_1428], rdx
 * 0000000140279B16: xor     r8d, edx
 * 0000000140279B19: and     r8d, 3Fh
 * 0000000140279B1D: cmovz   r8d, esi
 * 0000000140279B21: add     r10d, 0FFFFFFFFh
 * 0000000140279B25: jnz     short loc_140279AD5
 * 0000000140279B27: mov     rsi, [rbp+1A50h+var_19D0]
 * 0000000140279B2E: mov     rdi, [rbp+1A50h+var_1A38]
 * 0000000140279B32: and     r14d, 7Fh
 * 0000000140279B36: mov     r10d, 1
 * 0000000140279B3C: cmp     r14d, 8
 * 0000000140279B40: jb      short loc_140279B5F
 * 0000000140279B42: mov     eax, r14d
 * 0000000140279B45: shr     rax, 3
 * 0000000140279B49: xor     r13, [r9]
 * 0000000140279B4C: mov     ecx, r8d
 * 0000000140279B4F: rol     r13, cl
 * 0000000140279B52: add     r9, 8
 * 0000000140279B56: add     r14d, 0FFFFFFF8h
 * 0000000140279B5A: sub     rax, r10
 * 0000000140279B5D: jnz     short loc_140279B49
 * 0000000140279B5F: test    r14d, r14d
 * 0000000140279B62: jz      short loc_140279B7A
 * 0000000140279B64: movzx   eax, byte ptr [r9]
 * 0000000140279B68: mov     ecx, r8d
 * 0000000140279B6B: xor     r13, rax
 * 0000000140279B6E: add     r9, r10
 * 0000000140279B71: rol     r13, cl
 * 0000000140279B74: add     r14d, 0FFFFFFFFh
 * 0000000140279B78: jnz     short loc_140279B64
 * 0000000140279B7A: mov     rcx, [rbp+1A50h+var_1A40]
 * 0000000140279B7E: add     rbx, 8
 * 0000000140279B82: xor     r13, rcx
 * 0000000140279B85: xor     r13, r12
 * 0000000140279B88: mov     r12d, 1
 * 0000000140279B8E: sub     [rbp+1A50h+var_1A00], r12
 * 0000000140279B92: jnz     loc_140279974
 * 0000000140279B98: mov     rsi, [rbp+1A50h+var_1A20]
 * 0000000140279B9C: lea     r8, [rbp+1A50h+var_16B0]
 * 0000000140279BA3: lea     rdx, [rbp+1A50h+var_16A8]
 * 0000000140279BAA: mov     [rbp+1A50h+var_19C8], r13
 * 0000000140279BB1: mov     rax, [rsi+200h]
 * 0000000140279BB8: call    KeGuardDispatchICall
 * 0000000140279BBD: mov     rbx, [rbp+1A50h+var_19F0]
 * 0000000140279BC1: xor     r14d, r14d
 * 0000000140279BC4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140279BCB: test    rax, rax
 * 0000000140279BCE: jz      loc_14027A37A
 * 0000000140279BD4: rdtsc
 * 0000000140279BD6: shl     rdx, 20h
 * 0000000140279BDA: mov     r8, 7010008004002001h
 * 0000000140279BE4: or      rax, rdx
 * 0000000140279BE7: mov     rcx, rax
 * 0000000140279BEA: ror     rax, 3
 * 0000000140279BEE: xor     rcx, rax
 * 0000000140279BF1: mov     rax, r8
 * 0000000140279BF4: mul     rcx
 * 0000000140279BF7: mov     rcx, rdx
 * 0000000140279BFA: mov     [rbp+1A50h+var_1420], rdx
 * 0000000140279C01: xor     rcx, rax
 * 0000000140279C04: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140279C0E: mul     rcx
 * 0000000140279C11: shr     rdx, 1
 * 0000000140279C14: imul    rax, rdx, 0Bh
 * 0000000140279C18: sub     rcx, rax
 * 0000000140279C1B: lea     eax, [r12+4]
 * 0000000140279C20: cmp     ecx, eax
 * 0000000140279C22: ja      loc_140279CE0
 * 0000000140279C28: jz      loc_140279CC6
 * 0000000140279C2E: test    ecx, ecx
 * 0000000140279C30: jz      short loc_140279CAC
 * 0000000140279C32: sub     ecx, r12d
 * 0000000140279C35: jz      short loc_140279C93
 * 0000000140279C37: sub     ecx, r12d
 * 0000000140279C3A: jz      short loc_140279C79
 * 0000000140279C3C: cmp     ecx, r12d
 * 0000000140279C3F: jz      short loc_140279C5B
 * 0000000140279C41: mov     [rbp+1A50h+var_17D4], 67076494h
 * 0000000140279C4B: mov     r9d, [rbp+1A50h+var_17D4]
 * 0000000140279C52: rol     r9d, 4
 * 0000000140279C56: jmp     loc_140279E04
 * 0000000140279C5B: mov     [rbp+1A50h+var_17D0], 0A8223938h
 * 0000000140279C65: mov     r9d, [rbp+1A50h+var_17D0]
 * 0000000140279C6C: xor     r9d, 3
 * 0000000140279C70: ror     r9d, 0Fh
 * 0000000140279C74: jmp     loc_140279E04
 * 0000000140279C79: mov     [rbp+1A50h+var_1834], 85B5910Dh
 * 0000000140279C83: mov     r9d, [rbp+1A50h+var_1834]
 * 0000000140279C8A: ror     r9d, 2
 * 0000000140279C8E: jmp     loc_140279E04
 * 0000000140279C93: mov     [rbp+1A50h+var_17CC], 0B2AD31A1h
 * 0000000140279C9D: mov     r9d, [rbp+1A50h+var_17CC]
 * 0000000140279CA4: rol     r9d, 1
 * 0000000140279CA7: jmp     loc_140279E04
 * 0000000140279CAC: mov     [rbp+1A50h+var_17C8], 0D098D0D8h
 * 0000000140279CB6: mov     r9d, [rbp+1A50h+var_17C8]
 * 0000000140279CBD: ror     r9d, 6
 * 0000000140279CC1: jmp     loc_140279E04
 * 0000000140279CC6: mov     [rbp+1A50h+var_17C4], 288C49EDh
 * 0000000140279CD0: mov     r9d, [rbp+1A50h+var_17C4]
 * 0000000140279CD7: ror     r9d, 5
 * 0000000140279CDB: jmp     loc_140279E04
 * 0000000140279CE0: sub     ecx, 6
 * 0000000140279CE3: jz      loc_140279DEB
 * 0000000140279CE9: sub     ecx, r12d
 * 0000000140279CEC: jz      loc_140279DD4
 * 0000000140279CF2: sub     ecx, r12d
 * 0000000140279CF5: jz      loc_140279DBD
 * 0000000140279CFB: cmp     ecx, r12d
 * 0000000140279CFE: jz      loc_140279DA2
 * 0000000140279D04: rdtsc
 * 0000000140279D06: shl     rdx, 20h
 * 0000000140279D0A: mov     r10d, 4EC4EC4Fh
 * 0000000140279D10: or      rax, rdx
 * 0000000140279D13: mov     rcx, rax
 * 0000000140279D16: ror     rax, 3
 * 0000000140279D1A: xor     rcx, rax
 * 0000000140279D1D: mov     rax, r8
 * 0000000140279D20: mul     rcx
 * 0000000140279D23: mov     r9, rax
 * 0000000140279D26: mov     [rbp+1A50h+var_1418], rdx
 * 0000000140279D2D: xor     r9d, edx
 * 0000000140279D30: mov     eax, r10d
 * 0000000140279D33: mul     r9d
 * 0000000140279D36: mov     ecx, r9d
 * 0000000140279D39: shr     r9d, 5
 * 0000000140279D3D: shr     edx, 3
 * 0000000140279D40: mov     r8d, r9d
 * 0000000140279D43: imul    eax, edx, 1Ah
 * 0000000140279D46: sub     ecx, eax
 * 0000000140279D48: mov     eax, r10d
 * 0000000140279D4B: mul     r9d
 * 0000000140279D4E: add     ecx, 61h ; 'a'
 * 0000000140279D51: shr     r9d, 5
 * 0000000140279D55: shl     ecx, 8
 * 0000000140279D58: shr     edx, 3
 * 0000000140279D5B: imul    eax, edx, 1Ah
 * 0000000140279D5E: sub     r8d, eax
 * 0000000140279D61: mov     eax, r10d
 * 0000000140279D64: mul     r9d
 * 0000000140279D67: add     r8d, 41h ; 'A'
 * 0000000140279D6B: or      r8d, ecx
 * 0000000140279D6E: shr     edx, 3
 * 0000000140279D71: imul    eax, edx, 1Ah
 * 0000000140279D74: mov     ecx, r9d
 * 0000000140279D77: shr     r9d, 5
 * 0000000140279D7B: shl     r8d, 8
 * 0000000140279D7F: sub     ecx, eax
 * 0000000140279D81: mov     eax, r10d
 * 0000000140279D84: mul     r9d
 * 0000000140279D87: add     ecx, 61h ; 'a'
 * 0000000140279D8A: shr     edx, 3
 * 0000000140279D8D: or      ecx, r8d
 * 0000000140279D90: imul    eax, edx, 1Ah
 * 0000000140279D93: shl     ecx, 8
 * 0000000140279D96: sub     r9d, eax
 * 0000000140279D99: add     r9d, 41h ; 'A'
 * 0000000140279D9D: or      r9d, ecx
 * 0000000140279DA0: jmp     short loc_140279E04
 * 0000000140279DA2: mov     [rbp+1A50h+var_17C0], 0B0869E85h
 * 0000000140279DAC: mov     r9d, [rbp+1A50h+var_17C0]
 * 0000000140279DB3: xor     r9d, 9
 * 0000000140279DB7: ror     r9d, 21h
 * 0000000140279DBB: jmp     short loc_140279E04
 * 0000000140279DBD: mov     [rbp+1A50h+var_17BC], 64664142h
 * 0000000140279DC7: mov     r9d, [rbp+1A50h+var_17BC]
 * 0000000140279DCE: ror     r9d, 8
 * 0000000140279DD2: jmp     short loc_140279E04
 * 0000000140279DD4: mov     [rbp+1A50h+var_17B8], 82C6A6D8h
 * 0000000140279DDE: mov     r9d, [rbp+1A50h+var_17B8]
 * 0000000140279DE5: rol     r9d, 7
 * 0000000140279DE9: jmp     short loc_140279E04
 * 0000000140279DEB: mov     [rbp+1A50h+var_17B4], 4E574672h
 * 0000000140279DF5: mov     r9d, [rbp+1A50h+var_17B4]
 * 0000000140279DFC: xor     r9d, 6
 * 0000000140279E00: ror     r9d, 18h
 * 0000000140279E04: mov     rax, [rsi+0F8h]
 * 0000000140279E0B: mov     r8d, r9d
 * 0000000140279E0E: mov     edx, 80h
 * 0000000140279E13: mov     ecx, 200h
 * 0000000140279E18: call    KeGuardDispatchICall
 * 0000000140279E1D: mov     [rbp+1A50h+var_1A38], rax
 * 0000000140279E21: mov     r15, rax
 * 0000000140279E24: test    rax, rax
 * 0000000140279E27: jz      loc_14027DDBE
 * 0000000140279E2D: mov     ecx, 80h
 * 0000000140279E32: lea     edx, [rcx-70h]
 * 0000000140279E35: mov     [rax], r14
 * 0000000140279E38: add     ecx, 0FFFFFFF8h
 * 0000000140279E3B: add     rax, 8
 * 0000000140279E3F: sub     rdx, r12
 * 0000000140279E42: jnz     short loc_140279E35
 * 0000000140279E44: test    ecx, ecx
 * 0000000140279E46: jz      short loc_140279E53
 * 0000000140279E48: mov     [rax], r14b
 * 0000000140279E4B: add     rax, r12
 * 0000000140279E4E: add     ecx, 0FFFFFFFFh
 * 0000000140279E51: jnz     short loc_140279E48
 * 0000000140279E53: mov     rax, [rbp+1A50h+var_16A8]
 * 0000000140279E5A: mov     rcx, r14
 * 0000000140279E5D: mov     [rbp+1A50h+var_1908], rax
 * 0000000140279E64: mov     [r15], rax
 * 0000000140279E67: mov     rax, r13
 * 0000000140279E6A: mov     [rbp+1A50h+var_19D0], rax
 * 0000000140279E71: mov     [rbp+1A50h+var_19E4], r14d
 * 0000000140279E75: mov     [rbp+1A50h+var_1A40], rcx
 * 0000000140279E79: mov     rcx, [r15+rcx*8]
 * 0000000140279E7D: mov     [rbp+1A50h+var_1908], rcx
 * 0000000140279E84: test    rcx, rcx
 * 0000000140279E87: jz      loc_14027A34D
 * 0000000140279E8D: and     eax, 3Fh
 * 0000000140279E90: mov     dword ptr [rbp+1A50h+var_1A28], eax
 * 0000000140279E93: mov     rax, [rsi+1F8h]
 * 0000000140279E9A: call    KeGuardDispatchICall
 * 0000000140279E9F: mov     [rbp+1A50h+var_1A00], rax
 * 0000000140279EA3: test    rax, rax
 * 0000000140279EA6: jz      loc_14027A2FC
 * 0000000140279EAC: movzx   r11d, word ptr [rax+14h]
 * 0000000140279EB1: mov     rdi, [rbp+1A50h+var_1908]
 * 0000000140279EB8: add     r11, 18h
 * 0000000140279EBC: mov     ebx, dword ptr [rbp+1A50h+var_1A28]
 * 0000000140279EBF: add     r11, rax
 * 0000000140279EC2: movzx   eax, word ptr [rax+6]
 * 0000000140279EC6: mov     r13, [rbp+1A50h+var_19D0]
 * 0000000140279ECD: mov     [rbp+1A50h+var_1A10], rdi
 * 0000000140279ED1: lea     rcx, [rax+rax*4]
 * 0000000140279ED5: lea     rax, [r11+rcx*8]
 * 0000000140279ED9: mov     [rbp+1A50h+var_1A30], rax
 * 0000000140279EDD: mov     eax, [r11+24h]
 * 0000000140279EE1: bt      eax, 19h
 * 0000000140279EE5: jb      loc_14027A064
 * 0000000140279EEB: mov     ecx, [r11]
 * 0000000140279EEE: cmp     ecx, 54494E49h
 * 0000000140279EF4: jnz     short loc_140279F04
 * 0000000140279EF6: cmp     dword ptr [r11+4], 4742444Bh
 * 0000000140279EFE: jz      loc_14027A064
 * 0000000140279F04: cmp     ecx, 45474150h
 * 0000000140279F0A: jnz     short loc_140279F3B
 * 0000000140279F0C: movzx   eax, word ptr [r11+4]
 * 0000000140279F11: mov     edx, 7777h
 * 0000000140279F16: cmp     ax, dx
 * 0000000140279F19: jz      loc_14027A064
 * 0000000140279F1F: mov     edx, 7277h
 * 0000000140279F24: cmp     ax, dx
 * 0000000140279F27: jz      loc_14027A064
 * 0000000140279F2D: mov     edx, 7877h
 * 0000000140279F32: cmp     ax, dx
 * 0000000140279F35: jz      loc_14027A064
 * 0000000140279F3B: cmp     ecx, 41525245h
 * 0000000140279F41: jnz     short loc_140279F53
 * 0000000140279F43: mov     eax, 4154h
 * 0000000140279F48: cmp     [r11+4], ax
 * 0000000140279F4D: jz      loc_14027A064
 * 0000000140279F53: mov     rax, [rsi+700h]
 * 0000000140279F5A: mov     r9, r11
 * 0000000140279F5D: mov     r8, [rsi+6F8h]
 * 0000000140279F64: mov     r10d, 7
 * 0000000140279F6A: mov     [rbp+1A50h+var_15E0], rax
 * 0000000140279F71: sub     r9, r8
 * 0000000140279F74: mov     rax, [rsi+708h]
 * 0000000140279F7B: or      edi, 0FFFFFFFFh
 * 0000000140279F7E: mov     [rbp+1A50h+var_15D8], rax
 * 0000000140279F85: mov     rax, [rsi+710h]
 * 0000000140279F8C: mov     [rbp+1A50h+var_15D0], rax
 * 0000000140279F93: mov     [rbp+1A50h+var_15E8], r8
 * 0000000140279F9A: movzx   edx, byte ptr [r8+r9]
 * 0000000140279F9F: movzx   eax, byte ptr [r8]
 * 0000000140279FA3: add     r8, r12
 * 0000000140279FA6: cmp     rdx, rax
 * 0000000140279FA9: jnz     short loc_140279FB5
 * 0000000140279FAB: add     r10d, edi
 * 0000000140279FAE: jnz     short loc_140279F9A
 * 0000000140279FB0: jmp     loc_14027A059
 * 0000000140279FB5: mov     r9, [rbp+1A50h+var_15E0]
 * 0000000140279FBC: mov     r8d, 8
 * 0000000140279FC2: mov     r10, r11
 * 0000000140279FC5: mov     rcx, [r10]
 * 0000000140279FC8: add     r10, 8
 * 0000000140279FCC: mov     rax, [r9]
 * 0000000140279FCF: add     r9, 8
 * 0000000140279FD3: cmp     rcx, rax
 * 0000000140279FD6: jnz     short loc_14027A001
 * 0000000140279FD8: add     r8d, 0FFFFFFF8h
 * 0000000140279FDC: cmp     r8d, 8
 * 0000000140279FE0: jnb     short loc_140279FC5
 * 0000000140279FE2: test    r8d, r8d
 * 0000000140279FE5: jz      short loc_14027A059
 * 0000000140279FE7: movzx   edx, byte ptr [r10]
 * 0000000140279FEB: add     r10, r12
 * 0000000140279FEE: movzx   eax, byte ptr [r9]
 * 0000000140279FF2: add     r9, r12
 * 0000000140279FF5: cmp     rdx, rax
 * 0000000140279FF8: jnz     short loc_14027A001
 * 0000000140279FFA: add     r8d, edi
 * 0000000140279FFD: jnz     short loc_140279FE7
 * 0000000140279FFF: jmp     short loc_14027A059
 * 000000014027A001: mov     r8, [rbp+1A50h+var_15D8]
 * 000000014027A008: mov     r9, r11
 * 000000014027A00B: sub     r9, r8
 * 000000014027A00E: mov     r10d, 4
 * 000000014027A014: movzx   edx, byte ptr [r8+r9]
 * 000000014027A019: movzx   eax, byte ptr [r8]
 * 000000014027A01D: add     r8, r12
 * 000000014027A020: cmp     rdx, rax
 * 000000014027A023: jnz     short loc_14027A02C
 * 000000014027A025: add     r10d, edi
 * 000000014027A028: jnz     short loc_14027A014
 * 000000014027A02A: jmp     short loc_14027A059
 * 000000014027A02C: mov     r8, [rbp+1A50h+var_15D0]
 * 000000014027A033: mov     r9, r11
 * 000000014027A036: sub     r9, r8
 * 000000014027A039: mov     r10d, 6
 * 000000014027A03F: movzx   edx, byte ptr [r9+r8]
 * 000000014027A044: movzx   eax, byte ptr [r8]
 * 000000014027A048: add     r8, r12
 * 000000014027A04B: cmp     rdx, rax
 * 000000014027A04E: jnz     loc_14027A187
 * 000000014027A054: add     r10d, edi
 * 000000014027A057: jnz     short loc_14027A03F
 * 000000014027A059: mov     rdi, [rbp+1A50h+var_1908]
 * 000000014027A060: mov     [rbp+1A50h+var_1A10], rdi
 * 000000014027A064: mov     r14d, r12d
 * 000000014027A067: mov     eax, [r11+0Ch]
 * 000000014027A06B: mov     ecx, 80000000h
 * 000000014027A070: test    [r11+24h], ecx
 * 000000014027A074: mov     ecx, [r11+8]
 * 000000014027A078: cmovnz  r14d, r12d
 * 000000014027A07C: cmp     [r11+10h], ecx
 * 000000014027A080: cmova   ecx, [r11+10h]
 * 000000014027A085: lea     r9d, [rcx+rax]
 * 000000014027A089: test    r14d, r14d
 * 000000014027A08C: jnz     loc_14027A197
 * 000000014027A092: lea     r14, [rdi+rax]
 * 000000014027A096: sub     r9d, eax
 * 000000014027A099: mov     ecx, r9d
 * 000000014027A09C: mov     r15d, ebx
 * 000000014027A09F: add     rcx, r14
 * 000000014027A0A2: mov     r10, r14
 * 000000014027A0A5: mov     rax, r14
 * 000000014027A0A8: cmp     r14, rcx
 * 000000014027A0AB: jnb     short loc_14027A0B9
 * 000000014027A0AD: prefetchnta byte ptr [rax]
 * 000000014027A0B0: add     rax, 40h ; '@'
 * 000000014027A0B4: cmp     rax, rcx
 * 000000014027A0B7: jb      short loc_14027A0AD
 * 000000014027A0B9: mov     r12d, r9d
 * 000000014027A0BC: mov     r8, r13
 * 000000014027A0BF: shr     r12d, 7
 * 000000014027A0C3: test    r12d, r12d
 * 000000014027A0C6: jz      short loc_14027A137
 * 000000014027A0C8: mov     rdi, 7010008004002001h
 * 000000014027A0D2: mov     edx, 8
 * 000000014027A0D7: lea     esi, [rdx-7]
 * 000000014027A0DA: mov     rax, [r10]
 * 000000014027A0DD: mov     ecx, r15d
 * 000000014027A0E0: xor     rax, r8
 * 000000014027A0E3: mov     r8, [r10+8]
 * 000000014027A0E7: rol     rax, cl
 * 000000014027A0EA: add     r10, 10h
 * 000000014027A0EE: xor     r8, rax
 * 000000014027A0F1: rol     r8, cl
 * 000000014027A0F4: sub     rdx, rsi
 * 000000014027A0F7: jnz     short loc_14027A0DA
 * 000000014027A0F9: mov     rcx, r10
 * 000000014027A0FC: sub     rcx, r14
 * 000000014027A0FF: xor     rcx, r13
 * 000000014027A102: mov     rax, rcx
 * 000000014027A105: rol     rax, 11h
 * 000000014027A109: xor     rcx, rax
 * 000000014027A10C: mov     rax, rdi
 * 000000014027A10F: mul     rcx
 * 000000014027A112: xor     eax, edx
 * 000000014027A114: mov     [rbp+1A50h+var_1410], rdx
 * 000000014027A11B: xor     r15d, eax
 * 000000014027A11E: mov     rax, rsi
 * 000000014027A121: and     r15d, 3Fh
 * 000000014027A125: cmovz   r15d, eax
 * 000000014027A129: add     r12d, 0FFFFFFFFh
 * 000000014027A12D: jnz     short loc_14027A0D2
 * 000000014027A12F: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027A133: mov     rdi, [rbp+1A50h+var_1A10]
 * 000000014027A137: and     r9d, 7Fh
 * 000000014027A13B: mov     r12d, 1
 * 000000014027A141: cmp     r9d, 8
 * 000000014027A145: jb      short loc_14027A164
 * 000000014027A147: mov     edx, r9d
 * 000000014027A14A: shr     rdx, 3
 * 000000014027A14E: xor     r8, [r10]
 * 000000014027A151: mov     ecx, r15d
 * 000000014027A154: rol     r8, cl
 * 000000014027A157: add     r10, 8
 * 000000014027A15B: add     r9d, 0FFFFFFF8h
 * 000000014027A15F: sub     rdx, r12
 * 000000014027A162: jnz     short loc_14027A14E
 * 000000014027A164: xor     r14d, r14d
 * 000000014027A167: test    r9d, r9d
 * 000000014027A16A: jz      short loc_14027A182
 * 000000014027A16C: movzx   eax, byte ptr [r10]
 * 000000014027A170: mov     ecx, r15d
 * 000000014027A173: xor     r8, rax
 * 000000014027A176: add     r10, r12
 * 000000014027A179: rol     r8, cl
 * 000000014027A17C: add     r9d, 0FFFFFFFFh
 * 000000014027A180: jnz     short loc_14027A16C
 * 000000014027A182: mov     r13, r8
 * 000000014027A185: jmp     short loc_14027A19A
 * 000000014027A187: mov     rdi, [rbp+1A50h+var_1908]
 * 000000014027A18E: mov     [rbp+1A50h+var_1A10], rdi
 * 000000014027A192: jmp     loc_14027A067
 * 000000014027A197: xor     r14d, r14d
 * 000000014027A19A: add     r11, 28h ; '('
 * 000000014027A19E: cmp     r11, [rbp+1A50h+var_1A30]
 * 000000014027A1A2: jnz     loc_140279EDD
 * 000000014027A1A8: mov     edx, [rbp+1A50h+var_19E4]
 * 000000014027A1AB: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027A1B2: mov     [rbp+1A50h+var_19D0], r13
 * 000000014027A1B9: mov     r13, [rbp+1A50h+var_19C8]
 * 000000014027A1C0: test    edx, edx
 * 000000014027A1C2: jnz     loc_14027A2CF
 * 000000014027A1C8: mov     rax, [rbp+1A50h+var_1A00]
 * 000000014027A1CC: mov     ecx, [rax+94h]
 * 000000014027A1D2: cmp     ecx, 14h
 * 000000014027A1D5: jb      loc_14027A2CF
 * 000000014027A1DB: mov     eax, [rax+90h]
 * 000000014027A1E1: mov     r12d, ecx
 * 000000014027A1E4: mov     rcx, [rbp+1A50h+var_1A10]
 * 000000014027A1E8: add     r12, rcx
 * 000000014027A1EB: add     r12, rax
 * 000000014027A1EE: lea     r14, [rcx+rax]
 * 000000014027A1F2: cmp     r14, r12
 * 000000014027A1F5: jz      loc_14027A2C6
 * 000000014027A1FB: xor     r9d, r9d
 * 000000014027A1FE: cmp     [r14+0Ch], r9d
 * 000000014027A202: jz      loc_14027A2C3
 * 000000014027A208: mov     eax, [r14+10h]
 * 000000014027A20C: test    eax, eax
 * 000000014027A20E: jz      loc_14027A2C3
 * 000000014027A214: mov     r15, [rax+rcx]
 * 000000014027A218: test    r15, r15
 * 000000014027A21B: jz      loc_14027A2A4
 * 000000014027A221: mov     rax, [rsi+2A0h]
 * 000000014027A228: mov     rcx, r15
 * 000000014027A22B: call    KeGuardDispatchICall
 * 000000014027A230: xor     r9d, r9d
 * 000000014027A233: test    eax, eax
 * 000000014027A235: jz      short loc_14027A2A0
 * 000000014027A237: mov     rax, [rsi+200h]
 * 000000014027A23E: lea     r8, [rbp+1A50h+var_168C]
 * 000000014027A245: lea     rdx, [rbp+1A50h+var_1908]
 * 000000014027A24C: mov     rcx, r15
 * 000000014027A24F: call    KeGuardDispatchICall
 * 000000014027A254: xor     r9d, r9d
 * 000000014027A257: lea     r10d, [r9+10h]
 * 000000014027A25B: test    rax, rax
 * 000000014027A25E: jz      short loc_14027A29A
 * 000000014027A260: mov     r15, [rbp+1A50h+var_1A38]
 * 000000014027A264: mov     ecx, r9d
 * 000000014027A267: mov     r8, [rbp+1A50h+var_1908]
 * 000000014027A26E: mov     rax, r15
 * 000000014027A271: mov     rdx, [rax]
 * 000000014027A274: cmp     rdx, r8
 * 000000014027A277: jz      short loc_14027A291
 * 000000014027A279: test    rdx, rdx
 * 000000014027A27C: jz      short loc_14027A28B
 * 000000014027A27E: inc     ecx
 * 000000014027A280: add     rax, 8
 * 000000014027A284: cmp     ecx, r10d
 * 000000014027A287: jb      short loc_14027A271
 * 000000014027A289: jmp     short loc_14027A291
 * 000000014027A28B: mov     eax, ecx
 * 000000014027A28D: mov     [r15+rax*8], r8
 * 000000014027A291: cmp     ecx, r10d
 * 000000014027A294: jz      loc_14027A33F
 * 000000014027A29A: mov     rcx, [rbp+1A50h+var_1A10]
 * 000000014027A29E: jmp     short loc_14027A2AA
 * 000000014027A2A0: mov     rcx, [rbp+1A50h+var_1A10]
 * 000000014027A2A4: mov     r10d, 10h
 * 000000014027A2AA: add     r14, 14h
 * 000000014027A2AE: cmp     r14, r12
 * 000000014027A2B1: jnz     loc_14027A1FE
 * 000000014027A2B7: mov     edx, [rbp+1A50h+var_19E4]
 * 000000014027A2BA: xor     r14d, r14d
 * 000000014027A2BD: lea     r12d, [r14+1]
 * 000000014027A2C1: jmp     short loc_14027A2D5
 * 000000014027A2C3: mov     edx, [rbp+1A50h+var_19E4]
 * 000000014027A2C6: mov     r12d, 1
 * 000000014027A2CC: xor     r14d, r14d
 * 000000014027A2CF: mov     r10d, 10h
 * 000000014027A2D5: mov     rcx, [rbp+1A50h+var_1A40]
 * 000000014027A2D9: add     edx, r12d
 * 000000014027A2DC: mov     rax, [rbp+1A50h+var_19D0]
 * 000000014027A2E3: add     rcx, r12
 * 000000014027A2E6: mov     r15, [rbp+1A50h+var_1A38]
 * 000000014027A2EA: mov     [rbp+1A50h+var_19E4], edx
 * 000000014027A2ED: mov     [rbp+1A50h+var_1A40], rcx
 * 000000014027A2F1: cmp     edx, r10d
 * 000000014027A2F4: jb      loc_140279E79
 * 000000014027A2FA: jmp     short loc_14027A34D
 * 000000014027A2FC: cmp     [rsi+6C0h], r14d
 * 000000014027A303: jnz     short loc_14027A350
 * 000000014027A305: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027A30F: add     rax, rsi
 * 000000014027A312: mov     [rsi+6C8h], rax
 * 000000014027A319: mov     [rsi+6D0h], r14
 * 000000014027A320: mov     qword ptr [rsi+6D8h], 102h
 * 000000014027A32B: mov     qword ptr [rsi+6E0h], 0FFFFFFFFC000007Bh
 * 000000014027A336: mov     [rsi+6C0h], r12d
 * 000000014027A33D: jmp     short loc_14027A350
 * 000000014027A33F: mov     rax, [rbp+1A50h+var_19D0]
 * 000000014027A346: xor     r14d, r14d
 * 000000014027A349: lea     r12d, [r14+1]
 * 000000014027A34D: mov     r13, rax
 * 000000014027A350: cmp     r13, [rsi+728h]
 * 000000014027A357: jz      short loc_14027A35E
 * 000000014027A359: test    r13, r13
 * 000000014027A35C: jnz     short loc_14027A36B
 * 000000014027A35E: mov     rax, 95EA5DE843D5D824h
 * 000000014027A368: xor     r13, rax
 * 000000014027A36B: mov     rax, [rsi+100h]
 * 000000014027A372: mov     rcx, r15
 * 000000014027A375: call    KeGuardDispatchICall
 * 000000014027A37A: mov     rax, [rsi+720h]
 * 000000014027A381: mov     rcx, [rax]
 * 000000014027A384: cmp     r13, rcx
 * 000000014027A387: jz      short loc_14027A3F1
 * 000000014027A389: mov     eax, [rsi+74Ch]
 * 000000014027A38F: test    al, 40h
 * 000000014027A391: jnz     short loc_14027A3F1
 * 000000014027A393: mov     rax, [rsi+720h]
 * 000000014027A39A: mov     rcx, [rax]
 * 000000014027A39D: cmp     [rsi+6C0h], r14d
 * 000000014027A3A4: jnz     short loc_14027A3F1
 * 000000014027A3A6: mov     rax, [rsi+510h]
 * 000000014027A3AD: xor     rcx, r13
 * 000000014027A3B0: mov     [rax+18h], rcx
 * 000000014027A3B4: cmp     [rsi+6C0h], r14d
 * 000000014027A3BB: jnz     short loc_14027A3F1
 * 000000014027A3BD: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027A3C7: add     rax, rsi
 * 000000014027A3CA: mov     [rsi+6C8h], rax
 * 000000014027A3D1: mov     [rsi+6D0h], r14
 * 000000014027A3D8: mov     qword ptr [rsi+6D8h], 102h
 * 000000014027A3E3: mov     [rsi+6E0h], r13
 * 000000014027A3EA: mov     [rsi+6C0h], r12d
 * 000000014027A3F1: mov     r10d, r14d
 * 000000014027A3F4: lea     r15, [rbp+1A50h+var_16C0]
 * 000000014027A3FB: mov     r12d, 2
 * 000000014027A401: jmp     short loc_14027A406
 * 000000014027A403: xor     r14d, r14d
 * 000000014027A406: mov     rax, [r15]
 * 000000014027A409: mov     r9d, r14d
 * 000000014027A40C: mov     r11, [rax]
 * 000000014027A40F: mov     r13d, [rax+10h]
 * 000000014027A413: lea     r8d, [r10+r11]
 * 000000014027A417: add     r8d, eax
 * 000000014027A41A: test    r13d, r13d
 * 000000014027A41D: jz      short loc_14027A445
 * 000000014027A41F: mov     r14, r11
 * 000000014027A422: movsxd  rdx, dword ptr [r14]
 * 000000014027A425: inc     r9d
 * 000000014027A428: mov     rax, rdx
 * 000000014027A42B: lea     r14, [r14+4]
 * 000000014027A42F: sar     rax, 4
 * 000000014027A433: mov     ecx, [rax+r11]
 * 000000014027A437: add     ecx, edx
 * 000000014027A439: xor     r8d, ecx
 * 000000014027A43C: imul    r8d, r9d
 * 000000014027A440: cmp     r9d, r13d
 * 000000014027A443: jb      short loc_14027A422
 * 000000014027A445: lea     r10d, [r10+r8*2]
 * 000000014027A449: sub     r15, 8
 * 000000014027A44D: add     r8d, r8d
 * 000000014027A450: xor     r13d, r13d
 * 000000014027A453: add     r12d, 0FFFFFFFFh
 * 000000014027A457: jnz     short loc_14027A403
 * 000000014027A459: mov     rax, [rsi+518h]
 * 000000014027A460: mov     rbx, [rbp+1A50h+var_19F0]
 * 000000014027A464: mov     ecx, [rax]
 * 000000014027A466: cmp     r10d, ecx
 * 000000014027A469: jz      short loc_14027A4D6
 * 000000014027A46B: test    dword ptr [rsi+748h], 20000h
 * 000000014027A475: jz      short loc_14027A4D6
 * 000000014027A477: mov     eax, ecx
 * 000000014027A479: cmp     [rsi+6C0h], r13d
 * 000000014027A480: jnz     short loc_14027A4D6
 * 000000014027A482: mov     ecx, r8d
 * 000000014027A485: xor     rcx, rax
 * 000000014027A488: mov     rax, [rsi+510h]
 * 000000014027A48F: mov     [rax+18h], rcx
 * 000000014027A493: cmp     [rsi+6C0h], r13d
 * 000000014027A49A: jnz     short loc_14027A4D6
 * 000000014027A49C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027A4A6: add     rax, rsi
 * 000000014027A4A9: mov     [rsi+6C8h], rax
 * 000000014027A4B0: mov     [rsi+6D0h], r13
 * 000000014027A4B7: mov     eax, r8d
 * 000000014027A4BA: mov     qword ptr [rsi+6D8h], 107h
 * 000000014027A4C5: mov     [rsi+6E0h], rax
 * 000000014027A4CC: lea     eax, [r13+1]
 * 000000014027A4D0: mov     [rsi+6C0h], eax
 * 000000014027A4D6: mov     eax, [rsi+718h]
 * 000000014027A4DC: mov     edx, 7
 * 000000014027A4E1: cmp     eax, edx
 * 000000014027A4E3: jl      short loc_14027A4F0
 * 000000014027A4E5: jz      loc_14027B65F
 * 000000014027A4EB: jmp     loc_14027DCDB
 * 000000014027A4F0: mov     r13, [rsi+4F0h]
 * 000000014027A4F7: mov     r9d, 20h ; ' '
 * 000000014027A4FD: mov     r12, [rsi+4F8h]
 * 000000014027A504: add     r13, r9
 * 000000014027A507: add     r12, r9
 * 000000014027A50A: mov     [rbp+1A50h+var_19F0], r13
 * 000000014027A50E: mov     [rbp+1A50h+var_1A38], r12
 * 000000014027A512: lea     ecx, [r9-1Eh]
 * 000000014027A516: cmp     eax, ecx
 * 000000014027A518: jge     loc_14027A7C6
 * 000000014027A51E: mov     r12d, [r13+10h]
 * 000000014027A522: mov     r15, [r13+0]
 * 000000014027A526: mov     r13d, [rsi+5E4h]
 * 000000014027A52D: mov     r8d, [rsi+6ECh]
 * 000000014027A534: shl     r12d, 2
 * 000000014027A538: lea     eax, [r13+30h]
 * 000000014027A53C: cmp     eax, [rsi+7CCh]
 * 000000014027A542: jbe     loc_14027A628
 * 000000014027A548: mov     edx, eax
 * 000000014027A54A: mov     rcx, rsi
 * 000000014027A54D: call    sub_140282ED4
 * 000000014027A552: xor     r10d, r10d
 * 000000014027A555: mov     r14, rax
 * 000000014027A558: test    rax, rax
 * 000000014027A55B: jz      loc_14027B7D5
 * 000000014027A561: mov     edx, [rsi+748h]
 * 000000014027A567: test    dl, 4
 * 000000014027A56A: jnz     loc_14027A61E
 * 000000014027A570: mov     ecx, [rsi+5E4h]
 * 000000014027A576: and     edx, 20000000h
 * 000000014027A57C: mov     r9, [rsi+5C8h]
 * 000000014027A583: neg     edx
 * 000000014027A585: lea     edx, [r10+1]
 * 000000014027A589: sbb     r8d, r8d
 * 000000014027A58C: and     r8d, [rsi+6ECh]
 * 000000014027A593: cmp     ecx, 8
 * 000000014027A596: jb      short loc_14027A5AD
 * 000000014027A598: mov     eax, ecx
 * 000000014027A59A: shr     rax, 3
 * 000000014027A59E: mov     [rsi], r10
 * 000000014027A5A1: add     ecx, 0FFFFFFF8h
 * 000000014027A5A4: add     rsi, 8
 * 000000014027A5A8: sub     rax, rdx
 * 000000014027A5AB: jnz     short loc_14027A59E
 * 000000014027A5AD: test    ecx, ecx
 * 000000014027A5AF: jz      short loc_14027A5BC
 * 000000014027A5B1: mov     [rsi], r10b
 * 000000014027A5B4: add     rsi, rdx
 * 000000014027A5B7: add     ecx, 0FFFFFFFFh
 * 000000014027A5BA: jnz     short loc_14027A5B1
 * 000000014027A5BC: mov     ebx, [r14+6ECh]
 * 000000014027A5C3: mov     eax, 3
 * 000000014027A5C8: mov     [r14+6ECh], r8d
 * 000000014027A5CF: cmp     r8d, eax
 * 000000014027A5D2: jz      short loc_14027A608
 * 000000014027A5D4: test    dword ptr [r14+748h], 10000000h
 * 000000014027A5DF: mov     ecx, r10d
 * 000000014027A5E2: cmovz   ecx, r8d
 * 000000014027A5E6: test    ecx, ecx
 * 000000014027A5E8: jz      short loc_14027A5FF
 * 000000014027A5EA: mov     rax, [r14+228h]
 * 000000014027A5F1: lea     rcx, [r9-8]
 * 000000014027A5F5: mov     rdx, [rcx]
 * 000000014027A5F8: call    KeGuardDispatchICall
 * 000000014027A5FD: jmp     short loc_14027A617
 * 000000014027A5FF: mov     rax, [r14+100h]
 * 000000014027A606: jmp     short loc_14027A60F
 * 000000014027A608: mov     rax, [r14+360h]
 * 000000014027A60F: mov     rcx, r9
 * 000000014027A612: call    KeGuardDispatchICall
 * 000000014027A617: mov     [r14+6ECh], ebx
 * 000000014027A61E: and     dword ptr [r14+748h], 0FFFFFFFBh
 * 000000014027A626: jmp     short loc_14027A631
 * 000000014027A628: mov     r14, rsi
 * 000000014027A62B: mov     [rsi+5E4h], eax
 * 000000014027A631: lea     rbx, [r14+r13]
 * 000000014027A635: mov     r8d, 1
 * 000000014027A63B: add     [r14+60Ch], r8d
 * 000000014027A642: mov     rax, rbx
 * 000000014027A645: mov     [rbp+1A50h+var_1A30], rbx
 * 000000014027A649: xor     r13d, r13d
 * 000000014027A64C: mov     [rbp+1A50h+var_1408], rbx
 * 000000014027A653: lea     ecx, [r8+2Fh]
 * 000000014027A657: lea     edx, [rcx-2Ah]
 * 000000014027A65A: mov     [rax], r13
 * 000000014027A65D: add     ecx, 0FFFFFFF8h
 * 000000014027A660: add     rax, 8
 * 000000014027A664: sub     rdx, r8
 * 000000014027A667: jnz     short loc_14027A65A
 * 000000014027A669: test    ecx, ecx
 * 000000014027A66B: jz      short loc_14027A678
 * 000000014027A66D: mov     [rax], r13b
 * 000000014027A670: add     rax, r8
 * 000000014027A673: add     ecx, 0FFFFFFFFh
 * 000000014027A676: jnz     short loc_14027A66D
 * 000000014027A678: mov     dword ptr [rbx], 0Bh
 * 000000014027A67E: mov     r9, r15
 * 000000014027A681: mov     [rbx+8], r15
 * 000000014027A685: mov     rax, r15
 * 000000014027A688: mov     [rbx+10h], r12d
 * 000000014027A68C: add     [r14+628h], r12d
 * 000000014027A693: mov     r10d, [r14+614h]
 * 000000014027A69A: mov     rsi, [r14+618h]
 * 000000014027A6A1: mov     ecx, r12d
 * 000000014027A6A4: add     rcx, r15
 * 000000014027A6A7: cmp     r15, rcx
 * 000000014027A6AA: jnb     short loc_14027A6B8
 * 000000014027A6AC: prefetchnta byte ptr [rax]
 * 000000014027A6AF: add     rax, 40h ; '@'
 * 000000014027A6B3: cmp     rax, rcx
 * 000000014027A6B6: jb      short loc_14027A6AC
 * 000000014027A6B8: mov     r11d, r12d
 * 000000014027A6BB: mov     r8, rsi
 * 000000014027A6BE: shr     r11d, 7
 * 000000014027A6C2: test    r11d, r11d
 * 000000014027A6C5: jz      short loc_14027A739
 * 000000014027A6C7: mov     rbx, 7010008004002001h
 * 000000014027A6D1: mov     edx, 8
 * 000000014027A6D6: lea     edi, [rdx-7]
 * 000000014027A6D9: mov     rax, [r9]
 * 000000014027A6DC: mov     ecx, r10d
 * 000000014027A6DF: xor     rax, r8
 * 000000014027A6E2: mov     r8, [r9+8]
 * 000000014027A6E6: rol     rax, cl
 * 000000014027A6E9: add     r9, 10h
 * 000000014027A6ED: xor     r8, rax
 * 000000014027A6F0: rol     r8, cl
 * 000000014027A6F3: sub     rdx, rdi
 * 000000014027A6F6: jnz     short loc_14027A6D9
 * 000000014027A6F8: mov     rcx, r9
 * 000000014027A6FB: sub     rcx, r15
 * 000000014027A6FE: xor     rcx, rsi
 * 000000014027A701: mov     rax, rcx
 * 000000014027A704: rol     rax, 11h
 * 000000014027A708: xor     rcx, rax
 * 000000014027A70B: mov     rax, rbx
 * 000000014027A70E: mul     rcx
 * 000000014027A711: xor     eax, edx
 * 000000014027A713: mov     [rbp+1A50h+var_1400], rdx
 * 000000014027A71A: xor     r10d, eax
 * 000000014027A71D: mov     rax, rdi
 * 000000014027A720: and     r10d, 3Fh
 * 000000014027A724: cmovz   r10d, eax
 * 000000014027A728: add     r11d, 0FFFFFFFFh
 * 000000014027A72C: jnz     short loc_14027A6D1
 * 000000014027A72E: mov     rbx, [rbp+1A50h+var_1A30]
 * 000000014027A732: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027A739: mov     edx, r12d
 * 000000014027A73C: mov     esi, 1
 * 000000014027A741: and     edx, 7Fh
 * 000000014027A744: cmp     edx, 8
 * 000000014027A747: jb      short loc_14027A765
 * 000000014027A749: mov     r11d, edx
 * 000000014027A74C: shr     r11, 3
 * 000000014027A750: xor     r8, [r9]
 * 000000014027A753: mov     ecx, r10d
 * 000000014027A756: rol     r8, cl
 * 000000014027A759: add     r9, 8
 * 000000014027A75D: add     edx, 0FFFFFFF8h
 * 000000014027A760: sub     r11, rsi
 * 000000014027A763: jnz     short loc_14027A750
 * 000000014027A765: test    edx, edx
 * 000000014027A767: jz      short loc_14027A77E
 * 000000014027A769: movzx   eax, byte ptr [r9]
 * 000000014027A76D: mov     ecx, r10d
 * 000000014027A770: xor     r8, rax
 * 000000014027A773: add     r9, rsi
 * 000000014027A776: rol     r8, cl
 * 000000014027A779: add     edx, 0FFFFFFFFh
 * 000000014027A77C: jnz     short loc_14027A769
 * 000000014027A77E: mov     rax, r8
 * 000000014027A781: shr     rax, 1Fh
 * 000000014027A785: xor     r10d, r10d
 * 000000014027A788: jmp     short loc_14027A791
 * 000000014027A78A: xor     r8d, eax
 * 000000014027A78D: shr     rax, 1Fh
 * 000000014027A791: test    rax, rax
 * 000000014027A794: jnz     short loc_14027A78A
 * 000000014027A796: mov     r13, [rbp+1A50h+var_19F0]
 * 000000014027A79A: mov     eax, 2
 * 000000014027A79F: btr     r8d, 1Fh
 * 000000014027A7A4: mov     [rbx+14h], r8d
 * 000000014027A7A8: mov     rbx, r14
 * 000000014027A7AB: add     [r14+628h], r12d
 * 000000014027A7B2: mov     r12, [rbp+1A50h+var_1A38]
 * 000000014027A7B6: lea     edx, [rax+5]
 * 000000014027A7B9: lea     r9d, [rax+1Eh]
 * 000000014027A7BD: mov     [r14+718h], eax
 * 000000014027A7C4: jmp     short loc_14027A7C9
 * 000000014027A7C6: xor     r10d, r10d
 * 000000014027A7C9: mov     eax, 3
 * 000000014027A7CE: cmp     [rbx+718h], eax
 * 000000014027A7D4: jge     loc_14027AA03
 * 000000014027A7DA: cmp     [rbx+638h], edx
 * 000000014027A7E0: mov     r14d, r10d
 * 000000014027A7E3: mov     r15d, [rbx+5E4h]
 * 000000014027A7EA: mov     r8d, [rbx+6ECh]
 * 000000014027A7F1: cmovz   r14d, r9d
 * 000000014027A7F5: lea     eax, [r15+30h]
 * 000000014027A7F9: cmp     eax, [rbx+7CCh]
 * 000000014027A7FF: jbe     loc_14027A8EA
 * 000000014027A805: mov     edx, eax
 * 000000014027A807: mov     rcx, rbx
 * 000000014027A80A: call    sub_140282ED4
 * 000000014027A80F: xor     r10d, r10d
 * 000000014027A812: mov     rsi, rax
 * 000000014027A815: test    rax, rax
 * 000000014027A818: jz      loc_14027B7D5
 * 000000014027A81E: mov     edx, [rbx+748h]
 * 000000014027A824: test    dl, 4
 * 000000014027A827: jnz     loc_14027A8DB
 * 000000014027A82D: mov     ecx, [rbx+5E4h]
 * 000000014027A833: and     edx, 20000000h
 * 000000014027A839: mov     r9, [rbx+5C8h]
 * 000000014027A840: neg     edx
 * 000000014027A842: lea     edx, [r10+1]
 * 000000014027A846: sbb     r8d, r8d
 * 000000014027A849: and     r8d, [rbx+6ECh]
 * 000000014027A850: cmp     ecx, 8
 * 000000014027A853: jb      short loc_14027A86A
 * 000000014027A855: mov     eax, ecx
 * 000000014027A857: shr     rax, 3
 * 000000014027A85B: mov     [rbx], r10
 * 000000014027A85E: add     ecx, 0FFFFFFF8h
 * 000000014027A861: add     rbx, 8
 * 000000014027A865: sub     rax, rdx
 * 000000014027A868: jnz     short loc_14027A85B
 * 000000014027A86A: test    ecx, ecx
 * 000000014027A86C: jz      short loc_14027A879
 * 000000014027A86E: mov     [rbx], r10b
 * 000000014027A871: add     rbx, rdx
 * 000000014027A874: add     ecx, 0FFFFFFFFh
 * 000000014027A877: jnz     short loc_14027A86E
 * 000000014027A879: mov     ebx, [rsi+6ECh]
 * 000000014027A87F: mov     eax, 3
 * 000000014027A884: mov     [rsi+6ECh], r8d
 * 000000014027A88B: cmp     r8d, eax
 * 000000014027A88E: jz      short loc_14027A8C3
 * 000000014027A890: test    dword ptr [rsi+748h], 10000000h
 * 000000014027A89A: mov     ecx, r10d
 * 000000014027A89D: cmovz   ecx, r8d
 * 000000014027A8A1: test    ecx, ecx
 * 000000014027A8A3: jz      short loc_14027A8BA
 * 000000014027A8A5: mov     rax, [rsi+228h]
 * 000000014027A8AC: lea     rcx, [r9-8]
 * 000000014027A8B0: mov     rdx, [rcx]
 * 000000014027A8B3: call    KeGuardDispatchICall
 * 000000014027A8B8: jmp     short loc_14027A8D2
 * 000000014027A8BA: mov     rax, [rsi+100h]
 * 000000014027A8C1: jmp     short loc_14027A8CA
 * 000000014027A8C3: mov     rax, [rsi+360h]
 * 000000014027A8CA: mov     rcx, r9
 * 000000014027A8CD: call    KeGuardDispatchICall
 * 000000014027A8D2: mov     [rsi+6ECh], ebx
 * 000000014027A8D8: xor     r10d, r10d
 * 000000014027A8DB: and     dword ptr [rsi+748h], 0FFFFFFFBh
 * 000000014027A8E2: mov     r9d, 20h ; ' '
 * 000000014027A8E8: jmp     short loc_14027A8F3
 * 000000014027A8EA: mov     rsi, rbx
 * 000000014027A8ED: mov     [rbx+5E4h], eax
 * 000000014027A8F3: lea     rbx, [rsi+r15]
 * 000000014027A8F7: mov     r11d, 1
 * 000000014027A8FD: add     [rsi+60Ch], r11d
 * 000000014027A904: mov     rax, rbx
 * 000000014027A907: mov     [rbp+1A50h+var_13F8], rbx
 * 000000014027A90E: mov     r15d, 0FFFFFFF8h
 * 000000014027A914: lea     ecx, [r11+2Fh]
 * 000000014027A918: lea     edx, [rcx-2Ah]
 * 000000014027A91B: mov     [rax], r10
 * 000000014027A91E: add     ecx, r15d
 * 000000014027A921: add     rax, 8
 * 000000014027A925: sub     rdx, r11
 * 000000014027A928: jnz     short loc_14027A91B
 * 000000014027A92A: test    ecx, ecx
 * 000000014027A92C: jz      short loc_14027A939
 * 000000014027A92E: mov     [rax], r10b
 * 000000014027A931: add     rax, r11
 * 000000014027A934: add     ecx, 0FFFFFFFFh
 * 000000014027A937: jnz     short loc_14027A92E
 * 000000014027A939: mov     [rbx], r14d
 * 000000014027A93C: mov     [rbx+8], r13
 * 000000014027A940: cmp     r14d, r9d
 * 000000014027A943: jnz     short loc_14027A964
 * 000000014027A945: lea     r9, [rbx+18h]
 * 000000014027A949: mov     r8d, 20h ; ' '
 * 000000014027A94F: mov     rdx, r13
 * 000000014027A952: mov     rcx, rsi
 * 000000014027A955: call    sub_140175FBC
 * 000000014027A95A: mov     r9d, 20h ; ' '
 * 000000014027A960: lea     r11d, [r9-1Fh]
 * 000000014027A964: mov     [rbx+10h], r9d
 * 000000014027A968: lea     rcx, [r13+20h]
 * 000000014027A96C: add     [rsi+628h], r9d
 * 000000014027A973: mov     r8, r13
 * 000000014027A976: mov     r10d, [rsi+614h]
 * 000000014027A97D: mov     rax, r13
 * 000000014027A980: mov     rdx, [rsi+618h]
 * 000000014027A987: cmp     r13, rcx
 * 000000014027A98A: jnb     short loc_14027A998
 * 000000014027A98C: prefetchnta byte ptr [rax]
 * 000000014027A98F: add     rax, 40h ; '@'
 * 000000014027A993: cmp     rax, rcx
 * 000000014027A996: jb      short loc_14027A98C
 * 000000014027A998: mov     eax, 4
 * 000000014027A99D: xor     rdx, [r8]
 * 000000014027A9A0: mov     ecx, r10d
 * 000000014027A9A3: rol     rdx, cl
 * 000000014027A9A6: add     r8, 8
 * 000000014027A9AA: add     r9d, r15d
 * 000000014027A9AD: sub     rax, r11
 * 000000014027A9B0: jnz     short loc_14027A99D
 * 000000014027A9B2: test    r9d, r9d
 * 000000014027A9B5: jz      short loc_14027A9CD
 * 000000014027A9B7: movzx   eax, byte ptr [r8]
 * 000000014027A9BB: mov     ecx, r10d
 * 000000014027A9BE: xor     rdx, rax
 * 000000014027A9C1: add     r8, r11
 * 000000014027A9C4: rol     rdx, cl
 * 000000014027A9C7: add     r9d, 0FFFFFFFFh
 * 000000014027A9CB: jnz     short loc_14027A9B7
 * 000000014027A9CD: mov     rax, rdx
 * 000000014027A9D0: shr     rax, 1Fh
 * 000000014027A9D4: xor     r10d, r10d
 * 000000014027A9D7: jmp     short loc_14027A9DF
 * 000000014027A9D9: xor     edx, eax
 * 000000014027A9DB: shr     rax, 1Fh
 * 000000014027A9DF: test    rax, rax
 * 000000014027A9E2: jnz     short loc_14027A9D9
 * 000000014027A9E4: btr     edx, 1Fh
 * 000000014027A9E8: lea     r9d, [rax+20h]
 * 000000014027A9EC: mov     [rbx+14h], edx
 * 000000014027A9EF: lea     eax, [r9-1Dh]
 * 000000014027A9F3: add     [rsi+628h], r9d
 * 000000014027A9FA: mov     rbx, rsi
 * 000000014027A9FD: mov     [rsi+718h], eax
 * 000000014027AA03: cmp     dword ptr [rbx+718h], 4
 * 000000014027AA0A: jge     loc_14027AC9F
 * 000000014027AA10: mov     rax, [rbp+1A50h+var_1A38]
 * 000000014027AA14: mov     r14d, [rbx+5E4h]
 * 000000014027AA1B: mov     r12d, [r12+10h]
 * 000000014027AA20: mov     r8d, [rbx+6ECh]
 * 000000014027AA27: mov     r15, [rax]
 * 000000014027AA2A: lea     eax, [r14+30h]
 * 000000014027AA2E: shl     r12d, 2
 * 000000014027AA32: cmp     eax, [rbx+7CCh]
 * 000000014027AA38: jbe     loc_14027AB1D
 * 000000014027AA3E: mov     edx, eax
 * 000000014027AA40: mov     rcx, rbx
 * 000000014027AA43: call    sub_140282ED4
 * 000000014027AA48: xor     r10d, r10d
 * 000000014027AA4B: mov     rsi, rax
 * 000000014027AA4E: test    rax, rax
 * 000000014027AA51: jz      loc_14027B7D5
 * 000000014027AA57: mov     edx, [rbx+748h]
 * 000000014027AA5D: test    dl, 4
 * 000000014027AA60: jnz     loc_14027AB14
 * 000000014027AA66: mov     ecx, [rbx+5E4h]
 * 000000014027AA6C: and     edx, 20000000h
 * 000000014027AA72: mov     r9, [rbx+5C8h]
 * 000000014027AA79: neg     edx
 * 000000014027AA7B: lea     edx, [r10+1]
 * 000000014027AA7F: sbb     r8d, r8d
 * 000000014027AA82: and     r8d, [rbx+6ECh]
 * 000000014027AA89: cmp     ecx, 8
 * 000000014027AA8C: jb      short loc_14027AAA3
 * 000000014027AA8E: mov     eax, ecx
 * 000000014027AA90: shr     rax, 3
 * 000000014027AA94: mov     [rbx], r10
 * 000000014027AA97: add     ecx, 0FFFFFFF8h
 * 000000014027AA9A: add     rbx, 8
 * 000000014027AA9E: sub     rax, rdx
 * 000000014027AAA1: jnz     short loc_14027AA94
 * 000000014027AAA3: test    ecx, ecx
 * 000000014027AAA5: jz      short loc_14027AAB2
 * 000000014027AAA7: mov     [rbx], r10b
 * 000000014027AAAA: add     rbx, rdx
 * 000000014027AAAD: add     ecx, 0FFFFFFFFh
 * 000000014027AAB0: jnz     short loc_14027AAA7
 * 000000014027AAB2: mov     ebx, [rsi+6ECh]
 * 000000014027AAB8: mov     eax, 3
 * 000000014027AABD: mov     [rsi+6ECh], r8d
 * 000000014027AAC4: cmp     r8d, eax
 * 000000014027AAC7: jz      short loc_14027AAFC
 * 000000014027AAC9: test    dword ptr [rsi+748h], 10000000h
 * 000000014027AAD3: mov     ecx, r10d
 * 000000014027AAD6: cmovz   ecx, r8d
 * 000000014027AADA: test    ecx, ecx
 * 000000014027AADC: jz      short loc_14027AAF3
 * 000000014027AADE: mov     rax, [rsi+228h]
 * 000000014027AAE5: lea     rcx, [r9-8]
 * 000000014027AAE9: mov     rdx, [rcx]
 * 000000014027AAEC: call    KeGuardDispatchICall
 * 000000014027AAF1: jmp     short loc_14027AB0B
 * 000000014027AAF3: mov     rax, [rsi+100h]
 * 000000014027AAFA: jmp     short loc_14027AB03
 * 000000014027AAFC: mov     rax, [rsi+360h]
 * 000000014027AB03: mov     rcx, r9
 * 000000014027AB06: call    KeGuardDispatchICall
 * 000000014027AB0B: mov     [rsi+6ECh], ebx
 * 000000014027AB11: xor     r10d, r10d
 * 000000014027AB14: and     dword ptr [rsi+748h], 0FFFFFFFBh
 * 000000014027AB1B: jmp     short loc_14027AB26
 * 000000014027AB1D: mov     rsi, rbx
 * 000000014027AB20: mov     [rbx+5E4h], eax
 * 000000014027AB26: mov     r8d, 1
 * 000000014027AB2C: lea     rbx, [rsi+r14]
 * 000000014027AB30: add     [rsi+60Ch], r8d
 * 000000014027AB37: mov     rax, rbx
 * 000000014027AB3A: mov     [rbp+1A50h+var_13F0], rbx
 * 000000014027AB41: lea     ecx, [r8+2Fh]
 * 000000014027AB45: lea     edx, [rcx-2Ah]
 * 000000014027AB48: mov     [rax], r10
 * 000000014027AB4B: add     ecx, 0FFFFFFF8h
 * 000000014027AB4E: add     rax, 8
 * 000000014027AB52: sub     rdx, r8
 * 000000014027AB55: jnz     short loc_14027AB48
 * 000000014027AB57: test    ecx, ecx
 * 000000014027AB59: jz      short loc_14027AB66
 * 000000014027AB5B: mov     [rax], r10b
 * 000000014027AB5E: add     rax, r8
 * 000000014027AB61: add     ecx, 0FFFFFFFFh
 * 000000014027AB64: jnz     short loc_14027AB5B
 * 000000014027AB66: mov     dword ptr [rbx], 0Bh
 * 000000014027AB6C: mov     r9, r15
 * 000000014027AB6F: mov     [rbx+8], r15
 * 000000014027AB73: mov     rax, r15
 * 000000014027AB76: mov     [rbx+10h], r12d
 * 000000014027AB7A: add     [rsi+628h], r12d
 * 000000014027AB81: mov     r10d, [rsi+614h]
 * 000000014027AB88: mov     r14, [rsi+618h]
 * 000000014027AB8F: mov     ecx, r12d
 * 000000014027AB92: add     rcx, r15
 * 000000014027AB95: cmp     r15, rcx
 * 000000014027AB98: jnb     short loc_14027ABA6
 * 000000014027AB9A: prefetchnta byte ptr [rax]
 * 000000014027AB9D: add     rax, 40h ; '@'
 * 000000014027ABA1: cmp     rax, rcx
 * 000000014027ABA4: jb      short loc_14027AB9A
 * 000000014027ABA6: mov     r11d, r12d
 * 000000014027ABA9: mov     r8, r14
 * 000000014027ABAC: shr     r11d, 7
 * 000000014027ABB0: test    r11d, r11d
 * 000000014027ABB3: jz      short loc_14027AC21
 * 000000014027ABB5: mov     rdi, 7010008004002001h
 * 000000014027ABBF: mov     r13d, 1
 * 000000014027ABC5: mov     eax, 8
 * 000000014027ABCA: xor     r8, [r9]
 * 000000014027ABCD: mov     ecx, r10d
 * 000000014027ABD0: rol     r8, cl
 * 000000014027ABD3: xor     r8, [r9+8]
 * 000000014027ABD7: add     r9, 10h
 * 000000014027ABDB: rol     r8, cl
 * 000000014027ABDE: sub     rax, r13
 * 000000014027ABE1: jnz     short loc_14027ABCA
 * 000000014027ABE3: mov     rcx, r9
 * 000000014027ABE6: sub     rcx, r15
 * 000000014027ABE9: xor     rcx, r14
 * 000000014027ABEC: mov     rax, rcx
 * 000000014027ABEF: rol     rax, 11h
 * 000000014027ABF3: xor     rcx, rax
 * 000000014027ABF6: mov     rax, rdi
 * 000000014027ABF9: mul     rcx
 * 000000014027ABFC: xor     eax, edx
 * 000000014027ABFE: mov     [rbp+1A50h+var_13E8], rdx
 * 000000014027AC05: xor     r10d, eax
 * 000000014027AC08: and     r10d, 3Fh
 * 000000014027AC0C: cmovz   r10d, r13d
 * 000000014027AC10: add     r11d, 0FFFFFFFFh
 * 000000014027AC14: jnz     short loc_14027ABC5
 * 000000014027AC16: mov     r13, [rbp+1A50h+var_19F0]
 * 000000014027AC1A: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027AC21: mov     edx, r12d
 * 000000014027AC24: mov     r11d, 1
 * 000000014027AC2A: and     edx, 7Fh
 * 000000014027AC2D: cmp     edx, 8
 * 000000014027AC30: jb      short loc_14027AC4D
 * 000000014027AC32: mov     eax, edx
 * 000000014027AC34: shr     rax, 3
 * 000000014027AC38: xor     r8, [r9]
 * 000000014027AC3B: mov     ecx, r10d
 * 000000014027AC3E: rol     r8, cl
 * 000000014027AC41: add     r9, 8
 * 000000014027AC45: add     edx, 0FFFFFFF8h
 * 000000014027AC48: sub     rax, r11
 * 000000014027AC4B: jnz     short loc_14027AC38
 * 000000014027AC4D: test    edx, edx
 * 000000014027AC4F: jz      short loc_14027AC66
 * 000000014027AC51: movzx   eax, byte ptr [r9]
 * 000000014027AC55: mov     ecx, r10d
 * 000000014027AC58: xor     r8, rax
 * 000000014027AC5B: add     r9, r11
 * 000000014027AC5E: rol     r8, cl
 * 000000014027AC61: add     edx, 0FFFFFFFFh
 * 000000014027AC64: jnz     short loc_14027AC51
 * 000000014027AC66: mov     rax, r8
 * 000000014027AC69: shr     rax, 1Fh
 * 000000014027AC6D: xor     r10d, r10d
 * 000000014027AC70: jmp     short loc_14027AC79
 * 000000014027AC72: xor     r8d, eax
 * 000000014027AC75: shr     rax, 1Fh
 * 000000014027AC79: test    rax, rax
 * 000000014027AC7C: jnz     short loc_14027AC72
 * 000000014027AC7E: btr     r8d, 1Fh
 * 000000014027AC83: lea     r9d, [rax+20h]
 * 000000014027AC87: mov     [rbx+14h], r8d
 * 000000014027AC8B: mov     rbx, rsi
 * 000000014027AC8E: add     [rsi+628h], r12d
 * 000000014027AC95: mov     dword ptr [rsi+718h], 4
 * 000000014027AC9F: mov     r12d, 5
 * 000000014027ACA5: cmp     [rbx+718h], r12d
 * 000000014027ACAC: jge     loc_14027AEDB
 * 000000014027ACB2: mov     r15d, [rbx+5E4h]
 * 000000014027ACB9: lea     eax, [r12+2]
 * 000000014027ACBE: cmp     [rbx+638h], eax
 * 000000014027ACC4: mov     r14d, r10d
 * 000000014027ACC7: mov     r8d, [rbx+6ECh]
 * 000000014027ACCE: cmovz   r14d, r9d
 * 000000014027ACD2: lea     eax, [r15+30h]
 * 000000014027ACD6: cmp     eax, [rbx+7CCh]
 * 000000014027ACDC: jbe     loc_14027ADC8
 * 000000014027ACE2: mov     edx, eax
 * 000000014027ACE4: mov     rcx, rbx
 * 000000014027ACE7: call    sub_140282ED4
 * 000000014027ACEC: xor     r10d, r10d
 * 000000014027ACEF: mov     rsi, rax
 * 000000014027ACF2: test    rax, rax
 * 000000014027ACF5: jz      loc_14027B7D5
 * 000000014027ACFB: mov     edx, [rbx+748h]
 * 000000014027AD01: test    dl, 4
 * 000000014027AD04: jnz     loc_14027ADB9
 * 000000014027AD0A: mov     ecx, [rbx+5E4h]
 * 000000014027AD10: and     edx, 20000000h
 * 000000014027AD16: mov     r9, [rbx+5C8h]
 * 000000014027AD1D: neg     edx
 * 000000014027AD1F: lea     edx, [r12-4]
 * 000000014027AD24: sbb     r8d, r8d
 * 000000014027AD27: and     r8d, [rbx+6ECh]
 * 000000014027AD2E: cmp     ecx, 8
 * 000000014027AD31: jb      short loc_14027AD48
 * 000000014027AD33: mov     eax, ecx
 * 000000014027AD35: shr     rax, 3
 * 000000014027AD39: mov     [rbx], r10
 * 000000014027AD3C: add     ecx, 0FFFFFFF8h
 * 000000014027AD3F: add     rbx, 8
 * 000000014027AD43: sub     rax, rdx
 * 000000014027AD46: jnz     short loc_14027AD39
 * 000000014027AD48: test    ecx, ecx
 * 000000014027AD4A: jz      short loc_14027AD57
 * 000000014027AD4C: mov     [rbx], r10b
 * 000000014027AD4F: add     rbx, rdx
 * 000000014027AD52: add     ecx, 0FFFFFFFFh
 * 000000014027AD55: jnz     short loc_14027AD4C
 * 000000014027AD57: mov     ebx, [rsi+6ECh]
 * 000000014027AD5D: mov     eax, 3
 * 000000014027AD62: mov     [rsi+6ECh], r8d
 * 000000014027AD69: cmp     r8d, eax
 * 000000014027AD6C: jz      short loc_14027ADA1
 * 000000014027AD6E: test    dword ptr [rsi+748h], 10000000h
 * 000000014027AD78: mov     ecx, r10d
 * 000000014027AD7B: cmovz   ecx, r8d
 * 000000014027AD7F: test    ecx, ecx
 * 000000014027AD81: jz      short loc_14027AD98
 * 000000014027AD83: mov     rax, [rsi+228h]
 * 000000014027AD8A: lea     rcx, [r9-8]
 * 000000014027AD8E: mov     rdx, [rcx]
 * 000000014027AD91: call    KeGuardDispatchICall
 * 000000014027AD96: jmp     short loc_14027ADB0
 * 000000014027AD98: mov     rax, [rsi+100h]
 * 000000014027AD9F: jmp     short loc_14027ADA8
 * 000000014027ADA1: mov     rax, [rsi+360h]
 * 000000014027ADA8: mov     rcx, r9
 * 000000014027ADAB: call    KeGuardDispatchICall
 * 000000014027ADB0: mov     [rsi+6ECh], ebx
 * 000000014027ADB6: xor     r10d, r10d
 * 000000014027ADB9: and     dword ptr [rsi+748h], 0FFFFFFFBh
 * 000000014027ADC0: mov     r9d, 20h ; ' '
 * 000000014027ADC6: jmp     short loc_14027ADD1
 * 000000014027ADC8: mov     rsi, rbx
 * 000000014027ADCB: mov     [rbx+5E4h], eax
 * 000000014027ADD1: mov     r11d, 1
 * 000000014027ADD7: lea     rbx, [rsi+r15]
 * 000000014027ADDB: add     [rsi+60Ch], r11d
 * 000000014027ADE2: mov     rax, rbx
 * 000000014027ADE5: mov     [rbp+1A50h+var_13E0], rbx
 * 000000014027ADEC: lea     ecx, [r11+2Fh]
 * 000000014027ADF0: lea     edx, [rcx-2Ah]
 * 000000014027ADF3: mov     [rax], r10
 * 000000014027ADF6: add     ecx, 0FFFFFFF8h
 * 000000014027ADF9: add     rax, 8
 * 000000014027ADFD: sub     rdx, r11
 * 000000014027AE00: jnz     short loc_14027ADF3
 * 000000014027AE02: test    ecx, ecx
 * 000000014027AE04: jz      short loc_14027AE11
 * 000000014027AE06: mov     [rax], r10b
 * 000000014027AE09: add     rax, r11
 * 000000014027AE0C: add     ecx, 0FFFFFFFFh
 * 000000014027AE0F: jnz     short loc_14027AE06
 * 000000014027AE11: mov     r15, [rbp+1A50h+var_1A38]
 * 000000014027AE15: mov     [rbx], r14d
 * 000000014027AE18: mov     [rbx+8], r15
 * 000000014027AE1C: cmp     r14d, r9d
 * 000000014027AE1F: jnz     short loc_14027AE40
 * 000000014027AE21: lea     r9, [rbx+18h]
 * 000000014027AE25: mov     r8d, 20h ; ' '
 * 000000014027AE2B: mov     rdx, r15
 * 000000014027AE2E: mov     rcx, rsi
 * 000000014027AE31: call    sub_140175FBC
 * 000000014027AE36: mov     r9d, 20h ; ' '
 * 000000014027AE3C: lea     r11d, [r9-1Fh]
 * 000000014027AE40: mov     [rbx+10h], r9d
 * 000000014027AE44: lea     rcx, [r15+20h]
 * 000000014027AE48: add     [rsi+628h], r9d
 * 000000014027AE4F: mov     r8, r15
 * 000000014027AE52: mov     r10d, [rsi+614h]
 * 000000014027AE59: mov     rax, r15
 * 000000014027AE5C: mov     rdx, [rsi+618h]
 * 000000014027AE63: cmp     r15, rcx
 * 000000014027AE66: jnb     short loc_14027AE74
 * 000000014027AE68: prefetchnta byte ptr [rax]
 * 000000014027AE6B: add     rax, 40h ; '@'
 * 000000014027AE6F: cmp     rax, rcx
 * 000000014027AE72: jb      short loc_14027AE68
 * 000000014027AE74: mov     eax, 4
 * 000000014027AE79: xor     rdx, [r8]
 * 000000014027AE7C: mov     ecx, r10d
 * 000000014027AE7F: rol     rdx, cl
 * 000000014027AE82: add     r8, 8
 * 000000014027AE86: add     r9d, 0FFFFFFF8h
 * 000000014027AE8A: sub     rax, r11
 * 000000014027AE8D: jnz     short loc_14027AE79
 * 000000014027AE8F: test    r9d, r9d
 * 000000014027AE92: jz      short loc_14027AEAA
 * 000000014027AE94: movzx   eax, byte ptr [r8]
 * 000000014027AE98: mov     ecx, r10d
 * 000000014027AE9B: xor     rdx, rax
 * 000000014027AE9E: add     r8, r11
 * 000000014027AEA1: rol     rdx, cl
 * 000000014027AEA4: add     r9d, 0FFFFFFFFh
 * 000000014027AEA8: jnz     short loc_14027AE94
 * 000000014027AEAA: mov     rax, rdx
 * 000000014027AEAD: shr     rax, 1Fh
 * 000000014027AEB1: xor     r10d, r10d
 * 000000014027AEB4: jmp     short loc_14027AEBC
 * 000000014027AEB6: xor     edx, eax
 * 000000014027AEB8: shr     rax, 1Fh
 * 000000014027AEBC: test    rax, rax
 * 000000014027AEBF: jnz     short loc_14027AEB6
 * 000000014027AEC1: btr     edx, 1Fh
 * 000000014027AEC5: mov     [rbx+14h], edx
 * 000000014027AEC8: mov     rbx, rsi
 * 000000014027AECB: add     dword ptr [rsi+628h], 20h ; ' '
 * 000000014027AED2: mov     [rsi+718h], r12d
 * 000000014027AED9: jmp     short loc_14027AEE1
 * 000000014027AEDB: mov     r11d, 1
 * 000000014027AEE1: mov     r15d, 6
 * 000000014027AEE7: mov     rsi, rbx
 * 000000014027AEEA: cmp     [rbx+718h], r15d
 * 000000014027AEF1: jge     loc_14027B299
 * 000000014027AEF7: test    dword ptr [rbx+748h], 40000000h
 * 000000014027AF01: mov     r12d, r10d
 * 000000014027AF04: mov     r13, [r13+0]
 * 000000014027AF08: jnz     short loc_14027AF53
 * 000000014027AF0A: mov     r14, [rbp+1A50h+var_19F0]
 * 000000014027AF0E: mov     esi, r10d
 * 000000014027AF11: cmp     [r14+10h], r10d
 * 000000014027AF15: jbe     short loc_14027AF53
 * 000000014027AF17: mov     eax, esi
 * 000000014027AF19: lea     rdx, [rbp+1A50h+var_16F8]
 * 000000014027AF20: xor     r8d, r8d
 * 000000014027AF23: movsxd  rcx, dword ptr [r13+rax*4+0]
 * 000000014027AF28: mov     rax, [rbx+258h]
 * 000000014027AF2F: sar     rcx, 4
 * 000000014027AF33: add     rcx, r13
 * 000000014027AF36: call    KeGuardDispatchICall
 * 000000014027AF3B: xor     r10d, r10d
 * 000000014027AF3E: lea     r11d, [r10+1]
 * 000000014027AF42: test    rax, rax
 * 000000014027AF45: jnz     short loc_14027AF4A
 * 000000014027AF47: add     r12d, r11d
 * 000000014027AF4A: add     esi, r11d
 * 000000014027AF4D: cmp     esi, [r14+10h]
 * 000000014027AF51: jb      short loc_14027AF17
 * 000000014027AF53: mov     rsi, rbx
 * 000000014027AF56: test    r12d, r12d
 * 000000014027AF59: jz      loc_14027B277
 * 000000014027AF5F: mov     r14d, [rbx+5E4h]
 * 000000014027AF66: mov     ecx, r12d
 * 000000014027AF69: mov     r8d, [rbx+6ECh]
 * 000000014027AF70: shl     ecx, 4
 * 000000014027AF73: add     ecx, 30h ; '0'
 * 000000014027AF76: add     ecx, r14d
 * 000000014027AF79: cmp     ecx, [rbx+7CCh]
 * 000000014027AF7F: jbe     loc_14027B07A
 * 000000014027AF85: mov     edx, ecx
 * 000000014027AF87: mov     rcx, rbx
 * 000000014027AF8A: call    sub_140282ED4
 * 000000014027AF8F: xor     r10d, r10d
 * 000000014027AF92: mov     rsi, rax
 * 000000014027AF95: test    rax, rax
 * 000000014027AF98: jz      loc_14027B06A
 * 000000014027AF9E: mov     edx, [rbx+748h]
 * 000000014027AFA4: test    dl, 4
 * 000000014027AFA7: jnz     loc_14027B05B
 * 000000014027AFAD: mov     ecx, [rbx+5E4h]
 * 000000014027AFB3: and     edx, 20000000h
 * 000000014027AFB9: mov     r9, [rbx+5C8h]
 * 000000014027AFC0: neg     edx
 * 000000014027AFC2: lea     edx, [r10+1]
 * 000000014027AFC6: sbb     r8d, r8d
 * 000000014027AFC9: and     r8d, [rbx+6ECh]
 * 000000014027AFD0: cmp     ecx, 8
 * 000000014027AFD3: jb      short loc_14027AFEA
 * 000000014027AFD5: mov     eax, ecx
 * 000000014027AFD7: shr     rax, 3
 * 000000014027AFDB: mov     [rbx], r10
 * 000000014027AFDE: add     ecx, 0FFFFFFF8h
 * 000000014027AFE1: add     rbx, 8
 * 000000014027AFE5: sub     rax, rdx
 * 000000014027AFE8: jnz     short loc_14027AFDB
 * 000000014027AFEA: test    ecx, ecx
 * 000000014027AFEC: jz      short loc_14027AFF9
 * 000000014027AFEE: mov     [rbx], r10b
 * 000000014027AFF1: add     rbx, rdx
 * 000000014027AFF4: add     ecx, 0FFFFFFFFh
 * 000000014027AFF7: jnz     short loc_14027AFEE
 * 000000014027AFF9: mov     ebx, [rsi+6ECh]
 * 000000014027AFFF: mov     eax, 3
 * 000000014027B004: mov     [rsi+6ECh], r8d
 * 000000014027B00B: cmp     r8d, eax
 * 000000014027B00E: jz      short loc_14027B043
 * 000000014027B010: test    dword ptr [rsi+748h], 10000000h
 * 000000014027B01A: mov     ecx, r10d
 * 000000014027B01D: cmovz   ecx, r8d
 * 000000014027B021: test    ecx, ecx
 * 000000014027B023: jz      short loc_14027B03A
 * 000000014027B025: mov     rax, [rsi+228h]
 * 000000014027B02C: lea     rcx, [r9-8]
 * 000000014027B030: mov     rdx, [rcx]
 * 000000014027B033: call    KeGuardDispatchICall
 * 000000014027B038: jmp     short loc_14027B052
 * 000000014027B03A: mov     rax, [rsi+100h]
 * 000000014027B041: jmp     short loc_14027B04A
 * 000000014027B043: mov     rax, [rsi+360h]
 * 000000014027B04A: mov     rcx, r9
 * 000000014027B04D: call    KeGuardDispatchICall
 * 000000014027B052: mov     [rsi+6ECh], ebx
 * 000000014027B058: xor     r10d, r10d
 * 000000014027B05B: and     dword ptr [rsi+748h], 0FFFFFFFBh
 * 000000014027B062: mov     r11d, 1
 * 000000014027B068: jmp     short loc_14027B080
 * 000000014027B06A: mov     eax, 0C000022Dh
 * 000000014027B06F: mov     rsi, rbx
 * 000000014027B072: xor     r13d, r13d
 * 000000014027B075: jmp     loc_14027B27D
 * 000000014027B07A: mov     [rbx+5E4h], ecx
 * 000000014027B080: add     [rsi+60Ch], r11d
 * 000000014027B087: lea     rcx, [rsi+r14]
 * 000000014027B08B: mov     [rbp+1A50h+var_1700], rcx
 * 000000014027B092: mov     rax, rcx
 * 000000014027B095: mov     edx, 30h ; '0'
 * 000000014027B09A: mov     r8, r15
 * 000000014027B09D: mov     [rax], r10
 * 000000014027B0A0: add     edx, 0FFFFFFF8h
 * 000000014027B0A3: add     rax, 8
 * 000000014027B0A7: sub     r8, r11
 * 000000014027B0AA: jnz     short loc_14027B09D
 * 000000014027B0AC: test    edx, edx
 * 000000014027B0AE: jz      short loc_14027B0BB
 * 000000014027B0B0: mov     [rax], r10b
 * 000000014027B0B3: add     rax, r11
 * 000000014027B0B6: add     edx, 0FFFFFFFFh
 * 000000014027B0B9: jnz     short loc_14027B0B0
 * 000000014027B0BB: mov     dword ptr [rcx], 0Ah
 * 000000014027B0C1: mov     [rcx+8], r10
 * 000000014027B0C5: mov     [rcx+10h], r10d
 * 000000014027B0C9: mov     rdx, [rsi+618h]
 * 000000014027B0D0: mov     rax, rdx
 * 000000014027B0D3: jmp     short loc_14027B0D7
 * 000000014027B0D5: xor     edx, eax
 * 000000014027B0D7: shr     rax, 1Fh
 * 000000014027B0DB: test    rax, rax
 * 000000014027B0DE: jnz     short loc_14027B0D5
 * 000000014027B0E0: btr     edx, 1Fh
 * 000000014027B0E4: mov     r15d, r10d
 * 000000014027B0E7: mov     [rcx+14h], edx
 * 000000014027B0EA: mov     rax, [rbp+1A50h+var_1700]
 * 000000014027B0F1: mov     [rbp+1A50h+var_17E8], rax
 * 000000014027B0F8: mov     [rax+18h], r11d
 * 000000014027B0FC: mov     rax, [rbp+1A50h+var_17E8]
 * 000000014027B103: mov     [rax+1Ch], r12d
 * 000000014027B107: mov     rax, [rbp+1A50h+var_19F0]
 * 000000014027B10B: mov     rcx, [rbp+1A50h+var_17E8]
 * 000000014027B112: lea     r14, [rcx+30h]
 * 000000014027B116: cmp     [rax+10h], r10d
 * 000000014027B11A: jbe     loc_14027B1F8
 * 000000014027B120: mov     eax, r15d
 * 000000014027B123: lea     rdx, [rbp+1A50h+var_16F8]
 * 000000014027B12A: xor     r8d, r8d
 * 000000014027B12D: movsxd  rbx, dword ptr [r13+rax*4+0]
 * 000000014027B132: mov     rax, [rsi+258h]
 * 000000014027B139: sar     rbx, 4
 * 000000014027B13D: add     rbx, r13
 * 000000014027B140: mov     rcx, rbx
 * 000000014027B143: call    KeGuardDispatchICall
 * 000000014027B148: test    rax, rax
 * 000000014027B14B: jnz     loc_14027B1DA
 * 000000014027B151: lea     r11d, [rax+4]
 * 000000014027B155: mov     r8, rbx
 * 000000014027B158: add     [rsi+628h], r11d
 * 000000014027B15F: lea     rcx, [rbx+4]
 * 000000014027B163: mov     r10d, [rsi+614h]
 * 000000014027B16A: mov     rax, rbx
 * 000000014027B16D: mov     rdx, [rsi+618h]
 * 000000014027B174: cmp     rbx, rcx
 * 000000014027B177: jnb     short loc_14027B185
 * 000000014027B179: prefetchnta byte ptr [rax]
 * 000000014027B17C: add     rax, 40h ; '@'
 * 000000014027B180: cmp     rax, rcx
 * 000000014027B183: jb      short loc_14027B179
 * 000000014027B185: mov     r9d, r11d
 * 000000014027B188: mov     edi, 1
 * 000000014027B18D: movzx   eax, byte ptr [r8]
 * 000000014027B191: mov     ecx, r10d
 * 000000014027B194: xor     rdx, rax
 * 000000014027B197: add     r8, rdi
 * 000000014027B19A: rol     rdx, cl
 * 000000014027B19D: add     r9d, 0FFFFFFFFh
 * 000000014027B1A1: jnz     short loc_14027B18D
 * 000000014027B1A3: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027B1AA: mov     rax, rdx
 * 000000014027B1AD: jmp     short loc_14027B1B1
 * 000000014027B1AF: xor     edx, eax
 * 000000014027B1B1: shr     rax, 1Fh
 * 000000014027B1B5: test    rax, rax
 * 000000014027B1B8: jnz     short loc_14027B1AF
 * 000000014027B1BA: xor     edx, [r14]
 * 000000014027B1BD: btr     edx, 1Fh
 * 000000014027B1C1: xor     [r14], edx
 * 000000014027B1C4: mov     [r14+4], r11d
 * 000000014027B1C8: mov     [r14+8], rbx
 * 000000014027B1CC: add     r14, 10h
 * 000000014027B1D0: add     r12d, 0FFFFFFFFh
 * 000000014027B1D4: jz      loc_14027B271
 * 000000014027B1DA: mov     rax, [rbp+1A50h+var_19F0]
 * 000000014027B1DE: mov     r11d, 1
 * 000000014027B1E4: add     r15d, r11d
 * 000000014027B1E7: cmp     r15d, [rax+10h]
 * 000000014027B1EB: jb      loc_14027B120
 * 000000014027B1F1: mov     rcx, [rbp+1A50h+var_17E8]
 * 000000014027B1F8: xor     r13d, r13d
 * 000000014027B1FB: test    r12d, r12d
 * 000000014027B1FE: jz      loc_14027B291
 * 000000014027B204: cmp     [rsi+6C0h], r13d
 * 000000014027B20B: jnz     short loc_14027B269
 * 000000014027B20D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027B217: add     rax, rsi
 * 000000014027B21A: mov     [rsi+6C8h], rax
 * 000000014027B221: test    rcx, rcx
 * 000000014027B224: jz      short loc_14027B23C
 * 000000014027B226: mov     rax, 0B3B74BDEE4453415h
 * 000000014027B230: add     rax, rcx
 * 000000014027B233: mov     [rsi+6D0h], rax
 * 000000014027B23A: jmp     short loc_14027B243
 * 000000014027B23C: mov     [rsi+6D0h], r13
 * 000000014027B243: test    rcx, rcx
 * 000000014027B246: jz      short loc_14027B254
 * 000000014027B248: movsxd  rax, dword ptr [rcx]
 * 000000014027B24B: mov     [rsi+6D8h], rax
 * 000000014027B252: jmp     short loc_14027B25B
 * 000000014027B254: mov     [rsi+6D8h], r13
 * 000000014027B25B: mov     [rsi+6E0h], r13
 * 000000014027B262: mov     [rsi+6C0h], r11d
 * 000000014027B269: mov     rbx, rsi
 * 000000014027B26C: jmp     loc_14027B7D8
 * 000000014027B271: mov     r15d, 6
 * 000000014027B277: xor     r13d, r13d
 * 000000014027B27A: mov     eax, r13d
 * 000000014027B27D: mov     rbx, rsi
 * 000000014027B280: test    eax, eax
 * 000000014027B282: js      loc_14027B7D8
 * 000000014027B288: mov     [rsi+718h], r15d
 * 000000014027B28F: jmp     short loc_14027B29C
 * 000000014027B291: mov     r15d, 6
 * 000000014027B297: jmp     short loc_14027B27A
 * 000000014027B299: xor     r13d, r13d
 * 000000014027B29C: mov     eax, 7
 * 000000014027B2A1: cmp     [rsi+718h], eax
 * 000000014027B2A7: jge     loc_14027B651
 * 000000014027B2AD: test    dword ptr [rsi+748h], 40000000h
 * 000000014027B2B7: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027B2BB: mov     rax, [r14]
 * 000000014027B2BE: mov     [rbp+1A50h+var_1A40], rax
 * 000000014027B2C2: jnz     loc_14027B635
 * 000000014027B2C8: xor     r12d, r12d
 * 000000014027B2CB: mov     ebx, r12d
 * 000000014027B2CE: cmp     [r14+10h], r12d
 * 000000014027B2D2: jbe     loc_14027B635
 * 000000014027B2D8: mov     rdi, rax
 * 000000014027B2DB: mov     eax, ebx
 * 000000014027B2DD: lea     rdx, [rbp+1A50h+var_16E8]
 * 000000014027B2E4: xor     r8d, r8d
 * 000000014027B2E7: movsxd  rcx, dword ptr [rdi+rax*4]
 * 000000014027B2EB: mov     rax, [rsi+258h]
 * 000000014027B2F2: sar     rcx, 4
 * 000000014027B2F6: add     rcx, rdi
 * 000000014027B2F9: call    KeGuardDispatchICall
 * 000000014027B2FE: mov     r9d, 1
 * 000000014027B304: test    rax, rax
 * 000000014027B307: jnz     short loc_14027B30C
 * 000000014027B309: add     r13d, r9d
 * 000000014027B30C: add     ebx, r9d
 * 000000014027B30F: cmp     ebx, [r14+10h]
 * 000000014027B313: jb      short loc_14027B2DB
 * 000000014027B315: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027B31C: test    r13d, r13d
 * 000000014027B31F: jz      loc_14027B635
 * 000000014027B325: mov     r14d, [rsi+5E4h]
 * 000000014027B32C: mov     ecx, r13d
 * 000000014027B32F: mov     r8d, [rsi+6ECh]
 * 000000014027B336: shl     ecx, 4
 * 000000014027B339: add     ecx, 30h ; '0'
 * 000000014027B33C: add     ecx, r14d
 * 000000014027B33F: cmp     ecx, [rsi+7CCh]
 * 000000014027B345: jbe     loc_14027B438
 * 000000014027B34B: mov     edx, ecx
 * 000000014027B34D: mov     rcx, rsi
 * 000000014027B350: call    sub_140282ED4
 * 000000014027B355: mov     rbx, rax
 * 000000014027B358: test    rax, rax
 * 000000014027B35B: jz      loc_14027B42B
 * 000000014027B361: mov     edx, [rsi+748h]
 * 000000014027B367: test    dl, 4
 * 000000014027B36A: jnz     loc_14027B41C
 * 000000014027B370: mov     ecx, [rsi+5E4h]
 * 000000014027B376: and     edx, 20000000h
 * 000000014027B37C: mov     r9, [rsi+5C8h]
 * 000000014027B383: neg     edx
 * 000000014027B385: mov     edx, 1
 * 000000014027B38A: sbb     r8d, r8d
 * 000000014027B38D: and     r8d, [rsi+6ECh]
 * 000000014027B394: cmp     ecx, 8
 * 000000014027B397: jb      short loc_14027B3AE
 * 000000014027B399: mov     eax, ecx
 * 000000014027B39B: shr     rax, 3
 * 000000014027B39F: mov     [rsi], r12
 * 000000014027B3A2: add     ecx, 0FFFFFFF8h
 * 000000014027B3A5: add     rsi, 8
 * 000000014027B3A9: sub     rax, rdx
 * 000000014027B3AC: jnz     short loc_14027B39F
 * 000000014027B3AE: test    ecx, ecx
 * 000000014027B3B0: jz      short loc_14027B3BD
 * 000000014027B3B2: mov     [rsi], r12b
 * 000000014027B3B5: add     rsi, rdx
 * 000000014027B3B8: add     ecx, 0FFFFFFFFh
 * 000000014027B3BB: jnz     short loc_14027B3B2
 * 000000014027B3BD: mov     esi, [rbx+6ECh]
 * 000000014027B3C3: mov     eax, 3
 * 000000014027B3C8: mov     [rbx+6ECh], r8d
 * 000000014027B3CF: cmp     r8d, eax
 * 000000014027B3D2: jz      short loc_14027B407
 * 000000014027B3D4: test    dword ptr [rbx+748h], 10000000h
 * 000000014027B3DE: mov     ecx, r12d
 * 000000014027B3E1: cmovz   ecx, r8d
 * 000000014027B3E5: test    ecx, ecx
 * 000000014027B3E7: jz      short loc_14027B3FE
 * 000000014027B3E9: mov     rax, [rbx+228h]
 * 000000014027B3F0: lea     rcx, [r9-8]
 * 000000014027B3F4: mov     rdx, [rcx]
 * 000000014027B3F7: call    KeGuardDispatchICall
 * 000000014027B3FC: jmp     short loc_14027B416
 * 000000014027B3FE: mov     rax, [rbx+100h]
 * 000000014027B405: jmp     short loc_14027B40E
 * 000000014027B407: mov     rax, [rbx+360h]
 * 000000014027B40E: mov     rcx, r9
 * 000000014027B411: call    KeGuardDispatchICall
 * 000000014027B416: mov     [rbx+6ECh], esi
 * 000000014027B41C: and     dword ptr [rbx+748h], 0FFFFFFFBh
 * 000000014027B423: mov     r9d, 1
 * 000000014027B429: jmp     short loc_14027B441
 * 000000014027B42B: mov     eax, 0C000022Dh
 * 000000014027B430: xor     r13d, r13d
 * 000000014027B433: jmp     loc_14027B63B
 * 000000014027B438: mov     rbx, rsi
 * 000000014027B43B: mov     [rsi+5E4h], ecx
 * 000000014027B441: add     [rbx+60Ch], r9d
 * 000000014027B448: lea     rcx, [rbx+r14]
 * 000000014027B44C: mov     [rbp+1A50h+var_16F0], rcx
 * 000000014027B453: mov     rax, rcx
 * 000000014027B456: mov     edx, 30h ; '0'
 * 000000014027B45B: mov     r8, r15
 * 000000014027B45E: mov     [rax], r12
 * 000000014027B461: add     edx, 0FFFFFFF8h
 * 000000014027B464: add     rax, 8
 * 000000014027B468: sub     r8, r9
 * 000000014027B46B: jnz     short loc_14027B45E
 * 000000014027B46D: test    edx, edx
 * 000000014027B46F: jz      short loc_14027B47C
 * 000000014027B471: mov     [rax], r12b
 * 000000014027B474: add     rax, r9
 * 000000014027B477: add     edx, 0FFFFFFFFh
 * 000000014027B47A: jnz     short loc_14027B471
 * 000000014027B47C: mov     dword ptr [rcx], 0Ah
 * 000000014027B482: mov     [rcx+8], r12
 * 000000014027B486: mov     [rcx+10h], r12d
 * 000000014027B48A: mov     rdx, [rbx+618h]
 * 000000014027B491: mov     rax, rdx
 * 000000014027B494: jmp     short loc_14027B498
 * 000000014027B496: xor     edx, eax
 * 000000014027B498: shr     rax, 1Fh
 * 000000014027B49C: test    rax, rax
 * 000000014027B49F: jnz     short loc_14027B496
 * 000000014027B4A1: btr     edx, 1Fh
 * 000000014027B4A5: mov     rsi, rbx
 * 000000014027B4A8: mov     [rcx+14h], edx
 * 000000014027B4AB: xor     edx, edx
 * 000000014027B4AD: mov     rax, [rbp+1A50h+var_16F0]
 * 000000014027B4B4: mov     [rbp+1A50h+var_1830], rax
 * 000000014027B4BB: mov     [rax+18h], r9d
 * 000000014027B4BF: mov     rax, [rbp+1A50h+var_1830]
 * 000000014027B4C6: mov     [rax+1Ch], r13d
 * 000000014027B4CA: mov     rax, [rbp+1A50h+var_1A38]
 * 000000014027B4CE: mov     rcx, [rbp+1A50h+var_1830]
 * 000000014027B4D5: lea     r15, [rcx+30h]
 * 000000014027B4D9: cmp     [rax+10h], edx
 * 000000014027B4DC: jbe     loc_14027B5BF
 * 000000014027B4E2: mov     rcx, [rbp+1A50h+var_1A40]
 * 000000014027B4E6: lea     rdx, [rbp+1A50h+var_16E8]
 * 000000014027B4ED: mov     eax, r12d
 * 000000014027B4F0: xor     r8d, r8d
 * 000000014027B4F3: movsxd  r14, dword ptr [rcx+rax*4]
 * 000000014027B4F7: mov     rax, [rbx+258h]
 * 000000014027B4FE: sar     r14, 4
 * 000000014027B502: add     r14, rcx
 * 000000014027B505: mov     rcx, r14
 * 000000014027B508: call    KeGuardDispatchICall
 * 000000014027B50D: test    rax, rax
 * 000000014027B510: jnz     loc_14027B5A1
 * 000000014027B516: lea     r11d, [rax+4]
 * 000000014027B51A: mov     r8, r14
 * 000000014027B51D: add     [rbx+628h], r11d
 * 000000014027B524: lea     rcx, [r14+4]
 * 000000014027B528: mov     r10d, [rbx+614h]
 * 000000014027B52F: mov     rax, r14
 * 000000014027B532: mov     rdx, [rbx+618h]
 * 000000014027B539: cmp     r14, rcx
 * 000000014027B53C: jnb     short loc_14027B54A
 * 000000014027B53E: prefetchnta byte ptr [rax]
 * 000000014027B541: add     rax, 40h ; '@'
 * 000000014027B545: cmp     rax, rcx
 * 000000014027B548: jb      short loc_14027B53E
 * 000000014027B54A: mov     r9d, r11d
 * 000000014027B54D: mov     edi, 1
 * 000000014027B552: movzx   eax, byte ptr [r8]
 * 000000014027B556: mov     ecx, r10d
 * 000000014027B559: xor     rdx, rax
 * 000000014027B55C: add     r8, rdi
 * 000000014027B55F: rol     rdx, cl
 * 000000014027B562: add     r9d, 0FFFFFFFFh
 * 000000014027B566: jnz     short loc_14027B552
 * 000000014027B568: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027B56F: mov     rax, rdx
 * 000000014027B572: jmp     short loc_14027B576
 * 000000014027B574: xor     edx, eax
 * 000000014027B576: shr     rax, 1Fh
 * 000000014027B57A: test    rax, rax
 * 000000014027B57D: jnz     short loc_14027B574
 * 000000014027B57F: mov     eax, [r15]
 * 000000014027B582: xor     eax, edx
 * 000000014027B584: btr     eax, 1Fh
 * 000000014027B588: xor     [r15], eax
 * 000000014027B58B: mov     [r15+4], r11d
 * 000000014027B58F: mov     [r15+8], r14
 * 000000014027B593: add     r15, 10h
 * 000000014027B597: add     r13d, 0FFFFFFFFh
 * 000000014027B59B: jz      loc_14027B635
 * 000000014027B5A1: mov     rax, [rbp+1A50h+var_1A38]
 * 000000014027B5A5: mov     r9d, 1
 * 000000014027B5AB: add     r12d, r9d
 * 000000014027B5AE: cmp     r12d, [rax+10h]
 * 000000014027B5B2: jb      loc_14027B4E2
 * 000000014027B5B8: mov     rcx, [rbp+1A50h+var_1830]
 * 000000014027B5BF: test    r13d, r13d
 * 000000014027B5C2: jz      short loc_14027B635
 * 000000014027B5C4: xor     r13d, r13d
 * 000000014027B5C7: cmp     [rbx+6C0h], r13d
 * 000000014027B5CE: jnz     loc_14027B7D8
 * 000000014027B5D4: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027B5DE: add     rax, rbx
 * 000000014027B5E1: mov     [rbx+6C8h], rax
 * 000000014027B5E8: test    rcx, rcx
 * 000000014027B5EB: jz      short loc_14027B603
 * 000000014027B5ED: mov     rax, 0B3B74BDEE4453415h
 * 000000014027B5F7: add     rax, rcx
 * 000000014027B5FA: mov     [rbx+6D0h], rax
 * 000000014027B601: jmp     short loc_14027B60A
 * 000000014027B603: mov     [rbx+6D0h], r13
 * 000000014027B60A: test    rcx, rcx
 * 000000014027B60D: jz      short loc_14027B61B
 * 000000014027B60F: movsxd  rax, dword ptr [rcx]
 * 000000014027B612: mov     [rbx+6D8h], rax
 * 000000014027B619: jmp     short loc_14027B622
 * 000000014027B61B: mov     [rbx+6D8h], r13
 * 000000014027B622: mov     [rbx+6E0h], r13
 * 000000014027B629: mov     [rbx+6C0h], r9d
 * 000000014027B630: jmp     loc_14027B7D8
 * 000000014027B635: xor     r13d, r13d
 * 000000014027B638: mov     eax, r13d
 * 000000014027B63B: mov     rbx, rsi
 * 000000014027B63E: test    eax, eax
 * 000000014027B640: js      loc_14027B7D8
 * 000000014027B646: mov     eax, 7
 * 000000014027B64B: mov     [rsi+718h], eax
 * 000000014027B651: mov     eax, r13d
 * 000000014027B654: mov     rsi, rbx
 * 000000014027B657: test    eax, eax
 * 000000014027B659: js      loc_14027DCE5
 * 000000014027B65F: mov     rax, [rbx+4F0h]
 * 000000014027B666: lea     r8, [rbp+1A50h+var_17B0]
 * 000000014027B66D: lea     rdx, [rbp+1A50h+var_1858]
 * 000000014027B674: mov     [rbp+1A50h+var_1A20], rbx
 * 000000014027B678: mov     rsi, rbx
 * 000000014027B67B: mov     [rbp+1A50h+var_1968], rbx
 * 000000014027B682: mov     rcx, [rax+20h]
 * 000000014027B686: mov     rax, [rbx+200h]
 * 000000014027B68D: mov     [rbp+1A50h+var_1A40], rcx
 * 000000014027B691: call    KeGuardDispatchICall
 * 000000014027B696: mov     [rbp+1A50h+var_19C8], rax
 * 000000014027B69D: mov     r15, rax
 * 000000014027B6A0: test    rax, rax
 * 000000014027B6A3: jz      loc_14027DCE5
 * 000000014027B6A9: mov     r12, [rbp+1A50h+var_1858]
 * 000000014027B6B0: lea     rax, [rbp+1A50h+var_18A0]
 * 000000014027B6B7: mov     r13d, [rbp+1A50h+var_17B0]
 * 000000014027B6BE: xor     r8d, r8d
 * 000000014027B6C1: mov     dword ptr [rbp+1A50h+var_1A28], r13d
 * 000000014027B6C5: mov     [rbp+1A50h+var_1A00], r12
 * 000000014027B6C9: mov     [rbp+1A50h+var_18A8], r8
 * 000000014027B6D0: lea     ecx, [r8+4]
 * 000000014027B6D4: lea     r9d, [r8+1]
 * 000000014027B6D8: mov     [rax], r8b
 * 000000014027B6DB: add     rax, r9
 * 000000014027B6DE: add     ecx, 0FFFFFFFFh
 * 000000014027B6E1: jnz     short loc_14027B6D8
 * 000000014027B6E3: mov     r14d, r8d
 * 000000014027B6E6: cmp     [rbx+60Ch], r8d
 * 000000014027B6ED: jbe     loc_14027B8E2
 * 000000014027B6F3: mov     ecx, [rbp+1A50h+var_18A0]
 * 000000014027B6F9: mov     edx, dword ptr [rbp+1A50h+var_18A8+4]
 * 000000014027B6FF: mov     r10d, dword ptr [rbp+1A50h+var_18A8]
 * 000000014027B706: mov     rax, [rbx+7E8h]
 * 000000014027B70D: mov     r9d, r8d
 * 000000014027B710: test    rax, rax
 * 000000014027B713: mov     r11, rbx
 * 000000014027B716: cmovnz  r11, rax
 * 000000014027B71A: mov     [rbp+1A50h+var_1A30], r11
 * 000000014027B71E: mov     r8d, [r11+608h]
 * 000000014027B725: add     r8, r11
 * 000000014027B728: test    r10d, r10d
 * 000000014027B72B: jz      short loc_14027B73B
 * 000000014027B72D: cmp     edx, r14d
 * 000000014027B730: ja      short loc_14027B73B
 * 000000014027B732: mov     r8d, ecx
 * 000000014027B735: mov     r9d, edx
 * 000000014027B738: add     r8, r11
 * 000000014027B73B: cmp     r9d, r14d
 * 000000014027B73E: jz      loc_14027B87C
 * 000000014027B744: mov     edi, 1
 * 000000014027B749: mov     eax, r14d
 * 000000014027B74C: sub     eax, r9d
 * 000000014027B74F: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014027B759: mov     r10d, eax
 * 000000014027B75C: add     r9d, eax
 * 000000014027B75F: lea     esi, [rdi+6]
 * 000000014027B762: lea     r12d, [rdi+1]
 * 000000014027B766: lea     r15d, [rdi+2]
 * 000000014027B76A: lea     r13d, [rdi+0Bh]
 * 000000014027B76E: mov     eax, [r8]
 * 000000014027B771: cmp     eax, edi
 * 000000014027B773: jz      loc_14027B83D
 * 000000014027B779: cmp     eax, esi
 * 000000014027B77B: jz      loc_14027B82E
 * 000000014027B781: cmp     eax, 8
 * 000000014027B784: jz      loc_14027B821
 * 000000014027B78A: cmp     eax, 0Ah
 * 000000014027B78D: jz      loc_14027B815
 * 000000014027B793: cmp     eax, r13d
 * 000000014027B796: jz      loc_14027B83D
 * 000000014027B79C: cmp     eax, 1Ch
 * 000000014027B79F: jz      short loc_14027B80E
 * 000000014027B7A1: cmp     eax, 1Eh
 * 000000014027B7A4: jz      short loc_14027B7E9
 * 000000014027B7A6: add     eax, 0FFFFFFDFh
 * 000000014027B7A9: cmp     eax, edi
 * 000000014027B7AB: ja      short loc_14027B7E2
 * 000000014027B7AD: mov     ecx, [r8+20h]
 * 000000014027B7B1: mov     edx, [r8+28h]
 * 000000014027B7B5: and     ecx, 0FFFh
 * 000000014027B7BB: add     rdx, 0FFFh
 * 000000014027B7C2: add     rdx, rcx
 * 000000014027B7C5: shr     rdx, 0Ch
 * 000000014027B7C9: lea     eax, [rdx+rdx*4]
 * 000000014027B7CC: lea     eax, ds:30h[rax*4]
 * 000000014027B7D3: jmp     short loc_14027B852
 * 000000014027B7D5: xor     r13d, r13d
 * 000000014027B7D8: mov     eax, 0C000022Dh
 * 000000014027B7DD: jmp     loc_14027B654
 * 000000014027B7E2: mov     eax, 30h ; '0'
 * 000000014027B7E7: jmp     short loc_14027B852
 * 000000014027B7E9: mov     ecx, [r8+24h]
 * 000000014027B7ED: mov     rax, r11
 * 000000014027B7F0: sub     ecx, edi
 * 000000014027B7F2: mul     rcx
 * 000000014027B7F5: movzx   eax, word ptr [r8+28h]
 * 000000014027B7FA: shr     rdx, 3
 * 000000014027B7FE: add     edx, esi
 * 000000014027B800: and     edx, 0FFFFFFF8h
 * 000000014027B803: add     eax, r12d
 * 000000014027B806: lea     eax, [rax+rax*2]
 * 000000014027B809: lea     eax, [rdx+rax*8]
 * 000000014027B80C: jmp     short loc_14027B852
 * 000000014027B80E: movzx   eax, word ptr [r8+28h]
 * 000000014027B813: jmp     short loc_14027B826
 * 000000014027B815: mov     eax, [r8+1Ch]
 * 000000014027B819: add     eax, r15d
 * 000000014027B81C: shl     eax, 4
 * 000000014027B81F: jmp     short loc_14027B852
 * 000000014027B821: movzx   eax, word ptr [r8+20h]
 * 000000014027B826: add     eax, 37h ; '7'
 * 000000014027B829: and     eax, 0FFFFFFF8h
 * 000000014027B82C: jmp     short loc_14027B852
 * 000000014027B82E: mov     eax, [r8+18h]
 * 000000014027B832: add     eax, r12d
 * 000000014027B835: lea     eax, [rax+rax*2]
 * 000000014027B838: shl     eax, 3
 * 000000014027B83B: jmp     short loc_14027B852
 * 000000014027B83D: mov     ecx, [r8+10h]
 * 000000014027B841: mov     rax, r11
 * 000000014027B844: mul     rcx
 * 000000014027B847: shr     rdx, 3
 * 000000014027B84B: lea     eax, ds:30h[rdx*4]
 * 000000014027B852: add     r8, rax
 * 000000014027B855: sub     r10, rdi
 * 000000014027B858: jnz     loc_14027B76E
 * 000000014027B85E: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027B862: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027B869: mov     r11, [rbp+1A50h+var_1A30]
 * 000000014027B86D: mov     r15, [rbp+1A50h+var_19C8]
 * 000000014027B874: mov     r12, [rbp+1A50h+var_1A00]
 * 000000014027B878: mov     r13d, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027B87C: mov     eax, 1
 * 000000014027B881: mov     edx, r9d
 * 000000014027B884: mov     r10d, eax
 * 000000014027B887: mov     dword ptr [rbp+1A50h+var_18A8], eax
 * 000000014027B88D: mov     ecx, r8d
 * 000000014027B890: mov     dword ptr [rbp+1A50h+var_18A8+4], edx
 * 000000014027B896: sub     ecx, r11d
 * 000000014027B899: mov     r9d, r10d
 * 000000014027B89C: mov     [rbp+1A50h+var_18A0], ecx
 * 000000014027B8A2: mov     eax, [r8]
 * 000000014027B8A5: cmp     eax, r9d
 * 000000014027B8A8: jz      short loc_14027B8AF
 * 000000014027B8AA: cmp     eax, 0Ch
 * 000000014027B8AD: jnz     short loc_14027B8BB
 * 000000014027B8AF: cmp     [r8+8], r15
 * 000000014027B8B3: jnz     short loc_14027B8BB
 * 000000014027B8B5: cmp     [r8+10h], r13d
 * 000000014027B8B9: jz      short loc_14027B8DD
 * 000000014027B8BB: add     eax, 0FFFFFFDFh
 * 000000014027B8BE: cmp     eax, r9d
 * 000000014027B8C1: ja      short loc_14027B8C9
 * 000000014027B8C3: cmp     [r8+20h], r12
 * 000000014027B8C7: jz      short loc_14027B8DD
 * 000000014027B8C9: add     r14d, r9d
 * 000000014027B8CC: cmp     r14d, [rbx+60Ch]
 * 000000014027B8D3: jnb     short loc_14027B8E2
 * 000000014027B8D5: xor     r8d, r8d
 * 000000014027B8D8: jmp     loc_14027B706
 * 000000014027B8DD: xor     r13d, r13d
 * 000000014027B8E0: jmp     short loc_14027B8E8
 * 000000014027B8E2: xor     r13d, r13d
 * 000000014027B8E5: mov     r8d, r13d
 * 000000014027B8E8: test    r8, r8
 * 000000014027B8EB: jz      short loc_14027B8F5
 * 000000014027B8ED: mov     rsi, rbx
 * 000000014027B8F0: jmp     loc_14027DC7F
 * 000000014027B8F5: mov     r13, [rbp+1A50h+var_1A40]
 * 000000014027B8F9: lea     r8, [rbp+1A50h+var_199C]
 * 000000014027B900: mov     rax, [rbx+200h]
 * 000000014027B907: lea     rdx, [rbp+1A50h+var_1950]
 * 000000014027B90E: mov     rcx, r13
 * 000000014027B911: call    KeGuardDispatchICall
 * 000000014027B916: xor     r8d, r8d
 * 000000014027B919: mov     [rbp+1A50h+var_1A48], rax
 * 000000014027B91D: test    rax, rax
 * 000000014027B920: jnz     short loc_14027B937
 * 000000014027B922: mov     [rbp+1A50h+var_19D8], 0C000007Bh
 * 000000014027B929: xor     r13d, r13d
 * 000000014027B92C: mov     r12d, 80000000h
 * 000000014027B932: jmp     loc_14027C57B
 * 000000014027B937: mov     r15, [rbp+1A50h+var_1950]
 * 000000014027B93E: lea     rax, [rbp+1A50h+var_1890]
 * 000000014027B945: mov     r12d, [rbp+1A50h+var_199C]
 * 000000014027B94C: mov     ecx, 4
 * 000000014027B951: mov     dword ptr [rbp+1A50h+var_1A28], r12d
 * 000000014027B955: mov     [rbp+1A50h+var_19C8], r15
 * 000000014027B95C: mov     [rbp+1A50h+var_1898], r8
 * 000000014027B963: lea     r11d, [rcx-3]
 * 000000014027B967: mov     [rax], r8b
 * 000000014027B96A: add     rax, r11
 * 000000014027B96D: add     ecx, 0FFFFFFFFh
 * 000000014027B970: jnz     short loc_14027B967
 * 000000014027B972: mov     r14d, r8d
 * 000000014027B975: cmp     [rbx+60Ch], r8d
 * 000000014027B97C: jbe     loc_14027BB65
 * 000000014027B982: mov     ecx, [rbp+1A50h+var_1890]
 * 000000014027B988: mov     edx, dword ptr [rbp+1A50h+var_1898+4]
 * 000000014027B98E: mov     r10d, dword ptr [rbp+1A50h+var_1898]
 * 000000014027B995: mov     rax, [rbx+7E8h]
 * 000000014027B99C: mov     r9d, r8d
 * 000000014027B99F: test    rax, rax
 * 000000014027B9A2: mov     r11, rbx
 * 000000014027B9A5: cmovnz  r11, rax
 * 000000014027B9A9: mov     [rbp+1A50h+var_1A30], r11
 * 000000014027B9AD: mov     r8d, [r11+608h]
 * 000000014027B9B4: add     r8, r11
 * 000000014027B9B7: test    r10d, r10d
 * 000000014027B9BA: jz      short loc_14027B9CA
 * 000000014027B9BC: cmp     edx, r14d
 * 000000014027B9BF: ja      short loc_14027B9CA
 * 000000014027B9C1: mov     r8d, ecx
 * 000000014027B9C4: mov     r9d, edx
 * 000000014027B9C7: add     r8, r11
 * 000000014027B9CA: cmp     r9d, r14d
 * 000000014027B9CD: jz      loc_14027BAFB
 * 000000014027B9D3: mov     edi, 2
 * 000000014027B9D8: mov     eax, r14d
 * 000000014027B9DB: sub     eax, r9d
 * 000000014027B9DE: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014027B9E8: mov     r10d, eax
 * 000000014027B9EB: add     r9d, eax
 * 000000014027B9EE: lea     esi, [rdi+5]
 * 000000014027B9F1: lea     r13d, [rdi-1]
 * 000000014027B9F5: lea     r15d, [rdi+1]
 * 000000014027B9F9: lea     r12d, [rdi+0Ah]
 * 000000014027B9FD: mov     eax, [r8]
 * 000000014027BA00: cmp     eax, r13d
 * 000000014027BA03: jz      loc_14027BABC
 * 000000014027BA09: cmp     eax, esi
 * 000000014027BA0B: jz      loc_14027BAAE
 * 000000014027BA11: cmp     eax, 8
 * 000000014027BA14: jz      loc_14027BAA1
 * 000000014027BA1A: cmp     eax, 0Ah
 * 000000014027BA1D: jz      short loc_14027BA95
 * 000000014027BA1F: cmp     eax, r12d
 * 000000014027BA22: jz      loc_14027BABC
 * 000000014027BA28: cmp     eax, 1Ch
 * 000000014027BA2B: jz      short loc_14027BA8E
 * 000000014027BA2D: cmp     eax, 1Eh
 * 000000014027BA30: jz      short loc_14027BA69
 * 000000014027BA32: add     eax, 0FFFFFFDFh
 * 000000014027BA35: cmp     eax, r13d
 * 000000014027BA38: ja      short loc_14027BA62
 * 000000014027BA3A: mov     ecx, [r8+20h]
 * 000000014027BA3E: mov     edx, [r8+28h]
 * 000000014027BA42: and     ecx, 0FFFh
 * 000000014027BA48: add     rdx, 0FFFh
 * 000000014027BA4F: add     rdx, rcx
 * 000000014027BA52: shr     rdx, 0Ch
 * 000000014027BA56: lea     eax, [rdx+rdx*4]
 * 000000014027BA59: lea     eax, ds:30h[rax*4]
 * 000000014027BA60: jmp     short loc_14027BAD1
 * 000000014027BA62: mov     eax, 30h ; '0'
 * 000000014027BA67: jmp     short loc_14027BAD1
 * 000000014027BA69: mov     ecx, [r8+24h]
 * 000000014027BA6D: mov     rax, r11
 * 000000014027BA70: sub     ecx, r13d
 * 000000014027BA73: mul     rcx
 * 000000014027BA76: movzx   eax, word ptr [r8+28h]
 * 000000014027BA7B: shr     rdx, 3
 * 000000014027BA7F: add     edx, esi
 * 000000014027BA81: and     edx, 0FFFFFFF8h
 * 000000014027BA84: add     eax, edi
 * 000000014027BA86: lea     eax, [rax+rax*2]
 * 000000014027BA89: lea     eax, [rdx+rax*8]
 * 000000014027BA8C: jmp     short loc_14027BAD1
 * 000000014027BA8E: movzx   eax, word ptr [r8+28h]
 * 000000014027BA93: jmp     short loc_14027BAA6
 * 000000014027BA95: mov     eax, [r8+1Ch]
 * 000000014027BA99: add     eax, r15d
 * 000000014027BA9C: shl     eax, 4
 * 000000014027BA9F: jmp     short loc_14027BAD1
 * 000000014027BAA1: movzx   eax, word ptr [r8+20h]
 * 000000014027BAA6: add     eax, 37h ; '7'
 * 000000014027BAA9: and     eax, 0FFFFFFF8h
 * 000000014027BAAC: jmp     short loc_14027BAD1
 * 000000014027BAAE: mov     eax, [r8+18h]
 * 000000014027BAB2: add     eax, edi
 * 000000014027BAB4: lea     eax, [rax+rax*2]
 * 000000014027BAB7: shl     eax, 3
 * 000000014027BABA: jmp     short loc_14027BAD1
 * 000000014027BABC: mov     ecx, [r8+10h]
 * 000000014027BAC0: mov     rax, r11
 * 000000014027BAC3: mul     rcx
 * 000000014027BAC6: shr     rdx, 3
 * 000000014027BACA: lea     eax, ds:30h[rdx*4]
 * 000000014027BAD1: add     r8, rax
 * 000000014027BAD4: sub     r10, r13
 * 000000014027BAD7: jnz     loc_14027B9FD
 * 000000014027BADD: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027BAE1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027BAE8: mov     r11, [rbp+1A50h+var_1A30]
 * 000000014027BAEC: mov     r15, [rbp+1A50h+var_19C8]
 * 000000014027BAF3: mov     r12d, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027BAF7: mov     r13, [rbp+1A50h+var_1A40]
 * 000000014027BAFB: mov     eax, 1
 * 000000014027BB00: mov     ecx, r8d
 * 000000014027BB03: sub     ecx, r11d
 * 000000014027BB06: mov     dword ptr [rbp+1A50h+var_1898], eax
 * 000000014027BB0C: mov     r10d, eax
 * 000000014027BB0F: mov     [rbp+1A50h+var_1890], ecx
 * 000000014027BB15: mov     edx, r9d
 * 000000014027BB18: mov     r11d, r10d
 * 000000014027BB1B: mov     dword ptr [rbp+1A50h+var_1898+4], edx
 * 000000014027BB21: mov     eax, [r8]
 * 000000014027BB24: cmp     eax, r11d
 * 000000014027BB27: jz      short loc_14027BB34
 * 000000014027BB29: mov     r9d, 0Ch
 * 000000014027BB2F: cmp     eax, r9d
 * 000000014027BB32: jnz     short loc_14027BB44
 * 000000014027BB34: mov     r9, [rbp+1A50h+var_1A48]
 * 000000014027BB38: cmp     [r8+8], r9
 * 000000014027BB3C: jnz     short loc_14027BB44
 * 000000014027BB3E: cmp     [r8+10h], r12d
 * 000000014027BB42: jz      short loc_14027BB65
 * 000000014027BB44: add     eax, 0FFFFFFDFh
 * 000000014027BB47: cmp     eax, r11d
 * 000000014027BB4A: ja      short loc_14027BB52
 * 000000014027BB4C: cmp     [r8+20h], r15
 * 000000014027BB50: jz      short loc_14027BB65
 * 000000014027BB52: add     r14d, r11d
 * 000000014027BB55: xor     r8d, r8d
 * 000000014027BB58: cmp     r14d, [rbx+60Ch]
 * 000000014027BB5F: jb      loc_14027B995
 * 000000014027BB65: mov     [rbp+1A50h+var_17E0], r8
 * 000000014027BB6C: test    r8, r8
 * 000000014027BB6F: jnz     loc_14027DBCF
 * 000000014027BB75: mov     rax, [rbx+2A0h]
 * 000000014027BB7C: mov     rcx, r13
 * 000000014027BB7F: call    KeGuardDispatchICall
 * 000000014027BB84: mov     r14d, [rbp+1A50h+var_199C]
 * 000000014027BB8B: xor     r13d, r13d
 * 000000014027BB8E: mov     [rbp+1A50h+var_1990], r14d
 * 000000014027BB95: test    eax, eax
 * 000000014027BB97: jz      loc_14027DBD2
 * 000000014027BB9D: test    dword ptr [rbx+748h], 40000000h
 * 000000014027BBA7: jz      short loc_14027BBCA
 * 000000014027BBA9: mov     rdx, [rbp+1A50h+var_1950]
 * 000000014027BBB0: lea     r8d, [r13+0Fh]
 * 000000014027BBB4: lea     rcx, [rbp+1A50h+var_1968]
 * 000000014027BBBB: call    sub_1407DCDE8
 * 000000014027BBC0: mov     ecx, eax
 * 000000014027BBC2: mov     [rbp+1A50h+var_19D8], eax
 * 000000014027BBC5: jmp     loc_14027C552
 * 000000014027BBCA: mov     rcx, [rbp+1A50h+var_1950]
 * 000000014027BBD1: mov     rax, [rbx+1F8h]
 * 000000014027BBD8: mov     [rbp+1A50h+var_19D0], rcx
 * 000000014027BBDF: call    KeGuardDispatchICall
 * 000000014027BBE4: mov     [rbp+1A50h+var_1A40], rax
 * 000000014027BBE8: test    rax, rax
 * 000000014027BBEB: jz      loc_14027CDF6
 * 000000014027BBF1: mov     r15d, [rbx+5E4h]
 * 000000014027BBF8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027BC02: mov     r8d, [rbx+6ECh]
 * 000000014027BC09: mov     r12, r14
 * 000000014027BC0C: mul     r14
 * 000000014027BC0F: mov     rax, rdx
 * 000000014027BC12: shr     rax, 3
 * 000000014027BC16: mov     r13d, eax
 * 000000014027BC19: mov     [rbp+1A50h+var_1A30], rax
 * 000000014027BC1D: shl     r13d, 2
 * 000000014027BC21: mov     dword ptr [rbp+1A50h+var_1A28], r13d
 * 000000014027BC25: lea     eax, [r13+30h]
 * 000000014027BC29: add     eax, r15d
 * 000000014027BC2C: cmp     eax, [rbx+7CCh]
 * 000000014027BC32: jbe     loc_14027BD18
 * 000000014027BC38: mov     edx, eax
 * 000000014027BC3A: mov     rcx, rbx
 * 000000014027BC3D: call    sub_140282ED4
 * 000000014027BC42: xor     r10d, r10d
 * 000000014027BC45: mov     r14, rax
 * 000000014027BC48: test    rax, rax
 * 000000014027BC4B: jz      loc_14027D1E4
 * 000000014027BC51: mov     edx, [rbx+748h]
 * 000000014027BC57: test    dl, 4
 * 000000014027BC5A: jnz     loc_14027BD0E
 * 000000014027BC60: mov     ecx, [rbx+5E4h]
 * 000000014027BC66: and     edx, 20000000h
 * 000000014027BC6C: mov     r9, [rbx+5C8h]
 * 000000014027BC73: neg     edx
 * 000000014027BC75: lea     edx, [r10+1]
 * 000000014027BC79: sbb     r8d, r8d
 * 000000014027BC7C: and     r8d, [rbx+6ECh]
 * 000000014027BC83: cmp     ecx, 8
 * 000000014027BC86: jb      short loc_14027BC9D
 * 000000014027BC88: mov     eax, ecx
 * 000000014027BC8A: shr     rax, 3
 * 000000014027BC8E: mov     [rbx], r10
 * 000000014027BC91: add     ecx, 0FFFFFFF8h
 * 000000014027BC94: add     rbx, 8
 * 000000014027BC98: sub     rax, rdx
 * 000000014027BC9B: jnz     short loc_14027BC8E
 * 000000014027BC9D: test    ecx, ecx
 * 000000014027BC9F: jz      short loc_14027BCAC
 * 000000014027BCA1: mov     [rbx], r10b
 * 000000014027BCA4: add     rbx, rdx
 * 000000014027BCA7: add     ecx, 0FFFFFFFFh
 * 000000014027BCAA: jnz     short loc_14027BCA1
 * 000000014027BCAC: mov     ebx, [r14+6ECh]
 * 000000014027BCB3: mov     eax, 3
 * 000000014027BCB8: mov     [r14+6ECh], r8d
 * 000000014027BCBF: cmp     r8d, eax
 * 000000014027BCC2: jz      short loc_14027BCF8
 * 000000014027BCC4: test    dword ptr [r14+748h], 10000000h
 * 000000014027BCCF: mov     ecx, r10d
 * 000000014027BCD2: cmovz   ecx, r8d
 * 000000014027BCD6: test    ecx, ecx
 * 000000014027BCD8: jz      short loc_14027BCEF
 * 000000014027BCDA: mov     rax, [r14+228h]
 * 000000014027BCE1: lea     rcx, [r9-8]
 * 000000014027BCE5: mov     rdx, [rcx]
 * 000000014027BCE8: call    KeGuardDispatchICall
 * 000000014027BCED: jmp     short loc_14027BD07
 * 000000014027BCEF: mov     rax, [r14+100h]
 * 000000014027BCF6: jmp     short loc_14027BCFF
 * 000000014027BCF8: mov     rax, [r14+360h]
 * 000000014027BCFF: mov     rcx, r9
 * 000000014027BD02: call    KeGuardDispatchICall
 * 000000014027BD07: mov     [r14+6ECh], ebx
 * 000000014027BD0E: and     dword ptr [r14+748h], 0FFFFFFFBh
 * 000000014027BD16: jmp     short loc_14027BD21
 * 000000014027BD18: mov     r14, rbx
 * 000000014027BD1B: mov     [rbx+5E4h], eax
 * 000000014027BD21: mov     r9d, 1
 * 000000014027BD27: lea     rbx, [r14+r15]
 * 000000014027BD2B: add     [r14+60Ch], r9d
 * 000000014027BD32: mov     rax, rbx
 * 000000014027BD35: mov     [rbp+1A50h+var_16E0], rbx
 * 000000014027BD3C: xor     r8d, r8d
 * 000000014027BD3F: lea     ecx, [r9+2Fh]
 * 000000014027BD43: lea     edx, [rcx-2Ah]
 * 000000014027BD46: mov     [rax], r8
 * 000000014027BD49: add     ecx, 0FFFFFFF8h
 * 000000014027BD4C: add     rax, 8
 * 000000014027BD50: sub     rdx, r9
 * 000000014027BD53: jnz     short loc_14027BD46
 * 000000014027BD55: test    ecx, ecx
 * 000000014027BD57: jz      short loc_14027BD64
 * 000000014027BD59: mov     [rax], r8b
 * 000000014027BD5C: add     rax, r9
 * 000000014027BD5F: add     ecx, 0FFFFFFFFh
 * 000000014027BD62: jnz     short loc_14027BD59
 * 000000014027BD64: mov     rdx, [rbp+1A50h+var_1A48]
 * 000000014027BD68: mov     eax, 0Ch
 * 000000014027BD6D: mov     [rbx], eax
 * 000000014027BD6F: mov     r15d, r12d
 * 000000014027BD72: mov     [rbx+8], rdx
 * 000000014027BD76: mov     r9, rdx
 * 000000014027BD79: mov     [rbx+10h], r12d
 * 000000014027BD7D: mov     rax, rdx
 * 000000014027BD80: add     [r14+628h], r12d
 * 000000014027BD87: lea     rcx, [rdx+r12]
 * 000000014027BD8B: mov     r10d, [r14+614h]
 * 000000014027BD92: mov     rsi, [r14+618h]
 * 000000014027BD99: cmp     rdx, rcx
 * 000000014027BD9C: jnb     short loc_14027BDAA
 * 000000014027BD9E: prefetchnta byte ptr [rax]
 * 000000014027BDA1: add     rax, 40h ; '@'
 * 000000014027BDA5: cmp     rax, rcx
 * 000000014027BDA8: jb      short loc_14027BD9E
 * 000000014027BDAA: mov     r11d, r15d
 * 000000014027BDAD: xor     r12d, r12d
 * 000000014027BDB0: shr     r11d, 7
 * 000000014027BDB4: mov     r8, rsi
 * 000000014027BDB7: test    r11d, r11d
 * 000000014027BDBA: jz      short loc_14027BE31
 * 000000014027BDBC: mov     r15, rdx
 * 000000014027BDBF: lea     edi, [r12+1]
 * 000000014027BDC4: mov     r13, 7010008004002001h
 * 000000014027BDCE: mov     eax, 8
 * 000000014027BDD3: xor     r8, [r9]
 * 000000014027BDD6: mov     ecx, r10d
 * 000000014027BDD9: rol     r8, cl
 * 000000014027BDDC: xor     r8, [r9+8]
 * 000000014027BDE0: add     r9, 10h
 * 000000014027BDE4: rol     r8, cl
 * 000000014027BDE7: sub     rax, rdi
 * 000000014027BDEA: jnz     short loc_14027BDD3
 * 000000014027BDEC: mov     rcx, r9
 * 000000014027BDEF: sub     rcx, r15
 * 000000014027BDF2: xor     rcx, rsi
 * 000000014027BDF5: mov     rax, rcx
 * 000000014027BDF8: rol     rax, 11h
 * 000000014027BDFC: xor     rcx, rax
 * 000000014027BDFF: mov     rax, r13
 * 000000014027BE02: mul     rcx
 * 000000014027BE05: xor     eax, edx
 * 000000014027BE07: mov     [rbp+1A50h+var_13D8], rdx
 * 000000014027BE0E: xor     r10d, eax
 * 000000014027BE11: and     r10d, 3Fh
 * 000000014027BE15: cmovz   r10d, edi
 * 000000014027BE19: add     r11d, 0FFFFFFFFh
 * 000000014027BE1D: jnz     short loc_14027BDCE
 * 000000014027BE1F: mov     r13d, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027BE23: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027BE2A: mov     r15d, [rbp+1A50h+var_1990]
 * 000000014027BE31: mov     edx, r15d
 * 000000014027BE34: mov     r11d, 1
 * 000000014027BE3A: and     edx, 7Fh
 * 000000014027BE3D: cmp     edx, 8
 * 000000014027BE40: jb      short loc_14027BE5D
 * 000000014027BE42: mov     eax, edx
 * 000000014027BE44: shr     rax, 3
 * 000000014027BE48: xor     r8, [r9]
 * 000000014027BE4B: mov     ecx, r10d
 * 000000014027BE4E: rol     r8, cl
 * 000000014027BE51: add     r9, 8
 * 000000014027BE55: add     edx, 0FFFFFFF8h
 * 000000014027BE58: sub     rax, r11
 * 000000014027BE5B: jnz     short loc_14027BE48
 * 000000014027BE5D: test    edx, edx
 * 000000014027BE5F: jz      short loc_14027BE76
 * 000000014027BE61: movzx   eax, byte ptr [r9]
 * 000000014027BE65: mov     ecx, r10d
 * 000000014027BE68: xor     r8, rax
 * 000000014027BE6B: add     r9, r11
 * 000000014027BE6E: rol     r8, cl
 * 000000014027BE71: add     edx, 0FFFFFFFFh
 * 000000014027BE74: jnz     short loc_14027BE61
 * 000000014027BE76: mov     rax, r8
 * 000000014027BE79: jmp     short loc_14027BE7E
 * 000000014027BE7B: xor     r8d, eax
 * 000000014027BE7E: shr     rax, 1Fh
 * 000000014027BE82: test    rax, rax
 * 000000014027BE85: jnz     short loc_14027BE7B
 * 000000014027BE87: btr     r8d, 1Fh
 * 000000014027BE8C: mov     [rbx+14h], r8d
 * 000000014027BE90: mov     rax, [rbp+1A50h+var_16E0]
 * 000000014027BE97: mov     [rbp+1A50h+var_18E0], rax
 * 000000014027BE9E: add     [r14+628h], r15d
 * 000000014027BEA5: mov     rbx, [rbp+1A50h+var_18E0]
 * 000000014027BEAC: mov     rcx, [r14+4C0h]
 * 000000014027BEB3: mov     rsi, cr8
 * 000000014027BEB7: mov     eax, 0Fh
 * 000000014027BEBC: mov     cr8, rax
 * 000000014027BEC0: mov     rax, [r14+150h]
 * 000000014027BEC7: call    KeGuardDispatchICall
 * 000000014027BECC: mov     rax, [r14+568h]
 * 000000014027BED3: mov     r15, [rbp+1A50h+var_19D0]
 * 000000014027BEDA: mov     rcx, [rax]
 * 000000014027BEDD: mov     eax, [rcx]
 * 000000014027BEDF: lea     rdx, [rcx+10h]
 * 000000014027BEE3: lea     rcx, [rax+rax*2]
 * 000000014027BEE7: lea     rax, [rdx+rcx*8]
 * 000000014027BEEB: cmp     [rdx+8], r15
 * 000000014027BEEF: jz      short loc_14027BEFC
 * 000000014027BEF1: add     rdx, 18h
 * 000000014027BEF5: cmp     rdx, rax
 * 000000014027BEF8: jnb     short loc_14027BF11
 * 000000014027BEFA: jmp     short loc_14027BEEB
 * 000000014027BEFC: movups  xmm0, xmmword ptr [rdx]
 * 000000014027BEFF: mov     [rbp+1A50h+var_1A08], r12d
 * 000000014027BF03: movups  xmmword ptr [rbx+18h], xmm0
 * 000000014027BF07: movsd   xmm1, qword ptr [rdx+10h]
 * 000000014027BF0C: movsd   qword ptr [rbx+28h], xmm1
 * 000000014027BF11: mov     rcx, [r14+4C0h]
 * 000000014027BF18: mov     rax, [r14+190h]
 * 000000014027BF1F: call    KeGuardDispatchICall
 * 000000014027BF24: movzx   eax, sil
 * 000000014027BF28: mov     cr8, rax
 * 000000014027BF2C: mov     r8d, 1
 * 000000014027BF32: cmp     [rbp+1A50h+var_1A08], r12d
 * 000000014027BF36: jge     short loc_14027BF72
 * 000000014027BF38: mov     rax, [rbp+1A50h+var_18E0]
 * 000000014027BF3F: lea     ecx, [r8+17h]
 * 000000014027BF43: add     rax, rcx
 * 000000014027BF46: lea     edx, [rcx-15h]
 * 000000014027BF49: mov     [rax], r12
 * 000000014027BF4C: add     ecx, 0FFFFFFF8h
 * 000000014027BF4F: add     rax, 8
 * 000000014027BF53: sub     rdx, r8
 * 000000014027BF56: jnz     short loc_14027BF49
 * 000000014027BF58: test    ecx, ecx
 * 000000014027BF5A: jz      short loc_14027BF67
 * 000000014027BF5C: mov     [rax], r12b
 * 000000014027BF5F: add     rax, r8
 * 000000014027BF62: add     ecx, 0FFFFFFFFh
 * 000000014027BF65: jnz     short loc_14027BF5C
 * 000000014027BF67: mov     rax, [rbp+1A50h+var_18E0]
 * 000000014027BF6E: mov     [rax+18h], r8
 * 000000014027BF72: mov     rax, [rbp+1A50h+var_18E0]
 * 000000014027BF79: add     rax, 30h ; '0'
 * 000000014027BF7D: mov     [rbp+1A50h+var_19F0], rax
 * 000000014027BF81: cmp     r13d, 8
 * 000000014027BF85: jb      short loc_14027BFA2
 * 000000014027BF87: mov     ecx, r13d
 * 000000014027BF8A: shr     rcx, 3
 * 000000014027BF8E: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 000000014027BF95: add     r13d, 0FFFFFFF8h
 * 000000014027BF99: add     rax, 8
 * 000000014027BF9D: sub     rcx, r8
 * 000000014027BFA0: jnz     short loc_14027BF8E
 * 000000014027BFA2: test    r13d, r13d
 * 000000014027BFA5: jz      short loc_14027BFB3
 * 000000014027BFA7: mov     byte ptr [rax], 0FFh
 * 000000014027BFAA: add     rax, r8
 * 000000014027BFAD: add     r13d, 0FFFFFFFFh
 * 000000014027BFB1: jnz     short loc_14027BFA7
 * 000000014027BFB3: mov     rdx, [rbp+1A50h+var_1A48]
 * 000000014027BFB7: or      ebx, 0FFFFFFFFh
 * 000000014027BFBA: mov     eax, dword ptr [rbp+1A50h+var_1A30]
 * 000000014027BFBD: mov     r12, rdx
 * 000000014027BFC0: mov     [rbp+1A50h+var_1A38], rdx
 * 000000014027BFC4: mov     [rbp+1A50h+var_19F8], ebx
 * 000000014027BFC7: mov     r8d, [rdx]
 * 000000014027BFCA: lea     rcx, [rax+rax*2]
 * 000000014027BFCE: lea     rax, [rdx+rcx*4]
 * 000000014027BFD2: mov     rdx, r15
 * 000000014027BFD5: mov     [rbp+1A50h+var_19C8], rax
 * 000000014027BFDC: xor     eax, eax
 * 000000014027BFDE: test    byte ptr [r14+74Ch], 40h
 * 000000014027BFE6: mov     r13d, eax
 * 000000014027BFE9: mov     esi, eax
 * 000000014027BFEB: mov     [rbp+1A50h+var_19E4], eax
 * 000000014027BFEE: lea     eax, [r13+0Fh]
 * 000000014027BFF2: lea     ecx, [rax-8]
 * 000000014027BFF5: cmovz   eax, ecx
 * 000000014027BFF8: mov     rcx, [rbp+1A50h+var_1A40]
 * 000000014027BFFC: mov     dword ptr [rbp+1A50h+var_1A28], eax
 * 000000014027BFFF: mov     rax, [r14+210h]
 * 000000014027C006: call    KeGuardDispatchICall
 * 000000014027C00B: jmp     loc_14027C534
 * 000000014027C010: mov     eax, [r11+24h]
 * 000000014027C014: mov     r15d, r10d
 * 000000014027C017: bt      eax, 19h
 * 000000014027C01B: jb      loc_14027C197
 * 000000014027C021: mov     ecx, [r11]
 * 000000014027C024: cmp     ecx, 54494E49h
 * 000000014027C02A: jnz     short loc_14027C03A
 * 000000014027C02C: cmp     dword ptr [r11+4], 4742444Bh
 * 000000014027C034: jz      loc_14027C197
 * 000000014027C03A: cmp     ecx, 45474150h
 * 000000014027C040: jnz     short loc_14027C071
 * 000000014027C042: movzx   eax, word ptr [r11+4]
 * 000000014027C047: mov     edx, 7777h
 * 000000014027C04C: cmp     ax, dx
 * 000000014027C04F: jz      loc_14027C197
 * 000000014027C055: mov     edx, 7277h
 * 000000014027C05A: cmp     ax, dx
 * 000000014027C05D: jz      loc_14027C197
 * 000000014027C063: mov     edx, 7877h
 * 000000014027C068: cmp     ax, dx
 * 000000014027C06B: jz      loc_14027C197
 * 000000014027C071: cmp     ecx, 41525245h
 * 000000014027C077: jnz     short loc_14027C089
 * 000000014027C079: mov     eax, 4154h
 * 000000014027C07E: cmp     [r11+4], ax
 * 000000014027C083: jz      loc_14027C197
 * 000000014027C089: mov     rax, [r14+700h]
 * 000000014027C090: mov     r9, r11
 * 000000014027C093: mov     r8, [r14+6F8h]
 * 000000014027C09A: mov     r10d, 7
 * 000000014027C0A0: mov     [rbp+1A50h+var_15C0], rax
 * 000000014027C0A7: sub     r9, r8
 * 000000014027C0AA: mov     rax, [r14+708h]
 * 000000014027C0B1: mov     [rbp+1A50h+var_15B8], rax
 * 000000014027C0B8: mov     rax, [r14+710h]
 * 000000014027C0BF: mov     [rbp+1A50h+var_15B0], rax
 * 000000014027C0C6: mov     [rbp+1A50h+var_15C8], r8
 * 000000014027C0CD: movzx   edx, byte ptr [r8+r9]
 * 000000014027C0D2: movzx   eax, byte ptr [r8]
 * 000000014027C0D6: inc     r8
 * 000000014027C0D9: cmp     rdx, rax
 * 000000014027C0DC: jnz     short loc_14027C0E9
 * 000000014027C0DE: add     r10d, 0FFFFFFFFh
 * 000000014027C0E2: jnz     short loc_14027C0CD
 * 000000014027C0E4: jmp     loc_14027C18C
 * 000000014027C0E9: mov     r9, [rbp+1A50h+var_15C0]
 * 000000014027C0F0: mov     r8d, 8
 * 000000014027C0F6: mov     r10, r11
 * 000000014027C0F9: mov     rcx, [r10]
 * 000000014027C0FC: add     r10, 8
 * 000000014027C100: mov     rax, [r9]
 * 000000014027C103: add     r9, 8
 * 000000014027C107: cmp     rcx, rax
 * 000000014027C10A: jnz     short loc_14027C136
 * 000000014027C10C: add     r8d, 0FFFFFFF8h
 * 000000014027C110: cmp     r8d, 8
 * 000000014027C114: jnb     short loc_14027C0F9
 * 000000014027C116: test    r8d, r8d
 * 000000014027C119: jz      short loc_14027C18C
 * 000000014027C11B: movzx   edx, byte ptr [r10]
 * 000000014027C11F: inc     r10
 * 000000014027C122: movzx   eax, byte ptr [r9]
 * 000000014027C126: inc     r9
 * 000000014027C129: cmp     rdx, rax
 * 000000014027C12C: jnz     short loc_14027C136
 * 000000014027C12E: add     r8d, 0FFFFFFFFh
 * 000000014027C132: jnz     short loc_14027C11B
 * 000000014027C134: jmp     short loc_14027C18C
 * 000000014027C136: mov     r8, [rbp+1A50h+var_15B8]
 * 000000014027C13D: mov     r9, r11
 * 000000014027C140: sub     r9, r8
 * 000000014027C143: mov     r10d, 4
 * 000000014027C149: movzx   edx, byte ptr [r8+r9]
 * 000000014027C14E: movzx   eax, byte ptr [r8]
 * 000000014027C152: inc     r8
 * 000000014027C155: cmp     rdx, rax
 * 000000014027C158: jnz     short loc_14027C162
 * 000000014027C15A: add     r10d, 0FFFFFFFFh
 * 000000014027C15E: jnz     short loc_14027C149
 * 000000014027C160: jmp     short loc_14027C18C
 * 000000014027C162: mov     r8, [rbp+1A50h+var_15B0]
 * 000000014027C169: mov     r9, r11
 * 000000014027C16C: sub     r9, r8
 * 000000014027C16F: mov     r10d, 6
 * 000000014027C175: movzx   edx, byte ptr [r8+r9]
 * 000000014027C17A: movzx   eax, byte ptr [r8]
 * 000000014027C17E: inc     r8
 * 000000014027C181: cmp     rdx, rax
 * 000000014027C184: jnz     short loc_14027C1A2
 * 000000014027C186: add     r10d, 0FFFFFFFFh
 * 000000014027C18A: jnz     short loc_14027C175
 * 000000014027C18C: mov     r8d, 1
 * 000000014027C192: mov     r15d, r8d
 * 000000014027C195: jmp     short loc_14027C1A8
 * 000000014027C197: mov     r8d, 1
 * 000000014027C19D: mov     r15d, r8d
 * 000000014027C1A0: jmp     short loc_14027C1AB
 * 000000014027C1A2: mov     r8d, 1
 * 000000014027C1A8: xor     r10d, r10d
 * 000000014027C1AB: mov     ecx, 80000000h
 * 000000014027C1B0: test    [r11+24h], ecx
 * 000000014027C1B4: cmovnz  r15d, r8d
 * 000000014027C1B8: mov     [rbp+1A50h+var_1A08], r15d
 * 000000014027C1BC: test    r15d, r15d
 * 000000014027C1BF: jz      short loc_14027C1E7
 * 000000014027C1C1: cmp     dword ptr [r11], 54494E49h
 * 000000014027C1C8: jnz     short loc_14027C1E7
 * 000000014027C1CA: cmp     dword ptr [r11+4], 4742444Bh
 * 000000014027C1D2: jnz     short loc_14027C1E7
 * 000000014027C1D4: test    dword ptr [r14+748h], 10000000h
 * 000000014027C1DF: cmovnz  r15d, r10d
 * 000000014027C1E3: mov     [rbp+1A50h+var_1A08], r15d
 * 000000014027C1E7: mov     ecx, [r11+8]
 * 000000014027C1EB: cmp     [r11+10h], ecx
 * 000000014027C1EF: mov     edx, [r11+0Ch]
 * 000000014027C1F3: cmova   ecx, [r11+10h]
 * 000000014027C1F8: mov     r9, [rbp+1A50h+var_19D0]
 * 000000014027C1FF: add     edx, ecx
 * 000000014027C201: mov     [rbp+1A50h+var_19C0], edx
 * 000000014027C207: mov     eax, [r12+8]
 * 000000014027C20C: test    r8b, al
 * 000000014027C20F: jnz     short loc_14027C221
 * 000000014027C211: cmp     eax, ebx
 * 000000014027C213: cmovb   ebx, eax
 * 000000014027C216: cmp     eax, esi
 * 000000014027C218: mov     [rbp+1A50h+var_19F8], ebx
 * 000000014027C21B: cmova   esi, eax
 * 000000014027C21E: mov     [rbp+1A50h+var_19E4], esi
 * 000000014027C221: mov     eax, [r12]
 * 000000014027C225: mov     ebx, [r12+4]
 * 000000014027C22A: sub     ebx, eax
 * 000000014027C22C: lea     rsi, [r9+rax]
 * 000000014027C230: test    r15d, r15d
 * 000000014027C233: jz      short loc_14027C245
 * 000000014027C235: mov     rax, [rbp+1A50h+var_19F0]
 * 000000014027C239: mov     ecx, 80000000h
 * 000000014027C23E: mov     [rax], ecx
 * 000000014027C240: jmp     loc_14027C4D7
 * 000000014027C245: test    byte ptr [rbp+1A50h+var_1A28], 8
 * 000000014027C249: jz      loc_14027C3A9
 * 000000014027C24F: mov     rax, rsi
 * 000000014027C252: mov     edx, ebx
 * 000000014027C254: mov     r11d, 0FFFh
 * 000000014027C25A: lea     rcx, [rbx+0FFFh]
 * 000000014027C261: and     rax, r11
 * 000000014027C264: mov     r9, 0FFFFFFFFFFFFF000h
 * 000000014027C26B: add     rcx, rax
 * 000000014027C26E: and     rcx, r9
 * 000000014027C271: cmp     rcx, 1000h
 * 000000014027C278: jnz     short loc_14027C289
 * 000000014027C27A: mov     rax, rsi
 * 000000014027C27D: and     rax, r9
 * 000000014027C280: cmp     rax, r13
 * 000000014027C283: jz      loc_14027C3A9
 * 000000014027C289: test    ebx, ebx
 * 000000014027C28B: jz      loc_14027C32C
 * 000000014027C291: mov     eax, [r14+74Ch]
 * 000000014027C298: test    al, 40h
 * 000000014027C29A: jz      loc_14027C32C
 * 000000014027C2A0: mov     r12, cr8
 * 000000014027C2A4: mov     eax, 2
 * 000000014027C2A9: mov     cr8, rax
 * 000000014027C2AD: mov     r15, rsi
 * 000000014027C2B0: lea     rax, [rsi-1]
 * 000000014027C2B4: and     r15, r9
 * 000000014027C2B7: add     rax, rdx
 * 000000014027C2BA: or      rax, r11
 * 000000014027C2BD: mov     [rbp+1A50h+var_1A30], rax
 * 000000014027C2C1: lea     r13, [r15-1]
 * 000000014027C2C5: mov     rax, [r14+438h]
 * 000000014027C2CC: mov     edx, r8d
 * 000000014027C2CF: mov     rcx, r15
 * 000000014027C2D2: call    KeGuardDispatchICall
 * 000000014027C2D7: mov     r8d, 1
 * 000000014027C2DD: cmp     eax, 0C000022Dh
 * 000000014027C2E2: jnz     short loc_14027C302
 * 000000014027C2E4: cmp     r12b, r8b
 * 000000014027C2E7: ja      short loc_14027C309
 * 000000014027C2E9: movzx   eax, r12b
 * 000000014027C2ED: mov     cr8, rax
 * 000000014027C2F1: mov     al, [r15]
 * 000000014027C2F4: mov     rax, cr8
 * 000000014027C2F8: lea     eax, [r8+1]
 * 000000014027C2FC: mov     cr8, rax
 * 000000014027C300: jmp     short loc_14027C2C5
 * 000000014027C302: xor     r10d, r10d
 * 000000014027C305: test    eax, eax
 * 000000014027C307: js      short loc_14027C324
 * 000000014027C309: mov     eax, 1000h
 * 000000014027C30E: add     r15, rax
 * 000000014027C311: add     r13, rax
 * 000000014027C314: cmp     r13, [rbp+1A50h+var_1A30]
 * 000000014027C318: jnz     short loc_14027C2C5
 * 000000014027C31A: movzx   eax, r12b
 * 000000014027C31E: mov     cr8, rax
 * 000000014027C322: jmp     short loc_14027C398
 * 000000014027C324: movzx   eax, r12b
 * 000000014027C328: mov     cr8, rax
 * 000000014027C32C: mov     rcx, [rbp+1A50h+var_18E0]
 * 000000014027C333: cmp     [r14+6C0h], r10d
 * 000000014027C33A: jnz     short loc_14027C398
 * 000000014027C33C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027C346: add     rax, r14
 * 000000014027C349: mov     [r14+6C8h], rax
 * 000000014027C350: test    rcx, rcx
 * 000000014027C353: jz      short loc_14027C36B
 * 000000014027C355: mov     rax, 0B3B74BDEE4453415h
 * 000000014027C35F: add     rax, rcx
 * 000000014027C362: mov     [r14+6D0h], rax
 * 000000014027C369: jmp     short loc_14027C372
 * 000000014027C36B: mov     [r14+6D0h], r10
 * 000000014027C372: test    rcx, rcx
 * 000000014027C375: jz      short loc_14027C383
 * 000000014027C377: movsxd  rax, dword ptr [rcx]
 * 000000014027C37A: mov     [r14+6D8h], rax
 * 000000014027C381: jmp     short loc_14027C38A
 * 000000014027C383: mov     [r14+6D8h], r10
 * 000000014027C38A: mov     [r14+6E0h], rsi
 * 000000014027C391: mov     [r14+6C0h], r8d
 * 000000014027C398: mov     r12, [rbp+1A50h+var_1A38]
 * 000000014027C39C: mov     r13d, ebx
 * 000000014027C39F: add     r13, rsi
 * 000000014027C3A2: and     r13, 0FFFFFFFFFFFFF000h
 * 000000014027C3A9: add     [r14+628h], ebx
 * 000000014027C3B0: mov     r9, rsi
 * 000000014027C3B3: mov     r10d, [r14+614h]
 * 000000014027C3BA: mov     rax, rsi
 * 000000014027C3BD: mov     r15, [r14+618h]
 * 000000014027C3C4: mov     ecx, ebx
 * 000000014027C3C6: add     rcx, rsi
 * 000000014027C3C9: cmp     rsi, rcx
 * 000000014027C3CC: jnb     short loc_14027C3DA
 * 000000014027C3CE: prefetchnta byte ptr [rax]
 * 000000014027C3D1: add     rax, 40h ; '@'
 * 000000014027C3D5: cmp     rax, rcx
 * 000000014027C3D8: jb      short loc_14027C3CE
 * 000000014027C3DA: mov     r11d, ebx
 * 000000014027C3DD: mov     r8, r15
 * 000000014027C3E0: shr     r11d, 7
 * 000000014027C3E4: test    r11d, r11d
 * 000000014027C3E7: jz      short loc_14027C456
 * 000000014027C3E9: mov     rdi, 7010008004002001h
 * 000000014027C3F3: mov     r12d, 1
 * 000000014027C3F9: mov     eax, 8
 * 000000014027C3FE: xor     r8, [r9]
 * 000000014027C401: mov     ecx, r10d
 * 000000014027C404: rol     r8, cl
 * 000000014027C407: xor     r8, [r9+8]
 * 000000014027C40B: add     r9, 10h
 * 000000014027C40F: rol     r8, cl
 * 000000014027C412: sub     rax, r12
 * 000000014027C415: jnz     short loc_14027C3FE
 * 000000014027C417: mov     rcx, r9
 * 000000014027C41A: sub     rcx, rsi
 * 000000014027C41D: xor     rcx, r15
 * 000000014027C420: mov     rax, rcx
 * 000000014027C423: rol     rax, 11h
 * 000000014027C427: xor     rcx, rax
 * 000000014027C42A: mov     rax, rdi
 * 000000014027C42D: mul     rcx
 * 000000014027C430: xor     r10d, eax
 * 000000014027C433: mov     [rbp+1A50h+var_13D0], rdx
 * 000000014027C43A: xor     r10d, edx
 * 000000014027C43D: and     r10d, 3Fh
 * 000000014027C441: cmovz   r10d, r12d
 * 000000014027C445: add     r11d, 0FFFFFFFFh
 * 000000014027C449: jnz     short loc_14027C3F9
 * 000000014027C44B: mov     r12, [rbp+1A50h+var_1A38]
 * 000000014027C44F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027C456: and     ebx, 7Fh
 * 000000014027C459: mov     r11d, 1
 * 000000014027C45F: cmp     ebx, 8
 * 000000014027C462: jb      short loc_14027C47F
 * 000000014027C464: mov     eax, ebx
 * 000000014027C466: shr     rax, 3
 * 000000014027C46A: xor     r8, [r9]
 * 000000014027C46D: mov     ecx, r10d
 * 000000014027C470: rol     r8, cl
 * 000000014027C473: add     r9, 8
 * 000000014027C477: add     ebx, 0FFFFFFF8h
 * 000000014027C47A: sub     rax, r11
 * 000000014027C47D: jnz     short loc_14027C46A
 * 000000014027C47F: test    ebx, ebx
 * 000000014027C481: jz      short loc_14027C498
 * 000000014027C483: movzx   eax, byte ptr [r9]
 * 000000014027C487: mov     ecx, r10d
 * 000000014027C48A: xor     r8, rax
 * 000000014027C48D: add     r9, r11
 * 000000014027C490: rol     r8, cl
 * 000000014027C493: add     ebx, 0FFFFFFFFh
 * 000000014027C496: jnz     short loc_14027C483
 * 000000014027C498: mov     rax, r8
 * 000000014027C49B: shr     rax, 1Fh
 * 000000014027C49F: xor     r10d, r10d
 * 000000014027C4A2: jmp     short loc_14027C4AB
 * 000000014027C4A4: xor     r8d, eax
 * 000000014027C4A7: shr     rax, 1Fh
 * 000000014027C4AB: test    rax, rax
 * 000000014027C4AE: jnz     short loc_14027C4A4
 * 000000014027C4B0: mov     rax, [rbp+1A50h+var_19F0]
 * 000000014027C4B4: btr     r8d, 1Fh
 * 000000014027C4B9: mov     r11, [rbp+1A50h+var_1A00]
 * 000000014027C4BD: mov     r15d, [rbp+1A50h+var_1A08]
 * 000000014027C4C1: mov     edx, [rbp+1A50h+var_19C0]
 * 000000014027C4C7: mov     r9, [rbp+1A50h+var_19D0]
 * 000000014027C4CE: mov     [rax], r8d
 * 000000014027C4D1: mov     r8d, 1
 * 000000014027C4D7: add     r12, 0Ch
 * 000000014027C4DB: mov     [rbp+1A50h+var_1A38], r12
 * 000000014027C4DF: cmp     r12, [rbp+1A50h+var_19C8]
 * 000000014027C4E6: jz      loc_14027C583
 * 000000014027C4EC: add     rax, 4
 * 000000014027C4F0: mov     [rbp+1A50h+var_19F0], rax
 * 000000014027C4F4: mov     eax, [r11+0Ch]
 * 000000014027C4F8: cmp     [r12], eax
 * 000000014027C4FC: jb      short loc_14027C517
 * 000000014027C4FE: mov     ecx, [r12+4]
 * 000000014027C503: mov     ebx, [rbp+1A50h+var_19F8]
 * 000000014027C506: add     rcx, r9
 * 000000014027C509: mov     esi, [rbp+1A50h+var_19E4]
 * 000000014027C50C: mov     eax, edx
 * 000000014027C50E: cmp     rcx, rax
 * 000000014027C511: jbe     loc_14027C207
 * 000000014027C517: mov     rax, [r14+210h]
 * 000000014027C51E: mov     rdx, r9
 * 000000014027C521: mov     r8d, [r12]
 * 000000014027C525: mov     rcx, [rbp+1A50h+var_1A40]
 * 000000014027C529: call    KeGuardDispatchICall
 * 000000014027C52E: mov     ebx, [rbp+1A50h+var_19F8]
 * 000000014027C531: mov     esi, [rbp+1A50h+var_19E4]
 * 000000014027C534: xor     r10d, r10d
 * 000000014027C537: mov     [rbp+1A50h+var_1A00], rax
 * 000000014027C53B: mov     r11, rax
 * 000000014027C53E: test    rax, rax
 * 000000014027C541: jnz     loc_14027C010
 * 000000014027C547: mov     ecx, 0C000007Bh
 * 000000014027C54C: xor     r13d, r13d
 * 000000014027C54F: mov     [rbp+1A50h+var_19D8], ecx
 * 000000014027C552: mov     rsi, [rbp+1A50h+var_1968]
 * 000000014027C559: mov     r12d, 80000000h
 * 000000014027C55F: mov     rbx, rsi
 * 000000014027C562: lea     eax, [rcx+r12]
 * 000000014027C566: test    r12d, eax
 * 000000014027C569: jnz     loc_14027DBD8
 * 000000014027C56F: cmp     ecx, 0C000010Eh
 * 000000014027C575: jz      loc_14027DBD8
 * 000000014027C57B: mov     ecx, [rbp+1A50h+var_19D8]
 * 000000014027C57E: jmp     loc_14027DC6E
 * 000000014027C583: mov     edx, [rbp+1A50h+var_19F8]
 * 000000014027C586: xor     r13d, r13d
 * 000000014027C589: mov     r8d, [rbp+1A50h+var_19E4]
 * 000000014027C58D: cmp     edx, 0FFFFFFFFh
 * 000000014027C590: jnz     short loc_14027C59A
 * 000000014027C592: test    r8d, r8d
 * 000000014027C595: jnz     short loc_14027C59A
 * 000000014027C597: mov     edx, r13d
 * 000000014027C59A: mov     rcx, [rbp+1A50h+var_1950]
 * 000000014027C5A1: lea     r9, [rbp+1A50h+var_199C]
 * 000000014027C5A8: sub     r8d, edx
 * 000000014027C5AB: mov     eax, edx
 * 000000014027C5AD: add     rax, rcx
 * 000000014027C5B0: mov     [rbp+1A50h+var_1790], r8d
 * 000000014027C5B7: xor     r8d, r8d
 * 000000014027C5BA: mov     [rbp+1A50h+var_1648], rax
 * 000000014027C5C1: mov     rax, [r14+1F0h]
 * 000000014027C5C8: mov     rsi, r14
 * 000000014027C5CB: mov     [rbp+1A50h+var_1968], r14
 * 000000014027C5D2: lea     ebx, [r8+1]
 * 000000014027C5D6: mov     dl, bl
 * 000000014027C5D8: call    KeGuardDispatchICall
 * 000000014027C5DD: mov     rdx, rax
 * 000000014027C5E0: lea     r8d, [rbx+0Bh]
 * 000000014027C5E4: neg     rax
 * 000000014027C5E7: mov     [rbp+1A50h+var_1640], rdx
 * 000000014027C5EE: lea     r9, [rbp+1A50h+var_199C]
 * 000000014027C5F5: mov     dl, bl
 * 000000014027C5F7: sbb     ecx, ecx
 * 000000014027C5F9: and     ecx, [rbp+1A50h+var_199C]
 * 000000014027C5FF: mov     [rbp+1A50h+var_199C], ecx
 * 000000014027C605: mov     rax, [r14+1F0h]
 * 000000014027C60C: mov     [rbp+1A50h+var_178C], ecx
 * 000000014027C612: mov     rcx, [rbp+1A50h+var_1950]
 * 000000014027C619: call    KeGuardDispatchICall
 * 000000014027C61E: mov     rdx, rax
 * 000000014027C621: mov     [rbp+1A50h+var_19D0], rax
 * 000000014027C628: neg     rax
 * 000000014027C62B: mov     [rbp+1A50h+var_1638], rdx
 * 000000014027C632: lea     r8d, [rbx+9]
 * 000000014027C636: mov     dl, bl
 * 000000014027C638: sbb     ecx, ecx
 * 000000014027C63A: lea     r9, [rbp+1A50h+var_199C]
 * 000000014027C641: and     ecx, [rbp+1A50h+var_199C]
 * 000000014027C647: mov     [rbp+1A50h+var_199C], ecx
 * 000000014027C64D: mov     rax, [r14+1F0h]
 * 000000014027C654: mov     [rbp+1A50h+var_1A50], ecx
 * 000000014027C657: mov     [rbp+1A50h+var_1788], ecx
 * 000000014027C65D: mov     rcx, [rbp+1A50h+var_1950]
 * 000000014027C664: call    KeGuardDispatchICall
 * 000000014027C669: mov     rdx, rax
 * 000000014027C66C: neg     rax
 * 000000014027C66F: mov     [rbp+1A50h+var_1630], rdx
 * 000000014027C676: sbb     ecx, ecx
 * 000000014027C678: and     ecx, [rbp+1A50h+var_199C]
 * 000000014027C67E: mov     [rbp+1A50h+var_199C], ecx
 * 000000014027C684: mov     r15d, [r14+5E4h]
 * 000000014027C68B: mov     r8d, [r14+6ECh]
 * 000000014027C692: mov     [rbp+1A50h+var_1784], ecx
 * 000000014027C698: lea     eax, [r15+0C0h]
 * 000000014027C69F: cmp     eax, [r14+7CCh]
 * 000000014027C6A6: jbe     loc_14027C796
 * 000000014027C6AC: mov     edx, eax
 * 000000014027C6AE: mov     rcx, r14
 * 000000014027C6B1: call    sub_140282ED4
 * 000000014027C6B6: mov     rbx, rax
 * 000000014027C6B9: test    rax, rax
 * 000000014027C6BC: jz      loc_14027C78E
 * 000000014027C6C2: mov     edx, [r14+748h]
 * 000000014027C6C9: mov     r12d, 4
 * 000000014027C6CF: test    r12b, dl
 * 000000014027C6D2: jnz     loc_14027C785
 * 000000014027C6D8: mov     ecx, [r14+5E4h]
 * 000000014027C6DF: and     edx, 20000000h
 * 000000014027C6E5: mov     r9, [r14+5C8h]
 * 000000014027C6EC: neg     edx
 * 000000014027C6EE: lea     edx, [r12-3]
 * 000000014027C6F3: sbb     r8d, r8d
 * 000000014027C6F6: and     r8d, [r14+6ECh]
 * 000000014027C6FD: cmp     ecx, 8
 * 000000014027C700: jb      short loc_14027C717
 * 000000014027C702: mov     eax, ecx
 * 000000014027C704: shr     rax, 3
 * 000000014027C708: mov     [r14], r13
 * 000000014027C70B: add     ecx, 0FFFFFFF8h
 * 000000014027C70E: add     r14, 8
 * 000000014027C712: sub     rax, rdx
 * 000000014027C715: jnz     short loc_14027C708
 * 000000014027C717: test    ecx, ecx
 * 000000014027C719: jz      short loc_14027C726
 * 000000014027C71B: mov     [r14], r13b
 * 000000014027C71E: add     r14, rdx
 * 000000014027C721: add     ecx, 0FFFFFFFFh
 * 000000014027C724: jnz     short loc_14027C71B
 * 000000014027C726: mov     esi, [rbx+6ECh]
 * 000000014027C72C: mov     eax, 3
 * 000000014027C731: mov     [rbx+6ECh], r8d
 * 000000014027C738: cmp     r8d, eax
 * 000000014027C73B: jz      short loc_14027C770
 * 000000014027C73D: test    dword ptr [rbx+748h], 10000000h
 * 000000014027C747: mov     ecx, r13d
 * 000000014027C74A: cmovz   ecx, r8d
 * 000000014027C74E: test    ecx, ecx
 * 000000014027C750: jz      short loc_14027C767
 * 000000014027C752: mov     rax, [rbx+228h]
 * 000000014027C759: lea     rcx, [r9-8]
 * 000000014027C75D: mov     rdx, [rcx]
 * 000000014027C760: call    KeGuardDispatchICall
 * 000000014027C765: jmp     short loc_14027C77F
 * 000000014027C767: mov     rax, [rbx+100h]
 * 000000014027C76E: jmp     short loc_14027C777
 * 000000014027C770: mov     rax, [rbx+360h]
 * 000000014027C777: mov     rcx, r9
 * 000000014027C77A: call    KeGuardDispatchICall
 * 000000014027C77F: mov     [rbx+6ECh], esi
 * 000000014027C785: and     dword ptr [rbx+748h], 0FFFFFFFBh
 * 000000014027C78C: jmp     short loc_14027C7A6
 * 000000014027C78E: mov     rbx, r14
 * 000000014027C791: jmp     loc_14027B92C
 * 000000014027C796: mov     rbx, r14
 * 000000014027C799: mov     [r14+5E4h], eax
 * 000000014027C7A0: mov     r12d, 4
 * 000000014027C7A6: add     [rbx+60Ch], r12d
 * 000000014027C7AD: lea     r11, [rbx+r15]
 * 000000014027C7B1: xor     esi, esi
 * 000000014027C7B3: mov     [rbp+1A50h+var_1738], r11
 * 000000014027C7BA: lea     r13, [rbp+1A50h+var_1648]
 * 000000014027C7C1: mov     [rbp+1A50h+var_17E0], r11
 * 000000014027C7C8: mov     [rbp+1A50h+var_1A40], r13
 * 000000014027C7CC: lea     rdi, [rbp+1A50h+var_1790]
 * 000000014027C7D3: mov     [rbp+1A50h+var_1A00], r12
 * 000000014027C7D7: lea     r9d, [rsi+1]
 * 000000014027C7DB: mov     r15d, [rdi]
 * 000000014027C7DE: mov     ecx, 30h ; '0'
 * 000000014027C7E3: mov     r14, [r13+0]
 * 000000014027C7E7: mov     rax, r11
 * 000000014027C7EA: mov     dword ptr [rbp+1A50h+var_1A28], r15d
 * 000000014027C7EE: lea     edx, [rcx-2Ah]
 * 000000014027C7F1: mov     [rax], rsi
 * 000000014027C7F4: add     ecx, 0FFFFFFF8h
 * 000000014027C7F7: add     rax, 8
 * 000000014027C7FB: sub     rdx, r9
 * 000000014027C7FE: jnz     short loc_14027C7F1
 * 000000014027C800: test    ecx, ecx
 * 000000014027C802: jz      short loc_14027C80F
 * 000000014027C804: mov     [rax], sil
 * 000000014027C807: add     rax, r9
 * 000000014027C80A: add     ecx, 0FFFFFFFFh
 * 000000014027C80D: jnz     short loc_14027C804
 * 000000014027C80F: mov     dword ptr [r11], 0Bh
 * 000000014027C816: lea     rcx, [r14+r15]
 * 000000014027C81A: mov     [r11+8], r14
 * 000000014027C81E: mov     r9, r14
 * 000000014027C821: mov     [r11+10h], r15d
 * 000000014027C825: mov     rax, r14
 * 000000014027C828: add     [rbx+628h], r15d
 * 000000014027C82F: mov     r10d, [rbx+614h]
 * 000000014027C836: mov     r12, [rbx+618h]
 * 000000014027C83D: cmp     r14, rcx
 * 000000014027C840: jnb     short loc_14027C84E
 * 000000014027C842: prefetchnta byte ptr [rax]
 * 000000014027C845: add     rax, 40h ; '@'
 * 000000014027C849: cmp     rax, rcx
 * 000000014027C84C: jb      short loc_14027C842
 * 000000014027C84E: mov     esi, r15d
 * 000000014027C851: mov     r8, r12
 * 000000014027C854: shr     esi, 7
 * 000000014027C857: test    esi, esi
 * 000000014027C859: jz      short loc_14027C8C4
 * 000000014027C85B: mov     r15d, 1
 * 000000014027C861: mov     r13, 7010008004002001h
 * 000000014027C86B: mov     eax, 8
 * 000000014027C870: xor     r8, [r9]
 * 000000014027C873: mov     ecx, r10d
 * 000000014027C876: rol     r8, cl
 * 000000014027C879: xor     r8, [r9+8]
 * 000000014027C87D: add     r9, 10h
 * 000000014027C881: rol     r8, cl
 * 000000014027C884: sub     rax, r15
 * 000000014027C887: jnz     short loc_14027C870
 * 000000014027C889: mov     rcx, r9
 * 000000014027C88C: sub     rcx, r14
 * 000000014027C88F: xor     rcx, r12
 * 000000014027C892: mov     rax, rcx
 * 000000014027C895: rol     rax, 11h
 * 000000014027C899: xor     rcx, rax
 * 000000014027C89C: mov     rax, r13
 * 000000014027C89F: mul     rcx
 * 000000014027C8A2: xor     r10d, eax
 * 000000014027C8A5: mov     [rbp+1A50h+var_13C8], rdx
 * 000000014027C8AC: xor     r10d, edx
 * 000000014027C8AF: and     r10d, 3Fh
 * 000000014027C8B3: cmovz   r10d, r15d
 * 000000014027C8B7: add     esi, 0FFFFFFFFh
 * 000000014027C8BA: jnz     short loc_14027C86B
 * 000000014027C8BC: mov     r15d, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027C8C0: mov     r13, [rbp+1A50h+var_1A40]
 * 000000014027C8C4: mov     edx, r15d
 * 000000014027C8C7: mov     r14d, 1
 * 000000014027C8CD: and     edx, 7Fh
 * 000000014027C8D0: cmp     edx, 8
 * 000000014027C8D3: jb      short loc_14027C8F0
 * 000000014027C8D5: mov     eax, edx
 * 000000014027C8D7: shr     rax, 3
 * 000000014027C8DB: xor     r8, [r9]
 * 000000014027C8DE: mov     ecx, r10d
 * 000000014027C8E1: rol     r8, cl
 * 000000014027C8E4: add     r9, 8
 * 000000014027C8E8: add     edx, 0FFFFFFF8h
 * 000000014027C8EB: sub     rax, r14
 * 000000014027C8EE: jnz     short loc_14027C8DB
 * 000000014027C8F0: xor     esi, esi
 * 000000014027C8F2: test    edx, edx
 * 000000014027C8F4: jz      short loc_14027C90B
 * 000000014027C8F6: movzx   eax, byte ptr [r9]
 * 000000014027C8FA: mov     ecx, r10d
 * 000000014027C8FD: xor     r8, rax
 * 000000014027C900: add     r9, r14
 * 000000014027C903: rol     r8, cl
 * 000000014027C906: add     edx, 0FFFFFFFFh
 * 000000014027C909: jnz     short loc_14027C8F6
 * 000000014027C90B: mov     rax, r8
 * 000000014027C90E: jmp     short loc_14027C913
 * 000000014027C910: xor     r8d, eax
 * 000000014027C913: shr     rax, 1Fh
 * 000000014027C917: test    rax, rax
 * 000000014027C91A: jnz     short loc_14027C910
 * 000000014027C91C: btr     r8d, 1Fh
 * 000000014027C921: lea     r12d, [rax+4]
 * 000000014027C925: mov     [r11+14h], r8d
 * 000000014027C929: lea     r9d, [rax+1]
 * 000000014027C92D: add     [rbx+628h], r15d
 * 000000014027C934: add     r13, 8
 * 000000014027C938: mov     r11, [rbp+1A50h+var_1738]
 * 000000014027C93F: add     rdi, r12
 * 000000014027C942: add     r11, 30h ; '0'
 * 000000014027C946: mov     [rbp+1A50h+var_1A40], r13
 * 000000014027C94A: sub     [rbp+1A50h+var_1A00], r9
 * 000000014027C94E: mov     [rbp+1A50h+var_1738], r11
 * 000000014027C955: jnz     loc_14027C7DB
 * 000000014027C95B: mov     rax, [rbp+1A50h+var_17E0]
 * 000000014027C962: xor     r13d, r13d
 * 000000014027C965: add     rax, 60h ; '`'
 * 000000014027C969: mov     [rbp+1A50h+var_1968], rbx
 * 000000014027C970: mov     [rbp+1A50h+var_1860], rax
 * 000000014027C977: mov     rsi, rbx
 * 000000014027C97A: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027C981: jnz     loc_14027CC1E
 * 000000014027C987: mov     r15d, [rbx+5E4h]
 * 000000014027C98E: mov     r8d, [rbx+6ECh]
 * 000000014027C995: lea     eax, [r15+30h]
 * 000000014027C999: cmp     eax, [rbx+7CCh]
 * 000000014027C99F: jbe     loc_14027CA95
 * 000000014027C9A5: mov     edx, eax
 * 000000014027C9A7: mov     rcx, rbx
 * 000000014027C9AA: call    sub_140282ED4
 * 000000014027C9AF: mov     r14, rax
 * 000000014027C9B2: test    rax, rax
 * 000000014027C9B5: jz      loc_14027CA89
 * 000000014027C9BB: mov     edx, [rbx+748h]
 * 000000014027C9C1: test    r12b, dl
 * 000000014027C9C4: jnz     loc_14027CA79
 * 000000014027C9CA: mov     ecx, [rbx+5E4h]
 * 000000014027C9D0: and     edx, 20000000h
 * 000000014027C9D6: mov     r9, [rbx+5C8h]
 * 000000014027C9DD: neg     edx
 * 000000014027C9DF: lea     edx, [r12-3]
 * 000000014027C9E4: sbb     r8d, r8d
 * 000000014027C9E7: and     r8d, [rbx+6ECh]
 * 000000014027C9EE: cmp     ecx, 8
 * 000000014027C9F1: jb      short loc_14027CA08
 * 000000014027C9F3: mov     eax, ecx
 * 000000014027C9F5: shr     rax, 3
 * 000000014027C9F9: mov     [rbx], r13
 * 000000014027C9FC: add     ecx, 0FFFFFFF8h
 * 000000014027C9FF: add     rbx, 8
 * 000000014027CA03: sub     rax, rdx
 * 000000014027CA06: jnz     short loc_14027C9F9
 * 000000014027CA08: test    ecx, ecx
 * 000000014027CA0A: jz      short loc_14027CA17
 * 000000014027CA0C: mov     [rbx], r13b
 * 000000014027CA0F: add     rbx, rdx
 * 000000014027CA12: add     ecx, 0FFFFFFFFh
 * 000000014027CA15: jnz     short loc_14027CA0C
 * 000000014027CA17: mov     ebx, [r14+6ECh]
 * 000000014027CA1E: mov     eax, 3
 * 000000014027CA23: mov     [r14+6ECh], r8d
 * 000000014027CA2A: cmp     r8d, eax
 * 000000014027CA2D: jz      short loc_14027CA63
 * 000000014027CA2F: test    dword ptr [r14+748h], 10000000h
 * 000000014027CA3A: mov     ecx, r13d
 * 000000014027CA3D: cmovz   ecx, r8d
 * 000000014027CA41: test    ecx, ecx
 * 000000014027CA43: jz      short loc_14027CA5A
 * 000000014027CA45: mov     rax, [r14+228h]
 * 000000014027CA4C: lea     rcx, [r9-8]
 * 000000014027CA50: mov     rdx, [rcx]
 * 000000014027CA53: call    KeGuardDispatchICall
 * 000000014027CA58: jmp     short loc_14027CA72
 * 000000014027CA5A: mov     rax, [r14+100h]
 * 000000014027CA61: jmp     short loc_14027CA6A
 * 000000014027CA63: mov     rax, [r14+360h]
 * 000000014027CA6A: mov     rcx, r9
 * 000000014027CA6D: call    KeGuardDispatchICall
 * 000000014027CA72: mov     [r14+6ECh], ebx
 * 000000014027CA79: and     dword ptr [r14+748h], 0FFFFFFFBh
 * 000000014027CA81: mov     r9d, 1
 * 000000014027CA87: jmp     short loc_14027CA9E
 * 000000014027CA89: mov     [rbp+1A50h+var_19D8], 0C000009Ah
 * 000000014027CA90: jmp     loc_14027B92C
 * 000000014027CA95: mov     r14, rbx
 * 000000014027CA98: mov     [rbx+5E4h], eax
 * 000000014027CA9E: add     [r14+60Ch], r9d
 * 000000014027CAA5: lea     rbx, [r14+r15]
 * 000000014027CAA9: mov     ecx, 30h ; '0'
 * 000000014027CAAE: mov     [rbp+1A50h+var_16D8], rbx
 * 000000014027CAB5: mov     rax, rbx
 * 000000014027CAB8: lea     edx, [rcx-2Ah]
 * 000000014027CABB: mov     [rax], r13
 * 000000014027CABE: add     ecx, 0FFFFFFF8h
 * 000000014027CAC1: add     rax, 8
 * 000000014027CAC5: sub     rdx, r9
 * 000000014027CAC8: jnz     short loc_14027CABB
 * 000000014027CACA: test    ecx, ecx
 * 000000014027CACC: jz      short loc_14027CAD9
 * 000000014027CACE: mov     [rax], r13b
 * 000000014027CAD1: add     rax, r9
 * 000000014027CAD4: add     ecx, 0FFFFFFFFh
 * 000000014027CAD7: jnz     short loc_14027CACE
 * 000000014027CAD9: mov     r12, [rbp+1A50h+var_19D0]
 * 000000014027CAE0: mov     r15d, [rbp+1A50h+var_1A50]
 * 000000014027CAE4: mov     r9, r12
 * 000000014027CAE7: mov     dword ptr [rbx], 0Eh
 * 000000014027CAED: mov     rax, r12
 * 000000014027CAF0: mov     [rbx+8], r12
 * 000000014027CAF4: mov     [rbx+10h], r15d
 * 000000014027CAF8: add     [r14+628h], r15d
 * 000000014027CAFF: lea     rcx, [r12+r15]
 * 000000014027CB03: mov     r10d, [r14+614h]
 * 000000014027CB0A: mov     rsi, [r14+618h]
 * 000000014027CB11: cmp     r12, rcx
 * 000000014027CB14: jnb     short loc_14027CB22
 * 000000014027CB16: prefetchnta byte ptr [rax]
 * 000000014027CB19: add     rax, 40h ; '@'
 * 000000014027CB1D: cmp     rax, rcx
 * 000000014027CB20: jb      short loc_14027CB16
 * 000000014027CB22: mov     r11d, r15d
 * 000000014027CB25: mov     r8, rsi
 * 000000014027CB28: shr     r11d, 7
 * 000000014027CB2C: test    r11d, r11d
 * 000000014027CB2F: jz      short loc_14027CBA5
 * 000000014027CB31: mov     rdi, 7010008004002001h
 * 000000014027CB3B: mov     edx, 8
 * 000000014027CB40: lea     r15d, [rdx-7]
 * 000000014027CB44: mov     rax, [r9]
 * 000000014027CB47: mov     ecx, r10d
 * 000000014027CB4A: xor     rax, r8
 * 000000014027CB4D: mov     r8, [r9+8]
 * 000000014027CB51: rol     rax, cl
 * 000000014027CB54: add     r9, 10h
 * 000000014027CB58: xor     r8, rax
 * 000000014027CB5B: rol     r8, cl
 * 000000014027CB5E: sub     rdx, r15
 * 000000014027CB61: jnz     short loc_14027CB44
 * 000000014027CB63: mov     rcx, r9
 * 000000014027CB66: sub     rcx, r12
 * 000000014027CB69: xor     rcx, rsi
 * 000000014027CB6C: mov     rax, rcx
 * 000000014027CB6F: rol     rax, 11h
 * 000000014027CB73: xor     rcx, rax
 * 000000014027CB76: mov     rax, rdi
 * 000000014027CB79: mul     rcx
 * 000000014027CB7C: xor     r10d, edx
 * 000000014027CB7F: mov     [rbp+1A50h+var_13C0], rdx
 * 000000014027CB86: xor     r10d, eax
 * 000000014027CB89: mov     rax, r15
 * 000000014027CB8C: and     r10d, 3Fh
 * 000000014027CB90: cmovz   r10d, eax
 * 000000014027CB94: add     r11d, 0FFFFFFFFh
 * 000000014027CB98: jnz     short loc_14027CB3B
 * 000000014027CB9A: mov     r15d, [rbp+1A50h+var_1A50]
 * 000000014027CB9E: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027CBA5: mov     edx, r15d
 * 000000014027CBA8: mov     esi, 1
 * 000000014027CBAD: and     edx, 7Fh
 * 000000014027CBB0: cmp     edx, 8
 * 000000014027CBB3: jb      short loc_14027CBD1
 * 000000014027CBB5: mov     r11d, edx
 * 000000014027CBB8: shr     r11, 3
 * 000000014027CBBC: xor     r8, [r9]
 * 000000014027CBBF: mov     ecx, r10d
 * 000000014027CBC2: rol     r8, cl
 * 000000014027CBC5: add     r9, 8
 * 000000014027CBC9: add     edx, 0FFFFFFF8h
 * 000000014027CBCC: sub     r11, rsi
 * 000000014027CBCF: jnz     short loc_14027CBBC
 * 000000014027CBD1: test    edx, edx
 * 000000014027CBD3: jz      short loc_14027CBEA
 * 000000014027CBD5: movzx   eax, byte ptr [r9]
 * 000000014027CBD9: mov     ecx, r10d
 * 000000014027CBDC: xor     r8, rax
 * 000000014027CBDF: add     r9, rsi
 * 000000014027CBE2: rol     r8, cl
 * 000000014027CBE5: add     edx, 0FFFFFFFFh
 * 000000014027CBE8: jnz     short loc_14027CBD5
 * 000000014027CBEA: mov     rax, r8
 * 000000014027CBED: jmp     short loc_14027CBF2
 * 000000014027CBEF: xor     r8d, eax
 * 000000014027CBF2: shr     rax, 1Fh
 * 000000014027CBF6: test    rax, rax
 * 000000014027CBF9: jnz     short loc_14027CBEF
 * 000000014027CBFB: btr     r8d, 1Fh
 * 000000014027CC00: mov     [rbx+14h], r8d
 * 000000014027CC04: mov     rbx, r14
 * 000000014027CC07: mov     rax, [rbp+1A50h+var_16D8]
 * 000000014027CC0E: mov     [rbp+1A50h+var_1860], rax
 * 000000014027CC15: add     [r14+628h], r15d
 * 000000014027CC1C: jmp     short loc_14027CC2F
 * 000000014027CC1E: mov     r15d, [rbp+1A50h+var_1A50]
 * 000000014027CC22: mov     r12, [rbp+1A50h+var_19D0]
 * 000000014027CC29: mov     dword ptr [rax], 0Eh
 * 000000014027CC2F: test    dword ptr [rbx+748h], 40000000h
 * 000000014027CC39: jz      short loc_14027CC59
 * 000000014027CC3B: test    r15d, r15d
 * 000000014027CC3E: jz      short loc_14027CC59
 * 000000014027CC40: mov     r9, [rbp+1A50h+var_1860]
 * 000000014027CC47: mov     r8d, r15d
 * 000000014027CC4A: add     r9, 1Ch
 * 000000014027CC4E: mov     rdx, r12
 * 000000014027CC51: mov     rcx, rbx
 * 000000014027CC54: call    sub_140175FBC
 * 000000014027CC59: mov     rax, [rbp+1A50h+var_1860]
 * 000000014027CC60: mov     ecx, 1
 * 000000014027CC65: mov     rsi, rbx
 * 000000014027CC68: mov     [rbp+1A50h+var_1968], rbx
 * 000000014027CC6F: mov     [rax+18h], r13d
 * 000000014027CC73: mov     rax, [rbp+1A50h+var_1860]
 * 000000014027CC7A: or      [rax+18h], ecx
 * 000000014027CC7D: mov     r14, [rbp+1A50h+var_17E0]
 * 000000014027CC84: mov     r15, [rbp+1A50h+var_1950]
 * 000000014027CC8B: mov     dword ptr [r14+90h], 23h ; '#'
 * 000000014027CC96: or      [r14+0B8h], ecx
 * 000000014027CC9D: cmp     dword ptr [r14+0A0h], 94h
 * 000000014027CCA8: jb      short loc_14027CD1E
 * 000000014027CCAA: mov     rax, [rbx+1F8h]
 * 000000014027CCB1: mov     rcx, r15
 * 000000014027CCB4: mov     r13, [r14+98h]
 * 000000014027CCBB: call    KeGuardDispatchICall
 * 000000014027CCC0: test    rax, rax
 * 000000014027CCC3: jz      loc_14027CD68
 * 000000014027CCC9: mov     ecx, [rax+50h]
 * 000000014027CCCC: mov     eax, 2
 * 000000014027CCD1: or      [r14+0B8h], eax
 * 000000014027CCD8: add     rcx, r15
 * 000000014027CCDB: mov     rax, [r13+70h]
 * 000000014027CCDF: cmp     rax, r15
 * 000000014027CCE2: jb      short loc_14027CCFB
 * 000000014027CCE4: cmp     rax, rcx
 * 000000014027CCE7: jnb     short loc_14027CCFB
 * 000000014027CCE9: mov     rax, [rax]
 * 000000014027CCEC: mov     [r14+0A8h], rax
 * 000000014027CCF3: or      dword ptr [r14+0B8h], 4
 * 000000014027CCFB: mov     rax, [r13+78h]
 * 000000014027CCFF: cmp     rax, r15
 * 000000014027CD02: jb      short loc_14027CD1B
 * 000000014027CD04: cmp     rax, rcx
 * 000000014027CD07: jnb     short loc_14027CD1B
 * 000000014027CD09: mov     rax, [rax]
 * 000000014027CD0C: mov     [r14+0B0h], rax
 * 000000014027CD13: or      dword ptr [r14+0B8h], 8
 * 000000014027CD1B: xor     r13d, r13d
 * 000000014027CD1E: test    dword ptr [rbx+748h], 400000h
 * 000000014027CD28: mov     r12, [rbp+1A50h+var_1950]
 * 000000014027CD2F: mov     [rbp+1A50h+var_1A20], r12
 * 000000014027CD33: mov     [rbp+1A50h+var_1968], rbx
 * 000000014027CD3A: jz      loc_14027DBBA
 * 000000014027CD40: mov     rax, [rbx+1F8h]
 * 000000014027CD47: mov     rcx, r12
 * 000000014027CD4A: call    KeGuardDispatchICall
 * 000000014027CD4F: xor     r15d, r15d
 * 000000014027CD52: mov     [rbp+1A50h+var_1A30], rax
 * 000000014027CD56: mov     r13, rax
 * 000000014027CD59: test    rax, rax
 * 000000014027CD5C: jnz     short loc_14027CD74
 * 000000014027CD5E: mov     ecx, 0C000007Bh
 * 000000014027CD63: jmp     loc_14027D1E9
 * 000000014027CD68: mov     [rbp+1A50h+var_19D8], 0C000009Ah
 * 000000014027CD6F: jmp     loc_14027B929
 * 000000014027CD74: movzx   r8d, word ptr [r13+6]
 * 000000014027CD79: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027CD83: mov     ecx, [rbp+1A50h+var_1990]
 * 000000014027CD89: mul     rcx
 * 000000014027CD8C: mov     word ptr [rbp+1A50h+var_19E8], r8w
 * 000000014027CD91: mov     r10, rdx
 * 000000014027CD94: shr     r10, 3
 * 000000014027CD98: mov     [rbp+1A50h+var_1A40], r10
 * 000000014027CD9C: test    r8w, r8w
 * 000000014027CDA0: jnz     short loc_14027CE00
 * 000000014027CDA2: test    dword ptr [rbx+748h], 200000h
 * 000000014027CDAC: jz      loc_140280615
 * 000000014027CDB2: xor     r13d, r13d
 * 000000014027CDB5: cmp     [rbx+6C0h], r13d
 * 000000014027CDBC: jnz     short loc_14027CDF6
 * 000000014027CDBE: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027CDC8: add     rax, rbx
 * 000000014027CDCB: mov     [rbx+6C8h], rax
 * 000000014027CDD2: mov     eax, 1
 * 000000014027CDD7: mov     [rbx+6D0h], r13
 * 000000014027CDDE: mov     qword ptr [rbx+6D8h], 10Fh
 * 000000014027CDE9: mov     [rbx+6E0h], r12
 * 000000014027CDF0: mov     [rbx+6C0h], eax
 * 000000014027CDF6: mov     ecx, 0C000007Bh
 * 000000014027CDFB: jmp     loc_14027DBC7
 * 000000014027CE00: mov     rdx, [rbp+1A50h+var_1A48]
 * 000000014027CE04: lea     r11, [r13+18h]
 * 000000014027CE08: mov     eax, r10d
 * 000000014027CE0B: mov     r14, rdx
 * 000000014027CE0E: movzx   r9d, r8w
 * 000000014027CE12: mov     [rbp+1A50h+var_1A08], r9d
 * 000000014027CE16: lea     rcx, [rax+rax*2]
 * 000000014027CE1A: lea     rax, [rdx+rcx*4]
 * 000000014027CE1E: mov     edx, r15d
 * 000000014027CE21: mov     [rbp+1A50h+var_19E0], rax
 * 000000014027CE25: movzx   eax, word ptr [r13+14h]
 * 000000014027CE2A: add     r11, rax
 * 000000014027CE2D: mov     [rbp+1A50h+var_19F8], edx
 * 000000014027CE30: mov     [rbp+1A50h+var_1A38], r11
 * 000000014027CE34: test    r9d, r9d
 * 000000014027CE37: jz      loc_14027D03D
 * 000000014027CE3D: xor     r13d, r13d
 * 000000014027CE40: lea     r15, [r11+8]
 * 000000014027CE44: lea     r10d, [r13+1]
 * 000000014027CE48: mov     ecx, [r15]
 * 000000014027CE4B: cmp     [r15+8], ecx
 * 000000014027CE4F: mov     r9d, [r15+4]
 * 000000014027CE53: cmova   ecx, [r15+8]
 * 000000014027CE58: mov     [rbp+1A50h+var_1A04], r9d
 * 000000014027CE5C: lea     r8d, [r9+rcx]
 * 000000014027CE60: mov     [rbp+1A50h+var_1A50], r8d
 * 000000014027CE64: test    edx, edx
 * 000000014027CE66: jz      short loc_14027CE7A
 * 000000014027CE68: lea     eax, [rdx-1]
 * 000000014027CE6B: lea     rax, [rax+rax*4]
 * 000000014027CE6F: cmp     r8d, [r11+rax*8+0Ch]
 * 000000014027CE74: jb      loc_14027D05C
 * 000000014027CE7A: cmp     r14, [rbp+1A50h+var_19E0]
 * 000000014027CE7E: jz      loc_14027D01B
 * 000000014027CE84: mov     ecx, [r14]
 * 000000014027CE87: mov     eax, [r14+4]
 * 000000014027CE8B: cmp     ecx, r8d
 * 000000014027CE8E: jnb     loc_14027D00E
 * 000000014027CE94: cmp     eax, r9d
 * 000000014027CE97: jbe     loc_14027D00E
 * 000000014027CE9D: cmp     ecx, r9d
 * 000000014027CEA0: jb      loc_14027D0B2
 * 000000014027CEA6: cmp     eax, r8d
 * 000000014027CEA9: ja      loc_14027D0B2
 * 000000014027CEAF: mov     eax, [r14+8]
 * 000000014027CEB3: mov     ecx, 1
 * 000000014027CEB8: test    cl, al
 * 000000014027CEBA: jnz     short loc_14027CEC8
 * 000000014027CEBC: mov     al, [rax+r12]
 * 000000014027CEC0: test    al, 20h
 * 000000014027CEC2: jz      loc_14027D000
 * 000000014027CEC8: mov     ecx, [r15]
 * 000000014027CECB: cmp     [r15+8], ecx
 * 000000014027CECF: mov     r12d, [r15+4]
 * 000000014027CED3: cmova   ecx, [r15+8]
 * 000000014027CED8: mov     rax, [rbx+408h]
 * 000000014027CEDF: mov     rdx, [rbp+1A50h+var_1A20]
 * 000000014027CEE3: lea     r13d, [rcx+r12]
 * 000000014027CEE7: mov     rcx, r14
 * 000000014027CEEA: call    KeGuardDispatchICall
 * 000000014027CEEF: mov     rcx, rax
 * 000000014027CEF2: cmp     [rax], r12d
 * 000000014027CEF5: jb      short loc_14027CEFD
 * 000000014027CEF7: cmp     [rax+4], r13d
 * 000000014027CEFB: jb      short loc_14027CF5F
 * 000000014027CEFD: mov     r10, [rbp+1A50h+var_1A20]
 * 000000014027CF01: mov     edx, ecx
 * 000000014027CF03: sub     edx, r10d
 * 000000014027CF06: mov     eax, 80000000h
 * 000000014027CF0B: or      edx, eax
 * 000000014027CF0D: test    dword ptr [rbx+748h], 200000h
 * 000000014027CF17: jz      loc_1402806D2
 * 000000014027CF1D: xor     edx, edx
 * 000000014027CF1F: cmp     [rbx+6C0h], edx
 * 000000014027CF25: jnz     short loc_14027CF63
 * 000000014027CF27: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027CF31: add     rax, rbx
 * 000000014027CF34: mov     [rbx+6C8h], rax
 * 000000014027CF3B: lea     eax, [rdx+1]
 * 000000014027CF3E: mov     [rbx+6D0h], rdx
 * 000000014027CF45: mov     qword ptr [rbx+6D8h], 10Fh
 * 000000014027CF50: mov     [rbx+6E0h], r10
 * 000000014027CF57: mov     [rbx+6C0h], eax
 * 000000014027CF5D: jmp     short loc_14027CF63
 * 000000014027CF5F: mov     r10, [rbp+1A50h+var_1A20]
 * 000000014027CF63: mov     r8d, [rcx]
 * 000000014027CF66: mov     rdx, r10
 * 000000014027CF69: mov     rax, [rbx+410h]
 * 000000014027CF70: add     r8, r10
 * 000000014027CF73: call    KeGuardDispatchICall
 * 000000014027CF78: mov     rdx, rax
 * 000000014027CF7B: cmp     [rax], r12d
 * 000000014027CF7E: jb      short loc_14027CF86
 * 000000014027CF80: cmp     [rax+4], r13d
 * 000000014027CF84: jb      short loc_14027CFF1
 * 000000014027CF86: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027CF8A: mov     eax, 80000000h
 * 000000014027CF8F: sub     edx, r12d
 * 000000014027CF92: or      edx, eax
 * 000000014027CF94: test    dword ptr [rbx+748h], 200000h
 * 000000014027CF9E: jz      loc_1402806A3
 * 000000014027CFA4: mov     r8d, [rbp+1A50h+var_1A50]
 * 000000014027CFA8: xor     r13d, r13d
 * 000000014027CFAB: mov     r9d, [rbp+1A50h+var_1A04]
 * 000000014027CFAF: cmp     [rbx+6C0h], r13d
 * 000000014027CFB6: jnz     short loc_14027D000
 * 000000014027CFB8: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027CFC2: add     rax, rbx
 * 000000014027CFC5: mov     [rbx+6C8h], rax
 * 000000014027CFCC: lea     eax, [r13+1]
 * 000000014027CFD0: mov     [rbx+6D0h], r13
 * 000000014027CFD7: mov     qword ptr [rbx+6D8h], 10Fh
 * 000000014027CFE2: mov     [rbx+6E0h], r12
 * 000000014027CFE9: mov     [rbx+6C0h], eax
 * 000000014027CFEF: jmp     short loc_14027D000
 * 000000014027CFF1: mov     r8d, [rbp+1A50h+var_1A50]
 * 000000014027CFF5: xor     r13d, r13d
 * 000000014027CFF8: mov     r9d, [rbp+1A50h+var_1A04]
 * 000000014027CFFC: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027D000: add     r14, 0Ch
 * 000000014027D004: cmp     r14, [rbp+1A50h+var_19E0]
 * 000000014027D008: jnz     loc_14027CE84
 * 000000014027D00E: mov     edx, [rbp+1A50h+var_19F8]
 * 000000014027D011: mov     r10d, 1
 * 000000014027D017: mov     r11, [rbp+1A50h+var_1A38]
 * 000000014027D01B: mov     r9d, [rbp+1A50h+var_1A08]
 * 000000014027D01F: add     edx, r10d
 * 000000014027D022: add     r15, 28h ; '('
 * 000000014027D026: mov     [rbp+1A50h+var_19F8], edx
 * 000000014027D029: cmp     edx, r9d
 * 000000014027D02C: jb      loc_14027CE48
 * 000000014027D032: mov     r10, [rbp+1A50h+var_1A40]
 * 000000014027D036: xor     r15d, r15d
 * 000000014027D039: mov     r13, [rbp+1A50h+var_1A30]
 * 000000014027D03D: cmp     r14, [rbp+1A50h+var_19E0]
 * 000000014027D041: jz      loc_14027D0C7
 * 000000014027D047: test    dword ptr [rbx+748h], 200000h
 * 000000014027D051: jnz     loc_14027CDB2
 * 000000014027D057: jmp     loc_140280643
 * 000000014027D05C: test    dword ptr [rbx+748h], 200000h
 * 000000014027D066: jz      loc_140280674
 * 000000014027D06C: cmp     [rbx+6C0h], r13d
 * 000000014027D073: jnz     loc_14027CDF6
 * 000000014027D079: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027D083: add     rax, rbx
 * 000000014027D086: mov     [rbx+6C8h], rax
 * 000000014027D08D: mov     [rbx+6D0h], r13
 * 000000014027D094: mov     qword ptr [rbx+6D8h], 10Fh
 * 000000014027D09F: mov     [rbx+6E0h], r12
 * 000000014027D0A6: mov     [rbx+6C0h], r10d
 * 000000014027D0AD: jmp     loc_14027CDF6
 * 000000014027D0B2: test    dword ptr [rbx+748h], 200000h
 * 000000014027D0BC: jnz     loc_14027CDB5
 * 000000014027D0C2: jmp     loc_140280701
 * 000000014027D0C7: mov     r15d, [rbx+5E4h]
 * 000000014027D0CE: lea     ecx, [r10+6]
 * 000000014027D0D2: mov     r8d, [rbx+6ECh]
 * 000000014027D0D9: lea     eax, [r9+2]
 * 000000014027D0DD: and     ecx, 0FFFFFFF8h
 * 000000014027D0E0: lea     eax, [rax+rax*2]
 * 000000014027D0E3: lea     eax, [rcx+rax*8]
 * 000000014027D0E6: add     eax, r15d
 * 000000014027D0E9: cmp     eax, [rbx+7CCh]
 * 000000014027D0EF: jbe     loc_14027D1F4
 * 000000014027D0F5: mov     edx, eax
 * 000000014027D0F7: mov     rcx, rbx
 * 000000014027D0FA: call    sub_140282ED4
 * 000000014027D0FF: xor     r10d, r10d
 * 000000014027D102: mov     [rbp+1A50h+var_19D0], rax
 * 000000014027D109: mov     r14, rax
 * 000000014027D10C: test    rax, rax
 * 000000014027D10F: jz      loc_14027D1E4
 * 000000014027D115: mov     edx, [rbx+748h]
 * 000000014027D11B: test    dl, 4
 * 000000014027D11E: jnz     loc_14027D1D2
 * 000000014027D124: mov     ecx, [rbx+5E4h]
 * 000000014027D12A: and     edx, 20000000h
 * 000000014027D130: mov     r9, [rbx+5C8h]
 * 000000014027D137: neg     edx
 * 000000014027D139: lea     edx, [r10+1]
 * 000000014027D13D: sbb     r8d, r8d
 * 000000014027D140: and     r8d, [rbx+6ECh]
 * 000000014027D147: cmp     ecx, 8
 * 000000014027D14A: jb      short loc_14027D161
 * 000000014027D14C: mov     eax, ecx
 * 000000014027D14E: shr     rax, 3
 * 000000014027D152: mov     [rbx], r10
 * 000000014027D155: add     ecx, 0FFFFFFF8h
 * 000000014027D158: add     rbx, 8
 * 000000014027D15C: sub     rax, rdx
 * 000000014027D15F: jnz     short loc_14027D152
 * 000000014027D161: test    ecx, ecx
 * 000000014027D163: jz      short loc_14027D170
 * 000000014027D165: mov     [rbx], r10b
 * 000000014027D168: add     rbx, rdx
 * 000000014027D16B: add     ecx, 0FFFFFFFFh
 * 000000014027D16E: jnz     short loc_14027D165
 * 000000014027D170: mov     ebx, [r14+6ECh]
 * 000000014027D177: mov     eax, 3
 * 000000014027D17C: mov     [r14+6ECh], r8d
 * 000000014027D183: cmp     r8d, eax
 * 000000014027D186: jz      short loc_14027D1BC
 * 000000014027D188: test    dword ptr [r14+748h], 10000000h
 * 000000014027D193: mov     ecx, r10d
 * 000000014027D196: cmovz   ecx, r8d
 * 000000014027D19A: test    ecx, ecx
 * 000000014027D19C: jz      short loc_14027D1B3
 * 000000014027D19E: mov     rax, [r14+228h]
 * 000000014027D1A5: lea     rcx, [r9-8]
 * 000000014027D1A9: mov     rdx, [rcx]
 * 000000014027D1AC: call    KeGuardDispatchICall
 * 000000014027D1B1: jmp     short loc_14027D1CB
 * 000000014027D1B3: mov     rax, [r14+100h]
 * 000000014027D1BA: jmp     short loc_14027D1C3
 * 000000014027D1BC: mov     rax, [r14+360h]
 * 000000014027D1C3: mov     rcx, r9
 * 000000014027D1C6: call    KeGuardDispatchICall
 * 000000014027D1CB: mov     [r14+6ECh], ebx
 * 000000014027D1D2: and     dword ptr [r14+748h], 0FFFFFFFBh
 * 000000014027D1DA: mov     r9d, [rbp+1A50h+var_1A08]
 * 000000014027D1DE: mov     r10, [rbp+1A50h+var_1A40]
 * 000000014027D1E2: jmp     short loc_14027D204
 * 000000014027D1E4: mov     ecx, 0C000009Ah
 * 000000014027D1E9: mov     [rbp+1A50h+var_19D8], ecx
 * 000000014027D1EC: xor     r13d, r13d
 * 000000014027D1EF: jmp     loc_14027C559
 * 000000014027D1F4: mov     r14, rbx
 * 000000014027D1F7: mov     [rbp+1A50h+var_19D0], rbx
 * 000000014027D1FE: mov     [rbx+5E4h], eax
 * 000000014027D204: mov     esi, 1
 * 000000014027D209: lea     rcx, [r14+r15]
 * 000000014027D20D: add     [r14+60Ch], esi
 * 000000014027D214: mov     rax, rcx
 * 000000014027D217: mov     [rbp+1A50h+var_16D0], rcx
 * 000000014027D21E: xor     r15d, r15d
 * 000000014027D221: lea     edx, [rsi+2Fh]
 * 000000014027D224: lea     r8d, [rsi+5]
 * 000000014027D228: mov     [rax], r15
 * 000000014027D22B: add     edx, 0FFFFFFF8h
 * 000000014027D22E: add     rax, 8
 * 000000014027D232: sub     r8, rsi
 * 000000014027D235: jnz     short loc_14027D228
 * 000000014027D237: test    edx, edx
 * 000000014027D239: jz      short loc_14027D246
 * 000000014027D23B: mov     [rax], r15b
 * 000000014027D23E: add     rax, rsi
 * 000000014027D241: add     edx, 0FFFFFFFFh
 * 000000014027D244: jnz     short loc_14027D23B
 * 000000014027D246: mov     r11, [rbp+1A50h+var_1A48]
 * 000000014027D24A: mov     dword ptr [rcx], 1Eh
 * 000000014027D250: mov     [rcx+8], r11
 * 000000014027D254: mov     [rcx+10h], r15d
 * 000000014027D258: mov     rdx, [r14+618h]
 * 000000014027D25F: mov     rax, rdx
 * 000000014027D262: jmp     short loc_14027D266
 * 000000014027D264: xor     edx, eax
 * 000000014027D266: shr     rax, 1Fh
 * 000000014027D26A: test    rax, rax
 * 000000014027D26D: jnz     short loc_14027D264
 * 000000014027D26F: btr     edx, 1Fh
 * 000000014027D273: mov     rbx, r14
 * 000000014027D276: mov     [rcx+14h], edx
 * 000000014027D279: mov     rax, [rbp+1A50h+var_16D0]
 * 000000014027D280: mov     [rbp+1A50h+var_18B0], rax
 * 000000014027D287: mov     [rax+18h], r12
 * 000000014027D28B: mov     ecx, [r13+50h]
 * 000000014027D28F: mov     rax, [rbp+1A50h+var_18B0]
 * 000000014027D296: mov     r13, [rbp+1A50h+var_19E0]
 * 000000014027D29A: mov     [rax+20h], ecx
 * 000000014027D29D: mov     rax, [rbp+1A50h+var_18B0]
 * 000000014027D2A4: mov     ecx, [rbp+1A50h+var_1990]
 * 000000014027D2AA: mov     [rax+24h], ecx
 * 000000014027D2AD: mov     rax, [rbp+1A50h+var_18B0]
 * 000000014027D2B4: movzx   ecx, word ptr [rbp+1A50h+var_19E8]
 * 000000014027D2B8: mov     [rax+28h], cx
 * 000000014027D2BC: mov     rax, [rbp+1A50h+var_18B0]
 * 000000014027D2C3: or      [rax+2Ah], si
 * 000000014027D2C7: lea     esi, [r10-1]
 * 000000014027D2CB: mov     rcx, [rbp+1A50h+var_18B0]
 * 000000014027D2D2: add     rsi, 7
 * 000000014027D2D6: and     rsi, 0FFFFFFFFFFFFFFF8h
 * 000000014027D2DA: movzx   eax, word ptr [rcx+28h]
 * 000000014027D2DE: lea     rdx, [rcx+30h]
 * 000000014027D2E2: add     rsi, rdx
 * 000000014027D2E5: mov     [rbp+1A50h+var_19B8], rdx
 * 000000014027D2EC: mov     [rbp+1A50h+var_1988], rsi
 * 000000014027D2F3: lea     rcx, [rax+rax*2]
 * 000000014027D2F7: lea     r8, [rsi+rcx*8]
 * 000000014027D2FB: mov     [rbp+1A50h+var_1A30], r8
 * 000000014027D2FF: test    r10d, r10d
 * 000000014027D302: jz      short loc_14027D30E
 * 000000014027D304: lea     rax, [r11+0Ch]
 * 000000014027D308: mov     [rbp+1A50h+var_1A10], rax
 * 000000014027D30C: jmp     short loc_14027D312
 * 000000014027D30E: mov     [rbp+1A50h+var_1A10], r13
 * 000000014027D312: xor     r10d, r10d
 * 000000014027D315: test    r9d, r9d
 * 000000014027D318: jz      short loc_14027D351
 * 000000014027D31A: mov     edx, r9d
 * 000000014027D31D: lea     rax, [rsi+8]
 * 000000014027D321: lea     r9d, [r10+1]
 * 000000014027D325: mov     r15d, 80000000h
 * 000000014027D32B: lea     r12d, [r10+2]
 * 000000014027D32F: mov     rcx, r12
 * 000000014027D332: mov     [rax-8], r10d
 * 000000014027D336: mov     [rax-4], r10d
 * 000000014027D33A: mov     [rax], r15d
 * 000000014027D33D: add     rax, 0Ch
 * 000000014027D341: sub     rcx, r9
 * 000000014027D344: jnz     short loc_14027D332
 * 000000014027D346: sub     rdx, r9
 * 000000014027D349: jnz     short loc_14027D32F
 * 000000014027D34B: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027D34F: jmp     short loc_14027D357
 * 000000014027D351: mov     r9d, 1
 * 000000014027D357: cmp     rsi, r8
 * 000000014027D35A: jz      loc_14027DBB7
 * 000000014027D360: mov     r15, [rbp+1A50h+var_1A38]
 * 000000014027D364: mov     eax, [r15+24h]
 * 000000014027D368: mov     r11d, r10d
 * 000000014027D36B: bt      eax, 19h
 * 000000014027D36F: jb      loc_14027D4EB
 * 000000014027D375: mov     ecx, [r15]
 * 000000014027D378: cmp     ecx, 54494E49h
 * 000000014027D37E: jnz     short loc_14027D38E
 * 000000014027D380: cmp     dword ptr [r15+4], 4742444Bh
 * 000000014027D388: jz      loc_14027D4EB
 * 000000014027D38E: cmp     ecx, 45474150h
 * 000000014027D394: jnz     short loc_14027D3C5
 * 000000014027D396: movzx   eax, word ptr [r15+4]
 * 000000014027D39B: mov     edx, 7777h
 * 000000014027D3A0: cmp     ax, dx
 * 000000014027D3A3: jz      loc_14027D4EB
 * 000000014027D3A9: mov     edx, 7277h
 * 000000014027D3AE: cmp     ax, dx
 * 000000014027D3B1: jz      loc_14027D4EB
 * 000000014027D3B7: mov     edx, 7877h
 * 000000014027D3BC: cmp     ax, dx
 * 000000014027D3BF: jz      loc_14027D4EB
 * 000000014027D3C5: cmp     ecx, 41525245h
 * 000000014027D3CB: jnz     short loc_14027D3DD
 * 000000014027D3CD: mov     eax, 4154h
 * 000000014027D3D2: cmp     [r15+4], ax
 * 000000014027D3D7: jz      loc_14027D4EB
 * 000000014027D3DD: mov     rax, [r14+700h]
 * 000000014027D3E4: mov     r9, r15
 * 000000014027D3E7: mov     r8, [r14+6F8h]
 * 000000014027D3EE: mov     r10d, 7
 * 000000014027D3F4: mov     [rbp+1A50h+var_15A0], rax
 * 000000014027D3FB: sub     r9, r8
 * 000000014027D3FE: mov     rax, [r14+708h]
 * 000000014027D405: mov     [rbp+1A50h+var_1598], rax
 * 000000014027D40C: mov     rax, [r14+710h]
 * 000000014027D413: mov     [rbp+1A50h+var_1590], rax
 * 000000014027D41A: mov     [rbp+1A50h+var_15A8], r8
 * 000000014027D421: movzx   edx, byte ptr [r9+r8]
 * 000000014027D426: movzx   eax, byte ptr [r8]
 * 000000014027D42A: inc     r8
 * 000000014027D42D: cmp     rdx, rax
 * 000000014027D430: jnz     short loc_14027D43D
 * 000000014027D432: add     r10d, 0FFFFFFFFh
 * 000000014027D436: jnz     short loc_14027D421
 * 000000014027D438: jmp     loc_14027D4E0
 * 000000014027D43D: mov     r9, [rbp+1A50h+var_15A0]
 * 000000014027D444: mov     r8d, 8
 * 000000014027D44A: mov     r10, r15
 * 000000014027D44D: mov     rcx, [r10]
 * 000000014027D450: add     r10, 8
 * 000000014027D454: mov     rax, [r9]
 * 000000014027D457: add     r9, 8
 * 000000014027D45B: cmp     rcx, rax
 * 000000014027D45E: jnz     short loc_14027D48A
 * 000000014027D460: add     r8d, 0FFFFFFF8h
 * 000000014027D464: cmp     r8d, 8
 * 000000014027D468: jnb     short loc_14027D44D
 * 000000014027D46A: test    r8d, r8d
 * 000000014027D46D: jz      short loc_14027D4E0
 * 000000014027D46F: movzx   edx, byte ptr [r10]
 * 000000014027D473: inc     r10
 * 000000014027D476: movzx   eax, byte ptr [r9]
 * 000000014027D47A: inc     r9
 * 000000014027D47D: cmp     rdx, rax
 * 000000014027D480: jnz     short loc_14027D48A
 * 000000014027D482: add     r8d, 0FFFFFFFFh
 * 000000014027D486: jnz     short loc_14027D46F
 * 000000014027D488: jmp     short loc_14027D4E0
 * 000000014027D48A: mov     r8, [rbp+1A50h+var_1598]
 * 000000014027D491: mov     r9, r15
 * 000000014027D494: sub     r9, r8
 * 000000014027D497: mov     r10d, 4
 * 000000014027D49D: movzx   edx, byte ptr [r8+r9]
 * 000000014027D4A2: movzx   eax, byte ptr [r8]
 * 000000014027D4A6: inc     r8
 * 000000014027D4A9: cmp     rdx, rax
 * 000000014027D4AC: jnz     short loc_14027D4B6
 * 000000014027D4AE: add     r10d, 0FFFFFFFFh
 * 000000014027D4B2: jnz     short loc_14027D49D
 * 000000014027D4B4: jmp     short loc_14027D4E0
 * 000000014027D4B6: mov     r8, [rbp+1A50h+var_1590]
 * 000000014027D4BD: mov     r9, r15
 * 000000014027D4C0: sub     r9, r8
 * 000000014027D4C3: mov     r10d, 6
 * 000000014027D4C9: movzx   edx, byte ptr [r8+r9]
 * 000000014027D4CE: movzx   eax, byte ptr [r8]
 * 000000014027D4D2: inc     r8
 * 000000014027D4D5: cmp     rdx, rax
 * 000000014027D4D8: jnz     short loc_14027D4F0
 * 000000014027D4DA: add     r10d, 0FFFFFFFFh
 * 000000014027D4DE: jnz     short loc_14027D4C9
 * 000000014027D4E0: mov     r9d, 1
 * 000000014027D4E6: mov     r11d, r9d
 * 000000014027D4E9: jmp     short loc_14027D4F6
 * 000000014027D4EB: mov     r11d, r9d
 * 000000014027D4EE: jmp     short loc_14027D4F9
 * 000000014027D4F0: mov     r9d, 1
 * 000000014027D4F6: xor     r10d, r10d
 * 000000014027D4F9: mov     ecx, 80000000h
 * 000000014027D4FE: test    [r15+24h], ecx
 * 000000014027D502: cmovnz  r11d, r9d
 * 000000014027D506: mov     [rbp+1A50h+var_1A50], r11d
 * 000000014027D50A: test    r11d, r11d
 * 000000014027D50D: jz      short loc_14027D535
 * 000000014027D50F: cmp     dword ptr [r15], 54494E49h
 * 000000014027D516: jnz     short loc_14027D535
 * 000000014027D518: cmp     dword ptr [r15+4], 4742444Bh
 * 000000014027D520: jnz     short loc_14027D535
 * 000000014027D522: test    dword ptr [r14+748h], 10000000h
 * 000000014027D52D: cmovnz  r11d, r10d
 * 000000014027D531: mov     [rbp+1A50h+var_1A50], r11d
 * 000000014027D535: mov     ecx, [r15+8]
 * 000000014027D539: cmp     [r15+10h], ecx
 * 000000014027D53D: mov     r8d, [r15+0Ch]
 * 000000014027D541: cmova   ecx, [r15+10h]
 * 000000014027D546: mov     r9, [rbp+1A50h+var_1A48]
 * 000000014027D54A: mov     [rbp+1A50h+var_19F8], r8d
 * 000000014027D54E: lea     edx, [rcx+r8]
 * 000000014027D552: mov     [rbp+1A50h+var_1A18], edx
 * 000000014027D555: cmp     r9, r13
 * 000000014027D558: jz      short loc_14027D563
 * 000000014027D55A: mov     r13d, [r9]
 * 000000014027D55D: mov     eax, [r9+4]
 * 000000014027D561: jmp     short loc_14027D569
 * 000000014027D563: mov     r13d, r10d
 * 000000014027D566: mov     eax, r10d
 * 000000014027D569: mov     [rbp+1A50h+var_1A08], eax
 * 000000014027D56C: mov     [rbp+1A50h+var_1A04], r8d
 * 000000014027D570: cmp     r9, [rbp+1A50h+var_19E0]
 * 000000014027D574: jz      loc_14027D71D
 * 000000014027D57A: cmp     r13d, r8d
 * 000000014027D57D: jbe     loc_14027D720
 * 000000014027D583: cmp     eax, edx
 * 000000014027D585: ja      loc_14027D71D
 * 000000014027D58B: test    r11d, r11d
 * 000000014027D58E: jnz     loc_14027D71D
 * 000000014027D594: mov     [rsi], r8d
 * 000000014027D597: lea     rcx, [rbp+1A50h+var_1790]
 * 000000014027D59E: mov     [rsi+4], r13d
 * 000000014027D5A2: lea     rdx, [rbp+1A50h+var_1648]
 * 000000014027D5A9: mov     eax, [rsi]
 * 000000014027D5AB: mov     r9d, r13d
 * 000000014027D5AE: sub     r9d, eax
 * 000000014027D5B1: mov     [rbp+1A50h+var_1A04], r13d
 * 000000014027D5B5: mov     r15d, r9d
 * 000000014027D5B8: mov     r8d, r10d
 * 000000014027D5BB: lea     rsi, [r12+rax]
 * 000000014027D5BF: add     r15, rsi
 * 000000014027D5C2: mov     r10, [rdx]
 * 000000014027D5C5: mov     eax, [rcx]
 * 000000014027D5C7: add     rax, r10
 * 000000014027D5CA: cmp     rsi, rax
 * 000000014027D5CD: jnb     short loc_14027D5D8
 * 000000014027D5CF: cmp     r15, r10
 * 000000014027D5D2: ja      loc_14027D70F
 * 000000014027D5D8: mov     eax, 4
 * 000000014027D5DD: inc     r8d
 * 000000014027D5E0: add     rcx, rax
 * 000000014027D5E3: add     rdx, 8
 * 000000014027D5E7: cmp     r8d, eax
 * 000000014027D5EA: jb      short loc_14027D5C2
 * 000000014027D5EC: add     [r14+628h], r9d
 * 000000014027D5F3: mov     r10, rsi
 * 000000014027D5F6: mov     r11d, [r14+614h]
 * 000000014027D5FD: mov     rax, rsi
 * 000000014027D600: mov     r12, [r14+618h]
 * 000000014027D607: cmp     rsi, r15
 * 000000014027D60A: jnb     short loc_14027D618
 * 000000014027D60C: prefetchnta byte ptr [rax]
 * 000000014027D60F: add     rax, 40h ; '@'
 * 000000014027D613: cmp     rax, r15
 * 000000014027D616: jb      short loc_14027D60C
 * 000000014027D618: mov     r15d, r9d
 * 000000014027D61B: mov     r8, r12
 * 000000014027D61E: shr     r15d, 7
 * 000000014027D622: test    r15d, r15d
 * 000000014027D625: jz      short loc_14027D696
 * 000000014027D627: mov     edi, 1
 * 000000014027D62C: mov     r14, 7010008004002001h
 * 000000014027D636: mov     eax, 8
 * 000000014027D63B: xor     r8, [r10]
 * 000000014027D63E: mov     ecx, r11d
 * 000000014027D641: rol     r8, cl
 * 000000014027D644: xor     r8, [r10+8]
 * 000000014027D648: add     r10, 10h
 * 000000014027D64C: rol     r8, cl
 * 000000014027D64F: sub     rax, rdi
 * 000000014027D652: jnz     short loc_14027D63B
 * 000000014027D654: mov     rcx, r10
 * 000000014027D657: sub     rcx, rsi
 * 000000014027D65A: xor     rcx, r12
 * 000000014027D65D: mov     rax, rcx
 * 000000014027D660: rol     rax, 11h
 * 000000014027D664: xor     rcx, rax
 * 000000014027D667: mov     rax, r14
 * 000000014027D66A: mul     rcx
 * 000000014027D66D: xor     r11d, eax
 * 000000014027D670: mov     [rbp+1A50h+var_13B8], rdx
 * 000000014027D677: xor     r11d, edx
 * 000000014027D67A: and     r11d, 3Fh
 * 000000014027D67E: cmovz   r11d, edi
 * 000000014027D682: add     r15d, 0FFFFFFFFh
 * 000000014027D686: jnz     short loc_14027D636
 * 000000014027D688: mov     r14, [rbp+1A50h+var_19D0]
 * 000000014027D68F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027D696: and     r9d, 7Fh
 * 000000014027D69A: mov     esi, 1
 * 000000014027D69F: cmp     r9d, 8
 * 000000014027D6A3: jb      short loc_14027D6C2
 * 000000014027D6A5: mov     eax, r9d
 * 000000014027D6A8: shr     rax, 3
 * 000000014027D6AC: xor     r8, [r10]
 * 000000014027D6AF: mov     ecx, r11d
 * 000000014027D6B2: rol     r8, cl
 * 000000014027D6B5: add     r10, 8
 * 000000014027D6B9: add     r9d, 0FFFFFFF8h
 * 000000014027D6BD: sub     rax, rsi
 * 000000014027D6C0: jnz     short loc_14027D6AC
 * 000000014027D6C2: test    r9d, r9d
 * 000000014027D6C5: jz      short loc_14027D6DD
 * 000000014027D6C7: movzx   eax, byte ptr [r10]
 * 000000014027D6CB: mov     ecx, r11d
 * 000000014027D6CE: xor     r8, rax
 * 000000014027D6D1: add     r10, rsi
 * 000000014027D6D4: rol     r8, cl
 * 000000014027D6D7: add     r9d, 0FFFFFFFFh
 * 000000014027D6DB: jnz     short loc_14027D6C7
 * 000000014027D6DD: mov     rax, r8
 * 000000014027D6E0: shr     rax, 1Fh
 * 000000014027D6E4: xor     r10d, r10d
 * 000000014027D6E7: jmp     short loc_14027D6F0
 * 000000014027D6E9: xor     r8d, eax
 * 000000014027D6EC: shr     rax, 1Fh
 * 000000014027D6F0: test    rax, rax
 * 000000014027D6F3: jnz     short loc_14027D6E9
 * 000000014027D6F5: mov     rax, [rbp+1A50h+var_1988]
 * 000000014027D6FC: btr     r8d, 1Fh
 * 000000014027D701: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027D705: mov     r11d, [rbp+1A50h+var_1A50]
 * 000000014027D709: mov     [rax+8], r8d
 * 000000014027D70D: jmp     short loc_14027D712
 * 000000014027D70F: xor     r10d, r10d
 * 000000014027D712: mov     r9, [rbp+1A50h+var_1A48]
 * 000000014027D716: mov     r8d, [rbp+1A50h+var_19F8]
 * 000000014027D71A: mov     edx, [rbp+1A50h+var_1A18]
 * 000000014027D71D: cmp     r13d, r8d
 * 000000014027D720: mov     r13, [rbp+1A50h+var_19E0]
 * 000000014027D724: jb      loc_14027D9A0
 * 000000014027D72A: cmp     [rbp+1A50h+var_1A08], edx
 * 000000014027D72D: ja      loc_14027D9A0
 * 000000014027D733: cmp     r9, r13
 * 000000014027D736: jz      loc_14027D9A0
 * 000000014027D73C: mov     rax, [rbp+1A50h+var_1A10]
 * 000000014027D740: mov     r13d, [rax+4]
 * 000000014027D744: cmp     r13d, edx
 * 000000014027D747: ja      loc_14027D99C
 * 000000014027D74D: mov     rcx, [rbp+1A50h+var_19B8]
 * 000000014027D754: mov     esi, 0Ch
 * 000000014027D759: lea     r8d, [rsi-0Bh]
 * 000000014027D75D: cmp     rax, [rbp+1A50h+var_19E0]
 * 000000014027D761: jz      loc_14027D99C
 * 000000014027D767: test    r11d, r11d
 * 000000014027D76A: jz      short loc_14027D774
 * 000000014027D76C: mov     byte ptr [rcx], 80h
 * 000000014027D76F: jmp     loc_14027D96D
 * 000000014027D774: mov     edx, [rax]
 * 000000014027D776: mov     ecx, [r9+4]
 * 000000014027D77A: mov     [rbp+1A50h+var_1A04], edx
 * 000000014027D77D: cmp     edx, ecx
 * 000000014027D77F: jnb     short loc_14027D7D4
 * 000000014027D781: test    dword ptr [r14+748h], 200000h
 * 000000014027D78C: jz      loc_140280732
 * 000000014027D792: cmp     [r14+6C0h], r10d
 * 000000014027D799: jnz     short loc_14027D7D4
 * 000000014027D79B: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027D7A5: add     rax, r14
 * 000000014027D7A8: mov     [r14+6C8h], rax
 * 000000014027D7AF: mov     eax, 1
 * 000000014027D7B4: mov     [r14+6D0h], r10
 * 000000014027D7BB: mov     qword ptr [r14+6D8h], 10Fh
 * 000000014027D7C6: mov     [r14+6E0h], r12
 * 000000014027D7CD: mov     [r14+6C0h], eax
 * 000000014027D7D4: mov     r9d, edx
 * 000000014027D7D7: lea     rsi, [r12+rcx]
 * 000000014027D7DB: sub     r9d, ecx
 * 000000014027D7DE: lea     rdx, [rbp+1A50h+var_1648]
 * 000000014027D7E5: mov     r15d, r9d
 * 000000014027D7E8: lea     rcx, [rbp+1A50h+var_1790]
 * 000000014027D7EF: add     r15, rsi
 * 000000014027D7F2: mov     r8d, r10d
 * 000000014027D7F5: mov     r10, [rdx]
 * 000000014027D7F8: mov     eax, [rcx]
 * 000000014027D7FA: add     rax, r10
 * 000000014027D7FD: cmp     rsi, rax
 * 000000014027D800: jnb     short loc_14027D80B
 * 000000014027D802: cmp     r15, r10
 * 000000014027D805: ja      loc_14027D945
 * 000000014027D80B: mov     eax, 4
 * 000000014027D810: inc     r8d
 * 000000014027D813: add     rcx, rax
 * 000000014027D816: add     rdx, 8
 * 000000014027D81A: cmp     r8d, eax
 * 000000014027D81D: jb      short loc_14027D7F5
 * 000000014027D81F: cmp     r9d, eax
 * 000000014027D822: jb      loc_14027D945
 * 000000014027D828: add     [r14+628h], r9d
 * 000000014027D82F: mov     r10, rsi
 * 000000014027D832: mov     r11d, [r14+614h]
 * 000000014027D839: mov     rax, rsi
 * 000000014027D83C: mov     r12, [r14+618h]
 * 000000014027D843: cmp     rsi, r15
 * 000000014027D846: jnb     short loc_14027D854
 * 000000014027D848: prefetchnta byte ptr [rax]
 * 000000014027D84B: add     rax, 40h ; '@'
 * 000000014027D84F: cmp     rax, r15
 * 000000014027D852: jb      short loc_14027D848
 * 000000014027D854: mov     r15d, r9d
 * 000000014027D857: mov     r8, r12
 * 000000014027D85A: shr     r15d, 7
 * 000000014027D85E: test    r15d, r15d
 * 000000014027D861: jz      short loc_14027D8D2
 * 000000014027D863: mov     edi, 1
 * 000000014027D868: mov     r14, 7010008004002001h
 * 000000014027D872: mov     eax, 8
 * 000000014027D877: xor     r8, [r10]
 * 000000014027D87A: mov     ecx, r11d
 * 000000014027D87D: rol     r8, cl
 * 000000014027D880: xor     r8, [r10+8]
 * 000000014027D884: add     r10, 10h
 * 000000014027D888: rol     r8, cl
 * 000000014027D88B: sub     rax, rdi
 * 000000014027D88E: jnz     short loc_14027D877
 * 000000014027D890: mov     rcx, r10
 * 000000014027D893: sub     rcx, rsi
 * 000000014027D896: xor     rcx, r12
 * 000000014027D899: mov     rax, rcx
 * 000000014027D89C: rol     rax, 11h
 * 000000014027D8A0: xor     rcx, rax
 * 000000014027D8A3: mov     rax, r14
 * 000000014027D8A6: mul     rcx
 * 000000014027D8A9: xor     r11d, eax
 * 000000014027D8AC: mov     [rbp+1A50h+var_13B0], rdx
 * 000000014027D8B3: xor     r11d, edx
 * 000000014027D8B6: and     r11d, 3Fh
 * 000000014027D8BA: cmovz   r11d, edi
 * 000000014027D8BE: add     r15d, 0FFFFFFFFh
 * 000000014027D8C2: jnz     short loc_14027D872
 * 000000014027D8C4: mov     r14, [rbp+1A50h+var_19D0]
 * 000000014027D8CB: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027D8D2: and     r9d, 7Fh
 * 000000014027D8D6: mov     esi, 1
 * 000000014027D8DB: cmp     r9d, 8
 * 000000014027D8DF: jb      short loc_14027D8FE
 * 000000014027D8E1: mov     eax, r9d
 * 000000014027D8E4: shr     rax, 3
 * 000000014027D8E8: xor     r8, [r10]
 * 000000014027D8EB: mov     ecx, r11d
 * 000000014027D8EE: rol     r8, cl
 * 000000014027D8F1: add     r10, 8
 * 000000014027D8F5: add     r9d, 0FFFFFFF8h
 * 000000014027D8F9: sub     rax, rsi
 * 000000014027D8FC: jnz     short loc_14027D8E8
 * 000000014027D8FE: test    r9d, r9d
 * 000000014027D901: jz      short loc_14027D919
 * 000000014027D903: movzx   eax, byte ptr [r10]
 * 000000014027D907: mov     ecx, r11d
 * 000000014027D90A: xor     r8, rax
 * 000000014027D90D: add     r10, rsi
 * 000000014027D910: rol     r8, cl
 * 000000014027D913: add     r9d, 0FFFFFFFFh
 * 000000014027D917: jnz     short loc_14027D903
 * 000000014027D919: mov     rax, r8
 * 000000014027D91C: shr     rax, 7
 * 000000014027D920: xor     r10d, r10d
 * 000000014027D923: jmp     short loc_14027D92C
 * 000000014027D925: xor     r8b, al
 * 000000014027D928: shr     rax, 7
 * 000000014027D92C: test    rax, rax
 * 000000014027D92F: jnz     short loc_14027D925
 * 000000014027D931: mov     rax, [rbp+1A50h+var_19B8]
 * 000000014027D938: and     r8b, 7Fh
 * 000000014027D93C: mov     r11d, [rbp+1A50h+var_1A50]
 * 000000014027D940: mov     [rax], r8b
 * 000000014027D943: jmp     short loc_14027D952
 * 000000014027D945: mov     rax, [rbp+1A50h+var_19B8]
 * 000000014027D94C: xor     r10d, r10d
 * 000000014027D94F: mov     byte ptr [rax], 80h
 * 000000014027D952: mov     edx, [rbp+1A50h+var_1A18]
 * 000000014027D955: mov     esi, 0Ch
 * 000000014027D95A: mov     rax, [rbp+1A50h+var_1A10]
 * 000000014027D95E: mov     rcx, [rbp+1A50h+var_19B8]
 * 000000014027D965: mov     r9, [rbp+1A50h+var_1A48]
 * 000000014027D969: lea     r8d, [rsi-0Bh]
 * 000000014027D96D: add     r9, rsi
 * 000000014027D970: add     rcx, r8
 * 000000014027D973: add     rax, rsi
 * 000000014027D976: mov     [rbp+1A50h+var_1A48], r9
 * 000000014027D97A: mov     [rbp+1A50h+var_19B8], rcx
 * 000000014027D981: mov     [rbp+1A50h+var_1A10], rax
 * 000000014027D985: cmp     rax, [rbp+1A50h+var_19E0]
 * 000000014027D989: jz      short loc_14027D98F
 * 000000014027D98B: mov     r13d, [rax+4]
 * 000000014027D98F: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027D993: cmp     r13d, edx
 * 000000014027D996: jbe     loc_14027D75D
 * 000000014027D99C: mov     r13, [rbp+1A50h+var_19E0]
 * 000000014027D9A0: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027D9A4: test    r11d, r11d
 * 000000014027D9A7: jnz     loc_14027DB39
 * 000000014027D9AD: mov     eax, [rbp+1A50h+var_1A04]
 * 000000014027D9B0: cmp     eax, edx
 * 000000014027D9B2: jz      loc_14027DB39
 * 000000014027D9B8: mov     rcx, [rbp+1A50h+var_1988]
 * 000000014027D9BF: mov     r9d, edx
 * 000000014027D9C2: mov     r8d, r10d
 * 000000014027D9C5: mov     [rcx+0Ch], eax
 * 000000014027D9C8: mov     [rcx+10h], edx
 * 000000014027D9CB: lea     rdx, [rbp+1A50h+var_1648]
 * 000000014027D9D2: mov     eax, [rcx+0Ch]
 * 000000014027D9D5: lea     rcx, [rbp+1A50h+var_1790]
 * 000000014027D9DC: sub     r9d, eax
 * 000000014027D9DF: mov     r15d, r9d
 * 000000014027D9E2: lea     rsi, [r12+rax]
 * 000000014027D9E6: add     r15, rsi
 * 000000014027D9E9: mov     r10, [rdx]
 * 000000014027D9EC: mov     eax, [rcx]
 * 000000014027D9EE: add     rax, r10
 * 000000014027D9F1: cmp     rsi, rax
 * 000000014027D9F4: jnb     short loc_14027D9FF
 * 000000014027D9F6: cmp     r15, r10
 * 000000014027D9F9: ja      loc_14027DB36
 * 000000014027D9FF: mov     eax, 4
 * 000000014027DA04: inc     r8d
 * 000000014027DA07: add     rcx, rax
 * 000000014027DA0A: add     rdx, 8
 * 000000014027DA0E: cmp     r8d, eax
 * 000000014027DA11: jb      short loc_14027D9E9
 * 000000014027DA13: add     [r14+628h], r9d
 * 000000014027DA1A: mov     r10, rsi
 * 000000014027DA1D: mov     r11d, [r14+614h]
 * 000000014027DA24: mov     rax, rsi
 * 000000014027DA27: mov     r12, [r14+618h]
 * 000000014027DA2E: cmp     rsi, r15
 * 000000014027DA31: jnb     short loc_14027DA3F
 * 000000014027DA33: prefetchnta byte ptr [rax]
 * 000000014027DA36: add     rax, 40h ; '@'
 * 000000014027DA3A: cmp     rax, r15
 * 000000014027DA3D: jb      short loc_14027DA33
 * 000000014027DA3F: mov     r15d, r9d
 * 000000014027DA42: mov     r8, r12
 * 000000014027DA45: shr     r15d, 7
 * 000000014027DA49: test    r15d, r15d
 * 000000014027DA4C: jz      short loc_14027DAC1
 * 000000014027DA4E: mov     rdi, 7010008004002001h
 * 000000014027DA58: mov     edx, 8
 * 000000014027DA5D: lea     r13d, [rdx-7]
 * 000000014027DA61: mov     rax, [r10]
 * 000000014027DA64: mov     ecx, r11d
 * 000000014027DA67: xor     rax, r8
 * 000000014027DA6A: mov     r8, [r10+8]
 * 000000014027DA6E: rol     rax, cl
 * 000000014027DA71: add     r10, 10h
 * 000000014027DA75: xor     r8, rax
 * 000000014027DA78: rol     r8, cl
 * 000000014027DA7B: sub     rdx, r13
 * 000000014027DA7E: jnz     short loc_14027DA61
 * 000000014027DA80: mov     rcx, r10
 * 000000014027DA83: sub     rcx, rsi
 * 000000014027DA86: xor     rcx, r12
 * 000000014027DA89: mov     rax, rcx
 * 000000014027DA8C: rol     rax, 11h
 * 000000014027DA90: xor     rcx, rax
 * 000000014027DA93: mov     rax, rdi
 * 000000014027DA96: mul     rcx
 * 000000014027DA99: xor     eax, edx
 * 000000014027DA9B: mov     [rbp+1A50h+var_13A8], rdx
 * 000000014027DAA2: xor     r11d, eax
 * 000000014027DAA5: mov     rax, r13
 * 000000014027DAA8: and     r11d, 3Fh
 * 000000014027DAAC: cmovz   r11d, eax
 * 000000014027DAB0: add     r15d, 0FFFFFFFFh
 * 000000014027DAB4: jnz     short loc_14027DA58
 * 000000014027DAB6: mov     r13, [rbp+1A50h+var_19E0]
 * 000000014027DABA: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027DAC1: and     r9d, 7Fh
 * 000000014027DAC5: mov     esi, 1
 * 000000014027DACA: cmp     r9d, 8
 * 000000014027DACE: jb      short loc_14027DAED
 * 000000014027DAD0: mov     edx, r9d
 * 000000014027DAD3: shr     rdx, 3
 * 000000014027DAD7: xor     r8, [r10]
 * 000000014027DADA: mov     ecx, r11d
 * 000000014027DADD: rol     r8, cl
 * 000000014027DAE0: add     r10, 8
 * 000000014027DAE4: add     r9d, 0FFFFFFF8h
 * 000000014027DAE8: sub     rdx, rsi
 * 000000014027DAEB: jnz     short loc_14027DAD7
 * 000000014027DAED: test    r9d, r9d
 * 000000014027DAF0: jz      short loc_14027DB08
 * 000000014027DAF2: movzx   eax, byte ptr [r10]
 * 000000014027DAF6: mov     ecx, r11d
 * 000000014027DAF9: xor     r8, rax
 * 000000014027DAFC: add     r10, rsi
 * 000000014027DAFF: rol     r8, cl
 * 000000014027DB02: add     r9d, 0FFFFFFFFh
 * 000000014027DB06: jnz     short loc_14027DAF2
 * 000000014027DB08: mov     rax, r8
 * 000000014027DB0B: shr     rax, 1Fh
 * 000000014027DB0F: xor     r10d, r10d
 * 000000014027DB12: jmp     short loc_14027DB1B
 * 000000014027DB14: xor     r8d, eax
 * 000000014027DB17: shr     rax, 1Fh
 * 000000014027DB1B: test    rax, rax
 * 000000014027DB1E: jnz     short loc_14027DB14
 * 000000014027DB20: mov     rsi, [rbp+1A50h+var_1988]
 * 000000014027DB27: btr     r8d, 1Fh
 * 000000014027DB2C: mov     r12, [rbp+1A50h+var_1A20]
 * 000000014027DB30: mov     [rsi+14h], r8d
 * 000000014027DB34: jmp     short loc_14027DB40
 * 000000014027DB36: xor     r10d, r10d
 * 000000014027DB39: mov     rsi, [rbp+1A50h+var_1988]
 * 000000014027DB40: mov     rdx, [rbp+1A50h+var_1A48]
 * 000000014027DB44: cmp     rdx, r13
 * 000000014027DB47: jz      short loc_14027DB8F
 * 000000014027DB49: mov     eax, [rdx]
 * 000000014027DB4B: mov     ecx, [rdx+4]
 * 000000014027DB4E: cmp     eax, [rbp+1A50h+var_19F8]
 * 000000014027DB51: jb      short loc_14027DB8F
 * 000000014027DB53: cmp     ecx, [rbp+1A50h+var_1A18]
 * 000000014027DB56: ja      short loc_14027DB8F
 * 000000014027DB58: mov     r8, [rbp+1A50h+var_1A10]
 * 000000014027DB5C: cmp     r8, r13
 * 000000014027DB5F: jz      short loc_14027DB83
 * 000000014027DB61: mov     rax, [rbp+1A50h+var_19B8]
 * 000000014027DB68: mov     byte ptr [rax], 80h
 * 000000014027DB6B: inc     rax
 * 000000014027DB6E: mov     [rbp+1A50h+var_19B8], rax
 * 000000014027DB75: mov     eax, 0Ch
 * 000000014027DB7A: add     r8, rax
 * 000000014027DB7D: mov     [rbp+1A50h+var_1A10], r8
 * 000000014027DB81: jmp     short loc_14027DB88
 * 000000014027DB83: mov     eax, 0Ch
 * 000000014027DB88: add     rdx, rax
 * 000000014027DB8B: mov     [rbp+1A50h+var_1A48], rdx
 * 000000014027DB8F: mov     r15, [rbp+1A50h+var_1A38]
 * 000000014027DB93: add     rsi, 18h
 * 000000014027DB97: add     r15, 28h ; '('
 * 000000014027DB9B: mov     [rbp+1A50h+var_1988], rsi
 * 000000014027DBA2: mov     [rbp+1A50h+var_1A38], r15
 * 000000014027DBA6: cmp     rsi, [rbp+1A50h+var_1A30]
 * 000000014027DBAA: jz      short loc_14027DBB7
 * 000000014027DBAC: mov     r9d, 1
 * 000000014027DBB2: jmp     loc_14027D364
 * 000000014027DBB7: xor     r13d, r13d
 * 000000014027DBBA: mov     rsi, rbx
 * 000000014027DBBD: mov     [rbp+1A50h+var_1968], rbx
 * 000000014027DBC4: mov     ecx, r13d
 * 000000014027DBC7: mov     [rbp+1A50h+var_19D8], ecx
 * 000000014027DBCA: jmp     loc_14027C559
 * 000000014027DBCF: xor     r13d, r13d
 * 000000014027DBD2: mov     r12d, 80000000h
 * 000000014027DBD8: mov     rax, [rsi+1F8h]
 * 000000014027DBDF: mov     rcx, [rbp+1A50h+var_1858]
 * 000000014027DBE6: call    KeGuardDispatchICall
 * 000000014027DBEB: mov     ecx, [rax+94h]
 * 000000014027DBF1: cmp     ecx, 14h
 * 000000014027DBF4: jb      loc_14027B8ED
 * 000000014027DBFA: mov     eax, [rax+90h]
 * 000000014027DC00: mov     r15d, ecx
 * 000000014027DC03: mov     rcx, [rbp+1A50h+var_1858]
 * 000000014027DC0A: add     r15, rcx
 * 000000014027DC0D: add     r15, rax
 * 000000014027DC10: lea     r14, [rcx+rax]
 * 000000014027DC14: jmp     short loc_14027DC66
 * 000000014027DC16: cmp     [r14+0Ch], r13d
 * 000000014027DC1A: jz      short loc_14027DC6B
 * 000000014027DC1C: mov     eax, [r14+10h]
 * 000000014027DC20: test    eax, eax
 * 000000014027DC22: jz      short loc_14027DC6B
 * 000000014027DC24: mov     rdx, [rax+rcx]
 * 000000014027DC28: test    rdx, rdx
 * 000000014027DC2B: jz      short loc_14027DC62
 * 000000014027DC2D: mov     r8d, 8000000Fh
 * 000000014027DC33: lea     rcx, [rbp+1A50h+var_1968]
 * 000000014027DC3A: call    sub_1402807C8
 * 000000014027DC3F: mov     rsi, [rbp+1A50h+var_1968]
 * 000000014027DC46: mov     ecx, eax
 * 000000014027DC48: add     eax, r12d
 * 000000014027DC4B: mov     rbx, rsi
 * 000000014027DC4E: test    r12d, eax
 * 000000014027DC51: jnz     short loc_14027DC5B
 * 000000014027DC53: cmp     ecx, 0C000010Eh
 * 000000014027DC59: jnz     short loc_14027DC6E
 * 000000014027DC5B: mov     rcx, [rbp+1A50h+var_1858]
 * 000000014027DC62: add     r14, 14h
 * 000000014027DC66: cmp     r14, r15
 * 000000014027DC69: jnz     short loc_14027DC16
 * 000000014027DC6B: mov     ecx, r13d
 * 000000014027DC6E: lea     eax, [rcx+r12]
 * 000000014027DC72: test    r12d, eax
 * 000000014027DC75: jnz     short loc_14027DC7F
 * 000000014027DC77: cmp     ecx, 0C000010Eh
 * 000000014027DC7D: jnz     short loc_14027DCE5
 * 000000014027DC7F: mov     rax, [rbx+4F0h]
 * 000000014027DC86: lea     r14, [rbx+738h]
 * 000000014027DC8D: lea     r8, [rbp+1A50h+var_1690]
 * 000000014027DC94: mov     rdx, r14
 * 000000014027DC97: mov     rcx, [rax+20h]
 * 000000014027DC9B: mov     rax, [rbx+200h]
 * 000000014027DCA2: call    KeGuardDispatchICall
 * 000000014027DCA7: test    rax, rax
 * 000000014027DCAA: jz      loc_14027DD6E
 * 000000014027DCB0: mov     rax, [rbx+1F8h]
 * 000000014027DCB7: mov     rcx, [r14]
 * 000000014027DCBA: call    KeGuardDispatchICall
 * 000000014027DCBF: test    rax, rax
 * 000000014027DCC2: jz      loc_14027DD6E
 * 000000014027DCC8: mov     eax, [rax+50h]
 * 000000014027DCCB: mov     [rbx+734h], eax
 * 000000014027DCD1: mov     dword ptr [rbx+718h], 8
 * 000000014027DCDB: mov     dword ptr [rbx+718h], 9
 * 000000014027DCE5: mov     r12d, 1
 * 000000014027DCEB: test    dword ptr [rbx+748h], 8000h
 * 000000014027DCF5: jnz     short loc_14027DD04
 * 000000014027DCF7: cmp     [rbx+6C0h], r13d
 * 000000014027DCFE: jnz     loc_14027E016
 * 000000014027DD04: mov     r14, [rbx+740h]
 * 000000014027DD0B: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014027DD12: mov     [rbx+740h], r13
 * 000000014027DD19: mov     rcx, r14
 * 000000014027DD1C: mov     rax, [rbx+290h]
 * 000000014027DD23: call    KeGuardDispatchICall
 * 000000014027DD28: mov     eax, [rbx+748h]
 * 000000014027DD2E: test    r12b, al
 * 000000014027DD31: jz      loc_14027DDCD
 * 000000014027DD37: and     eax, 0FFFFFFFEh
 * 000000014027DD3A: mov     rcx, r14
 * 000000014027DD3D: mov     [rbx+748h], eax
 * 000000014027DD43: mov     rax, [rbx+278h]
 * 000000014027DD4A: call    KeGuardDispatchICall
 * 000000014027DD4F: mov     r14, rax
 * 000000014027DD52: test    rax, rax
 * 000000014027DD55: jz      short loc_14027DDC6
 * 000000014027DD57: mov     rax, [rbx+298h]
 * 000000014027DD5E: mov     rcx, r14
 * 000000014027DD61: call    KeGuardDispatchICall
 * 000000014027DD66: mov     [rbx+730h], eax
 * 000000014027DD6C: jmp     short loc_14027DDCD
 * 000000014027DD6E: mov     r12d, 1
 * 000000014027DD74: cmp     [rbx+6C0h], r13d
 * 000000014027DD7B: jnz     loc_14027DCEB
 * 000000014027DD81: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027DD8B: add     rax, rbx
 * 000000014027DD8E: mov     [rbx+6C8h], rax
 * 000000014027DD95: mov     [rbx+6D0h], r13
 * 000000014027DD9C: mov     qword ptr [rbx+6D8h], 105h
 * 000000014027DDA7: mov     qword ptr [rbx+6E0h], 0FFFFFFFFC000007Bh
 * 000000014027DDB2: mov     [rbx+6C0h], r12d
 * 000000014027DDB9: jmp     loc_14027DCEB
 * 000000014027DDBE: xor     r13d, r13d
 * 000000014027DDC1: jmp     loc_14027DCEB
 * 000000014027DDC6: or      dword ptr [rbx+730h], 0FFFFFFFFh
 * 000000014027DDCD: test    r14, r14
 * 000000014027DDD0: jz      loc_14027E016
 * 000000014027DDD6: mov     rax, [rbx+280h]
 * 000000014027DDDD: mov     rcx, r14
 * 000000014027DDE0: jmp     loc_14027E011
 * 000000014027DDE5: mov     eax, [rsi+630h]
 * 000000014027DDEB: test    r12b, al
 * 000000014027DDEE: jz      loc_14027E016
 * 000000014027DDF4: mov     ecx, [rsi+730h]
 * 000000014027DDFA: or      r15d, 0FFFFFFFFh
 * 000000014027DDFE: cmp     ecx, r15d
 * 000000014027DE01: jz      short loc_14027DE14
 * 000000014027DE03: mov     rax, [rsi+270h]
 * 000000014027DE0A: call    KeGuardDispatchICall
 * 000000014027DE0F: mov     rbx, rax
 * 000000014027DE12: jmp     short loc_14027DE17
 * 000000014027DE14: mov     rbx, r13
 * 000000014027DE17: test    rbx, rbx
 * 000000014027DE1A: jnz     short loc_14027DE36
 * 000000014027DE1C: mov     rax, [rsi+278h]
 * 000000014027DE23: xor     ecx, ecx
 * 000000014027DE25: call    KeGuardDispatchICall
 * 000000014027DE2A: mov     rbx, rax
 * 000000014027DE2D: test    rax, rax
 * 000000014027DE30: jz      loc_14027E016
 * 000000014027DE36: mov     rax, [rsi+288h]
 * 000000014027DE3D: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014027DE44: mov     rcx, rbx
 * 000000014027DE47: call    KeGuardDispatchICall
 * 000000014027DE4C: mov     r14d, eax
 * 000000014027DE4F: test    eax, eax
 * 000000014027DE51: jns     short loc_14027DE64
 * 000000014027DE53: mov     rax, [rsi+280h]
 * 000000014027DE5A: mov     rcx, rbx
 * 000000014027DE5D: call    KeGuardDispatchICall
 * 000000014027DE62: jmp     short loc_14027DEC7
 * 000000014027DE64: mov     [rsi+740h], rbx
 * 000000014027DE6B: mov     rax, [rsi+2B0h]
 * 000000014027DE72: call    KeGuardDispatchICall
 * 000000014027DE77: mov     rbx, rax
 * 000000014027DE7A: mov     rax, [rsi+2D0h]
 * 000000014027DE81: mov     rcx, rbx
 * 000000014027DE84: call    KeGuardDispatchICall
 * 000000014027DE89: mov     rdx, rax
 * 000000014027DE8C: test    rax, rax
 * 000000014027DE8F: jnz     short loc_14027DE96
 * 000000014027DE91: mov     eax, r12d
 * 000000014027DE94: jmp     short loc_14027DEA8
 * 000000014027DE96: mov     rax, [rsi+2E0h]
 * 000000014027DE9D: mov     rcx, rbx
 * 000000014027DEA0: call    KeGuardDispatchICall
 * 000000014027DEA5: mov     eax, r13d
 * 000000014027DEA8: shl     eax, 2
 * 000000014027DEAB: mov     r14d, r13d
 * 000000014027DEAE: xor     eax, [rsi+74Ch]
 * 000000014027DEB4: and     eax, 4
 * 000000014027DEB7: xor     [rsi+74Ch], eax
 * 000000014027DEBD: add     dword ptr [rsi+628h], 10000h
 * 000000014027DEC7: test    r14d, r14d
 * 000000014027DECA: js      loc_14027E016
 * 000000014027DED0: mov     rax, [rsi+720h]
 * 000000014027DED7: mov     rcx, [rax]
 * 000000014027DEDA: cmp     rcx, [rsi+728h]
 * 000000014027DEE1: jnz     loc_14027DF7C
 * 000000014027DEE7: mov     rax, [rsi+4F0h]
 * 000000014027DEEE: cmp     [rax+30h], r13d
 * 000000014027DEF2: jz      loc_14027DF7C
 * 000000014027DEF8: lock or [rsp+0DA0h+var_DA0], r13d
 * 000000014027DEFD: mov     rax, [rsi+720h]
 * 000000014027DF04: mov     rcx, [rax]
 * 000000014027DF07: cmp     rcx, [rsi+728h]
 * 000000014027DF0E: jnz     short loc_14027DF7C
 * 000000014027DF10: mov     rax, [rsi+720h]
 * 000000014027DF17: mov     rcx, [rax]
 * 000000014027DF1A: mov     rax, [rsi+728h]
 * 000000014027DF21: cmp     [rsi+6C0h], r13d
 * 000000014027DF28: jnz     short loc_14027DF38
 * 000000014027DF2A: xor     rcx, rax
 * 000000014027DF2D: mov     rax, [rsi+510h]
 * 000000014027DF34: mov     [rax+18h], rcx
 * 000000014027DF38: mov     rcx, [rsi+728h]
 * 000000014027DF3F: cmp     [rsi+6C0h], r13d
 * 000000014027DF46: jnz     short loc_14027DF7C
 * 000000014027DF48: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027DF52: add     rax, rsi
 * 000000014027DF55: mov     [rsi+6C8h], rax
 * 000000014027DF5C: mov     [rsi+6D0h], r13
 * 000000014027DF63: mov     qword ptr [rsi+6D8h], 103h
 * 000000014027DF6E: mov     [rsi+6E0h], rcx
 * 000000014027DF75: mov     [rsi+6C0h], r12d
 * 000000014027DF7C: test    dword ptr [rsi+748h], 8000h
 * 000000014027DF86: jnz     short loc_14027DF95
 * 000000014027DF88: cmp     [rsi+6C0h], r13d
 * 000000014027DF8F: jnz     loc_14027E016
 * 000000014027DF95: mov     rbx, [rsi+740h]
 * 000000014027DF9C: lea     rdx, [rbp+1A50h+var_1540]
 * 000000014027DFA3: mov     [rsi+740h], r13
 * 000000014027DFAA: mov     rcx, rbx
 * 000000014027DFAD: mov     rax, [rsi+290h]
 * 000000014027DFB4: call    KeGuardDispatchICall
 * 000000014027DFB9: mov     eax, [rsi+748h]
 * 000000014027DFBF: test    r12b, al
 * 000000014027DFC2: jz      short loc_14027E002
 * 000000014027DFC4: and     eax, 0FFFFFFFEh
 * 000000014027DFC7: mov     rcx, rbx
 * 000000014027DFCA: mov     [rsi+748h], eax
 * 000000014027DFD0: mov     rax, [rsi+278h]
 * 000000014027DFD7: call    KeGuardDispatchICall
 * 000000014027DFDC: mov     rbx, rax
 * 000000014027DFDF: test    rax, rax
 * 000000014027DFE2: jz      short loc_14027DFFB
 * 000000014027DFE4: mov     rax, [rsi+298h]
 * 000000014027DFEB: mov     rcx, rbx
 * 000000014027DFEE: call    KeGuardDispatchICall
 * 000000014027DFF3: mov     [rsi+730h], eax
 * 000000014027DFF9: jmp     short loc_14027E002
 * 000000014027DFFB: mov     [rsi+730h], r15d
 * 000000014027E002: test    rbx, rbx
 * 000000014027E005: jz      short loc_14027E016
 * 000000014027E007: mov     rax, [rsi+280h]
 * 000000014027E00E: mov     rcx, rbx
 * 000000014027E011: call    KeGuardDispatchICall
 * 000000014027E016: mov     [rbp+1A50h+var_1A20], rsi
 * 000000014027E01A: test    dword ptr [rsi+748h], 2000000h
 * 000000014027E024: jz      short loc_14027E099
 * 000000014027E026: mov     rbx, [rsi+750h]
 * 000000014027E02D: mov     rax, [rsi+388h]
 * 000000014027E034: mov     rcx, rbx
 * 000000014027E037: call    KeGuardDispatchICall
 * 000000014027E03C: test    eax, eax
 * 000000014027E03E: jz      short loc_14027E07D
 * 000000014027E040: cmp     [rsi+6C0h], r13d
 * 000000014027E047: jnz     short loc_14027E07D
 * 000000014027E049: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027E053: add     rax, rsi
 * 000000014027E056: mov     [rsi+6C8h], rax
 * 000000014027E05D: mov     [rsi+6D0h], r13
 * 000000014027E064: mov     qword ptr [rsi+6D8h], 110h
 * 000000014027E06F: mov     [rsi+6E0h], r13
 * 000000014027E076: mov     [rsi+6C0h], r12d
 * 000000014027E07D: mov     rax, [rsi+380h]
 * 000000014027E084: lea     rdx, sub_140284260
 * 000000014027E08B: xor     r9d, r9d
 * 000000014027E08E: mov     r8, rsi
 * 000000014027E091: mov     rcx, rbx
 * 000000014027E094: call    KeGuardDispatchICall
 * 000000014027E099: test    dword ptr [rsi+74Ch], 100h
 * 000000014027E0A3: jz      short loc_14027E0B4
 * 000000014027E0A5: mov     rax, [rbp+1A50h+var_1970]
 * 000000014027E0AC: mov     [rsp+0DA8h], rax
 * 000000014027E0B4: test    dword ptr [rsi+748h], 40000h
 * 000000014027E0BE: jz      loc_14027E153
 * 000000014027E0C4: rdtsc
 * 000000014027E0C6: shl     rdx, 20h
 * 000000014027E0CA: or      rax, rdx
 * 000000014027E0CD: mov     rcx, rax
 * 000000014027E0D0: ror     rax, 3
 * 000000014027E0D4: xor     rcx, rax
 * 000000014027E0D7: mov     rax, 7010008004002001h
 * 000000014027E0E1: mul     rcx
 * 000000014027E0E4: mov     rcx, rdx
 * 000000014027E0E7: mov     [rbp+1A50h+var_13A0], rdx
 * 000000014027E0EE: xor     rcx, rax
 * 000000014027E0F1: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014027E0FB: mul     rcx
 * 000000014027E0FE: shr     rdx, 3
 * 000000014027E102: lea     rax, [rdx+rdx*4]
 * 000000014027E106: add     rax, rax
 * 000000014027E109: sub     rcx, rax
 * 000000014027E10C: mov     eax, 2
 * 000000014027E111: cmp     rcx, rax
 * 000000014027E114: jnb     short loc_14027E153
 * 000000014027E116: cmp     [rsi+6C0h], r13d
 * 000000014027E11D: jnz     short loc_14027E153
 * 000000014027E11F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027E129: add     rax, rsi
 * 000000014027E12C: mov     [rsi+6C8h], rax
 * 000000014027E133: mov     [rsi+6D0h], r13
 * 000000014027E13A: mov     qword ptr [rsi+6D8h], 108h
 * 000000014027E145: mov     [rsi+6E0h], r13
 * 000000014027E14C: mov     [rsi+6C0h], r12d
 * 000000014027E153: mov     eax, [rsi+748h]
 * 000000014027E159: mov     r11d, 8000h
 * 000000014027E15F: bt      eax, 1Eh
 * 000000014027E163: jb      short loc_14027E1CD
 * 000000014027E165: test    r11d, eax
 * 000000014027E168: jnz     short loc_14027E173
 * 000000014027E16A: cmp     [rsi+6C0h], r13d
 * 000000014027E171: jnz     short loc_14027E1CD
 * 000000014027E173: mov     rcx, [rsp+0DA0h+arg_0]
 * 000000014027E17B: test    [rcx+748h], r11d
 * 000000014027E182: jnz     short loc_14027E1CD
 * 000000014027E184: add     rcx, 6C0h
 * 000000014027E18B: cmp     [rcx], r13d
 * 000000014027E18E: jz      short loc_14027E1CD
 * 000000014027E190: mov     r8d, 28h ; '('
 * 000000014027E196: lea     rdx, [rsi+6C0h]
 * 000000014027E19D: lea     r9d, [r8-23h]
 * 000000014027E1A1: mov     rax, [rdx]
 * 000000014027E1A4: add     r8d, 0FFFFFFF8h
 * 000000014027E1A8: mov     [rcx], rax
 * 000000014027E1AB: add     rdx, 8
 * 000000014027E1AF: add     rcx, 8
 * 000000014027E1B3: sub     r9, r12
 * 000000014027E1B6: jnz     short loc_14027E1A1
 * 000000014027E1B8: test    r8d, r8d
 * 000000014027E1BB: jz      short loc_14027E1CD
 * 000000014027E1BD: mov     al, [rdx]
 * 000000014027E1BF: add     rdx, r12
 * 000000014027E1C2: mov     [rcx], al
 * 000000014027E1C4: add     rcx, r12
 * 000000014027E1C7: add     r8d, 0FFFFFFFFh
 * 000000014027E1CB: jnz     short loc_14027E1BD
 * 000000014027E1CD: test    [rsi+748h], r11d
 * 000000014027E1D4: jnz     short loc_14027E1E3
 * 000000014027E1D6: cmp     [rsi+6C0h], r13d
 * 000000014027E1DD: jnz     loc_14027EDE4
 * 000000014027E1E3: mov     eax, [rsi+7D8h]
 * 000000014027E1E9: test    eax, eax
 * 000000014027E1EB: jz      loc_14027EDE4
 * 000000014027E1F1: lea     r14, [rsi+rax]
 * 000000014027E1F5: mov     r11, [r14+8]
 * 000000014027E1F9: mov     [rbp+1A50h+var_1A38], r14
 * 000000014027E1FD: test    r11, r11
 * 000000014027E200: jz      loc_14027E4B8
 * 000000014027E206: mov     r9d, [r14+10h]
 * 000000014027E20A: mov     r8, r11
 * 000000014027E20D: add     [rsi+628h], r9d
 * 000000014027E214: mov     rax, r11
 * 000000014027E217: mov     r10d, [rsi+614h]
 * 000000014027E21E: mov     r12, [rsi+618h]
 * 000000014027E225: lea     rcx, [r11+r9]
 * 000000014027E229: cmp     r11, rcx
 * 000000014027E22C: jnb     short loc_14027E23A
 * 000000014027E22E: prefetchnta byte ptr [rax]
 * 000000014027E231: add     rax, 40h ; '@'
 * 000000014027E235: cmp     rax, rcx
 * 000000014027E238: jb      short loc_14027E22E
 * 000000014027E23A: mov     r15d, r9d
 * 000000014027E23D: mov     rbx, r12
 * 000000014027E240: shr     r15d, 7
 * 000000014027E244: test    r15d, r15d
 * 000000014027E247: jz      short loc_14027E2BD
 * 000000014027E249: mov     rdi, 7010008004002001h
 * 000000014027E253: mov     edx, 8
 * 000000014027E258: lea     r14d, [rdx-7]
 * 000000014027E25C: mov     rax, [r8]
 * 000000014027E25F: mov     ecx, r10d
 * 000000014027E262: xor     rax, rbx
 * 000000014027E265: mov     rbx, [r8+8]
 * 000000014027E269: rol     rax, cl
 * 000000014027E26C: add     r8, 10h
 * 000000014027E270: xor     rbx, rax
 * 000000014027E273: rol     rbx, cl
 * 000000014027E276: sub     rdx, r14
 * 000000014027E279: jnz     short loc_14027E25C
 * 000000014027E27B: mov     rcx, r8
 * 000000014027E27E: sub     rcx, r11
 * 000000014027E281: xor     rcx, r12
 * 000000014027E284: mov     rax, rcx
 * 000000014027E287: rol     rax, 11h
 * 000000014027E28B: xor     rcx, rax
 * 000000014027E28E: mov     rax, rdi
 * 000000014027E291: mul     rcx
 * 000000014027E294: xor     r10d, eax
 * 000000014027E297: mov     [rbp+1A50h+var_1398], rdx
 * 000000014027E29E: xor     r10d, edx
 * 000000014027E2A1: mov     rax, r14
 * 000000014027E2A4: and     r10d, 3Fh
 * 000000014027E2A8: cmovz   r10d, eax
 * 000000014027E2AC: add     r15d, 0FFFFFFFFh
 * 000000014027E2B0: jnz     short loc_14027E253
 * 000000014027E2B2: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027E2B6: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027E2BD: and     r9d, 7Fh
 * 000000014027E2C1: mov     r11d, 1
 * 000000014027E2C7: cmp     r9d, 8
 * 000000014027E2CB: jb      short loc_14027E2EA
 * 000000014027E2CD: mov     edx, r9d
 * 000000014027E2D0: shr     rdx, 3
 * 000000014027E2D4: xor     rbx, [r8]
 * 000000014027E2D7: mov     ecx, r10d
 * 000000014027E2DA: rol     rbx, cl
 * 000000014027E2DD: add     r8, 8
 * 000000014027E2E1: add     r9d, 0FFFFFFF8h
 * 000000014027E2E5: sub     rdx, r11
 * 000000014027E2E8: jnz     short loc_14027E2D4
 * 000000014027E2EA: test    r9d, r9d
 * 000000014027E2ED: jz      short loc_14027E305
 * 000000014027E2EF: movzx   eax, byte ptr [r8]
 * 000000014027E2F3: mov     ecx, r10d
 * 000000014027E2F6: xor     rbx, rax
 * 000000014027E2F9: add     r8, r11
 * 000000014027E2FC: rol     rbx, cl
 * 000000014027E2FF: add     r9d, 0FFFFFFFFh
 * 000000014027E303: jnz     short loc_14027E2EF
 * 000000014027E305: mov     rax, rbx
 * 000000014027E308: jmp     short loc_14027E30C
 * 000000014027E30A: xor     ebx, eax
 * 000000014027E30C: shr     rax, 1Fh
 * 000000014027E310: test    rax, rax
 * 000000014027E313: jnz     short loc_14027E30A
 * 000000014027E315: btr     ebx, 1Fh
 * 000000014027E319: mov     r12d, r13d
 * 000000014027E31C: cmp     ebx, [r14+14h]
 * 000000014027E320: jz      loc_14027E481
 * 000000014027E326: cmp     [r14], r13d
 * 000000014027E329: jnz     short loc_14027E333
 * 000000014027E32B: cmp     [r14+18h], r13d
 * 000000014027E32F: cmovnz  r12d, r11d
 * 000000014027E333: mov     ecx, [r14+10h]
 * 000000014027E337: mov     rdx, [r14+8]
 * 000000014027E33B: test    rcx, rcx
 * 000000014027E33E: jz      loc_14027E413
 * 000000014027E344: mov     eax, [rsi+74Ch]
 * 000000014027E34A: test    al, 40h
 * 000000014027E34C: jz      loc_14027E413
 * 000000014027E352: mov     r13, cr8
 * 000000014027E356: mov     r8d, 2
 * 000000014027E35C: mov     cr8, r8
 * 000000014027E360: lea     rax, [rcx-1]
 * 000000014027E364: mov     r15, rdx
 * 000000014027E367: add     rax, rdx
 * 000000014027E36A: lea     ecx, [r8-2]
 * 000000014027E36E: or      rax, 0FFFh
 * 000000014027E374: and     r15, 0FFFFFFFFFFFFF000h
 * 000000014027E37B: test    r8b, r12b
 * 000000014027E37E: mov     [rbp+1A50h+var_1A30], rax
 * 000000014027E382: cmovnz  ecx, r11d
 * 000000014027E386: lea     rax, [r15-1]
 * 000000014027E38A: mov     [rbp+1A50h+var_1A08], ecx
 * 000000014027E38D: mov     [rbp+1A50h+var_1970], rax
 * 000000014027E394: mov     rax, [rsi+438h]
 * 000000014027E39B: mov     edx, ecx
 * 000000014027E39D: mov     rcx, r15
 * 000000014027E3A0: call    KeGuardDispatchICall
 * 000000014027E3A5: cmp     eax, 0C000022Dh
 * 000000014027E3AA: jnz     short loc_14027E3D8
 * 000000014027E3AC: mov     r11d, 1
 * 000000014027E3B2: test    r11b, r12b
 * 000000014027E3B5: jnz     short loc_14027E408
 * 000000014027E3B7: cmp     r13b, r11b
 * 000000014027E3BA: ja      short loc_14027E3DC
 * 000000014027E3BC: movzx   eax, r13b
 * 000000014027E3C0: mov     cr8, rax
 * 000000014027E3C4: mov     al, [r15]
 * 000000014027E3C7: mov     rax, cr8
 * 000000014027E3CB: lea     eax, [r11+1]
 * 000000014027E3CF: mov     cr8, rax
 * 000000014027E3D3: mov     ecx, [rbp+1A50h+var_1A08]
 * 000000014027E3D6: jmp     short loc_14027E394
 * 000000014027E3D8: test    eax, eax
 * 000000014027E3DA: js      short loc_14027E408
 * 000000014027E3DC: mov     rax, [rbp+1A50h+var_1970]
 * 000000014027E3E3: mov     ecx, 1000h
 * 000000014027E3E8: add     rax, rcx
 * 000000014027E3EB: add     r15, rcx
 * 000000014027E3EE: mov     [rbp+1A50h+var_1970], rax
 * 000000014027E3F5: cmp     rax, [rbp+1A50h+var_1A30]
 * 000000014027E3F9: jnz     short loc_14027E3D3
 * 000000014027E3FB: movzx   eax, r13b
 * 000000014027E3FF: mov     cr8, rax
 * 000000014027E403: xor     r13d, r13d
 * 000000014027E406: jmp     short loc_14027E481
 * 000000014027E408: movzx   eax, r13b
 * 000000014027E40C: xor     r13d, r13d
 * 000000014027E40F: mov     cr8, rax
 * 000000014027E413: mov     eax, [r14+14h]
 * 000000014027E417: cmp     [rsi+6C0h], r13d
 * 000000014027E41E: jnz     short loc_14027E430
 * 000000014027E420: mov     ecx, ebx
 * 000000014027E422: xor     rcx, rax
 * 000000014027E425: mov     rax, [rsi+510h]
 * 000000014027E42C: mov     [rax+18h], rcx
 * 000000014027E430: mov     rcx, [r14+8]
 * 000000014027E434: cmp     [rsi+6C0h], r13d
 * 000000014027E43B: jnz     short loc_14027E481
 * 000000014027E43D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027E447: add     rax, rsi
 * 000000014027E44A: mov     [rsi+6C8h], rax
 * 000000014027E451: mov     rax, 0B3B74BDEE4453415h
 * 000000014027E45B: add     rax, r14
 * 000000014027E45E: mov     [rsi+6D0h], rax
 * 000000014027E465: movsxd  rax, dword ptr [r14]
 * 000000014027E468: mov     [rsi+6D8h], rax
 * 000000014027E46F: mov     eax, 1
 * 000000014027E474: mov     [rsi+6E0h], rcx
 * 000000014027E47B: mov     [rsi+6C0h], eax
 * 000000014027E481: mov     rcx, [r14+18h]
 * 000000014027E485: mov     rax, [rsi+100h]
 * 000000014027E48C: call    KeGuardDispatchICall
 * 000000014027E491: mov     [r14+8], r13
 * 000000014027E495: mov     [r14+10h], r13d
 * 000000014027E499: mov     rcx, [rsi+618h]
 * 000000014027E4A0: mov     rax, rcx
 * 000000014027E4A3: jmp     short loc_14027E4A7
 * 000000014027E4A5: xor     ecx, eax
 * 000000014027E4A7: shr     rax, 1Fh
 * 000000014027E4AB: test    rax, rax
 * 000000014027E4AE: jnz     short loc_14027E4A5
 * 000000014027E4B0: btr     ecx, 1Fh
 * 000000014027E4B4: mov     [r14+14h], ecx
 * 000000014027E4B8: rdtsc
 * 000000014027E4BA: shl     rdx, 20h
 * 000000014027E4BE: mov     r9, 7010008004002001h
 * 000000014027E4C8: or      rax, rdx
 * 000000014027E4CB: mov     rcx, rax
 * 000000014027E4CE: ror     rax, 3
 * 000000014027E4D2: xor     rcx, rax
 * 000000014027E4D5: mov     rax, r9
 * 000000014027E4D8: mul     rcx
 * 000000014027E4DB: mov     rcx, rdx
 * 000000014027E4DE: mov     [rbp+1A50h+var_1390], rdx
 * 000000014027E4E5: xor     rcx, rax
 * 000000014027E4E8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027E4F2: mul     rcx
 * 000000014027E4F5: shr     rdx, 1
 * 000000014027E4F8: lea     rax, [rdx+rdx*2]
 * 000000014027E4FC: cmp     rcx, rax
 * 000000014027E4FF: jnz     loc_14027EDEF
 * 000000014027E505: test    dword ptr [rsi+748h], 10000000h
 * 000000014027E50F: lea     r12, [r14+18h]
 * 000000014027E513: mov     r8d, [rsi+610h]
 * 000000014027E51A: mov     eax, 1
 * 000000014027E51F: movzx   r11d, al
 * 000000014027E523: cmovnz  r11d, r13d
 * 000000014027E527: mov     [rbp+1A50h+var_1A30], r12
 * 000000014027E52B: rdtsc
 * 000000014027E52D: shl     rdx, 20h
 * 000000014027E531: or      rax, rdx
 * 000000014027E534: mov     rcx, rax
 * 000000014027E537: ror     rax, 3
 * 000000014027E53B: xor     rcx, rax
 * 000000014027E53E: mov     rax, r9
 * 000000014027E541: mul     rcx
 * 000000014027E544: mov     rbx, rax
 * 000000014027E547: mov     [rbp+1A50h+var_1388], rdx
 * 000000014027E54E: xor     ebx, edx
 * 000000014027E550: and     ebx, 7FFh
 * 000000014027E556: rdtsc
 * 000000014027E558: shl     rdx, 20h
 * 000000014027E55C: or      rax, rdx
 * 000000014027E55F: mov     rcx, rax
 * 000000014027E562: ror     rax, 3
 * 000000014027E566: xor     rcx, rax
 * 000000014027E569: mov     rax, r9
 * 000000014027E56C: mul     rcx
 * 000000014027E56F: lea     r9d, [rbx+1]
 * 000000014027E573: xor     rax, rdx
 * 000000014027E576: mov     [rbp+1A50h+var_1380], rdx
 * 000000014027E57D: xor     edx, edx
 * 000000014027E57F: div     r9
 * 000000014027E582: mov     rax, [rsi+0F8h]
 * 000000014027E589: neg     r11b
 * 000000014027E58C: mov     r15, rdx
 * 000000014027E58F: lea     edx, [rbx+810h]
 * 000000014027E595: sbb     ecx, ecx
 * 000000014027E597: not     ecx
 * 000000014027E599: and     ecx, 200h
 * 000000014027E59F: call    KeGuardDispatchICall
 * 000000014027E5A4: mov     r11, rax
 * 000000014027E5A7: test    rax, rax
 * 000000014027E5AA: jnz     loc_14027E659
 * 000000014027E5B0: lea     r15d, [rax+1]
 * 000000014027E5B4: add     [rsi+7C8h], r15d
 * 000000014027E5BB: mov     r11d, 8000h
 * 000000014027E5C1: mov     r9, 7010008004002001h
 * 000000014027E5CB: mov     ebx, [rsi+748h]
 * 000000014027E5D1: mov     [rbp+1A50h+var_1A50], r13d
 * 000000014027E5D5: mov     [rbp+1A50h+var_19D0], r13
 * 000000014027E5DC: bt      ebx, 1Eh
 * 000000014027E5E0: jb      loc_14027F957
 * 000000014027E5E6: mov     r14, [rsp+0DA0h+arg_0]
 * 000000014027E5EE: cmp     rsi, r14
 * 000000014027E5F1: jnz     loc_14027F48A
 * 000000014027E5F7: test    r11d, ebx
 * 000000014027E5FA: jnz     short loc_14027E609
 * 000000014027E5FC: cmp     [rsi+6C0h], r13d
 * 000000014027E603: jnz     loc_14027F27E
 * 000000014027E609: mov     r8d, [r14+6ECh]
 * 000000014027E610: mov     rcx, r14
 * 000000014027E613: mov     edx, [r14+5E4h]
 * 000000014027E61A: call    sub_140282ED4
 * 000000014027E61F: mov     rsi, rax
 * 000000014027E622: test    rax, rax
 * 000000014027E625: jz      loc_14027F27E
 * 000000014027E62B: mov     rax, [rax+5C8h]
 * 000000014027E632: mov     r13d, [rsi+748h]
 * 000000014027E639: mov     [rbp+1A50h+var_19D0], rax
 * 000000014027E640: mov     eax, 2
 * 000000014027E645: test    al, r13b
 * 000000014027E648: jz      loc_14027EE00
 * 000000014027E64E: mov     ebx, [rsi+5E4h]
 * 000000014027E654: jmp     loc_14027EE06
 * 000000014027E659: mov     r9d, r15d
 * 000000014027E65C: mov     r8, r11
 * 000000014027E65F: cmp     r15d, 8
 * 000000014027E663: jb      short loc_14027E6B7
 * 000000014027E665: mov     r10d, r15d
 * 000000014027E668: mov     r14d, 1
 * 000000014027E66E: shr     r10, 3
 * 000000014027E672: mov     r12, 7010008004002001h
 * 000000014027E67C: rdtsc
 * 000000014027E67E: shl     rdx, 20h
 * 000000014027E682: add     r9d, 0FFFFFFF8h
 * 000000014027E686: or      rax, rdx
 * 000000014027E689: mov     rcx, rax
 * 000000014027E68C: ror     rax, 3
 * 000000014027E690: xor     rcx, rax
 * 000000014027E693: mov     rax, r12
 * 000000014027E696: mul     rcx
 * 000000014027E699: mov     [rbp+1A50h+var_1378], rdx
 * 000000014027E6A0: xor     rdx, rax
 * 000000014027E6A3: mov     [r8], rdx
 * 000000014027E6A6: add     r8, 8
 * 000000014027E6AA: sub     r10, r14
 * 000000014027E6AD: jnz     short loc_14027E67C
 * 000000014027E6AF: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027E6B3: mov     r12, [rbp+1A50h+var_1A30]
 * 000000014027E6B7: test    r9d, r9d
 * 000000014027E6BA: jz      short loc_14027E6FB
 * 000000014027E6BC: rdtsc
 * 000000014027E6BE: shl     rdx, 20h
 * 000000014027E6C2: or      rax, rdx
 * 000000014027E6C5: mov     rcx, rax
 * 000000014027E6C8: ror     rax, 3
 * 000000014027E6CC: xor     rcx, rax
 * 000000014027E6CF: mov     rax, 7010008004002001h
 * 000000014027E6D9: mul     rcx
 * 000000014027E6DC: mov     [rbp+1A50h+var_1370], rdx
 * 000000014027E6E3: xor     rdx, rax
 * 000000014027E6E6: mov     eax, 1
 * 000000014027E6EB: mov     [r8], dl
 * 000000014027E6EE: add     r8, rax
 * 000000014027E6F1: shr     rdx, 8
 * 000000014027E6F5: add     r9d, 0FFFFFFFFh
 * 000000014027E6F9: jnz     short loc_14027E6EB
 * 000000014027E6FB: mov     r9d, r15d
 * 000000014027E6FE: sub     ebx, r15d
 * 000000014027E701: add     r9, r11
 * 000000014027E704: mov     r15d, 1
 * 000000014027E70A: lea     r8, [r9+810h]
 * 000000014027E711: cmp     ebx, 8
 * 000000014027E714: jb      short loc_14027E75D
 * 000000014027E716: mov     r10d, ebx
 * 000000014027E719: mov     r12, 7010008004002001h
 * 000000014027E723: shr     r10, 3
 * 000000014027E727: rdtsc
 * 000000014027E729: shl     rdx, 20h
 * 000000014027E72D: add     ebx, 0FFFFFFF8h
 * 000000014027E730: or      rax, rdx
 * 000000014027E733: mov     rcx, rax
 * 000000014027E736: ror     rax, 3
 * 000000014027E73A: xor     rcx, rax
 * 000000014027E73D: mov     rax, r12
 * 000000014027E740: mul     rcx
 * 000000014027E743: mov     [rbp+1A50h+var_1368], rdx
 * 000000014027E74A: xor     rdx, rax
 * 000000014027E74D: mov     [r8], rdx
 * 000000014027E750: add     r8, 8
 * 000000014027E754: sub     r10, r15
 * 000000014027E757: jnz     short loc_14027E727
 * 000000014027E759: lea     r12, [r14+18h]
 * 000000014027E75D: test    ebx, ebx
 * 000000014027E75F: jz      short loc_14027E79A
 * 000000014027E761: rdtsc
 * 000000014027E763: shl     rdx, 20h
 * 000000014027E767: or      rax, rdx
 * 000000014027E76A: mov     rcx, rax
 * 000000014027E76D: ror     rax, 3
 * 000000014027E771: xor     rcx, rax
 * 000000014027E774: mov     rax, 7010008004002001h
 * 000000014027E77E: mul     rcx
 * 000000014027E781: mov     [rbp+1A50h+var_1360], rdx
 * 000000014027E788: xor     rdx, rax
 * 000000014027E78B: mov     [r8], dl
 * 000000014027E78E: add     r8, r15
 * 000000014027E791: shr     rdx, 8
 * 000000014027E795: add     ebx, 0FFFFFFFFh
 * 000000014027E798: jnz     short loc_14027E78B
 * 000000014027E79A: test    r12, r12
 * 000000014027E79D: jz      short loc_14027E7A3
 * 000000014027E79F: mov     [r12], r11
 * 000000014027E7A3: test    r9, r9
 * 000000014027E7A6: jz      loc_14027E5BB
 * 000000014027E7AC: mov     r10d, 810h
 * 000000014027E7B2: mov     [r14+8], r9
 * 000000014027E7B6: mov     [r14+10h], r10d
 * 000000014027E7BA: mov     r8d, r10d
 * 000000014027E7BD: mov     rcx, rsi
 * 000000014027E7C0: mov     rdx, r9
 * 000000014027E7C3: mov     edi, 102h
 * 000000014027E7C8: mov     rax, [rcx]
 * 000000014027E7CB: add     r8d, 0FFFFFFF8h
 * 000000014027E7CF: mov     [rdx], rax
 * 000000014027E7D2: add     rcx, 8
 * 000000014027E7D6: add     rdx, 8
 * 000000014027E7DA: sub     rdi, r15
 * 000000014027E7DD: jnz     short loc_14027E7C8
 * 000000014027E7DF: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027E7E6: test    r8d, r8d
 * 000000014027E7E9: jz      short loc_14027E7FB
 * 000000014027E7EB: mov     al, [rcx]
 * 000000014027E7ED: add     rcx, r15
 * 000000014027E7F0: mov     [rdx], al
 * 000000014027E7F2: add     rdx, r15
 * 000000014027E7F5: add     r8d, 0FFFFFFFFh
 * 000000014027E7F9: jnz     short loc_14027E7EB
 * 000000014027E7FB: bts     dword ptr [r9+748h], 13h
 * 000000014027E804: mov     r12d, 1
 * 000000014027E80A: mov     [r9+5E4h], r10d
 * 000000014027E811: mov     eax, 2
 * 000000014027E816: mov     [r9+608h], r10d
 * 000000014027E81D: mov     r15d, [r9+748h]
 * 000000014027E824: and     r15d, 0FFFFFFFDh
 * 000000014027E828: mov     [r9+748h], r15d
 * 000000014027E82F: test    al, r15b
 * 000000014027E832: mov     ecx, r15d
 * 000000014027E835: mov     eax, r10d
 * 000000014027E838: shr     ecx, 13h
 * 000000014027E83B: add     eax, 0FFFFFF38h
 * 000000014027E840: and     ecx, r12d
 * 000000014027E843: mov     [rbp+1A50h+var_1978], ecx
 * 000000014027E849: mov     ecx, r15d
 * 000000014027E84C: shr     ecx, 9
 * 000000014027E84F: and     ecx, r12d
 * 000000014027E852: shr     r15d, 8
 * 000000014027E856: mov     [rbp+1A50h+var_1A50], ecx
 * 000000014027E859: and     r15d, r12d
 * 000000014027E85C: mov     rcx, [r9+470h]
 * 000000014027E863: shr     eax, 3
 * 000000014027E866: mov     [rbp+1A50h+var_1A00], rcx
 * 000000014027E86A: mov     rcx, [r9+540h]
 * 000000014027E871: mov     [rbp+1A50h+var_1A40], rcx
 * 000000014027E875: mov     dword ptr [rbp+1A50h+var_1A28], r15d
 * 000000014027E879: mov     [rbp+1A50h+var_19C0], eax
 * 000000014027E87F: mov     [r9+0C4h], eax
 * 000000014027E886: rdtsc
 * 000000014027E888: shl     rdx, 20h
 * 000000014027E88C: lea     ebx, [r12+1Fh]
 * 000000014027E891: or      rax, rdx
 * 000000014027E894: lea     r13, [r9+598h]
 * 000000014027E89B: mov     rcx, rax
 * 000000014027E89E: lea     r11d, [r12+3]
 * 000000014027E8A3: ror     rax, 3
 * 000000014027E8A7: lea     r8, [rbp+1A50h+var_1088]
 * 000000014027E8AE: xor     rcx, rax
 * 000000014027E8B1: mov     r10d, ebx
 * 000000014027E8B4: mov     rax, 7010008004002001h
 * 000000014027E8BE: mul     rcx
 * 000000014027E8C1: mov     rcx, r13
 * 000000014027E8C4: mov     [rbp+1A50h+var_1358], rdx
 * 000000014027E8CB: xor     rdx, rax
 * 000000014027E8CE: mov     rax, [r9+5B8h]
 * 000000014027E8D5: mov     [rbp+1A50h+var_19C8], rax
 * 000000014027E8DC: mov     eax, [r9+628h]
 * 000000014027E8E3: mov     [rbp+1A50h+var_1970], rdx
 * 000000014027E8EA: mov     edx, r11d
 * 000000014027E8ED: mov     [rbp+1A50h+var_1A08], eax
 * 000000014027E8F0: mov     rax, [rcx]
 * 000000014027E8F3: add     r10d, 0FFFFFFF8h
 * 000000014027E8F7: mov     [r8], rax
 * 000000014027E8FA: add     rcx, 8
 * 000000014027E8FE: add     r8, 8
 * 000000014027E902: sub     rdx, r12
 * 000000014027E905: jnz     short loc_14027E8F0
 * 000000014027E907: xor     r12d, r12d
 * 000000014027E90A: test    r10d, r10d
 * 000000014027E90D: jz      short loc_14027E928
 * 000000014027E90F: lea     r14d, [rdx+1]
 * 000000014027E913: mov     al, [rcx]
 * 000000014027E915: add     rcx, r14
 * 000000014027E918: mov     [r8], al
 * 000000014027E91B: add     r8, r14
 * 000000014027E91E: add     r10d, 0FFFFFFFFh
 * 000000014027E922: jnz     short loc_14027E913
 * 000000014027E924: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027E928: mov     [r9+5B8h], r12
 * 000000014027E92F: mov     ecx, ebx
 * 000000014027E931: mov     [r9+628h], r12d
 * 000000014027E938: mov     rax, r13
 * 000000014027E93B: mov     rdx, r11
 * 000000014027E93E: mov     r8d, 1
 * 000000014027E944: mov     [rax], r12
 * 000000014027E947: add     ecx, 0FFFFFFF8h
 * 000000014027E94A: add     rax, 8
 * 000000014027E94E: sub     rdx, r8
 * 000000014027E951: jnz     short loc_14027E944
 * 000000014027E953: test    ecx, ecx
 * 000000014027E955: jz      short loc_14027E962
 * 000000014027E957: mov     [rax], r12b
 * 000000014027E95A: add     rax, r8
 * 000000014027E95D: add     ecx, 0FFFFFFFFh
 * 000000014027E960: jnz     short loc_14027E957
 * 000000014027E962: mov     eax, [r9+5E4h]
 * 000000014027E969: mov     r10, r9
 * 000000014027E96C: add     [r9+628h], eax
 * 000000014027E973: mov     rax, r9
 * 000000014027E976: mov     ebx, [r9+5E4h]
 * 000000014027E97D: mov     r11d, [r9+614h]
 * 000000014027E984: mov     r8, [r9+618h]
 * 000000014027E98B: lea     rcx, [r9+rbx]
 * 000000014027E98F: cmp     r9, rcx
 * 000000014027E992: jnb     short loc_14027E9A0
 * 000000014027E994: prefetchnta byte ptr [rax]
 * 000000014027E997: add     rax, 40h ; '@'
 * 000000014027E99B: cmp     rax, rcx
 * 000000014027E99E: jb      short loc_14027E994
 * 000000014027E9A0: mov     r12d, ebx
 * 000000014027E9A3: shr     r12d, 7
 * 000000014027E9A7: test    r12d, r12d
 * 000000014027E9AA: jz      short loc_14027EA20
 * 000000014027E9AC: mov     rdi, r8
 * 000000014027E9AF: mov     r14d, 1
 * 000000014027E9B5: mov     r15, 7010008004002001h
 * 000000014027E9BF: mov     eax, 8
 * 000000014027E9C4: xor     r8, [r10]
 * 000000014027E9C7: mov     ecx, r11d
 * 000000014027E9CA: rol     r8, cl
 * 000000014027E9CD: xor     r8, [r10+8]
 * 000000014027E9D1: add     r10, 10h
 * 000000014027E9D5: rol     r8, cl
 * 000000014027E9D8: sub     rax, r14
 * 000000014027E9DB: jnz     short loc_14027E9C4
 * 000000014027E9DD: mov     rcx, r10
 * 000000014027E9E0: sub     rcx, r9
 * 000000014027E9E3: xor     rcx, rdi
 * 000000014027E9E6: mov     rax, rcx
 * 000000014027E9E9: rol     rax, 11h
 * 000000014027E9ED: xor     rcx, rax
 * 000000014027E9F0: mov     rax, r15
 * 000000014027E9F3: mul     rcx
 * 000000014027E9F6: xor     r11d, eax
 * 000000014027E9F9: mov     [rbp+1A50h+var_1350], rdx
 * 000000014027EA00: xor     r11d, edx
 * 000000014027EA03: and     r11d, 3Fh
 * 000000014027EA07: cmovz   r11d, r14d
 * 000000014027EA0B: add     r12d, 0FFFFFFFFh
 * 000000014027EA0F: jnz     short loc_14027E9BF
 * 000000014027EA11: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027EA15: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027EA1C: mov     r15d, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027EA20: and     ebx, 7Fh
 * 000000014027EA23: mov     r12d, 1
 * 000000014027EA29: cmp     ebx, 8
 * 000000014027EA2C: jb      short loc_14027EA49
 * 000000014027EA2E: mov     eax, ebx
 * 000000014027EA30: shr     rax, 3
 * 000000014027EA34: xor     r8, [r10]
 * 000000014027EA37: mov     ecx, r11d
 * 000000014027EA3A: rol     r8, cl
 * 000000014027EA3D: add     r10, 8
 * 000000014027EA41: add     ebx, 0FFFFFFF8h
 * 000000014027EA44: sub     rax, r12
 * 000000014027EA47: jnz     short loc_14027EA34
 * 000000014027EA49: test    ebx, ebx
 * 000000014027EA4B: jz      short loc_14027EA62
 * 000000014027EA4D: movzx   eax, byte ptr [r10]
 * 000000014027EA51: mov     ecx, r11d
 * 000000014027EA54: xor     r8, rax
 * 000000014027EA57: add     r10, r12
 * 000000014027EA5A: rol     r8, cl
 * 000000014027EA5D: add     ebx, 0FFFFFFFFh
 * 000000014027EA60: jnz     short loc_14027EA4D
 * 000000014027EA62: mov     rax, [rbp+1A50h+var_19C8]
 * 000000014027EA69: lea     rcx, [rbp+1A50h+var_1088]
 * 000000014027EA70: mov     [r9+5B8h], rax
 * 000000014027EA77: mov     edx, 20h ; ' '
 * 000000014027EA7C: mov     eax, [rbp+1A50h+var_1A08]
 * 000000014027EA7F: add     [r9+628h], eax
 * 000000014027EA86: lea     r11d, [rdx-1Ch]
 * 000000014027EA8A: mov     r10d, r11d
 * 000000014027EA8D: mov     rax, [rcx]
 * 000000014027EA90: add     edx, 0FFFFFFF8h
 * 000000014027EA93: mov     [r13+0], rax
 * 000000014027EA97: add     rcx, 8
 * 000000014027EA9B: add     r13, 8
 * 000000014027EA9F: sub     r10, r12
 * 000000014027EAA2: jnz     short loc_14027EA8D
 * 000000014027EAA4: test    edx, edx
 * 000000014027EAA6: jz      short loc_14027EAB9
 * 000000014027EAA8: mov     al, [rcx]
 * 000000014027EAAA: add     rcx, r12
 * 000000014027EAAD: mov     [r13+0], al
 * 000000014027EAB1: add     r13, r12
 * 000000014027EAB4: add     edx, 0FFFFFFFFh
 * 000000014027EAB7: jnz     short loc_14027EAA8
 * 000000014027EAB9: xor     r13d, r13d
 * 000000014027EABC: mov     [r9+5B8h], r8
 * 000000014027EAC3: test    dword ptr [r9+748h], 40000000h
 * 000000014027EACE: jnz     loc_14027EB71
 * 000000014027EAD4: mov     r10, [rbp+1A50h+var_1970]
 * 000000014027EADB: mov     rcx, r9
 * 000000014027EADE: mov     edx, r13d
 * 000000014027EAE1: xor     [rcx], r10
 * 000000014027EAE4: add     edx, r12d
 * 000000014027EAE7: movsxd  rax, edx
 * 000000014027EAEA: lea     rcx, [rcx+8]
 * 000000014027EAEE: cmp     rax, 19h
 * 000000014027EAF2: jb      short loc_14027EAE1
 * 000000014027EAF4: movsxd  r8, [rbp+1A50h+var_19C0]
 * 000000014027EAFB: test    r8d, r8d
 * 000000014027EAFE: jz      short loc_14027EB1A
 * 000000014027EB00: lea     rdx, [r8-1]
 * 000000014027EB04: lea     rdx, [rcx+rdx*8]
 * 000000014027EB08: xor     [rdx], r10
 * 000000014027EB0B: mov     ecx, r8d
 * 000000014027EB0E: ror     r10, cl
 * 000000014027EB11: lea     rdx, [rdx-8]
 * 000000014027EB15: sub     r8d, r12d
 * 000000014027EB18: jnz     short loc_14027EB08
 * 000000014027EB1A: cmp     [rbp+1A50h+var_1978], r13d
 * 000000014027EB21: jz      loc_14027EC76
 * 000000014027EB27: rdtsc
 * 000000014027EB29: shl     rdx, 20h
 * 000000014027EB2D: or      rax, rdx
 * 000000014027EB30: mov     rcx, rax
 * 000000014027EB33: ror     rax, 3
 * 000000014027EB37: xor     rcx, rax
 * 000000014027EB3A: mov     rax, 7010008004002001h
 * 000000014027EB44: mul     rcx
 * 000000014027EB47: mov     rcx, rdx
 * 000000014027EB4A: mov     [rbp+1A50h+var_1348], rdx
 * 000000014027EB51: xor     rcx, rax
 * 000000014027EB54: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027EB5E: mul     rcx
 * 000000014027EB61: shr     rdx, 1
 * 000000014027EB64: lea     rax, [rdx+rdx*2]
 * 000000014027EB68: cmp     rcx, rax
 * 000000014027EB6B: jz      loc_14027EC7F
 * 000000014027EB71: mov     edx, 1
 * 000000014027EB76: mov     r15, [r14+8]
 * 000000014027EB7A: mov     r11d, [r14+10h]
 * 000000014027EB7E: mov     r9, r15
 * 000000014027EB81: add     [rsi+628h], r11d
 * 000000014027EB88: mov     rax, r15
 * 000000014027EB8B: mov     r10d, [rsi+614h]
 * 000000014027EB92: mov     r12, [rsi+618h]
 * 000000014027EB99: lea     rcx, [r15+r11]
 * 000000014027EB9D: cmp     r15, rcx
 * 000000014027EBA0: jnb     short loc_14027EBAE
 * 000000014027EBA2: prefetchnta byte ptr [rax]
 * 000000014027EBA5: add     rax, 40h ; '@'
 * 000000014027EBA9: cmp     rax, rcx
 * 000000014027EBAC: jb      short loc_14027EBA2
 * 000000014027EBAE: mov     ebx, r11d
 * 000000014027EBB1: mov     r8, r12
 * 000000014027EBB4: shr     ebx, 7
 * 000000014027EBB7: test    ebx, ebx
 * 000000014027EBB9: jz      short loc_14027EC26
 * 000000014027EBBB: mov     r14, 7010008004002001h
 * 000000014027EBC5: mov     eax, 8
 * 000000014027EBCA: xor     r8, [r9]
 * 000000014027EBCD: mov     ecx, r10d
 * 000000014027EBD0: rol     r8, cl
 * 000000014027EBD3: xor     r8, [r9+8]
 * 000000014027EBD7: add     r9, 10h
 * 000000014027EBDB: rol     r8, cl
 * 000000014027EBDE: sub     rax, rdx
 * 000000014027EBE1: jnz     short loc_14027EBCA
 * 000000014027EBE3: mov     rcx, r9
 * 000000014027EBE6: sub     rcx, r15
 * 000000014027EBE9: xor     rcx, r12
 * 000000014027EBEC: mov     rax, rcx
 * 000000014027EBEF: rol     rax, 11h
 * 000000014027EBF3: xor     rcx, rax
 * 000000014027EBF6: mov     rax, r14
 * 000000014027EBF9: mul     rcx
 * 000000014027EBFC: xor     r10d, eax
 * 000000014027EBFF: mov     [rbp+1A50h+var_1340], rdx
 * 000000014027EC06: xor     r10d, edx
 * 000000014027EC09: mov     edx, 1
 * 000000014027EC0E: and     r10d, 3Fh
 * 000000014027EC12: cmovz   r10d, edx
 * 000000014027EC16: add     ebx, 0FFFFFFFFh
 * 000000014027EC19: jnz     short loc_14027EBC5
 * 000000014027EC1B: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027EC1F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027EC26: and     r11d, 7Fh
 * 000000014027EC2A: mov     r15d, 1
 * 000000014027EC30: cmp     r11d, 8
 * 000000014027EC34: jb      short loc_14027EC53
 * 000000014027EC36: mov     eax, r11d
 * 000000014027EC39: shr     rax, 3
 * 000000014027EC3D: xor     r8, [r9]
 * 000000014027EC40: mov     ecx, r10d
 * 000000014027EC43: rol     r8, cl
 * 000000014027EC46: add     r9, 8
 * 000000014027EC4A: add     r11d, 0FFFFFFF8h
 * 000000014027EC4E: sub     rax, r15
 * 000000014027EC51: jnz     short loc_14027EC3D
 * 000000014027EC53: test    r11d, r11d
 * 000000014027EC56: jz      short loc_14027EC6E
 * 000000014027EC58: movzx   eax, byte ptr [r9]
 * 000000014027EC5C: mov     ecx, r10d
 * 000000014027EC5F: xor     r8, rax
 * 000000014027EC62: add     r9, r15
 * 000000014027EC65: rol     r8, cl
 * 000000014027EC68: add     r11d, 0FFFFFFFFh
 * 000000014027EC6C: jnz     short loc_14027EC58
 * 000000014027EC6E: mov     rax, r8
 * 000000014027EC71: jmp     loc_14027EDCD
 * 000000014027EC76: test    r15d, r15d
 * 000000014027EC79: jnz     loc_14027EB71
 * 000000014027EC7F: mov     eax, 2
 * 000000014027EC84: mov     [rbp+1A50h+var_1925], r12b
 * 000000014027EC8B: mov     r12d, [rbp+1A50h+var_1A50]
 * 000000014027EC8F: mov     ecx, r9d
 * 000000014027EC92: mov     [rbp+1A50h+var_1923], al
 * 000000014027EC98: mov     r10, r9
 * 000000014027EC9B: mov     eax, 3
 * 000000014027ECA0: mov     [rbp+1A50h+var_1922], r11b
 * 000000014027ECA7: mov     [rbp+1A50h+var_1920], al
 * 000000014027ECAD: mov     r11, r9
 * 000000014027ECB0: mov     eax, 7
 * 000000014027ECB5: mov     [rbp+1A50h+var_1928], r13b
 * 000000014027ECBC: mov     [rbp+1A50h+var_1921], al
 * 000000014027ECC2: mov     ebx, r13d
 * 000000014027ECC5: mov     eax, 0Ch
 * 000000014027ECCA: mov     [rbp+1A50h+var_191F], 5
 * 000000014027ECD1: mov     [rbp+1A50h+var_1927], al
 * 000000014027ECD7: mov     r15, r13
 * 000000014027ECDA: mov     eax, 0Fh
 * 000000014027ECDF: mov     [rbp+1A50h+var_191C], 6
 * 000000014027ECE6: mov     [rbp+1A50h+var_191B], 8
 * 000000014027ECED: mov     [rbp+1A50h+var_191E], 9
 * 000000014027ECF4: mov     [rbp+1A50h+var_191A], 0Ah
 * 000000014027ECFB: lea     esi, [rax+1]
 * 000000014027ECFE: mov     [rbp+1A50h+var_1924], 0Bh
 * 000000014027ED05: mov     [rbp+1A50h+var_1919], 0Dh
 * 000000014027ED0C: mov     [rbp+1A50h+var_191D], 0Eh
 * 000000014027ED13: mov     [rbp+1A50h+var_1926], al
 * 000000014027ED19: ror     r10, cl
 * 000000014027ED1C: mov     rdx, [r11]
 * 000000014027ED1F: mov     edi, 0Fh
 * 000000014027ED24: mov     r8, rsi
 * 000000014027ED27: lea     r13d, [rdi-0Eh]
 * 000000014027ED2B: movzx   eax, byte ptr [r11]
 * 000000014027ED2F: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014027ED33: and     rax, rdi
 * 000000014027ED36: movzx   ecx, [rbp+rax+1A50h+var_1928]
 * 000000014027ED3E: or      rdx, rcx
 * 000000014027ED41: ror     rdx, 4
 * 000000014027ED45: mov     [r11], rdx
 * 000000014027ED48: sub     r8, r13
 * 000000014027ED4B: jnz     short loc_14027ED2B
 * 000000014027ED4D: mov     r13, [rbp+1A50h+var_1A40]
 * 000000014027ED51: sub     rdx, r15
 * 000000014027ED54: mov     rdi, [rbp+1A50h+var_1A00]
 * 000000014027ED58: mov     [r11], rdx
 * 000000014027ED5B: test    r12d, r12d
 * 000000014027ED5E: jnz     short loc_14027ED77
 * 000000014027ED60: mov     rax, rdi
 * 000000014027ED63: mov     ecx, r13d
 * 000000014027ED66: xor     rax, rdx
 * 000000014027ED69: bswap   rax
 * 000000014027ED6C: xor     rax, r10
 * 000000014027ED6F: ror     rax, cl
 * 000000014027ED72: xor     rax, r13
 * 000000014027ED75: jmp     short loc_14027ED7D
 * 000000014027ED77: mov     rax, r10
 * 000000014027ED7A: xor     rax, rdx
 * 000000014027ED7D: mov     edx, 0C8h
 * 000000014027ED82: mov     [r11], rax
 * 000000014027ED85: sub     edx, ebx
 * 000000014027ED87: mov     ecx, eax
 * 000000014027ED89: imul    edx, ebx
 * 000000014027ED8C: not     ecx
 * 000000014027ED8E: add     r11, 8
 * 000000014027ED92: add     r15, r9
 * 000000014027ED95: ror     rdx, cl
 * 000000014027ED98: mov     ecx, eax
 * 000000014027ED9A: xor     r10, rdx
 * 000000014027ED9D: mov     edx, 1
 * 000000014027EDA2: rol     r10, cl
 * 000000014027EDA5: add     ebx, edx
 * 000000014027EDA7: add     r10, r9
 * 000000014027EDAA: cmp     ebx, 19h
 * 000000014027EDAD: jb      loc_14027ED1C
 * 000000014027EDB3: mov     rsi, [rbp+1A50h+var_1A20]
 * 000000014027EDB7: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027EDBE: mov     r14, [rbp+1A50h+var_1A38]
 * 000000014027EDC2: xor     r13d, r13d
 * 000000014027EDC5: jmp     loc_14027EB76
 * 000000014027EDCA: xor     r8d, eax
 * 000000014027EDCD: shr     rax, 1Fh
 * 000000014027EDD1: test    rax, rax
 * 000000014027EDD4: jnz     short loc_14027EDCA
 * 000000014027EDD6: btr     r8d, 1Fh
 * 000000014027EDDB: mov     [r14+14h], r8d
 * 000000014027EDDF: jmp     loc_14027E5BB
 * 000000014027EDE4: mov     r15d, 1
 * 000000014027EDEA: jmp     loc_14027E5C1
 * 000000014027EDEF: mov     r15d, 1
 * 000000014027EDF5: mov     r11d, 8000h
 * 000000014027EDFB: jmp     loc_14027E5CB
 * 000000014027EE00: mov     ebx, [rsi+608h]
 * 000000014027EE06: mov     eax, r13d
 * 000000014027EE09: add     ebx, 0FFFFFF38h
 * 000000014027EE0F: shr     eax, 13h
 * 000000014027EE12: and     eax, r15d
 * 000000014027EE15: mov     [rbp+1A50h+var_19C0], eax
 * 000000014027EE1B: mov     eax, r13d
 * 000000014027EE1E: shr     eax, 9
 * 000000014027EE21: and     eax, r15d
 * 000000014027EE24: shr     r13d, 8
 * 000000014027EE28: mov     [rbp+1A50h+var_1978], eax
 * 000000014027EE2E: and     r13d, r15d
 * 000000014027EE31: mov     rax, [rsi+470h]
 * 000000014027EE38: shr     ebx, 3
 * 000000014027EE3B: mov     [rbp+1A50h+var_1970], rax
 * 000000014027EE42: mov     rax, [rsi+540h]
 * 000000014027EE49: mov     [rbp+1A50h+var_1A40], rax
 * 000000014027EE4D: mov     [rbp+1A50h+var_1A50], r13d
 * 000000014027EE51: mov     dword ptr [rbp+1A50h+var_1A28], ebx
 * 000000014027EE54: mov     [rsi+0C4h], ebx
 * 000000014027EE5A: rdtsc
 * 000000014027EE5C: shl     rdx, 20h
 * 000000014027EE60: lea     r15, [rsi+598h]
 * 000000014027EE67: or      rax, rdx
 * 000000014027EE6A: lea     r8, [rbp+1A50h+var_1068]
 * 000000014027EE71: mov     rcx, rax
 * 000000014027EE74: mov     r11d, 20h ; ' '
 * 000000014027EE7A: ror     rax, 3
 * 000000014027EE7E: xor     rcx, rax
 * 000000014027EE81: mov     rax, 7010008004002001h
 * 000000014027EE8B: mul     rcx
 * 000000014027EE8E: lea     r10d, [r11-1Ch]
 * 000000014027EE92: mov     rcx, r15
 * 000000014027EE95: mov     r14, rdx
 * 000000014027EE98: mov     [rbp+1A50h+var_1338], rdx
 * 000000014027EE9F: xor     r14, rax
 * 000000014027EEA2: lea     r12d, [r11-1Fh]
 * 000000014027EEA6: mov     rax, [rsi+5B8h]
 * 000000014027EEAD: mov     edx, r11d
 * 000000014027EEB0: mov     [rbp+1A50h+var_19C8], rax
 * 000000014027EEB7: mov     r9d, r10d
 * 000000014027EEBA: mov     eax, [rsi+628h]
 * 000000014027EEC0: mov     [rbp+1A50h+var_1A08], eax
 * 000000014027EEC3: mov     rax, [rcx]
 * 000000014027EEC6: add     edx, 0FFFFFFF8h
 * 000000014027EEC9: mov     [r8], rax
 * 000000014027EECC: add     rcx, 8
 * 000000014027EED0: add     r8, 8
 * 000000014027EED4: sub     r9, r12
 * 000000014027EED7: jnz     short loc_14027EEC3
 * 000000014027EED9: test    edx, edx
 * 000000014027EEDB: jz      short loc_14027EEED
 * 000000014027EEDD: mov     al, [rcx]
 * 000000014027EEDF: add     rcx, r12
 * 000000014027EEE2: mov     [r8], al
 * 000000014027EEE5: add     r8, r12
 * 000000014027EEE8: add     edx, 0FFFFFFFFh
 * 000000014027EEEB: jnz     short loc_14027EEDD
 * 000000014027EEED: mov     [rsi+5B8h], r9
 * 000000014027EEF4: mov     ecx, r11d
 * 000000014027EEF7: mov     [rsi+628h], r9d
 * 000000014027EEFE: mov     rax, r15
 * 000000014027EF01: mov     rdx, r10
 * 000000014027EF04: mov     [rax], r9
 * 000000014027EF07: add     ecx, 0FFFFFFF8h
 * 000000014027EF0A: add     rax, 8
 * 000000014027EF0E: sub     rdx, r12
 * 000000014027EF11: jnz     short loc_14027EF04
 * 000000014027EF13: test    ecx, ecx
 * 000000014027EF15: jz      short loc_14027EF22
 * 000000014027EF17: mov     [rax], r9b
 * 000000014027EF1A: add     rax, r12
 * 000000014027EF1D: add     ecx, 0FFFFFFFFh
 * 000000014027EF20: jnz     short loc_14027EF17
 * 000000014027EF22: mov     eax, [rsi+5E4h]
 * 000000014027EF28: mov     r9, rsi
 * 000000014027EF2B: add     [rsi+628h], eax
 * 000000014027EF31: mov     rax, rsi
 * 000000014027EF34: mov     r10d, [rsi+5E4h]
 * 000000014027EF3B: mov     r11d, [rsi+614h]
 * 000000014027EF42: mov     rdx, [rsi+618h]
 * 000000014027EF49: lea     rcx, [rsi+r10]
 * 000000014027EF4D: cmp     rsi, rcx
 * 000000014027EF50: jnb     short loc_14027EF5E
 * 000000014027EF52: prefetchnta byte ptr [rax]
 * 000000014027EF55: add     rax, 40h ; '@'
 * 000000014027EF59: cmp     rax, rcx
 * 000000014027EF5C: jb      short loc_14027EF52
 * 000000014027EF5E: mov     r12d, r10d
 * 000000014027EF61: mov     r8, rdx
 * 000000014027EF64: shr     r12d, 7
 * 000000014027EF68: test    r12d, r12d
 * 000000014027EF6B: jz      short loc_14027EFE6
 * 000000014027EF6D: mov     rdi, rdx
 * 000000014027EF70: mov     rbx, 7010008004002001h
 * 000000014027EF7A: mov     edx, 8
 * 000000014027EF7F: lea     r13d, [rdx-7]
 * 000000014027EF83: mov     rax, [r9]
 * 000000014027EF86: mov     ecx, r11d
 * 000000014027EF89: xor     rax, r8
 * 000000014027EF8C: mov     r8, [r9+8]
 * 000000014027EF90: rol     rax, cl
 * 000000014027EF93: add     r9, 10h
 * 000000014027EF97: xor     r8, rax
 * 000000014027EF9A: rol     r8, cl
 * 000000014027EF9D: sub     rdx, r13
 * 000000014027EFA0: jnz     short loc_14027EF83
 * 000000014027EFA2: mov     rcx, r9
 * 000000014027EFA5: sub     rcx, rsi
 * 000000014027EFA8: xor     rcx, rdi
 * 000000014027EFAB: mov     rax, rcx
 * 000000014027EFAE: rol     rax, 11h
 * 000000014027EFB2: xor     rcx, rax
 * 000000014027EFB5: mov     rax, rbx
 * 000000014027EFB8: mul     rcx
 * 000000014027EFBB: xor     eax, edx
 * 000000014027EFBD: mov     [rbp+1A50h+var_1330], rdx
 * 000000014027EFC4: xor     r11d, eax
 * 000000014027EFC7: mov     rax, r13
 * 000000014027EFCA: and     r11d, 3Fh
 * 000000014027EFCE: cmovz   r11d, eax
 * 000000014027EFD2: add     r12d, 0FFFFFFFFh
 * 000000014027EFD6: jnz     short loc_14027EF7A
 * 000000014027EFD8: mov     ebx, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027EFDB: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027EFE2: mov     r13d, [rbp+1A50h+var_1A50]
 * 000000014027EFE6: and     r10d, 7Fh
 * 000000014027EFEA: cmp     r10d, 8
 * 000000014027EFEE: jb      short loc_14027F017
 * 000000014027EFF0: mov     edx, r10d
 * 000000014027EFF3: mov     r13d, 1
 * 000000014027EFF9: shr     rdx, 3
 * 000000014027EFFD: xor     r8, [r9]
 * 000000014027F000: mov     ecx, r11d
 * 000000014027F003: rol     r8, cl
 * 000000014027F006: add     r9, 8
 * 000000014027F00A: add     r10d, 0FFFFFFF8h
 * 000000014027F00E: sub     rdx, r13
 * 000000014027F011: jnz     short loc_14027EFFD
 * 000000014027F013: mov     r13d, [rbp+1A50h+var_1A50]
 * 000000014027F017: test    r10d, r10d
 * 000000014027F01A: jz      short loc_14027F03C
 * 000000014027F01C: mov     r13d, 1
 * 000000014027F022: movzx   eax, byte ptr [r9]
 * 000000014027F026: mov     ecx, r11d
 * 000000014027F029: xor     r8, rax
 * 000000014027F02C: add     r9, r13
 * 000000014027F02F: rol     r8, cl
 * 000000014027F032: add     r10d, 0FFFFFFFFh
 * 000000014027F036: jnz     short loc_14027F022
 * 000000014027F038: mov     r13d, [rbp+1A50h+var_1A50]
 * 000000014027F03C: mov     rax, [rbp+1A50h+var_19C8]
 * 000000014027F043: lea     rcx, [rbp+1A50h+var_1068]
 * 000000014027F04A: mov     r9d, 4
 * 000000014027F050: mov     [rsi+5B8h], rax
 * 000000014027F057: mov     eax, [rbp+1A50h+var_1A08]
 * 000000014027F05A: mov     edx, r9d
 * 000000014027F05D: add     [rsi+628h], eax
 * 000000014027F063: lea     r10d, [r9+1Ch]
 * 000000014027F067: lea     r11d, [r9-3]
 * 000000014027F06B: mov     rax, [rcx]
 * 000000014027F06E: add     r10d, 0FFFFFFF8h
 * 000000014027F072: mov     [r15], rax
 * 000000014027F075: add     rcx, 8
 * 000000014027F079: add     r15, 8
 * 000000014027F07D: sub     rdx, r11
 * 000000014027F080: jnz     short loc_14027F06B
 * 000000014027F082: test    r10d, r10d
 * 000000014027F085: jz      short loc_14027F098
 * 000000014027F087: mov     al, [rcx]
 * 000000014027F089: add     rcx, r11
 * 000000014027F08C: mov     [r15], al
 * 000000014027F08F: add     r15, r11
 * 000000014027F092: add     r10d, 0FFFFFFFFh
 * 000000014027F096: jnz     short loc_14027F087
 * 000000014027F098: mov     [rsi+5B8h], r8
 * 000000014027F09F: test    dword ptr [rsi+748h], 40000000h
 * 000000014027F0A9: jnz     loc_14027F91E
 * 000000014027F0AF: xor     r8d, r8d
 * 000000014027F0B2: mov     rcx, rsi
 * 000000014027F0B5: mov     edx, r8d
 * 000000014027F0B8: lea     r12d, [r8+19h]
 * 000000014027F0BC: xor     [rcx], r14
 * 000000014027F0BF: add     edx, r11d
 * 000000014027F0C2: movsxd  rax, edx
 * 000000014027F0C5: lea     rcx, [rcx+8]
 * 000000014027F0C9: cmp     rax, r12
 * 000000014027F0CC: jb      short loc_14027F0BC
 * 000000014027F0CE: test    ebx, ebx
 * 000000014027F0D0: jz      short loc_14027F0ED
 * 000000014027F0D2: movsxd  rdx, ebx
 * 000000014027F0D5: dec     rdx
 * 000000014027F0D8: lea     rdx, [rcx+rdx*8]
 * 000000014027F0DC: xor     [rdx], r14
 * 000000014027F0DF: mov     ecx, ebx
 * 000000014027F0E1: ror     r14, cl
 * 000000014027F0E4: lea     rdx, [rdx-8]
 * 000000014027F0E8: sub     ebx, r11d
 * 000000014027F0EB: jnz     short loc_14027F0DC
 * 000000014027F0ED: cmp     [rbp+1A50h+var_19C0], r8d
 * 000000014027F0F4: jz      short loc_14027F141
 * 000000014027F0F6: rdtsc
 * 000000014027F0F8: shl     rdx, 20h
 * 000000014027F0FC: or      rax, rdx
 * 000000014027F0FF: mov     rcx, rax
 * 000000014027F102: ror     rax, 3
 * 000000014027F106: xor     rcx, rax
 * 000000014027F109: mov     rax, 7010008004002001h
 * 000000014027F113: mul     rcx
 * 000000014027F116: mov     rcx, rdx
 * 000000014027F119: mov     [rbp+1A50h+var_1230], rdx
 * 000000014027F120: xor     rcx, rax
 * 000000014027F123: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027F12D: mul     rcx
 * 000000014027F130: shr     rdx, 1
 * 000000014027F133: lea     rax, [rdx+rdx*2]
 * 000000014027F137: cmp     rcx, rax
 * 000000014027F13A: jz      short loc_14027F14A
 * 000000014027F13C: jmp     loc_14027F91E
 * 000000014027F141: test    r13d, r13d
 * 000000014027F144: jnz     loc_14027F91E
 * 000000014027F14A: mov     r14d, [rbp+1A50h+var_1978]
 * 000000014027F151: mov     eax, 2
 * 000000014027F156: mov     r15, [rbp+1A50h+var_1970]
 * 000000014027F15D: mov     ecx, esi
 * 000000014027F15F: mov     [rbp+1A50h+var_1913], al
 * 000000014027F165: mov     r10, rsi
 * 000000014027F168: mov     eax, 3
 * 000000014027F16D: mov     [rbp+1A50h+var_1912], r9b
 * 000000014027F174: mov     [rbp+1A50h+var_1910], al
 * 000000014027F17A: mov     r9, rsi
 * 000000014027F17D: mov     eax, 7
 * 000000014027F182: mov     [rbp+1A50h+var_1915], r11b
 * 000000014027F189: mov     [rbp+1A50h+var_1911], al
 * 000000014027F18F: mov     r11d, r8d
 * 000000014027F192: mov     eax, 0Ch
 * 000000014027F197: mov     [rbp+1A50h+var_1918], r8b
 * 000000014027F19E: mov     [rbp+1A50h+var_1917], al
 * 000000014027F1A4: mov     rbx, r8
 * 000000014027F1A7: mov     eax, 0Fh
 * 000000014027F1AC: mov     [rbp+1A50h+var_190F], 5
 * 000000014027F1B3: mov     [rbp+1A50h+var_190C], 6
 * 000000014027F1BA: mov     [rbp+1A50h+var_190B], 8
 * 000000014027F1C1: mov     [rbp+1A50h+var_190E], 9
 * 000000014027F1C8: lea     r13d, [rax-0Eh]
 * 000000014027F1CC: mov     [rbp+1A50h+var_190A], 0Ah
 * 000000014027F1D3: mov     [rbp+1A50h+var_1914], 0Bh
 * 000000014027F1DA: mov     [rbp+1A50h+var_1909], 0Dh
 * 000000014027F1E1: mov     [rbp+1A50h+var_190D], 0Eh
 * 000000014027F1E8: mov     [rbp+1A50h+var_1916], al
 * 000000014027F1EE: ror     r9, cl
 * 000000014027F1F1: mov     rdx, [r10]
 * 000000014027F1F4: mov     edi, 0Fh
 * 000000014027F1F9: lea     r8d, [rdi+1]
 * 000000014027F1FD: movzx   eax, byte ptr [r10]
 * 000000014027F201: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014027F205: and     rax, rdi
 * 000000014027F208: movzx   ecx, [rbp+rax+1A50h+var_1918]
 * 000000014027F210: or      rdx, rcx
 * 000000014027F213: ror     rdx, 4
 * 000000014027F217: mov     [r10], rdx
 * 000000014027F21A: sub     r8, r13
 * 000000014027F21D: jnz     short loc_14027F1FD
 * 000000014027F21F: mov     rdi, [rbp+1A50h+var_1A40]
 * 000000014027F223: sub     rdx, rbx
 * 000000014027F226: mov     [r10], rdx
 * 000000014027F229: test    r14d, r14d
 * 000000014027F22C: jnz     short loc_14027F241
 * 000000014027F22E: xor     rdx, r15
 * 000000014027F231: mov     ecx, edi
 * 000000014027F233: bswap   rdx
 * 000000014027F236: xor     rdx, r9
 * 000000014027F239: ror     rdx, cl
 * 000000014027F23C: xor     rdx, rdi
 * 000000014027F23F: jmp     short loc_14027F244
 * 000000014027F241: xor     rdx, r9
 * 000000014027F244: mov     [r10], rdx
 * 000000014027F247: mov     ecx, edx
 * 000000014027F249: mov     edx, 0C8h
 * 000000014027F24E: not     ecx
 * 000000014027F250: sub     edx, r11d
 * 000000014027F253: add     rbx, rsi
 * 000000014027F256: imul    edx, r11d
 * 000000014027F25A: add     r11d, r13d
 * 000000014027F25D: ror     rdx, cl
 * 000000014027F260: mov     ecx, [r10]
 * 000000014027F263: xor     r9, rdx
 * 000000014027F266: rol     r9, cl
 * 000000014027F269: add     r10, 8
 * 000000014027F26D: add     r9, rsi
 * 000000014027F270: cmp     r11d, r12d
 * 000000014027F273: jb      loc_14027F1F1
 * 000000014027F279: jmp     loc_14027F911
 * 000000014027F27E: mov     r11d, 20h ; ' '
 * 000000014027F284: mov     [r14+0C4h], r15d
 * 000000014027F28B: mov     r12, [r14+5B8h]
 * 000000014027F292: lea     rbx, [r14+598h]
 * 000000014027F299: mov     r13d, [r14+628h]
 * 000000014027F2A0: lea     rdx, [rbp+1A50h+var_1048]
 * 000000014027F2A7: mov     rsi, r14
 * 000000014027F2AA: mov     [rbp+1A50h+var_1A30], r12
 * 000000014027F2AE: lea     r10d, [r11-1Ch]
 * 000000014027F2B2: mov     r8d, r11d
 * 000000014027F2B5: mov     r9d, r10d
 * 000000014027F2B8: mov     rcx, rbx
 * 000000014027F2BB: mov     rax, [rcx]
 * 000000014027F2BE: add     r8d, 0FFFFFFF8h
 * 000000014027F2C2: mov     [rdx], rax
 * 000000014027F2C5: add     rcx, 8
 * 000000014027F2C9: add     rdx, 8
 * 000000014027F2CD: sub     r9, r15
 * 000000014027F2D0: jnz     short loc_14027F2BB
 * 000000014027F2D2: test    r8d, r8d
 * 000000014027F2D5: jz      short loc_14027F2E7
 * 000000014027F2D7: mov     al, [rcx]
 * 000000014027F2D9: add     rcx, r15
 * 000000014027F2DC: mov     [rdx], al
 * 000000014027F2DE: add     rdx, r15
 * 000000014027F2E1: add     r8d, 0FFFFFFFFh
 * 000000014027F2E5: jnz     short loc_14027F2D7
 * 000000014027F2E7: mov     [r14+5B8h], r9
 * 000000014027F2EE: mov     ecx, r11d
 * 000000014027F2F1: mov     [r14+628h], r9d
 * 000000014027F2F8: mov     rax, rbx
 * 000000014027F2FB: mov     rdx, r10
 * 000000014027F2FE: mov     [rax], r9
 * 000000014027F301: add     ecx, 0FFFFFFF8h
 * 000000014027F304: add     rax, 8
 * 000000014027F308: sub     rdx, r15
 * 000000014027F30B: jnz     short loc_14027F2FE
 * 000000014027F30D: test    ecx, ecx
 * 000000014027F30F: jz      short loc_14027F31C
 * 000000014027F311: mov     [rax], r9b
 * 000000014027F314: add     rax, r15
 * 000000014027F317: add     ecx, 0FFFFFFFFh
 * 000000014027F31A: jnz     short loc_14027F311
 * 000000014027F31C: mov     eax, [r14+5E4h]
 * 000000014027F323: mov     r9, r14
 * 000000014027F326: add     [r14+628h], eax
 * 000000014027F32D: mov     rax, r14
 * 000000014027F330: mov     r11d, [r14+5E4h]
 * 000000014027F337: mov     r10d, [r14+614h]
 * 000000014027F33E: mov     r15, [r14+618h]
 * 000000014027F345: lea     rcx, [r14+r11]
 * 000000014027F349: cmp     r14, rcx
 * 000000014027F34C: jnb     short loc_14027F35A
 * 000000014027F34E: prefetchnta byte ptr [rax]
 * 000000014027F351: add     rax, 40h ; '@'
 * 000000014027F355: cmp     rax, rcx
 * 000000014027F358: jb      short loc_14027F34E
 * 000000014027F35A: mov     r14d, r11d
 * 000000014027F35D: mov     r8, r15
 * 000000014027F360: shr     r14d, 7
 * 000000014027F364: test    r14d, r14d
 * 000000014027F367: jz      short loc_14027F3E1
 * 000000014027F369: mov     r12, 7010008004002001h
 * 000000014027F373: mov     edx, 8
 * 000000014027F378: lea     edi, [rdx-7]
 * 000000014027F37B: mov     rax, [r9]
 * 000000014027F37E: mov     ecx, r10d
 * 000000014027F381: xor     rax, r8
 * 000000014027F384: mov     r8, [r9+8]
 * 000000014027F388: rol     rax, cl
 * 000000014027F38B: add     r9, 10h
 * 000000014027F38F: xor     r8, rax
 * 000000014027F392: rol     r8, cl
 * 000000014027F395: sub     rdx, rdi
 * 000000014027F398: jnz     short loc_14027F37B
 * 000000014027F39A: mov     rcx, r9
 * 000000014027F39D: sub     rcx, [rsp+0DA0h+arg_0]
 * 000000014027F3A5: xor     rcx, r15
 * 000000014027F3A8: mov     rax, rcx
 * 000000014027F3AB: rol     rax, 11h
 * 000000014027F3AF: xor     rcx, rax
 * 000000014027F3B2: mov     rax, r12
 * 000000014027F3B5: mul     rcx
 * 000000014027F3B8: xor     r10d, eax
 * 000000014027F3BB: mov     [rbp+1A50h+var_1320], rdx
 * 000000014027F3C2: xor     r10d, edx
 * 000000014027F3C5: mov     rax, rdi
 * 000000014027F3C8: and     r10d, 3Fh
 * 000000014027F3CC: cmovz   r10d, eax
 * 000000014027F3D0: add     r14d, 0FFFFFFFFh
 * 000000014027F3D4: jnz     short loc_14027F373
 * 000000014027F3D6: mov     r12, [rbp+1A50h+var_1A30]
 * 000000014027F3DA: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027F3E1: and     r11d, 7Fh
 * 000000014027F3E5: mov     r14d, 1
 * 000000014027F3EB: cmp     r11d, 8
 * 000000014027F3EF: jb      short loc_14027F40E
 * 000000014027F3F1: mov     edx, r11d
 * 000000014027F3F4: shr     rdx, 3
 * 000000014027F3F8: xor     r8, [r9]
 * 000000014027F3FB: mov     ecx, r10d
 * 000000014027F3FE: rol     r8, cl
 * 000000014027F401: add     r9, 8
 * 000000014027F405: add     r11d, 0FFFFFFF8h
 * 000000014027F409: sub     rdx, r14
 * 000000014027F40C: jnz     short loc_14027F3F8
 * 000000014027F40E: test    r11d, r11d
 * 000000014027F411: jz      short loc_14027F429
 * 000000014027F413: movzx   eax, byte ptr [r9]
 * 000000014027F417: mov     ecx, r10d
 * 000000014027F41A: xor     r8, rax
 * 000000014027F41D: add     r9, r14
 * 000000014027F420: rol     r8, cl
 * 000000014027F423: add     r11d, 0FFFFFFFFh
 * 000000014027F427: jnz     short loc_14027F413
 * 000000014027F429: mov     r9, [rsp+0DA0h+arg_0]
 * 000000014027F431: lea     rcx, [rbp+1A50h+var_1048]
 * 000000014027F438: mov     edx, 4
 * 000000014027F43D: mov     [r9+5B8h], r12
 * 000000014027F444: add     [r9+628h], r13d
 * 000000014027F44B: lea     r10d, [rdx+1Ch]
 * 000000014027F44F: mov     rax, [rcx]
 * 000000014027F452: add     r10d, 0FFFFFFF8h
 * 000000014027F456: mov     [rbx], rax
 * 000000014027F459: add     rcx, 8
 * 000000014027F45D: add     rbx, 8
 * 000000014027F461: sub     rdx, r14
 * 000000014027F464: jnz     short loc_14027F44F
 * 000000014027F466: xor     r13d, r13d
 * 000000014027F469: test    r10d, r10d
 * 000000014027F46C: jz      short loc_14027F47E
 * 000000014027F46E: mov     al, [rcx]
 * 000000014027F470: add     rcx, r14
 * 000000014027F473: mov     [rbx], al
 * 000000014027F475: add     rbx, r14
 * 000000014027F478: add     r10d, 0FFFFFFFFh
 * 000000014027F47C: jnz     short loc_14027F46E
 * 000000014027F47E: mov     [r9+5B8h], r8
 * 000000014027F485: jmp     loc_14027F95D
 * 000000014027F48A: mov     rax, [rsi+5C8h]
 * 000000014027F491: mov     [rbp+1A50h+var_19D0], rax
 * 000000014027F498: mov     eax, 2
 * 000000014027F49D: test    al, bl
 * 000000014027F49F: jz      short loc_14027F4AA
 * 000000014027F4A1: mov     r14d, [rsi+5E4h]
 * 000000014027F4A8: jmp     short loc_14027F4B1
 * 000000014027F4AA: mov     r14d, [rsi+608h]
 * 000000014027F4B1: mov     eax, ebx
 * 000000014027F4B3: add     r14d, 0FFFFFF38h
 * 000000014027F4BA: shr     eax, 13h
 * 000000014027F4BD: and     eax, r15d
 * 000000014027F4C0: mov     [rbp+1A50h+var_19C0], eax
 * 000000014027F4C6: mov     eax, ebx
 * 000000014027F4C8: shr     eax, 9
 * 000000014027F4CB: and     eax, r15d
 * 000000014027F4CE: shr     ebx, 8
 * 000000014027F4D1: mov     [rbp+1A50h+var_1978], eax
 * 000000014027F4D7: and     ebx, r15d
 * 000000014027F4DA: mov     rax, [rsi+470h]
 * 000000014027F4E1: shr     r14d, 3
 * 000000014027F4E5: mov     [rbp+1A50h+var_1A00], rax
 * 000000014027F4E9: mov     rax, [rsi+540h]
 * 000000014027F4F0: mov     [rbp+1A50h+var_1A40], rax
 * 000000014027F4F4: mov     [rbp+1A50h+var_1A08], r14d
 * 000000014027F4F8: mov     [rsi+0C4h], r14d
 * 000000014027F4FF: rdtsc
 * 000000014027F501: shl     rdx, 20h
 * 000000014027F505: lea     r12, [rsi+598h]
 * 000000014027F50C: or      rax, rdx
 * 000000014027F50F: lea     r8, [rbp+1A50h+var_1028]
 * 000000014027F516: mov     rcx, rax
 * 000000014027F519: mov     r11d, 20h ; ' '
 * 000000014027F51F: ror     rax, 3
 * 000000014027F523: xor     rcx, rax
 * 000000014027F526: mov     rax, r9
 * 000000014027F529: mul     rcx
 * 000000014027F52C: lea     r10d, [r11-1Ch]
 * 000000014027F530: mov     rcx, r12
 * 000000014027F533: mov     r15, rdx
 * 000000014027F536: mov     [rbp+1A50h+var_1318], rdx
 * 000000014027F53D: xor     r15, rax
 * 000000014027F540: lea     r14d, [r11-1Fh]
 * 000000014027F544: mov     rax, [rsi+5B8h]
 * 000000014027F54B: mov     edx, r11d
 * 000000014027F54E: mov     [rbp+1A50h+var_1970], rax
 * 000000014027F555: mov     r9d, r10d
 * 000000014027F558: mov     eax, [rsi+628h]
 * 000000014027F55E: mov     dword ptr [rbp+1A50h+var_1A28], eax
 * 000000014027F561: mov     [rbp+1A50h+var_19C8], r15
 * 000000014027F568: mov     rax, [rcx]
 * 000000014027F56B: add     edx, 0FFFFFFF8h
 * 000000014027F56E: mov     [r8], rax
 * 000000014027F571: add     rcx, 8
 * 000000014027F575: add     r8, 8
 * 000000014027F579: sub     r9, r14
 * 000000014027F57C: jnz     short loc_14027F568
 * 000000014027F57E: mov     r14d, [rbp+1A50h+var_1A08]
 * 000000014027F582: mov     r9d, 1
 * 000000014027F588: test    edx, edx
 * 000000014027F58A: jz      short loc_14027F59C
 * 000000014027F58C: mov     al, [rcx]
 * 000000014027F58E: add     rcx, r9
 * 000000014027F591: mov     [r8], al
 * 000000014027F594: add     r8, r9
 * 000000014027F597: add     edx, 0FFFFFFFFh
 * 000000014027F59A: jnz     short loc_14027F58C
 * 000000014027F59C: mov     [rsi+5B8h], r13
 * 000000014027F5A3: mov     ecx, r11d
 * 000000014027F5A6: mov     [rsi+628h], r13d
 * 000000014027F5AD: mov     rax, r12
 * 000000014027F5B0: mov     rdx, r10
 * 000000014027F5B3: mov     [rax], r13
 * 000000014027F5B6: add     ecx, 0FFFFFFF8h
 * 000000014027F5B9: add     rax, 8
 * 000000014027F5BD: sub     rdx, r9
 * 000000014027F5C0: jnz     short loc_14027F5B3
 * 000000014027F5C2: mov     edx, 1
 * 000000014027F5C7: test    ecx, ecx
 * 000000014027F5C9: jz      short loc_14027F5D6
 * 000000014027F5CB: mov     [rax], r13b
 * 000000014027F5CE: add     rax, rdx
 * 000000014027F5D1: add     ecx, 0FFFFFFFFh
 * 000000014027F5D4: jnz     short loc_14027F5CB
 * 000000014027F5D6: mov     eax, [rsi+5E4h]
 * 000000014027F5DC: mov     r9, rsi
 * 000000014027F5DF: add     [rsi+628h], eax
 * 000000014027F5E5: mov     rax, rsi
 * 000000014027F5E8: mov     r11d, [rsi+5E4h]
 * 000000014027F5EF: mov     r10d, [rsi+614h]
 * 000000014027F5F6: mov     r8, [rsi+618h]
 * 000000014027F5FD: lea     rcx, [rsi+r11]
 * 000000014027F601: cmp     rsi, rcx
 * 000000014027F604: jnb     short loc_14027F612
 * 000000014027F606: prefetchnta byte ptr [rax]
 * 000000014027F609: add     rax, 40h ; '@'
 * 000000014027F60D: cmp     rax, rcx
 * 000000014027F610: jb      short loc_14027F606
 * 000000014027F612: mov     r13d, r11d
 * 000000014027F615: shr     r13d, 7
 * 000000014027F619: test    r13d, r13d
 * 000000014027F61C: jz      short loc_14027F690
 * 000000014027F61E: mov     rdi, r8
 * 000000014027F621: mov     r15, 7010008004002001h
 * 000000014027F62B: mov     eax, 8
 * 000000014027F630: xor     r8, [r9]
 * 000000014027F633: mov     ecx, r10d
 * 000000014027F636: rol     r8, cl
 * 000000014027F639: xor     r8, [r9+8]
 * 000000014027F63D: add     r9, 10h
 * 000000014027F641: rol     r8, cl
 * 000000014027F644: sub     rax, rdx
 * 000000014027F647: jnz     short loc_14027F630
 * 000000014027F649: mov     rcx, r9
 * 000000014027F64C: sub     rcx, rsi
 * 000000014027F64F: xor     rcx, rdi
 * 000000014027F652: mov     rax, rcx
 * 000000014027F655: rol     rax, 11h
 * 000000014027F659: xor     rcx, rax
 * 000000014027F65C: mov     rax, r15
 * 000000014027F65F: mul     rcx
 * 000000014027F662: xor     r10d, eax
 * 000000014027F665: mov     [rbp+1A50h+var_1310], rdx
 * 000000014027F66C: xor     r10d, edx
 * 000000014027F66F: mov     edx, 1
 * 000000014027F674: and     r10d, 3Fh
 * 000000014027F678: cmovz   r10d, edx
 * 000000014027F67C: add     r13d, 0FFFFFFFFh
 * 000000014027F680: jnz     short loc_14027F62B
 * 000000014027F682: mov     r15, [rbp+1A50h+var_19C8]
 * 000000014027F689: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027F690: and     r11d, 7Fh
 * 000000014027F694: cmp     r11d, 8
 * 000000014027F698: jb      short loc_14027F6B7
 * 000000014027F69A: mov     eax, r11d
 * 000000014027F69D: shr     rax, 3
 * 000000014027F6A1: xor     r8, [r9]
 * 000000014027F6A4: mov     ecx, r10d
 * 000000014027F6A7: rol     r8, cl
 * 000000014027F6AA: add     r9, 8
 * 000000014027F6AE: add     r11d, 0FFFFFFF8h
 * 000000014027F6B2: sub     rax, rdx
 * 000000014027F6B5: jnz     short loc_14027F6A1
 * 000000014027F6B7: xor     r13d, r13d
 * 000000014027F6BA: test    r11d, r11d
 * 000000014027F6BD: jz      short loc_14027F6D5
 * 000000014027F6BF: movzx   eax, byte ptr [r9]
 * 000000014027F6C3: mov     ecx, r10d
 * 000000014027F6C6: xor     r8, rax
 * 000000014027F6C9: add     r9, rdx
 * 000000014027F6CC: rol     r8, cl
 * 000000014027F6CF: add     r11d, 0FFFFFFFFh
 * 000000014027F6D3: jnz     short loc_14027F6BF
 * 000000014027F6D5: mov     rax, [rbp+1A50h+var_1970]
 * 000000014027F6DC: lea     rcx, [rbp+1A50h+var_1028]
 * 000000014027F6E3: mov     r9d, 4
 * 000000014027F6E9: mov     [rsi+5B8h], rax
 * 000000014027F6F0: mov     eax, dword ptr [rbp+1A50h+var_1A28]
 * 000000014027F6F3: mov     edx, r9d
 * 000000014027F6F6: add     [rsi+628h], eax
 * 000000014027F6FC: lea     r10d, [r9+1Ch]
 * 000000014027F700: lea     r11d, [r9-3]
 * 000000014027F704: mov     rax, [rcx]
 * 000000014027F707: add     r10d, 0FFFFFFF8h
 * 000000014027F70B: mov     [r12], rax
 * 000000014027F70F: add     rcx, 8
 * 000000014027F713: add     r12, 8
 * 000000014027F717: sub     rdx, r11
 * 000000014027F71A: jnz     short loc_14027F704
 * 000000014027F71C: test    r10d, r10d
 * 000000014027F71F: jz      short loc_14027F733
 * 000000014027F721: mov     al, [rcx]
 * 000000014027F723: add     rcx, r11
 * 000000014027F726: mov     [r12], al
 * 000000014027F72A: add     r12, r11
 * 000000014027F72D: add     r10d, 0FFFFFFFFh
 * 000000014027F731: jnz     short loc_14027F721
 * 000000014027F733: mov     [rsi+5B8h], r8
 * 000000014027F73A: test    dword ptr [rsi+748h], 40000000h
 * 000000014027F744: jnz     loc_14027F91E
 * 000000014027F74A: mov     rcx, rsi
 * 000000014027F74D: mov     edx, r13d
 * 000000014027F750: mov     r12d, 19h
 * 000000014027F756: xor     [rcx], r15
 * 000000014027F759: add     edx, r11d
 * 000000014027F75C: movsxd  rax, edx
 * 000000014027F75F: lea     rcx, [rcx+8]
 * 000000014027F763: cmp     rax, r12
 * 000000014027F766: jb      short loc_14027F756
 * 000000014027F768: test    r14d, r14d
 * 000000014027F76B: jz      short loc_14027F789
 * 000000014027F76D: movsxd  rdx, r14d
 * 000000014027F770: dec     rdx
 * 000000014027F773: lea     rdx, [rcx+rdx*8]
 * 000000014027F777: xor     [rdx], r15
 * 000000014027F77A: mov     ecx, r14d
 * 000000014027F77D: ror     r15, cl
 * 000000014027F780: lea     rdx, [rdx-8]
 * 000000014027F784: sub     r14d, r11d
 * 000000014027F787: jnz     short loc_14027F777
 * 000000014027F789: cmp     [rbp+1A50h+var_19C0], r13d
 * 000000014027F790: jz      short loc_14027F7DD
 * 000000014027F792: rdtsc
 * 000000014027F794: shl     rdx, 20h
 * 000000014027F798: or      rax, rdx
 * 000000014027F79B: mov     rcx, rax
 * 000000014027F79E: ror     rax, 3
 * 000000014027F7A2: xor     rcx, rax
 * 000000014027F7A5: mov     rax, 7010008004002001h
 * 000000014027F7AF: mul     rcx
 * 000000014027F7B2: mov     rcx, rdx
 * 000000014027F7B5: mov     [rbp+1A50h+var_1308], rdx
 * 000000014027F7BC: xor     rcx, rax
 * 000000014027F7BF: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014027F7C9: mul     rcx
 * 000000014027F7CC: shr     rdx, 1
 * 000000014027F7CF: lea     rax, [rdx+rdx*2]
 * 000000014027F7D3: cmp     rcx, rax
 * 000000014027F7D6: jz      short loc_14027F7E5
 * 000000014027F7D8: jmp     loc_14027F91E
 * 000000014027F7DD: test    ebx, ebx
 * 000000014027F7DF: jnz     loc_14027F91E
 * 000000014027F7E5: mov     r14d, [rbp+1A50h+var_1978]
 * 000000014027F7EC: mov     eax, 2
 * 000000014027F7F1: mov     [rbp+1A50h+var_1943], al
 * 000000014027F7F7: mov     ecx, esi
 * 000000014027F7F9: mov     eax, 3
 * 000000014027F7FE: mov     [rbp+1A50h+var_1942], r9b
 * 000000014027F805: mov     [rbp+1A50h+var_1940], al
 * 000000014027F80B: mov     r9, rsi
 * 000000014027F80E: mov     eax, 7
 * 000000014027F813: mov     [rbp+1A50h+var_1945], r11b
 * 000000014027F81A: mov     [rbp+1A50h+var_1941], al
 * 000000014027F820: mov     r10, rsi
 * 000000014027F823: mov     eax, 0Ch
 * 000000014027F828: mov     [rbp+1A50h+var_1948], r13b
 * 000000014027F82F: mov     [rbp+1A50h+var_1947], al
 * 000000014027F835: mov     r11d, r13d
 * 000000014027F838: mov     eax, 0Fh
 * 000000014027F83D: mov     [rbp+1A50h+var_193F], 5
 * 000000014027F844: mov     [rbp+1A50h+var_1946], al
 * 000000014027F84A: mov     rbx, r13
 * 000000014027F84D: mov     [rbp+1A50h+var_193C], 6
 * 000000014027F854: mov     [rbp+1A50h+var_193B], 8
 * 000000014027F85B: mov     [rbp+1A50h+var_193E], 9
 * 000000014027F862: mov     [rbp+1A50h+var_193A], 0Ah
 * 000000014027F869: mov     [rbp+1A50h+var_1944], 0Bh
 * 000000014027F870: mov     [rbp+1A50h+var_1939], 0Dh
 * 000000014027F877: mov     [rbp+1A50h+var_193D], 0Eh
 * 000000014027F87E: ror     r9, cl
 * 000000014027F881: mov     rdx, [r10]
 * 000000014027F884: mov     edi, 1
 * 000000014027F889: lea     r8d, [rdi+0Fh]
 * 000000014027F88D: lea     r15d, [rdi+0Eh]
 * 000000014027F891: movzx   eax, byte ptr [r10]
 * 000000014027F895: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014027F899: and     rax, r15
 * 000000014027F89C: movzx   ecx, [rbp+rax+1A50h+var_1948]
 * 000000014027F8A4: or      rdx, rcx
 * 000000014027F8A7: ror     rdx, 4
 * 000000014027F8AB: mov     [r10], rdx
 * 000000014027F8AE: sub     r8, rdi
 * 000000014027F8B1: jnz     short loc_14027F891
 * 000000014027F8B3: mov     rdi, [rbp+1A50h+var_1A40]
 * 000000014027F8B7: sub     rdx, rbx
 * 000000014027F8BA: mov     r15, [rbp+1A50h+var_1A00]
 * 000000014027F8BE: mov     [r10], rdx
 * 000000014027F8C1: test    r14d, r14d
 * 000000014027F8C4: jnz     short loc_14027F8D9
 * 000000014027F8C6: xor     rdx, r15
 * 000000014027F8C9: mov     ecx, edi
 * 000000014027F8CB: bswap   rdx
 * 000000014027F8CE: xor     rdx, r9
 * 000000014027F8D1: ror     rdx, cl
 * 000000014027F8D4: xor     rdx, rdi
 * 000000014027F8D7: jmp     short loc_14027F8DC
 * 000000014027F8D9: xor     rdx, r9
 * 000000014027F8DC: mov     [r10], rdx
 * 000000014027F8DF: mov     ecx, edx
 * 000000014027F8E1: mov     edx, 0C8h
 * 000000014027F8E6: not     ecx
 * 000000014027F8E8: sub     edx, r11d
 * 000000014027F8EB: add     rbx, rsi
 * 000000014027F8EE: imul    edx, r11d
 * 000000014027F8F2: inc     r11d
 * 000000014027F8F5: ror     rdx, cl
 * 000000014027F8F8: mov     ecx, [r10]
 * 000000014027F8FB: xor     r9, rdx
 * 000000014027F8FE: rol     r9, cl
 * 000000014027F901: add     r10, 8
 * 000000014027F905: add     r9, rsi
 * 000000014027F908: cmp     r11d, r12d
 * 000000014027F90B: jb      loc_14027F881
 * 000000014027F911: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027F918: mov     r11d, 1
 * 000000014027F91E: mov     [rbp+1A50h+var_1A50], r11d
 * 000000014027F922: rdtsc
 * 000000014027F924: shl     rdx, 20h
 * 000000014027F928: mov     r12, 7010008004002001h
 * 000000014027F932: or      rax, rdx
 * 000000014027F935: mov     rcx, rax
 * 000000014027F938: ror     rax, 3
 * 000000014027F93C: xor     rcx, rax
 * 000000014027F93F: mov     rax, r12
 * 000000014027F942: mul     rcx
 * 000000014027F945: mov     r15, rax
 * 000000014027F948: mov     [rbp+1A50h+var_1300], rdx
 * 000000014027F94F: xor     r15, rdx
 * 000000014027F952: jmp     loc_14027FADE
 * 000000014027F957: mov     r14d, 1
 * 000000014027F95D: mov     r11d, [rsi+748h]
 * 000000014027F964: mov     r15, r13
 * 000000014027F967: mov     [rbp+1A50h+var_19C8], r13
 * 000000014027F96E: bt      r11d, 1Eh
 * 000000014027F973: jb      loc_14027FAD4
 * 000000014027F979: bt      r11d, 8
 * 000000014027F97E: jb      loc_14027FAC1
 * 000000014027F984: mov     r12, [rsi+540h]
 * 000000014027F98B: xor     eax, eax
 * 000000014027F98D: mov     r13, [rsi+470h]
 * 000000014027F994: mov     r9, rsi
 * 000000014027F997: shr     r11d, 9
 * 000000014027F99B: mov     r10, rsi
 * 000000014027F99E: and     r11d, r14d
 * 000000014027F9A1: mov     [rbp+1A50h+var_1935], r14b
 * 000000014027F9A8: lea     ecx, [rax+2]
 * 000000014027F9AB: mov     [rbp+1A50h+var_1A30], r12
 * 000000014027F9AF: mov     [rbp+1A50h+var_1933], cl
 * 000000014027F9B5: mov     ebx, eax
 * 000000014027F9B7: lea     ecx, [rax+3]
 * 000000014027F9BA: mov     [rbp+1A50h+var_1938], al
 * 000000014027F9C0: mov     [rbp+1A50h+var_1930], cl
 * 000000014027F9C6: mov     r14d, eax
 * 000000014027F9C9: lea     ecx, [rax+7]
 * 000000014027F9CC: mov     [rbp+1A50h+var_1932], 4
 * 000000014027F9D3: mov     [rbp+1A50h+var_1931], cl
 * 000000014027F9D9: lea     ecx, [rax+0Ch]
 * 000000014027F9DC: mov     [rbp+1A50h+var_1937], cl
 * 000000014027F9E2: lea     ecx, [rax+0Fh]
 * 000000014027F9E5: mov     [rbp+1A50h+var_1936], cl
 * 000000014027F9EB: mov     ecx, esi
 * 000000014027F9ED: ror     r9, cl
 * 000000014027F9F0: mov     [rbp+1A50h+var_192F], 5
 * 000000014027F9F7: mov     [rbp+1A50h+var_192C], 6
 * 000000014027F9FE: mov     [rbp+1A50h+var_192B], 8
 * 000000014027FA05: mov     [rbp+1A50h+var_192E], 9
 * 000000014027FA0C: mov     [rbp+1A50h+var_192A], 0Ah
 * 000000014027FA13: mov     [rbp+1A50h+var_1934], 0Bh
 * 000000014027FA1A: mov     [rbp+1A50h+var_1929], 0Dh
 * 000000014027FA21: mov     [rbp+1A50h+var_192D], 0Eh
 * 000000014027FA28: mov     rdx, [r10]
 * 000000014027FA2B: mov     r8d, 10h
 * 000000014027FA31: lea     r15d, [r8-0Fh]
 * 000000014027FA35: lea     r12d, [r8-1]
 * 000000014027FA39: movzx   eax, byte ptr [r10]
 * 000000014027FA3D: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014027FA41: and     rax, r12
 * 000000014027FA44: movzx   ecx, [rbp+rax+1A50h+var_1938]
 * 000000014027FA4C: or      rdx, rcx
 * 000000014027FA4F: ror     rdx, 4
 * 000000014027FA53: mov     [r10], rdx
 * 000000014027FA56: sub     r8, r15
 * 000000014027FA59: jnz     short loc_14027FA39
 * 000000014027FA5B: mov     r12, [rbp+1A50h+var_1A30]
 * 000000014027FA5F: sub     rdx, r14
 * 000000014027FA62: mov     [r10], rdx
 * 000000014027FA65: test    r11d, r11d
 * 000000014027FA68: jnz     short loc_14027FA7E
 * 000000014027FA6A: xor     rdx, r13
 * 000000014027FA6D: mov     ecx, r12d
 * 000000014027FA70: bswap   rdx
 * 000000014027FA73: xor     rdx, r9
 * 000000014027FA76: ror     rdx, cl
 * 000000014027FA79: xor     rdx, r12
 * 000000014027FA7C: jmp     short loc_14027FA81
 * 000000014027FA7E: xor     rdx, r9
 * 000000014027FA81: mov     [r10], rdx
 * 000000014027FA84: mov     ecx, edx
 * 000000014027FA86: mov     edx, 0C8h
 * 000000014027FA8B: not     ecx
 * 000000014027FA8D: sub     edx, ebx
 * 000000014027FA8F: add     r14, rsi
 * 000000014027FA92: imul    edx, ebx
 * 000000014027FA95: inc     ebx
 * 000000014027FA97: ror     rdx, cl
 * 000000014027FA9A: mov     ecx, [r10]
 * 000000014027FA9D: xor     r9, rdx
 * 000000014027FAA0: rol     r9, cl
 * 000000014027FAA3: add     r10, 8
 * 000000014027FAA7: add     r9, rsi
 * 000000014027FAAA: cmp     ebx, 19h
 * 000000014027FAAD: jb      loc_14027FA28
 * 000000014027FAB3: mov     r15, [rbp+1A50h+var_19C8]
 * 000000014027FABA: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014027FAC1: mov     rax, [rsi+260h]
 * 000000014027FAC8: lea     rcx, [rsi+600h]
 * 000000014027FACF: call    KeGuardDispatchICall
 * 000000014027FAD4: mov     r12, 7010008004002001h
 * 000000014027FADE: mov     r13, [rsp+0DA0h+arg_0]
 * 000000014027FAE6: test    dword ptr [r13+748h], 10000000h
 * 000000014027FAF1: mov     r14, [r13+5D8h]
 * 000000014027FAF8: jz      short loc_14027FB2F
 * 000000014027FAFA: rdtsc
 * 000000014027FAFC: shl     rdx, 20h
 * 000000014027FB00: or      rax, rdx
 * 000000014027FB03: mov     rcx, rax
 * 000000014027FB06: ror     rax, 3
 * 000000014027FB0A: xor     rcx, rax
 * 000000014027FB0D: mov     rax, r12
 * 000000014027FB10: mul     rcx
 * 000000014027FB13: mov     r14, rdx
 * 000000014027FB16: mov     [rbp+1A50h+var_12F8], rdx
 * 000000014027FB1D: xor     r14, rax
 * 000000014027FB20: and     r14, 0Fh
 * 000000014027FB24: shl     r14, 4
 * 000000014027FB28: add     r14, [r13+550h]
 * 000000014027FB2F: mov     r8d, 28h ; '('
 * 000000014027FB35: lea     rbx, [r13+6C0h]
 * 000000014027FB3C: mov     rcx, rbx
 * 000000014027FB3F: lea     rdx, [rbp+1A50h+var_1578]
 * 000000014027FB46: lea     r9d, [r8-23h]
 * 000000014027FB4A: lea     r10d, [r8-27h]
 * 000000014027FB4E: mov     rax, [rcx]
 * 000000014027FB51: add     r8d, 0FFFFFFF8h
 * 000000014027FB55: mov     [rdx], rax
 * 000000014027FB58: add     rcx, 8
 * 000000014027FB5C: add     rdx, 8
 * 000000014027FB60: sub     r9, r10
 * 000000014027FB63: jnz     short loc_14027FB4E
 * 000000014027FB65: xor     r11d, r11d
 * 000000014027FB68: test    r8d, r8d
 * 000000014027FB6B: jz      short loc_14027FB7D
 * 000000014027FB6D: mov     al, [rcx]
 * 000000014027FB6F: add     rcx, r10
 * 000000014027FB72: mov     [rdx], al
 * 000000014027FB74: add     rdx, r10
 * 000000014027FB77: add     r8d, 0FFFFFFFFh
 * 000000014027FB7B: jnz     short loc_14027FB6D
 * 000000014027FB7D: mov     eax, [r13+748h]
 * 000000014027FB84: mov     ecx, 8000h
 * 000000014027FB89: test    ecx, eax
 * 000000014027FB8B: jnz     short loc_14027FB96
 * 000000014027FB8D: cmp     [rbx], r11d
 * 000000014027FB90: jnz     loc_1402801B1
 * 000000014027FB96: bt      eax, 1Eh
 * 000000014027FB9A: jb      loc_14028044B
 * 000000014027FBA0: mov     al, [r13+6E8h]
 * 000000014027FBA7: mov     r8, r15
 * 000000014027FBAA: sub     al, r10b
 * 000000014027FBAD: xor     r8, rsi
 * 000000014027FBB0: movzx   r10d, al
 * 000000014027FBB4: mov     r11d, 3Fh ; '?'
 * 000000014027FBBA: sub     r11d, r10d
 * 000000014027FBBD: rdtsc
 * 000000014027FBBF: shl     rdx, 20h
 * 000000014027FBC3: or      rax, rdx
 * 000000014027FBC6: mov     rcx, rax
 * 000000014027FBC9: ror     rax, 3
 * 000000014027FBCD: xor     rcx, rax
 * 000000014027FBD0: mov     rax, r12
 * 000000014027FBD3: mul     rcx
 * 000000014027FBD6: mov     [rbp+1A50h+var_12F0], rdx
 * 000000014027FBDD: xor     rax, rdx
 * 000000014027FBE0: xor     edx, edx
 * 000000014027FBE2: div     r11
 * 000000014027FBE5: lea     r9d, [r10+rdx]
 * 000000014027FBE9: rdtsc
 * 000000014027FBEB: shl     rdx, 20h
 * 000000014027FBEF: or      rax, rdx
 * 000000014027FBF2: mov     rcx, rax
 * 000000014027FBF5: ror     rax, 3
 * 000000014027FBF9: xor     rcx, rax
 * 000000014027FBFC: mov     rax, r12
 * 000000014027FBFF: mul     rcx
 * 000000014027FC02: xor     rax, rdx
 * 000000014027FC05: mov     [rbp+1A50h+var_12E8], rdx
 * 000000014027FC0C: xor     edx, edx
 * 000000014027FC0E: div     r11
 * 000000014027FC11: add     edx, r10d
 * 000000014027FC14: cmp     edx, r9d
 * 000000014027FC17: jz      short loc_14027FBE9
 * 000000014027FC19: mov     rsi, [r13+590h]
 * 000000014027FC20: xor     r11d, r11d
 * 000000014027FC23: mov     r12, [r13+588h]
 * 000000014027FC2A: mov     eax, r9d
 * 000000014027FC2D: bts     r8, rax
 * 000000014027FC31: mov     eax, edx
 * 000000014027FC33: btr     r8, rax
 * 000000014027FC37: mov     eax, 3
 * 000000014027FC3C: cmp     [r13+6ECh], eax
 * 000000014027FC43: jnz     loc_14027FDE1
 * 000000014027FC49: mov     r13, [rbp+1A50h+var_19D0]
 * 000000014027FC50: test    r13, r13
 * 000000014027FC53: jz      loc_14027FDD9
 * 000000014027FC59: mov     rcx, [rsp+0DA0h+arg_0]
 * 000000014027FC61: lea     edx, [r11+1]
 * 000000014027FC65: mov     rax, [rcx+368h]
 * 000000014027FC6C: mov     byte ptr [rsi], 13h
 * 000000014027FC6F: mov     [rsi+1], dl
 * 000000014027FC72: mov     [rsi+2], r11w
 * 000000014027FC77: mov     [rsi+18h], rax
 * 000000014027FC7B: mov     [rsi+20h], r13
 * 000000014027FC7F: mov     [rsi+38h], r11
 * 000000014027FC83: mov     [rsi+10h], r11
 * 000000014027FC87: mov     [rsi+28h], r8
 * 000000014027FC8B: mov     rax, [rcx+358h]
 * 000000014027FC92: mov     rcx, [r13+8]
 * 000000014027FC96: mov     r8, [r13+0]
 * 000000014027FC9A: mov     edx, [r13+10h]
 * 000000014027FC9E: call    KeGuardDispatchICall
 * 000000014027FCA3: mov     r9, [r13+0]
 * 000000014027FCA7: mov     rcx, r13
 * 000000014027FCAA: rol     rcx, 11h
 * 000000014027FCAE: mov     rax, 7010008004002001h
 * 000000014027FCB8: xor     rcx, r13
 * 000000014027FCBB: mov     r10d, 4
 * 000000014027FCC1: mul     rcx
 * 000000014027FCC4: mov     [rbp+1A50h+var_12E0], rdx
 * 000000014027FCCB: xor     rdx, rax
 * 000000014027FCCE: lea     rax, [r13+18h]
 * 000000014027FCD2: mov     r8, rdx
 * 000000014027FCD5: xor     r11d, r11d
 * 000000014027FCD8: lea     r13d, [r10-3]
 * 000000014027FCDC: xor     [rax], r8
 * 000000014027FCDF: mov     ecx, r10d
 * 000000014027FCE2: rol     r8, cl
 * 000000014027FCE5: lea     rax, [rax-8]
 * 000000014027FCE9: sub     r10d, r13d
 * 000000014027FCEC: jnz     short loc_14027FCDC
 * 000000014027FCEE: and     dl, 0Fh
 * 000000014027FCF1: lea     eax, [r10+7]
 * 000000014027FCF5: cmp     dl, al
 * 000000014027FCF7: jnb     short loc_14027FD66
 * 000000014027FCF9: mov     rcx, r9
 * 000000014027FCFC: mov     rax, 7010008004002001h
 * 000000014027FD06: rol     rcx, 11h
 * 000000014027FD0A: mov     r10d, 6
 * 000000014027FD10: xor     rcx, r9
 * 000000014027FD13: mul     rcx
 * 000000014027FD16: mov     [rbp+1A50h+var_12D8], rdx
 * 000000014027FD1D: xor     rdx, rax
 * 000000014027FD20: add     r8, rdx
 * 000000014027FD23: lea     rax, [r9+28h]
 * 000000014027FD27: movsx   edx, word ptr [r9+8]
 * 000000014027FD2C: xor     [rax], r8
 * 000000014027FD2F: mov     ecx, r10d
 * 000000014027FD32: rol     r8, cl
 * 000000014027FD35: lea     rax, [rax-8]
 * 000000014027FD39: sub     r10d, r13d
 * 000000014027FD3C: jnz     short loc_14027FD2C
 * 000000014027FD3E: sub     rdx, 30h ; '0'
 * 000000014027FD42: shr     rdx, 3
 * 000000014027FD46: test    edx, edx
 * 000000014027FD48: jz      short loc_14027FD66
 * 000000014027FD4A: movsxd  r10, edx
 * 000000014027FD4D: add     r10, 5
 * 000000014027FD51: lea     r10, [r9+r10*8]
 * 000000014027FD55: xor     [r10], r8
 * 000000014027FD58: mov     ecx, edx
 * 000000014027FD5A: rol     r8, cl
 * 000000014027FD5D: lea     r10, [r10-8]
 * 000000014027FD61: sub     edx, r13d
 * 000000014027FD64: jnz     short loc_14027FD55
 * 000000014027FD66: mov     r13, [rsp+0DA0h+arg_0]
 * 000000014027FD6E: mov     r10d, 1
 * 000000014027FD74: mov     [rsi+40h], r15
 * 000000014027FD78: mov     r15, 7010008004002001h
 * 000000014027FD82: test    dword ptr [r13+748h], 100h
 * 000000014027FD8D: jz      short loc_14027FE08
 * 000000014027FD8F: lea     r9, [r14-48h]
 * 000000014027FD93: mov     [r9+40h], rsi
 * 000000014027FD97: rdtsc
 * 000000014027FD99: shl     rdx, 20h
 * 000000014027FD9D: or      rax, rdx
 * 000000014027FDA0: mov     rcx, rax
 * 000000014027FDA3: ror     rax, 3
 * 000000014027FDA7: xor     rcx, rax
 * 000000014027FDAA: mov     rax, r15
 * 000000014027FDAD: mul     rcx
 * 000000014027FDB0: mov     [rbp+1A50h+var_12D0], rdx
 * 000000014027FDB7: xor     rdx, rax
 * 000000014027FDBA: mov     eax, 19h
 * 000000014027FDBF: xor     [r14], rdx
 * 000000014027FDC2: lea     r14, [r14+8]
 * 000000014027FDC6: sub     rax, r10
 * 000000014027FDC9: jnz     short loc_14027FDBF
 * 000000014027FDCB: mov     dword ptr [r9+48h], 48513148h
 * 000000014027FDD3: mov     [r9+20h], rdx
 * 000000014027FDD7: jmp     short loc_14027FE0B
 * 000000014027FDD9: mov     r13, [rsp+0DA0h+arg_0]
 * 000000014027FDE1: mov     byte ptr [rsi], 13h
 * 000000014027FDE4: mov     r10d, 1
 * 000000014027FDEA: mov     [rsi+1], r10b
 * 000000014027FDEE: mov     [rsi+2], r11w
 * 000000014027FDF3: mov     [rsi+18h], r14
 * 000000014027FDF7: mov     [rsi+20h], r8
 * 000000014027FDFB: mov     [rsi+38h], r11
 * 000000014027FDFF: mov     [rsi+10h], r11
 * 000000014027FE03: jmp     loc_14027FD74
 * 000000014027FE08: mov     r9, rsi
 * 000000014027FE0B: mov     r8, [r13+808h]
 * 000000014027FE12: test    r8, r8
 * 000000014027FE15: jz      short loc_14027FE8D
 * 000000014027FE17: mov     r8, [r8+20h]
 * 000000014027FE1B: mov     r14d, 0Fh
 * 000000014027FE21: mov     rcx, r8
 * 000000014027FE24: shr     rcx, 4
 * 000000014027FE28: xor     rcx, r8
 * 000000014027FE2B: shr     rcx, 4
 * 000000014027FE2F: xor     rcx, [r13+510h]
 * 000000014027FE36: mov     al, cl
 * 000000014027FE38: mov     r11, rcx
 * 000000014027FE3B: and     al, r14b
 * 000000014027FE3E: movzx   r10d, al
 * 000000014027FE42: lea     eax, [r14-0Eh]
 * 000000014027FE46: cmovz   r10d, eax
 * 000000014027FE4A: xor     eax, eax
 * 000000014027FE4C: mov     edx, eax
 * 000000014027FE4E: test    r10b, r10b
 * 000000014027FE51: jz      short loc_14027FE76
 * 000000014027FE53: mov     rdx, rcx
 * 000000014027FE56: and     rdx, r14
 * 000000014027FE59: add     rdx, r8
 * 000000014027FE5C: mov     r8, [rdx]
 * 000000014027FE5F: mov     rax, r8
 * 000000014027FE62: shr     rax, 4
 * 000000014027FE66: xor     rax, r8
 * 000000014027FE69: shr     rax, 4
 * 000000014027FE6D: xor     rcx, rax
 * 000000014027FE70: add     r10b, 0FFh
 * 000000014027FE74: jnz     short loc_14027FE53
 * 000000014027FE76: bt      r11, 0Ch
 * 000000014027FE7B: jnb     short loc_14027FE80
 * 000000014027FE7D: xor     r9, r11
 * 000000014027FE80: mov     [rdx], r9
 * 000000014027FE83: xor     r11d, r11d
 * 000000014027FE86: mov     r9, [r13+808h]
 * 000000014027FE8D: lock or [rsp+0DA0h+var_DA0], r11d
 * 000000014027FE92: mov     ecx, [r13+638h]
 * 000000014027FE99: test    ecx, ecx
 * 000000014027FE9B: jz      loc_140280101
 * 000000014027FEA1: sub     ecx, 1
 * 000000014027FEA4: jz      loc_1402800EE
 * 000000014027FEAA: sub     ecx, 1
 * 000000014027FEAD: jz      loc_1402800DB
 * 000000014027FEB3: sub     ecx, 1
 * 000000014027FEB6: jz      loc_140280033
 * 000000014027FEBC: cmp     ecx, 1
 * 000000014027FEBF: jz      loc_14027FF46
 * 000000014027FEC5: mov     r8, [r13+750h]
 * 000000014027FECC: mov     [r8+48h], r9
 * 000000014027FED0: lock or [rsp+0DA0h+var_DA0], r11d
 * 000000014027FED5: rdtsc
 * 000000014027FED7: shl     rdx, 20h
 * 000000014027FEDB: or      rax, rdx
 * 000000014027FEDE: mov     rcx, rax
 * 000000014027FEE1: mov     rdx, rax
 * 000000014027FEE4: ror     rcx, 3
 * 000000014027FEE8: mov     rax, r15
 * 000000014027FEEB: xor     rdx, rcx
 * 000000014027FEEE: mul     rdx
 * 000000014027FEF1: mov     rcx, rdx
 * 000000014027FEF4: mov     [rbp+1A50h+var_12C8], rdx
 * 000000014027FEFB: xor     rcx, rax
 * 000000014027FEFE: mov     rax, 0ABCC77118461CEFDh
 * 000000014027FF08: mul     rcx
 * 000000014027FF0B: shr     rdx, 1Ah
 * 000000014027FF0F: imul    rax, rdx, 5F5E100h
 * 000000014027FF16: sub     rcx, rax
 * 000000014027FF19: mov     rax, 0D6BF94D5E57A42BDh
 * 000000014027FF23: add     rcx, 47868C00h
 * 000000014027FF2A: imul    rcx
 * 000000014027FF2D: add     rdx, rcx
 * 000000014027FF30: sar     rdx, 17h
 * 000000014027FF34: mov     rax, rdx
 * 000000014027FF37: shr     rax, 3Fh
 * 000000014027FF3B: add     rdx, rax
 * 000000014027FF3E: mov     [r8], edx
 * 000000014027FF41: jmp     loc_1402801AC
 * 000000014027FF46: mov     rdx, [r13+798h]
 * 000000014027FF4D: xor     r9d, r9d
 * 000000014027FF50: mov     rcx, [r13+7A8h]
 * 000000014027FF57: xor     r8d, r8d
 * 000000014027FF5A: mov     rax, [r13+7A0h]
 * 000000014027FF61: mov     rdi, [r13+750h]
 * 000000014027FF68: mov     byte ptr [rdx], 12h
 * 000000014027FF6B: mov     byte ptr [rdx+2], 58h ; 'X'
 * 000000014027FF6F: mov     [rdx+50h], r11b
 * 000000014027FF73: mov     [rdx+8], rdi
 * 000000014027FF77: mov     [rdx+20h], rax
 * 000000014027FF7B: mov     [rdx+28h], r11
 * 000000014027FF7F: mov     [rdx+30h], rcx
 * 000000014027FF83: mov     [rdx+51h], r11b
 * 000000014027FF87: mov     [rdx+38h], r11
 * 000000014027FF8B: mov     [rdx+52h], r11b
 * 000000014027FF8F: mov     rdx, rsi
 * 000000014027FF92: mov     rax, [r13+2B8h]
 * 000000014027FF99: mov     rcx, [r13+798h]
 * 000000014027FFA0: call    KeGuardDispatchICall
 * 000000014027FFA5: xor     r11d, r11d
 * 000000014027FFA8: test    al, al
 * 000000014027FFAA: jnz     loc_1402801AC
 * 000000014027FFB0: lea     r10d, [r11+1]
 * 000000014027FFB4: cmp     [rbx], r11d
 * 000000014027FFB7: jnz     short loc_14027FFE9
 * 000000014027FFB9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014027FFC3: add     rax, r13
 * 000000014027FFC6: mov     [r13+6C8h], rax
 * 000000014027FFCD: mov     [r13+6D0h], r11
 * 000000014027FFD4: mov     qword ptr [r13+6D8h], 104h
 * 000000014027FFDF: mov     [r13+6E0h], rdi
 * 000000014027FFE6: mov     [rbx], r10d
 * 000000014027FFE9: mov     edx, 28h ; '('
 * 000000014027FFEE: lea     rcx, [rbp+1A50h+var_1578]
 * 000000014027FFF5: lea     r13d, [rdx-23h]
 * 000000014027FFF9: mov     rax, [rbx]
 * 000000014027FFFC: add     edx, 0FFFFFFF8h
 * 000000014027FFFF: mov     [rcx], rax
 * 0000000140280002: add     rbx, 8
 * 0000000140280006: add     rcx, 8
 * 000000014028000A: sub     r13, r10
 * 000000014028000D: jnz     short loc_14027FFF9
 * 000000014028000F: mov     r13, [rsp+0DA0h+arg_0]
 * 0000000140280017: test    edx, edx
 * 0000000140280019: jz      loc_1402801AC
 * 000000014028001F: mov     al, [rbx]
 * 0000000140280021: add     rbx, r10
 * 0000000140280024: mov     [rcx], al
 * 0000000140280026: add     rcx, r10
 * 0000000140280029: add     edx, 0FFFFFFFFh
 * 000000014028002C: jnz     short loc_14028001F
 * 000000014028002E: jmp     loc_1402801AC
 * 0000000140280033: mov     rdx, [r13+750h]
 * 000000014028003A: mov     rcx, [rdx+618h]
 * 0000000140280041: test    rcx, rcx
 * 0000000140280044: jz      loc_1402800CA
 * 000000014028004A: mov     r10d, 1
 * 0000000140280050: cmp     [rbx], r11d
 * 0000000140280053: jnz     short loc_140280085
 * 0000000140280055: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014028005F: add     rax, r13
 * 0000000140280062: mov     [r13+6C8h], rax
 * 0000000140280069: mov     [r13+6D0h], r11
 * 0000000140280070: mov     qword ptr [r13+6D8h], 104h
 * 000000014028007B: mov     [r13+6E0h], rcx
 * 0000000140280082: mov     [rbx], r10d
 * 0000000140280085: mov     r8d, 28h ; '('
 * 000000014028008B: lea     rcx, [rbp+1A50h+var_1578]
 * 0000000140280092: lea     r13d, [r8-23h]
 * 0000000140280096: mov     rax, [rbx]
 * 0000000140280099: add     r8d, 0FFFFFFF8h
 * 000000014028009D: mov     [rcx], rax
 * 00000001402800A0: add     rbx, 8
 * 00000001402800A4: add     rcx, 8
 * 00000001402800A8: sub     r13, r10
 * 00000001402800AB: jnz     short loc_140280096
 * 00000001402800AD: mov     r13, [rsp+0DA0h+arg_0]
 * 00000001402800B5: test    r8d, r8d
 * 00000001402800B8: jz      short loc_1402800CA
 * 00000001402800BA: mov     al, [rbx]
 * 00000001402800BC: add     rbx, r10
 * 00000001402800BF: mov     [rcx], al
 * 00000001402800C1: add     rcx, r10
 * 00000001402800C4: add     r8d, 0FFFFFFFFh
 * 00000001402800C8: jnz     short loc_1402800BA
 * 00000001402800CA: lock or [rsp+0DA0h+var_DA0], r11d
 * 00000001402800CF: mov     [rdx+618h], rsi
 * 00000001402800D6: jmp     loc_1402801AC
 * 00000001402800DB: mov     rax, [r13+5C0h]
 * 00000001402800E2: mov     [rax+80h], r9
 * 00000001402800E9: jmp     loc_1402801AC
 * 00000001402800EE: mov     rax, [r13+5C0h]
 * 00000001402800F5: mov     [rax+0E0h], r9
 * 00000001402800FC: jmp     loc_1402801AC
 * 0000000140280101: rdtsc
 * 0000000140280103: shl     rdx, 20h
 * 0000000140280107: or      rax, rdx
 * 000000014028010A: mov     rcx, rax
 * 000000014028010D: mov     rdx, rax
 * 0000000140280110: ror     rcx, 3
 * 0000000140280114: mov     rax, r15
 * 0000000140280117: xor     rdx, rcx
 * 000000014028011A: mul     rdx
 * 000000014028011D: mov     rcx, rdx
 * 0000000140280120: mov     [rbp+1A50h+var_12C0], rdx
 * 0000000140280127: xor     rcx, rax
 * 000000014028012A: mov     rax, 0ABCC77118461CEFDh
 * 0000000140280134: mul     rcx
 * 0000000140280137: shr     rdx, 1Ah
 * 000000014028013B: imul    rax, rdx, 5F5E100h
 * 0000000140280142: sub     rcx, rax
 * 0000000140280145: sub     rdi, rcx
 * 0000000140280148: rdtsc
 * 000000014028014A: shl     rdx, 20h
 * 000000014028014E: or      rax, rdx
 * 0000000140280151: mov     [rsp+0DA0h+BugCheckParameter4], r9
 * 0000000140280156: mov     rcx, rax
 * 0000000140280159: mov     rdx, rax
 * 000000014028015C: ror     rcx, 3
 * 0000000140280160: mov     rax, r15
 * 0000000140280163: xor     rdx, rcx
 * 0000000140280166: mov     rcx, r12
 * 0000000140280169: mul     rdx
 * 000000014028016C: mov     r8, rdx
 * 000000014028016F: mov     [rbp+1A50h+var_12B8], rdx
 * 0000000140280176: xor     r8, rax
 * 0000000140280179: mov     rax, 346DC5D63886594Bh
 * 0000000140280183: mul     r8
 * 0000000140280186: shr     rdx, 0Bh
 * 000000014028018A: imul    rax, rdx, 2710h
 * 0000000140280191: mov     rdx, rdi
 * 0000000140280194: sub     r8, rax
 * 0000000140280197: mov     rax, [r13+1D8h]
 * 000000014028019E: mov     r9d, r8d
 * 00000001402801A1: xor     r8d, r8d
 * 00000001402801A4: call    KeGuardDispatchICall
 * 00000001402801A9: xor     r11d, r11d
 * 00000001402801AC: mov     ecx, 8000h
 * 00000001402801B1: cmp     [rbp+1A50h+var_1578], r11d
 * 00000001402801B8: jz      loc_14028044B
 * 00000001402801BE: test    [r13+748h], ecx
 * 00000001402801C5: jnz     loc_14028044B
 * 00000001402801CB: mov     r13, [rbp+1A50h+var_1560]
 * 00000001402801D2: mov     rbx, [rbp+1A50h+var_1558]
 * 00000001402801D9: mov     rdi, [rbp+1A50h+var_1568]
 * 00000001402801E0: mov     rsi, [rbp+1A50h+var_1570]
 * 00000001402801E7: mov     rax, [rsp+0DA0h+arg_0]
 * 00000001402801EF: mov     [rbp+1A50h+var_1970], r13
 * 00000001402801F6: mov     [rbp+1A50h+var_1A40], rbx
 * 00000001402801FA: mov     [rbp+1A50h+var_19C8], rdi
 * 0000000140280201: mov     [rbp+1A50h+var_1A00], rsi
 * 0000000140280205: mov     [rbp+1A50h+var_18F8], rax
 * 000000014028020C: mov     rax, cr8
 * 0000000140280210: mov     r8d, 2
 * 0000000140280216: cmp     al, r8b
 * 0000000140280219: jnb     short loc_140280223
 * 000000014028021B: mov     rax, cr8
 * 000000014028021F: mov     cr8, r8
 * 0000000140280223: mov     rax, gs:20h
 * 000000014028022C: mov     r15, gs:188h
 * 0000000140280235: mov     [rbp+1A50h+var_1A30], r15
 * 0000000140280239: mov     r14, [rax+2E50h]
 * 0000000140280240: mov     al, [rax+2E6Ah]
 * 0000000140280246: test    al, al
 * 0000000140280248: jz      short loc_140280269
 * 000000014028024A: lea     rax, [rbp+1A50h+var_18F8]
 * 0000000140280251: cmp     rax, r14
 * 0000000140280254: ja      short loc_140280269
 * 0000000140280256: lea     rax, [r14-6000h]
 * 000000014028025D: lea     rcx, [rbp+1A50h+var_18F8]
 * 0000000140280264: cmp     rcx, rax
 * 0000000140280267: jnb     short loc_14028026D
 * 0000000140280269: mov     r14, [r15+28h]
 * 000000014028026D: mov     rdx, [rbp+1A50h+var_18F8]
 * 0000000140280274: test    dword ptr [rdx+748h], 8000000h
 * 000000014028027E: jnz     loc_140280392
 * 0000000140280284: mov     r12, cr0
 * 0000000140280288: mov     rax, r12
 * 000000014028028B: btr     rax, 10h
 * 0000000140280290: mov     cr0, rax
 * 0000000140280293: mov     r10d, [rdx+810h]
 * 000000014028029A: lea     r8, [rdx+818h]
 * 00000001402802A1: shl     r10, 4
 * 00000001402802A5: xor     eax, eax
 * 00000001402802A7: add     r10, r8
 * 00000001402802AA: mov     r9, r10
 * 00000001402802AD: cmp     [rdx+814h], eax
 * 00000001402802B3: jbe     short loc_140280302
 * 00000001402802B5: lea     ebx, [rax+10h]
 * 00000001402802B8: lea     r13d, [rax+1]
 * 00000001402802BC: mov     rcx, [r9]
 * 00000001402802BF: mov     rax, [r9+8]
 * 00000001402802C3: mov     [rcx], rax
 * 00000001402802C6: mov     rcx, cr4
 * 00000001402802C9: test    rcx, 20080h
 * 00000001402802D0: jz      short loc_1402802E2
 * 00000001402802D2: mov     rax, rcx
 * 00000001402802D5: btc     rax, 7
 * 00000001402802DA: mov     cr4, rax
 * 00000001402802DD: mov     cr4, rcx
 * 00000001402802E0: jmp     short loc_1402802E8
 * 00000001402802E2: mov     rax, cr3
 * 00000001402802E5: mov     cr3, rax
 * 00000001402802E8: add     r9, rbx
 * 00000001402802EB: add     r11d, r13d
 * 00000001402802EE: cmp     r11d, [rdx+814h]
 * 00000001402802F5: jb      short loc_1402802BC
 * 00000001402802F7: mov     r13, [rbp+1A50h+var_1970]
 * 00000001402802FE: mov     rbx, [rbp+1A50h+var_1A40]
 * 0000000140280302: cmp     r8, r10
 * 0000000140280305: jnb     short loc_140280376
 * 0000000140280307: xor     r13d, r13d
 * 000000014028030A: lea     r15d, [r13+1]
 * 000000014028030E: mov     esi, [r8+8]
 * 0000000140280312: mov     rcx, r9
 * 0000000140280315: mov     r11, [r8]
 * 0000000140280318: mov     ebx, esi
 * 000000014028031A: cmp     esi, 8
 * 000000014028031D: jb      short loc_14028033B
 * 000000014028031F: mov     edi, esi
 * 0000000140280321: shr     rdi, 3
 * 0000000140280325: mov     rax, [rcx]
 * 0000000140280328: add     ebx, 0FFFFFFF8h
 * 000000014028032B: mov     [r11], rax
 * 000000014028032E: add     rcx, 8
 * 0000000140280332: add     r11, 8
 * 0000000140280336: sub     rdi, r15
 * 0000000140280339: jnz     short loc_140280325
 * 000000014028033B: test    ebx, ebx
 * 000000014028033D: jz      short loc_140280350
 * 000000014028033F: sub     r11, rcx
 * 0000000140280342: mov     al, [rcx]
 * 0000000140280344: mov     [rcx+r11], al
 * 0000000140280348: add     rcx, r15
 * 000000014028034B: add     ebx, 0FFFFFFFFh
 * 000000014028034E: jnz     short loc_140280342
 * 0000000140280350: add     r9, rsi
 * 0000000140280353: add     r8, 10h
 * 0000000140280357: cmp     r8, r10
 * 000000014028035A: jb      short loc_14028030E
 * 000000014028035C: mov     r15, [rbp+1A50h+var_1A30]
 * 0000000140280360: mov     r13, [rbp+1A50h+var_1970]
 * 0000000140280367: mov     rbx, [rbp+1A50h+var_1A40]
 * 000000014028036B: mov     rdi, [rbp+1A50h+var_19C8]
 * 0000000140280372: mov     rsi, [rbp+1A50h+var_1A00]
 * 0000000140280376: mov     rax, [rdx+218h]
 * 000000014028037D: mov     byte ptr [rax], 0C3h
 * 0000000140280380: mov     cr0, r12
 * 0000000140280384: mov     rdx, [rbp+1A50h+var_18F8]
 * 000000014028038B: xor     r11d, r11d
 * 000000014028038E: lea     r8d, [r11+2]
 * 0000000140280392: cmp     [rdx+6F0h], r11d
 * 0000000140280399: jz      short loc_1402803AC
 * 000000014028039B: mov     rax, cr8
 * 000000014028039F: cmp     al, r8b
 * 00000001402803A2: jnb     short loc_1402803AC
 * 00000001402803A4: mov     rax, cr8
 * 00000001402803A8: mov     cr8, r8
 * 00000001402803AC: mov     ecx, [rdx+6F0h]
 * 00000001402803B2: test    ecx, ecx
 * 00000001402803B4: jz      loc_140280770
 * 00000001402803BA: sub     ecx, 1
 * 00000001402803BD: jz      loc_140280763
 * 00000001402803C3: sub     ecx, 1
 * 00000001402803C6: jz      short loc_14028043F
 * 00000001402803C8: sub     ecx, 1
 * 00000001402803CB: jz      short loc_140280433
 * 00000001402803CD: sub     ecx, 1
 * 00000001402803D0: jz      short loc_14028040E
 * 00000001402803D2: cmp     ecx, 1
 * 00000001402803D5: jz      short loc_1402803F0
 * 00000001402803D7: mov     rax, [rdx+538h]
 * 00000001402803DE: mov     ecx, 1
 * 00000001402803E3: lock or [rax+340h], rcx
 * 00000001402803EB: jmp     loc_140280770
 * 00000001402803F0: mov     ecx, [rdx+748h]
 * 00000001402803F6: mov     rax, gs:188h
 * 00000001402803FF: shr     ecx, 0Ah
 * 0000000140280402: and     ecx, 1Fh
 * 0000000140280405: lock bts [rax], ecx
 * 0000000140280409: jmp     loc_140280770
 * 000000014028040E: mov     edx, [rdx+748h]
 * 0000000140280414: mov     rax, gs:188h
 * 000000014028041D: shr     edx, 0Ah
 * 0000000140280420: and     edx, 1Fh
 * 0000000140280423: mov     rcx, [rax+0B8h]
 * 000000014028042A: lock bts [rcx], edx
 * 000000014028042E: jmp     loc_140280770
 * 0000000140280433: mov     rax, [rdx+4E0h]
 * 000000014028043A: jmp     loc_14028076A
 * 000000014028043F: mov     rax, [rdx+4D8h]
 * 0000000140280446: jmp     loc_14028076A
 * 000000014028044B: test    dword ptr [r13+748h], 40000000h
 * 0000000140280456: jnz     short loc_1402804A2
 * 0000000140280458: cmp     [rbp+1A50h+var_1A50], r11d
 * 000000014028045C: jz      short loc_1402804A2
 * 000000014028045E: mov     ecx, [r13+6ECh]
 * 0000000140280465: sub     ecx, 1
 * 0000000140280468: jz      short loc_14028047C
 * 000000014028046A: mov     eax, 2
 * 000000014028046F: cmp     ecx, eax
 * 0000000140280471: jnz     short loc_1402804A2
 * 0000000140280473: mov     rax, [r13+360h]
 * 000000014028047A: jmp     short loc_14028049B
 * 000000014028047C: add     qword ptr [r13+5C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140280484: mov     rax, [r13+5C8h]
 * 000000014028048B: mov     ecx, [rax]
 * 000000014028048D: mov     [r13+5D0h], ecx
 * 0000000140280494: mov     rax, [r13+228h]
 * 000000014028049B: mov     [r13+100h], rax
 * 00000001402804A2: mov     rax, r13
 * 00000001402804A5: lea     r11, [rsp+0DA0h+var_20]
 * 00000001402804AD: mov     rbx, [r11+38h]
 * 00000001402804B1: mov     rsi, [r11+40h]
 * 00000001402804B5: mov     rdi, [r11+48h]
 * 00000001402804B9: mov     rsp, r11
 * 00000001402804BC: pop     r15
 * 00000001402804BE: pop     r14
 * 00000001402804C0: pop     r13
 * 00000001402804C2: pop     r12
 * 00000001402804C4: pop     rbp
 * 00000001402804C5: retn
 * 00000001402804C6: mov     [rbp+1A50h+var_1814], 6580h
 * 00000001402804D0: mov     r9d, 3; BugCheckParameter3
 * 00000001402804D6: mov     ecx, [rbp+1A50h+var_1814]
 * 00000001402804DC: mov     r8, r15; BugCheckParameter2
 * 00000001402804DF: xor     ecx, 2AC0h
 * 00000001402804E5: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402804EA: ror     ecx, 46h; BugCheckCode
 * 00000001402804ED: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001402804F1: call    KeBugCheckEx
 * 00000001402804F7: mov     [rbp+1A50h+var_1818], 6580h
 * 0000000140280501: mov     r9d, 2; BugCheckParameter3
 * 0000000140280507: mov     ecx, [rbp+1A50h+var_1818]
 * 000000014028050D: mov     r8, r15; BugCheckParameter2
 * 0000000140280510: xor     ecx, 2AC0h
 * 0000000140280516: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014028051B: ror     ecx, 46h; BugCheckCode
 * 000000014028051E: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140280522: call    KeBugCheckEx
 * 0000000140280528: mov     [rbp+1A50h+var_1828], 6580h
 * 0000000140280532: xor     r9d, r9d; BugCheckParameter3
 * 0000000140280535: mov     ecx, [rbp+1A50h+var_1828]
 * 000000014028053B: mov     r8, r15; BugCheckParameter2
 * 000000014028053E: xor     ecx, 2AC0h
 * 0000000140280544: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140280549: ror     ecx, 46h; BugCheckCode
 * 000000014028054C: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140280550: call    KeBugCheckEx
 * 0000000140280556: mov     [rbp+1A50h+var_1824], 6580h
 * 0000000140280560: mov     r9, r12; BugCheckParameter3
 * 0000000140280563: mov     ecx, [rbp+1A50h+var_1824]
 * 0000000140280569: mov     r8, r15; BugCheckParameter2
 * 000000014028056C: xor     ecx, 2AC0h
 * 0000000140280572: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140280577: ror     ecx, 46h; BugCheckCode
 * 000000014028057A: mov     edx, 0Ah; BugCheckParameter1
 * 000000014028057F: call    KeBugCheckEx
 * 0000000140280585: mov     [rbp+1A50h+var_1820], 6580h
 * 000000014028058F: mov     r8, r15; BugCheckParameter2
 * 0000000140280592: mov     ecx, [rbp+1A50h+var_1820]
 * 0000000140280598: xor     ecx, 2AC0h
 * 000000014028059E: mov     r9d, edx; BugCheckParameter3
 * 00000001402805A1: ror     ecx, 46h; BugCheckCode
 * 00000001402805A4: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402805A9: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402805AE: call    KeBugCheckEx
 * 00000001402805B4: mov     [rbp+1A50h+var_181C], 6580h
 * 00000001402805BE: mov     r8, r10; BugCheckParameter2
 * 00000001402805C1: mov     ecx, [rbp+1A50h+var_181C]
 * 00000001402805C7: xor     ecx, 2AC0h
 * 00000001402805CD: mov     r9d, edx; BugCheckParameter3
 * 00000001402805D0: ror     ecx, 46h; BugCheckCode
 * 00000001402805D3: mov     edx, 0Ah; BugCheckParameter1
 * 00000001402805D8: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402805DD: call    KeBugCheckEx
 * 00000001402805E3: mov     r8, [rbp+1A50h+var_1A28]; BugCheckParameter2
 * 00000001402805E7: mov     r9d, 6; BugCheckParameter3
 * 00000001402805ED: mov     [rbp+1A50h+var_17D8], 6580h
 * 00000001402805F7: mov     ecx, [rbp+1A50h+var_17D8]
 * 00000001402805FD: xor     ecx, 2AC0h
 * 0000000140280603: mov     [rsp+0DA0h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140280608: ror     ecx, 46h; BugCheckCode
 * 000000014028060B: lea     edx, [r9+4]; BugCheckParameter1
 * 000000014028060F: call    KeBugCheckEx
 * 0000000140280615: mov     [rbp+1A50h+var_17AC], 6580h
 * 000000014028061F: xor     r9d, r9d; BugCheckParameter3
 * 0000000140280622: mov     ecx, [rbp+1A50h+var_17AC]
 * 0000000140280628: mov     r8, r12; BugCheckParameter2
 * 000000014028062B: xor     ecx, 2AC0h
 * 0000000140280631: mov     [rsp+0DA0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140280636: ror     ecx, 46h; BugCheckCode
 * 0000000140280639: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 000000014028063D: call    KeBugCheckEx
 * 0000000140280643: mov     [rbp+1A50h+var_183C], 6580h
 * 000000014028064D: mov     r9d, 3; BugCheckParameter3
 * 0000000140280653: mov     ecx, [rbp+1A50h+var_183C]
 * 0000000140280659: mov     r8, r12; BugCheckParameter2
 * 000000014028065C: xor     ecx, 2AC0h
 * 0000000140280662: mov     [rsp+0DA0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140280667: ror     ecx, 46h; BugCheckCode
 * 000000014028066A: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014028066E: call    KeBugCheckEx
 * 0000000140280674: mov     [rbp+1A50h+var_17A8], 6580h
 * 000000014028067E: mov     r9, r10; BugCheckParameter3
 * 0000000140280681: mov     ecx, [rbp+1A50h+var_17A8]
 * 0000000140280687: mov     r8, r12; BugCheckParameter2
 * 000000014028068A: xor     ecx, 2AC0h
 * 0000000140280690: mov     [rsp+0DA0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140280695: ror     ecx, 46h; BugCheckCode
 * 0000000140280698: mov     edx, 0Ah; BugCheckParameter1
 * 000000014028069D: call    KeBugCheckEx
 * 00000001402806A3: xor     eax, eax
 * 00000001402806A5: mov     [rbp+1A50h+var_1848], 6580h
 * 00000001402806AF: mov     ecx, [rbp+1A50h+var_1848]
 * 00000001402806B5: mov     r8, r12; BugCheckParameter2
 * 00000001402806B8: xor     ecx, 2AC0h
 * 00000001402806BE: mov     r9d, edx; BugCheckParameter3
 * 00000001402806C1: ror     ecx, 46h; BugCheckCode
 * 00000001402806C4: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402806C7: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402806CC: call    KeBugCheckEx
 * 00000001402806D2: xor     eax, eax
 * 00000001402806D4: mov     [rbp+1A50h+var_1844], 6580h
 * 00000001402806DE: mov     ecx, [rbp+1A50h+var_1844]
 * 00000001402806E4: mov     r8, r10; BugCheckParameter2
 * 00000001402806E7: xor     ecx, 2AC0h
 * 00000001402806ED: mov     r9d, edx; BugCheckParameter3
 * 00000001402806F0: ror     ecx, 46h; BugCheckCode
 * 00000001402806F3: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 00000001402806F6: mov     [rsp+0DA0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001402806FB: call    KeBugCheckEx
 * 0000000140280701: mov     [rbp+1A50h+var_1840], 6580h
 * 000000014028070B: mov     r9d, 2; BugCheckParameter3
 * 0000000140280711: mov     ecx, [rbp+1A50h+var_1840]
 * 0000000140280717: mov     r8, r12; BugCheckParameter2
 * 000000014028071A: xor     ecx, 2AC0h
 * 0000000140280720: mov     [rsp+0DA0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140280725: ror     ecx, 46h; BugCheckCode
 * 0000000140280728: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014028072C: call    KeBugCheckEx
 * 0000000140280732: mov     [rbp+1A50h+var_1838], 6580h
 * 000000014028073C: mov     r9d, 6; BugCheckParameter3
 * 0000000140280742: mov     ecx, [rbp+1A50h+var_1838]
 * 0000000140280748: mov     r8, r12; BugCheckParameter2
 * 000000014028074B: xor     ecx, 2AC0h
 * 0000000140280751: mov     [rsp+0DA0h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140280756: ror     ecx, 46h; BugCheckCode
 * 0000000140280759: lea     edx, [r9+4]; BugCheckParameter1
 * 000000014028075D: call    KeBugCheckEx
 * 0000000140280763: mov     rax, [rdx+4C8h]
 * 000000014028076A: lock bts qword ptr [rax], 0
 * 0000000140280770: mov     [r15+610h], r11
 * 0000000140280777: mov     [r15+690h], r11
 * 000000014028077E: mov     rcx, [rbp+1A50h+var_18F8]
 * 0000000140280785: mov     rcx, [rcx+158h]; Target
 * 000000014028078C: call    KeGuardCheckICall
 * 0000000140280791: mov     rax, [rbp+1A50h+var_18F8]
 * 0000000140280798: mov     r9, rbx
 * 000000014028079B: mov     [rsp+0DA0h+var_D70], r14
 * 00000001402807A0: mov     r8, rdi
 * 00000001402807A3: mov     rdx, rsi
 * 00000001402807A6: mov     ecx, 109h
 * 00000001402807AB: mov     r10, [rax+158h]
 * 00000001402807B2: mov     [rsp+0DA0h+var_D78], r10
 * 00000001402807B7: mov     [rsp+0DA0h+BugCheckParameter4], r13
 * 00000001402807BC: call    SdbpCheckDll
 */
