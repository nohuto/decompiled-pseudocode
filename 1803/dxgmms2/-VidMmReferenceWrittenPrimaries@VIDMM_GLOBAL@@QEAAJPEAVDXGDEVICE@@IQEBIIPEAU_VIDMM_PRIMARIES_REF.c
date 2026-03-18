/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1C0068FA0
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0002B20 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *const a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6)
{
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct DXGPROCESS *v13; // r15
  unsigned int v14; // r14d
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // r8
  int v28; // eax
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // [rsp+20h] [rbp-38h]
  struct _VIDMM_PRIMARIES_REFERENCES *v36; // [rsp+88h] [rbp+30h]

  Current = DXGPROCESS::GetCurrent();
  v12 = 0LL;
  v13 = Current;
  v14 = 0;
  v15 = (char *)Current + 208;
  v34 = (char *)Current + 208;
  if ( Current != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)Current + 27) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v30 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *((_DWORD *)v15 + 4);
      if ( v29 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, (__int64)&EventBlockThread, v17, v29);
    }
    ExAcquirePushLockSharedEx(v15, 0LL);
  }
  v20 = 0LL;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_6;
  while ( 1 )
  {
    v22 = *a4;
    v23 = (*a4 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 >= *((_DWORD *)v13 + 62) )
      break;
    v24 = *((_QWORD *)v13 + 29);
    v18 = (unsigned int)v23;
    v22 = ((unsigned int)v22 >> 25) & 0x60;
    v16 = *(unsigned int *)(v24 + 16 * v23 + 8);
    if ( (_BYTE)v22 != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60) )
      break;
    if ( (v16 & 0x2000) != 0 )
      break;
    if ( (v16 & 0x1F) == 0 )
      break;
    v18 = 2LL * (unsigned int)v23;
    v16 &= 0x1Fu;
    if ( (_BYTE)v16 != 5 )
      break;
    v25 = *(_QWORD *)(v24 + 16LL * (unsigned int)v23);
    v36 = (struct _VIDMM_PRIMARIES_REFERENCES *)v25;
    if ( !v25 )
      break;
    if ( *(struct DXGDEVICE **)(v25 + 8) != a2 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v16, v20);
      *(_QWORD *)(v33 + 24) = *((_QWORD *)v36 + 1);
      *(_QWORD *)(v33 + 32) = a2;
      WdLogEvent5_WdAssertion(v33);
      goto LABEL_36;
    }
    v18 = *(_QWORD *)(v25 + 24);
    v26 = **(_QWORD **)v18;
    v16 = **(unsigned int **)(v26 + 504);
    v27 = ((unsigned int)v16 >> 12) | ((unsigned int)v16 | (((unsigned int)v16 | (**(_DWORD **)(v26 + 504) >> 5)) >> 6)) & 0x80000;
    LOBYTE(v16) = (v16 & 0x100000) != 0;
    if ( (**(_DWORD **)(v26 + 504) & 0x200000) != 0 )
    {
      *((_DWORD *)a6 + 34) |= 1u;
      goto LABEL_23;
    }
    if ( (unsigned int)v27 < 0x80000 )
    {
      if ( !(_BYTE)v16 )
      {
        v31 = WdLogNewEntry5_WdError(v16, v20, v27, v18);
        *(_QWORD *)(v31 + 24) = 21100LL;
        goto LABEL_35;
      }
LABEL_23:
      if ( (unsigned int)v27 < 0x80000 )
        goto LABEL_20;
    }
    if ( *(_BYTE *)(v26 + 96) )
    {
      v32 = WdLogNewEntry5_WdWarning(v16, v20);
      WdLogEvent5_WdWarning(v32);
      v14 = -1071775482;
      goto LABEL_37;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 104), a5);
    v16 = *(unsigned int *)a6;
    *((_QWORD *)a6 + v16 + 1) = v18;
    v28 = *(_DWORD *)a6;
    if ( *(_DWORD *)a6 >= 0x10u )
    {
      ++*((_DWORD *)this + 1938);
      v28 = *(_DWORD *)a6;
    }
    *(_DWORD *)a6 = v28 + 1;
LABEL_20:
    v20 = (unsigned int)(v20 + 1);
    ++a4;
    if ( (unsigned int)v20 >= a3 )
      goto LABEL_6;
  }
  v31 = WdLogNewEntry5_WdError(v16, v20, v22, v18);
  *(_QWORD *)(v31 + 24) = 21068LL;
LABEL_35:
  WdLogEvent5_WdError(v31);
LABEL_36:
  v14 = -1073741811;
LABEL_37:
  if ( *(_DWORD *)a6 )
  {
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a6 + v12 + 1) + 104LL), -a5);
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)a6 );
    v15 = v34;
  }
LABEL_6:
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  return v14;
}
