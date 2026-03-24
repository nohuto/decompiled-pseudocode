/*
 * XREFs of KiDivideErrorFault @ 0x14018B600
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140297100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14018B600 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14018B600
 * Reason: Hex-Rays returned no pseudocode for 0x14018B600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018B600: sub     rsp, 8
 * 000000014018B604: push    rbp
 * 000000014018B605: sub     rsp, 158h
 * 000000014018B60C: lea     rbp, [rsp+80h]
 * 000000014018B614: mov     [rbp+0E8h+var_13D], 1
 * 000000014018B618: mov     [rbp+0E8h+var_138], rax
 * 000000014018B61C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018B620: mov     [rbp+0E8h+var_128], rdx
 * 000000014018B624: mov     [rbp+0E8h+var_120], r8
 * 000000014018B628: mov     [rbp+0E8h+var_118], r9
 * 000000014018B62C: mov     [rbp+0E8h+var_110], r10
 * 000000014018B630: mov     [rbp+0E8h+var_108], r11
 * 000000014018B634: test    [rbp+0E8h+arg_0], 1
 * 000000014018B63B: jnz     short loc_14018B66A
 * 000000014018B63D: lfence
 * 000000014018B640: test    byte ptr gs:278h, 1
 * 000000014018B649: jnz     short loc_14018B653
 * 000000014018B64B: lfence
 * 000000014018B64E: jmp     loc_14018B886
 * 000000014018B653: movzx   eax, byte ptr gs:27Ah
 * 000000014018B65C: mov     ecx, 48h ; 'H'
 * 000000014018B661: xor     edx, edx
 * 000000014018B663: wrmsr
 * 000000014018B665: jmp     loc_14018B886
 * 000000014018B66A: test    cs:KiKvaShadow, 1
 * 000000014018B671: jnz     short loc_14018B676
 * 000000014018B673: swapgs
 * 000000014018B676: lfence
 * 000000014018B679: mov     r10, gs:188h
 * 000000014018B682: mov     rcx, gs:188h
 * 000000014018B68B: mov     rcx, [rcx+220h]
 * 000000014018B692: mov     rcx, [rcx+838h]
 * 000000014018B699: mov     gs:270h, rcx
 * 000000014018B6A2: movzx   eax, byte ptr gs:27Bh
 * 000000014018B6AB: cmp     gs:27Ah, al
 * 000000014018B6B3: jz      short loc_14018B6C6
 * 000000014018B6B5: mov     gs:27Ah, al
 * 000000014018B6BD: mov     ecx, 48h ; 'H'
 * 000000014018B6C2: xor     edx, edx
 * 000000014018B6C4: wrmsr
 * 000000014018B6C6: movzx   edx, byte ptr gs:278h
 * 000000014018B6CF: test    edx, 8
 * 000000014018B6D5: jz      short loc_14018B6EA
 * 000000014018B6D7: mov     eax, 1
 * 000000014018B6DC: xor     edx, edx
 * 000000014018B6DE: mov     ecx, 49h ; 'I'
 * 000000014018B6E3: wrmsr
 * 000000014018B6E5: jmp     loc_14018B828
 * 000000014018B6EA: test    edx, 2
 * 000000014018B6F0: jz      loc_14018B825
 * 000000014018B6F6: test    byte ptr gs:279h, 4
 * 000000014018B6FF: jnz     loc_14018B825
 * 000000014018B705: call    loc_14018B818
 * 000000014018B70A: add     rsp, 8
 * 000000014018B70E: call    loc_14018B821
 * 000000014018B713: add     rsp, 8
 * 000000014018B717: call    loc_14018B70A
 * 000000014018B71C: add     rsp, 8
 * 000000014018B720: call    loc_14018B713
 * 000000014018B725: add     rsp, 8
 * 000000014018B729: call    loc_14018B71C
 * 000000014018B72E: add     rsp, 8
 * 000000014018B732: call    loc_14018B725
 * 000000014018B737: add     rsp, 8
 * 000000014018B73B: call    loc_14018B72E
 * 000000014018B740: add     rsp, 8
 * 000000014018B744: call    loc_14018B737
 * 000000014018B749: add     rsp, 8
 * 000000014018B74D: call    loc_14018B740
 * 000000014018B752: add     rsp, 8
 * 000000014018B756: call    loc_14018B749
 * 000000014018B75B: add     rsp, 8
 * 000000014018B75F: call    loc_14018B752
 * 000000014018B764: add     rsp, 8
 * 000000014018B768: call    loc_14018B75B
 * 000000014018B76D: add     rsp, 8
 * 000000014018B771: call    loc_14018B764
 * 000000014018B776: add     rsp, 8
 * 000000014018B77A: call    loc_14018B76D
 * 000000014018B77F: add     rsp, 8
 * 000000014018B783: call    loc_14018B776
 * 000000014018B788: add     rsp, 8
 * 000000014018B78C: call    loc_14018B77F
 * 000000014018B791: add     rsp, 8
 * 000000014018B795: call    loc_14018B788
 * 000000014018B79A: add     rsp, 8
 * 000000014018B79E: call    loc_14018B791
 * 000000014018B7A3: add     rsp, 8
 * 000000014018B7A7: call    loc_14018B79A
 * 000000014018B7AC: add     rsp, 8
 * 000000014018B7B0: call    loc_14018B7A3
 * 000000014018B7B5: add     rsp, 8
 * 000000014018B7B9: call    loc_14018B7AC
 * 000000014018B7BE: add     rsp, 8
 * 000000014018B7C2: call    loc_14018B7B5
 * 000000014018B7C7: add     rsp, 8
 * 000000014018B7CB: call    loc_14018B7BE
 * 000000014018B7D0: add     rsp, 8
 * 000000014018B7D4: call    loc_14018B7C7
 * 000000014018B7D9: add     rsp, 8
 * 000000014018B7DD: call    loc_14018B7D0
 * 000000014018B7E2: add     rsp, 8
 * 000000014018B7E6: call    loc_14018B7D9
 * 000000014018B7EB: add     rsp, 8
 * 000000014018B7EF: call    loc_14018B7E2
 * 000000014018B7F4: add     rsp, 8
 * 000000014018B7F8: call    loc_14018B7EB
 * 000000014018B7FD: add     rsp, 8
 * 000000014018B801: call    loc_14018B7F4
 * 000000014018B806: add     rsp, 8
 * 000000014018B80A: call    loc_14018B7FD
 * 000000014018B80F: add     rsp, 8
 * 000000014018B813: call    loc_14018B806
 * 000000014018B818: add     rsp, 8
 * 000000014018B81C: call    loc_14018B80F
 * 000000014018B821: add     rsp, 8
 * 000000014018B825: lfence
 * 000000014018B828: test    byte ptr [r10+3], 80h
 * 000000014018B82D: jz      short loc_14018B871
 * 000000014018B82F: mov     ecx, 0C0000102h
 * 000000014018B834: rdmsr
 * 000000014018B836: shl     rdx, 20h
 * 000000014018B83A: or      rax, rdx
 * 000000014018B83D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018B844: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018B84C: cmp     [r10+0F0h], rax
 * 000000014018B853: jz      short loc_14018B871
 * 000000014018B855: mov     rdx, [r10+1F0h]
 * 000000014018B85C: bts     dword ptr [r10+74h], 8
 * 000000014018B862: dec     word ptr [r10+1E6h]
 * 000000014018B86A: mov     [rdx+80h], rax
 * 000000014018B871: test    byte ptr [r10+3], 3
 * 000000014018B876: mov     [rbp+0E8h+var_68], 0
 * 000000014018B87F: jz      short loc_14018B886
 * 000000014018B881: call    KiSaveDebugRegisterState
 * 000000014018B886: cld
 * 000000014018B887: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018B88B: ldmxcsr dword ptr gs:180h
 * 000000014018B894: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018B898: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018B89C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018B8A0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018B8A4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018B8A8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018B8AC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018B8B6: jz      short loc_14018B8B9
 * 000000014018B8B8: sti
 * 000000014018B8B9: mov     ecx, 10000003h
 * 000000014018B8BE: xor     edx, edx
 * 000000014018B8C0: mov     r8, [rbp+0E8h]
 * 000000014018B8C7: call    KiExceptionDispatch
 * 000000014018B8CC: nop
 * 000000014018B8CD: retn
 */
