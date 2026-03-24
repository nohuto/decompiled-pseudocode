/*
 * XREFs of WPP_RECORDER_SF_dDDL @ 0x1C00378D4
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C00374D0 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDL @ 0x1C00378D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00378D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00378D4: mov     r11, rsp
 * 00000001C00378D7: mov     [r11+8], rbx
 * 00000001C00378DB: mov     [r11+10h], rsi
 * 00000001C00378DF: push    rdi
 * 00000001C00378E0: sub     rsp, 70h
 * 00000001C00378E4: mov     rbx, rcx
 * 00000001C00378E7: mov     edi, 4
 * 00000001C00378EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00378F3: lea     esi, [rdi+10h]
 * 00000001C00378F6: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00378FD: jz      short loc_1C0037959
 * 00000001C00378FF: cmp     [rcx+29h], dil
 * 00000001C0037903: jb      short loc_1C0037959
 * 00000001C0037905: and     qword ptr [r11-18h], 0
 * 00000001C003790A: lea     rdx, [r11+48h]
 * 00000001C003790E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037915: lea     r8, WPP_188439d352933c43d81bb97719738185_Traceguids
 * 00000001C003791C: mov     rcx, [rcx+18h]
 * 00000001C0037920: mov     [r11-20h], rdi
 * 00000001C0037924: mov     [r11-28h], rdx
 * 00000001C0037928: lea     rdx, [r11+40h]
 * 00000001C003792C: mov     [r11-30h], rdi
 * 00000001C0037930: mov     [r11-38h], rdx
 * 00000001C0037934: lea     rdx, [r11+38h]
 * 00000001C0037938: mov     [r11-40h], rdi
 * 00000001C003793C: mov     [r11-48h], rdx
 * 00000001C0037940: lea     rdx, [r11+30h]
 * 00000001C0037944: mov     [r11-50h], rdi
 * 00000001C0037948: mov     [r11-58h], rdx
 * 00000001C003794C: lea     edx, [rdi+27h]
 * 00000001C003794F: movzx   r9d, si
 * 00000001C0037953: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037959: and     [rsp+78h+var_10], 0
 * 00000001C003795F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0037967: mov     [rsp+78h+var_18], rdi
 * 00000001C003796C: lea     r9, WPP_188439d352933c43d81bb97719738185_Traceguids
 * 00000001C0037973: mov     [rsp+78h+var_20], rax
 * 00000001C0037978: mov     r8d, 0Dh
 * 00000001C003797E: mov     [rsp+78h+var_28], rdi
 * 00000001C0037983: lea     rax, [rsp+78h+arg_38]
 * 00000001C003798B: mov     [rsp+78h+var_30], rax
 * 00000001C0037990: mov     edx, edi
 * 00000001C0037992: mov     [rsp+78h+var_38], rdi
 * 00000001C0037997: lea     rax, [rsp+78h+arg_30]
 * 00000001C003799F: mov     [rsp+78h+var_40], rax
 * 00000001C00379A4: mov     rcx, rbx
 * 00000001C00379A7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00379AF: mov     [rsp+78h+var_48], rdi
 * 00000001C00379B4: mov     [rsp+78h+var_50], rax
 * 00000001C00379B9: mov     [rsp+78h+var_58], si
 * 00000001C00379BE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00379C4: lea     r11, [rsp+78h+var_8]
 * 00000001C00379C9: mov     rbx, [r11+10h]
 * 00000001C00379CD: mov     rsi, [r11+18h]
 * 00000001C00379D1: mov     rsp, r11
 * 00000001C00379D4: pop     rdi
 * 00000001C00379D5: retn
 */
