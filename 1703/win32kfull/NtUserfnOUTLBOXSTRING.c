/*
 * XREFs of NtUserfnOUTLBOXSTRING @ 0x1C00EA200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1C00EA380 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  SIZE_T v17; // rdx
  ULONG v18; // r8d
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
    if ( (v15 & 0x7FFFFFFFu) < v12 )
    {
      UserSetLastError(0LL);
      return v11;
    }
    v21 = 0;
    v23 = a4;
    if ( (v15 & 0x7FFFFFFF) != 0 )
    {
      v16 = -(__int64)(v15 < 0);
      v17 = v15 & 0x7FFFFFFF;
      v18 = v16 + 2;
    }
    else
    {
      if ( !a4 )
        goto LABEL_12;
      v18 = 2 - ((unsigned int)v15 >> 31 != 0);
      v17 = 2LL - ((unsigned int)v15 >> 31 != 0);
    }
    ProbeForWrite(a4, v17, v18);
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
