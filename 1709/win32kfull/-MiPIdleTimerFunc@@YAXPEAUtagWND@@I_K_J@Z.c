/*
 * XREFs of ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C0190
 * Callers:
 *     <none>
 * Callees:
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

void __fastcall MiPIdleTimerFunc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  _DWORD *v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax

  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 1224);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)a1 )
        *(_QWORD *)(v5 + 8) = 0LL;
    }
  }
  FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  if ( v3 )
  {
    v6 = *(_DWORD **)(v3 + 1224);
    if ( v6 )
    {
      if ( (*v6 & 1) != 0 )
      {
        v7 = dword_1C0327610;
        v6[8] = dword_1C0327610;
        v8 = v7 + 1;
        if ( v7 == -1 )
          v8 = 1;
        dword_1C0327610 = v8;
        *(_DWORD *)(*(_QWORD *)(v3 + 1224) + 88LL) = (MEMORY[0xFFFFF78000000320]
                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)(v3 + 1224) + 112LL) = 0;
        *(LARGE_INTEGER *)(*(_QWORD *)(v3 + 1224) + 104LL) = KeQueryPerformanceCounter(0LL);
        v9 = *(_QWORD *)(v3 + 1224);
        v10 = *(_DWORD *)(v9 + 36);
        if ( (v10 & 0x10000) != 0 )
        {
          *(_DWORD *)(v9 + 36) = v10 & 0xFFFEFFFF;
          *(_DWORD *)(*(_QWORD *)(v3 + 1224) + 36LL) |= 0x20000u;
        }
        PostTransformableMessage(
          (__int64)a1,
          581LL,
          ((unsigned __int16)(*(_WORD *)(*(_QWORD *)(v3 + 1224) + 36LL) & 0xE1F7) << 16) | 1LL,
          *(struct _LARGE_STRING **)(*(_QWORD *)(v3 + 1224) + 120LL),
          0);
      }
    }
  }
}
