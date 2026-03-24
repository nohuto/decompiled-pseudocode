/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0004500
 * Callers:
 *     MouseClassCreate @ 0x1C0001010 (MouseClassCreate.c)
 *     MouseClassClose @ 0x1C0001360 (MouseClassClose.c)
 *     MouseClassCleanup @ 0x1C0001480 (MouseClassCleanup.c)
 *     MouInitializeDataQueue @ 0x1C0002424 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0002750 (MouseClassFlush.c)
 *     MouseClassRead @ 0x1C0003300 (MouseClassRead.c)
 *     MouseClassServiceCallback @ 0x1C00037C0 (MouseClassServiceCallback.c)
 *     MouEnableDisablePort @ 0x1C000B010 (MouEnableDisablePort.c)
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000B8B4 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000B9E0 (MouSendConnectRequest.c)
 *     MouseClassDeviceControl @ 0x1C000BF90 (MouseClassDeviceControl.c)
 *     MouseClassFindMorePorts @ 0x1C000C3D0 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000E080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00017D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0004500
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004500: mov     [rsp+arg_0], rbx
 * 00000001C0004505: mov     [rsp+arg_8], rbp
 * 00000001C000450A: mov     [rsp+arg_10], rsi
 * 00000001C000450F: push    rdi
 * 00000001C0004510: push    r14
 * 00000001C0004512: push    r15
 * 00000001C0004514: sub     rsp, 30h
 * 00000001C0004518: mov     r14d, r8d
 * 00000001C000451B: movzx   ebp, r9w
 * 00000001C000451F: mov     edi, r8d
 * 00000001C0004522: mov     sil, dl
 * 00000001C0004525: shr     rdi, 10h
 * 00000001C0004529: mov     r15, rcx
 * 00000001C000452C: lea     ebx, [r14-1]
 * 00000001C0004530: mov     r10d, ebx
 * 00000001C0004533: and     ebx, 1Fh
 * 00000001C0004536: shr     r10, 5
 * 00000001C000453A: lea     rax, [rdi+rdi*4]
 * 00000001C000453E: and     r10d, 7FFh
 * 00000001C0004545: lea     r11, [r10+rax*4]
 * 00000001C0004549: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0004550: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0004555: bt      eax, ebx
 * 00000001C0004558: jnb     short loc_1C0004590
 * 00000001C000455A: lea     rcx, [rdi+rdi*4]
 * 00000001C000455E: add     rcx, rcx
 * 00000001C0004561: cmp     [r10+rcx*8+29h], dl
 * 00000001C0004566: jb      short loc_1C0004590
 * 00000001C0004568: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000456F: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0004576: and     [rsp+48h+var_28], 0
 * 00000001C000457C: mov     edx, 2Bh ; '+'
 * 00000001C0004581: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0004586: movzx   r9d, r9w
 * 00000001C000458A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004590: and     [rsp+48h+var_20], 0
 * 00000001C0004596: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C000459D: mov     r8d, r14d
 * 00000001C00045A0: movzx   edx, sil
 * 00000001C00045A4: mov     rcx, r15
 * 00000001C00045A7: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00045AC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00045B2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00045B7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00045BC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00045C1: add     rsp, 30h
 * 00000001C00045C5: pop     r15
 * 00000001C00045C7: pop     r14
 * 00000001C00045C9: pop     rdi
 * 00000001C00045CA: retn
 */
