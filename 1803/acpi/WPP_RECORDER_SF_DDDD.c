/*
 * XREFs of WPP_RECORDER_SF_DDDD @ 0x1C003405C
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0032F04 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDD @ 0x1C003405C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003405C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003405C: mov     rax, rsp
 * 00000001C003405F: mov     [rax+8], rbx
 * 00000001C0034063: mov     [rax+10h], rbp
 * 00000001C0034067: mov     [rax+18h], rsi
 * 00000001C003406B: mov     [rax+20h], rdi
 * 00000001C003406F: push    r14
 * 00000001C0034071: sub     rsp, 70h
 * 00000001C0034075: mov     esi, r8d
 * 00000001C0034078: movzx   edi, r9w
 * 00000001C003407C: mov     ebx, r8d
 * 00000001C003407F: mov     rbp, rcx
 * 00000001C0034082: shr     rbx, 10h
 * 00000001C0034086: mov     r14d, 4
 * 00000001C003408C: lea     r11d, [rsi-1]
 * 00000001C0034090: mov     edx, r11d
 * 00000001C0034093: and     r11d, 1Fh
 * 00000001C0034097: shr     rdx, 5
 * 00000001C003409B: lea     rax, [rbx+rbx*4]
 * 00000001C003409F: and     edx, 7FFh
 * 00000001C00340A5: lea     r10, [rdx+rax*4]
 * 00000001C00340A9: mov     edx, r11d
 * 00000001C00340AC: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C00340B3: mov     eax, [r11+r10*4+2Ch]
 * 00000001C00340B8: bt      eax, edx
 * 00000001C00340BB: jnb     short loc_1C003413B
 * 00000001C00340BD: lea     rcx, [rbx+rbx*4]
 * 00000001C00340C1: add     rcx, rcx
 * 00000001C00340C4: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C00340CA: jb      short loc_1C003413B
 * 00000001C00340CC: and     [rsp+78h+var_18], 0
 * 00000001C00340D2: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00340DA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00340E1: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C00340E8: mov     rcx, [r11+rcx*8+18h]
 * 00000001C00340ED: mov     [rsp+78h+var_20], r14
 * 00000001C00340F2: mov     [rsp+78h+var_28], rdx
 * 00000001C00340F7: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00340FF: mov     [rsp+78h+var_30], r14
 * 00000001C0034104: mov     [rsp+78h+var_38], rdx
 * 00000001C0034109: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0034111: mov     [rsp+78h+var_40], r14
 * 00000001C0034116: mov     [rsp+78h+var_48], rdx
 * 00000001C003411B: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0034123: mov     [rsp+78h+var_50], r14
 * 00000001C0034128: mov     [rsp+78h+var_58], rdx
 * 00000001C003412D: lea     edx, [r14+27h]
 * 00000001C0034131: movzx   r9d, r9w
 * 00000001C0034135: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003413B: and     [rsp+78h+var_10], 0
 * 00000001C0034141: lea     rax, [rsp+78h+arg_40]
 * 00000001C0034149: mov     [rsp+78h+var_18], r14
 * 00000001C003414E: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C0034155: mov     [rsp+78h+var_20], rax
 * 00000001C003415A: mov     r8d, esi
 * 00000001C003415D: mov     [rsp+78h+var_28], r14
 * 00000001C0034162: lea     rax, [rsp+78h+arg_38]
 * 00000001C003416A: mov     [rsp+78h+var_30], rax
 * 00000001C003416F: mov     edx, 2
 * 00000001C0034174: mov     [rsp+78h+var_38], r14
 * 00000001C0034179: lea     rax, [rsp+78h+arg_30]
 * 00000001C0034181: mov     [rsp+78h+var_40], rax
 * 00000001C0034186: mov     rcx, rbp
 * 00000001C0034189: lea     rax, [rsp+78h+arg_28]
 * 00000001C0034191: mov     [rsp+78h+var_48], r14
 * 00000001C0034196: mov     [rsp+78h+var_50], rax
 * 00000001C003419B: mov     word ptr [rsp+78h+var_58], di
 * 00000001C00341A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00341A6: lea     r11, [rsp+78h+var_8]
 * 00000001C00341AB: mov     rbx, [r11+10h]
 * 00000001C00341AF: mov     rbp, [r11+18h]
 * 00000001C00341B3: mov     rsi, [r11+20h]
 * 00000001C00341B7: mov     rdi, [r11+28h]
 * 00000001C00341BB: mov     rsp, r11
 * 00000001C00341BE: pop     r14
 * 00000001C00341C0: retn
 */
