/*
 * XREFs of WPP_RECORDER_SF_dDDL @ 0x1C005641C
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C0026260 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDL @ 0x1C005641C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005641C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005641C: mov     r11, rsp
 * 00000001C005641F: mov     [r11+8], rbx
 * 00000001C0056423: mov     [r11+10h], rsi
 * 00000001C0056427: push    rdi
 * 00000001C0056428: sub     rsp, 70h
 * 00000001C005642C: mov     rbx, rcx
 * 00000001C005642F: mov     edi, 4
 * 00000001C0056434: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005643B: lea     esi, [rdi+10h]
 * 00000001C005643E: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C0056445: jz      short loc_1C00564A1
 * 00000001C0056447: cmp     [rcx+29h], dil
 * 00000001C005644B: jb      short loc_1C00564A1
 * 00000001C005644D: and     qword ptr [r11-18h], 0
 * 00000001C0056452: lea     rdx, [r11+48h]
 * 00000001C0056456: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005645D: lea     r8, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C0056464: mov     rcx, [rcx+18h]
 * 00000001C0056468: mov     [r11-20h], rdi
 * 00000001C005646C: mov     [r11-28h], rdx
 * 00000001C0056470: lea     rdx, [r11+40h]
 * 00000001C0056474: mov     [r11-30h], rdi
 * 00000001C0056478: mov     [r11-38h], rdx
 * 00000001C005647C: lea     rdx, [r11+38h]
 * 00000001C0056480: mov     [r11-40h], rdi
 * 00000001C0056484: mov     [r11-48h], rdx
 * 00000001C0056488: lea     rdx, [r11+30h]
 * 00000001C005648C: mov     [r11-50h], rdi
 * 00000001C0056490: mov     [r11-58h], rdx
 * 00000001C0056494: lea     edx, [rdi+27h]
 * 00000001C0056497: movzx   r9d, si
 * 00000001C005649B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00564A1: and     [rsp+78h+var_10], 0
 * 00000001C00564A7: lea     rax, [rsp+78h+arg_40]
 * 00000001C00564AF: mov     [rsp+78h+var_18], rdi
 * 00000001C00564B4: lea     r9, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C00564BB: mov     [rsp+78h+var_20], rax
 * 00000001C00564C0: mov     r8d, 0Dh
 * 00000001C00564C6: mov     [rsp+78h+var_28], rdi
 * 00000001C00564CB: lea     rax, [rsp+78h+arg_38]
 * 00000001C00564D3: mov     [rsp+78h+var_30], rax
 * 00000001C00564D8: mov     edx, edi
 * 00000001C00564DA: mov     [rsp+78h+var_38], rdi
 * 00000001C00564DF: lea     rax, [rsp+78h+arg_30]
 * 00000001C00564E7: mov     [rsp+78h+var_40], rax
 * 00000001C00564EC: mov     rcx, rbx
 * 00000001C00564EF: lea     rax, [rsp+78h+arg_28]
 * 00000001C00564F7: mov     [rsp+78h+var_48], rdi
 * 00000001C00564FC: mov     [rsp+78h+var_50], rax
 * 00000001C0056501: mov     [rsp+78h+var_58], si
 * 00000001C0056506: call    cs:__imp_WppAutoLogTrace
 * 00000001C005650C: lea     r11, [rsp+78h+var_8]
 * 00000001C0056511: mov     rbx, [r11+10h]
 * 00000001C0056515: mov     rsi, [r11+18h]
 * 00000001C0056519: mov     rsp, r11
 * 00000001C005651C: pop     rdi
 * 00000001C005651D: retn
 */
