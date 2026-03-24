/*
 * XREFs of WPP_RECORDER_SF_DDD @ 0x1C0054264
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0053634 (AcpiConvertPackageArgumentToPackageObj.c)
 *     NotifyHandler @ 0x1C0055070 (NotifyHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDD @ 0x1C0054264
 * Reason: Hex-Rays returned no pseudocode for 0x1C0054264
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0054264: mov     [rsp+arg_0], rbx
 * 00000001C0054269: mov     [rsp+arg_8], rbp
 * 00000001C005426E: mov     [rsp+arg_10], rsi
 * 00000001C0054273: push    rdi
 * 00000001C0054274: push    r14
 * 00000001C0054276: push    r15
 * 00000001C0054278: sub     rsp, 60h
 * 00000001C005427C: mov     r14d, r8d
 * 00000001C005427F: mov     sil, dl
 * 00000001C0054282: mov     edi, r8d
 * 00000001C0054285: movzx   ebp, r9w
 * 00000001C0054289: shr     rdi, 10h
 * 00000001C005428D: mov     r15, rcx
 * 00000001C0054290: lea     ebx, [r14-1]
 * 00000001C0054294: mov     r10d, ebx
 * 00000001C0054297: and     ebx, 1Fh
 * 00000001C005429A: shr     r10, 5
 * 00000001C005429E: lea     rax, [rdi+rdi*4]
 * 00000001C00542A2: and     r10d, 7FFh
 * 00000001C00542A9: mov     edx, ebx
 * 00000001C00542AB: mov     ebx, 4
 * 00000001C00542B0: lea     r11, [r10+rax*4]
 * 00000001C00542B4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00542BB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00542C0: bt      eax, edx
 * 00000001C00542C3: jnb     short loc_1C0054330
 * 00000001C00542C5: lea     rcx, [rdi+rdi*4]
 * 00000001C00542C9: add     rcx, rcx
 * 00000001C00542CC: cmp     [r10+rcx*8+29h], sil
 * 00000001C00542D1: jb      short loc_1C0054330
 * 00000001C00542D3: and     [rsp+78h+var_28], 0
 * 00000001C00542D9: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00542E1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00542E8: mov     r8, [rsp+78h+arg_20]
 * 00000001C00542F0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00542F5: mov     [rsp+78h+var_30], rbx
 * 00000001C00542FA: mov     [rsp+78h+var_38], rdx
 * 00000001C00542FF: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0054307: mov     [rsp+78h+var_40], rbx
 * 00000001C005430C: mov     [rsp+78h+var_48], rdx
 * 00000001C0054311: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0054319: mov     [rsp+78h+var_50], rbx
 * 00000001C005431E: mov     [rsp+78h+var_58], rdx
 * 00000001C0054323: lea     edx, [rbx+27h]
 * 00000001C0054326: movzx   r9d, r9w
 * 00000001C005432A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054330: and     [rsp+78h+var_20], 0
 * 00000001C0054336: lea     rax, [rsp+78h+arg_38]
 * 00000001C005433E: mov     r9, [rsp+78h+arg_20]
 * 00000001C0054346: mov     r8d, r14d
 * 00000001C0054349: mov     [rsp+78h+var_28], rbx
 * 00000001C005434E: mov     rcx, r15
 * 00000001C0054351: mov     [rsp+78h+var_30], rax
 * 00000001C0054356: lea     rax, [rsp+78h+arg_30]
 * 00000001C005435E: mov     [rsp+78h+var_38], rbx
 * 00000001C0054363: mov     [rsp+78h+var_40], rax
 * 00000001C0054368: lea     rax, [rsp+78h+arg_28]
 * 00000001C0054370: mov     [rsp+78h+var_48], rbx
 * 00000001C0054375: mov     [rsp+78h+var_50], rax
 * 00000001C005437A: movzx   edx, sil
 * 00000001C005437E: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0054383: call    cs:__imp_WppAutoLogTrace
 * 00000001C0054389: lea     r11, [rsp+78h+var_18]
 * 00000001C005438E: mov     rbx, [r11+20h]
 * 00000001C0054392: mov     rbp, [r11+28h]
 * 00000001C0054396: mov     rsi, [r11+30h]
 * 00000001C005439A: mov     rsp, r11
 * 00000001C005439D: pop     r15
 * 00000001C005439F: pop     r14
 * 00000001C00543A1: pop     rdi
 * 00000001C00543A2: retn
 */
