/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18000F7D8
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180022B68 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18000FA70 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18000FF70 (--1CDWMDisplay@@AEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??4CDWMDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x1800724C0 (--4CDWMDisplay@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800725C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180072624 (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 */

bool __fastcall CDWMDisplaySet::IsEquivalentRotated(CDWMDisplaySet *this, const struct CDWMDisplaySet *a2)
{
  int v2; // eax
  bool v3; // di
  CDWMDisplay *v6; // r14
  _DWORD *v7; // r10
  int v8; // r15d
  int v9; // ecx
  bool v11; // bl
  __int128 v12; // xmm6
  __int64 v13; // r10
  int v14; // edx
  bool IsEquivalentTo; // bl
  __int128 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+38h] [rbp-C8h]
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+134h] [rbp+34h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+150h] [rbp+50h]

  v2 = *((_DWORD *)a2 + 16);
  v3 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v21 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  if ( *((_DWORD *)this + 16) == v2
    && (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, &v19) >= 0
    && (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, &v16) >= 0
    && v21 == 1
    && v18 == 1 )
  {
    v6 = *(CDWMDisplay **)v19;
    v7 = *(_DWORD **)v16;
    if ( *(_DWORD *)(*(_QWORD *)v19 + 168LL) == *(_DWORD *)(*(_QWORD *)v16 + 168LL)
      && *((_DWORD *)v6 + 43) == v7[43]
      && *((_DWORD *)v6 + 44) == v7[44] )
    {
      v8 = *((_DWORD *)v6 + 52);
      v9 = v7[52];
      if ( v8 != v9 )
      {
        v11 = ((v8 - 2) & 0xFFFFFFFD) == 0;
        v23 = *((_OWORD *)this + 1);
        if ( ((v9 - 2) & 0xFFFFFFFD) == 0 )
          v11 = ((v8 - 2) & 0xFFFFFFFD) != 0;
        if ( v11 )
        {
          LODWORD(v22) = *((_DWORD *)a2 + 5);
          DWORD1(v22) = *((_DWORD *)a2 + 4);
          DWORD2(v22) = *((_DWORD *)a2 + 7);
          HIDWORD(v22) = *((_DWORD *)a2 + 6);
          v12 = v22;
        }
        else
        {
          v12 = *((_OWORD *)a2 + 1);
          v22 = v12;
        }
        if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(&v23, &v22) )
        {
          CDWMDisplay::operator=(&v24, v13);
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
          v24 = 1;
          v29 = v8;
          if ( v11 )
          {
            v14 = v27;
            v27 = v28;
            v28 = v14;
            v26 = v12;
          }
          IsEquivalentTo = CDWMDisplay::IsEquivalentTo(v6, (const struct CDWMDisplay *)&v24);
          CDWMDisplay::~CDWMDisplay((CDWMDisplay *)&v24);
          v3 = IsEquivalentTo;
        }
      }
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
  return v3;
}
