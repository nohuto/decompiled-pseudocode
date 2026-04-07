/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x1800329DC
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180067F38 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // ebx
  CDWMDisplaySet *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // r11
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v2 = this;
  v3 = 0;
  for ( *((_DWORD *)this + 8) = 0; v3 < *((_DWORD *)v2 + 16); ++v3 )
  {
    v4 = *((_QWORD *)v2 + 5);
    v5 = *(_QWORD *)(v4 + 8LL * v3);
    if ( *(_BYTE *)(v5 + 220) )
    {
      if ( !*(_BYTE *)(v5 + 221) )
        goto LABEL_14;
      *((_DWORD *)v2 + 8) = v3;
    }
    if ( !*(_BYTE *)(v5 + 221) )
    {
LABEL_14:
      v10 = 0;
      if ( *((_DWORD *)v2 + 16) )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v4 + 8LL * v10);
          if ( *(_BYTE *)(v11 + 221) )
          {
            if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                    v5 + 56,
                                    v11 + 56) )
              break;
          }
          if ( ++v10 >= *((_DWORD *)v2 + 16) )
            goto LABEL_7;
        }
        *(_QWORD *)(v5 + 88) = v11;
      }
      continue;
    }
    *(_QWORD *)(v5 + 88) = v5;
LABEL_7:
    ;
  }
  v6 = *((_DWORD *)v2 + 16);
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)v2 + 5) + 8LL * v7);
      if ( !*(_QWORD *)(v8 + 88) )
        break;
      if ( *(_BYTE *)(v8 + 221) && *(_QWORD *)(v8 + 88) != v8 )
      {
        v12 = 404;
        goto LABEL_22;
      }
      if ( ++v7 >= v6 )
        return v1;
    }
    v12 = 392;
LABEL_22:
    v1 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA290, 1u, -2003304291, v12);
  }
  return v1;
}
