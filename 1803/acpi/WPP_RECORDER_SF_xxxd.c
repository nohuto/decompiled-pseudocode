/*
 * XREFs of WPP_RECORDER_SF_xxxd @ 0x1C0034890
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C0080A9C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xxxd @ 0x1C0034890
 * Reason: Hex-Rays returned no pseudocode for 0x1C0034890
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0034890: mov     r11, rsp
 * 00000001C0034893: mov     [r11+8], rbx
 * 00000001C0034897: mov     [r11+10h], rsi
 * 00000001C003489B: push    rdi
 * 00000001C003489C: sub     rsp, 70h
 * 00000001C00348A0: mov     rdi, rcx
 * 00000001C00348A3: movzx   ebx, r9w
 * 00000001C00348A7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00348AE: mov     esi, 8
 * 00000001C00348B3: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00348BA: jz      short loc_1C003491A
 * 00000001C00348BC: cmp     byte ptr [rcx+29h], 2
 * 00000001C00348C0: jb      short loc_1C003491A
 * 00000001C00348C2: and     qword ptr [r11-18h], 0
 * 00000001C00348C7: lea     rdx, [r11+48h]
 * 00000001C00348CB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00348D2: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C00348D9: mov     rcx, [rcx+18h]
 * 00000001C00348DD: mov     qword ptr [r11-20h], 4
 * 00000001C00348E5: mov     [r11-28h], rdx
 * 00000001C00348E9: lea     rdx, [r11+40h]
 * 00000001C00348ED: mov     [r11-30h], rsi
 * 00000001C00348F1: mov     [r11-38h], rdx
 * 00000001C00348F5: lea     rdx, [r11+38h]
 * 00000001C00348F9: mov     [r11-40h], rsi
 * 00000001C00348FD: mov     [r11-48h], rdx
 * 00000001C0034901: lea     rdx, [r11+30h]
 * 00000001C0034905: mov     [r11-50h], rsi
 * 00000001C0034909: mov     [r11-58h], rdx
 * 00000001C003490D: lea     edx, [rsi+23h]
 * 00000001C0034910: movzx   r9d, bx
 * 00000001C0034914: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003491A: and     [rsp+78h+var_10], 0
 * 00000001C0034920: lea     rax, [rsp+78h+arg_40]
 * 00000001C0034928: mov     [rsp+78h+var_18], 4
 * 00000001C0034931: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C0034938: mov     [rsp+78h+var_20], rax
 * 00000001C003493D: mov     edx, 2
 * 00000001C0034942: mov     [rsp+78h+var_28], rsi
 * 00000001C0034947: lea     rax, [rsp+78h+arg_38]
 * 00000001C003494F: mov     [rsp+78h+var_30], rax
 * 00000001C0034954: mov     rcx, rdi
 * 00000001C0034957: mov     [rsp+78h+var_38], rsi
 * 00000001C003495C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0034964: mov     [rsp+78h+var_40], rax
 * 00000001C0034969: lea     r8d, [rdx+13h]
 * 00000001C003496D: lea     rax, [rsp+78h+arg_28]
 * 00000001C0034975: mov     [rsp+78h+var_48], rsi
 * 00000001C003497A: mov     [rsp+78h+var_50], rax
 * 00000001C003497F: mov     [rsp+78h+var_58], bx
 * 00000001C0034984: call    cs:__imp_WppAutoLogTrace
 * 00000001C003498A: lea     r11, [rsp+78h+var_8]
 * 00000001C003498F: mov     rbx, [r11+10h]
 * 00000001C0034993: mov     rsi, [r11+18h]
 * 00000001C0034997: mov     rsp, r11
 * 00000001C003499A: pop     rdi
 * 00000001C003499B: retn
 */
