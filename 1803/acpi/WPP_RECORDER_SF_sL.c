/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C003822C
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1C003822C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003822C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003822C: mov     [rsp+arg_0], rbx
 * 00000001C0038231: mov     [rsp+arg_8], rbp
 * 00000001C0038236: mov     [rsp+arg_10], rsi
 * 00000001C003823B: push    rdi
 * 00000001C003823C: push    r12
 * 00000001C003823E: push    r13
 * 00000001C0038240: sub     rsp, 50h
 * 00000001C0038244: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003824B: lea     r12, aNull; "NULL"
 * 00000001C0038252: mov     rdi, [rsp+68h+arg_28]
 * 00000001C003825A: xor     ebp, ebp
 * 00000001C003825C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0038260: mov     rsi, rcx
 * 00000001C0038263: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C003826A: lea     r13d, [rbp+11h]
 * 00000001C003826E: jz      short loc_1C00382EB
 * 00000001C0038270: cmp     byte ptr [rdx+29h], 2
 * 00000001C0038274: jb      short loc_1C00382EB
 * 00000001C0038276: test    rdi, rdi
 * 00000001C0038279: jz      short loc_1C003828C
 * 00000001C003827B: mov     rdx, rbx
 * 00000001C003827E: inc     rdx
 * 00000001C0038281: cmp     [rdi+rdx*2], bp
 * 00000001C0038285: jnz     short loc_1C003827E
 * 00000001C0038287: inc     rdx
 * 00000001C003828A: jmp     short loc_1C0038291
 * 00000001C003828C: mov     edx, 5
 * 00000001C0038291: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038298: lea     r8, [rsp+68h+arg_30]
 * 00000001C00382A0: add     rdx, rdx
 * 00000001C00382A3: mov     [rsp+68h+var_28], rbp
 * 00000001C00382A8: mov     [rsp+68h+var_30], 4
 * 00000001C00382B1: test    rdi, rdi
 * 00000001C00382B4: mov     [rsp+68h+var_38], r8
 * 00000001C00382B9: mov     rcx, rdi
 * 00000001C00382BC: cmovz   rcx, r12
 * 00000001C00382C0: mov     [rsp+68h+var_40], rdx
 * 00000001C00382C5: mov     [rsp+68h+var_48], rcx
 * 00000001C00382CA: lea     r8, WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids
 * 00000001C00382D1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00382D8: mov     edx, 2Bh ; '+'
 * 00000001C00382DD: movzx   r9d, r13w
 * 00000001C00382E1: mov     rcx, [rcx+18h]
 * 00000001C00382E5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00382EB: test    rdi, rdi
 * 00000001C00382EE: jz      short loc_1C00382FE
 * 00000001C00382F0: inc     rbx
 * 00000001C00382F3: cmp     [rdi+rbx*2], bp
 * 00000001C00382F7: jnz     short loc_1C00382F0
 * 00000001C00382F9: inc     rbx
 * 00000001C00382FC: jmp     short loc_1C0038303
 * 00000001C00382FE: mov     ebx, 5
 * 00000001C0038303: mov     [rsp+68h+var_20], rbp
 * 00000001C0038308: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0038310: mov     [rsp+68h+var_28], 4
 * 00000001C0038319: lea     rax, [rbx+rbx]
 * 00000001C003831D: mov     [rsp+68h+var_30], rcx
 * 00000001C0038322: lea     r9, WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids
 * 00000001C0038329: mov     [rsp+68h+var_38], rax
 * 00000001C003832E: test    rdi, rdi
 * 00000001C0038331: mov     edx, 2
 * 00000001C0038336: mov     rcx, rsi
 * 00000001C0038339: cmovz   rdi, r12
 * 00000001C003833D: mov     [rsp+68h+var_40], rdi
 * 00000001C0038342: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0038348: lea     r8d, [rdx+14h]
 * 00000001C003834C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038352: lea     r11, [rsp+68h+var_18]
 * 00000001C0038357: mov     rbx, [r11+20h]
 * 00000001C003835B: mov     rbp, [r11+28h]
 * 00000001C003835F: mov     rsi, [r11+30h]
 * 00000001C0038363: mov     rsp, r11
 * 00000001C0038366: pop     r13
 * 00000001C0038368: pop     r12
 * 00000001C003836A: pop     rdi
 * 00000001C003836B: retn
 */
