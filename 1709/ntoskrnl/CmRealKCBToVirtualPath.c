/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1406909A4
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, UNICODE_STRING *a3)
{
  char v6; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r13
  __int16 v13; // dx
  __int16 v14; // ax
  unsigned __int16 v15; // r15
  _QWORD *PoolWithTag; // rax
  __int16 v17; // r15
  unsigned __int16 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  __int16 v25; // ax
  NTSTATUS VirtualizationID; // ebx
  unsigned int v27; // ebx
  __m128i v28; // xmm0
  wchar_t *v29; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v31; // rax
  wchar_t *v32; // rax
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
  v8 = *(_QWORD **)&v33.Length;
  if ( !*(_QWORD *)&v33.Length )
  {
    v9 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)&v33.Length = 0LL;
    CmpConstructNameWithStatus(v9, &v33);
    v10 = *(_QWORD **)&v33.Length;
    if ( !*(_QWORD *)&v33.Length )
      return 3221225626LL;
    v11 = *(_QWORD *)(a1 + 72);
    v12 = 0LL;
    v13 = **(_WORD **)&v33.Length;
    *(_QWORD *)&v33.Length = 0LL;
    if ( (*(_DWORD *)v11 & 1) != 0 )
    {
      *(_QWORD *)&v33.Length = v11 + 26;
      v14 = 2 * *(_WORD *)(v11 + 24);
    }
    else
    {
      v14 = *(_WORD *)(v11 + 24);
      v12 = v11 + 26;
    }
    v15 = v14 + v13 + 18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x624E4D43u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = v15 - 16;
      PoolWithTag[1] = PoolWithTag + 2;
      *(_WORD *)PoolWithTag = v17;
      *((_WORD *)PoolWithTag + 1) = v17;
      v18 = 0;
      if ( (*(_WORD *)v10 & 0xFFFE) != 0 )
      {
        do
        {
          v19 = v18++;
          *(_WORD *)(PoolWithTag[1] + 2 * v19) = *(_WORD *)(v10[1] + 2 * v19);
        }
        while ( v18 < (unsigned __int16)(*(_WORD *)v10 >> 1) );
      }
      v20 = v18;
      v21 = 0;
      v22 = v18 + 1;
      *(_WORD *)(PoolWithTag[1] + 2 * v20) = 92;
      v23 = *(_QWORD *)(a1 + 72);
      if ( *(_WORD *)(v23 + 24) )
      {
        v24 = *(_QWORD *)&v33.Length;
        do
        {
          if ( (*(_DWORD *)v23 & 1) != 0 )
          {
            *(_WORD *)(v8[1] + 2LL * v22) = *(unsigned __int8 *)(v21 + v24);
            v25 = 1;
          }
          else
          {
            *(_WORD *)(v8[1] + 2LL * v22) = *(_WORD *)(v12 + 2 * ((unsigned __int64)v21 >> 1));
            v25 = 2;
          }
          v21 += v25;
          ++v22;
          v23 = *(_QWORD *)(a1 + 72);
        }
        while ( v21 < *(_WORD *)(v23 + 24) );
      }
    }
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
    if ( !v8 )
      return 3221225626LL;
    v6 = 0;
  }
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v27 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v28 = *a2;
      *(_QWORD *)&v34.Length = a2->m128i_i64[0];
      v29 = (wchar_t *)_mm_srli_si128(v28, 8).m128i_u64[0];
      v34.Buffer = v29;
      if ( v29 )
      {
        Length = v34.Length;
        if ( v34.Length )
        {
          if ( *v29 )
          {
            if ( *v29 == 92 )
            {
              v34.Buffer = v29 + 1;
              Length = v34.Length - 2;
              v34.Length -= 2;
            }
            if ( Length )
            {
              v27 += Length + 2;
              v6 = 1;
            }
          }
        }
      }
    }
    v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v27, 0x624E4D43u);
    a3->Buffer = v31;
    if ( v31 )
    {
      a3->MaximumLength = v27;
      a3->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_38;
      VirtualizationID = RtlAppendUnicodeStringToString(a3, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_38;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v32 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v33.Length = *v8,
            v33.Buffer = v32,
            v33.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a3, &v33),
            VirtualizationID < 0)
        || v6
        && ((VirtualizationID = RtlAppendUnicodeToString(a3, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a3, &v34), VirtualizationID < 0)) )
      {
LABEL_38:
        RtlFreeUnicodeString(a3);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)VirtualizationID;
}
