/*
 * XREFs of SmStoreResize @ 0x14079C5B8
 * Callers:
 *     SmcStoreResize @ 0x14079FEA0 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401AA900 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14079C468 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14079C5B8
 * Reason: Hex-Rays returned no pseudocode for 0x14079C5B8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014079C5B8: mov     [rsp-8+arg_0], rbx
 * 000000014079C5BD: push    rbp
 * 000000014079C5BE: mov     rbp, rsp
 * 000000014079C5C1: sub     rsp, 60h
 * 000000014079C5C5: xor     eax, eax
 * 000000014079C5C7: mov     [rbp+var_20], r8
 * 000000014079C5CB: mov     [rbp+SystemInformation], rax
 * 000000014079C5CF: mov     rbx, r9
 * 000000014079C5D2: mov     [rbp+var_8], rax
 * 000000014079C5D6: mov     r9d, 18h
 * 000000014079C5DC: lea     rax, [rbp+var_30]
 * 000000014079C5E0: mov     dword ptr [rbp+SystemInformation], 1
 * 000000014079C5E7: mov     [rbp+var_10], rax
 * 000000014079C5EB: xor     eax, eax
 * 000000014079C5ED: neg     [rbp+arg_20]
 * 000000014079C5F0: mov     [rbp+var_30], rax
 * 000000014079C5F4: mov     [rbp+var_28], rax
 * 000000014079C5F8: sbb     eax, eax
 * 000000014079C5FA: and     eax, 100h
 * 000000014079C5FF: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 000000014079C606: add     eax, 6
 * 000000014079C609: mov     dword ptr [rbp+var_8], r9d
 * 000000014079C60D: mov     dword ptr [rbp+var_30], eax
 * 000000014079C610: mov     eax, [rbx]
 * 000000014079C612: mov     dword ptr [rbp+var_28], eax
 * 000000014079C615: mov     dword ptr [rbp+var_30+4], edx
 * 000000014079C618: test    ecx, ecx
 * 000000014079C61A: jnz     short loc_14079C641
 * 000000014079C61C: mov     rcx, cs:DeviceObject; DeviceObject
 * 000000014079C623: lea     rax, [rbp+arg_10]
 * 000000014079C627: mov     [rsp+60h+var_38], rax; __int64
 * 000000014079C62C: lea     r8, [rbp+var_30]
 * 000000014079C630: mov     edx, 2281CCh
 * 000000014079C635: mov     [rsp+60h+var_40], r9d; int
 * 000000014079C63A: call    SmStorePhysicalRequestIssue
 * 000000014079C63F: jmp     short loc_14079C657
 * 000000014079C641: cmp     ecx, 1
 * 000000014079C644: jnz     short loc_14079C660
 * 000000014079C646: mov     r8d, r9d; SystemInformationLength
 * 000000014079C649: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014079C64D: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 000000014079C652: call    ZwSetSystemInformation
 * 000000014079C657: mov     ecx, eax
 * 000000014079C659: mov     eax, dword ptr [rbp+var_28]
 * 000000014079C65C: mov     [rbx], eax
 * 000000014079C65E: jmp     short loc_14079C665
 * 000000014079C660: mov     ecx, 0C000000Dh
 * 000000014079C665: mov     eax, ecx
 * 000000014079C667: mov     rbx, [rsp+60h+arg_0]
 * 000000014079C66C: add     rsp, 60h
 * 000000014079C670: pop     rbp
 * 000000014079C671: retn
 */
