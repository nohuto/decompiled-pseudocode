/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00063A0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005FE0 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // r9
  char v4; // r11
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 **v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // eax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_40;
  v6 = *(_DWORD *)(a2 + 40);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      v7 = *(_QWORD *)(a2 + 48);
      if ( !v7 )
        *(_QWORD *)(a2 + 48) = a1;
      *(_QWORD *)(a2 + 56) = a1;
      v3 = v7 == 0;
      goto LABEL_7;
    }
    goto LABEL_40;
  }
  if ( v6 == 2 )
  {
    if ( *(_BYTE *)(a2 + 27) )
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 40LL);
    else
      v11 = *(_QWORD *)(a2 + 56);
    if ( v11 >= *(_QWORD *)(a3 + 320) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v12 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
      else
        v12 = *(_QWORD *)(a2 + 64);
      if ( v12 >= *(_QWORD *)(a3 + 320) )
        goto LABEL_8;
      goto LABEL_28;
    }
    if ( !*(_BYTE *)(a2 + 25) )
      goto LABEL_40;
    goto LABEL_37;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 3 )
      goto LABEL_40;
    if ( (unsigned int)(v6 - 4) > 1 )
      goto LABEL_29;
    v9 = *(_QWORD *)(a3 + 320);
    if ( *(_BYTE *)(a2 + 28) )
      goto LABEL_8;
    v10 = *(unsigned __int64 **)(a2 + 56);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v10 >= v9 )
        goto LABEL_8;
    }
    else if ( *(_DWORD *)v10 - (int)v9 >= 0 )
    {
      goto LABEL_8;
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v13 + 980);
      *(_DWORD *)(a3 + 288) |= 8u;
LABEL_28:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 784));
      goto LABEL_29;
    }
LABEL_37:
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 780LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1204LL);
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v19 + 976);
    *(_DWORD *)(a3 + 288) |= 4u;
    goto LABEL_28;
  }
  v21 = *(_DWORD *)(a2 + 56);
  if ( v21 )
  {
    v22 = *(_DWORD *)(a2 + 48);
    if ( v22 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 48) = v22 - 1;
    }
    *(_DWORD *)(a2 + 56) = v21 - 1;
LABEL_7:
    if ( v3 )
    {
LABEL_8:
      *(_DWORD *)(a3 + 288) |= 1u;
      return 0LL;
    }
LABEL_29:
    v14 = (__int64 *)(a3 + 304);
    if ( (unsigned int)(*(_DWORD *)(a2 + 40) - 4) <= 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 984LL;
      v18 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 992LL);
      if ( *v18 != (__int64 *)v17 )
        __fastfail(3u);
      *v14 = v17;
      v14[1] = (__int64)v18;
      *v18 = v14;
      *(_QWORD *)(v17 + 8) = v14;
    }
    else
    {
      if ( v4 )
      {
        v15 = *(__int64 ***)(a2 + 112);
        v16 = a2 + 104;
        if ( *v15 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v15 = *(__int64 ***)(a2 + 96);
        v16 = a2 + 88;
        if ( *v15 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v14 = v16;
      v14[1] = (__int64)v15;
      *v15 = v14;
      *(_QWORD *)(v16 + 8) = v14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    return 0LL;
  }
LABEL_40:
  v20 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v20);
  return 3221225473LL;
}
