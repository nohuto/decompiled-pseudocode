/*
 * XREFs of UmfdQueryTrueTypeTable @ 0x1C003F460
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v12; // eax
  unsigned int v13; // ecx
  struct _SLIST_ENTRY v15[2]; // [rsp+28h] [rbp-59h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h]
  int v17; // [rsp+58h] [rbp-29h]
  int v18; // [rsp+5Ch] [rbp-25h]
  int v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+64h] [rbp-1Dh]
  __int64 v21; // [rsp+68h] [rbp-19h]
  _QWORD *v22; // [rsp+70h] [rbp-11h]
  _DWORD *v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+80h] [rbp-1h]
  __int128 v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+17h]

  if ( a7 )
    *a7 = 0LL;
  if ( a8 )
    *a8 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v15, 10);
  v26 = 0LL;
  v15[0].Next = (struct _SLIST_ENTRY *)&QueryTrueTypeTableRequest::`vftable';
  v20 = a5;
  v23 = a8;
  v21 = a6;
  v25 = 0LL;
  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v22 = a7;
  v24 = -1;
  v12 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), v15);
  v13 = v24;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
