/*
 * XREFs of KiSystemCall64Shadow @ 0x1402D1040
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x1402D1040 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x1402D1040
 * Reason: Hex-Rays returned no pseudocode for 0x1402D1040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402D1040: swapgs
 * 00000001402D1043: mov     gs:7010h, rsp
 * 00000001402D104C: mov     rsp, gs:7000h
 * 00000001402D1055: bt      dword ptr gs:7018h, 1
 * 00000001402D105F: jb      short loc_1402D1064
 * 00000001402D1061: mov     cr3, rsp
 * 00000001402D1064: mov     rsp, gs:7008h
 * 00000001402D106D: push    2Bh ; '+'
 * 00000001402D106F: push    qword ptr gs:7010h
 * 00000001402D1077: push    r11
 * 00000001402D1079: push    33h ; '3'
 * 00000001402D107B: push    rcx
 * 00000001402D107C: mov     rcx, r10
 * 00000001402D107F: sub     rsp, 8
 * 00000001402D1083: push    rbp
 * 00000001402D1084: sub     rsp, 158h
 * 00000001402D108B: lea     rbp, [rsp+190h+var_110]
 * 00000001402D1093: mov     [rbp+0C0h], rbx
 * 00000001402D109A: mov     [rbp+0C8h], rdi
 * 00000001402D10A1: mov     [rbp+0D0h], rsi
 * 00000001402D10A8: jmp     short loc_1402D10D3
 * 00000001402D10AA: mov     [rbx+90h], rsp
 * 00000001402D10B1: mov     edi, eax
 * 00000001402D10B3: shr     edi, 7
 * 00000001402D10B6: and     edi, 20h
 * 00000001402D10B9: and     eax, 0FFFh
 * 00000001402D10BE: lea     r10, KeServiceDescriptorTable
 * 00000001402D10C5: lea     r11, KeServiceDescriptorTableShadow
 * 00000001402D10CC: test    dword ptr [rbx+78h], 80h
 * 00000001402D10D3: mov     [rbp-50h], rax
 * 00000001402D10D7: mov     [rbp-48h], rcx
 * 00000001402D10DB: mov     [rbp-40h], rdx
 * 00000001402D10DF: mov     rcx, gs:188h
 * 00000001402D10E8: mov     rcx, [rcx+220h]
 * 00000001402D10EF: mov     rcx, [rcx+838h]
 * 00000001402D10F6: mov     gs:270h, rcx
 * 00000001402D10FF: movzx   eax, byte ptr gs:27Bh
 * 00000001402D1108: cmp     gs:27Ah, al
 * 00000001402D1110: jz      short loc_1402D1123
 * 00000001402D1112: mov     gs:27Ah, al
 * 00000001402D111A: mov     ecx, 48h ; 'H'
 * 00000001402D111F: xor     edx, edx
 * 00000001402D1121: wrmsr
 * 00000001402D1123: movzx   edx, byte ptr gs:278h
 * 00000001402D112C: test    edx, 8
 * 00000001402D1132: jz      short loc_1402D1147
 * 00000001402D1134: mov     eax, 1
 * 00000001402D1139: xor     edx, edx
 * 00000001402D113B: mov     ecx, 49h ; 'I'
 * 00000001402D1140: wrmsr
 * 00000001402D1142: jmp     loc_1402D1285
 * 00000001402D1147: test    edx, 2
 * 00000001402D114D: jz      loc_1402D1282
 * 00000001402D1153: test    byte ptr gs:279h, 4
 * 00000001402D115C: jnz     loc_1402D1282
 * 00000001402D1162: call    loc_1402D1275
 * 00000001402D1167: add     rsp, 8
 * 00000001402D116B: call    loc_1402D127E
 * 00000001402D1170: add     rsp, 8
 * 00000001402D1174: call    loc_1402D1167
 * 00000001402D1179: add     rsp, 8
 * 00000001402D117D: call    loc_1402D1170
 * 00000001402D1182: add     rsp, 8
 * 00000001402D1186: call    loc_1402D1179
 * 00000001402D118B: add     rsp, 8
 * 00000001402D118F: call    loc_1402D1182
 * 00000001402D1194: add     rsp, 8
 * 00000001402D1198: call    loc_1402D118B
 * 00000001402D119D: add     rsp, 8
 * 00000001402D11A1: call    loc_1402D1194
 * 00000001402D11A6: add     rsp, 8
 * 00000001402D11AA: call    loc_1402D119D
 * 00000001402D11AF: add     rsp, 8
 * 00000001402D11B3: call    loc_1402D11A6
 * 00000001402D11B8: add     rsp, 8
 * 00000001402D11BC: call    loc_1402D11AF
 * 00000001402D11C1: add     rsp, 8
 * 00000001402D11C5: call    loc_1402D11B8
 * 00000001402D11CA: add     rsp, 8
 * 00000001402D11CE: call    loc_1402D11C1
 * 00000001402D11D3: add     rsp, 8
 * 00000001402D11D7: call    loc_1402D11CA
 * 00000001402D11DC: add     rsp, 8
 * 00000001402D11E0: call    loc_1402D11D3
 * 00000001402D11E5: add     rsp, 8
 * 00000001402D11E9: call    loc_1402D11DC
 * 00000001402D11EE: add     rsp, 8
 * 00000001402D11F2: call    loc_1402D11E5
 * 00000001402D11F7: add     rsp, 8
 * 00000001402D11FB: call    loc_1402D11EE
 * 00000001402D1200: add     rsp, 8
 * 00000001402D1204: call    loc_1402D11F7
 * 00000001402D1209: add     rsp, 8
 * 00000001402D120D: call    loc_1402D1200
 * 00000001402D1212: add     rsp, 8
 * 00000001402D1216: call    loc_1402D1209
 * 00000001402D121B: add     rsp, 8
 * 00000001402D121F: call    loc_1402D1212
 * 00000001402D1224: add     rsp, 8
 * 00000001402D1228: call    loc_1402D121B
 * 00000001402D122D: add     rsp, 8
 * 00000001402D1231: call    loc_1402D1224
 * 00000001402D1236: add     rsp, 8
 * 00000001402D123A: call    loc_1402D122D
 * 00000001402D123F: add     rsp, 8
 * 00000001402D1243: call    loc_1402D1236
 * 00000001402D1248: add     rsp, 8
 * 00000001402D124C: call    loc_1402D123F
 * 00000001402D1251: add     rsp, 8
 * 00000001402D1255: call    loc_1402D1248
 * 00000001402D125A: add     rsp, 8
 * 00000001402D125E: call    loc_1402D1251
 * 00000001402D1263: add     rsp, 8
 * 00000001402D1267: call    loc_1402D125A
 * 00000001402D126C: add     rsp, 8
 * 00000001402D1270: call    loc_1402D1263
 * 00000001402D1275: add     rsp, 8
 * 00000001402D1279: call    loc_1402D126C
 * 00000001402D127E: add     rsp, 8
 * 00000001402D1282: lfence
 * 00000001402D1285: jmp     KiSystemServiceUser
 * 00000001402D128A: retn
 */
