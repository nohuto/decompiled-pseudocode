/*
 * XREFs of sub_1800865E8 @ 0x1800865E8
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x1800A5E70 (ZwSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800865E8 @ 0x1800865E8
 * Reason: Hex-Rays returned no pseudocode for 0x1800865E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800865E8: test    rcx, rcx
 * 00000001800865EB: jnz     short loc_1800865EE
 * 00000001800865ED: retn
 * 00000001800865EE: mov     [rsp+arg_0], rcx
 * 00000001800865F3: push    rdi
 * 00000001800865F4: sub     rsp, 20h
 * 00000001800865F8: mov     r9d, 8
 * 00000001800865FE: lea     r8, [rsp+28h+arg_0]
 * 0000000180086603: mov     rdi, 0FFFFFFFFFFFFFFFEh
 * 000000018008660A: mov     rcx, rdi
 * 000000018008660D: lea     edx, [r9-3]
 * 0000000180086611: call    ZwSetInformationThread
 * 0000000180086616: and     [rsp+28h+arg_10], 0
 * 000000018008661B: lea     r9d, [rdi+6]
 * 000000018008661F: lea     r8, [rsp+28h+arg_10]
 * 0000000180086624: mov     rcx, rdi
 * 0000000180086627: lea     edx, [rdi+14h]
 * 000000018008662A: call    ZwSetInformationThread
 * 000000018008662F: mov     rcx, [rsp+28h+arg_0]
 * 0000000180086634: lea     r9d, [rdi+4]
 * 0000000180086638: xor     eax, eax
 * 000000018008663A: lea     r8, [rsp+28h+arg_8]
 * 000000018008663F: lea     edx, [rdi+6]
 * 0000000180086642: mov     [rsp+28h+arg_8], ax
 * 0000000180086647: call    ZwSetInformationObject
 * 000000018008664C: mov     rcx, [rsp+28h+arg_0]
 * 0000000180086651: call    ZwClose
 * 0000000180086656: and     [rsp+28h+arg_0], 0
 * 000000018008665C: lea     r9d, [rdi+0Ah]
 * 0000000180086660: lea     r8, [rsp+28h+arg_0]
 * 0000000180086665: mov     rcx, rdi
 * 0000000180086668: lea     edx, [rdi+7]
 * 000000018008666B: call    ZwSetInformationThread
 * 0000000180086670: add     rsp, 20h
 * 0000000180086674: pop     rdi
 * 0000000180086675: retn
 */
