/*
 * XREFs of PnpProcessRelation @ 0x14055C464
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x14055C134 (PnpBuildRemovalRelationList.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x14055C738 (PnpProcessBusRelations.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpQueryDeviceRelations @ 0x140553234 (PnpQueryDeviceRelations.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x14055C738 (PnpProcessBusRelations.c)
 *     IopAddRelationToList @ 0x14055C790 (IopAddRelationToList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x14055C820 (PipIsDeviceInDeviceObjectList.c)
 *     IopMergeRelationLists @ 0x1406D2358 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x1406D24C0 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x1406D25A4 (IopCancelPendingEject.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  int v8; // ecx
  int v9; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v11; // esi
  __int64 result; // rax
  int v13; // ecx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdi
  _WORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // rcx
  unsigned __int16 *v28; // rdi
  _WORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _WORD *v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 *v38; // rdi
  _WORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  _WORD *v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 *v45; // rdi
  _WORD *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rsi
  _QWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _WORD *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  _WORD *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // [rsp+30h] [rbp-38h]
  int v90; // [rsp+30h] [rbp-38h]
  int v91; // [rsp+30h] [rbp-38h]
  int v92; // [rsp+38h] [rbp-30h]
  int v93; // [rsp+38h] [rbp-30h]
  __int64 v94; // [rsp+38h] [rbp-30h]
  PVOID P[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v97; // [rsp+80h] [rbp+18h]

  v97 = a3;
  v5 = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 788 )
      return 0LL;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 300);
    if ( v8 == 788 || (unsigned int)(v8 - 782) <= 1 )
      return 3221225473LL;
    if ( *(int *)(a1 + 656) > 0 || ((v8 - 785) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)a4 = 5;
      RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
      return 3221225473LL;
    }
    if ( (unsigned int)(v8 - 778) <= 1 )
      return 3221225488LL;
  }
  v9 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v9;
  v89 = v9;
  if ( v9 )
  {
    if ( v9 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v97, a4, BugCheckParameter3);
    }
    else if ( v9 != -1073741670 )
    {
      v71 = *(_QWORD *)(a1 + 32);
      if ( v71 )
      {
        IoAddTriageDumpDataBlock(v71, *(unsigned __int16 *)(v71 + 2));
        v72 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        if ( v72 )
        {
          IoAddTriageDumpDataBlock(v72, *(__int16 *)(v72 + 2));
          v73 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
          if ( *v73 )
          {
            IoAddTriageDumpDataBlock((int)v73, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
          }
        }
        v74 = *(_QWORD *)(a1 + 32);
        if ( v74 )
          v75 = *(_QWORD *)(*(_QWORD *)(v74 + 312) + 40LL);
        else
          v75 = 0LL;
        if ( v75 )
        {
          if ( v74 )
            v94 = *(_QWORD *)(*(_QWORD *)(v74 + 312) + 40LL);
          else
            v94 = 0LL;
          if ( v74 )
            v76 = *(_QWORD *)(*(_QWORD *)(v74 + 312) + 40LL);
          else
            LODWORD(v76) = 0;
          IoAddTriageDumpDataBlock(v76, 728);
          if ( *(_WORD *)(v94 + 40) )
          {
            IoAddTriageDumpDataBlock(v94 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v94 + 48), *(unsigned __int16 *)(v94 + 40));
          }
          v77 = *(_QWORD *)(a1 + 32);
          if ( v77 )
            v78 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
          else
            v78 = 0LL;
          if ( *(_WORD *)(v78 + 56) )
          {
            if ( v77 )
              v79 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
            else
              LODWORD(v79) = 0;
            IoAddTriageDumpDataBlock(v79 + 56, 2);
            v80 = *(_QWORD *)(a1 + 32);
            if ( v80 )
              v81 = *(_QWORD *)(*(_QWORD *)(v80 + 312) + 40LL);
            else
              v81 = 0LL;
            if ( v80 )
              v82 = *(_QWORD *)(*(_QWORD *)(v80 + 312) + 40LL);
            else
              v82 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v82 + 64), *(unsigned __int16 *)(v81 + 56));
          }
          v83 = *(_QWORD *)(a1 + 32);
          if ( v83 )
            v84 = *(_QWORD *)(*(_QWORD *)(v83 + 312) + 40LL);
          else
            v84 = 0LL;
          if ( *(_QWORD *)(v84 + 16) )
          {
            v85 = v83 ? *(_QWORD *)(*(_QWORD *)(v83 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v85 + 16) + 56LL) )
            {
              if ( v83 )
                v86 = *(_QWORD *)(*(_QWORD *)(v83 + 312) + 40LL);
              else
                v86 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v86 + 16) + 56, 2);
              v87 = *(_QWORD *)(a1 + 32);
              if ( v87 )
                v88 = *(_QWORD *)(*(_QWORD *)(v87 + 312) + 40LL);
              else
                v88 = 0LL;
              if ( v87 )
                v5 = *(_QWORD *)(*(_QWORD *)(v87 + 312) + 40LL);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v88 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, *(_QWORD *)(a1 + 32), BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    v49 = (__int64 *)IopPendingEjects;
    if ( (__int64 *)IopPendingEjects == &IopPendingEjects )
      goto LABEL_105;
    while ( 1 )
    {
      v50 = (_QWORD *)v49[8];
      if ( v50 )
      {
        if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*v50, *(_QWORD *)(a1 + 32), 0LL) )
          break;
      }
      v49 = (__int64 *)*v49;
      if ( v49 == &IopPendingEjects )
        goto LABEL_103;
    }
    if ( a2 == 4 )
    {
      v89 = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(v49);
      IopMergeRelationLists(BugCheckParameter3, v49[8], 0LL);
      if ( v97 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
LABEL_103:
      if ( v49 != &IopPendingEjects )
      {
        LODWORD(BugCheckParameter4) = v89;
        return (unsigned int)BugCheckParameter4;
      }
LABEL_105:
      v51 = *(_QWORD *)(a1 + 32);
      if ( v51 )
      {
        IoAddTriageDumpDataBlock(v51, *(unsigned __int16 *)(v51 + 2));
        v52 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        if ( v52 )
        {
          IoAddTriageDumpDataBlock(v52, *(__int16 *)(v52 + 2));
          v53 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
          if ( *v53 )
          {
            IoAddTriageDumpDataBlock((int)v53, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
          }
        }
        v54 = *(_QWORD *)(a1 + 32);
        if ( v54 )
          v55 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
        else
          v55 = 0LL;
        if ( v55 )
        {
          if ( v54 )
            v56 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
          else
            v56 = 0LL;
          if ( v54 )
            v57 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
          else
            LODWORD(v57) = 0;
          IoAddTriageDumpDataBlock(v57, 728);
          if ( *(_WORD *)(v56 + 40) )
          {
            IoAddTriageDumpDataBlock(v56 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 48), *(unsigned __int16 *)(v56 + 40));
          }
          v58 = *(_QWORD *)(a1 + 32);
          if ( v58 )
            v59 = *(_QWORD *)(*(_QWORD *)(v58 + 312) + 40LL);
          else
            v59 = 0LL;
          if ( *(_WORD *)(v59 + 56) )
          {
            if ( v58 )
              v60 = *(_QWORD *)(*(_QWORD *)(v58 + 312) + 40LL);
            else
              LODWORD(v60) = 0;
            IoAddTriageDumpDataBlock(v60 + 56, 2);
            v61 = *(_QWORD *)(a1 + 32);
            if ( v61 )
              v62 = *(_QWORD *)(*(_QWORD *)(v61 + 312) + 40LL);
            else
              v62 = 0LL;
            if ( v61 )
              v63 = *(_QWORD *)(*(_QWORD *)(v61 + 312) + 40LL);
            else
              v63 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v63 + 64), *(unsigned __int16 *)(v62 + 56));
          }
          v64 = *(_QWORD *)(a1 + 32);
          if ( v64 )
            v65 = *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL);
          else
            v65 = 0LL;
          if ( *(_QWORD *)(v65 + 16) )
          {
            v66 = v64 ? *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v66 + 16) + 56LL) )
            {
              if ( v64 )
                v67 = *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL);
              else
                v67 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v67 + 16) + 56, 2);
              v68 = *(_QWORD *)(a1 + 32);
              if ( v68 )
                v69 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
              else
                v69 = 0LL;
              if ( v68 )
                v70 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
              else
                v70 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v70 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v69 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 6uLL, *(_QWORD *)(a1 + 32), 0LL, 0LL);
    }
    if ( a2 )
    {
      v89 = IopRemoveRelationFromList(v49[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000);
      goto LABEL_103;
    }
    return 3221225473LL;
  }
  v11 = a2;
  result = PnpProcessBusRelations(a1, a2, v97, a4, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  v13 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v13 - 782) <= 1 )
    v13 = *(_DWORD *)(a1 + 304);
  if ( ((unsigned int)(v13 - 775) <= 1 || (unsigned int)(v13 - 778) <= 1)
    && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3, 0LL, (__int64)P) >= 0 )
  {
    v14 = P[0];
    if ( P[0] )
    {
      v15 = 0LL;
      v90 = 0;
      if ( *(_DWORD *)P[0] )
      {
        while ( 1 )
        {
          BugCheckParameter4 = v14[v15 + 1];
          v16 = *(_QWORD *)(BugCheckParameter4 + 312);
          if ( (*(_DWORD *)(v16 + 32) & 2) != 0 )
          {
            IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
            v25 = *(_QWORD *)(BugCheckParameter4 + 8);
            if ( v25 )
            {
              IoAddTriageDumpDataBlock(v25, *(__int16 *)(v25 + 2));
              v26 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
              if ( *v26 )
              {
                IoAddTriageDumpDataBlock((int)v26, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
              }
            }
            v27 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
            if ( v27 )
            {
              v28 = (unsigned __int16 *)(v27 + 40);
              IoAddTriageDumpDataBlock(v27, 728);
              if ( *v28 )
              {
                IoAddTriageDumpDataBlock((int)v28, 2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v28 + 1), *v28);
              }
              v29 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
              if ( *v29 )
              {
                IoAddTriageDumpDataBlock((int)v29, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
              }
              v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
              if ( v30 && *(_WORD *)(v30 + 56) )
              {
                IoAddTriageDumpDataBlock(v30 + 56, 2);
                v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v31 + 64), *(unsigned __int16 *)(v31 + 56));
              }
            }
            KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
          }
          v17 = *(_QWORD *)(v16 + 40);
          if ( !v17 || !*(_QWORD *)(v17 + 16) )
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
              v22 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
              if ( *v22 )
              {
                IoAddTriageDumpDataBlock((int)v22, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
              }
              v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
              if ( v23 && *(_WORD *)(v23 + 56) )
              {
                IoAddTriageDumpDataBlock(v23 + 56, 2);
                v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v24 + 64), *(unsigned __int16 *)(v24 + 56));
              }
            }
            KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
          }
          v92 = PnpProcessRelation(v17, a2, 0, a4, BugCheckParameter3);
          ObfDereferenceObject((PVOID)BugCheckParameter4);
          LODWORD(BugCheckParameter4) = v92;
          v14 = P[0];
          if ( v92 < 0 )
            goto LABEL_35;
          v15 = (unsigned int)(v90 + 1);
          v90 = v15;
          if ( (unsigned int)v15 >= *(_DWORD *)P[0] )
          {
            v11 = a2;
            break;
          }
        }
      }
      ExFreePoolWithTag(v14, 0);
    }
  }
  if ( v11 )
  {
    if ( v11 - 5 > 1 && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
    {
      v14 = P[0];
      if ( P[0] )
      {
        v32 = 0LL;
        v91 = 0;
        if ( *(_DWORD *)P[0] )
        {
          while ( 1 )
          {
            BugCheckParameter4 = v14[v32 + 1];
            v33 = *(_QWORD *)(BugCheckParameter4 + 312);
            if ( (*(_DWORD *)(v33 + 32) & 2) != 0 )
            {
              IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
              v42 = *(_QWORD *)(BugCheckParameter4 + 8);
              if ( v42 )
              {
                IoAddTriageDumpDataBlock(v42, *(__int16 *)(v42 + 2));
                v43 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                if ( *v43 )
                {
                  IoAddTriageDumpDataBlock((int)v43, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                }
              }
              v44 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
              if ( v44 )
              {
                v45 = (unsigned __int16 *)(v44 + 40);
                IoAddTriageDumpDataBlock(v44, 728);
                if ( *v45 )
                {
                  IoAddTriageDumpDataBlock((int)v45, 2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v45 + 1), *v45);
                }
                v46 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
                if ( *v46 )
                {
                  IoAddTriageDumpDataBlock((int)v46, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                }
                v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                if ( v47 && *(_WORD *)(v47 + 56) )
                {
                  IoAddTriageDumpDataBlock(v47 + 56, 2);
                  v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v48 + 64), *(unsigned __int16 *)(v48 + 56));
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
            }
            v34 = *(_QWORD *)(v33 + 40);
            if ( !v34 || !*(_QWORD *)(v34 + 16) )
            {
              IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
              v35 = *(_QWORD *)(BugCheckParameter4 + 8);
              if ( v35 )
              {
                IoAddTriageDumpDataBlock(v35, *(__int16 *)(v35 + 2));
                v36 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                if ( *v36 )
                {
                  IoAddTriageDumpDataBlock((int)v36, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                }
              }
              v37 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
              if ( v37 )
              {
                v38 = (unsigned __int16 *)(v37 + 40);
                IoAddTriageDumpDataBlock(v37, 728);
                if ( *v38 )
                {
                  IoAddTriageDumpDataBlock((int)v38, 2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v38 + 1), *v38);
                }
                v39 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
                if ( *v39 )
                {
                  IoAddTriageDumpDataBlock((int)v39, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                }
                v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                if ( v40 )
                {
                  if ( *(_WORD *)(v40 + 56) )
                  {
                    IoAddTriageDumpDataBlock(v40 + 56, 2);
                    v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v41 + 64), *(unsigned __int16 *)(v41 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
            }
            v93 = PnpProcessRelation(v34, a2, 0, a4, BugCheckParameter3);
            ObfDereferenceObject((PVOID)BugCheckParameter4);
            LODWORD(BugCheckParameter4) = v93;
            v14 = P[0];
            if ( v93 < 0 )
              break;
            v32 = (unsigned int)(v91 + 1);
            v91 = v32;
            if ( (unsigned int)v32 >= *(_DWORD *)P[0] )
            {
              v11 = a2;
              goto LABEL_68;
            }
          }
LABEL_35:
          ExFreePoolWithTag(v14, 0);
          return (unsigned int)BugCheckParameter4;
        }
LABEL_68:
        ExFreePoolWithTag(v14, 0);
      }
    }
  }
  result = PnpProcessDependencyRelations(a1, v11, v97 != 0, a4, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  LODWORD(BugCheckParameter4) = 0;
  return (unsigned int)BugCheckParameter4;
}
