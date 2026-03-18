/*
 * XREFs of ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C003CC9C
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C003EC38 (DxgkMiracastGetNextChunkInfo.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C003CDD4 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 */

__int64 __fastcall ProcessMiracastAPIChunk(
        struct _MIRACAST_DEVICE_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int *a3,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a4,
        unsigned int *a5)
{
  __int64 v6; // rsi
  __int64 v10; // rax
  MIRACAST_CHUNK_LIST *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rax
  struct MIRACAST_CHUNK *v16; // r15
  __int64 v17; // rcx
  struct MIRACAST_CHUNK **v18; // rax
  __int64 v19; // rdx

  v6 = *a3;
  if ( *((_BYTE *)a1 + 588) )
  {
    *((_BYTE *)a1 + 588) = 0;
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    WdLogEvent5_WdWarning(v10);
    return 3221225997LL;
  }
  else
  {
    v12 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 61);
    v13 = 0LL;
    if ( *(MIRACAST_CHUNK_LIST **)v12 != v12 )
      v13 = *(_QWORD *)v12;
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 40) + 28;
      if ( (unsigned int)v6 >= v14 )
      {
        do
        {
          v16 = MIRACAST_CHUNK_LIST::RemoveHead(v12);
          memmove(a4, (char *)v16 + 16, v14);
          v17 = *((_QWORD *)a2 + 392);
          LODWORD(v6) = v6 - v14;
          a4 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)((char *)a4 + v14);
          v18 = *(struct MIRACAST_CHUNK ***)(v17 + 8);
          if ( *v18 != (struct MIRACAST_CHUNK *)v17 )
            __fastfail(3u);
          *(_QWORD *)v16 = v17;
          v19 = 0LL;
          *((_QWORD *)v16 + 1) = v18;
          *v18 = v16;
          *(_QWORD *)(v17 + 8) = v16;
          ++*(_DWORD *)(v17 + 16);
          v12 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 61);
          if ( *(MIRACAST_CHUNK_LIST **)v12 != v12 )
            v19 = *(_QWORD *)v12;
          if ( !v19 )
            break;
          v14 = *(_DWORD *)(v19 + 40) + 28;
        }
        while ( v14 <= (unsigned int)v6 );
        *a5 = *((_DWORD *)v12 + 4);
        *a3 -= v6;
        return 0LL;
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v15 + 32) = v14;
        *(_QWORD *)(v15 + 24) = v6;
        WdLogEvent5_WdError(v15);
        return 3221225507LL;
      }
    }
    else
    {
      return 3221225534LL;
    }
  }
}
