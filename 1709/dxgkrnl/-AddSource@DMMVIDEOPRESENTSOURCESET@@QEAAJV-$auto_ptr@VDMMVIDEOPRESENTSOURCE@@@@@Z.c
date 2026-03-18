/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C011E888
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E6C0 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C00130F0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0013138 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax

  v2 = 0;
  if ( !*a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( v5 )
    LODWORD(v7) = v5 != v6;
  else
    LODWORD(v7) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v6) != 0 ? 2 : 0;
  v7 = (unsigned int)v7;
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v8);
        WdLogEvent5_WdError(v11);
        v2 = -1073741823;
      }
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v12[3] = *((unsigned int *)*a2 + 6);
      v12[4] = *a2;
      v12[5] = a1;
      WdLogEvent5_WdError(v12);
      v2 = -1071774927;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = *a2;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdError(v13);
    v2 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
  return v2;
}
