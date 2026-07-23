/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x1406EA184
 * Callers:
 *     RtlpComputeMergedAcl @ 0x1406EA05C (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlpCopyAces @ 0x140471BB0 (RtlpCopyAces.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        void *a5,
        __int64 a6,
        GENERIC_MAPPING *a7,
        int a8,
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  ULONG *v13; // r12
  PACL v14; // r15
  char v16; // r14
  char v17; // di
  unsigned int v18; // esi
  _DWORD *v19; // rax
  __int64 result; // rax
  int v21; // ebx
  bool v22; // r13
  unsigned int v23; // ecx
  ULONG v24; // ecx
  __int64 v25; // [rsp+50h] [rbp-68h]
  unsigned int v26[18]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+20h] BYREF

  v28 = 0;
  v26[0] = 0;
  v13 = a9;
  v14 = Acl;
  v16 = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v19 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v19 = 5120;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        LOBYTE(v18) = *a3;
      LOBYTE(v25) = 0;
      result = RtlpCopyAces((__int64)a3, a7, 2, 16, 1, a5, a6, (__int64)a5, a6, 1, v25, a8, &v28, v14);
LABEL_6:
      if ( (_DWORD)result == -1073741789 )
      {
        v16 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
      v17 = 0;
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v21 = a8;
    v22 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      LOBYTE(v25) = 0;
      result = RtlpCopyAces((__int64)a3, a7, 1, 0, 1, a5, a6, (__int64)a5, a6, 1, v25, a8, &v28, v14);
      if ( (_DWORD)result == -1073741789 )
      {
        v16 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
      v17 = *((_WORD *)a3 + 2) != 0 && v22;
    }
    else
    {
      v17 = a8 != 1;
      if ( a8 == 1 )
        return 3221225591LL;
    }
    if ( a1 )
    {
      if ( v18 <= (unsigned __int8)*a1 )
        LOBYTE(v18) = *a1;
      LOBYTE(v25) = 0;
      result = RtlpCopyAces((__int64)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, v25, v21, v26, v14);
      if ( (_DWORD)result == -1073741789 )
      {
        v16 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_31;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    LOBYTE(v25) = 1;
    result = RtlpCopyAces((__int64)a3, a7, 2, 0, 1, a5, a6, (__int64)a5, a6, 1, v25, a8, &v28, v14);
    goto LABEL_6;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_31:
  v23 = v28 + v26[0];
  if ( v28 + v26[0] || !v17 )
  {
    if ( (unsigned __int64)v23 + 8 > 0xFFFF )
      return 3221225597LL;
    v24 = v23 + 8;
    *v13 = v24;
    if ( v16 )
      return 3221225507LL;
    v14->AclSize = v24;
    v14->AclRevision = v18;
  }
  else
  {
    *v13 = 0;
  }
  return 0LL;
}
