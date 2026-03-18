/*
 * XREFs of EditionKeyEventLLHook @ 0x1C0055E90
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     IsGpqForegroundAccessibleExplicit @ 0x1C00560C4 (IsGpqForegroundAccessibleExplicit.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     IsUninterceptable @ 0x1C00F9DFC (IsUninterceptable.c)
 *     IsSAS @ 0x1C00FA4E0 (IsSAS.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        _QWORD *a12)
{
  unsigned __int8 v12; // dh
  unsigned __int8 v13; // r12^1
  __int64 Valid; // rax
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned __int8 v22; // ch
  __int64 v23; // rsi
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v27; // rcx
  int v29; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v30[4]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h]

  v13 = v12;
  v29 = a4;
  Valid = PhkFirstValid(a1, 13LL);
  v17 = Valid;
  if ( !Valid )
    return 0LL;
  if ( gpqForeground )
  {
    v18 = *(_QWORD *)(gpqForeground + 120LL);
    v19 = v18 ? *(_QWORD *)(v18 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 400);
      if ( v20 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL)
        && (PVOID)grpdeskRitInput != grpdeskLogon
        && (unsigned int)HasHidTable(v19)
        && (*(_DWORD *)(*(_QWORD *)(v20 + 784) + 100LL) & 0x10) != 0 )
      {
        return 0LL;
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 1320);
  v22 = v13 | 0x20;
  v30[1] = a6;
  if ( a3 == a4 )
    v22 = v13;
  v30[0] = a5;
  v30[3] = a9;
  v31 = a10;
  v30[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | v22;
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1320) = -1;
    *(_DWORD *)(a1 + 1324) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1320) = *a12;
  }
  v23 = *(_QWORD *)(a1 + 1336);
  v24 = v29;
  *(_QWORD *)(a1 + 1336) = v30;
  if ( !xxxCallHook2(v17, 0, v24, (unsigned int)v30, (__int64)&v29)
    || (LOBYTE(v25) = a5, *(_QWORD *)(a1 + 1320) = v21, (unsigned int)IsSAS(v25, &v29))
    || IsUninterceptable(v27, a5) )
  {
    *(_QWORD *)(a1 + 1320) = v21;
    *(_QWORD *)(a1 + 1336) = v23;
    if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(a8, *a12, a11) )
    {
      MSGLUA_GPQFOREGROUND();
      return 1LL;
    }
    return 0LL;
  }
  *(_QWORD *)(a1 + 1336) = v23;
  return 1LL;
}
