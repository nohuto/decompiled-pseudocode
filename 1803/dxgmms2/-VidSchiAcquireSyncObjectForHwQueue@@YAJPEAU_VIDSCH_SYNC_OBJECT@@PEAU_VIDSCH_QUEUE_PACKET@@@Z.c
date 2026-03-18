/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F920
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1C0032FB0 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  char v2; // r10
  char v3; // di
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rax
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // rax
  struct _VIDSCH_SYNC_OBJECT *v11; // rax
  char *v12; // rdx
  struct _VIDSCH_SYNC_OBJECT **v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r9

  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL) + 8LL);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *((_DWORD *)a1 + 8) == 0x7FFFFFFF )
    goto LABEL_2;
  v8 = *((_DWORD *)a1 + 11);
  switch ( v8 )
  {
    case 0:
      if ( *((_QWORD *)a1 + 7) )
        goto LABEL_2;
      if ( !*((_QWORD *)a1 + 6) )
      {
        v19 = *((_QWORD *)a2 + 11);
        if ( !v19 )
          v19 = *((_QWORD *)a2 + 12);
        *((_QWORD *)a1 + 6) = v19;
        v2 = 1;
      }
      v20 = *((_QWORD *)a2 + 11);
      if ( !v20 )
        v20 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 7) = v20;
      goto LABEL_42;
    case 1:
      v17 = *((_DWORD *)a1 + 14);
      if ( !v17 )
        goto LABEL_2;
      v18 = *((_DWORD *)a1 + 12);
      if ( v18 )
      {
        v2 = 1;
        *((_DWORD *)a1 + 12) = v18 - 1;
      }
      *((_DWORD *)a1 + 14) = v17 - 1;
LABEL_42:
      if ( !v2 )
        goto LABEL_14;
      goto LABEL_43;
    case 2:
      if ( *((_BYTE *)a1 + 27) )
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 25) + 40LL);
      else
        v14 = *((_QWORD *)a1 + 7);
      v15 = *((_QWORD *)a2 + 38);
      if ( v14 >= v15 )
      {
        if ( *((_BYTE *)a1 + 27) )
        {
          v16 = *(_QWORD *)(*((_QWORD *)a1 + 25) + 32LL);
          v15 = *((_QWORD *)a2 + 38);
        }
        else
        {
          v16 = *((_QWORD *)a1 + 8);
        }
        if ( v16 >= v15 )
          goto LABEL_43;
LABEL_14:
        if ( (unsigned int)(*((_DWORD *)a1 + 11) - 4) <= 1 )
        {
          v21 = (_QWORD *)((char *)a2 + 288);
          v22 = *(_QWORD **)(v5 + 1008);
          if ( *v22 != v5 + 1000 )
            __fastfail(3u);
          *v21 = v5 + 1000;
          v21[1] = v22;
          *v22 = v21;
          *(_QWORD *)(v5 + 1008) = v21;
        }
        else
        {
          v11 = (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 288);
          if ( v3 )
          {
            v12 = (char *)a1 + 104;
            v13 = (struct _VIDSCH_SYNC_OBJECT **)*((_QWORD *)a1 + 14);
            if ( *v13 != (struct _VIDSCH_SYNC_OBJECT *)((char *)a1 + 104) )
              __fastfail(3u);
          }
          else
          {
            v12 = (char *)a1 + 88;
            v13 = (struct _VIDSCH_SYNC_OBJECT **)*((_QWORD *)a1 + 12);
            if ( *v13 != (struct _VIDSCH_SYNC_OBJECT *)((char *)a1 + 88) )
              __fastfail(3u);
          }
          *(_QWORD *)v11 = v12;
          *((_QWORD *)v11 + 1) = v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
        }
        _InterlockedAdd((volatile signed __int32 *)a1 + 8, 1u);
        return 0LL;
      }
      if ( *((_BYTE *)a1 + 25) )
      {
LABEL_13:
        ++*((_DWORD *)a1 + 9);
        v3 = 1;
        ++*(_DWORD *)(v4 + 1228);
        ++*(_DWORD *)(v5 + 992);
        *((_DWORD *)a2 + 68) |= 4u;
        goto LABEL_14;
      }
LABEL_2:
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
      return 3221225473LL;
  }
  if ( (unsigned int)(v8 - 4) > 1 )
    goto LABEL_14;
  v9 = *((_QWORD *)a2 + 38);
  if ( !*((_BYTE *)a1 + 28) )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 7);
    if ( *((_BYTE *)a1 + 29) )
    {
      if ( *v10 >= v9 )
        goto LABEL_43;
LABEL_12:
      if ( *((_QWORD *)a1 + 9) )
      {
        ++*(_DWORD *)(v5 + 996);
        *((_DWORD *)a2 + 68) |= 8u;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if ( *(_DWORD *)v10 - (int)v9 < 0 )
      goto LABEL_12;
  }
LABEL_43:
  *((_DWORD *)a2 + 68) |= 1u;
  return 0LL;
}
