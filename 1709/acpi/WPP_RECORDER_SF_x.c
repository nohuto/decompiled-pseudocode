/*
 * XREFs of WPP_RECORDER_SF_x @ 0x1C0057BB8
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A5190 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A557C (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_x @ 0x1C0057BB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0057BB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0057BB8: mov     [rsp+arg_0], rbx
 * 00000001C0057BBD: mov     [rsp+arg_8], rbp
 * 00000001C0057BC2: mov     [rsp+arg_10], rsi
 * 00000001C0057BC7: push    rdi
 * 00000001C0057BC8: sub     rsp, 40h
 * 00000001C0057BCC: mov     esi, r8d
 * 00000001C0057BCF: movzx   edi, r9w
 * 00000001C0057BD3: mov     ebx, r8d
 * 00000001C0057BD6: mov     rbp, rcx
 * 00000001C0057BD9: shr     rbx, 10h
 * 00000001C0057BDD: lea     r11d, [rsi-1]
 * 00000001C0057BE1: mov     edx, r11d
 * 00000001C0057BE4: and     r11d, 1Fh
 * 00000001C0057BE8: shr     rdx, 5
 * 00000001C0057BEC: lea     rax, [rbx+rbx*4]
 * 00000001C0057BF0: and     edx, 7FFh
 * 00000001C0057BF6: lea     r10, [rdx+rax*4]
 * 00000001C0057BFA: mov     edx, r11d
 * 00000001C0057BFD: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0057C04: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0057C09: bt      eax, edx
 * 00000001C0057C0C: jnb     short loc_1C0057C56
 * 00000001C0057C0E: lea     rcx, [rbx+rbx*4]
 * 00000001C0057C12: add     rcx, rcx
 * 00000001C0057C15: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C0057C1B: jb      short loc_1C0057C56
 * 00000001C0057C1D: and     [rsp+48h+var_18], 0
 * 00000001C0057C23: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0057C28: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057C2F: mov     r8, [rsp+48h+arg_20]
 * 00000001C0057C34: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0057C39: mov     [rsp+48h+var_20], 8
 * 00000001C0057C42: mov     [rsp+48h+var_28], rdx
 * 00000001C0057C47: mov     edx, 2Bh ; '+'
 * 00000001C0057C4C: movzx   r9d, r9w
 * 00000001C0057C50: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0057C56: and     [rsp+48h+var_10], 0
 * 00000001C0057C5C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0057C61: mov     r9, [rsp+48h+arg_20]
 * 00000001C0057C66: mov     r8d, esi
 * 00000001C0057C69: mov     [rsp+48h+var_18], 8
 * 00000001C0057C72: mov     edx, 2
 * 00000001C0057C77: mov     [rsp+48h+var_20], rax
 * 00000001C0057C7C: mov     rcx, rbp
 * 00000001C0057C7F: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0057C84: call    cs:__imp_WppAutoLogTrace
 * 00000001C0057C8A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0057C8F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0057C94: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0057C99: add     rsp, 40h
 * 00000001C0057C9D: pop     rdi
 * 00000001C0057C9E: retn
 */
