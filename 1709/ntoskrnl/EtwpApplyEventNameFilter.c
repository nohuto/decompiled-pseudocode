/*
 * XREFs of EtwpApplyEventNameFilter @ 0x14028030C
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x1402806E4 (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x140280944 (EtwpGetEventNameFromEventMetadata.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v16; // rax
  PVOID *v17; // rdx
  unsigned int v18; // ecx
  char *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  void *v22; // rsp
  void *v23; // rsp
  __int64 v24; // rsi
  __int64 v25; // rcx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  __int64 EventNameFromEventMetadata; // rax
  bool v31; // zf
  char v33; // [rsp+20h] [rbp+0h] BYREF
  char v34; // [rsp+21h] [rbp+1h]
  unsigned __int16 v35; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v37; // [rsp+30h] [rbp+10h]
  void **v38; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  P = 0LL;
  v11 = 0LL;
  v38 = 0LL;
  CurrentIrql = 0;
  v34 = 0;
  v13 = 1;
  v33 = 1;
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
  v37 = 0;
  while ( v15 < a3 )
  {
    v16 = 16LL * v15;
    v17 = (PVOID *)(v16 + a4);
    if ( *(_BYTE *)(v16 + a4 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v11 = (void **)(v16 + a4);
        v38 = (void **)(v16 + a4);
        P = *v17;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v17;
        v11 = Src;
        v38 = Src;
        v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v18 >= 0xFFFF )
        {
          v13 = 0;
          v33 = 0;
          goto LABEL_59;
        }
        if ( a5 )
        {
          if ( v18 )
          {
            v19 = (char *)Src[0] + v18;
            if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v18 = (unsigned int)Src[1];
            }
          }
        }
        if ( v18 <= 0x100 )
        {
          v20 = v18 + 15LL;
          if ( v20 <= v18 )
            v20 = 0xFFFFFFFFFFFFFF0LL;
          v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = alloca(v21);
          v23 = alloca(v21);
          P = &v33;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x74777445u);
          if ( !P )
          {
            v33 = 1;
            goto LABEL_59;
          }
          v34 = 1;
          v18 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v18);
      }
      break;
    }
    v37 = ++v15;
  }
  if ( v11 && P )
  {
    if ( a6 < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v24 = *(_QWORD *)(a1 + 368);
    if ( v24 )
    {
      v25 = 96 * v9;
      if ( a9 )
        v26 = *(_BYTE **)(v25 + v24 + 48);
      else
        v26 = *(_BYTE **)(v25 + v24 + 88);
      if ( !v26 )
        goto LABEL_58;
      v27 = 0LL;
      v28 = *(_QWORD *)(a1 + 368);
      if ( !v28 )
        goto LABEL_58;
      if ( a9 )
      {
        if ( (*(_DWORD *)(v25 + v28) & 0x80002000) == 0x80002000 )
          v27 = *(_QWORD *)(v25 + v28 + 48);
      }
      else if ( (*(_DWORD *)(v25 + v28) & 0x80000400) == 0x80000400 )
      {
        v27 = *(_QWORD *)(v25 + v28 + 88);
      }
      if ( v27
        && ((v29 = *(_BYTE *)(v27 + 1), a7 <= v29) || !v29)
        && (!a8 || (*(_QWORD *)(v27 + 8) & a8) != 0 && (a8 & *(_QWORD *)(v27 + 16)) == *(_QWORD *)(v27 + 16)) )
      {
        EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v38 + 2), &v35);
        if ( EventNameFromEventMetadata )
        {
          if ( v35 )
            v31 = *v26 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v35, v26);
          else
            v31 = *v26 == 0;
          v13 = v31;
        }
      }
      else
      {
LABEL_58:
        v13 = v33;
      }
    }
    if ( a6 < 2u )
      __writecr8(CurrentIrql);
  }
LABEL_59:
  if ( v34 )
    ExFreePoolWithTag(P, 0);
  return v13;
}
