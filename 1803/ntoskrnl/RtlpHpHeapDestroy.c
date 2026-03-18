/*
 * XREFs of RtlpHpHeapDestroy @ 0x140295244
 * Callers:
 *     ExCleanupSessionHeapManager @ 0x1401541E4 (ExCleanupSessionHeapManager.c)
 *     RtlHpHeapManagerCleanup @ 0x140292FE8 (RtlHpHeapManagerCleanup.c)
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x1400AC868 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x1400AC914 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 *     RtlpHpRegisterEnvironment @ 0x140295E0C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x140297B10 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x14029A4F8 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14029E758 (RtlpHpLargeAllocationDestroy.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  v18 = a1;
  v1 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 80);
  if ( (v3 & 1) != 0 && v4 )
    v4 ^= v1;
  v5 = v3 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 ^= v7;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v9 )
        break;
      v4 = v9;
    }
    LOBYTE(v3) = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v3 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = v18;
  v11 = v18 + 424;
  while ( *(_QWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup(v10 + 392, v11 ^ *(_QWORD *)v11);
    RtlpHpVsSubsegmentFree(v10 + 392, v12, 1u);
  }
  RtlpHpLfhContextCleanup(v18 + 512);
  RtlpHpSegContextCleanup(v18 + 112);
  RtlpHpSegContextCleanup(v18 + 232);
  v13 = *(_OWORD *)v18;
  v19 = *(_QWORD *)(v18 + 384) - v18;
  v14 = *(_DWORD *)(v18 + 68);
  v16 = v13;
  v17 = *(_OWORD *)v18;
  if ( (v14 & 1) != 0 )
    RtlpHpMetadataFree(v18, &v17);
  else
    RtlpHpFreeVA(&v18, &v19, BYTE1(v16) < 2u ? 16809984 : 0x8000, &v17);
  return RtlpHpRegisterEnvironment(&v16, 0LL);
}
