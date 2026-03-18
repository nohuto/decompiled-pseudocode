/*
 * XREFs of ?SendReportToE3@CEnergyReporter@@AEAAX_K@Z @ 0x18014425C
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z @ 0x1801319C4 (-WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x18019CE38 (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 */

void __fastcall CEnergyReporter::SendReportToE3(void **this, int a2)
{
  unsigned int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // eax
  unsigned __int8 v11; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int8 v12; // [rsp+31h] [rbp-98h] BYREF
  unsigned __int8 v13; // [rsp+32h] [rbp-97h] BYREF
  int v14; // [rsp+34h] [rbp-95h] BYREF
  _WORD v15[2]; // [rsp+38h] [rbp-91h] BYREF
  int v16; // [rsp+3Ch] [rbp-8Dh]
  __int64 v17; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+48h] [rbp-81h]
  int v19; // [rsp+4Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  int *v21; // [rsp+70h] [rbp-59h]
  __int64 v22; // [rsp+78h] [rbp-51h]
  unsigned __int8 *v23; // [rsp+80h] [rbp-49h]
  __int64 v24; // [rsp+88h] [rbp-41h]
  unsigned __int8 *v25; // [rsp+90h] [rbp-39h]
  __int64 v26; // [rsp+98h] [rbp-31h]
  unsigned __int8 *v27; // [rsp+A0h] [rbp-29h]
  __int64 v28; // [rsp+A8h] [rbp-21h]
  __int64 *v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  int *v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]

  qsort(this[1], *((unsigned int *)this + 8), 8uLL, CProcessAttribution::CompareByProcess);
  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
  {
    v5 = *((_QWORD *)this[1] + i);
    v6 = *(_QWORD *)(v5 + 16);
    v14 = *(_DWORD *)(v5 + 32);
    v11 = *(_BYTE *)(v5 + 37);
    v12 = *(_BYTE *)(v5 + 38);
    v13 = *(_BYTE *)(v5 + 39);
    while ( 1 )
    {
      *(_WORD *)(v5 + 37) = 0;
      *(_BYTE *)(v5 + 39) = 0;
      *(_BYTE *)(v5 + 36) = 0;
      CMILRefCountBase::Release((CMILRefCountBase *)v5);
      if ( i >= *((_DWORD *)this + 8) - 1 )
        break;
      v5 = *((_QWORD *)this[1] + i + 1);
      if ( *(_DWORD *)(v5 + 32) != v14 || *(_QWORD *)(v5 + 16) != v6 )
        break;
      v11 |= *(_BYTE *)(v5 + 37);
      v12 |= *(_BYTE *)(v5 + 38);
      v13 |= *(_BYTE *)(v5 + 39);
      ++i;
    }
    v17 = v6;
    v18 = v14;
    v15[0] = v13;
    v15[1] = v11;
    v16 = v12;
    v19 = a2;
    if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 1uLL) )
    {
      v22 = 4LL;
      v21 = &v14;
      v23 = &v11;
      v25 = &v12;
      v27 = &v13;
      v29 = &v17;
      v31 = &v19;
      v24 = v7;
      v26 = v7;
      v28 = v7;
      v30 = 8LL;
      v32 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F67A9, v8, v9, 8u, &pData);
    }
    DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(this + 5, v15);
  }
  v10 = *((_DWORD *)this + 16);
  if ( v10 > 0xFFFF )
    v10 = 0xFFFF;
  SetCITInfo((((unsigned __int64)v10 << 16) ^ 2) & 0xFFFF0000 ^ 2, this[5]);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 16) = 0;
}
