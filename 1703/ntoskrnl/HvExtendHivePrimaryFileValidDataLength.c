/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x14066C518
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     CmpFileFlush @ 0x14066A86C (CmpFileFlush.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 *     HvViewMapIsRangePinned @ 0x140675CE4 (HvViewMapIsRangePinned.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x140675F9C (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  char IsRangePinned; // r14
  int v7; // ebx
  char v8; // al
  unsigned __int8 (__fastcall *v9)(__int64, _QWORD, int *, __int64, int *, int); // rax
  int v11; // [rsp+40h] [rbp-38h] BYREF
  int *v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
  {
    v15 = 0;
    v11 = a2 - 4;
    v12 = &v14;
    v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, int))(a1 + 40);
    v14 = -16843010;
    v13 = 4;
    if ( !v9(a1, 0LL, &v11, 1LL, &v15, a3) )
      return (unsigned int)-1073741491;
    v8 = CmpFileFlushAndPurge(a1, 0);
LABEL_9:
    if ( v8 )
      return 0;
    return (unsigned int)-1073741491;
  }
  v4 = a2 - 4;
  v5 = a1 + 200;
  IsRangePinned = HvViewMapIsRangePinned(a1 + 200, (unsigned int)(a2 - 4));
  if ( !IsRangePinned )
  {
    v7 = HvViewMapPinForFileOffset(v5, v4, 4LL);
    if ( v7 < 0 )
      return (unsigned int)v7;
    *(_DWORD *)HvViewMapAddressForFileOffset(v5, v4) = -16843010;
  }
  v7 = HvViewMapFlush(v5, v4, 4LL);
  if ( !IsRangePinned )
    HvViewMapUnpinForFileOffset(v5, v4, 4LL);
  if ( v7 >= 0 )
  {
    v8 = CmpFileFlush(a1, 0);
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
