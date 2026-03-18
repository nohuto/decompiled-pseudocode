/*
 * XREFs of ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x180162AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z @ 0x180159274 (-SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z.c)
 *     ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x180161B8C (-GetReferenceStrings@CExpression@@QEBAPEAGXZ.c)
 *     ?GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ @ 0x180161BE0 (-GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ.c)
 */

void __fastcall CExpression::SetupDebugInfoSource(CExpression *this)
{
  __int64 v2; // rbx
  wchar_t *ReferenceStrings; // rax
  wchar_t **v4; // r8
  unsigned int v5; // edi
  unsigned int *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // edi
  wchar_t *i; // r15
  unsigned int *SourceHandleList; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  wchar_t **v14; // r8
  const unsigned __int16 *DebugInfo; // rax
  unsigned __int16 *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int16 *v20; // rbx
  __int64 v21; // [rsp+28h] [rbp-E0h]
  _BYTE v22[24]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF

  if ( *((_DWORD *)this + 96) )
  {
    *(_OWORD *)&v22[8] = *(_OWORD *)L"References: ";
    v23 = *(_QWORD *)L"es: ";
    LOWORD(v24) = aReferences[12];
    memset_0((char *)&v24 + 2, 0, 0x306uLL);
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)&v22[2 * v2 + 8] );
    ReferenceStrings = CExpression::GetReferenceStrings(this);
    if ( ReferenceStrings )
    {
      v9 = 0;
      for ( i = wcstok(ReferenceStrings, L";", v4); v9 < *((_DWORD *)this + 96); ++v9 )
      {
        if ( (unsigned int)v2 >= 0x190 )
          break;
        if ( i && *i )
        {
          SourceHandleList = CBaseExpression::GetSourceHandleList(this);
          *(_DWORD *)v22 = *(_DWORD *)(v12 + 8 * v13);
          LODWORD(v21) = SourceHandleList[*(unsigned int *)(v12 + 8 * v13 + 20)];
          StringCchPrintfW(
            (unsigned __int16 *)&v22[2 * (unsigned int)v2 + 8],
            (unsigned int)(400 - v2),
            (size_t *)L"{%ws, %u, %u},",
            i,
            v21,
            *(_OWORD *)v22,
            *(_QWORD *)&v22[16],
            v23,
            v24);
          v2 = -1LL;
          do
            ++v2;
          while ( *(_WORD *)&v22[2 * v2 + 8] );
          i = wcstok(0LL, L";", v14);
        }
      }
    }
    else
    {
      v5 = 0;
      do
      {
        if ( (unsigned int)v2 >= 0x190 )
          break;
        v6 = CBaseExpression::GetSourceHandleList(this);
        LODWORD(v21) = *(_DWORD *)(v7 + 8 * v8);
        StringCchPrintfW(
          (unsigned __int16 *)&v22[2 * (unsigned int)v2 + 8],
          (unsigned int)(400 - v2),
          (size_t *)L"{%u, %u},",
          v6[*(unsigned int *)(v7 + 8 * v8 + 20)],
          v21);
        v2 = -1LL;
        do
          ++v2;
        while ( *(_WORD *)&v22[2 * v2 + 8] );
        ++v5;
      }
      while ( v5 < *((_DWORD *)this + 96) );
    }
    DebugInfo = CBaseExpression::GetDebugInfo(this);
    v16 = (unsigned __int16 *)DebugInfo;
    v17 = -1LL;
    do
      ++v17;
    while ( DebugInfo[v17] );
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)&v22[2 * v18 + 8] );
    v19 = (unsigned int)(v17 + v18 + 2);
    v20 = (unsigned __int16 *)operator new(saturated_mul(v19, 2uLL));
    StringCchPrintfW(v20, (unsigned int)v19, (size_t *)L"%ws, %ws", v16, &v22[8]);
    CBaseExpression::SetDebugInfo(this, v20);
    WPF::ProcessHeapImpl::Free(v16);
  }
}
