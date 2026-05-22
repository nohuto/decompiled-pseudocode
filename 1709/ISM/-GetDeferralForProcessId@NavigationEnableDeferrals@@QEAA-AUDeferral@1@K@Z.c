/*
 * XREFs of ?GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA?AUDeferral@1@K@Z @ 0x18003BCEC
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x18003CB50 (-NavigationDisable@ControllerNavigationManager@@UEAAJXZ.c)
 * Callees:
 *     ??$_Rotate_unchecked1@PEAUDeferral@NavigationEnableDeferrals@@@std@@YAPEAUDeferral@NavigationEnableDeferrals@@PEAU12@00Urandom_access_iterator_tag@0@@Z @ 0x18003CE10 (--$_Rotate_unchecked1@PEAUDeferral@NavigationEnableDeferrals@@@std@@YAPEAUDeferral@NavigationEna.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

_OWORD *__fastcall NavigationEnableDeferrals::GetDeferralForProcessId(__int64 a1, _OWORD *a2, int a3)
{
  __int64 v6; // rsi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v11[5]; // [rsp+20h] [rbp-50h] BYREF

  memset(a2, 0, 0x28uLL);
  *((_DWORD *)a2 + 10) = 0;
  v6 = a1 + 360;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *(_QWORD *)((char *)a2 + 60) = 0LL;
  *((_DWORD *)a2 + 17) = 0;
  do
  {
    if ( *(_DWORD *)a1 == a3 )
      break;
    a1 += 72LL;
  }
  while ( a1 != v6 );
  if ( a1 != v6 )
  {
    *a2 = *(_OWORD *)a1;
    a2[1] = *(_OWORD *)(a1 + 16);
    a2[2] = *(_OWORD *)(a1 + 32);
    a2[3] = *(_OWORD *)(a1 + 48);
    *((_QWORD *)a2 + 8) = *(_QWORD *)(a1 + 64);
    memset(v11, 0, 72);
    v7 = v11[1];
    *(_OWORD *)a1 = v11[0];
    v8 = v11[2];
    *(_OWORD *)(a1 + 16) = v7;
    v9 = v11[3];
    *(_OWORD *)(a1 + 32) = v8;
    *(_QWORD *)&v8 = *(_QWORD *)&v11[4];
    *(_OWORD *)(a1 + 48) = v9;
    *(_QWORD *)(a1 + 64) = v8;
    if ( a1 + 72 != v6 )
      std::_Rotate_unchecked1<NavigationEnableDeferrals::Deferral *>(a1, a1 + 72, v6);
  }
  return a2;
}
