/*
 * XREFs of NtUserfnOUTSTRING @ 0x1C00DF280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTSTRING(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  BOOL v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v17; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v19; // [rsp+50h] [rbp-18h]

  v11 = (((a7 << 31) | v18 & 0x7FFFFFFF) ^ a3) & 0x7FFFFFFF ^ ((a7 << 31) | v18 & 0x7FFFFFFF);
  v18 = v11;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v18 = v11;
  }
  v12 = v11 & 0x7FFFFFFF;
  if ( v12 < a3 )
  {
    v14 = 0LL;
    UserSetLastError(0LL, v12);
    return v14;
  }
  v17 = 0;
  v19 = a4;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    v13 = (v11 & 0x80000000) == 0;
  }
  else
  {
    if ( !a4 )
      goto LABEL_10;
    v15 = v11 >> 31;
    v13 = (v11 & 0x80000000) == 0;
    v12 = (v15 ^ 1) + 1;
  }
  ProbeForWrite(a4, v12, v13 + 1);
LABEL_10:
  v14 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          &v17,
          a5);
  if ( !v14 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v14;
}
