/*
 * XREFs of sub_1800498D0 @ 0x1800498D0
 * Callers:
 *     sub_18004970C @ 0x18004970C (sub_18004970C.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     sub_180049BCC @ 0x180049BCC (sub_180049BCC.c)
 *     sub_18004A080 @ 0x18004A080 (sub_18004A080.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800498D0(
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
  unsigned int v15; // r13d
  _BYTE *v16; // r15
  unsigned int v17; // r12d
  char v18; // r14
  _BYTE *v19; // rbx
  unsigned int v20; // ecx
  char v22; // al
  unsigned int v23; // eax
  bool v24; // [rsp+88h] [rbp-19h]
  _BYTE v25[15]; // [rsp+89h] [rbp-18h] BYREF
  PVOID FirstFree[8]; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&v25[3] = 0LL;
  v15 = 0;
  v16 = 0LL;
  v25[1] = 0;
  v17 = 0;
  *a14 = 0;
  v18 = 0;
  v25[0] = 0;
  v24 = 0;
  if ( a2 )
  {
    v22 = Src[1];
    if ( (v22 & 4) == 0 && ((v22 & 1) != 0 || (v22 & 2) != 0) )
      v24 = 1;
  }
  if ( !RtlFirstFreeAce(Acl, FirstFree) )
    return 3221225597LL;
  v19 = FirstFree[0];
  if ( !FirstFree[0] )
    return 3221225597LL;
  if ( a2 )
  {
    if ( (Src[1] & 2) == 0 )
      goto LABEL_16;
  }
  else if ( (Src[1] & 1) == 0 )
  {
    goto LABEL_16;
  }
  v16 = FirstFree[0];
  if ( !(unsigned __int8)sub_180049BCC(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)FirstFree,
                           (__int64)&v25[7],
                           (__int64)Acl,
                           (__int64)a14,
                           (__int64)&v25[1],
                           (__int64)v25) )
    return 3221225597LL;
  v18 = v25[0];
  v17 = *(_DWORD *)&v25[7];
  if ( !v25[0] && *(_DWORD *)&v25[7] && v19 && (unsigned __int8)sub_18004A080(Acl, v19) )
  {
    *(_DWORD *)&v25[3] = v17;
    --Acl->AceCount;
    v17 = 0;
  }
  else
  {
    v19 = FirstFree[0];
  }
  v15 = v17;
LABEL_16:
  if ( !v24 )
    goto LABEL_17;
  if ( v17 && !v25[1] )
  {
    if ( !v18 )
    {
      v20 = *(_DWORD *)&v25[3];
      v16[1] |= Src[1] & 3;
      if ( a3 )
        v16[1] |= 0x10u;
      goto LABEL_18;
    }
LABEL_17:
    v20 = *(_DWORD *)&v25[3];
LABEL_18:
    *a11 = v15;
    *a13 = v20;
    return v18 != 0 ? 0xC0000023 : 0;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
    goto LABEL_17;
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
        if ( (unsigned __int8)sub_18004A080(Acl, v19) )
        {
          v20 = *(_DWORD *)&v25[3];
          --Acl->AceCount;
          v23 = *((unsigned __int16 *)Src + 1);
          if ( v20 <= v23 )
            v20 = *((unsigned __int16 *)Src + 1);
          v15 -= v23;
          goto LABEL_18;
        }
      }
    }
    goto LABEL_17;
  }
  return 3221225597LL;
}
