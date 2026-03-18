/*
 * XREFs of PopPepDeviceDState @ 0x140166F3C
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140165D00 (PoFxReportDevicePoweredOn.c)
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14016C0E4 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140276D20 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140276DFC (PopFxUpdateDeviceAccountingEnhanced.c)
 */

void __fastcall PopPepDeviceDState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  char v5; // bl
  char v6; // r12
  unsigned int v9; // r13d
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  bool v18; // cl
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]
  char v25; // [rsp+2Dh] [rbp-3Bh]
  unsigned int v26; // [rsp+70h] [rbp+8h]
  unsigned int v27; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(a1, 4LL, a3);
    }
  }
  else if ( (int)a2 > 1 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
    PopPepUpdateConstraints(a1, 4LL, 0LL);
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    if ( a2 == 4 )
      v9 = 0;
    else
      v9 = *(_DWORD *)(a1 + 4LL * (int)(a2 - 1) + 144);
    v10 = *(_DWORD *)(a1 + 168);
    v27 = v9;
    if ( v10 == 4 )
      v11 = 0;
    else
      v11 = *(_DWORD *)(a1 + 4LL * (v10 - 1) + 144);
    v26 = v11;
    if ( !v6 && v10 != a2 )
    {
      if ( a2 == 1 )
      {
        v12 = 0;
        if ( *(_DWORD *)(a1 + 180) )
        {
          do
          {
            v13 = 200LL * v12;
            v14 = *(unsigned int *)(v13 + a1 + 360);
            PopPepUpdateIdleStateRefCount(0LL, *(unsigned int *)(*(_QWORD *)(v13 + a1 + 376) + 24 * v14 + 16), 1LL);
            PopFxUpdateComponentAccountingEnhanced(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v13 + a1 + 192),
              (unsigned int)v14,
              0LL);
            ++v12;
          }
          while ( v12 < *(_DWORD *)(a1 + 180) );
          v11 = v26;
          v5 = a4;
        }
        v9 = v27;
      }
      PopPepUpdateIdleStateRefCount(v11, v9, 1LL);
      PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), a2, 0LL);
    }
    v15 = *(_QWORD *)(a1 + 32);
    v23 = a2;
    v24 = v6;
    v25 = v5;
    v22 = *(_QWORD *)(v15 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 64) + 96LL))(5LL, &v22);
    if ( v6 )
    {
      v17 = *(_DWORD *)(a1 + 168);
      if ( v17 != a2 )
      {
        v18 = 0;
        if ( PopFxPerfQueryOnDevicePowerChanges )
        {
          if ( *(_BYTE *)(a1 + 177) )
            goto LABEL_31;
          if ( *(_BYTE *)(a1 + 176) )
            v18 = a2 == 1;
          if ( v18 )
          {
LABEL_31:
            v19 = 0;
            if ( *(_DWORD *)(a1 + 180) )
            {
              do
              {
                v20 = 200LL * v19;
                if ( *(_BYTE *)(v20 + a1 + 368) )
                {
                  LOBYTE(v16) = 1;
                  PopFxUpdateComponentPerfStateNominalChange(
                    *(_QWORD *)(a1 + 32),
                    *(unsigned int *)(v20 + a1 + 192),
                    v16,
                    a2);
                }
                ++v19;
              }
              while ( v19 < *(_DWORD *)(a1 + 180) );
              v17 = *(_DWORD *)(a1 + 168);
            }
          }
        }
        if ( v17 == 1 && *(_DWORD *)(a1 + 180) )
        {
          do
          {
            v21 = 200LL * v4;
            PopPepUpdateIdleStateRefCount(
              *(unsigned int *)(*(_QWORD *)(v21 + a1 + 376) + 24LL * *(unsigned int *)(v21 + a1 + 360) + 16),
              0LL,
              0LL);
            PopFxUpdateComponentAccountingEnhanced(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v21 + a1 + 192),
              (unsigned int)(*(_DWORD *)(v21 + a1 + 372) - 1),
              1LL);
            ++v4;
          }
          while ( v4 < *(_DWORD *)(a1 + 180) );
        }
        PopPepUpdateIdleStateRefCount(v11, v9, 0LL);
        PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), a2, 1LL);
        *(_DWORD *)(a1 + 168) = a2;
      }
    }
  }
}
