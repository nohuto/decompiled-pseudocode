/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1405877FC
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AB5E0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ebp
  char v3; // di
  unsigned int *v4; // r14
  __int64 v5; // rsi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  HvpGetCellContextReinitialize((__int64)&v7);
  v2 = 0;
  v3 = 1;
  if ( !*(_DWORD *)(BugCheckParameter2 + 3040) )
  {
LABEL_5:
    v5 = 0LL;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v4 = (unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v2);
    v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, *v4, &v7);
    if ( !v5 )
      return 0;
    if ( *(_DWORD *)(v5 + 12) < *(_DWORD *)(*((_QWORD *)v4 + 1) + 28LL) )
      break;
LABEL_4:
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
    if ( ++v2 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
      goto LABEL_5;
  }
  if ( HvpMarkCellDirty(BugCheckParameter2, *v4, 0) )
  {
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(*((_QWORD *)v4 + 1) + 28LL);
    goto LABEL_4;
  }
  v3 = 0;
LABEL_6:
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  return v3;
}
