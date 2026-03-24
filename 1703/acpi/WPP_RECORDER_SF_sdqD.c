/*
 * XREFs of WPP_RECORDER_SF_sdqD @ 0x1C00555C4
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0027294 (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0055200 (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sdqD @ 0x1C00555C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00555C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00555C4: mov     rax, rsp
 * 00000001C00555C7: mov     [rax+8], rbx
 * 00000001C00555CB: mov     [rax+10h], rbp
 * 00000001C00555CF: mov     [rax+18h], rsi
 * 00000001C00555D3: mov     [rax+20h], rdi
 * 00000001C00555D7: push    r12
 * 00000001C00555D9: sub     rsp, 70h
 * 00000001C00555DD: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00555E4: lea     r8, aNull_0; "NULL"
 * 00000001C00555EB: mov     rdi, [rsp+78h+arg_28]
 * 00000001C00555F3: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00555F7: movzx   esi, r9w
 * 00000001C00555FB: mov     rbp, rcx
 * 00000001C00555FE: test    dword ptr [r10+2Ch], 100000h
 * 00000001C0055606: lea     r12d, [rbx+5]
 * 00000001C005560A: jz      loc_1C00556B2
 * 00000001C0055610: cmp     byte ptr [r10+29h], 2
 * 00000001C0055615: jb      loc_1C00556B2
 * 00000001C005561B: test    rdi, rdi
 * 00000001C005561E: jz      short loc_1C0055631
 * 00000001C0055620: mov     rcx, rbx
 * 00000001C0055623: inc     rcx
 * 00000001C0055626: cmp     byte ptr [rdi+rcx], 0
 * 00000001C005562A: jnz     short loc_1C0055623
 * 00000001C005562C: inc     rcx
 * 00000001C005562F: jmp     short loc_1C0055636
 * 00000001C0055631: mov     ecx, 5
 * 00000001C0055636: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005563D: test    rdi, rdi
 * 00000001C0055640: mov     rdx, rdi
 * 00000001C0055643: movzx   r9d, si
 * 00000001C0055647: cmovz   rdx, r8
 * 00000001C005564B: and     [rsp+78h+var_18], 0
 * 00000001C0055651: mov     [rsp+78h+var_20], r12
 * 00000001C0055656: lea     r8, [rsp+78h+arg_40]
 * 00000001C005565E: mov     [rsp+78h+var_28], r8
 * 00000001C0055663: lea     r8, [rsp+78h+arg_38]
 * 00000001C005566B: mov     [rsp+78h+var_30], 8
 * 00000001C0055674: mov     [rsp+78h+var_38], r8
 * 00000001C0055679: lea     r8, [rsp+78h+arg_30]
 * 00000001C0055681: mov     [rsp+78h+var_40], r12
 * 00000001C0055686: mov     [rsp+78h+var_48], r8
 * 00000001C005568B: lea     r8, WPP_db840bf6d90e33f77fa26caded1be1bf_Traceguids
 * 00000001C0055692: mov     [rsp+78h+var_50], rcx
 * 00000001C0055697: mov     rcx, [r10+18h]
 * 00000001C005569B: mov     [rsp+78h+var_58], rdx
 * 00000001C00556A0: mov     edx, 2Bh ; '+'
 * 00000001C00556A5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00556AB: lea     r8, aNull_0; "NULL"
 * 00000001C00556B2: test    rdi, rdi
 * 00000001C00556B5: jz      short loc_1C00556C5
 * 00000001C00556B7: inc     rbx
 * 00000001C00556BA: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00556BE: jnz     short loc_1C00556B7
 * 00000001C00556C0: inc     rbx
 * 00000001C00556C3: jmp     short loc_1C00556CA
 * 00000001C00556C5: mov     ebx, 5
 * 00000001C00556CA: test    rdi, rdi
 * 00000001C00556CD: lea     rax, [rsp+78h+arg_40]
 * 00000001C00556D5: mov     edx, 2
 * 00000001C00556DA: lea     r9, WPP_db840bf6d90e33f77fa26caded1be1bf_Traceguids
 * 00000001C00556E1: cmovz   rdi, r8
 * 00000001C00556E5: mov     rcx, rbp
 * 00000001C00556E8: and     [rsp+78h+var_10], 0
 * 00000001C00556EE: mov     [rsp+78h+var_18], r12
 * 00000001C00556F3: mov     [rsp+78h+var_20], rax
 * 00000001C00556F8: lea     r8d, [rdx+13h]
 * 00000001C00556FC: mov     [rsp+78h+var_28], 8
 * 00000001C0055705: lea     rax, [rsp+78h+arg_38]
 * 00000001C005570D: mov     [rsp+78h+var_30], rax
 * 00000001C0055712: lea     rax, [rsp+78h+arg_30]
 * 00000001C005571A: mov     [rsp+78h+var_38], r12
 * 00000001C005571F: mov     [rsp+78h+var_40], rax
 * 00000001C0055724: mov     [rsp+78h+var_48], rbx
 * 00000001C0055729: mov     [rsp+78h+var_50], rdi
 * 00000001C005572E: mov     word ptr [rsp+78h+var_58], si
 * 00000001C0055733: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055739: lea     r11, [rsp+78h+var_8]
 * 00000001C005573E: mov     rbx, [r11+10h]
 * 00000001C0055742: mov     rbp, [r11+18h]
 * 00000001C0055746: mov     rsi, [r11+20h]
 * 00000001C005574A: mov     rdi, [r11+28h]
 * 00000001C005574E: mov     rsp, r11
 * 00000001C0055751: pop     r12
 * 00000001C0055753: retn
 */
