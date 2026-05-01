/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x18030BCF8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x180258FB0 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x18030BCF8
 * Reason: Hex-Rays returned no pseudocode for 0x18030BCF8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018030BCF8: sub     rsp, 48h
 * 000000018030BCFC: mov     rax, [rcx+30h]
 * 000000018030BD00: xor     r8d, r8d
 * 000000018030BD03: test    rax, rax
 * 000000018030BD06: jz      short loc_18030BD45
 * 000000018030BD08: mov     rcx, [rcx+10h]
 * 000000018030BD0C: test    edx, edx
 * 000000018030BD0E: mov     [rsp+48h+arg_0], rax
 * 000000018030BD13: lea     edx, [r8+2]
 * 000000018030BD17: mov     eax, r8d
 * 000000018030BD1A: movzx   r9d, r8w
 * 000000018030BD1E: setnz   al
 * 000000018030BD21: lea     r8d, [rdx-1]
 * 000000018030BD25: mov     [rsp+48h+var_18], eax
 * 000000018030BD29: lea     rax, unk_18036369E
 * 000000018030BD30: mov     [rsp+48h+var_20], rax
 * 000000018030BD35: mov     [rsp+48h+var_28], dx
 * 000000018030BD3A: lea     rdx, [rsp+48h+arg_0]
 * 000000018030BD3F: call    cs:__imp_CoreUICallSend
 * 000000018030BD45: add     rsp, 48h
 * 000000018030BD49: retn
 */
