/*
 * XREFs of SmcStoreCreate @ 0x14073C98C
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x140739C18 (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmStoreCreate @ 0x140739074 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x14073A658 (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x14073AC64 (SmKmRegParamsLoad.c)
 *     SmcCacheReference @ 0x14073C544 (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x14073D130 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x14073D1CC (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x14073D274 (SmcStoreSlotReserve.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r15
  struct _EX_RUNDOWN_REF v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  struct _PRIVILEGE_SET *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v22; // [rsp+28h] [rbp-81h] BYREF
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-79h] BYREF
  char NumberOfBytes_4; // [rsp+34h] [rbp-75h]
  int v25; // [rsp+38h] [rbp-71h] BYREF
  __int64 v26; // [rsp+40h] [rbp-69h]
  _OWORD v27[5]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v28[8]; // [rsp+98h] [rbp-11h] BYREF
  char v29; // [rsp+120h] [rbp+77h]

  v29 = a4;
  memset(v27, 0, 0x48uLL);
  v9 = 0LL;
  v22 = 0;
  v10.Count = SmcCacheReference(a1, a4).Count;
  if ( !v10.Count )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v10.Count + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_23;
  }
  v12 = SmcStoreSlotReserve(v10.Count);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v10.Count + 8);
    v27[0] = *(_OWORD *)a3;
    HIDWORD(v27[0]) = v13;
    DWORD2(v27[1]) = *(_DWORD *)(v10.Count + 4);
    v14 = (LOWORD(v27[0]) ^ ((unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13)) & 0x6000 ^ LOWORD(v27[0]);
    v15 = *(_DWORD *)(v10.Count + 32);
    LODWORD(v27[0]) ^= (LOWORD(v27[0]) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13)) & 0x6000;
    LODWORD(v27[1]) = v15;
    memset(v28, 0, sizeof(v28));
    v28[0] = *(_QWORD *)(v10.Count + 40);
    v28[1] = *(_QWORD *)(v10.Count + 48);
    v28[2] = *(_QWORD *)(v10.Count + 56);
    v28[3] = *(_QWORD *)(v10.Count + 64);
    v28[6] = *(_QWORD *)(v10.Count + 88);
    LODWORD(v28[7]) = *(_DWORD *)(v10.Count + 96);
    *(_QWORD *)&v27[3] = v28;
    v11 = SmKmRegParamsLoad((__int64)&NumberOfBytes);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v10.Count + 28) & 1) == 0 )
      {
        v16 = NumberOfBytes_4 & 3;
        if ( v16 == 2 || v16 == 1 && (v14 & 0x800) != 0 )
        {
          v17 = 0;
          goto LABEL_19;
        }
      }
      v17 = NumberOfBytes;
      v18 = (struct _PRIVILEGE_SET *)SmAlloc(NumberOfBytes, 0x4B456D73u);
      v9 = v18;
      if ( v18 )
      {
        v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10.Count + 552), v18, v17);
        if ( v11 >= 0 )
        {
LABEL_19:
          v19 = *(_QWORD *)(v12 + 8);
          v25 = *(_DWORD *)(v10.Count + 8);
          *(_QWORD *)&v27[4] = &v25;
          v26 = v19;
          *((_QWORD *)&v27[3] + 1) = v10.Count + 104;
          *(_QWORD *)&v27[2] = v9;
          DWORD2(v27[2]) = v17;
          v11 = SmStoreCreate(a2, (__int64)v27, &v22);
          if ( v11 >= 0 )
          {
            v20 = v22;
            SmcStoreSlotCommit(v10.Count, v12, v22, a2);
            v12 = 0LL;
            v11 = 0;
            *a5 = v20;
          }
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    if ( v12 )
      SmcStoreSlotAbort(v10.Count, v12, 0LL);
    goto LABEL_23;
  }
  v11 = -1073741697;
LABEL_23:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v29 & 0xF) + a1 + 8));
  if ( v9 )
    MiDeleteSubsection(v9);
  return (unsigned int)v11;
}
