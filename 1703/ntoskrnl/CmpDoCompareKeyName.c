/*
 * XREFs of CmpDoCompareKeyName @ 0x1404D2F90
 * Callers:
 *     CmpFindSubKeyByHashWithStatus @ 0x1404D2E60 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpSelectLeaf @ 0x140574238 (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 */

/*
 * Hex-Rays decompilation failed for CmpDoCompareKeyName @ 0x1404D2F90
 * Reason: Hex-Rays returned no pseudocode for 0x1404D2F90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404D2F90: mov     [rsp+arg_8], rbx
 * 00000001404D2F95: push    rdi
 * 00000001404D2F96: sub     rsp, 30h
 * 00000001404D2F9A: xor     eax, eax
 * 00000001404D2F9C: mov     [rsp+38h+arg_0], 0FFFFFFFFh
 * 00000001404D2FA4: mov     r9d, r8d
 * 00000001404D2FA7: mov     [rsp+38h+arg_4], eax
 * 00000001404D2FAB: mov     rax, [rcx+8]
 * 00000001404D2FAF: lea     r8, [rsp+38h+arg_0]
 * 00000001404D2FB4: mov     rbx, rdx
 * 00000001404D2FB7: mov     rdi, rcx
 * 00000001404D2FBA: mov     edx, r9d
 * 00000001404D2FBD: call    _guard_dispatch_icall
 * 00000001404D2FC2: mov     r9, rax
 * 00000001404D2FC5: test    rax, rax
 * 00000001404D2FC8: jz      short loc_1404D3020
 * 00000001404D2FCA: test    byte ptr [rax+2], 20h
 * 00000001404D2FCE: mov     rcx, rbx; String1
 * 00000001404D2FD1: jz      loc_14062A8DA
 * 00000001404D2FD7: movzx   r8d, word ptr [rax+48h]
 * 00000001404D2FDC: lea     rdx, [rax+4Ch]
 * 00000001404D2FE0: xor     r9d, r9d
 * 00000001404D2FE3: call    CmpCompareCompressedName
 * 00000001404D2FE8: mov     ebx, eax
 * 00000001404D2FEA: lea     rdx, [rsp+38h+arg_0]
 * 00000001404D2FEF: mov     rax, [rdi+10h]
 * 00000001404D2FF3: mov     rcx, rdi
 * 00000001404D2FF6: call    _guard_dispatch_icall
 * 00000001404D2FFB: test    ebx, ebx
 * 00000001404D2FFD: jz      short loc_1404D3013
 * 00000001404D2FFF: sar     ebx, 1Fh
 * 00000001404D3002: and     ebx, 0FFFFFFFEh
 * 00000001404D3005: lea     eax, [rbx+1]
 * 00000001404D3008: mov     rbx, [rsp+38h+arg_8]
 * 00000001404D300D: add     rsp, 30h
 * 00000001404D3011: pop     rdi
 * 00000001404D3012: retn
 * 00000001404D3013: xor     eax, eax
 * 00000001404D3015: mov     rbx, [rsp+38h+arg_8]
 * 00000001404D301A: add     rsp, 30h
 * 00000001404D301E: pop     rdi
 * 00000001404D301F: retn
 * 00000001404D3020: mov     eax, 2
 * 00000001404D3025: jmp     short loc_1404D3008
 * 000000014062A8DA: add     rax, 4Ch ; 'L'
 * 000000014062A8DE: lea     rdx, [rsp+38h+String2]; String2
 * 000000014062A8E3: mov     [rsp+38h+String2.Buffer], rax
 * 000000014062A8E8: mov     r8b, 1; CaseInSensitive
 * 000000014062A8EB: movzx   eax, word ptr [r9+48h]
 * 000000014062A8F0: mov     [rsp+38h+String2.Length], ax
 * 000000014062A8F5: mov     [rsp+38h+String2.MaximumLength], ax
 * 000000014062A8FA: call    RtlCompareUnicodeString
 * 000000014062A8FF: nop
 * 000000014062A900: jmp     loc_1404D2FE8
 */
