/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C0038858
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpiGrowResourceList @ 0x1C0085B80 (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C0038858
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038858
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038858: mov     [rsp+arg_0], rbx
 * 00000001C003885D: mov     [rsp+arg_8], rbp
 * 00000001C0038862: mov     [rsp+arg_10], rsi
 * 00000001C0038867: push    rdi
 * 00000001C0038868: push    r14
 * 00000001C003886A: push    r15
 * 00000001C003886C: sub     rsp, 50h
 * 00000001C0038870: mov     r14d, r8d
 * 00000001C0038873: mov     sil, dl
 * 00000001C0038876: mov     edi, r8d
 * 00000001C0038879: movzx   ebp, r9w
 * 00000001C003887D: shr     rdi, 10h
 * 00000001C0038881: mov     r15, rcx
 * 00000001C0038884: lea     ebx, [r14-1]
 * 00000001C0038888: mov     r10d, ebx
 * 00000001C003888B: and     ebx, 1Fh
 * 00000001C003888E: shr     r10, 5
 * 00000001C0038892: lea     rax, [rdi+rdi*4]
 * 00000001C0038896: and     r10d, 7FFh
 * 00000001C003889D: mov     edx, ebx
 * 00000001C003889F: mov     ebx, 4
 * 00000001C00388A4: lea     r11, [r10+rax*4]
 * 00000001C00388A8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00388AF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00388B4: bt      eax, edx
 * 00000001C00388B7: jnb     short loc_1C0038911
 * 00000001C00388B9: lea     rcx, [rdi+rdi*4]
 * 00000001C00388BD: add     rcx, rcx
 * 00000001C00388C0: cmp     [r10+rcx*8+29h], sil
 * 00000001C00388C5: jb      short loc_1C0038911
 * 00000001C00388C7: and     [rsp+68h+var_28], 0
 * 00000001C00388CD: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00388D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00388DC: lea     r8, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C00388E3: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00388E8: mov     [rsp+68h+var_30], rbx
 * 00000001C00388ED: mov     [rsp+68h+var_38], rdx
 * 00000001C00388F2: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00388FA: mov     [rsp+68h+var_40], rbx
 * 00000001C00388FF: mov     [rsp+68h+var_48], rdx
 * 00000001C0038904: lea     edx, [rbx+27h]
 * 00000001C0038907: movzx   r9d, r9w
 * 00000001C003890B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038911: and     [rsp+68h+var_20], 0
 * 00000001C0038917: lea     rax, [rsp+68h+arg_30]
 * 00000001C003891F: mov     [rsp+68h+var_28], rbx
 * 00000001C0038924: lea     r9, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C003892B: mov     [rsp+68h+var_30], rax
 * 00000001C0038930: mov     r8d, r14d
 * 00000001C0038933: lea     rax, [rsp+68h+arg_28]
 * 00000001C003893B: mov     [rsp+68h+var_38], rbx
 * 00000001C0038940: mov     [rsp+68h+var_40], rax
 * 00000001C0038945: mov     rcx, r15
 * 00000001C0038948: movzx   edx, sil
 * 00000001C003894C: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0038951: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038957: lea     r11, [rsp+68h+var_18]
 * 00000001C003895C: mov     rbx, [r11+20h]
 * 00000001C0038960: mov     rbp, [r11+28h]
 * 00000001C0038964: mov     rsi, [r11+30h]
 * 00000001C0038968: mov     rsp, r11
 * 00000001C003896B: pop     r15
 * 00000001C003896D: pop     r14
 * 00000001C003896F: pop     rdi
 * 00000001C0038970: retn
 */
