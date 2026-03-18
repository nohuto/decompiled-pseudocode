/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0001640
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00012F0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C0001994 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0022AA8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2 @ 0x1C002DF58 (McTemplateK0pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  PVOID v21; // rax
  void *v22; // r12
  _QWORD *v23; // rcx
  unsigned int v24; // r15d
  _QWORD *v25; // r12
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rdx
  unsigned int i; // r15d
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // r11
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // r9
  _QWORD *v39; // rbx
  _QWORD *v40; // r14
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *j; // r8
  unsigned __int64 v45; // r11
  __int64 v46; // rax
  _QWORD *v47; // rax
  PVOID v48; // [rsp+40h] [rbp-88h]
  _QWORD *v49; // [rsp+40h] [rbp-88h]
  PVOID v50; // [rsp+48h] [rbp-80h] BYREF
  char v51; // [rsp+50h] [rbp-78h] BYREF
  int v52; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  char v54; // [rsp+70h] [rbp-58h] BYREF
  int v55; // [rsp+80h] [rbp-48h]

  v7 = a4;
  if ( !a4 && !a5 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v42[7] = a6;
    v42[3] = 281LL;
    v42[4] = 3328LL;
    v42[5] = a1;
    v42[6] = a3;
    WdLogEvent5_WdCriticalError(v42);
    JUMPOUT(0x1C00181BCLL);
  }
  v10 = (_QWORD *)a1[157];
  v11 = a1 + 156;
  if ( v10 != a1 + 156 && v10[2] == a3 )
    goto LABEL_4;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x98uLL, 0x68536956u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 16) = 0;
  PoolWithTag[9] = 0LL;
  *((_DWORD *)PoolWithTag + 28) = 0;
  PoolWithTag[2] = a3;
  v17 = PoolWithTag + 15;
  v17[1] = v17;
  *v17 = v17;
  v10[18] = v10 + 17;
  v10[17] = v10 + 17;
  v18 = (_QWORD *)v11[1];
  if ( (_QWORD *)*v18 != v11 )
    __fastfail(3u);
  *v10 = v11;
  v10[1] = v18;
  *v18 = v10;
  v11[1] = v10;
  if ( (unsigned int)v7 > 2 )
  {
    v16 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x10 )
    {
      v20 = 0LL;
      goto LABEL_16;
    }
    v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v7, 0x746B5051u);
  }
  else
  {
    v19 = v10 + 4;
  }
  v10[3] = v19;
  *((_DWORD *)v10 + 16) = v7;
  v20 = v19;
  if ( v19 && (_DWORD)v7 )
  {
    memset(v19, 0, 16 * v7);
    v20 = (_QWORD *)v10[3];
  }
LABEL_16:
  if ( a5 > 2 )
  {
    v16 = 0xFFFFFFFFFFFFFFFFuLL % a5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x10 )
    {
      v22 = 0LL;
      v48 = 0LL;
      goto LABEL_21;
    }
    v21 = ExAllocatePoolWithTag((POOL_TYPE)512, 16LL * a5, 0x746B5051u);
  }
  else
  {
    v21 = v10 + 10;
  }
  v10[9] = v21;
  *((_DWORD *)v10 + 28) = a5;
  v22 = v21;
  v48 = v21;
  if ( v21 )
  {
    v48 = v21;
    if ( a5 )
    {
      memset(v21, 0, 16LL * a5);
      v22 = (void *)v10[9];
      v48 = v22;
    }
  }
LABEL_21:
  if ( !v20 )
  {
LABEL_73:
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v10, v16);
    return 3221225495LL;
  }
  if ( !v22 )
  {
    ExFreePoolWithTag(v20, 0);
    goto LABEL_73;
  }
  v23 = (_QWORD *)a1[9];
  v24 = 0;
  if ( v23 != a1 + 9 )
  {
    do
    {
      v25 = v23 - 3;
      v26 = v23[19];
      if ( v26 > v23[17] )
      {
        if ( v24 > (int)v7 - 1 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v43[3] = 281LL;
          v43[4] = 3328LL;
          v43[5] = v25[22];
          v43[6] = v25[20];
          v43[7] = v24;
          WdLogEvent5_WdCriticalError(v43);
          JUMPOUT(0x1C0018294LL);
        }
        v27 = 2LL * v24++;
        v20[v27 + 1] = v26;
        v20[v27] = v25;
      }
      v23 = (_QWORD *)*v23;
    }
    while ( v23 != a1 + 9 );
    v22 = v48;
  }
  v28 = (_QWORD *)a1[11];
  for ( i = 0; v28 != a1 + 11; v28 = (_QWORD *)*v28 )
  {
    for ( j = (_QWORD *)v28[6]; j != v28 + 6; j = (_QWORD *)*j )
    {
      v45 = j[6];
      v49 = j - 1;
      if ( v45 > j[5] )
      {
        if ( i > a5 - 1 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v47[3] = 281LL;
          v47[4] = 3328LL;
          v47[5] = v49[7];
          v47[6] = v49[6];
          v47[7] = i;
          WdLogEvent5_WdCriticalError(v47);
          JUMPOUT(0x1C0018323LL);
        }
        v46 = 2LL * i++;
        *((_QWORD *)v22 + v46 + 1) = v45;
        *((_QWORD *)v22 + v46) = j - 1;
      }
    }
  }
  if ( bTracingEnabled )
  {
    v50 = 0LL;
    v52 = 0;
    P = 0LL;
    v55 = 0;
    v30 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&v50, (unsigned int)v7);
    v31 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&P, (unsigned int)v7);
    v34 = v31;
    if ( v30 && v31 )
    {
      if ( (_DWORD)v7 )
      {
        v33 = (_QWORD *)v31;
        v32 = v30 - v31;
        v35 = v7;
        do
        {
          v36 = *(_QWORD *)(*v20 + 56LL);
          if ( !v36 || (*(_DWORD *)(*v20 + 112LL) & 0x40) != 0 )
            v36 = *v20;
          *(_QWORD *)((char *)v33 + v32) = v36;
          v37 = v20[1];
          v20 += 2;
          *v33++ = v37;
          --v35;
        }
        while ( v35 );
      }
      v38 = a1[1];
      if ( !v38 )
        LODWORD(v38) = (_DWORD)a1;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pxqPR2XR2((_DWORD)v33, v32, v34, v38, v10[2], v7, v30, v34);
    }
    if ( P != &v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    if ( v50 != &v51 && v50 )
      ExFreePoolWithTag(v50, 0);
  }
LABEL_4:
  if ( a6 )
  {
    if ( a6 == 3 )
    {
      v12 = (_QWORD *)v10[18];
      v13 = a2 + 27;
      if ( (_QWORD *)*v12 != v10 + 17 )
        __fastfail(3u);
      *v13 = v10 + 17;
      a2[28] = v12;
      *v12 = v13;
      v10[18] = v13;
    }
  }
  else
  {
    v39 = v10 + 15;
    v40 = a2 + 25;
    v41 = (_QWORD *)v39[1];
    if ( (_QWORD *)*v41 != v39 )
      __fastfail(3u);
    *v40 = v39;
    v40[1] = v41;
    *v41 = v40;
    v39[1] = v40;
  }
  return 0LL;
}
