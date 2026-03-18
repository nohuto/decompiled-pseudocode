/*
 * XREFs of PnpProcessRelation @ 0x1405C9EB4
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x1405C8040 (PnpBuildRemovalRelationList.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x1405CA13C (PnpProcessBusRelations.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x1405CA13C (PnpProcessBusRelations.c)
 *     IopAddRelationToList @ 0x1405CA1B4 (IopAddRelationToList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1405CA290 (PipIsDeviceInDeviceObjectList.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1405D3E80 (PnpQueryDeviceRelations.c)
 *     IopMergeRelationLists @ 0x140739DA4 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x140739F10 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x140739FF4 (IopCancelPendingEject.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  int v8; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v10; // esi
  __int64 result; // rax
  int v12; // ecx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdi
  __int64 v22; // rdx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  _WORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _WORD *v28; // rcx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdi
  __int64 v31; // rdx
  _WORD *v32; // rcx
  __int64 v33; // rcx
  _WORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  unsigned __int16 *v42; // rdi
  __int64 v43; // rdx
  _WORD *v44; // rcx
  __int64 v45; // rcx
  _WORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _WORD *v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 *v51; // rdi
  __int64 v52; // rdx
  _WORD *v53; // rcx
  __int64 v54; // rcx
  _WORD *v55; // rcx
  __int64 v56; // rcx
  __int64 *v57; // rsi
  _QWORD *v58; // rcx
  ULONG_PTR v59; // r8
  __int64 v60; // rcx
  _WORD *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  ULONG_PTR v76; // r8
  __int64 v77; // rcx
  _WORD *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rdx
  int v91; // [rsp+30h] [rbp-38h]
  int v92; // [rsp+30h] [rbp-38h]
  int v93; // [rsp+30h] [rbp-38h]
  int v94; // [rsp+38h] [rbp-30h]
  int v95; // [rsp+38h] [rbp-30h]
  __int64 v96; // [rsp+38h] [rbp-30h]
  PVOID P[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v99; // [rsp+80h] [rbp+18h]

  v99 = a3;
  v5 = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 788 )
      return 0LL;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 300);
    if ( v17 == 788 || (unsigned int)(v17 - 782) <= 1 )
      return 3221225473LL;
    if ( *(int *)(a1 + 656) > 0 || ((v17 - 785) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)a4 = 5;
      RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
      return 3221225473LL;
    }
    if ( (unsigned int)(v17 - 778) <= 1 )
      return 3221225488LL;
  }
  v8 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3);
  BugCheckParameter4 = v8;
  v91 = v8;
  if ( v8 )
  {
    if ( v8 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v99, a4, BugCheckParameter3);
    }
    else if ( v8 != -1073741670 )
    {
      v76 = *(_QWORD *)(a1 + 32);
      if ( v76 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(v76 + 2));
        v76 = *(_QWORD *)(a1 + 32);
        v77 = *(_QWORD *)(v76 + 8);
        if ( v77 )
        {
          IoAddTriageDumpDataBlock(v77, *(__int16 *)(v77 + 2));
          v76 = *(_QWORD *)(a1 + 32);
          v78 = (_WORD *)(*(_QWORD *)(v76 + 8) + 56LL);
          if ( *v78 )
          {
            IoAddTriageDumpDataBlock((int)v78, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v76 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v76 )
          v79 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
        else
          v79 = 0LL;
        if ( v79 )
        {
          if ( v76 )
            v96 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
          else
            v96 = 0LL;
          if ( v76 )
            v80 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
          else
            LODWORD(v80) = 0;
          IoAddTriageDumpDataBlock(v80, 728);
          if ( *(_WORD *)(v96 + 40) )
          {
            IoAddTriageDumpDataBlock(v96 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v96 + 48), *(unsigned __int16 *)(v96 + 40));
          }
          v76 = *(_QWORD *)(a1 + 32);
          if ( v76 )
            v81 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
          else
            v81 = 0LL;
          if ( *(_WORD *)(v81 + 56) )
          {
            if ( v76 )
              v82 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
            else
              LODWORD(v82) = 0;
            IoAddTriageDumpDataBlock(v82 + 56, 2);
            v83 = *(_QWORD *)(a1 + 32);
            if ( v83 )
              v84 = *(_QWORD *)(*(_QWORD *)(v83 + 312) + 40LL);
            else
              v84 = 0LL;
            if ( v83 )
              v85 = *(_QWORD *)(*(_QWORD *)(v83 + 312) + 40LL);
            else
              v85 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v85 + 64), *(unsigned __int16 *)(v84 + 56));
            v76 = *(_QWORD *)(a1 + 32);
          }
          if ( v76 )
          {
            v86 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
          }
          else
          {
            v86 = 0LL;
            v76 = 0LL;
          }
          if ( *(_QWORD *)(v86 + 16) )
          {
            if ( v76 )
            {
              v87 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
            }
            else
            {
              v87 = 0LL;
              v76 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v87 + 16) + 56LL) )
            {
              if ( v76 )
                v88 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL);
              else
                v88 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v88 + 16) + 56, 2);
              v89 = *(_QWORD *)(a1 + 32);
              if ( v89 )
                v90 = *(_QWORD *)(*(_QWORD *)(v89 + 312) + 40LL);
              else
                v90 = 0LL;
              if ( v89 )
                v5 = *(_QWORD *)(*(_QWORD *)(v89 + 312) + 40LL);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v90 + 16) + 56LL));
              v76 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, v76, BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    v57 = (__int64 *)IopPendingEjects;
    if ( (__int64 *)IopPendingEjects == &IopPendingEjects )
      goto LABEL_105;
    while ( 1 )
    {
      v58 = (_QWORD *)v57[8];
      if ( v58 )
      {
        if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*v58, *(_QWORD *)(a1 + 32), 0LL) )
          break;
      }
      v57 = (__int64 *)*v57;
      if ( v57 == &IopPendingEjects )
        goto LABEL_103;
    }
    if ( a2 == 4 )
    {
      v91 = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(v57);
      IopMergeRelationLists(BugCheckParameter3, v57[8], 0LL);
      if ( v99 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL);
LABEL_103:
      if ( v57 != &IopPendingEjects )
      {
        LODWORD(BugCheckParameter4) = v91;
        return (unsigned int)BugCheckParameter4;
      }
LABEL_105:
      v59 = *(_QWORD *)(a1 + 32);
      if ( v59 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(v59 + 2));
        v59 = *(_QWORD *)(a1 + 32);
        v60 = *(_QWORD *)(v59 + 8);
        if ( v60 )
        {
          IoAddTriageDumpDataBlock(v60, *(__int16 *)(v60 + 2));
          v59 = *(_QWORD *)(a1 + 32);
          v61 = (_WORD *)(*(_QWORD *)(v59 + 8) + 56LL);
          if ( *v61 )
          {
            IoAddTriageDumpDataBlock((int)v61, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v59 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v59 )
          v62 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
        else
          v62 = 0LL;
        if ( v62 )
        {
          if ( v59 )
            v63 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
          else
            v63 = 0LL;
          if ( v59 )
            v64 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
          else
            LODWORD(v64) = 0;
          IoAddTriageDumpDataBlock(v64, 728);
          if ( *(_WORD *)(v63 + 40) )
          {
            IoAddTriageDumpDataBlock(v63 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v63 + 48), *(unsigned __int16 *)(v63 + 40));
          }
          v59 = *(_QWORD *)(a1 + 32);
          if ( v59 )
            v65 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
          else
            v65 = 0LL;
          if ( *(_WORD *)(v65 + 56) )
          {
            if ( v59 )
              v66 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
            else
              LODWORD(v66) = 0;
            IoAddTriageDumpDataBlock(v66 + 56, 2);
            v67 = *(_QWORD *)(a1 + 32);
            if ( v67 )
              v68 = *(_QWORD *)(*(_QWORD *)(v67 + 312) + 40LL);
            else
              v68 = 0LL;
            if ( v67 )
              v69 = *(_QWORD *)(*(_QWORD *)(v67 + 312) + 40LL);
            else
              v69 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v69 + 64), *(unsigned __int16 *)(v68 + 56));
            v59 = *(_QWORD *)(a1 + 32);
          }
          if ( v59 )
          {
            v70 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
          }
          else
          {
            v70 = 0LL;
            v59 = 0LL;
          }
          if ( *(_QWORD *)(v70 + 16) )
          {
            if ( v59 )
            {
              v71 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
            }
            else
            {
              v71 = 0LL;
              v59 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v71 + 16) + 56LL) )
            {
              if ( v59 )
                v72 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
              else
                v72 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v72 + 16) + 56, 2);
              v73 = *(_QWORD *)(a1 + 32);
              if ( v73 )
                v74 = *(_QWORD *)(*(_QWORD *)(v73 + 312) + 40LL);
              else
                v74 = 0LL;
              if ( v73 )
                v75 = *(_QWORD *)(*(_QWORD *)(v73 + 312) + 40LL);
              else
                v75 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v75 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v74 + 16) + 56LL));
              v59 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 6uLL, v59, 0LL, 0LL);
    }
    if ( a2 )
    {
      v91 = IopRemoveRelationFromList(v57[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000LL);
      goto LABEL_103;
    }
    return 3221225473LL;
  }
  v10 = a2;
  result = PnpProcessBusRelations(a1, a2, v99, a4, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  v12 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v12 - 782) <= 1 )
    v12 = *(_DWORD *)(a1 + 304);
  if ( ((unsigned int)(v12 - 775) <= 1 || (unsigned int)(v12 - 778) <= 1)
    && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3LL, 0LL, P) >= 0 )
  {
    v13 = P[0];
    if ( P[0] )
    {
      v14 = 0LL;
      v92 = 0;
      if ( *(_DWORD *)P[0] )
      {
        while ( 1 )
        {
          BugCheckParameter4 = v13[v14 + 1];
          v15 = *(_QWORD *)(BugCheckParameter4 + 312);
          if ( (*(_DWORD *)(v15 + 32) & 2) != 0 )
          {
            IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
            v27 = *(_QWORD *)(BugCheckParameter4 + 8);
            if ( v27 )
            {
              IoAddTriageDumpDataBlock(v27, *(__int16 *)(v27 + 2));
              v28 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
              if ( *v28 )
              {
                IoAddTriageDumpDataBlock((int)v28, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
              }
            }
            v29 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
            if ( v29 )
            {
              v30 = (unsigned __int16 *)(v29 + 40);
              IoAddTriageDumpDataBlock(v29, 728);
              if ( *v30 )
              {
                IoAddTriageDumpDataBlock((int)v30, 2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v30 + 1), *v30);
              }
              v31 = *(_QWORD *)(BugCheckParameter4 + 312);
              v32 = (_WORD *)(*(_QWORD *)(v31 + 40) + 56LL);
              if ( *v32 )
              {
                IoAddTriageDumpDataBlock((int)v32, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                v31 = *(_QWORD *)(BugCheckParameter4 + 312);
              }
              v33 = *(_QWORD *)(*(_QWORD *)(v31 + 40) + 16LL);
              if ( v33 )
              {
                v34 = (_WORD *)(v33 + 56);
                if ( *v34 )
                {
                  IoAddTriageDumpDataBlock((int)v34, 2);
                  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v35 + 64), *(unsigned __int16 *)(v35 + 56));
                }
              }
            }
            KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
          }
          v16 = *(_QWORD *)(v15 + 40);
          if ( !v16 || !*(_QWORD *)(v16 + 16) )
          {
            IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
            v18 = *(_QWORD *)(BugCheckParameter4 + 8);
            if ( v18 )
            {
              IoAddTriageDumpDataBlock(v18, *(__int16 *)(v18 + 2));
              v19 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
              if ( *v19 )
              {
                IoAddTriageDumpDataBlock((int)v19, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
              }
            }
            v20 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
            if ( v20 )
            {
              v21 = (unsigned __int16 *)(v20 + 40);
              IoAddTriageDumpDataBlock(v20, 728);
              if ( *v21 )
              {
                IoAddTriageDumpDataBlock((int)v21, 2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v21 + 1), *v21);
              }
              v22 = *(_QWORD *)(BugCheckParameter4 + 312);
              v23 = (_WORD *)(*(_QWORD *)(v22 + 40) + 56LL);
              if ( *v23 )
              {
                IoAddTriageDumpDataBlock((int)v23, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                v22 = *(_QWORD *)(BugCheckParameter4 + 312);
              }
              v24 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 16LL);
              if ( v24 )
              {
                v25 = (_WORD *)(v24 + 56);
                if ( *v25 )
                {
                  IoAddTriageDumpDataBlock((int)v25, 2);
                  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v26 + 64), *(unsigned __int16 *)(v26 + 56));
                }
              }
            }
            KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
          }
          v94 = PnpProcessRelation(v16, a2, 0, a4, BugCheckParameter3);
          ObfDereferenceObject((PVOID)BugCheckParameter4);
          LODWORD(BugCheckParameter4) = v94;
          v13 = P[0];
          if ( v94 < 0 )
            goto LABEL_35;
          v14 = (unsigned int)(v92 + 1);
          v92 = v14;
          if ( (unsigned int)v14 >= *(_DWORD *)P[0] )
          {
            v10 = a2;
            break;
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  if ( v10 )
  {
    if ( v10 - 5 > 1 && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1LL, 0LL, P) >= 0 )
    {
      v13 = P[0];
      if ( P[0] )
      {
        v36 = 0LL;
        v93 = 0;
        if ( *(_DWORD *)P[0] )
        {
          while ( 1 )
          {
            BugCheckParameter4 = v13[v36 + 1];
            v37 = *(_QWORD *)(BugCheckParameter4 + 312);
            if ( (*(_DWORD *)(v37 + 32) & 2) != 0 )
            {
              IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
              v48 = *(_QWORD *)(BugCheckParameter4 + 8);
              if ( v48 )
              {
                IoAddTriageDumpDataBlock(v48, *(__int16 *)(v48 + 2));
                v49 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                if ( *v49 )
                {
                  IoAddTriageDumpDataBlock((int)v49, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                }
              }
              v50 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
              if ( v50 )
              {
                v51 = (unsigned __int16 *)(v50 + 40);
                IoAddTriageDumpDataBlock(v50, 728);
                if ( *v51 )
                {
                  IoAddTriageDumpDataBlock((int)v51, 2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v51 + 1), *v51);
                }
                v52 = *(_QWORD *)(BugCheckParameter4 + 312);
                v53 = (_WORD *)(*(_QWORD *)(v52 + 40) + 56LL);
                if ( *v53 )
                {
                  IoAddTriageDumpDataBlock((int)v53, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                  v52 = *(_QWORD *)(BugCheckParameter4 + 312);
                }
                v54 = *(_QWORD *)(*(_QWORD *)(v52 + 40) + 16LL);
                if ( v54 )
                {
                  v55 = (_WORD *)(v54 + 56);
                  if ( *v55 )
                  {
                    IoAddTriageDumpDataBlock((int)v55, 2);
                    v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 64), *(unsigned __int16 *)(v56 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
            }
            v38 = *(_QWORD *)(v37 + 40);
            if ( !v38 || !*(_QWORD *)(v38 + 16) )
            {
              IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
              v39 = *(_QWORD *)(BugCheckParameter4 + 8);
              if ( v39 )
              {
                IoAddTriageDumpDataBlock(v39, *(__int16 *)(v39 + 2));
                v40 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                if ( *v40 )
                {
                  IoAddTriageDumpDataBlock((int)v40, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                }
              }
              v41 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
              if ( v41 )
              {
                v42 = (unsigned __int16 *)(v41 + 40);
                IoAddTriageDumpDataBlock(v41, 728);
                if ( *v42 )
                {
                  IoAddTriageDumpDataBlock((int)v42, 2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v42 + 1), *v42);
                }
                v43 = *(_QWORD *)(BugCheckParameter4 + 312);
                v44 = (_WORD *)(*(_QWORD *)(v43 + 40) + 56LL);
                if ( *v44 )
                {
                  IoAddTriageDumpDataBlock((int)v44, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                  v43 = *(_QWORD *)(BugCheckParameter4 + 312);
                }
                v45 = *(_QWORD *)(*(_QWORD *)(v43 + 40) + 16LL);
                if ( v45 )
                {
                  v46 = (_WORD *)(v45 + 56);
                  if ( *v46 )
                  {
                    IoAddTriageDumpDataBlock((int)v46, 2);
                    v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v47 + 64), *(unsigned __int16 *)(v47 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
            }
            v95 = PnpProcessRelation(v38, a2, 0, a4, BugCheckParameter3);
            ObfDereferenceObject((PVOID)BugCheckParameter4);
            LODWORD(BugCheckParameter4) = v95;
            v13 = P[0];
            if ( v95 < 0 )
              break;
            v36 = (unsigned int)(v93 + 1);
            v93 = v36;
            if ( (unsigned int)v36 >= *(_DWORD *)P[0] )
            {
              v10 = a2;
              goto LABEL_68;
            }
          }
LABEL_35:
          ExFreePoolWithTag(v13, 0);
          return (unsigned int)BugCheckParameter4;
        }
LABEL_68:
        ExFreePoolWithTag(v13, 0);
      }
    }
  }
  result = PnpProcessDependencyRelations(a1, v10, v99 != 0, a4, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  LODWORD(BugCheckParameter4) = 0;
  return (unsigned int)BugCheckParameter4;
}
