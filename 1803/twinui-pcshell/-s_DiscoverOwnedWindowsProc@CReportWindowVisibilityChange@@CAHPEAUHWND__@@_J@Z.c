/*
 * XREFs of ?s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z @ 0x180090C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc(HWND a1, __int64 a2)
{
  unsigned int v4; // edi
  HWND v6; // rbp
  HWND Window; // rax
  void *v8; // r8
  HWND v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  if ( IsWindowVisible(a1) && (unsigned int)GetWindowBand(a1, &v12) )
  {
    if ( v12 != *(_DWORD *)(a2 + 8) )
      goto LABEL_5;
    v6 = *(HWND *)a2;
    Window = GetWindow(a1, 4u);
    if ( !Window )
      goto LABEL_5;
    do
    {
      v9 = Window;
      if ( Window == v6 )
        break;
      Window = GetWindow(Window, 4u);
    }
    while ( Window );
    if ( v9 == v6 )
    {
      v10 = *(_QWORD *)(a2 + 24);
      if ( v10 != *(_QWORD *)(a2 + 40)
        || CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             a2 + 16,
             v10 + 1,
             v8) >= 0 )
      {
        v11 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * (*(_QWORD *)(a2 + 24))++);
        if ( v11 )
          *v11 = a1;
      }
    }
    else
    {
LABEL_5:
      if ( a1 == *(HWND *)a2 )
        return 0;
    }
  }
  return v4;
}
