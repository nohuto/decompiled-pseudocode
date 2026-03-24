/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00454FC
 * Callers:
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C001B380 (Usbh_USB_OS_VENDOR_CODE.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C001C3D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C001C5C0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C001C850 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C001D790 (UsbhGetRegUsbHubFlags.c)
 *     UsbhRegDriverEntry @ 0x1C001EF80 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C001F530 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0026110 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C00264D0 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027B80 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004C0C0 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004C5A0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004C650 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004C710 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C004C7C0 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C004C890 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004C950 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004CA10 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C004CAE0 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C004CBA0 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C004CC50 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C004CD10 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004CDD0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C004CEB0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004CFA0 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004D050 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C004D100 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004D1B0 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004D270 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C004D320 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C004D3D0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C00581C4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0058270 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058428 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C0058BC0 (UsbhQueryUxdDevice.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005968C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00454FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00454FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00454FC: mov     rax, rsp
 * 00000001C00454FF: mov     [rax+8], rbx
 * 00000001C0045503: mov     [rax+10h], rbp
 * 00000001C0045507: mov     [rax+18h], rsi
 * 00000001C004550B: mov     [rax+20h], rdi
 * 00000001C004550F: push    r13
 * 00000001C0045511: push    r14
 * 00000001C0045513: push    r15
 * 00000001C0045515: sub     rsp, 40h
 * 00000001C0045519: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0045521: lea     r13, aNull; "NULL"
 * 00000001C0045528: mov     r14, rcx
 * 00000001C004552B: xor     r15d, r15d
 * 00000001C004552E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045535: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0045539: movzx   ebp, r9w
 * 00000001C004553D: mov     sil, dl
 * 00000001C0045540: mov     eax, [rcx+2Ch]
 * 00000001C0045543: test    al, 1
 * 00000001C0045545: jz      short loc_1C00455A7
 * 00000001C0045547: cmp     [rcx+29h], dl
 * 00000001C004554A: jb      short loc_1C00455A7
 * 00000001C004554C: test    rdi, rdi
 * 00000001C004554F: jz      short loc_1C0045563
 * 00000001C0045551: mov     r8, rbx
 * 00000001C0045554: inc     r8
 * 00000001C0045557: cmp     [rdi+r8*2], r15w
 * 00000001C004555C: jnz     short loc_1C0045554
 * 00000001C004555E: inc     r8
 * 00000001C0045561: jmp     short loc_1C0045569
 * 00000001C0045563: mov     r8d, 5
 * 00000001C0045569: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0045570: add     r8, r8
 * 00000001C0045573: mov     rcx, [rcx+18h]
 * 00000001C0045577: test    rdi, rdi
 * 00000001C004557A: mov     [rsp+58h+var_28], r15
 * 00000001C004557F: mov     rdx, rdi
 * 00000001C0045582: cmovz   rdx, r13
 * 00000001C0045586: mov     [rsp+58h+var_30], r8
 * 00000001C004558B: mov     r8, [rsp+58h+arg_20]
 * 00000001C0045593: mov     [rsp+58h+var_38], rdx
 * 00000001C0045598: mov     edx, 2Bh ; '+'
 * 00000001C004559D: movzx   r9d, bp
 * 00000001C00455A1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00455A7: test    rdi, rdi
 * 00000001C00455AA: jz      short loc_1C00455BB
 * 00000001C00455AC: inc     rbx
 * 00000001C00455AF: cmp     [rdi+rbx*2], r15w
 * 00000001C00455B4: jnz     short loc_1C00455AC
 * 00000001C00455B6: inc     rbx
 * 00000001C00455B9: jmp     short loc_1C00455C0
 * 00000001C00455BB: mov     ebx, 5
 * 00000001C00455C0: mov     r9, [rsp+58h+arg_20]
 * 00000001C00455C8: lea     rax, [rbx+rbx]
 * 00000001C00455CC: mov     [rsp+58h+var_20], r15
 * 00000001C00455D1: test    rdi, rdi
 * 00000001C00455D4: mov     [rsp+58h+var_28], rax
 * 00000001C00455D9: mov     r8d, 1
 * 00000001C00455DF: cmovz   rdi, r13
 * 00000001C00455E3: movzx   edx, sil
 * 00000001C00455E7: mov     [rsp+58h+var_30], rdi
 * 00000001C00455EC: mov     rcx, r14
 * 00000001C00455EF: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00455F4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00455FA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00455FF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0045604: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0045609: mov     rdi, [rsp+58h+arg_18]
 * 00000001C004560E: add     rsp, 40h
 * 00000001C0045612: pop     r15
 * 00000001C0045614: pop     r14
 * 00000001C0045616: pop     r13
 * 00000001C0045618: retn
 */
