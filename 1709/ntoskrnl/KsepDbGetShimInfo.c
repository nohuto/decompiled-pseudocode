/*
 * XREFs of KsepDbGetShimInfo @ 0x1405E8B58
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x140546A34 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x140546C0C (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 *     SdbFindFirstStringIndexedTag @ 0x14054A6A4 (SdbFindFirstStringIndexedTag.c)
 *     KsepDbGetSdbString @ 0x1405E8DD0 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1405E8E04 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x1405E8E4C (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x1405E8EF4 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  _QWORD *v6; // r13
  int SdbString; // esi
  __int64 v8; // r12
  __m128i *Paged; // rax
  __int128 v10; // xmm6
  __m128i *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r9
  void *v14; // rbx
  unsigned int FirstStringIndexedTag; // eax
  int v16; // eax
  __int64 v17; // rbx
  unsigned int FirstTag; // eax
  __m128i *v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r8
  char *v26; // r9
  __int128 v27; // xmm0
  __int64 v29; // [rsp+28h] [rbp-89h]
  __int64 v30; // [rsp+30h] [rbp-81h]
  __int64 v31; // [rsp+38h] [rbp-79h] BYREF
  __int128 v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h]
  char v36[16]; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v37[10]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-9h]

  *(_QWORD *)&v32 = 0LL;
  v33 = 0LL;
  v2 = a1;
  v35 = a1;
  v3 = 0LL;
  v38 = 0uLL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v32);
  v6 = (_QWORD *)v32;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    HIDWORD(v31) = 0;
    v3 = (__int64 *)Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v4 )
    {
      v10 = v38;
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v34 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = (void *)v6[1];
        LODWORD(v32) = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, v37);
        v16 = -(int)SdbTagIDToTagRef(v6, v14, FirstStringIndexedTag, &v32);
        if ( (v16 != 0 ? v32 : 0) == 0 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v6, v16 != 0 ? (unsigned int)v32 : 0, &v33, &v31) )
        {
          v17 = v33;
          FirstTag = SdbFindFirstTag(v33, v31, 36880);
          if ( !FirstTag )
            break;
          v32 = v10;
          v19 = (__m128i *)SdbReadGUIDTag(v36, v17, FirstTag, &v32, v29, v30, v31);
          v20 = *v19;
          v21 = v19->m128i_i64[0] - v38;
          if ( !v21 )
            v21 = _mm_srli_si128(v20, 8).m128i_u64[0] - v38;
          if ( !v21 )
            break;
          v22 = v31;
          v11[-4] = v20;
          v23 = SdbFindFirstTag(v17, v22, 24579);
          if ( !v23 )
            break;
          SdbString = KsepDbGetSdbString(v17, v23, &v3[10 * HIDWORD(v31) + 4]);
          if ( SdbString < 0 )
            break;
          v24 = SdbFindFirstTag(v17, v31, 16407);
          if ( !v24 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v17, v24, 0);
        }
        v11 += 5;
        ++HIDWORD(v31);
        v12 = v34;
        if ( HIDWORD(v31) >= (unsigned int)v4 )
        {
          v2 = v35;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v4 )
      {
        v25 = (_DWORD *)(v2 + 64);
        v26 = (char *)v3 - v2;
        do
        {
          *v25 = *(_DWORD *)((char *)v25 + (_QWORD)v26);
          v27 = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 32);
          v25 += 20;
          *((_OWORD *)v25 - 7) = v27;
          *((_OWORD *)v25 - 9) = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 144);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  if ( v6 )
    KseShimDatabaseClose(v6);
  if ( SdbString < 0 )
    KsepDbFreeDriverShims(v3, v4);
  else
    KsepPoolFreePaged(v3);
  return (unsigned int)SdbString;
}
