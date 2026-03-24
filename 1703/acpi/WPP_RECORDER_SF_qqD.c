/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C00548C0
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0053CE8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0054078 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A09B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x1C00548C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00548C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00548C0: mov     rax, rsp
 * 00000001C00548C3: mov     [rax+8], rbx
 * 00000001C00548C7: mov     [rax+10h], rbp
 * 00000001C00548CB: mov     [rax+18h], rsi
 * 00000001C00548CF: mov     [rax+20h], rdi
 * 00000001C00548D3: push    r14
 * 00000001C00548D5: sub     rsp, 60h
 * 00000001C00548D9: mov     esi, r8d
 * 00000001C00548DC: movzx   edi, r9w
 * 00000001C00548E0: mov     ebx, r8d
 * 00000001C00548E3: mov     rbp, rcx
 * 00000001C00548E6: shr     rbx, 10h
 * 00000001C00548EA: mov     r14d, 8
 * 00000001C00548F0: lea     r11d, [rsi-1]
 * 00000001C00548F4: mov     edx, r11d
 * 00000001C00548F7: and     r11d, 1Fh
 * 00000001C00548FB: shr     rdx, 5
 * 00000001C00548FF: lea     rax, [rbx+rbx*4]
 * 00000001C0054903: and     edx, 7FFh
 * 00000001C0054909: lea     r10, [rdx+rax*4]
 * 00000001C005490D: mov     edx, r11d
 * 00000001C0054910: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0054917: mov     eax, [r11+r10*4+2Ch]
 * 00000001C005491C: bt      eax, edx
 * 00000001C005491F: jnb     short loc_1C0054991
 * 00000001C0054921: lea     rcx, [rbx+rbx*4]
 * 00000001C0054925: add     rcx, rcx
 * 00000001C0054928: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C005492E: jb      short loc_1C0054991
 * 00000001C0054930: and     [rsp+68h+var_18], 0
 * 00000001C0054936: lea     rdx, [rsp+68h+arg_38]
 * 00000001C005493E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054945: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C005494C: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0054951: mov     [rsp+68h+var_20], 4
 * 00000001C005495A: mov     [rsp+68h+var_28], rdx
 * 00000001C005495F: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0054967: mov     [rsp+68h+var_30], r14
 * 00000001C005496C: mov     [rsp+68h+var_38], rdx
 * 00000001C0054971: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0054979: mov     [rsp+68h+var_40], r14
 * 00000001C005497E: mov     [rsp+68h+var_48], rdx
 * 00000001C0054983: lea     edx, [r14+23h]
 * 00000001C0054987: movzx   r9d, r9w
 * 00000001C005498B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054991: and     [rsp+68h+var_10], 0
 * 00000001C0054997: lea     rax, [rsp+68h+arg_38]
 * 00000001C005499F: mov     [rsp+68h+var_18], 4
 * 00000001C00549A8: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C00549AF: mov     [rsp+68h+var_20], rax
 * 00000001C00549B4: mov     r8d, esi
 * 00000001C00549B7: mov     [rsp+68h+var_28], r14
 * 00000001C00549BC: lea     rax, [rsp+68h+arg_30]
 * 00000001C00549C4: mov     [rsp+68h+var_30], rax
 * 00000001C00549C9: mov     edx, 2
 * 00000001C00549CE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00549D6: mov     [rsp+68h+var_38], r14
 * 00000001C00549DB: mov     [rsp+68h+var_40], rax
 * 00000001C00549E0: mov     rcx, rbp
 * 00000001C00549E3: mov     word ptr [rsp+68h+var_48], di
 * 00000001C00549E8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00549EE: lea     r11, [rsp+68h+var_8]
 * 00000001C00549F3: mov     rbx, [r11+10h]
 * 00000001C00549F7: mov     rbp, [r11+18h]
 * 00000001C00549FB: mov     rsi, [r11+20h]
 * 00000001C00549FF: mov     rdi, [r11+28h]
 * 00000001C0054A03: mov     rsp, r11
 * 00000001C0054A06: pop     r14
 * 00000001C0054A08: retn
 */
