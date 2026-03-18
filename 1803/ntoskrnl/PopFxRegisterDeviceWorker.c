/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x140614C84
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1406146C0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PopFxRegisterDeviceWithPep @ 0x14016EE60 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x14016F048 (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14016F288 (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402761C4 (PopFxReleaseAcpiRefDevice.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x140760B84 (PopFxVerifyDependencies.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 **a9)
{
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  __int64 *v12; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r14
  unsigned int v15; // edi
  unsigned int i; // r10d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  SIZE_T v26; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 *v31; // rdi
  int v32; // ebx
  char *v33; // r14
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  _DWORD *v38; // rsi
  PVOID v39; // rcx
  char *v40; // rax
  char *v41; // rcx
  char *v42; // rdx
  __int64 v43; // r9
  _OWORD *v44; // rbx
  char *v45; // rax
  __int64 v46; // rcx
  char *v47; // rax
  SIZE_T v48; // r10
  __int64 v49; // r8
  __int64 *v50; // r12
  __int128 v51; // xmm0
  char *v52; // r9
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // r8
  char *v56; // r10
  SIZE_T v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned int v59; // ecx
  SIZE_T v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  char *v63; // rcx
  _QWORD *v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // ebx
  _QWORD *v67; // r13
  __int64 v68; // rsi
  unsigned int v69; // r9d
  __int64 v70; // r10
  __int64 v71; // r13
  PIRP Irp; // rax
  char *v73; // rcx
  int *v74; // rdx
  int v75; // eax
  unsigned int v77; // ecx
  int v78; // eax
  unsigned int v79; // r9d
  __int64 v80; // r8
  __int64 v81; // rax
  _DWORD *v82; // r8
  unsigned int v83; // edx
  __int64 v84; // rcx
  char *v85; // rcx
  _QWORD *v86; // rbp
  __int64 v87; // r8
  __int64 v88; // rcx
  unsigned __int64 v89; // [rsp+30h] [rbp-108h]
  __int64 v90; // [rsp+30h] [rbp-108h]
  unsigned __int64 v91; // [rsp+38h] [rbp-100h]
  _DWORD *v92; // [rsp+38h] [rbp-100h]
  char *v93; // [rsp+40h] [rbp-F8h]
  unsigned int v94; // [rsp+40h] [rbp-F8h]
  int v95; // [rsp+48h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-E8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-E0h]
  _QWORD *v98; // [rsp+60h] [rbp-D8h]
  char *v99; // [rsp+68h] [rbp-D0h]
  _QWORD *v100; // [rsp+70h] [rbp-C8h]
  __int64 *v101; // [rsp+78h] [rbp-C0h] BYREF
  _DWORD *v102; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v103; // [rsp+88h] [rbp-B0h]
  char *v104; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v105; // [rsp+98h] [rbp-A0h]
  signed __int32 v106; // [rsp+A0h] [rbp-98h]
  int v107; // [rsp+A4h] [rbp-94h]
  SIZE_T Size; // [rsp+A8h] [rbp-90h]
  char *v109; // [rsp+B0h] [rbp-88h]
  PVOID P; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v111; // [rsp+C0h] [rbp-78h]
  SIZE_T v112; // [rsp+C8h] [rbp-70h]
  __int64 v113; // [rsp+D0h] [rbp-68h]
  SIZE_T v114; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v115; // [rsp+E0h] [rbp-58h]
  __int64 v116; // [rsp+E8h] [rbp-50h]
  char *v117; // [rsp+F0h] [rbp-48h]

  v9 = a5;
  v10 = 0;
  v101 = 0LL;
  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  if ( a5 )
  {
    v116 = a5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
    v102 = PoolWithTag;
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = 0;
      memset(PoolWithTag, 0, 12LL * a5);
      for ( i = 0; i < a5; ++i )
      {
        v17 = v10;
        v18 = v15;
        v19 = a4 + 56LL * i;
        v20 = *(_DWORD *)(v19 + 28);
        if ( !v20
          || v20 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v19 + 24) >= v20) )
        {
          goto LABEL_64;
        }
        v21 = v20 + v15;
        v22 = -1;
        if ( v21 >= v15 )
          v22 = v21;
        v15 = v22;
        if ( v21 < v18 )
          goto LABEL_64;
        v23 = *(_DWORD *)(v19 + 40);
        if ( v23 )
        {
          if ( v23 < a5 )
          {
            v77 = v23 + v10;
            v78 = -1;
            if ( v23 + v10 >= v10 )
              v78 = v23 + v10;
            v10 = v78;
            if ( v77 >= v17 )
            {
              v79 = 0;
              while ( 1 )
              {
                v80 = *(unsigned int *)(*(_QWORD *)(v19 + 48) + 4LL * v79);
                if ( (unsigned int)v80 >= a5 )
                  break;
                ++v79;
                ++v14[3 * v80 + 2];
                if ( v79 >= *(_DWORD *)(v19 + 40) )
                  goto LABEL_10;
              }
            }
          }
LABEL_64:
          v32 = -1073741811;
          goto LABEL_57;
        }
LABEL_10:
        ;
      }
      v111 = 0LL;
      v105 = (336LL * a5 + 8LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v24 = 24LL * v15;
      v25 = v24 + v105;
      if ( a7 > 0 )
      {
        v111 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v25 = v111 + 248;
      }
      v91 = 0LL;
      v89 = 0LL;
      if ( v10 )
      {
        v81 = 8LL * v10;
        v91 = (v25 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v89 = v81 + v91;
        v25 = v81 + v81 + v91;
      }
      v115 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v107 = a5 * PopFxRuntimeLogNumberEntries;
      NumberOfBytes = v115 + 24LL * a5 * PopFxRuntimeLogNumberEntries;
      v104 = (char *)(int)(8 * a5 + 16);
      v103 = (unsigned __int64)&v104[40 * a5 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
      v26 = v24 + v103;
      Size = v24 + v103;
      AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, &v101);
      v12 = v101;
      if ( AcpiDeviceByUniqueId >= 0 )
      {
        v31 = v101;
        BugCheckParameter2 = (ULONG_PTR)v101;
LABEL_19:
        v33 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u);
        if ( !v33 || (P = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x4D584650u)) == 0LL )
        {
          v32 = -1073741670;
          goto LABEL_53;
        }
        memset(v33, 0, NumberOfBytes);
        v34 = *a3;
        v35 = a3[1];
        *((_DWORD *)v31 + 177) = a5;
        v31[89] = (__int64)v33;
        *((_OWORD *)v31 + 7) = v34;
        v100 = v31 + 89;
        v36 = a3[2];
        *((_OWORD *)v31 + 8) = v35;
        v37 = a3[3];
        *((_OWORD *)v31 + 9) = v36;
        *((_OWORD *)v31 + 10) = v37;
        v31[22] = a6;
        v31[72] = 0LL;
        v31 = (__int64 *)BugCheckParameter2;
        v38 = P;
        v39 = P;
        v106 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        *(_DWORD *)(BugCheckParameter2 + 592) = v106;
        *((_DWORD *)v31 + 147) = 5;
        memset(v39, 0, v26);
        v40 = &v33[v105];
        *(_QWORD *)v38 = a8;
        v41 = v104;
        v42 = &v33[8 * a5];
        v99 = v40;
        LODWORD(v43) = 0;
        v38[2] = a5;
        v109 = v42;
        v95 = 0;
        v117 = (char *)v38 + (_QWORD)v41;
        v93 = (char *)v38 + (_QWORD)v41;
        v98 = (_QWORD *)((char *)v38 + v103);
        v44 = v42 + 48;
        v45 = &v33[v91];
        v46 = 0LL;
        if ( !v10 )
          v45 = 0LL;
        v103 = (unsigned __int64)v45;
        v47 = &v33[v89];
        v90 = 0LL;
        if ( !v10 )
          v47 = 0LL;
        v48 = NumberOfBytes - 336;
        v104 = v47;
        v49 = -48LL - (_QWORD)v33;
        v50 = (__int64 *)(a4 + 32);
        v114 = NumberOfBytes - 336;
        v92 = v102 + 2;
        v113 = -48LL - (_QWORD)v33;
        v105 = -16LL - (_QWORD)v38;
        while ( 1 )
        {
          *(_QWORD *)(v46 + *v100) = v42;
          if ( (unsigned __int64)v44 + v49 > v48 )
            goto LABEL_82;
          v51 = *((_OWORD *)v50 - 2);
          *((_DWORD *)v44 - 8) = v43;
          *((_QWORD *)v44 + 4) = v31;
          *(_OWORD *)v42 = v51;
          *(_QWORD *)v44 = v42;
          *((_QWORD *)v44 - 1) = PopFxComponentWork;
          *((_QWORD *)v44 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v44 + 56), NotificationEvent, 1u);
          v52 = v99;
          *((_QWORD *)v44 + 10) = 0LL;
          *((_DWORD *)v44 + 27) = *((_DWORD *)v50 - 1);
          *((_QWORD *)v44 + 14) = v52;
          v53 = *((_DWORD *)v50 - 2);
          *((_DWORD *)v44 + 41) = -1;
          *((_DWORD *)v44 + 30) = v53;
          *((_DWORD *)v44 + 42) = v106;
          *((_QWORD *)v44 + 19) = 0LL;
          v54 = *((_DWORD *)v50 + 2);
          if ( v54 )
          {
            v82 = (_DWORD *)v103;
            v83 = 0;
            *((_QWORD *)v44 + 16) = v103;
            *((_DWORD *)v44 + 31) = v54;
            do
            {
              v84 = v83++;
              *v82 = *(_DWORD *)(v50[2] + 4 * v84);
              v82 += 2;
            }
            while ( v83 < *((_DWORD *)v44 + 31) );
            v103 = (unsigned __int64)v82;
          }
          v55 = v92;
          if ( *v92 )
          {
            v85 = v104;
            *((_QWORD *)v44 + 18) = v104;
            v104 = &v85[8 * *v92];
          }
          v56 = v93;
          v57 = Size;
          v58 = v105 + 16;
          *(_QWORD *)&v38[v90 + 4] = v93;
          if ( (unsigned __int64)&v93[v58] > v57 - 40 )
            goto LABEL_82;
          v59 = 0;
          v94 = 0;
          *(_OWORD *)v56 = *((_OWORD *)v50 - 2);
          *((_QWORD *)v56 + 2) = *(v50 - 2);
          *((_DWORD *)v56 + 7) = *((_DWORD *)v50 - 1);
          *((_QWORD *)v56 + 4) = v98;
          *((_DWORD *)v56 + 6) = *((_DWORD *)v50 - 2);
          if ( *((_DWORD *)v44 + 27) )
            break;
LABEL_37:
          v42 = v109 + 336;
          v43 = (unsigned int)(v95 + 1);
          v46 = v90 * 4 + 8;
          v109 += 336;
          v95 = v43;
          v93 = v56 + 40;
          v44 += 21;
          v90 += 2LL;
          v50 += 7;
          v92 = v55 + 3;
          if ( (unsigned int)v43 >= a5 )
          {
            *((_DWORD *)v31 + 180) = v107;
            v31[91] = (__int64)&v33[v115];
            if ( v10 )
            {
              v32 = PopFxVerifyDependencies(v102, v31, a5, v43);
              if ( v32 < 0 )
                goto LABEL_52;
            }
            v66 = 0;
            v67 = v100;
            v68 = 0LL;
            do
            {
              v69 = 0;
              v70 = *(_QWORD *)(v68 + *v67);
              if ( *(_DWORD *)(v70 + 172) )
              {
                v86 = v100;
                do
                {
                  v87 = *(_QWORD *)(*v86 + 8LL * *(unsigned int *)(*(_QWORD *)(v70 + 176) + 8LL * v69));
                  v88 = *(unsigned int *)(v87 + 188);
                  *(_DWORD *)(*(_QWORD *)(v87 + 192) + 8 * v88) = v66;
                  *(_DWORD *)(*(_QWORD *)(v87 + 192) + 8 * v88 + 4) = v69++;
                  ++*(_DWORD *)(v87 + 188);
                }
                while ( v69 < *(_DWORD *)(v70 + 172) );
                v9 = a5;
                v67 = v100;
              }
              PopFxActivateComponent((__int64)v31, v70, 0LL, 1);
              ++v66;
              v68 += 8LL;
            }
            while ( v66 < v9 );
            v71 = v116;
            v38 = P;
            if ( a7 <= 0 || (v31[3] = (__int64)&v33[v111], Irp = IoAllocateIrp(a7 + 2, 0), (v31[2] = (__int64)Irp) != 0) )
            {
              if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v31, (int)v38) )
                PopFxBugCheck(0x601uLL, (ULONG_PTR)v31, (ULONG_PTR)v38, 0LL);
              if ( v9 )
              {
                v73 = &v33[8 * a5 + 92];
                v74 = (int *)(v117 + 28);
                do
                {
                  if ( (*(_BYTE *)(v74 - 3) & 2) != 0 )
                    *(_DWORD *)v73 |= 2u;
                  v75 = *v74;
                  v74 += 10;
                  *((_DWORD *)v73 + 16) = v75;
                  v73 += 336;
                  --v71;
                }
                while ( v71 );
                v31 = (__int64 *)BugCheckParameter2;
              }
              v33 = 0LL;
              v32 = 0;
              *a9 = v31;
              v31 = 0LL;
LABEL_52:
              ExFreePoolWithTag(v38, 0x4D584650u);
              v12 = v101;
LABEL_53:
              if ( v31 && !v12 )
                ExFreePoolWithTag(v31, 0x4D584650u);
              if ( v33 )
                ExFreePoolWithTag(v33, 0x4D584650u);
              v14 = v102;
              goto LABEL_57;
            }
LABEL_82:
            v32 = -1073741670;
            goto LABEL_52;
          }
          v49 = v113;
          v48 = v114;
        }
        v60 = NumberOfBytes - 24;
        v112 = NumberOfBytes - 24;
        while ( v52 - v33 <= v60 )
        {
          v61 = *v50;
          v62 = v59;
          v63 = v99;
          *((_DWORD *)v99 + 4) = *(_DWORD *)(*v50 + 24 * v62 + 16);
          *(_QWORD *)v63 = *(_QWORD *)(v61 + 24 * v62);
          *((_QWORD *)v63 + 1) = *(_QWORD *)(v61 + 24 * v62 + 8);
          v99 = v63 + 24;
          if ( (unsigned __int64)v98 + v105 + 16 > v57 - 24 )
            break;
          v64 = v98;
          *((_DWORD *)v98 + 4) = *(_DWORD *)(v61 + 24 * v62 + 16);
          *v64 = *(_QWORD *)(v61 + 24 * v62);
          v65 = *(_QWORD *)(v61 + 24 * v62 + 8);
          v60 = v112;
          v52 = v99;
          v64[1] = v65;
          v98 = v64 + 3;
          v59 = v94 + 1;
          v94 = v59;
          if ( v59 >= *((_DWORD *)v44 + 27) )
          {
            v55 = v92;
            goto LABEL_37;
          }
        }
        goto LABEL_82;
      }
      if ( AcpiDeviceByUniqueId == -1073741738 )
      {
        v12 = v101;
        v32 = -1073741661;
        goto LABEL_57;
      }
      v30 = PopFxCreateDeviceCommon((__int64)a2, v28, v29, 0, &BugCheckParameter2);
      v31 = (__int64 *)BugCheckParameter2;
      v32 = v30;
      if ( BugCheckParameter2 )
      {
        v26 = Size;
        goto LABEL_19;
      }
LABEL_57:
      ExFreePoolWithTag(v14, 0x4D584650u);
      if ( v12 )
        PopFxReleaseAcpiRefDevice((__int64)v12, (void *)0x66466F50);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v32;
}
