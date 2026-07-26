/*
 * XREFs of ndisQueryOpenRSSParameters @ 0x1C0048250
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B59A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C0015F34 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  KIRQL v6; // r14
  __int64 v7; // rcx
  size_t v8; // r15
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x98u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v2, a2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 2305351;
  if ( *(_WORD *)(v2 + 2702) )
  {
    v7 = *(_QWORD *)(a1 + 488);
    if ( !v7 || (v3 = ndisCalculateRssParametersSize(v7, (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    else
    {
      v8 = (unsigned int)Size;
      v3 = 0;
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)Size )
      {
        *(_DWORD *)(a2 + 56) = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(*(void **)(a2 + 40), *(const void **)(a1 + 488), v8);
        *(_DWORD *)(a2 + 52) = v8;
      }
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
  }
  else
  {
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x99u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v2, v3);
  return v3;
}
