/*
 * XREFs of ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800111DC
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18008C458 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetDisplayInfo(CPartitionVerticalBlankScheduler *this)
{
  CDisplaySet *v2; // rbx
  __int64 v3; // rcx
  bool IsWarpAdapterLuid; // al
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rcx
  CDisplaySet *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  CDisplayManager::GetCurrentDisplaySet(this, &v8);
  v2 = v8;
  if ( v8 )
  {
    v3 = *((_QWORD *)v8 + 2);
    IsWarpAdapterLuid = 0;
    if ( *(_DWORD *)(v3 + 88) )
      IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(
                            (CDXGIEnumeration *)v3,
                            *(struct _LUID *)(**(_QWORD **)(v3 + 64) + 336LL));
    v5 = 0LL;
    for ( *((_BYTE *)this + 24792) = IsWarpAdapterLuid; (unsigned int)v5 < *((_DWORD *)v2 + 18); v5 = (unsigned int)(v6 + 1) )
    {
      if ( (unsigned int)v5 >= 0x10 )
        break;
      if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)v2 + 6) + 8 * v5)) )
        *((_BYTE *)this + 24793) = *(_BYTE *)(v7 + 208);
    }
    CDisplaySet::Release(v2);
  }
}
