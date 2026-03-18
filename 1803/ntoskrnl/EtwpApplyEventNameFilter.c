/*
 * XREFs of EtwpApplyEventNameFilter @ 0x1402B29A4
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x1402B2D6C (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1402B3004 (EtwpGetEventNameFromEventMetadata.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r12
  void **v11; // rsi
  unsigned __int8 CurrentIrql; // r15
  char v13; // di
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  char *v17; // r8
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // rsi
  __int64 v21; // rcx
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int8 v25; // al
  __int64 EventNameFromEventMetadata; // rax
  bool v27; // zf
  char v29; // [rsp+20h] [rbp+0h] BYREF
  char v30; // [rsp+21h] [rbp+1h]
  unsigned __int16 v31; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v33; // [rsp+30h] [rbp+10h]
  void **v34; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  P = 0LL;
  v11 = 0LL;
  v34 = 0LL;
  CurrentIrql = 0;
  v30 = 0;
  v13 = 1;
  v29 = 1;
  if ( a5 )
  {
    v14 = 16LL * a3;
    if ( v14 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + a4 > 0x7FFFFFFF0000LL || v14 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v15 = 0;
  v33 = 0;
  while ( v15 < a3 )
  {
    if ( *(_BYTE *)(16LL * v15 + a4 + 12) == 1 )
    {
      v11 = (void **)(a4 + 16LL * v15);
      if ( a6 >= 2u )
      {
        v34 = (void **)(a4 + 16LL * v15);
        P = *v11;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v11;
        v11 = Src;
        v34 = Src;
        v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v16 >= 0xFFFF )
        {
          v13 = 0;
          v29 = 0;
          goto LABEL_58;
        }
        if ( a5 )
        {
          if ( v16 )
          {
            v17 = (char *)Src[0] + v16;
            if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v16 = (unsigned int)Src[1];
            }
          }
        }
        if ( v16 <= 0x100 )
        {
          v18 = v16 + 15LL;
          if ( v18 < v16 )
            v18 = 0xFFFFFFFFFFFFFF0LL;
          v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
          P = &v29;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74777445u);
          if ( !P )
          {
            v29 = 1;
            goto LABEL_58;
          }
          v30 = 1;
          v16 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v16);
      }
      break;
    }
    v33 = ++v15;
  }
  if ( v11 && P )
  {
    if ( a6 < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v20 = *(_QWORD *)(a1 + 368);
    if ( v20 )
    {
      v21 = 96 * v9;
      if ( a9 )
        v22 = *(_BYTE **)(v21 + v20 + 48);
      else
        v22 = *(_BYTE **)(v21 + v20 + 88);
      if ( !v22 )
        goto LABEL_57;
      v23 = 0LL;
      v24 = *(_QWORD *)(a1 + 368);
      if ( !v24 )
        goto LABEL_57;
      if ( a9 )
      {
        if ( (*(_DWORD *)(v21 + v24) & 0x80002000) == 0x80002000 )
          v23 = *(_QWORD *)(v21 + v24 + 48);
      }
      else if ( (*(_DWORD *)(v21 + v24) & 0x80000400) == 0x80000400 )
      {
        v23 = *(_QWORD *)(v21 + v24 + 88);
      }
      if ( v23
        && ((v25 = *(_BYTE *)(v23 + 1), a7 <= v25) || !v25)
        && (!a8 || (*(_QWORD *)(v23 + 8) & a8) != 0 && (a8 & *(_QWORD *)(v23 + 16)) == *(_QWORD *)(v23 + 16)) )
      {
        EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v34 + 2), &v31);
        if ( EventNameFromEventMetadata )
        {
          if ( v31 )
            v27 = *v22 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v31, v22);
          else
            v27 = *v22 == 0;
          v13 = v27;
        }
      }
      else
      {
LABEL_57:
        v13 = v29;
      }
    }
    if ( a6 < 2u )
      __writecr8(CurrentIrql);
  }
LABEL_58:
  if ( v30 )
    ExFreePoolWithTag(P, 0);
  return v13;
}
