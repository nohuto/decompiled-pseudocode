/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x140708870
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(_DWORD *a1, __int64 *a2)
{
  unsigned int v2; // eax
  int inserted; // edi
  bool v6; // cf
  _QWORD *v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // edi
  void *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-49h]
  _QWORD v17[4]; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  __int128 v22; // [rsp+90h] [rbp+27h]
  PVOID Object; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1 - 1;
  Object = 0LL;
  v24 = 0LL;
  if ( v2 > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    v18 = 48;
    v19 = 0LL;
    v6 = KeGetCurrentThread()->PreviousMode != 0;
    v20 = 0LL;
    v22 = 0LL;
    v21 = v6 ? 0 : 0x200;
    inserted = ObCreateObjectEx(
                 0,
                 *(_DWORD **)(PopEtGlobals + 32),
                 (__int64)&v18,
                 KeGetCurrentThread()->PreviousMode,
                 v16,
                 640,
                 0,
                 0,
                 &Object,
                 0LL);
    if ( inserted < 0 )
    {
      v8 = Object;
    }
    else
    {
      v7 = Object;
      memset(Object, 0, 0x280uLL);
      v7[3] = 0LL;
      v7[2] = 0LL;
      v7[8] = 0LL;
      v7[9] = 0LL;
      v7[6] = 0LL;
      v7[7] = 0LL;
      memset(v7 + 10, 0, 0x200uLL);
      v7[12] = PopEtGlobals + 848;
      v7[4] = *(_QWORD *)a1;
      *((_DWORD *)v7 + 10) = a1[2];
      *((_DWORD *)v7 + 159) |= 1u;
      v8 = Object;
      *((_DWORD *)Object + 148) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = PopEtGlobals + 16;
      v8[149] = UnbiasedInterruptTime / 0x2710;
      v8[150] = 1;
      PopAcquireRwLockExclusive(v10);
      v11 = PopEtGlobals;
      v12 = *(_QWORD **)(PopEtGlobals + 8);
      if ( *v12 != PopEtGlobals )
        __fastfail(3u);
      *(_QWORD *)v8 = PopEtGlobals;
      *((_QWORD *)v8 + 1) = v12;
      *v12 = v8;
      *(_QWORD *)(v11 + 8) = v8;
      PopReleaseRwLock(v11 + 16);
      memset(v17, 0, sizeof(v17));
      LODWORD(v17[0]) = 1;
      v17[2] = v8;
      inserted = PsEnumProcesses(
                   (__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback,
                   (__int64)v17);
      if ( inserted >= 0 )
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v7 + 2));
        v13 = v8[153];
        if ( !v13 )
          *((_DWORD *)v7 + 159) &= ~1u;
        PopReleaseRwLock((ULONG_PTR)(v7 + 2));
        if ( v13 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObjectEx(v8, 0LL, 1u, 1, 0, 0LL, (unsigned __int64 *)&v24);
          if ( inserted >= 0 )
          {
            v14 = 0LL;
            *a2 = v24;
            inserted = 0;
          }
          else
          {
            v14 = (void *)v24;
            v8 = 0LL;
          }
          if ( v14 )
            NtClose(v14);
        }
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
