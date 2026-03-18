/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x140595330
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  HvpGetCellContextReinitialize((__int64)&v8);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, v3, &v8);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 0xC) != 0xC )
    {
      if ( HvpMarkCellDirty(BugCheckParameter2, v3, 0) )
        *(_WORD *)(v6 + 2) |= 0xCu;
      else
        v5 = -1073741670;
    }
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
  }
  else
  {
    v5 = -1073741670;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  return v5;
}
