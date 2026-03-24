/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0001A60
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000C550 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CC80 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C000F4E0 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0001A60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001A60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001A60: mov     [rsp+arg_0], rbx
 * 00000001C0001A65: mov     [rsp+arg_8], rbp
 * 00000001C0001A6A: mov     [rsp+arg_10], rsi
 * 00000001C0001A6F: push    rdi
 * 00000001C0001A70: push    r14
 * 00000001C0001A72: push    r15
 * 00000001C0001A74: sub     rsp, 40h
 * 00000001C0001A78: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0001A80: lea     r15, aNull; "NULL"
 * 00000001C0001A87: mov     r14, rcx
 * 00000001C0001A8A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0001A8E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001A95: movzx   ebp, r9w
 * 00000001C0001A99: movzx   esi, dl
 * 00000001C0001A9C: mov     eax, [rcx+2Ch]
 * 00000001C0001A9F: test    al, 1
 * 00000001C0001AA1: jnz     loc_1C000363A
 * 00000001C0001AA7: test    rdi, rdi
 * 00000001C0001AAA: jz      loc_1C00036A9
 * 00000001C0001AB0: inc     rbx
 * 00000001C0001AB3: cmp     word ptr [rdi+rbx*2], 0
 * 00000001C0001AB8: jnz     short loc_1C0001AB0
 * 00000001C0001ABA: inc     rbx
 * 00000001C0001ABD: mov     [rsp+58h+var_20], 0
 * 00000001C0001AC6: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0001ACD: add     rbx, rbx
 * 00000001C0001AD0: movzx   edx, sil
 * 00000001C0001AD4: mov     [rsp+58h+var_28], rbx
 * 00000001C0001AD9: mov     r8d, 1
 * 00000001C0001ADF: mov     [rsp+58h+var_30], rdi
 * 00000001C0001AE4: mov     rcx, r14
 * 00000001C0001AE7: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0001AEC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001AF2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001AF7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0001AFC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001B01: add     rsp, 40h
 * 00000001C0001B05: pop     r15
 * 00000001C0001B07: pop     r14
 * 00000001C0001B09: pop     rdi
 * 00000001C0001B0A: retn
 * 00000001C000363A: cmp     [rcx+29h], sil
 * 00000001C000363E: jb      loc_1C0001AA7
 * 00000001C0003644: test    rdi, rdi
 * 00000001C0003647: jz      short loc_1C000365C
 * 00000001C0003649: mov     r8, rbx
 * 00000001C000364C: inc     r8
 * 00000001C000364F: cmp     word ptr [rdi+r8*2], 0
 * 00000001C0003655: jnz     short loc_1C000364C
 * 00000001C0003657: inc     r8
 * 00000001C000365A: jmp     short loc_1C0003662
 * 00000001C000365C: mov     r8d, 5
 * 00000001C0003662: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003669: add     r8, r8
 * 00000001C000366C: mov     rcx, [rcx+18h]
 * 00000001C0003670: test    rdi, rdi
 * 00000001C0003673: mov     [rsp+58h+var_28], 0
 * 00000001C000367C: mov     rdx, rdi
 * 00000001C000367F: cmovz   rdx, r15
 * 00000001C0003683: mov     [rsp+58h+var_30], r8
 * 00000001C0003688: mov     [rsp+58h+var_38], rdx
 * 00000001C000368D: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0003694: mov     edx, 2Bh ; '+'
 * 00000001C0003699: movzx   r9d, bp
 * 00000001C000369D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00036A3: nop
 * 00000001C00036A4: jmp     loc_1C0001AA7
 * 00000001C00036A9: mov     ebx, 5
 * 00000001C00036AE: mov     rdi, r15
 * 00000001C00036B1: jmp     loc_1C0001ABD
 */
