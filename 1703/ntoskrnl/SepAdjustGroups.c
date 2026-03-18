/*
 * XREFs of SepAdjustGroups @ 0x14046D980
 * Callers:
 *     NtAdjustGroupsToken @ 0x14046D64C (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
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
  __int64 v23; // rax
  int v24; // ecx
  ULONG v25; // ebp
  int v26; // r14d
  ULONG v27; // ebp
  __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+24h] [rbp-64h]
  PSID Sid1[2]; // [rsp+28h] [rbp-60h]
  unsigned int v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+98h] [rbp+10h]
  char v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]
  char v36; // [rsp+D0h] [rbp+48h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v32 = 0;
  *a9 = 0;
  v15 = 1;
  v30 = 1;
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
      v29 = 0;
      v19 = 0;
      v36 = 0;
      if ( !a4 )
        goto LABEL_9;
      v20 = Sid1[0];
      v21 = (_DWORD *)(a5 + 8);
      while ( !v19 )
      {
        if ( RtlEqualSid(v20, *((PSID *)v21 - 1)) )
        {
          v23 = *(_QWORD *)(a1 + 152);
          ++v32;
          v36 = 1;
          v24 = *(_DWORD *)(v23 + 8 * v18 + 8);
          if ( ((*(_BYTE *)v21 ^ *(_BYTE *)(v23 + 8 * v18 + 8)) & 4) != 0 )
          {
            if ( (v24 & 1) != 0 )
              return 3221225565LL;
            if ( (v24 & 0x10) != 0 )
              return 3221226163LL;
            v25 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v14 += v25;
            if ( v33 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v25, DestinationSid, Sid1[0]);
                DestinationSid += v25;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) &= ~(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) |= *v21 & 4;
            }
            ++*a9;
            v20 = Sid1[0];
          }
        }
        v21 += 4;
        a4 = v35;
        ++v29;
        v19 = v36;
        if ( v29 >= v35 )
          goto LABEL_8;
      }
      goto LABEL_8;
    }
    v26 = *(_DWORD *)(v17 + 8 * v18 + 8) & 6;
    if ( ((v26 - 2) & 0xFFFFFFFD) == 0 )
    {
      v27 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
      v14 += v27;
      if ( a2 )
      {
        if ( a6 )
        {
          *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
          *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
          RtlCopySid(v27, DestinationSid, Sid1[0]);
          a4 = v35;
          DestinationSid += v27;
        }
        v28 = *(_QWORD *)(a1 + 152);
        if ( v26 == 2 )
          *(_DWORD *)(v28 + 8 * v18 + 8) |= 4u;
        else
          *(_DWORD *)(v28 + 8 * v18 + 8) &= ~4u;
      }
      ++*a9;
LABEL_8:
      a3 = v34;
    }
LABEL_9:
    a2 = v33;
    v15 = v30 + 1;
    v30 = v15;
  }
  while ( v15 < *(_DWORD *)(a1 + 124) );
  v13 = v32;
LABEL_11:
  if ( !a3 && v13 < a4 )
    v11 = 262;
  *a10 = *a9 && a2;
  if ( a6 )
    *a8 = v14 + 16 * *a9 + 8;
  return v11;
}
