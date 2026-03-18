/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x1405BE6E4
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1405BE2E0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x1405BE594 (PopFxRegisterDevice.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140068F1C (PopFxActivateComponent.c)
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PopFxRegisterDeviceWithPep @ 0x14015ECD4 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x14015EDB8 (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14015EFF8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14022BAD8 (PopFxReleaseAcpiRefDevice.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x1406C8C3C (PopFxVerifyDependencies.c)
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
  unsigned int v10; // r14d
  __int64 *v13; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v15; // edi
  unsigned int i; // r10d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r8d
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r15
  size_t v28; // r14
  SIZE_T v29; // r12
  int AcpiDeviceByUniqueId; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  __int64 *v34; // rdi
  int v35; // ebx
  char *v36; // r14
  _DWORD *v37; // r12
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  size_t v42; // r8
  int v43; // esi
  char *v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r9
  char *v47; // r13
  _OWORD *v48; // rbx
  size_t v49; // r10
  __int64 v50; // r8
  __int64 *v51; // r15
  unsigned __int64 v52; // rcx
  __int128 v53; // xmm0
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // r8
  size_t v57; // r11
  unsigned __int64 v58; // rcx
  unsigned int v59; // r10d
  size_t v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  char *v63; // rcx
  char *v64; // r15
  unsigned int v65; // ebx
  _QWORD *v66; // r12
  __int64 v67; // rsi
  unsigned int v68; // r9d
  __int64 v69; // r10
  PIRP Irp; // rax
  int *v71; // rdx
  __int64 v72; // r8
  _DWORD *v73; // rcx
  int v74; // eax
  unsigned int v76; // ecx
  int v77; // eax
  unsigned int v78; // r9d
  __int64 v79; // r8
  __int64 v80; // rax
  char *v81; // r8
  unsigned int v82; // edx
  __int64 v83; // rcx
  char *v84; // rcx
  _QWORD *v85; // rbp
  __int64 v86; // r8
  __int64 v87; // rcx
  int v88; // [rsp+30h] [rbp-108h]
  int v89; // [rsp+30h] [rbp-108h]
  unsigned __int64 v90; // [rsp+38h] [rbp-100h]
  char *v91; // [rsp+38h] [rbp-100h]
  unsigned __int64 v92; // [rsp+40h] [rbp-F8h]
  _DWORD *v93; // [rsp+40h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v95; // [rsp+50h] [rbp-E8h]
  char *v96; // [rsp+58h] [rbp-E0h]
  _QWORD *v97; // [rsp+60h] [rbp-D8h]
  __int64 *v98; // [rsp+68h] [rbp-D0h] BYREF
  PVOID P; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v100; // [rsp+78h] [rbp-C0h]
  char *v101; // [rsp+80h] [rbp-B8h]
  signed __int32 v102; // [rsp+88h] [rbp-B0h]
  int v103; // [rsp+8Ch] [rbp-ACh]
  char *v104; // [rsp+90h] [rbp-A8h]
  char *v105; // [rsp+98h] [rbp-A0h]
  size_t Size; // [rsp+A0h] [rbp-98h]
  size_t v107; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v108; // [rsp+B0h] [rbp-88h]
  size_t v109; // [rsp+B8h] [rbp-80h]
  __int64 v110; // [rsp+C0h] [rbp-78h]
  size_t v111; // [rsp+C8h] [rbp-70h]
  char *v112; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v113; // [rsp+D8h] [rbp-60h]
  _DWORD *v114; // [rsp+E0h] [rbp-58h]
  char *v115; // [rsp+E8h] [rbp-50h]
  __int64 v116; // [rsp+F0h] [rbp-48h]

  v9 = a5;
  v10 = 0;
  v98 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  if ( a5 )
  {
    v116 = a5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v88 = 0;
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
          goto LABEL_65;
        }
        v21 = v20 + v15;
        v22 = -1;
        if ( v21 >= v15 )
          v22 = v21;
        v15 = v22;
        if ( v21 < v18 )
          goto LABEL_65;
        v23 = *(_DWORD *)(v19 + 40);
        if ( v23 )
        {
          if ( v23 < a5 )
          {
            v76 = v23 + v10;
            v77 = -1;
            if ( v23 + v10 >= v10 )
              v77 = v23 + v10;
            v88 = v77;
            v10 = v77;
            if ( v76 >= v17 )
            {
              v78 = 0;
              while ( 1 )
              {
                v79 = *(unsigned int *)(*(_QWORD *)(v19 + 48) + 4LL * v78);
                if ( (unsigned int)v79 >= a5 )
                  break;
                ++v78;
                ++*((_DWORD *)P + 3 * v79 + 2);
                if ( v78 >= *(_DWORD *)(v19 + 40) )
                  goto LABEL_10;
              }
            }
          }
LABEL_65:
          v35 = -1073741811;
          goto LABEL_58;
        }
LABEL_10:
        ;
      }
      v108 = 0LL;
      v24 = (8LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v101 = (char *)v24;
      v25 = 24LL * v15;
      v100 = (v24 + ((unsigned __int64)a5 << 8) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v26 = v25 + v100;
      if ( a7 > 0 )
      {
        v108 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v26 = v108 + 248;
      }
      v104 = 0LL;
      v27 = 0LL;
      v105 = 0LL;
      v92 = 0LL;
      if ( v10 )
      {
        v27 = (v26 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v80 = 8LL * v10;
        v92 = (v80 + v27 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v26 = v80 + v92;
      }
      v113 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v103 = a5 * PopFxRuntimeLogNumberEntries;
      v28 = v113 + 24LL * a5 * PopFxRuntimeLogNumberEntries;
      Size = v28;
      v95 = ((int)(8 * a5 + 16) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      v90 = (v95 + 40LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v29 = v25 + v90;
      v107 = v25 + v90;
      AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, &v98);
      v13 = v98;
      if ( AcpiDeviceByUniqueId >= 0 )
      {
        v34 = v98;
        BugCheckParameter2 = (ULONG_PTR)v98;
LABEL_19:
        v36 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x4D584650u);
        if ( !v36 || (v114 = ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x4D584650u), (v37 = v114) == 0LL) )
        {
          v35 = -1073741670;
          goto LABEL_55;
        }
        memset(v36, 0, Size);
        v38 = *a3;
        v39 = a3[1];
        *((_DWORD *)v34 + 157) = a5;
        v34[79] = (__int64)v36;
        *((_OWORD *)v34 + 7) = v38;
        v97 = v34 + 79;
        v40 = a3[2];
        *((_OWORD *)v34 + 8) = v39;
        v41 = a3[3];
        *((_OWORD *)v34 + 9) = v40;
        *((_OWORD *)v34 + 10) = v41;
        v34[22] = a6;
        v34[72] = 0LL;
        v34 = (__int64 *)BugCheckParameter2;
        v42 = v107;
        v102 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        *(_DWORD *)(BugCheckParameter2 + 592) = v102;
        *((_DWORD *)v34 + 147) = 5;
        memset(v37, 0, v42);
        v43 = v88;
        v44 = &v36[v24];
        *(_QWORD *)v37 = a8;
        v45 = v100;
        v115 = &v36[v24];
        v101 = &v36[v24];
        v37[2] = a5;
        v96 = &v36[v45];
        if ( v88 )
        {
          v104 = &v36[v27];
          v105 = &v36[v92];
        }
        LODWORD(v46) = 0;
        v91 = (char *)v37 + v90;
        v112 = (char *)v37 + v95;
        v47 = (char *)v37 + v95;
        v89 = 0;
        v48 = v44 + 48;
        v49 = Size - 256;
        v93 = (char *)P + 8;
        v50 = -48LL - (_QWORD)v36;
        v111 = Size - 256;
        v110 = -48LL - (_QWORD)v36;
        v51 = (__int64 *)(a4 + 32);
        v52 = 0LL;
        v95 = 0LL;
        v100 = -16LL - (_QWORD)v37;
        while ( 1 )
        {
          *(_QWORD *)(v52 + *v97) = v44;
          if ( (unsigned __int64)v48 + v50 > v49 )
            goto LABEL_83;
          v53 = *((_OWORD *)v51 - 2);
          *((_DWORD *)v48 - 8) = v46;
          *((_QWORD *)v48 + 4) = v34;
          *(_OWORD *)v44 = v53;
          *(_QWORD *)v48 = v44;
          *((_QWORD *)v48 - 1) = PopFxComponentWork;
          *((_QWORD *)v48 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v48 + 56), NotificationEvent, 1u);
          *((_QWORD *)v48 + 10) = 0LL;
          *((_DWORD *)v48 + 27) = *((_DWORD *)v51 - 1);
          *((_QWORD *)v48 + 14) = v96;
          v54 = *((_DWORD *)v51 - 2);
          *((_DWORD *)v48 + 41) = -1;
          *((_DWORD *)v48 + 30) = v54;
          *((_DWORD *)v48 + 42) = v102;
          *((_QWORD *)v48 + 19) = 0LL;
          v55 = *((_DWORD *)v51 + 2);
          if ( v55 )
          {
            v81 = v104;
            v82 = 0;
            *((_QWORD *)v48 + 16) = v104;
            *((_DWORD *)v48 + 31) = v55;
            do
            {
              v83 = v82++;
              *(_DWORD *)v81 = *(_DWORD *)(v51[2] + 4 * v83);
              v81 += 8;
            }
            while ( v82 < *((_DWORD *)v48 + 31) );
            v104 = v81;
          }
          v56 = v93;
          if ( *v93 )
          {
            v84 = v105;
            *((_QWORD *)v48 + 18) = v105;
            v105 = &v84[8 * *v93];
          }
          v57 = v107;
          v58 = v100 + 16;
          *(_QWORD *)((char *)v37 + v95 + 16) = v47;
          if ( (unsigned __int64)&v47[v58] > v57 - 40 )
            goto LABEL_83;
          v59 = 0;
          *(_OWORD *)v47 = *((_OWORD *)v51 - 2);
          *((_QWORD *)v47 + 2) = *(v51 - 2);
          *((_DWORD *)v47 + 7) = *((_DWORD *)v51 - 1);
          *((_QWORD *)v47 + 4) = v91;
          *((_DWORD *)v47 + 6) = *((_DWORD *)v51 - 2);
          if ( *((_DWORD *)v48 + 27) )
            break;
LABEL_36:
          v44 = v101 + 256;
          v46 = (unsigned int)(v89 + 1);
          v52 = v95 + 8;
          v101 += 256;
          v89 = v46;
          v48 += 16;
          v95 += 8LL;
          v47 += 40;
          v93 = v56 + 3;
          v51 += 7;
          if ( (unsigned int)v46 >= a5 )
          {
            v64 = v112;
            *((_DWORD *)v34 + 160) = v103;
            v34[81] = (__int64)&v36[v113];
            if ( v43 )
            {
              v35 = PopFxVerifyDependencies(P, v34, a5, v46);
              if ( v35 < 0 )
                goto LABEL_54;
            }
            v65 = 0;
            v66 = v97;
            v67 = 0LL;
            do
            {
              v68 = 0;
              v69 = *(_QWORD *)(v67 + *v66);
              if ( *(_DWORD *)(v69 + 172) )
              {
                v85 = v97;
                do
                {
                  v86 = *(_QWORD *)(*v85 + 8LL * *(unsigned int *)(*(_QWORD *)(v69 + 176) + 8LL * v68));
                  v87 = *(unsigned int *)(v86 + 188);
                  *(_DWORD *)(*(_QWORD *)(v86 + 192) + 8 * v87) = v65;
                  *(_DWORD *)(*(_QWORD *)(v86 + 192) + 8 * v87 + 4) = v68++;
                  ++*(_DWORD *)(v86 + 188);
                }
                while ( v68 < *(_DWORD *)(v69 + 172) );
                v9 = a5;
                v66 = v97;
              }
              PopFxActivateComponent((__int64)v34, v69, 0LL, 1);
              ++v65;
              v67 += 8LL;
            }
            while ( v65 < v9 );
            v37 = v114;
            if ( a7 <= 0 || (v34[3] = (__int64)&v36[v108], Irp = IoAllocateIrp(a7 + 2, 0), (v34[2] = (__int64)Irp) != 0) )
            {
              if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v34, (int)v37) )
                PopFxBugCheck(0x601uLL, (ULONG_PTR)v34, (ULONG_PTR)v37, 0LL);
              if ( v9 )
              {
                v71 = (int *)(v64 + 28);
                v72 = v116;
                v73 = v115 + 92;
                do
                {
                  if ( (*(_BYTE *)(v71 - 3) & 2) != 0 )
                    *v73 |= 2u;
                  v74 = *v71;
                  v71 += 10;
                  v73[16] = v74;
                  v73 += 64;
                  --v72;
                }
                while ( v72 );
                v34 = (__int64 *)BugCheckParameter2;
              }
              v36 = 0LL;
              v35 = 0;
              *a9 = v34;
              v34 = 0LL;
LABEL_54:
              ExFreePoolWithTag(v37, 0x4D584650u);
              v13 = v98;
LABEL_55:
              if ( v34 && !v13 )
                ExFreePoolWithTag(v34, 0x4D584650u);
              if ( v36 )
                ExFreePoolWithTag(v36, 0x4D584650u);
              goto LABEL_58;
            }
LABEL_83:
            v35 = -1073741670;
            goto LABEL_54;
          }
          v50 = v110;
          v49 = v111;
        }
        v60 = Size - 24;
        v109 = Size - 24;
        while ( 1 )
        {
          v61 = *v51;
          v62 = 3LL * v59;
          if ( v96 - v36 > v60 )
            goto LABEL_83;
          v63 = v96;
          *((_DWORD *)v96 + 4) = *(_DWORD *)(v61 + 24LL * v59 + 16);
          *(_QWORD *)v63 = *(_QWORD *)(v61 + 24LL * v59);
          *((_QWORD *)v63 + 1) = *(_QWORD *)(v61 + 24LL * v59 + 8);
          v96 = v63 + 24;
          if ( (unsigned __int64)&v91[v100 + 16] > v57 - 24 )
            goto LABEL_83;
          ++v59;
          *((_DWORD *)v91 + 4) = *(_DWORD *)(v61 + 8 * v62 + 16);
          *(_QWORD *)v91 = *(_QWORD *)(v61 + 8 * v62);
          *((_QWORD *)v91 + 1) = *(_QWORD *)(v61 + 8 * v62 + 8);
          v91 += 24;
          v60 = v109;
          if ( v59 >= *((_DWORD *)v48 + 27) )
          {
            v56 = v93;
            goto LABEL_36;
          }
        }
      }
      if ( AcpiDeviceByUniqueId == -1073741738 )
      {
        v13 = v98;
        v35 = -1073741661;
        goto LABEL_58;
      }
      v33 = PopFxCreateDeviceCommon((__int64)a2, v31, v32, 0, &BugCheckParameter2);
      v34 = (__int64 *)BugCheckParameter2;
      v35 = v33;
      if ( BugCheckParameter2 )
      {
        v24 = (unsigned __int64)v101;
        goto LABEL_19;
      }
LABEL_58:
      ExFreePoolWithTag(P, 0x4D584650u);
      if ( v13 )
        PopFxReleaseAcpiRefDevice((__int64)v13, (void *)0x66466F50);
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
  return (unsigned int)v35;
}
