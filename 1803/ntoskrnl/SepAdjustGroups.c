/*
 * XREFs of SepAdjustGroups @ 0x140546C58
 * Callers:
 *     NtAdjustGroupsToken @ 0x140546920 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
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
        int *a9,
        char *a10)
{
  unsigned int v11; // ebp
  char v13; // r10
  char v14; // r14
  ULONG v15; // edx
  unsigned int v16; // r8d
  char v17; // bl
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  PSID v24; // r14
  _DWORD *v25; // r15
  __int64 v27; // rdx
  int v28; // ecx
  ULONG v29; // r14d
  int v30; // r15d
  ULONG v31; // r14d
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  int v36; // [rsp+28h] [rbp-60h]
  PSID Sid1[2]; // [rsp+30h] [rbp-58h]
  ULONG v38; // [rsp+90h] [rbp+8h]
  unsigned int v41; // [rsp+A8h] [rbp+20h]
  char v42; // [rsp+D0h] [rbp+48h]

  v41 = a4;
  v11 = 0;
  v13 = a2;
  v14 = a3;
  v15 = 0;
  v16 = 0;
  *a9 = 0;
  v17 = 1;
  v18 = 0;
  v38 = 0;
  v19 = 1;
  v34 = 0;
  v36 = 1;
  if ( *(_DWORD *)(a1 + 124) <= 1u )
    goto LABEL_11;
  do
  {
    v20 = v19;
    v21 = *(_QWORD *)(a1 + 152);
    v22 = 2 * v20;
    *(_OWORD *)Sid1 = *(_OWORD *)(v21 + 8 * v22);
    if ( !v14 )
    {
      v35 = 0;
      v23 = 0;
      v42 = 0;
      if ( !a4 )
        goto LABEL_9;
      v24 = *(PSID *)(v21 + 8 * v22);
      v25 = (_DWORD *)(a5 + 8);
      while ( !v23 )
      {
        if ( RtlEqualSid(v24, *((PSID *)v25 - 1)) )
        {
          v27 = *(_QWORD *)(a1 + 152);
          ++v34;
          v42 = 1;
          v28 = *(_DWORD *)(v27 + 8 * v22 + 8);
          if ( ((*(_BYTE *)v25 ^ *(_BYTE *)(v27 + 8 * v22 + 8)) & 4) != 0 )
          {
            if ( (v28 & 1) != 0 )
              return 3221225565LL;
            if ( (v28 & 0x10) != 0 )
              return 3221226163LL;
            v29 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v38 += v29;
            if ( a2 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v29, DestinationSid, Sid1[0]);
                v27 = *(_QWORD *)(a1 + 152);
                DestinationSid += v29;
              }
              *(_DWORD *)(v27 + 8 * v22 + 8) &= ~(*(_DWORD *)(v27 + 8 * v22 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v22 + 8) |= *v25 & 4;
            }
            ++*a9;
            v24 = Sid1[0];
          }
        }
        v25 += 4;
        a4 = v41;
        ++v35;
        v23 = v42;
        if ( v35 >= v41 )
          goto LABEL_8;
      }
      goto LABEL_8;
    }
    v30 = *(_DWORD *)(v21 + 8 * v22 + 8) & 6;
    if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
    {
      v31 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
      v38 = v31 + v15;
      if ( v13 )
      {
        if ( a6 )
        {
          *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
          *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
          RtlCopySid(v31, DestinationSid, Sid1[0]);
          v21 = *(_QWORD *)(a1 + 152);
          a4 = v41;
          DestinationSid += v31;
        }
        v32 = *(_DWORD *)(v21 + 8 * v22 + 8);
        if ( v30 == 2 )
          v33 = v32 | 4;
        else
          v33 = v32 & 0xFFFFFFFB;
        *(_DWORD *)(v21 + 8 * v22 + 8) = v33;
      }
      ++*a9;
LABEL_8:
      v14 = a3;
    }
LABEL_9:
    v15 = v38;
    v19 = v36 + 1;
    v13 = a2;
    v36 = v19;
  }
  while ( v19 < *(_DWORD *)(a1 + 124) );
  v18 = *a9;
  v16 = v34;
LABEL_11:
  if ( !v14 && v16 < a4 )
    v11 = 262;
  if ( !v18 || !v13 )
    v17 = 0;
  *a10 = v17;
  if ( a6 )
    *a8 = 16 * *a9 + 8 + v15;
  return v11;
}
