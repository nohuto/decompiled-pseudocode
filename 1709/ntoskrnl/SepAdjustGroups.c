/*
 * XREFs of SepAdjustGroups @ 0x14045C1CC
 * Callers:
 *     NtAdjustGroupsToken @ 0x14045BE94 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 */

__int64 __fastcall SepAdjustGroups(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char *DestinationSid,
        _DWORD *a8,
        _DWORD *a9,
        bool *a10)
{
  unsigned int v11; // esi
  unsigned int v13; // ecx
  int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  char v19; // al
  PSID v20; // rbp
  _DWORD *v21; // r14
  int v23; // ecx
  ULONG v24; // ebp
  int v25; // r14d
  ULONG v26; // ebp
  __int64 v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+24h] [rbp-64h]
  PSID Sid1[2]; // [rsp+28h] [rbp-60h]
  unsigned int v31; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+98h] [rbp+10h]
  char v33; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]
  char v35; // [rsp+D0h] [rbp+48h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v31 = 0;
  *a9 = 0;
  v15 = 1;
  v29 = 1;
  if ( *(_DWORD *)(a1 + 124) <= 1u )
    goto LABEL_11;
  do
  {
    v16 = v15;
    v17 = *(_QWORD *)(a1 + 152);
    v18 = 2 * v16;
    *(_OWORD *)Sid1 = *(_OWORD *)(v17 + 8 * v18);
    if ( !a3 )
    {
      v28 = 0;
      v19 = 0;
      v35 = 0;
      if ( !a4 )
        goto LABEL_9;
      v20 = Sid1[0];
      v21 = (_DWORD *)(a5 + 8);
      while ( !v19 )
      {
        if ( RtlEqualSid(v20, *((PSID *)v21 - 1)) )
        {
          ++v31;
          v35 = 1;
          v23 = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8);
          if ( (((unsigned __int8)v23 ^ *(_BYTE *)v21) & 4) != 0 )
          {
            if ( (v23 & 1) != 0 )
              return 3221225565LL;
            if ( (v23 & 0x10) != 0 )
              return 3221226163LL;
            v24 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v14 += v24;
            if ( v32 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v24, DestinationSid, Sid1[0]);
                DestinationSid += v24;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) &= ~(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) |= *v21 & 4;
            }
            ++*a9;
            v20 = Sid1[0];
          }
        }
        v21 += 4;
        a4 = v34;
        ++v28;
        v19 = v35;
        if ( v28 >= v34 )
          goto LABEL_8;
      }
      goto LABEL_8;
    }
    v25 = *(_DWORD *)(v17 + 8 * v18 + 8) & 6;
    if ( ((v25 - 2) & 0xFFFFFFFD) == 0 )
    {
      v26 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
      v14 += v26;
      if ( a2 )
      {
        if ( a6 )
        {
          *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
          *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
          RtlCopySid(v26, DestinationSid, Sid1[0]);
          a4 = v34;
          DestinationSid += v26;
        }
        v27 = *(_QWORD *)(a1 + 152);
        if ( v25 == 2 )
          *(_DWORD *)(v27 + 8 * v18 + 8) |= 4u;
        else
          *(_DWORD *)(v27 + 8 * v18 + 8) &= ~4u;
      }
      ++*a9;
LABEL_8:
      a3 = v33;
    }
LABEL_9:
    a2 = v32;
    v15 = v29 + 1;
    v29 = v15;
  }
  while ( v15 < *(_DWORD *)(a1 + 124) );
  v13 = v31;
LABEL_11:
  if ( !a3 && v13 < a4 )
    v11 = 262;
  *a10 = *a9 && a2;
  if ( a6 )
    *a8 = v14 + 16 * *a9 + 8;
  return v11;
}
