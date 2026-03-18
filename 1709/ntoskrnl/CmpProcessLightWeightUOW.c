/*
 * XREFs of CmpProcessLightWeightUOW @ 0x14044BDE0
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x14044BBC8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14044BCDC (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14044BABC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14044BF50 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14044C5BC (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14044C664 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14069ECA8 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14069F1D4 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14069FBE4 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, int a3)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 7 )
  {
    if ( v6 == 8 )
      goto LABEL_12;
    if ( v6 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0,
          10,
          (__int64)v10);
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareSetSecDescUoW();
      goto LABEL_11;
    }
    if ( v6 <= 11 )
      goto LABEL_12;
    if ( v6 == 12 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW();
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareRenameKeyUoW();
      goto LABEL_11;
    }
    if ( v6 == 13 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  switch ( v6 )
  {
    case 7:
      goto LABEL_17;
    case 0:
      if ( a3 )
      {
        CmpLightWeightCommitAddKeyUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0,
          1,
          (__int64)v10);
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareAddKeyUoW();
      goto LABEL_11;
    case 1:
      goto LABEL_12;
    case 2:
      if ( a3 )
      {
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0,
          1,
          (__int64)v10);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2);
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareDeleteKeyUoW();
      goto LABEL_11;
    case 3:
LABEL_12:
      v8 = 0;
      CmpSignalDeferredPosts(v10);
      return v8;
  }
  if ( v6 <= 3 )
    return (unsigned int)-1073741811;
  if ( v6 > 5 )
  {
    if ( !a3 )
    {
      v8 = CmpLightWeightPrepareDeleteValueKeyUoW();
      if ( (v8 & 0x80000000) != 0 )
        return v8;
LABEL_27:
      v7 = CmpLightWeightPrepareSetKeyUserFlags(a1);
      goto LABEL_11;
    }
    CmpLightWeightCommitDeleteValueKeyUoW(a1, a2);
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      0,
      4,
      (__int64)v10);
LABEL_17:
    if ( a3 )
    {
      if ( a3 == 1 )
        CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
      goto LABEL_12;
    }
    goto LABEL_27;
  }
  if ( a3 )
  {
    CmpLightWeightCommitSetValueKeyUoW();
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      0,
      4,
      (__int64)v10);
    goto LABEL_12;
  }
  v7 = CmpLightWeightPrepareSetValueKeyUoW();
LABEL_11:
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_12;
  return v8;
}
