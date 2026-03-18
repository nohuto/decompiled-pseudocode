/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C88D4
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01C8CD4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C0035948 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0035A60 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C01C9B44 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        __int64 a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 result; // rax
  OUTPUTDUPL_MGR_INDIRECT *v11; // rax
  OUTPUTDUPL_MGR_INDIRECT *v12; // rcx
  unsigned __int64 v13; // rax
  __int128 v14; // rcx
  char *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax

  v8 = a1;
  if ( a5 )
  {
    *a5 = 0LL;
    if ( a4 && a3 )
    {
      v11 = (OUTPUTDUPL_MGR_INDIRECT *)operator new[](0x78uLL, 0x674D444Fu, PagedPool);
      if ( v11 )
        v12 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v11, *a4, *a3, v8);
      else
        v12 = 0LL;
      v13 = (unsigned __int64)v12 + 24;
      v14 = -(__int128)(unsigned __int64)v12;
      *((_QWORD *)&v14 + 1) &= v13;
    }
    else
    {
      v15 = (char *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
      *((_QWORD *)&v14 + 1) = v15;
      if ( v15 )
      {
        *((_DWORD *)v15 + 2) = 0;
        *((_QWORD *)v15 + 2) = 0LL;
        *((_QWORD *)v15 + 3) = 0LL;
        *((_QWORD *)v15 + 7) = 0LL;
        *((_QWORD *)v15 + 8) = 0LL;
        *(_QWORD *)v15 = a2;
        *((_DWORD *)v15 + 12) = 1;
        *((_DWORD *)v15 + 13) = v8;
        v15[72] = 0;
        v16 = v15 + 32;
        v16[1] = v16;
        *v16 = v16;
      }
      else
      {
        *((_QWORD *)&v14 + 1) = 0LL;
      }
    }
    if ( *((_QWORD *)&v14 + 1) )
    {
      result = OUTPUTDUPL_MGR::Initialize(*((OUTPUTDUPL_MGR **)&v14 + 1));
      v18 = result;
      if ( (int)result >= 0 )
      {
        *a5 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)&v14 + 1);
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v19 + 24) = a2;
        WdLogEvent5_WdError(v19);
        OUTPUTDUPL_MGR::`scalar deleting destructor'(*((OUTPUTDUPL_MGR **)&v14 + 1));
        return v18;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  return result;
}
