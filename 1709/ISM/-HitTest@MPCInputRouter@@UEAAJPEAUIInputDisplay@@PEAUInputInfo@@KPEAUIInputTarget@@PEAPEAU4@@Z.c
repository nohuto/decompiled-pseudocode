/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  if ( !*((_BYTE *)this + 812) && !*((_BYTE *)a3 + 676) )
    return DWMInputRouter::HitTest(this, a2, a3, a4, a5, a6);
  if ( *((_BYTE *)this + 812) )
    return MPCInputRouter::HitTestInternal(this, a2, a3, a4, a5, a6);
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 92))(
           *((_QWORD *)this + 92),
           &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
           a6);
}
