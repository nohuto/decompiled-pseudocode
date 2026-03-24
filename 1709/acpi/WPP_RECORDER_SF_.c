/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000EA0C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000E7F4 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C000E970 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDeviceRecordDependencies @ 0x1C000EC5C (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C000EE50 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0021258 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIEnableEnterACPIMode @ 0x1C00217EC (ACPIEnableEnterACPIMode.c)
 *     ACPIRangeValidatePciResources @ 0x1C00274C8 (ACPIRangeValidatePciResources.c)
 *     ACPIUnload @ 0x1C004B2E0 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00526CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C0056DDC (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0057EB0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C0058680 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0059800 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0059A90 (ACPIVectorDisconnect.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E6A4 (PnpCmResourcesToBiosResources.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008E8B0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008EE14 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 *     ACPIProcessHardwareInformation @ 0x1C008FA58 (ACPIProcessHardwareInformation.c)
 *     ACPIInterruptInitialize @ 0x1C0090DB4 (ACPIInterruptInitialize.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C0091C98 (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0093BBC (ACPIProcessorBuildBootApicIds.c)
 *     IcCheckIrqConflict @ 0x1C0093C50 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00950DC (IrqArbpFindSuitableRangePci.c)
 *     ACPIEnumerateTables @ 0x1C0096568 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00A17A4 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00A2F70 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A5190 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A557C (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitStartACPI @ 0x1C00AC2D8 (ACPIInitStartACPI.c)
 *     ACPIGlobalInitialize @ 0x1C00AD048 (ACPIGlobalInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00ADED8 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00AE068 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadProcessFADT @ 0x1C00AE684 (ACPILoadProcessFADT.c)
 *     ACPILoadProcessDSDT @ 0x1C00AE720 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00AE7D8 (ACPILoadProcessFACS.c)
 *     ACPIInitializeDDBs @ 0x1C00AE954 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000EA0C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000EA0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000EA0C: mov     [rsp+arg_0], rbx
 * 00000001C000EA11: mov     [rsp+arg_8], rbp
 * 00000001C000EA16: mov     [rsp+arg_10], rsi
 * 00000001C000EA1B: push    rdi
 * 00000001C000EA1C: push    r14
 * 00000001C000EA1E: push    r15
 * 00000001C000EA20: sub     rsp, 30h
 * 00000001C000EA24: mov     r14d, r8d
 * 00000001C000EA27: movzx   ebp, r9w
 * 00000001C000EA2B: mov     edi, r8d
 * 00000001C000EA2E: mov     sil, dl
 * 00000001C000EA31: shr     rdi, 10h
 * 00000001C000EA35: mov     r15, rcx
 * 00000001C000EA38: lea     ebx, [r14-1]
 * 00000001C000EA3C: mov     r10d, ebx
 * 00000001C000EA3F: and     ebx, 1Fh
 * 00000001C000EA42: shr     r10, 5
 * 00000001C000EA46: lea     rax, [rdi+rdi*4]
 * 00000001C000EA4A: and     r10d, 7FFh
 * 00000001C000EA51: lea     r11, [r10+rax*4]
 * 00000001C000EA55: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000EA5C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000EA61: bt      eax, ebx
 * 00000001C000EA64: jb      loc_1C0039844
 * 00000001C000EA6A: and     [rsp+48h+var_20], 0
 * 00000001C000EA70: mov     r8d, r14d
 * 00000001C000EA73: mov     r9, [rsp+48h+arg_20]
 * 00000001C000EA78: mov     rcx, r15
 * 00000001C000EA7B: movzx   edx, sil
 * 00000001C000EA7F: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000EA84: call    cs:__imp_WppAutoLogTrace
 * 00000001C000EA8A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000EA8F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000EA94: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000EA99: add     rsp, 30h
 * 00000001C000EA9D: pop     r15
 * 00000001C000EA9F: pop     r14
 * 00000001C000EAA1: pop     rdi
 * 00000001C000EAA2: retn
 * 00000001C0039844: lea     rcx, [rdi+rdi*4]
 * 00000001C0039848: add     rcx, rcx
 * 00000001C003984B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0039850: jb      loc_1C000EA6A
 * 00000001C0039856: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003985D: mov     edx, 2Bh ; '+'
 * 00000001C0039862: and     [rsp+48h+var_28], 0
 * 00000001C0039868: mov     r8, [rsp+48h+arg_20]
 * 00000001C003986D: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0039872: movzx   r9d, bp
 * 00000001C0039876: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003987C: nop
 * 00000001C003987D: jmp     loc_1C000EA6A
 */
