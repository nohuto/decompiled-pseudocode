/*
 * XREFs of ?Finalize@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18013F37C
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18013F58C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r14
  _QWORD *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)a1 )
  {
    if ( *(_DWORD *)(a1 + 584) != 15 )
      return 2147500036LL;
    v5 = (__int64 *)(a1 + 32);
    v6 = (__int64 *)(a1 + 64);
    v7 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 != a1 + 64 )
    {
      while ( *v7 )
      {
        if ( ++v7 == v6 )
        {
          while ( v5 != v6 )
          {
            v8 = a2[1];
            v9 = 0;
            v10 = *v5;
            if ( v8 == a2[3] )
            {
              v9 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                     (__int64)a2,
                     v8 + 1,
                     a3);
              if ( v9 < 0 )
                goto LABEL_16;
            }
            v11 = (_QWORD *)(*a2 + 8 * a2[1]++);
            if ( v11 )
              *v11 = v10;
            if ( v9 < 0 )
            {
LABEL_16:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xC5,
                (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
                (const char *)(unsigned int)v9);
              return (unsigned int)v9;
            }
            ++v5;
          }
          return 0LL;
        }
      }
      return 2147500036LL;
    }
  }
  return 0LL;
}
