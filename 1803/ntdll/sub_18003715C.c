/*
 * XREFs of sub_18003715C @ 0x18003715C
 * Callers:
 *     sub_180036F7C @ 0x180036F7C (sub_180036F7C.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     sub_180044080 @ 0x180044080 (sub_180044080.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18003715C(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        PACL Acl,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int v17; // r14d
  char v18; // si
  _BYTE *v19; // rbx
  char v20; // al
  char v22; // al
  __int64 v23; // rcx
  char v24; // al
  unsigned int v25; // eax
  bool v26; // [rsp+88h] [rbp-19h]
  _BYTE v27[15]; // [rsp+89h] [rbp-18h] BYREF
  __int64 v28; // [rsp+98h] [rbp-9h]

  v28 = 0LL;
  v15 = 0;
  *(_DWORD *)&v27[3] = 0;
  v16 = 0;
  v27[1] = 0;
  v17 = 0;
  *a14 = 0;
  v18 = 0;
  v27[0] = 0;
  v26 = 0;
  if ( a2 )
  {
    v22 = Src[1];
    if ( (v22 & 4) == 0 && ((v22 & 1) != 0 || (v22 & 2) != 0) )
      v26 = 1;
  }
  if ( !RtlFirstFreeAce(Acl, (PVOID *)&v27[7]) )
    return 3221225597LL;
  v19 = *(_BYTE **)&v27[7];
  if ( !*(_QWORD *)&v27[7] )
    return 3221225597LL;
  v20 = Src[1];
  if ( a2 )
  {
    if ( (v20 & 2) == 0 )
      goto LABEL_7;
  }
  else if ( (v20 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v28 = *(_QWORD *)&v27[7];
  if ( !(unsigned __int8)sub_180037A68(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)&v27[7],
                           (__int64)&v27[3],
                           (__int64)Acl,
                           (__int64)a14,
                           (__int64)&v27[1],
                           (__int64)v27) )
    return 3221225597LL;
  v18 = v27[0];
  v17 = *(_DWORD *)&v27[3];
  if ( !v27[0] && *(_DWORD *)&v27[3] && v19 && (unsigned __int8)sub_180044080(Acl, v19) )
  {
    v16 = v17;
    --Acl->AceCount;
    v17 = 0;
  }
  else
  {
    v19 = *(_BYTE **)&v27[7];
  }
  v15 = v17;
LABEL_7:
  if ( !v26 )
    goto LABEL_8;
  if ( v17 && !v27[1] )
  {
    if ( !v18 )
    {
      v23 = v28;
      v24 = *(_BYTE *)(v28 + 1) | Src[1] & 3;
      *(_BYTE *)(v28 + 1) = v24;
      if ( a3 )
        *(_BYTE *)(v23 + 1) = v24 | 0x10;
    }
    goto LABEL_8;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_8:
    *a11 = v15;
    *a13 = v16;
    return v18 != 0 ? 0xC0000023 : 0;
  }
  v15 += *((unsigned __int16 *)Src + 1);
  if ( v15 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v19 )
    {
      v18 = 1;
    }
    else if ( !v18 )
    {
      memmove(v19, Src, *((unsigned __int16 *)Src + 1));
      v19[1] |= 8u;
      ++Acl->AceCount;
      if ( a3 )
      {
        v19[1] |= 0x10u;
        if ( (unsigned __int8)sub_180044080(Acl, v19) )
        {
          --Acl->AceCount;
          v25 = *((unsigned __int16 *)Src + 1);
          v15 -= v25;
          if ( v16 <= v25 )
            v16 = *((unsigned __int16 *)Src + 1);
        }
      }
    }
    goto LABEL_8;
  }
  return 3221225597LL;
}
