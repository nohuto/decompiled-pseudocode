/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x14055A7D0
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140716EC0 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x140716F20 (FsRtlNotifyReportChange.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x1400B6720 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14055BAE8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x14055C174 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407817A0 (RtlxOemStringToUnicodeSize.c)
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
  USHORT v12; // r10
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *v16; // rbx
  char v17; // r11
  char v18; // r12
  PSTRING v19; // r14
  __int16 v20; // dx
  unsigned int Flink_high; // r13d
  _LIST_ENTRY *v22; // rcx
  unsigned __int16 v23; // cx
  int v24; // r14d
  unsigned int v25; // r14d
  unsigned int v26; // r8d
  unsigned int v27; // r15d
  struct _LIST_ENTRY *v28; // rcx
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *v31; // r10
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int16 v33; // ax
  __int16 v34; // ax
  struct _LIST_ENTRY *Blink; // rcx
  USHORT v36; // cx
  __int16 Flink_low; // ax
  unsigned __int16 v38; // ax
  __int16 v39; // ax
  char *v40; // rax
  bool v41; // zf
  struct _LIST_ENTRY *v42; // rax
  struct _LIST_ENTRY *v43; // rax
  __int16 v44; // dx
  char *v45; // r9
  int v46; // r8d
  int v47; // edx
  unsigned __int16 v48; // ax
  USHORT v49; // cx
  __int16 v50; // ax
  char v51; // r10
  int v52; // r8d
  int v53; // r11d
  unsigned int v54; // r9d
  unsigned __int8 v55; // r15
  struct _LIST_ENTRY *v56; // r14
  unsigned __int16 v57; // bx
  ULONG v58; // eax
  int v59; // r14d
  unsigned __int16 v60; // cx
  ULONG v61; // eax
  int v62; // eax
  char v63; // [rsp+40h] [rbp-F8h]
  USHORT v64; // [rsp+44h] [rbp-F4h]
  unsigned __int16 v65; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 Length; // [rsp+50h] [rbp-E8h]
  USHORT v67; // [rsp+52h] [rbp-E6h]
  int v68; // [rsp+58h] [rbp-E0h]
  USHORT v69; // [rsp+60h] [rbp-D8h]
  USHORT v70; // [rsp+62h] [rbp-D6h]
  OEM_STRING OemString; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+80h] [rbp-B8h]
  char *v73; // [rsp+88h] [rbp-B0h]
  int v74; // [rsp+90h] [rbp-A8h]
  unsigned int v75; // [rsp+94h] [rbp-A4h]
  int v76; // [rsp+98h] [rbp-A0h]
  OEM_STRING v77; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v78; // [rsp+B0h] [rbp-88h]
  _LIST_ENTRY *v79; // [rsp+B8h] [rbp-80h]
  _LIST_ENTRY **p_Flink; // [rsp+C0h] [rbp-78h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-70h]
  _LIST_ENTRY *v82; // [rsp+D0h] [rbp-68h]
  _LIST_ENTRY *v83; // [rsp+D8h] [rbp-60h]
  _WORD v84[4]; // [rsp+E0h] [rbp-58h] BYREF
  char *Buffer; // [rsp+E8h] [rbp-50h]
  unsigned int v86; // [rsp+F0h] [rbp-48h]
  _LIST_ENTRY *v88; // [rsp+148h] [rbp+10h]
  PSTRING v89; // [rsp+150h] [rbp+18h]
  USHORT v90; // [rsp+158h] [rbp+20h]

  v90 = TargetNameOffset;
  v89 = FullTargetName;
  v88 = NotifyList;
  v10 = TargetNameOffset;
  v70 = TargetNameOffset;
  v69 = TargetNameOffset;
  v67 = TargetNameOffset;
  v12 = TargetNameOffset;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v77.Length = 0LL;
  v77.Buffer = 0LL;
  *(_QWORD *)&OemString.Length = 0LL;
  OemString.Buffer = 0LL;
  v63 = 0;
  v76 = 0;
  if ( !TargetNameOffset && FullTargetName )
    return;
  v73 = 0LL;
  v77.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    FullTargetName = v89;
    NotifyList = v88;
    TargetNameOffset = v67;
    v12 = v67;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v64 = v72;
  Length = v77.Length;
  v65 = OemString.Length;
  while ( 1 )
  {
    v83 = Flink;
    p_Flink = &Flink->Flink;
    if ( Flink == NotifyList )
      break;
    v15 = Flink - 2;
    v82 = Flink - 2;
    v16 = Flink - 2;
    v79 = v16;
    if ( FullTargetName )
    {
      Blink = v15[8].Blink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v15[4].Blink) & FilterMatch) != 0 )
      {
        v19 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = FullTargetName->Buffer;
          v36 = v10;
          v84[0] = v10;
          Flink_low = LOBYTE(v15[9].Flink);
          if ( v12 != Flink_low )
          {
            v36 = TargetNameOffset - Flink_low;
            v84[0] = TargetNameOffset - Flink_low;
          }
          v84[1] = v36;
          v19 = (PSTRING)v84;
          NormalizedParentName = (PSTRING)v84;
          Blink = v15[8].Blink;
        }
        v38 = (unsigned __int16)Blink->Flink;
        if ( LOWORD(Blink->Flink) <= v19->Length )
        {
          if ( v19->Length == v38 )
          {
            v18 = 1;
            goto LABEL_57;
          }
          v39 = (__int16)v15[4].Blink;
          if ( (v39 & 1) != 0 )
          {
            if ( (v39 & 0x10) != 0
              || ((v40 = &v19->Buffer[(unsigned __int64)v15[8].Blink->Flink], LOBYTE(v15[9].Flink) != 1)
                ? (v41 = *(_WORD *)v40 == 92)
                : (v41 = *v40 == 92),
                  v41) )
            {
              v18 = 0;
              v38 = (unsigned __int16)Blink->Flink;
LABEL_57:
              if ( !memcmp(Blink->Blink, v19->Buffer, v38)
                && (v18
                 || (v42 = v15[1].Flink) == 0LL
                 || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v42)(
                      v15->Blink,
                      TargetContext,
                      v15[1].Blink)) )
              {
                v43 = v15[4].Flink;
                if ( !v43
                  || !FilterContext
                  || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v43)(v15->Blink, FilterContext) )
                {
                  FullTargetName = v89;
                  v17 = v63;
                  goto LABEL_10;
                }
              }
            }
          }
        }
LABEL_37:
        NotifyList = v88;
        FullTargetName = v89;
      }
    }
    else if ( TargetContext == v15[1].Blink )
    {
      OemString.Buffer = 0LL;
      v65 = 0;
      OemString.Length = 0;
      v17 = 1;
      v63 = 1;
      v18 = 0;
      v19 = NormalizedParentName;
LABEL_10:
      v20 = (__int16)v15[4].Blink;
      if ( (v20 & 2) == 0 )
      {
        Flink_high = (unsigned int)v15[6].Flink;
        if ( Flink_high )
        {
          p_Blink = 0LL;
          if ( HIDWORD(v15[6].Flink) )
          {
            Flink_high = HIDWORD(v15[6].Flink);
          }
          else
          {
            v22 = v15[3].Flink;
            if ( v22 != &v15[3] )
            {
              p_Blink = &v22[-11].Blink;
              Flink_high = (unsigned int)v22[1].Flink->Blink;
            }
          }
          if ( v18 )
          {
            v23 = 0;
            v65 = 0;
            OemString.Length = 0;
          }
          else if ( v17 )
          {
            v23 = v65;
          }
          else
          {
            v44 = v20 & 0x10;
            if ( v44 || (v45 = v19->Buffer, v45 != FullTargetName->Buffer) )
            {
              if ( !v73 )
              {
                v73 = FullTargetName->Buffer;
                v49 = v10;
                v64 = v10;
                LOWORD(v72) = v10;
                v50 = LOBYTE(v15[9].Flink);
                if ( v69 != v50 )
                {
                  v49 = v70 - v50;
                  v64 = v70 - v50;
                  LOWORD(v72) = v70 - v50;
                }
                WORD1(v72) = v49;
              }
              v51 = 0;
              v52 = 0;
              if ( !v44 )
              {
                v53 = 1;
                v74 = 1;
                v54 = 0;
                v75 = 0;
                v55 = (unsigned __int8)v15[9].Flink;
                v56 = v15[8].Blink;
                v57 = (unsigned __int16)v56->Flink;
                if ( v55 == 1 )
                {
                  while ( v54 < v57 )
                  {
                    if ( *((_BYTE *)&v56->Blink->Flink + v54) == 92 )
                      v74 = ++v53;
                    v75 = ++v54;
                  }
                  while ( v73[v52] != 92 || (unsigned __int8)++v51 != v53 )
                    ++v52;
                }
                else
                {
                  while ( v54 < v57 >> 1 )
                  {
                    if ( *((_WORD *)&v56->Blink->Flink + v54) == 92 )
                      v74 = ++v53;
                    v75 = ++v54;
                  }
                  while ( *(_WORD *)&v73[2 * v52] != 92 || (unsigned __int8)++v51 != v53 )
                    ++v52;
                  v52 *= v55;
                }
                v17 = v63;
                v16 = v15;
                v10 = v90;
              }
              v68 = v52 + LOBYTE(v15[9].Flink);
              OemString.Buffer = &v73[v68];
              v48 = v64 - v68;
            }
            else
            {
              v46 = (int)v15[8].Blink->Flink;
              v47 = LOBYTE(v15[9].Flink);
              OemString.Buffer = &v45[v47 + v46];
              v48 = v19->Length - v47 - v46;
            }
            v23 = v48;
            v65 = v48;
            OemString.Length = v48;
            OemString.MaximumLength = v48;
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
              if ( LOBYTE(v15[9].Flink) == 1 )
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                  v58 = RtlxOemStringToUnicodeSize(&OemString);
                else
                  v58 = 2 * v23 + 2;
                v59 = v58 + 10;
              }
              else
              {
                v59 = v23 + 12;
              }
              v24 = v59 + 2;
            }
            if ( v77.Buffer )
            {
              v60 = Length;
            }
            else
            {
              v77.Buffer = &v89->Buffer[v10];
              v60 = v89->Length - v10;
              Length = v60;
              v77.Length = v60;
              v77.MaximumLength = v60;
            }
            if ( LOBYTE(v15[9].Flink) == 1 )
            {
              if ( (_BYTE)NlsMbOemCodePageTag )
                v61 = RtlxOemStringToUnicodeSize(&v77);
              else
                v61 = 2 * v60 + 2;
              v24 -= 2;
            }
            else
            {
              v61 = v60;
            }
            v25 = v61 + v24;
            if ( StreamName )
            {
              if ( LOBYTE(v15[9].Flink) == 2 )
              {
                v62 = StreamName->Length;
                v25 += 2;
              }
              else if ( (_BYTE)NlsMbOemCodePageTag )
              {
                v62 = RtlxOemStringToUnicodeSize(StreamName);
              }
              else
              {
                v62 = 2 * StreamName->Length + 2;
              }
              v25 += v62;
            }
          }
          v26 = (LODWORD(v15[6].Blink) + 3) & 0xFFFFFFFC;
          v86 = v26;
          if ( v25 > Flink_high || (v27 = v26 + v25, v78 = v26 + v25, v26 + v25 > Flink_high) )
          {
            LOWORD(v15[4].Blink) |= 2u;
            v33 = (__int16)v15[4].Blink;
          }
          else
          {
            v28 = 0LL;
            v29 = v15[5].Blink;
            if ( v29 )
            {
              *(_DWORD *)((char *)&v29->Flink + HIDWORD(v15[6].Blink)) = v26 - HIDWORD(v15[6].Blink);
              HIDWORD(v15[6].Blink) = v26;
              v28 = (struct _LIST_ENTRY *)((char *)v15[5].Blink + v26);
            }
            else
            {
              if ( !p_Blink )
                goto LABEL_26;
              v30 = p_Blink[3];
              if ( v30 )
              {
                v28 = p_Blink[3];
                v15[5].Blink = v30;
              }
              else
              {
                v31 = p_Blink[1];
                if ( !v31 )
                  goto LABEL_26;
                if ( (BYTE2(v31->Blink) & 5) != 0 )
                  v28 = v31[1].Blink;
                else
                  v28 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, 0x40000010u);
                v15[5].Blink = v28;
              }
              HIDWORD(v15[6].Flink) = Flink_high;
            }
LABEL_26:
            if ( !v15[5].Blink )
            {
              PsChargePoolQuota((PEPROCESS)v15[7].Blink, PagedPool, Flink_high);
              PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)17, Flink_high, 0x4E725346u);
              v15[5].Blink = PoolWithTag;
              v15[5].Flink = PoolWithTag;
              memset(v15[5].Blink, 0, Flink_high);
              HIDWORD(v15[6].Flink) = Flink_high;
              v28 = v15[5].Blink;
            }
            if ( v28 )
            {
              if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                      (_DWORD)v28,
                                      Action,
                                      (unsigned int)&OemString,
                                      (unsigned int)&v77,
                                      (__int64)StreamName,
                                      LOBYTE(v15[9].Flink) == 2,
                                      v25) )
                LODWORD(v15[6].Blink) = v27;
              else
                LOWORD(v15[4].Blink) |= 2u;
            }
            v16 = v79;
            v33 = (__int16)v79[4].Blink;
          }
          if ( (v33 & 2) != 0 && v15[5].Blink )
          {
            if ( v15[5].Flink )
            {
              PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[7].Blink, HIDWORD(v15[6].Flink));
              ExFreePoolWithTag(v15[5].Flink, 0);
            }
            v15[5].Blink = 0LL;
            v15[5].Flink = 0LL;
            v15[6].Blink = 0LL;
            HIDWORD(v15[6].Flink) = 0;
          }
          v10 = v90;
        }
      }
      v34 = (__int16)v16[4].Blink;
      if ( Action == 4 )
      {
        LOWORD(v16[4].Blink) = v34 | 8;
      }
      else
      {
        LOWORD(v16[4].Blink) = v34 & 0xFFF7;
        if ( v15[3].Flink != &v15[3] )
          FsRtlNotifyCompleteIrpList(v15, 0LL);
      }
      goto LABEL_37;
    }
    Flink = *p_Flink;
    TargetNameOffset = v67;
    v12 = v67;
  }
  v41 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v41 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
