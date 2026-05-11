/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001E60
 * Callers:
 *     USBType1CompleteCallback @ 0x1C0003BC0 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x1C00051B0 (USBCaptureCompleteCallback.c)
 *     PinReset @ 0x1C0014980 (PinReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0001E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001E60: mov     [rsp+arg_0], rbx
 * 00000001C0001E65: mov     [rsp+arg_8], rbp
 * 00000001C0001E6A: mov     [rsp+arg_10], rsi
 * 00000001C0001E6F: push    rdi
 * 00000001C0001E70: sub     rsp, 30h
 * 00000001C0001E74: mov     esi, r8d
 * 00000001C0001E77: movzx   edi, r9w
 * 00000001C0001E7B: mov     ebx, r8d
 * 00000001C0001E7E: mov     rbp, rcx
 * 00000001C0001E81: shr     rbx, 10h
 * 00000001C0001E85: lea     r11d, [rsi-1]
 * 00000001C0001E89: mov     edx, r11d
 * 00000001C0001E8C: and     r11d, 1Fh
 * 00000001C0001E90: shr     rdx, 5
 * 00000001C0001E94: lea     rax, [rbx+rbx*4]
 * 00000001C0001E98: and     edx, 7FFh
 * 00000001C0001E9E: lea     r10, [rdx+rax*4]
 * 00000001C0001EA2: mov     edx, r11d
 * 00000001C0001EA5: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0001EAC: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0001EB1: bt      eax, edx
 * 00000001C0001EB4: jnb     short loc_1C0001EEB
 * 00000001C0001EB6: lea     rcx, [rbx+rbx*4]
 * 00000001C0001EBA: add     rcx, rcx
 * 00000001C0001EBD: cmp     byte ptr [r11+rcx*8+29h], 5
 * 00000001C0001EC3: jb      short loc_1C0001EEB
 * 00000001C0001EC5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0001ECC: mov     edx, 2Bh ; '+'
 * 00000001C0001ED1: and     [rsp+38h+var_18], 0
 * 00000001C0001ED7: mov     r8, [rsp+38h+arg_20]
 * 00000001C0001EDC: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0001EE1: movzx   r9d, r9w
 * 00000001C0001EE5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0001EEB: and     [rsp+38h+var_10], 0
 * 00000001C0001EF1: mov     r8d, esi
 * 00000001C0001EF4: mov     r9, [rsp+38h+arg_20]
 * 00000001C0001EF9: mov     edx, 5
 * 00000001C0001EFE: mov     rcx, rbp
 * 00000001C0001F01: mov     word ptr [rsp+38h+var_18], di
 * 00000001C0001F06: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001F0C: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0001F11: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0001F16: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0001F1B: add     rsp, 30h
 * 00000001C0001F1F: pop     rdi
 * 00000001C0001F20: retn
 */
