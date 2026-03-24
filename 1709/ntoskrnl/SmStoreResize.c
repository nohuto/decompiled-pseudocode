/*
 * XREFs of SmStoreResize @ 0x14073936C
 * Callers:
 *     SmcStoreResize @ 0x14073CE94 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x140180CC0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14073921C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14073936C
 * Reason: Hex-Rays returned no pseudocode for 0x14073936C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073936C: mov     [rsp-8+arg_0], rbx
 * 0000000140739371: push    rbp
 * 0000000140739372: mov     rbp, rsp
 * 0000000140739375: sub     rsp, 60h
 * 0000000140739379: xor     eax, eax
 * 000000014073937B: mov     [rbp+var_20], r8
 * 000000014073937F: mov     [rbp+SystemInformation], rax
 * 0000000140739383: mov     r10d, ecx
 * 0000000140739386: mov     [rbp+var_8], rax
 * 000000014073938A: mov     rbx, r9
 * 000000014073938D: lea     rax, [rbp+var_30]
 * 0000000140739391: mov     dword ptr [rbp+SystemInformation], 1
 * 0000000140739398: mov     [rbp+var_10], rax
 * 000000014073939C: mov     r9d, 18h
 * 00000001407393A2: xor     eax, eax
 * 00000001407393A4: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001407393AB: mov     [rbp+var_30], rax
 * 00000001407393AF: mov     ecx, eax
 * 00000001407393B1: mov     [rbp+var_28], rax
 * 00000001407393B5: and     ecx, 0FFFFFF06h
 * 00000001407393BB: or      ecx, 6
 * 00000001407393BE: mov     dword ptr [rbp+var_8], r9d
 * 00000001407393C2: neg     [rbp+arg_20]
 * 00000001407393C5: mov     dword ptr [rbp+var_30+4], edx
 * 00000001407393C8: sbb     eax, eax
 * 00000001407393CA: btr     ecx, 8
 * 00000001407393CE: and     eax, 100h
 * 00000001407393D3: or      eax, ecx
 * 00000001407393D5: mov     dword ptr [rbp+var_30], eax
 * 00000001407393D8: mov     eax, [rbx]
 * 00000001407393DA: mov     dword ptr [rbp+var_28], eax
 * 00000001407393DD: test    r10d, r10d
 * 00000001407393E0: jnz     short loc_140739407
 * 00000001407393E2: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001407393E9: lea     rax, [rbp+arg_10]
 * 00000001407393ED: mov     [rsp+60h+var_38], rax; __int64
 * 00000001407393F2: lea     r8, [rbp+var_30]
 * 00000001407393F6: mov     edx, 2281CCh
 * 00000001407393FB: mov     [rsp+60h+var_40], r9d; int
 * 0000000140739400: call    SmStorePhysicalRequestIssue
 * 0000000140739405: jmp     short loc_14073941D
 * 0000000140739407: cmp     r10d, 1
 * 000000014073940B: jnz     short loc_140739426
 * 000000014073940D: mov     r8d, r9d; SystemInformationLength
 * 0000000140739410: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 0000000140739414: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 0000000140739418: call    ZwSetSystemInformation
 * 000000014073941D: mov     ecx, eax
 * 000000014073941F: mov     eax, dword ptr [rbp+var_28]
 * 0000000140739422: mov     [rbx], eax
 * 0000000140739424: jmp     short loc_14073942B
 * 0000000140739426: mov     ecx, 0C000000Dh
 * 000000014073942B: mov     eax, ecx
 * 000000014073942D: mov     rbx, [rsp+60h+arg_0]
 * 0000000140739432: add     rsp, 60h
 * 0000000140739436: pop     rbp
 * 0000000140739437: retn
 */
