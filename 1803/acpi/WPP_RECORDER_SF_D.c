/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00377D8
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0037284 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIVectorBuildVectorMasks @ 0x1C003F78C (ACPIVectorBuildVectorMasks.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C0081D08 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C0081F50 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C0082604 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00827EC (OSReadNextRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C00377D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00377D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00377D8: mov     [rsp+arg_0], rbx
 * 00000001C00377DD: mov     [rsp+arg_8], rbp
 * 00000001C00377E2: mov     [rsp+arg_10], rsi
 * 00000001C00377E7: push    rdi
 * 00000001C00377E8: push    r14
 * 00000001C00377EA: push    r15
 * 00000001C00377EC: sub     rsp, 40h
 * 00000001C00377F0: mov     r14d, r8d
 * 00000001C00377F3: mov     sil, dl
 * 00000001C00377F6: mov     edi, r8d
 * 00000001C00377F9: movzx   ebp, r9w
 * 00000001C00377FD: shr     rdi, 10h
 * 00000001C0037801: mov     r15, rcx
 * 00000001C0037804: lea     ebx, [r14-1]
 * 00000001C0037808: mov     r10d, ebx
 * 00000001C003780B: and     ebx, 1Fh
 * 00000001C003780E: shr     r10, 5
 * 00000001C0037812: lea     rax, [rdi+rdi*4]
 * 00000001C0037816: and     r10d, 7FFh
 * 00000001C003781D: mov     edx, ebx
 * 00000001C003781F: mov     ebx, 4
 * 00000001C0037824: lea     r11, [r10+rax*4]
 * 00000001C0037828: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003782F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0037834: bt      eax, edx
 * 00000001C0037837: jnb     short loc_1C0037880
 * 00000001C0037839: lea     rcx, [rdi+rdi*4]
 * 00000001C003783D: add     rcx, rcx
 * 00000001C0037840: cmp     [r10+rcx*8+29h], sil
 * 00000001C0037845: jb      short loc_1C0037880
 * 00000001C0037847: and     [rsp+58h+var_28], 0
 * 00000001C003784D: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0037855: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003785C: mov     r8, [rsp+58h+arg_20]
 * 00000001C0037864: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0037869: mov     [rsp+58h+var_30], rbx
 * 00000001C003786E: mov     [rsp+58h+var_38], rdx
 * 00000001C0037873: lea     edx, [rbx+27h]
 * 00000001C0037876: movzx   r9d, r9w
 * 00000001C003787A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037880: and     [rsp+58h+var_20], 0
 * 00000001C0037886: lea     rax, [rsp+58h+arg_28]
 * 00000001C003788E: mov     r9, [rsp+58h+arg_20]
 * 00000001C0037896: mov     r8d, r14d
 * 00000001C0037899: mov     [rsp+58h+var_28], rbx
 * 00000001C003789E: mov     rcx, r15
 * 00000001C00378A1: mov     [rsp+58h+var_30], rax
 * 00000001C00378A6: movzx   edx, sil
 * 00000001C00378AA: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00378AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00378B5: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00378BA: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00378BF: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00378C4: add     rsp, 40h
 * 00000001C00378C8: pop     r15
 * 00000001C00378CA: pop     r14
 * 00000001C00378CC: pop     rdi
 * 00000001C00378CD: retn
 */
