/*
 * XREFs of ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18014ACC8
 * Callers:
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18014A6DC (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18014A8D4 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x18019BC14 (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18014A16C (--$emplace_back@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18014A27C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 */

void __fastcall StartLayout::SelectionData::Copy(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rbp
  LPVOID *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  const WCHAR **v9; // r14
  unsigned __int64 v10; // rbx
  const WCHAR *v11; // rcx
  _DWORD *v12; // r14
  _DWORD *i; // rbp
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  v5 = 0LL;
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  v6 = (LPVOID *)*((_QWORD *)this + 1);
  v7 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 2) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CoTaskMemFree(*v6);
      ++v5;
      ++v6;
    }
    while ( v5 != v7 );
  }
  v8 = 0LL;
  v2[1] = *v2;
  v9 = (const WCHAR **)*((_QWORD *)a2 + 1);
  v10 = (unsigned __int64)(*((_QWORD *)a2 + 2) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *((_QWORD *)a2 + 2) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *v9;
      ppwsz = 0LL;
      if ( SHStrDupW(v11, &ppwsz) >= 0 )
        std::vector<unsigned short *>::emplace_back<unsigned short * const &>((__int64)v2, (__int64 *)&ppwsz);
      ++v9;
      ++v8;
    }
    while ( v8 != v10 );
  }
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  v12 = (_DWORD *)*((_QWORD *)a2 + 5);
  for ( i = (_DWORD *)*((_QWORD *)a2 + 4); i != v12; ++i )
    std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
      (__int64)this + 32,
      i);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)this + 61) = *((_BYTE *)a2 + 61);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
}
