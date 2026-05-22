/*
 * XREFs of ??0LegacyInputSinkData@@QEAA@PEAX@Z @ 0x18000D178
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ??$_Copy_impl@VLegacyInputSinkData@@@_Any_big_RTTI@std@@SAPEAXQEBX@Z @ 0x18000D0A0 (--$_Copy_impl@VLegacyInputSinkData@@@_Any_big_RTTI@std@@SAPEAXQEBX@Z.c)
 * Callees:
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D72C (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
LegacyInputSinkData *__fastcall LegacyInputSinkData::LegacyInputSinkData(LegacyInputSinkData *this, void *a2)
{
  __int64 v4; // rsi
  DWORD LastError; // ebx
  int v6; // eax
  void *v7; // rdx
  unsigned int v8; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 28) = 0;
  memset_0((char *)this + 32, 0, 0x40uLL);
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 88) = 0;
  memset_0((char *)this + 96, 0, 0x40uLL);
  *((_BYTE *)this + 96) = 0;
  *((_BYTE *)this + 152) = 0;
  memset_0((char *)this + 160, 0, 0x40uLL);
  *((_BYTE *)this + 160) = 0;
  *((_BYTE *)this + 216) = 0;
  memset_0((char *)this + 224, 0, 0x40uLL);
  *((_BYTE *)this + 224) = 0;
  *((_BYTE *)this + 280) = 0;
  memset_0((char *)this + 288, 0, 0x40uLL);
  *((_BYTE *)this + 288) = 0;
  *((_BYTE *)this + 344) = 0;
  v4 = *(_QWORD *)this;
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v4);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  v6 = NtDuplicateCompositionInputSink(a2, this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(retaddr, v7, v8, (const char *)(unsigned int)v6, -2);
    JUMPOUT(0x18000D2A4LL);
  }
  return this;
}
