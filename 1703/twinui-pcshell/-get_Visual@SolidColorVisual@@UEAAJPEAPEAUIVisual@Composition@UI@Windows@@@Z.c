/*
 * XREFs of ?get_Visual@SolidColorVisual@@UEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z @ 0x18016A9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SolidColorVisual::get_Visual(
        SolidColorVisual *this,
        struct Windows::UI::Composition::IVisual **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::UI::Composition::IVisual *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    v4 = (struct Windows::UI::Composition::IVisual *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::UI::Composition::IVisual *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\solidcolorvisual.cpp",
                           a4);
  }
  return result;
}
