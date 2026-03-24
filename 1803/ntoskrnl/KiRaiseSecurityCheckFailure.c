/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401BA180
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x1402CFC80 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401BA180 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401BA180
 * Reason: Hex-Rays returned no pseudocode for 0x1401BA180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BA180: sub     qword ptr [rsp+0], 2
 * 00000001401BA185: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401BA18B: jnz     short loc_1401BA192
 * 00000001401BA18D: and     dword ptr [rsp+4], 0
 * 00000001401BA192: sub     rsp, 8
 * 00000001401BA196: push    rbp
 * 00000001401BA197: sub     rsp, 158h
 * 00000001401BA19E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401BA1A6: mov     byte ptr [rbp-55h], 1
 * 00000001401BA1AA: mov     [rbp-50h], rax
 * 00000001401BA1AE: mov     [rbp-48h], rcx
 * 00000001401BA1B2: mov     [rbp-40h], rdx
 * 00000001401BA1B6: mov     [rbp-38h], r8
 * 00000001401BA1BA: mov     [rbp-30h], r9
 * 00000001401BA1BE: mov     [rbp-28h], r10
 * 00000001401BA1C2: mov     [rbp-20h], r11
 * 00000001401BA1C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401BA1CD: jnz     short loc_1401BA1FC
 * 00000001401BA1CF: lfence
 * 00000001401BA1D2: test    byte ptr gs:278h, 1
 * 00000001401BA1DB: jnz     short loc_1401BA1E5
 * 00000001401BA1DD: lfence
 * 00000001401BA1E0: jmp     loc_1401BA418
 * 00000001401BA1E5: movzx   eax, byte ptr gs:27Ah
 * 00000001401BA1EE: mov     ecx, 48h ; 'H'
 * 00000001401BA1F3: xor     edx, edx
 * 00000001401BA1F5: wrmsr
 * 00000001401BA1F7: jmp     loc_1401BA418
 * 00000001401BA1FC: test    cs:KiKvaShadow, 1
 * 00000001401BA203: jnz     short loc_1401BA208
 * 00000001401BA205: swapgs
 * 00000001401BA208: lfence
 * 00000001401BA20B: mov     r10, gs:188h
 * 00000001401BA214: mov     rcx, gs:188h
 * 00000001401BA21D: mov     rcx, [rcx+220h]
 * 00000001401BA224: mov     rcx, [rcx+838h]
 * 00000001401BA22B: mov     gs:270h, rcx
 * 00000001401BA234: movzx   eax, byte ptr gs:27Bh
 * 00000001401BA23D: cmp     gs:27Ah, al
 * 00000001401BA245: jz      short loc_1401BA258
 * 00000001401BA247: mov     gs:27Ah, al
 * 00000001401BA24F: mov     ecx, 48h ; 'H'
 * 00000001401BA254: xor     edx, edx
 * 00000001401BA256: wrmsr
 * 00000001401BA258: movzx   edx, byte ptr gs:278h
 * 00000001401BA261: test    edx, 8
 * 00000001401BA267: jz      short loc_1401BA27C
 * 00000001401BA269: mov     eax, 1
 * 00000001401BA26E: xor     edx, edx
 * 00000001401BA270: mov     ecx, 49h ; 'I'
 * 00000001401BA275: wrmsr
 * 00000001401BA277: jmp     loc_1401BA3BA
 * 00000001401BA27C: test    edx, 2
 * 00000001401BA282: jz      loc_1401BA3B7
 * 00000001401BA288: test    byte ptr gs:279h, 4
 * 00000001401BA291: jnz     loc_1401BA3B7
 * 00000001401BA297: call    loc_1401BA3AA
 * 00000001401BA29C: add     rsp, 8
 * 00000001401BA2A0: call    loc_1401BA3B3
 * 00000001401BA2A5: add     rsp, 8
 * 00000001401BA2A9: call    loc_1401BA29C
 * 00000001401BA2AE: add     rsp, 8
 * 00000001401BA2B2: call    loc_1401BA2A5
 * 00000001401BA2B7: add     rsp, 8
 * 00000001401BA2BB: call    loc_1401BA2AE
 * 00000001401BA2C0: add     rsp, 8
 * 00000001401BA2C4: call    loc_1401BA2B7
 * 00000001401BA2C9: add     rsp, 8
 * 00000001401BA2CD: call    loc_1401BA2C0
 * 00000001401BA2D2: add     rsp, 8
 * 00000001401BA2D6: call    loc_1401BA2C9
 * 00000001401BA2DB: add     rsp, 8
 * 00000001401BA2DF: call    loc_1401BA2D2
 * 00000001401BA2E4: add     rsp, 8
 * 00000001401BA2E8: call    loc_1401BA2DB
 * 00000001401BA2ED: add     rsp, 8
 * 00000001401BA2F1: call    loc_1401BA2E4
 * 00000001401BA2F6: add     rsp, 8
 * 00000001401BA2FA: call    loc_1401BA2ED
 * 00000001401BA2FF: add     rsp, 8
 * 00000001401BA303: call    loc_1401BA2F6
 * 00000001401BA308: add     rsp, 8
 * 00000001401BA30C: call    loc_1401BA2FF
 * 00000001401BA311: add     rsp, 8
 * 00000001401BA315: call    loc_1401BA308
 * 00000001401BA31A: add     rsp, 8
 * 00000001401BA31E: call    loc_1401BA311
 * 00000001401BA323: add     rsp, 8
 * 00000001401BA327: call    loc_1401BA31A
 * 00000001401BA32C: add     rsp, 8
 * 00000001401BA330: call    loc_1401BA323
 * 00000001401BA335: add     rsp, 8
 * 00000001401BA339: call    loc_1401BA32C
 * 00000001401BA33E: add     rsp, 8
 * 00000001401BA342: call    loc_1401BA335
 * 00000001401BA347: add     rsp, 8
 * 00000001401BA34B: call    loc_1401BA33E
 * 00000001401BA350: add     rsp, 8
 * 00000001401BA354: call    loc_1401BA347
 * 00000001401BA359: add     rsp, 8
 * 00000001401BA35D: call    loc_1401BA350
 * 00000001401BA362: add     rsp, 8
 * 00000001401BA366: call    loc_1401BA359
 * 00000001401BA36B: add     rsp, 8
 * 00000001401BA36F: call    loc_1401BA362
 * 00000001401BA374: add     rsp, 8
 * 00000001401BA378: call    loc_1401BA36B
 * 00000001401BA37D: add     rsp, 8
 * 00000001401BA381: call    loc_1401BA374
 * 00000001401BA386: add     rsp, 8
 * 00000001401BA38A: call    loc_1401BA37D
 * 00000001401BA38F: add     rsp, 8
 * 00000001401BA393: call    loc_1401BA386
 * 00000001401BA398: add     rsp, 8
 * 00000001401BA39C: call    loc_1401BA38F
 * 00000001401BA3A1: add     rsp, 8
 * 00000001401BA3A5: call    loc_1401BA398
 * 00000001401BA3AA: add     rsp, 8
 * 00000001401BA3AE: call    loc_1401BA3A1
 * 00000001401BA3B3: add     rsp, 8
 * 00000001401BA3B7: lfence
 * 00000001401BA3BA: test    byte ptr [r10+3], 80h
 * 00000001401BA3BF: jz      short loc_1401BA403
 * 00000001401BA3C1: mov     ecx, 0C0000102h
 * 00000001401BA3C6: rdmsr
 * 00000001401BA3C8: shl     rdx, 20h
 * 00000001401BA3CC: or      rax, rdx
 * 00000001401BA3CF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401BA3D6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401BA3DE: cmp     [r10+0F0h], rax
 * 00000001401BA3E5: jz      short loc_1401BA403
 * 00000001401BA3E7: mov     rdx, [r10+1F0h]
 * 00000001401BA3EE: bts     dword ptr [r10+74h], 8
 * 00000001401BA3F4: dec     word ptr [r10+1E6h]
 * 00000001401BA3FC: mov     [rdx+80h], rax
 * 00000001401BA403: test    byte ptr [r10+3], 3
 * 00000001401BA408: mov     word ptr [rbp+80h], 0
 * 00000001401BA411: jz      short loc_1401BA418
 * 00000001401BA413: call    KiSaveDebugRegisterState
 * 00000001401BA418: cld
 * 00000001401BA419: stmxcsr dword ptr [rbp-54h]
 * 00000001401BA41D: ldmxcsr dword ptr gs:180h
 * 00000001401BA426: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401BA42A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401BA42E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401BA432: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401BA436: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401BA43A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401BA43E: test    dword ptr [rbp+0F8h], 200h
 * 00000001401BA448: jz      short loc_1401BA44B
 * 00000001401BA44A: sti
 * 00000001401BA44B: mov     r9, [rbp-48h]
 * 00000001401BA44F: mov     ecx, 0C0000409h
 * 00000001401BA454: mov     edx, 1
 * 00000001401BA459: mov     r8, [rbp+0E8h]
 * 00000001401BA460: call    KiFastFailDispatch
 * 00000001401BA465: nop
 * 00000001401BA466: retn
 */
