/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180031E04
 * Callers:
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180040540 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180098048 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180031E04
 * Reason: Hex-Rays returned no pseudocode for 0x180031E04
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180031E04: mov     rax, rsp
 * 0000000180031E07: mov     [rax+8], rbx
 * 0000000180031E0B: mov     [rax+10h], rsi
 * 0000000180031E0F: mov     [rax+18h], rdi
 * 0000000180031E13: mov     [rax+20h], r14
 * 0000000180031E17: push    r15
 * 0000000180031E19: sub     rsp, 30h
 * 0000000180031E1D: mov     eax, [rcx+18h]
 * 0000000180031E20: xor     edi, edi
 * 0000000180031E22: mov     r14, rdx
 * 0000000180031E25: mov     rbx, rcx
 * 0000000180031E28: test    eax, eax
 * 0000000180031E2A: jz      short loc_180031E42
 * 0000000180031E2C: dec     eax
 * 0000000180031E2E: lea     r9, [rax+rax*4]
 * 0000000180031E32: mov     rax, [rcx]
 * 0000000180031E35: add     r9, r9
 * 0000000180031E38: mov     r8d, [rax+r9*8+8]
 * 0000000180031E3D: test    r8d, r8d
 * 0000000180031E40: jnz     short loc_180031E62
 * 0000000180031E42: and     [rdx], rdi
 * 0000000180031E45: mov     rbx, [rsp+38h+arg_0]
 * 0000000180031E4A: mov     eax, edi
 * 0000000180031E4C: mov     rdi, [rsp+38h+arg_10]
 * 0000000180031E51: mov     rsi, [rsp+38h+arg_8]
 * 0000000180031E56: mov     r14, [rsp+38h+arg_18]
 * 0000000180031E5B: add     rsp, 30h
 * 0000000180031E5F: pop     r15
 * 0000000180031E61: retn
 * 0000000180031E62: mov     eax, [rcx+358h]
 * 0000000180031E68: dec     eax
 * 0000000180031E6A: imul    rcx, rax, 78h ; 'x'
 * 0000000180031E6E: mov     rax, [rbx+340h]
 * 0000000180031E75: cmp     [rcx+rax+58h], rdi
 * 0000000180031E7A: jnz     short loc_180031ED8
 * 0000000180031E7C: mov     eax, [rbx+358h]
 * 0000000180031E82: xor     edx, edx
 * 0000000180031E84: mov     esi, eax
 * 0000000180031E86: sub     esi, r8d
 * 0000000180031E89: cmp     esi, eax
 * 0000000180031E8B: jnb     short loc_180031ED8
 * 0000000180031E8D: mov     rcx, [rbx+340h]
 * 0000000180031E94: mov     eax, esi
 * 0000000180031E96: imul    r15, rax, 78h ; 'x'
 * 0000000180031E9A: add     rcx, r15; this
 * 0000000180031E9D: lea     rax, [rcx+58h]
 * 0000000180031EA1: cmp     qword ptr [rax], 0
 * 0000000180031EA5: jnz     short loc_180031EC2
 * 0000000180031EA7: test    rdx, rdx
 * 0000000180031EAA: jnz     short loc_180031EF8
 * 0000000180031EAC: lea     rdx, [rcx+10h]; struct CMILMatrix *
 * 0000000180031EB0: mov     r8, rax; struct CShape **
 * 0000000180031EB3: call    ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z; CShapePtr::CopyShape(CMILMatrix const *,CShape * *)
 * 0000000180031EB8: mov     edi, eax
 * 0000000180031EBA: test    eax, eax
 * 0000000180031EBC: js      loc_1800DB546
 * 0000000180031EC2: mov     rax, [rbx+340h]
 * 0000000180031EC9: inc     esi
 * 0000000180031ECB: mov     rdx, [r15+rax+58h]
 * 0000000180031ED0: cmp     esi, [rbx+358h]
 * 0000000180031ED6: jb      short loc_180031E8D
 * 0000000180031ED8: mov     eax, [rbx+358h]
 * 0000000180031EDE: dec     eax
 * 0000000180031EE0: imul    rcx, rax, 78h ; 'x'
 * 0000000180031EE4: mov     rax, [rbx+340h]
 * 0000000180031EEB: mov     rcx, [rcx+rax+58h]
 * 0000000180031EF0: mov     [r14], rcx
 * 0000000180031EF3: jmp     loc_180031E45
 * 0000000180031EF8: mov     r8, [rcx]
 * 0000000180031EFB: lea     r9, [rcx+10h]
 * 0000000180031EFF: mov     [rsp+38h+var_10], rax
 * 0000000180031F04: mov     rcx, rdx
 * 0000000180031F07: mov     [rsp+38h+var_18], 1
 * 0000000180031F0F: call    ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z; CShape::Combine(CShape const *,CMILMatrix const *,CShape const *,CMILMatrix const *,MilCombineMode::Enum,CShape * *)
 * 0000000180031F14: mov     edi, eax
 * 0000000180031F16: test    eax, eax
 * 0000000180031F18: jns     short loc_180031EC2
 * 0000000180031F1A: jmp     loc_1800DB550
 * 00000001800DB546: mov     [rsp+38h+var_18], 0BDh
 * 00000001800DB54E: jmp     short loc_1800DB558
 * 00000001800DB550: mov     [rsp+38h+var_18], 0C9h; unsigned int
 * 00000001800DB558: xor     edx, edx; int *
 * 00000001800DB55A: mov     r9d, eax; int
 * 00000001800DB55D: xor     r8d, r8d; unsigned int
 * 00000001800DB560: lea     ecx, [rdx+14h]; unsigned int
 * 00000001800DB563: call    ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z; MilInstrumentationCheckHR_MaybeFailFast(ulong,long const * const,uint,long,uint)
 * 00000001800DB568: nop
 * 00000001800DB569: jmp     loc_180031E45
 */
