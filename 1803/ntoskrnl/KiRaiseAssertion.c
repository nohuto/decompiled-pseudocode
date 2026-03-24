/*
 * XREFs of KiRaiseAssertion @ 0x1401BA480
 * Callers:
 *     KiRaiseAssertionShadow @ 0x1402CFD00 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401BA480 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401BA480
 * Reason: Hex-Rays returned no pseudocode for 0x1401BA480
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BA480: sub     qword ptr [rsp+0], 2
 * 00000001401BA485: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401BA48B: jnz     short loc_1401BA492
 * 00000001401BA48D: and     dword ptr [rsp+4], 0
 * 00000001401BA492: sub     rsp, 8
 * 00000001401BA496: push    rbp
 * 00000001401BA497: sub     rsp, 158h
 * 00000001401BA49E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401BA4A6: mov     byte ptr [rbp-55h], 1
 * 00000001401BA4AA: mov     [rbp-50h], rax
 * 00000001401BA4AE: mov     [rbp-48h], rcx
 * 00000001401BA4B2: mov     [rbp-40h], rdx
 * 00000001401BA4B6: mov     [rbp-38h], r8
 * 00000001401BA4BA: mov     [rbp-30h], r9
 * 00000001401BA4BE: mov     [rbp-28h], r10
 * 00000001401BA4C2: mov     [rbp-20h], r11
 * 00000001401BA4C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401BA4CD: jnz     short loc_1401BA4FC
 * 00000001401BA4CF: lfence
 * 00000001401BA4D2: test    byte ptr gs:278h, 1
 * 00000001401BA4DB: jnz     short loc_1401BA4E5
 * 00000001401BA4DD: lfence
 * 00000001401BA4E0: jmp     loc_1401BA718
 * 00000001401BA4E5: movzx   eax, byte ptr gs:27Ah
 * 00000001401BA4EE: mov     ecx, 48h ; 'H'
 * 00000001401BA4F3: xor     edx, edx
 * 00000001401BA4F5: wrmsr
 * 00000001401BA4F7: jmp     loc_1401BA718
 * 00000001401BA4FC: test    cs:KiKvaShadow, 1
 * 00000001401BA503: jnz     short loc_1401BA508
 * 00000001401BA505: swapgs
 * 00000001401BA508: lfence
 * 00000001401BA50B: mov     r10, gs:188h
 * 00000001401BA514: mov     rcx, gs:188h
 * 00000001401BA51D: mov     rcx, [rcx+220h]
 * 00000001401BA524: mov     rcx, [rcx+838h]
 * 00000001401BA52B: mov     gs:270h, rcx
 * 00000001401BA534: movzx   eax, byte ptr gs:27Bh
 * 00000001401BA53D: cmp     gs:27Ah, al
 * 00000001401BA545: jz      short loc_1401BA558
 * 00000001401BA547: mov     gs:27Ah, al
 * 00000001401BA54F: mov     ecx, 48h ; 'H'
 * 00000001401BA554: xor     edx, edx
 * 00000001401BA556: wrmsr
 * 00000001401BA558: movzx   edx, byte ptr gs:278h
 * 00000001401BA561: test    edx, 8
 * 00000001401BA567: jz      short loc_1401BA57C
 * 00000001401BA569: mov     eax, 1
 * 00000001401BA56E: xor     edx, edx
 * 00000001401BA570: mov     ecx, 49h ; 'I'
 * 00000001401BA575: wrmsr
 * 00000001401BA577: jmp     loc_1401BA6BA
 * 00000001401BA57C: test    edx, 2
 * 00000001401BA582: jz      loc_1401BA6B7
 * 00000001401BA588: test    byte ptr gs:279h, 4
 * 00000001401BA591: jnz     loc_1401BA6B7
 * 00000001401BA597: call    loc_1401BA6AA
 * 00000001401BA59C: add     rsp, 8
 * 00000001401BA5A0: call    loc_1401BA6B3
 * 00000001401BA5A5: add     rsp, 8
 * 00000001401BA5A9: call    loc_1401BA59C
 * 00000001401BA5AE: add     rsp, 8
 * 00000001401BA5B2: call    loc_1401BA5A5
 * 00000001401BA5B7: add     rsp, 8
 * 00000001401BA5BB: call    loc_1401BA5AE
 * 00000001401BA5C0: add     rsp, 8
 * 00000001401BA5C4: call    loc_1401BA5B7
 * 00000001401BA5C9: add     rsp, 8
 * 00000001401BA5CD: call    loc_1401BA5C0
 * 00000001401BA5D2: add     rsp, 8
 * 00000001401BA5D6: call    loc_1401BA5C9
 * 00000001401BA5DB: add     rsp, 8
 * 00000001401BA5DF: call    loc_1401BA5D2
 * 00000001401BA5E4: add     rsp, 8
 * 00000001401BA5E8: call    loc_1401BA5DB
 * 00000001401BA5ED: add     rsp, 8
 * 00000001401BA5F1: call    loc_1401BA5E4
 * 00000001401BA5F6: add     rsp, 8
 * 00000001401BA5FA: call    loc_1401BA5ED
 * 00000001401BA5FF: add     rsp, 8
 * 00000001401BA603: call    loc_1401BA5F6
 * 00000001401BA608: add     rsp, 8
 * 00000001401BA60C: call    loc_1401BA5FF
 * 00000001401BA611: add     rsp, 8
 * 00000001401BA615: call    loc_1401BA608
 * 00000001401BA61A: add     rsp, 8
 * 00000001401BA61E: call    loc_1401BA611
 * 00000001401BA623: add     rsp, 8
 * 00000001401BA627: call    loc_1401BA61A
 * 00000001401BA62C: add     rsp, 8
 * 00000001401BA630: call    loc_1401BA623
 * 00000001401BA635: add     rsp, 8
 * 00000001401BA639: call    loc_1401BA62C
 * 00000001401BA63E: add     rsp, 8
 * 00000001401BA642: call    loc_1401BA635
 * 00000001401BA647: add     rsp, 8
 * 00000001401BA64B: call    loc_1401BA63E
 * 00000001401BA650: add     rsp, 8
 * 00000001401BA654: call    loc_1401BA647
 * 00000001401BA659: add     rsp, 8
 * 00000001401BA65D: call    loc_1401BA650
 * 00000001401BA662: add     rsp, 8
 * 00000001401BA666: call    loc_1401BA659
 * 00000001401BA66B: add     rsp, 8
 * 00000001401BA66F: call    loc_1401BA662
 * 00000001401BA674: add     rsp, 8
 * 00000001401BA678: call    loc_1401BA66B
 * 00000001401BA67D: add     rsp, 8
 * 00000001401BA681: call    loc_1401BA674
 * 00000001401BA686: add     rsp, 8
 * 00000001401BA68A: call    loc_1401BA67D
 * 00000001401BA68F: add     rsp, 8
 * 00000001401BA693: call    loc_1401BA686
 * 00000001401BA698: add     rsp, 8
 * 00000001401BA69C: call    loc_1401BA68F
 * 00000001401BA6A1: add     rsp, 8
 * 00000001401BA6A5: call    loc_1401BA698
 * 00000001401BA6AA: add     rsp, 8
 * 00000001401BA6AE: call    loc_1401BA6A1
 * 00000001401BA6B3: add     rsp, 8
 * 00000001401BA6B7: lfence
 * 00000001401BA6BA: test    byte ptr [r10+3], 80h
 * 00000001401BA6BF: jz      short loc_1401BA703
 * 00000001401BA6C1: mov     ecx, 0C0000102h
 * 00000001401BA6C6: rdmsr
 * 00000001401BA6C8: shl     rdx, 20h
 * 00000001401BA6CC: or      rax, rdx
 * 00000001401BA6CF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401BA6D6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401BA6DE: cmp     [r10+0F0h], rax
 * 00000001401BA6E5: jz      short loc_1401BA703
 * 00000001401BA6E7: mov     rdx, [r10+1F0h]
 * 00000001401BA6EE: bts     dword ptr [r10+74h], 8
 * 00000001401BA6F4: dec     word ptr [r10+1E6h]
 * 00000001401BA6FC: mov     [rdx+80h], rax
 * 00000001401BA703: test    byte ptr [r10+3], 3
 * 00000001401BA708: mov     word ptr [rbp+80h], 0
 * 00000001401BA711: jz      short loc_1401BA718
 * 00000001401BA713: call    KiSaveDebugRegisterState
 * 00000001401BA718: cld
 * 00000001401BA719: stmxcsr dword ptr [rbp-54h]
 * 00000001401BA71D: ldmxcsr dword ptr gs:180h
 * 00000001401BA726: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401BA72A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401BA72E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401BA732: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401BA736: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401BA73A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401BA73E: test    dword ptr [rbp+0F8h], 200h
 * 00000001401BA748: jz      short loc_1401BA74B
 * 00000001401BA74A: sti
 * 00000001401BA74B: mov     ecx, 0C0000420h
 * 00000001401BA750: xor     edx, edx
 * 00000001401BA752: mov     r8, [rbp+0E8h]
 * 00000001401BA759: call    KiExceptionDispatch
 * 00000001401BA75E: nop
 * 00000001401BA75F: retn
 */
