/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C0100DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0101130 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  _QWORD *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v20 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5, v8, v9) + 456)
                   + 224LL) & 1) != 0
      || (v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 456),
          (*(_BYTE *)(v15 + 224) & 0x20) != 0)
      || ((*(_DWORD *)(v7 + 368) >> 8) & 0x1FF) == (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                     v15,
                                                                     v14,
                                                                     v16,
                                                                     v17) >> 8) & 0x1FF) )
    {
      v18 = DCEPtInRect(v7 + 128, v20);
      TransformPointBetweenCoordinateSpaces(&v20, &v20, 0LL, v7);
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v21, &v20, v7, 0LL);
      v18 = DCEPtInRect(v7 + 128, v21);
    }
    if ( v18 )
    {
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_QWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v20;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
