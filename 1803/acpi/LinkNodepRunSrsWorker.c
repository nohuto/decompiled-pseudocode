/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C0057B00
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C0057A54 (LinkNodepRunSrsAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, char *a4)
{
  int v5; // edi
  char v6; // bp
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // r8
  const void *v16; // r12
  unsigned __int16 v17; // si
  int v18; // r14d
  char v19; // r15
  char v20; // r13
  char i; // cl
  unsigned __int16 v22; // dx
  unsigned int v23; // r14d
  PVOID PoolWithTag; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  char *j; // rax
  __int64 *v28; // rsi
  __int64 v29; // [rsp+80h] [rbp+8h]

  v29 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 >= 0 )
  {
    v7 = 1;
    _InterlockedAdd((volatile signed __int32 *)a4 + 9, 1u);
    v8 = *((_DWORD *)a4 + 8);
    v5 = 0;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          KeBugCheckEx(0xA3u, 1uLL, 0x50951uLL, 0LL, 0LL);
LABEL_45:
        ExFreePoolWithTag(*((PVOID *)a4 + 3), 0);
        goto LABEL_46;
      }
    }
    else
    {
      v10 = *(_QWORD *)a4;
      *((_DWORD *)a4 + 8) = 1;
      v11 = ACPIGet(
              v10,
              0x5352505Fu,
              738263048,
              0LL,
              0,
              (__int64)LinkNodepRunSrsWorker,
              (__int64)a4,
              (__int64)(a4 + 16),
              0LL);
      v5 = v11;
      if ( v11 == 259 )
        return 259LL;
      if ( v11 < 0 )
        goto LABEL_46;
      LOBYTE(v5) = 0;
    }
    v13 = *((_QWORD *)a4 + 2);
    *((_DWORD *)a4 + 8) = 2;
    if ( v13 )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        13,
        (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
        v13);
      v14 = 0;
      v15 = *((_QWORD *)a4 + 2);
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      for ( i = *(_BYTE *)v15; i; i = *(_BYTE *)v15 )
      {
        if ( i < 0 )
        {
          v22 = *(_WORD *)(v15 + 1) + 3;
        }
        else
        {
          v22 = (i & 7) + 1;
          i &= 0x78u;
        }
        if ( i == 120 )
        {
          v18 += v22;
          v19 = v5;
          if ( v22 > 1u )
            v19 = 1;
          break;
        }
        if ( i == 32 || i == -119 )
        {
          v16 = (const void *)v15;
          if ( i == -119 )
          {
            v17 = 9;
            v20 = 1;
          }
          else
          {
            v17 = v22;
          }
          v14 = 1;
          v18 += v17;
        }
        v15 += v22;
      }
      if ( v14 )
      {
        v23 = v18 + 1;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x41706341u);
        *((_QWORD *)a4 + 3) = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v16, v17);
          ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
          v25 = *((_QWORD *)a4 + 3);
          if ( v20 )
          {
            *(_BYTE *)(v25 + 4) = 1;
            *(_WORD *)(v25 + 1) = v17 - 3;
            *(_DWORD *)(v25 + 5) = *((_DWORD *)a4 + 2);
          }
          else
          {
            *(_WORD *)(v25 + 1) = 1 << *((_DWORD *)a4 + 2);
          }
          v26 = *((_QWORD *)a4 + 3);
          *(_BYTE *)(v17 + v26) = 120;
          if ( v19 )
          {
            *(_BYTE *)(v17 + v26) = 121;
            for ( j = (char *)*((_QWORD *)a4 + 3); *j != 121; ++j )
              v6 = *j;
            *(_BYTE *)(v17 + v26 + 1) = -v6;
          }
          v28 = AMLIGetNamedChild(*(_QWORD **)a4, 1397904223);
          if ( v28 )
          {
            *((_QWORD *)a4 + 9) = *((_QWORD *)a4 + 3);
            *((_WORD *)a4 + 21) = 3;
            *((_DWORD *)a4 + 16) = v23;
            v5 = AMLIAsyncEvalObject(v28, 0LL, 1u, a4 + 40, LinkNodepRunSrsWorker, a4);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v28);
            result = 259LL;
            if ( v5 == 259 )
              return result;
            if ( v5 < 0 )
              goto LABEL_46;
            v5 = 0;
            goto LABEL_45;
          }
          v5 = -1073741772;
          ExFreePoolWithTag(*((PVOID *)a4 + 3), 0);
        }
        else
        {
          ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
          v5 = -1073741670;
        }
      }
      else
      {
        ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
        v5 = -1073741275;
      }
    }
    else
    {
      v5 = -1073741772;
    }
LABEL_46:
    a1 = v29;
  }
  if ( *((_DWORD *)a4 + 9) )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 10))(a1, (unsigned int)v5, 0LL, *((_QWORD *)a4 + 11));
  ExFreePoolWithTag(a4, 0);
  return (unsigned int)v5;
}
