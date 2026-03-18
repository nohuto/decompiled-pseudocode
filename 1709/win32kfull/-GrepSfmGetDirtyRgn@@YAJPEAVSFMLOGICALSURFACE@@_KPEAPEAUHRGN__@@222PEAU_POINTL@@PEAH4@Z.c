/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0091B60
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x1C0091A14 (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0017A18 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008F200 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSfmGetDirtyRgn(
        struct SFMLOGICALSURFACE *a1,
        HRGN *a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  char *v9; // rbx
  HRGN *v10; // r15
  unsigned int v15; // esi
  int *v16; // rcx
  __int64 v17; // rax
  HRGN *v18; // rax
  void *v19; // rcx
  int *v20; // rax
  int v21; // r8d
  int v22; // edx
  struct RGNOBJ *v23; // rdx
  struct HOBJ__ *v24; // rax
  struct HOBJ__ *v26; // rax
  __int64 v27; // rax
  HRGN *v28; // rcx
  HRGN *v29; // rsi
  struct HOBJ__ *v30; // rax
  struct _POINTL *v31; // rcx
  HRGN *v32; // [rsp+20h] [rbp-20h] BYREF
  int v33; // [rsp+28h] [rbp-18h]
  _QWORD v34[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v35; // [rsp+70h] [rbp+30h] BYREF

  v9 = (char *)a1 + 264;
  v10 = 0LL;
  v15 = -1073741811;
  if ( a1 != (struct SFMLOGICALSURFACE *)-264LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
  }
  v16 = a9;
  *a9 = 0;
  if ( *((_QWORD *)a1 + 24) )
  {
    *v16 = *((_DWORD *)a1 + 44);
    if ( *((_DWORD *)a1 + 44) == 1
      && ((v27 = *((_QWORD *)a1 + 24)) == 0 ? (v28 = 0LL) : (v28 = *(HRGN **)(v27 + 8)), v28 == a2) )
    {
      v10 = a6;
      if ( a6 )
      {
        v29 = a5;
        v35 = (void *)*((_QWORD *)a1 + 21);
        if ( a5 && *((_QWORD *)a1 + 19) )
        {
          a9 = (int *)*((_QWORD *)a1 + 19);
          *v29 = (HRGN)RGNOBJ::hrgnAssociate((void **)&a9);
        }
        EtwTranslationUpdateOffsetDWM(*(_QWORD *)a1, *((unsigned int *)a1 + 40), HIDWORD(*((_QWORD *)a1 + 20)));
        EtwTraceMoveRegion(*(_QWORD *)a1, 0LL, 6LL, *((_QWORD *)a1 + 21));
        v30 = RGNOBJ::hrgnAssociate(&v35);
        v31 = a7;
        *v10 = (HRGN)v30;
        v10 = 0LL;
        if ( v31 )
          *v31 = *(struct _POINTL *)((char *)a1 + 160);
        METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a1 + 136), 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = (*((_DWORD *)a1 + 64) >> 4) & 1;
    if ( a3 )
    {
      v17 = *((_QWORD *)a1 + 24);
      v18 = v17 ? *(HRGN **)(v17 + 8) : v10;
      if ( v18 == a2 )
      {
        a9 = (int *)*((_QWORD *)a1 + 17);
        if ( a9 )
        {
          EtwTraceDWMGetDirtyRegion(*(_QWORD *)a1, 0LL);
          v26 = RGNOBJ::hrgnAssociate((void **)&a9);
          *a3 = (HRGN)v26;
          if ( v26 )
          {
            *((_QWORD *)a1 + 17) = v10;
            *((_DWORD *)a1 + 64) &= ~2u;
          }
        }
      }
    }
    if ( !a4 || (*((_DWORD *)a1 + 64) & 4) == 0 && a2 )
      goto LABEL_29;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
    v19 = (void *)*((_QWORD *)a1 + 12);
    v20 = (int *)*((_QWORD *)a1 + 11);
    v35 = v19;
    a9 = v20;
    if ( v32 == v10 )
    {
LABEL_27:
      if ( v33 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
LABEL_29:
      v15 = (unsigned int)v10;
      goto LABEL_30;
    }
    v21 = (int)v10;
    v22 = (int)v10;
    LOBYTE(v21) = v19 != 0LL;
    LOBYTE(v22) = v20 != 0LL;
    if ( v21 == v22 )
    {
      if ( !v19 )
        goto LABEL_21;
      if ( !v20 )
      {
LABEL_24:
        if ( v32 != v10 )
        {
          v24 = RGNOBJ::hrgnAssociate((void **)&v32);
          *a4 = (HRGN)v24;
          if ( !v24 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
        }
        goto LABEL_27;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v34);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v34);
      if ( (*((_DWORD *)a1 + 64) & 4) != 0 )
      {
        if ( (HRGN *)v34[0] != v10
          && RGNOBJ::bMerge((RGNOBJ *)v34, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&a9, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v34, (struct RGNOBJ *)&v32);
        }
      }
      else
      {
        RGNOBJ::bCopy((RGNOBJ *)&v32, (struct RGNOBJ *)&v35);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v34);
    }
    else
    {
      if ( v20 )
        v23 = (struct RGNOBJ *)&a9;
      else
        v23 = (struct RGNOBJ *)&v35;
      RGNOBJ::bCopy((RGNOBJ *)&v32, v23);
    }
    v20 = a9;
LABEL_21:
    if ( v20 && (*((_DWORD *)a1 + 64) & 0x10) != 0 )
      RGNOBJ::vSet((RGNOBJ *)&a9);
    goto LABEL_24;
  }
LABEL_30:
  if ( v9 )
  {
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v15;
}
