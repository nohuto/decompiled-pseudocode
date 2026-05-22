/*
 * XREFs of ?MagnifierOobeConfirmCallback@MagnifierTarget@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800A6980
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800A5F38 (-ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 *     ?IsOobeDone@MagnifierTarget@@SAKXZ @ 0x1800A6530 (-IsOobeDone@MagnifierTarget@@SAKXZ.c)
 */

__int64 __fastcall MagnifierTarget::MagnifierOobeConfirmCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        char *a5)
{
  char v7; // di

  if ( !a5 )
    return 3221225485LL;
  v7 = *a5;
  if ( !(unsigned int)MagnifierTarget::IsOobeDone()
    && v7
    && *((_QWORD *)a4 + 5)
    && !(unsigned int)MagnifierTarget::IsOobeDone() )
  {
    MagnifierComponent::ToggleMagnifier(*((MagnifierComponent **)a4 + 5), *(struct tagPOINT *)(a4 + 76));
  }
  return 0LL;
}
