/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C0100F40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0101130 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  _QWORD *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v32; // [rsp+90h] [rbp+18h] BYREF
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v32 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5, v7, v8) + 456)
                   + 224LL) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 456);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17);
        v19 = v33;
        if ( ((*(_DWORD *)(v9 + 368) >> 8) & 0x1FF) != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
          v19 = v32;
        v33 = v19;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v32, &v32, v9, 0LL);
    if ( (unsigned int)DCEPtInRect(v9 + 128, v32) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5, v20, v21) + 456)
                     + 224LL) & 1) == 0 )
      {
        v26 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 456);
        if ( (*(_BYTE *)(v26 + 224) & 0x20) == 0 )
        {
          v29 = W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28);
          v30 = v32;
          if ( ((*(_DWORD *)(v9 + 368) >> 8) & 0x1FF) != ((v29 >> 8) & 0x1FF) )
            v30 = v33;
          v32 = v30;
        }
      }
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_QWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v32;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
