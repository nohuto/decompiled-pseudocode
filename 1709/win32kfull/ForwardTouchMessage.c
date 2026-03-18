/*
 * XREFs of ForwardTouchMessage @ 0x1C01BD414
 * Callers:
 *     NtUserPostMessage @ 0x1C00ABE80 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1C01EF1C0 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01BCA58 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1C01C0F9C (_PostMessageCheckIL.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rax
  struct HTOUCHINPUT__ *v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // ebx

  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || !a4 || a4 > 0xFFFFFFFF )
  {
    UserSetLastError(87LL, (__int64)a2);
    return 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
  ProbeForRead(Address, 48LL * (unsigned int)a4, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v14, a4, (struct tagTOUCHINPUT *const)Address);
  v16 = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v17 = PostMessageCheckIL(a2, a3, a4, (__int64)ValidTouchInputInfo);
    v18 = a8;
  }
  else
  {
    v18 = a8;
    *a9 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, struct HTOUCHINPUT__ *, __int64))mpFnidPfn[((_BYTE)a8 + 6) & 0x1F])(
            a2,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v17 = 1;
  }
  if ( !v17 || v18 >= 0x2AB && (v18 <= 0x2AC || v18 == 692) )
    FreeTouchInputInfo(v16, 1LL);
  return v17;
}
