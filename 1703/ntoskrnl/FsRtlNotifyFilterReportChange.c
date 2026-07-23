/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x140431400
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140686F90 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x140686FF0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     PsChargePoolQuota @ 0x140018850 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140431D40 (FsRtlNotifyUpdateBuffer.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14043271C (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406E5B00 (RtlxOemStringToUnicodeSize.c)
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
  USHORT v10; // r15
  PSTRING v11; // r10
  PLIST_ENTRY v12; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Flink; // rcx
  _QWORD *v16; // rdi
  char v17; // r11
  char v18; // bl
  PSTRING v19; // r14
  __int16 v20; // r8
  unsigned int v21; // r12d
  _QWORD *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // r14d
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  PVOID v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r10
  PVOID PoolWithTag; // rax
  USHORT v32; // ax
  __int16 v33; // cx
  __int16 *v34; // r9
  unsigned __int16 v35; // dx
  __int16 v36; // ax
  char *v37; // rax
  bool v38; // zf
  unsigned __int8 (__fastcall *v39)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v40)(_QWORD, PVOID); // rax
  __int16 v41; // r8
  char *v42; // r9
  __int64 v43; // r8
  __int64 v44; // rdx
  char *v45; // r14
  USHORT v46; // cx
  __int16 v47; // ax
  int v48; // r9d
  int v49; // edx
  int v50; // r10d
  unsigned int v51; // r8d
  unsigned __int16 *v52; // r11
  unsigned __int16 *v53; // r11
  ULONG v54; // eax
  int v55; // eax
  ULONG v56; // eax
  char v57; // bl
  int v58; // ecx
  ULONG v59; // ecx
  char v60; // [rsp+40h] [rbp-F8h]
  USHORT v61; // [rsp+42h] [rbp-F6h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v63; // [rsp+50h] [rbp-E8h]
  int v64; // [rsp+54h] [rbp-E4h]
  _QWORD *v65; // [rsp+60h] [rbp-D8h]
  OEM_STRING OemString; // [rsp+78h] [rbp-C0h] BYREF
  int v68; // [rsp+88h] [rbp-B0h]
  unsigned int v69; // [rsp+8Ch] [rbp-ACh]
  int v70; // [rsp+90h] [rbp-A8h]
  OEM_STRING v71; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-90h]
  char *v73; // [rsp+B0h] [rbp-88h]
  unsigned int v74; // [rsp+B8h] [rbp-80h]
  _QWORD *v75; // [rsp+C0h] [rbp-78h]
  _QWORD *v76; // [rsp+C8h] [rbp-70h]
  _QWORD *v77; // [rsp+D0h] [rbp-68h]
  _WORD v78[4]; // [rsp+D8h] [rbp-60h] BYREF
  char *Buffer; // [rsp+E0h] [rbp-58h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v71.Length = 0LL;
  v71.Buffer = 0LL;
  *(_QWORD *)&OemString.Length = 0LL;
  OemString.Buffer = 0LL;
  v60 = 0;
  v70 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v73 = 0LL;
  v71.Buffer = 0LL;
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
  v61 = v72;
  Length = v71.Length;
  v63 = OemString.Length;
  while ( 1 )
  {
    v77 = p_Flink;
    v65 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v16 = p_Flink - 4;
    v76 = p_Flink - 4;
    if ( v11 )
    {
      if ( *(_WORD *)v16[17] && (*((_DWORD *)v16 + 19) & FilterMatch) != 0 )
      {
        v19 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v32 = v10;
          v78[0] = v10;
          v33 = *((unsigned __int8 *)v16 + 144);
          if ( v10 != v33 )
          {
            v32 = v10 - v33;
            v78[0] = v10 - v33;
          }
          v78[1] = v32;
          v19 = (PSTRING)v78;
          NormalizedParentName = (PSTRING)v78;
          p_Flink = v65;
        }
        v34 = (__int16 *)v16[17];
        v35 = *v34;
        if ( v19->Length >= (unsigned __int16)*v34 )
        {
          if ( v19->Length == v35 )
          {
            v18 = 1;
            goto LABEL_60;
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
LABEL_60:
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
          v75 = 0LL;
          if ( *((_DWORD *)v16 + 25) )
          {
            v21 = *((_DWORD *)v16 + 25);
          }
          else
          {
            v22 = (_QWORD *)v16[6];
            if ( v22 != v16 + 6 )
            {
              v75 = v22 - 21;
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
              v45 = v73;
              if ( v73 )
              {
                v46 = v61;
              }
              else
              {
                v45 = v11->Buffer;
                v73 = v45;
                v46 = v10;
                v61 = v10;
                LOWORD(v72) = v10;
                v47 = *((unsigned __int8 *)v16 + 144);
                if ( v10 != v47 )
                {
                  v46 = v10 - v47;
                  v61 = v10 - v47;
                  LOWORD(v72) = v10 - v47;
                }
                WORD1(v72) = v46;
              }
              LOBYTE(v48) = 0;
              v49 = 0;
              if ( !v41 )
              {
                v50 = 1;
                v68 = 1;
                v51 = 0;
                v69 = 0;
                if ( *((_BYTE *)v16 + 144) == 1 )
                {
                  while ( 1 )
                  {
                    v52 = (unsigned __int16 *)v16[17];
                    if ( v51 >= *v52 )
                      break;
                    if ( *(_BYTE *)(v51 + *((_QWORD *)v52 + 1)) == 92 )
                      v68 = ++v50;
                    v69 = ++v51;
                  }
                  while ( 1 )
                  {
                    if ( v45[v49] == 92 )
                    {
                      LOBYTE(v48) = v48 + 1;
                      if ( (unsigned __int8)v48 == v50 )
                        break;
                    }
                    ++v49;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v53 = (unsigned __int16 *)v16[17];
                    if ( v51 >= *v53 >> 1 )
                      break;
                    if ( *(_WORD *)(*((_QWORD *)v53 + 1) + 2LL * v51) == 92 )
                      v68 = ++v50;
                    v69 = ++v51;
                  }
                  while ( 1 )
                  {
                    if ( *(_WORD *)&v45[2 * v49] == 92 )
                    {
                      v48 = (unsigned __int8)(v48 + 1);
                      if ( v48 == v50 )
                        break;
                    }
                    ++v49;
                  }
                  v49 *= *((unsigned __int8 *)v16 + 144);
                }
                v17 = v60;
                v46 = v61;
              }
              v64 = *((unsigned __int8 *)v16 + 144) + v49;
              OemString.Buffer = &v45[v64];
              v23 = v46 - v64;
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
                  v54 = RtlxOemStringToUnicodeSize(&OemString);
                else
                  v54 = 2 * v23 + 2;
                v55 = v54 + 10;
              }
              else
              {
                v55 = v23 + 12;
              }
              v24 = v55 + 2;
            }
            if ( v71.Buffer )
            {
              LOWORD(v56) = Length;
            }
            else
            {
              v71.Buffer = &FullTargetName->Buffer[v10];
              LOWORD(v56) = FullTargetName->Length - TargetNameOffset;
              Length = v56;
              v71.Length = v56;
              v71.MaximumLength = v56;
            }
            v57 = *((_BYTE *)v16 + 144);
            if ( v57 == 1 )
            {
              if ( (_BYTE)NlsMbOemCodePageTag )
                v56 = RtlxOemStringToUnicodeSize(&v71);
              else
                v56 = 2 * (unsigned __int16)v56 + 2;
              v24 -= 2;
            }
            else
            {
              v56 = (unsigned __int16)v56;
            }
            v25 = v56 + v24;
            if ( StreamName )
            {
              if ( v57 == 2 )
              {
                v58 = StreamName->Length + 2;
              }
              else
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                  v59 = RtlxOemStringToUnicodeSize(StreamName);
                else
                  v59 = 2 * StreamName->Length + 2;
                v58 = v59 - 2 + 1;
              }
              v25 += v58;
            }
          }
          v26 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
          v74 = v26;
          if ( v25 > v21 || v26 + v25 > v21 )
            goto LABEL_129;
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
            if ( !v75 )
              goto LABEL_26;
            v29 = v75[3];
            if ( v29 )
            {
              v27 = (PVOID)v75[3];
              v16[11] = v29;
            }
            else
            {
              v30 = v75[1];
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
                                    (unsigned int)&v71,
                                    (__int64)StreamName,
                                    *((_BYTE *)v16 + 144) == 2,
                                    v25) )
            {
              *((_DWORD *)v16 + 26) = v26 + v25;
              goto LABEL_31;
            }
LABEL_129:
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
