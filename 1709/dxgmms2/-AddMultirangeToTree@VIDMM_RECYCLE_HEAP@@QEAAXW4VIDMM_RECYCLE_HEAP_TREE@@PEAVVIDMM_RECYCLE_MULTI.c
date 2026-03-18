/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006A010
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069870 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C006A168 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006A400 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006ACA0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006B38C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A62B4 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6388 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A63FC (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006A6D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r14
  struct _RTL_BALANCED_NODE *v11; // rbx
  struct _RTL_BALANCED_NODE *v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp-18h]

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v9 = *(_QWORD *)(a3 + 56);
  v15[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v15[1] = v9;
  v16 = 0;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v10 = a1 + 7;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            if ( !v11->Children[0] )
              goto LABEL_16;
            v11 = v11->Children[0];
          }
          if ( !v11->Children[1] )
            break;
          v11 = v11->Children[1];
        }
LABEL_9:
        LOBYTE(v8) = 1;
      }
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7, v8);
        v14[3] = 270LL;
        v14[4] = 52LL;
        v14[5] = 15LL;
        v14[6] = v4;
        v14[7] = 0LL;
        result = WdLogEvent5_WdCriticalError(v14);
        goto LABEL_11;
      }
      v10 = a1 + 8;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) >= 0 )
          {
            v12 = v11->Children[1];
            if ( !v12 )
              goto LABEL_9;
          }
          else
          {
            v12 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_16;
          }
          v11 = v12;
        }
      }
    }
  }
  else
  {
    v10 = a1 + 6;
    LOBYTE(v8) = 0;
    v11 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v11 )
    {
      while ( 1 )
      {
        while ( (int)VidMmCompareForInsertAlignedRange(v15, v11) >= 0 )
        {
          if ( !v11->Children[1] )
            goto LABEL_9;
          v11 = v11->Children[1];
        }
        if ( !v11->Children[0] )
          break;
        v11 = v11->Children[0];
      }
LABEL_16:
      LOBYTE(v8) = 0;
    }
  }
  result = RtlAvlInsertNodeEx(v10, v11, v8, a3);
LABEL_11:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
