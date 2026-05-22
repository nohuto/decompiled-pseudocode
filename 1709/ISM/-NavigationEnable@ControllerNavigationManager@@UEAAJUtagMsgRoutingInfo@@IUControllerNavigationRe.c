/*
 * XREFs of ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x18003C8A0
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003C07C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ??$_Rotate_unchecked1@PEAUDeferral@NavigationEnableDeferrals@@@std@@YAPEAUDeferral@NavigationEnableDeferrals@@PEAU12@00Urandom_access_iterator_tag@0@@Z @ 0x18003CE10 (--$_Rotate_unchecked1@PEAUDeferral@NavigationEnableDeferrals@@@std@@YAPEAUDeferral@NavigationEna.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x18003E8A4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 */

__int64 __fastcall ControllerNavigationManager::NavigationEnable(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagPOINT a5)
{
  int v7; // ecx
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  ControllerProcessor *v12; // rcx
  struct tagRECT v13; // xmm0
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int64 v16; // r8
  __int64 v17; // xmm0_8
  __int64 v18; // rdx
  __int128 v19; // xmm3
  __int64 v20; // r8
  struct tagRECT v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm1
  __int64 v24; // xmm0_8
  char v26; // [rsp+28h] [rbp-61h]
  char v27; // [rsp+30h] [rbp-59h]
  struct tagRECT v28; // [rsp+38h] [rbp-51h] BYREF
  __int128 v29; // [rsp+48h] [rbp-41h]
  __int128 j; // [rsp+58h] [rbp-31h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  _BYTE v32[40]; // [rsp+98h] [rbp+Fh]

  v7 = *(_DWORD *)(a1 + 136);
  if ( v7 && v7 == *(_DWORD *)a2 )
  {
    *(_OWORD *)(a1 + 504) = *a2;
    *(_OWORD *)(a1 + 520) = a2[1];
    *(_QWORD *)(a1 + 536) = *((_QWORD *)a2 + 4);
    v10 = *(_QWORD **)(a1 + 16);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v12 = (ControllerProcessor *)i[3];
      v27 = *(_BYTE *)(a1 + 74);
      v26 = *(_BYTE *)(a1 + 72);
      v28 = *a4;
      ControllerProcessor::NavigationEnable(v12, a3, &v28, a5, v26, v27);
    }
    *(_DWORD *)(a1 + 76) = a3;
    v13 = *a4;
    *(struct tagPOINT *)(a1 + 96) = a5;
    *(_BYTE *)(a1 + 72) = 1;
    *(struct tagRECT *)(a1 + 80) = v13;
  }
  else
  {
    v14 = a1 + 144;
    v15 = a2[1];
    v16 = a1 + 504;
    v29 = *a2;
    v17 = *((_QWORD *)a2 + 4);
    v18 = a1 + 144;
    v31 = v17;
    for ( j = v15; v18 != v16; v18 += 72LL )
    {
      if ( *(_DWORD *)v18 == (_DWORD)v29 )
        break;
      if ( !*(_DWORD *)v18 )
        break;
    }
    if ( v18 == v16 )
      v18 -= 72LL;
    *(_QWORD *)v32 = v17;
    v19 = v15;
    *(_DWORD *)&v32[8] = a3;
    v20 = v18 + 72;
    v21 = *a4;
    v22 = *a2;
    *(struct tagPOINT *)&v32[28] = a5;
    *(_OWORD *)v18 = v22;
    *(_OWORD *)(v18 + 16) = v19;
    *(struct tagRECT *)&v32[12] = v21;
    v23 = *(_OWORD *)&v32[16];
    *(_OWORD *)(v18 + 32) = *(_OWORD *)v32;
    v24 = *(_QWORD *)&v32[32];
    *(_OWORD *)(v18 + 48) = v23;
    *(_QWORD *)(v18 + 64) = v24;
    if ( v14 != v18 && v18 != v20 )
      std::_Rotate_unchecked1<NavigationEnableDeferrals::Deferral *>(v14, v18, v20);
  }
  return 0LL;
}
