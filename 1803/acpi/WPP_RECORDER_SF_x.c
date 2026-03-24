/*
 * XREFs of WPP_RECORDER_SF_x @ 0x1C0038B80
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_x @ 0x1C0038B80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038B80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038B80: mov     [rsp+arg_0], rbx
 * 00000001C0038B85: mov     [rsp+arg_8], rbp
 * 00000001C0038B8A: mov     [rsp+arg_10], rsi
 * 00000001C0038B8F: push    rdi
 * 00000001C0038B90: sub     rsp, 40h
 * 00000001C0038B94: mov     esi, r8d
 * 00000001C0038B97: movzx   edi, r9w
 * 00000001C0038B9B: mov     ebx, r8d
 * 00000001C0038B9E: mov     rbp, rcx
 * 00000001C0038BA1: shr     rbx, 10h
 * 00000001C0038BA5: lea     r11d, [rsi-1]
 * 00000001C0038BA9: mov     edx, r11d
 * 00000001C0038BAC: and     r11d, 1Fh
 * 00000001C0038BB0: shr     rdx, 5
 * 00000001C0038BB4: lea     rax, [rbx+rbx*4]
 * 00000001C0038BB8: and     edx, 7FFh
 * 00000001C0038BBE: lea     r10, [rdx+rax*4]
 * 00000001C0038BC2: mov     edx, r11d
 * 00000001C0038BC5: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0038BCC: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0038BD1: bt      eax, edx
 * 00000001C0038BD4: jnb     short loc_1C0038C1E
 * 00000001C0038BD6: lea     rcx, [rbx+rbx*4]
 * 00000001C0038BDA: add     rcx, rcx
 * 00000001C0038BDD: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C0038BE3: jb      short loc_1C0038C1E
 * 00000001C0038BE5: and     [rsp+48h+var_18], 0
 * 00000001C0038BEB: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0038BF0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038BF7: mov     r8, [rsp+48h+arg_20]
 * 00000001C0038BFC: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0038C01: mov     [rsp+48h+var_20], 8
 * 00000001C0038C0A: mov     [rsp+48h+var_28], rdx
 * 00000001C0038C0F: mov     edx, 2Bh ; '+'
 * 00000001C0038C14: movzx   r9d, r9w
 * 00000001C0038C18: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038C1E: and     [rsp+48h+var_10], 0
 * 00000001C0038C24: lea     rax, [rsp+48h+arg_28]
 * 00000001C0038C29: mov     r9, [rsp+48h+arg_20]
 * 00000001C0038C2E: mov     r8d, esi
 * 00000001C0038C31: mov     [rsp+48h+var_18], 8
 * 00000001C0038C3A: mov     edx, 2
 * 00000001C0038C3F: mov     [rsp+48h+var_20], rax
 * 00000001C0038C44: mov     rcx, rbp
 * 00000001C0038C47: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0038C4C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038C52: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0038C57: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0038C5C: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0038C61: add     rsp, 40h
 * 00000001C0038C65: pop     rdi
 * 00000001C0038C66: retn
 */
