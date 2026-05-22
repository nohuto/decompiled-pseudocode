/*
 * XREFs of ??$_Rotate_unchecked1@PEAUDeferral@NavigationEnableDeferrals@@@std@@YAPEAUDeferral@NavigationEnableDeferrals@@PEAU12@00Urandom_access_iterator_tag@0@@Z @ 0x18003CE10
 * Callers:
 *     ?GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA?AUDeferral@1@K@Z @ 0x18003BCEC (-GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA-AUDeferral@1@K@Z.c)
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x18003C8A0 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Rotate_unchecked1<NavigationEnableDeferrals::Deferral *>(__int128 *a1, __int128 *a2, char *a3)
{
  __int128 *v3; // rax
  __int128 *i; // r9
  __int128 v5; // xmm3
  __int128 v6; // xmm4
  __int128 v7; // xmm5
  __int128 v8; // xmm6
  __int64 v9; // xmm2_8
  __int128 *v10; // rax
  __int128 *v11; // r9
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  __int64 v16; // xmm2_8
  __int128 *v17; // rax
  __int128 *v18; // r9
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int128 v21; // xmm5
  __int128 v22; // xmm6
  __int64 v23; // xmm2_8

  v3 = a2;
  for ( i = a1; i != v3; *((_QWORD *)v3 + 8) = v9 )
  {
    v3 = (__int128 *)((char *)v3 - 72);
    if ( i == v3 )
      break;
    v5 = *i;
    v6 = i[1];
    v7 = i[2];
    v8 = i[3];
    v9 = *((_QWORD *)i + 8);
    *i = *v3;
    i[1] = v3[1];
    i[2] = v3[2];
    i[3] = v3[3];
    *((_QWORD *)i + 8) = *((_QWORD *)v3 + 8);
    i = (__int128 *)((char *)i + 72);
    *v3 = v5;
    v3[1] = v6;
    v3[2] = v7;
    v3[3] = v8;
  }
  v10 = (__int128 *)a3;
  v11 = a2;
  if ( a2 != (__int128 *)a3 )
  {
    do
    {
      v10 = (__int128 *)((char *)v10 - 72);
      if ( v11 == v10 )
        break;
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      v16 = *((_QWORD *)v11 + 8);
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      *((_QWORD *)v11 + 8) = *((_QWORD *)v10 + 8);
      v11 = (__int128 *)((char *)v11 + 72);
      *v10 = v12;
      v10[1] = v13;
      v10[2] = v14;
      v10[3] = v15;
      *((_QWORD *)v10 + 8) = v16;
    }
    while ( v11 != v10 );
  }
  v17 = (__int128 *)a3;
  v18 = a1;
  if ( a1 != (__int128 *)a3 )
  {
    do
    {
      v17 = (__int128 *)((char *)v17 - 72);
      if ( v18 == v17 )
        break;
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      v23 = *((_QWORD *)v18 + 8);
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      *((_QWORD *)v18 + 8) = *((_QWORD *)v17 + 8);
      v18 = (__int128 *)((char *)v18 + 72);
      *v17 = v19;
      v17[1] = v20;
      v17[2] = v21;
      v17[3] = v22;
      *((_QWORD *)v17 + 8) = v23;
    }
    while ( v18 != v17 );
  }
  return (__int64)a1 + 72 * ((a3 - (char *)a2) / 72);
}
