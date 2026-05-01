/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1801BEEF4
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1801C3F90 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_1803316A8;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a2 + 40) = 1;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 48);
  return a1;
}
