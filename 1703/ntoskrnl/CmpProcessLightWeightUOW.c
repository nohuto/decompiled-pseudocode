/*
 * XREFs of CmpProcessLightWeightUOW @ 0x140669CF4
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x140669A1C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140669B9C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140673D30 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140674070 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14067433C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14067446C (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14067450C (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140675228 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1406752A8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 7 )
  {
    if ( v6 == 8 )
      goto LABEL_41;
    if ( v6 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          10,
          (__int64)v10);
        goto LABEL_41;
      }
      v8 = CmpLightWeightPrepareSetSecDescUoW();
    }
    else
    {
      if ( v6 <= 11 )
        goto LABEL_41;
      if ( v6 != 12 )
      {
        if ( v6 == 13 )
          goto LABEL_41;
        return (unsigned int)-1073741811;
      }
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW();
        goto LABEL_41;
      }
      v8 = CmpLightWeightPrepareRenameKeyUoW();
    }
  }
  else
  {
    if ( v6 == 7 )
      goto LABEL_13;
    if ( v6 )
    {
      if ( v6 == 1 )
        goto LABEL_41;
      if ( v6 != 2 )
      {
        if ( v6 == 3 )
          goto LABEL_41;
        if ( v6 > 3 )
        {
          if ( v6 > 5 )
          {
            if ( !a3 )
            {
              v7 = CmpLightWeightPrepareDeleteValueKeyUoW();
              if ( (v7 & 0x80000000) != 0 )
                return v7;
              goto LABEL_14;
            }
            CmpLightWeightCommitDeleteValueKeyUoW();
            CmpReportNotify(
              *(_QWORD *)(a1 + 48),
              *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
              0LL,
              4,
              (__int64)v10);
LABEL_13:
            if ( a3 )
            {
              if ( a3 == 1 )
                CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
              goto LABEL_41;
            }
LABEL_14:
            v8 = CmpLightWeightPrepareSetKeyUserFlags(a1);
            goto LABEL_38;
          }
          if ( !a3 )
          {
            v8 = CmpLightWeightPrepareSetValueKeyUoW();
            goto LABEL_38;
          }
          CmpLightWeightCommitSetValueKeyUoW();
          CmpReportNotify(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
            0LL,
            4,
            (__int64)v10);
LABEL_41:
          v7 = 0;
          CmpSignalDeferredPosts(v10);
          return v7;
        }
        return (unsigned int)-1073741811;
      }
      if ( a3 )
      {
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          1,
          (__int64)v10);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2);
        goto LABEL_41;
      }
      v8 = CmpLightWeightPrepareDeleteKeyUoW();
    }
    else
    {
      if ( a3 )
      {
        CmpLightWeightCommitAddKeyUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          1,
          (__int64)v10);
        goto LABEL_41;
      }
      v8 = CmpLightWeightPrepareAddKeyUoW();
    }
  }
LABEL_38:
  v7 = v8;
  if ( v8 >= 0 )
    goto LABEL_41;
  return v7;
}
