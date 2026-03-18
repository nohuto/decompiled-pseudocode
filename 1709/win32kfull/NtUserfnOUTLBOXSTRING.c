/*
 * XREFs of NtUserfnOUTLBOXSTRING @ 0x1C0100810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1C0100990 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTLBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  SIZE_T v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  int v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+4Ch] [rbp-3Ch]
  volatile void *v23; // [rsp+50h] [rbp-38h]

  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v10 = NtUserfnGETDBCSTEXTLENGTHS(a1, 394, a3, (_DWORD)a4, a5, a6, a7);
  v11 = -1LL;
  if ( v10 != -1 )
  {
    v12 = v10 + 1;
    v13 = (a7 << 31) | v22 & 0x7FFFFFFF;
    v22 = v13;
    v14 = v10 + 1;
    if ( !a7 )
      v14 = 2 * v12;
    v15 = (v13 ^ v14) & 0x7FFFFFFF ^ v13;
    v22 = v15;
    if ( (v15 & 0x7FFFFFFFu) < (unsigned int)v12 )
    {
      UserSetLastError(0LL, v12);
      return v11;
    }
    v21 = 0;
    v23 = a4;
    if ( (v15 & 0x7FFFFFFF) != 0 )
    {
      v16 = v15 >= 0;
      v17 = v15 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_12;
      v18 = (unsigned int)v15 >> 31;
      v16 = v18 ^ 1;
      v17 = (v18 ^ 1LL) + 1;
    }
    ProbeForWrite(a4, v17, v16 + 1);
LABEL_12:
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, int *, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            &v21,
            a5);
    v19 = *(_DWORD *)(a1 + 68);
    if ( (v19 & 0x40) == 0 && (v19 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v11;
}
