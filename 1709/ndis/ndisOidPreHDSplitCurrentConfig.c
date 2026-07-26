/*
 * XREFs of ndisOidPreHDSplitCurrentConfig @ 0x1C0045E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreHDSplitCurrentConfig(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r14
  unsigned __int8 v4; // di
  unsigned __int8 v5; // al
  KIRQL v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xD6u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
  }
  else if ( *(_QWORD *)a1 )
  {
    v5 = *(_BYTE *)(v1 + 32);
    v4 = 1;
    if ( (v5 > 6u || v5 == 6 && *(_BYTE *)(v1 + 33)) && *(_QWORD *)(v1 + 4296) )
    {
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x1Cu )
      {
        *(_DWORD *)(v3 + 56) = 28;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( !*(_DWORD *)(a1 + 40) )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v7 = *(_QWORD *)(v1 + 4296);
        *(_DWORD *)(v1 + 1856) = 2308263;
        v8 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v8 = *(_OWORD *)v7;
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 16);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(v7 + 24);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
        *(_DWORD *)(v3 + 56) = 28;
        *(_DWORD *)(v3 + 52) = 28;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0xD7u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
