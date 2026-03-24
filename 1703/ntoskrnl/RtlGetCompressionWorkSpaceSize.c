/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x14012D430
 * Callers:
 *     SmDecompressBuffer @ 0x14012D2C4 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14012D4E0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140168B30 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x140257FA8 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x14012D430
 * Reason: Hex-Rays returned no pseudocode for 0x14012D430
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014012D430: movzx   eax, cx
 * 000000014012D433: mov     r9d, 0FFh
 * 000000014012D439: and     ax, r9w
 * 000000014012D43D: cmp     ax, 2
 * 000000014012D441: jb      short loc_14012D46C
 * 000000014012D443: cmp     ax, 4; switch with an invalid jump table
 * 000000014012D447: ja      short def_14012D461; jumptable 000000014012D461 default case
 * 000000014012D449: movzx   eax, ax
 * 000000014012D44C: lea     r10, RtlWorkSpaceProcs
 * 000000014012D453: mov     r9d, 0FF00h
 * 000000014012D459: and     cx, r9w
 * 000000014012D45D: mov     rax, ds:(RtlWorkSpaceProcs - 14028C878h)[r10+rax*8]
 * 000000014012D461: jmp     _guard_dispatch_icall; switch jump
 * 000000014012D466: mov     eax, 0C000025Fh; jumptable 000000014012D461 default case
 * 000000014012D46B: retn
 * 000000014012D46C: mov     eax, 0C000000Dh
 * 000000014012D471: retn
 */
