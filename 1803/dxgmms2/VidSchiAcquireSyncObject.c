/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00066F0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006360 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_44;
  v6 = *(_DWORD *)(a2 + 44);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      if ( !*(_QWORD *)(a2 + 48) )
      {
        v7 = *(_QWORD *)(a3 + 88);
        if ( !v7 )
          v7 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)(a2 + 48) = v7;
        v3 = 1;
      }
      v8 = *(_QWORD *)(a3 + 88);
      if ( !v8 )
        v8 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 56) = v8;
      goto LABEL_11;
    }
    goto LABEL_44;
  }
  if ( v6 == 4 )
    goto LABEL_15;
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v20 = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 40LL);
      else
        v20 = *(_QWORD *)(a2 + 56);
      v21 = *(_QWORD *)(a3 + 304);
      if ( v20 >= v21 )
      {
        if ( *(_BYTE *)(a2 + 27) )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 32LL);
          v21 = *(_QWORD *)(a3 + 304);
        }
        else
        {
          v22 = *(_QWORD *)(a2 + 64);
        }
        if ( v22 >= v21 )
          goto LABEL_12;
        goto LABEL_25;
      }
      if ( !*(_BYTE *)(a2 + 25) )
        goto LABEL_44;
      goto LABEL_24;
    }
    if ( v6 == 3 )
      goto LABEL_44;
    if ( v6 != 5 )
      goto LABEL_26;
LABEL_15:
    v10 = *(_QWORD *)(a3 + 304);
    if ( *(_BYTE *)(a2 + 28) )
      goto LABEL_12;
    v11 = *(unsigned __int64 **)(a2 + 56);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v11 >= v10 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)v11 - (int)v10 >= 0 )
    {
      goto LABEL_12;
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v19 + 996);
      *(_DWORD *)(a3 + 272) |= 8u;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(a2 + 30) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v12 = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 40LL);
      else
        v12 = *(_DWORD *)(a2 + 44) == 2 ? *(_QWORD *)(a2 + 56) : *(_QWORD *)(a2 + 80);
      if ( *(_QWORD *)(a3 + 304) <= v12 )
        goto LABEL_25;
    }
LABEL_24:
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 788LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1228LL);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v13 + 992);
    *(_DWORD *)(a3 + 272) |= 4u;
LABEL_25:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 792));
    goto LABEL_26;
  }
  v24 = *(_DWORD *)(a2 + 56);
  if ( v24 )
  {
    v25 = *(_DWORD *)(a2 + 48);
    if ( v25 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 48) = v25 - 1;
    }
    *(_DWORD *)(a2 + 56) = v24 - 1;
LABEL_11:
    if ( v3 )
    {
LABEL_12:
      *(_DWORD *)(a3 + 272) |= 1u;
      return 0LL;
    }
LABEL_26:
    v14 = (__int64 *)(a3 + 288);
    if ( (unsigned int)(*(_DWORD *)(a2 + 44) - 4) > 1 )
    {
      if ( v4 )
      {
        v17 = *(__int64 ***)(a2 + 112);
        v18 = a2 + 104;
        if ( *v17 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v17 = *(__int64 ***)(a2 + 96);
        v18 = a2 + 88;
        if ( *v17 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v14 = v18;
      v14[1] = (__int64)v17;
      *v17 = v14;
      *(_QWORD *)(v18 + 8) = v14;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1000LL;
      v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1008LL);
      if ( *v16 != (__int64 *)v15 )
        __fastfail(3u);
      *v14 = v15;
      v14[1] = (__int64)v16;
      *v16 = v14;
      *(_QWORD *)(v15 + 8) = v14;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    return 0LL;
  }
LABEL_44:
  v23 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v23);
  return 3221225473LL;
}
