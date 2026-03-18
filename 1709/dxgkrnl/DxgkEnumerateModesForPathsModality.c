/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1C01C2A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0016174 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00B9388 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00DEFAC (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C01F6C74 (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C01F77D0 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        unsigned int a3,
        PVOID *a4,
        _DWORD *a5)
{
  int v8; // ebx
  __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  SIZE_T v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 i; // rdi
  __int64 v23; // r10
  unsigned int v24; // edx
  __int64 v25; // r10
  PVOID BaseAddress; // [rsp+30h] [rbp-138h] BYREF
  int v28; // [rsp+38h] [rbp-130h]
  int v29; // [rsp+3Ch] [rbp-12Ch]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v31[48]; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v32; // [rsp+78h] [rbp-F0h]
  _BYTE v33[64]; // [rsp+80h] [rbp-E8h] BYREF
  int v34; // [rsp+C0h] [rbp-A8h]
  int v35; // [rsp+C4h] [rbp-A4h]
  int v36; // [rsp+CCh] [rbp-9Ch]
  char v37; // [rsp+D8h] [rbp-90h]
  unsigned int v38; // [rsp+DCh] [rbp-8Ch]
  struct D3DKMT_GETPATHSMODALITY *v39[9]; // [rsp+E0h] [rbp-88h] BYREF
  int v40; // [rsp+12Ch] [rbp-3Ch]

  v8 = a1;
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (a1 & 0xFFFD7FFF) != 0 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v9 + 24) = 267LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v39, a2);
    v10 = v40;
    if ( (v8 & 0x8000) != 0 )
      v40 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v31);
    v11 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v39,
            v8 | 0x40000u,
            a3,
            (struct CCD_MODE_RESULT_SET *)v31);
    v13 = v11;
    if ( v11 >= 0 )
    {
      LODWORD(v13) = 0;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdError(v14);
    }
    if ( (int)v13 >= 0 )
    {
      v15 = v32;
      v16 = 72LL * v32;
      v17 = 0xFFFFFFFFLL;
      if ( v16 <= 0xFFFFFFFF )
        v17 = (unsigned int)v16;
      v29 = v17;
      if ( v16 > 0xFFFFFFFF )
      {
        v18 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v18 + 24) = v15;
        WdLogEvent5_WdError(v18);
        LODWORD(v13) = -1073741675;
LABEL_23:
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v31);
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v39);
        return (unsigned int)v13;
      }
      BaseAddress = 0LL;
      v19 = (unsigned int)v17;
      RegionSize = (unsigned int)v17;
      LODWORD(v13) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v13 < 0 )
      {
        v21 = WdLogNewEntry5_WdLowResource(v20);
        *(_QWORD *)(v21 + 24) = v15;
        WdLogEvent5_WdLowResource(v21);
        LODWORD(v13) = -1073741670;
        goto LABEL_23;
      }
      ProbeForWrite(BaseAddress, v19, 1u);
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v28 = i;
        if ( (unsigned int)i >= (unsigned int)v15
          || !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v31,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v33) )
        {
          break;
        }
        v23 = 9 * i;
        *((_DWORD *)BaseAddress + 2 * v23 + 12) = v34;
        *((_DWORD *)BaseAddress + 2 * v23 + 13) = v35;
        *((_DWORD *)BaseAddress + 2 * v23 + 14) = v36;
        *((_BYTE *)BaseAddress + 8 * v23 + 60) = v37;
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v33, (__int64)BaseAddress + 72 * i);
        v24 = v38 >> 2;
        *((_DWORD *)BaseAddress + 2 * v25 + 16) ^= ((unsigned __int8)(v38 >> 2) ^ (unsigned __int8)*((_DWORD *)BaseAddress + 2 * v25 + 16)) & 0x3F;
        *((_DWORD *)BaseAddress + 2 * v25 + 16) ^= (v24 ^ *((_DWORD *)BaseAddress + 2 * v25 + 16)) & 0xFC0000;
        *((_DWORD *)BaseAddress + 2 * v25 + 16) ^= (v24 ^ *((_DWORD *)BaseAddress + 2 * v25 + 16)) & 0x3F000;
        *((_DWORD *)BaseAddress + 2 * v25 + 16) ^= ((unsigned __int16)v24 ^ (unsigned __int16)*((_DWORD *)BaseAddress
                                                                                              + 2 * v25
                                                                                              + 16)) & 0xFC0;
        *((_DWORD *)BaseAddress + 2 * v25 + 16) ^= (v24 ^ *((_DWORD *)BaseAddress + 2 * v25 + 16)) & 0x3F000000;
      }
      *a4 = BaseAddress;
      *a5 = v15;
    }
    v40 = v10;
    goto LABEL_23;
  }
  return 3221225485LL;
}
