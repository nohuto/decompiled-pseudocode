/*
 * XREFs of ReadFieldObj @ 0x1C0010900
 * Callers:
 *     <none>
 * Callees:
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0012594 (ReadBuffField.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int BuffField; // esi
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rdi
  int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // r14
  char v19; // cl
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int *v30; // rbx
  __int64 v31; // r9
  unsigned int *v32; // rax
  unsigned int *i; // r8
  __int64 **v34; // r10
  __int64 *v35; // rdx
  __int64 v36; // r10
  unsigned int *v37; // rax
  unsigned int *v38; // r10
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r12
  unsigned __int64 v49; // r13
  char v50; // al
  __int64 v51; // rdi
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ecx
  _QWORD *v59; // r10
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  int v63; // edx
  unsigned int FieldUnitRegionObj; // eax
  __int64 ObjectPath; // rax
  int v66; // r8d
  void *v67; // rdx
  void *v68; // r12
  __int64 v69; // rcx
  __int64 v70; // rdx
  int (__fastcall *v71)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // r10
  __int64 v72; // rax
  _BYTE *v73; // rcx
  __int64 v74; // rdx
  int (__fastcall *v75)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v76; // rax
  _BYTE *v77; // rcx
  __int64 *v78; // rcx
  __int64 **v79; // rax
  signed __int32 v80[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v81; // [rsp+20h] [rbp-E0h]
  char v82; // [rsp+30h] [rbp-D0h]
  __int64 v83; // [rsp+38h] [rbp-C8h]
  __int64 Src; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+58h] [rbp-A8h]
  _BYTE v88[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v89[12]; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v90[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v91[10]; // [rsp+C0h] [rbp-40h] BYREF

  v83 = a1;
  BuffField = a3;
  v5 = a1;
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
          goto LABEL_38;
        }
        v7 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v7 + 2) == 5 )
        {
          v8 = **(_QWORD **)(v7 + 32);
          if ( *(_WORD *)(v8 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   v5,
                                   WriteFieldObj,
                                   **(_QWORD **)(v8 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v8 + 96) + 96LL) + 8LL,
                                   a2 + 96,
                                   4);
        }
LABEL_6:
        v9 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v9 + 2) == 14 )
        {
          BuffField = ReadBuffField(v5, *(_QWORD *)(v9 + 32), a2 + 96, a2 + 88);
LABEL_19:
          v5 = v83;
          goto LABEL_20;
        }
        v10 = *(__int64 **)(v9 + 32);
        v86 = 0LL;
        v11 = *v10;
        if ( *(_WORD *)(*v10 + 66) == 132 )
        {
          BuffField = PushAccFieldObj(
                        v5,
                        ReadFieldObj,
                        *(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 64LL,
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL) + 8LL,
                        a2 + 88,
                        4);
          goto LABEL_19;
        }
        v12 = *(unsigned __int16 *)(v11 + 66);
        BuffField = 0;
        if ( v12 == 131 || (v63 = v12 - 130) == 0 )
        {
          v13 = **(_QWORD **)(v11 + 96);
          v86 = v13;
        }
        else
        {
          if ( v63 != 2 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(0LL, 3222536195LL);
            PrintDebugMessage(56, MEMORY[0x42], 0, 0, 0LL);
            BuffField = -1072431101;
            goto LABEL_101;
          }
          FieldUnitRegionObj = GetFieldUnitRegionObj(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL),
                                 &v86,
                                 a3);
          v5 = v83;
          BuffField = FieldUnitRegionObj;
          v13 = v86;
        }
        if ( v13 && *(_WORD *)(v13 + 66) != 10 )
        {
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(0LL, 3222536195LL);
          ObjectPath = GetObjectPath(v13);
          v66 = *(unsigned __int16 *)(v13 + 66);
          v67 = &unk_1C0066CD0;
          v81 = 0LL;
          v68 = (void *)ObjectPath;
          if ( ObjectPath )
            LODWORD(v67) = ObjectPath;
          PrintDebugMessage(55, (_DWORD)v67, v66, 0, v81);
          BuffField = -1072431101;
          if ( v68 )
          {
            ExFreePoolWithTag(v68, 0);
            v5 = v83;
            goto LABEL_102;
          }
LABEL_101:
          v5 = v83;
LABEL_102:
          v86 = 0LL;
          v13 = 0LL;
          goto LABEL_16;
        }
        if ( (BuffField & 0x80000000) != 0 || !v13 )
          goto LABEL_102;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 112));
          v13 = v86;
        }
LABEL_16:
        if ( BuffField )
          return BuffField;
        if ( v13 )
        {
          LOBYTE(v81) = 1;
          BuffField = AccessBaseField(v5, v13, (int)a2 + 96, (int)a2 + 88, v81);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 112), 0xFFFFFFFF) == 1 )
          {
            v69 = v86;
            *(_WORD *)(v86 + 64) |= 4u;
            if ( (*(_WORD *)(v69 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v69);
          }
          goto LABEL_19;
        }
LABEL_20:
        if ( BuffField || a2 != *(_QWORD *)(v5 + 416) )
          return BuffField;
LABEL_22:
        if ( !*(_DWORD *)(a2 + 80) )
          goto LABEL_23;
        v43 = *(_DWORD *)(a2 + 76);
        if ( v43 >= 0x40 )
          v44 = 0LL;
        else
          v44 = 1LL << v43;
        v45 = *(_DWORD *)(a2 + 72);
        if ( v45 >= 0x40 )
          v46 = 0LL;
        else
          v46 = *(_QWORD *)(a2 + 88) << v45;
        v47 = *(unsigned int *)(a2 + 56);
        v48 = v46 & *(_QWORD *)(a2 + 64);
        v49 = *(_QWORD *)(a2 + 40);
        v50 = 0;
        v51 = (v44 - 1) << v45;
        v52 = 0LL;
        Src = 0LL;
        v90[0] = 0LL;
        v90[1] = 255LL;
        v90[2] = 0xFFFFLL;
        v90[3] = 0LL;
        v90[4] = 0xFFFFFFFFLL;
        memset(&v90[5], 0, 24);
        v90[8] = -1LL;
        v82 = 0;
        if ( (unsigned int)v47 > 8 )
          goto LABEL_64;
        if ( v51 == v90[v47] )
        {
          v50 = 1;
          v82 = 1;
        }
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        {
          v70 = PmHalDispatchTable;
          v71 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
          if ( v71 )
          {
            if ( v50 )
            {
LABEL_117:
              v72 = v52 & ~v51;
              v73 = v88;
              Src = v48 | v72;
              LOBYTE(v73) = 1;
              if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(v70 + 144))(
                     v73,
                     v49,
                     &Src,
                     (unsigned int)v47,
                     v88) >= 0 )
                goto LABEL_123;
            }
            else if ( v71(0LL, v49, &Src, (unsigned int)v47, v88) >= 0 )
            {
              v52 = Src;
              v70 = PmHalDispatchTable;
              goto LABEL_117;
            }
            v52 = Src;
            v50 = v82;
          }
          v5 = v83;
        }
        if ( (unsigned int)v47 == 1LL )
        {
          v53 = 0LL;
        }
        else
        {
          v53 = v49 % (unsigned int)v47;
          v50 = v82;
        }
        if ( v53 )
        {
          if ( !v50 )
          {
            memmove(&Src, (const void *)v49, (unsigned int)v47);
            v52 = Src;
          }
          Src = v48 | v52 & ~v51;
          memmove((void *)v49, &Src, (unsigned int)v47);
LABEL_123:
          v5 = v83;
          goto LABEL_64;
        }
        switch ( (_DWORD)v47 )
        {
          case 1:
            if ( !v50 )
              v52 = *(unsigned __int8 *)v49;
            Src = v48 | v52 & ~v51;
            *(_BYTE *)v49 = Src;
LABEL_63:
            _InterlockedOr(v80, 0);
            break;
          case 2:
            if ( !v50 )
              v52 = *(unsigned __int16 *)v49;
            Src = v48 | v52 & ~v51;
            *(_WORD *)v49 = Src;
            goto LABEL_63;
          case 4:
            if ( !v50 )
              v52 = *(unsigned int *)v49;
            Src = v48 | v52 & ~v51;
            *(_DWORD *)v49 = Src;
            goto LABEL_63;
          case 8:
            if ( !v50 )
              v52 = *(_QWORD *)v49;
            Src = v48 | v52 & ~v51;
            *(_QWORD *)v49 = Src;
            KeFlushWriteBuffer();
            v5 = v83;
            break;
        }
LABEL_64:
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
LABEL_37:
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_38;
        }
LABEL_23:
        v14 = *(_DWORD *)(a2 + 76);
        *(_QWORD *)(a2 + 88) >>= v14;
        v15 = *(_DWORD *)(a2 + 104);
        v16 = *(_DWORD *)(a2 + 72);
        if ( v15 < v16 )
        {
          if ( v15 >= 0x40 )
            v56 = 0LL;
          else
            v56 = 1LL << v15;
          *(_QWORD *)(a2 + 88) &= v56 - 1;
        }
        if ( v16 >= 0x40 )
          v17 = 0LL;
        else
          v17 = 1LL << v16;
        v18 = *(unsigned int *)(a2 + 56);
        v19 = v14;
        a3 = *(_QWORD *)(a2 + 88);
        v20 = *(_QWORD *)(a2 + 40);
        v21 = (v17 - 1) >> v19;
        v22 = 0LL;
        v85 = 0LL;
        v87 = a3;
        v91[0] = 0LL;
        v91[1] = 255LL;
        v91[2] = 0xFFFFLL;
        v91[3] = 0LL;
        v91[4] = 0xFFFFFFFFLL;
        memset(&v91[5], 0, 24);
        v91[8] = -1LL;
        if ( (unsigned int)v18 > 8 )
          goto LABEL_36;
        v23 = v91[v18];
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        {
          v74 = PmHalDispatchTable;
          v75 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
          if ( v75 )
          {
            if ( v21 == v23 )
            {
LABEL_142:
              v76 = v22 & ~v21;
              v77 = v89;
              v85 = a3 | v76;
              LOBYTE(v77) = 1;
              if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(v74 + 144))(
                     v77,
                     v20,
                     &v85,
                     (unsigned int)v18,
                     v89) >= 0 )
                goto LABEL_151;
            }
            else if ( v75(0LL, v20, &v85, (unsigned int)v18, v89) >= 0 )
            {
              v74 = PmHalDispatchTable;
              v22 = v85;
              a3 = v87;
              goto LABEL_142;
            }
            v22 = v85;
            a3 = v87;
            v5 = v83;
          }
        }
        if ( (unsigned int)v18 == 1LL )
          v24 = 0LL;
        else
          v24 = v20 % (unsigned int)v18;
        if ( v24 )
        {
          if ( v21 != v23 )
          {
            memmove(&v85, (const void *)v20, (unsigned int)v18);
            v22 = v85;
            a3 = v87;
          }
          v85 = a3 | v22 & ~v21;
          memmove((void *)v20, &v85, (unsigned int)v18);
          v5 = v83;
        }
        else
        {
          switch ( (_DWORD)v18 )
          {
            case 1:
              if ( v21 != v23 )
                v22 = *(unsigned __int8 *)v20;
              v85 = a3 | v22 & ~v21;
              *(_BYTE *)v20 = v85;
LABEL_35:
              _InterlockedOr(v80, 0);
              break;
            case 4:
              if ( v21 != v23 )
                v22 = *(unsigned int *)v20;
              v85 = a3 | v22 & ~v21;
              *(_DWORD *)v20 = v85;
              goto LABEL_35;
            case 2:
              if ( v21 != v23 )
                v22 = *(unsigned __int16 *)v20;
              v85 = a3 | v22 & ~v21;
              *(_WORD *)v20 = v85;
              goto LABEL_35;
            case 8:
              if ( v21 != v23 )
                v22 = *(_QWORD *)v20;
              v85 = a3 | v22 & ~v21;
              *(_QWORD *)v20 = v85;
              KeFlushWriteBuffer();
LABEL_151:
              v5 = v83;
              break;
          }
        }
LABEL_36:
        v25 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v25;
        v26 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v27 = v26 - 8 * v25;
        v28 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v27;
        if ( v28 >= *(_DWORD *)(a2 + 60) )
          goto LABEL_37;
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v54 = v6 - 1;
  if ( !v54 )
    goto LABEL_6;
  v55 = v54 - 1;
  if ( !v55 )
    goto LABEL_22;
  if ( v55 == 1 )
  {
LABEL_38:
    v29 = *(_QWORD *)(v5 + 416);
    v30 = (unsigned int *)(v29 - 16);
    *(_QWORD *)(v5 + 416) = *(_QWORD *)(v29 + 8);
    *(_DWORD *)(v29 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v31 = *((_QWORD *)v30 + 1);
    v32 = *(unsigned int **)(v31 + 40);
    for ( i = (unsigned int *)(v31 + 40); v32 != i; v32 = *(unsigned int **)v32 )
    {
      if ( v30 + 4 < v32 )
        break;
    }
    v34 = (__int64 **)*((_QWORD *)v32 + 1);
    v35 = (__int64 *)(v30 + 4);
    if ( *v34 != (__int64 *)v32 )
      __fastfail(3u);
    *((_QWORD *)v30 + 3) = v34;
    *v35 = (__int64)v32;
    *v34 = v35;
    *((_QWORD *)v32 + 1) = v35;
    v36 = *v35 - 16;
    if ( (unsigned int *)*v35 != i )
    {
      v57 = v30[1];
      if ( (unsigned int *)v36 == (unsigned int *)((char *)v30 + v57) )
      {
        v58 = *(_DWORD *)(v36 + 4) + v57;
        v59 = (_QWORD *)*v35;
        v30[1] = v58;
        v60 = *v59;
        v61 = (_QWORD *)v59[1];
        if ( *(_QWORD **)(*v59 + 8LL) != v59 || (_QWORD *)*v61 != v59 )
          __fastfail(3u);
        *v61 = v60;
        *(_QWORD *)(v60 + 8) = v61;
      }
    }
    v37 = (unsigned int *)*((_QWORD *)v30 + 3);
    v38 = v37 - 4;
    if ( v37 != i )
    {
      v62 = v38[1];
      if ( v30 == (unsigned int *)((char *)v38 + v62) )
      {
        v38[1] = v30[1] + v62;
        v78 = (__int64 *)*v35;
        v79 = (__int64 **)*((_QWORD *)v30 + 3);
        if ( *(__int64 **)(*v35 + 8) != v35 || *v79 != v35 )
          __fastfail(3u);
        *v79 = v78;
        v30 = v38;
        v78[1] = (__int64)v79;
      }
    }
    if ( *(_QWORD *)(v31 + 32) <= (unsigned __int64)v30 + v30[1] )
    {
      *(_QWORD *)(v31 + 32) = v30;
      v39 = v30 + 4;
      v40 = *v39;
      v41 = (_QWORD *)v39[1];
      if ( *(_QWORD **)(*v39 + 8LL) != v39 || (_QWORD *)*v41 != v39 )
        __fastfail(3u);
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return BuffField;
}
