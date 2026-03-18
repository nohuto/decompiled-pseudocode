/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C01E1B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH@Z @ 0x1C013DF04 (-GetWindowData@@YA_JPEAUtagWND@@_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     CheckAccessForIntegrityLevel @ 0x1C0195E70 (CheckAccessForIntegrityLevel.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned int v8; // r12d
  __int64 WindowData; // rbx
  __int64 v11; // r15
  _BYTE *v12; // rdx
  __int64 v13; // rsi

  v8 = a2;
  WindowData = 0LL;
  if ( a6 == 689 && a4 < 3 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    {
      return GetWindowData(a1, a4, a3);
    }
    else
    {
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
      if ( v11 == PsGetCurrentProcessWin32Process(a1, a2) )
      {
        v12 = (_BYTE *)a5;
        if ( a5 >= W32UserProbeAddress )
          v12 = (_BYTE *)W32UserProbeAddress;
        *v12 = 1;
      }
      else if ( (*((_WORD *)a1 + 41) & 0x3FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, unsigned __int64))qword_1C032AF38)(
                       a1,
                       v8,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*((_BYTE *)a1 + 58) & 1) == 0 || a3 )
            v13 = a3 + 4;
          else
            v13 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C032AF38)(a1, v8, v13) << 32) | WindowData;
        }
      }
      else if ( (unsigned int)CheckAccessForIntegrityLevel(
                                *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL),
                                *(_QWORD *)(v11 + 824)) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 376LL));
        WindowData = GetWindowData(a1, a4, a3);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}
