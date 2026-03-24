/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0002200
 * Callers:
 *     KeyboardClassReadCopyData @ 0x1C00046A0 (KeyboardClassReadCopyData.c)
 *     KeyboardClassDeviceControl @ 0x1C000C8D0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0002200
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002200: mov     [rsp+arg_0], rbx
 * 00000001C0002205: mov     [rsp+arg_8], rbp
 * 00000001C000220A: mov     [rsp+arg_10], rsi
 * 00000001C000220F: mov     [rsp+arg_18], rdi
 * 00000001C0002214: push    r14
 * 00000001C0002216: sub     rsp, 60h
 * 00000001C000221A: mov     ebx, r8d
 * 00000001C000221D: mov     r14, rcx
 * 00000001C0002220: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002227: movzx   ebp, r9w
 * 00000001C000222B: mov     edi, r8d
 * 00000001C000222E: movzx   esi, dl
 * 00000001C0002231: shr     rdi, 10h
 * 00000001C0002235: lea     r11d, [rbx-1]
 * 00000001C0002239: mov     r8d, r11d
 * 00000001C000223C: and     r11d, 1Fh
 * 00000001C0002240: shr     r8, 5
 * 00000001C0002244: and     r8d, 7FFh
 * 00000001C000224B: lea     rax, [rdi+rdi*4]
 * 00000001C000224F: lea     r10, [r8+rax*4]
 * 00000001C0002253: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0002258: bt      eax, r11d
 * 00000001C000225C: jb      loc_1C0003BA4
 * 00000001C0002262: mov     [rsp+68h+var_10], 0
 * 00000001C000226B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0002273: mov     [rsp+68h+var_18], 4
 * 00000001C000227C: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0002283: mov     [rsp+68h+var_20], rax
 * 00000001C0002288: mov     r8d, ebx
 * 00000001C000228B: mov     [rsp+68h+var_28], 8
 * 00000001C0002294: lea     rax, [rsp+68h+arg_30]
 * 00000001C000229C: mov     [rsp+68h+var_30], rax
 * 00000001C00022A1: mov     rcx, r14
 * 00000001C00022A4: lea     rax, [rsp+68h+arg_28]
 * 00000001C00022AC: mov     [rsp+68h+var_38], 8
 * 00000001C00022B5: mov     [rsp+68h+var_40], rax
 * 00000001C00022BA: movzx   edx, sil
 * 00000001C00022BE: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00022C3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00022C9: lea     r11, [rsp+68h+var_8]
 * 00000001C00022CE: mov     rbx, [r11+10h]
 * 00000001C00022D2: mov     rbp, [r11+18h]
 * 00000001C00022D6: mov     rsi, [r11+20h]
 * 00000001C00022DA: mov     rdi, [r11+28h]
 * 00000001C00022DE: mov     rsp, r11
 * 00000001C00022E1: pop     r14
 * 00000001C00022E3: retn
 * 00000001C0003BA4: lea     rax, [rdi+rdi*4]
 * 00000001C0003BA8: shl     rax, 4
 * 00000001C0003BAC: add     rcx, rax
 * 00000001C0003BAF: cmp     [rcx+29h], sil
 * 00000001C0003BB3: jb      loc_1C0002262
 * 00000001C0003BB9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003BC0: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003BC8: mov     rcx, [rcx+18h]
 * 00000001C0003BCC: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0003BD3: mov     [rsp+68h+var_18], 0
 * 00000001C0003BDC: mov     [rsp+68h+var_20], 4
 * 00000001C0003BE5: mov     [rsp+68h+var_28], rdx
 * 00000001C0003BEA: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003BF2: mov     [rsp+68h+var_30], 8
 * 00000001C0003BFB: mov     [rsp+68h+var_38], rdx
 * 00000001C0003C00: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003C08: mov     [rsp+68h+var_40], 8
 * 00000001C0003C11: mov     [rsp+68h+var_48], rdx
 * 00000001C0003C16: mov     edx, 2Bh ; '+'
 * 00000001C0003C1B: movzx   r9d, bp
 * 00000001C0003C1F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003C25: nop
 * 00000001C0003C26: jmp     loc_1C0002262
 */
