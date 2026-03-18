/*
 * XREFs of xxxKENLSProcs @ 0x1C004E240
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxKENLSProcs(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v6; // r10
  int v7; // r9d
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int8 v10; // al

  v2 = 0;
  if ( !gpKbdNlsTbl )
    return 1LL;
  v6 = *(_QWORD *)(gpKbdNlsTbl + 8);
  if ( !v6 )
    return 1LL;
  v7 = *(_DWORD *)(gpKbdNlsTbl + 4);
  if ( !v7 )
    return 1LL;
  while ( 1 )
  {
    v8 = v7 - 1;
    if ( *(_BYTE *)(132LL * (unsigned int)(v7 - 1) + v6) == *(_BYTE *)(a1 + 2) )
      break;
    --v7;
    if ( !v8 )
      return 1LL;
  }
  v9 = 132LL * (unsigned int)(v7 - 1) + v6;
  v10 = *(_BYTE *)(v9 + 1);
  if ( v10 < 3u )
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))(&aNLSVKFProc)[v10])(v9, a1, a2);
  return v2;
}
