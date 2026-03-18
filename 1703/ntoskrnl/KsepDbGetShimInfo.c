/*
 * XREFs of KsepDbGetShimInfo @ 0x140599338
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     KseShimDatabaseClose @ 0x1404B5110 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x1404B5204 (KsepDbFreeDriverShims.c)
 *     SdbFindFirstStringIndexedTag @ 0x1404B569C (SdbFindFirstStringIndexedTag.c)
 *     KseShimDatabaseOpen @ 0x1404B5F48 (KseShimDatabaseOpen.c)
 *     KsepDbGetSdbString @ 0x1405995B0 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1405995E4 (SdbReadGUIDTag.c)
 *     SdbTagIDToTagRef @ 0x1405D4354 (SdbTagIDToTagRef.c)
 *     SdbTagRefToTagID @ 0x1405D4EB4 (SdbTagRefToTagID.c)
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
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r8
  char *v26; // r9
  __int128 v27; // xmm0
  unsigned int v29; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-75h]
  __int128 v31; // [rsp+48h] [rbp-69h] BYREF
  __int64 v32; // [rsp+58h] [rbp-59h] BYREF
  __int64 v33; // [rsp+60h] [rbp-51h]
  __int64 v34; // [rsp+68h] [rbp-49h]
  char v35[16]; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v36[10]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-9h]

  *(_QWORD *)&v31 = 0LL;
  v32 = 0LL;
  v2 = a1;
  v34 = a1;
  v3 = 0LL;
  v37 = 0uLL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v31);
  v6 = (_QWORD *)v31;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v30 = 0;
    v3 = (__int64 *)Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v4 )
    {
      v10 = v37;
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v33 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = (void *)v6[1];
        LODWORD(v31) = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, v36);
        v16 = -(int)SdbTagIDToTagRef(v6, v14, FirstStringIndexedTag, &v31);
        if ( (v16 != 0 ? v31 : 0) == 0 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v6, v16 != 0 ? (unsigned int)v31 : 0, &v32, &v29) )
        {
          v17 = v32;
          FirstTag = SdbFindFirstTag(v32, v29, 36880);
          if ( !FirstTag )
            break;
          v31 = v10;
          v19 = (__m128i *)SdbReadGUIDTag(v35, v17, FirstTag, &v31);
          v20 = *v19;
          v21 = v19->m128i_i64[0] - v37;
          if ( !v21 )
            v21 = _mm_srli_si128(v20, 8).m128i_u64[0] - v37;
          if ( !v21 )
            break;
          v22 = v29;
          v11[-4] = v20;
          v23 = SdbFindFirstTag(v17, v22, 24579);
          if ( !v23 )
            break;
          SdbString = KsepDbGetSdbString(v17, v23, &v3[10 * v30 + 4]);
          if ( SdbString < 0 )
            break;
          v24 = SdbFindFirstTag(v17, v29, 16407);
          if ( !v24 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v17, v24, 0);
        }
        v11 += 5;
        ++v30;
        v12 = v33;
        if ( v30 >= (unsigned int)v4 )
        {
          v2 = v34;
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
