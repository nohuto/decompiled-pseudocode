/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1404D8D90
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, UNICODE_STRING *a3)
{
  char v6; // r14
  _QWORD *v7; // rsi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v9; // ebx
  __m128i v10; // xmm0
  wchar_t *v11; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r13
  __int16 v20; // dx
  __int16 v21; // ax
  unsigned __int16 v22; // r15
  _QWORD *PoolWithTag; // rax
  __int16 v24; // r15
  unsigned __int16 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r10
  __int16 v32; // ax
  UNICODE_STRING v33; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v34; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&v34.Length = 0LL;
  v6 = 0;
  v34.Buffer = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  *(_QWORD *)&v33.Length = 0LL;
  CmpConstructNameWithStatus(a1, &v33);
  v7 = *(_QWORD **)&v33.Length;
  if ( !*(_QWORD *)&v33.Length )
  {
    v16 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)&v33.Length = 0LL;
    CmpConstructNameWithStatus(v16, &v33);
    v17 = *(_QWORD **)&v33.Length;
    if ( !*(_QWORD *)&v33.Length )
      return 3221225626LL;
    v18 = *(_QWORD *)(a1 + 72);
    v19 = 0LL;
    v20 = **(_WORD **)&v33.Length;
    *(_QWORD *)&v33.Length = 0LL;
    if ( (*(_DWORD *)v18 & 1) != 0 )
    {
      *(_QWORD *)&v33.Length = v18 + 26;
      v21 = 2 * *(_WORD *)(v18 + 24);
    }
    else
    {
      v21 = *(_WORD *)(v18 + 24);
      v19 = v18 + 26;
    }
    v22 = v21 + v20 + 18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x624E4D43u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v24 = v22 - 16;
      PoolWithTag[1] = PoolWithTag + 2;
      *(_WORD *)PoolWithTag = v24;
      *((_WORD *)PoolWithTag + 1) = v24;
      v25 = 0;
      if ( (*(_WORD *)v17 & 0xFFFE) != 0 )
      {
        do
        {
          v26 = v25++;
          *(_WORD *)(PoolWithTag[1] + 2 * v26) = *(_WORD *)(v17[1] + 2 * v26);
        }
        while ( v25 < (unsigned __int16)(*(_WORD *)v17 >> 1) );
      }
      v27 = v25;
      v28 = 0;
      v29 = v25 + 1;
      *(_WORD *)(PoolWithTag[1] + 2 * v27) = 92;
      v30 = *(_QWORD *)(a1 + 72);
      if ( *(_WORD *)(v30 + 24) )
      {
        v31 = *(_QWORD *)&v33.Length;
        do
        {
          if ( (*(_DWORD *)v30 & 1) != 0 )
          {
            *(_WORD *)(v7[1] + 2LL * v29) = *(unsigned __int8 *)(v28 + v31);
            v32 = 1;
          }
          else
          {
            *(_WORD *)(v7[1] + 2LL * v29) = *(_WORD *)(v19 + 2 * ((unsigned __int64)v28 >> 1));
            v32 = 2;
          }
          v28 += v32;
          ++v29;
          v30 = *(_QWORD *)(a1 + 72);
        }
        while ( v28 < *(_WORD *)(v30 + 24) );
      }
    }
    CmpFreeTransientPoolWithTag(v17, 0x624E4D43u);
    if ( !v7 )
      return 3221225626LL;
    v6 = 0;
  }
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v9 = *(unsigned __int16 *)v7 + Source.Length + 38;
    if ( a2 )
    {
      v10 = *a2;
      *(_QWORD *)&v34.Length = a2->m128i_i64[0];
      v11 = (wchar_t *)_mm_srli_si128(v10, 8).m128i_u64[0];
      v34.Buffer = v11;
      if ( v11 )
      {
        Length = v34.Length;
        if ( v34.Length )
        {
          if ( *v11 )
          {
            if ( *v11 == 92 )
            {
              v34.Buffer = v11 + 1;
              Length = v34.Length - 2;
              v34.Length -= 2;
            }
            if ( Length )
            {
              v9 += Length + 2;
              v6 = 1;
            }
          }
        }
      }
    }
    v13 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x624E4D43u);
    a3->Buffer = v13;
    if ( v13 )
    {
      a3->MaximumLength = v9;
      a3->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_21;
      VirtualizationID = RtlAppendUnicodeStringToString(a3, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_21;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v14 = (wchar_t *)(v7[1] + 18LL),
            *(_QWORD *)&v33.Length = *v7,
            v33.Buffer = v14,
            v33.Length = *(_WORD *)v7 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a3, &v33),
            VirtualizationID < 0)
        || v6
        && ((VirtualizationID = RtlAppendUnicodeToString(a3, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a3, &v34), VirtualizationID < 0)) )
      {
LABEL_21:
        RtlFreeUnicodeString(a3);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)VirtualizationID;
}
