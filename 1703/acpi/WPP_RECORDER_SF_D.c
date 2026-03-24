/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0056320
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C001F900 (ACPIGpeBuildEventMasks.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C00263CC (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A15A8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A17EC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00A1C98 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00A1E80 (OSReadNextRegValue.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A5DE8 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0056320
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056320
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056320: mov     [rsp+arg_0], rbx
 * 00000001C0056325: mov     [rsp+arg_8], rbp
 * 00000001C005632A: mov     [rsp+arg_10], rsi
 * 00000001C005632F: push    rdi
 * 00000001C0056330: push    r14
 * 00000001C0056332: push    r15
 * 00000001C0056334: sub     rsp, 40h
 * 00000001C0056338: mov     r14d, r8d
 * 00000001C005633B: mov     sil, dl
 * 00000001C005633E: mov     edi, r8d
 * 00000001C0056341: movzx   ebp, r9w
 * 00000001C0056345: shr     rdi, 10h
 * 00000001C0056349: mov     r15, rcx
 * 00000001C005634C: lea     ebx, [r14-1]
 * 00000001C0056350: mov     r10d, ebx
 * 00000001C0056353: and     ebx, 1Fh
 * 00000001C0056356: shr     r10, 5
 * 00000001C005635A: lea     rax, [rdi+rdi*4]
 * 00000001C005635E: and     r10d, 7FFh
 * 00000001C0056365: mov     edx, ebx
 * 00000001C0056367: mov     ebx, 4
 * 00000001C005636C: lea     r11, [r10+rax*4]
 * 00000001C0056370: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0056377: mov     eax, [r10+r11*4+2Ch]
 * 00000001C005637C: bt      eax, edx
 * 00000001C005637F: jnb     short loc_1C00563C8
 * 00000001C0056381: lea     rcx, [rdi+rdi*4]
 * 00000001C0056385: add     rcx, rcx
 * 00000001C0056388: cmp     [r10+rcx*8+29h], sil
 * 00000001C005638D: jb      short loc_1C00563C8
 * 00000001C005638F: and     [rsp+58h+var_28], 0
 * 00000001C0056395: lea     rdx, [rsp+58h+arg_28]
 * 00000001C005639D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00563A4: mov     r8, [rsp+58h+arg_20]
 * 00000001C00563AC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00563B1: mov     [rsp+58h+var_30], rbx
 * 00000001C00563B6: mov     [rsp+58h+var_38], rdx
 * 00000001C00563BB: lea     edx, [rbx+27h]
 * 00000001C00563BE: movzx   r9d, r9w
 * 00000001C00563C2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00563C8: and     [rsp+58h+var_20], 0
 * 00000001C00563CE: lea     rax, [rsp+58h+arg_28]
 * 00000001C00563D6: mov     r9, [rsp+58h+arg_20]
 * 00000001C00563DE: mov     r8d, r14d
 * 00000001C00563E1: mov     [rsp+58h+var_28], rbx
 * 00000001C00563E6: mov     rcx, r15
 * 00000001C00563E9: mov     [rsp+58h+var_30], rax
 * 00000001C00563EE: movzx   edx, sil
 * 00000001C00563F2: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00563F7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00563FD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0056402: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0056407: mov     rsi, [rsp+58h+arg_10]
 * 00000001C005640C: add     rsp, 40h
 * 00000001C0056410: pop     r15
 * 00000001C0056412: pop     r14
 * 00000001C0056414: pop     rdi
 * 00000001C0056415: retn
 */
