/*
 * XREFs of ReadFieldObj @ 0x1C0016D90
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     AccessBaseField @ 0x1C00173C0 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0018948 (ReadBuffField.c)
 *     PushAccFieldObj @ 0x1C0018A78 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
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
  __int64 *v30; // rbx
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 *i; // r8
  __int64 **v34; // r10
  __int64 *v35; // rdx
  __int64 *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int v41; // ecx
  __int64 v42; // rdi
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // r14
  char v46; // r8
  unsigned __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r10
  _QWORD *v57; // rax
  __int64 v58; // r10
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 *v61; // r8
  int v62; // edx
  unsigned int FieldUnitRegionObj; // eax
  _QWORD *ObjectPath; // rax
  int v65; // r8d
  void *v66; // rdx
  void *v67; // r12
  __int64 v68; // rcx
  int (__fastcall *v69)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v70; // rax
  _BYTE *v71; // rcx
  int (__fastcall *v72)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v73; // rax
  _BYTE *v74; // rcx
  __int64 *v75; // rcx
  __int64 **v76; // rax
  signed __int32 v77[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v78; // [rsp+20h] [rbp-E0h]
  char v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+38h] [rbp-C8h]
  __int64 Src; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+58h] [rbp-A8h]
  _BYTE v85[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v86[12]; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v87[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v88[10]; // [rsp+C0h] [rbp-40h] BYREF

  v80 = a1;
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
          goto LABEL_37;
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
          v5 = v80;
          goto LABEL_20;
        }
        v10 = *(__int64 **)(v9 + 32);
        v83 = 0LL;
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
        if ( v12 == 131 || (v62 = v12 - 130) == 0 )
        {
          v13 = **(_QWORD **)(v11 + 96);
          v83 = v13;
        }
        else
        {
          if ( v62 != 2 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(0LL, 3222536195LL);
            PrintDebugMessage(56, MEMORY[0x42], 0, 0, 0LL);
            BuffField = -1072431101;
LABEL_99:
            v5 = v80;
LABEL_100:
            v83 = 0LL;
            v13 = 0LL;
            goto LABEL_16;
          }
          FieldUnitRegionObj = GetFieldUnitRegionObj(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL),
                                 &v83,
                                 a3);
          v5 = v80;
          BuffField = FieldUnitRegionObj;
          v13 = v83;
        }
        if ( v13 && *(_WORD *)(v13 + 66) != 10 )
        {
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(0LL, 3222536195LL);
          ObjectPath = GetObjectPath(v13);
          v65 = *(unsigned __int16 *)(v13 + 66);
          v66 = &unk_1C0067B08;
          v78 = 0LL;
          v67 = ObjectPath;
          if ( ObjectPath )
            LODWORD(v66) = (_DWORD)ObjectPath;
          PrintDebugMessage(55, (_DWORD)v66, v65, 0, v78);
          BuffField = -1072431101;
          if ( v67 )
            ExFreePoolWithTag(v67, 0);
          goto LABEL_99;
        }
        if ( (BuffField & 0x80000000) != 0 || !v13 )
          goto LABEL_100;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 112));
          v13 = v83;
        }
LABEL_16:
        if ( BuffField )
          return BuffField;
        if ( v13 )
        {
          LOBYTE(v78) = 1;
          BuffField = AccessBaseField(v5, v13, (int)a2 + 96, (int)a2 + 88, v78);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 112), 0xFFFFFFFF) == 1 )
          {
            v68 = v83;
            *(_WORD *)(v83 + 64) |= 4u;
            if ( (*(_WORD *)(v68 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v68);
          }
          goto LABEL_19;
        }
LABEL_20:
        if ( BuffField || a2 != *(_QWORD *)(v5 + 416) )
          return BuffField;
LABEL_22:
        if ( !*(_DWORD *)(a2 + 80) )
          goto LABEL_23;
        v41 = *(_DWORD *)(a2 + 76);
        if ( v41 >= 0x40 )
          v42 = 0LL;
        else
          v42 = 1LL << v41;
        v43 = *(_DWORD *)(a2 + 72);
        if ( v43 >= 0x40 )
          v44 = 0LL;
        else
          v44 = *(_QWORD *)(a2 + 88) << v43;
        v45 = *(unsigned int *)(a2 + 56);
        v46 = 0;
        v47 = *(_QWORD *)(a2 + 40);
        v48 = v44 & *(_QWORD *)(a2 + 64);
        v49 = (v42 - 1) << v43;
        v50 = 0LL;
        Src = 0LL;
        v87[0] = 0LL;
        v87[1] = 255LL;
        v87[2] = 0xFFFFLL;
        v87[3] = 0LL;
        v87[4] = 0xFFFFFFFFLL;
        memset(&v87[5], 0, 24);
        v87[8] = -1LL;
        v79 = 0;
        if ( (unsigned int)v45 > 8 )
          goto LABEL_62;
        if ( v49 == v87[v45] )
        {
          v46 = 1;
          v79 = 1;
        }
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        {
          v69 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(PmHalDispatchTable + 144);
          if ( v69 )
          {
            if ( v46 )
            {
LABEL_115:
              v70 = v48 | v50 & ~v49;
              v71 = v85;
              Src = v70;
              LOBYTE(v71) = 1;
              if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable
                                                                                                + 144))(
                     v71,
                     v47,
                     &Src,
                     (unsigned int)v45,
                     v85) >= 0 )
                goto LABEL_120;
            }
            else if ( v69(0LL, v47, &Src, (unsigned int)v45, v85) >= 0 )
            {
              v50 = Src;
              goto LABEL_115;
            }
            v50 = Src;
            v46 = v79;
            v5 = v80;
          }
        }
        if ( (unsigned int)v45 == 1LL )
          v51 = 0LL;
        else
          v51 = v47 % (unsigned int)v45;
        if ( v51 )
        {
          if ( !v46 )
          {
            memmove(&Src, (const void *)v47, (unsigned int)v45);
            v50 = Src;
          }
          Src = v48 | v50 & ~v49;
          memmove((void *)v47, &Src, (unsigned int)v45);
          goto LABEL_120;
        }
        switch ( (_DWORD)v45 )
        {
          case 1:
            if ( !v46 )
              v50 = *(unsigned __int8 *)v47;
            Src = v48 | v50 & ~v49;
            *(_BYTE *)v47 = Src;
            _InterlockedOr(v77, 0);
            break;
          case 2:
            if ( !v46 )
              v50 = *(unsigned __int16 *)v47;
            Src = v48 | v50 & ~v49;
            *(_WORD *)v47 = Src;
            _InterlockedOr(v77, 0);
            break;
          case 4:
            if ( !v46 )
              v50 = *(unsigned int *)v47;
            Src = v48 | v50 & ~v49;
            *(_DWORD *)v47 = Src;
            _InterlockedOr(v77, 0);
            break;
          case 8:
            if ( !v46 )
              v50 = *(_QWORD *)v47;
            Src = v48 | v50 & ~v49;
            *(_QWORD *)v47 = Src;
            KeFlushWriteBuffer();
LABEL_120:
            v5 = v80;
            break;
        }
LABEL_62:
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
LABEL_36:
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_37;
        }
LABEL_23:
        v14 = *(_DWORD *)(a2 + 76);
        *(_QWORD *)(a2 + 88) >>= v14;
        v15 = *(_DWORD *)(a2 + 104);
        v16 = *(_DWORD *)(a2 + 72);
        if ( v15 < v16 )
        {
          if ( v15 >= 0x40 )
            v54 = 0LL;
          else
            v54 = 1LL << v15;
          *(_QWORD *)(a2 + 88) &= v54 - 1;
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
        v82 = 0LL;
        v84 = a3;
        v88[0] = 0LL;
        v88[1] = 255LL;
        v88[2] = 0xFFFFLL;
        v88[3] = 0LL;
        v88[4] = 0xFFFFFFFFLL;
        memset(&v88[5], 0, 24);
        v88[8] = -1LL;
        if ( (unsigned int)v18 > 8 )
          goto LABEL_35;
        v23 = v88[v18];
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        {
          v72 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(PmHalDispatchTable + 144);
          if ( v72 )
          {
            if ( v21 == v23 )
            {
LABEL_139:
              v73 = v22 & ~v21;
              v74 = v86;
              v82 = a3 | v73;
              LOBYTE(v74) = 1;
              if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable
                                                                                                + 144))(
                     v74,
                     v20,
                     &v82,
                     (unsigned int)v18,
                     v86) >= 0 )
                goto LABEL_148;
            }
            else if ( v72(0LL, v20, &v82, (unsigned int)v18, v86) >= 0 )
            {
              v22 = v82;
              a3 = v84;
              goto LABEL_139;
            }
            v22 = v82;
            a3 = v84;
            v5 = v80;
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
            memmove(&v82, (const void *)v20, (unsigned int)v18);
            v22 = v82;
            a3 = v84;
          }
          v82 = a3 | v22 & ~v21;
          memmove((void *)v20, &v82, (unsigned int)v18);
LABEL_148:
          v5 = v80;
          goto LABEL_35;
        }
        switch ( (_DWORD)v18 )
        {
          case 1:
            if ( v21 != v23 )
              v22 = *(unsigned __int8 *)v20;
            v82 = a3 | v22 & ~v21;
            *(_BYTE *)v20 = v82;
            _InterlockedOr(v77, 0);
            break;
          case 4:
            if ( v21 != v23 )
              v22 = *(unsigned int *)v20;
            v82 = a3 | v22 & ~v21;
            *(_DWORD *)v20 = v82;
            _InterlockedOr(v77, 0);
            break;
          case 2:
            if ( v21 != v23 )
              v22 = *(unsigned __int16 *)v20;
            v82 = a3 | v22 & ~v21;
            *(_WORD *)v20 = v82;
            _InterlockedOr(v77, 0);
            break;
          case 8:
            if ( v21 != v23 )
              v22 = *(_QWORD *)v20;
            v82 = a3 | v22 & ~v21;
            *(_QWORD *)v20 = v82;
            KeFlushWriteBuffer();
            goto LABEL_148;
          default:
            break;
        }
LABEL_35:
        v25 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v25;
        v26 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v27 = v26 - 8 * v25;
        v28 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v27;
        if ( v28 >= *(_DWORD *)(a2 + 60) )
          goto LABEL_36;
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v52 = v6 - 1;
  if ( !v52 )
    goto LABEL_6;
  v53 = v52 - 1;
  if ( !v53 )
    goto LABEL_22;
  if ( v53 == 1 )
  {
LABEL_37:
    v29 = *(_QWORD *)(v5 + 416);
    v30 = (_QWORD *)(v29 - 16);
    *(_QWORD *)(v5 + 416) = *(_QWORD *)(v29 + 8);
    *(_DWORD *)(v29 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v31 = v30[1];
    v32 = *(__int64 **)(v31 + 40);
    for ( i = (__int64 *)(v31 + 40); v32 != i; v32 = (__int64 *)*v32 )
    {
      if ( v30 + 2 < v32 )
        break;
    }
    v34 = (__int64 **)v32[1];
    v35 = v30 + 2;
    if ( *v34 != v32 )
      __fastfail(3u);
    *v35 = (__int64)v32;
    v30[3] = v34;
    *v34 = v35;
    v32[1] = (__int64)v35;
    if ( (__int64 *)*v35 != i )
    {
      v55 = *((unsigned int *)v30 + 1);
      v56 = *v35 - 16;
      if ( (_QWORD *)v56 == (_QWORD *)((char *)v30 + v55) )
      {
        v57 = (_QWORD *)*v35;
        *((_DWORD *)v30 + 1) = *(_DWORD *)(v56 + 4) + v55;
        v58 = *(_QWORD *)(v56 + 16);
        if ( *(_QWORD **)(v58 + 8) != v57 || (v59 = (_QWORD *)v57[1], (_QWORD *)*v59 != v57) )
          __fastfail(3u);
        *v59 = v58;
        *(_QWORD *)(v58 + 8) = v59;
      }
    }
    v36 = (__int64 *)v30[3];
    if ( v36 != i )
    {
      v60 = *((unsigned int *)v36 - 3);
      v61 = v36 - 2;
      if ( v30 == (__int64 *)((char *)v36 + v60 - 16) )
      {
        *((_DWORD *)v61 + 1) = *((_DWORD *)v30 + 1) + v60;
        v75 = (__int64 *)*v35;
        if ( *(__int64 **)(*v35 + 8) != v35 || (v76 = (__int64 **)v30[3], *v76 != v35) )
          __fastfail(3u);
        *v76 = v75;
        v30 = v61;
        v75[1] = (__int64)v76;
      }
    }
    if ( *(_QWORD *)(v31 + 32) <= (unsigned __int64)v30 + *((unsigned int *)v30 + 1) )
    {
      *(_QWORD *)(v31 + 32) = v30;
      v37 = v30 + 2;
      v38 = *v37;
      if ( *(_QWORD **)(*v37 + 8LL) != v37 || (v39 = (_QWORD *)v37[1], (_QWORD *)*v39 != v37) )
        __fastfail(3u);
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return BuffField;
}
