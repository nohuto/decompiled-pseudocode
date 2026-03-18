/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C011EB08
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E960 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0012018 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  if ( !*a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a1 + 24 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = v6 - 8;
    if ( !v7 )
    {
LABEL_5:
      LODWORD(v8) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, *a2) != 0 ? 2 : 0;
      goto LABEL_6;
    }
    do
    {
      if ( *(_DWORD *)(v7 + 24) == *(_DWORD *)(*a2 + 24) )
        break;
      v11 = *(_QWORD *)(v7 + 8);
      v7 = v11 - 8;
      if ( v11 == a1 + 24 )
        v7 = 0LL;
    }
    while ( v7 );
  }
  if ( !v7 )
    goto LABEL_5;
  LODWORD(v8) = v7 != *a2;
LABEL_6:
  v8 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v9, v7);
        WdLogEvent5_WdError(v13);
        if ( *a2 )
          (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v7);
      v14[3] = *(unsigned int *)(*a2 + 24);
      v14[4] = *a2;
      v14[5] = a1;
      WdLogEvent5_WdError(v14);
      if ( *a2 )
        (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
      return 3223192369LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v15 + 24) = *a2;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    if ( *a2 )
      (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
    return 3223192343LL;
  }
}
