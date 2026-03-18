/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C011839C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01AC65C (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C003A510 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C003A634 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0118618 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        __int64 a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  unsigned int v8; // ebp
  char *v9; // rax
  __int128 v10; // rcx
  _QWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rax
  OUTPUTDUPL_MGR_INDIRECT *v16; // rax
  OUTPUTDUPL_MGR_INDIRECT *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v8 = a1;
  if ( a5 )
  {
    *a5 = 0LL;
    if ( a4 && a3 )
    {
      v16 = (OUTPUTDUPL_MGR_INDIRECT *)operator new(0x78uLL, 0x674D444Fu, PagedPool);
      if ( v16 )
        v17 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v16, *a4, *a3, v8);
      else
        v17 = 0LL;
      v18 = (unsigned __int64)v17 + 24;
      v10 = -(__int128)(unsigned __int64)v17;
      *((_QWORD *)&v10 + 1) &= v18;
    }
    else
    {
      v9 = (char *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
      *((_QWORD *)&v10 + 1) = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *((_QWORD *)v9 + 2) = 0LL;
        *((_QWORD *)v9 + 3) = 0LL;
        *((_QWORD *)v9 + 7) = 0LL;
        *((_QWORD *)v9 + 8) = 0LL;
        *(_QWORD *)v9 = a2;
        *((_DWORD *)v9 + 12) = 1;
        *((_DWORD *)v9 + 13) = v8;
        v9[72] = 0;
        v11 = v9 + 32;
        v11[1] = v11;
        *v11 = v11;
      }
      else
      {
        *((_QWORD *)&v10 + 1) = 0LL;
      }
    }
    if ( *((_QWORD *)&v10 + 1) )
    {
      result = OUTPUTDUPL_MGR::Initialize(*((OUTPUTDUPL_MGR **)&v10 + 1));
      v14 = result;
      if ( (int)result < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v10, v13);
        *(_QWORD *)(v20 + 24) = a2;
        WdLogEvent5_WdError(v20);
        OUTPUTDUPL_MGR::`scalar deleting destructor'(*((OUTPUTDUPL_MGR **)&v10 + 1));
        return v14;
      }
      else
      {
        *a5 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)&v10 + 1);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v19 + 24) = a2;
      WdLogEvent5_WdLowResource(v19);
      return 3221225495LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  return result;
}
