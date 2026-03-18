/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B2774
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B2BE0 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B1848 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C01B1BD8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C01B1E8C (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(
        DDAMetaData *this,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagRECT *v4; // rbx
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[16]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 738LL;
    WdLogEvent5_WdAssertion(v19);
  }
  else
  {
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v4,
                                           (__int64)v20);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v4 = (struct tagRECT *)v20;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v9 = WdLogNewEntry5_WdError(v8, v7);
            *(_QWORD *)(v9 + 24) = 775LL;
LABEL_10:
            WdLogEvent5_WdError(v9);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v4) )
          {
            v9 = WdLogNewEntry5_WdError(v12, v11);
            *(_QWORD *)(v9 + 24) = 790LL;
            goto LABEL_10;
          }
          return 1LL;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
            *((_QWORD *)this + 9),
            (unsigned int)v4->left,
            (unsigned int)v4->top,
            (unsigned int)v4->right,
            v4->bottom);
    if ( !v15 )
    {
      v9 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v9 + 24) = 801LL;
      goto LABEL_10;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = 807LL;
      WdLogEvent5_WdError(v18);
      return v15;
    }
  }
  return 1LL;
}
