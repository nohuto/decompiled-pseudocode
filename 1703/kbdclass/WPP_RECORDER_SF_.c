/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005460
 * Callers:
 *     KeyboardClassRead @ 0x1C0001520 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C00016A0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C00018B0 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002400 (KbdInitializeDataQueue.c)
 *     KeyboardClassCleanup @ 0x1C0002800 (KeyboardClassCleanup.c)
 *     KeyboardClassServiceCallback @ 0x1C00029C0 (KeyboardClassServiceCallback.c)
 *     KeyboardClassFlush @ 0x1C0004930 (KeyboardClassFlush.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000C550 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6F0 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000C8D0 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000CBB0 (KbdEnableDisablePort.c)
 *     KbdCreateClassObject @ 0x1C000CCF0 (KbdCreateClassObject.c)
 *     KbdSendConnectRequest @ 0x1C000E35C (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C000F030 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005460
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005460
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005460: mov     [rsp+arg_0], rbx
 * 00000001C0005465: mov     [rsp+arg_8], rbp
 * 00000001C000546A: mov     [rsp+arg_10], rsi
 * 00000001C000546F: push    rdi
 * 00000001C0005470: push    r14
 * 00000001C0005472: push    r15
 * 00000001C0005474: sub     rsp, 30h
 * 00000001C0005478: mov     r14d, r8d
 * 00000001C000547B: movzx   ebp, r9w
 * 00000001C000547F: mov     edi, r8d
 * 00000001C0005482: mov     sil, dl
 * 00000001C0005485: shr     rdi, 10h
 * 00000001C0005489: mov     r15, rcx
 * 00000001C000548C: lea     ebx, [r14-1]
 * 00000001C0005490: mov     r10d, ebx
 * 00000001C0005493: and     ebx, 1Fh
 * 00000001C0005496: shr     r10, 5
 * 00000001C000549A: lea     rax, [rdi+rdi*4]
 * 00000001C000549E: and     r10d, 7FFh
 * 00000001C00054A5: lea     r11, [r10+rax*4]
 * 00000001C00054A9: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00054B0: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00054B5: bt      eax, ebx
 * 00000001C00054B8: jnb     short loc_1C00054F0
 * 00000001C00054BA: lea     rcx, [rdi+rdi*4]
 * 00000001C00054BE: add     rcx, rcx
 * 00000001C00054C1: cmp     [r10+rcx*8+29h], dl
 * 00000001C00054C6: jb      short loc_1C00054F0
 * 00000001C00054C8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00054CF: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00054D6: and     [rsp+48h+var_28], 0
 * 00000001C00054DC: mov     edx, 2Bh ; '+'
 * 00000001C00054E1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00054E6: movzx   r9d, r9w
 * 00000001C00054EA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00054F0: and     [rsp+48h+var_20], 0
 * 00000001C00054F6: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00054FD: mov     r8d, r14d
 * 00000001C0005500: movzx   edx, sil
 * 00000001C0005504: mov     rcx, r15
 * 00000001C0005507: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000550C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005512: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005517: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000551C: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005521: add     rsp, 30h
 * 00000001C0005525: pop     r15
 * 00000001C0005527: pop     r14
 * 00000001C0005529: pop     rdi
 * 00000001C000552A: retn
 */
