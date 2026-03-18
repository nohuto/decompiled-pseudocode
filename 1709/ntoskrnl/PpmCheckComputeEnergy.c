/*
 * XREFs of PpmCheckComputeEnergy @ 0x14008F1B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned __int64 v0; // r8
  unsigned __int16 v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  ULONG v15; // r14d
  REGHANDLE v16; // r15
  __int64 Prcb; // rax
  unsigned int v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h]
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-11h]
  _QWORD v23[3]; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 *v26; // [rsp+A0h] [rbp+2Fh]
  __int64 v27; // [rsp+A8h] [rbp+37h]

  if ( PopComputeEnergy )
  {
    v0 = qword_140401408[0];
    v20 = 0x4000000040LL;
    v1 = 0;
    v23[0] = 0LL;
    v23[1] = 0LL;
    v22[0] = 0LL;
    v22[1] = 0LL;
    while ( v0 )
    {
LABEL_4:
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      {
        v4 = 0LL;
      }
      else
      {
        _mm_lfence();
        v4 = KiProcessorBlock[v3];
      }
      v5 = *(unsigned __int8 *)(v4 + 23858);
      v6 = 4 * v5;
      *((_DWORD *)&v20 + v5) = v3;
      v7 = v5;
      v23[v7] += *(_QWORD *)(v4 + 24264);
      v22[v7] += *(_QWORD *)(v4 + 24272);
      v8 = *(_QWORD *)(v4 + 24176);
      v9 = *(_QWORD *)(v4 + 24184);
      if ( v8 && v9 )
      {
        if ( *(_BYTE *)(v9 + 100) )
        {
          v10 = *(_DWORD *)(v9 + 116);
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 72);
          v11 = *(_DWORD *)(v8 + 368);
          if ( v10 >= v11 )
            v10 = v11;
        }
      }
      else
      {
        v10 = 100;
      }
      *(_DWORD *)((char *)&v23[2] + v6) = v10;
      *(_QWORD *)(v4 + 24264) = 0LL;
      *(_QWORD *)(v4 + 24272) = 0LL;
    }
    while ( ++v1 < (unsigned int)(unsigned __int16)KeActiveProcessors )
    {
      v0 = qword_140401408[v1];
      if ( v0 )
        goto LABEL_4;
    }
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v15 = *(_DWORD *)((char *)&v20 + v13);
      if ( v15 != 64 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))PopComputeEnergy)(
          v12,
          v23[v14],
          v22[v14],
          *(unsigned int *)((char *)&v23[2] + v13),
          &v21);
        v24 = v21;
        v19 = v12;
        if ( PpmEtwRegistered )
        {
          v16 = PpmEtwHandle;
          if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY) )
          {
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v19;
            v27 = 8LL;
            v26 = &v24;
            EtwWriteEx(v16, &PPM_ETW_COMPUTE_ENERGY, 0LL, 0, 0LL, 0LL, 2u, &UserData);
          }
        }
        Prcb = KeGetPrcb(v15);
        *(_QWORD *)(Prcb + 24256) += v21;
      }
      ++v12;
      v13 += 4LL;
      ++v14;
    }
    while ( v12 < 2 );
  }
  return 1;
}
