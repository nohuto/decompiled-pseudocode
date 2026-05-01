/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1801AB230
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1801A38E0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
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
  _OWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 1;
  *((_WORD *)this + 180) = 0;
  if ( a2 == *((_DWORD *)this + 112) )
  {
    memset(v9, 0, 0x2CuLL);
    v5 = v9[0];
    v6 = DWORD2(v9[2]);
    v7 = v9[1];
    *((_DWORD *)this + 112) = -1;
    *(_OWORD *)((char *)this + 404) = v5;
    *(_QWORD *)&v5 = *(_QWORD *)&v9[2];
    *(_OWORD *)((char *)this + 420) = v7;
    *(_QWORD *)((char *)this + 436) = v5;
    *((_DWORD *)this + 111) = v6;
  }
  return 0LL;
}
