/*
 * XREFs of ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x18013D380
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18013A7E0 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180145DEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ViewWrapperBase::SetRegistration(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // edx
  char v11; // cl
  int result; // eax
  const WCHAR *StringRawBuffer; // rsi
  __int64 v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 448) = v3;
  if ( v5 && a3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 240LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
           v5,
           &v16);
    if ( v7 >= 0 )
    {
      v8 = v16;
      if ( v16 )
      {
        v9 = *(_DWORD *)(a1 + 276);
        if ( v16 != *(_DWORD *)(a1 + 272) )
        {
          *(_DWORD *)(a1 + 272) = v16;
          ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
          v8 = v16;
        }
        if ( v9 == *(_DWORD *)(a1 + 276) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
            *(unsigned int *)(a1 + 148));
          v8 = v16;
        }
        if ( (unsigned int)(v8 - 4) <= 1 )
        {
          WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
          WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  v10 = *(_DWORD *)(a1 + 448);
  if ( (~(v10 >> 2) & 1) != 0 )
  {
    v11 = 2;
    if ( (unsigned int)(*(_DWORD *)(a1 + 272) - 4) <= 1 )
      v11 = 4;
    *(_WORD *)(a1 + 340) &= 0xFFF1u;
    *(_WORD *)(a1 + 340) |= (unsigned __int16)(2 * (v11 & 7)) | 1;
  }
  if ( (~(v10 >> 3) & 1) != 0 )
  {
    *(_WORD *)(a1 + 340) &= ~0x10u;
    *(_WORD *)(a1 + 340) |= 0x21u;
  }
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
  result = WindowsIsStringEmpty(*(HSTRING *)a2);
  if ( result )
  {
    result = WindowsIsStringEmpty(*(HSTRING *)(a2 + 8));
    if ( !result )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 8), 0LL);
      v14 = 1LL;
      while ( 1 )
      {
        result = CompareStringOrdinal(StringRawBuffer, -1, off_180214A18[v14], -1, 1);
        if ( result == 2 )
          break;
        if ( (unsigned __int64)++v14 >= 3 )
        {
          v14 = 0LL;
          break;
        }
      }
      if ( v14 )
        return LightweightPropertySet::SetProperty(
                 (LightweightPropertySet *)(a1 + 104),
                 L"ExperienceId",
                 v14,
                 *(HWND *)(a1 + 256));
    }
  }
  return result;
}
