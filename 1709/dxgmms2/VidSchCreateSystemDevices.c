/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C007C648
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B108 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C00106B4 (VidSchiCreateContextInternal.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 *v6; // r15
  __int64 v7; // rcx
  char *ContextInternal; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  char v14; // r14
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+30h] [rbp-10h]

  v1 = (__int64 *)(a1 + 216);
  v33 = 1uLL;
  v5 = VidSchiCreateDeviceInternal(a1, &v33, 0LL, (__int64 *)(a1 + 216));
  if ( v5 < 0
    || (v6 = (__int64 *)(a1 + 232),
        v33 = 0x11uLL,
        v5 = VidSchiCreateDeviceInternal(a1, &v33, 0LL, (__int64 *)(a1 + 232)),
        v5 < 0) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v26 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v26);
  }
  else
  {
    v7 = *v1;
    *((_QWORD *)&v33 + 1) = 0x700000000LL;
    v34 = 0LL;
    *(_QWORD *)&v33 = 268LL;
    HIDWORD(v34) = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 128);
    ContextInternal = VidSchiCreateContextInternal(v7, (int *)&v33, 0LL);
    *(_QWORD *)(a1 + 224) = ContextInternal;
    if ( ContextInternal )
    {
      v11 = 0LL;
      if ( *(_DWORD *)(a1 + 60) )
      {
        while ( 1 )
        {
          *((_QWORD *)&v33 + 1) = 0x700000000LL;
          v34 = 0LL;
          LODWORD(v33) = 20;
          DWORD1(v33) = v11;
          v12 = VidSchiSchedulerNodeToDriverEngine(a1, v11);
          v13 = *v1;
          DWORD2(v33) = v12;
          v14 = v11;
          v15 = VidSchiCreateContextInternal(v13, (int *)&v33, 0LL);
          v17 = *(_QWORD *)(a1 + 8 * v11 + 424);
          *(_QWORD *)(v17 + 32) = v15;
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8 * v11 + 424) + 32LL) )
            break;
          v11 = (unsigned int)(v11 + 1);
          *(_QWORD *)(a1 + 408) |= 1LL << v14;
          if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 60) )
            goto LABEL_7;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
        v27[3] = (unsigned int)v11;
        v28 = *(_QWORD *)(a1 + 16);
        v27[5] = 923LL;
      }
      else
      {
LABEL_7:
        v18 = 0LL;
        if ( !*(_DWORD *)(a1 + 56) )
          return 0LL;
        while ( 1 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2216LL) + 48 * v18;
          v33 = 0x1DuLL;
          v20 = *(unsigned __int16 *)(v19 + 2);
          v34 = 0LL;
          v21 = *(unsigned __int8 *)(v18 + a1 + 64);
          HIDWORD(v33) = 7;
          *(_QWORD *)((char *)&v33 + 4) = (unsigned int)(v21 + v20);
          v22 = *v6;
          DWORD2(v33) = v18;
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v18) = VidSchiCreateContextInternal(v22, (int *)&v33, 0LL);
          v24 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v18);
          if ( !v24 )
            break;
          *(_BYTE *)(v24 + 625) = 1;
          if ( (*(_BYTE *)(v19 + 16) & 0xC) == 0xC )
          {
            v29 = *(_DWORD *)(v19 + 20) + *(unsigned __int8 *)(v18 + a1 + 64);
            v30 = *v6;
            LODWORD(v33) = v33 | 0x200;
            DWORD1(v33) = v29;
            *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v18) = VidSchiCreateContextInternal(v30, (int *)&v33, 0LL);
            v32 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v18);
            if ( !v32 )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v31);
              v27[3] = (unsigned int)v18;
              v28 = *(_QWORD *)(a1 + 16);
              v27[5] = 987LL;
              goto LABEL_19;
            }
            *(_BYTE *)(v32 + 625) = 1;
          }
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 56) )
            return 0LL;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v23);
        v27[3] = (unsigned int)v18;
        v28 = *(_QWORD *)(a1 + 16);
        v27[5] = 967LL;
      }
LABEL_19:
      v27[4] = v28;
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9);
      v27[3] = *(_QWORD *)(a1 + 16);
      v27[4] = 890LL;
    }
    WdLogEvent5_WdAssertion(v27);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
