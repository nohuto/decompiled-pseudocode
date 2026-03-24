/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C0049408
 * Callers:
 *     LogError @ 0x1C004905C (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1C0049408
 * Reason: Hex-Rays returned no pseudocode for 0x1C0049408
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0049408: mov     rax, rsp
 * 00000001C004940B: mov     [rax+8], rbx
 * 00000001C004940F: mov     [rax+10h], rsi
 * 00000001C0049413: mov     [rax+18h], rdi
 * 00000001C0049417: mov     [rax+20h], r12
 * 00000001C004941B: push    r13
 * 00000001C004941D: sub     rsp, 50h
 * 00000001C0049421: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0049428: lea     r12, aNull_0; "NULL"
 * 00000001C004942F: mov     rdi, [rsp+58h+arg_30]
 * 00000001C0049437: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004943B: mov     rsi, rcx
 * 00000001C004943E: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0049445: lea     r13d, [rbx+0Bh]
 * 00000001C0049449: jz      short loc_1C00494C4
 * 00000001C004944B: cmp     byte ptr [rdx+29h], 2
 * 00000001C004944F: jb      short loc_1C00494C4
 * 00000001C0049451: test    rdi, rdi
 * 00000001C0049454: jz      short loc_1C0049467
 * 00000001C0049456: mov     rdx, rbx
 * 00000001C0049459: inc     rdx
 * 00000001C004945C: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0049460: jnz     short loc_1C0049459
 * 00000001C0049462: inc     rdx
 * 00000001C0049465: jmp     short loc_1C004946C
 * 00000001C0049467: mov     edx, 5
 * 00000001C004946C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0049473: lea     r8, WPP_8836c167c845339ec7b5021a21721c31_Traceguids
 * 00000001C004947A: test    rdi, rdi
 * 00000001C004947D: movzx   r9d, r13w
 * 00000001C0049481: mov     rcx, rdi
 * 00000001C0049484: cmovz   rcx, r12
 * 00000001C0049488: and     [rsp+58h+var_18], 0
 * 00000001C004948E: mov     [rsp+58h+var_20], rdx
 * 00000001C0049493: mov     edx, 2Bh ; '+'
 * 00000001C0049498: mov     [rsp+58h+var_28], rcx
 * 00000001C004949D: lea     rcx, [rsp+58h+arg_28]
 * 00000001C00494A5: mov     [rsp+58h+var_30], 4
 * 00000001C00494AE: mov     [rsp+58h+var_38], rcx
 * 00000001C00494B3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00494BA: mov     rcx, [rcx+18h]
 * 00000001C00494BE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00494C4: test    rdi, rdi
 * 00000001C00494C7: jz      short loc_1C00494D7
 * 00000001C00494C9: inc     rbx
 * 00000001C00494CC: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00494D0: jnz     short loc_1C00494C9
 * 00000001C00494D2: inc     rbx
 * 00000001C00494D5: jmp     short loc_1C00494DC
 * 00000001C00494D7: mov     ebx, 5
 * 00000001C00494DC: test    rdi, rdi
 * 00000001C00494DF: lea     rax, [rsp+58h+arg_28]
 * 00000001C00494E7: mov     edx, 2
 * 00000001C00494EC: lea     r9, WPP_8836c167c845339ec7b5021a21721c31_Traceguids
 * 00000001C00494F3: cmovz   rdi, r12
 * 00000001C00494F7: mov     rcx, rsi
 * 00000001C00494FA: and     [rsp+58h+var_10], 0
 * 00000001C0049500: mov     [rsp+58h+var_18], rbx
 * 00000001C0049505: mov     [rsp+58h+var_20], rdi
 * 00000001C004950A: lea     r8d, [rdx+13h]
 * 00000001C004950E: mov     [rsp+58h+var_28], 4
 * 00000001C0049517: mov     [rsp+58h+var_30], rax
 * 00000001C004951C: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0049522: call    cs:__imp_WppAutoLogTrace
 * 00000001C0049528: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004952D: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0049532: mov     rdi, [rsp+58h+arg_10]
 * 00000001C0049537: mov     r12, [rsp+58h+arg_18]
 * 00000001C004953C: add     rsp, 50h
 * 00000001C0049540: pop     r13
 * 00000001C0049542: retn
 */
