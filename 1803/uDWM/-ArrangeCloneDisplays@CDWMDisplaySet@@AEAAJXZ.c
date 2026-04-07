/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180033E2C
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180034160 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006F454 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  CDWMDisplaySet *v3; // r10
  unsigned int i; // edi
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v8; // r14
  __int64 v9; // r11
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = this;
  for ( i = 0; i < v1; ++i )
  {
    v8 = *((_QWORD *)v3 + 5);
    v9 = *(_QWORD *)(v8 + 8LL * i);
    if ( *(_BYTE *)(v9 + 220) )
    {
      if ( !*(_BYTE *)(v9 + 221) )
      {
LABEL_15:
        v10 = 0;
        if ( v1 )
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v8 + 8LL * v10);
            if ( *(_BYTE *)(v11 + 221) )
            {
              if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                      v9 + 56,
                                      v11 + 56) )
                break;
            }
            if ( ++v10 >= *((_DWORD *)v3 + 16) )
              goto LABEL_5;
          }
          *(_QWORD *)(v9 + 88) = v11;
        }
        goto LABEL_5;
      }
      v1 = *((_DWORD *)v3 + 16);
      *((_DWORD *)v3 + 8) = i;
    }
    if ( !*(_BYTE *)(v9 + 221) )
      goto LABEL_15;
    *(_QWORD *)(v9 + 88) = v9;
LABEL_5:
    v1 = *((_DWORD *)v3 + 16);
  }
  v5 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)v3 + 5) + 8LL * v5);
      if ( !*(_QWORD *)(v6 + 88) )
        break;
      if ( *(_BYTE *)(v6 + 221) && *(_QWORD *)(v6 + 88) != v6 )
      {
        v12 = 404;
        goto LABEL_23;
      }
      if ( ++v5 >= *((_DWORD *)v3 + 16) )
        return v2;
    }
    v12 = 392;
LABEL_23:
    v2 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3788, 1u, -2003304291, v12);
  }
  return v2;
}
