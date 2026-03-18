/*
 * XREFs of TouchTargetingRankForRegion @ 0x1C023D628
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1C023CE74 (TouchTargetingRankForRect.c)
 */

__int64 __fastcall TouchTargetingRankForRegion(__int64 a1, struct tagRECT *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bp
  unsigned int RegionData; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int128 *v17; // rdi
  __int64 v18; // rsi
  __int128 v19; // xmm1
  unsigned __int16 v20; // cx
  int v22[4]; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-48h] BYREF
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF

  v9 = 4094;
  RegionData = GreGetRegionData(a1, 0LL, 0LL);
  v11 = RegionData;
  if ( RegionData )
  {
    v12 = Win32AllocPool((int)RegionData, 1920103253LL);
    v13 = v12;
    if ( v12 )
    {
      if ( (unsigned int)GreGetRegionData(a1, v11, v12) )
      {
        v16 = *(_DWORD *)(v13 + 8);
        v17 = (__int128 *)(v13 + 32);
        if ( v16 > 0 )
        {
          v18 = (unsigned int)v16;
          do
          {
            v19 = *v17;
            v23 = *a2;
            v24 = v19;
            v20 = TouchTargetingRankForRect((int *)&v24, &v23, a3, 0LL, v22, a5);
            if ( v20 < v9 )
            {
              v9 = v20;
              *a4 = *(_QWORD *)v22;
            }
            ++v17;
            --v18;
          }
          while ( v18 );
        }
      }
      Win32FreePool(v13, v14, v15);
    }
  }
  return v9;
}
