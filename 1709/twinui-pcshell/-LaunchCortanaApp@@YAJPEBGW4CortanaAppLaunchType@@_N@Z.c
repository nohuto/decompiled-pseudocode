/*
 * XREFs of ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1801DE758
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 LaunchCortanaApp()
{
  HRESULT v0; // ebx
  OLECHAR *v1; // rdi
  LPVOID v2; // rcx
  LPVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v0 = CoCreateInstance(
         &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
         0LL,
         0x404u,
         &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
         &v4);
  if ( v0 >= 0 )
  {
    v1 = SysAllocString(L"StartMode=Attract&QuerySource=AttractAboveLock");
    if ( v1 )
    {
      v0 = (*(__int64 (__fastcall **)(LPVOID, OLECHAR *))(*(_QWORD *)v4 + 24LL))(v4, v1);
      SysFreeString(v1);
    }
    else
    {
      v0 = -2147024882;
    }
  }
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (unsigned int)v0;
}
