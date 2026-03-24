/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C0034570
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0033774 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0033D28 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x1C0034570
 * Reason: Hex-Rays returned no pseudocode for 0x1C0034570
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0034570: mov     rax, rsp
 * 00000001C0034573: mov     [rax+8], rbx
 * 00000001C0034577: mov     [rax+10h], rbp
 * 00000001C003457B: mov     [rax+18h], rsi
 * 00000001C003457F: mov     [rax+20h], rdi
 * 00000001C0034583: push    r14
 * 00000001C0034585: sub     rsp, 60h
 * 00000001C0034589: mov     esi, r8d
 * 00000001C003458C: movzx   edi, r9w
 * 00000001C0034590: mov     ebx, r8d
 * 00000001C0034593: mov     rbp, rcx
 * 00000001C0034596: shr     rbx, 10h
 * 00000001C003459A: mov     r14d, 8
 * 00000001C00345A0: lea     r11d, [rsi-1]
 * 00000001C00345A4: mov     edx, r11d
 * 00000001C00345A7: and     r11d, 1Fh
 * 00000001C00345AB: shr     rdx, 5
 * 00000001C00345AF: lea     rax, [rbx+rbx*4]
 * 00000001C00345B3: and     edx, 7FFh
 * 00000001C00345B9: lea     r10, [rdx+rax*4]
 * 00000001C00345BD: mov     edx, r11d
 * 00000001C00345C0: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C00345C7: mov     eax, [r11+r10*4+2Ch]
 * 00000001C00345CC: bt      eax, edx
 * 00000001C00345CF: jnb     short loc_1C0034641
 * 00000001C00345D1: lea     rcx, [rbx+rbx*4]
 * 00000001C00345D5: add     rcx, rcx
 * 00000001C00345D8: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C00345DE: jb      short loc_1C0034641
 * 00000001C00345E0: and     [rsp+68h+var_18], 0
 * 00000001C00345E6: lea     rdx, [rsp+68h+arg_38]
 * 00000001C00345EE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00345F5: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C00345FC: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0034601: mov     [rsp+68h+var_20], 4
 * 00000001C003460A: mov     [rsp+68h+var_28], rdx
 * 00000001C003460F: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0034617: mov     [rsp+68h+var_30], r14
 * 00000001C003461C: mov     [rsp+68h+var_38], rdx
 * 00000001C0034621: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0034629: mov     [rsp+68h+var_40], r14
 * 00000001C003462E: mov     [rsp+68h+var_48], rdx
 * 00000001C0034633: lea     edx, [r14+23h]
 * 00000001C0034637: movzx   r9d, r9w
 * 00000001C003463B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0034641: and     [rsp+68h+var_10], 0
 * 00000001C0034647: lea     rax, [rsp+68h+arg_38]
 * 00000001C003464F: mov     [rsp+68h+var_18], 4
 * 00000001C0034658: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C003465F: mov     [rsp+68h+var_20], rax
 * 00000001C0034664: mov     r8d, esi
 * 00000001C0034667: mov     [rsp+68h+var_28], r14
 * 00000001C003466C: lea     rax, [rsp+68h+arg_30]
 * 00000001C0034674: mov     [rsp+68h+var_30], rax
 * 00000001C0034679: mov     edx, 2
 * 00000001C003467E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0034686: mov     [rsp+68h+var_38], r14
 * 00000001C003468B: mov     [rsp+68h+var_40], rax
 * 00000001C0034690: mov     rcx, rbp
 * 00000001C0034693: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0034698: call    cs:__imp_WppAutoLogTrace
 * 00000001C003469E: lea     r11, [rsp+68h+var_8]
 * 00000001C00346A3: mov     rbx, [r11+10h]
 * 00000001C00346A7: mov     rbp, [r11+18h]
 * 00000001C00346AB: mov     rsi, [r11+20h]
 * 00000001C00346AF: mov     rdi, [r11+28h]
 * 00000001C00346B3: mov     rsp, r11
 * 00000001C00346B6: pop     r14
 * 00000001C00346B8: retn
 */
