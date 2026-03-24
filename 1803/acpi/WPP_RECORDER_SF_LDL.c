/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x1C002F5B8
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x1C002F5B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C002F5B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002F5B8: mov     r11, rsp
 * 00000001C002F5BB: mov     [r11+8], rbx
 * 00000001C002F5BF: mov     [r11+10h], rsi
 * 00000001C002F5C3: push    rdi
 * 00000001C002F5C4: sub     rsp, 60h
 * 00000001C002F5C8: mov     rbx, rcx
 * 00000001C002F5CB: mov     edi, 4
 * 00000001C002F5D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002F5D7: lea     esi, [rdi+1Bh]
 * 00000001C002F5DA: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C002F5E1: jz      short loc_1C002F631
 * 00000001C002F5E3: cmp     [rcx+29h], dil
 * 00000001C002F5E7: jb      short loc_1C002F631
 * 00000001C002F5E9: and     qword ptr [r11-18h], 0
 * 00000001C002F5EE: lea     rdx, [r11+40h]
 * 00000001C002F5F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F5F9: lea     r8, WPP_2b07ff94468e36517e02013b54d392f0_Traceguids
 * 00000001C002F600: mov     rcx, [rcx+18h]
 * 00000001C002F604: mov     [r11-20h], rdi
 * 00000001C002F608: mov     [r11-28h], rdx
 * 00000001C002F60C: lea     rdx, [r11+38h]
 * 00000001C002F610: mov     [r11-30h], rdi
 * 00000001C002F614: mov     [r11-38h], rdx
 * 00000001C002F618: lea     rdx, [r11+30h]
 * 00000001C002F61C: mov     [r11-40h], rdi
 * 00000001C002F620: mov     [r11-48h], rdx
 * 00000001C002F624: lea     edx, [rdi+27h]
 * 00000001C002F627: movzx   r9d, si
 * 00000001C002F62B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F631: and     [rsp+68h+var_10], 0
 * 00000001C002F637: lea     rax, [rsp+68h+arg_38]
 * 00000001C002F63F: mov     [rsp+68h+var_18], rdi
 * 00000001C002F644: lea     r9, WPP_2b07ff94468e36517e02013b54d392f0_Traceguids
 * 00000001C002F64B: mov     [rsp+68h+var_20], rax
 * 00000001C002F650: mov     r8d, 11h
 * 00000001C002F656: mov     [rsp+68h+var_28], rdi
 * 00000001C002F65B: lea     rax, [rsp+68h+arg_30]
 * 00000001C002F663: mov     [rsp+68h+var_30], rax
 * 00000001C002F668: mov     edx, edi
 * 00000001C002F66A: lea     rax, [rsp+68h+arg_28]
 * 00000001C002F672: mov     [rsp+68h+var_38], rdi
 * 00000001C002F677: mov     [rsp+68h+var_40], rax
 * 00000001C002F67C: mov     rcx, rbx
 * 00000001C002F67F: mov     [rsp+68h+var_48], si
 * 00000001C002F684: call    cs:__imp_WppAutoLogTrace
 * 00000001C002F68A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002F68F: mov     rsi, [rsp+68h+arg_8]
 * 00000001C002F694: add     rsp, 60h
 * 00000001C002F698: pop     rdi
 * 00000001C002F699: retn
 */
