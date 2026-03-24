/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x1C00529B8
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x1C00529B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00529B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00529B8: mov     r11, rsp
 * 00000001C00529BB: mov     [r11+8], rbx
 * 00000001C00529BF: mov     [r11+10h], rsi
 * 00000001C00529C3: push    rdi
 * 00000001C00529C4: sub     rsp, 60h
 * 00000001C00529C8: mov     rbx, rcx
 * 00000001C00529CB: mov     edi, 4
 * 00000001C00529D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00529D7: lea     esi, [rdi+1Bh]
 * 00000001C00529DA: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C00529E1: jz      short loc_1C0052A31
 * 00000001C00529E3: cmp     [rcx+29h], dil
 * 00000001C00529E7: jb      short loc_1C0052A31
 * 00000001C00529E9: and     qword ptr [r11-18h], 0
 * 00000001C00529EE: lea     rdx, [r11+40h]
 * 00000001C00529F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00529F9: lea     r8, WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids
 * 00000001C0052A00: mov     rcx, [rcx+18h]
 * 00000001C0052A04: mov     [r11-20h], rdi
 * 00000001C0052A08: mov     [r11-28h], rdx
 * 00000001C0052A0C: lea     rdx, [r11+38h]
 * 00000001C0052A10: mov     [r11-30h], rdi
 * 00000001C0052A14: mov     [r11-38h], rdx
 * 00000001C0052A18: lea     rdx, [r11+30h]
 * 00000001C0052A1C: mov     [r11-40h], rdi
 * 00000001C0052A20: mov     [r11-48h], rdx
 * 00000001C0052A24: lea     edx, [rdi+27h]
 * 00000001C0052A27: movzx   r9d, si
 * 00000001C0052A2B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052A31: and     [rsp+68h+var_10], 0
 * 00000001C0052A37: lea     rax, [rsp+68h+arg_38]
 * 00000001C0052A3F: mov     [rsp+68h+var_18], rdi
 * 00000001C0052A44: lea     r9, WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids
 * 00000001C0052A4B: mov     [rsp+68h+var_20], rax
 * 00000001C0052A50: mov     r8d, 11h
 * 00000001C0052A56: mov     [rsp+68h+var_28], rdi
 * 00000001C0052A5B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0052A63: mov     [rsp+68h+var_30], rax
 * 00000001C0052A68: mov     edx, edi
 * 00000001C0052A6A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0052A72: mov     [rsp+68h+var_38], rdi
 * 00000001C0052A77: mov     [rsp+68h+var_40], rax
 * 00000001C0052A7C: mov     rcx, rbx
 * 00000001C0052A7F: mov     [rsp+68h+var_48], si
 * 00000001C0052A84: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052A8A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0052A8F: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0052A94: add     rsp, 60h
 * 00000001C0052A98: pop     rdi
 * 00000001C0052A99: retn
 */
