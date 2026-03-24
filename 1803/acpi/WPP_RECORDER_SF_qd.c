/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C001FFE0
 * Callers:
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C0019DD0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C0019EE0 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C0019FA0 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C001D110 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001D1A0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001D28C (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreatePowerResource @ 0x1C002E99C (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAFC (OSNotifyCreateThermalZone.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C0032BB0 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0033774 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0033D28 (AcpiSetupNativeMethodContext.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C003513C (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0035340 (ACPIReleaseGlobalLock.c)
 *     ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C0039110 (ACPIRootDeviceDiscoverDeviceCompletion.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A814 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     ACPILoadTableCheckSum @ 0x1C009AD54 (ACPILoadTableCheckSum.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C001FFE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C001FFE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001FFE0: mov     [rsp+arg_0], rbx
 * 00000001C001FFE5: mov     [rsp+arg_8], rbp
 * 00000001C001FFEA: mov     [rsp+arg_10], rsi
 * 00000001C001FFEF: push    rdi
 * 00000001C001FFF0: push    r14
 * 00000001C001FFF2: push    r15
 * 00000001C001FFF4: sub     rsp, 50h
 * 00000001C001FFF8: mov     r14d, r8d
 * 00000001C001FFFB: mov     sil, dl
 * 00000001C001FFFE: mov     edi, r8d
 * 00000001C0020001: movzx   ebp, r9w
 * 00000001C0020005: shr     rdi, 10h
 * 00000001C0020009: mov     r15, rcx
 * 00000001C002000C: lea     ebx, [r14-1]
 * 00000001C0020010: mov     r10d, ebx
 * 00000001C0020013: and     ebx, 1Fh
 * 00000001C0020016: shr     r10, 5
 * 00000001C002001A: lea     rax, [rdi+rdi*4]
 * 00000001C002001E: and     r10d, 7FFh
 * 00000001C0020025: mov     edx, ebx
 * 00000001C0020027: mov     ebx, 4
 * 00000001C002002C: lea     r11, [r10+rax*4]
 * 00000001C0020030: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0020037: mov     eax, [r10+r11*4+2Ch]
 * 00000001C002003C: bt      eax, edx
 * 00000001C002003F: jnb     short loc_1C002009E
 * 00000001C0020041: lea     rcx, [rdi+rdi*4]
 * 00000001C0020045: add     rcx, rcx
 * 00000001C0020048: cmp     [r10+rcx*8+29h], sil
 * 00000001C002004D: jb      short loc_1C002009E
 * 00000001C002004F: and     [rsp+68h+var_28], 0
 * 00000001C0020055: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002005D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0020064: mov     r8, [rsp+68h+arg_20]
 * 00000001C002006C: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0020071: mov     [rsp+68h+var_30], rbx
 * 00000001C0020076: mov     [rsp+68h+var_38], rdx
 * 00000001C002007B: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0020083: mov     [rsp+68h+var_40], 8
 * 00000001C002008C: mov     [rsp+68h+var_48], rdx
 * 00000001C0020091: lea     edx, [rbx+27h]
 * 00000001C0020094: movzx   r9d, r9w
 * 00000001C0020098: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002009E: and     [rsp+68h+var_20], 0
 * 00000001C00200A4: lea     rax, [rsp+68h+arg_30]
 * 00000001C00200AC: mov     r9, [rsp+68h+arg_20]
 * 00000001C00200B4: mov     r8d, r14d
 * 00000001C00200B7: mov     [rsp+68h+var_28], rbx
 * 00000001C00200BC: mov     rcx, r15
 * 00000001C00200BF: mov     [rsp+68h+var_30], rax
 * 00000001C00200C4: lea     rax, [rsp+68h+arg_28]
 * 00000001C00200CC: mov     [rsp+68h+var_38], 8
 * 00000001C00200D5: mov     [rsp+68h+var_40], rax
 * 00000001C00200DA: movzx   edx, sil
 * 00000001C00200DE: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00200E3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00200E9: lea     r11, [rsp+68h+var_18]
 * 00000001C00200EE: mov     rbx, [r11+20h]
 * 00000001C00200F2: mov     rbp, [r11+28h]
 * 00000001C00200F6: mov     rsi, [r11+30h]
 * 00000001C00200FA: mov     rsp, r11
 * 00000001C00200FD: pop     r15
 * 00000001C00200FF: pop     r14
 * 00000001C0020101: pop     rdi
 * 00000001C0020102: retn
 */
