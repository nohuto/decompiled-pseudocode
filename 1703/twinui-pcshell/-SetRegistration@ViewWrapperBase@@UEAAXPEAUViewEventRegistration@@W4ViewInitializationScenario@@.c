/*
 * XREFs of ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180113160
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180110490 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18011BAEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  v5 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 424) = v3;
  if ( v5 && a3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 448LL) + 240LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 144) + 448LL),
           v5,
           &v16);
    if ( v7 >= 0 )
    {
      v8 = v16;
      if ( v16 )
      {
        v9 = *(_DWORD *)(a1 + 252);
        if ( v16 != *(_DWORD *)(a1 + 248) )
        {
          *(_DWORD *)(a1 + 248) = v16;
          ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
          v8 = v16;
        }
        if ( v9 == *(_DWORD *)(a1 + 252) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 448LL) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 144) + 448LL),
            *(unsigned int *)(a1 + 124));
          v8 = v16;
        }
        if ( (unsigned int)(v8 - 4) <= 1 )
        {
          WindowReadyState::VisibilityChanged(a1 + 320, 0LL, 1LL);
          WindowReadyState::VisibilityChanged(a1 + 320, 1LL, 1LL);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  v10 = *(_DWORD *)(a1 + 424);
  if ( (~(v10 >> 2) & 1) != 0 )
  {
    v11 = 2;
    if ( (unsigned int)(*(_DWORD *)(a1 + 248) - 4) <= 1 )
      v11 = 4;
    *(_WORD *)(a1 + 316) &= 0xFFF1u;
    *(_WORD *)(a1 + 316) |= (unsigned __int16)(2 * (v11 & 7)) | 1;
  }
  if ( (~(v10 >> 3) & 1) != 0 )
  {
    *(_WORD *)(a1 + 316) &= ~0x10u;
    *(_WORD *)(a1 + 316) |= 0x21u;
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
        result = CompareStringOrdinal(StringRawBuffer, -1, off_1801BD1F8[v14], -1, 1);
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
                 (LightweightPropertySet *)(a1 + 80),
                 L"ExperienceId",
                 v14,
                 *(HWND *)(a1 + 232));
    }
  }
  return result;
}
