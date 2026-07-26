/*
 * XREFs of ndisQueryOpenRSSParameters @ 0x1C0046FC8
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00C4530 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001CF9C (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  KIRQL v6; // r14
  const void *v7; // r12
  int v8; // r15d
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x9Bu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v2, a2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 2305412;
  if ( *(_WORD *)(v2 + 2702) )
  {
    v7 = *(const void **)(a1 + 488);
    if ( !v7 || (v3 = ndisCalculateRssParametersSize(*(_QWORD *)(a1 + 488), (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    else
    {
      v8 = Size;
      v3 = 0;
      if ( *(_DWORD *)(a2 + 48) >= (unsigned int)Size )
      {
        memmove(*(void **)(a2 + 40), v7, (unsigned int)Size);
        *(_DWORD *)(a2 + 52) = v8;
      }
      else
      {
        *(_DWORD *)(a2 + 56) = Size;
        v3 = -1073676268;
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x9Cu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v2, v3);
  return v3;
}
