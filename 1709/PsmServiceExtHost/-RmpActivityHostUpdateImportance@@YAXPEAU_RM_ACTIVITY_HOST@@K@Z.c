/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005188 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180014530 (RmpActivityImportanceMergeVectors.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  struct _RM_ACTIVITY_HOST *v4; // rsi
  char *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  struct _RM_ACTIVITY_HOST *v11; // rsi
  char *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v22; // [rsp+3Eh] [rbp-C2h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v31; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v32; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v33; // [rsp+68h] [rbp-98h] BYREF
  BOOL v34; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  __int64 *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  int *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  BOOL *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int16 *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int16 *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int16 *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int16 *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  int *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  int *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  int *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  int *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  int *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  int *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  BOOL *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  BOOL *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  BOOL *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  BOOL *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]

  if ( (a2 & 1) != 0 )
  {
    v4 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 102);
    if ( v4 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 816) || (v5 = (char *)v4 - 1416) == 0LL )
    {
      v6 = 1;
    }
    else
    {
      v6 = 1;
      do
      {
        if ( *((_DWORD *)v5 + 350) == 2 || (v5[1452] & 0x10) != 0 )
          v6 = RmpActivityImportanceMergeVectors(v6, *((unsigned int *)v5 + 368));
        v7 = *((_QWORD *)v5 + 177);
        v8 = 3 * (*((int *)v5 + 362) + 34LL);
        v9 = *((_QWORD *)v5 + 180);
        v5 = 0LL;
        if ( v7 != v9 + 8 * v8 )
          v5 = (char *)(v7 - 1416);
      }
      while ( v5 );
    }
    *((_DWORD *)a1 + 331) = v6;
    if ( (v6 & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 1000);
  }
  if ( (a2 & 2) != 0 )
  {
    v10 = *((_DWORD *)a1 + 330);
    v11 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 105);
    if ( v11 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 840) || (v12 = (char *)v11 - 1416) == 0LL )
    {
      v13 = 1;
    }
    else
    {
      v13 = 1;
      do
      {
        if ( *((_DWORD *)v12 + 350) == 2 || (v12[1452] & 0x10) != 0 )
          v13 = RmpActivityImportanceMergeVectors(v13, *((unsigned int *)v12 + 368));
        v14 = *((_QWORD *)v12 + 177);
        v15 = 3 * (*((int *)v12 + 362) + 34LL);
        v16 = *((_QWORD *)v12 + 180);
        v12 = 0LL;
        if ( v14 != v16 + 8 * v15 )
          v12 = (char *)(v14 - 1416);
      }
      while ( v12 );
    }
    *((_DWORD *)a1 + 330) = v13;
    if ( (*((_WORD *)a1 + 660) & 0x100) != 0 && (*((_BYTE *)a1 + 1332) & 2) == 0 && (*((_BYTE *)a1 + 1012) & 0x10) == 0 )
    {
      RmpActivityHostSetStoreHighMemoryPriority(a1);
      *((_DWORD *)a1 + 333) |= 2u;
    }
    if ( (*((_BYTE *)a1 + 1320) & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 1000);
    if ( (*((_WORD *)a1 + 660) & 0x400) == 0 )
    {
      v17 = *((_DWORD *)a1 + 252);
      if ( (v17 & 4) != 0 )
        *((_DWORD *)a1 + 252) = v17 & 0xFFFFFFFB;
    }
    if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
    {
      v18 = *((unsigned __int16 *)a1 + 660);
      v35 = *((_QWORD *)a1 + 3);
      v41 = &v35;
      v42 = 8LL;
      v23 = v10 & 1;
      v44 = 4LL;
      v43 = &v23;
      v46 = 4LL;
      v24 = (v18 & 1) != 0;
      v45 = &v24;
      v48 = 2LL;
      v19 = ((unsigned __int16)v10 >> 1) & 7;
      v47 = &v19;
      v50 = 2LL;
      v20 = ((unsigned __int16)v18 >> 1) & 7;
      v49 = &v20;
      v52 = 2LL;
      v21 = ((unsigned __int16)v10 >> 4) & 3;
      v51 = &v21;
      v54 = 2LL;
      v22 = ((unsigned __int16)v18 >> 4) & 3;
      v53 = &v22;
      v56 = 4LL;
      v25 = ((unsigned __int8)v10 >> 6) & 1;
      v55 = &v25;
      v58 = 4LL;
      v26 = ((unsigned __int8)v18 >> 6) & 1;
      v57 = &v26;
      v27 = (unsigned __int8)v10 >> 7;
      v59 = &v27;
      v28 = (unsigned __int8)v18 >> 7;
      v61 = &v28;
      v60 = 4LL;
      v29 = BYTE1(v10) & 1;
      v63 = &v29;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v30 = (v18 >> 8) & 1;
      v70 = 4LL;
      v65 = &v30;
      v72 = 4LL;
      v31 = (v10 & 0x200) != 0;
      v74 = 4LL;
      v67 = &v31;
      v32 = (v18 & 0x200) != 0;
      v69 = &v32;
      v33 = (v10 & 0x400) != 0;
      v71 = &v33;
      v34 = (v18 & 0x400) != 0;
      v73 = &v34;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180057808 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      v38 = &unk_180057813;
      v40 = 1;
      UserData.Reserved = 2;
      v39 = 399;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
