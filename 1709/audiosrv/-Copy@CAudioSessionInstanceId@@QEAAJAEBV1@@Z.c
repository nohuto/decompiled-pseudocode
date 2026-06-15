/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18001A000 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180013438 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x1800141A8 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650
 * Reason: Hex-Rays returned no pseudocode for 0x180017650
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180017650: push    rdi
 * 0000000180017652: sub     rsp, 30h
 * 0000000180017656: mov     [rsp+38h+var_18], 0FFFFFFFFFFFFFFFEh
 * 000000018001765F: mov     [rsp+38h+arg_8], rbx
 * 0000000180017664: mov     [rsp+38h+arg_10], rsi
 * 0000000180017669: mov     rdi, rdx
 * 000000018001766C: mov     rsi, rcx
 * 000000018001766F: call    ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z; CAudioEndpointId::Copy(CAudioEndpointId const &)
 * 0000000180017674: mov     ebx, eax
 * 0000000180017676: test    eax, eax
 * 0000000180017678: js      loc_18004CA82
 * 000000018001767E: mov     eax, [rdi+38h]
 * 0000000180017681: mov     [rsi+38h], eax
 * 0000000180017684: mov     eax, [rdi+3Ch]
 * 0000000180017687: mov     [rsi+3Ch], eax
 * 000000018001768A: mov     eax, [rdi+40h]
 * 000000018001768D: mov     [rsi+40h], eax
 * 0000000180017690: lea     rdx, [rdi+8]; struct CAppAudioSessionId *
 * 0000000180017694: lea     rcx, [rsi+8]; this
 * 0000000180017698: call    ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z; CAppAudioSessionId::Copy(CAppAudioSessionId const &)
 * 000000018001769D: mov     ebx, eax
 * 000000018001769F: test    eax, eax
 * 00000001800176A1: js      loc_18004CA82
 * 00000001800176A7: xor     ebx, ebx
 * 00000001800176A9: lea     rcx, [rsi+48h]
 * 00000001800176AD: lea     rdx, [rdi+48h]
 * 00000001800176B1: call    ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z; ATL::CSimpleStringT<ushort,0>::operator=(ATL::CSimpleStringT<ushort,0> const &)
 * 00000001800176B6: nop
 * 00000001800176B7: mov     eax, ebx
 * 00000001800176B9: mov     rbx, [rsp+38h+arg_8]
 * 00000001800176BE: mov     rsi, [rsp+38h+arg_10]
 * 00000001800176C3: add     rsp, 30h
 * 00000001800176C7: pop     rdi
 * 00000001800176C8: retn
 * 000000018004CA76: mov     ebx, [rsp+38h+arg_0]
 * 000000018004CA7A: test    ebx, ebx
 * 000000018004CA7C: jns     loc_1800176B7
 * 000000018004CA82: mov     r8d, ebx; int
 * 000000018004CA85: mov     edx, 399h; unsigned int
 * 000000018004CA8A: lea     rcx, aCaudiosessioni_0; "CAudioSessionInstanceId::Copy"
 * 000000018004CA91: call    ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z; AudSrvTraceLoggingErrorHelper(char const *,uint,long)
 * 000000018004CA96: nop
 * 000000018004CA97: jmp     loc_1800176B7
 */
