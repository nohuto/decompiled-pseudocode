/*
 * XREFs of ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1801F9A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicDisplay::SetState(CHolographicDisplay *this)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  int v5; // eax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicDisplay *)((char *)this - 64)) )
  {
    v2 = *(_QWORD *)(v1 - 16);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 - 48) + 1312LL) + 56LL);
    if ( v2 )
      v4 = *(_DWORD *)(v2 + 68);
    else
      v4 = 0;
    v7[0] = v4;
    v7[1] = *(unsigned int *)(v1 - 8);
    v5 = CoreUICallSend(v3, v7, 2LL, 7LL, 0, &unk_180239C91);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicdisplay.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
  return 0LL;
}
