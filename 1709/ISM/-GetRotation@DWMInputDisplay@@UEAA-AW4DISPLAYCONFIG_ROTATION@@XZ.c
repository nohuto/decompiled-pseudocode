/*
 * XREFs of ?GetRotation@DWMInputDisplay@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x180020640
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@OrientationWatcher@@SAJPEAXP6AX0W4DISPLAYCONFIG_ROTATION@@@ZPEAPEAV1@@Z @ 0x18006DA44 (-Create@OrientationWatcher@@SAJPEAXP6AX0W4DISPLAYCONFIG_ROTATION@@@ZPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputDisplay::GetRotation(DWMInputDisplay *this)
{
  __int64 v2; // rax
  BOOL v3; // eax
  void (*v4)(void *, enum DISPLAYCONFIG_ROTATION); // rdx
  __int64 v5; // rcx
  LPARAM dwData; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 48) )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 48) = 1;
    if ( (*(int (__fastcall **)(DWMInputDisplay *, __int64 *))(v2 + 24))(this, &v8) >= 0 )
    {
      dwData = 0LL;
      v3 = EnumDisplayMonitors(
             0LL,
             0LL,
             lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
             (LPARAM)&dwData);
      if ( v8 == (dwData & -(__int64)v3) )
      {
        v5 = *((_QWORD *)this + 7);
        if ( v5 )
        {
          *((_QWORD *)this + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        OrientationWatcher::Create(this, v4, (struct OrientationWatcher **)this + 7);
      }
    }
  }
  return *((unsigned int *)this + 16);
}
