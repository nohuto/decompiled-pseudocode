/*
 * XREFs of ?GetRotation@DisplayBinding@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x180023650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180031AEC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetRotation(DisplayBinding *this)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  struct Input::PropertyNode *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  if ( Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 56), &DISPLAYBINDING_ORIENTATION, &v4) == -2089336820 )
  {
    if ( !*((_QWORD *)this + 13) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
  }
  else
  {
    if ( *((_DWORD *)v4 + 10) > 4u )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    memcpy_0(&v3, *((const void **)v4 + 4), *((unsigned int *)v4 + 10));
    return v3;
  }
}
