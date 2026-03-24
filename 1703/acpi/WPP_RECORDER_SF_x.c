/*
 * XREFs of WPP_RECORDER_SF_x @ 0x1C0056FB8
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A253C (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_x @ 0x1C0056FB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056FB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056FB8: mov     [rsp+arg_0], rbx
 * 00000001C0056FBD: mov     [rsp+arg_8], rbp
 * 00000001C0056FC2: mov     [rsp+arg_10], rsi
 * 00000001C0056FC7: push    rdi
 * 00000001C0056FC8: sub     rsp, 40h
 * 00000001C0056FCC: mov     esi, r8d
 * 00000001C0056FCF: movzx   edi, r9w
 * 00000001C0056FD3: mov     ebx, r8d
 * 00000001C0056FD6: mov     rbp, rcx
 * 00000001C0056FD9: shr     rbx, 10h
 * 00000001C0056FDD: lea     r11d, [rsi-1]
 * 00000001C0056FE1: mov     edx, r11d
 * 00000001C0056FE4: and     r11d, 1Fh
 * 00000001C0056FE8: shr     rdx, 5
 * 00000001C0056FEC: lea     rax, [rbx+rbx*4]
 * 00000001C0056FF0: and     edx, 7FFh
 * 00000001C0056FF6: lea     r10, [rdx+rax*4]
 * 00000001C0056FFA: mov     edx, r11d
 * 00000001C0056FFD: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0057004: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0057009: bt      eax, edx
 * 00000001C005700C: jnb     short loc_1C0057056
 * 00000001C005700E: lea     rcx, [rbx+rbx*4]
 * 00000001C0057012: add     rcx, rcx
 * 00000001C0057015: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C005701B: jb      short loc_1C0057056
 * 00000001C005701D: and     [rsp+48h+var_18], 0
 * 00000001C0057023: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0057028: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005702F: mov     r8, [rsp+48h+arg_20]
 * 00000001C0057034: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0057039: mov     [rsp+48h+var_20], 8
 * 00000001C0057042: mov     [rsp+48h+var_28], rdx
 * 00000001C0057047: mov     edx, 2Bh ; '+'
 * 00000001C005704C: movzx   r9d, r9w
 * 00000001C0057050: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0057056: and     [rsp+48h+var_10], 0
 * 00000001C005705C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0057061: mov     r9, [rsp+48h+arg_20]
 * 00000001C0057066: mov     r8d, esi
 * 00000001C0057069: mov     [rsp+48h+var_18], 8
 * 00000001C0057072: mov     edx, 2
 * 00000001C0057077: mov     [rsp+48h+var_20], rax
 * 00000001C005707C: mov     rcx, rbp
 * 00000001C005707F: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0057084: call    cs:__imp_WppAutoLogTrace
 * 00000001C005708A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C005708F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0057094: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0057099: add     rsp, 40h
 * 00000001C005709D: pop     rdi
 * 00000001C005709E: retn
 */
