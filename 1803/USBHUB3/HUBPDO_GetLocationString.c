/*
 * XREFs of HUBPDO_GetLocationString @ 0x1C0016A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfExW @ 0x1C00107A4 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall HUBPDO_GetLocationString(__int64 a1, wchar_t **a2)
{
  unsigned int v2; // ebx
  wchar_t *PoolWithTag; // rax
  __int64 v6; // rcx
  wchar_t *v7; // rdi
  NTSTATUS v8; // eax
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-20h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x64334855u);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = RtlStringCchPrintfExW(
           PoolWithTag,
           0xAuLL,
           0LL,
           &pcchRemaining,
           0x200u,
           L"USB(%d)",
           *(unsigned __int16 *)(v6 + 200));
    if ( v8 < 0 )
    {
      LODWORD(pszFormat) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x6Au,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        pszFormat);
    }
    *a2 = v7;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 1432),
      2u,
      5u,
      0x69u,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      0);
    return (unsigned int)-1073741670;
  }
  return v2;
}
