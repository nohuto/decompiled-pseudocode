/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005040
 * Callers:
 *     MouseClassCleanup @ 0x1C0001010 (MouseClassCleanup.c)
 *     MouseClassClose @ 0x1C0001160 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001280 (MouseClassCreate.c)
 *     MouseClassServiceCallback @ 0x1C00016C0 (MouseClassServiceCallback.c)
 *     MouseClassRead @ 0x1C0001D70 (MouseClassRead.c)
 *     MouInitializeDataQueue @ 0x1C0002690 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004500 (MouseClassFlush.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseClassFindMorePorts @ 0x1C000C180 (MouseClassFindMorePorts.c)
 *     MouseClassDeviceControl @ 0x1C000C570 (MouseClassDeviceControl.c)
 *     MouDeterminePortsServiced @ 0x1C000C7A0 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000C8B0 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000F4D0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005040
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005040: mov     [rsp+arg_0], rbx
 * 00000001C0005045: mov     [rsp+arg_8], rbp
 * 00000001C000504A: mov     [rsp+arg_10], rsi
 * 00000001C000504F: push    rdi
 * 00000001C0005050: push    r14
 * 00000001C0005052: push    r15
 * 00000001C0005054: sub     rsp, 30h
 * 00000001C0005058: mov     r14d, r8d
 * 00000001C000505B: movzx   ebp, r9w
 * 00000001C000505F: mov     edi, r8d
 * 00000001C0005062: mov     sil, dl
 * 00000001C0005065: shr     rdi, 10h
 * 00000001C0005069: mov     r15, rcx
 * 00000001C000506C: lea     ebx, [r14-1]
 * 00000001C0005070: mov     r10d, ebx
 * 00000001C0005073: and     ebx, 1Fh
 * 00000001C0005076: shr     r10, 5
 * 00000001C000507A: lea     rax, [rdi+rdi*4]
 * 00000001C000507E: and     r10d, 7FFh
 * 00000001C0005085: lea     r11, [r10+rax*4]
 * 00000001C0005089: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005090: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005095: bt      eax, ebx
 * 00000001C0005098: jnb     short loc_1C00050D0
 * 00000001C000509A: lea     rcx, [rdi+rdi*4]
 * 00000001C000509E: add     rcx, rcx
 * 00000001C00050A1: cmp     [r10+rcx*8+29h], dl
 * 00000001C00050A6: jb      short loc_1C00050D0
 * 00000001C00050A8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00050AF: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00050B6: and     [rsp+48h+var_28], 0
 * 00000001C00050BC: mov     edx, 2Bh ; '+'
 * 00000001C00050C1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00050C6: movzx   r9d, r9w
 * 00000001C00050CA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00050D0: and     [rsp+48h+var_20], 0
 * 00000001C00050D6: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00050DD: mov     r8d, r14d
 * 00000001C00050E0: movzx   edx, sil
 * 00000001C00050E4: mov     rcx, r15
 * 00000001C00050E7: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00050EC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00050F2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00050F7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00050FC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005101: add     rsp, 30h
 * 00000001C0005105: pop     r15
 * 00000001C0005107: pop     r14
 * 00000001C0005109: pop     rdi
 * 00000001C000510A: retn
 */
