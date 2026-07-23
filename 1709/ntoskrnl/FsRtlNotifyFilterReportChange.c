/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x14044CD00
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x1406B23F0 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1406B2450 (FsRtlNotifyReportChange.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     PsChargePoolQuota @ 0x140108060 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyUpdateBuffer @ 0x14044D630 (FsRtlNotifyUpdateBuffer.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1405675BC (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x14071E010 (RtlxOemStringToUnicodeSize.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r10
  PLIST_ENTRY v12; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Flink; // rcx
  _QWORD *v16; // rdi
  char v17; // r11
  char v18; // r15
  PSTRING v19; // rbx
  __int16 v20; // r8
  unsigned int v21; // r13d
  _QWORD *v22; // rcx
  unsigned __int16 v23; // cx
  int v24; // r14d
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  PVOID v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r10
  PVOID PoolWithTag; // rax
  USHORT v32; // cx
  __int16 v33; // ax
  __int16 *v34; // r9
  unsigned __int16 v35; // dx
  __int16 v36; // ax
  char *v37; // rax
  bool v38; // zf
  unsigned __int8 (__fastcall *v39)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v40)(_QWORD, PVOID); // rax
  __int16 v41; // r8
  char *v42; // r9
  int v43; // r8d
  int v44; // edx
  USHORT v45; // cx
  __int16 v46; // ax
  char v47; // r10
  int v48; // edx
  int v49; // r9d
  unsigned int v50; // r8d
  unsigned __int8 v51; // bl
  unsigned __int16 *v52; // r11
  char *v53; // r8
  unsigned __int16 *v54; // r11
  ULONG v55; // eax
  int v56; // r14d
  unsigned __int16 v57; // dx
  ULONG v58; // eax
  ULONG v59; // eax
  char v60; // [rsp+40h] [rbp-E8h]
  USHORT v61; // [rsp+42h] [rbp-E6h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-DCh]
  unsigned __int16 v63; // [rsp+50h] [rbp-D8h]
  int v64; // [rsp+54h] [rbp-D4h]
  _QWORD *v65; // [rsp+60h] [rbp-C8h]
  OEM_STRING OemString; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+80h] [rbp-A8h]
  char *v68; // [rsp+88h] [rbp-A0h]
  int v69; // [rsp+90h] [rbp-98h]
  unsigned int v70; // [rsp+94h] [rbp-94h]
  int v71; // [rsp+98h] [rbp-90h]
  OEM_STRING v72; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v73; // [rsp+B0h] [rbp-78h]
  _QWORD *v74; // [rsp+B8h] [rbp-70h]
  _QWORD *v75; // [rsp+C0h] [rbp-68h]
  _QWORD *v76; // [rsp+C8h] [rbp-60h]
  _WORD v77[4]; // [rsp+D0h] [rbp-58h] BYREF
  char *Buffer; // [rsp+D8h] [rbp-50h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v67 = 0LL;
  v68 = 0LL;
  *(_QWORD *)&v72.Length = 0LL;
  v72.Buffer = 0LL;
  *(_QWORD *)&OemString.Length = 0LL;
  OemString.Buffer = 0LL;
  v60 = 0;
  v71 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v68 = 0LL;
  v72.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v11 = FullTargetName;
    v12 = NotifyList;
  }
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v61 = v67;
  Length = v72.Length;
  v63 = OemString.Length;
  while ( 1 )
  {
    v76 = p_Flink;
    v65 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v16 = p_Flink - 4;
    v75 = p_Flink - 4;
    if ( v11 )
    {
      if ( *(_WORD *)v16[17] && (*((_DWORD *)v16 + 19) & FilterMatch) != 0 )
      {
        v19 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v32 = v10;
          v77[0] = v10;
          v33 = *((unsigned __int8 *)v16 + 144);
          if ( v10 != v33 )
          {
            v32 = v10 - v33;
            v77[0] = v10 - v33;
          }
          v77[1] = v32;
          v19 = (PSTRING)v77;
          NormalizedParentName = (PSTRING)v77;
          p_Flink = v65;
        }
        v34 = (__int16 *)v16[17];
        v35 = *v34;
        if ( v19->Length >= (unsigned __int16)*v34 )
        {
          if ( v19->Length == v35 )
          {
            v18 = 1;
            goto LABEL_57;
          }
          v36 = *((_WORD *)v16 + 36);
          if ( (v36 & 1) != 0 )
          {
            if ( (v36 & 0x10) == 0 )
            {
              v37 = v19->Buffer;
              v38 = *((_BYTE *)v16 + 144) == 1 ? v37[v35] == 92 : *(_WORD *)&v37[v35] == 92;
              if ( !v38 )
                goto LABEL_37;
            }
            v18 = 0;
LABEL_57:
            if ( !memcmp(*((const void **)v34 + 1), v19->Buffer, v35)
              && (v18
               || (v39 = (unsigned __int8 (__fastcall *)(_QWORD, PVOID, _QWORD))v16[2]) == 0LL
               || v39(v16[1], TargetContext, v16[3])) )
            {
              v40 = (unsigned __int8 (__fastcall *)(_QWORD, PVOID))v16[8];
              if ( !v40 || !FilterContext || v40(v16[1], FilterContext) )
              {
                v11 = FullTargetName;
                v17 = v60;
                goto LABEL_10;
              }
            }
LABEL_36:
            v12 = NotifyList;
            v11 = FullTargetName;
LABEL_37:
            p_Flink = v65;
          }
        }
      }
    }
    else if ( TargetContext == (PVOID)v16[3] )
    {
      OemString.Buffer = 0LL;
      v63 = 0;
      OemString.Length = 0;
      v17 = 1;
      v60 = 1;
      v18 = 0;
      v19 = NormalizedParentName;
LABEL_10:
      v20 = *((_WORD *)v16 + 36);
      if ( (v20 & 2) == 0 )
      {
        v21 = *((_DWORD *)v16 + 24);
        if ( v21 )
        {
          v74 = 0LL;
          if ( *((_DWORD *)v16 + 25) )
          {
            v21 = *((_DWORD *)v16 + 25);
          }
          else
          {
            v22 = (_QWORD *)v16[6];
            if ( v22 != v16 + 6 )
            {
              v74 = v22 - 21;
              v21 = *(_DWORD *)(v22[2] + 8LL);
            }
          }
          if ( v18 )
          {
            v23 = 0;
            v63 = 0;
            OemString.Length = 0;
          }
          else if ( v17 )
          {
            v23 = v63;
          }
          else
          {
            v41 = v20 & 0x10;
            if ( v41 || (v42 = v19->Buffer, v42 != v11->Buffer) )
            {
              if ( v68 )
              {
                v45 = v61;
              }
              else
              {
                v68 = v11->Buffer;
                v45 = v10;
                v61 = v10;
                LOWORD(v67) = v10;
                v46 = *((unsigned __int8 *)v16 + 144);
                if ( v10 != v46 )
                {
                  v45 = v10 - v46;
                  v61 = v10 - v46;
                  LOWORD(v67) = v10 - v46;
                }
                WORD1(v67) = v45;
              }
              v47 = 0;
              v48 = 0;
              if ( v41 )
              {
                v53 = v68;
              }
              else
              {
                v49 = 1;
                v69 = 1;
                v50 = 0;
                v70 = 0;
                v51 = *((_BYTE *)v16 + 144);
                if ( v51 == 1 )
                {
                  while ( 1 )
                  {
                    v52 = (unsigned __int16 *)v16[17];
                    if ( v50 >= *v52 )
                      break;
                    if ( *(_BYTE *)(v50 + *((_QWORD *)v52 + 1)) == 92 )
                      v69 = ++v49;
                    v70 = ++v50;
                  }
                  v53 = v68;
                  while ( v68[v48] != 92 || (unsigned __int8)++v47 != v49 )
                    ++v48;
                }
                else
                {
                  while ( 1 )
                  {
                    v54 = (unsigned __int16 *)v16[17];
                    if ( v50 >= *v54 >> 1 )
                      break;
                    if ( *(_WORD *)(*((_QWORD *)v54 + 1) + 2LL * v50) == 92 )
                      v69 = ++v49;
                    v70 = ++v50;
                  }
                  v53 = v68;
                  while ( *(_WORD *)&v68[2 * v48] != 92 || (unsigned __int8)++v47 != v49 )
                    ++v48;
                  v48 *= v51;
                }
                v45 = v61;
                v17 = v60;
              }
              v64 = *((unsigned __int8 *)v16 + 144) + v48;
              OemString.Buffer = &v53[v64];
              v23 = v45 - v64;
            }
            else
            {
              v43 = *(unsigned __int16 *)v16[17];
              v44 = *((unsigned __int8 *)v16 + 144);
              OemString.Buffer = &v42[v44 + v43];
              v23 = v19->Length - v44 - v43;
            }
            v63 = v23;
            OemString.Length = v23;
            OemString.MaximumLength = v23;
          }
          v24 = 12;
          if ( v17 )
          {
            v25 = StreamName->Length + 12;
          }
          else
          {
            if ( !v18 )
            {
              if ( *((_BYTE *)v16 + 144) == 1 )
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                  v55 = RtlxOemStringToUnicodeSize(&OemString);
                else
                  v55 = 2 * v23 + 2;
                v56 = v55 + 10;
              }
              else
              {
                v56 = v23 + 12;
              }
              v24 = v56 + 2;
            }
            if ( v72.Buffer )
            {
              v57 = Length;
            }
            else
            {
              v72.Buffer = &FullTargetName->Buffer[TargetNameOffset];
              v57 = FullTargetName->Length - TargetNameOffset;
              Length = v57;
              v72.Length = v57;
              v72.MaximumLength = v57;
            }
            if ( *((_BYTE *)v16 + 144) == 1 )
            {
              if ( (_BYTE)NlsMbOemCodePageTag )
                v58 = RtlxOemStringToUnicodeSize(&v72);
              else
                v58 = 2 * v57 + 2;
              v24 -= 2;
            }
            else
            {
              v58 = v57;
            }
            v25 = v58 + v24;
            if ( StreamName )
            {
              if ( *((_BYTE *)v16 + 144) == 2 )
              {
                v59 = StreamName->Length + 2;
              }
              else if ( (_BYTE)NlsMbOemCodePageTag )
              {
                v59 = RtlxOemStringToUnicodeSize(StreamName);
              }
              else
              {
                v59 = 2 * StreamName->Length + 2;
              }
              v25 += v59;
            }
          }
          v26 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
          v73 = v26;
          if ( v25 > v21 || v26 + v25 > v21 )
            goto LABEL_131;
          v27 = 0LL;
          v28 = v16[11];
          if ( v28 )
          {
            *(_DWORD *)(v28 + *((unsigned int *)v16 + 27)) = v26 - *((_DWORD *)v16 + 27);
            *((_DWORD *)v16 + 27) = v26;
            v27 = (PVOID)(v16[11] + v26);
          }
          else
          {
            if ( !v74 )
              goto LABEL_26;
            v29 = v74[3];
            if ( v29 )
            {
              v27 = (PVOID)v74[3];
              v16[11] = v29;
            }
            else
            {
              v30 = v74[1];
              if ( !v30 )
                goto LABEL_26;
              if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
                v27 = *(PVOID *)(v30 + 24);
              else
                v27 = MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, 0x40000010u);
              v16[11] = v27;
            }
            *((_DWORD *)v16 + 25) = v21;
          }
LABEL_26:
          if ( !v16[11] )
          {
            PsChargePoolQuota((PEPROCESS)v16[15], PagedPool, v21);
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v21, 0x4E725346u);
            v16[11] = PoolWithTag;
            v16[10] = PoolWithTag;
            memset((void *)v16[11], 0, v21);
            *((_DWORD *)v16 + 25) = v21;
            v27 = (PVOID)v16[11];
          }
          if ( v27 )
          {
            if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                    (_DWORD)v27,
                                    Action,
                                    (unsigned int)&OemString,
                                    (unsigned int)&v72,
                                    (__int64)StreamName,
                                    *((_BYTE *)v16 + 144) == 2,
                                    v25) )
            {
              *((_DWORD *)v16 + 26) = v26 + v25;
              goto LABEL_31;
            }
LABEL_131:
            *((_WORD *)v16 + 36) |= 2u;
          }
LABEL_31:
          if ( (v16[9] & 2) != 0 && v16[11] )
          {
            if ( v16[10] )
            {
              PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v16[15], *((unsigned int *)v16 + 25));
              ExFreePoolWithTag((PVOID)v16[10], 0);
            }
            v16[11] = 0LL;
            v16[10] = 0LL;
            v16[13] = 0LL;
            *((_DWORD *)v16 + 25) = 0;
          }
          v10 = TargetNameOffset;
        }
      }
      if ( Action == 4 )
      {
        *((_WORD *)v16 + 36) |= 8u;
      }
      else
      {
        *((_WORD *)v16 + 36) &= ~8u;
        if ( (_QWORD *)v16[6] != v16 + 6 )
          FsRtlNotifyCompleteIrpList(v16, 0LL);
      }
      goto LABEL_36;
    }
    p_Flink = (_QWORD *)*p_Flink;
  }
  v38 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v38 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
