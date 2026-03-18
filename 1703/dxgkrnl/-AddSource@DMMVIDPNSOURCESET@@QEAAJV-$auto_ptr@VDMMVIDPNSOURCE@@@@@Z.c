/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00F481C
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000C92C (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  if ( !*a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1, *(_DWORD *)(*a2 + 24LL));
  if ( v6 )
    LODWORD(v9) = v6 != (_QWORD)v8;
  else
    LODWORD(v9) = Set<DMMVIDPNSOURCE>::Add(a1, v8) != 0 ? 2 : 0;
  v9 = (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v10, v7);
        WdLogEvent5_WdError(v13);
        if ( *a2 )
          (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v7);
      v14[3] = *(unsigned int *)(*a2 + 24LL);
      v14[4] = *a2;
      v14[5] = a1;
      WdLogEvent5_WdError(v14);
      if ( *a2 )
        (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
      return 3223192369LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9, v7);
    *(_QWORD *)(v15 + 24) = *a2;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    if ( *a2 )
      (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
    return 3223192343LL;
  }
}
