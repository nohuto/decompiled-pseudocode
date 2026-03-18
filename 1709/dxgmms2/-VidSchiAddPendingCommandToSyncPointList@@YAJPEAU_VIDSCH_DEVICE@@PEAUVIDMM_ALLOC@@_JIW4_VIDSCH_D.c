/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0011510
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00111A0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2 @ 0x1C002AF08 (McTemplateK0pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  PVOID v17; // rax
  _QWORD *v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // r8
  unsigned int i; // r14d
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // r9
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r11
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _BYTE *v38; // rax
  _BYTE *v39; // rax
  _BYTE *v40; // [rsp+48h] [rbp-31h]
  _BYTE v41[16]; // [rsp+50h] [rbp-29h] BYREF
  int v42; // [rsp+60h] [rbp-19h]
  PVOID P; // [rsp+68h] [rbp-11h]
  _BYTE v44[16]; // [rsp+70h] [rbp-9h] BYREF
  int v45; // [rsp+80h] [rbp+7h]

  v5 = a4;
  v8 = a1;
  if ( !a4 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v36[7] = a5;
    v36[3] = 281LL;
    v36[4] = 3328LL;
    v36[5] = v8;
    v36[6] = a3;
    WdLogEvent5_WdCriticalError(v36);
    JUMPOUT(0x1C001EA79LL);
  }
  v9 = *(_QWORD **)(a1 + 1232);
  v10 = a1 + 1224;
  if ( v9 != (_QWORD *)(a1 + 1224) && v9[2] == a3 )
    goto LABEL_40;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x68536956u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = PoolWithTag + 9;
    v14 = 0LL;
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 16) = 0;
    PoolWithTag[2] = a3;
    v15 = PoolWithTag + 11;
    v13[1] = v13;
    *v13 = v13;
    v15[1] = v15;
    *v15 = v15;
    v16 = *(_QWORD **)(v10 + 8);
    if ( *v16 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v16;
    *v16 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    if ( (unsigned int)v5 > 2 )
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL % v5;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x10 )
      {
LABEL_53:
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v9, v12);
        return 3221225495LL;
      }
      v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v5, 0x746B5051u);
      v14 = 0LL;
    }
    else
    {
      v17 = v9 + 4;
    }
    v9[3] = v17;
    *((_DWORD *)v9 + 16) = v5;
    if ( v17 )
    {
      memset(v17, 0, 16 * v5);
      v14 = 0LL;
    }
    v18 = (_QWORD *)v9[3];
    if ( v18 )
    {
      v19 = *(_QWORD **)(v8 + 64);
      v20 = v8 + 64;
      for ( i = 0; v19 != (_QWORD *)v20; v19 = (_QWORD *)*v19 )
      {
        v22 = v19 - 3;
        v12 = v19[18];
        if ( v12 > v19[16] )
        {
          v23 = (unsigned int)(v5 - 1);
          if ( i > (unsigned int)v23 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v12, v20);
            v37[3] = 281LL;
            v37[4] = 3328LL;
            v37[5] = v22[21];
            v37[6] = v22[19];
            v37[7] = i;
            WdLogEvent5_WdCriticalError(v37);
            JUMPOUT(0x1C001EB01LL);
          }
          v24 = 2LL * i++;
          v18[v24 + 1] = v12;
          v18[v24] = v22;
        }
      }
      if ( bTracingEnabled )
      {
        v40 = 0LL;
        v25 = 0LL;
        P = 0LL;
        v26 = 0LL;
        v42 = 0;
        v45 = 0;
        if ( (unsigned int)v5 > 2 )
        {
          v12 = 0xFFFFFFFFFFFFFFFFuLL % v5;
          if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
          {
            v27 = 0LL;
            goto LABEL_21;
          }
          v38 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v5, 0x68536956u);
          v25 = P;
          v14 = 0LL;
          v26 = v38;
          v40 = v38;
        }
        else
        {
          v26 = v41;
          v40 = v41;
        }
        v42 = v5;
        if ( v26 )
        {
          memset(v26, 0, 8 * v5);
          v26 = v40;
          v14 = 0LL;
          v25 = P;
        }
        v27 = (__int64)v26;
LABEL_21:
        if ( (unsigned int)v5 > 2 )
        {
          v12 = 0xFFFFFFFFFFFFFFFFuLL % v5;
          if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
          {
LABEL_26:
            if ( v27 && v14 )
            {
              if ( (_DWORD)v5 )
              {
                v28 = (_QWORD *)v14;
                v12 = v27 - v14;
                v29 = v5;
                do
                {
                  v20 = *v18;
                  v30 = *(_QWORD *)(*v18 + 56LL);
                  if ( !v30 || (*(_DWORD *)(v20 + 112) & 0x40) != 0 )
                    v30 = *v18;
                  *(_QWORD *)((char *)v28 + v12) = v30;
                  v31 = v18[1];
                  v18 += 2;
                  *v28++ = v31;
                  --v29;
                }
                while ( v29 );
                v26 = v40;
                v25 = P;
              }
              if ( *(_QWORD *)(v8 + 8) )
                v8 = *(_QWORD *)(v8 + 8);
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                McTemplateK0pxqPR2XR2((_DWORD)v25, v12, v20, v8, v9[2], v5, v27, v14);
                v26 = v40;
                v25 = P;
              }
            }
            if ( v25 != v44 && v25 )
            {
              ExFreePoolWithTag(v25, 0);
              v26 = v40;
            }
            P = 0LL;
            v45 = 0;
            if ( v26 != v41 && v26 )
              ExFreePoolWithTag(v26, 0);
            goto LABEL_40;
          }
          v39 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v5, 0x68536956u);
          v26 = v40;
          v25 = v39;
          P = v39;
        }
        else
        {
          v25 = v44;
          P = v44;
        }
        v45 = v5;
        if ( v25 )
        {
          memset(v25, 0, 8 * v5);
          v26 = v40;
          v25 = P;
        }
        v14 = (__int64)v25;
        goto LABEL_26;
      }
LABEL_40:
      if ( a5 )
      {
        if ( a5 != 3 )
          return 0LL;
        v32 = (_QWORD *)v9[12];
        v33 = (_QWORD *)(a2 + 216);
        v34 = v9 + 11;
        if ( (_QWORD *)*v32 != v34 )
          __fastfail(3u);
      }
      else
      {
        v32 = (_QWORD *)v9[10];
        v33 = (_QWORD *)(a2 + 200);
        v34 = v9 + 9;
        if ( (_QWORD *)*v32 != v34 )
          __fastfail(3u);
      }
      *v33 = v34;
      v33[1] = v32;
      *v32 = v33;
      v34[1] = v33;
      return 0LL;
    }
    goto LABEL_53;
  }
  return 3221225495LL;
}
