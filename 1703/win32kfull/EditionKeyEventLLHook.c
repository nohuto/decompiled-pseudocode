/*
 * XREFs of EditionKeyEventLLHook @ 0x1C00CAF60
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     IsUninterceptable @ 0x1C00EF944 (IsUninterceptable.c)
 *     IsSAS @ 0x1C00EFFC8 (IsSAS.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        unsigned __int64 *a12)
{
  unsigned __int8 v12; // dh
  unsigned __int8 v13; // r12^1
  __int64 Valid; // rax
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned __int8 v22; // ch
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v33; // [rsp+34h] [rbp-64h] BYREF
  int v34[4]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+48h] [rbp-50h]

  v13 = v12;
  v33 = a4;
  Valid = PhkFirstValid(a1, 13);
  v17 = Valid;
  if ( !Valid )
    return 0LL;
  if ( gpqForeground )
  {
    v18 = *(_QWORD *)(gpqForeground + 88LL);
    v19 = v18 ? *(_QWORD *)(v18 + 16) : *(_QWORD *)(gpqForeground + 64LL);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 376);
      if ( v20 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL)
        && (PVOID)grpdeskRitInput != grpdeskLogon
        && (unsigned int)HasHidTable(v19)
        && (*(_DWORD *)(*(_QWORD *)(v20 + 776) + 100LL) & 0x10) != 0 )
      {
        return 0LL;
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 1232);
  v22 = v13 | 0x20;
  v34[1] = a6;
  if ( a3 == a4 )
    v22 = v13;
  v34[0] = a5;
  v34[3] = a9;
  v35 = a10;
  v34[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | v22;
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1232) = -1;
    *(_DWORD *)(a1 + 1236) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1232) = *a12;
  }
  v23 = *(_QWORD *)(a1 + 1248);
  v24 = v33;
  *(_QWORD *)(a1 + 1248) = v34;
  if ( !xxxCallHook2(v17, 0, v24, v34, (int *)&v33)
    || (LOBYTE(v25) = a5, *(_QWORD *)(a1 + 1232) = v21, (unsigned int)IsSAS(v25, &v33))
    || IsUninterceptable(v31, a5) )
  {
    *(_QWORD *)(a1 + 1232) = v21;
    *(_QWORD *)(a1 + 1248) = v23;
    if ( a8 )
    {
      if ( gpqForeground )
      {
        v26 = *(_QWORD *)(gpqForeground + 380LL);
        v27 = *a12;
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v27 <= (unsigned int)v26 )
          {
            if ( (_DWORD)v27 != (_DWORD)v26
              || (v29 = HIDWORD(v27), v30 = HIDWORD(v26), (_DWORD)v29 != (_DWORD)v30)
              && (_DWORD)v30 != -1
              && (_DWORD)v29 != -1 )
            {
              if ( !a11 )
              {
                EtwTraceUIPIInputError(a1, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                return 1LL;
              }
            }
          }
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)(a1 + 1248) = v23;
  return 1LL;
}
