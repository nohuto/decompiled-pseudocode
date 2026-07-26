/*
 * XREFs of ndisIovFreeVF @ 0x1C006C988
 * Callers:
 *     ndisOidPostIovFreeVF @ 0x1C006D510 (ndisOidPostIovFreeVF.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisIovFreeVF(_QWORD *P)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  KIRQL v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v2 = P;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x25u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, 0LL, P);
  if ( *((_DWORD *)v2 + 19) )
  {
    v1 = -1073741811;
  }
  else
  {
    v3 = v2[6];
    v4 = v2[7];
    v5 = v2[8];
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2886764;
    v7 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v8 = (_QWORD *)v2[1], (_QWORD *)*v8 != v2) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    --*(_DWORD *)(v3 + 4744);
    if ( v4 )
    {
      v9 = v2[2];
      if ( *(_QWORD **)(v9 + 8) != v2 + 2 || (v10 = (_QWORD *)v2[3], (_QWORD *)*v10 != v2 + 2) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      --*(_DWORD *)(v4 + 896);
    }
    if ( v5 )
    {
      v11 = v2[4];
      if ( *(_QWORD **)(v11 + 8) != v2 + 4 || (v12 = (_QWORD *)v2[5], (_QWORD *)*v12 != v2 + 4) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      --*(_DWORD *)(v5 + 72);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
    ExFreePoolWithTag(v2, 0);
    v2 = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v14 = v1;
    WPP_SF_qqd(0x26u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v2, v14);
  }
  return v1;
}
