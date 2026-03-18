/*
 * XREFs of CmpProcessLightWeightUOW @ 0x14054F18C
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x14054E9B4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14054EAD4 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14054F694 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140703F80 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407042E8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1407045D4 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x140704710 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140704BCC (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14070531C (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14070539C (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r8
  _QWORD *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[1] = v11;
  v11[0] = v11;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 7 )
  {
    if ( v6 == 8 )
      goto LABEL_12;
    if ( v6 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW(a1, a2);
        v10 = 10LL;
        goto LABEL_15;
      }
      v7 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
    }
    else
    {
      if ( v6 <= 11 )
        goto LABEL_12;
      if ( v6 != 12 )
      {
        if ( v6 == 13 )
          goto LABEL_12;
        return (unsigned int)-1073741811;
      }
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2);
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
    }
  }
  else
  {
    if ( v6 == 7 )
      goto LABEL_21;
    if ( v6 )
    {
      if ( v6 == 1 )
        goto LABEL_12;
      if ( v6 != 2 )
      {
        if ( v6 != 3 )
        {
          if ( v6 > 3 )
          {
            if ( v6 <= 5 )
            {
              if ( !a3 )
              {
                v7 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
                goto LABEL_11;
              }
              CmpLightWeightCommitSetValueKeyUoW(a1, a2);
              v10 = 4LL;
LABEL_15:
              ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(
                *(_QWORD *)(a1 + 48),
                0LL,
                v10,
                v11);
              goto LABEL_12;
            }
            if ( !a3 )
            {
              v8 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
              if ( (v8 & 0x80000000) != 0 )
                return v8;
LABEL_19:
              v7 = CmpLightWeightPrepareSetKeyUserFlags(a1);
              goto LABEL_11;
            }
            CmpLightWeightCommitDeleteValueKeyUoW(a1, a2);
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(
              *(_QWORD *)(a1 + 48),
              0LL,
              4LL,
              v11);
LABEL_21:
            if ( a3 )
            {
              if ( a3 == 1 )
                CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
              goto LABEL_12;
            }
            goto LABEL_19;
          }
          return (unsigned int)-1073741811;
        }
LABEL_12:
        v8 = 0;
        CmpSignalDeferredPosts(v11);
        return v8;
      }
      if ( a3 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v11);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2);
        goto LABEL_12;
      }
      v7 = CmpLightWeightPrepareDeleteKeyUoW(a1, a2);
    }
    else
    {
      if ( a3 )
      {
        CmpLightWeightCommitAddKeyUoW(a1, a2);
        v10 = 1LL;
        goto LABEL_15;
      }
      v7 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
    }
  }
LABEL_11:
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_12;
  return v8;
}
