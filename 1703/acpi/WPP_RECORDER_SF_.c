/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0008934
 * Callers:
 *     ACPIEnableEnterACPIMode @ 0x1C0005398 (ACPIEnableEnterACPIMode.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00078D8 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0007A58 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerDpc @ 0x1C000C7A0 (ACPIDevicePowerDpc.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002576C (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025960 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIRangeValidatePciResources @ 0x1C0026260 (ACPIRangeValidatePciResources.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C002743C (ACPIStartNextGlobalLockRequest.c)
 *     ACPIUnload @ 0x1C004BEE0 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0051C8C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C00561EC (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C00572B0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C0057A80 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0058DB0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0058F70 (ACPIVectorDisconnect.c)
 *     ACPIInterruptInitialize @ 0x1C0083F70 (ACPIInterruptInitialize.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C00884E0 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0089D58 (IrqArbpFindSuitableRangePci.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C008A538 (ACPIPccLegacyInitialize.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008B3C0 (PnpCmResourcesToBiosResources.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008B758 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 *     ACPIProcessHardwareInformation @ 0x1C0090784 (ACPIProcessHardwareInformation.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00920BC (ACPIProcessorBuildBootApicIds.c)
 *     ACPIEnumerateTables @ 0x1C0093B08 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009E7AC (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00A0240 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A253C (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitStartACPI @ 0x1C00AA248 (ACPIInitStartACPI.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AB0E4 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00AB270 (ACPIRegDumpAcpiTables.c)
 *     ACPIGlobalInitialize @ 0x1C00ABCB0 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessRSDT @ 0x1C00AC150 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C00AC378 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessFACS @ 0x1C00AC4F4 (ACPILoadProcessFACS.c)
 *     ACPIDispatchAddDevice @ 0x1C00AD890 (ACPIDispatchAddDevice.c)
 *     ACPILoadProcessFADT @ 0x1C00ADCC8 (ACPILoadProcessFADT.c)
 *     ACPILoadProcessDSDT @ 0x1C00ADD68 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0008934
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008934
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008934: mov     [rsp+arg_0], rbx
 * 00000001C0008939: mov     [rsp+arg_8], rbp
 * 00000001C000893E: mov     [rsp+arg_10], rsi
 * 00000001C0008943: push    rdi
 * 00000001C0008944: push    r14
 * 00000001C0008946: push    r15
 * 00000001C0008948: sub     rsp, 30h
 * 00000001C000894C: mov     r14d, r8d
 * 00000001C000894F: movzx   ebp, r9w
 * 00000001C0008953: mov     edi, r8d
 * 00000001C0008956: mov     sil, dl
 * 00000001C0008959: shr     rdi, 10h
 * 00000001C000895D: mov     r15, rcx
 * 00000001C0008960: lea     ebx, [r14-1]
 * 00000001C0008964: mov     r10d, ebx
 * 00000001C0008967: and     ebx, 1Fh
 * 00000001C000896A: shr     r10, 5
 * 00000001C000896E: lea     rax, [rdi+rdi*4]
 * 00000001C0008972: and     r10d, 7FFh
 * 00000001C0008979: lea     r11, [r10+rax*4]
 * 00000001C000897D: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0008984: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0008989: bt      eax, ebx
 * 00000001C000898C: jb      loc_1C002F11C
 * 00000001C0008992: and     [rsp+48h+var_20], 0
 * 00000001C0008998: mov     r8d, r14d
 * 00000001C000899B: mov     r9, [rsp+48h+arg_20]
 * 00000001C00089A0: mov     rcx, r15
 * 00000001C00089A3: movzx   edx, sil
 * 00000001C00089A7: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00089AC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00089B2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00089B7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00089BC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00089C1: add     rsp, 30h
 * 00000001C00089C5: pop     r15
 * 00000001C00089C7: pop     r14
 * 00000001C00089C9: pop     rdi
 * 00000001C00089CA: retn
 * 00000001C002F11C: lea     rcx, [rdi+rdi*4]
 * 00000001C002F120: add     rcx, rcx
 * 00000001C002F123: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F128: jb      loc_1C0008992
 * 00000001C002F12E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F135: mov     edx, 2Bh ; '+'
 * 00000001C002F13A: and     [rsp+48h+var_28], 0
 * 00000001C002F140: mov     r8, [rsp+48h+arg_20]
 * 00000001C002F145: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F14A: movzx   r9d, bp
 * 00000001C002F14E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F154: nop
 * 00000001C002F155: jmp     loc_1C0008992
 */
