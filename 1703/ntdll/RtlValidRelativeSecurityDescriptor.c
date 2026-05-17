/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x18007B6B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     sub_18007B82C @ 0x18007B82C (sub_18007B82C.c)
 */

char __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  char v3; // r11
  unsigned int v4; // edi
  __int16 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (unsigned int)a2 < 0x14 )
    return 0;
  if ( *(_BYTE *)a1 != 1 )
    return 0;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 >= 0 )
    return 0;
  v7 = *(unsigned int *)(a1 + 4);
  v8 = 12LL;
  if ( (_DWORD)v7 )
  {
    if ( !(unsigned __int8)sub_18007B82C(v7, a2, 12LL, &v21) )
      return 0;
    if ( *(_BYTE *)(a1 + v9) != 1 )
      return 0;
    v10 = *(_BYTE *)(a1 + v9 + 1);
    if ( v10 > 0xFu || v21 < 4 * (unsigned int)v10 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v11 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v11 )
  {
    if ( !(unsigned __int8)sub_18007B82C(v11, v4, v8, &v21) )
      return 0;
    if ( *(_BYTE *)(a1 + v12) != 1 )
      return 0;
    v13 = *(_BYTE *)(a1 + v12 + 1);
    if ( v13 > 0xFu || v21 < 4 * (unsigned int)v13 + 8 )
      return 0;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (v6 & 4) == 0
    || (v14 = *(unsigned int *)(a1 + 16), !(_DWORD)v14)
    || (unsigned __int8)sub_18007B82C(v14, v4, 8LL, &v21)
    && (v16 = a1 + v15, v21 >= *(unsigned __int16 *)(v16 + 2))
    && RtlValidAcl(v16) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      return 1;
    v18 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v18 )
      return 1;
    if ( (unsigned __int8)sub_18007B82C(v18, v4, 8LL, &v21) )
    {
      v20 = a1 + v19;
      if ( v21 >= *(unsigned __int16 *)(v20 + 2) )
      {
        if ( RtlValidAcl(v20) )
          return 1;
      }
    }
  }
  return 0;
}
