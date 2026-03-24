/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C0023420
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007ACA0 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1C0023420
 * Reason: Hex-Rays returned no pseudocode for 0x1C0023420
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0023420: mov     [rsp+arg_0], rbx
 * 00000001C0023425: mov     [rsp+arg_8], rsi
 * 00000001C002342A: mov     [rsp+arg_10], rdi
 * 00000001C002342F: push    r13
 * 00000001C0023431: sub     rsp, 60h
 * 00000001C0023435: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C002343C: lea     r13, aNull_0; "NULL"
 * 00000001C0023443: mov     rdi, [rsp+68h+arg_30]
 * 00000001C002344B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C002344F: mov     rsi, rcx
 * 00000001C0023452: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0023459: lea     r9d, [rbx+0Eh]
 * 00000001C002345D: jz      loc_1C00234F8
 * 00000001C0023463: cmp     byte ptr [rdx+29h], 2
 * 00000001C0023467: jb      loc_1C00234F8
 * 00000001C002346D: test    rdi, rdi
 * 00000001C0023470: jz      short loc_1C0023483
 * 00000001C0023472: mov     rdx, rbx
 * 00000001C0023475: inc     rdx
 * 00000001C0023478: cmp     byte ptr [rdi+rdx], 0
 * 00000001C002347C: jnz     short loc_1C0023475
 * 00000001C002347E: inc     rdx
 * 00000001C0023481: jmp     short loc_1C0023488
 * 00000001C0023483: mov     edx, 5
 * 00000001C0023488: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002348F: lea     r8, [rsp+68h+arg_38]
 * 00000001C0023497: test    rdi, rdi
 * 00000001C002349A: mov     rcx, rdi
 * 00000001C002349D: cmovz   rcx, r13
 * 00000001C00234A1: and     [rsp+68h+var_18], 0
 * 00000001C00234A7: mov     [rsp+68h+var_20], 4
 * 00000001C00234B0: mov     [rsp+68h+var_28], r8
 * 00000001C00234B5: lea     r8, WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids
 * 00000001C00234BC: mov     [rsp+68h+var_30], rdx
 * 00000001C00234C1: mov     edx, 2Bh ; '+'
 * 00000001C00234C6: mov     [rsp+68h+var_38], rcx
 * 00000001C00234CB: lea     rcx, [rsp+68h+arg_28]
 * 00000001C00234D3: mov     [rsp+68h+var_40], 8
 * 00000001C00234DC: mov     [rsp+68h+var_48], rcx
 * 00000001C00234E1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00234E8: mov     rcx, [rcx+18h]
 * 00000001C00234EC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00234F2: mov     r9d, 0Dh
 * 00000001C00234F8: test    rdi, rdi
 * 00000001C00234FB: jz      short loc_1C002350B
 * 00000001C00234FD: inc     rbx
 * 00000001C0023500: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0023504: jnz     short loc_1C00234FD
 * 00000001C0023506: inc     rbx
 * 00000001C0023509: jmp     short loc_1C0023510
 * 00000001C002350B: mov     ebx, 5
 * 00000001C0023510: test    rdi, rdi
 * 00000001C0023513: lea     rax, [rsp+68h+arg_38]
 * 00000001C002351B: mov     edx, 2
 * 00000001C0023520: mov     rcx, rsi
 * 00000001C0023523: cmovz   rdi, r13
 * 00000001C0023527: and     [rsp+68h+var_10], 0
 * 00000001C002352D: mov     [rsp+68h+var_18], 4
 * 00000001C0023536: mov     [rsp+68h+var_20], rax
 * 00000001C002353B: lea     rax, [rsp+68h+arg_28]
 * 00000001C0023543: mov     [rsp+68h+var_28], rbx
 * 00000001C0023548: lea     r8d, [rdx+13h]
 * 00000001C002354C: mov     [rsp+68h+var_30], rdi
 * 00000001C0023551: mov     [rsp+68h+var_38], 8
 * 00000001C002355A: mov     [rsp+68h+var_40], rax
 * 00000001C002355F: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C0023565: lea     r9, WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids
 * 00000001C002356C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0023572: lea     r11, [rsp+68h+var_8]
 * 00000001C0023577: mov     rbx, [r11+10h]
 * 00000001C002357B: mov     rsi, [r11+18h]
 * 00000001C002357F: mov     rdi, [r11+20h]
 * 00000001C0023583: mov     rsp, r11
 * 00000001C0023586: pop     r13
 * 00000001C0023588: retn
 */
