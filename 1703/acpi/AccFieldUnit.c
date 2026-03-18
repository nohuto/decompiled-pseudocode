/*
 * XREFs of AccFieldUnit @ 0x1C0017A60
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     AcquireGL @ 0x1C0017420 (AcquireGL.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // edx
  _DWORD *v7; // rdi
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  unsigned int *v11; // rbx
  __int64 v12; // r9
  unsigned int *v13; // rax
  unsigned int *i; // r8
  __int64 **v15; // r10
  __int64 *v16; // rdx
  __int64 v17; // r10
  unsigned int *v18; // rax
  unsigned int *v19; // r10
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v24; // edx
  __int64 v25; // rax
  __int16 v26; // cx
  __int64 v27; // rsi
  unsigned __int8 v28; // al
  __int64 v29; // r14
  unsigned int v30; // r15d
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ecx
  _QWORD *v47; // r10
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // r8
  int ObjectTypeName; // edx
  int v53; // ecx
  unsigned int v54; // r8d
  void *v55; // rax
  __int64 *v56; // rcx
  __int64 **v57; // rax
  __int64 v58; // [rsp+78h] [rbp+10h]
  unsigned int v59; // [rsp+80h] [rbp+18h] BYREF
  __int64 v60; // [rsp+88h] [rbp+20h]

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             (__int64)WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 64LL,
                             (_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 96LL) + 8LL),
                             *(_QWORD *)(*(_QWORD *)v7 + 96LL) + 16LL,
                             8u);
LABEL_21:
    ++*(_DWORD *)(a2 + 16);
    v24 = v7[5];
    if ( (v24 & 0x80000010) == 0 )
    {
      v25 = *(_QWORD *)v7;
      v26 = *(_WORD *)(*(_QWORD *)v7 + 66LL);
      if ( v26 == 130 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
          goto LABEL_24;
      }
      else
      {
        if ( v26 != 132 )
          goto LABEL_24;
        v51 = *(_QWORD **)(v25 + 96);
        if ( (*(_DWORD *)(*(_QWORD *)(*v51 + 96LL) + 20LL) & 0x10) == 0
          && (*(_DWORD *)(*(_QWORD *)(v51[1] + 96LL) + 20LL) & 0x10) == 0 )
        {
          goto LABEL_24;
        }
      }
    }
    v7[5] = v24 | 0x80000000;
    v3 = AcquireGL(a1);
    if ( v3 )
      return v3;
LABEL_24:
    ++*(_DWORD *)(a2 + 16);
    if ( (int)v7[5] < 0 )
      *(_DWORD *)(a2 + 16) |= 0x20000u;
    if ( (*(_DWORD *)(a2 + 16) & 0x10000) == 0 )
    {
      v3 = WriteField(a1, *(_QWORD *)(a2 + 32), (__int64)(v7 + 2), *(_QWORD *)(a2 + 40));
      goto LABEL_53;
    }
    v27 = *(_QWORD *)(a2 + 32);
    v28 = v7[5] & 0xF;
    v29 = *(_QWORD *)(a2 + 40);
    v60 = v27;
    if ( v28 > 4u )
    {
      if ( *(_WORD *)(v27 + 2) == 5 )
      {
LABEL_95:
        v3 = RawFieldAccess(a1, 0LL, v27, v29);
        goto LABEL_53;
      }
      v3 = -1072431087;
      LogError(3222536209LL);
      AcpiDiagTraceAmlError(a1, 3222536209LL);
      ObjectTypeName = v7[5];
      v53 = 162;
      goto LABEL_86;
    }
    v30 = 8;
    v59 = 0;
    if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v59), v59 >= 2) )
      v31 = 8;
    else
      v31 = 4;
    if ( *(_WORD *)(v29 + 2) )
    {
      if ( *(_WORD *)(v29 + 2) == 1 )
      {
        v32 = v29 + 16;
        goto LABEL_35;
      }
      if ( *(_WORD *)(v29 + 2) == 2 )
      {
        v30 = *(_DWORD *)(v29 + 24) - 1;
LABEL_93:
        v32 = *(_QWORD *)(v29 + 32);
        goto LABEL_35;
      }
      if ( *(_WORD *)(v29 + 2) != 3 )
      {
        v3 = -1072431095;
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v29 + 2));
        v53 = 163;
        goto LABEL_86;
      }
    }
    else
    {
      if ( (v7[5] & 0x10000) == 0 && v7[4] <= (unsigned int)(8 * v31) )
      {
        *(_WORD *)(v29 + 2) = 1;
        v32 = v29 + 16;
        v30 = v31;
LABEL_35:
        v58 = v32;
        if ( *(_WORD *)(v27 + 2) == 5 )
        {
          v33 = **(_QWORD **)(v27 + 32);
          if ( *(_WORD *)(v33 + 66) == 131 )
          {
            v34 = gpRSAccessHead;
            if ( gpRSAccessHead )
            {
              while ( *(_DWORD *)(v34 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v33 + 96) + 96LL) + 12LL) )
              {
                v34 = *(_QWORD *)v34;
                if ( !v34 )
                  goto LABEL_43;
              }
              if ( v34 && *(_QWORD *)(v34 + 32) && !*(_QWORD *)(v34 + 16) )
                goto LABEL_95;
            }
          }
        }
LABEL_43:
        v35 = 128;
        if ( v7[7] )
          v35 = v7[9] + 128;
        v3 = 0;
        v36 = HeapAlloc(a1 + 440, 1297237576, v35);
        v37 = v36;
        if ( v36 )
        {
          *(_QWORD *)(v36 + 8) = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v36;
          *(_DWORD *)v36 = 1330004801;
          *(_QWORD *)(v36 + 24) = ReadFieldObj;
          *(_QWORD *)(v36 + 32) = v60;
          *(_QWORD *)(v36 + 40) = v58;
          *(_QWORD *)(v36 + 48) = v58 + v30;
          v38 = v7[5] & 0xF;
          v39 = 1;
          if ( (unsigned int)(v38 - 1) <= 3 )
            v39 = 1 << (v38 - 1);
          v40 = 8 * v39;
          *(_DWORD *)(v37 + 56) = v39;
          v41 = 8 * v39 + v7[4] + v7[3] - 1;
          if ( v40 == 8 )
            v42 = v41 >> 3;
          else
            v42 = v41 / v40;
          *(_DWORD *)(v37 + 60) = v42;
          v43 = 8 * *(_DWORD *)(v37 + 56);
          if ( v43 >= 0x40 )
            v44 = 0LL;
          else
            v44 = 1LL << v43;
          *(_QWORD *)(v37 + 64) = v44 - 1;
          *(_DWORD *)(v37 + 72) = 8 * *(_DWORD *)(v37 + 56) - v7[3];
          *(_DWORD *)(v37 + 76) = v7[3];
          memmove((void *)(v37 + 96), v7 + 2, (unsigned int)(v7[9] + 32));
LABEL_53:
          if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
          goto LABEL_7;
        }
        v3 = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        ObjectTypeName = 0;
        v53 = 153;
LABEL_86:
        PrintDebugMessage(v53, ObjectTypeName, 0, 0, 0LL);
        goto LABEL_53;
      }
      *(_WORD *)(v29 + 2) = 3;
      v54 = (unsigned int)(v7[4] + 7) >> 3;
      *(_DWORD *)(v29 + 24) = v54;
      v55 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v54);
      *(_QWORD *)(v29 + 32) = v55;
      if ( !v55 )
      {
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        ObjectTypeName = *(_DWORD *)(v29 + 24);
        v53 = 161;
        goto LABEL_86;
      }
      memset(v55, 0, *(unsigned int *)(v29 + 24));
    }
    v30 = *(_DWORD *)(v29 + 24);
    goto LABEL_93;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_21;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_24;
  if ( v9 != 1 )
    return v3;
LABEL_7:
  if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
    ghGlobalLock(5LL, 1LL, qword_1C0077F68);
  if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
  {
    ConPrintf("=");
    PrintObject(*(_QWORD *)(a2 + 40));
  }
  v10 = *(_QWORD *)(a1 + 416);
  v11 = (unsigned int *)(v10 - 16);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
  *(_DWORD *)(v10 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v12 = *((_QWORD *)v11 + 1);
  v13 = *(unsigned int **)(v12 + 40);
  for ( i = (unsigned int *)(v12 + 40); v13 != i; v13 = *(unsigned int **)v13 )
  {
    if ( v11 + 4 < v13 )
      break;
  }
  v15 = (__int64 **)*((_QWORD *)v13 + 1);
  v16 = (__int64 *)(v11 + 4);
  if ( *v15 != (__int64 *)v13 )
    __fastfail(3u);
  *((_QWORD *)v11 + 3) = v15;
  *v16 = (__int64)v13;
  *v15 = v16;
  *((_QWORD *)v13 + 1) = v16;
  v17 = *v16 - 16;
  if ( (unsigned int *)*v16 != i )
  {
    v45 = v11[1];
    if ( (unsigned int *)v17 == (unsigned int *)((char *)v11 + v45) )
    {
      v46 = *(_DWORD *)(v17 + 4) + v45;
      v47 = (_QWORD *)*v16;
      v11[1] = v46;
      v48 = *v47;
      v49 = (_QWORD *)v47[1];
      if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v49 != v47 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
    }
  }
  v18 = (unsigned int *)*((_QWORD *)v11 + 3);
  v19 = v18 - 4;
  if ( v18 != i )
  {
    v50 = v19[1];
    if ( v11 == (unsigned int *)((char *)v19 + v50) )
    {
      v19[1] = v11[1] + v50;
      v56 = (__int64 *)*v16;
      v57 = (__int64 **)*((_QWORD *)v11 + 3);
      if ( *(__int64 **)(*v16 + 8) != v16 || *v57 != v16 )
        __fastfail(3u);
      *v57 = v56;
      v11 = v19;
      v56[1] = (__int64)v57;
    }
  }
  if ( *(_QWORD *)(v12 + 32) <= (unsigned __int64)v11 + v11[1] )
  {
    *(_QWORD *)(v12 + 32) = v11;
    v20 = v11 + 4;
    v21 = *v20;
    v22 = (_QWORD *)v20[1];
    if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v3;
}
