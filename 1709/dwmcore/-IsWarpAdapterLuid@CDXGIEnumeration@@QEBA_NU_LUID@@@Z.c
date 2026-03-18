/*
 * XREFs of ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18008C458
 * Callers:
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800111DC (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x180077D44 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDXGIEnumeration::IsWarpAdapterLuid(CDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r10d
  char v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 8);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * v4);
      if ( a2 == *(_QWORD *)(v6 + 336) )
        break;
      if ( ++v4 >= v2 )
        return v3;
    }
    if ( *(_DWORD *)(v6 + 296) == 5140 )
      return *(_DWORD *)(v6 + 300) == 140;
  }
  return v3;
}
