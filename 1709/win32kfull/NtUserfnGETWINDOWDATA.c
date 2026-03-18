/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C01EDCE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH@Z @ 0x1C01E27F0 (-GetWindowData@@YA_JPEAUtagWND@@_JH@Z.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        int a6)
{
  __int64 WindowData; // rbx
  __int64 v11; // r15
  _BYTE *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi

  WindowData = 0LL;
  if ( a6 == 689 && a4 < 3 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    {
      return GetWindowData(a1, a4, a3);
    }
    else
    {
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
      if ( v11 == PsGetCurrentProcessWin32Process(a1) )
      {
        v12 = (_BYTE *)a5;
        if ( a5 >= MmUserProbeAddress )
          v12 = (_BYTE *)MmUserProbeAddress;
        *v12 = 1;
      }
      else if ( (*((_WORD *)a1 + 41) & 0x3FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))qword_1C0326AA8)(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*((_BYTE *)a1 + 58) & 1) == 0 || a3 )
            v17 = a3 + 4;
          else
            v17 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C0326AA8)(a1, a2, v17) << 32) | WindowData;
        }
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 832);
        v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
        if ( !gbEnforceUIPI
          || (unsigned int)v14 > (unsigned int)v13
          || (_DWORD)v14 == (_DWORD)v13
          && ((v15 = HIDWORD(v14), v16 = HIDWORD(v13), (_DWORD)v15 == (_DWORD)v16)
           || (_DWORD)v15 == -1
           || (_DWORD)v16 == -1) )
        {
          KeAttachProcess(*(PRKPROCESS *)v11);
          WindowData = GetWindowData(a1, a4, a3);
          KeDetachProcess();
        }
      }
    }
  }
  return WindowData;
}
