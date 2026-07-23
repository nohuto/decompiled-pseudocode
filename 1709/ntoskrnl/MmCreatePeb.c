/*
 * XREFs of MmCreatePeb @ 0x1404DAD28
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x1400AE8F0 (KeQueryGroupAffinity.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x1405093E0 (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x1405917C8 (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_KPROCESS *a1, char *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // eax
  int v7; // ebx
  void *v8; // rbx
  __int16 v9; // r14
  __int64 v10; // rdi
  PIMAGE_NT_HEADERS v11; // rsi
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  _WORD *v14; // rbx
  int Subsystem; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v17; // rbx
  bool v18; // zf
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int16 v22; // cx
  __int16 v23; // cx
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  unsigned __int16 Characteristics; // [rsp+50h] [rbp-178h]
  USHORT v29; // [rsp+60h] [rbp-168h]
  __int64 v30; // [rsp+68h] [rbp-160h] BYREF
  __int64 v31; // [rsp+70h] [rbp-158h] BYREF
  __int64 v32; // [rsp+78h] [rbp-150h] BYREF
  _IMAGE_NT_HEADERS64 *v33; // [rsp+80h] [rbp-148h]
  __int64 v34; // [rsp+90h] [rbp-138h] BYREF
  int MinorSubsystemVersion; // [rsp+98h] [rbp-130h]
  __int64 v36; // [rsp+9Ch] [rbp-12Ch]
  unsigned int v37; // [rsp+A4h] [rbp-124h]
  __int16 v38; // [rsp+A8h] [rbp-120h]
  __int16 v39; // [rsp+AAh] [rbp-11Eh]
  __int64 v40; // [rsp+B0h] [rbp-118h]
  __int64 v41; // [rsp+B8h] [rbp-110h]
  int v42; // [rsp+C0h] [rbp-108h]
  ULONG v43; // [rsp+C4h] [rbp-104h]
  int v44; // [rsp+C8h] [rbp-100h]
  int SessionId; // [rsp+CCh] [rbp-FCh]
  __int64 v46; // [rsp+D0h] [rbp-F8h]
  __int64 v47; // [rsp+D8h] [rbp-F0h]
  __int64 v48; // [rsp+E0h] [rbp-E8h]
  __int64 v49; // [rsp+E8h] [rbp-E0h]
  __int64 v50; // [rsp+F0h] [rbp-D8h]
  char v51; // [rsp+F8h] [rbp-D0h]
  char v52; // [rsp+F9h] [rbp-CFh]
  __int64 v53; // [rsp+100h] [rbp-C8h]
  void *v54; // [rsp+108h] [rbp-C0h]
  __int64 v55; // [rsp+110h] [rbp-B8h]
  __int64 v56; // [rsp+118h] [rbp-B0h]
  __int64 v57; // [rsp+120h] [rbp-A8h]
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  __int64 v59; // [rsp+138h] [rbp-90h] BYREF
  _WORD *v60; // [rsp+140h] [rbp-88h]
  void *v61; // [rsp+148h] [rbp-80h]
  _QWORD *v62; // [rsp+150h] [rbp-78h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v63; // [rsp+158h] [rbp-70h] BYREF

  v62 = a3;
  v32 = 0LL;
  v31 = 0LL;
  v59 = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  _BitScanForward(&v6, (*(_DWORD *)&a1->0 >> 9) & 0xFFFFF);
  v29 = v6;
  *((_WORD *)a4 + 4) = v6;
  KiStackAttachProcess(a1, 0, (__int64)&v63);
  v7 = MmMapViewOfSection(
         (int)InitNlsSectionPointer,
         (int)a1,
         &v32,
         0,
         0LL,
         (__int64)&v31,
         (__int64)&v59,
         1,
         5242880,
         2);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = MiCreatePebOrTeb(4LL, 0LL, &v30);
  if ( v7 < 0 )
    goto LABEL_30;
  v8 = (void *)a1[1].Affinity.Bitmap[18];
  v61 = v8;
  v36 = 10LL;
  v38 = 16299;
  v37 = 2;
  v9 = CmNtCSDVersion;
  v39 = CmNtCSDVersion;
  v40 = qword_140400150;
  v41 = qword_140400148;
  v42 = KeNumberProcessors_0;
  v43 = NtGlobalFlag;
  v46 = qword_1403884D0;
  v48 = (unsigned int)dword_14040012C;
  v49 = qword_140400140;
  v50 = qword_140400138;
  v51 = *a2;
  v52 = a2[3];
  v53 = *((_QWORD *)a2 + 1);
  v54 = v8;
  v55 = v32 + (unsigned int)InitAnsiCodePageDataOffset;
  v56 = v32 + (unsigned int)InitOemCodePageDataOffset;
  v57 = v32 + (unsigned int)InitUnicodeCaseTableDataOffset;
  if ( a1[1].ActiveProcessors.Bitmap[2] )
    SessionId = MmGetSessionId((__int64)a1);
  else
    SessionId = 0;
  v44 = 266;
  v10 = v30;
  v47 = v30 + 1968;
  v11 = RtlImageNtHeader(v8);
  v33 = v11;
  Characteristics = v11->FileHeader.Characteristics;
  v12 = a1[1].ActiveProcessors.Bitmap[7];
  if ( v12 )
  {
    v22 = *(_WORD *)(v12 + 8);
    if ( v22 == 332 || v22 == 452 )
    {
      v34 = 0LL;
      MinorSubsystemVersion = 0;
    }
  }
  v13 = RtlImageDirectoryEntryToData(v8, 1u, 0xAu, &Size);
  v14 = v13;
  v60 = v13;
  if ( v13 )
  {
    if ( ((unsigned __int8)v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = v30;
    v9 = v39;
    v11 = v33;
    v14 = v60;
  }
  Subsystem = v11->OptionalHeader.Subsystem;
  LODWORD(v34) = Subsystem;
  HIDWORD(v34) = v11->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = v11->OptionalHeader.MinorSubsystemVersion;
  Win32VersionValue = v11->OptionalHeader.Win32VersionValue;
  if ( Win32VersionValue )
  {
    if ( v14 )
    {
      if ( v14[38] )
        v9 = v14[38];
      v39 = v9;
    }
    LODWORD(v36) = (unsigned __int8)Win32VersionValue;
    HIDWORD(v36) = BYTE1(Win32VersionValue);
    v38 = HIWORD(Win32VersionValue) & 0x3FFF;
    v37 = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
  }
  if ( v14 )
  {
    v17 = *((_QWORD *)v14 + 8);
    *a4 = v17;
    v18 = (v17 & KeQueryGroupAffinity(v29)) == v17;
    v19 = a4;
    if ( !v18 )
      *a4 = 0LL;
  }
  else
  {
    v19 = a4;
  }
  if ( (Characteristics & 0x4000) != 0 )
  {
    v24 = _InterlockedExchangeAdd(&dword_1403884CC, 1u) + 1;
    do
    {
      v25 = v24 & 0x3F;
      v26 = 1LL << v25;
      *v19 = 1LL << v25;
      v24 = v25 + 1;
      v18 = (KeQueryGroupAffinity(v29) & v26) == 0;
      v19 = a4;
    }
    while ( v18 );
    v10 = v30;
    v9 = v39;
    Subsystem = v34;
    v11 = v33;
  }
  *(_QWORD *)(v10 + 280) = v36;
  *(_WORD *)(v10 + 288) = v38;
  *(_DWORD *)(v10 + 292) = v37;
  *(_WORD *)(v10 + 290) = v9;
  *(_QWORD *)(v10 + 200) = v40;
  *(_QWORD *)(v10 + 208) = v41;
  *(_DWORD *)(v10 + 184) = KeNumberProcessors_0;
  *(_DWORD *)(v10 + 188) = NtGlobalFlag;
  *(_QWORD *)(v10 + 192) = qword_1403884D0;
  *(_QWORD *)(v10 + 792) = (unsigned int)dword_14040012C;
  *(_QWORD *)(v10 + 240) = v47;
  *(_QWORD *)(v10 + 216) = qword_140400140;
  *(_QWORD *)(v10 + 224) = qword_140400138;
  *(_DWORD *)(v10 + 236) = 266;
  *(_DWORD *)(v10 + 704) = SessionId;
  *(_DWORD *)(v10 + 296) = Subsystem;
  *(_DWORD *)(v10 + 300) = HIDWORD(v34);
  *(_DWORD *)(v10 + 304) = MinorSubsystemVersion;
  *(_BYTE *)v10 = v51;
  *(_BYTE *)(v10 + 3) = v52;
  *(_QWORD *)(v10 + 8) = v53;
  *(_QWORD *)(v10 + 16) = v61;
  *(_QWORD *)(v10 + 160) = v55;
  *(_QWORD *)(v10 + 168) = v56;
  *(_QWORD *)(v10 + 176) = v57;
  v20 = a1[1].ActiveProcessors.Bitmap[7];
  if ( !v20 )
    goto LABEL_23;
  v23 = *(_WORD *)(v20 + 8);
  if ( v23 != 332 && v23 != 452 )
    goto LABEL_23;
  v7 = MiInitializeWowPeb(&v34, v11, a1, a4);
  if ( v7 < 0 )
  {
LABEL_30:
    KiUnstackDetachProcess(&v63, 0LL);
    return (unsigned int)v7;
  }
  else
  {
LABEL_23:
    KiUnstackDetachProcess(&v63, 0LL);
    *v62 = v10;
    return 0LL;
  }
}
