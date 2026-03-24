/*
 * XREFs of KiPageFault @ 0x1401B8300
 * Callers:
 *     KiPageFaultShadow @ 0x1402CF800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1401BBA40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401BC300 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x14023F4E0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140284450 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1401B8300
 * Reason: Hex-Rays returned no pseudocode for 0x1401B8300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B8300: push    rbp
 * 00000001401B8301: sub     rsp, 158h
 * 00000001401B8308: lea     rbp, [rsp+80h]
 * 00000001401B8310: mov     [rbp+0D8h+var_12D], 1
 * 00000001401B8314: mov     [rbp+0D8h+var_128], rax
 * 00000001401B8318: mov     [rbp+0D8h+var_120], rcx
 * 00000001401B831C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401B8320: mov     [rbp+0D8h+var_110], r8
 * 00000001401B8324: mov     [rbp+0D8h+var_108], r9
 * 00000001401B8328: mov     [rbp+0D8h+var_100], r10
 * 00000001401B832C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401B8330: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401B8337: jnz     short loc_1401B8366
 * 00000001401B8339: lfence
 * 00000001401B833C: test    byte ptr gs:278h, 1
 * 00000001401B8345: jnz     short loc_1401B834F
 * 00000001401B8347: lfence
 * 00000001401B834A: jmp     loc_1401B8592
 * 00000001401B834F: movzx   eax, byte ptr gs:27Ah
 * 00000001401B8358: mov     ecx, 48h ; 'H'
 * 00000001401B835D: xor     edx, edx
 * 00000001401B835F: wrmsr
 * 00000001401B8361: jmp     loc_1401B8592
 * 00000001401B8366: test    cs:KiKvaShadow, 1
 * 00000001401B836D: jnz     short loc_1401B8372
 * 00000001401B836F: swapgs
 * 00000001401B8372: lfence
 * 00000001401B8375: mov     r10, gs:188h
 * 00000001401B837E: mov     rcx, gs:188h
 * 00000001401B8387: mov     rcx, [rcx+220h]
 * 00000001401B838E: mov     rcx, [rcx+838h]
 * 00000001401B8395: mov     gs:270h, rcx
 * 00000001401B839E: movzx   eax, byte ptr gs:27Bh
 * 00000001401B83A7: cmp     gs:27Ah, al
 * 00000001401B83AF: jz      short loc_1401B83C2
 * 00000001401B83B1: mov     gs:27Ah, al
 * 00000001401B83B9: mov     ecx, 48h ; 'H'
 * 00000001401B83BE: xor     edx, edx
 * 00000001401B83C0: wrmsr
 * 00000001401B83C2: movzx   edx, byte ptr gs:278h
 * 00000001401B83CB: test    edx, 8
 * 00000001401B83D1: jz      short loc_1401B83E6
 * 00000001401B83D3: mov     eax, 1
 * 00000001401B83D8: xor     edx, edx
 * 00000001401B83DA: mov     ecx, 49h ; 'I'
 * 00000001401B83DF: wrmsr
 * 00000001401B83E1: jmp     loc_1401B8524
 * 00000001401B83E6: test    edx, 2
 * 00000001401B83EC: jz      loc_1401B8521
 * 00000001401B83F2: test    byte ptr gs:279h, 4
 * 00000001401B83FB: jnz     loc_1401B8521
 * 00000001401B8401: call    loc_1401B8514
 * 00000001401B8406: add     rsp, 8
 * 00000001401B840A: call    loc_1401B851D
 * 00000001401B840F: add     rsp, 8
 * 00000001401B8413: call    loc_1401B8406
 * 00000001401B8418: add     rsp, 8
 * 00000001401B841C: call    loc_1401B840F
 * 00000001401B8421: add     rsp, 8
 * 00000001401B8425: call    loc_1401B8418
 * 00000001401B842A: add     rsp, 8
 * 00000001401B842E: call    loc_1401B8421
 * 00000001401B8433: add     rsp, 8
 * 00000001401B8437: call    loc_1401B842A
 * 00000001401B843C: add     rsp, 8
 * 00000001401B8440: call    loc_1401B8433
 * 00000001401B8445: add     rsp, 8
 * 00000001401B8449: call    loc_1401B843C
 * 00000001401B844E: add     rsp, 8
 * 00000001401B8452: call    loc_1401B8445
 * 00000001401B8457: add     rsp, 8
 * 00000001401B845B: call    loc_1401B844E
 * 00000001401B8460: add     rsp, 8
 * 00000001401B8464: call    loc_1401B8457
 * 00000001401B8469: add     rsp, 8
 * 00000001401B846D: call    loc_1401B8460
 * 00000001401B8472: add     rsp, 8
 * 00000001401B8476: call    loc_1401B8469
 * 00000001401B847B: add     rsp, 8
 * 00000001401B847F: call    loc_1401B8472
 * 00000001401B8484: add     rsp, 8
 * 00000001401B8488: call    loc_1401B847B
 * 00000001401B848D: add     rsp, 8
 * 00000001401B8491: call    loc_1401B8484
 * 00000001401B8496: add     rsp, 8
 * 00000001401B849A: call    loc_1401B848D
 * 00000001401B849F: add     rsp, 8
 * 00000001401B84A3: call    loc_1401B8496
 * 00000001401B84A8: add     rsp, 8
 * 00000001401B84AC: call    loc_1401B849F
 * 00000001401B84B1: add     rsp, 8
 * 00000001401B84B5: call    loc_1401B84A8
 * 00000001401B84BA: add     rsp, 8
 * 00000001401B84BE: call    loc_1401B84B1
 * 00000001401B84C3: add     rsp, 8
 * 00000001401B84C7: call    loc_1401B84BA
 * 00000001401B84CC: add     rsp, 8
 * 00000001401B84D0: call    loc_1401B84C3
 * 00000001401B84D5: add     rsp, 8
 * 00000001401B84D9: call    loc_1401B84CC
 * 00000001401B84DE: add     rsp, 8
 * 00000001401B84E2: call    loc_1401B84D5
 * 00000001401B84E7: add     rsp, 8
 * 00000001401B84EB: call    loc_1401B84DE
 * 00000001401B84F0: add     rsp, 8
 * 00000001401B84F4: call    loc_1401B84E7
 * 00000001401B84F9: add     rsp, 8
 * 00000001401B84FD: call    loc_1401B84F0
 * 00000001401B8502: add     rsp, 8
 * 00000001401B8506: call    loc_1401B84F9
 * 00000001401B850B: add     rsp, 8
 * 00000001401B850F: call    loc_1401B8502
 * 00000001401B8514: add     rsp, 8
 * 00000001401B8518: call    loc_1401B850B
 * 00000001401B851D: add     rsp, 8
 * 00000001401B8521: lfence
 * 00000001401B8524: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401B852C: jnz     short loc_1401B857D
 * 00000001401B852E: mov     ecx, 0C0000102h
 * 00000001401B8533: rdmsr
 * 00000001401B8535: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001401B8538: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001401B853B: test    byte ptr [r10+3], 80h
 * 00000001401B8540: jz      short loc_1401B857D
 * 00000001401B8542: shl     rdx, 20h
 * 00000001401B8546: or      rax, rdx
 * 00000001401B8549: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B8550: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B8558: cmp     [r10+0F0h], rax
 * 00000001401B855F: jz      short loc_1401B857D
 * 00000001401B8561: mov     rdx, [r10+1F0h]
 * 00000001401B8568: bts     dword ptr [r10+74h], 8
 * 00000001401B856E: dec     word ptr [r10+1E6h]
 * 00000001401B8576: mov     [rdx+80h], rax
 * 00000001401B857D: test    byte ptr [r10+3], 3
 * 00000001401B8582: mov     [rbp+0D8h+var_58], 0
 * 00000001401B858B: jz      short loc_1401B8592
 * 00000001401B858D: call    KiSaveDebugRegisterState
 * 00000001401B8592: cld
 * 00000001401B8593: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401B8597: ldmxcsr dword ptr gs:180h
 * 00000001401B85A0: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401B85A4: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401B85A8: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401B85AC: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401B85B0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401B85B4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401B85B8: mov     eax, [rbp+0E0h]
 * 00000001401B85BE: mov     rcx, cr2
 * 00000001401B85C1: test    [rbp+0D8h+arg_10], 200h
 * 00000001401B85CB: jz      short loc_1401B85CE
 * 00000001401B85CD: sti
 * 00000001401B85CE: mov     r9, gs:188h
 * 00000001401B85D7: bt      dword ptr [r9+74h], 8
 * 00000001401B85DD: jnb     short loc_1401B85ED
 * 00000001401B85DF: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401B85E6: jz      short loc_1401B85ED
 * 00000001401B85E8: call    KiUmsTrapEntry
 * 00000001401B85ED: mov     [rbp+0D8h+var_88], rcx
 * 00000001401B85F1: bt      [rbp+0D8h+arg_10], 9
 * 00000001401B85F9: jnb     loc_1401B872B
 * 00000001401B85FF: lea     r9, [rbp+0D8h+var_158]
 * 00000001401B8603: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001401B860A: and     r8b, 1
 * 00000001401B860E: mov     rdx, rcx; ULONG_PTR
 * 00000001401B8611: mov     ecx, eax; BugCheckParameter2
 * 00000001401B8613: shr     eax, 1
 * 00000001401B8615: and     eax, 9
 * 00000001401B8618: mov     [rbp+0D8h+var_12E], al
 * 00000001401B861B: call    MmAccessFault
 * 00000001401B8620: test    eax, eax
 * 00000001401B8622: jl      short loc_1401B865A
 * 00000001401B8624: cmp     cs:PsWatchEnabled, 0
 * 00000001401B862B: jz      short loc_1401B863F
 * 00000001401B862D: mov     r8, [rbp+0D8h+var_88]
 * 00000001401B8631: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001401B8638: mov     ecx, eax
 * 00000001401B863A: call    PsWatchWorkingSet
 * 00000001401B863F: cmp     cs:KdpOweBreakpoint, 0
 * 00000001401B8646: jz      loc_1401B8731
 * 00000001401B864C: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401B8650: call    KdSetOwedBreakpoints
 * 00000001401B8655: jmp     loc_1401B8731
 * 00000001401B865A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401B8661: jz      short loc_1401B86B5
 * 00000001401B8663: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401B866B: jnz     short loc_1401B86AB
 * 00000001401B866D: mov     r9, gs:188h
 * 00000001401B8676: test    byte ptr [r9+3], 4
 * 00000001401B867B: jz      short loc_1401B8686
 * 00000001401B867D: mov     r8, [r9+7B0h]
 * 00000001401B8684: jmp     short loc_1401B868F
 * 00000001401B8686: mov     r8, gs:30h
 * 00000001401B868F: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401B8693: jz      short loc_1401B86B5
 * 00000001401B8695: mov     ecx, 0C0000102h
 * 00000001401B869A: mov     eax, r8d
 * 00000001401B869D: shr     r8, 20h
 * 00000001401B86A1: mov     edx, r8d
 * 00000001401B86A4: wrmsr
 * 00000001401B86A6: jmp     loc_1401B8731
 * 00000001401B86AB: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401B86AF: shr     rcx, 20h
 * 00000001401B86B3: jnz     short loc_1401B8731
 * 00000001401B86B5: mov     ecx, eax
 * 00000001401B86B7: mov     edx, 2
 * 00000001401B86BC: cmp     ecx, 0D0000006h
 * 00000001401B86C2: jz      short loc_1401B8705
 * 00000001401B86C4: cmp     ecx, 0C0000005h
 * 00000001401B86CA: jz      short loc_1401B86EB
 * 00000001401B86CC: cmp     ecx, 80000001h
 * 00000001401B86D2: jz      short loc_1401B86F0
 * 00000001401B86D4: cmp     ecx, 0C00000FDh
 * 00000001401B86DA: jz      short loc_1401B86F0
 * 00000001401B86DC: mov     ecx, 0C0000006h
 * 00000001401B86E1: mov     edx, 3
 * 00000001401B86E6: mov     r11d, eax
 * 00000001401B86E9: jmp     short loc_1401B86F0
 * 00000001401B86EB: mov     ecx, 10000004h
 * 00000001401B86F0: mov     r10, [rbp+0D8h+var_88]
 * 00000001401B86F4: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401B86F9: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401B8700: call    KiExceptionDispatch
 * 00000001401B8705: mov     rax, cr8
 * 00000001401B8709: mov     r10, [rbp+0D8h+arg_0]
 * 00000001401B8710: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401B8715: and     eax, 0FFh
 * 00000001401B871A: mov     r8, rax
 * 00000001401B871D: mov     rdx, [rbp+0D8h+var_88]
 * 00000001401B8721: mov     ecx, 0Ah
 * 00000001401B8726: call    KiBugCheckDispatch
 * 00000001401B872B: xor     eax, eax
 * 00000001401B872D: mov     al, 0FFh
 * 00000001401B872F: jmp     short loc_1401B8709
 * 00000001401B8731: mov     rax, cr8
 * 00000001401B8735: or      eax, eax
 * 00000001401B8737: mov     [rbp+0D8h+var_138], eax
 * 00000001401B873A: jnz     short loc_1401B8745
 * 00000001401B873C: mov     ecx, 1
 * 00000001401B8741: mov     cr8, rcx
 * 00000001401B8745: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401B8749: call    KiCheckForSListAddress
 * 00000001401B874E: mov     ecx, [rbp+0D8h+var_138]
 * 00000001401B8751: or      ecx, ecx
 * 00000001401B8753: jnz     short loc_1401B8759
 * 00000001401B8755: mov     cr8, rcx
 * 00000001401B8759: cli
 * 00000001401B875A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401B8761: jz      loc_1401B8888
 * 00000001401B8767: mov     rcx, gs:188h
 * 00000001401B8770: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B8777: jz      short loc_1401B8792
 * 00000001401B8779: mov     ecx, 1
 * 00000001401B877E: mov     cr8, rcx
 * 00000001401B8782: sti
 * 00000001401B8783: call    KiInitiateUserApc
 * 00000001401B8788: cli
 * 00000001401B8789: mov     ecx, 0
 * 00000001401B878E: mov     cr8, rcx
 * 00000001401B8792: mov     rcx, gs:188h
 * 00000001401B879B: test    dword ptr [rcx], 8000000h
 * 00000001401B87A1: jz      short loc_1401B87A8
 * 00000001401B87A3: call    KiRestoreSetContextState
 * 00000001401B87A8: mov     rcx, gs:188h
 * 00000001401B87B1: test    dword ptr [rcx], 40010000h
 * 00000001401B87B7: jz      short loc_1401B87DE
 * 00000001401B87B9: test    byte ptr [rcx+2], 1
 * 00000001401B87BD: jz      short loc_1401B87CD
 * 00000001401B87BF: call    KiCopyCounters
 * 00000001401B87C4: mov     rcx, gs:188h
 * 00000001401B87CD: test    byte ptr [rcx+3], 40h
 * 00000001401B87D1: jz      short loc_1401B87DE
 * 00000001401B87D3: lea     rsp, [rbp-80h]
 * 00000001401B87D7: mov     cl, 1
 * 00000001401B87D9: call    KiUmsExit
 * 00000001401B87DE: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401B87E2: cmp     [rbp+0D8h+var_58], 0
 * 00000001401B87EA: jz      short loc_1401B87F1
 * 00000001401B87EC: call    KiRestoreDebugRegisterState
 * 00000001401B87F1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401B87F5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401B87F9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401B87FD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401B8801: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401B8805: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401B8809: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401B880D: mov     r10, [rbp+0D8h+var_100]
 * 00000001401B8811: mov     r9, [rbp+0D8h+var_108]
 * 00000001401B8815: mov     r8, [rbp+0D8h+var_110]
 * 00000001401B8819: movzx   eax, byte ptr gs:27Dh
 * 00000001401B8822: cmp     gs:27Ah, al
 * 00000001401B882A: jz      short loc_1401B883D
 * 00000001401B882C: mov     gs:27Ah, al
 * 00000001401B8834: mov     ecx, 48h ; 'H'
 * 00000001401B8839: xor     edx, edx
 * 00000001401B883B: wrmsr
 * 00000001401B883D: btr     word ptr gs:278h, 2
 * 00000001401B8848: jnb     short loc_1401B8858
 * 00000001401B884A: mov     eax, 1
 * 00000001401B884F: xor     edx, edx
 * 00000001401B8851: mov     ecx, 49h ; 'I'
 * 00000001401B8856: wrmsr
 * 00000001401B8858: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401B885C: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401B8860: mov     rax, [rbp+0D8h+var_128]
 * 00000001401B8864: mov     rsp, rbp
 * 00000001401B8867: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401B886E: add     rsp, 0E8h
 * 00000001401B8875: test    cs:KiKvaShadow, 1
 * 00000001401B887C: jz      short loc_1401B8883
 * 00000001401B887E: jmp     KiKernelExit
 * 00000001401B8883: swapgs
 * 00000001401B8886: iretq
 * 00000001401B8888: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401B888C: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401B8890: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401B8894: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401B8898: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401B889C: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401B88A0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401B88A4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401B88A8: mov     r10, [rbp+0D8h+var_100]
 * 00000001401B88AC: mov     r9, [rbp+0D8h+var_108]
 * 00000001401B88B0: mov     r8, [rbp+0D8h+var_110]
 * 00000001401B88B4: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401B88B8: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401B88BC: mov     rax, [rbp+0D8h+var_128]
 * 00000001401B88C0: mov     rsp, rbp
 * 00000001401B88C3: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401B88CA: add     rsp, 0E8h
 * 00000001401B88D1: iretq
 */
