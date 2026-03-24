/*
 * XREFs of KiDpcInterrupt @ 0x1401B1140
 * Callers:
 *     KiDpcInterruptShadow @ 0x1402CFE80 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401B1140 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401B1C20 (KiDispatchInterrupt.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401B1140
 * Reason: Hex-Rays returned no pseudocode for 0x1401B1140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B1140: sub     rsp, 8
 * 00000001401B1144: push    rbp
 * 00000001401B1145: push    rsi
 * 00000001401B1146: sub     rsp, 150h
 * 00000001401B114D: lea     rbp, [rsp+80h]
 * 00000001401B1155: mov     [rbp+0E8h+var_13D], 0
 * 00000001401B1159: mov     [rbp+0E8h+var_138], rax
 * 00000001401B115D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B1161: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B1165: mov     [rbp+0E8h+var_120], r8
 * 00000001401B1169: mov     [rbp+0E8h+var_118], r9
 * 00000001401B116D: mov     [rbp+0E8h+var_110], r10
 * 00000001401B1171: mov     [rbp+0E8h+var_108], r11
 * 00000001401B1175: test    [rbp+0E8h+arg_0], 1
 * 00000001401B117C: jnz     short loc_1401B11AB
 * 00000001401B117E: lfence
 * 00000001401B1181: test    byte ptr gs:278h, 1
 * 00000001401B118A: jnz     short loc_1401B1194
 * 00000001401B118C: lfence
 * 00000001401B118F: jmp     loc_1401B137E
 * 00000001401B1194: movzx   eax, byte ptr gs:27Ah
 * 00000001401B119D: mov     ecx, 48h ; 'H'
 * 00000001401B11A2: xor     edx, edx
 * 00000001401B11A4: wrmsr
 * 00000001401B11A6: jmp     loc_1401B137E
 * 00000001401B11AB: test    cs:KiKvaShadow, 1
 * 00000001401B11B2: jnz     short loc_1401B11B7
 * 00000001401B11B4: swapgs
 * 00000001401B11B7: lfence
 * 00000001401B11BA: mov     r10, gs:188h
 * 00000001401B11C3: mov     rcx, gs:188h
 * 00000001401B11CC: mov     rcx, [rcx+220h]
 * 00000001401B11D3: mov     rcx, [rcx+838h]
 * 00000001401B11DA: mov     gs:270h, rcx
 * 00000001401B11E3: movzx   eax, byte ptr gs:27Bh
 * 00000001401B11EC: cmp     gs:27Ah, al
 * 00000001401B11F4: jz      short loc_1401B1207
 * 00000001401B11F6: mov     gs:27Ah, al
 * 00000001401B11FE: mov     ecx, 48h ; 'H'
 * 00000001401B1203: xor     edx, edx
 * 00000001401B1205: wrmsr
 * 00000001401B1207: movzx   edx, byte ptr gs:278h
 * 00000001401B1210: test    edx, 8
 * 00000001401B1216: jz      short loc_1401B122B
 * 00000001401B1218: mov     eax, 1
 * 00000001401B121D: xor     edx, edx
 * 00000001401B121F: mov     ecx, 49h ; 'I'
 * 00000001401B1224: wrmsr
 * 00000001401B1226: jmp     loc_1401B1369
 * 00000001401B122B: test    edx, 2
 * 00000001401B1231: jz      loc_1401B1366
 * 00000001401B1237: test    byte ptr gs:279h, 4
 * 00000001401B1240: jnz     loc_1401B1366
 * 00000001401B1246: call    loc_1401B1359
 * 00000001401B124B: add     rsp, 8
 * 00000001401B124F: call    loc_1401B1362
 * 00000001401B1254: add     rsp, 8
 * 00000001401B1258: call    loc_1401B124B
 * 00000001401B125D: add     rsp, 8
 * 00000001401B1261: call    loc_1401B1254
 * 00000001401B1266: add     rsp, 8
 * 00000001401B126A: call    loc_1401B125D
 * 00000001401B126F: add     rsp, 8
 * 00000001401B1273: call    loc_1401B1266
 * 00000001401B1278: add     rsp, 8
 * 00000001401B127C: call    loc_1401B126F
 * 00000001401B1281: add     rsp, 8
 * 00000001401B1285: call    loc_1401B1278
 * 00000001401B128A: add     rsp, 8
 * 00000001401B128E: call    loc_1401B1281
 * 00000001401B1293: add     rsp, 8
 * 00000001401B1297: call    loc_1401B128A
 * 00000001401B129C: add     rsp, 8
 * 00000001401B12A0: call    loc_1401B1293
 * 00000001401B12A5: add     rsp, 8
 * 00000001401B12A9: call    loc_1401B129C
 * 00000001401B12AE: add     rsp, 8
 * 00000001401B12B2: call    loc_1401B12A5
 * 00000001401B12B7: add     rsp, 8
 * 00000001401B12BB: call    loc_1401B12AE
 * 00000001401B12C0: add     rsp, 8
 * 00000001401B12C4: call    loc_1401B12B7
 * 00000001401B12C9: add     rsp, 8
 * 00000001401B12CD: call    loc_1401B12C0
 * 00000001401B12D2: add     rsp, 8
 * 00000001401B12D6: call    loc_1401B12C9
 * 00000001401B12DB: add     rsp, 8
 * 00000001401B12DF: call    loc_1401B12D2
 * 00000001401B12E4: add     rsp, 8
 * 00000001401B12E8: call    loc_1401B12DB
 * 00000001401B12ED: add     rsp, 8
 * 00000001401B12F1: call    loc_1401B12E4
 * 00000001401B12F6: add     rsp, 8
 * 00000001401B12FA: call    loc_1401B12ED
 * 00000001401B12FF: add     rsp, 8
 * 00000001401B1303: call    loc_1401B12F6
 * 00000001401B1308: add     rsp, 8
 * 00000001401B130C: call    loc_1401B12FF
 * 00000001401B1311: add     rsp, 8
 * 00000001401B1315: call    loc_1401B1308
 * 00000001401B131A: add     rsp, 8
 * 00000001401B131E: call    loc_1401B1311
 * 00000001401B1323: add     rsp, 8
 * 00000001401B1327: call    loc_1401B131A
 * 00000001401B132C: add     rsp, 8
 * 00000001401B1330: call    loc_1401B1323
 * 00000001401B1335: add     rsp, 8
 * 00000001401B1339: call    loc_1401B132C
 * 00000001401B133E: add     rsp, 8
 * 00000001401B1342: call    loc_1401B1335
 * 00000001401B1347: add     rsp, 8
 * 00000001401B134B: call    loc_1401B133E
 * 00000001401B1350: add     rsp, 8
 * 00000001401B1354: call    loc_1401B1347
 * 00000001401B1359: add     rsp, 8
 * 00000001401B135D: call    loc_1401B1350
 * 00000001401B1362: add     rsp, 8
 * 00000001401B1366: lfence
 * 00000001401B1369: test    byte ptr [r10+3], 3
 * 00000001401B136E: mov     [rbp+0E8h+var_68], 0
 * 00000001401B1377: jz      short loc_1401B137E
 * 00000001401B1379: call    KiSaveDebugRegisterState
 * 00000001401B137E: cld
 * 00000001401B137F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B1383: ldmxcsr dword ptr gs:180h
 * 00000001401B138C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B1390: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B1394: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B1398: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B139C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B13A0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B13A4: xor     esi, esi
 * 00000001401B13A6: inc     dword ptr gs:5D00h
 * 00000001401B13AE: mov     ecx, 2
 * 00000001401B13B3: mov     rax, cr8
 * 00000001401B13B7: mov     cr8, rcx
 * 00000001401B13BB: mov     [rbp+0E8h+var_13F], al
 * 00000001401B13BE: mov     rcx, rsi
 * 00000001401B13C1: call    HalPerformEndOfInterrupt_0
 * 00000001401B13C6: sti
 * 00000001401B13C7: cmp     byte ptr gs:187h, 0
 * 00000001401B13D0: jnz     short loc_1401B13E9
 * 00000001401B13D2: mov     al, [rbp+0E8h+var_13F]
 * 00000001401B13D5: mov     rcx, gs:188h
 * 00000001401B13DE: mov     [rcx+186h], al
 * 00000001401B13E4: call    KiDispatchInterrupt
 * 00000001401B13E9: cli
 * 00000001401B13EA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401B13EE: mov     cr8, rcx
 * 00000001401B13F2: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401B13F9: cli
 * 00000001401B13FA: test    [rbp+0E8h+arg_0], 1
 * 00000001401B1401: jz      loc_1401B1517
 * 00000001401B1407: mov     rcx, gs:188h
 * 00000001401B1410: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B1417: jz      short loc_1401B1432
 * 00000001401B1419: mov     ecx, 1
 * 00000001401B141E: mov     cr8, rcx
 * 00000001401B1422: sti
 * 00000001401B1423: call    KiInitiateUserApc
 * 00000001401B1428: cli
 * 00000001401B1429: mov     ecx, 0
 * 00000001401B142E: mov     cr8, rcx
 * 00000001401B1432: mov     rcx, gs:188h
 * 00000001401B143B: test    dword ptr [rcx], 8000000h
 * 00000001401B1441: jz      short loc_1401B1448
 * 00000001401B1443: call    KiRestoreSetContextState
 * 00000001401B1448: mov     rcx, gs:188h
 * 00000001401B1451: test    dword ptr [rcx], 40010000h
 * 00000001401B1457: jz      short loc_1401B146D
 * 00000001401B1459: test    byte ptr [rcx+2], 1
 * 00000001401B145D: jz      short loc_1401B146D
 * 00000001401B145F: call    KiCopyCounters
 * 00000001401B1464: mov     rcx, gs:188h
 * 00000001401B146D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B1471: cmp     [rbp+0E8h+var_68], 0
 * 00000001401B1479: jz      short loc_1401B1480
 * 00000001401B147B: call    KiRestoreDebugRegisterState
 * 00000001401B1480: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B1484: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B1488: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B148C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B1490: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B1494: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B1498: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B149C: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B14A0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B14A4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B14A8: movzx   eax, byte ptr gs:27Dh
 * 00000001401B14B1: cmp     gs:27Ah, al
 * 00000001401B14B9: jz      short loc_1401B14CC
 * 00000001401B14BB: mov     gs:27Ah, al
 * 00000001401B14C3: mov     ecx, 48h ; 'H'
 * 00000001401B14C8: xor     edx, edx
 * 00000001401B14CA: wrmsr
 * 00000001401B14CC: btr     word ptr gs:278h, 2
 * 00000001401B14D7: jnb     short loc_1401B14E7
 * 00000001401B14D9: mov     eax, 1
 * 00000001401B14DE: xor     edx, edx
 * 00000001401B14E0: mov     ecx, 49h ; 'I'
 * 00000001401B14E5: wrmsr
 * 00000001401B14E7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B14EB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B14EF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B14F3: mov     rsp, rbp
 * 00000001401B14F6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B14FD: add     rsp, 0E8h
 * 00000001401B1504: test    cs:KiKvaShadow, 1
 * 00000001401B150B: jz      short loc_1401B1512
 * 00000001401B150D: jmp     KiKernelExit
 * 00000001401B1512: swapgs
 * 00000001401B1515: iretq
 * 00000001401B1517: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B151B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B151F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B1523: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B1527: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B152B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B152F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B1533: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B1537: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B153B: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B153F: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B1543: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B1547: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B154B: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B154F: mov     rsp, rbp
 * 00000001401B1552: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B1559: add     rsp, 0E8h
 * 00000001401B1560: iretq
 */
