/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02244A8
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0223CB0 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000BA7C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0046AC8 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r11
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
    v2 = *a2;
  }
  v7 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, v2[6]);
  if ( v7 )
    LODWORD(v9) = v7 != v8;
  else
    LODWORD(v9) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v8) != 0 ? 2 : 0;
  v9 = (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v10);
        WdLogEvent5_WdError(v11);
        v3 = -1073741823;
      }
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = (*a2)[6];
      v12[4] = *a2;
      v12[5] = a1;
      WdLogEvent5_WdError(v12);
      v3 = -1071774927;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = *a2;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdError(v13);
    v3 = -1071774953;
  }
  auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
