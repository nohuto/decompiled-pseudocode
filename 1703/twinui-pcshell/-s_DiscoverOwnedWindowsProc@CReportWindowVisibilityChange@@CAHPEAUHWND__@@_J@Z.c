/*
 * XREFs of ?s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z @ 0x18002A810
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc(HWND a1, __int64 a2)
{
  unsigned int v4; // edi
  HWND v5; // r14
  HWND Window; // rax
  bool v7; // bp
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  if ( IsWindowVisible(a1) && (unsigned int)GetWindowBand(a1, &v11) )
  {
    if ( v11 != *(_DWORD *)(a2 + 8) )
      goto LABEL_12;
    v5 = *(HWND *)a2;
    Window = GetWindow(a1, 4u);
    if ( !Window )
      goto LABEL_12;
    do
    {
      v7 = Window == v5;
      if ( Window == v5 )
        break;
      Window = GetWindow(Window, 4u);
    }
    while ( Window );
    if ( v7 )
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( v8 != *(_QWORD *)(a2 + 40)
        || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             a2 + 16,
             v8 + 1) >= 0 )
      {
        v9 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * (*(_QWORD *)(a2 + 24))++);
        if ( v9 )
          *v9 = a1;
      }
    }
    else
    {
LABEL_12:
      if ( a1 == *(HWND *)a2 )
        return 0;
    }
  }
  return v4;
}
