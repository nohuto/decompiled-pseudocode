/*
 * XREFs of xxxPaintRect @ 0x1C007F5FC
 * Callers:
 *     xxxFillWindow @ 0x1C007EFB0 (xxxFillWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     xxxGetControlColor @ 0x1C007F8A4 (xxxGetControlColor.c)
 */

/*
 * Hex-Rays decompilation failed for xxxPaintRect @ 0x1C007F5FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C007F5FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007F5FC: mov     r11, rsp
 * 00000001C007F5FF: mov     [r11+10h], rbx
 * 00000001C007F603: mov     [r11+18h], rbp
 * 00000001C007F607: mov     [r11+20h], rsi
 * 00000001C007F60B: push    rdi
 * 00000001C007F60C: sub     rsp, 20h
 * 00000001C007F610: xor     eax, eax
 * 00000001C007F612: mov     rsi, r9
 * 00000001C007F615: mov     [r11+8], rax
 * 00000001C007F619: mov     rdi, r8
 * 00000001C007F61C: mov     rbp, rdx
 * 00000001C007F61F: mov     rbx, rcx
 * 00000001C007F622: test    rcx, rcx
 * 00000001C007F625: jz      loc_1C016E0D2
 * 00000001C007F62B: mov     rcx, rbx
 * 00000001C007F62E: call    _GetDesktopWindow
 * 00000001C007F633: lea     r9, [rsp+28h+arg_0]
 * 00000001C007F638: mov     rcx, rdi; HDC
 * 00000001C007F63B: cmp     rbx, rax
 * 00000001C007F63E: jz      loc_1C016E0F0
 * 00000001C007F644: mov     r8d, [rbx+94h]
 * 00000001C007F64B: sub     r8d, [rdx+94h]
 * 00000001C007F652: mov     edx, [rbx+90h]
 * 00000001C007F658: sub     edx, [rbp+90h]
 * 00000001C007F65E: call    GreSetBrushOrg
 * 00000001C007F663: cmp     rsi, 7
 * 00000001C007F667: jnb     short loc_1C007F681
 * 00000001C007F669: lea     r9d, [rsi+132h]
 * 00000001C007F670: mov     r8, rdi
 * 00000001C007F673: mov     rdx, rbp
 * 00000001C007F676: mov     rcx, rbx
 * 00000001C007F679: call    xxxGetControlColor
 * 00000001C007F67E: mov     rsi, rax
 * 00000001C007F681: mov     rdx, [rsp+28h+arg_20]; LPCRECT
 * 00000001C007F686: mov     r8, rsi; HBRUSH
 * 00000001C007F689: mov     rcx, rdi; HDC
 * 00000001C007F68C: call    FillRect
 * 00000001C007F691: mov     r8d, [rsp+28h+arg_4]
 * 00000001C007F696: xor     r9d, r9d
 * 00000001C007F699: mov     edx, [rsp+28h+arg_0]
 * 00000001C007F69D: mov     rcx, rdi; HDC
 * 00000001C007F6A0: call    GreSetBrushOrg
 * 00000001C007F6A5: mov     rbx, [rsp+28h+arg_8]
 * 00000001C007F6AA: mov     eax, 1
 * 00000001C007F6AF: mov     rbp, [rsp+28h+arg_10]
 * 00000001C007F6B4: mov     rsi, [rsp+28h+arg_18]
 * 00000001C007F6B9: add     rsp, 20h
 * 00000001C007F6BD: pop     rdi
 * 00000001C007F6BE: retn
 * 00000001C016E0D2: mov     rax, cs:__imp_gptiCurrent
 * 00000001C016E0D9: mov     rcx, [rax]
 * 00000001C016E0DC: mov     rax, [rcx+1B0h]
 * 00000001C016E0E3: mov     rcx, [rax+8]
 * 00000001C016E0E7: mov     rbx, [rcx+10h]
 * 00000001C016E0EB: jmp     loc_1C007F62B
 * 00000001C016E0F0: xor     r8d, r8d
 * 00000001C016E0F3: xor     edx, edx
 * 00000001C016E0F5: jmp     loc_1C007F65E
 */
