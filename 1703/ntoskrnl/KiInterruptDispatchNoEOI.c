/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401837C0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401837C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401837C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401837C0: mov     rdx, rsp
 * 00000001401837C3: mov     rcx, gs:6598h
 * 00000001401837CC: lea     rax, [rcx-6000h]
 * 00000001401837D3: cmp     rax, rsp
 * 00000001401837D6: ja      short loc_1401837DD
 * 00000001401837D8: cmp     rsp, rcx
 * 00000001401837DB: jb      short loc_1401837E9
 * 00000001401837DD: cmp     cs:KiBugCheckActive, 0
 * 00000001401837E4: jnz     short loc_1401837E9
 * 00000001401837E6: mov     rsp, rcx
 * 00000001401837E9: sub     rsp, 20h
 * 00000001401837ED: mov     [rsp+20h+var_10], rdx
 * 00000001401837F2: call    KiInterruptSubDispatchNoLock
 * 00000001401837F7: mov     rsp, [rsp+20h+var_10]
 * 00000001401837FC: mov     rcx, gs:20h
 * 0000000140183805: cmp     byte ptr [rcx+20h], 1
 * 0000000140183809: ja      short loc_14018387F
 * 000000014018380B: rdtsc
 * 000000014018380D: shl     rdx, 20h
 * 0000000140183811: or      rax, rdx
 * 0000000140183814: sub     rax, [rcx+5BC0h]
 * 000000014018381B: add     [rcx+5C78h], rax
 * 0000000140183822: add     [rcx+5BC0h], rax
 * 0000000140183829: mov     r8, rax
 * 000000014018382C: mov     rax, [rcx+8]
 * 0000000140183830: test    byte ptr [rax+2], 32h
 * 0000000140183834: jz      short loc_140183849
 * 0000000140183836: xor     edx, edx
 * 0000000140183838: call    KiBeginThreadAccountingPeriod
 * 000000014018383D: mov     rcx, gs:20h
 * 0000000140183846: inc     byte ptr [rcx+20h]
 * 0000000140183849: mov     dl, [rcx+6]
 * 000000014018384C: and     byte ptr [rcx+6], 0
 * 0000000140183850: cmp     byte ptr [rcx+7], 0
 * 0000000140183854: jnz     short loc_14018387F
 * 0000000140183856: test    dl, dl
 * 0000000140183858: jz      short loc_14018387F
 * 000000014018385A: cmp     byte ptr [rbp-57h], 2
 * 000000014018385E: jnb     short loc_14018386B
 * 0000000140183860: and     byte ptr [rcx+20h], 0
 * 0000000140183864: call    KiDpcInterruptBypass
 * 0000000140183869: jmp     short loc_140183882
 * 000000014018386B: mov     ecx, 2
 * 0000000140183870: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140183876: mov     rcx, gs:20h
 * 000000014018387F: dec     byte ptr [rcx+20h]
 * 0000000140183882: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140183886: mov     cr8, rcx
 * 000000014018388A: mov     rsi, [rbp+0D0h]
 * 0000000140183891: test    byte ptr [rbp+0F0h], 1
 * 0000000140183898: jz      loc_1401839AE
 * 000000014018389E: mov     rcx, gs:188h
 * 00000001401838A7: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401838AE: jz      short loc_1401838C9
 * 00000001401838B0: mov     ecx, 1
 * 00000001401838B5: mov     cr8, rcx
 * 00000001401838B9: sti
 * 00000001401838BA: call    KiInitiateUserApc
 * 00000001401838BF: cli
 * 00000001401838C0: mov     ecx, 0
 * 00000001401838C5: mov     cr8, rcx
 * 00000001401838C9: mov     rcx, gs:188h
 * 00000001401838D2: test    dword ptr [rcx], 8000000h
 * 00000001401838D8: jz      short loc_1401838DF
 * 00000001401838DA: call    KiRestoreSetContextState
 * 00000001401838DF: mov     rcx, gs:188h
 * 00000001401838E8: test    dword ptr [rcx], 40010000h
 * 00000001401838EE: jz      short loc_140183904
 * 00000001401838F0: test    byte ptr [rcx+2], 1
 * 00000001401838F4: jz      short loc_140183904
 * 00000001401838F6: call    KiCopyCounters
 * 00000001401838FB: mov     rcx, gs:188h
 * 0000000140183904: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183908: cmp     word ptr [rbp+80h], 0
 * 0000000140183910: jz      short loc_140183917
 * 0000000140183912: call    KiRestoreDebugRegisterState
 * 0000000140183917: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018391B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014018391F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140183923: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140183927: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018392B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014018392F: mov     r11, [rbp-20h]
 * 0000000140183933: mov     r10, [rbp-28h]
 * 0000000140183937: mov     r9, [rbp-30h]
 * 000000014018393B: mov     r8, [rbp-38h]
 * 000000014018393F: movzx   eax, byte ptr gs:27Dh
 * 0000000140183948: cmp     gs:27Ah, al
 * 0000000140183950: jz      short loc_140183963
 * 0000000140183952: mov     gs:27Ah, al
 * 000000014018395A: mov     ecx, 48h ; 'H'
 * 000000014018395F: xor     edx, edx
 * 0000000140183961: wrmsr
 * 0000000140183963: btr     word ptr gs:278h, 2
 * 000000014018396E: jnb     short loc_14018397E
 * 0000000140183970: mov     eax, 1
 * 0000000140183975: xor     edx, edx
 * 0000000140183977: mov     ecx, 49h ; 'I'
 * 000000014018397C: wrmsr
 * 000000014018397E: mov     rdx, [rbp-40h]
 * 0000000140183982: mov     rcx, [rbp-48h]
 * 0000000140183986: mov     rax, [rbp-50h]
 * 000000014018398A: mov     rsp, rbp
 * 000000014018398D: mov     rbp, [rbp+0D8h]
 * 0000000140183994: add     rsp, 0E8h
 * 000000014018399B: test    cs:KiKvaShadow, 1
 * 00000001401839A2: jz      short loc_1401839A9
 * 00000001401839A4: jmp     KiKernelExit
 * 00000001401839A9: swapgs
 * 00000001401839AC: iretq
 * 00000001401839AE: ldmxcsr dword ptr [rbp-54h]
 * 00000001401839B2: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401839B6: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401839BA: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401839BE: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401839C2: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401839C6: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401839CA: mov     r11, [rbp-20h]
 * 00000001401839CE: mov     r10, [rbp-28h]
 * 00000001401839D2: mov     r9, [rbp-30h]
 * 00000001401839D6: mov     r8, [rbp-38h]
 * 00000001401839DA: mov     rdx, [rbp-40h]
 * 00000001401839DE: mov     rcx, [rbp-48h]
 * 00000001401839E2: mov     rax, [rbp-50h]
 * 00000001401839E6: mov     rsp, rbp
 * 00000001401839E9: mov     rbp, [rbp+0D8h]
 * 00000001401839F0: add     rsp, 0E8h
 * 00000001401839F7: iretq
 */
