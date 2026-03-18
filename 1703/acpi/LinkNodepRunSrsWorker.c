/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C0062EA0
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C0062DF4 (LinkNodepRunSrsAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  char v6; // bp
  int v7; // ecx
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  int v9; // ecx
  __int64 *v10; // rcx
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
  char v21; // cl
  unsigned __int16 v22; // dx
  unsigned int v23; // r14d
  PVOID PoolWithTag; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  char *i; // rax
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // [rsp+80h] [rbp+8h]

  v30 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 >= 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a4 + 36), 1u);
    v7 = *(_DWORD *)(a4 + 32);
    v8 = LinkNodepRunSrsWorker;
    v5 = 0;
    if ( v7 )
    {
      v9 = v7 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          KeBugCheckEx(0xA3u, 1uLL, 0x50951uLL, 0LL, 0LL);
LABEL_43:
        ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
        goto LABEL_45;
      }
    }
    else
    {
      v10 = *(__int64 **)a4;
      *(_DWORD *)(a4 + 32) = 1;
      v11 = ACPIGet(v10, 1397903455, 738263048, 0LL, 0, (__int64)LinkNodepRunSrsWorker, a4, a4 + 16, 0LL);
      v5 = v11;
      if ( v11 == 259 )
        return 259LL;
      if ( v11 < 0 )
        goto LABEL_45;
      LOBYTE(v5) = 0;
    }
    v13 = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 32) = 2;
    if ( v13 )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        20,
        13,
        (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
        v13);
      v14 = 0;
      v15 = *(_QWORD *)(a4 + 16);
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = *(_BYTE *)v15;
      if ( !*(_BYTE *)v15 )
        goto LABEL_44;
      while ( 1 )
      {
        if ( v21 < 0 )
        {
          v22 = *(_WORD *)(v15 + 1) + 3;
        }
        else
        {
          v22 = (v21 & 7) + 1;
          v21 &= 0x78u;
        }
        if ( v21 == 120 )
          break;
        if ( v21 == 32 || v21 == -119 )
        {
          v16 = (const void *)v15;
          if ( v21 == -119 )
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
        v21 = *(_BYTE *)v15;
        if ( !*(_BYTE *)v15 )
          goto LABEL_27;
      }
      v18 += v22;
      v19 = v5;
      if ( v22 > 1u )
        v19 = 1;
LABEL_27:
      if ( !v14 )
      {
LABEL_44:
        ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
        v5 = -1073741275;
        goto LABEL_45;
      }
      v23 = v18 + 1;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x41706341u);
      *(_QWORD *)(a4 + 24) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v16, v17);
        ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
        if ( v20 )
        {
          v25 = *(_QWORD *)(a4 + 24);
          *(_WORD *)(v25 + 1) = v17 - 3;
          *(_BYTE *)(v25 + 4) = 1;
          *(_DWORD *)(v25 + 5) = *(_DWORD *)(a4 + 8);
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a4 + 24) + 1LL) = 1 << *(_DWORD *)(a4 + 8);
        }
        v26 = *(_QWORD *)(a4 + 24);
        *(_BYTE *)(v17 + v26) = 120;
        if ( v19 )
        {
          *(_BYTE *)(v17 + v26) = 121;
          for ( i = *(char **)(a4 + 24); *i != 121; ++i )
            v6 = *i;
          *(_BYTE *)(v17 + v26 + 1) = -v6;
        }
        v28 = AMLIGetNamedChild(*(__int64 **)a4, 1397904223);
        if ( v28 )
        {
          *(_WORD *)(a4 + 42) = 3;
          *(_QWORD *)(a4 + 72) = *(_QWORD *)(a4 + 24);
          *(_DWORD *)(a4 + 64) = v23;
          v5 = AMLIAsyncEvalObject(v28, 0LL, 1u, a4 + 40, LinkNodepRunSrsWorker, a4);
          AMLIDereferenceHandleEx((volatile signed __int32 *)v28, v29);
          result = 259LL;
          if ( v5 == 259 )
            return result;
          if ( v5 < 0 )
            goto LABEL_45;
          v5 = 0;
          goto LABEL_43;
        }
        v5 = -1073741772;
        ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741772;
    }
LABEL_45:
    a1 = v30;
  }
  if ( *(_DWORD *)(a4 + 36) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a4 + 80))(a1, (unsigned int)v5, 0LL, *(_QWORD *)(a4 + 88));
  ExFreePoolWithTag((PVOID)a4, 0);
  return (unsigned int)v5;
}
