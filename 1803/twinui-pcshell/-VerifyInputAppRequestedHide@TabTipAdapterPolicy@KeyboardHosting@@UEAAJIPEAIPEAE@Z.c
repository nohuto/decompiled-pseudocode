/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x180253390
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18024AE00 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  *a4 = 1;
  *((_WORD *)this + 196) = 0;
  if ( a2 == *((_DWORD *)this + 124) )
  {
    memset_0(v9, 0, 0x2CuLL);
    v5 = v9[0];
    v6 = v11;
    v7 = v9[1];
    *((_DWORD *)this + 124) = -1;
    *(_OWORD *)((char *)this + 452) = v5;
    *(_QWORD *)&v5 = v10;
    *(_OWORD *)((char *)this + 468) = v7;
    *(_QWORD *)((char *)this + 484) = v5;
    *((_DWORD *)this + 123) = v6;
  }
  return 0LL;
}
