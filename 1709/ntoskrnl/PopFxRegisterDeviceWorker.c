/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x1405CA234
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1405C9E30 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     PopFxActivateComponent @ 0x1400FD6FC (PopFxActivateComponent.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1400FE7B8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxRegisterDeviceWithPep @ 0x140146FD8 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x1401471FC (PopFxCreateDeviceCommon.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14023EE5C (PopFxReleaseAcpiRefDevice.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x1406F96C4 (PopFxVerifyDependencies.c)
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
  unsigned int v9; // esi
  unsigned int v10; // r13d
  __int64 *v12; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r15
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
  __int64 v25; // rcx
  SIZE_T v26; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 *v31; // rdi
  int v32; // ebx
  char *v33; // r14
  _DWORD *v34; // r15
  SIZE_T v35; // rbp
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  char *v40; // rax
  __int64 v41; // rcx
  char *v42; // rdx
  __int64 v43; // r9
  char *v44; // r12
  char *v45; // rax
  SIZE_T v46; // r10
  _OWORD *v47; // rbx
  __int64 v48; // r8
  __int64 *v49; // rbp
  __int64 v50; // rcx
  __int128 v51; // xmm0
  char *v52; // r9
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // r8
  SIZE_T v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // r11d
  SIZE_T v59; // rcx
  __int64 v60; // r9
  char *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  unsigned int v64; // ebx
  _QWORD *v65; // r15
  __int64 v66; // r12
  unsigned int v67; // r9d
  __int64 v68; // r10
  PIRP Irp; // rax
  int *v70; // rdx
  __int64 v71; // r8
  _DWORD *v72; // rcx
  int v73; // eax
  unsigned int v75; // ecx
  int v76; // eax
  unsigned int v77; // r9d
  __int64 v78; // r8
  __int64 v79; // rax
  char *v80; // r8
  unsigned int v81; // edx
  __int64 v82; // rcx
  char *v83; // rcx
  _QWORD *v84; // rsi
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // [rsp+30h] [rbp-108h]
  char *v88; // [rsp+30h] [rbp-108h]
  unsigned __int64 v89; // [rsp+38h] [rbp-100h]
  __int64 v90; // [rsp+38h] [rbp-100h]
  unsigned __int64 v91; // [rsp+40h] [rbp-F8h]
  _DWORD *v92; // [rsp+40h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v94; // [rsp+50h] [rbp-E8h]
  char *v95; // [rsp+58h] [rbp-E0h]
  _QWORD *v96; // [rsp+60h] [rbp-D8h]
  __int64 *v97; // [rsp+68h] [rbp-D0h] BYREF
  _DWORD *v98; // [rsp+70h] [rbp-C8h]
  __int64 v99; // [rsp+78h] [rbp-C0h]
  __int64 v100; // [rsp+80h] [rbp-B8h]
  signed __int32 v101; // [rsp+88h] [rbp-B0h]
  int v102; // [rsp+8Ch] [rbp-ACh]
  char *v103; // [rsp+90h] [rbp-A8h]
  char *v104; // [rsp+98h] [rbp-A0h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp-98h]
  SIZE_T Size; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v107; // [rsp+B0h] [rbp-88h]
  SIZE_T v108; // [rsp+B8h] [rbp-80h]
  __int64 v109; // [rsp+C0h] [rbp-78h]
  SIZE_T v110; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v111; // [rsp+D0h] [rbp-68h]
  _DWORD *v112; // [rsp+D8h] [rbp-60h]
  char *v113; // [rsp+E0h] [rbp-58h]
  char *v114; // [rsp+E8h] [rbp-50h]
  __int64 v115; // [rsp+F0h] [rbp-48h]

  v9 = a5;
  v10 = 0;
  v97 = 0LL;
  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  if ( a5 )
  {
    v115 = a5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
    v98 = PoolWithTag;
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
            v75 = v23 + v10;
            v76 = -1;
            if ( v23 + v10 >= v10 )
              v76 = v23 + v10;
            v10 = v76;
            if ( v75 >= v17 )
            {
              v77 = 0;
              while ( 1 )
              {
                v78 = *(unsigned int *)(*(_QWORD *)(v19 + 48) + 4LL * v77);
                if ( (unsigned int)v78 >= a5 )
                  break;
                ++v77;
                ++v14[3 * v78 + 2];
                if ( v77 >= *(_DWORD *)(v19 + 40) )
                  goto LABEL_10;
              }
            }
          }
LABEL_65:
          v32 = -1073741811;
          goto LABEL_58;
        }
LABEL_10:
        ;
      }
      v107 = 0LL;
      v100 = 8LL * a5;
      v99 = 264LL * a5;
      v24 = 24LL * v15;
      v25 = v24 + v99;
      if ( a7 > 0 )
      {
        v107 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v25 = v107 + 248;
      }
      v103 = 0LL;
      v91 = 0LL;
      v104 = 0LL;
      v89 = 0LL;
      if ( v10 )
      {
        v79 = 8LL * v10;
        v91 = (v25 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v89 = v79 + v91;
        v25 = v79 + v79 + v91;
      }
      v111 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v102 = a5 * PopFxRuntimeLogNumberEntries;
      NumberOfBytes = v111 + 24LL * a5 * PopFxRuntimeLogNumberEntries;
      v87 = (int)(8 * a5 + 16);
      v94 = (v87 + 40LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v26 = v24 + v94;
      Size = v24 + v94;
      AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, &v97);
      v12 = v97;
      if ( AcpiDeviceByUniqueId >= 0 )
      {
        v31 = v97;
        BugCheckParameter2 = (ULONG_PTR)v97;
        goto LABEL_19;
      }
      if ( AcpiDeviceByUniqueId == -1073741738 )
      {
        v12 = v97;
        v32 = -1073741661;
        goto LABEL_58;
      }
      v30 = PopFxCreateDeviceCommon((__int64)a2, v28, v29, 0, &BugCheckParameter2);
      v31 = (__int64 *)BugCheckParameter2;
      v32 = v30;
      if ( BugCheckParameter2 )
      {
        v26 = Size;
LABEL_19:
        v33 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u);
        if ( !v33 )
        {
          v32 = -1073741670;
          goto LABEL_55;
        }
        v112 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x4D584650u);
        v34 = v112;
        if ( !v112 )
        {
          v32 = -1073741670;
          goto LABEL_54;
        }
        v35 = NumberOfBytes;
        memset(v33, 0, NumberOfBytes);
        v36 = *a3;
        v37 = a3[1];
        *((_DWORD *)v31 + 157) = a5;
        v31[79] = (__int64)v33;
        *((_OWORD *)v31 + 7) = v36;
        v96 = v31 + 79;
        v38 = a3[2];
        *((_OWORD *)v31 + 8) = v37;
        v39 = a3[3];
        *((_OWORD *)v31 + 9) = v38;
        *((_OWORD *)v31 + 10) = v39;
        v31[22] = a6;
        v31[72] = 0LL;
        v31 = (__int64 *)BugCheckParameter2;
        v101 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        *(_DWORD *)(BugCheckParameter2 + 592) = v101;
        *((_DWORD *)v31 + 147) = 5;
        memset(v34, 0, v26);
        v40 = &v33[v100];
        *(_QWORD *)v34 = a8;
        v41 = v99;
        v42 = v40;
        v114 = v40;
        v100 = (__int64)v40;
        v34[2] = a5;
        v95 = &v33[v41];
        if ( v10 )
        {
          v103 = &v33[v91];
          v104 = &v33[v89];
        }
        LODWORD(v43) = 0;
        v113 = (char *)v34 + v87;
        v44 = (char *)v34 + v87;
        v45 = (char *)v34 + v94;
        LODWORD(v94) = 0;
        v88 = v45;
        v46 = v35 - 256;
        v47 = v42 + 48;
        v110 = v35 - 256;
        v92 = v98 + 2;
        v48 = -48LL - (_QWORD)v33;
        v49 = (__int64 *)(a4 + 32);
        v109 = -48LL - (_QWORD)v33;
        v50 = 0LL;
        v99 = -16LL - (_QWORD)v34;
        v90 = 0LL;
        while ( 1 )
        {
          *(_QWORD *)(v50 + *v96) = v42;
          if ( (unsigned __int64)v47 + v48 > v46 )
            goto LABEL_84;
          v51 = *((_OWORD *)v49 - 2);
          *((_DWORD *)v47 - 8) = v43;
          *((_QWORD *)v47 + 4) = v31;
          *(_OWORD *)v42 = v51;
          *(_QWORD *)v47 = v42;
          *((_QWORD *)v47 - 1) = PopFxComponentWork;
          *((_QWORD *)v47 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v47 + 56), NotificationEvent, 1u);
          v52 = v95;
          *((_QWORD *)v47 + 10) = 0LL;
          *((_DWORD *)v47 + 27) = *((_DWORD *)v49 - 1);
          *((_QWORD *)v47 + 14) = v52;
          v53 = *((_DWORD *)v49 - 2);
          *((_DWORD *)v47 + 41) = -1;
          *((_DWORD *)v47 + 30) = v53;
          *((_DWORD *)v47 + 42) = v101;
          *((_QWORD *)v47 + 19) = 0LL;
          v54 = *((_DWORD *)v49 + 2);
          if ( v54 )
          {
            v80 = v103;
            v81 = 0;
            *((_QWORD *)v47 + 16) = v103;
            *((_DWORD *)v47 + 31) = v54;
            do
            {
              v82 = v81++;
              *(_DWORD *)v80 = *(_DWORD *)(v49[2] + 4 * v82);
              v80 += 8;
            }
            while ( v81 < *((_DWORD *)v47 + 31) );
            v103 = v80;
          }
          v55 = v92;
          if ( *v92 )
          {
            v83 = v104;
            *((_QWORD *)v47 + 18) = v104;
            v104 = &v83[8 * *v92];
          }
          v56 = Size;
          v57 = v99 + 16;
          *(_QWORD *)&v34[v90 + 4] = v44;
          if ( (unsigned __int64)&v44[v57] > v56 - 40 )
            goto LABEL_84;
          v58 = 0;
          *(_OWORD *)v44 = *((_OWORD *)v49 - 2);
          *((_QWORD *)v44 + 2) = *(v49 - 2);
          *((_DWORD *)v44 + 7) = *((_DWORD *)v49 - 1);
          *((_QWORD *)v44 + 4) = v88;
          *((_DWORD *)v44 + 6) = *((_DWORD *)v49 - 2);
          if ( *((_DWORD *)v47 + 27) )
            break;
LABEL_36:
          v42 = (char *)(v100 + 256);
          v43 = (unsigned int)(v94 + 1);
          v50 = v90 * 4 + 8;
          v100 += 256LL;
          LODWORD(v94) = v43;
          v47 += 16;
          v90 += 2LL;
          v44 += 40;
          v92 = v55 + 3;
          v49 += 7;
          if ( (unsigned int)v43 >= a5 )
          {
            *((_DWORD *)v31 + 160) = v102;
            v31[81] = (__int64)&v33[v111];
            if ( v10 )
            {
              v32 = PopFxVerifyDependencies(v98, v31, a5, v43);
              if ( v32 < 0 )
                goto LABEL_53;
            }
            v64 = 0;
            v65 = v96;
            v66 = 0LL;
            do
            {
              v67 = 0;
              v68 = *(_QWORD *)(v66 + *v65);
              if ( *(_DWORD *)(v68 + 172) )
              {
                v84 = v96;
                do
                {
                  v85 = *(_QWORD *)(*v84 + 8LL * *(unsigned int *)(*(_QWORD *)(v68 + 176) + 8LL * v67));
                  v86 = *(unsigned int *)(v85 + 188);
                  *(_DWORD *)(*(_QWORD *)(v85 + 192) + 8 * v86) = v64;
                  *(_DWORD *)(*(_QWORD *)(v85 + 192) + 8 * v86 + 4) = v67++;
                  ++*(_DWORD *)(v85 + 188);
                }
                while ( v67 < *(_DWORD *)(v68 + 172) );
                v9 = a5;
                v65 = v96;
              }
              PopFxActivateComponent((ULONG_PTR)v31, v68, 0);
              ++v64;
              v66 += 8LL;
            }
            while ( v64 < v9 );
            v34 = v112;
            if ( a7 <= 0 || (v31[3] = (__int64)&v33[v107], Irp = IoAllocateIrp(a7 + 2, 0), (v31[2] = (__int64)Irp) != 0) )
            {
              if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v31, (int)v34) )
                PopFxBugCheck(0x601uLL, (ULONG_PTR)v31, (ULONG_PTR)v34, 0LL);
              if ( v9 )
              {
                v70 = (int *)(v113 + 28);
                v71 = v115;
                v72 = v114 + 92;
                do
                {
                  if ( (*(_BYTE *)(v70 - 3) & 2) != 0 )
                    *v72 |= 2u;
                  v73 = *v70;
                  v70 += 10;
                  v72[16] = v73;
                  v72 += 64;
                  --v71;
                }
                while ( v71 );
                v31 = (__int64 *)BugCheckParameter2;
              }
              v33 = 0LL;
              v32 = 0;
              *a9 = v31;
              v31 = 0LL;
LABEL_53:
              ExFreePoolWithTag(v34, 0x4D584650u);
              v12 = v97;
LABEL_54:
              v14 = v98;
LABEL_55:
              if ( v31 && !v12 )
                ExFreePoolWithTag(v31, 0x4D584650u);
              if ( v33 )
                ExFreePoolWithTag(v33, 0x4D584650u);
              goto LABEL_58;
            }
LABEL_84:
            v32 = -1073741670;
            goto LABEL_53;
          }
          v48 = v109;
          v46 = v110;
        }
        v59 = NumberOfBytes - 24;
        v108 = NumberOfBytes - 24;
        while ( v52 - v33 <= v59 )
        {
          v60 = *v49;
          v61 = v95;
          v62 = 3LL * v58;
          *((_DWORD *)v95 + 4) = *(_DWORD *)(*v49 + 24LL * v58 + 16);
          *(_QWORD *)v61 = *(_QWORD *)(v60 + 24LL * v58);
          *((_QWORD *)v61 + 1) = *(_QWORD *)(v60 + 24LL * v58 + 8);
          v95 = v61 + 24;
          if ( (unsigned __int64)&v88[v99 + 16] > v56 - 24 )
            break;
          ++v58;
          *((_DWORD *)v88 + 4) = *(_DWORD *)(v60 + 8 * v62 + 16);
          *(_QWORD *)v88 = *(_QWORD *)(v60 + 8 * v62);
          v63 = *(_QWORD *)(v60 + 8 * v62 + 8);
          v52 = v95;
          *((_QWORD *)v88 + 1) = v63;
          v88 += 24;
          v59 = v108;
          if ( v58 >= *((_DWORD *)v47 + 27) )
          {
            v55 = v92;
            goto LABEL_36;
          }
        }
        goto LABEL_84;
      }
LABEL_58:
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
