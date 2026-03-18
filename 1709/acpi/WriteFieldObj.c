/*
 * XREFs of WriteFieldObj @ 0x1C00168F0
 * Callers:
 *     <none>
 * Callees:
 *     AccessBaseField @ 0x1C00173C0 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0018688 (WriteBuffField.c)
 *     ReadSystemMem @ 0x1C00189E0 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0018A78 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     PushPreserveWriteObj @ 0x1C005FCA0 (PushPreserveWriteObj.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, size_t a3)
{
  unsigned int FieldUnitRegionObj; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  size_t v10; // rdi
  __int64 v11; // rbp
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
  __int64 *v25; // rbx
  __int64 v26; // r10
  __int64 *v27; // rax
  __int64 *i; // r8
  __int64 **v29; // r9
  __int64 *v30; // rdx
  __int64 *v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  void *v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // r9
  _QWORD *v46; // rcx
  unsigned int v47; // ecx
  __int64 v48; // r10
  __int64 v49; // r9
  int v50; // edx
  int v51; // eax
  __int64 v52; // r9
  char v53; // cl
  int v54; // eax
  __int64 v55; // rax
  int (__fastcall *v56)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v57; // rcx
  __int64 *v58; // rcx
  __int64 **v59; // rax
  int v60; // [rsp+20h] [rbp-58h]
  __int64 v61; // [rsp+30h] [rbp-48h] BYREF
  __int64 v62; // [rsp+38h] [rbp-40h] BYREF
  int v63; // [rsp+90h] [rbp+18h] BYREF

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
        v9 = *(_QWORD *)(a2 + 40);
        if ( v9 >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v10 = *(unsigned int *)(a2 + 56);
          v11 = *(_QWORD *)(a2 + 64);
          v63 = 0;
          v61 = 0LL;
          if ( (unsigned int)v10 <= 8 )
          {
            if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
              || (v56 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(PmHalDispatchTable + 144)) == 0LL
              || v56(0LL, v9, &v61, (unsigned int)v10, &v63) < 0 )
            {
              a3 = v10;
              if ( v10 == 1 )
                v12 = 0LL;
              else
                v12 = v9 % v10;
              if ( v12 )
              {
                memmove(&v61, (const void *)v9, v10);
              }
              else
              {
                switch ( (_DWORD)v10 )
                {
                  case 1:
                    v13 = *(unsigned __int8 *)v9;
                    goto LABEL_14;
                  case 4:
                    v13 = *(unsigned int *)v9;
                    goto LABEL_14;
                  case 2:
                    v13 = *(unsigned __int16 *)v9;
                    goto LABEL_14;
                  case 8:
                    v13 = *(_QWORD *)v9;
LABEL_14:
                    v61 = v13;
                    break;
                  default:
                    v61 = -1LL;
                    break;
                }
              }
            }
            SystemMem = v11 & v61;
            goto LABEL_16;
          }
          SystemMem = -1LL;
        }
LABEL_16:
        v15 = (unsigned __int64 *)(a2 + 88);
        if ( *(_DWORD *)(a2 + 80) )
        {
          *v15 = SystemMem >> *(_DWORD *)(a2 + 72);
          v38 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v38;
          v39 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v39 >= *(_QWORD *)(a2 + 48) )
            SystemMem = 0LL;
          else
            SystemMem = ReadSystemMem(v39, (unsigned int)v38);
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
          v62 = 0LL;
          v18 = *v17;
          if ( *(_WORD *)(*v17 + 66) == 132 )
          {
            v47 = *(_DWORD *)(a2 + 104);
            v48 = *(_QWORD *)(v18 + 96);
            if ( v47 >= 0x40 )
              v49 = 0LL;
            else
              v49 = 1LL << v47;
            v50 = *(_DWORD *)(a2 + 108);
            v51 = 1;
            v52 = ~((v49 - 1) << *(_DWORD *)(a2 + 100));
            v53 = (v50 & 0xF) - 1;
            if ( (v50 & 0xFu) - 1 <= 3 )
              v51 = 1 << v53;
            if ( 8 * v51 >= 64 )
            {
              v55 = 0LL;
            }
            else
            {
              LOBYTE(v54) = 1;
              if ( (v50 & 0xFu) - 1 <= 3 )
                v54 = 1 << v53;
              v55 = 1LL << (8 * (unsigned __int8)v54);
            }
            if ( ((v55 - 1) & v52) != 0 && (v50 & 0x60) == 0 )
              FieldUnitRegionObj = PushPreserveWriteObj(a1, *(_QWORD *)(v48 + 8) + 64LL, *v15);
            else
              FieldUnitRegionObj = PushAccFieldObj(
                                     a1,
                                     WriteFieldObj,
                                     *(_QWORD *)(v48 + 8) + 64LL,
                                     *(_QWORD *)(*(_QWORD *)(v48 + 8) + 96LL) + 8LL,
                                     a2 + 88,
                                     4);
          }
          else
          {
            FieldUnitRegionObj = GetFieldUnitRegionObj(v17, &v62, a3);
            if ( !FieldUnitRegionObj )
            {
              v19 = v62;
              if ( v62 )
              {
                LOBYTE(v60) = 0;
                FieldUnitRegionObj = AccessBaseField(a1, v62, (int)a2 + 96, (int)a2 + 88, v60);
                if ( (gdwfAMLI & 4) != 0
                  && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 112), 0xFFFFFFFF) == 1 )
                {
                  v57 = v62;
                  *(_WORD *)(v62 + 64) |= 4u;
                  if ( (*(_WORD *)(v57 + 64) & 0x40) == 0 )
                    FreeNameSpaceObjects(v57);
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
  v36 = v6 - 1;
  if ( !v36 )
    goto LABEL_6;
  v37 = v36 - 1;
  if ( !v37 )
    goto LABEL_25;
  if ( v37 == 1 )
  {
LABEL_27:
    v24 = *(_QWORD *)(a1 + 416);
    v25 = (_QWORD *)(v24 - 16);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v24 + 8);
    *(_DWORD *)(v24 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v26 = v25[1];
    v27 = *(__int64 **)(v26 + 40);
    for ( i = (__int64 *)(v26 + 40); v27 != i; v27 = (__int64 *)*v27 )
    {
      if ( v25 + 2 < v27 )
        break;
    }
    v29 = (__int64 **)v27[1];
    v30 = v25 + 2;
    if ( *v29 != v27 )
      __fastfail(3u);
    *v30 = (__int64)v27;
    v25[3] = v29;
    *v29 = v30;
    v27[1] = (__int64)v30;
    if ( (__int64 *)*v30 != i )
    {
      v42 = *((unsigned int *)v25 + 1);
      v43 = *v30 - 16;
      if ( (_QWORD *)v43 == (_QWORD *)((char *)v25 + v42) )
      {
        v44 = (_QWORD *)*v30;
        *((_DWORD *)v25 + 1) = *(_DWORD *)(v43 + 4) + v42;
        v45 = *(_QWORD *)(v43 + 16);
        if ( *(_QWORD **)(v45 + 8) != v44 || (v46 = (_QWORD *)v44[1], (_QWORD *)*v46 != v44) )
          __fastfail(3u);
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
      }
    }
    v31 = (__int64 *)v25[3];
    if ( v31 != i )
    {
      v40 = *((unsigned int *)v31 - 3);
      v41 = v31 - 2;
      if ( v25 == (__int64 *)((char *)v31 + v40 - 16) )
      {
        *((_DWORD *)v41 + 1) = *((_DWORD *)v25 + 1) + v40;
        v58 = (__int64 *)*v30;
        if ( *(__int64 **)(*v30 + 8) != v30 || (v59 = (__int64 **)v25[3], *v59 != v30) )
          __fastfail(3u);
        *v59 = v58;
        v25 = v41;
        v58[1] = (__int64)v59;
      }
    }
    if ( *(_QWORD *)(v26 + 32) <= (unsigned __int64)v25 + *((unsigned int *)v25 + 1) )
    {
      *(_QWORD *)(v26 + 32) = v25;
      v32 = v25 + 2;
      v33 = *v32;
      if ( *(_QWORD **)(*v32 + 8LL) != v32 || (v34 = (_QWORD *)v32[1], (_QWORD *)*v34 != v32) )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return FieldUnitRegionObj;
}
