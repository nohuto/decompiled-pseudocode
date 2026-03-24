/*
 * XREFs of WPP_RECORDER_SF_sdqD @ 0x1C0036160
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0035CFC (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sdqD @ 0x1C0036160
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036160
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036160: mov     rax, rsp
 * 00000001C0036163: mov     [rax+8], rbx
 * 00000001C0036167: mov     [rax+10h], rbp
 * 00000001C003616B: mov     [rax+18h], rsi
 * 00000001C003616F: mov     [rax+20h], rdi
 * 00000001C0036173: push    r12
 * 00000001C0036175: sub     rsp, 70h
 * 00000001C0036179: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0036180: lea     r8, aNull_0; "NULL"
 * 00000001C0036187: mov     rdi, [rsp+78h+arg_28]
 * 00000001C003618F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0036193: movzx   esi, r9w
 * 00000001C0036197: mov     rbp, rcx
 * 00000001C003619A: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C00361A1: lea     r12d, [rbx+5]
 * 00000001C00361A5: jz      loc_1C0036253
 * 00000001C00361AB: cmp     byte ptr [rdx+29h], 2
 * 00000001C00361AF: jb      loc_1C0036253
 * 00000001C00361B5: test    rdi, rdi
 * 00000001C00361B8: jz      short loc_1C00361CB
 * 00000001C00361BA: mov     rdx, rbx
 * 00000001C00361BD: inc     rdx
 * 00000001C00361C0: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00361C4: jnz     short loc_1C00361BD
 * 00000001C00361C6: inc     rdx
 * 00000001C00361C9: jmp     short loc_1C00361D0
 * 00000001C00361CB: mov     edx, 5
 * 00000001C00361D0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00361D7: test    rdi, rdi
 * 00000001C00361DA: mov     rcx, rdi
 * 00000001C00361DD: movzx   r9d, si
 * 00000001C00361E1: cmovz   rcx, r8
 * 00000001C00361E5: and     [rsp+78h+var_18], 0
 * 00000001C00361EB: mov     [rsp+78h+var_20], r12
 * 00000001C00361F0: lea     r8, [rsp+78h+arg_40]
 * 00000001C00361F8: mov     [rsp+78h+var_28], r8
 * 00000001C00361FD: lea     r8, [rsp+78h+arg_38]
 * 00000001C0036205: mov     [rsp+78h+var_30], 8
 * 00000001C003620E: mov     [rsp+78h+var_38], r8
 * 00000001C0036213: lea     r8, [rsp+78h+arg_30]
 * 00000001C003621B: mov     [rsp+78h+var_40], r12
 * 00000001C0036220: mov     [rsp+78h+var_48], r8
 * 00000001C0036225: lea     r8, WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids
 * 00000001C003622C: mov     [rsp+78h+var_50], rdx
 * 00000001C0036231: mov     edx, 2Bh ; '+'
 * 00000001C0036236: mov     [rsp+78h+var_58], rcx
 * 00000001C003623B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036242: mov     rcx, [rcx+18h]
 * 00000001C0036246: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003624C: lea     r8, aNull_0; "NULL"
 * 00000001C0036253: test    rdi, rdi
 * 00000001C0036256: jz      short loc_1C0036266
 * 00000001C0036258: inc     rbx
 * 00000001C003625B: cmp     byte ptr [rdi+rbx], 0
 * 00000001C003625F: jnz     short loc_1C0036258
 * 00000001C0036261: inc     rbx
 * 00000001C0036264: jmp     short loc_1C003626B
 * 00000001C0036266: mov     ebx, 5
 * 00000001C003626B: test    rdi, rdi
 * 00000001C003626E: lea     rax, [rsp+78h+arg_40]
 * 00000001C0036276: mov     edx, 2
 * 00000001C003627B: lea     r9, WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids
 * 00000001C0036282: cmovz   rdi, r8
 * 00000001C0036286: mov     rcx, rbp
 * 00000001C0036289: and     [rsp+78h+var_10], 0
 * 00000001C003628F: mov     [rsp+78h+var_18], r12
 * 00000001C0036294: mov     [rsp+78h+var_20], rax
 * 00000001C0036299: lea     r8d, [rdx+13h]
 * 00000001C003629D: mov     [rsp+78h+var_28], 8
 * 00000001C00362A6: lea     rax, [rsp+78h+arg_38]
 * 00000001C00362AE: mov     [rsp+78h+var_30], rax
 * 00000001C00362B3: lea     rax, [rsp+78h+arg_30]
 * 00000001C00362BB: mov     [rsp+78h+var_38], r12
 * 00000001C00362C0: mov     [rsp+78h+var_40], rax
 * 00000001C00362C5: mov     [rsp+78h+var_48], rbx
 * 00000001C00362CA: mov     [rsp+78h+var_50], rdi
 * 00000001C00362CF: mov     word ptr [rsp+78h+var_58], si
 * 00000001C00362D4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00362DA: lea     r11, [rsp+78h+var_8]
 * 00000001C00362DF: mov     rbx, [r11+10h]
 * 00000001C00362E3: mov     rbp, [r11+18h]
 * 00000001C00362E7: mov     rsi, [r11+20h]
 * 00000001C00362EB: mov     rdi, [r11+28h]
 * 00000001C00362EF: mov     rsp, r11
 * 00000001C00362F2: pop     r12
 * 00000001C00362F4: retn
 */
