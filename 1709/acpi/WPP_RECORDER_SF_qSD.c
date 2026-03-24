/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C004D14C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00A1C00 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1C004D14C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004D14C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004D14C: mov     [rsp+arg_0], rbx
 * 00000001C004D151: mov     [rsp+arg_8], rsi
 * 00000001C004D156: mov     [rsp+arg_10], rdi
 * 00000001C004D15B: push    r13
 * 00000001C004D15D: sub     rsp, 60h
 * 00000001C004D161: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C004D168: lea     r13, aNull_0; "NULL"
 * 00000001C004D16F: mov     rdi, [rsp+68h+arg_30]
 * 00000001C004D177: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004D17B: mov     rsi, rcx
 * 00000001C004D17E: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C004D185: lea     r9d, [rbx+0Eh]
 * 00000001C004D189: jz      loc_1C004D224
 * 00000001C004D18F: cmp     byte ptr [rdx+29h], 2
 * 00000001C004D193: jb      loc_1C004D224
 * 00000001C004D199: test    rdi, rdi
 * 00000001C004D19C: jz      short loc_1C004D1AF
 * 00000001C004D19E: mov     rdx, rbx
 * 00000001C004D1A1: inc     rdx
 * 00000001C004D1A4: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004D1A8: jnz     short loc_1C004D1A1
 * 00000001C004D1AA: inc     rdx
 * 00000001C004D1AD: jmp     short loc_1C004D1B4
 * 00000001C004D1AF: mov     edx, 5
 * 00000001C004D1B4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004D1BB: lea     r8, [rsp+68h+arg_38]
 * 00000001C004D1C3: test    rdi, rdi
 * 00000001C004D1C6: mov     rcx, rdi
 * 00000001C004D1C9: cmovz   rcx, r13
 * 00000001C004D1CD: and     [rsp+68h+var_18], 0
 * 00000001C004D1D3: mov     [rsp+68h+var_20], 4
 * 00000001C004D1DC: mov     [rsp+68h+var_28], r8
 * 00000001C004D1E1: lea     r8, WPP_31a55c119b0d3413ca6777ebdd359f0a_Traceguids
 * 00000001C004D1E8: mov     [rsp+68h+var_30], rdx
 * 00000001C004D1ED: mov     edx, 2Bh ; '+'
 * 00000001C004D1F2: mov     [rsp+68h+var_38], rcx
 * 00000001C004D1F7: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004D1FF: mov     [rsp+68h+var_40], 8
 * 00000001C004D208: mov     [rsp+68h+var_48], rcx
 * 00000001C004D20D: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004D214: mov     rcx, [rcx+18h]
 * 00000001C004D218: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004D21E: mov     r9d, 0Dh
 * 00000001C004D224: test    rdi, rdi
 * 00000001C004D227: jz      short loc_1C004D237
 * 00000001C004D229: inc     rbx
 * 00000001C004D22C: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004D230: jnz     short loc_1C004D229
 * 00000001C004D232: inc     rbx
 * 00000001C004D235: jmp     short loc_1C004D23C
 * 00000001C004D237: mov     ebx, 5
 * 00000001C004D23C: test    rdi, rdi
 * 00000001C004D23F: lea     rax, [rsp+68h+arg_38]
 * 00000001C004D247: mov     edx, 2
 * 00000001C004D24C: mov     rcx, rsi
 * 00000001C004D24F: cmovz   rdi, r13
 * 00000001C004D253: and     [rsp+68h+var_10], 0
 * 00000001C004D259: mov     [rsp+68h+var_18], 4
 * 00000001C004D262: mov     [rsp+68h+var_20], rax
 * 00000001C004D267: lea     rax, [rsp+68h+arg_28]
 * 00000001C004D26F: mov     [rsp+68h+var_28], rbx
 * 00000001C004D274: lea     r8d, [rdx+13h]
 * 00000001C004D278: mov     [rsp+68h+var_30], rdi
 * 00000001C004D27D: mov     [rsp+68h+var_38], 8
 * 00000001C004D286: mov     [rsp+68h+var_40], rax
 * 00000001C004D28B: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C004D291: lea     r9, WPP_31a55c119b0d3413ca6777ebdd359f0a_Traceguids
 * 00000001C004D298: call    cs:__imp_WppAutoLogTrace
 * 00000001C004D29E: lea     r11, [rsp+68h+var_8]
 * 00000001C004D2A3: mov     rbx, [r11+10h]
 * 00000001C004D2A7: mov     rsi, [r11+18h]
 * 00000001C004D2AB: mov     rdi, [r11+20h]
 * 00000001C004D2AF: mov     rsp, r11
 * 00000001C004D2B2: pop     r13
 * 00000001C004D2B4: retn
 */
