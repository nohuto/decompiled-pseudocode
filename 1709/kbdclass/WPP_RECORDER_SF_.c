/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00053A0
 * Callers:
 *     KeyboardClassRead @ 0x1C0001520 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C00016A0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C00018B0 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002400 (KbdInitializeDataQueue.c)
 *     KeyboardClassCleanup @ 0x1C0002800 (KeyboardClassCleanup.c)
 *     KeyboardClassFlush @ 0x1C0004430 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C0004A20 (KeyboardClassServiceCallback.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000C550 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6F0 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000C8D0 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000CB40 (KbdEnableDisablePort.c)
 *     KbdCreateClassObject @ 0x1C000CC80 (KbdCreateClassObject.c)
 *     KbdSendConnectRequest @ 0x1C000E2F4 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00053A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00053A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00053A0: mov     [rsp+arg_0], rbx
 * 00000001C00053A5: mov     [rsp+arg_8], rbp
 * 00000001C00053AA: mov     [rsp+arg_10], rsi
 * 00000001C00053AF: push    rdi
 * 00000001C00053B0: push    r14
 * 00000001C00053B2: push    r15
 * 00000001C00053B4: sub     rsp, 30h
 * 00000001C00053B8: mov     r14d, r8d
 * 00000001C00053BB: movzx   ebp, r9w
 * 00000001C00053BF: mov     edi, r8d
 * 00000001C00053C2: mov     sil, dl
 * 00000001C00053C5: shr     rdi, 10h
 * 00000001C00053C9: mov     r15, rcx
 * 00000001C00053CC: lea     ebx, [r14-1]
 * 00000001C00053D0: mov     r10d, ebx
 * 00000001C00053D3: and     ebx, 1Fh
 * 00000001C00053D6: shr     r10, 5
 * 00000001C00053DA: lea     rax, [rdi+rdi*4]
 * 00000001C00053DE: and     r10d, 7FFh
 * 00000001C00053E5: lea     r11, [r10+rax*4]
 * 00000001C00053E9: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00053F0: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00053F5: bt      eax, ebx
 * 00000001C00053F8: jnb     short loc_1C0005430
 * 00000001C00053FA: lea     rcx, [rdi+rdi*4]
 * 00000001C00053FE: add     rcx, rcx
 * 00000001C0005401: cmp     [r10+rcx*8+29h], dl
 * 00000001C0005406: jb      short loc_1C0005430
 * 00000001C0005408: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000540F: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005416: and     [rsp+48h+var_28], 0
 * 00000001C000541C: mov     edx, 2Bh ; '+'
 * 00000001C0005421: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0005426: movzx   r9d, r9w
 * 00000001C000542A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005430: and     [rsp+48h+var_20], 0
 * 00000001C0005436: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000543D: mov     r8d, r14d
 * 00000001C0005440: movzx   edx, sil
 * 00000001C0005444: mov     rcx, r15
 * 00000001C0005447: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000544C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005452: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005457: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000545C: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005461: add     rsp, 30h
 * 00000001C0005465: pop     r15
 * 00000001C0005467: pop     r14
 * 00000001C0005469: pop     rdi
 * 00000001C000546A: retn
 */
