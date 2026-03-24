/*
 * XREFs of SmStoreResize @ 0x1407012A4
 * Callers:
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401812E0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140701150 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1407012A4
 * Reason: Hex-Rays returned no pseudocode for 0x1407012A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407012A4: mov     [rsp-8+arg_0], rbx
 * 00000001407012A9: push    rbp
 * 00000001407012AA: mov     rbp, rsp
 * 00000001407012AD: sub     rsp, 60h
 * 00000001407012B1: xor     eax, eax
 * 00000001407012B3: mov     [rbp+var_20], r8
 * 00000001407012B7: mov     [rbp+SystemInformation], rax
 * 00000001407012BB: mov     r10d, ecx
 * 00000001407012BE: mov     [rbp+var_8], rax
 * 00000001407012C2: mov     rbx, r9
 * 00000001407012C5: lea     rax, [rbp+var_30]
 * 00000001407012C9: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001407012D0: mov     [rbp+var_10], rax
 * 00000001407012D4: mov     r9d, 18h
 * 00000001407012DA: xor     eax, eax
 * 00000001407012DC: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001407012E3: mov     [rbp+var_30], rax
 * 00000001407012E7: mov     ecx, eax
 * 00000001407012E9: mov     [rbp+var_28], rax
 * 00000001407012ED: and     ecx, 0FFFFFF06h
 * 00000001407012F3: or      ecx, 6
 * 00000001407012F6: mov     dword ptr [rbp+var_8], r9d
 * 00000001407012FA: neg     [rbp+arg_20]
 * 00000001407012FD: mov     dword ptr [rbp+var_30+4], edx
 * 0000000140701300: sbb     eax, eax
 * 0000000140701302: btr     ecx, 8
 * 0000000140701306: and     eax, 100h
 * 000000014070130B: or      eax, ecx
 * 000000014070130D: mov     dword ptr [rbp+var_30], eax
 * 0000000140701310: mov     eax, [rbx]
 * 0000000140701312: mov     dword ptr [rbp+var_28], eax
 * 0000000140701315: test    r10d, r10d
 * 0000000140701318: jnz     short loc_14070133F
 * 000000014070131A: mov     rcx, cs:DeviceObject; DeviceObject
 * 0000000140701321: lea     rax, [rbp+arg_10]
 * 0000000140701325: mov     [rsp+60h+var_38], rax; __int64
 * 000000014070132A: lea     r8, [rbp+var_30]
 * 000000014070132E: mov     edx, 2281CCh
 * 0000000140701333: mov     [rsp+60h+var_40], r9d; int
 * 0000000140701338: call    SmStorePhysicalRequestIssue
 * 000000014070133D: jmp     short loc_140701355
 * 000000014070133F: cmp     r10d, 1
 * 0000000140701343: jnz     short loc_14070135E
 * 0000000140701345: mov     r8d, r9d; SystemInformationLength
 * 0000000140701348: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014070134C: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 0000000140701350: call    ZwSetSystemInformation
 * 0000000140701355: mov     ecx, eax
 * 0000000140701357: mov     eax, dword ptr [rbp+var_28]
 * 000000014070135A: mov     [rbx], eax
 * 000000014070135C: jmp     short loc_140701363
 * 000000014070135E: mov     ecx, 0C000000Dh
 * 0000000140701363: mov     eax, ecx
 * 0000000140701365: mov     rbx, [rsp+60h+arg_0]
 * 000000014070136A: add     rsp, 60h
 * 000000014070136E: pop     rbp
 * 000000014070136F: retn
 */
