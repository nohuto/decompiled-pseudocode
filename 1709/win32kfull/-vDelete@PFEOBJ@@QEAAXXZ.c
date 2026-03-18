/*
 * XREFs of ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C003C0B0
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C0299E90 (-vDeletePFE@@YAXPEAVPFE@@@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 */

void __fastcall PFEOBJ::vDelete(PFEOBJ *this, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v4; // rbx
  bool v5; // zf
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD **)this;
  v4 = *(_QWORD *)(**(_QWORD **)this + 88LL);
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 44LL) == 2;
  v10 = v4;
  if ( v5 && (v9 = v2[2]) != 0 && (*(_DWORD *)(v9 + 4) & 0x10) != 0 )
  {
    Win32FreePool(v9, a2, v2);
  }
  else
  {
    v6 = (void *)v2[2];
    if ( v6 )
    {
      if ( !*(_QWORD *)(v4 + 3040) )
        goto LABEL_6;
      PDEVOBJ::Free((PDEVOBJ *)&v10, v6, v2[3]);
    }
  }
  if ( *(_QWORD *)(v4 + 3040) )
  {
    PDEVOBJ::Free((PDEVOBJ *)&v10, *(void **)(*(_QWORD *)this + 32LL), *(_QWORD *)(*(_QWORD *)this + 40LL));
    v2 = *(_QWORD **)this;
    v6 = *(void **)(*(_QWORD *)this + 48LL);
    if ( v6 != &gkpNothing )
      PDEVOBJ::Free((PDEVOBJ *)&v10, v6, v2[7]);
  }
LABEL_6:
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v7 )
  {
    Win32FreePool(v7, v6, v2);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v8 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v8 )
  {
    Win32FreePool(v8, v6, v2);
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  }
  *(_QWORD *)this = 0LL;
}
