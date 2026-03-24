/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0009204
 * Callers:
 *     ACPIDeviceDiscoverDependencies @ 0x1C001A3A4 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIDevicePowerDpc @ 0x1C001BBD0 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001D28C (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C001D778 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C001F6C0 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIUnload @ 0x1C0021290 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0032880 (ACPIEnableEnterACPIMode.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0035494 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C00370B8 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRangeValidatePciResources @ 0x1C00374D0 (ACPIRangeValidatePciResources.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0039540 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C003B510 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C003FAF0 (ACPIVectorDisconnect.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A814 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIInterruptInitialize @ 0x1C007D708 (ACPIInterruptInitialize.c)
 *     ACPIEnumerateTables @ 0x1C007E0BC (ACPIEnumerateTables.c)
 *     ACPIProcessHardwareInformation @ 0x1C007E17C (ACPIProcessHardwareInformation.c)
 *     ACPIPccInitialize @ 0x1C007EC60 (ACPIPccInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C007EEB4 (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0081528 (ACPIProcessorBuildBootApicIds.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008503C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00862DC (PnpCmResourcesToBiosResources.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 *     IcCheckIrqConflict @ 0x1C0091F80 (IcCheckIrqConflict.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 *     ACPIGlobalInitialize @ 0x1C00996BC (ACPIGlobalInitialize.c)
 *     ACPIInitStartACPI @ 0x1C0099EA4 (ACPIInitStartACPI.c)
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 *     ACPIInitializeDDBs @ 0x1C009A488 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessDSDT @ 0x1C009A65C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C009A774 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 *     ACPIRegDumpAcpiTables @ 0x1C009AFBC (ACPIRegDumpAcpiTables.c)
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 *     ACPIWmiInitLog @ 0x1C009B63C (ACPIWmiInitLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0009204
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009204
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009204: mov     [rsp+arg_0], rbx
 * 00000001C0009209: mov     [rsp+arg_8], rbp
 * 00000001C000920E: mov     [rsp+arg_10], rsi
 * 00000001C0009213: push    rdi
 * 00000001C0009214: push    r14
 * 00000001C0009216: push    r15
 * 00000001C0009218: sub     rsp, 30h
 * 00000001C000921C: mov     r14d, r8d
 * 00000001C000921F: movzx   ebp, r9w
 * 00000001C0009223: mov     edi, r8d
 * 00000001C0009226: mov     sil, dl
 * 00000001C0009229: shr     rdi, 10h
 * 00000001C000922D: mov     r15, rcx
 * 00000001C0009230: lea     ebx, [r14-1]
 * 00000001C0009234: mov     r10d, ebx
 * 00000001C0009237: and     ebx, 1Fh
 * 00000001C000923A: shr     r10, 5
 * 00000001C000923E: lea     rax, [rdi+rdi*4]
 * 00000001C0009242: and     r10d, 7FFh
 * 00000001C0009249: lea     r11, [r10+rax*4]
 * 00000001C000924D: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0009254: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0009259: bt      eax, ebx
 * 00000001C000925C: jnb     short loc_1C0009292
 * 00000001C000925E: lea     rcx, [rdi+rdi*4]
 * 00000001C0009262: add     rcx, rcx
 * 00000001C0009265: cmp     [r10+rcx*8+29h], dl
 * 00000001C000926A: jb      short loc_1C0009292
 * 00000001C000926C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009273: mov     edx, 2Bh ; '+'
 * 00000001C0009278: and     [rsp+48h+var_28], 0
 * 00000001C000927E: mov     r8, [rsp+48h+arg_20]
 * 00000001C0009283: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0009288: movzx   r9d, r9w
 * 00000001C000928C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009292: and     [rsp+48h+var_20], 0
 * 00000001C0009298: mov     r8d, r14d
 * 00000001C000929B: mov     r9, [rsp+48h+arg_20]
 * 00000001C00092A0: mov     rcx, r15
 * 00000001C00092A3: movzx   edx, sil
 * 00000001C00092A7: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00092AC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00092B2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00092B7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00092BC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00092C1: add     rsp, 30h
 * 00000001C00092C5: pop     r15
 * 00000001C00092C7: pop     r14
 * 00000001C00092C9: pop     rdi
 * 00000001C00092CA: retn
 */
