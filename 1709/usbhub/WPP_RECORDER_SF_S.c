/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00463AC
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C001BDA0 (Usbh_USB_OS_VENDOR_CODE.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001BED0 (UsbhPdoPnp_QueryDeviceText.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C001FB20 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C001FFA8 (UsbhSetPdoRegistryParameter.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0020080 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0020A90 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0021180 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021420 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0021E70 (UsbhGetRegUsbHubFlags.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhRegDriverEntry @ 0x1C0024560 (UsbhRegDriverEntry.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00271B0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0029240 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004CF40 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004D420 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004D4D0 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004D590 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C004D650 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C004D720 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004D7E0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004D8A0 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C004D970 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C004DA30 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C004DAE0 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004DBA0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C004DC80 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004DD70 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004DE20 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C004DED0 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004DF80 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004E040 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C004E0F0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C004E1A0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C00580C4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0058170 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058328 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C0058AC0 (UsbhQueryUxdDevice.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0059888 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00463AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00463AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00463AC: mov     rax, rsp
 * 00000001C00463AF: mov     [rax+8], rbx
 * 00000001C00463B3: mov     [rax+10h], rbp
 * 00000001C00463B7: mov     [rax+18h], rsi
 * 00000001C00463BB: mov     [rax+20h], rdi
 * 00000001C00463BF: push    r13
 * 00000001C00463C1: push    r14
 * 00000001C00463C3: push    r15
 * 00000001C00463C5: sub     rsp, 40h
 * 00000001C00463C9: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00463D1: lea     r13, aNull; "NULL"
 * 00000001C00463D8: mov     r14, rcx
 * 00000001C00463DB: xor     r15d, r15d
 * 00000001C00463DE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00463E5: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00463E9: movzx   ebp, r9w
 * 00000001C00463ED: mov     sil, dl
 * 00000001C00463F0: mov     eax, [rcx+2Ch]
 * 00000001C00463F3: test    al, 1
 * 00000001C00463F5: jz      short loc_1C0046457
 * 00000001C00463F7: cmp     [rcx+29h], dl
 * 00000001C00463FA: jb      short loc_1C0046457
 * 00000001C00463FC: test    rdi, rdi
 * 00000001C00463FF: jz      short loc_1C0046413
 * 00000001C0046401: mov     r8, rbx
 * 00000001C0046404: inc     r8
 * 00000001C0046407: cmp     [rdi+r8*2], r15w
 * 00000001C004640C: jnz     short loc_1C0046404
 * 00000001C004640E: inc     r8
 * 00000001C0046411: jmp     short loc_1C0046419
 * 00000001C0046413: mov     r8d, 5
 * 00000001C0046419: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046420: add     r8, r8
 * 00000001C0046423: mov     rcx, [rcx+18h]
 * 00000001C0046427: test    rdi, rdi
 * 00000001C004642A: mov     [rsp+58h+var_28], r15
 * 00000001C004642F: mov     rdx, rdi
 * 00000001C0046432: cmovz   rdx, r13
 * 00000001C0046436: mov     [rsp+58h+var_30], r8
 * 00000001C004643B: mov     r8, [rsp+58h+arg_20]
 * 00000001C0046443: mov     [rsp+58h+var_38], rdx
 * 00000001C0046448: mov     edx, 2Bh ; '+'
 * 00000001C004644D: movzx   r9d, bp
 * 00000001C0046451: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046457: test    rdi, rdi
 * 00000001C004645A: jz      short loc_1C004646B
 * 00000001C004645C: inc     rbx
 * 00000001C004645F: cmp     [rdi+rbx*2], r15w
 * 00000001C0046464: jnz     short loc_1C004645C
 * 00000001C0046466: inc     rbx
 * 00000001C0046469: jmp     short loc_1C0046470
 * 00000001C004646B: mov     ebx, 5
 * 00000001C0046470: mov     r9, [rsp+58h+arg_20]
 * 00000001C0046478: lea     rax, [rbx+rbx]
 * 00000001C004647C: mov     [rsp+58h+var_20], r15
 * 00000001C0046481: test    rdi, rdi
 * 00000001C0046484: mov     [rsp+58h+var_28], rax
 * 00000001C0046489: mov     r8d, 1
 * 00000001C004648F: cmovz   rdi, r13
 * 00000001C0046493: movzx   edx, sil
 * 00000001C0046497: mov     [rsp+58h+var_30], rdi
 * 00000001C004649C: mov     rcx, r14
 * 00000001C004649F: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00464A4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00464AA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00464AF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00464B4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00464B9: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00464BE: add     rsp, 40h
 * 00000001C00464C2: pop     r15
 * 00000001C00464C4: pop     r14
 * 00000001C00464C6: pop     r13
 * 00000001C00464C8: retn
 */
