/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0056F10
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00136F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0027630 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A41F8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A443C (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00A48F0 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00A4AD8 (OSReadNextRegValue.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A8888 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0056F10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056F10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056F10: mov     [rsp+arg_0], rbx
 * 00000001C0056F15: mov     [rsp+arg_8], rbp
 * 00000001C0056F1A: mov     [rsp+arg_10], rsi
 * 00000001C0056F1F: push    rdi
 * 00000001C0056F20: push    r14
 * 00000001C0056F22: push    r15
 * 00000001C0056F24: sub     rsp, 40h
 * 00000001C0056F28: mov     r14d, r8d
 * 00000001C0056F2B: mov     sil, dl
 * 00000001C0056F2E: mov     edi, r8d
 * 00000001C0056F31: movzx   ebp, r9w
 * 00000001C0056F35: shr     rdi, 10h
 * 00000001C0056F39: mov     r15, rcx
 * 00000001C0056F3C: lea     ebx, [r14-1]
 * 00000001C0056F40: mov     r10d, ebx
 * 00000001C0056F43: and     ebx, 1Fh
 * 00000001C0056F46: shr     r10, 5
 * 00000001C0056F4A: lea     rax, [rdi+rdi*4]
 * 00000001C0056F4E: and     r10d, 7FFh
 * 00000001C0056F55: mov     edx, ebx
 * 00000001C0056F57: mov     ebx, 4
 * 00000001C0056F5C: lea     r11, [r10+rax*4]
 * 00000001C0056F60: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0056F67: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0056F6C: bt      eax, edx
 * 00000001C0056F6F: jnb     short loc_1C0056FB8
 * 00000001C0056F71: lea     rcx, [rdi+rdi*4]
 * 00000001C0056F75: add     rcx, rcx
 * 00000001C0056F78: cmp     [r10+rcx*8+29h], sil
 * 00000001C0056F7D: jb      short loc_1C0056FB8
 * 00000001C0056F7F: and     [rsp+58h+var_28], 0
 * 00000001C0056F85: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0056F8D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056F94: mov     r8, [rsp+58h+arg_20]
 * 00000001C0056F9C: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0056FA1: mov     [rsp+58h+var_30], rbx
 * 00000001C0056FA6: mov     [rsp+58h+var_38], rdx
 * 00000001C0056FAB: lea     edx, [rbx+27h]
 * 00000001C0056FAE: movzx   r9d, r9w
 * 00000001C0056FB2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0056FB8: and     [rsp+58h+var_20], 0
 * 00000001C0056FBE: lea     rax, [rsp+58h+arg_28]
 * 00000001C0056FC6: mov     r9, [rsp+58h+arg_20]
 * 00000001C0056FCE: mov     r8d, r14d
 * 00000001C0056FD1: mov     [rsp+58h+var_28], rbx
 * 00000001C0056FD6: mov     rcx, r15
 * 00000001C0056FD9: mov     [rsp+58h+var_30], rax
 * 00000001C0056FDE: movzx   edx, sil
 * 00000001C0056FE2: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0056FE7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0056FED: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0056FF2: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0056FF7: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0056FFC: add     rsp, 40h
 * 00000001C0057000: pop     r15
 * 00000001C0057002: pop     r14
 * 00000001C0057004: pop     rdi
 * 00000001C0057005: retn
 */
