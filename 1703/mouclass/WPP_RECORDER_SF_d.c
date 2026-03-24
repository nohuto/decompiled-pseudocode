/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005114
 * Callers:
 *     MouConfiguration @ 0x1C000F030 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005114
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005114
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005114: mov     r11, rsp
 * 00000001C0005117: mov     [r11+8], rbx
 * 00000001C000511B: push    rsi
 * 00000001C000511C: sub     rsp, 40h
 * 00000001C0005120: mov     rbx, rcx
 * 00000001C0005123: mov     esi, 40h ; '@'
 * 00000001C0005128: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000512F: mov     eax, [rcx+2Ch]
 * 00000001C0005132: test    al, 1
 * 00000001C0005134: jz      short loc_1C0005170
 * 00000001C0005136: cmp     byte ptr [rcx+29h], 4
 * 00000001C000513A: jb      short loc_1C0005170
 * 00000001C000513C: and     qword ptr [r11-18h], 0
 * 00000001C0005141: lea     rdx, [r11+30h]
 * 00000001C0005145: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000514C: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0005153: mov     rcx, [rcx+18h]
 * 00000001C0005157: mov     qword ptr [r11-20h], 4
 * 00000001C000515F: mov     [r11-28h], rdx
 * 00000001C0005163: lea     edx, [rsi-15h]
 * 00000001C0005166: movzx   r9d, si
 * 00000001C000516A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005170: and     [rsp+48h+var_10], 0
 * 00000001C0005176: lea     rax, [rsp+48h+arg_28]
 * 00000001C000517B: mov     edx, 4
 * 00000001C0005180: mov     [rsp+48h+var_18], 4
 * 00000001C0005189: mov     [rsp+48h+var_20], rax
 * 00000001C000518E: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0005195: mov     rcx, rbx
 * 00000001C0005198: mov     [rsp+48h+var_28], si
 * 00000001C000519D: lea     r8d, [rdx-3]
 * 00000001C00051A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00051A7: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00051AC: add     rsp, 40h
 * 00000001C00051B0: pop     rsi
 * 00000001C00051B1: retn
 */
