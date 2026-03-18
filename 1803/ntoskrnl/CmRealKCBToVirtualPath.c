/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1405C06B0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140565A58 (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1405BFEE4 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReparseToVirtualPath @ 0x1406F5694 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // r13
  _QWORD *v8; // rdi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int16 v20; // r8
  unsigned __int64 v21; // r9
  __int16 v22; // cx
  int v23; // edx
  _WORD *v24; // rax
  unsigned __int16 v25; // r15
  _QWORD *PoolWithTag; // rax
  __int16 v27; // r15
  char *v28; // rcx
  unsigned __int16 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int16 v32; // r8
  unsigned __int16 v33; // dx
  _WORD *v34; // r10
  __int64 v35; // r11
  __int16 v36; // ax
  _WORD *v37; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v38; // [rsp+28h] [rbp-38h] BYREF
  UNICODE_STRING v39; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  v7 = 0;
  v39.Buffer = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v37 = 0LL;
  CmpConstructNameWithStatus(a1, &v37);
  v8 = v37;
  if ( !v37 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    v37 = 0LL;
    CmpConstructNameWithStatus(v17, &v37);
    v18 = v37;
    if ( !v37 )
      return 3221225626LL;
    v19 = *(_QWORD *)(a1 + 72);
    v20 = *v37;
    v21 = v19 + 26;
    v22 = *(_WORD *)(v19 + 24);
    v23 = *(_DWORD *)v19 & 1;
    if ( v23 )
      v22 *= 2;
    v24 = 0LL;
    if ( !v23 )
      v24 = (_WORD *)v21;
    v37 = v24;
    v25 = v22 + v20 + 18;
    *(_QWORD *)&v38.Length = v21 & -(__int64)(v23 != 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x624E4D43u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v27 = v25 - 16;
      v28 = (char *)(PoolWithTag + 2);
      *(_WORD *)PoolWithTag = v27;
      *((_WORD *)PoolWithTag + 1) = v27;
      PoolWithTag[1] = PoolWithTag + 2;
      v29 = 0;
      if ( (*(_WORD *)v18 & 0xFFFE) != 0 )
      {
        do
        {
          v30 = v29++;
          *(_WORD *)(PoolWithTag[1] + 2 * v30) = *(_WORD *)(v18[1] + 2 * v30);
        }
        while ( v29 < (unsigned __int16)(*(_WORD *)v18 >> 1) );
        v28 = (char *)PoolWithTag[1];
      }
      *(_WORD *)&v28[2 * v29] = 92;
      v31 = *(_QWORD *)(a1 + 72);
      v32 = v29 + 1;
      v33 = 0;
      if ( *(_WORD *)(v31 + 24) )
      {
        v34 = v37;
        v35 = *(_QWORD *)&v38.Length;
        do
        {
          if ( (*(_DWORD *)v31 & 1) != 0 )
          {
            *(_WORD *)(v8[1] + 2LL * v32) = *(unsigned __int8 *)(v33 + v35);
            v36 = 1;
          }
          else
          {
            *(_WORD *)(v8[1] + 2LL * v32) = v34[(unsigned __int64)v33 >> 1];
            v36 = 2;
          }
          v33 += v36;
          ++v32;
          v31 = *(_QWORD *)(a1 + 72);
        }
        while ( v33 < *(_WORD *)(v31 + 24) );
      }
    }
    CmpFreeTransientPoolWithTag(v18, 0x624E4D43u);
    if ( !v8 )
      return 3221225626LL;
  }
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v39.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v39.Buffer = v12;
      if ( v12 )
      {
        Length = v39.Length;
        if ( v39.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              v39.Buffer = v12 + 1;
              Length = v39.Length - 2;
              v39.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x624E4D43u);
    a4->Buffer = v14;
    if ( v14 )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_22;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_22;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v38.Length = *v8,
            v38.Buffer = v15,
            v38.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v38),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v39), VirtualizationID < 0)) )
      {
LABEL_22:
        RtlFreeAnsiString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}
