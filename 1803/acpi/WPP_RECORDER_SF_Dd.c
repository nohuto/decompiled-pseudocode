/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C003803C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00862DC (PnpCmResourcesToBiosResources.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DD @ 0x1C003803C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003803C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003803C: mov     [rsp+arg_0], rbx
 * 00000001C0038041: mov     [rsp+arg_8], rbp
 * 00000001C0038046: mov     [rsp+arg_10], rsi
 * 00000001C003804B: push    rdi
 * 00000001C003804C: push    r14
 * 00000001C003804E: push    r15
 * 00000001C0038050: sub     rsp, 50h
 * 00000001C0038054: mov     r14d, r8d
 * 00000001C0038057: mov     sil, dl
 * 00000001C003805A: mov     edi, r8d
 * 00000001C003805D: movzx   ebp, r9w
 * 00000001C0038061: shr     rdi, 10h
 * 00000001C0038065: mov     r15, rcx
 * 00000001C0038068: lea     ebx, [r14-1]
 * 00000001C003806C: mov     r10d, ebx
 * 00000001C003806F: and     ebx, 1Fh
 * 00000001C0038072: shr     r10, 5
 * 00000001C0038076: lea     rax, [rdi+rdi*4]
 * 00000001C003807A: and     r10d, 7FFh
 * 00000001C0038081: mov     edx, ebx
 * 00000001C0038083: mov     ebx, 4
 * 00000001C0038088: lea     r11, [r10+rax*4]
 * 00000001C003808C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0038093: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0038098: bt      eax, edx
 * 00000001C003809B: jnb     short loc_1C00380F6
 * 00000001C003809D: lea     rcx, [rdi+rdi*4]
 * 00000001C00380A1: add     rcx, rcx
 * 00000001C00380A4: cmp     [r10+rcx*8+29h], sil
 * 00000001C00380A9: jb      short loc_1C00380F6
 * 00000001C00380AB: and     [rsp+68h+var_28], 0
 * 00000001C00380B1: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00380B9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00380C0: mov     r8, [rsp+68h+arg_20]
 * 00000001C00380C8: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00380CD: mov     [rsp+68h+var_30], rbx
 * 00000001C00380D2: mov     [rsp+68h+var_38], rdx
 * 00000001C00380D7: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00380DF: mov     [rsp+68h+var_40], rbx
 * 00000001C00380E4: mov     [rsp+68h+var_48], rdx
 * 00000001C00380E9: lea     edx, [rbx+27h]
 * 00000001C00380EC: movzx   r9d, r9w
 * 00000001C00380F0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00380F6: and     [rsp+68h+var_20], 0
 * 00000001C00380FC: lea     rax, [rsp+68h+arg_30]
 * 00000001C0038104: mov     r9, [rsp+68h+arg_20]
 * 00000001C003810C: mov     r8d, r14d
 * 00000001C003810F: mov     [rsp+68h+var_28], rbx
 * 00000001C0038114: mov     rcx, r15
 * 00000001C0038117: mov     [rsp+68h+var_30], rax
 * 00000001C003811C: lea     rax, [rsp+68h+arg_28]
 * 00000001C0038124: mov     [rsp+68h+var_38], rbx
 * 00000001C0038129: mov     [rsp+68h+var_40], rax
 * 00000001C003812E: movzx   edx, sil
 * 00000001C0038132: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0038137: call    cs:__imp_WppAutoLogTrace
 * 00000001C003813D: lea     r11, [rsp+68h+var_18]
 * 00000001C0038142: mov     rbx, [r11+20h]
 * 00000001C0038146: mov     rbp, [r11+28h]
 * 00000001C003814A: mov     rsi, [r11+30h]
 * 00000001C003814E: mov     rsp, r11
 * 00000001C0038151: pop     r15
 * 00000001C0038153: pop     r14
 * 00000001C0038155: pop     rdi
 * 00000001C0038156: retn
 */
