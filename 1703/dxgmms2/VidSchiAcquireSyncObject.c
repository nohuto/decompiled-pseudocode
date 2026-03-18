/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C0005910
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v6; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 **v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_38;
  v6 = *(_DWORD *)(a2 + 40);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      if ( !*(_QWORD *)(a2 + 48) )
      {
        *(_QWORD *)(a2 + 48) = a1;
        v3 = 1;
      }
      *(_QWORD *)(a2 + 56) = a1;
      goto LABEL_7;
    }
    goto LABEL_38;
  }
  if ( v6 == 2 )
  {
    if ( *(_BYTE *)(a2 + 27) )
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 40LL);
    else
      v8 = *(_QWORD *)(a2 + 56);
    if ( v8 >= *(_QWORD *)(a3 + 296) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
      else
        v9 = *(_QWORD *)(a2 + 64);
      if ( v9 >= *(_QWORD *)(a3 + 296) )
        goto LABEL_8;
      goto LABEL_20;
    }
    if ( !*(_BYTE *)(a2 + 25) )
      goto LABEL_38;
    goto LABEL_19;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 3 )
      goto LABEL_38;
    if ( (unsigned int)(v6 - 4) > 1 )
      goto LABEL_21;
    v14 = *(_QWORD *)(a3 + 296);
    if ( *(_BYTE *)(a2 + 28) )
      goto LABEL_8;
    v15 = *(unsigned __int64 **)(a2 + 56);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v15 >= v14 )
        goto LABEL_8;
    }
    else if ( *(_DWORD *)v15 - (int)v14 >= 0 )
    {
      goto LABEL_8;
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v16 + 984);
      *(_DWORD *)(a3 + 264) |= 8u;
      goto LABEL_20;
    }
LABEL_19:
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 804LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1204LL);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v10 + 980);
    *(_DWORD *)(a3 + 264) |= 4u;
LABEL_20:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
    goto LABEL_21;
  }
  v20 = *(_DWORD *)(a2 + 56);
  if ( v20 )
  {
    v21 = *(_DWORD *)(a2 + 48);
    if ( v21 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 48) = v21 - 1;
    }
    *(_DWORD *)(a2 + 56) = v20 - 1;
LABEL_7:
    if ( v3 )
    {
LABEL_8:
      *(_DWORD *)(a3 + 264) |= 1u;
      return 0LL;
    }
LABEL_21:
    v11 = (__int64 *)(a3 + 280);
    if ( (unsigned int)(*(_DWORD *)(a2 + 40) - 4) <= 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 992LL;
      v18 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1000LL);
      if ( *v18 != (__int64 *)v17 )
        __fastfail(3u);
      *v11 = v17;
      v11[1] = (__int64)v18;
      *v18 = v11;
      *(_QWORD *)(v17 + 8) = v11;
    }
    else
    {
      if ( v4 )
      {
        v12 = *(__int64 ***)(a2 + 112);
        v13 = a2 + 104;
        if ( *v12 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v12 = *(__int64 ***)(a2 + 96);
        v13 = a2 + 88;
        if ( *v12 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v11 = v13;
      v11[1] = (__int64)v12;
      *v12 = v11;
      *(_QWORD *)(v13 + 8) = v11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    return 0LL;
  }
LABEL_38:
  v19 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v19);
  return 3221225473LL;
}
