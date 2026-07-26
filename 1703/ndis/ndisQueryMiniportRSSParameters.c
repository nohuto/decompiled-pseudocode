/*
 * XREFs of ndisQueryMiniportRSSParameters @ 0x1C0049A90
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00BC5E0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001676C (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  KIRQL v5; // r14
  const void *v6; // r12
  int v7; // r15d
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x87u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2304877;
  if ( *(_WORD *)(a1 + 2698) )
  {
    v6 = *(const void **)(a1 + 552);
    if ( !v6 || (v3 = ndisCalculateRssParametersSize(*(_QWORD *)(a1 + 552), (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    else
    {
      v7 = Size;
      v3 = 0;
      if ( *(_DWORD *)(a2 + 48) >= (unsigned int)Size )
      {
        memmove(*(void **)(a2 + 40), v6, (unsigned int)Size);
        *(_DWORD *)(a2 + 52) = v7;
      }
      else
      {
        *(_DWORD *)(a2 + 56) = Size;
        v3 = -1073676268;
      }
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x88u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v3);
  return v3;
}
