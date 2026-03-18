/*
 * XREFs of EtwpApplyEventNameFilter @ 0x14002CF40
 * Callers:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpEventNameFilterSearch @ 0x14002D200 (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x14002D414 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1400870B4 (EtwpIsEventNameFilterEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // r12
  void **v10; // r14
  unsigned __int8 CurrentIrql; // r15
  char v12; // bl
  __int64 v13; // rax
  unsigned int i; // ecx
  __int64 v15; // rax
  PVOID *v16; // rdx
  unsigned int v17; // ecx
  char *v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  void *v21; // rsp
  void *v22; // rsp
  __int64 v23; // r14
  __int64 v24; // r8
  _BYTE *v25; // r14
  __int64 EventNameFromEventMetadata; // rax
  bool v27; // zf
  char v29; // [rsp+20h] [rbp+0h] BYREF
  char v30; // [rsp+21h] [rbp+1h]
  unsigned __int16 v31; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  unsigned int v33; // [rsp+30h] [rbp+10h]
  void **v34; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v8 = a2;
  P = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  CurrentIrql = 0;
  v30 = 0;
  v12 = 1;
  v29 = 1;
  if ( a5 )
  {
    v13 = 16LL * a3;
    if ( v13 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + a4 > 0x7FFFFFFF0000LL || v13 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  for ( i = 0; ; ++i )
  {
    v33 = i;
    if ( i >= a3 )
      break;
    v15 = 16LL * i;
    v16 = (PVOID *)(v15 + a4);
    if ( *(_BYTE *)(v15 + a4 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v10 = (void **)(v15 + a4);
        v34 = (void **)(v15 + a4);
        P = *v16;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v16;
        v10 = Src;
        v34 = Src;
        v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v17 >= 0xFFFF )
        {
          v12 = 0;
          v29 = 0;
          goto LABEL_44;
        }
        if ( a5 )
        {
          if ( v17 )
          {
            v18 = (char *)Src[0] + v17;
            if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v17 = (unsigned int)Src[1];
            }
          }
        }
        if ( v17 <= 0x100 )
        {
          v19 = v17 + 15LL;
          if ( v19 <= v17 )
            v19 = 0xFFFFFFFFFFFFFF0LL;
          v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
          v21 = alloca(v20);
          v22 = alloca(v20);
          P = &v29;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x74777445u);
          if ( !P )
          {
            v29 = 1;
            goto LABEL_44;
          }
          v30 = 1;
          v17 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v17);
      }
      break;
    }
  }
  if ( v10 && P )
  {
    if ( a6 < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v23 = *(_QWORD *)(a1 + 368);
    if ( v23 )
    {
      v24 = 10 * v8;
      v25 = *(_BYTE **)(v23 + 80 * v8 + 72);
      if ( v25 && (LOBYTE(v24) = a7, (unsigned __int8)EtwpIsEventNameFilterEnabled(a1, (unsigned int)v8, v24, a8)) )
      {
        EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v34 + 2), &v31);
        if ( EventNameFromEventMetadata )
        {
          if ( v31 )
            v27 = *v25 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v31, v25);
          else
            v27 = *v25 == 0;
          v12 = v27;
        }
      }
      else
      {
        v12 = v29;
      }
    }
    if ( a6 < 2u )
      __writecr8(CurrentIrql);
  }
LABEL_44:
  if ( v30 )
    ExFreePoolWithTag(P, 0);
  return v12;
}
