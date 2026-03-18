/*
 * XREFs of WriteFieldObj @ 0x1C0010070
 * Callers:
 *     <none>
 * Callees:
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C00122D0 (WriteBuffField.c)
 *     ReadSystemMem @ 0x1C0012630 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     PushPreserveWriteObj @ 0x1C005EAC0 (PushPreserveWriteObj.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, size_t a3)
{
  unsigned int FieldUnitRegionObj; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 SystemMem; // rax
  unsigned __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int *v25; // rbx
  __int64 v26; // r9
  unsigned int *v27; // rax
  unsigned int *i; // r8
  __int64 **v29; // r10
  __int64 *v30; // rdx
  __int64 v31; // r10
  unsigned int *v32; // rax
  unsigned int *v33; // r10
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  void *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // ecx
  _QWORD *v45; // r10
  __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // r10
  __int64 v50; // r9
  int v51; // r8d
  int v52; // edx
  __int64 v53; // r9
  int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  int (__fastcall *v57)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v58; // rcx
  __int64 *v59; // rcx
  __int64 **v60; // rax
  int v61; // [rsp+20h] [rbp-58h]
  __int64 v62; // [rsp+30h] [rbp-48h] BYREF
  __int64 v63[8]; // [rsp+38h] [rbp-40h] BYREF
  int v64; // [rsp+90h] [rbp+18h] BYREF

  FieldUnitRegionObj = a3;
  if ( (_DWORD)a3 )
  {
    v6 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
        {
          *(_DWORD *)(a2 + 16) += 3;
          goto LABEL_27;
        }
        v7 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v7 + 2) == 5 )
        {
          v8 = **(_QWORD **)(v7 + 32);
          if ( *(_WORD *)(v8 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   a1,
                                   WriteFieldObj,
                                   **(_QWORD **)(v8 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v8 + 96) + 96LL) + 8LL,
                                   a2 + 96,
                                   4);
        }
LABEL_6:
        ++*(_DWORD *)(a2 + 16);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v9 = *(unsigned int *)(a2 + 56);
          v10 = *(_QWORD *)(a2 + 64);
          v11 = *(_QWORD *)(a2 + 40);
          v64 = 0;
          v62 = 0LL;
          if ( (unsigned int)v9 <= 8 )
          {
            if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
              || (v57 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable
                                                                                                 + 144)) == 0LL
              || v57(0LL, v11, &v62, (unsigned int)v9, &v64) < 0 )
            {
              a3 = v9;
              if ( v9 == 1 )
                v12 = 0LL;
              else
                v12 = v11 % v9;
              if ( v12 )
              {
                memmove(&v62, (const void *)v11, v9);
              }
              else
              {
                switch ( (_DWORD)v9 )
                {
                  case 1:
                    v13 = *(unsigned __int8 *)v11;
                    goto LABEL_14;
                  case 4:
                    v13 = *(unsigned int *)v11;
                    goto LABEL_14;
                  case 2:
                    v13 = *(unsigned __int16 *)v11;
                    goto LABEL_14;
                  case 8:
                    v13 = *(_QWORD *)v11;
LABEL_14:
                    v62 = v13;
                    break;
                  default:
                    v62 = -1LL;
                    break;
                }
              }
            }
            SystemMem = v10 & v62;
            goto LABEL_16;
          }
          SystemMem = -1LL;
        }
LABEL_16:
        v15 = (unsigned __int64 *)(a2 + 88);
        if ( *(_DWORD *)(a2 + 80) )
        {
          *v15 = SystemMem >> *(_DWORD *)(a2 + 72);
          v40 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v40;
          v41 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v41 >= *(_QWORD *)(a2 + 48) )
            SystemMem = 0LL;
          else
            SystemMem = ReadSystemMem(v41, (unsigned int)v40);
        }
        else
        {
          *v15 = 0LL;
        }
        *v15 |= *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        v16 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v16 + 2) == 14 )
        {
          FieldUnitRegionObj = WriteBuffField(a1, *(_QWORD *)(v16 + 32), a2 + 96, *v15);
        }
        else
        {
          v17 = *(__int64 **)(v16 + 32);
          v63[0] = 0LL;
          v18 = *v17;
          if ( *(_WORD *)(*v17 + 66) == 132 )
          {
            v48 = *(_DWORD *)(a2 + 104);
            v49 = *(_QWORD *)(v18 + 96);
            if ( v48 >= 0x40 )
              v50 = 0LL;
            else
              v50 = 1LL << v48;
            v51 = *(_DWORD *)(a2 + 108);
            v52 = v51 & 0xF;
            v53 = ~((v50 - 1) << *(_DWORD *)(a2 + 100));
            v54 = 1;
            if ( (unsigned int)(v52 - 1) <= 3 )
              v54 = 1 << (v52 - 1);
            if ( 8 * v54 >= 64 )
            {
              v56 = 0LL;
            }
            else
            {
              LOBYTE(v55) = 1;
              if ( (unsigned int)(v52 - 1) <= 3 )
                v55 = 1 << (v52 - 1);
              v56 = 1LL << (8 * (unsigned __int8)v55);
            }
            if ( ((v56 - 1) & v53) != 0 && (v51 & 0x60) == 0 )
              FieldUnitRegionObj = PushPreserveWriteObj(a1, *(_QWORD *)(v49 + 8) + 64LL, *v15);
            else
              FieldUnitRegionObj = PushAccFieldObj(
                                     a1,
                                     WriteFieldObj,
                                     *(_QWORD *)(v49 + 8) + 64LL,
                                     *(_QWORD *)(*(_QWORD *)(v49 + 8) + 96LL) + 8LL,
                                     a2 + 88,
                                     4);
          }
          else
          {
            FieldUnitRegionObj = GetFieldUnitRegionObj(v17, v63, a3);
            if ( !FieldUnitRegionObj )
            {
              v19 = v63[0];
              if ( v63[0] )
              {
                LOBYTE(v61) = 0;
                FieldUnitRegionObj = AccessBaseField(a1, v63[0], (int)a2 + 96, (int)a2 + 88, v61);
                if ( (gdwfAMLI & 4) != 0
                  && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 112), 0xFFFFFFFF) == 1 )
                {
                  v58 = v63[0];
                  *(_WORD *)(v63[0] + 64) |= 4u;
                  if ( (*(_WORD *)(v58 + 64) & 0x40) == 0 )
                    FreeNameSpaceObjects(v58);
                }
              }
            }
          }
        }
        if ( FieldUnitRegionObj == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return FieldUnitRegionObj;
LABEL_25:
        v20 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v20;
        v21 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v22 = v21 - 8 * v20;
        v23 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v22;
        if ( v23 >= *(_DWORD *)(a2 + 60) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_27;
        }
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v38 = v6 - 1;
  if ( !v38 )
    goto LABEL_6;
  v39 = v38 - 1;
  if ( !v39 )
    goto LABEL_25;
  if ( v39 == 1 )
  {
LABEL_27:
    v24 = *(_QWORD *)(a1 + 416);
    v25 = (unsigned int *)(v24 - 16);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v24 + 8);
    *(_DWORD *)(v24 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v26 = *((_QWORD *)v25 + 1);
    v27 = *(unsigned int **)(v26 + 40);
    for ( i = (unsigned int *)(v26 + 40); v27 != i; v27 = *(unsigned int **)v27 )
    {
      if ( v25 + 4 < v27 )
        break;
    }
    v29 = (__int64 **)*((_QWORD *)v27 + 1);
    v30 = (__int64 *)(v25 + 4);
    if ( *v29 != (__int64 *)v27 )
      __fastfail(3u);
    *((_QWORD *)v25 + 3) = v29;
    *v30 = (__int64)v27;
    *v29 = v30;
    *((_QWORD *)v27 + 1) = v30;
    v31 = *v30 - 16;
    if ( (unsigned int *)*v30 != i )
    {
      v43 = v25[1];
      if ( (unsigned int *)v31 == (unsigned int *)((char *)v25 + v43) )
      {
        v44 = *(_DWORD *)(v31 + 4) + v43;
        v45 = (_QWORD *)*v30;
        v25[1] = v44;
        v46 = *v45;
        v47 = (_QWORD *)v45[1];
        if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v47 != v45 )
          __fastfail(3u);
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
      }
    }
    v32 = (unsigned int *)*((_QWORD *)v25 + 3);
    v33 = v32 - 4;
    if ( v32 != i )
    {
      v42 = v33[1];
      if ( v25 == (unsigned int *)((char *)v33 + v42) )
      {
        v33[1] = v25[1] + v42;
        v59 = (__int64 *)*v30;
        v60 = (__int64 **)*((_QWORD *)v25 + 3);
        if ( *(__int64 **)(*v30 + 8) != v30 || *v60 != v30 )
          __fastfail(3u);
        *v60 = v59;
        v25 = v33;
        v59[1] = (__int64)v60;
      }
    }
    if ( *(_QWORD *)(v26 + 32) <= (unsigned __int64)v25 + v25[1] )
    {
      *(_QWORD *)(v26 + 32) = v25;
      v34 = v25 + 4;
      v35 = *v34;
      v36 = (_QWORD *)v34[1];
      if ( *(_QWORD **)(*v34 + 8LL) != v34 || (_QWORD *)*v36 != v34 )
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return FieldUnitRegionObj;
}
